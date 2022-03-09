// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MessageHandler.generated.h"

UCLASS()
class CLIENT_API AMessageHandler : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMessageHandler();

public:
	void Process(FString& msg);

public:
	UFUNCTION(BlueprintImplementableEvent)
		void OnChat();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
