// Copyright Epic Games, Inc. All Rights Reserved.


#include "BomberMan3DGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

ABomberMan3DGameModeBase::ABomberMan3DGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Characters/BPPlayerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = nullptr;
		//DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan3DGameModeBase::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);

	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("We are using ") + this->GetClass()->GetFName().ToString());

	UWorld* world = this->GetWorld();

	if (world)
	{
		APlayerController *playerController = UGameplayStatics::CreatePlayer(world);
		
		/*playerController->SetName("Player Two");
		playerController->Possess(playerController->GetPawn());

		world->AddController(playerController);*/
	}
}