// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"

struct FRHDTW_LocalPlayers : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_LocalPlayers();
	virtual ~FRHDTW_LocalPlayers();

	virtual void Do() override;
};