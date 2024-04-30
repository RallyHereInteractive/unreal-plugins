// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
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

	FString PlayerUuidInput;
	FString PlayerNameInput;
};
