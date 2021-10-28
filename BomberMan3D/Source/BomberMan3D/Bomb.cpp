// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomb.h"

// Sets default values
ABomb::ABomb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	fuseTime = 3;
}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();
	
	// Start timer for fuse
	GetWorldTimerManager().SetTimer(fuseTimerHandle, this, &ABomb::Explode, fuseTime, false);
}

// Called every frame
void ABomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABomb::Explode()
{
	// ToDo:
	//Add in explosion mechanics here

	// Broadcast delegate
	OnBombExplosion.Execute();

	// Remove timer
	GetWorldTimerManager().ClearTimer(fuseTimerHandle);

	// Remove bomb
	Destroy();
}