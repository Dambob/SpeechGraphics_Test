// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan3DGameModeBase.generated.h"

// Forward Declarations
class APlayerCharacter;

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API ABomberMan3DGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	ABomberMan3DGameModeBase();

	virtual void StartPlay() override;

public:
	void PlayerDead(APlayerCharacter player);

	virtual void ResetLevel() override;

protected:
	void SpawnPlayerTwo();
};
