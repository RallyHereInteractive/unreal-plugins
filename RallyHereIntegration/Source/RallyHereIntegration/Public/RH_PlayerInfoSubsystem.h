#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UsersAPI.h"
#include "InventoryType.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereIntegrationModule.h"
#include "SettingsAPI.h"
#include "SessionsAPI.h"
#include "RankAPI.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "RH_PlayerInventory.h"
#include "RH_PlayerNotifications.h"
#include "Tickable.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"

#include "RH_PlayerInfoSubsystem.generated.h"

USTRUCT(BlueprintType)
struct FRH_PlayerSettingsDataWrapper
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(Transient, BlueprintReadWrite, Category = "Player Info Subsystem | Player Settings Data Wrapper")
	TMap<FString, FRHAPI_SettingData> Content;

	FRH_PlayerSettingsDataWrapper()
	{
		Content.Empty();
	}
};

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlatformsDynamicDelegate, bool, bSuccess, const TArray<URH_PlayerPlatformInfo*>&, Platforms);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlatformsDelegate, bool, const TArray<URH_PlayerPlatformInfo*>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlatformsBlock, FRH_PlayerInfoGetPlatformsDelegate, FRH_PlayerInfoGetPlatformsDynamicDelegate, bool, const TArray<URH_PlayerPlatformInfo*>&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerSettingsDynamicDelegate, bool, bSuccess, FRH_PlayerSettingsDataWrapper&, Response);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerSettingsDelegate, bool, FRH_PlayerSettingsDataWrapper&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlayerSettingsBlock, FRH_PlayerInfoGetPlayerSettingsDelegate, FRH_PlayerInfoGetPlayerSettingsDynamicDelegate, bool, FRH_PlayerSettingsDataWrapper&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoSetPlayerSettingsDynamicDelegate, bool, bSuccess, FRH_PlayerSettingsDataWrapper&, Response);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoSetPlayerSettingsDelegate, bool, FRH_PlayerSettingsDataWrapper&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoSetPlayerSettingsBlock, FRH_PlayerInfoSetPlayerSettingsDelegate, FRH_PlayerInfoSetPlayerSettingsDynamicDelegate, bool, FRH_PlayerSettingsDataWrapper&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetDisplayNameDynamicDelegate, bool, bSuccess, const FString&, DisplayName);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetDisplayNameDelegate, bool, const FString&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetDisplayNameBlock, FRH_PlayerInfoGetDisplayNameDelegate, FRH_PlayerInfoGetDisplayNameDynamicDelegate, bool, const FString&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoLookupPlayerDynamicDelegate, bool, bSuccess, const TArray<URH_PlayerInfo*>&, PlayerInfo);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoLookupPlayerDelegate, bool, const TArray<URH_PlayerInfo*>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoLookupPlayerBlock, FRH_PlayerInfoLookupPlayerDelegate, FRH_PlayerInfoLookupPlayerDynamicDelegate, bool, const TArray<URH_PlayerInfo*>&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerRankingsDynamicDelegate, bool, bSuccess, const TArray<FRHAPI_PlayerRankResponseV2>, PlayerRankingInfo);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerRankingsDelegate, bool, const TArray<FRHAPI_PlayerRankResponseV2>);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlayerRankingsBlock, FRH_PlayerInfoGetPlayerRankingsDelegate, FRH_PlayerInfoGetPlayerRankingsDynamicDelegate, bool, const TArray<FRHAPI_PlayerRankResponseV2>)

// multicast delegates to notify listeners of presence events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnPresenceUpdatedMulticastDynamicDelegate, URH_PlayerPresence*, PresenceData);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnPresenceUpdatedMulticastDelegate, URH_PlayerPresence*);

// non multicast delegates for update request tracking
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnRequestPlayerPresenceDynamicDelegate, bool, bSuccess, URH_PlayerPresence*, PresenceData);
DECLARE_DELEGATE_TwoParams(FRH_OnRequestPlayerPresenceDelegate, bool, URH_PlayerPresence*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnRequestPlayerPresenceBlock, FRH_OnRequestPlayerPresenceDelegate, FRH_OnRequestPlayerPresenceDynamicDelegate, bool, URH_PlayerPresence*)

// multicast delegates to notify listeners of session events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate, URH_PlayerSessions*, SessionData);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnPlayerSessionsUpdatedMulticastDelegate, URH_PlayerSessions*);

