// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Networking/Public/Interfaces/IPv4/IPv4Address.h"
#include "NetworkManager.generated.h"

UCLASS()
class CLIENT_API ANetworkManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANetworkManager();

public:
	UFUNCTION(BlueprintCallable, Category = "Network")
		bool ConnectServer(const FString& address, const int32& port);

	UFUNCTION(BlueprintCallable, Category = "Network")
		void SendLogin(const FString& name);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool RecvMsg(FSocket* Socket, uint32 DataSize, FString& Msg);
	bool SendMsg(const FString& Msg);

protected:
	FSocket* m_socket;
};
