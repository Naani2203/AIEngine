// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicRTSPlayerController.h"

ABasicRTSPlayerController::ABasicRTSPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
void ABasicRTSPlayerController::BeginPlay()
{
	HUDptr = Cast<ARTSHud>(GetHUD()); 
}

void ABasicRTSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &ABasicRTSPlayerController::SelectionPressed);
	InputComponent->BindAction("LeftMouseClick", IE_Released, this, &ABasicRTSPlayerController::SelectionReleased);

	InputComponent->BindAction("RightMouseClick", IE_Released, this, &ABasicRTSPlayerController::MoveReleased);
}

void ABasicRTSPlayerController::SelectionPressed()
{
	HUDptr->InitialPoint = HUDptr->GetMousePos2D();
	HUDptr->bStartSelecting = true;
}

void ABasicRTSPlayerController::SelectionReleased()
{
	HUDptr->bStartSelecting = false;
	SelectedActors = HUDptr->FoundActors;
}

void ABasicRTSPlayerController::MoveReleased()
{
	if (SelectedActors.Num() > 0)
	{
		for (int32 i = 0; i < SelectedActors.Num(); i++)
		{
			FHitResult Hit;
			GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);
			FVector MoveLocation = Hit.Location;
		}
	}
}