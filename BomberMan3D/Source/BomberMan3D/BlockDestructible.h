// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockDestructible.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API ABlockDestructible : public ABlock
{
	GENERATED_BODY()

public:
	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
};
