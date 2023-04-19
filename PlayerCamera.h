// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UniversalCamera.h"
#include "PlayerCamera.generated.h"

UCLASS()
class BROKENWORLD_API APlayerCamera : public AUniversalCamera
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void TestCamFun();
};
