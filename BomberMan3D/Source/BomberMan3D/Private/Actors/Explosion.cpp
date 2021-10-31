// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/Actors/Explosion.h"
#include "../Public/Players/PlayerCharacter.h"
#include "../Public/Actors/Bomb.h"
#include "../Public/Actors/BlockDestructible.h"
#include "../Public/Actors/Pickup.h"

// Sets default values
AExplosion::AExplosion(const FObjectInitializer& ObjectInitializer) :
	Speed(30.0f),
	Range(400.0f),
	distanceMoved(0.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create default root, that is stationary
	DefaultSceneRoot = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("DefaultSceneRoot"));

	if (DefaultSceneRoot)
	{
		DefaultSceneRoot->SetMobility(EComponentMobility::Movable);

		// If root component missing, use Default
		if (!RootComponent)
		{
			RootComponent = DefaultSceneRoot;
		}
	}

	// Collision
	CollisionBox = ObjectInitializer.CreateDefaultSubobject<UBoxComponent>(this, TEXT("CollisionBox"));
	if (CollisionBox)
	{
		CollisionBox->InitBoxExtent(FVector(20.0f, 20.0f, 100.0f));
		CollisionBox->SetRelativeTransform(FTransform
		(
			FRotator(0.0f, 0.0f, 0.0f),
			FVector(0.0f, 0.0f, 0.0f),
			FVector(1.0f, 1.0f, 1.0f)
		)
		);
		CollisionBox->SetMobility(EComponentMobility::Movable);
		CollisionBox->AttachToComponent(DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);
	}

	// Smoke
	SmokeFX = ObjectInitializer.CreateDefaultSubobject<UNiagaraComponent>(this, TEXT("Effect"));
	if (SmokeFX)
	{
		SmokeFX->AttachToComponent(DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);
	}

	SetActorEnableCollision(true);	
}

// Called when the game starts or when spawned
void AExplosion::BeginPlay()
{
	Super::BeginPlay();

	// Add link to overlap event
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AExplosion::OnBeginOverlap);
}

void AExplosion::CheckCollisions()
{
	FVector startLocation = GetActorLocation();
	FVector forward = GetActorForwardVector();
	FVector endLocation = startLocation + (forward * Range);

	FCollisionShape collider = CollisionBox->GetCollisionShape();
	FHitResult sweepResult;

	// Check if path is clear
	bool hit = GetWorld()->SweepSingleByChannel(sweepResult, startLocation, endLocation, FQuat::Identity, ECC_Visibility, collider);

	// Something in the way
	if (hit && sweepResult.bBlockingHit)
	{
		// Reduce Range down to not overlap with object
		Range = sweepResult.Distance;
	}
}

void AExplosion::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Hit player
	if (APlayerCharacter* character = dynamic_cast<APlayerCharacter*>(OtherActor))
	{
		// Kill chracter
		character->Kill();
	}
	// Hit bomb
	else if (ABomb* bomb = dynamic_cast<ABomb*>(OtherActor))
	{
		// Explode the bomb
		bomb->Explode();
	}
	// Hit destructible
	else if (ABlockDestructible* blockDestructible = dynamic_cast<ABlockDestructible*>(OtherActor))
	{
		// Apply damage to block
		blockDestructible->TakeDamage(1, FDamageEvent(),  nullptr, this);

		// Block will stop explosion.
		Destroy();
	}
	// Hit destructible
	else if (APickup* pickup = dynamic_cast<APickup*>(OtherActor))
	{
		// Destroy pickup
		pickup->Destroy();
	}
}

// Called every frame
void AExplosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	Move(DeltaTime);
}

bool AExplosion::SetRotation(FRotator NewRotation)
{
	bool result = Super::SetActorRotation(NewRotation);

	// Update collisions based on new rotation
	CheckCollisions();

	return result;
}

void AExplosion::Move(float DeltaTime)
{
	FVector forward = GetActorForwardVector();

	// Distance to move this frame
	float distance = DeltaTime * Speed;

	// Distance wtihin range
	if (distanceMoved + distance <= Range)
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