// non multicast delegates for update request tracking
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnRequestPlayerSessionsDynamicDelegate, bool, bSuccess, URH_PlayerSessions*, SessionData);
DECLARE_DELEGATE_TwoParams(FRH_OnRequestPlayerSessionsDelegate, bool, URH_PlayerSessions*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnRequestPlayerSessionsBlock, FRH_OnRequestPlayerSessionsDelegate, FRH_OnRequestPlayerSessionsDynamicDelegate, bool, URH_PlayerSessions*)

/** @defgroup PlayerInfo RallyHere Player Info
 *  @{
 */

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
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Player Info Subsystem | Player Presence", meta = (DisplayName = "On Presence Updated"))
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
	virtual void Update(const FRHAPI_PlayerPresence& Other)
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
	* @param [in] bForceUpdate If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly
	* @param [in] Delegate Callback delegate for the request.
	*/
	void RequestUpdate(bool bForceUpdate = false, const FRH_OnRequestPlayerPresenceBlock& Delegate = FRH_OnRequestPlayerPresenceBlock())
	{
		TemporaryRequestDelegates.Add(Delegate);
		CheckPollStatus(bForceUpdate);
	}
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Presence", meta = (DisplayName = "Get Presence Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestUpdate(bool bForceUpdate, const FRH_OnRequestPlayerPresenceDynamicDelegate& Delegate) { RequestUpdate(bForceUpdate, Delegate); }


	/**
	* @brief Gets the PlayerInfo that owns this Player Presence.
	* @return The PlayerInfo that owns the Presence.
	*/	
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Presence")
	class URH_PlayerInfo* GetPlayerInfo() const;

	/**
	* @brief Updates the poll status to be active or inactive based on if it should currently be polling.
	* @param [in] bForceUpdate If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly
	*/
	void CheckPollStatus(const bool bForceUpdate = false);
protected:
	/**
	 * @brief Poller for the players presence.
	 */
	FRH_AutoPollerPtr PresencePoller;
	/**
	 * @brief Gets if the poller should be actively polling, only polls if something cares about it.
	 */
	virtual bool ShouldPoll() const
	{
		return !(TemporaryRequestDelegates.Num() == 0
			&& !BLUEPRINT_OnPresenceUpdatedDelegate.IsBound()
			&& !OnPresenceUpdatedDelegate.IsBound());
	}
	/**
	 * @brief Starts a poll of the players presence.
	 * @param Delegate Callback delegate for the poll.
	 */
	void PollPresence(const FRH_PollCompleteFunc& Delegate);
	/**
	 * @brief Handles executing any delegate listeners for the players presence.
	 * @param bSuccess If the poll was successful.
	 */
	virtual void ExecuteDelegates(bool bSuccess);
};


