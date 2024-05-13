// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_PlayerNotifications.h"

struct FRHDTW_Notifications : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Notifications();
	virtual void Do() override;

private:
	FString URL, APIName, APIParams, Message;
};
