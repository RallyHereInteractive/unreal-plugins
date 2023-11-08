// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_EntitlementSubsystem.h"

struct FRHDTW_Entitlements : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Entitlements();
	virtual void Do() override;

	virtual void DoEntitlementsTab();
	virtual void DoStoreOffersTab();

private:
	FString ActionResult;

	TArray<ANSICHAR> SKURequestInput;
};