/**
 * @brief Player Sessions class used to store player session membership information
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerSessions : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	typedef RallyHereAPI::Traits_GetPlayerSessionsByUuid GetSessionsType;

	/**
	* @brief Tracks if the Presence has been initialized.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	bool bInitialized;
	/**
	* @brief Players unique identifier.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	FGuid PlayerUuid;
	/**
	* @brief The last time the players session data was updated on the client.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	FDateTime LastUpdated;
	/**
	* @brief ETag to track if the session list is stale during requests.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	FString ETag;

	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	FRHAPI_PlayerSessions Sessions;

	/**
	 * @brief Blueprint delegate to listen for sessions updates.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Player Info Subsystem | Player Sessions", meta = (DisplayName = "On Sessions Updated"))
	FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionsUpdatedDelegate;
	/**
	* @brief Native delegate to listen for sessions updates.
	*/
	FRH_OnPlayerSessionsUpdatedMulticastDelegate OnSessionsUpdatedDelegate;
	/**
	* @brief Delegates stored to response to currently active requests.
	*/
	TArray<FRH_OnRequestPlayerSessionsBlock> TemporaryRequestDelegates;

	/**
	 * @brief Stores the response data from an API presence request.
	 * @param Other The presence data to store.
	 */
	virtual void Update(const GetSessionsType::Response& Other)
	{
		bInitialized = true;

		ETag = Other.ETag.Get(FString());
		Sessions = Other.Content;
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
	* @param [in] bForceUpdate If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly
	* @param [in] Delegate Callback delegate for the request.
	*/
	void RequestUpdate(bool bForceUpdate = false, const FRH_OnRequestPlayerSessionsBlock& Delegate = FRH_OnRequestPlayerSessionsBlock())
	{
		TemporaryRequestDelegates.Add(Delegate);
		CheckPollStatus(bForceUpdate);
	}
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Presence", meta = (DisplayName = "Get Presence Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestUpdate(bool bForceUpdate, const FRH_OnRequestPlayerSessionsDynamicDelegate& Delegate) { RequestUpdate(bForceUpdate, Delegate); }

	/**
	* @brief Gets the PlayerInfo that owns this Player Presence.
	* @return The PlayerInfo that owns the Presence.
	*/	
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Presence")
	class URH_PlayerInfo* GetPlayerInfo() const;

	/**
	* @brief Updates the poll status to be active or inactive based on if it should currently be polling.
	* @param [in] bForceUpdate If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly
	*/
	void CheckPollStatus(const bool bForceUpdate = false);
protected:
	/**
	 * @brief Poller for the players presence.
	 */
	FRH_AutoPollerPtr SessionsPoller;
	/**
	 * @brief Gets if the poller should be actively polling, only polls if something cares about it.
	 */
	virtual bool ShouldPoll() const
	{
		return !(TemporaryRequestDelegates.Num() == 0
			&& !BLUEPRINT_OnSessionsUpdatedDelegate.IsBound()
			&& !OnSessionsUpdatedDelegate.IsBound());
	}
	/**
	 * @brief Starts a poll of the players presence.
	 * @param Delegate Callback delegate for the poll.
	 */
	void PollSessions(const FRH_PollCompleteFunc& Delegate);
	/**
	 * @brief Handles executing any delegate listeners for the players presence.
	 * @param bSuccess If the poll was successful.
	 */
	virtual void ExecuteDelegates(bool bSuccess);
};

/**
 * @brief Wrapper to help with setting keys for player settings.
 */
USTRUCT(BlueprintType)
struct FRH_PlayerSettingKeySetWrapper
{
	GENERATED_BODY()

public:
	/** @brief Set of keys being set by the settings update. */
	UPROPERTY(Transient, BlueprintReadWrite, Category = "Player Info Subsystem | Player SettingKeys Wrapper")
	TSet<FString> SettingKeySet;
	/** @brief Default constructor. */
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
	FORCEINLINE ERHAPI_Platform GetPlatform() const { return PlayerPlatformId.PlatformType; }
	/**
	* @brief Gets the display name stored the last time this player logged in to the Rally Here server.
	* @return The players display name for the platform.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	FORCEINLINE FString GetLastKnownDisplayName() const { return DisplayName; }

	/**
	 * @brief Players Platform ID struct.
	 */
	UPROPERTY()
	FRH_PlayerPlatformId PlayerPlatformId;

	/**
	 * @brief Last seen display name for the player on the platform.
	 */
	UPROPERTY()
	FString DisplayName;
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
	typedef RallyHereAPI::Traits_DeleteSinglePlayerUuidSetting DeleteSettings;
	typedef RallyHereAPI::Traits_GetAllPlayerUuidRanksV2 GetRankings;
	typedef RallyHereAPI::Traits_UpdatePlayerUuidRankV2 UpdateRanking;

