// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolActor.generated.h"

UCLASS(Abstract, Blueprintable)
class RTYPEFINAL2_API APoolActor : public AActor
{
    GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable)
        void Killed() { };

    UFUNCTION(BlueprintCallable, BlueprintPure)
        bool IsPooled() { return false; };

    UFUNCTION(BlueprintCallable)
        void Created(UObject* _param) { };

    UFUNCTION(BlueprintCallable)
        void Borned(UObject* _param) { };

};
