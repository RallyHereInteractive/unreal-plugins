// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "FriendsV1API.h"
#include "BlockedV1API.h"
#include "RH_DebugToolWindow.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_InventorySubsystem.h"
#include <string>

struct FRHDTW_Players : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Players();
	virtual ~FRHDTW_Players();

	
	virtual void Do() override;
	void DoRHPlayerInfoTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem);
	void DoRHPlatformsTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem);
	void DoRhPresenceTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem);
	void DoRhInventoryTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem);
	void DoRhSessionTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem);
	
	void DoRhSettingsTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem);
	void DoViewSettings(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem);
	void DoModifySettings(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem);

	void DoInventorySession(URH_InventorySubsystem* pURH_InventorySubsystem);
	void DoInventory(URH_InventorySubsystem* pURH_InventorySubsystem);
	void DoModifyInventory(URH_InventorySubsystem* pURH_InventorySubsystem);
	void DoOrderWatchTab(URH_InventorySubsystem* pURH_InventorySubsystem);

	void HandleGetLinkedPlatforms(bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& LinkedPlatforms);
	void HandleGetPresence(const RallyHereAPI::FResponse_GetPlayerPresencePublicByUuid& Resp);

	void DisplaySelectedPlayerInfo();

	int32 SettingVersionNum;
	TArray<ANSICHAR> SettingsIdInput;
	TArray<ANSICHAR> ModifySettingsIdInput;
	TArray<ANSICHAR> ModifySettingsKeyInput;
	TArray<ANSICHAR> ModifySettingsJsonInput;
	FString GetPlatformsActionResult;
	FString GetInventoryResult;
	FString GetPresenceResult;
	TArray<ANSICHAR> PlayerUuidInput;

	bool WatchEnabled;
	URH_PlayerInfo* ActivePlayerInfo;
	FRH_OrderDetailsBlock OrderDetailsBlock;

