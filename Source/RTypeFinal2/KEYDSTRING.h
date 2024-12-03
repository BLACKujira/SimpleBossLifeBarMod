// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KEYDSTRING.generated.h"

USTRUCT(BlueprintType)
struct RTYPEFINAL2_API FKEYDSTRING : public FTableRowBase {
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        FText SourceString;
};
