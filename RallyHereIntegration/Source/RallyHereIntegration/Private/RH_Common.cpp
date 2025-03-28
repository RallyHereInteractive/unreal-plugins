// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_Common.h"

#include "RH_LocalPlayer.h"
#include "RH_OnlineSubsystemNames.h"
#include "Engine/LocalPlayer.h"
#include "Misc/ConfigCacheIni.h"
#include "RH_LocalPlayerSubsystem.h"


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

TOptional<ERHAPI_Platform> RH_GetPlatformFromOSSName(FName OSSName)
{
	FString PlatformName;
	GConfig->GetString(TEXT("PlatformFromOSSNameMap"), *OSSName.ToString(), PlatformName, GRallyHereIntegrationIni);

	TOptional<ERHAPI_Platform> OutPlatform;
	auto Platform = RH_GETENUMFROMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", PlatformName);
	if (Platform != INDEX_NONE)
	{
		OutPlatform = static_cast<ERHAPI_Platform>(Platform);
	}

	return OutPlatform;
}

ERHAPI_ClientType RH_GetClientTypeFromOSSName(FName OSSName)
{
	FString ClientTypeName;
	GConfig->GetString(TEXT("ClientTypeFromOSSNameMap"), *OSSName.ToString(), ClientTypeName, GRallyHereIntegrationIni);

	ERHAPI_ClientType OutClientType = ERHAPI_ClientType::Unknown;
	auto ClientType = RH_GETENUMFROMSTRING("/Script/RallyHereAPI", "ERHAPI_ClientType", ClientTypeName);
	if (ClientType != INDEX_NONE)
	{
		OutClientType = static_cast<ERHAPI_ClientType>(ClientType);
	}

	return OutClientType;
}

TOptional<ERHAPI_GrantType> RH_GetGrantTypeFromOSSName(FName OSSName)
{
	FString OSSNameString = OSSName.ToString();

	// detect PS4 crossgen support
	if (OSSName == PS4_SUBSYSTEM)
	{
		if (GConfig->GetBoolOrDefault(TEXT("CrossgenSupport"), TEXT("bEnableCrossgenSupport"), false, GEngineIni))
		{
			OSSNameString += TEXT("_CrossGen");
		}
	}

	FString GrantTypeName;
	GConfig->GetString(TEXT("GrantTypeFromOSSNameMap"), *OSSNameString, GrantTypeName, GRallyHereIntegrationIni);

	TOptional<ERHAPI_GrantType> OutGrantType;
	auto GrantType = RH_GETENUMFROMSTRING("/Script/RallyHereAPI", "ERHAPI_GrantType", GrantTypeName);
	if (GrantType != INDEX_NONE)
	{
		OutGrantType = static_cast<ERHAPI_GrantType>(GrantType);
	}

	return OutGrantType;
}

bool RH_LookupBoolOSSOverride(FName OSSName, const FString& OverrideMapName, bool bDefault = false)
{
	FString OSSNameString = OSSName.ToString();

	// detect PS4 crossgen support
	if (OSSName == PS4_SUBSYSTEM)
	{
		if (GConfig->GetBoolOrDefault(TEXT("CrossgenSupport"), TEXT("bEnableCrossgenSupport"), false, GEngineIni))
		{
			OSSNameString += TEXT("_CrossGen");
		}
	}

	bool bValue = bDefault;

	FString VersionedOSSNameString = OSSNameString + FString::Printf(TEXT("_UE%d_%d"), ENGINE_MAJOR_VERSION, ENGINE_MINOR_VERSION);

	// check for a version specific override first, if not use the base name
	if (!GConfig->GetBool(*OverrideMapName, *VersionedOSSNameString, bValue, GRallyHereIntegrationIni))
	{
		GConfig->GetBool(*OverrideMapName, *OSSNameString, bValue, GRallyHereIntegrationIni);
	}

	return bValue;
}

bool RH_UseGetAuthTokenFallbackFromOSSName(FName OSSName)
{
	return RH_LookupBoolOSSOverride(OSSName, TEXT("UseAuthTokenFallbackFromOSSNameMap"));
}

bool RH_PlatformSessionsTypeIsCaseInsensitive(FName SessionType)
{
	return RH_LookupBoolOSSOverride(SessionType, TEXT("SessionNamesAreCaseInsensitiveOSSNameMap"));
}

bool RH_UseRecentPlayersFromOSSName(FName OSSName)
{
	return RH_LookupBoolOSSOverride(OSSName, TEXT("UseRecentPlayersFromOSSName"));
}

bool RH_SkipEntitlementFinalization(FName OSSName)
{
	return RH_LookupBoolOSSOverride(OSSName, TEXT("SkipEntitlementFinalizationFromOSSName"));
}

bool RH_UsesSonyEntitlementTokens(FName OSSName)
{
	return RH_LookupBoolOSSOverride(OSSName, TEXT("RH_UsesSonyEntitlementTokensFromOSSName"));
}

bool RH_PlatformSupportsViewProfile(FName OSSName)
{
	return RH_LookupBoolOSSOverride(OSSName, TEXT("RH_PlatformSupportsViewProfileFromOSSName"), true);
}

FString RH_GetPlatformNameFromPlatformEnum(const ERHAPI_Platform Platform)
{
	FString PlatformName;
	GConfig->GetString(TEXT("PlatformNameFromPlatformEnumMap"), *EnumToString(Platform), PlatformName, GRallyHereIntegrationIni);
	return PlatformName;
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

TOptional<FGuid> RH_GetPlayerUuidFromPlayerController(const APlayerController* PC)
{
	TOptional<FGuid> PlayerId;
	if (PC != nullptr)
	{
		auto* pRH_Conn = Cast<IRH_IpConnectionInterface>(PC->Player);
		auto* pRH_LocalPlayer = Cast<IRH_LocalPlayerInterface>(PC->Player);

		if (pRH_Conn != nullptr)
		{
			PlayerId = pRH_Conn->GetRHPlayerUuid();
		}
		else if (pRH_LocalPlayer != nullptr)
		{
			PlayerId = pRH_LocalPlayer->GetRHPlayerUuid();
		}
	}

	return PlayerId;
}