	/**
	* @brief Gets the players Unique player Id.
	* @return The players Unique Player Id.
	*/
	UFUNCTION(BlueprintGetter, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE FGuid& GetRHPlayerUuid() { return RHPlayerUuid; }

	/**
	* @brief Gets The players presence class.
	* @return The players presence class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerPresence* GetPresence() const { return PlayerPresence;}

	/**
	* @brief Gets The players presence class.
	* @return The players presence class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerSessions* GetSessions() const { return PlayerSessions;}

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
	URH_PlayerInventory* GetPlayerInventory() const { return PlayerInventory; }

	/**
	* @brief Gets the players Notification Subsystem.
	* @return The players Notification Subsystem.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	URH_PlayerNotifications* GetPlayerNotifications() const { return PlayerNotifications; }
	/**
	* @brief Request to start streaming notifications for this player
	*/
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info")
	void StartStreamingNotifications();
	/**
	* @brief Requests to stop streaming notifications
	* @param [in[ bClearCache If true, the cache of notifications will be cleared.
	*/
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info")
	void StopStreamingNotifications(bool bClearCache = true);

	/**
	* @brief Gets all the players store settings data.
	* @return The players stored settings data.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	const TMap<FString, FRH_PlayerSettingsDataWrapper>& GetAllStoredPlayerSettings() const { return PlayerSettingsByTypeId; }

	/**
	* @brief Gets all the players stored ranking data.
	* @return The players stored settings data.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	const TMap<FString, FRHAPI_PlayerRankResponseV2>& GetAllStoredPlayerRankings() const { return PlayerRankingsByRankingId; }

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
	* @brief Gets the last known display name for the player, will make required API calls to retrieve the information if needed.
	* @param [in] LocalPlayerSubsystem The Local Player Subsystem to sanitizing player names.
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] PreferredPlatformType If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player.
	* @param [in] Delegate Callback with the players display name.
	*/
	void GetLastKnownDisplayNameAsync(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, ERHAPI_Platform PreferredPlatformType = ERHAPI_Platform::Anon, const FRH_PlayerInfoGetDisplayNameBlock& Delegate = FRH_PlayerInfoGetDisplayNameBlock(), const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem = nullptr);
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Display Name Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLastKnownDisplayNameAsync(const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const FTimespan& StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameDynamicDelegate& Delegate) { GetLastKnownDisplayNameAsync(StaleThreshold, bForceRefresh, PreferredPlatformType, Delegate, LocalPlayerSubsystem); }
	
	/**
	* @brief Gets the last known display name for the player.
	* @param [in] PreferredPlatformType If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player.
	* @param [out] OutDisplayName The player's display name.
	* @return If the call successfully found a display name for the player already stored on the client.
	*/
	bool GetLastKnownDisplayName(FString& OutDisplayName, ERHAPI_Platform PreferredPlatformType = ERHAPI_Platform::Anon) const;
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Display Name"))
	bool BLUEPRINT_GetLastKnownDisplayName(ERHAPI_Platform PreferredPlatformType, FString& OutDisplayName) const { return GetLastKnownDisplayName(OutDisplayName, PreferredPlatformType); }
	
	/**
	* @brief Gets the players linked platforms via API call.
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players linked platforms.
	*/
	void GetLinkedPlatformInfo(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlatformsBlock& Delegate = FRH_PlayerInfoGetPlatformsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Linked Platform Info", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLinkedPlatformInfo(const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlatformsDynamicDelegate& Delegate) { GetLinkedPlatformInfo(StaleThreshold, bForceRefresh, Delegate); }

	/**
	* @brief Gets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type requested.
    * @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players settings for the given type.
	*/
	void GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlayerSettingsBlock& Delegate = FRH_PlayerInfoGetPlayerSettingsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate& Delegate) { GetPlayerSettings(SettingTypeId, StaleThreshold, bForceRefresh, Delegate); }

	/**
	* @brief Sets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type to update.
	* @param [in] SettingsData Data to be stored into the players settings.
	* @param [in] Delegate Callback when the operation is complete with success information.
	*/
	void SetPlayerSettings(const FString& SettingTypeId, FRH_PlayerSettingsDataWrapper& SettingsData, const FRH_PlayerInfoSetPlayerSettingsBlock& Delegate = FRH_PlayerInfoSetPlayerSettingsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Set Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetPlayerSettings(const FString& SettingTypeId, FRH_PlayerSettingsDataWrapper SettingsData, const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate& Delegate) { SetPlayerSettings(SettingTypeId, SettingsData, Delegate); }

	/**
	* @brief Deletes the players settings information for a given type.
	* @param [in] SettingTypeId The setting type to delete.
	* @param [in] SettingsData Data to be deleted from the players settings (only uses keys)
	* @param [in] Delegate Callback when the operation is complete with success information.
	*/
	void DeletePlayerSettings(const FString& SettingTypeId, FRH_PlayerSettingsDataWrapper& SettingsData, const FRH_PlayerInfoSetPlayerSettingsBlock& Delegate = FRH_PlayerInfoSetPlayerSettingsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Delete Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_DeletePlayerSettings(const FString& SettingTypeId, FRH_PlayerSettingsDataWrapper& SettingsData, const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate& Delegate) { DeletePlayerSettings(SettingTypeId, SettingsData, Delegate); }

	/**
	* @brief Gets the players ranking information for a given type.
    * @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players ranking for the given type.
	*/
	void GetPlayerRankings(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlayerRankingsBlock& Delegate = FRH_PlayerInfoGetPlayerRankingsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Player Rankings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetPlayerRankings(const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate& Delegate) { GetPlayerRankings(StaleThreshold, bForceRefresh, Delegate); }

	/**
	* @brief Sets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type to update.
	* @param [in] SettingsData Data to be stored into the players settings.
	* @param [in] Delegate Callback when the operation is complete with success information.
	*/
	void UpdatePlayerRanking(const FString& RankId, const FRHAPI_PlayerRankUpdateRequest& RankData, const FRH_PlayerInfoGetPlayerRankingsBlock& Delegate = FRH_PlayerInfoGetPlayerRankingsBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Update Player Ranking", AutoCreateRefTerm = "RankData,Delegate"))
	void BLUEPRINT_UpdatePlayerRanking(const FString& RankId, const FRHAPI_PlayerRankUpdateRequest& RankData, const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate& Delegate) { UpdatePlayerRanking(RankId, RankData, Delegate); }
	/**
	 * @brief Gets the local Auth Context for making API calls.
	 * @return Local auth context for the given player or instance
	 */
	FAuthContextPtr GetAuthContext() const;
	/**
	 * @brief Gets the local users logged in platform type.
	 * @return The Platform type of the local user
	 */
	ERHAPI_Platform GetLoggedInPlatform() const;
	/**
	* @brief Blueprint delegate to listen for presence updates.
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "On Presence Updated"))
	FRH_OnPresenceUpdatedMulticastDynamicDelegate BLUEPRINT_OnPresenceUpdatedDelegate;
	/**
	* @brief Native delegate to listen for presence updates.
	*/
	FRH_OnPresenceUpdatedMulticastDelegate OnPresenceUpdatedDelegate;
	/**
	* @brief Blueprint delegate to listen for session list updates.
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "On Sessions Updated"))
	FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionsUpdatedDelegate;
	/**
	* @brief Native delegate to listen for session list updates.
	*/
	FRH_OnPlayerSessionsUpdatedMulticastDelegate OnSessionsUpdatedDelegate;

protected:
	/**
	 * @brief The Unique Player Id for the player.
	 */
	UPROPERTY(BlueprintGetter = GetRHPlayerUuid, Category = "Player Info Subsystem | Player Info")
	FGuid RHPlayerUuid;
	/**
	 * @brief Cache of Player Settings Data by their settings types.
	 */
	UPROPERTY()
	TMap<FString, FRH_PlayerSettingsDataWrapper> PlayerSettingsByTypeId;
	/**
	 * @brief When requesting multiple Player Settings Updates at once, this keeps track of pending requests so we know when all requests are completed.
	 */
	UPROPERTY(Transient)
	TMap<FString, FRH_PlayerSettingKeySetWrapper> PendingSettingRequestsByTypeId;
	/**
	 * @brief Used when requesting multiple Player Settings Updates to track all their responses.
	 */
	UPROPERTY(Transient)
	TMap<FString, FRH_PlayerSettingsDataWrapper> SetPlayerSettingResponses;
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
	 * @brief The players Sessions Information.
	 */
	UPROPERTY(BlueprintGetter = GetSessions, Category = "Sessions")
	URH_PlayerSessions* PlayerSessions;
	/**
	 * @brief The Players Inventory Subsystem.
	 */
	UPROPERTY(BlueprintGetter = GetPlayerInventory, Category = "Inventory")
	URH_PlayerInventory* PlayerInventory;
	/**
	* @brief The Players Inventory Subsystem.
	*/
	UPROPERTY(BlueprintGetter = GetPlayerNotifications, Category = "Notification")
	URH_PlayerNotifications* PlayerNotifications;
	/**
	 * @brief List of the player's rankings
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Ranking")
	TMap<FString, FRHAPI_PlayerRankResponseV2> PlayerRankingsByRankingId;
	/**
	 * @brief Tracks the last time the players linked platforms were requested for checking if the data is stale.
	 */	
	FDateTime LastRequestPlatforms;
	/**
	 * @brief Tracks the last time each settings type was request for checking if the data is stale.
	 */
	TMap<FString, FDateTime> LastRequestSettingsByTypeId;
	/**
	 * @brief Tracks the last time the player rankings were requested for checking if the data is stale.
	 */	
	FDateTime LastRequestRankings;
	/**
	 * @brief Handles the response to a Get Linked Platforms For Last Known Display Name call.
	 * @param [in] bSuccess If the call was successful.
	 * @param [in] Platforms List of platforms the player is linked to.
	 * @param [in] PreferredPlatformType The preferred platform type to use for the player.
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 * @param [in] LocalPlayerSubsystem The local player subsystem that made the original call.
	 */
	virtual void OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse(bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock Delegate, const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem);
	/**
	 * @brief Handles the response to sanitizing the players display name.
	 * @param [in] bSuccess If the call was successful.
	 * @param [out] SanitizedMessage The sanitized display name.
	 * @param [in] PreferredPlatformType The preferred platform type to use for the player.
	 * @param [in] Delegate Callback Delegate to return the name.
	 */
	virtual void OnDisplayNameSanitized(bool bSuccess, const FString& SanitizedMessage, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock Delegate);
	/**
	 * @brief Handles the response to a Get Linked Platforms call.
	 * @param [in] Resp Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 */
	virtual void OnGetPlayerLinkedPlatformsResponse(const GetPlatforms::Response& Response, const FRH_PlayerInfoGetPlatformsBlock Delegate);
	/**
	 * @brief Handles the response to a Get Player Settings call.
	 * @param [in] Resp Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 * @param [in] SettinyTypeId The type of settings that were requested.
	 */
	virtual void OnGetPlayerSettingsResponse(const GetSettings::Response& Response, const FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId);
	/**
	 * @brief Handles the response to a Set Player Settings call.
	 * @param [in] Resp Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 * @param [in] SettinyTypeId The type of settings that being updated requested.
	 * @param [in] SettingKey The key of the setting that was updated.
	 * @param [in] SettingsData The data of the setting that was updated.
	 */
	virtual void OnSetPlayerSettingsResponse(const SetSettings::Response& Response, const FRH_PlayerInfoSetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString SettingKey, FRH_PlayerSettingsDataWrapper SettingsData);
	/**
	 * @brief Handles the response to a Delete Player Settings call.
	 * @param [in] Resp Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 * @param [in] SettinyTypeId The type of settings that being updated requested.
	 * @param [in] SettingKey The key of the setting that was updated.
	 * @param [in] SettingsData The request data of the setting that was deleted
	 */
	virtual void OnDeletePlayerSettingsResponse(const DeleteSettings::Response& Response, const FRH_PlayerInfoSetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString SettingKey, FRH_PlayerSettingsDataWrapper SettingsData);
	/**
	 * @brief Handles the response to a Get Player Rankings call.
	 * @param [in] Resp Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 */
	virtual void OnGetPlayerRankingsResponse(const GetRankings::Response& Response, const FRH_PlayerInfoGetPlayerRankingsBlock Delegate);
	/**
	 * @brief Handles the response to a Update Player Ranking call.
	 * @param [in] Resp Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 */
	virtual void OnUpdatePlayerRankingResponse(const UpdateRanking::Response& Response, const FRH_PlayerInfoGetPlayerRankingsBlock Delegate);
	/**
	 * @brief Helper to broadcast results from player presences being updated.
	 */
	virtual void OnPresenceUpdated()
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastPresenceUpdated, FColor::Purple);
		OnPresenceUpdatedDelegate.Broadcast(PlayerPresence);
		BLUEPRINT_OnPresenceUpdatedDelegate.Broadcast(PlayerPresence);
	}
	/**
	 * @brief Helper to broadcast results from player sessions list being updated.
	 */
	virtual void OnSessionsUpdated()
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastSessionsUpdated, FColor::Purple);
		OnSessionsUpdatedDelegate.Broadcast(PlayerSessions);
		BLUEPRINT_OnSessionsUpdatedDelegate.Broadcast(PlayerSessions);
	}

	// allow player info subsystem to directly set data in some cases
	friend class URH_PlayerInfoSubsystem;

	// allow player presence to call OnPresenceUpdated, so we do not rely on a callback binding
	friend class URH_PlayerPresence;

	// allow player sessions to call OnSessionsUpdated, so we do not rely on a callback binding
	friend class URH_PlayerSessions;
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
	/** @brief Default Constructor. */
	FRH_PlayerAndPlatformInfo() : PlayerUuid(FGuid()), PlayerPlatformId(FRH_PlayerPlatformId()) {}
};
	
/**
 * @brief Subsystem used to track and request information about players.
 */
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerInfoSubsystem : public URH_SandboxedSubsystemPlugin, public FTickableGameObject
{
    GENERATED_BODY()

public:
	typedef RallyHereAPI::Traits_LookupPlayerByPortal TLookupPlayer;
	
	/**
	 * @brief Initialize the subsystem.
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
	const TMap<FGuid, URH_PlayerInfo*>& GetPlayerInfos() const { return PlayerInfos; }

	/**
	* @brief Gets a Player Info object for a given Player Unique Id, creates if needed
	* @param [in] PlayerUuid Unique Player Id for the given player
	* @return Player Info for the player
	*/
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem")
	virtual URH_PlayerInfo* GetOrCreatePlayerInfo(const FGuid& PlayerUuid);

	/**
	* @brief Gets a Player Info object for a given Player Platform Id, creates if needed
	* @param [in] PlayerPlatformId Player Platform Id for the given player
	* @return Player Info for the player
	*/
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem")
	virtual URH_PlayerPlatformInfo* GetOrCreatePlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId);

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
	* @brief Searchs for all players who use the given display name via API Call
	* @param [in] PlayerName The display name we want to search for
	* @param [in] Delegate Callback with the all PlayerInfos that are found with that display name
	*/
	void LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerBlock& Delegate = FRH_PlayerInfoLookupPlayerBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem", meta = (DisplayName = "Lookup Player", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerDynamicDelegate& Delegate) { LookupPlayer(PlayerName, Delegate); }

