// Fill out your copyright notice in the Description page of Project Settings.


#include "Explosion.h"
#include "PlayerCharacter.h"
#include "Bomb.h"
#include "BlockDestructible.h"

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

	// Smoke
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

	// Add link to overlap event
	collisionBox->OnComponentBeginOverlap.AddDynamic(this, &AExplosion::OnBeginOverlap);
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
	if (hit && sweepResult.bBlockingHit)
	{
		// Reduce range down to not overlap with object
		range = sweepResult.Distance;
	}
}

void AExplosion::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Hit player
	if (APlayerCharacter* character = dynamic_cast<APlayerCharacter*>(OtherActor))
	{
		/// ToDo: Add response logic for hitting player
		//
	}
	// Hit bomb
	else if (ABomb* bomb = dynamic_cast<ABomb*>(OtherActor))
	{
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

	/// ToDo: Add check for powerups
	/*APlayerCharacter* character = dynamic_cast<APlayerCharacter*>(OtherActor);

	// Hit player
	if (character)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Hit character."));
		return;
	}*/
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
