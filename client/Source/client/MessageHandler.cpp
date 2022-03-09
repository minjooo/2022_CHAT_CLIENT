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
	//UE_LOG(LogTemp, Log, TEXT("프로세스 들어옴 : % s"), *msg);

	TArray<FString> arr;
	msg.ParseIntoArray(arr, TEXT("\r\n"));

	for (int32 ArrayNum = 0; ArrayNum < arr.Num(); ++ArrayNum)
	{
		//ignore
		if (arr[ArrayNum] == Message::help)
		{
			if (ArrayNum + 4 > arr.Num())
				break;
			else
				ArrayNum += 3;
		}
		else if (arr[ArrayNum] == Message::bye)
		{
			if (ArrayNum + 4 > arr.Num())
				break;
			else
				ArrayNum += 3;
		}
		else if (arr[ArrayNum] == Message::hi)
		{
			if (ArrayNum + 11 > arr.Num())
				break;
			else
				ArrayNum += 10;
		}
		else if (arr[ArrayNum] == Message::basic)
		{
		}
		else if (arr[ArrayNum] == Message::login)
		{
		}
		//not main menu
		else if (arr[ArrayNum] == Message::userList)
		{
			UserList();
		}
		else if (arr[ArrayNum] == Message::roomList)
		{
			RoomList();
		}
		else if (arr[ArrayNum] == Message::alreadyExistName)
		{
			LoginFail();
		}
		//main chatbox
		else
		{
			UE_LOG(LogTemp, Log, TEXT("채팅창에 쓰고싶다"));
			OnChat(arr[ArrayNum]);
		}
	}

}

// Called every frame
void AMessageHandler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
