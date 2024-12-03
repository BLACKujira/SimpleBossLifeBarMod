// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EDifficulty.generated.h"

UENUM(BlueprintType)
enum class EDifficulty : uint8
{
    VERY_EASY,
    EASY,
    NORMAL,
    HARD,
    VERY_HARD,
    VERY_HARD2,
    VERY_HARD3,
    NUM,
};
