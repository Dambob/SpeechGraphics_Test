// Fill out your copyright notice in the Description page of Project Settings.


#include "LocalMPViewportClient.h"

bool ULocalMPViewportClient::InputKey(const FInputKeyEventArgs& EventArgs)
{
	if (IgnoreInput() || EventArgs.IsGamepad() || EventArgs.Key.IsMouseButton())
	{
		return Super::InputKey(EventArgs);
	}
	else
	{
		// Propagate keyboard events to all players
		UEngine* const Engine = GetOuterUEngine();
		int32 const NumPlayers = Engine ? Engine->GetNumGamePlayers(this) : 0;
		bool bRetVal = false;

		for (int32 i = 0; i < NumPlayers; i++)
		{
			// Copy event and increment controller ID
			FInputKeyEventArgs EventArg = EventArgs;
			EventArg.ControllerId = i;

			bRetVal = Super::InputKey(EventArg) || bRetVal;
		}

		return bRetVal;
	}
}