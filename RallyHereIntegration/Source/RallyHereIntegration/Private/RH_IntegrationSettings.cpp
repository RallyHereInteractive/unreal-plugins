// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_IntegrationSettings.h"
#include "RH_Common.h"
#include "Misc/CommandLine.h"


URH_IntegrationSettings::URH_IntegrationSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CategoryName = TEXT("Plugins");
	SectionName = TEXT("Rally Here Integration Settings");

	// Set the default internal commandline keys.  Note that ORDER IS IMPORTANT, as it determines priority.
#define SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(SettingName, CommandLineBase) \
	SettingName.Reserve(SettingName.Num() + 3); \
	SettingName.Add(TEXT(CommandLineBase "X"));			/* override variant (highest priority, dev / user override) */ \
	SettingName.Add(TEXT(CommandLineBase));				/* default variant (middle priority, for default from storefront/install) */ \
	SettingName.Add(TEXT(CommandLineBase "Internal"));	/* internal variant (lowest priority, for automation defaults from build/package) */ \

	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(BaseURLCommandLineKeysInternal, "rh.url");
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(EnvironmentCommandLineKeysInternal, "rh.env");
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(DefaultOSSCommandLineKeysInternal, "rh.OSS");
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(ClientIdCommandLineKeysInternal, "rh.clientid");
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(ClientSecretCommandLineKeysInternal, "rh.clientsecret");

	// set the default internal commandline keys for each setting
#if ALLOW_RH_COMMANDLINE_ARGS_WITHOUT_PREFIX
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(BaseURLCommandLineKeysInternal, "RallyHereURL");
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(EnvironmentCommandLineKeysInternal, "RallyHereEnv");
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(ClientIdCommandLineKeysInternal, "RallyHereClientId");
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(ClientSecretCommandLineKeysInternal, "RallyHereClientSecret");
	SET_DEFAULT_INTERNAL_COMMANDLINE_KEYS(DefaultOSSCommandLineKeysInternal, "OSS");
