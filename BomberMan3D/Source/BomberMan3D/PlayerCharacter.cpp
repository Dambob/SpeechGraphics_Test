// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	check(GEngine != nullptr);

	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using ") + this->GetClass()->GetFName().ToString());

	//APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	APlayerController* playerController = dynamic_cast<APlayerController*>(GetController());

	if (playerController && camera)
	{
		//Array to contain found Camera Actors
		TArray<AActor*> FoundActors;

		//Utility function to populate array with all Camera Actors in the level
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), camera, FoundActors);

		//Sets Player Controller view to the first CameraActor found
		playerController->SetViewTargetWithBlend(FoundActors[0], 2.f, EViewTargetBlendFunction::VTBlend_Linear);
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	APlayerController* playerController = dynamic_cast<APlayerController*>(GetController());


	if (playerController)
	{
		// Controls for Player 1
		if (playerController->GetLocalPlayer()->GetControllerId() == 0)
		{
			// Add movement bindings
			PlayerInputComponent->BindAxis("MoveUpward_P1", this, &APlayerCharacter::MoveUpward);
			PlayerInputComponent->BindAxis("MoveRight_P1", this, &APlayerCharacter::MoveRight);
		}
		else // Controls for Player 2
		{
			// Add movement bindings
			PlayerInputComponent->BindAxis("MoveUpward_P2", this, &APlayerCharacter::MoveUpward);
			PlayerInputComponent->BindAxis("MoveRight_P2", this, &APlayerCharacter::MoveRight);
		}
	}
}

// Up/down movement
void APlayerCharacter::MoveUpward(float value)
{
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, value);
}

// Left/right movement
void APlayerCharacter::MoveRight(float value)
{
	// Find out which way is "right" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, value);
}

