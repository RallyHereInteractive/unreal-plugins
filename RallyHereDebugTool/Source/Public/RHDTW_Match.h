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

	virtual void DoCreateMatch();
	virtual void DoSearchMatches();
	virtual void DoViewPlayerMatches();

protected:

	int32 SearchPageSize;
	TArray<ANSICHAR> SearchInstanceId;
	TArray<ANSICHAR> SearchAllocationId;
	TArray<ANSICHAR> SearchSessionId;
	TArray<ANSICHAR> SearchHostPlayerUuid;
	TArray<ANSICHAR> SearchRegionId;
	TArray<ANSICHAR> SearchCursor;

	struct FFullSearchResult
	{
		bool bSuccess;
		FRH_MatchSearchResult Result;
		FRH_ErrorInfo ErrorInfo;
	};
	TArray<FFullSearchResult> SearchResults;

	void OnSearchMatchesComplete(bool bSuccess, const FRH_MatchSearchResult& Result, const FRH_ErrorInfo& ErrorInfo);
};
