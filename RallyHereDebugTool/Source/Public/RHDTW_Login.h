// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"

struct FRHDTW_Login : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Login();
	virtual ~FRHDTW_Login();

	virtual void Do() override;

	bool bAcceptEULA;
	bool bAcceptTOS;
	bool bAcceptPP;
	TArray<ANSICHAR> OSSLoginTypeBuffer;
	TArray<ANSICHAR> OSSIDBuffer;
	TArray<ANSICHAR> OSSTokenBuffer;
	TArray<ANSICHAR> RefreshTokenBuffer;
};