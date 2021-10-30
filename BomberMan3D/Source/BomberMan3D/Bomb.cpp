// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomb.h"

// Sets default values
ABomb::ABomb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	fuseTime = 3.0f;

	static ConstructorHelpers::FClassFinder<AExplosion> explosionBP(TEXT("/Game/Blueprints/BPExplosion"));

	if (explosionBP.Succeeded())
	{
		explosionBPClass = explosionBP.Class;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No explosion class found."));
	}

	SetActorEnableCollision(true);

	range = 200.0f;
}

void ABomb::LightFuse()
{
	// Start timer for fuse
	GetWorldTimerManager().SetTimer(fuseTimerHandle, this, &ABomb::Explode, fuseTime, false);
}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ABomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABomb::Explode()
{
	SetActorEnableCollision(false);

	//Add in explosion mechanics here
	FVector location = GetActorLocation();
	float rotation = 90.0f;

	// Spawn 4 explosions
	for (int i = 0; i < 4; i++)
	{
		AExplosion* explosion = (AExplosion*)GetWorld()->SpawnActor(explosionBPClass, &location);

		if (explosion)
		{
			// Set explosion range
			explosion->SetRange(range);

			// Rotate each explosion 90 degrees to cover each direction
			explosion->SetRotation(FRotator(0.0f, rotation*i, 0.0f));
		}

		explosion = nullptr;
	}

	// Broadcast delegate
	OnBombExplosion.ExecuteIfBound();

	// Remove timer
	GetWorldTimerManager().ClearTimer(fuseTimerHandle);

	// Remove bomb
	Destroy();
}