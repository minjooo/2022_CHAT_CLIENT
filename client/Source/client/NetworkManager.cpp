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
	return m_socket->Connect(*addr);
}

void ANetworkManager::SendLogin(const FString& name)
{
	FString str = "login ";
	str += name;
	str += "\r\n";
	UE_LOG(LogTemp, Log, TEXT("send login!"));
	SendMsg(str);
}

bool ANetworkManager::SendMsg(const FString& Msg)
{
	check(m_socket);
	int32 BytesSent = 0;
	return m_socket->Send((uint8*)TCHAR_TO_UTF8(*Msg), Msg.Len(), BytesSent);
}

bool ANetworkManager::RecvMsg(FSocket* Socket, uint32 DataSize, FString& Msg)
{
	check(Socket);

	//FArrayReaderPtr Datagram = MakeShareable(new FArrayReader(true));
	//Datagram->Init(FMath::Min(DataSize, 65507u));
	//
	//int32 BytesRead = 0;
	//if (Socket->Recv(Datagram->GetData(), Datagram->Num(), BytesRead))
	//{
	//	char* Data = (char*)Datagram->GetData();
	//	Data[BytesRead] = '\0';
	//	Msg = UTF8_TO_TCHAR(Data);
	//	return true;
	//}
	return false;
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

