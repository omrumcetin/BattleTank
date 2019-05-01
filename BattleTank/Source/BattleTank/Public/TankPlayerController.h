// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

#define OUT
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public: 
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	
private:
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	bool GetLookDirection(FVector2D,FVector&) const;

	bool GetLookVectorHitLocation(FVector lookDirection, FVector& hitLocation) const;

	ATank* GetControlledTank() const;

	void AimTowardsCrosshair();

	UPROPERTY(EditAnywhere)
	float crosshairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float crosshairYLocation = 0.33333;
};

