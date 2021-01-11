// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"
#include "RTSHud.h"
#include "GameFramework/Actor.h"
#include "CustomAIEngineCharacter.h"
#include "BasicRTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMAIENGINE_API ABasicRTSPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABasicRTSPlayerController();
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	void SeekKinematic(FVector pos);
	ARTSHud* HUDptr;

protected:

	void SelectionPressed();
	void SelectionReleased();
	void MoveReleased();


	TArray <ACustomAIEngineCharacter*> SelectedActors;

};
