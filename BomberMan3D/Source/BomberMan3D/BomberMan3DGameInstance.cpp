// Fill out your copyright notice in the Description page of Project Settings.


#include "BomberMan3DGameInstance.h"
#include "BomberMan3DSaveGame.h"
#include "Kismet/GameplayStatics.h"

UBomberMan3DGameInstance::UBomberMan3DGameInstance() :
	saveSlotName("SaveSlotA"),
	score({ 0,0 })
{

}

void UBomberMan3DGameInstance::Reset()
{
	score = { 0,0 };
}

bool UBomberMan3DGameInstance::Save()
{
	if (UBomberMan3DSaveGame* SaveGameInstance = Cast<UBomberMan3DSaveGame>(UGameplayStatics::CreateSaveGameObject(UBomberMan3DSaveGame::StaticClass())))
	{
		// Set data on the savegame object.
		SaveGameInstance->score = score;

		// Save the data immediately.
		if (UGameplayStatics::SaveGameToSlot(SaveGameInstance, saveSlotName, 0))
		{
			// Save succeeded.
			return true;
		}
	}

	return false;
}

bool UBomberMan3DGameInstance::Load()
{
	if (UBomberMan3DSaveGame* LoadedGame = Cast<UBomberMan3DSaveGame>(UGameplayStatics::LoadGameFromSlot(saveSlotName, 0)))
	{
		// Set data on the savegame object.
		score = LoadedGame->score;
		
		// Load succeeded.
		return true;
	}

	return false;
}
