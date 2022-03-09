// Fill out your copyright notice in the Description page of Project Settings.


#include "MessageHandler.h"
#include "const.h"

// Sets default values
AMessageHandler::AMessageHandler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMessageHandler::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMessageHandler::Process(FString& msg)
{
	UE_LOG(LogTemp, Log, TEXT("프로세스 들어옴 : % s"), *msg);

	TArray<FString> arr;
	msg.ParseIntoArray(arr, TEXT("\r\n"));

	for (int32 ArrayNum = 0; ArrayNum < arr.Num(); ++ArrayNum)
	{

	}

	//this->OnChat();
}

// Called every frame
void AMessageHandler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

