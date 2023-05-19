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

/**
 * @brief Player Presence class used to store player presence data.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerPresence : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	typedef RallyHereAPI::Traits_GetPlayerPresencePublicByUuid GetPresenceType;

	/**
	* @brief Configurable delay between presence update requests.
	*/
	UPROPERTY(Config, BlueprintReadOnly, Category = Presence)
	float PresenceRequestDelay;

	/**
	* @brief Tracks if the Presence has been initialized.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	bool bInitialized;
	/**
	* @brief Online status of the player.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	ERHAPI_OnlineStatus Status;
	/**
	* @brief Message set by a player to display on their presence information.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	FString Message;
	/**
	* @brief Which platform the player is currently playing / last seen on.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	FString Platform;
	/**
	* @brief The players display name for their current or last seen platform.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	FString DisplayName;
	/**
	* @brief Custom data that can be set by the player.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	TMap<FString, FString> CustomData;
	/**
	* @brief Players unique identifier.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	FGuid PlayerUuid;
	/**
	* @brief The last time the players presence data was updated on the client.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	FDateTime LastUpdated;
	/**
	* @brief ETag to track if the presence is stale during requests.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	FString ETag;

	/**
	 * @brief Blueprint delegate to listen for presence updates.
	 */
	UPROPERTY(BlueprintReadWrite, Category = "Player Info Subsystem | Player Presence", meta = (DisplayName = "On Presence Updated"))
	FRH_OnPresenceUpdatedMulticastDynamicDelegate BLUEPRINT_OnPresenceUpdatedDelegate;
	/**
	* @brief Native delegate to listen for presence updates.
	*/
	FRH_OnPresenceUpdatedMulticastDelegate OnPresenceUpdatedDelegate;

	/**
	* @brief Delegates stored to response to currently active requests.
	*/
	TArray<FRH_OnRequestPlayerPresenceBlock> TemporaryRequestDelegates;

	/**
	 * @brief Stores the response data from an API presence request.
	 * @param Other The presence data to store.
	 */
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

	/**
	 * @brief Stores the response data from an API presence request.
	 * @tparam Other The presence data to store.
	 */
	template<typename T>
	void Update(const T& Other)
	{
		if (Other.ETag.IsSet())
			ETag = Other.ETag.GetValue();
		Update(Other.Content);
	}

	/**
	 * @brief Sets the last updated time to now.
	 */
	void MarkUpdated()
	{
		LastUpdated = FDateTime::UtcNow();
	}
	
	/**
	 * @brief Clears the last updated time to force an update.
	 */
	void MarkDirty()
	{
		LastUpdated = FDateTime();
	}

	/**
	* @brief Enqueues an update request for the players presence information from the RallyHere API.
	* @param [in] Delegate Callback delegate for the request.
	*/
	void RequestUpdate(const FRH_OnRequestPlayerPresenceBlock Delegate = FRH_OnRequestPlayerPresenceBlock())
	{
		TemporaryRequestDelegates.Add(Delegate);
		CheckPollStatus();
	}
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Presence", meta = (DisplayName = "Get Presence Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestUpdate(const FRH_OnRequestPlayerPresenceDynamicDelegate& Delegate) { RequestUpdate(Delegate); }


	/**
	* @brief Gets the PlayerInfo that owns this Player Presence.
	* @return The PlayerInfo that owns the Presence.
	*/	
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Presence")
	class URH_PlayerInfo* GetPlayerInfo() const;

	/**
	* @brief Updates the poll status to be active or inactive based on if it should currently be polling.
	*/
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

/**
 * @brief Stores information a specific platform the player has linked to their account.
 */
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerPlatformInfo : public UObject
{
	GENERATED_BODY()
public:
	/**
	* @brief Gets the Platform Id struct for the player.
	* @return The players Platform Id struct.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE FRH_PlayerPlatformId GetPlayerPlatformId() const { return PlayerPlatformId; }

	/**
	* @brief Gets the Platform Id for the player.
	* @return The players Platform Unique Id.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE FString GetPlatformUserId() const { return PlayerPlatformId.UserId; }

	/**
	* @brief Gets the Platform Type for the player.
	* @return The players Platform Type.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE ERHAPI_PlatformTypes GetPlatformType() const { return PlayerPlatformId.PlatformType; }

	/**
	* @brief Gets the gamertag stored the last time this player logged in to the Rally Here server.
	* @return The players gamertag for the platform.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE FString GetLastKnownGamerTag() const { return GamerTag; }

	/**
	 * @brief Players Platform ID struct.
	 */
	UPROPERTY()
	FRH_PlayerPlatformId PlayerPlatformId;

	/**
	 * @brief Last seen gamertag for the player on the platform.
	 */
	UPROPERTY()
	FString GamerTag;
};

