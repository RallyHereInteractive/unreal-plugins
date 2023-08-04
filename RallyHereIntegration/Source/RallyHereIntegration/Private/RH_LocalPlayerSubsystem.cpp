
#include "RH_LocalPlayerSubsystem.h"
#include "RH_IntegrationSettings.h"
#include "RallyHereIntegrationModule.h"
#include "OnlineSubsystemUtils.h"
#include "RH_ConfigSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "Engine/LocalPlayer.h"
#include "Net/OnlineEngineInterface.h"

#include "RH_LocalPlayerLoginSubsystem.h"
#include "RH_LocalPlayerPresenceSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_AdSubsystem.h"
#include "RH_ConfigSubsystem.h"
#include "RH_EntitlementSubsystem.h"
#include "RH_PurgeSubsystem.h"
#include "RH_PlayerNotifications.h"


void URH_LocalPlayerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

    AuthContext = MakeShared<RallyHereAPI::FAuthContext>(RH_APIs::GetAPIs().GetAuth());
	AuthContext->OnLoginComplete().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserLoggedIn);
	AuthContext->OnLoginUserChanged().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserChanged);

    // Create Subsystems
	// Create all the subsystem objects first, so they can refer to each other during initialization
    LoginSubsystem = AddSubsystemPlugin<URH_LocalPlayerLoginSubsystem>(GetDefault<URH_IntegrationSettings>()->LocalPlayerLoginSubsystemClass);
	AdSubsystem = AddSubsystemPlugin<URH_AdSubsystem>(GetDefault<URH_IntegrationSettings>()->AdSubsystemClass);
    FriendSubsystem = AddSubsystemPlugin<URH_FriendSubsystem>(GetDefault<URH_IntegrationSettings>()->FriendSubsystemClass);
	SessionSubsystem = AddSubsystemPlugin<URH_LocalPlayerSessionSubsystem>(GetDefault<URH_IntegrationSettings>()->LocalPlayerSessionSubsystemClass);
	PresenceSubsystem = AddSubsystemPlugin<URH_LocalPlayerPresenceSubsystem>(GetDefault<URH_IntegrationSettings>()->LocalPlayerPresenceSubsystemClass);
	PurgeSubsystem = AddSubsystemPlugin<URH_PurgeSubsystem>(GetDefault<URH_IntegrationSettings>()->PurgeSubsystemClass);
	EntitlementSubsystem = AddSubsystemPlugin<URH_EntitlementSubsystem>(GetDefault<URH_IntegrationSettings>()->EntitlementSubsystemClass);

	// Initialize Subsystems
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->Initialize();
	}
	
}

void URH_LocalPlayerSubsystem::Deinitialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// Deinitialize Subsystems
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->Deinitialize();
	}
	SubsystemPlugins.Reset();

	// Abandon references so that the subsystems can be GC'd
	LoginSubsystem = nullptr;
	AdSubsystem = nullptr;
	FriendSubsystem = nullptr;
	SessionSubsystem = nullptr;
	PresenceSubsystem = nullptr;
	PurgeSubsystem = nullptr;
	EntitlementSubsystem = nullptr;

	AuthContext->OnLoginUserChanged().RemoveAll(this);
    AuthContext = nullptr;
}

bool URH_LocalPlayerSubsystem::IsLoggedIn() const
{
	return AuthContext->IsLoggedIn();
}

void URH_LocalPlayerSubsystem::OnUserLoggedIn(bool bSuccess)
{
	// handle initial push of successful login to game instance here, as many things bind to OnUserChanged and we are not assured to be first in the order
	auto pGameInstance = GetLocalPlayer()->GetGameInstance();
	if (pGameInstance != nullptr)
	{
		auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		if (pGISubsystem != nullptr)
		{
			if (bSuccess)
			{
				// if we are now logged in, update game instance to use our auth context
				pGISubsystem->SetAuthContext(GetAuthContext());
			}
			else
			{
				// if we are no longer logged in, see if there is someone logged in to use for the game instance level auth context
				for (const auto* Player : pGameInstance->GetLocalPlayers())
				{
					auto* pPlayerSubsystem = Player->GetSubsystem<URH_LocalPlayerSubsystem>();
					if (pPlayerSubsystem != nullptr && pPlayerSubsystem->IsLoggedIn())
					{
						pGISubsystem->SetAuthContext(pPlayerSubsystem->GetAuthContext());
						break;
					}
				}
			}
		}
	}
}

void URH_LocalPlayerSubsystem::OnUserChanged()
{
	FGuid OldUuid;
	URH_PlayerInfo* OldPlayerInfo = PlayerInfoCache.Get();
	// clear notification watch on last player info
	if (PlayerInfoCache.IsValid())
	{
		OldUuid = PlayerInfoCache->GetRHPlayerUuid();
		if (PlayerInfoCache->GetPlayerNotifications() != nullptr)
		{
			// stop streaming and clear out history as we may not be able to conveniently resume from here
			PlayerInfoCache->StopStreamingNotifications(true);
			PlayerInfoCache.Reset();
		}
	}

	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->OnUserChanged();
		Plugin->OnUserChanged(OldUuid, OldPlayerInfo);
	}

	PlayerInfoCache = GetLocalPlayerInfo();
	if (PlayerInfoCache.IsValid())
	{
		if (PlayerInfoCache->GetPlayerNotifications() != nullptr)
		{
			// start streaming notifications for this context
			PlayerInfoCache->StartStreamingNotifications();
		}
	}
}

