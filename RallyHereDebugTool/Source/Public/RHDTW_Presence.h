// Copyright 2016-2023 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "PresenceAPI.h"
#include "RH_DebugToolWindow.h"
#include "RH_LocalPlayerPresenceSubsystem.h"
#include <string>

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
	std::string CustomPropertyInput{""};
	std::string CustomValueInput{""};
	FString LastUpdateResult;
	
	void HandleUpdatePresenceSelf(const RallyHereAPI::FResponse_UpdatePlayerPresenceSelf& Resp, FGuid PlayerUuid);
	/** @} */

	/**
	 * \defgroup Settings
	 * @{
	 */
	int32 SelfPingIntervalSeconds{0};
	int32 LastSeenAgeConsideredOfflineSeconds{0};
	std::string LastSettingsUpdateResult{""};
	
	void HandleGetSettings(const RallyHereAPI::FResponse_GetPresenceSettings& Resp);
	/** @} */
#pragma endregion
};
