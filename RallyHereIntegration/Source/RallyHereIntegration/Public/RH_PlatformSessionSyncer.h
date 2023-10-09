#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineTypes.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
#include "GameFramework/OnlineReplStructs.h"

#include "RH_Common.h"
#include "RH_SessionData.h"

#include "RH_PlatformSessionSyncer.generated.h"

class URH_SessionView;
class URH_JoinedSession;
class IOnlineSession;
class URH_LocalPlayerSessionSubsystem;

class URH_PlatformSessionSyncer;

/** Session id setting name, used to store the RH Session id on the platform session objects */
#define SETTING_RALLYHERE_SESSION_ID FName(TEXT("SESSIONRALLYHEREID"))

/** Delegates for when platform synchronization objects are cleaned up */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_PlatformSessionSyncerCleanupDynamicDelegate, URH_PlatformSessionSyncer*, Syncer);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_PlatformSessionSyncerCleanupDelegate, URH_PlatformSessionSyncer*);

/** @ingroup Session
 *  @{
 */

/** @brief Synchronization object to sync state between a Rally Here Session and a Platform Session (such as a Steam session) */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlatformSessionSyncer : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	/** 
	* @brief Initialize the sycnrhonization object with a RallyHere session id and a session owner - requires that the owner contain that session 
	* @param [in] InSessionId The Rally Here session id for which we are synchronizing state
	* @param [in] InOwner Session owner interface for use in looking up the session and other information
	* @return Whether initialization was successful.  If initialization was successful, Cleanup() must be called to properly clean up state
	*/
	bool Initialize(const FString& InSessionId, FRH_SessionOwnerPtr InOwner);
	
	/**
	* @brief Clean up the synchronization object, typically used when the RallyHere session is expired
	* @param [in] CompletionDelegate Delegate to call when cleanup is complete
	*/
	void Cleanup(const FSimpleDelegate& CompletionDelegate = FSimpleDelegate());

	/**
	* @brief Get the RallyHere session id that this object is synchronizing to
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE FString GetRHSessionId() const { return RHSessionId; }
	
	/**
	* @brief Helper function to get the RallyHere session objcet from the session owner (based on the result of GetRHSessionId())
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	URH_JoinedSession* GetRHSession() const;
	
	/**
	* @brief Helper function to get the Platform Session Id from the RallyHere session object (based on the result of GetRHSession())
	* @param [out] PlatformSessionId The platform session id to fill in
	* @return Whether the platform session id was successfully filled in
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	bool GetPlatformSessionIdFromRHSession(FUniqueNetIdRepl& PlatformSessionId) const;

	/**
	* @brief Get the platform session object that this object is synchronizing to from the OnlineSubsystem
	*/
	FNamedOnlineSession* GetPlatformSession() const;

	/**
	* @brief Helper function to get the Platform Session Id from the platform session object (based on the result of GetPlatformSession())
	* @param [out] PlatformSessionId The platform session id to fill in
	* @return Whether the platform session id was successfully filled in
	*/
	bool GetPlatformSessionIdFromPlatformSession(FUniqueNetIdRepl& PlatformSessionId) const;

	/**
	* @brief Static helper function to convert a platform id to a json string
	* @param [in] PlatformId The platform id to convert
	* @param [out] OutJson The json string to fill in
	* @return Whether the json string was successfully filled in
	*/
	static bool ConvertPlatformSessionIdToJson(const FUniqueNetIdRepl& PlatformId, FString& OutJson);

	/**
	* @brief Get the session owner interface that this object is using to look up session information
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	TScriptInterface<IRH_SessionOwnerInterface> GetSessionOwner() const { return SessionOwner.ToScriptInterface(); };

	/**
	* @brief Get whether the local player is the "scout" - the player responsible for creation of the platform session if one does not exist
	*/
	bool IsLocalPlayerScout() const;
	
	/**
	* @brief Whether this object is in the process of, or has completed, cleanup
	*/
	bool IsCleaningUp() const { return CurrentSyncActionState == ESyncActionState::Cleanup || CurrentSyncActionState == ESyncActionState::CleanupComplete; }

	/**
	* @brief Whether this object has completed, cleanup
	*/
	bool IsCleanupComplete() const { return CurrentSyncActionState == ESyncActionState::CleanupComplete; }
	
	/** 
	* @brief Static helper function to join a rally here session based off a platform session search result (received/accepted invites from the OSS typically come in the form of search results)
	* @param [in] SessionOwner The session owner object to use when joining the session
	* @param [in] Session The Platform Session Search Result to join
	* @param [in] JoinDetails The join details to use when joining the session
	* @param [in] Delegate The delegate to fire when the join is complete
	*/
	static void JoinRHSessionByPlatformSession(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult& Session, const FRHAPI_SelfSessionPlayerUpdateRequest& JoinDetails, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	UE_DEPRECATED(5.0, "Please use the version with join details")
	static void JoinRHSessionByPlatformSession(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult& Session, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock())
	{
		JoinRHSessionByPlatformSession(SessionOwner, Session, URH_OnlineSession::GetJoinDetailDefaults(SessionOwner.GetObject()), Delegate);
	}
	UE_DEPRECATED(5.0, "Please use the version with the error delegate and join details")
	FORCEINLINE static void JoinRHSessionByPlatformSession(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult& Session, FRH_GenericSuccessBlock Delegate)
	{
		JoinRHSessionByPlatformSession(SessionOwner, Session, URH_OnlineSession::GetJoinDetailDefaults(SessionOwner.GetObject()), RH_ConvertGenericSucessDelegateBlock(Delegate));
	}

	/**
	* @brief Marks the session as started (note - asynchronous)
	*/
	bool StartPlatformSession();
	
	/**
	* @brief Marks the session as ended (note - asynchronous)
	*/
	bool EndPlatformSession();

	/**
	* @brief Notification helper to let the synchronization object know that a session has been created (from the session owner, as the synchronization object does not bind the callback directly)
	*/
	void OnPlatformSessionCreated(bool bSuccess);
	/**
	* @brief Notification helper to let the synchronization object know that a session has been joined (from the session owner, as the synchronization object does not bind the callback directly)
	*/
	void OnPlatformSessionJoined(EOnJoinSessionCompleteResult::Type Result);
	/**
	* @brief Notification helper to let the synchronization object know that a session has been started (from the session owner, as the synchronization object does not bind the callback directly)
	*/
	void OnPlatformSessionStarted(bool bSuccess);
	/**
	* @brief Notification helper to let the synchronization object know that a session has been ended (from the session owner, as the synchronization object does not bind the callback directly)
	*/
	void OnPlatformSessionEnded(bool bSuccess);
	/**
	* @brief Notification helper to let the synchronization object know that a session has been destroyed (from the session owner, as the synchronization object does not bind the callback directly)
	*/
	void OnPlatformSessionDestroyed(bool bSuccess);

	/**
	 * @brief Handler for whenever the associated session is updated.
	 * @param UpdatedSession The session that was updated.
	 */
	void OnRHSessionUpdated(URH_SessionView* UpdatedSession);

	/**
	* @brief Notification delegates for when cleanup of this object has completed
	*/
	FRH_PlatformSessionSyncerCleanupDelegate OnCleanupComplete;
	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = "Session", meta = (DisplayName = "OnCleanupComplete"))
	FRH_PlatformSessionSyncerCleanupDynamicDelegate BLUEPRINT_OnCleanupComplete;

	void SetCachedPlatformSessionInvite(const FOnlineSessionSearchResult& SessionInvite);

