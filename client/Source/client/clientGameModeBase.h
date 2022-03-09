// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "clientGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class CLIENT_API AclientGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "UMG_CHAT")
		void ChangeMenuWeidget(TSubclassOf<UUserWidget> NewWidgetClass);

	UFUNCTION(BlueprintCallable, Category = "UMG_CHAT")
		UUserWidget* GetCurMenuWeidget();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG_CHAT")
		TSubclassOf< UUserWidget> startingWidgtClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UMG_CHAT")
		UUserWidget* CurrentWidget;
};
