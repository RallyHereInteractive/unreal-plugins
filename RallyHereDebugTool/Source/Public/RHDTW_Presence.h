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

	/** Display and modify presence information for the local player */
	void DoPresenceTab(URH_LocalPlayerPresenceSubsystem* pRH_PresenceSubsystem);

	/** Display settings provided for the client by the presence api 
	* This includes expected timeout rates.
	*/
	void DoSettingsTab(URH_LocalPlayerPresenceSubsystem* pRH_PresenceSubsystem);

	/**
	 *  \defgroup Self presence information that's not modified locally
	 *  @{
	 */
	FString Platform{};
	FString DisplayName{};
	TOptional<TMap<FString, FString>> CustomData;
	/** @} */
	
	/** 
	* \defgroup Updating your presence
	* @{
	*/
	int32 StatusInput{0};
	std::string MessageInput{""};
	bool DoNotDisturbInput{false};
	std::string CustomPropertyInput{""};
	std::string CustomValueInput{""};
	std::string LastUpdateResult{""};
	
	void HandleUpdatePresenceSelf(const RallyHereAPI::FResponse_UpdatePlayerPresenceSelf& Resp);
	void HandleGetPlayerPresenceSelf(const RallyHereAPI::FResponse_GetPlayerPresenceSelf& Resp);
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
};
