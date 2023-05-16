#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UsersAPI.h"
#include "InventoryType.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereIntegrationModule.h"
#include "SettingsAPI.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "RH_InventorySubsystem.h"
#include "Tickable.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"

#include "RH_PlayerInfoSubsystem.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlatformsDynamicDelegate, bool, bSuccess, const TArray<URH_PlayerPlatformInfo*>&, Platforms);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlatformsDelegate, bool, const TArray<URH_PlayerPlatformInfo*>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlatformsBlock, FRH_PlayerInfoGetPlatformsDelegate, FRH_PlayerInfoGetPlatformsDynamicDelegate, bool, const TArray<URH_PlayerPlatformInfo*>&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerSettingsDynamicDelegate, bool, bSuccess, URH_PlayerSettingsDataWrapper*, Response);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerSettingsDelegate, bool, URH_PlayerSettingsDataWrapper*);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlayerSettingsBlock, FRH_PlayerInfoGetPlayerSettingsDelegate, FRH_PlayerInfoGetPlayerSettingsDynamicDelegate, bool, URH_PlayerSettingsDataWrapper*);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoSetPlayerSettingsDynamicDelegate, bool, bSuccess, URH_PlayerSettingsDataWrapper*, Response);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoSetPlayerSettingsDelegate, bool, URH_PlayerSettingsDataWrapper*);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoSetPlayerSettingsBlock, FRH_PlayerInfoSetPlayerSettingsDelegate, FRH_PlayerInfoSetPlayerSettingsDynamicDelegate, bool, URH_PlayerSettingsDataWrapper*);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetGamerTagDynamicDelegate, bool, bSuccess, const FString&, GamerTag);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetGamerTagDelegate, bool, const FString&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetGamerTagBlock, FRH_PlayerInfoGetGamerTagDelegate, FRH_PlayerInfoGetGamerTagDynamicDelegate, bool, const FString&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoLookupPlayerDynamicDelegate, bool, bSuccess, const TArray<URH_PlayerInfo*>&, PlayerInfo);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoLookupPlayerDelegate, bool, const TArray<URH_PlayerInfo*>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoLookupPlayerBlock, FRH_PlayerInfoLookupPlayerDelegate, FRH_PlayerInfoLookupPlayerDynamicDelegate, bool, const TArray<URH_PlayerInfo*>&)

// multicast delegates to notify listeners of presence events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnPresenceUpdatedMulticastDynamicDelegate, URH_PlayerPresence*, PresenceData);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnPresenceUpdatedMulticastDelegate, URH_PlayerPresence*);

// non multicast delegates for update request tracking
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnRequestPlayerPresenceDynamicDelegate, bool, bSuccess, URH_PlayerPresence*, PresenceData);
DECLARE_DELEGATE_TwoParams(FRH_OnRequestPlayerPresenceDelegate, bool, URH_PlayerPresence*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnRequestPlayerPresenceBlock, FRH_OnRequestPlayerPresenceDelegate, FRH_OnRequestPlayerPresenceDynamicDelegate, bool, URH_PlayerPresence*)

UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerPresence : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	typedef RallyHereAPI::Traits_GetPlayerPresencePublicByUuid GetPresenceType;

	UPROPERTY(Config, BlueprintReadOnly, Category = Presence)
	float PresenceRequestDelay;


	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	bool bInitialized;
	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	ERHAPI_OnlineStatus Status;
	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	FString Message;
	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	FString Platform;
	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	FString DisplayName;
	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	TMap<FString, FString> CustomData;
	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	FGuid PlayerUuid;
	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	FDateTime LastUpdated;
	UPROPERTY(BlueprintReadOnly, Category = "Presence")
	FString ETag;

	UPROPERTY(BlueprintReadWrite, Category = "Presence", meta = (DisplayName = "On Presence Updated"))
	FRH_OnPresenceUpdatedMulticastDynamicDelegate BLUEPRINT_OnPresenceUpdatedDelegate;
	FRH_OnPresenceUpdatedMulticastDelegate OnPresenceUpdatedDelegate;

	TArray<FRH_OnRequestPlayerPresenceBlock> TemporaryRequestDelegates;

	void Update(const FRHAPI_PlayerPresence& Other)
	{
		bInitialized = true;

		LastUpdated = FDateTime::UtcNow();
		Status = Other.GetStatus(ERHAPI_OnlineStatus::Offline);
		Message = Other.GetMessage(TEXT(""));
		Platform = Other.Platform;
		DisplayName = Other.DisplayName;
		CustomData = Other.GetCustomData(TMap<FString, FString>());
		PlayerUuid = Other.PlayerUuid;
	}

	template<typename T>
	void Update(const T& Other)
	{
		if (Other.ETag.IsSet())
			ETag = Other.ETag.GetValue();
		Update(Other.Content);
	}

	void MarkUpdated()
	{
		LastUpdated = FDateTime::UtcNow();
	}
	void MarkDirty()
	{
		LastUpdated = FDateTime();
	}

	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Presence Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestUpdate(const FRH_OnRequestPlayerPresenceDynamicDelegate& Delegate) { RequestUpdate(Delegate); }
	void RequestUpdate(const FRH_OnRequestPlayerPresenceBlock Delegate = FRH_OnRequestPlayerPresenceBlock())
	{
		TemporaryRequestDelegates.Add(Delegate);
		CheckPollStatus();
	}

	UFUNCTION(BlueprintPure, Category = "Presence")
	class URH_PlayerInfo* GetPlayerInfo() const;

	void CheckPollStatus();
protected:
	FRH_AutoPollerPtr PresencePoller;

	bool ShouldPoll() const
	{
		return !(TemporaryRequestDelegates.Num() == 0
			&& !BLUEPRINT_OnPresenceUpdatedDelegate.IsBound()
			&& !OnPresenceUpdatedDelegate.IsBound());
	}

	void PollPresence(const FRH_PollCompleteFunc& Delegate);

	void HandleResponse(const GetPresenceType::Response& Resp);

	void ExecuteDelegates(bool bSuccess, bool bUpdated)
	{
		// only fire the general callbacks if we updated
		if (bUpdated)
		{
			BLUEPRINT_OnPresenceUpdatedDelegate.Broadcast(this);
			OnPresenceUpdatedDelegate.Broadcast(this);
		}

		// copy the temporary request array before invoking, then clear
		TArray<FRH_OnRequestPlayerPresenceBlock> Temp = TemporaryRequestDelegates;
		TemporaryRequestDelegates.Reset();
		for (auto& Delegate : Temp)
		{
			Delegate.ExecuteIfBound(bSuccess, this);
		}
	}
};

// #RHTODO - Attempt conversion away from UObject (Plevin)
UCLASS()
class RALLYHEREINTEGRATION_API URH_PlayerSettingsDataWrapper : public UObject
{
	GENERATED_BODY()

public:
	TMap<FString, FRHAPI_SettingData> Content;
};

