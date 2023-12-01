// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_WebRequests.h"

class URH_SessionView;
class URH_GameInstanceSessionSubsystem;

struct FRHDTW_WebRequests : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_WebRequests();
	virtual ~FRHDTW_WebRequests() = default;
	virtual void Init(URallyHereDebugTool* InOwner, const FString& InName) override;

	void Do() override;
private:
	void DoViewRequests(URH_WebRequests* WebRequestsTracker);
	void DoViewRequest(const FRH_WebRequest* WebRequest);
	void DoViewResponse(const FRH_WebResponse* WebResponse, const FRH_WebRequest* WebRequest);
	void DoViewMetadata(const FRH_WebRequest* WebRequest);

	TMap<FName, bool> APIFilterToggles;
	bool AreAllAPIFiltersToggledOn() const;
	void ToggleAllAPIFilters(bool bOn);
};
