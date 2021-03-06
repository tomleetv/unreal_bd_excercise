// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "WeaponComponent.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_CPP_BD_API UWeaponComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	
	UWeaponComponent();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	
	virtual void BeginPlay() override;
	
	
};
