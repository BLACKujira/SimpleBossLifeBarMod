// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EDifficulty.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameOption.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, NotPlaceable, Transient, Config = Game)
class RTYPEFINAL2_API UGameOption : public UGameInstanceSubsystem
{
	GENERATED_BODY()
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        EDifficulty Difficulty;
};
