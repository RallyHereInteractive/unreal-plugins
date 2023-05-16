
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/Interface.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "UObject/WeakInterfacePtr.h"
#include "SessionAPI.h"
#include "Misc/EngineVersion.h"

#include "RH_Common.h"
#include "RallyHereIntegrationModule.h"
#include "RH_Polling.h"

#include "RH_SessionData.generated.h"

#define SESSIONS_SUPPORT_ETAGS 0

class URH_JoinedSession;
class IRH_SessionOwnerInterface;

struct FRH_SessionTemplate;

typedef TWeakInterfacePtr<IRH_SessionOwnerInterface> FRH_SessionOwnerPtr;

DECLARE_LOG_CATEGORY_EXTERN(LogRHSession, Log, All);

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnSessionUpdatedDynamicDelegate, bool, bSuccess, URH_JoinedSession*, SessionData);
DECLARE_DELEGATE_TwoParams(FRH_OnSessionUpdatedDelegate, bool, URH_JoinedSession*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnSessionUpdatedDelegateBlock, FRH_OnSessionUpdatedDelegate, FRH_OnSessionUpdatedDynamicDelegate, bool, URH_JoinedSession*);

// multicast delegates to notify listeners of session events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnSessionUpdatedMulticastDynamicDelegate, URH_SessionView*, UpdatedSession);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnSessionUpdatedMulticastDelegate, URH_SessionView*);

DECLARE_DELEGATE_TwoParams(FRH_OnPollAllSessionsDelegate, bool, TArray<URH_SessionView*>);

DECLARE_DELEGATE_OneParam(FRH_OnSessionExpiredDelegate, URH_SessionView*);

// utility class to wrapper the tuple of a data type and etag
template<typename T> 
struct RALLYHEREINTEGRATION_API TRH_DataWithETagWrapper
{
	T Data;
	TOptional<FString> ETag;

	TRH_DataWithETagWrapper() : Data{}
	{}
	TRH_DataWithETagWrapper(const T& InData) : Data(InData)
	{}
	TRH_DataWithETagWrapper(T&& InData) : Data(InData)
	{}
	TRH_DataWithETagWrapper(T& InData, const FString& InETag) : Data(InData), ETag(InETag)
	{}
	TRH_DataWithETagWrapper(T&& InData, FString&& InETag) : Data(InData), ETag(InETag)
	{}
	TRH_DataWithETagWrapper(const T& InData, const TOptional<FString>& InETag) : Data(InData), ETag(InETag)
	{}
	TRH_DataWithETagWrapper(T&& InData, TOptional<FString>&& InETag) : Data(InData), ETag(InETag)
	{}
};

typedef TRH_DataWithETagWrapper<FRHAPI_SessionTemplate> FRH_APISessionTemplateWithETag;
typedef TRH_DataWithETagWrapper<FRHAPI_Session> FRH_APISessionWithETag;

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_SessionTemplate
{
	GENERATED_BODY()

	FRH_APISessionTemplateWithETag TemplateData;

	UPROPERTY(BlueprintReadOnly, Category = "Session")
	FString SessionType;
	UPROPERTY(BlueprintReadOnly, Category = "Session")
	FString EngineSessionType;

	static constexpr auto OfflineName = TEXT("Offline");
	bool IsOffline() { return SessionType == OfflineName; }

	void ImportAPITemplate(const FRH_APISessionTemplateWithETag& TemplateWrapper)
	{
		TemplateData = TemplateWrapper;

		// cached values for blueprint
		SessionType = TemplateData.Data.SessionType;
		EngineSessionType = TemplateData.Data.GetEngineSessionType(TEXT(""));
	}
};

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_SessionCreateParams
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Session")
	FString SessionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Session")
	int32 SiteId;

	FRH_SessionCreateParams()
		: SiteId(INDEX_NONE)
	{

	}
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
}

