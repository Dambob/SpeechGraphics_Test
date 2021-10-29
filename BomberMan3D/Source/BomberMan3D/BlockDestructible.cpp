// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockDestructible.h"

float ABlockDestructible::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Damage taken."));

	if (ActualDamage > 0.0f)
	{
		// Spawn powerup
		// ToDo

		// Remove block
		Destroy();
	}

	return ActualDamage;
}


