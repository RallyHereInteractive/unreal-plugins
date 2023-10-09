#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/Interface.h"
#include "Engine/EngineBaseTypes.h"
#include "OnlineSubsystem.h"
#include "Engine/EngineTypes.h"
#include "Templates/SharedPointer.h"
#include "UObject/WeakInterfacePtr.h"
#include "SessionsAPI.h"
#include "Misc/EngineVersion.h"

#include "RH_Common.h"
#include "RallyHereIntegrationModule.h"
#include "RH_Polling.h"
#include "RH_Beacons.h"

#include "RH_SessionData.generated.h"

class URH_JoinedSession;
class IRH_SessionOwnerInterface;

typedef TWeakInterfacePtr<IRH_SessionOwnerInterface> FRH_SessionOwnerPtr;

class URH_PlatformSessionSyncer;

DECLARE_LOG_CATEGORY_EXTERN(LogRHSession, Log, All);

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnSessionUpdatedDynamicDelegate, bool, bSuccess, URH_JoinedSession*, SessionData);
DECLARE_DELEGATE_TwoParams(FRH_OnSessionUpdatedDelegate, bool, URH_JoinedSession*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnSessionUpdatedDelegateBlock, FRH_OnSessionUpdatedDelegate, FRH_OnSessionUpdatedDynamicDelegate, bool, URH_JoinedSession*);

// multicast delegates to notify listeners of session events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnSessionUpdatedMulticastDynamicDelegate, URH_SessionView*, UpdatedSession);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnSessionUpdatedMulticastDelegate, URH_SessionView*);

/** @defgroup Session RallyHere Session
 *  @{
 */


// multicast delegates to notify listeners of session member changes
/**
 * @brief Utility struct to wrapper a player state for a player state update change
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_SessionMemberStatusState
{
	GENERATED_BODY()

	/** @brief Player Uuid for this state */
	UPROPERTY(BlueprintReadOnly, Category = "Session|Players")
	FGuid PlayerUuid;
	/** @brief Whether the state is valid (a state is not valid if a player is not associated with the session) */
	UPROPERTY(BlueprintReadOnly, Category = "Session|Players")
	bool bIsValid;
	/** @brief Status of the player at the time of recording the state */
	UPROPERTY(BlueprintReadOnly, Category = "Session|Players")
	ERHAPI_SessionPlayerStatus Status;
	/** @brief Team of the player at the time of recording the state */
	UPROPERTY(BlueprintReadOnly, Category = "Session|Players")
	int32 TeamId;

	/** @brief Default Constructor */
	FRH_SessionMemberStatusState()
		: bIsValid(false)
		, Status(ERHAPI_SessionPlayerStatus::Reserved)
		, TeamId(0)
	{
	}

	/** @brief Equivalence check used to determine if a notification should be dispatched */
	FORCEINLINE bool operator==(const FRH_SessionMemberStatusState& Comparator) const
	{
		return PlayerUuid == Comparator.PlayerUuid
			&& bIsValid == Comparator.bIsValid
			&& Status == Comparator.Status
			&& TeamId == Comparator.TeamId;
			;
	}
	/** @brief Inequivalence check used to determine if a notification should be dispatched */
	FORCEINLINE bool operator!=(const FRH_SessionMemberStatusState& Comparator) const
	{
		return !(operator==(Comparator));
	}
};

/** @} */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRH_OnSessionMemberStateChangedDynamicDelegate, URH_SessionView*, UpdatedSession, const FRH_SessionMemberStatusState&, OldStatus, const FRH_SessionMemberStatusState&, NewStatus);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FRH_OnSessionMemberStateChangedDelegate, URH_SessionView*, const FRH_SessionMemberStatusState&, const FRH_SessionMemberStatusState&);

DECLARE_DELEGATE_TwoParams(FRH_OnPollAllSessionsDelegate, bool, const TArray<FString>& SessionIds);

DECLARE_DELEGATE_OneParam(FRH_OnSessionExpiredDelegate, URH_SessionView*);

/** @ingroup Session
 *  @{
 */

/**
 * @brief Utility struct to wrapper the tuple of a data typeand etag.
 */
template<typename T> 
struct RALLYHEREINTEGRATION_API TRH_DataWithETagWrapper
{
	/**
	 * @brief The wrapped Data.
	 */
	T Data;
	/**
	 * @brief The Datas ETag.
	 */
	TOptional<FString> ETag;
	/** @brief Default Constructor */
	TRH_DataWithETagWrapper() : Data{}
	{}
	/** @brief Various constructors for ease of use */
	TRH_DataWithETagWrapper(const T& InData) : Data(InData)
	{}
	/** @brief Various constructors for ease of use */
	TRH_DataWithETagWrapper(T&& InData) : Data(InData)
	{}
	/** @brief Various constructors for ease of use */
	TRH_DataWithETagWrapper(T& InData, const FString& InETag) : Data(InData), ETag(InETag)
	{}
	/** @brief Various constructors for ease of use */
	TRH_DataWithETagWrapper(T&& InData, FString&& InETag) : Data(InData), ETag(InETag)
	{}
	/** @brief Various constructors for ease of use */
	TRH_DataWithETagWrapper(const T& InData, const TOptional<FString>& InETag) : Data(InData), ETag(InETag)
	{}
	/** @brief Various constructors for ease of use */
	TRH_DataWithETagWrapper(T&& InData, TOptional<FString>&& InETag) : Data(InData), ETag(InETag)
	{}
};

/** @} */

typedef TRH_DataWithETagWrapper<FRHAPI_Session> FRH_APISessionWithETag;

/** @ingroup Session
 *  @brief Poll for deferred sessions 
 */
struct FRH_DeferredSessionPoll
{
	enum class Type : uint8
	{
		Forced,			// a forced request to poll arrived, we cannot skip these
		Modification,	// a modification was made, we cannot skip these
		Notification,	// a notification arrived, we potentially can skip poll notifications
	};

