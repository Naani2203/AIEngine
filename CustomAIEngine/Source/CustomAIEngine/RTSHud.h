// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CustomAIEngineCharacter.h"
#include "RTSHud.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMAIENGINE_API ARTSHud : public AHUD
{
	GENERATED_BODY()

public:

	FVector2D InitialPoint;

	FVector2D CurrentPoint;

	FVector2D GetMousePos2D();

	virtual void DrawHUD() override;

	bool bStartSelecting;

	TArray <ACustomAIEngineCharacter*> FoundActors;
	
};
