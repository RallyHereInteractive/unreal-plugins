#pragma once

#include "RH_DebugToolWindow.h"

struct FRHDTW_PlayerSettings : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_PlayerSettings();
	virtual ~FRHDTW_PlayerSettings();

	virtual void Do() override;

	void DoViewSettings(URH_PlayerInfo* ActivePlayerInfo);
	void DoModifySettings(URH_PlayerInfo* ActivePlayerInfo);

	int32 SettingVersionNum;
	TArray<ANSICHAR> SettingsIdInput;
	TArray<ANSICHAR> ModifySettingsIdInput;
	TArray<ANSICHAR> ModifySettingsKeyInput;
	TArray<ANSICHAR> ModifySettingsJsonInput;
};

