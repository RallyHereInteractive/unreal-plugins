// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "SessionsAPI.h"
#include "PlayerExperienceAPI.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_PlayerExperienceCollector.h"

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
struct RALLYHEREINTEGRATION_API FRH_ActiveSessionStatePlayerContext
{
public:
	GENERATED_USTRUCT_BODY()

	/** @brief The player id for the context */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	FGuid RHPlayerId;

	/** @brief The controller for the context */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	TWeakObjectPtr<AController> Controller;

	/** @brief The time the player joined the server */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	FDateTime JoinedTime;

	/** @brief The time the player left the server */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	FDateTime LeaveTime;

	/** @brief The total time the player has been connected */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	float DurationSeconds;

FRH_ActiveSessionStatePlayerContext()
		: RHPlayerId(FGuid())
		, Controller(nullptr)
		, JoinedTime(FDateTime())
		, LeaveTime(FDateTime())
		, DurationSeconds(0.0f)
	{
	}
};

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

	/** @brief If set, the session should not try to backfill. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	bool bIsBackfillTerminated;

	/** @brief Array player contexts for the active session, used to track connectivity times and such */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	TArray<FRH_ActiveSessionStatePlayerContext> PlayerContexts;

	/** @brief MatchId for the active session */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	FString MatchId;
	
	/** @brief Player Experience Collector for the active session */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	URH_PEXCollector* PlayerExperienceCollector;

	/** @brief Time the session was made active */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	FDateTime ActivationTime;

	/** @brief Time the session was made active */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	bool bIsHost;

	/** @brief Cached information for the session info at the time it was activated, in case it is changed or lost */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Instance")
	FRHAPI_Session ActivationSessionInfo;

	FRH_ActiveSessionState()
		: Session(nullptr)
		, bIsBackfillTerminated(false)
		, PlayerExperienceCollector(nullptr)
		, ActivationTime()
		, bIsHost(false)
		, ActivationSessionInfo()
	{
	}

	/** @brief Reset the state as part of a transition to a new active session */
	void ResetState()
	{
		Session = nullptr;
		FallbackSecurityToken.Reset();
		bIsBackfillTerminated = false;
		PlayerContexts.Reset();
		MatchId.Empty();
		if (PlayerExperienceCollector != nullptr)
		{
			PlayerExperienceCollector->Close();
			PlayerExperienceCollector = nullptr;
		}
		ActivationTime = FDateTime();
		bIsHost = false;
		ActivationSessionInfo = FRHAPI_Session();
	}
};

 /**
  * @brief Subsystem for handling sessions within a game instance.
  */
