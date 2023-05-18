// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_EntitlementSubsystem.h"

struct FRHDTW_Entitlements : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Entitlements();
	void GetEntitlementResults(EntitlementProcessResultMapStruct map);
	virtual void Do() override;
private:
	TMap<FString, FRHAPI_PlatformEntitlementProcessResult> EntitlementResults;
	URH_EntitlementSubsystem* GetEntitlementSubsystem();
};
