// Copyright Epic Games, Inc. All Rights Reserved.


#include "BomberMan3DGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "PlayerCharacter.h"
#include "BomberMan3DGameStateBase.h"
#include "Explosion.h"
#include <math.h>

ABomberMan3DGameModeBase::ABomberMan3DGameModeBase()
{
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;

	// Set game state class to our Blueprinted state
	static ConstructorHelpers::FClassFinder<ABomberMan3DGameStateBase> gameStateBPClass(TEXT("/Game/Blueprints/GameModes/BPBomberMan3DGameStateBase"));
	if (gameStateBPClass.Class != nullptr)
	{
		GameStateClass = gameStateBPClass.Class;
	}

	// Set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Characters/BPPlayerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	roundTime = 120.0f;
}

void ABomberMan3DGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (running)
	{
		CheckPlayers();
	}
}

void ABomberMan3DGameModeBase::StartPlay()
{
	Super::StartPlay();

	SpawnPlayerTwo();

	running = true;

	UWorld* world = this->GetWorld();

	if (world)
	{
		world->GetTimerManager().SetTimer(gameTimerHandle, this, &ABomberMan3DGameModeBase::TimerEnded, roundTime, false);
	}
}

int ABomberMan3DGameModeBase::GetScore(int playerID) const
{
	int score = -1;

	TArray<int> scores = GetGameState<ABomberMan3DGameStateBase>()->score;

	if (scores.Num() >= playerID)
	{
		score = scores[playerID];
	}

	return score;
}

void ABomberMan3DGameModeBase::SetScore(int playerID, int newScore)
{
	TArray<int> scores = GetGameState<ABomberMan3DGameStateBase>()->score;

	if (scores.Num() >= playerID)
	{
		GetGameState<ABomberMan3DGameStateBase>()->score[playerID] = newScore;
	}
}

float ABomberMan3DGameModeBase::GetRemainingTime() const
{
	float result = 0.0f;
	UWorld* world = this->GetWorld();

	if (world)
	{
		result = world->GetTimerManager().GetTimerRemaining(gameTimerHandle);

		// Cap result
		if (result < 0.0f)
		{
			result = 0.0f;
		}
	}

	// Round to 2DF for output
	result = roundf(result);

	return result;
}

void ABomberMan3DGameModeBase::SpawnPlayerTwo()
{
	UWorld* world = this->GetWorld();

	if (world)
	{
		APlayerController* playerController = UGameplayStatics::CreatePlayer(world);
	}
}

void ABomberMan3DGameModeBase::CheckPlayers()
{
	// ToDo: Check which players are alive

	// Get all players
	TArray<AActor*> foundPlayers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), DefaultPawnClass, foundPlayers);

	TArray<APlayerCharacter*> livingPlayers;

	for (int i = 0; i < foundPlayers.Num(); i++)
	{
		APlayerCharacter* player = dynamic_cast<APlayerCharacter*>(foundPlayers[i]);

		if (!player->isAlive())
		{
			// Stop movement to player
			player->DisableInput(dynamic_cast<APlayerController*>(player->GetController()));
		}
		else
		{
			livingPlayers.Add(player);
		}
	}

	if (livingPlayers.Num() == 0)
	{
		// Draw
		// Get game state
		GetGameState<ABomberMan3DGameStateBase>()->result = "Draw";
		running = false;
	}
	else if (livingPlayers.Num() == 1)
	{
		// 1 player alive, need to see if they'll die "soon"

		// Check for active explosions
		// Get all explosions
		TArray<AActor*> foundExplosions;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AExplosion::StaticClass(), foundExplosions);

		if (foundExplosions.Num() == 0)
		{
			// No explosions, living player wins
			// Increase score of living player in game state
			//livingPlayers[0];

			// Get game state
			//GetGameState<ABomberMan3DGameStateBase>();

			GetGameState<ABomberMan3DGameStateBase>()->result = TEXT("Winner: ") + livingPlayers[0]->GetName().ToString();
			running = false;

			// Increment living player's score
			SetScore(livingPlayers[0]->GetID(), GetScore(livingPlayers[0]->GetID())+1);
		}
	}	
}

void ABomberMan3DGameModeBase::TimerEnded()
{
	// Draw
	// Get game state
	GetGameState<ABomberMan3DGameStateBase>()->result = "Draw";
	running = false;
}

void ABomberMan3DGameModeBase::ResetLevel()
{
	Super::ResetLevel();

	

	// Loop through each player controller and restart them
	for (FConstPlayerControllerIterator iterator = GetWorld()->GetPlayerControllerIterator(); iterator; iterator++)
	{
		APlayerController* player = iterator->Get();

		if (player)
		{
			RestartPlayer(player);
		}
	}

	// Reset game state
	GetGameState<ABomberMan3DGameStateBase>()->result = "None";
	running = true;

	// Reset the timer
	UWorld* world = this->GetWorld();

	if (world)
	{
		// Clear any existing timer
		world->GetTimerManager().ClearTimer(gameTimerHandle);

		// Set timer
		world->GetTimerManager().SetTimer(gameTimerHandle, this, &ABomberMan3DGameModeBase::TimerEnded, roundTime, false);
	}
}