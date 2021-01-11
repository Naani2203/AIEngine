// Fill out your copyright notice in the Description page of Project Settings.


#include "Kinematic.h"
using namespace AIEngine::Movement;

Kinematic::Kinematic()
{
}

Kinematic::~Kinematic()
{
}

//to move the character
void Kinematic::Update(SteeringOutput steering, float time)
{
	//Update the position and orientation
	Position += Velocity * time;
	Orientation += Rotation * time;

	//Update Velocity and rotation
	Velocity += steering.velocity * time;
	Rotation += steering.rotation * time;
}

float Kinematic::GetNewOrientation(float current, FVector velocity)
{
	//Making sure we have velocity
	if (velocity.IsZero() == false)
	{
		//Calculate orientation from velocity
		return atan2(velocity.Y, velocity.X);
	}
	else
	{
		return current;
	}
}