USTRUCT(BlueprintType)
struct FRH_PlayerSettingKeySetWrapper
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, BlueprintReadWrite, Category = "Player Info Subsystem | Player SettingKeys Wrapper")
	TSet<FString> SettingKeySet;

	FRH_PlayerSettingKeySetWrapper()
	{ 
		SettingKeySet.Empty();
	}
};

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerPlatformInfo : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE FRH_PlayerPlatformId GetPlayerPlatformId() const { return PlayerPlatformId; }

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE FString GetPlatformUserId() const { return PlayerPlatformId.UserId; }

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE ERHAPI_PlatformTypes GetPlatformType() const { return PlayerPlatformId.PlatformType; }

	/* Gets the gamertag stored the last time this player logged in to the rally here server*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE FString GetLastKnownGamerTag() const { return GamerTag; }

	UPROPERTY()
	FRH_PlayerPlatformId PlayerPlatformId;

	UPROPERTY()
	FString GamerTag;
};

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerInfo : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	typedef RallyHereAPI::Traits_GetPlayerLinks GetPlatforms;
	typedef RallyHereAPI::Traits_GetAllPlayerUuidSettingsForSettingType GetSettings;
	typedef RallyHereAPI::Traits_SetSinglePlayerUuidSetting SetSettings;

	virtual void BeginDestroy() override;

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE FGuid& GetRHPlayerUuid() { return RHPlayerUuid; }

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerPresence* GetPresence() const { return PlayerPresence;}

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE TArray<FRH_PlayerPlatformId>& GetPlayerPlatformIds() { return LinkedPlayerPlatforms; }
	FORCEINLINE const TArray<FRH_PlayerPlatformId>& GetPlayerPlatformIds() const { return LinkedPlayerPlatforms; }

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	TArray<URH_PlayerPlatformInfo*> GetPlayerPlatforms() const;

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	URH_PlayerPlatformInfo* GetPlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId) const;

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	URH_InventorySubsystem* GetInventorySubsystem() const { return InventorySubsystem; }

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	const TMap<FString, URH_PlayerSettingsDataWrapper*> GetAllStoredPlayerSettings() const { return PlayerSettingsByTypeId; }

	void InitializeForPlayer(const FGuid& PlayerUuid);

	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem")
	URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;

	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Gamer Tag Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLastKnownGamerTagAsync(const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const FTimespan& StaleThreshold, bool bForceRefresh, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagDynamicDelegate& Delegate) { GetLastKnownGamerTagAsync(StaleThreshold, bForceRefresh, PreferredPlatformType, Delegate, LocalPlayerSubsystem); }
	void GetLastKnownGamerTagAsync(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, ERHAPI_PlatformTypes PreferredPlatformType = ERHAPI_PlatformTypes::PT_UNKNOWN, const FRH_PlayerInfoGetGamerTagBlock Delegate = FRH_PlayerInfoGetGamerTagBlock(), const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem = nullptr);
	void OnGetPlayerLinkedPlatformsForLastKnownGamerTagResponse(bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagBlock Delegate, const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem);
	void OnDisplayNameSanitized(bool bSuccess, const FString& SanitizedMessage, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagBlock Delegate);

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Gamer Tag"))
	bool BLUEPRINT_GetLastKnownGamerTag(ERHAPI_PlatformTypes PreferredPlatformType, FString& OutGamerTag) const { return GetLastKnownGamerTag(OutGamerTag, PreferredPlatformType); }
	bool GetLastKnownGamerTag(FString& OutGamerTag, ERHAPI_PlatformTypes PreferredPlatformType = ERHAPI_PlatformTypes::PT_UNKNOWN) const;

	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Linked Platform Info", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLinkedPlatformInfo(const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlatformsDynamicDelegate& Delegate) { GetLinkedPlatformInfo(StaleThreshold, bForceRefresh, Delegate); }
	void GetLinkedPlatformInfo(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, FRH_PlayerInfoGetPlatformsBlock Delegate = FRH_PlayerInfoGetPlatformsBlock());
	void OnGetPlayerLinkedPlatformsResponse(const GetPlatforms::Response& Resp, FRH_PlayerInfoGetPlatformsBlock Delegate);

	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate& Delegate) { GetPlayerSettings(SettingTypeId, StaleThreshold, bForceRefresh, Delegate); }
	void GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, FRH_PlayerInfoGetPlayerSettingsBlock Delegate = FRH_PlayerInfoGetPlayerSettingsBlock());
	void OnGetPlayerSettingsResponse(const GetSettings::Response& Response, FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId);

	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Set Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetPlayerSettings(const FString& SettingTypeId, URH_PlayerSettingsDataWrapper* SettingsData, const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate& Delegate) { SetPlayerSettings(SettingTypeId, SettingsData, Delegate); }
	void SetPlayerSettings(const FString& SettingTypeId, URH_PlayerSettingsDataWrapper* SettingsData, FRH_PlayerInfoSetPlayerSettingsBlock Delegate = FRH_PlayerInfoSetPlayerSettingsBlock());
	void OnSetPlayerSettingsResponse(const SetSettings::Response& Response, FRH_PlayerInfoSetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString SettingKey, URH_PlayerSettingsDataWrapper* SettingsData);

	FAuthContextPtr GetAuthContext() const;

	ERHAPI_PlatformTypes GetLoggedInPlatformType() const;

protected:

	UPROPERTY()
	FGuid RHPlayerUuid;

	UPROPERTY()
	TMap<FString, URH_PlayerSettingsDataWrapper*> PlayerSettingsByTypeId;
	
	// When requesting multiple Player Settings Updates at once, this keeps track of pending requests so we know when all requests are completed
	UPROPERTY(Transient)
	TMap<FString, FRH_PlayerSettingKeySetWrapper> PendingSettingRequestsByTypeId;
	UPROPERTY(Transient)
	TMap<FString, URH_PlayerSettingsDataWrapper*> SetPlayerSettingResponses;

	UPROPERTY()
	TArray<FRH_PlayerPlatformId> LinkedPlayerPlatforms;
	UPROPERTY(BlueprintGetter = GetPresence, Category = "Presence")
	URH_PlayerPresence* PlayerPresence;

	UPROPERTY(BlueprintGetter = GetInventorySubsystem, Category = "Inventory")
	URH_InventorySubsystem* InventorySubsystem;

	FDateTime LastRequestPlatforms;

	TMap<FString, FDateTime> LastRequestSettingsByTypeId;

private:
	// allow player info subsystem to directly set data in some cases
	friend class URH_PlayerInfoSubsystem;
};

USTRUCT(BlueprintType)
struct FRH_PlayerAndPlatformInfo
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, Category = "RH And Platform Friend")
	FGuid PlayerUuid;

	UPROPERTY(BlueprintReadOnly, Category = "RH And Platform Friend")
	FRH_PlayerPlatformId PlayerPlatformId;

	FRH_PlayerAndPlatformInfo() : PlayerUuid(FGuid()), PlayerPlatformId(FRH_PlayerPlatformId()) {}
};
	
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerInfoSubsystem : public URH_GameInstanceSubsystemPlugin, public FTickableGameObject
{
    GENERATED_BODY()

public:
	typedef RallyHereAPI::Traits_LookupPlayer TLookupPlayer;
	
    virtual void Initialize() override;
    virtual void Deinitialize() override;

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	const TMap<FGuid, URH_PlayerInfo*>& GetPlayerInfos() const { return PlayerInfos;}

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerInfo* GetOrCreatePlayerInfo(const FGuid& PlayerUuid);
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerPlatformInfo* GetOrCreatePlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId);
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerInfo* FindPlayerInfoByPlatformId(const FRH_PlayerPlatformId& PlayerPlatformId) const;
	
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerInfo* GetPlayerInfo(const FGuid& PlayerUuid) const { auto* Info = PlayerInfos.Find(PlayerUuid); return Info != nullptr ? *Info : nullptr; }

	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerPlatformInfo* GetPlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId) const { auto* Info = PlayerPlatformInfos.Find(PlayerPlatformId); return Info != nullptr ? *Info : nullptr; }

	void AddPlayerLink(const FRH_PlayerPlatformId& PlayerPlatformId, const FGuid& PlayerUuid) { PlayerPlatformIdToUuidMap.Add(PlayerPlatformId, PlayerUuid); }

	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem", meta = (DisplayName = "Lookup Player", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerDynamicDelegate& Delegate) { LookupPlayer(PlayerName, Delegate); }
	void LookupPlayer(FString PlayerName, FRH_PlayerInfoLookupPlayerBlock Delegate = FRH_PlayerInfoLookupPlayerBlock());
	void OnLookupPlayerResponse(const TLookupPlayer::Response& Resp, FRH_PlayerInfoLookupPlayerBlock Delegate);

	void ClearPlayerInfoCache();

	// FTickableGameObject interface
	virtual void Tick(float DeltaTime);
	virtual bool IsTickable() const { return !IsTemplate(); }
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_PlayerInfoSubsystem, STATGROUP_TaskGraphTasks); }

private:
	UPROPERTY()
	TMap<FGuid, URH_PlayerInfo*> PlayerInfos;

	UPROPERTY()
	TMap<FRH_PlayerPlatformId, URH_PlayerPlatformInfo*> PlayerPlatformInfos;

	UPROPERTY()
	TMap<FRH_PlayerPlatformId, FGuid> PlayerPlatformIdToUuidMap;
	
	void InitPropertiesWithDefaultValues();
};