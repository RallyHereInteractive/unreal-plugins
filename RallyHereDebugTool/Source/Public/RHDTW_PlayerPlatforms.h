// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"

struct FRHDTW_PlayerPlatforms : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_PlayerPlatforms();
	virtual ~FRHDTW_PlayerPlatforms();

	virtual void Do() override;

	void HandleGetLinkedPlatforms(bool bSuccess, const TArray<class URH_PlayerPlatformInfo*>& LinkedPlatforms, FGuid PlayerUuid);
	FString GetPlatformsActionResult;
};

