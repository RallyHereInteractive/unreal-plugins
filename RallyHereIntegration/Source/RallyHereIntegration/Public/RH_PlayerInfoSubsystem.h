// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UsersAPI.h"
#include "InventoryType.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereIntegrationModule.h"
#include "SettingsAPI.h"
#include "SessionsAPI.h"
#include "ReportsAPI.h"
#include "MatchAPI.h"
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
	/** A map of a setting key to its data value */
	UPROPERTY(Transient, BlueprintReadWrite, Category = "Player Info Subsystem | Player Settings Data Wrapper")
	TMap<FString, FRHAPI_SettingData> Content;
	
	/** The last local time when this setting type was requested via a multi-key fetch. */
	UPROPERTY(Transient, BlueprintReadWrite, Category = "Player Info Subsystem | Player Settings Data Wrapper")
	FDateTime LastMultiFetchTime;
	
	/** The last ETag when this setting type was requested via a multi-key fetch. */
	UPROPERTY(Transient, BlueprintReadWrite, Category = "Player Info Subsystem | Player Settings Data Wrapper")
	FDateTime LastMultiFetchETag;
	
	FRH_PlayerSettingsDataWrapper()
	{
	}
};

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlatformsDynamicDelegate, bool, bSuccess, const TArray<URH_PlayerPlatformInfo*>&, Platforms);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlatformsDelegate, bool, const TArray<URH_PlayerPlatformInfo*>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlatformsBlock, FRH_PlayerInfoGetPlatformsDelegate, FRH_PlayerInfoGetPlatformsDynamicDelegate, bool, const TArray<URH_PlayerPlatformInfo*>&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerSettingsDynamicDelegate, bool, bSuccess, const FRH_PlayerSettingsDataWrapper&, Response);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerSettingsDelegate, bool, const FRH_PlayerSettingsDataWrapper&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlayerSettingsBlock, FRH_PlayerInfoGetPlayerSettingsDelegate, FRH_PlayerInfoGetPlayerSettingsDynamicDelegate, bool, const FRH_PlayerSettingsDataWrapper&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoSetPlayerSettingsDynamicDelegate, bool, bSuccess, const FRH_PlayerSettingsDataWrapper&, Response);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoSetPlayerSettingsDelegate, bool, const FRH_PlayerSettingsDataWrapper&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoSetPlayerSettingsBlock, FRH_PlayerInfoSetPlayerSettingsDelegate, FRH_PlayerInfoSetPlayerSettingsDynamicDelegate, bool, const FRH_PlayerSettingsDataWrapper&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_PlayerInfoSetPlayerSettingDynamicDelegate, bool, bSuccess, const FRH_PlayerSettingsDataWrapper&, UpdatedSettings, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_PlayerInfoSetPlayerSettingDelegate, bool, const FRH_PlayerSettingsDataWrapper&, const FRH_ErrorInfo& ErrorInfo);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoSetPlayerSettingBlock, FRH_PlayerInfoSetPlayerSettingDelegate, FRH_PlayerInfoSetPlayerSettingDynamicDelegate, bool, const FRH_PlayerSettingsDataWrapper&, const FRH_ErrorInfo&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetDisplayNameDynamicDelegate, bool, bSuccess, const FString&, DisplayName);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetDisplayNameDelegate, bool, const FString&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetDisplayNameBlock, FRH_PlayerInfoGetDisplayNameDelegate, FRH_PlayerInfoGetDisplayNameDynamicDelegate, bool, const FString&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoLookupPlayerDynamicDelegate, bool, bSuccess, const TArray<URH_PlayerInfo*>&, PlayerInfo);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoLookupPlayerDelegate, bool, const TArray<URH_PlayerInfo*>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoLookupPlayerBlock, FRH_PlayerInfoLookupPlayerDelegate, FRH_PlayerInfoLookupPlayerDynamicDelegate, bool, const TArray<URH_PlayerInfo*>&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerRankingsDynamicDelegate, bool, bSuccess, const TArray<FRHAPI_PlayerRankResponseV2>&, PlayerRankingInfo);
DECLARE_DELEGATE_TwoParams(FRH_PlayerInfoGetPlayerRankingsDelegate, bool, const TArray<FRHAPI_PlayerRankResponseV2>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlayerRankingsBlock, FRH_PlayerInfoGetPlayerRankingsDelegate, FRH_PlayerInfoGetPlayerRankingsDynamicDelegate, bool, const TArray<FRHAPI_PlayerRankResponseV2>&)


UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_FourParams(FRH_PlayerInfoGetPlayerReportsDynamicDelegate, bool, bSuccess, const TArray<FRHAPI_PlayerReport>&, PlayerReports, const FString&, Cursor, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_FourParams(FRH_PlayerInfoGetPlayerReportsDelegate, bool, const TArray<FRHAPI_PlayerReport>&, const FString&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetPlayerReportsBlock, FRH_PlayerInfoGetPlayerReportsDelegate, FRH_PlayerInfoGetPlayerReportsDynamicDelegate, bool, const TArray<FRHAPI_PlayerReport>&, const FString&, const FRH_ErrorInfo&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_PlayerInfoCreatePlayerReportDynamicDelegate, bool, bSuccess, const FRHAPI_PlayerReport, Report, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_PlayerInfoCreatePlayerReportDelegate, bool, const FRHAPI_PlayerReport&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoCreatePlayerReportBlock, FRH_PlayerInfoCreatePlayerReportDelegate, FRH_PlayerInfoCreatePlayerReportDynamicDelegate, bool, const FRHAPI_PlayerReport&, const FRH_ErrorInfo&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_PlayerInfoGetGuideEngagementDynamicDelegate, bool, bSuccess, const FRHAPI_ManyEntityGuideEngagement&, Engagement, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_PlayerInfoGetGuideEngagementDelegate, bool, const FRHAPI_ManyEntityGuideEngagement&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PlayerInfoGetGuideEngagementBlock, FRH_PlayerInfoGetGuideEngagementDelegate, FRH_PlayerInfoGetGuideEngagementDynamicDelegate, bool, const FRHAPI_ManyEntityGuideEngagement&, const FRH_ErrorInfo&)

// multicast delegates to notify listeners of player info subobject events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_OnPlayerInfoSubobjectUpdatedMulticastDynamicDelegate, URH_PlayerInfoSubobject*, Subobject);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_OnPlayerInfoSubobjectUpdatedMulticastDelegate, URH_PlayerInfoSubobject*);

// non multicast delegates for update request tracking
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnRequestPlayerInfoSubobjectDynamicDelegate, bool, bSuccess, URH_PlayerInfoSubobject*, Subobject);
DECLARE_DELEGATE_TwoParams(FRH_OnRequestPlayerInfoSubobjectDelegate, bool, URH_PlayerInfoSubobject*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnRequestPlayerInfoSubobjectDelegateBlock, FRH_OnRequestPlayerInfoSubobjectDelegate, FRH_OnRequestPlayerInfoSubobjectDynamicDelegate, bool, URH_PlayerInfoSubobject*)