FGuid URH_LocalPlayerSubsystem::GetPlayerUuid() const
{
	auto LoginResult = AuthContext->GetLoginResult();
	if (AuthContext->IsLoggedIn() && LoginResult.IsSet())
	{
		return LoginResult->GetActivePlayerUuid(FGuid());
	}

	return FGuid();
}

ERHAPI_PlatformTypes_DEPRECATED URH_LocalPlayerSubsystem::GetLoggedInPlatformType() const
{
	if (IsLoggedIn() && AuthContext->GetLoginResult().IsSet())
	{
		return ERHAPI_PlatformTypes_DEPRECATED(AuthContext->GetLoginResult()->GetPortalId());
	}
	return ERHAPI_PlatformTypes_DEPRECATED::PT_UNKNOWN;
}

ERHAPI_Platform URH_LocalPlayerSubsystem::GetLoggedInPlatform() const
{
	if (IsLoggedIn() && AuthContext->GetLoginResult().IsSet())
	{
		return AuthContext->GetLoginResult()->GetPlatform();
	}
	return ERHAPI_Platform::Anon;
}


FUniqueNetIdWrapper URH_LocalPlayerSubsystem::GetOSSUniqueId() const
{
#if RH_FROM_ENGINE_VERSION(5,0)
	return GetLocalPlayer()->GetUniqueNetIdForPlatformUser();
#else
	return GetLocalPlayer()->GetUniqueNetIdFromCachedControllerId();
#endif
}

#if RH_FROM_ENGINE_VERSION(5,0)
FPlatformUserId URH_LocalPlayerSubsystem::GetPlatformUserId() const
{
	return GetLocalPlayer()->GetPlatformUserId();
}
#else
int32 URH_LocalPlayerSubsystem::GetPlatformUserId() const
{
	return GetLocalPlayer()->GetControllerId();
}
#endif


URH_PlayerInfo* URH_LocalPlayerSubsystem::GetLocalPlayerInfo() const
{
	auto pGameInstance = GetLocalPlayer()->GetGameInstance();
	if (pGameInstance == nullptr)
	{
		return nullptr;
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISubsystem == nullptr)
	{
		return nullptr;
	}

	URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem = pGISubsystem->GetPlayerInfoSubsystem();
	if (pRH_PlayerInfoSubsystem == nullptr)
	{
		return nullptr;
	}

	return pRH_PlayerInfoSubsystem->GetOrCreatePlayerInfo(GetPlayerUuid());
}

FRH_PlayerPlatformId URH_LocalPlayerSubsystem::GetPlayerPlatformId() const
{
	// #RHTODO: Consider making this use the PlayerInfo for the local player instead, 
	//          though we will need to make sure the platform id is setup upon login.
	if (IsLoggedIn() && AuthContext->GetLoginResult().IsSet())
	{
		FRH_PlayerPlatformId PlayerPlatformId;

		PlayerPlatformId.UserId = AuthContext->GetLoginResult()->PortalUserId;
		PlayerPlatformId.PlatformType = AuthContext->GetLoginResult()->GetPlatform();
		return PlayerPlatformId;
	}

	return FRH_PlayerPlatformId();
}

IOnlineSubsystem* URH_LocalPlayerSubsystem::GetOSS(const FName& SubsystemName) const
{
    if (!SubsystemName.IsNone())
    {
        const FName Name = Online::GetUtils()->GetOnlineIdentifier(GetLocalPlayer()->GetWorld(), SubsystemName);
        if (Name != NAME_None)
        {
            if (IOnlineSubsystem* FoundOSS = IOnlineSubsystem::Get(Name))
            {
                return FoundOSS;
            }
        }
    }

    if (IOnlineSubsystem* NativeOSS = IOnlineSubsystem::GetByPlatform(true))
    {
    	// For PiE, we need to get at the specific instance of the subsystem for this particular player
    	const FName Name = Online::GetUtils()->GetOnlineIdentifier(GetLocalPlayer()->GetWorld(), NativeOSS->GetSubsystemName());
    	if (Name != NativeOSS->GetInstanceName())
    	{
            if (IOnlineSubsystem* FoundOSS = IOnlineSubsystem::Get(Name))
            {
                return FoundOSS;
            }
        }
    	
    	return NativeOSS;
    }

    if (IOnlineSubsystem* DefaultOSS = IOnlineSubsystem::Get(NAME_None))
    {
    	// For PiE, we need to get at the specific instance of the subsystem for this particular player
    	const FName Name = Online::GetUtils()->GetOnlineIdentifier(GetLocalPlayer()->GetWorld(), DefaultOSS->GetSubsystemName());
    	if (Name != DefaultOSS->GetInstanceName())
    	{
            if (IOnlineSubsystem* FoundOSS = IOnlineSubsystem::Get(Name))
            {
                return FoundOSS;
            }
        }
    	
        return DefaultOSS;
    }

    return nullptr;
}

URH_PlayerNotifications* URH_LocalPlayerSubsystem::GetPlayerNotifications() const
{
	auto* LocalPlayerInfo = GetLocalPlayerInfo();
	if (LocalPlayerInfo != nullptr)
	{
		return LocalPlayerInfo->GetPlayerNotifications();
	}
	return nullptr;
}