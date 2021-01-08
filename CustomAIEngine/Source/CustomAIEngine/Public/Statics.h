// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
namespace AIEngine {
	namespace Movement {
		class CUSTOMAIENGINE_API Statics
		{
		public:
			Statics();
			~Statics();

			FVector Position;
			float Orientation;
		};
	}
}
