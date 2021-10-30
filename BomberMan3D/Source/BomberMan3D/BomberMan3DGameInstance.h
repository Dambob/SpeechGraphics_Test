// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BomberMan3DGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API UBomberMan3DGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UBomberMan3DGameInstance();
	virtual ~UBomberMan3DGameInstance() = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> score;	
};
