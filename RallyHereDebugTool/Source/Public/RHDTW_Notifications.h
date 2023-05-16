// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_NotificationSubsystem.h"

struct FRHDTW_Notifications : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Notifications();
	virtual void Do() override;

private:
	TArray<ANSICHAR> URL, APIName, APIParams, Message;
};
