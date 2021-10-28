// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

// Forward declarations
class UDMActorWidgetComponent;

UCLASS()
class BOMBERMAN3D_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PostInitializeComponents() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Up/down movement
	UFUNCTION()
	void MoveUpward(float value);

	// Left/right movement
	UFUNCTION()
	void MoveRight(float value);

	//Camera Actor which the Actor Volume blends to
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACameraActor> camera;

	UFUNCTION()
	FText GetName() { return name; };

	// Left/right movement
	UFUNCTION()
	void PlaceBomb();

protected:
	// Reference UMG Asset in the Editor
	TSubclassOf<UUserWidget> nameWidgetClass;

	// Instance of the nameplate widget  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UDMActorWidgetComponent* nameplate;

	// Character Name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	FText name;

	bool showDebugMessages;

	void SetupNameplate();
};
