// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TeleHandController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BPROJEKT_1_API UTeleHandController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTeleHandController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	AActor * getTarget(FTransform me);

	UFUNCTION(BlueprintCallable)
	AActor * grab(FTransform me);

	UFUNCTION(BlueprintCallable)
	float getDamage(AActor * enemy);

	UFUNCTION(BlueprintCallable)
	float checkFloorHit(FTransform me, float speed);

		
};