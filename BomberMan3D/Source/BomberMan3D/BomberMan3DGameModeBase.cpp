// Copyright Epic Games, Inc. All Rights Reserved.


#include "BomberMan3DGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "PlayerCharacter.h"
#include "BomberMan3DGameStateBase.h"
#include "Explosion.h"
#include <math.h>

ABomberMan3DGameModeBase::ABomberMan3DGameModeBase() :
	running(false),
	roundTime(120.0f)
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
}

void ABomberMan3DGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (running)
	{
		// Check for win state each tick
		CheckWinState();
	}
}

void ABomberMan3DGameModeBase::StartPlay()
{
	Super::StartPlay();

	SetupGame();
}

void ABomberMan3DGameModeBase::PopulatePlayerList()
{
	// Clear players array
	players.Empty();

	// Get all players
	TArray<AActor*> foundPlayers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), DefaultPawnClass, foundPlayers);

	TArray<APlayerCharacter*> livingPlayers;

	for (int i = 0; i < foundPlayers.Num(); i++)
	{
		APlayerCharacter* player = dynamic_cast<APlayerCharacter*>(foundPlayers[i]);

		if (player)
		{
			players.Add(player);
		}
	}
}

APlayerCharacter* ABomberMan3DGameModeBase::GetPlayer(int playerID) const
{
	// Find player ID in list
	for (int i = 0; i < players.Num(); i++)
	{
		if (players[i]->GetID() == playerID)
		{
			return players[i];
		}
	}

	return nullptr;
}

void ABomberMan3DGameModeBase::SetupGame()
{
	SpawnPlayer(0);
	SpawnPlayer(1);

	// Repopulate player list
	PopulatePlayerList();

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

		// Update the data in Instance
		GetGameState<ABomberMan3DGameStateBase>()->UpdateInstance();
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

	// Round for output
	result = roundf(result);

	return result;
}

int ABomberMan3DGameModeBase::GetBombCount(int playerID) const
{
	APlayerCharacter* player = GetPlayer(playerID);

	if (player)
	{
		return player->GetBombCount();
	}

	return -1;
}

bool ABomberMan3DGameModeBase::SpawnPlayer(int playerID)
{
	UWorld* world = this->GetWorld();

	if (world)
	{
		APlayerController* playerController = UGameplayStatics::CreatePlayer(world, playerID);
		
		if (playerController)
		{
			return true;
		}
	}

	return false;
}

TArray<APlayerCharacter*> ABomberMan3DGameModeBase::UpdateLivingPlayers()
{
	TArray<APlayerCharacter*> livingPlayers;

	for (int i = 0; i < players.Num(); i++)
	{
		if (!players[i]->isAlive())
		{
			// Stop movement to player
			players[i]->DisableInput(dynamic_cast<APlayerController*>(players[i]->GetController()));
		}
		else
		{
			// Alive, add to list
			livingPlayers.Add(players[i]);
		}
	}

	return livingPlayers;		
}

void ABomberMan3DGameModeBase::Draw()
{
	GetGameState<ABomberMan3DGameStateBase>()->result = "Draw";
	running = false;
}

void ABomberMan3DGameModeBase::Win(int playerID)
{
	APlayerCharacter* player = GetPlayer(playerID);

	if (!player)
	{
		// No winner?
		// Stop running
		running = false;
	}
	else
	{
		GetGameState<ABomberMan3DGameStateBase>()->result = TEXT("Winner: ") + player->GetName().ToString();
		running = false;

		// Increment winning player's score
		SetScore(player->GetID(), GetScore(player->GetID()) + 1);
	}
}

void ABomberMan3DGameModeBase::CheckWinState()
{
	TArray<APlayerCharacter*> livingPlayers = UpdateLivingPlayers();

	if (livingPlayers.Num() == 0)
	{
		Draw();
	}
	else if (livingPlayers.Num() == 1)
	{
		// 1 player alive, need to see if they'll die "soon"
		// Check for active explosions
		TArray<AActor*> foundExplosions;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AExplosion::StaticClass(), foundExplosions);

		if (foundExplosions.Num() == 0)
		{
			// No explosions, living player wins
			Win(livingPlayers[0]->GetID());
		}
	}
}

void ABomberMan3DGameModeBase::TimerEnded()
{
	Draw();
}

void ABomberMan3DGameModeBase::ResetLevel()
{
	Super::ResetLevel();	

	RestartPlayers();

	SetupGame();
}

void ABomberMan3DGameModeBase::RestartPlayers()
{
	// Loop through each player controller and restart them
	for (FConstPlayerControllerIterator iterator = GetWorld()->GetPlayerControllerIterator(); iterator; iterator++)
	{
		APlayerController* player = iterator->Get();

		if (player)
		{
			RestartPlayer(player);
		}
	}
}