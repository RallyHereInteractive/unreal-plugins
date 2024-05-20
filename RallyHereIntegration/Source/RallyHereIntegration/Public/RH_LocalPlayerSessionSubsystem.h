// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "SessionsAPI.h"
#include "Delegates/Delegate.h"
#include "Delegates/DelegateCombinations.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_SessionData.h"
#include "RH_SessionBrowser.h"
#include "RH_Polling.h"

#include "RH_LocalPlayerSessionSubsystem.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnLoginPollSessionsCompleteMulticastDelegate, bool);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnLoginPollSessionsCompleteMulticastDynamicDelegate, bool, bSuccess);

DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnFailedToJoinPlatformSessionMulticastDelegate, const FRH_ErrorInfo&);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnFailedToJoinPlatformSessionMulticastDynamicDelegate, const FRH_ErrorInfo&, ErrorInfo);

class URH_LocalPlayerSubsystem;

/** @ingroup LocalPlayer
 *  @{
 */

/**
 * @brief Subsystem to manage sessions for the local player.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig, Within = RH_LocalPlayerSubsystem)
class RALLYHEREINTEGRATION_API URH_LocalPlayerSessionSubsystem : public URH_LocalPlayerSubsystemPlugin, public IRH_SessionOwnerInterface
{
    GENERATED_BODY()
public:
	URH_LocalPlayerSessionSubsystem();

	/**
	* @brief Initialize the subsystem.
	*/
    virtual void Initialize() override;
	/**
	* @brief Deinitialize the subsystem.
	*/
    virtual void Deinitialize() override;

	/**
	* @brief Get auth context for session (IRH_SessionOwnerInterface requirement)
	*/
	virtual FAuthContextPtr GetSessionAuthContext() const override { return GetAuthContext(); }

	/**
	* @brief Get session by its Session Id
	* @param [in] SessionId Session Id to look up
	* @return Session object, if it exists
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual URH_SessionView* GetSessionById(const FString& SessionId) const override
	{
		auto ptr = Sessions.Find(SessionId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/**
	* @brief Get all joined and invited sessions by SessionType
	* @param [in] SessionType SessionType to filter for
	* @return Array of session objects of the specified SessionType
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	TArray<URH_SessionView*> GetSessionsByType(const FString& Type) const;
	/**
	* @brief Get all invited sessions by SessionType
	* @param [in] SessionType SessionType to filter for
	* @return Array of session objects of the specified SessionType
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	TArray<URH_InvitedSession*> GetInvitedSessionsByType(const FString& Type) const;
	/**
	* @brief Get all joined sessions by SessionType
	* @param [in] SessionType SessionType to filter for
	* @return Array of session objects of the specified SessionType
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	TArray<URH_JoinedSession*> GetJoinedSessionsByType(const FString& Type) const;

	/**
	* @brief Get first joined or invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)
	* @param [in] SessionType SessionType to filter for
	* @return Session object of the specified SessionType, if it exists
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE URH_SessionView* GetFirstSessionByType(const FString& Type) const
	{
		auto sessions = GetSessionsByType(Type);
		return sessions.Num() > 0 ? sessions[0] : nullptr;
	}
	/**
	* @brief Get first invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)
	* @param [in] SessionType SessionType to filter for
	* @return Session object of the specified SessionType, if it exists
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE URH_InvitedSession* GetFirstInvitedSessionByType(const FString& Type) const
	{
		auto sessions = GetInvitedSessionsByType(Type);
		return sessions.Num() > 0 ? sessions[0] : nullptr;
	}
	/**
	* @brief Get first joined sessions by SessionType (useful for titles that ensure only one of a given session type will exist)
	* @param [in] SessionType SessionType to filter for
	* @return Session object of the specified SessionType, if it exists
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE URH_JoinedSession* GetFirstJoinedSessionByType(const FString& Type) const
	{
		auto sessions = GetJoinedSessionsByType(Type);
		return sessions.Num() > 0 ? sessions[0] : nullptr;
	}
	/**
	* @brief Get first "active" session (session which is IsActive())
	* @param [in] SessionType SessionType to filter for
	* @return Session object of the specified SessionType, if it exists
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	URH_JoinedSession* GetFirstActiveSession() const;

	/**
	* @brief Get an array of all sessions controlled by this system
	* @return Array of session objects
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE TArray<URH_SessionView*> GetSessions() const { TArray<URH_SessionView*> result; Sessions.GenerateValueArray(result); return result; }

	// Note - Remove calls will attempt to remove the session without attempting to leave the RH session.  To leave a session, call the LeaveSession variants
	// uses ID as the primary key rather than the Session object because we may need to remove something that was not fully joined
	/**
	 * @brief Removes a cached session for the local player, this does NOT try to leave it.
	 * @param [in] SessionId The Session Id to remove.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual void RemoveSessionById(const FString& SessionId);

	/**
	* @brief Utility function to determine if local player is a member of that session
	* @param [in] SessionId Session Id to check
	* @return whether or not the player is in the session
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE bool IsInSession(const FString& SessionId) { return Sessions.Contains(SessionId); }

	/**
	* @brief Utility function to look up the player info subsystem (IRH_SessionOwnerInterface requirement)
	*/
	virtual class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;
	/**
	* @brief Utility function to look up the OnlineSubsystem to use for session calls (IRH_SessionOwnerInterface requirement)
	*/
	virtual IOnlineSubsystem* GetOSS() const override;
	/**
	* @brief Utility function to look up the UniqueNetId to use for OnlineSubsystem calls (IRH_SessionOwnerInterface requirement)
	*/
	virtual FUniqueNetIdWrapper GetOSSUniqueId() const override;
	/**
	 * @brief Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)
	 */
	virtual FPlatformUserId GetOSSPlatformUserId() const override;
	/**
	 * @brief Gets the Player UUID to use for player related calls (can be invalid)
	 */
	virtual FGuid GetPlayerUuid() const override;

	/**
	* @brief Gets the platform session synchronization object for a given session id (IRH_SessionOwnerInterface requirement)
	* @param [in] SessionId RallyHere Session Id to look up the synchornization object wiht
	* @return Platform Session synchronization object
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual URH_PlatformSessionSyncer* GetPlatformSyncerByRHSessionId(const FString& SessionId) const override
	{
		auto ptr = PlatformSyncers.Find(SessionId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}

	/**
	* @brief Gets the platform session synchronization object for a given platform session id
	* @param [in] PlatformSessionId Platform Session Id (as string) to look up the synchornization object wiht
	* @return Platform Session synchronization object
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual URH_PlatformSessionSyncer* GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl& PlatformSessionId) const override;

	/** @brief Set a platform session to join upon the next user change */
	virtual void SetPlatformSessionToJoinOnUserChange(const FOnlineSessionSearchResult& Session)
	{
		PlatformSessionToJoinOnUserChange = Session;
	}
	/** @brief Clear a platform session to join upon the next user change */
	virtual void ClearPlatformSessionToJoinOnUserChange()
	{
		PlatformSessionToJoinOnUserChange.Reset();
	}

	/**
	* @brief Utility function to Create or Join a session by a given SessionType (most times will create a session, but Hub join rules may do a Join instead)
	* @param [in] CreateParams Creation paramters for the session
	* @param [in] Delegate delegate to trigger when complete
	*/
	void CreateOrJoinSessionByType(const FRHAPI_CreateOrJoinRequest& CreateParams, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock())
	{
		URH_OnlineSession::CreateOrJoinByType(CreateParams, this, Delegate);
	}
	/**
	* @private
	* @brief Blueprint compatible version of CreateOrJoinSessionByType
	* @param [in] CreateParams Creation paramters for the session
	* @param [in] Delegate delegate to trigger when complete
	*/
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Create Or Join Session by Type", AutoCreateRefTerm = "CreateParams,Delegate"))
	void BLUEPRINT_CreateOrJoinSessionByType(const FRHAPI_CreateOrJoinRequest& CreateParams, const FRH_OnSessionUpdatedDynamicDelegate& Delegate)
	{
		CreateOrJoinSessionByType(CreateParams, Delegate);
	}
	/**
	* @brief Utility function to Join a session by SessionId
	* @param [in] SessionId The session id to join
	* @param [in] Delegate delegate to trigger when complete
	*/
	void JoinSessionById(const FString& SessionId, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock())
	{
		URH_OnlineSession::JoinById(SessionId, this, Delegate);
	}
	/**
	* @private
	* @brief Blueprint compatible version of JoinSessionById
	* @param [in] SessionId The session id to join
	* @param [in] Delegate delegate to trigger when complete
	*/
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join Session By Id", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_JoinSessionById(const FString& SessionId, const FRH_OnSessionUpdatedDynamicDelegate& Delegate)
	{
		JoinSessionById(SessionId, Delegate);
	}

	/**
	* @brief Imports a new or updated session from the API into this subsystem (IRH_SessionOwnerInterface requirement)
	* @param [in] Session The session data to import
	*/
	virtual void ImportAPISession(const FRH_APISessionWithETag& Session) override;
	/**
	* @brief Imports a new session template from the API into this subsystem (IRH_SessionOwnerInterface requirement)
	* @param [in] Template the template data to import
	*/
	virtual void ImportAPITemplate(const FRHAPI_SessionTemplate& Template) override;
	/**
	* @brief Reconciles the list of session ids with this subsystem, removing any sessions that are no longer in the list, then updates the stored ETag for the local player's session list (IRH_SessionOwnerInterface requirement)
	* @param [in] SessionIds The list of session ids to reconcile against
	* @param [in] ETag optional ETag to use when querying all sessions for optimization
	*/
	virtual void ReconcileAPISessions(const TArray<FString>& SessionIds, const TOptional<FString>& ETag = TOptional<FString>()) override;
	/**
	* @brief Reconciles the list of template SessionTypes with this subsystem, removing any templates that are no longer in the list, then updates the stored ETag for the local player's templatelist (IRH_SessionOwnerInterface requirement)
	* @param [in] InTemplates The list of template names (SessionType) ids to reconcile against
	* @param [in] ETag optional ETag to use when querying all templates for optimization
	*/
	virtual void ReconcileAPITemplates(const TArray<FString>& InTemplates, const TOptional<FString>& ETag = TOptional<FString>()) override;

	/**
	* @brief Looks up a template from within this subsystem (IRH_SessionOwnerInterface requirement)
	* @param [in] Type The SessionType to look up
	* @param [out] Template The template information, if found
	* @return Whether or not the template was found
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual bool GetTemplate(const FString& Type, FRHAPI_SessionTemplate& Template) const;
	/**
	* @brief Gets a list of all templates in this subsystem
	* @return Array of all templates
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE TArray<FRHAPI_SessionTemplate> GetTemplates() const { TArray<FRHAPI_SessionTemplate> result; Templates.GenerateValueArray(result); return result; }

	/**
	* @brief Looks up a ETag to use when querying for session membership (IRH_SessionOwnerInterface requirement)
	*/
	virtual TOptional<FString> GetETagForAllSessionsPoll() const override
	{
		return AllSessionsETag;
	}

	/**
	* @brief Looks up a ETag to use when querying for template information (IRH_SessionOwnerInterface requirement)
	*/
	virtual TOptional<FString> GetETagForAllTemplatesPoll() const override
	{
		return AllTemplatesETag;
	}

	/**
	* @brief Looks up all sessions to process when polling if ETags match (IRH_SessionOwnerInterface requirement)
	*/
	virtual TArray<URH_SessionView*> GetAllSessionsForPolling() const override
	{
		TArray<URH_SessionView*> Result;
		Result.Reserve(Sessions.Num());
		for (auto& Pair : Sessions)
		{
			if (Pair.Value->IsOnline())
			{
				Result.Add(Pair.Value);
			}
		}
		return Result;
	}

	/**
	* @brief Utility function that searches the session browser cache for information on browser sessions
	* @param [in] Params Search parameters for the browser search
	* @param [in] Delegate Delegate to trigger once complete
	*/
	void SearchForSessions(const FRH_SessionBrowserSearchParams& Params, const FRH_OnSessionSearchCompleteDelegateBlock& Delegate = FRH_OnSessionSearchCompleteDelegateBlock());
	/**
	* @private
	* @brief Blueprint compatible version of SearchForSessions
	* @param [in] Params Search parameters for the browser search
	* @param [in] Delegate Delegate to trigger once complete
	*/
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Search for Sessions", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchForSessions(const FRH_SessionBrowserSearchParams& Params, const FRH_OnSessionSearchCompleteDynamicDelegate& Delegate)
	{
		SearchForSessions(Params, Delegate);
	}

	/**
	* @brief Start polling for session template and membership updates
	*/
	UFUNCTION(BlueprintCallable, Category = "Session")
	void StartPolling();
	/**
	* @brief Stop polling for session template and membership updates
	*/
	UFUNCTION(BlueprintCallable, Category = "Session")
	void StopPolling();
	/**
	* @brief Poll function for use with FRH_AutoPoller
	* @param [in] PollComplete delegate to restart the poll
	*/
	void PollForUpdate(const FRH_PollCompleteFunc& Delegate);
	UFUNCTION(BlueprintCallable, Category = "Session")
	/**
	* @brief Force an immediate poll
	*/
	void ForcePollForUpdate(bool bClearETag = false);
	/**
	* @brief Get the current time remaining on poll cycle, or -1.f if not polling
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	float GetPollTimeRemaining() const;

	/**
	* @brief Multicast delegate triggered when a session managed by this subsystem is updated
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Session Updated"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionUpdatedDelegate;
	/**
	* @brief Multicast delegate triggered when a session managed by this subsystem is added
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Session Added"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionAddedDelegate;
	/**
	* @brief Multicast delegate triggered when a session managed by this subsystem is removed
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Session Removed"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionRemovedDelegate;
	/**
	* @brief Multicast delegate triggered when a session managed by this subsystem is fully expired (happens after removal)
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Session Expiration Complete"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionExpirationCompleteDelegate;

	/**
	* @brief Multicast delegate triggered when the initial poll after login is complete, to do first-time setup
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Login Poll Sessions Complete"))
	FRH_OnLoginPollSessionsCompleteMulticastDynamicDelegate BLUEPRINT_OnLoginPollSessionsCompleteDelegate;

	/**
	* @brief Multicast delegate triggered when we fail to join a platform session that we've accepted an invite to
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Failed To Join Platform Session"))
	FRH_OnFailedToJoinPlatformSessionMulticastDynamicDelegate BLUEPRINT_OnFailedToJoinPlatformSessionDelegate;

	/**
	* @brief Multicast delegate triggered when a session managed by this subsystem is updated
	*/
	FRH_OnSessionUpdatedMulticastDelegate OnSessionUpdatedDelegate;
	/**
	* @brief Multicast delegate triggered when a session managed by this subsystem is added
	*/
	FRH_OnSessionUpdatedMulticastDelegate OnSessionAddedDelegate;
	/**
	* @brief Multicast delegate triggered when a session managed by this subsystem is removed
	*/
	FRH_OnSessionUpdatedMulticastDelegate OnSessionRemovedDelegate;
	/**
	* @brief Multicast delegate triggered when a session managed by this subsystem is fully expired (happens after removal)
	*/
	FRH_OnSessionUpdatedMulticastDelegate OnSessionExpirationCompleteDelegate;
	/**
	* @brief Multicast delegate triggered when the initial poll after login is complete, to do first-time setup
	*/
	FRH_OnLoginPollSessionsCompleteMulticastDelegate OnLoginPollSessionsCompleteDelegate;
	/**
	* @brief Multicast delegate triggered when we fail to join a platform session that we've accepted an invite to
	*/
	FRH_OnFailedToJoinPlatformSessionMulticastDelegate OnFailedToJoinPlatformSessionDelegate;

