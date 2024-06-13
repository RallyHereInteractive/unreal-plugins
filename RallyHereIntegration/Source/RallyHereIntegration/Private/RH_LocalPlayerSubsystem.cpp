// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_LocalPlayerSubsystem.h"
#include "RH_IntegrationSettings.h"
#include "RallyHereIntegrationModule.h"
#include "OnlineSubsystemUtils.h"
#include "RH_GameInstanceSubsystem.h"
#include "Engine/LocalPlayer.h"
#include "Engine/GameInstance.h"
#include "Misc/EngineVersion.h"
#include "Net/OnlineEngineInterface.h"
#include "Analytics.h"
#include "Interfaces/IAnalyticsProvider.h"

#include "RH_LocalPlayerLoginSubsystem.h"
#include "RH_LocalPlayerPresenceSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_AdSubsystem.h"
#include "RH_FriendSubsystem.h"
#include "RH_ConfigSubsystem.h"
#include "RH_EntitlementSubsystem.h"
#include "RH_PurgeSubsystem.h"
#include "RH_PlayerNotifications.h"
#include "RH_Events.h"

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleFlushEvents(
	TEXT("rh.events.pflush"),
	TEXT("Flushes all player analytics providers in the current world"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (World != nullptr)
			{
				auto* GameInstance = World->GetGameInstance();
				if (GameInstance != nullptr)
				{
					for (auto LP : GameInstance->GetLocalPlayers())
					{
						auto* Subsystem = LP->GetSubsystem<URH_LocalPlayerSubsystem>();
						if (Subsystem != nullptr)
						{
							auto AnalyticsProvider = Subsystem->GetAnalyticsProvider();
							if (AnalyticsProvider.IsValid())
							{
								AnalyticsProvider->FlushEvents();
							}
						}
					}
				}
			}
		}));


bool URH_LocalPlayerSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	TArray<UClass*> ChildClasses;
	GetDerivedClasses(GetClass(), ChildClasses, false);

	if (ChildClasses.Num() > 0)
	{
		UE_LOG(LogRallyHereIntegration, Display, TEXT("Found %i derived classes when attemping to create (%s), skipping creation"), ChildClasses.Num(), *GetClass()->GetName());
		return false;
	}

	return true;
}

void URH_LocalPlayerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

    AuthContext = MakeShared<RallyHereAPI::FAuthContext>(RH_APIs::GetAPIs().GetAuth());
	AuthContext->OnLoginComplete().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserLoggedIn);
	AuthContext->OnLogout().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserLoggedOut);
	AuthContext->OnLoginUserChanged().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserChanged);
	AuthContext->SetRefreshTokenExpiredDelegate(RallyHereAPI::FAuthContextLoginRefreshTokenExpired::CreateUObject(this, &URH_LocalPlayerSubsystem::OnUserRefreshTokenExpired));

	const auto* Settings = GetDefault<URH_IntegrationSettings>();

    // Create Subsystems
	// Create all the subsystem objects first, so they can refer to each other during initialization
    LoginSubsystem = AddSubsystemPlugin<URH_LocalPlayerLoginSubsystem>(Settings->LocalPlayerLoginSubsystemClass);
	AdSubsystem = AddSubsystemPlugin<URH_AdSubsystem>(Settings->AdSubsystemClass);
    FriendSubsystem = AddSubsystemPlugin<URH_FriendSubsystem>(Settings->FriendSubsystemClass);
	SessionSubsystem = AddSubsystemPlugin<URH_LocalPlayerSessionSubsystem>(Settings->LocalPlayerSessionSubsystemClass);
	PresenceSubsystem = AddSubsystemPlugin<URH_LocalPlayerPresenceSubsystem>(Settings->LocalPlayerPresenceSubsystemClass);
	PurgeSubsystem = AddSubsystemPlugin<URH_PurgeSubsystem>(Settings->PurgeSubsystemClass);
	EntitlementSubsystem = AddSubsystemPlugin<URH_EntitlementSubsystem>(Settings->EntitlementSubsystemClass);

	if (Settings->ShouldUseLocalPlayerSandboxing())
	{
		SandboxedPlayerInfoSubsystem = AddSandboxedSubsystemPlugin<URH_PlayerInfoSubsystem>(Settings->PlayerInfoSubsystemClass);
	}

	// Initialize Subsystems
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->Initialize();
	}
	for (auto Plugin : SandboxedSubsystemPlugins)
	{
		Plugin->Initialize();
	}

	// get the default configured provider
	CreateAnalyticsProvider();

	if (AnalyticsProvider.IsValid())
	{
		AnalyticsStartTime = FDateTime::UtcNow();
		AnalyticsProvider->StartSession();

		// emit the auto correlation start event
		RHStandardEvents::FCorrelationStartEvent::AutoEmit(AnalyticsProvider, GetLocalPlayer()->GetGameInstance());

		// emit the auto client device event on the next frame (to allow for game viewport to be initialized)
		if (GetLocalPlayer()->GetWorld() != nullptr)
		{
			auto& TimerManager = GetLocalPlayer()->GetWorld()->GetTimerManager();

			TimerManager.SetTimerForNextTick(FTimerDelegate::CreateWeakLambda(this, [this]()
			{
				if (AnalyticsProvider.IsValid())
				{
					RHStandardEvents::FClientDeviceEvent::AutoEmit(AnalyticsProvider, GetLocalPlayer()->GetGameInstance());
				}
			}));
		}
	}
}

