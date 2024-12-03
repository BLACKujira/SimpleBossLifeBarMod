// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3205_BODY.h"
#include "E3205.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RTYPEFINAL2_API AE3205 : public AEnemyActor
{
	GENERATED_BODY()
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        TArray<AE3205_BODY*> ChildArray;
};