// wrapper around sessions that may or may not be actively tracked
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_SessionView : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	FORCEINLINE const FRH_APISessionWithETag& GetSessionWithETag() const { return SessionData; }

	UFUNCTION(BlueprintPure, Category = "Session")
	const FRHAPI_Session& GetSessionData() const { return SessionData.Data; }
	const FRHAPI_Instance* GetInstanceData() const { return SessionData.Data.GetInstanceOrNull(); }

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

	UFUNCTION(BlueprintPure, Category = "Session")
	virtual bool IsOffline() const { return false; }
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE bool IsOnline() const { return !IsOffline(); }

	UFUNCTION(BlueprintPure, Category = "Session")
	virtual bool IsJoined() const { return false; }

	UFUNCTION(BlueprintPure, Category = "Session")
	bool IsInQueue() const { return GetSessionData().GetMatchmakingOrNull() != nullptr; }

	UFUNCTION(BlueprintGetter, Category = "Session")
	FORCEINLINE FRH_SessionTemplate GetTemplate() const { return Template; };
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE FString GetETag() const { return SessionData.ETag.Get(FString()); };
	UFUNCTION(BlueprintPure, Category="Session")
	FORCEINLINE FString GetSessionId() const { return GetSessionData().SessionId; }
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE FString GetSessionType() const { return GetSessionData().Type; }

	UFUNCTION(BlueprintPure, Category = "Session", meta = (DisplayName = "Get Browser Data"))
	TMap<FString, FString> GetBrowserData() const;
	UFUNCTION(BlueprintPure, Category = "Session", meta = (DisplayName = "Get Custom Data"))
	TMap<FString, FString> GetCustomData() const;
	UFUNCTION(BlueprintPure, Category = "Session", meta = (DisplayName = "Get Custom Data Value"))
	bool GetCustomDataValue(const FString& Key, FString& OutValue) const;

	UFUNCTION(BlueprintPure, Category = "Session|Instance", meta = (DisplayName = "Get Instance Custom Data"))
	TMap<FString, FString> GetInstanceCustomData() const;
	UFUNCTION(BlueprintPure, Category = "Session|Instance", meta = (DisplayName = "Get Instance Custom Data Value"))
	bool GetInstanceCustomDataValue(const FString& Key, FString& OutValue) const;

	// Update a session from the owner, implies a template update
	virtual void ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRH_SessionTemplate& newTemplate);
	// update just the template
	virtual void ImportTemplate(const FRH_SessionTemplate& newTemplate);
	// called when the session was removed from our session list.  Needs to clean up state then trigger callback on owner
	virtual void Expire(FRH_OnSessionExpiredDelegate Delegate);

	UPROPERTY(BlueprintReadWrite, Category = "Session", meta = (DisplayName = "On Session Updated"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionUpdatedDelegate;
	UPROPERTY(BlueprintReadWrite, Category = "Session", meta = (DisplayName = "On Session Not Found"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionNotFoundDelegate;
	FRH_OnSessionUpdatedMulticastDelegate OnSessionUpdatedDelegate;
	FRH_OnSessionUpdatedMulticastDelegate OnSessionNotFoundDelegate;

protected:
	FRH_APISessionWithETag SessionData;

	UPROPERTY(BlueprintGetter = GetTemplate, Category = "Session")
	FRH_SessionTemplate Template;
};

// wrapper around actively tracked sessions (sessions we are doing work on, such as joining OSS, etc)
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_InvitedSession : public URH_SessionView
{
	GENERATED_UCLASS_BODY()
public:
	virtual bool IsOffline() const override { return false; }

	UFUNCTION(BlueprintPure, Category = "Session")
	TScriptInterface<IRH_SessionOwnerInterface> GetSessionOwner() const;

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Join(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { return Join(Delegate); }
	virtual void Join(const FRH_OnSessionUpdatedDelegateBlock Delegate= FRH_OnSessionUpdatedDelegateBlock());

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Leave", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Leave(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { return Leave(Delegate); }
	virtual void Leave(const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock());

};

// wrapper around actively tracked sessions (sessions we are doing work on, such as joining OSS, etc)
UCLASS(Config = RallyHereIntegration, DefaultConfig, Abstract)
class RALLYHEREINTEGRATION_API URH_JoinedSession : public URH_SessionView
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Session")
	TScriptInterface<IRH_SessionOwnerInterface> GetSessionOwner() const;

	UFUNCTION(BlueprintCallable, Category = "Session")
	static FString GetClientVersionForSession();
	static ERHAPI_Input GetClientInputTypeForSession();

	virtual bool IsJoined() const override final { return true; }

	virtual void ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRH_SessionTemplate& newTemplate) override;

	virtual void Expire(FRH_OnSessionExpiredDelegate Delegate);

	// player presence hooks
	UFUNCTION(BlueprintGetter, Category = "Session|Presence")
	virtual bool IsWatchingPlayers() const { return bWatchingPlayers; }
	UFUNCTION(BlueprintCallable, Category = "Session|Presence")
	virtual void SetWatchingPlayers(bool bWatch);

	void SetActive(bool bActive) { bIsActive = bActive; }
	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	FORCEINLINE bool IsActive() const { return bIsActive; }
	
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Invite Player", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_InvitePlayer(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { InvitePlayer(PlayerUuid, Team, Delegate); }
	virtual void InvitePlayer(const FGuid& PlayerUuid, int32 Team = 0, const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::InvitePlayer, ); }

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Kick Player", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_KickPlayer(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { KickPlayer(PlayerUuid, Delegate); }
	virtual void KickPlayer(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::KickPlayer, ); }

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Set Leader", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetLeader(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { SetLeader(PlayerUuid, Delegate); }
	virtual void SetLeader(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::SetLeader, ); }

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Change Player Team", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { ChangePlayerTeam(PlayerUuid, Team, Delegate); }
	virtual void ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::ChangePlayerTeam, ); }

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Leave", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Leave(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { Leave(false, Delegate); }
	virtual void Leave(bool bFromOSSSession, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::Leave, ); }

	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Request Player Instance", AutoCreateRefTerm = "CustomData,Delegate"))
	void BLUEPRINT_RequestPlayerInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { RequestInstance(InstanceStartupParams, ERHAPI_HostType::Player, FString(), CustomData, Delegate); }
	void RequestPlayerInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { RequestInstance(InstanceStartupParams, ERHAPI_HostType::Player, FString(), CustomData, Delegate); }

	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Request Dedicated Instance", AutoCreateRefTerm = "InstanceId,CustomData,Delegate"))
	void BLUEPRINT_RequestDedicatedInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, const FString& InstanceId, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { RequestInstance(InstanceStartupParams, ERHAPI_HostType::Dedicated, InstanceId, CustomData, Delegate); }
	void RequestDedicatedInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, const FString& InstanceId, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { RequestInstance(InstanceStartupParams, ERHAPI_HostType::Dedicated, InstanceId, CustomData, Delegate); }
	
	virtual void RequestInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, ERHAPI_HostType HostType, const FString& InstanceId, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::RequestInstance, ); };
	
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "End Instance", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_EndInstance(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { EndInstance(Delegate); };
	virtual void EndInstance(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::EndInstance, ); };

	UFUNCTION(BlueprintCallable, Category = "Session|Match", meta = (DisplayName = "Start Match", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_StartMatch(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { StartMatch(Delegate); };
	virtual void StartMatch(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::StartMatch, ); };
	UFUNCTION(BlueprintCallable, Category = "Session|Match", meta = (DisplayName = "End Match", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_EndMatch(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { EndMatch(Delegate); };
	virtual void EndMatch(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::EndMatch, ); };

	UFUNCTION(BlueprintCallable, Category = "Session|Host", meta = (DisplayName = "Update Session Info", AutoCreateRefTerm = "Update,Delegate"))
	void BLUEPRINT_UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { UpdateSessionInfo(Update, Delegate); };
	virtual void UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::UpdateSessionInfo, ); };
	UFUNCTION(BlueprintPure, Category = "Session|Host")
	FRHAPI_SessionUpdate GetSessionUpdateInfoDefaults() const;
	
	UFUNCTION(BlueprintCallable, Category = "Session|Host", meta = (DisplayName = "Update Instance Info", AutoCreateRefTerm = "Update,Delegate"))
	void BLUEPRINT_UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { UpdateInstanceInfo(Update, Delegate); };
	virtual void UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::UpdateInstanceInfo, ); };
	UFUNCTION(BlueprintPure, Category = "Session|Host")
	FRHAPI_InstanceInfoUpdate GetInstanceUpdateInfoDefaults() const;

	UFUNCTION(BlueprintCallable, Category = "Session|Host", meta = (DisplayName = "Update Browser Info", AutoCreateRefTerm = "CustomData,Delegate"))
	void BLUEPRINT_UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { UpdateBrowserInfo(bEnable, CustomData, Delegate); };
	virtual void UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) { PURE_VIRTUAL(URH_JoinedSession::UpdateBrowserInfo, ); };

