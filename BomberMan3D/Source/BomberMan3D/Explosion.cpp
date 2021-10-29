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
		DefaultSceneRoot->SetMobility(EComponentMobility::Static);
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
	collisionBox->SetMobility(EComponentMobility::Static);
	collisionBox->AttachToComponent(DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	SetActorEnableCollision(true);
}

// Called when the game starts or when spawned
void AExplosion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExplosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

