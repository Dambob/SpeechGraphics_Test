// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/Widgets/DMActorWidgetComponent.h"
#include "../Public/Widgets/DMUserWidget.h"

UDMActorWidgetComponent::UDMActorWidgetComponent()
{
	// Set common defaults when using widgets on Actors
	SetDrawAtDesiredSize(true);
	SetWidgetSpace(EWidgetSpace::Screen);
	SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Initialise widget
void UDMActorWidgetComponent::InitWidget()
{
	// Base implementation creates the 'Widget' instance
	Super::InitWidget();

	UUserWidget* widget = GetWidget();

	if (widget)
	{
		// Create widget instance
		UDMUserWidget* widgetInst = Cast<UDMUserWidget>(widget);
		if (widgetInst)
		{
			// Assign the owner, now we have easy access in the widget itself
			widgetInst->SetOwner(GetOwner());
		}
	}
}
