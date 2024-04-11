// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_MatchSubsystem.h"

struct FRHDTW_Match : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Match();
	virtual ~FRHDTW_Match();

	virtual void Do() override;

	virtual void DoViewMatch();
	virtual void DoViewActiveMatch();
	virtual void DoSearchMatches();
	virtual void DoViewPlayerMatches();

	virtual void DoFilesBlock(const FString& MatchId, bool bDownload = true, bool bUpload = false);

protected:

	FString SearchMatchId;

	int32 SearchPageSize;
	TArray<ANSICHAR> SearchInstanceId;
	TArray<ANSICHAR> SearchAllocationId;
	TArray<ANSICHAR> SearchSessionId;
	TArray<ANSICHAR> SearchHostPlayerUuid;
	TArray<ANSICHAR> SearchRegionId;
	TArray<ANSICHAR> SearchPlayerUuid;
	TArray<ANSICHAR> SearchCursor;

	struct FFullSearchResult
	{
		bool bSuccess;
		FRH_MatchSearchResult Result;
		FRH_ErrorInfo ErrorInfo;
	};
	TArray<FFullSearchResult> SearchResults;

	FString DownloadDirectory;
	FString UploadFilePath;
	FString UploadRemoteFileName;

	void OnSearchMatchesComplete(bool bSuccess, const FRH_MatchSearchResult& Result, const FRH_ErrorInfo& ErrorInfo);
};