void URH_LocalPlayerSubsystem::Deinitialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (AnalyticsProvider.IsValid())
	{
		// emit a correlation end event
		{
			RHStandardEvents::FCorrelationEndEvent CorrelationEndEvent;

			CorrelationEndEvent.Reason = TEXT("Shutdown");

			if (AnalyticsStartTime.IsSet())
			{
				CorrelationEndEvent.DurationSeconds = (FDateTime::UtcNow() - AnalyticsStartTime.GetValue()).GetTotalSeconds();
			}
			AnalyticsStartTime.Reset();

			CorrelationEndEvent.EmitTo(AnalyticsProvider);
		}

		AnalyticsProvider->EndSession();
	}

	// Deinitialize Subsystems
	for (auto Plugin : SandboxedSubsystemPlugins)
	{
		if (Plugin != nullptr)
		{
			Plugin->Deinitialize();
		}
	}
	SandboxedSubsystemPlugins.Reset();
	for (auto Plugin : SubsystemPlugins)
	{
		if (Plugin != nullptr)
		{
			Plugin->Deinitialize();
		}
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

	if (AuthContext.IsValid())
	{
		AuthContext->OnLoginUserChanged().RemoveAll(this);
	}
    AuthContext.Reset();
}


bool URH_LocalPlayerSubsystem::IsLoggedIn() const
{
	return AuthContext.IsValid() && AuthContext->IsLoggedIn();
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

				// if we have an analytics provider and game instance does not have one, set it as the auth provider
				if (GetAnalyticsProvider().IsValid() && !pGISubsystem->GetAnalyticsProvider().IsValid())
				{
					pGISubsystem->SetAnalyticsProvider(GetAnalyticsProvider());
				}
			}
			else
			{
				// if we are no longer logged in, see if there is someone logged in to use for the game instance level auth context
				if (pGISubsystem->GetAuthContext() == GetAuthContext())
				{
					pGISubsystem->SetAuthContext(nullptr);
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

				// if we are no longer logged in, see if there is someone logged in to use for the game instance level analytics provider
				if (pGISubsystem->GetAnalyticsProvider() == GetAnalyticsProvider())
				{
					pGISubsystem->SetAnalyticsProvider(nullptr);
					for (const auto* Player : pGameInstance->GetLocalPlayers())
					{
						auto* pPlayerSubsystem = Player->GetSubsystem<URH_LocalPlayerSubsystem>();
						if (pPlayerSubsystem != nullptr && pPlayerSubsystem->GetAnalyticsProvider().IsValid())
						{
							pGISubsystem->SetAnalyticsProvider(pPlayerSubsystem->GetAnalyticsProvider());
							break;
						}
					}
				}
			}
		}
	}

}

void URH_LocalPlayerSubsystem::OnUserLoggedOut(bool bRefreshTokenExpired)
{
	// trigger login as failure, to push logout to game instance
	OnUserLoggedIn(false);

	// trigger use change, to handle user delta response
	OnUserChanged();
}

void URH_LocalPlayerSubsystem::OnUserChanged()
{
	const auto Settings = GetDefault<URH_IntegrationSettings>();

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

	if (AnalyticsProvider.IsValid())
	{
		auto PlayerUuid = GetPlayerUuid();
		AnalyticsProvider->SetUserID(PlayerUuid.IsValid() ? PlayerUuid.ToString(EGuidFormats::DigitsWithHyphens) : TEXT(""));
	}

	PlayerInfoCache = GetLocalPlayerInfo();
	if (PlayerInfoCache.IsValid())
	{
		if (PlayerInfoCache->GetPlayerNotifications() != nullptr)
		{
			// start streaming notifications for this player
			PlayerInfoCache->StartStreamingNotifications();
		}

		auto AutoProcessPlatformEntitlements = FSimpleDelegate::CreateWeakLambda(this, [this]()
			{
				// if auto processing is enabled, process platform entitlements
				auto Settings = GetDefault<URH_IntegrationSettings>();
				if (Settings->bAutoProcessPlatformEntitlementsOnLogin)
				{
					// process platform entitlements
					auto pEntitlementSubsystem = GetEntitlementSubsystem();
					if (pEntitlementSubsystem != nullptr)
					{
						auto EntitlementDelegate = FRH_ProcessEntitlementCompletedDelegate::CreateWeakLambda(this, [this](bool bSuccess, FRHAPI_PlatformEntitlementProcessResult Result)
							{
								if (bSuccess)
								{
									OnAutoEntitlementsProcessed.Broadcast(true);
									UE_LOG(LogRallyHereIntegration, Verbose, TEXT("Auto platform entitlements processed successfully"));
								}
								else
								{
									OnAutoEntitlementsProcessed.Broadcast(false);
									UE_LOG(LogRallyHereIntegration, Warning, TEXT("Failed to auto process platform entitlements"));
								}
							});
						pEntitlementSubsystem->SubmitEntitlementsForLoggedInOSS(EntitlementDelegate);
					}
				}
			});

		if (PlayerInfoCache->GetPlayerInventory() != nullptr && Settings->bAutoCreateInventorySessionOnLogin)
		{
			// start an inventory session so that inventory queries will work as expected for session based inventory grants

			// create a delegate that calls the multicast delegate when the inventory session is created
			auto InventoryDelegate = FRH_OnInventorySessionUpdateDelegate::CreateWeakLambda(this, [this, AutoProcessPlatformEntitlements](bool bSuccess)
				{
					if (bSuccess)
					{
						UE_LOG(LogRallyHereIntegration, Verbose, TEXT("Inventory session created successfully"));

						OnAutoInventorySessionCreated.Broadcast(true);

						AutoProcessPlatformEntitlements.Execute();
					}
					else
					{
						UE_LOG(LogRallyHereIntegration, Warning, TEXT("Failed to create inventory session"));
						OnAutoInventorySessionCreated.Broadcast(false);

						AutoProcessPlatformEntitlements.Execute();
					}
				});

			const auto PlatformId = GetPlayerPlatformId();
			if (PlatformId.IsValid())
			{
				PlayerInfoCache->GetPlayerInventory()->CreateInventorySession(PlatformId.PlatformType, InventoryDelegate);
			}
		}
		else
		{
			AutoProcessPlatformEntitlements.Execute();
		}
	}
}

