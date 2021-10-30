// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Pickup.generated.h"

UCLASS()
class BOMBERMAN3D_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup(const FObjectInitializer& ObjectInitializer);

	virtual ~APickup() = default;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Reset() override { Destroy(); };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/**
	* Root component of the Block
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
	USceneComponent* DefaultSceneRoot;
	
	/**
	* Contains the mesh and material of this block
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	URotatingMovementComponent* rotatingMovement;
	
	/**
	* Contains the mesh and material of this block
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* mesh;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
