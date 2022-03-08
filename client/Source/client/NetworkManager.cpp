// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkManager.h"

// Sets default values
ANetworkManager::ANetworkManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool ANetworkManager::ConnectServer(const FString& add, const int32& po)
{
	m_socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);

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
	FString str = "us\r\n";
	UE_LOG(LogTemp, Log, TEXT("send user list!"));
	SendMsg(str);
}

void ANetworkManager::SendRoomList()
{
	FString str = "lt\r\n";
	UE_LOG(LogTemp, Log, TEXT("send room list!"));
	SendMsg(str);
}

void ANetworkManager::SendRoomInfo(const FString& id)
{
	FString str = "st ";
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
	UE_LOG(LogTemp, Log, TEXT("send join!"));
	SendMsg(str);
}

bool ANetworkManager::SendMsg(const FString& Msg)
{
	check(m_socket);
	int32 BytesSent = 0;
	return m_socket->Send((uint8*)TCHAR_TO_UTF8(*Msg), Msg.Len(), BytesSent);
}

void ANetworkManager::RecvMsg()
{
	check(m_socket);
	UE_LOG(LogTemp, Log, TEXT("recv thread start"));

	uint8	Datagram[maxBuffer];
	uint32	DataSize{ 0 };
	while (true)
	{
		int32 BytesRead = 0;
		if (m_socket->Recv(Datagram, maxBuffer, BytesRead))
		{
			Datagram[BytesRead] = '\0';
			UE_LOG(LogTemp, Log, TEXT("recv: %s"), Datagram);
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

}

