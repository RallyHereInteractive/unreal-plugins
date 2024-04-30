// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_RemoteFileSubsystem.h"

struct FRHDTW_RemoteFile : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_RemoteFile();
	virtual ~FRHDTW_RemoteFile();

	virtual void Do() override;

	virtual void DoListFiles(URH_RemoteFileSubsystem* pRemoteFileSubsystem);
	virtual void DoDownloadFile(URH_RemoteFileSubsystem* pRemoteFileSubsystem);
	virtual void DoUploadFile(URH_RemoteFileSubsystem* pRemoteFileSubsystem);

protected:

	FRH_RemoteFileApiDirectory RemoteDirectory;

	FString BrowseDownloadDirectory;
	FString PendingDeleteFileName;
	FString PendingDeleteResult;

	FString UploadRemoteFileName;
	FString UploadLocalFilePath;
	FString UploadResult;

	FString DownloadRemoteFileName;
	FString DownloadLocalFilePath;
	FString DownloadResult;
};
