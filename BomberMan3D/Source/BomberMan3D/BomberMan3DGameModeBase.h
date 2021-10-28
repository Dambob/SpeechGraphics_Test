// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan3DGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API ABomberMan3DGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
};