protected:
	UPROPERTY(BlueprintGetter=IsActive, Category = "Session")
	bool bIsActive;

	UPROPERTY(BlueprintGetter = IsWatchingPlayers, Category = "Session|Presence")
	bool bWatchingPlayers;

	// dummy for now, should it bubble up the callback?
	// note - this existing is important to mark the players in the session as watched
	virtual void OnWatchedPlayerPresenceUpdated(class URH_PlayerPresence* PresenceInfo) {}
};

UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_OfflineSession : public URH_JoinedSession
{
	GENERATED_UCLASS_BODY()
public:

	virtual bool IsOffline() const override { return true; }

	virtual void InvitePlayer(const FGuid& PlayerUuid, int32 Team = 0, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void KickPlayer(const FGuid& PlayerUuid, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void SetLeader(const FGuid& PlayerUuid, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void Leave(bool bFromOSSSession, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void RequestInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, ERHAPI_HostType HostType, const FString& InstanceId, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void EndInstance(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

	virtual void StartMatch(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void EndMatch(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

	// Host only functions
	virtual void UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

protected:
	void ImportSessionUpdateToAllPlayers(const FRH_APISessionWithETag& Update);
};

UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_OnlineSession : public URH_JoinedSession
{
	GENERATED_UCLASS_BODY()
public:

	virtual bool IsOffline() const override { return false; }

	virtual void ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRH_SessionTemplate& newTemplate) override;

	virtual void Expire(FRH_OnSessionExpiredDelegate Delegate);

	// simple polling interface - automatically polled, but exposed for customization
	UFUNCTION(BlueprintCallable, Category = "Session")
	void StartPolling();
	UFUNCTION(BlueprintCallable, Category = "Session")
	void StopPolling();
	void PollForUpdate(const FRH_PollCompleteFunc& Delegate);
	UFUNCTION(BlueprintCallable, Category = "Session")
	void ForcePollForUpdate();

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Create Or Join By Type", AutoCreateRefTerm = "CreateParams,Delegate"))
	static void BLUEPRINT_CreateOrJoinByType(const FRH_SessionCreateParams& CreateParams, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { CreateOrJoinByType(CreateParams, SessionOwner, Delegate); }
	static void CreateOrJoinByType(const FRH_SessionCreateParams& CreateParams, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock());

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join Queue", AutoCreateRefTerm = "MatchmakingTags,Delegate"))
	void BLUEPRINT_JoinQueue(const FString& QueueId, const TArray<FString>& MatchmakingTags, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { JoinQueue(QueueId, MatchmakingTags, Delegate); }
	virtual void JoinQueue(const FString& QueueId, const TArray<FString> MatchmakingTags = TArray<FString>(), const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock());

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join Queue", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LeaveQueue(const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { LeaveQueue(Delegate); }
	virtual void LeaveQueue(const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock());

	static void PollSingleSession(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock());
	static void PollAllSessions(TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, bool bTemplatesOnly = false, FRH_OnPollAllSessionsDelegate Delegate = FRH_OnPollAllSessionsDelegate());

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join By Id", AutoCreateRefTerm = "Delegate"))
	static void BLUEPRINT_JoinById(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDynamicDelegate& Delegate) { JoinById(SessionId, SessionOwner, Delegate); }
	static void JoinById(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock());

	virtual void InvitePlayer(const FGuid& PlayerUuid, int32 Team = 0, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void KickPlayer(const FGuid& PlayerUuid, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void SetLeader(const FGuid& PlayerUuid, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void Leave(bool bFromOSSSession, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void RequestInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, ERHAPI_HostType HostType, const FString& InstanceId, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void EndInstance(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

	virtual void StartMatch(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void EndMatch(FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

	// Host only functions
	virtual void UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;
	virtual void UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock()) override;

protected:
	FRH_AutoPollerPtr Poller;
};

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class URH_SessionOwnerInterface : public UInterface
{
	GENERATED_BODY()
};

class RALLYHEREINTEGRATION_API IRH_SessionOwnerInterface
{
	GENERATED_BODY()

public:
	virtual FAuthContextPtr GetSessionAuthContext() const = 0;
	virtual void ImportAPISession(const FRH_APISessionWithETag& Session) = 0;
	virtual void ImportAPITemplate(const FRH_APISessionTemplateWithETag& Template) = 0;

	virtual void ReconcileAPISessions(const TArray<FRH_APISessionWithETag>& SessionsModified, const TArray<FString>& SessionsNotModified, bool bOnlineOnly = true) = 0;
	virtual void ReconcileAPITemplates(const TArray<FRH_APISessionTemplateWithETag>& TemplatesModified, const TArray<FString>& TemplatesNotModified, bool bOnlineOnly = true) = 0;

	virtual class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const = 0;
	
	virtual IOnlineSubsystem* GetOSS() const = 0;

	TOptional<FString> GetETagForSession(const FString& SessionId) const
	{
		const auto* Session = GetSessionById(SessionId);
		if (Session != nullptr)
		{
			return Session->GetETag();
		}
		return TOptional<FString>();
	}

	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual URH_SessionView* GetSessionById(const FString& SessionId) const = 0;

	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual bool GetTemplate(const FString& Type, FRH_SessionTemplate& Template) const = 0;
};
