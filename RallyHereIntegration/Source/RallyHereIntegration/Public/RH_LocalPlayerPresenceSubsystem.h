// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "PresenceAPI.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "UsersAPI.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"

#include "RH_LocalPlayerPresenceSubsystem.generated.h"

/** @ingroup LocalPlayer
 *  @{
 */

/**
 * @brief Subsystem to manage the local players presence.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_LocalPlayerPresenceSubsystem : public URH_LocalPlayerSubsystemPlugin
{
	GENERATED_BODY()
public:
	/**
	* @brief Initialize the subsystem.
	*/
	virtual void Initialize() override;
	/**
	* @brief Safely tears down the subsystem.
	*/
	virtual void Deinitialize() override;
	/**
	 * @brief Calls the Presence API to update a players personal presence information.
	 * @param [in] Request Request object containing the information to update.
	 * @param [in] Delegate Callback delegate for if the request was successful or not.
	 */
	void UpdatePlayerPresenceSelf(RallyHereAPI::FRequest_UpdatePlayerPresenceSelf& Request, const RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf& Delegate);
	/**
	 * @brief Calls the Presence API to get your own player presence information.
	 * @param [in] Request Request object containing needed data for the call.
	 * @param [in] Delegate Callback delegate with the player presence information.
	 */
	void GetPlayerPresenceSelf(RallyHereAPI::FRequest_GetPlayerPresenceSelf& Request, const RallyHereAPI::FDelegate_GetPlayerPresenceSelf& Delegate);
	/**
	 * @brief Calls the Presence API to get the presence settings data.
	 * @param [in] Request Request object containing needed data for the call.
	 * @param [in] Delegate Callback delegate with the presence settings data.
	 */
	void GetSettings(RallyHereAPI::FRequest_GetPresenceSettings& Request, const RallyHereAPI::FDelegate_GetPresenceSettings& Delegate);
	/**
	 * @brief Requests an update of your presence status to be set to the desired status.
	 * @param [in] NewStatus The new status to set.
	 */
	UFUNCTION(BlueprintSetter, Category = "Presence")
	void SetDesiredStatus(ERHAPI_OnlineStatus NewStatus) { DesiredStatus = NewStatus; RefreshStatus(); }
	/**
	 * @brief Gets the desired status that the player wants to be set to.
	 */
	UFUNCTION(BlueprintGetter, Category = "Presence")
	ERHAPI_OnlineStatus GetDesiredStatus() const { return DesiredStatus; }
	/**
	 * @brief Requests an update of your presence message to be set to the desired message.
	 * @param [in] NewMessage The new message to set.
	 */
	UFUNCTION(BlueprintSetter, Category = "Presence")
	void SetDesiredMessage(FString NewMessage) { DesiredMessage = NewMessage; RefreshStatus(); }
	/**
	 * @brief Gets the desired message that the player wants to be set to.
	 */
	UFUNCTION(BlueprintGetter, Category = "Presence")
	FString GetDesiredMessage() const { return DesiredMessage; }
	/**
	 * @brief Requests an update of your presence do not disturb setting to be set to the desired setting.
	 * @param [in] NewDoNotDisturb The new do not disturb setting desired.
	 */
	UFUNCTION(BlueprintSetter, Category = "Presence")
	void SetDesiredDoNotDisturb(bool NewDoNotDisturb) { DesiredDoNotDisturb = NewDoNotDisturb; RefreshStatus(); }
	/**
	 * @brief Gets the desired do not disturb setting that the player wants to be set to.
	 */
	UFUNCTION(BlueprintGetter, Category = "Presence")
	bool GetDesiredDoNotDisturb() const { return DesiredDoNotDisturb; }
	/**
	 * @brief Starts polling to refresh the player's presence status.
	 */
	UFUNCTION(BlueprintCallable, Category = "Presence")
	void StartRefreshTimer();
	/**
	 * @brief Stops polling to refresh the player's presence status.
	 */
	UFUNCTION(BlueprintCallable, Category = "Presence")
	void StopRefreshTimer();
	/**
	 * @brief Forces an update of the players presence with a status change.
	 */
	void RefreshStatus();

	/**
	 * @brief Returns whether the refresh timer is active.
	 * param [in]
	 */
	UFUNCTION(BlueprintPure, Category = "Presence")
	bool IsRefreshTimerActive(float& TimeRemaining) const;

protected:
	/** @brief Callback that occurs whenever the local player this subsystem is associated with changes. */
	virtual void OnUserChanged() override;
	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();
	/**
	 * @brief Polls the status of the players presence.
	 * @param [in] Delegate Callback delegate when the poll completes.
	 */
	void PollRefreshStatus(const FRH_PollCompleteFunc& Delegate);
	/** @brief Poller for the local presence. */
	FRH_AutoPollerPtr Poller;
	/** @brief The Status that the local player is being changed to. */
	UPROPERTY(BlueprintGetter = GetDesiredStatus, BlueprintSetter = SetDesiredStatus, Category = "Presence")
	ERHAPI_OnlineStatus DesiredStatus;
	/** @brief The presence message that the local player is being changed to. */
	UPROPERTY(BlueprintGetter = GetDesiredMessage, BlueprintSetter = SetDesiredMessage, Category = "Presence")
	FString DesiredMessage;
	/** @brief The do not disturb setting that the local player is being changed to. */
	UPROPERTY(BlueprintGetter = GetDesiredDoNotDisturb, BlueprintSetter = SetDesiredDoNotDisturb, Category = "Presence")
	bool DesiredDoNotDisturb;
};

/** @} */