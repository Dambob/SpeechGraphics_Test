// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "DMActorWidgetComponent.generated.h"

/*
	Extension of the WidgetComponent to make it easy to have owning Actor context to the Widget. Commonly used to display health bars, names, and interaction panels above Actors.
	Automatically calls SetOwningActor on the widget if the correct type of widget is used (ActorAttachWidget)
*/
UCLASS(ClassGroup = (DM), meta = (BlueprintSpawnableComponent))
class BOMBERMAN3D_API UDMActorWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()
public:
	UDMActorWidgetComponent();
	virtual ~UDMActorWidgetComponent() = default;

	// Initialise widget
	virtual void InitWidget() override;
};