	Type PollType;
	FRH_PollCompleteFunc Delegate;
	TOptional<FString> ETag;

	FRH_DeferredSessionPoll(Type InPollType, const FRH_PollCompleteFunc& InDelegate, const TOptional<FString>& InETag = TOptional<FString>())
		: PollType(InPollType)
		, Delegate(InDelegate)
		, ETag(InETag)
		
	{}
};

// extensible namespace for wrappering custom data keys that are utilized for Session's CustomData object
namespace RH_SessionCustomDataKeys
{
	// session data keys
	static constexpr auto OfflineFlag = TEXT("rh.OfflineFlag");

	// instance data keys
	static constexpr auto MapName = TEXT("rh.MapName");
	static constexpr auto GameModeName = TEXT("rh.GameModeName");
	static constexpr auto SessionSecurityTokenName = TEXT("rh.SessionSecurityToken");
	static constexpr auto BeaconFlag = TEXT("rh.IsBeacon");
}

/** @ingroup Session
 * @brief Base class providing functionality for viewing session data and interacting with it from blueprint. 
 * Specifically does not have an "owner" meaning it cannot do "work" - it is read only. The subclasses have owners.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_SessionView : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	/**
	 * @brief Gets the Session Data and its ETag.
	 */
	FORCEINLINE const FRH_APISessionWithETag& GetSessionWithETag() const { return SessionData; }
	/**
	 * @brief Gets the Session Data.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	const FRHAPI_Session& GetSessionData() const { return SessionData.Data; }
	/**
	 * @brief Gets the Instance Data.
	 */
	const FRHAPI_InstanceInfo* GetInstanceData() const { return SessionData.Data.GetInstanceOrNull(); }
	/**
	 * @brief Gets a session player if they are part of the session.
	 * @param [in] PlayerUuid The unique Id of the player to get.
	 * @return The player if they exist in the session, otherwise null.
	 */
	FORCEINLINE const FRHAPI_SessionPlayer* GetSessionPlayer(const FGuid& PlayerUuid) const
	{
		for (const auto& Team : GetSessionData().Teams)
		{
			for (const auto& Player : Team.Players)
			{
				if (Player.PlayerUuid == PlayerUuid)
				{
					return &Player;
				}
			}
		}
		return nullptr;
	}
	/**
	* @brief Gets a session player if they are part of the session.
	* @param [in] PlayerUuid The unique Id of the player to get.
	* @param [out] OutPlayer The player if they exist in the session.
	* @return If true, the player was found.
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE bool GetSessionPlayer(const FGuid& PlayerUuid, FRHAPI_SessionPlayer& OutPlayer) const
	{
		auto* Player = GetSessionPlayer(PlayerUuid);
		if (Player != nullptr)
		{
			OutPlayer = *Player;
			return true;
		}
		return false;
	}
	/**
	 * @brief Gets the leader of the session if one exists.
	 */
	FORCEINLINE const FRHAPI_SessionPlayer* GetSessionLeader() const
	{
		for (const auto& Team : GetSessionData().Teams)
		{
			for (const auto& Player : Team.Players)
			{
				if (Player.Status == ERHAPI_SessionPlayerStatus::Leader)
				{
					return &Player;
				}
			}
		}
		return nullptr;
	}
	/**
	* @brief Gets the leader of the session if one exists.
	* @param [out] OutPlayer The leader if they exist in the session.
	* @return If true, the leader was found.
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE bool GetSessionLeader(FRHAPI_SessionPlayer& OutPlayer) const
	{
		auto* Player = GetSessionLeader();
		if (Player != nullptr)
		{
			OutPlayer = *Player;
			return true;
		}
		return false;
	}
	/**
	 * @brief Gets if the session was created through matchmaking.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE bool IsCreatedByMatchmaking() const
	{
		return GetSessionData().GetCreatedByMatchmaking(false);
	}
	/**
	 * @brief Gets the number of players in the session.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE int32 GetSessionPlayerCount() const
	{
		int32 NumPlayers = 0;
		for (const auto& Team : GetSessionData().Teams)
		{
			NumPlayers += Team.Players.Num();
		}
		return NumPlayers;
	}
	/**
	 * @brief Gets if the session is offline.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual bool IsOffline() const { return false; }
	/**
	* @brief Gets if the session is online.
	*/
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE bool IsOnline() const { return !IsOffline(); }
	/**
	 * @brief Gets if the session is a one the local player has joined.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual bool IsJoined() const { return false; }
	/**
	 * @brief Gets if the session is currently in matchmaking.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	bool IsInQueue() const { return GetSessionData().GetMatchmakingOrNull() != nullptr; }
	/**
	 * @brief Gets the session template.
	 */
	UFUNCTION(BlueprintGetter, Category = "Session")
	FORCEINLINE FRHAPI_SessionTemplate GetTemplate() const { return Template; };
	UFUNCTION(BlueprintPure, Category = "Session")
	/**
	 * @brief Gets the session ETag.
	 */
	FORCEINLINE FString GetETag() const { return SessionData.ETag.Get(FString()); };
	UFUNCTION(BlueprintPure, Category="Session")
	/**
	 * @brief Gets the session Id.
	 */
	FORCEINLINE FString GetSessionId() const { return GetSessionData().SessionId; }
	UFUNCTION(BlueprintPure, Category = "Session")
	/**
	 * @brief Gets the session type.
	 */
	FORCEINLINE FString GetSessionType() const { return GetSessionData().Type; }
	/**
	 * @brief Gets session custom data.
	 */
	UFUNCTION(BlueprintPure, Category = "Session", meta = (DisplayName = "Get Session Custom Data"))
	TMap<FString, FString> GetCustomData() const;
	/**
	 * @brief Gets a session custom data value.
	 * @param [in] Key The custom data being requested.
	 * @param [out] Value The value of the custom data.
	 * @return If true, the custom data was found.
	 */
	UFUNCTION(BlueprintPure, Category = "Session", meta = (DisplayName = "Get Session Custom Data Value"))
	bool GetCustomDataValue(const FString& Key, FString& OutValue) const;
	/**
	 * @brief Gets intance custom data.
	 */
	UFUNCTION(BlueprintPure, Category = "Session|Instance", meta = (DisplayName = "Get Instance Custom Data"))
	TMap<FString, FString> GetInstanceCustomData() const;
	/**
	 * @brief Gets an instance custom data value.
	 * @param [in] Key The custom data being requested.
	 * @param [out] Value The value of the custom data.
	 * @return If true, the custom data was found.
	 */
	UFUNCTION(BlueprintPure, Category = "Session|Instance", meta = (DisplayName = "Get Instance Custom Data Value"))
	bool GetInstanceCustomDataValue(const FString& Key, FString& OutValue) const;
	/**
	 * @brief Gets session browser custom data.
	 */
	UFUNCTION(BlueprintPure, Category = "Session", meta = (DisplayName = "Get Session Browser Custom Data"))
	TMap<FString, FString> GetBrowserCustomData() const;
	/**
	 * @brief Update a session from the owner, implies a template update.
	 * @param [in] newSessionData The new session data.
	 * @param [in] newTemplate The new session template.
	 */
	virtual void ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRHAPI_SessionTemplate& newTemplate);
	/**
	 * @brief Update the session template .
	 * @param [in] newTemplate The new session template.
	 */
	virtual void ImportTemplate(const FRHAPI_SessionTemplate& newTemplate);
	/**
	 * @brief Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
	 * @param [in] Delegate The delegate to call when the session is removed.
	 */
	virtual void Expire(const FRH_OnSessionExpiredDelegate& Delegate);
	/**
	 * @brief Delegate fired whenever the session is updated.
	 */
	FRH_OnSessionUpdatedMulticastDelegate OnSessionUpdatedDelegate;
	/**
	 * @brief Blueprint compatible delegate fired whenever the session is updated.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Session Updated"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionUpdatedDelegate;
	/**
	 * @brief Delegate fired whenever the session is not found.
	 */
	FRH_OnSessionUpdatedMulticastDelegate OnSessionNotFoundDelegate;
	/**
	 * @brief Blueprint compatible delegate fired whenever the session is not found.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Session Not Found"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionNotFoundDelegate;
	/**
	 * @brief Delegate fired whenever the session member list changes with details about the change
	 */
	FRH_OnSessionMemberStateChangedDelegate OnSessionMemberStateChangedDelegate;
	/**
	 * @brief Blueprint compatible delegate fired whenever the session member list changes with details about the change
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Session", meta = (DisplayName = "On Session Member Changed"))
	FRH_OnSessionMemberStateChangedDynamicDelegate BLUEPRINT_OnSessionMemberStateChangedDelegate;

	/**
	 * @brief Gets the session owner.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	TScriptInterface<IRH_SessionOwnerInterface> GetSessionOwner() const;

	/**
	 * @brief Starts the polling of session updates.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	void StartPolling();
	/**
	 * @brief Stops the polling for session updates.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	void StopPolling();
	/**
	 * @brief Defers the polling for session updates (in case an out-of-band update was received)
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	void DeferPolling();
	/**
	 * @brief Gets the current time remaining in the poll cycle in seconds.  Returns -1.f if poll is inactive or is executing
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	float GetPollTimeRemaining();
	/**
	 * @brief Forces a polling call even if the polling is waiting till next time to pulse.
	 * @param [in] bClearETag If true, the ETag will be cleared before the poll.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	void ForcePollForUpdate(bool bClearETag = false);

	/**
	 * @brief Add a deferred poll to the list of polls to run in sequence
	 */
	void AddDeferredPoll(const FRH_DeferredSessionPoll& DeferredPoll);
	/**
	 * @brief Check and potentially kick off a deferred poll
	 */
	void CheckDeferredPolls();

	/**
	 * @brief Polls a specific session for an update.  Can poll for sessions you are not a member of. 
	 * Will properly create a relevant session object as needed via the Session Owner interface.
	 * @param [in] SessionId Id of the session to poll.
	 * @param [in] SessionOwner Owner of the session being polled.
	 * @param [in] Delegate Callback delegate that the polled session has been updated.
	 */
	static void PollSingleSession(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock());
	/**
	 * @brief Polls all sessions with an owner for an update.
	 * @param [in] SessionOwner Owner of the session being polled.
	 * @param [in] Delegate Callback delegate that the polled session has been updated.
	 */
	static void PollAllSessions(TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, bool bPollMembership = true, bool bPollAllSessions = false, const FRH_OnPollAllSessionsDelegate& Delegate = FRH_OnPollAllSessionsDelegate());

