// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkManager.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Networking/Public/Interfaces/IPv4/IPv4Address.h"
#include "Engine.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include <codecvt>
#include <string>
#include <vector>
#include <locale>
#include <functional>
#include <Windows.h>
#include <wchar.h>
#include "MessageHandler.h"

// Sets default values
ANetworkManager::ANetworkManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

ANetworkManager::~ANetworkManager()
{
	m_msgHandler = nullptr;
}

bool ANetworkManager::ConnectServer(const FString& add, const int32& po)
{
	m_socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
	if (m_socket == nullptr)return false;

	FString address = add;
	int32 port = po;

	FIPv4Address ip;
	FIPv4Address::Parse(address, ip);

	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetPort(port);

	UE_LOG(LogTemp, Log, TEXT("Trying to connect!"));
	bool res = m_socket->Connect(*addr);

	m_recvThread = new std::thread(&ANetworkManager::RecvMsg, this);

	return res;
}

void ANetworkManager::SendLogin(const FString& name)
{
	FString str = "login ";
	str += name;
	str += "\r\n";
	UE_LOG(LogTemp, Log, TEXT("send login!"));
	SendMsg(str);
}

void ANetworkManager::SendUserList()
{
	FString str = "/us\r\n";
	UE_LOG(LogTemp, Log, TEXT("send user list!"));
	SendMsg(str);
}

void ANetworkManager::SendRoomList()
{
	FString str = "/lt\r\n";
	UE_LOG(LogTemp, Log, TEXT("send room list!"));
	SendMsg(str);
}

void ANetworkManager::SendRoomInfo(const FString& id)
{
	FString str = "/st ";
	str += id;
	str += "\r\n";
	UE_LOG(LogTemp, Log, TEXT("send room info!"));
	SendMsg(str);
}

void ANetworkManager::SendUserInfo(const FString& id)
{
	FString str = "/pf ";
	str += id;
	str += "\r\n";
	UE_LOG(LogTemp, Log, TEXT("send room info!"));
	SendMsg(str);
}

void ANetworkManager::SendJoin(const FString& id)
{
	FString str = "j ";
	str += id;
	str += "\r\n";
	UE_LOG(LogTemp, Log, TEXT("send join! + %s"), *id);
	SendMsg(str);
}

void ANetworkManager::SendQuitRoom()
{
	FString str = "/q \r\n";
	UE_LOG(LogTemp, Log, TEXT("send quit room!"));
	SendMsg(str);
}

void ANetworkManager::SendExit()
{
	FString str = "/x \r\n";
	UE_LOG(LogTemp, Log, TEXT("send exit!"));
	SendMsg(str);
}

void ANetworkManager::SendChat(const FString& command)
{
	FString str = command;
	str += "\r\n";
	UE_LOG(LogTemp, Log, TEXT("send text!"));
	SendMsg(str);
}

void ANetworkManager::SendPrivateChat(const FString& to, const FString& command)
{
	FString str = "/to ";
	str += to;
	str += " ";
	str += command;
	str += "\r\n";
	UE_LOG(LogTemp, Log, TEXT("send text!"));
	SendMsg(str);
}

void ANetworkManager::SendMakeRoom(const FString& name, const FString& max)
{
	FString str = "o ";
	str += max;
	str += " ";
	str += name;
	str += "\r\n";
	UE_LOG(LogTemp, Log, TEXT("send make room!"));
	SendMsg(str);
}


bool ANetworkManager::SendMsg(FString& Msg)
{
	if (m_socket == nullptr)return false;
	check(m_socket);
	int32 BytesSent = 0;

	wchar_t* uni = reinterpret_cast<wchar_t*>((uint8*)(*Msg));
	char* mul;
	int len = WideCharToMultiByte(CP_ACP, 0, uni, -1, NULL, 0, NULL, NULL);
	mul = new CHAR[len];
	WideCharToMultiByte(CP_ACP, 0, uni, -1, mul, len, NULL, NULL);

	return m_socket->Send((uint8*)(mul), len, BytesSent);
}

void ANetworkManager::RecvMsg()
{
	if (m_socket == nullptr)return;
	check(m_socket);
	UE_LOG(LogTemp, Log, TEXT("recv thread start"));

	uint8	Datagram[maxBuffer];
	uint32	DataSize{ 0 };
	while (true)
	{
		int32 BytesRead = 0;
		if (m_socket->Recv(Datagram, maxBuffer-1, BytesRead))
		{
			if (BytesRead != 0)
			{
				char* mul = reinterpret_cast<char*>(Datagram);
				wchar_t* uni;
				int len = MultiByteToWideChar(CP_ACP, 0, mul, strlen(mul) + 1, NULL, NULL);
				uni = new WCHAR[len];
				MultiByteToWideChar(CP_ACP, 0, mul, strlen(mul) + 1, uni, len);

				m_msgQueue.Enqueue(uni);
				memset(Datagram, 0, maxBuffer);
			}
		}
	}
}

// Called when the game starts or when spawned
void ANetworkManager::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("network beginPlay"));
}

// Called every frame
void ANetworkManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!m_msgQueue.IsEmpty())
	{
		FString str = "";
		while (!m_msgQueue.IsEmpty())
		{
			FString tmp = "";
			m_msgQueue.Peek(tmp);
			str += tmp;
			m_msgQueue.Pop();
		}
		m_msgHandler->Process(str);
		str.Reset();
	}
}

