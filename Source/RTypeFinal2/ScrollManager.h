// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ScrollManager_ScrollData.h"
#include "ScrollManager.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class RTYPEFINAL2_API UScrollManager : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		float ScrollValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		int32 ScrollDataIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<FScrollManager_ScrollData> ScrollDataList;
};
