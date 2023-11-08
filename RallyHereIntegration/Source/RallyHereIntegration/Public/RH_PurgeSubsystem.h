// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"

#include "UsersAPI.h"

#include "RH_PurgeSubsystem.generated.h"

#define HOURS_TO_ACCOUNT_FOR_CLOCK_DRIFT 1

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnPurgeStatusUpdatedDynamicDelegate, bool, bSuccess, FRHAPI_PurgeResponse, PurgeStatus, FRH_ErrorInfo, Error);
DECLARE_DELEGATE_ThreeParams(FRH_OnPurgeStatusUpdatedDelegate, bool, FRHAPI_PurgeResponse, FRH_ErrorInfo);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnPurgeStatusUpdatedDelegateBlock, FRH_OnPurgeStatusUpdatedDelegate, FRH_OnPurgeStatusUpdatedDynamicDelegate, bool, FRHAPI_PurgeResponse, FRH_ErrorInfo);

/** @defgroup Purge RallyHere Purge
 *  @{
 */

/**
 * @brief Subsystem to manage purging a players account.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PurgeSubsystem : public URH_LocalPlayerSubsystemPlugin
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
	 * @brief Requests a purge for the local player at a specific time.
	 * @param [in] PurgeTime The exact time to complete the purge.
	 * @param [in] Delegate Callback with the current status of the purge request.
	 */
	bool EnqueueMeForPurge(const FDateTime& PurgeTime, const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate = FRH_OnPurgeStatusUpdatedDelegate()) { return EnqueueMeForPurge(TOptional<FDateTime>(PurgeTime), Delegate); };
	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Enqueue Me for Purge with Purge Time", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_EnqueueMeForPurgeWithPurgeTime(FDateTime PurgeTime, const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return EnqueueMeForPurge(PurgeTime, Delegate); };
	/**
	 * @brief Requests a purge for the local player, uses a configured default amount of time til purge from request.
	 * @param [in] Delegate Callback with the current status of the purge request.
	 */
	bool EnqueueMeForPurge(const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate = FRH_OnPurgeStatusUpdatedDelegate()) { return EnqueueMeForPurge(TOptional<FDateTime>(), Delegate); };
	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Enqueue Me for Purge", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_EnqueueMeForPurge(const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return EnqueueMeForPurge(Delegate); };
	/**
	 * @brief Requests a purge for the local player that will be resolved immediately.
	 * @param [in] Delegate Callback with the current status of the purge request.
	 */
	bool PurgeMeImmediately(const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate = FRH_OnPurgeStatusUpdatedDelegate()) { return EnqueueMeForPurge(FDateTime::UtcNow() - FTimespan::FromHours(HOURS_TO_ACCOUNT_FOR_CLOCK_DRIFT), Delegate); };
	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Purge Me Immediately", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_PurgeMeImmediately(const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return PurgeMeImmediately(Delegate); };
	/**
	 * @brief Requests to clear the purge request for the local play.
	 * @param [in] Delegate Callback with the current status of the purge request.
	 */
	bool DequeueMeForPurge(const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate = FRH_OnPurgeStatusUpdatedDelegate());
	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Dequeue Me for Purge", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_DequeueMeForPurge(const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return DequeueMeForPurge(Delegate); };
	/**
	 * @brief Requests the status of a purge for the local player.
	 * @param [in] Delegate Callback with the current status of the purge request.
	 */
	bool QueryMyPurgeStatus(const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate = FRH_OnPurgeStatusUpdatedDelegate());
	UFUNCTION(BlueprintCallable, Category = "Purge", meta = (DisplayName = "Get My Purge Status", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_QueryMyPurgeStatus(const FRH_OnPurgeStatusUpdatedDynamicDelegate& Delegate) { return QueryMyPurgeStatus(Delegate); };
	/**
	 * @brief Gets the local players Purge Status.
	 */
	UFUNCTION(BlueprintGetter, Category = "Purge")
	FRHAPI_PurgeResponse GetMyPurgeStatus() const { return PurgeStatus; };

protected:
	/** @brief Callback that occurs whenever the local player this subsystem is associated with changes. */
    virtual void OnUserChanged() override;
	/**
	* @brief Creates the request to purge the local player.
	* @param [in] PurgeTime The time for the player to be purged
	* @param [in] Delegate Delegate callback for the request.
	*/
	virtual bool EnqueueMeForPurge(const TOptional<FDateTime>& PurgeTime, const FRH_OnPurgeStatusUpdatedDelegateBlock& Delegate);
	/**
	* @brief Handles the response to a Purge Me call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
    virtual void OnPurgeMe(const RallyHereAPI::FResponse_QueueMeForPurge& Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate);
	/**
	* @brief Handles the response to a Dequeue Me For Purge call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
    virtual void OnDequeueMe(const RallyHereAPI::FResponse_DequeueMeForPurge& Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate);
	/**
	* @brief Handles the response to a Get Purge Status call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
    virtual void OnGetMyPurgeStatus(const RallyHereAPI::FResponse_GetQueuePurgeStatusForMe& Resp, const FRH_OnPurgeStatusUpdatedDelegateBlock Delegate);
	/** @brief Current Purge Status */
	FRHAPI_PurgeResponse PurgeStatus;
};

/** @} */