// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "FriendsV1API.h"
#include "BlockedV1API.h"
#include "RH_DebugToolWindow.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_PlayerInventory.h"
#include <string>

struct FRHDTW_Players : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Players();
	virtual ~FRHDTW_Players();

	virtual void Do() override;

	TArray<ANSICHAR> PlayerUuidInput;
	TArray<ANSICHAR> PlayerNameInput;
};
