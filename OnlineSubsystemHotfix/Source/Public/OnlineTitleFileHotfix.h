// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "OnlineSubsystem.h"
#include "Interfaces/OnlineTitleFileInterface.h"
#include "OnlineSubsystemPackage.h"

struct FHotfix_ConfigFile
{
public:
	FString FileName;
	TArray<TArray<uint8>> FileContents;

	FHotfix_ConfigFile()
		: FileName()
		, FileContents()
	{
	}

	FHotfix_ConfigFile(const FString& InFileName, const TArray<TArray<uint8>> InFileContents)
		: FileName(InFileName)
		, FileContents(InFileContents)
	{
	}

	~FHotfix_ConfigFile()
	{
	}
};

class FOnlineTitleFileHotfix
	: public IOnlineTitleFile
{
PACKAGE_SCOPE:
	FOnlineTitleFileHotfix();

public:
	virtual ~FOnlineTitleFileHotfix() {};

	//IOnlineTitleFile Interface
	virtual bool GetFileContents(const FString& FileName, TArray<uint8>& FileContents) override;
	virtual bool ClearFiles() override;
	virtual bool ClearFile(const FString& FileName) override;
	virtual void DeleteCachedFiles(bool bSkipEnumerated) override;
	virtual bool EnumerateFiles(const FPagedQuery& Page = FPagedQuery()) override;
	virtual void GetFileList(TArray<FCloudFileHeader>& Files) override;
	virtual bool ReadFile(const FString& FileName) override;
	virtual void Init();

private:

	TArray<FCloudFileHeader> FileHeaders;
	TMap<FString, FHotfix_ConfigFile> ReadFiles;
};

DECLARE_LOG_CATEGORY_EXTERN(LogOnlineHotfix, Log, All);