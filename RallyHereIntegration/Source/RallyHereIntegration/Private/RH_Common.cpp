
#include "RH_Common.h"
#include "RH_OnlineSubsystemNames.h"
#include "Engine/LocalPlayer.h"
#include "RH_LocalPlayerSubsystem.h"

DEFINE_LOG_CATEGORY(LogRallyHereIntegration);

TArray<TSharedRef<FRH_AsyncTaskHelper>> FRH_AsyncTaskHelper::OngoingRequests = TArray<TSharedRef<FRH_AsyncTaskHelper>>();
bool FRH_AsyncTaskHelper::bInitialized = false;

bool RH_GetPlayerIdFromLocalPlayer(const ULocalPlayer* pLocalPlayer, FGuid* outPlayerId)
{
	if (outPlayerId != nullptr) *outPlayerId = FGuid();
	
	if (pLocalPlayer != nullptr)
	{
		auto pLPSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();

		if (pLPSubsystem)
		{
			if (outPlayerId != nullptr) *outPlayerId = pLPSubsystem->GetPlayerUuid();

			// note we return true if we looked up the subsystem successfully.  A player is allowed to have invalid IDs if they are not logged in
			return true;
		}
	}

	return false;
}

TOptional<ERHAPI_PlatformID> RH_GetPlatformIdFromOSSName(FName OSSName)
{
	if (OSSName == STEAM_SUBSYSTEM || OSSName == STEAMV2_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::Steam;
	}
	else if (OSSName == EOS_SUBSYSTEM || OSSName == EOSPLUS_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::Epic;
	}
	else if (OSSName == PS4_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::Psn;
	}
	else if (OSSName == PS5_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::Psn;
	}
	else if (OSSName == GDK_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::XboxLive;
	}
	else if (OSSName == SWITCH_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::NintendoSwitch;
	}
	else if (OSSName == APPLE_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::Apple;
	}
	else if (OSSName == GOOGLE_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::Google;
	}
	else if (OSSName == ANON_SUBSYSTEM)
	{
		return ERHAPI_PlatformID::Anon;
	}
	else
	{
		return {};
	}
}

TOptional<ERHAPI_Platform> RH_GetPlatformFromOSSName(FName OSSName)
{
	if (OSSName == STEAM_SUBSYSTEM || OSSName == STEAMV2_SUBSYSTEM)
	{
		return ERHAPI_Platform::Steam;
	}
	else if (OSSName == EOS_SUBSYSTEM || OSSName == EOSPLUS_SUBSYSTEM)
	{
		return ERHAPI_Platform::Epic;
	}
	else if (OSSName == PS4_SUBSYSTEM)
	{
		return ERHAPI_Platform::Psn;
	}
	else if (OSSName == PS5_SUBSYSTEM)
	{
		return ERHAPI_Platform::Psn;
	}
	else if (OSSName == GDK_SUBSYSTEM)
	{
		return ERHAPI_Platform::XboxLive;
	}
	else if (OSSName == SWITCH_SUBSYSTEM)
	{
		return ERHAPI_Platform::NintendoSwitch;
	}
	else if (OSSName == APPLE_SUBSYSTEM)
	{
		return ERHAPI_Platform::Apple;
	}
	else if (OSSName == GOOGLE_SUBSYSTEM)
	{
		return ERHAPI_Platform::Google;
	}
	else if (OSSName == ANON_SUBSYSTEM)
	{
		return ERHAPI_Platform::Anon;
	}
	else
	{
		return {};
	}
}

ERHAPI_ClientType RH_GetClientTypeFromOSSName(FName OSSName)
{
	if (OSSName == STEAM_SUBSYSTEM || OSSName == STEAMV2_SUBSYSTEM)
	{
		return ERHAPI_ClientType::Win;
	}
	else if (OSSName == EOS_SUBSYSTEM || OSSName == EOSPLUS_SUBSYSTEM)
	{
		return ERHAPI_ClientType::Win;
	}
	else if (OSSName == PS4_SUBSYSTEM)
	{
		return ERHAPI_ClientType::PS4;
	}
	else if (OSSName == PS5_SUBSYSTEM)
	{
		return ERHAPI_ClientType::PS5;
	}
	else if (OSSName == GDK_SUBSYSTEM)
	{
		return ERHAPI_ClientType::Xboxone;
	}
	else if (OSSName == SWITCH_SUBSYSTEM)
	{
		return ERHAPI_ClientType::_Switch;
	}
	else if (OSSName == APPLE_SUBSYSTEM)
	{
		return ERHAPI_ClientType::Ios;
	}
	else if (OSSName == GOOGLE_SUBSYSTEM)
	{
		return ERHAPI_ClientType::Android;
	}
	else if (OSSName == ANON_SUBSYSTEM)
	{
		return ERHAPI_ClientType::Win;
	}
	else
	{
		return ERHAPI_ClientType::Unknown;
	}
}

