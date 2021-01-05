// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSHud.h"

FVector2D ARTSHud::GetMousePos2D()
{
	float PosX;
	float PosY;

	GetOwningPlayerController()->GetMousePosition(PosX, PosY);

	return FVector2D(PosX, PosY);
}

void ARTSHud::DrawHUD()
{
	if (FoundActors.Num() > 0)
	{
		for (int32 i = 0; i < FoundActors.Num(); i++)
		{
			FoundActors[i]->SetDeSelected();
		}
	}
	if (bStartSelecting == true)                      // improve this
	{
		FoundActors.Empty(); 
		CurrentPoint = GetMousePos2D();
		DrawRect(FLinearColor(0, 0, 1, 0.15f), InitialPoint.X, InitialPoint.Y, CurrentPoint.X-InitialPoint.X, CurrentPoint.Y-InitialPoint.Y);
		GetActorsInSelectionRectangle<ACustomAIEngineCharacter>(InitialPoint, CurrentPoint, FoundActors, false, false);

		if (FoundActors.Num() > 0)
		{
			for (int32 i = 0; i < FoundActors.Num(); i++)
			{
				FoundActors[i]->SetSelected();
			}
		}
	}
}