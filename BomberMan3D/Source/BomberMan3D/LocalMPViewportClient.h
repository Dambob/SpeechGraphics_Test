// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "LocalMPViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API ULocalMPViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
	
	virtual bool InputKey(const FInputKeyEventArgs& EventArgs) override;
};