protected:
	/**
	 * @brief The Session Data with Etag.
	 */
	FRH_APISessionWithETag SessionData;
	/**
	 * @brief A reference copy of the Template (in case the template is deleted from the managed template list)
	 */
	UPROPERTY(BlueprintGetter = GetTemplate, Category = "Session")
	FRHAPI_SessionTemplate Template;

	/**
	 * @brief Triggers a poll for a session update, automatically called as part of the polling loop.
	 * @param [in] Delegate Callback delegate for when the poll completes.
	 */
	void PollForUpdate(const FRH_PollCompleteFunc& Delegate);
	/**
	 * @brief Poller in charge of polling for the session.
	 */
	FRH_AutoPollerPtr Poller;

	/**
	* @brief Array of stored poll requests that have not yet been processed
	*/
	TArray<FRH_DeferredSessionPoll> DeferredPolls;
	/**
	* @brief Array of stored poll requests that are waiting on the result of the current poll
	*/
	TArray<FRH_DeferredSessionPoll> WaitingPolls;
};

/** @ingroup Session
 * @brief Invited Sessions are sessions that the player has been invited to.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_InvitedSession : public URH_SessionView
{
	GENERATED_UCLASS_BODY()
public:
	/**
	 * @brief Gets that an invited session is not an offline session.
	 */
	virtual bool IsOffline() const override { return false; }

	/**
	 * @brief Accepts to join the session.
	 * @param [in] Delegate The callback delegate for the session being updated by the join.
	 */
	virtual void Join(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock());
	/**
	 * @brief Blueprint compatible version of Join
	 * @param [in] Delegate The callback delegate for the session being updated by the join.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Join(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { return Join(Delegate); }
	/**
	 * @brief Declines to join the session.
	 * @param [in] Delegate The callback delegate for the session being updated by the leave.
	 */
	virtual void Leave(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock());
	/**
	 * @brief Blueprint compatible version of Leave
	 * @param [in] Delegate The callback delegate for the session being updated by the leave.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Leave", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Leave(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { return Leave(Delegate); }
};

/**
 * @brief Joined Sessions are sessions the session owner is actively a member of.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig, Abstract)
class RALLYHEREINTEGRATION_API URH_JoinedSession : public URH_SessionView
{
	GENERATED_UCLASS_BODY()
public:
	/**
	 * @brief Gets the version this client will report itself being for sessions.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	static FString GetClientVersionForSession();
	/**
	 * @brief Gets the default input type for sessions for this client.
	 */
	static ERHAPI_Input GetClientInputTypeForSession();
	/**
	 * @brief Gets that the session owner is a part of this session.
	 */
	virtual bool IsJoined() const override final { return true; }
	/**
	 * @brief Update a session from the owner, implies a template update.
	 * @param [in] newSessionData The new session data.
	 * @param [in] newTemplate The new session template.
	 */
	virtual void ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRHAPI_SessionTemplate& newTemplate) override;
	/**
	 * @brief Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
	 * @param [in] Delegate The delegate to call when the session is removed.
	 */
	virtual void Expire(const FRH_OnSessionExpiredDelegate& Delegate);
	/**
	 * @brief Gets if the players in the session are being watched for presence updates.
	 */
	UFUNCTION(BlueprintGetter, Category = "Session|Presence")
	virtual bool IsWatchingPlayers() const { return bWatchingPlayers; }
	/**
	 * @brief Sets the session to watch for presence updates for the players.
	 * @param [in] bWatch If the session should watch for presence updates.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session|Presence")
	virtual void SetWatchingPlayers(bool bWatch);
	/**
	 * @brief Sets the session to be active.
	 * @param [in] bActive If the session should be active.
	 */
	void SetActive(bool bActive) { bIsActive = bActive; }
	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	/**
	 * @brief Gets if the session is currently active session on the Game Instance Session Subsystem.
	 */
	FORCEINLINE bool IsActive() const { return bIsActive; }
	/**
	 * @brief Gets the platform session synchronization object for this session
	 */
	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	URH_PlatformSessionSyncer* GetPlatformSyncer() const;
	/**
	 * @brief Whether this session is synchronizing with a platform session
	 */
	UFUNCTION(BlueprintPure, Category = "Session|Instance")
	FORCEINLINE bool IsSyncedWithPlatform() const { return GetPlatformSyncer() != nullptr; }

	/**
	 * @brief Invites a player to the session.
	 * @param [in] PlayerUuid The unique player Id to invite to the session.
	 * @param [in] Team The target team that the player will be associated with in the session.
	 * @param [in] CustomData The custom data for the invite
	 * @param [in] Delegate Callback delegate for the session being updated by the invite.
	 */
	virtual void InvitePlayer(const FGuid& PlayerUuid, int32 Team = 0, const TMap<FString, FString>& CustomData = TMap<FString, FString>(), const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::InvitePlayer, ); }
	/**
	 * @brief Blueprint compatible version of InvitePlayer
	 * @param [in] PlayerUuid The unique player Id to invite to the session.
	 * @param [in] CustomData The custom data for the invite
	 * @param [in] Team The target team that the player will be associated with in the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the invite.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Invite Player", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_InvitePlayer(UPARAM(ref) const FGuid& PlayerUuid, int32 Team, UPARAM(ref) const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { InvitePlayer(PlayerUuid, Team, CustomData, Delegate); }
	/**
	 * @brief Kicks a player from the session.
	 * @param [in] PlayerUuid The unique player Id to kick from the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the kick.
	 */
	virtual void KickPlayer(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::KickPlayer, ); }
	/**
	 * @brief Blueprint compatible version of KickPlayer
	 * @param [in] PlayerUuid The unique player Id to kick from the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the kick.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Kick Player", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_KickPlayer(UPARAM(ref) const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { KickPlayer(PlayerUuid, Delegate); }
	/**
	 * @brief Sets a new leader for the session.
	 * @param [in] PlayerUuid The unique player Id to become the session leader.
	 * @param [in] Delegate Callback delegate for the session being updated by the leader change.
	 */
	virtual void SetLeader(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::SetLeader, ); }
	/**
	 * @brief Blueprint compatible version of SetLeader
	 * @param [in] PlayerUuid The unique player Id to become the session leader.
	 * @param [in] Delegate Callback delegate for the session being updated by the leader change.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Set Leader", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetLeader(UPARAM(ref) const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { SetLeader(PlayerUuid, Delegate); }
	/**
	 * @brief Changes the team a given player is associated with in the session.
	 * @param [in] PlayerUuid The unique player Id to invite to the session.
	 * @param [in] Team The target team that the player will be associated with in the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the team change.
	 */
	virtual void ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::ChangePlayerTeam, ); }
	/**
	 * @brief Blueprint compatible version of ChangePlayerTeam
	 * @param [in] PlayerUuid The unique player Id to invite to the session.
	 * @param [in] Team The target team that the player will be associated with in the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the team change.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Change Player Team", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_ChangePlayerTeam(UPARAM(ref) const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { ChangePlayerTeam(PlayerUuid, Team, Delegate); }
	/**
	 * @brief Changes the session player's custom data.
	 * @param [in] PlayerUuid The unique player Id whose custom data will be updated
	 * @param [in] CustomData The custom data map to set the player's to
	 * @param [in] Delegate Callback delegate for the session being updated by the player update
	 */
	virtual void UpdatePlayerCustomData(const FGuid& PlayerUuid, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::UpdatePlayerCustomData, ); }
	/**
	 * @brief Blueprint compatible version of UpdatePlayerCustomData.
	 * @param [in] PlayerUuid The unique player Id whose custom data will be updated
	 * @param [in] CustomData The custom data map to set the player's to
	 * @param [in] Delegate Callback delegate for the session being updated by the player update
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Update Player Custom Data", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_UpdatePlayerCustomData(UPARAM(ref) const FGuid& PlayerUuid, UPARAM(ref) const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { UpdatePlayerCustomData(PlayerUuid, CustomData, Delegate); }
	/**
	 * @brief Leaves the session.
	 * @param [in] bFromOSSSession If true, then leave the OSS Session. Otherwise, just leave the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the leave.
	 */
	virtual void Leave(bool bFromOSSSession, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::Leave, ); }
	/**
	 * @brief Blueprint compatible version of Leave
	 * @param [in] bFromOSSSession If true, then leave the OSS Session. Otherwise, just leave the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the leave.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Leave", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Leave(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { Leave(false, Delegate); }
	/**
	 * @brief Attempt to create a new instance for the session.
	 * @param [in] InstanceRequest Details for the instance being requested.
	 * @param [in] Delegate Callback delegate for the session being updated with the instance creation, or failure.
	 */
	virtual void RequestInstance(const FRHAPI_InstanceRequest& InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::RequestInstance, ); }
	/**
	 * @brief Blueprint compatible version of RequestInstance
	 * @param [in] InstanceRequest Details for the instance being requested.
	 * @param [in] Delegate Callback delegate for the session being updated with the instance creation, or failure.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Request Instance", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestInstance(const FRHAPI_InstanceRequest& InstanceRequest, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { RequestInstance(InstanceRequest, Delegate); }
	/**
	 * @brief Shutdown the existing instance for the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the instance ending.
	 */
	virtual void EndInstance(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::EndInstance, ); };
	/**
	 * @brief Blueprint compatible version of EndInstance
	 * @param [in] Delegate Callback delegate for the session being updated with the instance ending.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "End Instance", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_EndInstance(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { EndInstance(Delegate); };
	/**
	 * @brief Starts the match of the instance on the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the match start.
	 */
	virtual void StartMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::StartMatch, ); };
	/**
	 * @brief Blueprint compatible version of StartMatch
	 * @param [in] Delegate Callback delegate for the session being updated with the match start.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session|Match", meta = (DisplayName = "Start Match", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_StartMatch(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { StartMatch(Delegate); };
	/**
	 * @brief Ends the match of the instance on the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the match end.
	 */
	virtual void EndMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::EndMatch, ); };
	/**
	 * @brief Blueprint compatible version of EndMatch
	 * @param [in] Delegate Callback delegate for the session being updated with the match end.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session|Match", meta = (DisplayName = "End Match", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_EndMatch(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { EndMatch(Delegate); };
	/**
	* @brief Updates the session info.
	* @param [in] Update The session info for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new session data.
	*/
	virtual void UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::UpdateSessionInfo, ); };
	/**
	* @brief Blueprint compatible of UpdateSessionInfo
	* @param [in] Update The session info for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new session data.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Host", meta = (DisplayName = "Update Session Info", AutoCreateRefTerm = "Update,Delegate"))
	void BLUEPRINT_UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { UpdateSessionInfo(Update, Delegate); };
	/**
	* @brief Gets a struct with a copy of the session state, so that it can be modified and passed to UpdateSessionInfo.
	*/
	UFUNCTION(BlueprintPure, Category = "Session|Host")
	FRHAPI_SessionUpdate GetSessionUpdateInfoDefaults() const;
	/**
	* @brief Updates the sessions instance info.
	* @param [in] Update The instance info for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new instance data.
	*/
	virtual void UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::UpdateInstanceInfo, ); };
	/**
	* @brief Blueprint compatible version of UpdateInstanceInfo
	* @param [in] Update The instance info for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new instance data.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Host", meta = (DisplayName = "Update Instance Info", AutoCreateRefTerm = "Update,Delegate"))
	void BLUEPRINT_UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { UpdateInstanceInfo(Update, Delegate); };
	/**
	* @brief Gets a struct with a copy of the instance state, so that it can be modified and passed to UpdateInstanceInfo.
	*/
	UFUNCTION(BlueprintPure, Category = "Session|Host")
	FRHAPI_InstanceInfoUpdate GetInstanceUpdateInfoDefaults() const;
	/**
	* @brief Updates the sessions browser info.
	* @param [in] bEnable If true, sets the browser info. Otherwise, clear it out.
	* @param [in] CustomData The new browser data for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new browser data.
	*/
	virtual void UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::UpdateBrowserInfo, ); };
	/**
	* @brief Blueprint compatible version of UpdateBrowserInfo
	* @param [in] bEnable If true, sets the browser info. Otherwise, clear it out.
	* @param [in] CustomData The new browser data for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new browser data.
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Host", meta = (DisplayName = "Update Browser Info", AutoCreateRefTerm = "CustomData,Delegate"))
	void BLUEPRINT_UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { UpdateBrowserInfo(bEnable, CustomData, Delegate); };
	/**
	* @brief Utility function for beacon connections - not exposed to blueprint so that it can have encryption data
	* @param [in] Player Player the beacon is being created for, used for login credential passing
	* @param [in] BeaconClass The type of beacon to create
	* @param [in] EncryptionData Encryption credentials, if required
	* @return The created client, for which a connection attempt is being made
	*/
	AOnlineBeaconClient* CreateBeacon(class ULocalPlayer* Player, TSubclassOf<AOnlineBeaconClient> BeaconClass, const FEncryptionData& EncryptionData);
	/**
	* @brief Blueprint compatible version of CreateBeacon
	* @param [in] Player Player the beacon is being created for, used for login credential passing
	* @param [in] BeaconClass The type of beacon to create
	* @param [in] EncryptionData Encryption credentials, if required
	* @return The created client, for which a connection attempt is being made
	*/
	UFUNCTION(BlueprintCallable, Category = "Session|Host")
	AOnlineBeaconClient* BLUEPRINT_CreateBeacon(class ULocalPlayer* Player, TSubclassOf<AOnlineBeaconClient> BeaconClass) { return CreateBeacon(Player, BeaconClass, FEncryptionData()); }
	/**
	 * @brief Is this a beacon session.
	 */
	UFUNCTION(BlueprintPure, Category = "Session|Beacon")
	virtual bool IsBeaconSession() const;
	/**
	 * @brief For debug tool usage, to get the last beacon.
	 */
	AOnlineBeaconClient* GetLastBeacon() const { return LastBeacon.Get(); }

