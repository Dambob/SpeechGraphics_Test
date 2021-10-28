// Fill out your copyright notice in the Description page of Project Settings.

#include "DMUserWidget.h"

// Set the owning actor of this widget
void UDMUserWidget::SetOwner(AActor* newOwner)
{
	// New owner is the same as the current one
	if (owner == newOwner)
	{
		// Skip repeated calls
		return;
	}

	// Update owner
	owner = newOwner;

	// Trigger event notification
	OnOwningActorChanged.Broadcast(newOwner);
}
