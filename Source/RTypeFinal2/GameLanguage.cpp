// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLanguage.h"

FText UGameLanguage::GetLocalizedText(FName _Table, FName _id) {
    return FText::GetEmpty();
}

EGameLanguageId UGameLanguage::GetCurrentLanguageId() const {
    return EGameLanguageId::ja;
}