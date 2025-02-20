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
	virtual void DoGuideFull();
	virtual bool DoCreateNewGuide();
	virtual void DoGuideEngagement();

protected:
	void DoShowGuideSearchPage(const struct FRHAPI_GuideSearchResult& Result, class URH_GuideSubsystem* GuideSS);
	void DoShowGuideFull(const struct FRHAPI_GuideFull& Result, class URH_GuideSubsystem* GuideSS);
	void DoShowGuideSectionFull(const struct FRHAPI_GuideSectionFull& Result);
	void DoCreateNewGuideSection(struct FRHAPI_GuideSectionCreate& SectionCreate);
	class URH_GuideSubsystem* GetSubsystemWithTextForFailures() const;
	FString GetSearchString(const struct FRH_GuideSearch& Search) const;
	void RequestEngagementForAllGuides(const TArray<FGuid>& GuideIDs);
	void ImGuiEngagementInput_Favorite(const TArray<FGuid>& GuideIDs);
	void ImGuiEngagementInput_Rate(const TArray<FGuid>& GuideIDs);

	TArray<FGuid> GetGuideIDsFromInput(const FString& Input) const;
	const FRHAPI_EntityGuideEngagement* FindGuideEngagement(const FGuid& GuideID) const;
	
	FRH_GuideSearchRequest SearchParams;
	FRHAPI_GuideCreateRequest GuideCreateRequest;
	
	std::string SelectedGuideSearchDisplayString;
	int32 SelectedGuideSearchHandle;
	int32 SelectedGuideSearchPage;

	FString RequestGuideById;
	int32 GuideUpdateRating;
};