/**
 * @brief Stores and fetchs all the information about a given player.
 */
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerInfo : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	typedef RallyHereAPI::Traits_GetPlayerLinks GetPlatforms;
	typedef RallyHereAPI::Traits_GetAllPlayerUuidSettingsForSettingType GetSettings;
	typedef RallyHereAPI::Traits_SetSinglePlayerUuidSetting SetSettings;

	/**
	 * @brief Cleans up the player infos internal systems as it is destroyed.
	 */
	virtual void BeginDestroy() override;

	/**
	* @brief Gets the players Unique player Id.
	* @return The players Unique Player Id.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE FGuid& GetRHPlayerUuid() { return RHPlayerUuid; }

	/**
	* @brief Gets The players presence class.
	* @return The players presence class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerPresence* GetPresence() const { return PlayerPresence;}

	/**
	* @brief Gets the associated platform ids of the player.
	* @return The players associated platforms ids.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE TArray<FRH_PlayerPlatformId>& GetPlayerPlatformIds() { return LinkedPlayerPlatforms; }
	/**
	* @brief Gets the associated platform ids of the player.
	* @return The players associated platforms ids.
	*/
	FORCEINLINE const TArray<FRH_PlayerPlatformId>& GetPlayerPlatformIds() const { return LinkedPlayerPlatforms; }

	/**
	* @brief Gets the associated platforms of the player.
	* @return The players associated platforms.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	TArray<URH_PlayerPlatformInfo*> GetPlayerPlatforms() const;

	/**
	* @brief Gets a specific platform for the player.
	* @param PlayerPlatformId The Id of the platform being requested.
	* @return The platform requested for the player if it exists.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	URH_PlayerPlatformInfo* GetPlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId) const;

	/**
	* @brief Gets the players Inventory Subsystem.
	* @return The players Inventory Subsystem.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	URH_InventorySubsystem* GetInventorySubsystem() const { return InventorySubsystem; }

	/**
	* @brief Gets all the players store settings data.
	* @return The players stored settings data.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	const TMap<FString, URH_PlayerSettingsDataWrapper*> GetAllStoredPlayerSettings() const { return PlayerSettingsByTypeId; }

	/**
	* @brief Gets the players Info Subsystem that the Player Info is on.
	* @return The Player Info Subsystem.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;

	/**
	* @brief Initialized the player info from a given Player Unique Id.
	* @param PlayerUuid The Unique Id of the player.
	*/
	void InitializeForPlayer(const FGuid& PlayerUuid);

	/**
	* @brief Gets the last known gamertag for the player, will make required API calls to retrieve the information if needed.
	* @param [in] LocalPlayerSubsystem The Local Player Subsystem to sanitizing player names.
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] PreferredPlatformType If set, then that specific platforms gamer tag will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player.
	* @param [in] Delegate Callback with the players gamer tag.
	*/
	void GetLastKnownGamerTagAsync(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, ERHAPI_PlatformTypes PreferredPlatformType = ERHAPI_PlatformTypes::PT_UNKNOWN, const FRH_PlayerInfoGetGamerTagBlock Delegate = FRH_PlayerInfoGetGamerTagBlock(), const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem = nullptr);
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Gamer Tag Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLastKnownGamerTagAsync(const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const FTimespan& StaleThreshold, bool bForceRefresh, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagDynamicDelegate& Delegate) { GetLastKnownGamerTagAsync(StaleThreshold, bForceRefresh, PreferredPlatformType, Delegate, LocalPlayerSubsystem); }

	/**
	* @brief Gets the last known gamertag for the player.
	* @param [in] PreferredPlatformType If set, then that specific platforms gamer tag will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player.
	* @param [out] OutGamerTag The players gamer tag.
	* @return If the call successfully found a gamer tag for the player already stored on the client.
	*/
	bool GetLastKnownGamerTag(FString& OutGamerTag, ERHAPI_PlatformTypes PreferredPlatformType = ERHAPI_PlatformTypes::PT_UNKNOWN) const;
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Gamer Tag"))
	bool BLUEPRINT_GetLastKnownGamerTag(ERHAPI_PlatformTypes PreferredPlatformType, FString& OutGamerTag) const { return GetLastKnownGamerTag(OutGamerTag, PreferredPlatformType); }
	
	/**
	* @brief Gets the players linked platforms via API call.
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players linked platforms.
	*/
	void GetLinkedPlatformInfo(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, FRH_PlayerInfoGetPlatformsBlock Delegate = FRH_PlayerInfoGetPlatformsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Linked Platform Info", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLinkedPlatformInfo(const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlatformsDynamicDelegate& Delegate) { GetLinkedPlatformInfo(StaleThreshold, bForceRefresh, Delegate); }


	/**
	* @brief Gets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type requested.
    * @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players settings for the given type.
	*/
	void GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, FRH_PlayerInfoGetPlayerSettingsBlock Delegate = FRH_PlayerInfoGetPlayerSettingsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate& Delegate) { GetPlayerSettings(SettingTypeId, StaleThreshold, bForceRefresh, Delegate); }

	/**
	* @brief Sets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type to update.
	* @param [in] SettingsData Data to be stored into the players settings.
	* @param [in] Delegate Callback when the operation is complete with success information.
	*/
	void SetPlayerSettings(const FString& SettingTypeId, URH_PlayerSettingsDataWrapper* SettingsData, FRH_PlayerInfoSetPlayerSettingsBlock Delegate = FRH_PlayerInfoSetPlayerSettingsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Set Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetPlayerSettings(const FString& SettingTypeId, URH_PlayerSettingsDataWrapper* SettingsData, const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate& Delegate) { SetPlayerSettings(SettingTypeId, SettingsData, Delegate); }

	/**
	 * @brief Gets the local Auth Context for making API calls.
	 * @return Local auth context for the given player or instance
	 */
	FAuthContextPtr GetAuthContext() const;

	/**
	 * @brief Gets the local users logged in platform type.
	 * @return The Platform type of the local user
	 */
	ERHAPI_PlatformTypes GetLoggedInPlatformType() const;

protected:

	/**
	 * @brief The Unique Player Id for the player.
	 */
	UPROPERTY()
	FGuid RHPlayerUuid;

	/**
	 * @brief Cache of Player Settings Data by their settings types.
	 */
	UPROPERTY()
	TMap<FString, URH_PlayerSettingsDataWrapper*> PlayerSettingsByTypeId;
	
	/**
	 * @brief When requesting multiple Player Settings Updates at once, this keeps track of pending requests so we know when all requests are completed.
	 */
	UPROPERTY(Transient)
	TMap<FString, FRH_PlayerSettingKeySetWrapper> PendingSettingRequestsByTypeId;

	/**
	 * @brief Used when requesting multiple Player Settings Updates to track all their responses.
	 */
	UPROPERTY(Transient)
	TMap<FString, URH_PlayerSettingsDataWrapper*> SetPlayerSettingResponses;

	/**
	 * @brief Cache of all platforms the player is linked to.
	 */
	UPROPERTY()
	TArray<FRH_PlayerPlatformId> LinkedPlayerPlatforms;

	/**
	 * @brief The players Presence Information.
	 */
	UPROPERTY(BlueprintGetter = GetPresence, Category = "Presence")
	URH_PlayerPresence* PlayerPresence;

	/**
	 * @brief The Players Inventory Subsystem.
	 */
	UPROPERTY(BlueprintGetter = GetInventorySubsystem, Category = "Inventory")
	URH_InventorySubsystem* InventorySubsystem;

	/**
	 * @brief Tracks the last time the players linked platforms were requested for checking if the data is stale.
	 */	
	FDateTime LastRequestPlatforms;

	/**
	 * @brief Tracks the last time each settigns type was request for checking if the data is stale.
	 */
	TMap<FString, FDateTime> LastRequestSettingsByTypeId;

private:
	void OnGetPlayerLinkedPlatformsForLastKnownGamerTagResponse(bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagBlock Delegate, const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem);
	void OnDisplayNameSanitized(bool bSuccess, const FString& SanitizedMessage, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagBlock Delegate);
	void OnGetPlayerLinkedPlatformsResponse(const GetPlatforms::Response& Response, FRH_PlayerInfoGetPlatformsBlock Delegate);
	void OnGetPlayerSettingsResponse(const GetSettings::Response& Response, FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId);
	void OnSetPlayerSettingsResponse(const SetSettings::Response& Response, FRH_PlayerInfoSetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString SettingKey, URH_PlayerSettingsDataWrapper* SettingsData);

	// allow player info subsystem to directly set data in some cases
	friend class URH_PlayerInfoSubsystem;
};

