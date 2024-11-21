// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWriteFile.h"

#include "HAL/PlatformFileManager.h"

void U_1_ReadWriteFile::ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage)
{

}

bool U_1_ReadWriteFile::WriteStringToFile(FString FileName, FString data, bool& bOutSuccess, FString& OutInfoMessage)
{
    return FFileHelper::SaveStringToFile(data + '\n', *(FPaths::ProjectDir() + FileName), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
}