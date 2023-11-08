// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "PresenceAPI.h"
#include "RH_DebugToolWindow.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_LocalPlayerPresenceSubsystem.h"
#include <string>
#include "RH_ImGuiUtilities.h"

#include "UsersAPI.h"

struct FRHDTW_Presence : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Presence();
	virtual ~FRHDTW_Presence();

	virtual void Do() override;

#pragma region VIEW PRESENCE TAB
	/** Display presence information for the selected player info */
	void DoViewPresenceTab();

	void HandleGetPresence(bool bSuccess, URH_PlayerPresence* PresenceData, FGuid PlayerUuid);
	FString GetPresenceResult;
#pragma endregion

#pragma region UPDATE SELF TAB
	/** Modify presence information for the local player */
	void DoSelfTab();

	/**
	* \defgroup Updating your presence
	* @{
	*/
	int32 StatusInput{0};
	std::string MessageInput{""};
	bool DoNotDisturbInput{false};
	FString LastUpdateResult;

	void HandleUpdatePresenceSelf(const RallyHereAPI::FResponse_UpdatePlayerPresenceSelf& Resp, FGuid PlayerUuid);
	/** @} */

	FImGuiCustomDataStager CustomDataStager;
#pragma endregion
};
