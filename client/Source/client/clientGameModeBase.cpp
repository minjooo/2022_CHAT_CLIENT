// Copyright Epic Games, Inc. All Rights Reserved.


#include "clientGameModeBase.h"
#include <Blueprint/UserWidget.h>

void AclientGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	ChangeMenuWeidget(startingWidgtClass);
}

void AclientGameModeBase::ChangeMenuWeidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}

	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}
