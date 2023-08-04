// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_EntitlementSubsystem.h"

struct FRHDTW_Entitlements : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Entitlements();
	virtual void Do() override;
private:
	FString ActionResult;
};