#endif

	bAutomaticallyPollConfigurationData = true;
	bAutomaticallyApplyHotfixData = false;
	bHotfixTestValue = false;

	bAutoStartSessionsAfterJoin = true;
	bAutoJoinPlatformSessionsAfterUserChange = true;
	bAutoWatchPlayersOnSessionActive = false;
	HostMapLoadMethod = ERH_HostMapLoadMethod::ServerTravelAlways;
	HostMapURLOptionsWhitelist.Add(TEXT("game="));
	HostMapURLOptionsWhitelist.Add(TEXT("port="));

	bLocalPlayerSubsystemSandboxing = false;

	bAutoCreateInventorySessionOnLogin = true;
	bAutoProcessPlatformEntitlementsOnLogin = true;
	bAutoProcessPlatformEntitlementsOnReactivate = true;
	bAutoProcessPlatformEntitlementsOnResume = true;

	WebRequestsMaxSimultaneousRequests = 15;
	WebRequestsTrackedRequestsCountLimit = 200;
	WebRequestsBurstCountThreshold = 5;
	WebRequestsBurstTimeThresholdInSeconds = 5;
	WebRequestsDefaultRetryCount = 6;
	WebRequestsDefaultRetryTimeout = 60;
	WebRequestMaxSanitizedContentLength = 4096;

	bAutoMakeSessionsJoinableOnHostMapLoadComplete = true;
	bUseSecurityTokenForJoining = true;
	bRequireImportedPlayerIdsForJoining = true;
	bRequireValidPlayerIdsForJoining = true;

	bAutoCreateMatches = true;
	bAutoAddConnectedPlayersToMatches = true;
	bAutoCloseMatchOnSessionInactive = true;

	PlayerMatchRecentlyPlayedWithPageSize = 0; // use API default page size
	PlayerMatchesPageSize = 0; // use API default page size
	PlayerMatchesMaxPageCount = 5;
	PlayerMatchesMaxAge = FTimespan(30, 0, 0, 0);

	bAutoUploadServerFiles = false;
	AutoUploadServerFilesChance = 1;
	bAutoUploadLogFiles = true;
	bAutoUploadTraceFiles = true;

	BeginNewAdSessionPriority = 1100000;
	FindAdOppertunitiesPriority = 1100000;
	UpdateAdOppertunitiesPriority = 900000;
	AuthLogoutPriority = 10000;
	AuthLoginPriority = 10000;
	GetCatalogAllPriority = 900000;
	GetCatalogXpAllPriority = 900000;
	GetCatalogItemPriority = 1000000;
	GetCatalogInventoryBucketUseRuleSetsAllPriority = 700000;
	GetCatalogPricePointsAllPriority = 700000;
	GetCatalogTimeFramesAllPriority = 1200000;
	GetCatalogVendorPriority = 500000;
	GetCatalogVendorsAllPriority = 500000;
	FetchAppSettingsPriority = 700000;
	ProcessPlatformEntitlementsPriority = 50000;
	RetrievePlatformEntitlementsPriority = 50000;
	FetchFriendListPriority = 1000000;
	FetchFriendPriority = 1000000;
	AddFriendPriority = 1000000;
	RemoveFriendPriority = 1000000;
	AddFriendNotesPriority = 1000000;
	DeleteFriendNotesPriority = 1000000;
	FetchBlockedListPriority = 1000000;
	FetchBlockedPlayerPriority = 1000000;
	BlockUnblockPlayerPriority = 1000000;
	InventoryCreateSessionPriority = 50000;
	InventoryGetSessionPriority = 50000;
	InventoryGetPriority = 50000;
	InventoryCreatePriority = 50000;
	InventoryUpdatePriority = 50000;
	InventoryCreateOrderPriority = 50000;
	InventoryGetOrdersPriority = 500000;
	NotificationPollSelfPriority = 50000;
	NotificationPollOtherPriority = 250000;
	NotificationCreatePriority = 800000;
	PresenceUpdatePriority = 1000000;
	PresenceGetSelfPriority = 1000000;
	PresenceGetOtherPriority = 1000000;
	PresenceGetSettingsPriority = 1000000;
	PurgeQueuePriority = 500000;
	PurgeGetStatusPriority = 500000;
	GetAllQueueInfoPriority = 800000;
	GetMatchmakingTemplatePriority = 1000000;
	GetMapGameInfoPriority = 1000000;
	RankingGetPriority = 1000000;
	RankingUpdatePriority = 1000000;
	DeserterGetPriority = 1000000;
	DeserterSetPriority = 1000000;
	SessionPollPriority = 700000;
	SessionJoinPriority = 700000;
	SessionLeavePriority = 700000;
	SessionInvitePriority = 700000;
	SessionKickPriority = 1000000;
	SessionLeaderChangePriority = 1000000;
	SessionChangeTeamsPriority = 1000000;
	SessionLeaveQueuePriority = 700000;
	SessionGivePermissionPriority = 700000;
	SessionRemovePermissionPriority = 700000;
	SessionRequestInstancePriority = 700000;
	SessionEndInstancePriority = 700000;
	SessionStartMatchPriority = 700000;
	SessionEndMatchPriority = 700000;
	SessionUpdateSessionInfoPriority = 700000;
	SessionUpdateInstanceInfoPriority = 700000;
	SessionUpdateBrowserInfoPriority = 700000;
	SessionDeleteBrowserInfoPriority = 700000;
	SessionDeletePriority = 700000;
	SessionInstanceHealthUpdatePriority = 900000;
	SessionBackfillUpdatePriority = 700000;
	SessionUpdateWithPlatformSessionPriority = 700000;
	SessionGetTemplatePriority = 700000;
	SessionGetByAllocationIdPriority = 700000;
	SessionGetBySessionIdPriority = 700000;
	SessionGetByTypePriority = 700000;
	SessionsGetOtherPriority = 1000000;
	SessionVoipLoginTokenPriority = 1000000;
	SessionVoipActionTokenPriority = 1000000;
	SettingsGetPriority = 800000;
	SettingsGetTypesPriority = 1000000;
	SettingsUpdatePriority = 800000;
	SessionAuditPriority = 900000;
	GetRegionsPriority = 700000;
	UsersLookupPlayerPriority = 1000000;
	UsersGetLinkedPlatformsPriority = 900000;
	EventsReceiveEventPriority = 1000000;
	MatchesGetOtherPriority = 1000000;
	MatchesSearchPriority = 1000000;
	MatchesLookupPriority = 1000000;
	MatchesUpdatePriority = 900000;
	MatchesUpdatePlayerPriority = 900000;
	PexReportPriority = 500000;
	GetPlayerReportsSentPriority = 1000000;
	GetPlayerReportsReceivedPriority = 1000000;
	CreatePlayerReportPriority = 800000;
	FileUploadPriority = 1000000;
	FileDownloadPriority = 1000000;
	FileBrowsePriority = 1000000;
	FileDeletePriority = 1000000;
	GuideSearchGuidesPriority = 1000000;
	GuideFavoritePriority = 1000000;
	MatchRecentlyPlayedWith = 1000000;
}

const FRH_EnvironmentConfiguration* URH_IntegrationSettings::GetEnvironmentConfiguration(const FString& EnvironmentId) const
{
	// prefer the SandboxConfigurations array, but fall back to the deprecated array for backwards compatibility
	const auto* EnvironmentConfig = EnvironmentConfigurations.FindByPredicate([EnvironmentId](const FRH_EnvironmentConfiguration& Config) { return Config.EnvironmentId == EnvironmentId; });

	// if we could not find a sandbox, use the default one
	if (EnvironmentConfig == nullptr)
	{
		EnvironmentConfig = &DefaultEnvironmentConfiguration;
	}

	return EnvironmentConfig;
}

bool URH_IntegrationSettings::ShouldUseLocalPlayerSandboxing()
{
#if !UE_BUILD_SHIPPING
	if (FParse::Param(FCommandLine::Get(), TEXT("rh.ForceNoLPSandboxing")))
	{
		return false;
	}
	else if (FParse::Param(FCommandLine::Get(), TEXT("rh.ForceLPSandboxing")))
	{
		return true;
	}
#endif

	return GetDefault<URH_IntegrationSettings>()->bLocalPlayerSubsystemSandboxing;
}