TOptional<ERHAPI_GrantType> RH_GetGrantTypeFromOSSName(FName OSSName)
{
	if (OSSName == STEAM_SUBSYSTEM || OSSName == STEAMV2_SUBSYSTEM)
	{
		return ERHAPI_GrantType::Steam;
	}
	else if (OSSName == EOS_SUBSYSTEM || OSSName == EOSPLUS_SUBSYSTEM)
	{
		return ERHAPI_GrantType::Epic;
	}
	else if (OSSName == PS4_SUBSYSTEM)
	{
		if (GConfig->GetBoolOrDefault(TEXT("CrossgenSupport"), TEXT("bEnableCrossgenSupport"), false, GEngineIni))
		{
			return ERHAPI_GrantType::PS4V3;
		}
		return ERHAPI_GrantType::PS4V1;
	}
	else if (OSSName == PS5_SUBSYSTEM)
	{
		return ERHAPI_GrantType::PS5V3;
	}
	else if (OSSName == LIVE_SUBSYSTEM || OSSName == GDK_SUBSYSTEM)
	{
		return ERHAPI_GrantType::Xboxlive;
	}
	else if (OSSName == SWITCH_SUBSYSTEM)
	{
		return ERHAPI_GrantType::NintendoSwitch;
	}
	else if (OSSName == APPLE_SUBSYSTEM)
	{
		return ERHAPI_GrantType::Apple;
	}
	else if (OSSName == GOOGLE_SUBSYSTEM)
	{
		return ERHAPI_GrantType::Google;
	}
	else if (OSSName == ANON_SUBSYSTEM)
	{
		return ERHAPI_GrantType::Anon;
	}
	else if (OSSName == BASIC_SUBSYSTEM)
	{
		return ERHAPI_GrantType::Basic;
	}
	else
	{
		return {};
	}
}

ERHAPI_InventoryBucket RH_GetInventoryBucketFromInventoryPortal(ERHAPI_InventoryPortal InventoryPlatform)
{
	switch (InventoryPlatform)
	{
	case ERHAPI_InventoryPortal::Free:
		return ERHAPI_InventoryBucket::Free;
	case ERHAPI_InventoryPortal::Sweat:
		return ERHAPI_InventoryBucket::Sweat;
	case ERHAPI_InventoryPortal::Unknown:
		return ERHAPI_InventoryBucket::None;
	case ERHAPI_InventoryPortal::Anon:
		return ERHAPI_InventoryBucket::Anon;
	case ERHAPI_InventoryPortal::Amazon:
		return ERHAPI_InventoryBucket::Amazon;
	case ERHAPI_InventoryPortal::Steam:
		return ERHAPI_InventoryBucket::Steam;
	case ERHAPI_InventoryPortal::Psn:
		return ERHAPI_InventoryBucket::Psn;
	case ERHAPI_InventoryPortal::XboxLive:
		return ERHAPI_InventoryBucket::XboxLive;
	case ERHAPI_InventoryPortal::Google:
		return ERHAPI_InventoryBucket::Google;
	case ERHAPI_InventoryPortal::Twitch:
		return ERHAPI_InventoryBucket::Twitch;
	case ERHAPI_InventoryPortal::NintendoSwitch:
		return  ERHAPI_InventoryBucket::NintendoSwitch;
	case ERHAPI_InventoryPortal::Apple:
		return ERHAPI_InventoryBucket::Apple;
	case ERHAPI_InventoryPortal::Nintendo:
		return ERHAPI_InventoryBucket::Nintendo;
	case ERHAPI_InventoryPortal::Epic:
		return ERHAPI_InventoryBucket::Epic;
	case ERHAPI_InventoryPortal::GooglePlay:
		return ERHAPI_InventoryBucket::GooglePlay;
	case ERHAPI_InventoryPortal::NintendoPpid:
		return ERHAPI_InventoryBucket::NintendoPpid;
	}

	return ERHAPI_InventoryBucket::None;
}

ERHAPI_InventoryBucket RH_GetInventoryBucketFromPlatform(ERHAPI_Platform Platform)
{
	switch (Platform)
	{
	case ERHAPI_Platform::Anon:
		return ERHAPI_InventoryBucket::Anon;
	case ERHAPI_Platform::Amazon:
		return ERHAPI_InventoryBucket::Amazon;
	case ERHAPI_Platform::Steam:
		return ERHAPI_InventoryBucket::Steam;
	case ERHAPI_Platform::Psn:
		return ERHAPI_InventoryBucket::Psn;
	case ERHAPI_Platform::XboxLive:
		return ERHAPI_InventoryBucket::XboxLive;
	case ERHAPI_Platform::Google:
		return ERHAPI_InventoryBucket::Google;
	case ERHAPI_Platform::Twitch:
		return ERHAPI_InventoryBucket::Twitch;
	case ERHAPI_Platform::NintendoSwitch:
		return  ERHAPI_InventoryBucket::NintendoSwitch;
	case ERHAPI_Platform::Apple:
		return ERHAPI_InventoryBucket::Apple;
	case ERHAPI_Platform::NintendoNaid:
		return ERHAPI_InventoryBucket::Nintendo;
	case ERHAPI_Platform::Epic:
		return ERHAPI_InventoryBucket::Epic;
	case ERHAPI_Platform::GooglePlay:
		return ERHAPI_InventoryBucket::GooglePlay;
	case ERHAPI_Platform::NintendoPpid:
		return ERHAPI_InventoryBucket::NintendoPpid;
	}

	return ERHAPI_InventoryBucket::None;
}

