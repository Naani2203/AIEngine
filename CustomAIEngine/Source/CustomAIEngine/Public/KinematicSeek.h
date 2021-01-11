// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <CustomAIEngine/Public/Statics.h>
#include <CustomAIEngine/Public/SteeringOutput.h>
#include <CustomAIEngine/Public/Kinematic.h>

/**
 * 
 */
namespace AIEngine {
	namespace Movement {
		class CUSTOMAIENGINE_API KinematicSeek : Kinematic
		{
		public:
			KinematicSeek();
			~KinematicSeek();

			AIEngine::Movement::Statics Character;
			AIEngine::Movement::Statics Target;
			float MaxSpeed;

			AIEngine::Movement::SteeringOutput GetSteering();
		};
	}
}
