// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
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

	void Do() override;
private:
	void DoViewRequests(URH_WebRequests* WebRequestsTracker);
	void DoViewRequest(const FRH_WebRequest* WebRequest);
	void DoViewResponse(const FRH_WebResponse* WebResponse);

	TMap<FString, bool> APIFilterToggles;
	bool AreAllAPIFiltersToggledOn() const;
	void ToggleAllAPIFilters(bool bOn);
};
