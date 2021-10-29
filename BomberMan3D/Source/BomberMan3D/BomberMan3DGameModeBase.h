// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan3DGameModeBase.generated.h"

// Forward Declarations
class APlayerCharacter;

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API ABomberMan3DGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan3DGameModeBase();

	virtual ~ABomberMan3DGameModeBase() = default;

	virtual void StartPlay() override;

	virtual void ResetLevel() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* Return the player score based on ID. */
	UFUNCTION(BlueprintPure, Category = "Score")
	virtual int GetScore(int playerID) const;

	/* Set the player score based on ID. */
	UFUNCTION(BlueprintCallable, Category = "Score")
	virtual void SetScore(int playerID, int newScore) const;

protected:
	void SpawnPlayerTwo();

	void CheckPlayers();
};
