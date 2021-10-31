// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/Actors/Block.h"

// Sets default values
ABlock::ABlock(const FObjectInitializer& ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

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

	//Mesh
	BlockMesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("BlockMesh"));

	if (BlockMesh)
	{
		BlockMesh->SetRelativeTransform(FTransform
		(
			FRotator(0.0f, 0.0f, 0.0f),
			FVector(0.0f, 0.0f, 0.0f),
			FVector(1.0f, 1.0f, 1.0f)
		)
		);
		BlockMesh->SetMobility(EComponentMobility::Static);
		BlockMesh->AttachToComponent(DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);
	}

	SetActorEnableCollision(true);
}

