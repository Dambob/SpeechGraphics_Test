// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "PlayerCharacter.h"

// Sets default values
APickup::APickup(const FObjectInitializer& ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

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

	// Mesh
	Mesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));
	Mesh->SetRelativeTransform(FTransform
	(
		FRotator(0.0f, 0.0f, 0.0f),
		FVector(0.0f, 0.0f, 0.0f),
		FVector(1.0f, 1.0f, 1.0f)
	)
	);
	Mesh->SetMobility(EComponentMobility::Movable);
	Mesh->AttachToComponent(DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	// Rotator
	RotatingMovement = ObjectInitializer.CreateDefaultSubobject<URotatingMovementComponent>(this, TEXT("Rotator"));

	SetActorEnableCollision(true);

	type = PickupType::None;
	value = 0.0f;
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
	// Add link to overlap event
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &APickup::OnBeginOverlap);
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APickup::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Hit player
	if (APlayerCharacter* character = dynamic_cast<APlayerCharacter*>(OtherActor))
	{
		// Give powerup to player
		character->PowerUp(type, value);

		// Remove pickup
		Destroy();
	}
}