/** @defgroup PlayerInfo RallyHere Player Info
 *  @{
 */

 /**
  * @brief Player Info Subobject base class used to store player data
  */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerInfoSubobject : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	/**
	* @brief Tracks if the subobject has been initialized (updated at least once).
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	bool bInitialized;

	/**
	* @brief The last time the players data was updated on the client.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Presence")
	FDateTime LastUpdated;

	/**
	* @brief ETag to track if the data is stale during requests.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	FString ETag;

	/**
	* @brief Players unique identifier.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	FGuid PlayerUuid;

	/**
	* @brief Gets the PlayerInfo that owns this Player Matches object.
	* @return The PlayerInfo that owns the Player Matches object.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Matches")
	class URH_PlayerInfo* GetPlayerInfo() const;

	/**
	 * @private
	 * @brief Blueprint delegate to listen for updates.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Player Info Subsystem | Player Presence", meta = (DisplayName = "On Presence Updated"))
	FRH_OnPlayerInfoSubobjectUpdatedMulticastDynamicDelegate BLUEPRINT_OnUpdatedDelegate;
	/**
	* @brief Native delegate to listen for presence updates.
	*/
	FRH_OnPlayerInfoSubobjectUpdatedMulticastDelegate OnUpdatedDelegate;
	/**
	* @brief Delegates stored to response to currently active requests.
	*/
	TArray<FRH_OnRequestPlayerInfoSubobjectDelegateBlock> TemporaryRequestDelegates;

	/**
	 * @brief Sets the last updated time to now.
	 */
	virtual void MarkUpdated()
	{
		LastUpdated = FDateTime::UtcNow();
	}

	/**
	 * @brief Clears the last updated time to force an update.
	 */
	virtual void MarkDirty()
	{
		LastUpdated = FDateTime();
	}

	/**
	* @brief Enqueues an update request for the players information from the RallyHere API.
	* @param [in] bForceUpdate If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly
	* @param [in] Delegate Callback delegate for the request.
	*/
	virtual void RequestUpdate(bool bForceUpdate = false, const FRH_OnRequestPlayerInfoSubobjectDelegateBlock& Delegate = FRH_OnRequestPlayerInfoSubobjectDelegateBlock())
	{
		TemporaryRequestDelegates.Add(Delegate);
		CheckPollStatus(bForceUpdate);
	}
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Presence", meta = (DisplayName = "Get Presence Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestUpdate(bool bForceUpdate, const FRH_OnRequestPlayerInfoSubobjectDynamicDelegate& Delegate) { RequestUpdate(bForceUpdate, Delegate); }

	/**
	* @brief Enqueues an update request for the players information from the RallyHere API.
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback delegate for the request.
	*/
	virtual void RequestUpdateIfStale(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_OnRequestPlayerInfoSubobjectDelegateBlock& Delegate = FRH_OnRequestPlayerInfoSubobjectDelegateBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Presence", meta = (DisplayName = "Get Presence Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestUpdateIfStale(const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_OnRequestPlayerInfoSubobjectDynamicDelegate& Delegate) { RequestUpdateIfStale(StaleThreshold, bForceRefresh, Delegate); }
	
	/**
	* @brief Updates the poll status to be active or inactive based on if it should currently be polling.
	* @param [in] bForceUpdate If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly
	*/
	virtual void CheckPollStatus(const bool bForceUpdate = false);
protected:
	/**
	 * @brief Poller for the players matches.
	 */
	FRH_AutoPollerPtr Poller;
	/**
	* @brief The name of the timer preset to use for polling
	*/
	FName PollTimerName;
	/**
	* @brief The priority of the poll request
	*/
	int32 PollPriority;

	/**
	 * @brief Gets if the poller should be actively polling, only polls if something cares about it.
	 */
	virtual bool ShouldPoll() const
	{
		return TemporaryRequestDelegates.Num() > 0 || OnUpdatedDelegate.IsBound() || BLUEPRINT_OnUpdatedDelegate.IsBound();
	}
	/**
	 * @brief Starts a poll of the object data
	 * @param Delegate Callback delegate for the poll.
	 */
	virtual void Poll(const FRH_PollCompleteFunc& Delegate)
	{
		Delegate.ExecuteIfBound(false, false);
	}
	/**
	 * @brief Stores the response data from an API presence request.
	 * @tparam Other The presence data to store.
	 */
	template<typename T>
	void UpdateBase(const T& Other)
	{
		LastUpdated = FDateTime::UtcNow();
		bInitialized = true;
	}
	/**
	 * @brief Poll completion function that forwards completion callbacks
	 * @param bSuccess If the poll was successful.
	 * @param Delegate Callback delegate for the poll.
	 */
	virtual void PollComplete(bool bSuccess, const FRH_PollCompleteFunc& Delegate)
	{
		ExecuteUpdatedDelegates(bSuccess);
		Delegate.ExecuteIfBound(bSuccess, ShouldPoll());
	}
	/**
	 * @brief Handles executing any delegate listeners for the update.
	 * @param bSuccess If the poll was successful.
	 */
	virtual void ExecuteUpdatedDelegates(bool bSuccess);
};

/**
 * @brief Player Presence class used to store player presence data.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerPresence : public URH_PlayerInfoSubobject
{
	GENERATED_UCLASS_BODY()

public:
	typedef RallyHereAPI::Traits_GetPlayerPresencePublicByUuid GetPresenceType;

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



protected:
	/**
	 * @brief Starts a poll of the players presence.
	 * @param Delegate Callback delegate for the poll.
	 */
	virtual void Poll(const FRH_PollCompleteFunc& Delegate) override;
	/**
	 * @brief Stores the response data from an API presence request.
	 * @param Other The presence data to store.
	 */
	virtual void Update(const GetPresenceType::Response& Other)
	{
		UpdateBase(Other);
		Other.TryGetDefaultHeader_ETag(ETag);

		FRHAPI_PlayerPresence Presence;
		if (Other.TryGetDefaultContent(Presence))
		{
			Status = Presence.GetStatus(ERHAPI_OnlineStatus::Offline);
			Message = Presence.GetMessage(TEXT(""));
			Platform = Presence.Platform;
			DisplayName = Presence.DisplayName;
			CustomData = Presence.GetCustomData(TMap<FString, FString>());
			PlayerUuid = Presence.PlayerUuid;
		}
	}
};


