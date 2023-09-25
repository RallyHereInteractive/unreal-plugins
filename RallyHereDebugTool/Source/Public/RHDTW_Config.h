// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.
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
	void DoRhConfigTab(URH_ConfigSubsystem* pRH_ConfigSubsystem);
	void DoRhTimeTab(URH_ConfigSubsystem* pRH_ConfigSubsystem);

	void HandleFetchAppSettings(bool bSuccess, const FRH_ErrorInfo& ErrorInfo);
	void HandleFetchTime(bool bSuccess, const FRH_ErrorInfo& ErrorInfo);

	FString AppSettingsActionResult;
	FString TimeActionResult;

};
