// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/Actors/BlockDestructible.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ABlockDestructible::ABlockDestructible(const FObjectInitializer& ObjectInitializer) :
	ABlock(ObjectInitializer),
	dropChance(30.0f)
{
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
		Destroy();
	}

	return ActualDamage;
}

void ABlockDestructible::SpawnPowerup()
{
	if (DropClasses.Num() == 0)
	{
		// No drops set
		return;
	}

	// Pick powerup
	int typeRoll = FMath::RandRange(0, DropClasses.Num() - 1);

	// Spawn powerup
	FVector location = this->GetActorLocation();
	APickup* pickup = (APickup*)GetWorld()->SpawnActor(DropClasses[typeRoll], &location);
}