// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "Pickup.h"
#include "BlockDestructible.generated.h"

/**
 * 
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

	virtual void Reset() override;
	
protected:
	// Reference BP Asset in the Editor
	TSubclassOf<APickup> pickupBPClass;

	void Kill();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups")
	float dropChance;

	void SpawnPowerup();
};
