// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DMUserWidget.generated.h"

// Declare event type for the owning actor being changed
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOwningActorChanged, AActor*, NewOwner);

// Base class for UMG Widgets that belong to a single Actor in the world via a WidgetComponent, eg. for 3D health-bars, nameplate, interaction tooltip.
UCLASS(Abstract)
class BOMBERMAN3D_API UDMUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// Return the name of this widget
	UFUNCTION()
	FString GetName() { return widgetName; };

	// Return the owning actor of this widget
	UFUNCTION()
	AActor* GetOwner() { return owner; };

	// Set the owning actor of this widget
	UFUNCTION()
	void SetOwner(AActor* newOwner);

	// Event triggered when owning actor is changed
	UPROPERTY(BlueprintAssignable, Category = "DM|Widget")
	FOnOwningActorChanged OnOwningActorChanged;

protected:
	// Widget name variable
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DM|Widget")
	FString widgetName;

	// Owning actor variable
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DM|Widget")
	AActor* owner;
};
