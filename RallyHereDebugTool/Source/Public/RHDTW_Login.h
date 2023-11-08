// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"

struct FRHDTW_Login : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Login();
	virtual ~FRHDTW_Login();

	virtual void Do() override;
	void DoLoginTab();
	void DoMassLoginTab();

	// Login variables
	bool bAcceptEULA;
	bool bAcceptTOS;
	bool bAcceptPP;
	TArray<ANSICHAR> OSSLoginTypeBuffer;
	TArray<ANSICHAR> OSSIDBuffer;
	TArray<ANSICHAR> OSSTokenBuffer;
	TArray<ANSICHAR> RefreshTokenBuffer;

	// Mass Login variables
	bool ML_bAcceptEULA;
	bool ML_bAcceptTOS;
	bool ML_bAcceptPP;
	TArray<ANSICHAR> ML_OSSLoginTypeBuffer;
	TArray<ANSICHAR> ML_OSSIDBuffer;
	TArray<ANSICHAR> ML_OSSTokenBuffer;
	TArray<ANSICHAR> ML_RefreshTokenBuffer;
	int32 ML_RangeFrom;
	int32 ML_RangeTo;

private:
	FString ML_Result;
	FString LPAddRemoveNotice;
};