/**
 * @brief Player Settings class used to store player settings data.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerSettings : public URH_PlayerInfoSubobject
{
	GENERATED_UCLASS_BODY()

public:
	typedef RallyHereAPI::Traits_GetSinglePlayerUuidSetting GetSingleSettingType;
	typedef RallyHereAPI::Traits_GetAllPlayerUuidSettingsForSettingType GetSettingsForKeysType;
	typedef RallyHereAPI::Traits_SetSinglePlayerUuidSetting SetSettingType;
	typedef RallyHereAPI::Traits_DeleteSinglePlayerUuidSetting DeleteSettingType;

	/**
	* @brief Gets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type requested.
	* @param [in] Key The setting key being requested within the type
    * @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players settings for the given type.
	*/
	virtual void GetPlayerSetting(const FString& SettingTypeId, const FString& Key, const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlayerSettingsBlock& Delegate = FRH_PlayerInfoGetPlayerSettingsBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Settings", meta = (DisplayName = "Get Player Setting (Single)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetPlayerSetting(const FString& SettingTypeId, const FString& Key, const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate& Delegate) { GetPlayerSetting(SettingTypeId, Key, StaleThreshold, bForceRefresh, Delegate); }

	/**
	* @brief Gets the players settings information for a given type, restricted to a list of keys.
	* @param [in] SettingTypeId The setting type requested.
	* @param [in] Keys The list of keys to request.  If empty, all keys are requested
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players settings for the given type.
	*/
	virtual void GetPlayerSettingsForKeys(const FString& SettingTypeId, const TArray<FString>& Keys, const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlayerSettingsBlock& Delegate = FRH_PlayerInfoGetPlayerSettingsBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Settings", meta = (DisplayName = "Get Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetPlayerSettingsForKeys(const FString& SettingTypeId, const TArray<FString>& Keys, const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate& Delegate) { GetPlayerSettingsForKeys(SettingTypeId, Keys, StaleThreshold, bForceRefresh, Delegate); }
	
	/**
	* @brief Sets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type to update.
	* @param [in] Key The setting key being updated within the type.
	* @param [in] Document Json Document to be stored.
	* @param [in] Delegate Callback when the operation is complete with success information.
	* @param [in] VersionCheck Optional version check to ensure the data is not stale.
	*/
	virtual void SetPlayerSetting(const FString& SettingTypeId, const FString& Key, const FRHAPI_SetSinglePlayerSettingRequest& Document, const FRH_PlayerInfoSetPlayerSettingBlock& Delegate = FRH_PlayerInfoSetPlayerSettingBlock(), const FRH_ObjectVersionCheck& VersionCheck = FRH_ObjectVersionCheck());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Settings", meta = (DisplayName = "Set Player Setting", AutoCreateRefTerm = "Delegate, VersionCheck"))
	void BLUEPRINT_SetPlayerSetting(const FString& SettingTypeId, const FString& Key, const FRHAPI_SetSinglePlayerSettingRequest& Document, const FRH_PlayerInfoSetPlayerSettingDynamicDelegate& Delegate, const FRH_ObjectVersionCheck& VersionCheck) { SetPlayerSetting(SettingTypeId, Key, Document, Delegate, VersionCheck); }

	/**
	* @brief Deletes a players setting for a given type.
	* @param [in] SettingTypeId The setting type to update.
	* @param [in] Key The setting key being updated within the type.
	* @param [in] Delegate Callback when the operation is complete with success information.
	*/
	virtual void DeletePlayerSetting(const FString& SettingTypeId, const FString& Key, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Settings", meta = (DisplayName = "Set Player Setting", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_DeletePlayerSetting(const FString& SettingTypeId, const FString& Key, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { DeletePlayerSetting(SettingTypeId, Key, Delegate); }

	/**
	* @brief Gets all the players store settings data.
	* @return The players stored settings data.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Settings")
	virtual const TMap<FString, FRH_PlayerSettingsDataWrapper>& GetAllStoredPlayerSettings() const { return PlayerSettingsByTypeId; }
protected:
	/**
	 * @brief Handles the response to a Get Player Setting call.
	 * @param [in] Response Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 * @param [in] SettingTypeId The type of settings that were requested.
	 * @param [in] Key The key that was requested.
	 */
	virtual void OnGetPlayerSettingResponse(const GetSingleSettingType::Response& Response, const FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId, FString Key);
	/**
	 * @brief Handles the response to a Get Player Settings call.
	 * @param [in] Response Response given for the call
	 * @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	 * @param [in] SettingTypeId The type of settings that were requested.
	 * @param [in] PartialKeys If Specified, only the keys in this list were requested.
	 */
	virtual void OnGetPlayerSettingsResponse(const GetSettingsForKeysType::Response& Response, const FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId, TOptional<TArray<FString>> PartialKeys);
	/**
	 * @brief Cache of Player Settings Data by their settings types.
	 */
	UPROPERTY()
	TMap<FString, FRH_PlayerSettingsDataWrapper> PlayerSettingsByTypeId;
};

/**
 * @brief Player Sessions class used to store player session membership information
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerSessions : public URH_PlayerInfoSubobject
{
	GENERATED_UCLASS_BODY()

public:
	typedef RallyHereAPI::Traits_GetPlayerSessionsByUuid GetSessionsType;

	/** 
	* @brief The sessions the player is a member of.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Sessions")
	FRHAPI_PlayerSessions Sessions;

protected:

	/**
	 * @brief Starts a poll of the players sessions.
	 * @param Delegate Callback delegate for the poll.
	 */
	virtual void Poll(const FRH_PollCompleteFunc& Delegate) override;
	/**
	 * @brief Stores the response data from an API request.
	 * @param Other The response data to store.
	 */
	virtual void Update(const GetSessionsType::Response& Other)
	{
		UpdateBase(Other);

		Other.TryGetDefaultHeader_ETag(ETag);

		Other.TryGetDefaultContent(Sessions);
	}
};


/**
 * @brief Player Deserters class used to store player deserter information
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerDeserter : public URH_PlayerInfoSubobject
{
	GENERATED_UCLASS_BODY()

public:
	typedef RallyHereAPI::Traits_GetAllPlayerDeserters GetDeserterAllType;
	typedef RallyHereAPI::Traits_PutPlayerDeserter SetDeserterType;
	typedef RallyHereAPI::Traits_DeletePlayerDeserter ClearDeserterType;
	typedef RallyHereAPI::Traits_DeleteAllPlayerDeserter ClearAllDeserterType;

	/** 
	* @brief The deserter status for the player by DeserterId
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player  Deserter")
	TMap<FString, FRHAPI_PlayerDeserterStatus> DeserterStatus;
	
	/**
	 * @brief Updates the deserter status for the player.
	 * @param [in] DeserterId The deserter id to update for the player.
	 * @param [in] NewDeserterStatus The new deserter status for the player.
	 * @param [in] Delegate The callback delegate for the request.
	 */
	virtual void SetDeserterStatus(const FString& DeserterId, const FRHAPI_DeserterUpdateRequest& NewDeserterStatus, const FRH_OnRequestPlayerInfoSubobjectDelegateBlock& Delegate = FRH_OnRequestPlayerInfoSubobjectDelegateBlock());
	/**
	 * @private
	 * @brief Updates the deserter status for the player.
	 * @param [in] DeserterId The deserter id to update for the player.
	 * @param [in] NewDeserterStatus The new deserter status for the player.
	 * @param [in] Delegate The callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Deserter", meta = (DisplayName = "Set Deserter Status", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetDeserterStatus(const FString& DeserterId, const FRHAPI_DeserterUpdateRequest& NewDeserterStatus, const FRH_OnRequestPlayerInfoSubobjectDynamicDelegate& Delegate) { SetDeserterStatus(DeserterId, NewDeserterStatus, Delegate); }

	/**
	 * @brief Clears the deserter state for the player for the given id
	 * @param [in] DeserterId The deserter id to update for the player.
	 * @param [in] Delegate The callback delegate for the request.
	 */
	virtual void ClearDeserterStatus(const FString& DeserterId, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @private
	 * @brief Clears the deserter state for the player for the given id
	 * @param [in] DeserterId The deserter id to update for the player.
	 * @param [in] Delegate The callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Deserter", meta = (DisplayName = "Clear Deserter Status", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_ClearDeserterStatus(const FString& DeserterId, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { ClearDeserterStatus(DeserterId, Delegate); }

	/**
	 * @brief Clears all deserter states for the player
	 * @param [in] Delegate The callback delegate for the request.
	 */
	virtual void ClearAllDeserterStatus(const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @private
	 * @brief Clears all deserter states for the player
	 * @param [in] DeserterId The deserter id to update for the player.
	 * @param [in] Delegate The callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Deserter", meta = (DisplayName = "Clear All Deserter Status", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_ClearAllDeserterStatus(const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { ClearAllDeserterStatus(Delegate); }
	
protected:
	/**
	 * @brief Starts a poll of the players deserter status.
	 * @param Delegate Callback delegate for the poll.
	 */
	virtual void Poll(const FRH_PollCompleteFunc& Delegate) override;
	/**
	 * @brief Stores the response data from an API request.
	 * @param Other The response data to store.
	 */
	virtual void Update(const GetDeserterAllType::Response& Other)
	{
		UpdateBase(Other);

		/*
		if (Other.ETag.IsSet())
		{
			ETag = Other.ETag.GetValue();
		}
		*/

		const auto Content = Other.TryGetDefaultContentAsPointer();
		if (Content != nullptr)
		{
			DeserterStatus.Empty(Content->DeserterStatuses.Num());
			for (const auto& Deserter : Content->DeserterStatuses)
			{
				DeserterStatus.Add(Deserter.GetDeserterId(), Deserter);
			}
		}
	}
};


/**
 * @brief Player Matches class used to store player match history information
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerMatches : public URH_PlayerInfoSubobject
{
	GENERATED_UCLASS_BODY()

public:
	typedef RallyHereAPI::Traits_GetPlayersMatches GetMatchesType;

	/**
	* @brief The size of the pages to poll, if 0, uses default
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Matches")
	int32 PollPageSize;

	/**
	* @brief Polling of new pages is stopped after this value is reached, if 0, polls until all pages are polled
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Matches")
	int32 PollMaxPageCount;

	/**
	* @brief The maximum age after which to stop polling new pages, if 0, polls until max count is reached
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Matches")
	FTimespan PollMaxAge;

	/**
	* @brief The matches the player has participated in.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Player Info Subsystem | Player Matches")
	TMap<FString, FRHAPI_MatchPlayerWithMatch> Matches;

protected:

	/** @brief A simple context object to hold the state of a multipage poll */
	struct FPollContext
	{
		// state
		FString Cursor;
		FTimespan CurrentMaxAge;
		int32 CurrentPageCount;
		
		// config
		int32 PageSize;
		FTimespan MaxAgeLimit;
		int32 PageCountLimit;

		FPollContext()
			: Cursor()
			, CurrentMaxAge(FTimespan::MinValue())
			, CurrentPageCount(0)
			, PageSize(0)
			, MaxAgeLimit(FTimespan::Zero())
			, PageCountLimit(0)
		{}
	};

	/**
	 * @brief Starts a poll of the object data
	 * @param Delegate Callback delegate for the poll.
	 */
	virtual void Poll(const FRH_PollCompleteFunc& Delegate);

	/**
	 * @brief Starts a poll of the object data
	 * @param Delegate Callback delegate for the poll.
	 * @param Context The context to use for the poll.
	 */
	virtual void PollNextPage(const FRH_PollCompleteFunc& Delegate, TSharedPtr<FPollContext> Context = nullptr);
	
	/**
	 * @brief Stores the response data from an API presence request.
	 * @param Other The match data to store.
	 * @param Context The context to use for the poll.
	 */
	virtual void Update(const GetMatchesType::Response& Other, TSharedPtr<FPollContext> Context)
	{
		UpdateBase(Other);
		
		if (Context.IsValid())
		{
			Context->CurrentPageCount++;
		}

		// sort and merge the matches in the response into our cache
		FTimespan MaxAge;
		auto TimeNow = FDateTime::UtcNow();
		const auto Content = Other.TryGetDefaultContentAsPointer();
		const auto MatchesResult = Content != nullptr ? Content->GetPlayerMatchesOrNull() : nullptr;
		if (MatchesResult != nullptr)
		{
			for (const auto& PlayerMatch : *MatchesResult)
			{
				const auto& Match = PlayerMatch.GetMatch();

				Matches.Add(Match.GetMatchId(), PlayerMatch);

				const auto* CreatedTime = Match.GetCreatedTimestampOrNull();
				const auto* EndTime = Match.GetEndTimestampOrNull();

				// prefer using created time for age checks
				if (CreatedTime != nullptr)
				{
					MaxAge = FMath::Max(MaxAge, TimeNow - *CreatedTime);
				}
				else if (EndTime != nullptr)
				{
					MaxAge = FMath::Max(MaxAge, TimeNow - *EndTime);
				}
			}
		}

		Context->CurrentMaxAge = FMath::Max(Context->CurrentMaxAge, MaxAge);
	}

	/**
	 * @brief Check if we still need to poll more pages
	 * @param Context The context to use for the poll.
	 * @return False if we should continue polling, true if we should stop.
	 */
	static bool CheckPollingCursorComplete(const TSharedPtr<FPollContext> Context);
};


/**
 * @brief Player Reports class used to store and send player report information
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerReports : public URH_PlayerInfoSubobject
{
	GENERATED_UCLASS_BODY()

public:

	typedef RallyHereAPI::Traits_GetReportsFromSourcePlayerUuid GetReportsSentType;
	typedef RallyHereAPI::Traits_GetReportsForTargetPlayerUuid GetReportsReceivedType;
	typedef RallyHereAPI::Traits_CreateReportForTargetPlayerUuid CreateReportType;

	/**
	 * @brief Request a list of player reports send by this player
	 * @param Cursor The cursor to use for the request.
	 * @param PageSize The size of the pages to poll, if 0, uses default
	 * @param Delegate Callback delegate for the request.
	 */
	virtual void GetReportsSentAsync(const FString& Cursor, const int32 PageSize = 0, const FRH_PlayerInfoGetPlayerReportsBlock& Delegate = FRH_PlayerInfoGetPlayerReportsBlock());

	/**
	 * @private
	 * @brief Request a list of player reports send by this player
	 * @param Cursor The cursor to use for the request.
	 * @param PageSize The size of the pages to poll, if 0, uses default
	 * @param Delegate Callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Reports", meta = (DisplayName = "Get Reports Sent Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetReportsSentAsync(const FString& Cursor, const int32 PageSize, const FRH_PlayerInfoGetPlayerReportsDynamicDelegate& Delegate) { GetReportsSentAsync(Cursor, PageSize, Delegate); }

	/**
	 * @brief Get the current cached list of player reports sent by this player
	 */
	UFUNCTION(BlueprintGetter, Category = "Player Info Subsystem | Player Reports")
	TArray<FRHAPI_PlayerReport> GetReportsSent() const { return ReportsSent; }

	/**
	 * @brief Request a list of player reports received by this player
	 * @param Cursor The cursor to use for the request.
	 * @param PageSize The size of the pages to poll, if 0, uses default
	 * @param Delegate Callback delegate for the request.
	 */
	virtual void GetReportsReceivedAsync(const FString& Cursor, const int32 PageSize = 0, const FRH_PlayerInfoGetPlayerReportsBlock& Delegate = FRH_PlayerInfoGetPlayerReportsBlock());

	/**
	 * @private
	 * @brief Request a list of player reports received by this player
	 * @param Cursor The cursor to use for the request.
	 * @param PageSize The size of the pages to poll, if 0, uses default
	 * @param Delegate Callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Reports", meta = (DisplayName = "Get Reports Received Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetReportsReceivedAsync(const FString& Cursor, const int32 PageSize, const FRH_PlayerInfoGetPlayerReportsDynamicDelegate& Delegate) { GetReportsReceivedAsync(Cursor, PageSize, Delegate); }

	/**
	 * @brief Get the current cached list of player reports received by this player
	 */
	UFUNCTION(BlueprintGetter, Category = "Player Info Subsystem | Player Reports")
	virtual TArray<FRHAPI_PlayerReport> GetReportsReceived() const { return ReportsReceived; }

	/**
	 * @brief Create a new report for the target player
	 * @param Report The report to create.
	 * @param Delegate Callback delegate for the request.
	 */
	virtual void CreateReport(const FRHAPI_PlayerReportCreate& Report, const FRH_PlayerInfoCreatePlayerReportBlock& Delegate = FRH_PlayerInfoCreatePlayerReportBlock());

	/**
	 * @private
	 * @brief Create a new report for the target player
	 * @param Report The report to create.
	 * @param Delegate Callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Reports", meta = (DisplayName = "Create Report", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_CreateReport(const FRHAPI_PlayerReportCreate& Report, const FRH_PlayerInfoCreatePlayerReportDynamicDelegate& Delegate) { CreateReport(Report, Delegate); }

	/**
	 * @brief Create a new report for the target player with a specific auth context
	 * @param Report The report to create.
	 * @param AuthContext The auth context to use for the request.
	 * @param Delegate Callback delegate for the request.
	 */
	virtual void CreateReport(const FRHAPI_PlayerReportCreate& Report, FAuthContextPtr AuthContext, const FRH_PlayerInfoCreatePlayerReportBlock& Delegate = FRH_PlayerInfoCreatePlayerReportBlock());

protected:
	UPROPERTY(BlueprintReadOnly, BlueprintGetter = GetReportsSent, Category = "Player Info Subsystem | Player Reports")
	TArray<FRHAPI_PlayerReport> ReportsSent;

	UPROPERTY(BlueprintReadOnly, BlueprintGetter = GetReportsReceived, Category = "Player Info Subsystem | Player Reports")
	TArray<FRHAPI_PlayerReport> ReportsReceived;
};

