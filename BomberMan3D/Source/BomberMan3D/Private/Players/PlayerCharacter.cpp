// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/Players/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "../Public/Widgets/DMActorWidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter() :
	name(FText::FromString("Character")),
	id(-1),
	alive(true),
	bombCount(1),
	bombRange(200.0f),
	remoteBombPower(false),
	remoteBombCount(0),
	speedPower(false),
	rangePower(false),
	countPower(false)
{
 	// Turn off Tick
	PrimaryActorTick.bCanEverTick = false;

	GetCharacterMovement()->MaxWalkSpeed = 200.0f;

	static ConstructorHelpers::FClassFinder<UUserWidget> nameplateWidget(TEXT("/Game/Blueprints/UMG/BPFloatingName"));

	if (nameplateWidget.Succeeded())
	{
		nameWidgetClass = nameplateWidget.Class;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No nameplate widget found."));
	}

	static ConstructorHelpers::FClassFinder<ABomb> bombBP(TEXT("/Game/Blueprints/Actors/BPBomb"));

	if (bombBP.Succeeded())
	{
		bombBPClass = bombBP.Class;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No bomb class found."));
	}
}

float APlayerCharacter::GetRemotePowerTimer() const
{
	float result = 0.0f;

	result = GetWorldTimerManager().GetTimerRemaining(remotePowerTimerHandle);

	// Cap result
	if (result < 0.0f)
	{
		result = 0.0f;
	}

	// Round for output
	result = roundf(result);

	return result;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	SetupNameplate();	
}

void APlayerCharacter::SetupNameplate()
{
	nameplate = NewObject<UDMActorWidgetComponent>(this);

	if (!nameplate)
	{
		UE_LOG(LogTemp, Warning, TEXT("Nameplate is null."));
		return;
	}

	if (!nameWidgetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Name WidgetClass is null."));
	}
	
	// Set class of widget
	nameplate->SetWidgetClass(nameWidgetClass);

	if (!nameplate->GetClass())
	{
		UE_LOG(LogTemp, Warning, TEXT("Name WidgetClass not set."));
	}

	// Initialise nameplate and attach to player
	nameplate->InitWidget();
	nameplate->SetupAttachment(RootComponent);
	nameplate->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	nameplate->RegisterComponent();
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	APlayerController* playerController = dynamic_cast<APlayerController*>(GetController());

	if (playerController)
	{
		// Set player name and ID here, as we know which is which now
		// ToDo: Find better way/place to setup each player
		if (playerController->GetLocalPlayer()->GetControllerId() == 0)
		{
			// Set player name
			name = FText::FromString("Player 1");
			id = 0;

			// Add movement bindings
			PlayerInputComponent->BindAxis("MoveUpward_P1", this, &APlayerCharacter::MoveUpward);
			PlayerInputComponent->BindAxis("MoveRight_P1", this, &APlayerCharacter::MoveRight);

			// Add bomb binding
			PlayerInputComponent->BindAction("PlaceBomb_P1", IE_Pressed, this, &APlayerCharacter::PlaceBomb);

			// Add remote bomb binding
			PlayerInputComponent->BindAction("DetonateBomb_P1", IE_Pressed, this, &APlayerCharacter::DetonateBomb);
		}
		else // Controls for Player 2
		{
			// Set player name and ID here, as we know which is which now
			name = FText::FromString("Player 2");
			id = 1;

			// Add movement bindings
			PlayerInputComponent->BindAxis("MoveUpward_P2", this, &APlayerCharacter::MoveUpward);
			PlayerInputComponent->BindAxis("MoveRight_P2", this, &APlayerCharacter::MoveRight);

			// Add bomb binding
			PlayerInputComponent->BindAction("PlaceBomb_P2", IE_Pressed, this, &APlayerCharacter::PlaceBomb);

			// Add remote bomb binding
			PlayerInputComponent->BindAction("DetonateBomb_P2", IE_Pressed, this, &APlayerCharacter::DetonateBomb);
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

void APlayerCharacter::PlaceBomb()
{
	// Normal mode
	if (!remoteBombPower)
	{
		if (bombCount > 0)
		{
			// Spawn bomb at player location
			FVector location = this->GetActorLocation();

			ABomb* bomb = (ABomb*)GetWorld()->SpawnActor(bombBPClass, &location);
			bomb->SetRange(bombRange);
			bomb->OnBombExplosion.BindUFunction(this, FName("BindBombExploded"));
			bomb->LightFuse();

			bombCount--;
		}
	}
	else	// Remote bomb mode
	{
		if (remoteBombCount > 0)
		{
			// Spawn bomb at player location
			FVector location = this->GetActorLocation();

			ABomb* bomb = (ABomb*)GetWorld()->SpawnActor(bombBPClass, &location);
			bomb->SetRange(bombRange);
			bomb->SetFuseTime(0.0f);

			// Hold reference to remote bomb to detonate later
			remoteBomb = bomb;

			remoteBombCount--;
		}
	}
}

void APlayerCharacter::DetonateBomb()
{
	if (remoteBombPower && remoteBomb)
	{
		remoteBomb->Explode();
		remoteBomb = nullptr;

		remoteBombCount++;
	}
}

void APlayerCharacter::PowerUp(PickupType type, float value)
{
	switch (type)
	{
		case PickupType::Speed: GetCharacterMovement()->MaxWalkSpeed = value;	// Set run speed
			speedPower = true;
			break;
		case PickupType::Range: bombRange = value;	// Set bomb range
			rangePower = true;
			break;
		case PickupType::BombCount: bombCount += value;	// Increase bomb count
			break;
		case PickupType::Remote:	// Enable remote bomb mode
			remoteBombPower = true;
			GetWorldTimerManager().SetTimer(remotePowerTimerHandle, this, &APlayerCharacter::EndRemotePower, value, false);
			remoteBombCount = 1;
			break;
		default:
			break;
	}
}

int APlayerCharacter::GetBombCount() const
{
	if (remoteBombPower)
	{
		return remoteBombCount;
	}
	else
	{
		return bombCount;
	}
}

void APlayerCharacter::EndRemotePower()
{
	// Detonate remote bomb, in case it's still active
	DetonateBomb();

	// Remove timer
	GetWorldTimerManager().ClearTimer(remotePowerTimerHandle);

	// Reset counters
	remoteBombPower = false;
	remoteBombCount = 0;
}

void APlayerCharacter::BindBombExploded()
{
	bombCount++;
}
