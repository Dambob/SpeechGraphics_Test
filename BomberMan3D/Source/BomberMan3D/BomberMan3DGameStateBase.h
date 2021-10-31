// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BomberMan3DGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API ABomberMan3DGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	ABomberMan3DGameStateBase();
	virtual ~ABomberMan3DGameStateBase() = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> score;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString result;

	virtual void UpdateInstance();

protected:
	virtual void HandleBeginPlay() override;
};
