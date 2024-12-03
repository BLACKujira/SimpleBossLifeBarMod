// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "RTypeFinal2/BS002Container.h"
#include "BS002.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RTYPEFINAL2_API ABS002 : public AEnemyActor
{
	GENERATED_BODY()
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        ABS002Container* ContainerA;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        ABS002Container* ContainerB;
};
