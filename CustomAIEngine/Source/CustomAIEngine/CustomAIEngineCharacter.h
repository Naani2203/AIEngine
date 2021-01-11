// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <CustomAIEngine/Public/SteeringOutput.h>
#include <Kinematic.h>
#include "Misc/App.h"
#include "CustomAIEngineCharacter.generated.h"

UCLASS(Blueprintable)
class ACustomAIEngineCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACustomAIEngineCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;


	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }

	void SetSelected();

	void SetDeSelected();

	AIEngine::Movement::SteeringOutput steeringOutput;
	bool CanMove = false;
	FVector MovePos;
	void SeekKinematic(FVector pos);
	void UpdateMovement(AIEngine::Movement::SteeringOutput steerOutput);
	FVector velocity;
	float rotation = 0;
	FVector position = GetActorLocation();
	float orientation = 0;
	bool IsSet = false;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* CursorToWorld;


};

