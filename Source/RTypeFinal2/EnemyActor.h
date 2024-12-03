// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PoolActor.h"
#include "EnemyActor.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RTYPEFINAL2_API AEnemyActor : public APoolActor
{
	GENERATED_BODY()
	
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        TArray<float> Life;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        TArray<float> LifeMax;
};
