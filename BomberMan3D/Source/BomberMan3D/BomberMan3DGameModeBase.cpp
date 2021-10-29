// Copyright Epic Games, Inc. All Rights Reserved.


#include "BomberMan3DGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "PlayerCharacter.h"
#include "BomberMan3DGameStateBase.h"

ABomberMan3DGameModeBase::ABomberMan3DGameModeBase()
{
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

	CheckPlayers();
}

void ABomberMan3DGameModeBase::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);

	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("We are using ") + this->GetClass()->GetFName().ToString());

	SpawnPlayerTwo();
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

void ABomberMan3DGameModeBase::SetScore(int playerID, int newScore) const
{
	int score = -1;

	TArray<int> scores = GetGameState<ABomberMan3DGameStateBase>()->score;

	if (scores.Num() >= playerID)
	{
		scores[playerID] = score;
	}
}

void ABomberMan3DGameModeBase::SpawnPlayerTwo()
{
	UWorld* world = this->GetWorld();

	if (world)
	{
		APlayerController* playerController = UGameplayStatics::CreatePlayer(world);

		/*playerController->SetName("Player Two");
		playerController->Possess(playerController->GetPawn());

		world->AddController(playerController);*/
	}
}

void ABomberMan3DGameModeBase::CheckPlayers()
{
	// ToDo: Check which players are alive

	// Get game state
	GetGameState<ABomberMan3DGameStateBase>();
}

void ABomberMan3DGameModeBase::ResetLevel()
{
	Super::ResetLevel();

	APlayerController* player = GetWorld()->GetFirstPlayerController();

	RestartPlayer(player);
	SpawnPlayerTwo();
}