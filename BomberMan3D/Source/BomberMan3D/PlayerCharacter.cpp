// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "DMActorWidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bombCount = 1;

	name = FText::FromString("Character");

	static ConstructorHelpers::FClassFinder<UUserWidget> nameplateWidget(TEXT("/Game/Blueprints/UMG/BPFloatingName"));

	if (nameplateWidget.Succeeded())
	{
		nameWidgetClass = nameplateWidget.Class;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No nameplate widget found."));
	}

	static ConstructorHelpers::FClassFinder<ABomb> bombBP(TEXT("/Game/Blueprints/BPBomb"));

	if (bombBP.Succeeded())
	{
		bombBPClass = bombBP.Class;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No bomb class found."));
	}

	showDebugMessages = false;

	alive = true;

	id = -1;

	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	bombRange = 200.0f;

	remoteBombPower = false;
	remoteBombCount = 0;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	check(GEngine != nullptr);

	// Debug
	if (showDebugMessages)
	{
		// Display a debug message for five seconds. 
		// The -1 "Key" value argument prevents the message from being updated or refreshed.
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using ") + this->GetClass()->GetFName().ToString());
	}

	SetupNameplate();	
}

void APlayerCharacter::SetupNameplate()
{
	nameplate = NewObject<UDMActorWidgetComponent>(this);

	if (nameplate)
	{
		if (nameWidgetClass)
		{
			nameplate->SetWidgetClass(nameWidgetClass);
		}
		else
		{
			// Debug
			if (showDebugMessages)
			{
				GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Name WidgetClass is null."));
			}
		}

		if (nameplate->GetClass())
		{
			// Debug
			if (showDebugMessages)
			{
				GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Name WidgetClass Set."));
			}
		}
		else
		{
			// Debug
			if (showDebugMessages)
			{
				GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Name WidgetClass not set."));
			}
		}

		nameplate->InitWidget();
		nameplate->SetupAttachment(RootComponent);
		nameplate->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));

		nameplate->RegisterComponent();
	}
	else
	{
		// Debug
		if (showDebugMessages)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Nameplate is null."));
		}
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	APlayerController* playerController = dynamic_cast<APlayerController*>(GetController());

	if (playerController)
	{
		// Set player name and ID here, as we know which is which now
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
	if (!remoteBombPower)
	{
		if (bombCount > 0)
		{
			// Debug
			if (showDebugMessages)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Bomb placed by: ") + name.ToString());
			}

			FVector location = this->GetActorLocation();

			ABomb* bomb = (ABomb*)GetWorld()->SpawnActor(bombBPClass, &location);
			bomb->SetRange(bombRange);
			bomb->OnBombExplosion.BindUFunction(this, FName("BindBombExploded"));
			bomb->LightFuse();

			bombCount--;
		}
	}
	else
	{
		if (remoteBombCount > 0)
		{
			// Debug
			if (showDebugMessages)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Bomb placed by: ") + name.ToString());
			}

			FVector location = this->GetActorLocation();

			ABomb* bomb = (ABomb*)GetWorld()->SpawnActor(bombBPClass, &location);
			bomb->SetRange(bombRange);
			bomb->SetFuseTime(0.0f);

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
			break;
		case PickupType::Range: bombRange = value;	// Set bomb range
			break;
		case PickupType::BombCount: bombCount += value;	// Increase bomb count
			break;
		case PickupType::Remote:
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
	// Debug
	if (showDebugMessages)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Bomb placed by: ") + name.ToString() + TEXT(" has now exploded."));
	}

	bombCount++;
}
