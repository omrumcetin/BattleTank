// Fill out your copyright notice in the Description page of Project Settings.


#include "Public\TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetAITank();
	if (ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player controller begin play! %s"), *ControlledTank->GetName());
	}
}

ATank* ATankAIController::GetAITank() const
{
	return Cast<ATank>(GetPawn());
}

