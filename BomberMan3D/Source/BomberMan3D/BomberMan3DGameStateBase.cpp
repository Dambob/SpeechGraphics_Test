// Fill out your copyright notice in the Description page of Project Settings.


#include "BomberMan3DGameStateBase.h"
#include "BomberMan3DGameInstance.h"

ABomberMan3DGameStateBase::ABomberMan3DGameStateBase() :
	score({ 0,0 }),
	result("None")
{

}

void ABomberMan3DGameStateBase::HandleBeginPlay()
{
	Super::HandleBeginPlay();

	UBomberMan3DGameInstance* instance = dynamic_cast<UBomberMan3DGameInstance*>(GetGameInstance());

	if (instance)
	{
		// Save score in instance
		score = instance->score;
	}
}

void ABomberMan3DGameStateBase::HandleLeavingMap()
{
	UBomberMan3DGameInstance* instance = dynamic_cast<UBomberMan3DGameInstance*>(GetGameInstance());

	if (instance)
	{
		// Save score in instance
		instance->score = score;
	}
}