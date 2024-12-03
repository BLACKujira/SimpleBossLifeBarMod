// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EGameLanguageId.h"
#include "GameLanguage.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, NotPlaceable, Transient)
class RTYPEFINAL2_API UGameLanguage : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
		FText GetLocalizedText(FName _Table, FName _id);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		EGameLanguageId GetCurrentLanguageId() const;
};
