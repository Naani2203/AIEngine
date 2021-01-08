// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <CustomAIEngine/Public/SteeringOutput.h>

/**
 * 
 */
namespace AIEngine {
	namespace Movement {

		class CUSTOMAIENGINE_API Kinematic
		{
		public:
			Kinematic();
			~Kinematic();

			FVector Position;
			FVector Velocity;
			float Orientation;
			float Rotation;

			void Update(SteeringOutput steering, float time);		
			float GetNewOrientation(float current, FVector Velocity);
			
		};
	}
}
