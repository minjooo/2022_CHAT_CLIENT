// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <thread>
#include <string>
#include <vector>
#include <locale>
#include <functional>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Networking/Public/Interfaces/IPv4/IPv4Address.h"
#include "NetworkManager.generated.h"

constexpr int32	maxBuffer = 1024;
/*
std::wstring MbsToWcs(std::string const& str, std::locale const& loc = std::locale())
{
	typedef std::codecvt<wchar_t, char, std::mbstate_t> codecvt_t;
	codecvt_t const& codecvt = std::use_facet<codecvt_t>(loc);
	std::mbstate_t state{ 0 };
	std::vector<wchar_t> buf(str.size() + 1);
	char const* in_next = str.c_str();
	wchar_t* out_next = &buf[0];
	codecvt_t::result r = codecvt.in(state, 
		str.c_str(), str.c_str() + str.size(), in_next, 
		&buf[0], &buf[0] + buf.size(), out_next);
	return std::wstring(&buf[0]);
}

std::string WcsToMbs(std::wstring const& str, std::locale const& loc = std::locale())
{
	typedef std::codecvt<wchar_t, char, std::mbstate_t> codecvt_t;
	codecvt_t const& codecvt = std::use_facet<codecvt_t>(loc);
	std::mbstate_t state{ 0 };
	std::vector<char> buf((str.size() + 1) * codecvt.max_length());
	wchar_t const* in_next = str.c_str();
	char* out_next = &buf[0];
	codecvt_t::result r = codecvt.out(state,
		str.c_str(), str.c_str() + str.size(),in_next, 
		&buf[0], &buf[0] + buf.size(), out_next);
	return std::string(&buf[0]);
}
*/


UCLASS()
class CLIENT_API ANetworkManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANetworkManager();
	~ANetworkManager();

public:
	std::wstring MbsToWcs( std::string const& str, std::locale const& loc );
	std::string WcsToMbs( std::wstring const& str, std::locale const& loc );


public:
	UFUNCTION(BlueprintCallable, Category = "Network")
		bool ConnectServer(const FString& address, const int32& port);

	UFUNCTION(BlueprintCallable, Category = "Network")
		void SendLogin(const FString& name);

	UFUNCTION(BlueprintCallable, Category = "Network")
		void SendUserList();

	UFUNCTION(BlueprintCallable, Category = "Network")
		void SendRoomList();

	UFUNCTION(BlueprintCallable, Category = "Network")
		void SendRoomInfo(const FString& id);

	UFUNCTION(BlueprintCallable, Category = "Network")
		void SendJoin(const FString& id);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void RecvMsg();
	bool SendMsg(FString& Msg);

	void StringHandler();

protected:
	FSocket*			m_socket;
	TQueue<FString>		m_msgQueue;
	std::thread*		m_recvThread;
};
