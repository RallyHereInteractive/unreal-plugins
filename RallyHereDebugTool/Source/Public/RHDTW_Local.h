// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"

struct FRHDTW_Local : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Local();
	virtual ~FRHDTW_Local();

	virtual void Do() override;
private:
	TArray<FString> PreviousCommands;
	TArray<ANSICHAR> OpenString;
};
