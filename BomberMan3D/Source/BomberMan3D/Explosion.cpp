// Fill out your copyright notice in the Description page of Project Settings.


#include "Explosion.h"

// Sets default values
AExplosion::AExplosion(const FObjectInitializer& ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create default root, that is stationary
	DefaultSceneRoot = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("DefaultSceneRoot"));

	if (DefaultSceneRoot)
	{
		DefaultSceneRoot->SetMobility(EComponentMobility::Movable);
	}

	// If root component missing, use Default
	if (!RootComponent && DefaultSceneRoot)
	{
		RootComponent = DefaultSceneRoot;
	}

	// Collision
	collisionBox = ObjectInitializer.CreateDefaultSubobject<UBoxComponent>(this, TEXT("CollisionBox"));
	collisionBox->InitBoxExtent(FVector(20.0f, 20.0f, 20.0f));
	collisionBox->SetRelativeTransform(FTransform
	(
		FRotator(0.0f, 0.0f, 0.0f),
		FVector(0.0f, 0.0f, 0.0f),
		FVector(1.0f, 1.0f, 1.0f)
	)
	);
	collisionBox->SetMobility(EComponentMobility::Movable);
	collisionBox->AttachToComponent(DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	// Collision
	smokeFX = ObjectInitializer.CreateDefaultSubobject<UNiagaraComponent>(this, TEXT("Effect"));
	smokeFX->AttachToComponent(DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	SetActorEnableCollision(true);

	speed = 30.0f;
	range = 400.0f;
	distanceMoved = 0.0f;
}

// Called when the game starts or when spawned
void AExplosion::BeginPlay()
{
	Super::BeginPlay();
	
	CheckCollisions();
}

void AExplosion::CheckCollisions()
{
	FVector startLocation = GetActorLocation();
	FVector forward = GetActorForwardVector();
	FVector endLocation = startLocation + (forward * range);

	FCollisionShape collider = collisionBox->GetCollisionShape();
	FHitResult sweepResult;

	// Check if path is clear
	bool hit = GetWorld()->SweepSingleByChannel(sweepResult, startLocation, endLocation, FQuat::Identity, ECC_Visibility, collider);

	// Something in the way
	if (hit)
	{
		// Reduce range down to not overlap with object
		range = sweepResult.Distance;
	}
}

// Called every frame
void AExplosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	Move(DeltaTime);
}

void AExplosion::Move(float DeltaTime)
{
	FVector forward = GetActorForwardVector();

	float distance = DeltaTime * speed;

	if (distanceMoved + distance <= range)
	{
		distanceMoved += distance;
		forward *= distance;

		AddActorWorldOffset(forward);
	}
	else
	{
		// Reached end of path
		Destroy();
	}
}
