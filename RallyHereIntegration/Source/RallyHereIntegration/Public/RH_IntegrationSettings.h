// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "Engine/DeveloperSettings.h"

#include "RH_IntegrationSettings.generated.h"

/** @defgroup IntegrationSettings RallyHere Integration Settings
 *  @{
 */

/**
 * @brief Settings for Environment Configuration.  If set, these override the defaults when the EnvironmentId matches the specified environment id
 */
USTRUCT()
struct FRH_EnvironmentConfiguration
{
	GENERATED_BODY()
	/** @brief Environment Name, for use with client side environment lookups and overrides. */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString EnvironmentId;

	/** @brief RallyHere BaseURL. Determines the base URL to use when connecting to the RallyHere API */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString BaseUrl;

	/** @brief RallyHere Client ID. Determines the available permissions for RallyHere APIs */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString ClientId;

	/** @brief RallyHere Client secret. Must be associated with the defined client ID */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString ClientSecret;
};

/**
 * @brief Main settings for the Integration.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig, meta = (DisplayName = "Rally Here Integration Settings"))
class RALLYHEREINTEGRATION_API URH_IntegrationSettings : public UDeveloperSettings
{
    GENERATED_UCLASS_BODY()

public:

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Connectivity
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	/** @brief RallyHere default environment configuration */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity", meta = (ShowOnlyInnerProperties))
	FRH_EnvironmentConfiguration DefaultEnvironmentConfiguration;

	/** @brief Per-Environment configuration overrides. These environments are alias names used for a BaseURL, and by default will automatically be looked up based on the OnlineEnvironment from the engine (Development, Certification, etc), but can be overridden via commandline (see EnvironmentCommandLineKeys) */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity", meta = (ShowOnlyInnerProperties))
	TArray<FRH_EnvironmentConfiguration> EnvironmentConfigurations;

	/** @brief Helper to get the configuration for a given environment by EnvironmentId */
	const FRH_EnvironmentConfiguration* GetEnvironmentConfiguration(const FString& EnvironmentId) const;

	/** @brief Internal/Hardcoded Keys to check for on the command line for an override to the default BaseURL.  These are potentially used by RallyHere's automation and internal processes */
	TArray<FString> BaseURLCommandLineKeysInternal;

	/** @brief Keys to check for on the command line for an override to the default BaseURL */
    UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> BaseURLCommandLineKeys;

	/** @brief Internal/Hardcoded Keys to check for on the command line for an override to the default Environment.  These are potentially used by RallyHere's automation and internal processes */
	TArray<FString> EnvironmentCommandLineKeysInternal;

	/** @brief Keys to check for on the command line for an override to the default Environment when using EnvironmentConfigurations */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> EnvironmentCommandLineKeys;

	/** @brief Internal/Hardcoded Keys to check for on the command line for an override to the default OSS.  These are potentially used by RallyHere's automation and internal processes */
	TArray<FString> DefaultOSSCommandLineKeysInternal;

	/** @brief Keys to check for on the command line for an override to the default OSS */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> DefaultOSSCommandLineKeys;

	/** @brief Internal/Hardcoded Keys to check for on the command line for an override to the default ClientId.  These are potentially used by RallyHere's automation and internal processes */
	TArray<FString> ClientIdCommandLineKeysInternal;

	/** @brief Keys to check for on the command line for an override to the default ClientId */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
	TArray<FString> ClientIdCommandLineKeys;

	/** @brief Internal/Hardcoded Keys to check for on the command line for an override to the default ClientSecret.  These are potentially used by RallyHere's automation and internal processes */
	TArray<FString> ClientSecretCommandLineKeysInternal;

	/** @brief Keys to check for on the command line for an override to the default ClientSecret */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
	TArray<FString> ClientSecretCommandLineKeys;

    /** @brief Online Subsystem to use for selecting the base URL environment.  If not provided, will use the default OSS */
    UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
    FName EnvironmentOSSName;

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Config, KVs, and Hotfixing
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	/** @brief If set, automatically poll for KV data. */
	UPROPERTY(EditAnywhere, Config, Category = "Config|Polling")
	bool bAutomaticallyPollConfigurationData;
	/** @brief If set, automatically apply hotfix data from the config subystem. */
	UPROPERTY(EditAnywhere, Config, Category = "Config|Hotfix")
	bool bAutomaticallyApplyHotfixData;
	/** @brief debug value to test if the hotfix system is working properly.  Do not set! */
	UPROPERTY(VisibleAnywhere, Config, Category = "Config|Hotfix")
	bool bHotfixTestValue;

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Sessions & Matches
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	/** @brief Whether to automatically start platform sessions after joining them */
	UPROPERTY(EditAnywhere, Config, Category = "Sessions|Platform")
	bool bAutoStartSessionsAfterJoin;

	/** @brief Whether to automatically join platform sessions after a user change when invites were received while logged out */
	UPROPERTY(EditAnywhere, Config, Category = "Sessions|Platform")
	bool bAutoJoinPlatformSessionsAfterUserChange;

	/** @brief Whether to automatically mark hosted sessions as joinable after map load completes */
	UPROPERTY(EditAnywhere, Config, Category = "Sessions|Joining")
	bool bAutoMakeSessionsJoinableOnHostMapLoadComplete;

	/** @brief If set, the connection attempt must have a valid security token to be allowed to connect. */
	UPROPERTY(EditAnywhere, Config, Category = "Sessions|Joining")
	bool bUseSecurityTokenForJoining;

	UPROPERTY(EditAnywhere, Config, Category = "Sessions|Joining")
	/** @brief If set, the Player Id must have been imported to the instance before being allowed to connect. */
	bool bRequireImportedPlayerIdsForJoining;

	UPROPERTY(EditAnywhere, Config, Category = "Sessions|Joining")
	/** @brief If set, the Player Id must be valid before being allowed to connect. */
	bool bRequireValidPlayerIdsForJoining;

	/** @brief Sets the default page size when requesting a player's match history */
	UPROPERTY(EditAnywhere, Config, Category = "Matches|Player History")
	int32 PlayerMatchesPageSize;

	/** @brief Sets the default page size when requesting a player's match history */
	UPROPERTY(EditAnywhere, Config, Category = "Matches|Player History")
	int32 PlayerMatchesMaxPageCount;

	/** @brief Sets the default page size when requesting a player's match history */
	UPROPERTY(EditAnywhere, Config, Category = "Matches|Player History")
	FTimespan PlayerMatchesMaxAge;

	/** @brief Whether to automatically create a match when a session becomes active if the host */
	UPROPERTY(EditAnywhere, Config, Category = "Matches|Automated Match Handling")
	bool bAutoCreateMatches;

	/** @brief Whether to automatically add players who connect to the match */
	UPROPERTY(EditAnywhere, Config, Category = "Matches|Automated Match Handling")
	bool bAutoAddConnectedPlayersToMatches;

	/** @brief Whether to automatically close a match when a session becomes inactive if the host */
	UPROPERTY(EditAnywhere, Config, Category = "Matches|Automated Match Handling")
	bool bAutoCloseMatchOnSessionInactive;

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Inventory
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	/** @brief Whether to automatically create an inventory session when a player logs in */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory")
	bool bAutoCreateInventorySessionOnLogin;

	/** @brief Whether to automatically process platform entitlements on login (will wait for inventory session creation if using bAutoCreateInventorySessionOnLogin) */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory")
	bool bAutoProcessPlatformEntitlementsOnLogin;

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Web Requests
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	/** @brief Sets the maximum number of Http Requests that can be made simultaneously. 0 = No Limit */
	UPROPERTY(EditAnywhere, Config, Category = "Web Requests")
	int32 WebRequestsMaxSimultaneousRequests;

	/** @brief Sets the maximum number of web requests for which tracking data is kept. */
	UPROPERTY(EditAnywhere, Config, Category = "Web Requests")
	int WebRequestsTrackedRequestsCountLimit;

	/** @brief Sets the count above which web traffic is considered a burst. */
	UPROPERTY(EditAnywhere, Config, Category = "Web Requests")
	int32 WebRequestsBurstCountThreshold;

	/** @brief Sets the time threshold for web traffic burst detection. */
	UPROPERTY(EditAnywhere, Config, Category = "Web Requests")
	int32 WebRequestsBurstTimeThresholdInSeconds;

	/** @brief Sets an endpoint to use to determine public IP of a client for analytics. */
	UPROPERTY(EditAnywhere, Config, Category = "Web Requests")
	FString ClientDeviceIpEndpoint;

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Subsystem Classes
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	/** @brief Extensible LocalPlayerLoginSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath LocalPlayerLoginSubsystemClass;
	/** @brief Extensible AdSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath AdSubsystemClass;
	/** @brief Extensible FriendSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath FriendSubsystemClass;
	/** @brief Extensible LocalPlayerSessionSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath LocalPlayerSessionSubsystemClass;
	/** @brief Extensible PlayerSessionSyncer class path. */
	UPROPERTY(EditAnywhere, Config, Category = "Subsystem Classes")
	FSoftClassPath SessionPlatformSyncerClass;
	/** @brief Extensible LocalPlayerPresenceSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath LocalPlayerPresenceSubsystemClass;
	/** @brief Extensible PurgeSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath PurgeSubsystemClass;
	/** @brief Extensible EntitlementSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath EntitlementSubsystemClass;
	/** @brief Extensible GameInstanceSessionInfoSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath GameInstanceSessionInfoSubsystemClass;
	/** @brief Extensible GameInstanceServerBootstrapperm class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath GameInstanceServerBootstrappermClass;
	/** @brief Extensible GameInstanceClientBootstrapper class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath GameInstanceClientBootstrapperClass;
	/** @brief Extensible PlayerInfoSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath PlayerInfoSubsystemClass;
	/** @brief Extensible PlayerInfo class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath PlayerInfoClass;
	/** @brief Extensible CatalogSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath CatalogSubsystemClass;
	/** @brief Extensible ConfigSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath ConfigSubsystemClass;
	/** @brief Extensible ConfigSubsystem class path. */
	UPROPERTY(EditAnywhere, Config, Category = "Subsystem Classes")
	FSoftClassPath SettingsSubsystemClass;
	/** @brief Extensible SessionBrowserCache class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath SessionBrowserCacheClass;
	/** @brief Extensible MatchmakingBrowserCache class path. */
	UPROPERTY(EditAnywhere, Config, Category="Subsystem Classes")
	FSoftClassPath MatchmakingBrowserCacheClass;
	/** @brief Extensible MatchSubsystem class path */
	UPROPERTY(EditAnywhere, Config, Category = "Subsystem Classes")
	FSoftClassPath MatchSubsystemClass;
	/** @brief Extensible FileSubsystem class path */
	UPROPERTY(EditAnywhere, Config, Category = "Subsystem Classes")
	FSoftClassPath FileSubsystemClass;

	/** @brief Flag to determine if the local player subsystem should use its own subsystems instead of relying on GameInstanceSubsystem shared caches. */
	UPROPERTY(EditAnywhere, Config, Category = "Subsystem Classes")
	bool bLocalPlayerSubsystemSandboxing;

	static bool ShouldUseLocalPlayerSandboxing();

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Automatic File Uploads
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	/** @brief Whether to automatically upload files to the RallyHere API from Dedicated Servers */
	UPROPERTY(EditAnywhere, Config, Category = "File Uploads")
	bool bAutoUploadServerFiles;
	/** @brief Whether to automatically upload files to the RallyHere API.  Requires bAutoUploadServerFiles to have an effect */
	UPROPERTY(EditAnywhere, Config, Category = "File Uploads", meta=(EditCondition=bAutoUploadFiles))
	bool bAutoUploadLogFiles;
	/** @brief Whether to automatically upload files to the RallyHere API.  Requires bAutoUploadServerFiles to have an effect */
	UPROPERTY(EditAnywhere, Config, Category = "File Uploads", meta = (EditCondition = bAutoUploadFiles))
	bool bAutoUploadTraceFiles;


	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// API Priorities
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	/** @brief Sets the request priority of Begin New Session calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Ad API Priority", AdvancedDisplay)
	int32 BeginNewAdSessionPriority;
	/** @brief Sets the request priority of Find Oppertunities calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Ad API Priority", AdvancedDisplay)
	int32 FindAdOppertunitiesPriority;
	/** @brief Sets the request priority of Update Oppertunities calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Ad API Priority", AdvancedDisplay)
	int32 UpdateAdOppertunitiesPriority;
	/** @brief Sets the request priority of Logouts calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Auth API Priority", AdvancedDisplay)
	int32 AuthLogoutPriority;
	/** @brief Sets the request priority of Login calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Auth API Priority", AdvancedDisplay)
	int32 AuthLoginPriority;
	/** @brief Sets the request priority of Get Catalog All calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Catalog API Priority", AdvancedDisplay)
	int32 GetCatalogAllPriority;
	/** @brief Sets the request priority of Get Catalog Xp All calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Catalog API Priority", AdvancedDisplay)
	int32 GetCatalogXpAllPriority;
	/** @brief Sets the request priority of Get Catalog Item calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Catalog API Priority", AdvancedDisplay)
	int32 GetCatalogItemPriority;
	/** @brief Sets the request priority of Get Catalog Inventory Bucket Use Rulesets All calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Catalog API Priority", AdvancedDisplay)
	int32 GetCatalogInventoryBucketUseRuleSetsAllPriority;
	/** @brief Sets the request priority of Get Catalog Price Points All calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Catalog API Priority", AdvancedDisplay)
	int32 GetCatalogPricePointsAllPriority;
	/** @brief Sets the request priority of Get Catalog Time Frame All calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Catalog API Priority", AdvancedDisplay)
	int32 GetCatalogTimeFramesAllPriority;
	/** @brief Sets the request priority of Get Catalog Vendor calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Catalog API Priority", AdvancedDisplay)
	int32 GetCatalogVendorPriority;
	/** @brief Sets the request priority of Get Catalog Vendor All calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Catalog API Priority", AdvancedDisplay)
	int32 GetCatalogVendorsAllPriority;
	/** @brief Sets the request priority of Fetch App Settings calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Config API Priority", AdvancedDisplay)
	int32 FetchAppSettingsPriority;
	/** @brief Sets the request priority of Process Platform Entitlements calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Entitlement API Priority", AdvancedDisplay)
	int32 ProcessPlatformEntitlementsPriority;
	/** @brief Sets the request priority of Retrieve Platform Entitlements calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Entitlement API Priority", AdvancedDisplay)
	int32 RetrievePlatformEntitlementsPriority;
	/** @brief Sets the request priority of Fetch Friend List calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 FetchFriendListPriority;
	/** @brief Sets the request priority of Fetch Friend calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 FetchFriendPriority;
	/** @brief Sets the request priority of Add Friend calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 AddFriendPriority;
	/** @brief Sets the request priority of Remove Friend calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 RemoveFriendPriority;
	/** @brief Sets the request priority of Add Friend Notes calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 AddFriendNotesPriority;
	/** @brief Sets the request priority of Delete Friend Notes calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 DeleteFriendNotesPriority;
	/** @brief Sets the request priority of Fetch Blocked List calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 FetchBlockedListPriority;
	/** @brief Sets the request priority of Fetch Blocked Player calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 FetchBlockedPlayerPriority;
	/** @brief Sets the request priority of Block/Unblock Player calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Friend API Priority", AdvancedDisplay)
	int32 BlockUnblockPlayerPriority;
	/** @brief Sets the request priority of Create Inventory Session calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory API Priority", AdvancedDisplay)
	int32 InventoryCreateSessionPriority;
	/** @brief Sets the request priority of Get Inventory Session calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory API Priority", AdvancedDisplay)
	int32 InventoryGetSessionPriority;
	/** @brief Sets the request priority of Get Inventory calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory API Priority", AdvancedDisplay)
	int32 InventoryGetPriority;
	/** @brief Sets the request priority of Create Inventory calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory API Priority", AdvancedDisplay)
	int32 InventoryCreatePriority;
	/** @brief Sets the request priority of Update Inventory calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory API Priority", AdvancedDisplay)
	int32 InventoryUpdatePriority;
	/** @brief Sets the request priority of Create Inventory Order calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory API Priority", AdvancedDisplay)
	int32 InventoryCreateOrderPriority;
	/** @brief Sets the request priority of Get Inventory Orders calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Inventory API Priority", AdvancedDisplay)
	int32 InventoryGetOrdersPriority;
	/** @brief Sets the request priority of Polling Notifications for Self calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Notification API Priority", AdvancedDisplay)
	int32 NotificationPollSelfPriority;
	/** @brief Sets the request priority of Polling Notifications for Others calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Notification API Priority", AdvancedDisplay)
	int32 NotificationPollOtherPriority;
	/** @brief Sets the request priority of Create Notifications calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Notification API Priority", AdvancedDisplay)
	int32 NotificationCreatePriority;
	/** @brief Sets the request priority of Updating Presence calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Presence API Priority", AdvancedDisplay)
	int32 PresenceUpdatePriority;
	/** @brief Sets the request priority of Get Self Presence calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Presence API Priority", AdvancedDisplay)
	int32 PresenceGetSelfPriority;
	/** @brief Sets the request priority of Get Other Presence calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Presence API Priority", AdvancedDisplay)
	int32 PresenceGetOtherPriority;
	/** @brief Sets the request priority of Get Presence Settings calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Presence API Priority", AdvancedDisplay)
	int32 PresenceGetSettingsPriority;
	/** @brief Sets the request priority of Queue/Dequeue for Purge calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Purge API Priority", AdvancedDisplay)
	int32 PurgeQueuePriority;
	/** @brief Sets the request priority of Get Purge Status calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Purge API Priority", AdvancedDisplay)
	int32 PurgeGetStatusPriority;
	/** @brief Sets the request priority of Get Queue Info calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Queue API Priority", AdvancedDisplay)
	int32 GetAllQueueInfoPriority;
	/** @brief Sets the request priority of Get Matchmaking Template calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Queue API Priority", AdvancedDisplay)
	int32 GetMatchmakingTemplatePriority;
	/** @brief Sets the request priority of Get Map Game Info calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Queue API Priority", AdvancedDisplay)
	int32 GetMapGameInfoPriority;
	/** @brief Sets the request priority of Get Rank calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Rank API Priority", AdvancedDisplay)
	int32 RankingGetPriority;
	/** @brief Sets the request priority of Update Rank calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Rank API Priority", AdvancedDisplay)
	int32 RankingUpdatePriority;
	/** @brief Sets the request priority of Session Polling calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionPollPriority;
	/** @brief Sets the request priority of Session Joining calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionJoinPriority;
	/** @brief Sets the request priority of Session Leave calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionLeavePriority;
	/** @brief Sets the request priority of Session Invite calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionInvitePriority;
	/** @brief Sets the request priority of Session Kick calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionKickPriority;
	/** @brief Sets the request priority of Session Leader Change calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionLeaderChangePriority;
	/** @brief Sets the request priority of Session Change Teams calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionChangeTeamsPriority;
	/** @brief Sets the request priority of Session Leave Queue calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionLeaveQueuePriority;
	/** @brief Sets the request priority of Session Request Instance calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionRequestInstancePriority;
	/** @brief Sets the request priority of Session End Instance calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionEndInstancePriority;
	/** @brief Sets the request priority of Session Start Match calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionStartMatchPriority;
	/** @brief Sets the request priority of Session End Match calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionEndMatchPriority;
	/** @brief Sets the request priority of Update Session Info calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionUpdateSessionInfoPriority;
	/** @brief Sets the request priority of Update Instance Info calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionUpdateInstanceInfoPriority;
	/** @brief Sets the request priority of Update Browser Info calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionUpdateBrowserInfoPriority;
	/** @brief Sets the request priority of Delete Browser Info calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionDeleteBrowserInfoPriority;
	/** @brief Sets the request priority of Instance Health update calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionInstanceHealthUpdatePriority;
	/** @brief Sets the request priority of Backfill update calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionBackfillUpdatePriority;
	/** @brief Sets the request priority of Session Update With Platform Session calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionUpdateWithPlatformSessionPriority;
	/** @brief Sets the request priority of Session Get Template calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionGetTemplatePriority;
	/** @brief Sets the request priority of Session By Allocation Id calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionGetByAllocationIdPriority;
	/** @brief Sets the request priority of Session By Session Id calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionGetBySessionIdPriority;
	/** @brief Sets the request priority of Session By Type calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionGetByTypePriority;
	/** @brief Sets the request priority of Get Other Sessions calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 SessionsGetOtherPriority;
	/** @brief Sets the request priority of Get Settings calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Settings API Priority", AdvancedDisplay)
	int32 SettingsGetPriority;
	/** @brief Sets the request priority of Get Settings Types calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Settings API Priority", AdvancedDisplay)
	int32 SettingsGetTypesPriority;
	/** @brief Sets the request priority of Update Settings calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Settings API Priority", AdvancedDisplay)
	int32 SettingsUpdatePriority;
	/** @brief Sets the request priority of Get Site Settings calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Session API Priority", AdvancedDisplay)
	int32 GetRegionsPriority;
	/** @brief Sets the request priority of Lookup Users calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Users API Priority", AdvancedDisplay)
	int32 UsersLookupPlayerPriority;
	/** @brief Sets the request priority of Get Linked Platforms calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Users API Priority", AdvancedDisplay)
	int32 UsersGetLinkedPlatformsPriority;
	/** @brief Sets the request priority of ReceiveEvent, which is the GETS endpoint, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Users API Priority", AdvancedDisplay)
	int32 EventsReceiveEventPriority;
	/** @brief Sets the request priority of Get Player Matches calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Matches API Priority", AdvancedDisplay)
	int32 MatchesGetOtherPriority;
	/** @brief Sets the request priority of Get Player Matches calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Matches API Priority", AdvancedDisplay)
	int32 MatchesSearchPriority;
	/** @brief Sets the request priority of Get Player Matches calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Matches API Priority", AdvancedDisplay)
	int32 MatchesLookupPriority;
	/** @brief Sets the request priority of Create and Update Match calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Matches API Priority", AdvancedDisplay)
	int32 MatchesUpdatePriority;
	/** @brief Sets the request priority of Create Match calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Matches API Priority", AdvancedDisplay)
	int32 MatchesUpdatePlayerPriority;
	/** @brief Sets the request priority of Player Report calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Report API Priority", AdvancedDisplay)
	int32 GetPlayerReportsSentPriority;
	/** @brief Sets the request priority of Player Report calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Report API Priority", AdvancedDisplay)
	int32 GetPlayerReportsReceivedPriority;
	/** @brief Sets the request priority of Player Report calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "Report API Priority", AdvancedDisplay)
	int32 CreatePlayerReportPriority;
	/** @brief Sets the request priority of File Upload calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "File API Priority", AdvancedDisplay)
	int32 FileUploadPriority;
	/** @brief Sets the request priority of File Download calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "File API Priority", AdvancedDisplay)
	int32 FileDownloadPriority;
	/** @brief Sets the request priority of File Browse calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "File API Priority", AdvancedDisplay)
	int32 FileBrowsePriority;
	/** @brief Sets the request priority of File Delete calls, lower number is higher priority */
	UPROPERTY(EditAnywhere, Config, Category = "File API Priority", AdvancedDisplay)
	int32 FileDeletePriority;
};

/** @} */