// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include <string>
#include "RH_DebugToolWindow.h"
#include "RH_GuideSubsystem.h"

struct FRHDTW_Guide : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Guide();
	virtual ~FRHDTW_Guide();

	virtual void Do() override;

	virtual void DoSearchGuides();
	virtual bool DoCreateNewSearch();
	virtual void DoShowCurrentGuideSearch();

protected:
	void DoShowGuideSearchResult(const struct FRHAPI_GuideSearchResult& Result);
	class URH_GuideSubsystem* GetSubsystemWithTextForFailures() const;
	FString GetSearchString(const struct FRH_GuideSearch& Search) const;
	
	FRH_GuideSearchRequest SearchParams;
	std::string SelectedGuideSearchDisplayString;
	int32 SelectedGuideSearchHandle;
	int32 SelectedGuideSearchPage;
};