ERHAPI_PlatformTypes_DEPRECATED RH_GetPlatformTypeFromOSSName(FName OSSName)
{
	if (OSSName == STEAM_SUBSYSTEM || OSSName == STEAMV2_SUBSYSTEM)
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_STEAM;
	}
	else if (OSSName == EOS_SUBSYSTEM || OSSName == EOSPLUS_SUBSYSTEM)
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_EPIC;
	}
	else if (OSSName == PS4_SUBSYSTEM || OSSName == PS5_SUBSYSTEM)
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_PSN;
	}
	else if (OSSName == LIVE_SUBSYSTEM || OSSName == GDK_SUBSYSTEM)
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_XBOX_LIVE;
	}
	else if (OSSName == SWITCH_SUBSYSTEM)
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_NINTENDO_SWITCH;
	}
	else if (OSSName == APPLE_SUBSYSTEM)
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_APPLE;
	}
	else if (OSSName == GOOGLE_SUBSYSTEM)
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_GOOGLE;
	}
	else if (OSSName == ANON_SUBSYSTEM)
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_ANON;
	}
	else
	{
		return ERHAPI_PlatformTypes_DEPRECATED::PT_UNKNOWN;
	}
}

ERHAPI_Platform RH_GetPlatformFromPlatformType(ERHAPI_PlatformTypes_DEPRECATED PlatformTypes)
{
	switch (PlatformTypes)
	{
	case ERHAPI_PlatformTypes_DEPRECATED::PT_ANON:
		return ERHAPI_Platform::Anon;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_AMAZON:
		return ERHAPI_Platform::Steam;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_STEAM:
		return ERHAPI_Platform::Steam;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_PSN:
		return ERHAPI_Platform::Psn;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_XBOX_LIVE:
		return ERHAPI_Platform::XboxLive;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_GOOGLE:
		return ERHAPI_Platform::Google;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_TWITCH:
		return ERHAPI_Platform::Twitch;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_NINTENDO_SWITCH:
		return ERHAPI_Platform::NintendoSwitch;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_APPLE:
		return ERHAPI_Platform::Apple;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_NINTENDO:
		return ERHAPI_Platform::NintendoNaid;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_EPIC:
		return ERHAPI_Platform::Epic;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_GOOGLE_PLAY:
		return ERHAPI_Platform::GooglePlay;
	case ERHAPI_PlatformTypes_DEPRECATED::PT_NINTENDO_PPID:
		return ERHAPI_Platform::NintendoPpid;
	}

	return ERHAPI_Platform::Anon;
}

ERHAPI_PlatformTypes_DEPRECATED RH_GetPlatformTypeFromPlatform(ERHAPI_Platform Platform)
{
	switch (Platform)
	{
	case ERHAPI_Platform::Anon:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_ANON;
	case ERHAPI_Platform::Amazon:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_AMAZON;
	case ERHAPI_Platform::Steam:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_STEAM;
	case ERHAPI_Platform::Psn:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_PSN;
	case ERHAPI_Platform::XboxLive:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_XBOX_LIVE;
	case ERHAPI_Platform::Google:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_GOOGLE;
	case ERHAPI_Platform::Twitch:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_TWITCH;
	case ERHAPI_Platform::NintendoSwitch:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_NINTENDO_SWITCH;
	case ERHAPI_Platform::Apple:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_APPLE;
	case ERHAPI_Platform::NintendoNaid:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_NINTENDO;
	case ERHAPI_Platform::Epic:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_EPIC;
	case ERHAPI_Platform::GooglePlay:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_GOOGLE_PLAY;
	case ERHAPI_Platform::NintendoPpid:
		return ERHAPI_PlatformTypes_DEPRECATED::PT_NINTENDO_PPID;
	}

	return ERHAPI_PlatformTypes_DEPRECATED::PT_UNKNOWN;
}

ERHAPI_InventoryBucket RH_GetInventoryBucketFromPlatformType(ERHAPI_PlatformTypes_DEPRECATED PlatformType)
{
	return RH_GetInventoryBucketFromPlatform(RH_GetPlatformFromPlatformType(PlatformType));
}
