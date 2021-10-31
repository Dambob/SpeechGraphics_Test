// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Public/Actors/Explosion.h"
#include "Bomb.generated.h"

UCLASS()
class BOMBERMAN3D_API ABomb : public AActor
{
	GENERATED_BODY()

		// Event trigged when bomb has exploded
		DECLARE_DYNAMIC_DELEGATE(FBombExploded);
	
public:	
	// Sets default values for this actor's properties
	ABomb();
	virtual ~ABomb() = default;

	FBombExploded OnBombExplosion;

	void Explode();

	virtual void Reset() override { Destroy(); };

	void SetRange(float newRange) { range = newRange; };

	// Set new fuse time
	void SetFuseTime(float newTime) { fuseTime = newTime; };

	// Light the fuse
	void LightFuse();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomb")
	float fuseTime;

	// Timer for fuse
	FTimerHandle fuseTimerHandle;	

	// Reference BP Asset in the Editor
	TSubclassOf<AExplosion> explosionBPClass;

	// Range for explosion
	float range;
};
