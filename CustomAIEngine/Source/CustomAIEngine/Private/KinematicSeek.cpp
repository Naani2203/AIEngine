// Fill out your copyright notice in the Description page of Project Settings.


#include "KinematicSeek.h"

using namespace AIEngine::Movement;

KinematicSeek::KinematicSeek()
{
}

KinematicSeek::~KinematicSeek()
{
}

SteeringOutput KinematicSeek::GetSteering()
{
	SteeringOutput result;

	//get the direction to the target
	result.velocity = Target.Position - Character.Position;

	//normalize the vector and apply full speed in direction
	result.velocity.Normalize();
	result.velocity *= MaxSpeed;

	//face the direction we are moving in
	Character.Orientation = this -> GetNewOrientation(Character.Orientation, result.velocity);

	result.rotation = this->GetNewOrientation(Character.Orientation, result.velocity);

	return result;
}

