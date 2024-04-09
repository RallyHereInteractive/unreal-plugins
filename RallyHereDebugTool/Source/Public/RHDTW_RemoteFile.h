// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_FileSubsystem.h"

struct FRHDTW_RemoteFile : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_RemoteFile();
	virtual ~FRHDTW_RemoteFile();

	virtual void Do() override;

	virtual void DoListFiles(URH_FileSubsystem* pFileSubsystem);
	virtual void DoDownloadFile(URH_FileSubsystem* pFileSubsystem);
	virtual void DoUploadFile(URH_FileSubsystem* pFileSubsystem);

protected:

	FRH_FileApiDirectory RemoteDirectory;

	FString BrowseDownloadDirectory;

	FString UploadRemoteFileName;
	FString UploadLocalFilePath;
	FString UploadResult;

	FString DownloadRemoteFileName;
	FString DownloadLocalFilePath;
	FString DownloadResult;
};
