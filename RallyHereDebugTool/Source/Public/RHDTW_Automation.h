// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"

#if WITH_DEV_AUTOMATION_TESTS

struct FRHDTW_Automation : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Automation();
	virtual ~FRHDTW_Automation();

	void Do() override;

protected:

	/** The automation controller running the tests */
	TSharedPtr<class IAutomationControllerManager> AutomationController;

	bool AreTestsRunning() const;
};

#else

struct FRHDTW_Automation : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Automation() = default;
	virtual ~FRHDTW_Automation() = default;

	void Do() override { }
};

#endif


