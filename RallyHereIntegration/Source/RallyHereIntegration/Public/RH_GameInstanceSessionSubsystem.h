// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "SessionsAPI.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_SessionData.h"
#include "RH_Polling.h"

#include "RH_GameInstanceSessionSubsystem.generated.h"

// #RHTODO - listen for session update and if local player(s) are removed from session, unsync and require a resync
// #RHTODO - handle platform session restrictions

class URH_GameInstanceSubsystem;
class URH_GameInstanceSessionSubsystem;
class URH_GameInstanceServerBootstrapper;
class URH_GameInstanceClientBootstrapper;
class ARH_OnlineBeaconHost;

#define RH_SESSION_PARAMETER_NAME (TEXT("RHSessionId="))
#define RH_INSTANCE_PARAMETER_NAME (TEXT("RHInstanceId="))


UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_GameInstanceSessionSyncDynamicDelegate, URH_JoinedSession*, Session, bool, bSuccess, const FString&, Error);
DECLARE_DELEGATE_ThreeParams(FRH_GameInstanceSessionSyncDelegate, URH_JoinedSession*, bool, const FString&);
DECLARE_RH_DELEGATE_BLOCK(FRH_GameInstanceSessionSyncBlock, FRH_GameInstanceSessionSyncDelegate, FRH_GameInstanceSessionSyncDynamicDelegate, URH_JoinedSession*, bool, const FString&)

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnBeaconCreatedDynamicDelegate, ARH_OnlineBeaconHost*, Host);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnBeaconCreatedDelegate, ARH_OnlineBeaconHost*);

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_OnActiveSessionChangedDynamicDelegate, URH_JoinedSession*, OldSession, URH_JoinedSession*, NewSession);
DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_OnActiveSessionChangedDelegate, URH_JoinedSession*, URH_JoinedSession*);


/** @ingroup GameInstance
 *  @{
 */

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_ActiveSessionState
{
public:
	GENERATED_USTRUCT_BODY()

	/** @brief Session we are synced to. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	URH_JoinedSession* Session;

	/** @brief A fallback security token to be used while the security token set is in flight */
	TOptional<FString> FallbackSecurityToken;

	/** @brief If set, the session instance is failed and unrecoverable. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	bool bHasBeenMarkedFubar;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	bool bIsBackfillTerminated;

	FRH_ActiveSessionState()
		: Session(nullptr)
		, bHasBeenMarkedFubar(false)
		, bIsBackfillTerminated(false)
	{
	}

	/** @brief Reset the state as part of a transition to a new active session */
	void ResetState()
	{
		Session = nullptr;
		FallbackSecurityToken.Reset();
		bHasBeenMarkedFubar = false;
		bIsBackfillTerminated = false;
	}
};

 /**
  * @brief Subsystem for handling sessions within a game instance.
  */