void URH_LocalPlayerSubsystem::OnUserRefreshTokenExpired(FSimpleDelegate CompletionDelegate)
{
	// attempt an autologin
	if (LoginSubsystem != nullptr)
	{
		LoginSubsystem->ResubmitLastSuccessfulLogin(FRH_OnLoginComplete::CreateWeakLambda(this, [this, CompletionDelegate](const FRH_LoginResult&) {
			// login has completed, either login was successful (in which case auth context is already updated), or it failed, in which case auth context needs to know to logout
			CompletionDelegate.ExecuteIfBound();
		}));
	}
	else
	{
		CompletionDelegate.ExecuteIfBound();
	}
}

FGuid URH_LocalPlayerSubsystem::GetPlayerUuid() const
{
	if (AuthContext.IsValid() && AuthContext->IsLoggedIn())
	{
		auto LoginResult = AuthContext->GetLoginResult();
		if (LoginResult.IsSet())
		{
			return LoginResult->GetActivePlayerUuid(FGuid());
		}
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

TOptional<ERHAPI_Platform> URH_LocalPlayerSubsystem::GetLoggedInPlatform() const
{
	if (IsLoggedIn() && AuthContext->GetLoginResult().IsSet())
	{
		return AuthContext->GetLoginResult()->GetPlatform();
	}
	return TOptional<ERHAPI_Platform>();
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

TSharedPtr<class IAnalyticsProvider> URH_LocalPlayerSubsystem::CreateAnalyticsProvider()
{
	if (!AnalyticsProvider.IsValid())
	{
		AnalyticsProvider = RHStandardEvents::AutoCreateAnalyticsProvider();
	}

	return AnalyticsProvider;
}

URH_PlayerInfoSubsystem* URH_LocalPlayerSubsystem::GetPlayerInfoSubsystem() const
{
	if (SandboxedPlayerInfoSubsystem != nullptr)
	{
		return SandboxedPlayerInfoSubsystem;
	}

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

	return pGISubsystem->GetPlayerInfoSubsystem();
}

URH_PlayerInfo* URH_LocalPlayerSubsystem::GetLocalPlayerInfo() const
{
	auto pRH_PlayerInfoSubsystem = GetPlayerInfoSubsystem();
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

		PlayerPlatformId.UserId = AuthContext->GetLoginResult()->GetPortalUserId();
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

void URH_LocalPlayerSubsystem::CustomEndpoint(const FRH_CustomEndpointRequestWrapper& RequestWrapper, const RallyHereAPI::FDelegate_CustomEndpointSend& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_CustomEndpointSend BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.EndpointId = RequestWrapper.EndpointId;
	if (RequestWrapper.ContentType.Len() > 0)
	{
		Request.ContentType = RequestWrapper.ContentType;
	}
	if (RequestWrapper.Body.GetValue().IsValid())
	{
		Request.Body = RequestWrapper.Body;
	}

	BaseType::DoCall(RH_APIs::GetAPIs().GetCustom(), Request, Delegate, RequestWrapper.Priority);

}

void URH_LocalPlayerSubsystem::CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const FRH_CustomEndpointDelegateBlock& Delegate)
{
	auto InternalDelegate = RallyHereAPI::FDelegate_CustomEndpointSend::CreateLambda([Delegate](const RallyHereAPI::FResponse_CustomEndpointSend& Resp)
		{
			FRH_CustomEndpointResponseWrapper ResponseWrapper(Resp);
			Delegate.ExecuteIfBound(ResponseWrapper);
		});
	CustomEndpoint(Request, InternalDelegate);
}