	/**
	* @brief Searchs for players associated with the given platform and platform user id via API Call
	* @param [in] Platform The platform used for the lookup
	* @param [in] PlatformUserId The platform user id used for the lookup
	* @param [in] Delegate Callback with the all PlayerInfos that are found with that display name
	*/
	void LookupPlayerByPlatformUserId(FRH_PlayerPlatformId PlayerPlatformId, const FRH_PlayerInfoLookupPlayerBlock& Delegate = FRH_PlayerInfoLookupPlayerBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem", meta = (DisplayName = "Lookup Player By Platform Id", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LookupPlayerByPlatformUserId(FRH_PlayerPlatformId PlayerPlatformId, const FRH_PlayerInfoLookupPlayerDynamicDelegate& Delegate) { LookupPlayerByPlatformUserId(PlayerPlatformId, Delegate); }

	/**
	 * @brief Remove a specific Player Info from PlayerInfoSubsystem's cache
	 * @param [in] PlayerUuid The UUID of the Player Info to be removed
	 * @return The Player Info that got removed
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem")
	URH_PlayerInfo* RemovePlayerInfoFromCache(const FGuid& PlayerUuid);

	// FTickableGameObject interface
	/** @brief Unreals basic Tick function. */
	virtual void Tick(float DeltaTime) override;
	/** @brief Gets if currently tickable. */
	virtual bool IsTickable() const override { return !IsTemplate(); }
	/** @brief Gets the stat to use for the tick time. */
	virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_PlayerInfoSubsystem, STATGROUP_TaskGraphTasks); }