/**
 * @brief Wrapper to pair a players Unique Player Id and their current logged in Platform Id.
 */
USTRUCT(BlueprintType)
struct FRH_PlayerAndPlatformInfo
{
	GENERATED_BODY()
	
	/**
	 * @brief The players Unique Player id.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "RH And Platform Friend")
	FGuid PlayerUuid;

	/**
	 * @brief The players logged in Platform Id.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "RH And Platform Friend")
	FRH_PlayerPlatformId PlayerPlatformId;

	FRH_PlayerAndPlatformInfo() : PlayerUuid(FGuid()), PlayerPlatformId(FRH_PlayerPlatformId()) {}
};
	
/**
 * @brief Subsystem used to track and request information about players.
 */
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerInfoSubsystem : public URH_GameInstanceSubsystemPlugin, public FTickableGameObject
{
    GENERATED_BODY()

public:
	typedef RallyHereAPI::Traits_LookupPlayer TLookupPlayer;
	
	/**
	 * @brief Initialized the subsystem.
	 */
    virtual void Initialize() override;
	
	/**
	 * @brief Safely tears down the subsystem.
	 */
    virtual void Deinitialize() override;

	/**
	* @brief Gets a map of all the player infos
	* @return Map of player infos by Player Unique Id
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	const TMap<FGuid, URH_PlayerInfo*>& GetPlayerInfos() const { return PlayerInfos;}

	/**
	* @brief Gets a Player Info object for a given Player Unique Id, creates if needed
	* @param [in] PlayerUuid Unique Player Id for the given player
	* @return Player Info for the player
	*/
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem")
	URH_PlayerInfo* GetOrCreatePlayerInfo(const FGuid& PlayerUuid);

	/**
	* @brief Gets a Player Info object for a given Player Platform Id, creates if needed
	* @param [in] PlayerPlatformId Player Platform Id for the given player
	* @return Player Info for the player
	*/
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem")
	URH_PlayerPlatformInfo* GetOrCreatePlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId);

