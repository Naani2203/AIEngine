// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicRTSPlayerController.h"
#include <CustomAIEngine/Public/KinematicSeek.h>

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

void ABasicRTSPlayerController::SeekKinematic(FVector pos)
{
	AIEngine::Movement::KinematicSeek KSeek;
	KSeek.Character.Position = AActor::GetActorLocation();
	KSeek.Character.Orientation = AActor::GetActorRotation().Yaw;
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
			DrawDebugSphere(GetWorld(), MoveLocation, 10, 26, FColor(181, 0, 0), false, 1, 0, 2);
			SelectedActors[i]-> MovePos = MoveLocation;
			SelectedActors[i] -> CanMove = true;
		}
	}
}