protected:
	/**
	 * @brief Tracks if the session is currently active session on the Game Instance Session Subsystem.
	 */
	UPROPERTY(BlueprintGetter=IsActive, Category = "Session")
	bool bIsActive;
	/**
	 * @brief Tracks if the session is currently watching its members presences.
	 */
	UPROPERTY(BlueprintGetter = IsWatchingPlayers, Category = "Session|Presence")
	bool bWatchingPlayers;
	/**
	 * @brief For debug tool usage, to track the last beacon.
	 */
	TWeakObjectPtr<AOnlineBeaconClient> LastBeacon;
	/**
	 * @brief  dummy for now, should it bubble up the callback?
	 * note - this existing is important to mark the players in the session as watched
	 */
	virtual void OnWatchedPlayerPresenceUpdated(class URH_PlayerPresence* PresenceInfo) {}
};

/** @ingroup Session
 * @brief Offline Sessions are sessions the session owner is actively a member of that are unsynchronized with the API.
 * This is primarily intended as a utility class to allow for the session flow to be used globally, 
 * even when not running API based sessions (ex: tutorial / practice area before login).
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_OfflineSession : public URH_JoinedSession
{
	GENERATED_UCLASS_BODY()
public:
	/**
	 * @brief Gets that the session is offline.
	 */
	virtual bool IsOffline() const override { return true; }
	/** @brief Currently not supported for offline sessions */
	virtual void InvitePlayer(const FGuid& PlayerUuid, int32 Team = 0, const TMap<FString, FString>& CustomData = TMap<FString, FString>(), const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/** @brief Currently not supported for offline sessions */
	virtual void KickPlayer(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/** @brief Currently not supported for offline sessions */
	virtual void SetLeader(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Changes the team a given player is associated with in the session.
	 * @param [in] PlayerUuid The unique player Id to invite to the session.
	 * @param [in] Team The target team that the player will be associated with in the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the team change.
	 */
	virtual void ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/** @brief Currently not supported for offline sessions */
	virtual void UpdatePlayerCustomData(const FGuid& PlayerUuid, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Leaves the session.
	 * @param [in] bFromOSSSession If true, then leave the OSS Session. Otherwise, just leave the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the leave.
	 */
	virtual void Leave(bool bFromOSSSession, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Attempt to create a new instance for the session.
	 * @param [in] InstanceRequest Details for the instance being requested.
	 * @param [in] Delegate Callback delegate for the session being updated with the instance creation, or failure.
	 */
	virtual void RequestInstance(const FRHAPI_InstanceRequest& InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Shutdown the existing instance for the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the instance ending.
	 */
	virtual void EndInstance(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Starts the match of the instance on the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the match start.
	 */
	virtual void StartMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Ends the match of the instance on the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the match end.
	 */
	virtual void EndMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

	// Host only functions
	/**
	* @brief Updates the session info.
	* @param [in] Update The session info for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new session data.
	*/
	virtual void UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	* @brief Updates the sessions instance info.
	* @param [in] Update The instance info for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new instance data.
	*/
	virtual void UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

protected:
	void ImportSessionUpdateToAllPlayers(const FRH_APISessionWithETag& Update);
};

/** @ingroup Session
 * @brief Online Sessions are sessions that are synchronized from the API (and since it is a joined session, the Session Owner is a member)
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_OnlineSession : public URH_JoinedSession
{
	GENERATED_UCLASS_BODY()
public:
	/**
	 * @brief Gets that an online session is not an offline session.
	 */
	virtual bool IsOffline() const override { return false; }
	/**
	 * @brief Update a session from the owner, implies a template update.
	 * @param [in] newSessionData The new session data.
	 * @param [in] newTemplate The new session template.
	 */
	virtual void ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRHAPI_SessionTemplate& newTemplate) override;
	/**
	 * @brief Called when the session was removed from our session list. Cleans up state then trigger callback on owner.
	 * @param [in] Delegate The delegate to call when the session is removed.
	 */
	virtual void Expire(const FRH_OnSessionExpiredDelegate& Delegate);

	/**
	 * @brief Will create a session in most cases, though sessions configured as a hub in their template may perform a join instead.
	 * @param [in] CreateParams The parameters for the session creation or joining.
	 * @param [in] SessionOwner The owner of the session.
	 * @param [in] Delegate Callback delegate on the session being updated from create/join.
	 */
	static void CreateOrJoinByType(const FRHAPI_CreateOrJoinRequest& CreateParams, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Create Or Join By Type", AutoCreateRefTerm = "CreateParams,Delegate"))
	/**
	* @brief Blueprint compatible version of CreateOrJoinByType
	* @param [in] CreateParams The parameters for the session creation or joining.
	* @param [in] SessionOwner The owner of the session.
	* @param [in] Delegate Callback delegate on the session being updated from create/join.
	*/
	static void BLUEPRINT_CreateOrJoinByType(const FRHAPI_CreateOrJoinRequest& CreateParams, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { CreateOrJoinByType(CreateParams, SessionOwner, Delegate); }
	/**
	 * @brief Joins a specific queue with the session to be matchmade with others.
	 * @param [in] Request The request for joining the queue.
	 * @param [in] Delegate Callback delegate on the session being updated from joining matchmaking.
	 */
	virtual void JoinQueue(const FRHAPI_QueueJoinRequest& Request, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock());
	/**
	 * @brief Simplified version of queue join, joins a specific queue with the session to be matchmade with others.
	 * @param [in] QueueId The Id of the queue being joined.
	 * @param [in] MatchmakingTags Specific data to be passed in as extra params for matchmaking.
	 * @param [in] Delegate Callback delegate on the session being updated from joining matchmaking.
	 */
	virtual void JoinQueue(const FString& QueueId, const TArray<FString>& MatchmakingTags = TArray<FString>(), const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock())
	{
		FRHAPI_QueueJoinRequest Request = {};
		FRHAPI_AdditionalJoinParams AdditionalParams = {};
		Request.QueueId = QueueId;
		AdditionalParams.SetTags(MatchmakingTags);
		Request.SetAdditionalJoinParams(AdditionalParams);
		JoinQueue(Request, Delegate);
	}
	/**
	 * @brief Blueprint copmatible version of JoinQueue
	 * @param [in] QueueId The Id of the queue being joined.
	 * @param [in] MatchmakingTags Specific data to be passed in as extra params for matchmaking.
	 * @param [in] Delegate Callback delegate on the session being updated from joining matchmaking.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join Queue (Simple)", AutoCreateRefTerm = "MatchmakingTags,Delegate"))
	void BLUEPRINT_JoinQueue(const FString& QueueId, const TArray<FString>& MatchmakingTags, const FRH_OnSessionUpdatedDynamicDelegate& Delegate)
	{
		JoinQueue(QueueId, MatchmakingTags, Delegate);
	}
	/**
	 * @brief Blueprint copmatible version of JoinQueue
	 * @param [in] Request The request for joining the queue.
	 * @param [in] Delegate Callback delegate on the session being updated from joining matchmaking.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join Queue", AutoCreateRefTerm = "Request,Delegate"))
	void BLUEPRINT_JoinQueueEx(const FRHAPI_QueueJoinRequest& Request, const FRH_OnSessionUpdatedDynamicDelegate& Delegate)	{ JoinQueue(Request, Delegate); }
	/**
	 * @brief Leaves the currently active matchmaking queue.
	 * @param [in] Delegate Callback delegate on the session being updated from leaving matchmaking.
	 */
	virtual void LeaveQueue(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock());
	/**
	 * @brief Blueprint compatible version of LeaveQueue
	 * @param [in] Delegate Callback delegate on the session being updated from leaving matchmaking.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join Queue", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LeaveQueue(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { LeaveQueue(Delegate); }
	/**
	 * @brief Gets a set of default join details for a session owner.
	 * @param [in] SessionOwner Owner of the session to join.
	 * @return default join details for a session owner.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Get Default Join Details"))
	static FRHAPI_SelfSessionPlayerUpdateRequest GetJoinDetailDefaults(TScriptInterface<IRH_SessionOwnerInterface> SessionOwner);
	/**
	 * @brief Attempts to join a session by id. Requires that the player have permission to join the session to succeed.
	 * @param [in] SessionId Id of the session to join.
	 * @param [in] SessionOwner Owner of the session to join.
	 * @param [in] Delegate Callback deledate with an update of the session being joined.
	 */
	static void JoinById(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) { JoinByIdEx(SessionId, GetJoinDetailDefaults(SessionOwner), SessionOwner, Delegate); }
	/**
	 * @brief Blueprint compatible version of JoinById
	 * @param [in] SessionId Id of the session to join.
	 * @param [in] SessionOwner Owner of the session to join.
	 * @param [in] Delegate Callback deledate with an update of the session being joined.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join By Id (Simple)", AutoCreateRefTerm = "Delegate"))
	static void BLUEPRINT_JoinById(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { JoinByIdEx(SessionId, GetJoinDetailDefaults(SessionOwner), SessionOwner, Delegate); }
	/**
	 * @brief Attempts to join a session by id. Requires that the player have permission to join the session to succeed.
	 * @param [in] SessionId Id of the session to join.
	 * @param [in] JoinDetails Details for the player joining the session.
	 * @param [in] SessionOwner Owner of the session to join.
	 * @param [in] Delegate Callback deledate with an update of the session being joined.
	 */
	static void JoinByIdEx(const FString& SessionId, const FRHAPI_SelfSessionPlayerUpdateRequest& JoinDetails, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock());
	/**
	 * @brief Blueprint compatible version of JoinByIdEx
	 * @param [in] SessionId Id of the session to join.
	 * @param [in] JoinDetails Details for the player joining the session.
	 * @param [in] SessionOwner Owner of the session to join.
	 * @param [in] Delegate Callback deledate with an update of the session being joined.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join By Id", AutoCreateRefTerm = "JoinDetails, Delegate"))
	static void BLUEPRINT_JoinByIdEx(const FString& SessionId, const FRHAPI_SelfSessionPlayerUpdateRequest& JoinDetails, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { JoinByIdEx(SessionId, JoinDetails, SessionOwner, Delegate); }
	/**
	 * @brief Invites a player to the session.
	 * @param [in] PlayerUuid The unique player Id to invite to the session.
	 * @param [in] CustomData The custom data for the invite
	 * @param [in] Team The target team that the player will be associated with in the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the invite.
	 */
	virtual void InvitePlayer(const FGuid& PlayerUuid, int32 Team = 0, const TMap<FString, FString>& CustomData = TMap<FString, FString>(), const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Kicks a player from the session.
	 * @param [in] PlayerUuid The unique player Id to kick from the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the kick.
	 */
	virtual void KickPlayer(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Sets a new leader for the session.
	 * @param [in] PlayerUuid The unique player Id to become the session leader.
	 * @param [in] Delegate Callback delegate for the session being updated by the leader change.
	 */
	virtual void SetLeader(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Changes the team a given player is associated with in the session.
	 * @param [in] PlayerUuid The unique player Id to invite to the session.
	 * @param [in] Team The target team that the player will be associated with in the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the team change.
	 */
	virtual void ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Changes the session player's custom data.
	 * @param [in] PlayerUuid The unique player Id whose custom data will be updated
	 * @param [in] CustomData The custom data map to set the player's to
	 * @param [in] Delegate Callback delegate for the session being updated by the player update
	 */
	virtual void UpdatePlayerCustomData(const FGuid& PlayerUuid, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Leaves the session.
	 * @param [in] bFromOSSSession If true, then leave the OSS Session. Otherwise, just leave the session.
	 * @param [in] Delegate Callback delegate for the session being updated by the leave.
	 */
	virtual void Leave(bool bFromOSSSession, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Attempt to create a new instance for the session.
	 * @param [in] InstanceRequest Details for the instance being requested.
	 * @param [in] Delegate Callback delegate for the session being updated with the instance creation, or failure.
	 */
	virtual void RequestInstance(const FRHAPI_InstanceRequest& InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Shutdown the existing instance for the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the instance ending.
	 */
	virtual void EndInstance(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Starts the match of the instance on the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the match start.
	 */
	virtual void StartMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	 * @brief Ends the match of the instance on the session.
	 * @param [in] Delegate Callback delegate for the session being updated with the match end.
	 */
	virtual void EndMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

	// Host only functions
	/**
	* @brief Updates the session info.
	* @param [in] Update The session info for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new session data.
	*/
	virtual void UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	* @brief Updates the sessions instance info.
	* @param [in] Update The instance info for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new instance data.
	*/
	virtual void UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	/**
	* @brief Updates the sessions browser info.
	* @param [in] bEnable If true, sets the browser info. Otherwise, clear it out.
	* @param [in] CustomData The new browser data for the update.
	* @param [in] Delegate Callback delegate for the session being updated with new browser data.
	*/
	virtual void UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
};

/** @ingroup Session
 * @brief Session Owner Interface class.
 */
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class URH_SessionOwnerInterface : public UInterface
{
	GENERATED_BODY()
};

/** @ingroup Session
 * @brief Session Owner Interface.
 */
class RALLYHEREINTEGRATION_API IRH_SessionOwnerInterface
{
	GENERATED_BODY()

public:
	/**
	* Gets the auth context to use for API calls for the session owner.
	*/
	virtual FAuthContextPtr GetSessionAuthContext() const = 0;
	/**
	* @brief Imports a session object from the API into the owner (ex: from polling).
	* @param [in] Session The Session to import.
	*/
	virtual void ImportAPISession(const FRH_APISessionWithETag& Session) = 0;
	/**
	* @brief Imports the template into the owner's template list (ex: from polling).
	* @param [in] TemplateWrapper The Template to import.
	*/
	virtual void ImportAPITemplate(const FRHAPI_SessionTemplate& Template) = 0;
	/**
	 * @brief Updates the list of sessions to only those that are active.
	 * @param [in] SessionIds The list of sessions that we are reconciling against.
	 * @param [in] ETag The ETag to use for the update.
	 */
	virtual void ReconcileAPISessions(const TArray<FString>& SessionIds, const TOptional<FString>& ETag = TOptional<FString>()) = 0;

	/**
	 * @brief Updates the list of session templates to those that are active.
	 * @param [in] InTemplates The list of templates that we are reconciling against.
	 * @param [in] ETag The ETag to use for the update.
	 */
	virtual void ReconcileAPITemplates(const TArray<FString>& InTemplates, const TOptional<FString>& ETag = TOptional<FString>()) = 0;

	/**
	 * @brief Gets the PlayerInfo Subsystem.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const = 0;
	/**
	 * @brief Gets the Online Subsystem to use for OSS calls
	 */
	virtual IOnlineSubsystem* GetOSS() const = 0;
	/**
	 * @brief Gets the Online Subsystem Unique Id to use for OSS calls
	 */
	virtual FUniqueNetIdWrapper GetOSSUniqueId() const = 0;
	/**
	 * @brief Gets the Player UUID to use for player related calls (can be invalid)
	 */
	virtual FGuid GetPlayerUuid() const
	{
		return FGuid();
	}
	/**
	 * @brief Gets the Etag for a given Session.
	 * @param [in] SessionId The Session Id to get the ETag for.
	 * @return The ETag for the session.
	 */
	TOptional<FString> GetETagForSession(const FString& SessionId) const
	{
		const auto* Session = GetSessionById(SessionId);
		if (Session != nullptr)
		{
			return Session->GetETag();
		}
		return TOptional<FString>();
	}
	/**
	 * @brief Gets the etag to use for a "Get all Templates" type query.
	 */
	virtual TOptional<FString> GetETagForAllTemplatesPoll() const = 0;
	/**
	 * @brief Gets the etag to use for a "Get all Sessions" type query.
	 */
	virtual TOptional<FString> GetETagForAllSessionsPoll() const = 0;
	/**
	 * @brief Used to get all sessions, primarily for get all sessions polling where etag matches.
	 */
	virtual TArray<URH_SessionView*> GetAllSessionsForPolling() const = 0;
	/**
	 * @brief Gets a session by its id.
	 * @param [in] SessionId The Session Id to get.
	 * @return The Session with the given Id.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual URH_SessionView* GetSessionById(const FString& SessionId) const = 0;
	/**
	 * @brief Gets a session template by type
	 * @param [in] Type the Type of template to get.
	 * @param [out] Template The session template being retrieved.
	 * @return If true, the template was found.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual bool GetTemplate(const FString& Type, FRHAPI_SessionTemplate& Template) const = 0;
	/**
	 * @brief Gets the platform synchronization object using the rally here session id
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual URH_PlatformSessionSyncer* GetPlatformSyncerByRHSessionId(const FString& SessionId) const = 0;
	/**
	 * @brief Gets the platform synchronization object using the platform session id
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual URH_PlatformSessionSyncer* GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl& SessionId) const = 0;
};