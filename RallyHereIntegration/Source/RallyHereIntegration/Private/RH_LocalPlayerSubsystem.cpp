
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
#include "RH_NotificationSubsystem.h"

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetClientId(
	TEXT("rh.setclientid"),
	TEXT("Set the client ID used to log into the RallyHere API"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			FString NewClientId = Args.IsEmpty() ? TEXT("") : Args[0];
			NewClientId.TrimQuotesInline();
		
			for (auto localPlayer : World->GetGameInstance()->GetLocalPlayers())
			{
				auto localPlayerSubsystem = localPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
				localPlayerSubsystem->SetClientId(NewClientId);
			}
			Ar.Logf(TEXT("Updated Client ID to [%s]"), *NewClientId);
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHGetClientId(
	TEXT("rh.getclientid"),
	TEXT("Get the client ID used to log into the RallyHere API"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			for (auto localPlayer : World->GetGameInstance()->GetLocalPlayers())
			{
				auto localPlayerSubsystem = localPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
				Ar.Logf(TEXT("Current Client ID = [%s]"), *localPlayerSubsystem->GetClientId());
			}
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetClientSecret(
	TEXT("rh.setclientsecret"),
	TEXT("Set the client secret used to log into the RallyHere API"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			FString NewClientSecret = Args.IsEmpty() ? TEXT("") : Args[0];
			NewClientSecret.TrimQuotesInline();
		
			for (auto localPlayer : World->GetGameInstance()->GetLocalPlayers())
			{
				auto localPlayerSubsystem = localPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
				localPlayerSubsystem->SetClientSecret(NewClientSecret);
			}
			Ar.Logf(TEXT("Updated Client secret"));
		}));

void URH_LocalPlayerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

    AuthContext = MakeShared<RallyHereAPI::FAuthContext>(RH_APIs::GetAPIs().GetAuth(), GetClientId(), GetClientSecret());
	AuthContext->OnLoginComplete().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserLoggedIn);
	AuthContext->OnLoginUserChanged().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserChanged);

    // Create Subsystems
	// Create all the subsystem objects first, so they can refer to each other during initialization
    LoginSubsystem = AddSubsystemPlugin<URH_LocalPlayerLoginSubsystem>();
	AdSubsystem = AddSubsystemPlugin<URH_AdSubsystem>();
    FriendSubsystem = AddSubsystemPlugin<URH_FriendSubsystem>();
	SessionSubsystem = AddSubsystemPlugin<URH_LocalPlayerSessionSubsystem>();
	PresenceSubsystem = AddSubsystemPlugin<URH_LocalPlayerPresenceSubsystem>();
	PurgeSubsystem = AddSubsystemPlugin<URH_PurgeSubsystem>();
	EntitlementSubsystem = AddSubsystemPlugin<URH_EntitlementSubsystem>();
	NotificationSubsystem = AddSubsystemPlugin<URH_NotificationSubsystem>();

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
	NotificationSubsystem = nullptr;

	AuthContext->OnLoginUserChanged().RemoveAll(this);
    AuthContext = nullptr;
}

bool URH_LocalPlayerSubsystem::IsLoggedIn() const
{
	auto LoginResult = AuthContext->GetLoginResult();
	const bool bIsLoggedIn = LoginResult.IsSet() && LoginResult->AccessToken_IsSet;
	return bIsLoggedIn;
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
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->OnUserChanged();
	}
}

FGuid URH_LocalPlayerSubsystem::GetPlayerUuid() const
{
	auto LoginResult = AuthContext->GetLoginResult();
	if (AuthContext->IsLoggedIn())
	{
		return LoginResult.GetValue().GetActivePlayerUuid(FGuid());
	}

	return FGuid();
}

ERHAPI_PlatformTypes URH_LocalPlayerSubsystem::GetLoggedInPlatformType() const
{
	if (IsLoggedIn())
	{
		auto LoginResult = AuthContext->GetLoginResult();
		return ERHAPI_PlatformTypes(LoginResult.GetValue().PortalId);
	}
	return ERHAPI_PlatformTypes::PT_UNKNOWN;
}

FUniqueNetIdWrapper URH_LocalPlayerSubsystem::GetOSSUniqueId() const
{
	return GetLocalPlayer()->GetUniqueNetIdForPlatformUser();
}

FPlatformUserId URH_LocalPlayerSubsystem::GetPlatformUserId() const
{
	return GetLocalPlayer()->GetPlatformUserId();
}

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
	if (AuthContext->GetLoginResult().IsSet())
	{
		FRH_PlayerPlatformId PlayerPlatformId;

		PlayerPlatformId.UserId = AuthContext->GetLoginResult()->PortalUserId;
		PlayerPlatformId.PlatformType = ERHAPI_PlatformTypes(AuthContext->GetLoginResult()->PortalId);
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

void URH_LocalPlayerSubsystem::SetClientId(FString InClientId, FString Source)
{
    ResolvedClientId = MoveTemp(InClientId);
    UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedClientId,
        *Source);

    if (AuthContext)
    {
        AuthContext->SetClientId(ResolvedClientId);
    }
}

FString URH_LocalPlayerSubsystem::GetClientId()
{
    if (ResolvedClientId.IsEmpty())
    {
        ResolveClientId();
    }
    return ResolvedClientId;
}

void URH_LocalPlayerSubsystem::ResolveClientId()
{
    if (bIsClientIdLocked)
    {
        UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
        return;
    }

	auto* Settings = GetDefault<URH_IntegrationSettings>();

    for (const auto& Key : Settings->ClientIdCommandLineKeys)
    {
        FString temp;
        if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp) && !temp.IsEmpty())
        {
            SetClientId(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
            return;
        }
    }

    if (!Settings->ClientId.IsEmpty())
    {
        SetClientId(Settings->ClientId, TEXT("INI: RH_IntegrationSettings - ClientId"));
        return;
    }

    UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a client ID"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_LocalPlayerSubsystem::SetClientSecret(FString InClientSecret, FString Source)
{
    ResolvedClientSecret = MoveTemp(InClientSecret);
    UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *Source);

    if (AuthContext)
    {
        AuthContext->SetClientSecret(ResolvedClientSecret);
    }
}

FString URH_LocalPlayerSubsystem::GetClientSecret()
{
    if (ResolvedClientSecret.IsEmpty())
    {
        ResolveClientSecret();
    }
    return ResolvedClientSecret;
}

void URH_LocalPlayerSubsystem::ResolveClientSecret()
{
    if (bIsClientSecretLocked)
    {
        UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
        return;
    }

	auto* Settings = GetDefault<URH_IntegrationSettings>();

    for (const auto& Key : Settings->ClientSecretCommandLineKeys)
    {
        FString temp;
        if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp) && !temp.IsEmpty())
        {
            SetClientSecret(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
            return;
        }
    }

	if (!Settings->ClientSecret.IsEmpty())
	{
		SetClientSecret(Settings->ClientSecret, TEXT("INI: RH_IntegrationSettings - ClientSecret"));
		return;
	}

    UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a client secret"), ANSI_TO_TCHAR(__FUNCTION__));
}
