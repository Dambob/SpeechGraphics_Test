// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
//#include "Niagara/Public/NiagaraComponent.h"
#include "NiagaraComponent.h"
#include "Explosion.generated.h"

UCLASS()
class BOMBERMAN3D_API AExplosion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosion(const FObjectInitializer& ObjectInitializer);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual bool SetRotation(FRotator NewRotation);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/**
	* Root component of the Block
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
	USceneComponent* DefaultSceneRoot;

	/**
	* Contains the collision of this block
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* collisionBox;

	/**
	* Contains the effect
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UNiagaraComponent* smokeFX;

	UPROPERTY(EditAnywhere, Category = "Explosion")
	float speed;

	UPROPERTY(EditAnywhere, Category = "Explosion")
	float range;

	float distanceMoved;

	void Move(float DeltaTime);

	void CheckCollisions();

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