	/**
	* @brief Gets a Player Info object for a given Player Platform Id
	* @param [in] PlayerPlatformId Player Platform Id for the given player
	* @return Player Info for the player if found
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerInfo* FindPlayerInfoByPlatformId(const FRH_PlayerPlatformId& PlayerPlatformId) const;
	
	/**
	* @brief Gets a Player Info object for a given Unique Player Id
	* @param [in] PlayerUuid Unique Player Id for the given player
	* @return Player Info for the player if found
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerInfo* GetPlayerInfo(const FGuid& PlayerUuid) const { auto* Info = PlayerInfos.Find(PlayerUuid); return Info != nullptr ? *Info : nullptr; }

	/**
	* @brief Gets the platform info object for a player by the Platform Id
	* @param [in] PlayerPlatformId Player Platform Id for the given player
	* @return Player Platform Info for the player if found
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	URH_PlayerPlatformInfo* GetPlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId) const { auto* Info = PlayerPlatformInfos.Find(PlayerPlatformId); return Info != nullptr ? *Info : nullptr; }

	/**
	* @brief Adds a platform mapping for a given player 
	* @param [in] PlayerUuid Unique Player Id for the given player
	* @param [in] PlayerPlatformId Player Platform Id for the given player
	*/
	void AddPlayerLink(const FRH_PlayerPlatformId& PlayerPlatformId, const FGuid& PlayerUuid) { PlayerPlatformIdToUuidMap.Add(PlayerPlatformId, PlayerUuid); }

	/**
	* @brief Searchs for all players who use the given Gamer Tag via API Call
	* @param [in] PlayerName The Players Gamer Tag we want to search for
	* @param [in] Delegate Callback with the all PlayerInfos that are found with that gamer tag
	*/
	void LookupPlayer(FString PlayerName, FRH_PlayerInfoLookupPlayerBlock Delegate = FRH_PlayerInfoLookupPlayerBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem", meta = (DisplayName = "Lookup Player", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerDynamicDelegate& Delegate) { LookupPlayer(PlayerName, Delegate); }

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
	
	void ClearPlayerInfoCache();
	void InitPropertiesWithDefaultValues();
	void OnLookupPlayerResponse(const TLookupPlayer::Response& Response, FRH_PlayerInfoLookupPlayerBlock Delegate);
};