private:
	// Inventory Tab
	int32 InputItemId;
	int32 SelectedInventoryType;
	TArray<ANSICHAR> InventoryIdInput;
	TArray<ERHAPI_InventoryType> InventoryTypes =
	{
		{},
		ERHAPI_InventoryType::Persistent,
		ERHAPI_InventoryType::Transient,
		ERHAPI_InventoryType::AlwaysOwned,
	};
	TArray<std::string> InventoryTypeStrings;
	TArray<const ANSICHAR*> InventoryTypeChars;
	void RefreshInventory(URH_InventorySubsystem* pURH_InventorySubsystem);
	void HandleGetInventory(bool bSuccess);

	//Inventory Session Tab
	int32 SelectedPlatform;
	TArray<ERHAPI_Platform> Platforms =
	{
		{},
		ERHAPI_Platform::Anon,
		ERHAPI_Platform::Basic,
		ERHAPI_Platform::XboxLive,
		ERHAPI_Platform::Psn,
		ERHAPI_Platform::NintendoNaid,
		ERHAPI_Platform::NintendoSwitch,
		ERHAPI_Platform::NintendoPpid,
		ERHAPI_Platform::Google,
		ERHAPI_Platform::GooglePlay,
		ERHAPI_Platform::Apple,
		ERHAPI_Platform::Epic,
		ERHAPI_Platform::Steam,
		ERHAPI_Platform::Amazon,
		ERHAPI_Platform::Twitch,
	};
	TArray<std::string> PlatformStrings;
	TArray<const ANSICHAR*> PlatformChars;
	void CreateNewInventorySession(URH_InventorySubsystem* pURH_InventorySubsystem);
	void RefreshInventorySession(URH_InventorySubsystem* pURH_InventorySubsystem);
	void HandleInventorySessionUpdated(bool bSucess);

	//Modify Inventory Tab
	void HandleInventoryUpdated(bool bSucess);
	int32 InputSelectedOperation;
	int32 InputModifyInventoryItemId;
	int32 SelectedSourceType;
	TArray<ANSICHAR> ClientRefIdInput;
	int32 InputCount;
	TArray<ANSICHAR> InputExpires;
	TArray<ANSICHAR> ModifyInventoryIdInput;
	TArray<ANSICHAR> InputCustomDataKey;
	TArray<ANSICHAR> InputCustomDataValue;
	FString ModifyInventoryResult;
	TMap<FString, FString> StagedCustomData;
	int32 SelectedCreateInventoryTypes;
	TArray<ERHAPI_CreateInventoryType> CreateInventoryTypes =
	{
		ERHAPI_CreateInventoryType::Persistent,
		ERHAPI_CreateInventoryType::Transient,
	};
	TArray<std::string> CreateInventoryTypeStrings;
	TArray<const ANSICHAR*> CreateInventoryTypeChars;
	TArray<ERHAPI_Source> SourceTypes =
	{
		ERHAPI_Source::Client,
		ERHAPI_Source::Instance,
		ERHAPI_Source::Unknown,
		ERHAPI_Source::WebOrderRepair,
		ERHAPI_Source::InGame,
		ERHAPI_Source::WebSite,
		ERHAPI_Source::NoSale,
		ERHAPI_Source::Support,
		ERHAPI_Source::Activity,
		ERHAPI_Source::Refund,
		ERHAPI_Source::System,
		ERHAPI_Source::Rewards,
		ERHAPI_Source::Esports,
		ERHAPI_Source::Treasure,
		ERHAPI_Source::Console,
		ERHAPI_Source::Odyssey,
		ERHAPI_Source::Steam,
		ERHAPI_Source::_Return,
		ERHAPI_Source::JsonGate,
		ERHAPI_Source::SendGift,
		ERHAPI_Source::ReceiveGift,
		ERHAPI_Source::SteamDlc,
		ERHAPI_Source::TwitchMilestone,
		ERHAPI_Source::TwitchPrime,
		ERHAPI_Source::Psn,
		ERHAPI_Source::Xbox,
		ERHAPI_Source::PtsGrant,
		ERHAPI_Source::AccountTransfer,
		ERHAPI_Source::Promocode,
		ERHAPI_Source::TriumphSystem,
		ERHAPI_Source::LoginGrant,
		ERHAPI_Source::EomUncapped,
		ERHAPI_Source::EomCapped,
		ERHAPI_Source::FacebookDrop,
		ERHAPI_Source::DatabaseScript,
		ERHAPI_Source::AccountLinking,
		ERHAPI_Source::Clan,
		ERHAPI_Source::Conversion,
		ERHAPI_Source::Apple,
		ERHAPI_Source::Google,
		ERHAPI_Source::GooglePlay,
		ERHAPI_Source::PortalDurable,
		ERHAPI_Source::PartnerAchievement,
		ERHAPI_Source::MixerDrop,
		ERHAPI_Source::Nintendo,
		ERHAPI_Source::StreamViewingProgress,
		ERHAPI_Source::Discord,
		ERHAPI_Source::FirstLoginGrant,
		ERHAPI_Source::TwitchFuel,
		ERHAPI_Source::DiscordDlc,
		ERHAPI_Source::Netease,
		ERHAPI_Source::EpicGames,
		ERHAPI_Source::Forte,
		ERHAPI_Source::Facebook,
		ERHAPI_Source::Hirez,
		ERHAPI_Source::DailyReward,
		ERHAPI_Source::AddAccountEmailReward,
		ERHAPI_Source::ClientClaim,
		ERHAPI_Source::Entitlements,
		ERHAPI_Source::Amazon,
		ERHAPI_Source::Simulmedia,
		ERHAPI_Source::Luna,
	};
	TArray<std::string> SourceStrings;
	TArray<const ANSICHAR*> SourceChars;

	int32 SelectedInventoryBucket;
	TArray<ERHAPI_InventoryBucket> InventoryBuckets =
	{
		ERHAPI_InventoryBucket::None,
		ERHAPI_InventoryBucket::Free,
		ERHAPI_InventoryBucket::Sweat,
		ERHAPI_InventoryBucket::Anon,
		ERHAPI_InventoryBucket::Amazon,
		ERHAPI_InventoryBucket::Steam,
		ERHAPI_InventoryBucket::Psn,
		ERHAPI_InventoryBucket::XboxLive,
		ERHAPI_InventoryBucket::Google,
		ERHAPI_InventoryBucket::Twitch,
		ERHAPI_InventoryBucket::NintendoSwitch,
		ERHAPI_InventoryBucket::Apple,
		ERHAPI_InventoryBucket::Nintendo,
		ERHAPI_InventoryBucket::Epic,
		ERHAPI_InventoryBucket::GooglePlay,
		ERHAPI_InventoryBucket::NintendoPpid,
	};
	TArray<std::string> InventoryBucketStrings;
	TArray<const ANSICHAR*> InventoryBucketChars;
};
