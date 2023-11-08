// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_PurgeSubsystem.h"
#include "UsersAPI.h"
#include <string>

struct FRHDTW_Purge : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Purge();
	virtual ~FRHDTW_Purge();

	virtual void Do() override;
private:
	void HandleEnqueueMeForPurge(bool success, FRHAPI_PurgeResponse PurgeStatus, FRH_ErrorInfo Error, FGuid PlayerUuid);
	void HandleDequeueMeForPurge(bool success, FRHAPI_PurgeResponse PurgeStatus, FRH_ErrorInfo Error, FGuid PlayerUuid);
	void HandleGetMyPurgeStatus(bool success, FRHAPI_PurgeResponse PurgeStatus, FRH_ErrorInfo Error, FGuid PlayerUuid);

	std::string SuggestedPurgeTimeInput;
	FString PurgeActionResult;
};
