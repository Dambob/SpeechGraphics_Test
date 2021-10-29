// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockDestructible.h"

// Sets default values
ABlockDestructible::ABlockDestructible(const FObjectInitializer& ObjectInitializer) : ABlock(ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<ABomb> bombBP(TEXT("/Game/Blueprints/BPBomb"));

	if (bombBP.Succeeded())
	{
		bombBPClass = bombBP.Class;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No bomb class found."));
	}
}

float ABlockDestructible::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Damage taken."));

	if (ActualDamage > 0.0f)
	{
		// Spawn powerup
		// ToDo: change from bomb to powerup
		FVector location = this->GetActorLocation();
		ABomb* bomb = (ABomb*)GetWorld()->SpawnActor(bombBPClass, &location);

		// Remove block
		Destroy();
	}

	return ActualDamage;
}


