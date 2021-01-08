// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
namespace AIEngine {
	namespace Movement {
		class CUSTOMAIENGINE_API SteeringOutput
		{
		public:
			SteeringOutput();
			~SteeringOutput();
			
			FVector velocity;
			float rotation;
		};
	}
}
