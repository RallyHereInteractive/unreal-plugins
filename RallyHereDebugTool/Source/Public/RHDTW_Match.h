// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_MatchSubsystem.h"

struct FRHDTW_Match : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Match();
	virtual ~FRHDTW_Match();

	virtual void Do() override;

};
