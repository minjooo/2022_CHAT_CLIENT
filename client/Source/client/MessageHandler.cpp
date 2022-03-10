// Fill out your copyright notice in the Description page of Project Settings.


#include "MessageHandler.h"
#include "const.h"

// Sets default values
AMessageHandler::AMessageHandler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_lesString = "";
}

// Called when the game starts or when spawned
void AMessageHandler::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMessageHandler::Process(FString& msg)
{
	msg = m_lesString + msg;
	m_lesString.Reset();
	if (msg[msg.Len() - 1] == 127)
	{
		msg.RemoveAt(msg.Len() - 1);
	}

	FString checkPacket = "c";
	msg += checkPacket;

	TArray<FString> arr;
	msg.ParseIntoArray(arr, TEXT("\r\n"));

	//잘려서 들어옴
	if (arr[arr.Num() - 1] != checkPacket)
	{
		m_lesString = arr[arr.Num() - 1];
		arr.RemoveAt(arr.Num() - 1);
		arr.RemoveAt(arr.Num() - 1);
	}
	else
	{
		arr.RemoveAt(arr.Num() - 1);
	}

	for (int32 ArrayNum = 0; ArrayNum < arr.Num(); ++ArrayNum)
	{
		//ignore
		if (arr[ArrayNum] == Message::hi)
		{
			LoginSuccess();
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
		else if (arr[ArrayNum] == Message::help)
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
			TArray<FString> farr;
			int32 tmp = ArrayNum + 1;
			while (arr[tmp] != Message::line)
			{
				farr.Add(arr[tmp]);
				++tmp;
				if (tmp + 1 == arr.Num())break;
			}
			ArrayNum = tmp;
			UserList(farr);
		}
		else if (arr[ArrayNum] == Message::roomList)
		{
			TArray<FString> farr;
			int32 tmp = ArrayNum + 1;
			while (arr[tmp] != Message::line)
			{
				farr.Add(arr[tmp]);
				++tmp;
				if (tmp + 1 == arr.Num())break;
			}
			ArrayNum = tmp;
			RoomList(farr);
		}
		else if (arr[ArrayNum] == Message::alreadyExistName)
		{
			LoginFail();
		}
		//main chatbox
		else
		{
			OnChat(arr[ArrayNum]);
		}
	}

}

// Called every frame
void AMessageHandler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

