
#include "RH_Common.h"
#include "RH_OnlineSubsystemNames.h"
#include "Engine/LocalPlayer.h"
#include "RH_LocalPlayerSubsystem.h"

DEFINE_LOG_CATEGORY(LogRallyHereIntegration);

TArray<TSharedRef<FRH_AsyncTaskHelper>> FRH_AsyncTaskHelper::OngoingRequests = TArray<TSharedRef<FRH_AsyncTaskHelper>>();

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
	else if (OSSName == EPIC_SUBSYSTEM)
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
		return ERHAPI_PlatformID::Xboxlive;
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
	else if (OSSName == EPIC_SUBSYSTEM)
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

ERHAPI_InventoryPortal RH_GetInventoryPortalFromPlatformType(ERHAPI_PlatformTypes PlatformType)
{
	switch (PlatformType)
	{
	case ERHAPI_PlatformTypes::PT_ANON:
		return ERHAPI_InventoryPortal::Anon;
	case ERHAPI_PlatformTypes::PT_AMAZON:
		return ERHAPI_InventoryPortal::Steam;
	case ERHAPI_PlatformTypes::PT_STEAM:
		return ERHAPI_InventoryPortal::Steam;
	case ERHAPI_PlatformTypes::PT_PSN:
		return ERHAPI_InventoryPortal::Psn;
	case ERHAPI_PlatformTypes::PT_XBOX_LIVE:
		return ERHAPI_InventoryPortal::XboxLive;
	case ERHAPI_PlatformTypes::PT_GOOGLE:
		return ERHAPI_InventoryPortal::Google;
	case ERHAPI_PlatformTypes::PT_TWITCH:
		return ERHAPI_InventoryPortal::Twitch;
	case ERHAPI_PlatformTypes::PT_NINTENDO_SWITCH:
		return ERHAPI_InventoryPortal::NintendoSwitch;
	case ERHAPI_PlatformTypes::PT_APPLE:
		return ERHAPI_InventoryPortal::Apple;
	case ERHAPI_PlatformTypes::PT_NINTENDO:
		return ERHAPI_InventoryPortal::Nintendo;
	case ERHAPI_PlatformTypes::PT_EPIC:
		return ERHAPI_InventoryPortal::Epic;
	case ERHAPI_PlatformTypes::PT_GOOGLE_PLAY:
		return ERHAPI_InventoryPortal::GooglePlay;
	case ERHAPI_PlatformTypes::PT_NINTENDO_PPID:
		return ERHAPI_InventoryPortal::NintendoPpid;
	}

	return ERHAPI_InventoryPortal::Unknown;
}

ERHAPI_ClientType RH_GetClientTypeFromOSSName(FName OSSName)
{
	if (OSSName == STEAM_SUBSYSTEM || OSSName == STEAMV2_SUBSYSTEM)
	{
		return ERHAPI_ClientType::Win;
	}
	else if (OSSName == EPIC_SUBSYSTEM)
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

ERHAPI_InventoryBucket RH_GetInventoryBucketFromPlatformType(ERHAPI_PlatformTypes PlatformType)
{
	switch (PlatformType)
	{
	case ERHAPI_PlatformTypes::PT_UNKNOWN:
		return ERHAPI_InventoryBucket::None;
	case ERHAPI_PlatformTypes::PT_ANON:
		return ERHAPI_InventoryBucket::Anon;
	case ERHAPI_PlatformTypes::PT_AMAZON:
		return ERHAPI_InventoryBucket::Amazon;
	case ERHAPI_PlatformTypes::PT_STEAM:
		return ERHAPI_InventoryBucket::Steam;
	case ERHAPI_PlatformTypes::PT_PSN:
		return ERHAPI_InventoryBucket::Psn;
	case ERHAPI_PlatformTypes::PT_XBOX_LIVE:
		return ERHAPI_InventoryBucket::XboxLive;
	case ERHAPI_PlatformTypes::PT_GOOGLE:
		return ERHAPI_InventoryBucket::Google;
	case ERHAPI_PlatformTypes::PT_TWITCH:
		return ERHAPI_InventoryBucket::Twitch;
	case ERHAPI_PlatformTypes::PT_NINTENDO_SWITCH:
		return  ERHAPI_InventoryBucket::NintendoSwitch;
	case ERHAPI_PlatformTypes::PT_APPLE:
		return ERHAPI_InventoryBucket::Apple;
	case ERHAPI_PlatformTypes::PT_NINTENDO:
		return ERHAPI_InventoryBucket::Nintendo;
	case ERHAPI_PlatformTypes::PT_EPIC:
		return ERHAPI_InventoryBucket::Epic;
	case ERHAPI_PlatformTypes::PT_GOOGLE_PLAY:
		return ERHAPI_InventoryBucket::GooglePlay;
	case ERHAPI_PlatformTypes::PT_NINTENDO_PPID:
		return ERHAPI_InventoryBucket::NintendoPpid;
	}

	return ERHAPI_InventoryBucket::None;
}