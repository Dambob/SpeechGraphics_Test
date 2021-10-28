// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomb.generated.h"

UCLASS()
class BOMBERMAN3D_API ABomb : public AActor
{
	GENERATED_BODY()

		DECLARE_DYNAMIC_DELEGATE(FBombExploded);
	
public:	
	// Sets default values for this actor's properties
	ABomb();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FBombExploded OnBombExplosion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomb")
	float fuseTime;

	// Timer for fuse
	FTimerHandle fuseTimerHandle;	

	void Explode();
};