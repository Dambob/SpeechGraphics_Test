// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Public/Actors/Block.h"
#include "../Public/Actors/Pickup.h"
#include "BlockDestructible.generated.h"

/**
 * Wall block that can be destroyed by taking damage.
 */
UCLASS()
class BOMBERMAN3D_API ABlockDestructible : public ABlock
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABlockDestructible(const FObjectInitializer& ObjectInitializer);
	virtual ~ABlockDestructible() = default;

	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
protected:
	// Reference BP Assets in the Editor
	UPROPERTY(EditAnywhere, Category = "Pickups", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<APickup>> DropClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups")
	float dropChance;

	void SpawnPowerup();
};