/**
 * @brief Player Recent Players class used to store list of recently played with players
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerRecentlyPlayedWith : public URH_PlayerInfoSubobject
{
	GENERATED_UCLASS_BODY()
public:
	typedef RallyHereAPI::Traits_GetPlayerRecentlyPlayedWith GetPlayerRecentlyPlayedWith;
	
	/**
	 * @brief Get the current cached list of guide engagement by this player
	 */
	UFUNCTION(BlueprintGetter, Category = "Player Info Subsystem | Player Recently Played With")
	const TArray<FRHAPI_RecentlyPlayedPlayer>& GetRecentlyPlayedWith() const { return RecentlyPlayedWith; }
protected:
	void Poll(const FRH_PollCompleteFunc& Delegate) override;
	
	UPROPERTY(BlueprintReadOnly, BlueprintGetter = GetRecentlyPlayedWith, Category = "Player Info Subsystem | Player Recently Played With")
	TArray<FRHAPI_RecentlyPlayedPlayer> RecentlyPlayedWith;
	
	virtual void Update(const GetPlayerRecentlyPlayedWith::Response& Other)
	{
		UpdateBase(Other);

		Other.TryGetDefaultHeader_ETag(ETag);
		if (auto Data = Other.TryGetDefaultContentAsPointer())
		{
			RecentlyPlayedWith = Data->GetPlayers();
		}
	}
};
/**
 * @brief Player Guide Engagement class used to store and update guide engagement (favorites and votes)
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerGuideEngagement : public URH_PlayerInfoSubobject
{
	GENERATED_UCLASS_BODY()

public:

	typedef RallyHereAPI::Traits_GetEntityGuideEngagement GetEntityGuideEngageementType;
	typedef RallyHereAPI::Traits_AddEntityFavoriteGuide AddEntityFavoriteGuideType;
	typedef RallyHereAPI::Traits_RemoveEntityFavoriteGuide RemoveEntityFavoriteGuideType;
	typedef RallyHereAPI::Traits_AddEntityRatingForGuide AddEntityRatingForGuideType;
	
	/**
	 * @brief Add a guide to the player's favorite guides
	 * @param GuideID Guide to add to favorite list
	 * @param Delegate Callback delegate for the request.
	 */
	virtual void AddGuideToFavorites(const FGuid& GuideID, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());

	/**
	 * @private
	 * @brief Add a guide to the player's favorite guides
	 * @param GuideID Guide to add to favorite list
	 * @param Delegate Callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Guide Engagement", meta = (DisplayName = "Add Guide to Favorites", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_AddGuideToFavorites(const FGuid& GuideID, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { AddGuideToFavorites(GuideID, Delegate); }

	/**
	 * @brief Remove a guide to the player's favorite guides
	 * @param GuideID Guide to add to favorite list
	 * @param Delegate Callback delegate for the request.
	 */
	virtual void RemoveGuideFromFavorites(const FGuid& GuideID, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());

	/**
	 * @private
	 * @brief Remove a guide to the player's favorite guides
	 * @param GuideID Guide to add to favorite list
	 * @param Delegate Callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Guide Engagement", meta = (DisplayName = "Remove Guide from Favorites", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RemoveGuideFromFavorites(const FGuid& GuideID, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { RemoveGuideFromFavorites(GuideID, Delegate); }

	/**
	 * @brief Update the player's rating for a guide
	 * @param GuideID Guide to change rating
	 * @param Rating Rating (-1, 0, 1) that the player is giving the guide
	 * @param Delegate Callback delegate for the request.
	 */
	virtual void RateGuide(const FGuid& GuideID, int32 Rating, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());

	/**
	 * @brief Update the player's rating for a guide
	 * @param GuideID Guide to change rating
	 * @param Rating Rating (-1, 0, 1) that the player is giving the guide
	 * @param Delegate Callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Guide Engagement", meta = (DisplayName = "Rate Guide", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RateGuide(const FGuid& GuideID, int32 Rating, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { RateGuide(GuideID, Rating, Delegate); }
	
	/**
	 * @brief Request a list of player reports received by this player
	 * @param Cursor The cursor to use for the request.
	 * @param PageSize The size of the pages to poll, if 0, uses default
	 * @param Delegate Callback delegate for the request.
	 */
	virtual void GetGuideEngagementAsync(TArray<FGuid> GuideIDs, const FRH_PlayerInfoGetGuideEngagementBlock& Delegate = FRH_PlayerInfoGetGuideEngagementBlock());

	/**
	 * @private
	 * @brief Request a list of player reports received by this player
	 * @param Cursor The cursor to use for the request.
	 * @param PageSize The size of the pages to poll, if 0, uses default
	 * @param Delegate Callback delegate for the request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Guide Engagement", meta = (DisplayName = "Get Player Guide Engagement Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetGuideEngagementAsync(TArray<FGuid> GuideIDs, const FRH_PlayerInfoGetGuideEngagementDynamicDelegate& Delegate) { GetGuideEngagementAsync(MoveTemp(GuideIDs), Delegate); }
	
	/**
	 * @brief Get the current cached list of guide engagement by this player
	 */
	UFUNCTION(BlueprintGetter, Category = "Player Info Subsystem | Player Guide Engagement")
	const TMap<FGuid, FRHAPI_EntityGuideEngagement>& GetGuideEngagement() const { return GuideEngagement; }