protected:
	/**
	 * @brief Creates or updates a specific session for the local player.
	 * @param [in] Session Session information to create or update.
	 * @param [in] LocalPlayerStatus The status of the local player in the session.
	 * @return The session that is created or updated.
	 */
	virtual URH_SessionView* CreateOrUpdateRHSession(const FRH_APISessionWithETag& Session, const ERHAPI_SessionPlayerStatus& LocalPlayerStatus);
	/**
	 * @brief Gets the local player status in a specific session.
	 * @param [in] Session The Session to get the local player status from.
	 * @param [out] Status The status of the local player in the session.
	 * @return True if the player is part of that session.
	 */
	virtual bool LocalPlayerStatusFromSession(const FRHAPI_Session& Session, ERHAPI_SessionPlayerStatus& Status) const;
	/**
	 * @brief Removes a cached session for the local player, this does NOT try to leave it.
	 * @param [in] Session The Session to remove.
	 */
	virtual void RemoveSession(const URH_SessionView* Session) { RemoveSessionById(Session->GetSessionId()); }
	/**
	 * @brief Called when a session the local player is part of expires.
	 * @param [in] Session The session that expired.
	 */
	virtual void OnExpirationComplete(URH_SessionView* Session);

	/**
	 * @brief Attepts to preprocess an API session.
	 * @param [in] Session The session to preprocess.
	 * @param [in] Status The status of the local player to that session.
	 * @return False if deferred or dropped, true if it can be processed.
	 */
	virtual bool PreprocessAPISessionImport(const FRHAPI_Session& Session, ERHAPI_SessionPlayerStatus& Status);
	/**
	 * @brief Base handling when the local user changes, override to provide functionality.
	 * @param [in] OldPlayerUuid The old player Uuid.
	 * @param [in] OldLocalPlayerInfo The old local player info.
	 */
	virtual void OnUserChanged(const FGuid& OldPlayerUuid, class URH_PlayerInfo* OldLocalPlayerInfo) override;
	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();
	/**
	* @brief Handle a notification from the notification API.
	* @param [in] Notification The notification to handle.
	* @param [in] APIName The name of the API that sent the notification.
	* @param [in] APIParams The parameters for the API that sent the notification.
	*/
	virtual void HandleNotification(const struct FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams);

	// Platform session support
	/**
	 * @brief Creates a Platform Session Syncer for the local player.
	 * @param [in] Session The Session assocaited with the syncer.
	 * @return The Platform Session Syncer.
	 */
	URH_PlatformSessionSyncer* CreatePlatformSyncer(URH_JoinedSession* Session);
	/**
	 * @brief Checks if the online subsystem call is for the local user.
	 * @param [in] ControllerId The controller Id to check against.
	 * @return True if the callback is allowed.
	 */
	virtual bool FilterOSSCallbackUser(const int32 ControllerId);
	/**
	 * @brief Checks if the online subsystem call is for the local user.
	 * @param [in] UniqueNetId The Unique Net Id to check against.
	 * @return True if the callback is allowed.
	 */
	virtual bool FilterOSSCallbackUser(const FUniqueNetId& UniqueNetId);
	/**
	* @brief Handles the response of an online subsystem activity activation.
	* @param [in] LocalUserId The Unique Net Id associated with the activity.
	* @param [in] ActivityId The Id of the activity.
	* @param [in] SessionInfo The session info associated with the activity.
	*/
	virtual void OnPlatformActivityActivation(const FUniqueNetId& LocalUserId, const FString& ActivityId, const FOnlineSessionSearchResult* SessionInfo);
	/**
	* @brief Handles the response of an online subsystem session invite.
	* @param [in] bSuccesful True if the invite was successful.
	* @param [in] ControllerId The controller Id of the invited player.
	* @param [in] UserId Unique Net Id of the invited player.
	* @param [in] Session The Session the invite was for.
	*/
	virtual void OnPlatformSessionInviteAccepted(const bool bSuccesful, const int32 ControllerId, FUniqueNetIdPtr UserId, const FOnlineSessionSearchResult& Session);
	/**
	* @brief Handles the response of an online subsystem session creation.
	* @param [in] SessionName The name of the created session.
	* @param [in] bSuccess True if the creation was successful.
	*/
	virtual void OnPlatformSessionCreated(FName SessionName, bool bSuccess);
	/**
	* @brief Handles the response of an online subsystem session join.
	* @param [in] SessionName The name of the associated session.
	* @param [in] Result The resule of the join attempt.
	*/
	virtual void OnPlatformSessionJoined(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	/**
	* @brief Handles the response of an online subsystem session started.
	* @param [in] SessionName The name of the associated session.
	* @param [in] bSuccess True if the creation was successful.
	*/
	virtual void OnPlatformSessionStarted(FName SessionName, bool bSuccess);
	/**
	* @brief Handles the response of an online subsystem session ended.
	* @param [in] SessionName The name of the associated session.
	* @param [in] bSuccess True if the creation was successful.
	*/
	virtual void OnPlatformSessionEnded(FName SessionName, bool bSuccess);
	/**
	* @brief Handles the response of an online subsystem session destroy.
	* @param [in] SessionName The name of the associated session.
	* @param [in] bSuccess True if the creation was successful.
	*/
	virtual void OnPlatformSessionDestroyed(FName SessionName, bool bSuccess);
	/**
	* @brief Called from other Platform Session Participant functions to reconcile the state of the platform syncer.
	* @param [in] SessionName The name of the associated session.
	* @param [in] UniqueNetId Unique Net Id of the participant that joined, changed, left, or was removed.
	*/
	virtual void OnPlatformSessionParticipantsChanged(FName SessionName, const FUniqueNetId& UniqueNetId, bool bJoined);

#if RH_FROM_ENGINE_VERSION(5,2)
	/**
	* @brief Handles the response of an online subsystem session participant joining.
	* @param [in] SessionName The name of the associated session.
	* @param [in] UniqueNetId Unique Net Id of the participant that joined.
	*/
	virtual void OnPlatformSessionParticipantJoined(FName SessionName, const FUniqueNetId& UniqueNetId);
	/**
	* @brief Handles the response of an online subsystem session participant leaving.
	* @param [in] SessionName The name of the associated session.
	* @param [in] UniqueNetId Unique Net Id of the participant that left.
	* @param [in] LeaveReason The reason that the participant was left the session.
	*/
	virtual void OnPlatformSessionParticipantLeft(FName SessionName, const FUniqueNetId& UniqueNetId, EOnSessionParticipantLeftReason LeaveReason);
#else
	/**
	* @brief Handles the response of an online subsystem session participant change.
	* @param [in] SessionName The name of the associated session.
	* @param [in] UniqueNetId Unique Net Id of the participant that changed.
	* @param [in] bJoined If that participant joined the session.
	*/
	virtual void OnPlatformSessionParticipantChange(FName SessionName, const FUniqueNetId& UniqueNetId, bool bJoined);
	/**
	* @brief Handles the response of an online subsystem session participant remove.
	* @param [in] SessionName The name of the associated session.
	* @param [in] UniqueNetId Unique Net Id of the participant that was removed.
	*/
	virtual void OnPlatformSessionParticipantRemoved(FName SessionName, const FUniqueNetId& UniqueNetId);
#endif

	/** @brief Poller for sessions. */
	FRH_AutoPollerPtr Poller;
	/** @brief Map of Template Ids to Session Templates. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session")
	TMap<FString, FRHAPI_SessionTemplate> Templates;
	/** @brief ETag of last QueryAllSessions call response. */
	TOptional<FString> AllSessionsETag;
	/** @brief ETag of last QueryAllSessionTemplates call response. */
	TOptional<FString> AllTemplatesETag;
	/** @brief OSS Session that we need to join upon user change (ex: login). */
	TOptional<FOnlineSessionSearchResult> PlatformSessionToJoinOnUserChange;
	/** @brief Map of Session Ids to Sessions we are in. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session")
	TMap<FString, URH_SessionView*> Sessions;
	/** @brief Map of Session Ids to Sessions objects that may be in the process of cleaning themselves up. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session")
	TMap<FString, URH_SessionView*> ExpiringSessions;
	/** @brief Map of Session Ids to Sessions updates we could not process for some reason, such as race conditions. */
	TMap<FString, FRH_APISessionWithETag> DeferredSessionUpdates;
	/** @brief Map of Session Ids to their Platform Session Syncers. */
	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, URH_PlatformSessionSyncer*> PlatformSyncers;
	/**
	 * @brief Handles the response of polling all sessions.
	 * @param [in] bSuccess True if the poll was successful.
	 * @param [in] SessionIds Session Ids updated from the polling.
	 */
	virtual void HandlePollAllSessionsComplete(bool bSuccess, const TArray<FString>& SessionIds);
};

/** @} */