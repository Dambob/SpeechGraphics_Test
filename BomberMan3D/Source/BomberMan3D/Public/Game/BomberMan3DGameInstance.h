// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BomberMan3DGameInstance.generated.h"

/**
 * Holds game state information for entire play session. Handles saving/loading state to/from disk.
 */
UCLASS()
class BOMBERMAN3D_API UBomberMan3DGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UBomberMan3DGameInstance();
	virtual ~UBomberMan3DGameInstance() = default;

	FString saveSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> score;

	// Reset game instance to start a new game
	UFUNCTION(BlueprintCallable)
	virtual void Reset();

	// Save game
	UFUNCTION(BlueprintCallable)
	virtual bool Save();

	// Load Game
	UFUNCTION(BlueprintCallable)
	virtual bool Load();
};
