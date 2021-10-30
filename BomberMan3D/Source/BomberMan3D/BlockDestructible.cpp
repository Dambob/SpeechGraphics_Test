// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockDestructible.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ABlockDestructible::ABlockDestructible(const FObjectInitializer& ObjectInitializer) :
	ABlock(ObjectInitializer),
	dropChance(30.0f)
{
	static ConstructorHelpers::FClassFinder<APickup> pickupBP(TEXT("/Game/Blueprints/Pickups/BPPickup"));

	if (pickupBP.Succeeded())
	{
		pickupBPClass = pickupBP.Class;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No pickup class found."));
	}

	if (DefaultSceneRoot)
	{
		DefaultSceneRoot->SetMobility(EComponentMobility::Movable);
	}

	if (BlockMesh)
	{
		BlockMesh->SetMobility(EComponentMobility::Movable);
	}
}

float ABlockDestructible::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (ActualDamage > 0.0f)
	{
		float roll = FMath::FRandRange(0, 100);

		// Spawn a pickup
		if (roll <= dropChance)
		{
			SpawnPowerup();
		}

		// Remove block
		Kill();
	}

	return ActualDamage;
}

void ABlockDestructible::Reset()
{
	// Unhide block
	SetActorEnableCollision(true);
	SetActorHiddenInGame(false);	
}

void ABlockDestructible::Kill()
{
	// Hide block
	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);
}

void ABlockDestructible::SpawnPowerup()
{
	// Spawn powerup
	FVector location = this->GetActorLocation();
	APickup* pickup = (APickup*)GetWorld()->SpawnActor(pickupBPClass, &location);

	int typeRoll = FMath::RandRange(0, 3);

	switch (typeRoll)
	{
		case 0:
			pickup->SetType(PickupType::Range);
			pickup->SetValue(300.0f);
			break;
		case 1:
			pickup->SetType(PickupType::Speed);
			pickup->SetValue(500.0f);
			break;
		case 2:
			pickup->SetType(PickupType::BombCount);
			pickup->SetValue(1.0f);
			break;
		case 3:
			pickup->SetType(PickupType::Remote);
			pickup->SetValue(10.0f);
			break;
		default:
			break;
	}
}