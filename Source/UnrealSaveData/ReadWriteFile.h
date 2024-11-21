// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ReadWriteFile.generated.h"

UCLASS()
class U_1_ReadWriteFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "LoadText"))
	static void ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveText"))
	static bool WriteStringToFile(FString FilePath, FString data, bool& bOutSuccess, FString& OutInfoMessage);
};