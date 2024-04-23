// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_ConfigSubsystem.h"
#include "ConfigAPI.h"

struct FRHDTW_Config : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Config();
	virtual ~FRHDTW_Config();

	virtual void Do() override;
	void DoKVsTab(URH_ConfigSubsystem* pRH_ConfigSubsystem);
	void DoTimeTab(URH_ConfigSubsystem* pRH_ConfigSubsystem);

	void HandleFetchKVs(bool bSuccess, const FRH_ErrorInfo& ErrorInfo);
	void HandleFetchTime(bool bSuccess, const FRH_ErrorInfo& ErrorInfo);

	FString KVsActionResult;
	FString TimeActionResult;

};
