// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Pickup.generated.h"

/*
* Types of pickup
*/
UENUM()
enum PickupType
{
	None UMETA(DisplayName = "None"),
	Range UMETA(DisplayName = "Range"),
	Speed UMETA(DisplayName = "Speed"),
	BombCount UMETA(DisplayName = "Bomb Count"),
	Remote UMETA(DisplayName = "Remote")
};


/*
* Objects that can be picked up by players walking into them.
*/
UCLASS()
class BOMBERMAN3D_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup(const FObjectInitializer& ObjectInitializer);
	virtual ~APickup() = default;

	virtual void Reset() override { Destroy(); };

	void SetType(PickupType newType) { type = newType; };

	void SetValue(float newValue) { value = newValue; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Root component of the Pickup
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
	USceneComponent* DefaultSceneRoot;
	
	// Contains the rotator
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	URotatingMovementComponent* RotatingMovement;
	
	// Contains the mesh of this pickup
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* Mesh;

	// Called when object collides with pickup
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Contains the type of pickup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	TEnumAsByte<PickupType> type;

	// Contains the value of pickup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	float value;
};