UCLASS(Config=RallyHereIntegration, DefaultConfig, Within = RH_GameInstanceSubsystem)
class RALLYHEREINTEGRATION_API URH_GameInstanceSessionSubsystem : public URH_GameInstanceSubsystemPlugin
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
	* @brief Requests the the instance to transition to a new session.
	* @param [in] SessionInfo The session being transitioned to.
	* @param [in] Delegate Callback delegate for when the session is now active, or failed to transition.
	*/
	virtual void SyncToSession(URH_JoinedSession* SessionInfo, const FRH_GameInstanceSessionSyncBlock& Delegate = FRH_GameInstanceSessionSyncBlock());
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Sync to Session", AutoCreateRefTerm = "Delegate"))
	/**
	* @brief Blueprint compatible wrapper for SyncToSession
	*/
	void BLUEPRINT_SyncToSession(URH_JoinedSession* SessionInfo, const FRH_GameInstanceSessionSyncDynamicDelegate& Delegate) { SyncToSession(SessionInfo, Delegate); }
	/**
	* @brief Gets the Session Data for the active session.
	*/
	virtual const FRHAPI_InstanceInfo* GetInstance() const;
	/**
	* @brief Checks it the session data is for a locally hosted instance.
	* @param [in] Instance The instance being checked.
	* @return If true, the instance is hosted locally.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance")
	virtual bool IsLocallyHostedInstance(const FRHAPI_InstanceInfo& Instance) const;
	/**
	* @brief Checks it the session is locally hosted.
	* @param [in] Session The session being checked.
	* @return If true, the session is hosted locally.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance")
	virtual bool IsLocallyHostedSession(const URH_JoinedSession* Session) const { return Session->GetInstanceData() ? IsLocallyHostedInstance(*Session->GetInstanceData()) : false; }
	/**
	* @brief Checks if a given player in a session is local to the client.
	* @param [in] Player The player being checked.
	* @return If true, the player is local to the client.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance")
	virtual bool IsPlayerLocal(const FRHAPI_SessionPlayer& Player) const;
	/**
	* @brief Gets the session that the instance is swapping to.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	FORCEINLINE URH_JoinedSession* GetDesiredSession() const { return DesiredSession; }
	/**
	* @brief Gets the session that is currently active.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	FORCEINLINE URH_JoinedSession* GetActiveSession() const { return ActiveSessionState.Session; }
	/**
	* @brief Gets the fallback security token
	*/
	FORCEINLINE const TOptional<FString>& GetFallbackSessionSecurityToken() const { return ActiveSessionState.FallbackSecurityToken; }
	/**
	* @brief Gets if the instance has been marked failed.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	FORCEINLINE bool IsMarkedFubar() const { return ActiveSessionState.bHasBeenMarkedFubar; }
	/**
	* @brief Gets if the instance has been marked failed.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	FORCEINLINE bool IsBackfillTerminated() const { return ActiveSessionState.bIsBackfillTerminated; }
	/**
	* @brief Checks if the session has all the players and is good to change maps.
	* @param [in] Session The session being checked.
	* @return If true, the session is ready for a map transition.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance")
	virtual bool IsReadyToJoinInstance(const URH_JoinedSession* Session, bool bLog = false) const;
	/**
	* @brief Starts the process of transitioning the instance to a new session.
	* @param [in] Delegate Callback delegate for when the session is now active, or failed to transition.
	*/
	virtual bool StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncBlock& Delegate = FRH_GameInstanceSessionSyncBlock());
	/**
	* @brief Blueprint compatible wrapper for StartJoinInstanceFlow
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Start Join Instance Flow", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncDynamicDelegate& Delegate) { return StartJoinInstanceFlow(Delegate); }
	/**
	* @brief Starts the process of leaving a previous the instance session.
	* @param [in] bAlreadyDisconnected If true, the instance is already disconnected from the previous session.
	* @param [in] bCheckDesired If true, and the instance has a desired session, start joining that session.
	* @param [in] Delegate Callback delegate for when the instance is left.
	*/
	virtual void StartLeaveInstanceFlow(bool bAlreadyDisconnected = false, bool bCheckDesired = false, const FRH_GameInstanceSessionSyncBlock& Delegate = FRH_GameInstanceSessionSyncBlock());
	/**
	* @brief Blueprint compatible wrapper for StartLeaveInstanceFlow
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Start Leave Instance Flow", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncDynamicDelegate& Delegate) { StartLeaveInstanceFlow(bAlreadyDisconnected, bCheckDesired, Delegate); }
	/**
	* @brief Set an instance to a failed state marking it unrecoverable.
	* @param [in] Reason The reason the instance was marked failed.
	* @param [in] Delegate Callback delegate for if the instance was marked failed.
	*/
	virtual void MarkInstanceFubar(const FString& Reason, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	UE_DEPRECATED(5.0, "Please use the version with the error delegate")
	FORCEINLINE void MarkInstanceFubar(const FString& Reason, const FRH_GenericSuccessBlock& Delegate)
	{
		MarkInstanceFubar(Reason, RH_ConvertGenericSucessDelegateBlock(Delegate));
	}
	/**
	* @brief Blueprint compatible wrapper for MarkInstanceFubar
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Mark Instance Fubar", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_MarkInstanceFubar(const FString& Reason, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { MarkInstanceFubar(Reason, Delegate); }

	/**
	 * @brief @brief Attempt to generate a join URL from a session.
	 * @param [in] Session The session to be joined.
	 * @param [in] lastURL The last URL used to connect to a session.
	 * @param [out] outURL The URL to join the session.
	 * @return If true, a join URL was generated.
	 */
	virtual bool GenerateJoinURL(const URH_JoinedSession* Session, FURL& lastURL, FURL& outURL) const;
	/**
	 * @brief @brief Attempt to generate a host URL from a session.
	 * @param [in] Session The session a host url is being requested for.
	 * @param [in] lastURL The last URL used to connect to a session.
	 * @param [out] outURL The Host URL fot the session.
	 * @return If true, a host URL was generated.
	 */
	virtual bool GenerateHostURL(const URH_JoinedSession* Session, FURL& lastURL, FURL& outURL) const;

	/**
	 * @brief Handles verification and validation of a player attempting to connect to the instance.
	 * @param [in] Connection The player that is attempting to connect.
	 * @param [out] ErrorMessage If an Error happens for this player being valid, this will be set to the error message.
	 */
	virtual bool ValidateIncomingConnection(class UNetConnection* Connection, FString& ErrorMessage) const;

	/**
	 * @brief Gets whether backfill should be kept alive
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Session", meta = (DisplayName = "Should Keep Instance Health Alive"))
	bool GetShouldKeepInstanceHealthAlive() const;

	/**
	 * @brief Gets the health status of the instance to report to the API
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Session", meta = (DisplayName = "Get Instance Health Status To Report"))
	ERHAPI_InstanceHealthStatus GetInstanceHealthStatusToReport() const;

	/**
	 * @brief Gets whether backfill should be kept alive
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Session", meta = (DisplayName = "Should Keep Backfill Alive"))
	bool GetShouldKeepBackfillAlive() const;

	/**
	 * @brief Shuts down backfill handling for the current session, cannot be reversed
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Terminate Backfill"))
	virtual void TerminateBackfill() { ActiveSessionState.bIsBackfillTerminated = true; }

	/**
	 * @brief Multicast delegate fired when a beacon is created so that host objects can be registered.
	 */
	FRH_OnBeaconCreatedDelegate OnBeaconCreated;
	/**
	 * @brief Multicast delegate fired when a beacon is created so that host objects can be registered.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session|Instance", meta = (DisplayName = "On Beacon Created"))
	FRH_OnBeaconCreatedDynamicDelegate BLUEPRINT_OnBeaconCreated;

	/**
	 * @brief Multicast delegate fired when the active session is changed
	 */
	FRH_OnActiveSessionChangedDelegate OnActiveSessionChanged;
	/**
	 * @brief Multicast delegate fired when the active session is changed
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session|Instance", meta = (DisplayName = "On Active Session Changed"))
	FRH_OnActiveSessionChangedDynamicDelegate BLUEPRINT_OnActiveSessionChanged;

protected:
	/** @brief Session we want to sync to. */
	UPROPERTY(BlueprintGetter = GetDesiredSession, Transient, Category = "Session|Instance")
	URH_JoinedSession*	DesiredSession;

	/** @brief Session we are synced to. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	FRH_ActiveSessionState ActiveSessionState;
	
	/** @brief Poller for the host's health check. */
	FRH_AutoPollerPtr InstanceHealthPoller;
	
	/** @brief Poller for the host's health check. */
	FRH_AutoPollerPtr BackfillPoller;

	/**
	 * @brief Sets the current active session
	 * @param [in] Session to set as active session
	 */
	virtual void SetActiveSession(URH_JoinedSession* Session);

	/**
	 * @brief Handles verification and validation of a player attempting to connect to the instance.
	 * @param [in] GameMode The game mode the instance is running.
	 * @param [in] NewPlayer The player that is attempting to connect.
	 * @param [out] ErrorMessage If an Error happens for this player being valid, this will be set to the error message.
	 */
	virtual void GameModePreloginEvent(class AGameModeBase* GameMode, const FUniqueNetIdRepl& NewPlayer, FString& ErrorMessage);
	/**
	 * @brief Handles logic for when a player connects
	 * @param [in] GameMode The game mode the instance is running.
	 * @param [in] NewPlayer The player that is connecting.
	 */
	virtual void GameModePostLoginEvent(class AGameModeBase* GameMode, APlayerController* NewPlayer);
	/**
	 * @brief Handles logic for when a player disconnects
	 * @param [in] GameMode The game mode the instance is running.
	 * @param [in] Exiting The player that is disconnecting.
	 */
	virtual void GameModeLogoutEvent(class AGameModeBase* GameMode, AController* Exiting);

	/**
	 * @brief Creates a match for a given session using the match subsystem
	 */
	virtual void CreateMatchForSession(const URH_JoinedSession* Session) const;
	/**
	 * @brief Called when the map completes loading.
	 * @param [in] pWorld The world that was being traveled to.
	 */
	virtual void OnMapLoadComplete(UWorld* pWorld);
	/**
	 * @brief Called when there was a network failure trying to connect to the instance.
	 * @param [in] World The world that was being connected to.
	 * @param [in] NetDriver The net driver that was being used to connect.
	 * @param [in] FailureType The type of failure that occurred.
	 * @param [in] ErrorString The error string associated with the failure.
	 */
	virtual void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString);
	/**
	 * @brief Called when there is a travel failure to the instance map.
	 * @param [in] pWorld The world that was being traveled to.
	 * @param [in] FailureType The type of failure that occurred.
	 * @param [in] ErrorString The error string associated with the failure.
	 */
	virtual void OnTravelFailure(UWorld* pWorld, ETravelFailure::Type FailureType, const FString& ErrorString);
	/**
	 * @brief Creates a beacon host for the instance.
	 * @param [in] pWorld The world the beacon is for.
	 * @param [in] ListenPort The port the beacon listens to.
	 * @param [in] bShutdownWorldNetDriver If set, then the beacon shuts down the worlds Net Driver when created.
	 */
	virtual class ARH_OnlineBeaconHost* CreateBeaconHost(class UWorld* pWorld, uint32 ListenPort, bool bShutdownWorldNetDriver = true);
	/**
	 * @brief Called when instance health should be updated
	 * @param [in] Delegate Callback delegate for when the health is updated.
	 */
	virtual void PollInstanceHealth(const FRH_PollCompleteFunc& Delegate);
	/**
	 * @brief Called when backfill should be updated
	 * @param [in] Delegate Callback delegate for when the health is updated.
	 */
	virtual void PollBackfill(const FRH_PollCompleteFunc& Delegate);

	// analytics hooks
	void EmitJoinInstanceStartedEvent(const URH_JoinedSession* Session) const;
	void EmitJoinInstanceCompletedEvent(const URH_JoinedSession* Session, bool bSuccess, const FString& ErrorReason = TEXT("")) const;
	void EmitLeaveInstanceEvent(const URH_JoinedSession* Session, const FString& Reason = TEXT("")) const;
};

/** @} */