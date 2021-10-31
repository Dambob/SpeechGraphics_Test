// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BomberMan3DSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API UBomberMan3DSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UBomberMan3DSaveGame();

	UPROPERTY(VisibleAnywhere)
	FString SaveSlotName;

	UPROPERTY(VisibleAnywhere)
	TArray<int> score;	
};
