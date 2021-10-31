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
	virtual void SetScore(int playerID, int newScore);

	/* Return the round time remaining. */
	UFUNCTION(BlueprintPure, Category = "Timer")
	virtual float GetRemainingTime() const;

	/* Return the player bomb count based on ID. */
	UFUNCTION(BlueprintPure, Category = "Player")
	virtual int GetBombCount(int playerID) const;

protected:	
	// Flag to check if game is still running
	bool running;

	// Round timer
	FTimerHandle gameTimerHandle;

	// Time per round
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	float roundTime;	

	// List of players
	TArray<APlayerCharacter*> players;

	APlayerCharacter* GetPlayer(int playerID) const;

	bool SpawnPlayer(int playerID);

	// Start and restart game
	void SetupGame();
	void RestartPlayers();
	void PopulatePlayerList();

	// Win conditions
	void Draw();
	void Win(int playerID);
	TArray<APlayerCharacter*> UpdateLivingPlayers();
	void CheckWinState();
	void TimerEnded();
};
