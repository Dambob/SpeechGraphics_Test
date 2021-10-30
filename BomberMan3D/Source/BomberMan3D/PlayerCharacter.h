// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Bomb.h"
#include "Pickup.h"
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
	virtual ~APlayerCharacter() = default;

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

	int GetID() { return id; };

	// Bomb placement
	UFUNCTION()
	void PlaceBomb();

	// Detonate remote bomb
	UFUNCTION()
	void DetonateBomb();

	void Kill() { alive = false; };

	bool isAlive() { return alive; };

	virtual void PowerUp(PickupType type, float value);

	/* Return the Bomb count. */
	UFUNCTION(BlueprintPure, Category = "Player")
	virtual int GetBombCount() const;

	UFUNCTION(BlueprintPure, Category = "Player|Powers")
	virtual bool HasSpeedPower() const { return speedPower; };

	UFUNCTION(BlueprintPure, Category = "Player|Powers")
	virtual bool HasRangePower() const { return rangePower; };

	UFUNCTION(BlueprintPure, Category = "Player|Powers")
	virtual bool HasRemotePower() const { return remoteBombPower; };
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Reference UMG Asset in the Editor
	TSubclassOf<UUserWidget> nameWidgetClass;

	// Instance of the nameplate widget  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UDMActorWidgetComponent* nameplate;

	// Character Name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	FText name;

	int id;

	bool alive;

	void SetupNameplate();

	// Reference BP Asset in the Editor
	TSubclassOf<ABomb> bombBPClass;

	UFUNCTION()
	void BindBombExploded();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	int bombCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	int bombRange;

	// Remote bomb
	bool remoteBombPower;
	FTimerHandle remotePowerTimerHandle;
	int remoteBombCount;
	ABomb* remoteBomb;

	void EndRemotePower();


	bool	speedPower,
			rangePower,
			countPower;
};