UCLASS(Config=RallyHereIntegration, DefaultConfig, Within = RH_GameInstanceSubsystem)
class RALLYHEREINTEGRATION_API URH_GameInstanceSessionSubsystem : public URH_GameInstanceSubsystemPlugin, public IRH_PEXOwnerInterface
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
	* @private
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
	virtual bool IsLocallyHostedSession(const URH_JoinedSession* Session) const { return Session != nullptr && Session->GetInstanceData() ? IsLocallyHostedInstance(*Session->GetInstanceData()) : false; }
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
	FORCEINLINE bool IsBackfillTerminated() const { return ActiveSessionState.bIsBackfillTerminated; }
	/**
	* @brief Checks if the session has all the players and is good to change maps, and conditionally logs errors
	* @param [in] Session The session being checked.
	* @param [in] bLog If true, log errors.
	* @return If true, the session is ready for a map transition.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance")
	virtual bool IsReadyToJoinInstance(const URH_JoinedSession* Session, bool bLog = false) const final;
	/**
	* @brief Checks if the session has all the players and is good to change maps, and passes back first error in a string
	* @param [in] Session The session being checked.
	* @param [out] Error The first error encountered.
	* @return If true, the session is ready for a map transition.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance")
	virtual bool IsReadyToJoinInstanceWithReason(const URH_JoinedSession* Session, FString& Error) const;
	
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
	virtual void TerminateBackfill();

	/**
	 * @brief Set the currently active session as joinable, and do any work necessary to make it so.  Automatically called if bAutoMakeSessionsJoinableOnHostMapLoadComplete is true
	 * @param [in] pWorld The world that is being hosted
	 */
	virtual bool MakeActiveSessionJoinable(UWorld* pWorld);

	/**
	 * @brief Multicast delegate fired when a beacon is created so that host objects can be registered.
	 */
	FRH_OnBeaconCreatedDelegate OnBeaconCreated;
	/**
	 * @private
	 * @brief Multicast delegate fired when a beacon is created so that host objects can be registered.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session|Instance", meta = (DisplayName = "On Beacon Created"))
	FRH_OnBeaconCreatedDynamicDelegate BLUEPRINT_OnBeaconCreated;

	/**
	 * @brief Multicast delegate fired when the active session is changed
	 */
	FRH_OnActiveSessionChangedDelegate OnActiveSessionChanged;
	/**
	 * @private
	 * @brief Multicast delegate fired when the active session is changed
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session|Instance", meta = (DisplayName = "On Active Session Changed"))
	FRH_OnActiveSessionChangedDynamicDelegate BLUEPRINT_OnActiveSessionChanged;

	/**
	 * @brief Get the active session state object
	 */
	UFUNCTION(BlueprintPure, Category = "Session|Instance")
	const FRH_ActiveSessionState& GetActiveSessionState() const { return ActiveSessionState; }
	/**
	 * @brief Get the active session state object
	 */
	UFUNCTION(BlueprintPure, Category = "Session|Instance")
	const FString& GetActiveMatchId() const { return ActiveSessionState.MatchId; }
	
	// IRH_PEXOwnerInterface
	// RUNTIME VALUES - called during collection
	/** @brief Get the engine to use for PEX calls */
	virtual UEngine* GetPEXEngine() const override;
	/** @brief Get the world to use for PEX calls */
	virtual UWorld* GetPEXWorld() const override;

	// CACHED VALUES - called during init
	/** @brief Get the match id to use for PEX calls */
	virtual FString GetPEXMatchId() const override;
	/** @brief Get the player id to use for PEX calls */
	virtual FGuid GetPEXPlayerId() const override;
	/** @brief Get the remote file directory to use for PEX calls */
	virtual FRH_RemoteFileApiDirectory GetPEXRemoteFileDirectory() const override;
	/** @brief Whether or not this owner represents the host of the match */
	virtual bool GetPEXIsHost() const override;

	// SUBMIT REPORTS - called during summary write
	/** @brief Submit a PEX Host Summary report */
	virtual void SubmitPEXHostSummary(FRHAPI_PexHostRequest&& Report) const override;
	/** @brief Submit a PEX Client Summary report */
	virtual void SubmitPEXClientSummary(FRHAPI_PexClientRequest&& Report) const override;
	/** @brief A helper function to override the PEX data before submission */
	virtual void ModifyPEXHostSummary(FRHAPI_PexHostRequest& Report) const;
	/** @brief A helper function to override the PEX data before submission */
	virtual void ModifyPEXClientSummary(FRHAPI_PexClientRequest& Report) const;
	
	
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
	* @brief Starts the process of transitioning the instance to the desired session.
	* @param [in] Delegate Callback delegate for when the session is now active, or failed to transition.
	*/
	virtual bool StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncBlock& Delegate = FRH_GameInstanceSessionSyncBlock());
	/**
	* @private
	* @brief Blueprint compatible wrapper for StartJoinInstanceFlow
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Start Join Instance Flow", AutoCreateRefTerm = "Delegate", DeprecatedFunction, DeprecationMessage = "Direct calls to StartJoinInstanceFlow are deprecated, please route calls through SyncToSession for consistency"))
	bool BLUEPRINT_StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncDynamicDelegate& Delegate) { return StartJoinInstanceFlow(Delegate); }
	/**
	* @brief Starts the process of leaving a previous the instance session.
	* @param [in] bAlreadyDisconnected If true, the instance is already disconnected from the previous session.
	* @param [in] bCheckDesired If true, and the instance has a desired session, start joining that session.
	* @param [in] Delegate Callback delegate for when the instance is left.
	*/
	virtual void StartLeaveInstanceFlow(bool bAlreadyDisconnected = false, bool bCheckDesired = false, const FRH_GameInstanceSessionSyncBlock& Delegate = FRH_GameInstanceSessionSyncBlock());
	/**
	* @private
	* @brief Blueprint compatible wrapper for StartLeaveInstanceFlow
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Start Leave Instance Flow", AutoCreateRefTerm = "Delegate", DeprecatedFunction, DeprecationMessage = "Direct calls to StartLeaveInstanceFlow are deprecated, please route calls through SyncToSession for consistency"))
	void BLUEPRINT_StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncDynamicDelegate& Delegate) { StartLeaveInstanceFlow(bAlreadyDisconnected, bCheckDesired, Delegate); }

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
	virtual void CreateMatchForSession(const URH_JoinedSession* Session, const FString& InMatchId = FString());
	/**
	 * @brief Creates a PlayerExperience (PEX) collector for the active session and match
	 */
	virtual class URH_PEXCollector* CreatePEXCollector();
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
	/**
	* @brief Initiate travel for the host to the instance
	* @param [in] pWorld The world being travelled.
	* @param [in] HostURL The URL to join the instance with.
	* @return If true, the travel was initiated.
	*/
	virtual bool HostTravel(UWorld* pWorld, const FURL& HostURL);
	/**
	 * @brief Initiate travel for a client to the instance
	 * @param [in] pWorld The world being travelled.
	 * @param [in] JoinURL The URL to join the instance with.
	 * @return If true, the travel was initiated.
	 */
	virtual bool ClientTravel(UWorld* pWorld, const FURL& JoinURL);

	// analytics hooks
	void EmitJoinInstanceStartedEvent(const URH_JoinedSession* Session) const;
	void EmitJoinInstanceCompletedEvent(const URH_JoinedSession* Session, bool bSuccess, const FString& ErrorReason = TEXT("")) const;
	void EmitLeaveInstanceEvent(const URH_JoinedSession* Session, const FString& Reason = TEXT("")) const;
};

/** @} */