protected:
	UPROPERTY(BlueprintReadOnly, BlueprintGetter = GetGuideEngagement, Category = "Player Info Subsystem | Player Guide Engagement")
	TMap<FGuid, FRHAPI_EntityGuideEngagement> GuideEngagement;
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
	virtual FRH_PlayerPlatformId GetPlayerPlatformId() const { return PlayerPlatformId; }
	/**
	* @brief Gets the Platform Id for the player.
	* @return The players Platform Unique Id.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	virtual FString GetPlatformUserId() const { return PlayerPlatformId.UserId; }
	/**
	* @brief Gets the Platform Type for the player.
	* @return The players Platform Type.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	virtual ERHAPI_Platform GetPlatform() const { return PlayerPlatformId.PlatformType; }
	/**
	* @brief Gets the display name stored the last time this player logged in to the Rally Here server.
	* @return The players display name for the platform.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Platform Info")
	virtual FString GetLastKnownDisplayName() const { return DisplayName; }

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
	* @brief Gets The players settings class.
	* @return The players settings class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerSettings* GetSettings() const { return PlayerSettings;}
	
	/**
	* @brief Gets The players sessions class.
	* @return The players sessions class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerSessions* GetSessions() const { return PlayerSessions;}

	/**
	* @brief Gets The players deserter class.
	* @return The players deserter class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerDeserter* GetDeserter() const { return PlayerDeserter;}
	
	/**
	* @brief Gets The players matches class.
	* @return The players matches class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerMatches* GetMatches() const { return PlayerMatches; }
	
	/**
	* @brief Gets The players recently played with class.
	* @return The players recently played with class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerRecentlyPlayedWith* GetRecentlyPlayedWith() const { return PlayerRecentlyPlayedWith; }

	/**
	* @brief Gets The players reports class.
	* @return The players reports class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerReports* GetReports() const { return PlayerReports; }

	/**
	* @brief Gets The players Guide engagement class.
	* @return The players Guide engagemetn class.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	FORCEINLINE URH_PlayerGuideEngagement* GetGuideEngagement() const { return PlayerGuideEngagement; }

	/**
	* @brief Gets the associated platform ids of the player.
	* @return The players associated platforms ids.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	virtual TArray<FRH_PlayerPlatformId>& GetPlayerPlatformIds() { return LinkedPlayerPlatforms; }
	/**
	* @brief Gets the associated platform ids of the player.
	* @return The players associated platforms ids.
	*/
	virtual const TArray<FRH_PlayerPlatformId>& GetPlayerPlatformIds() const { return LinkedPlayerPlatforms; }

	/**
	* @brief Gets the associated platforms of the player.
	* @return The players associated platforms.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	virtual TArray<URH_PlayerPlatformInfo*> GetPlayerPlatforms() const;

	/**
	* @brief Gets a specific platform for the player.
	* @param PlayerPlatformId The Id of the platform being requested.
	* @return The platform requested for the player if it exists.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	virtual URH_PlayerPlatformInfo* GetPlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId) const;

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
	virtual void StartStreamingNotifications();
	/**
	* @brief Requests to stop streaming notifications
	* @param [in[ bClearCache If true, the cache of notifications will be cleared.
	*/
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info")
	virtual void StopStreamingNotifications(bool bClearCache = true);

	/**
	* @brief Gets all the players store settings data.
	* @return The players stored settings data.
	*/
	UE_DEPRECATED(5.0, "Please directly call the settings subobject instead.")
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info", meta = (DeprecatedFunction, DeprecationMessage = "Please directly call the settings subobject instead."))
	virtual const TMap<FString, FRH_PlayerSettingsDataWrapper>& GetAllStoredPlayerSettings() const { return GetSettings()->GetAllStoredPlayerSettings(); }

	/**
	* @brief Gets all the players stored ranking data.
	* @return The players stored settings data.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info")
	virtual const TMap<FString, FRHAPI_PlayerRankResponseV2>& GetAllStoredPlayerRankings() const { return PlayerRankingsByRankingId; }

	/**
	* @brief Gets the players Info Subsystem that the Player Info is on.
	* @return The Player Info Subsystem.
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	virtual URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;

	/**
	* @brief Initialized the player info from a given Player Unique Id.
	* @param PlayerUuid The Unique Id of the player.
	*/
	virtual void InitializeForPlayer(const FGuid& PlayerUuid);

	/**
	* @brief Gets the last known display name for the player, will make required API calls to retrieve the information if needed.
	* @param [in] LocalPlayerSubsystem The Local Player Subsystem to sanitizing player names.
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] PreferredPlatformType If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player.
	* @param [in] Delegate Callback with the players display name.
	*/
	virtual void GetLastKnownDisplayNameAsync(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, ERHAPI_Platform PreferredPlatformType = ERHAPI_Platform::Anon, const FRH_PlayerInfoGetDisplayNameBlock& Delegate = FRH_PlayerInfoGetDisplayNameBlock(), const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem = nullptr);
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Display Name Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLastKnownDisplayNameAsync(const class URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const FTimespan& StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameDynamicDelegate& Delegate) { GetLastKnownDisplayNameAsync(StaleThreshold, bForceRefresh, PreferredPlatformType, Delegate, LocalPlayerSubsystem); }

	/**
	* @brief Gets the last known display name for the player.
	* @param [in] PreferredPlatformType If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player.
	* @param [out] OutDisplayName The player's display name.
	* @return If the call successfully found a display name for the player already stored on the client.
	*/
	virtual bool GetLastKnownDisplayName(FString& OutDisplayName, ERHAPI_Platform PreferredPlatformType = ERHAPI_Platform::Anon) const;
	/** @private */
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Display Name"))
	bool BLUEPRINT_GetLastKnownDisplayName(ERHAPI_Platform PreferredPlatformType, FString& OutDisplayName) const { return GetLastKnownDisplayName(OutDisplayName, PreferredPlatformType); }

	/**
	* @brief Gets the players linked platforms via API call.
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players linked platforms.
	*/
	virtual void GetLinkedPlatformInfo(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlatformsBlock& Delegate = FRH_PlayerInfoGetPlatformsBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Linked Platform Info", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLinkedPlatformInfo(const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlatformsDynamicDelegate& Delegate) { GetLinkedPlatformInfo(StaleThreshold, bForceRefresh, Delegate); }

	/**
	* @brief Gets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type requested.
    * @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players settings for the given type.
	*/
	UE_DEPRECATED(5.0, "Please directly call the settings subobject instead.")
	virtual void GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlayerSettingsBlock& Delegate = FRH_PlayerInfoGetPlayerSettingsBlock()) { GetSettings()->GetPlayerSettingsForKeys(SettingTypeId, TArray<FString>(), StaleThreshold, bForceRefresh, Delegate); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DeprecatedFunction, DeprecationMessage = "Please directly call the settings subobject instead.", DisplayName = "Get Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate& Delegate) { GetSettings()->BLUEPRINT_GetPlayerSettingsForKeys(SettingTypeId, TArray<FString>(), StaleThreshold, bForceRefresh, Delegate); }

	/**
	* @brief Gets the players settings information for a given type, restricted to a list of keys.
	* @param [in] SettingTypeId The setting type requested.
	* @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players settings for the given type.
	*/
	UE_DEPRECATED(5.0, "Please directly call the settings subobject instead.")
	virtual void GetPlayerSettingsForKeys(const FString& SettingTypeId, const TArray<FString>& Keys, const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlayerSettingsBlock& Delegate = FRH_PlayerInfoGetPlayerSettingsBlock()) { GetSettings()->GetPlayerSettingsForKeys(SettingTypeId, Keys, StaleThreshold, bForceRefresh, Delegate); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DeprecatedFunction, DeprecationMessage = "Please directly call the settings subobject instead.", DisplayName = "Get Player Settings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetPlayerSettingsForKeys(const FString& SettingTypeId, const TArray<FString>& Keys, const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate& Delegate) { GetSettings()->BLUEPRINT_GetPlayerSettingsForKeys(SettingTypeId, Keys, StaleThreshold, bForceRefresh, Delegate); }
	
	/**
	* @brief Sets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type to update.
	* @param [in] Key The setting key being updated within the type.
	* @param [in] Document Json Document to be stored.
	* @param [in] Delegate Callback when the operation is complete with success information.
	*/
	UE_DEPRECATED(5.0, "Please directly call the settings subobject instead.")
	virtual void SetPlayerSetting(const FString& SettingTypeId, const FString& Key, const FRHAPI_SetSinglePlayerSettingRequest& Document, const FRH_PlayerInfoSetPlayerSettingBlock& Delegate = FRH_PlayerInfoSetPlayerSettingBlock()) { GetSettings()->SetPlayerSetting(SettingTypeId, Key, Document, Delegate); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DeprecatedFunction, DeprecationMessage = "Please directly call the settings subobject instead.", DisplayName = "Set Player Setting", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetPlayerSetting(const FString& SettingTypeId, const FString& Key, const FRHAPI_SetSinglePlayerSettingRequest& Document, const FRH_PlayerInfoSetPlayerSettingDynamicDelegate& Delegate) { GetSettings()->BLUEPRINT_SetPlayerSetting(SettingTypeId, Key, Document, Delegate, FRH_ObjectVersionCheck()); }

	/**
	* @brief Deletes a players setting for a given type.
	* @param [in] SettingTypeId The setting type to update.
	* @param [in] Key The setting key being updated within the type.
	* @param [in] Delegate Callback when the operation is complete with success information.
	*/
	UE_DEPRECATED(5.0, "Please directly call the settings subobject instead.")
	virtual void DeletePlayerSetting(const FString& SettingTypeId, const FString& Key, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock()) { GetSettings()->DeletePlayerSetting(SettingTypeId, Key, Delegate); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DeprecatedFunction, DeprecationMessage = "Please directly call the settings subobject instead.", DisplayName = "Set Player Setting", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_DeletePlayerSetting(const FString& SettingTypeId, const FString& Key, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { GetSettings()->BLUEPRINT_DeletePlayerSetting(SettingTypeId, Key, Delegate); }

	/**
	* @brief Gets the players ranking information for a given type.
    * @param [in] StaleThreshold If set, will force a re-request of the players information if the last updated time was more than the threshold.
	* @param [in] bForceRefresh If true, will force a re-request of the players information.
	* @param [in] Delegate Callback with the players ranking for the given type.
	*/
	virtual void GetPlayerRankings(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, const FRH_PlayerInfoGetPlayerRankingsBlock& Delegate = FRH_PlayerInfoGetPlayerRankingsBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Player Rankings", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetPlayerRankings(const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate& Delegate) { GetPlayerRankings(StaleThreshold, bForceRefresh, Delegate); }

	/**
	* @brief Sets the players settings information for a given type.
	* @param [in] SettingTypeId The setting type to update.
	* @param [in] SettingsData Data to be stored into the players settings.
	* @param [in] Delegate Callback when the operation is complete with success information.
	*/
	virtual void UpdatePlayerRanking(const FString& RankId, const FRHAPI_PlayerRankUpdateRequest& RankData, const FRH_PlayerInfoGetPlayerRankingsBlock& Delegate = FRH_PlayerInfoGetPlayerRankingsBlock());
	/** @private */
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
	virtual ERHAPI_Platform GetLoggedInPlatform() const;

protected:
	/**
	 * @brief The Unique Player Id for the player.
	 */
	UPROPERTY(BlueprintGetter = GetRHPlayerUuid, Category = "Player Info Subsystem | Player Info")
	FGuid RHPlayerUuid;
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
	 * @brief The player's settings information.
	 */
	UPROPERTY(BlueprintGetter = GetSettings, Category = "Settings")
	URH_PlayerSettings* PlayerSettings;
	/**
	 * @brief The players Sessions Information.
	 */
	UPROPERTY(BlueprintGetter = GetSessions, Category = "Sessions")
	URH_PlayerSessions* PlayerSessions;
	/**
	 * @brief The players Deserter Information.
	 */
	UPROPERTY(BlueprintGetter = GetDeserter, Category = "Sessions")
	URH_PlayerDeserter* PlayerDeserter;
	/**
	 * @brief The players Matches Information.
	 */
	UPROPERTY(BlueprintGetter = GetMatches, Category = "Matches")
	URH_PlayerMatches* PlayerMatches;
	/**
	 * @brief The players Recently Played Information.
	 */
	UPROPERTY(BlueprintGetter = GetRecentlyPlayedWith, Category = "Recently Played With")
	URH_PlayerRecentlyPlayedWith* PlayerRecentlyPlayedWith;
	/**
	 * @brief The players Reports Information.
	 */
	UPROPERTY(BlueprintGetter = GetReports, Category = "Reports")
	URH_PlayerReports* PlayerReports;
	/**
	 * @brief The players Guide Engagement Information.
	 */
	UPROPERTY(BlueprintGetter = GetGuideEngagement, Category = "Guides")
	URH_PlayerGuideEngagement* PlayerGuideEngagement;
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
	virtual URH_PlayerInfo* FindPlayerInfoByPlatformId(const FRH_PlayerPlatformId& PlayerPlatformId) const;

	/**
	* @brief Gets a Player Info object for a given Unique Player Id
	* @param [in] PlayerUuid Unique Player Id for the given player
	* @return Player Info for the player if found
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	virtual URH_PlayerInfo* GetPlayerInfo(const FGuid& PlayerUuid) const { auto* Info = PlayerInfos.Find(PlayerUuid); return Info != nullptr ? *Info : nullptr; }

	/**
	* @brief Gets the platform info object for a player by the Platform Id
	* @param [in] PlayerPlatformId Player Platform Id for the given player
	* @return Player Platform Info for the player if found
	*/
	UFUNCTION(BlueprintPure, Category = "Player Info Subsystem")
	virtual URH_PlayerPlatformInfo* GetPlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId) const { auto* Info = PlayerPlatformInfos.Find(PlayerPlatformId); return Info != nullptr ? *Info : nullptr; }

	/**
	* @brief Adds a platform mapping for a given player
	* @param [in] PlayerUuid Unique Player Id for the given player
	* @param [in] PlayerPlatformId Player Platform Id for the given player
	*/
	virtual void AddPlayerLink(const FRH_PlayerPlatformId& PlayerPlatformId, const FGuid& PlayerUuid) { PlayerPlatformIdToUuidMap.Add(PlayerPlatformId, PlayerUuid); }

	/**
	* @brief Searchs for all players who use the given display name via API Call
	* @param [in] PlayerName The display name we want to search for
	* @param [in] Delegate Callback with the all PlayerInfos that are found with that display name
	*/
	virtual void LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerBlock& Delegate = FRH_PlayerInfoLookupPlayerBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem", meta = (DisplayName = "Lookup Player", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerDynamicDelegate& Delegate) { LookupPlayer(PlayerName, Delegate); }

	/**
	* @brief Searchs for players associated with the given platform and platform user id via API Call
	* @param [in] Platform The platform used for the lookup
	* @param [in] PlatformUserId The platform user id used for the lookup
	* @param [in] Delegate Callback with the all PlayerInfos that are found with that display name
	*/
	virtual void LookupPlayerByPlatformUserId(FRH_PlayerPlatformId PlayerPlatformId, const FRH_PlayerInfoLookupPlayerBlock& Delegate = FRH_PlayerInfoLookupPlayerBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem", meta = (DisplayName = "Lookup Player By Platform Id", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LookupPlayerByPlatformUserId(FRH_PlayerPlatformId PlayerPlatformId, const FRH_PlayerInfoLookupPlayerDynamicDelegate& Delegate) { LookupPlayerByPlatformUserId(PlayerPlatformId, Delegate); }

	/**
	 * @brief Remove a specific Player Info from PlayerInfoSubsystem's cache
	 * @param [in] PlayerUuid The UUID of the Player Info to be removed
	 * @return The Player Info that got removed
	 */
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem")
	virtual URH_PlayerInfo* RemovePlayerInfoFromCache(const FGuid& PlayerUuid);

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