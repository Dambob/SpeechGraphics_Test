// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

/*
* Standard wall block.
*/
UCLASS()
class BOMBERMAN3D_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock(const FObjectInitializer& ObjectInitializer);

	virtual ~ABlock() = default;

protected:
	// Root component of the Block
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
	USceneComponent* DefaultSceneRoot;

	// Contains the mesh of this block
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* BlockMesh;
};
