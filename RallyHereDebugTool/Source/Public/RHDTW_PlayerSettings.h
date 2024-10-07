// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_PlayerInfoSubsystem.h"

struct FRHDTW_PlayerSettings : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_PlayerSettings();
	virtual ~FRHDTW_PlayerSettings();

	virtual void Do() override;

	void DoViewSettings();
	void DoModifySettings();
	void DoSettingsTypes();

	int32 SettingVersionNum;
	FString FetchSettingsIdInput;
	FString FetchSettingsKeyInput;
	FString ModifySettingsIdInput;
	FString ModifySettingsKeyInput;
	FString ModifySettingsJsonInput;

private:
	FString SetPlayerSettingActionResult;
	void HandleSetPlayerSettingResponse(bool bSuccess, const FRH_PlayerSettingsDataWrapper& Response, const FRH_ErrorInfo& ErrorInfo, FGuid PlayerUuid);
	void HandleDeletePlayerSettingResponse(bool bSuccess, const FRH_ErrorInfo& ErrorInfo, FGuid PlayerUuid);
};