protected:

	/*
	* Flow Meta Steps (used in multiple flows)
	* (meta) OSS Join Session = OSS Find Session -> OSS Join Sessoin
	* (meta) OSS Leave Session = OSS End Session -> OSS Remove Session (local players?)
	*/

	/** @brief Sync Action state enum. */
	enum class ESyncActionState
	{
		Uninitialized, // we have not yet been initialize
		Unsynchronized, // we are not synchronized, and should be checking for actions to take
		CreatePlatformSession, // Flow = OSS Create Session -> RH Update Session with Platform Session Info
		JoinPlatformSession, // Flow = (meta) OSS Join Session
		LeavePlatformSession, // Flow = (meta) OSS End Session
		UpdateRHSession, // Flow = RH Update Session with Platform Session Info
		Synchronized, // we have synchronized our state
		Error, // we have encountered an error, and should not be taking any actions until a new kick off

		// these states are special, anything beyond this point is a terminal state
		Cleanup, // we are cleaning up state, and no longer listening for updates
		CleanupComplete, // cleanup is done (we are in a terminal state)
	};

	/**
	 * @brief Check our current state against the session, and decide if we need to take any action.
	 */
	void CheckState();
	/**
	 * @brief Change to a new state.
	 * @param [in] NewState Target new state.
	 */
	void KickOffState(ESyncActionState NewState);
	/**
	 * @brief Called when a Sync Action State is complete.
	 * @param [in] bSuccess Whether the action was successful.
	 * @param [in] bDeferFrame Whether to defer the frame before checking the state again.
	 */
	void SyncActionComplete(bool bSuccess, bool bDeferFrame = true);
	/**
	 * @brief Take in information from the paired platform session into the RH Session.
	 */
	void UpdateRHSessionWithPlatformSession();
	/**
	 * @brief Create a platform session.
	 */
	void CreatePlatformSession();
	/**
	 * @brief Join the platform session.
	 */
	void JoinPlatformSession();
	/**
	 * @brief Used by Join Platform session once found to join it.
	 * @param [in] SearchResult The search result to join.
	 */
	void JoinFoundPlatformSession(const FOnlineSessionSearchResult& SearchResult);
	/**
	 * @brief Leave the platform session.
	 */
	void LeavePlatformSession();
	/**
	 * @brief Cleanup internal state of the session syncer.
	 */
	void CleanupInternal();
	/**
	 * @brief The current state of the syncer.
	 */
	ESyncActionState CurrentSyncActionState;
	/**
	 * @brief Sets the new action state for the syncer.
	 * @param [in] NewState New State to be in.
	 */
	bool SetSyncActionState(ESyncActionState NewState);
	/**
	 * @brief Owner of the session.
	 */
	FRH_SessionOwnerPtr SessionOwner;
	/**
	 * @brief Get the unique net id of the session owner.
	 */
	FUniqueNetIdWrapper	GetOSSUniqueId() const;
	/**
	 * @brief Get the online subsystem for the platform session.
	 */
	IOnlineSubsystem*	GetOSS() const;
	/**
	 * @brief Get the online subsystem session interface for the platform session.
	 */
	IOnlineSessionPtr	GetOSSSessionInterface() const;
	/**
	 * @brief Rally Here session Id.
	 */
	UPROPERTY(BlueprintGetter = GetRHSessionId, Category = "Session")
	FString RHSessionId;
	/**
	 * @brief Name of the session.
	 */
	UPROPERTY()
	FName OSSSessionName;
	/**
	 * @brief Internal platoform for the session.
	 */
	UPROPERTY()
	ERHAPI_Platform RHPlatform;

	/**
	* @brief The cached platform session invite.
	*/
	TOptional<FOnlineSessionSearchResult> CachedSessionInvite;

	/**
	* @brief whether cleanup is deferred until the end of the current action
	*/
	bool bDeferCleanup = false;
};

/** @} */