protected:
	/** @brief Override class for Player Info if extended. */
	UPROPERTY()
	TSubclassOf<URH_PlayerInfo> PlayerInfoClassOverride;
	/** @brief Map of Player Infos to their player Uuids. */
	UPROPERTY()
	TMap<FGuid, URH_PlayerInfo*> PlayerInfos;
	/** @brief Map of Player Platform Infos to their Platform Ids. */
	UPROPERTY()
	TMap<FRH_PlayerPlatformId, URH_PlayerPlatformInfo*> PlayerPlatformInfos;
	/** @brief Map of Player Uuid to their Platform Ids. */
	UPROPERTY()
	TMap<FRH_PlayerPlatformId, FGuid> PlayerPlatformIdToUuidMap;
	/** @brief Clears the cached player infos. */
	virtual void ClearPlayerInfoCache();
	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();
	/**
	 * @brief Handles the response to a Lookup Player call.
	 * @param [in] Resp Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 */
	virtual void OnLookupPlayerResponse(const TLookupPlayer::Response& Response, const FRH_PlayerInfoLookupPlayerBlock Delegate);
	/**
	 * @brief Handles the response to a Lookup Player By Platform User Id call.
	 * @param [in] Resp Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 */
	virtual void OnLookupPlayerByPlatformUserIdResponse(const TLookupPlayer::Response& Response, const FRH_PlayerInfoLookupPlayerBlock Delegate);
};

/** @} */