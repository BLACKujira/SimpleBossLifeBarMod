// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E5501_BODY.h"
#include "E5501.generated.h"

UCLASS(Blueprintable)
class RTYPEFINAL2_API AE5501 : public AEnemyActor
{
	GENERATED_BODY()
private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<AE5501_BODY*> ChildArray;
};
