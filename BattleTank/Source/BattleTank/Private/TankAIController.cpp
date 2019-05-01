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
	auto PlayerTank = GetPlayerTank();
	if (PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Reporting %s"), *PlayerTank->GetName());
	}
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	return Cast<ATank>(PlayerPawn);
}

ATank* ATankAIController::GetAITank() const
{
	return Cast<ATank>(GetPawn());
}

