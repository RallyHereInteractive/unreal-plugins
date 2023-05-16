#include "RH_LocalPlayerPresenceSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemTypes.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereIntegrationModule.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "Engine/World.h"
#include "TimerManager.h"

void URH_LocalPlayerPresenceSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();
	InitPropertiesWithDefaultValues();
	
	Poller = FRH_PollControl::CreateAutoPoller();

	StartRefreshTimer();
}

void URH_LocalPlayerPresenceSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
	InitPropertiesWithDefaultValues();
	StopRefreshTimer();
	Poller.Reset();
}

void URH_LocalPlayerPresenceSubsystem::UpdatePlayerPresenceSelf(RallyHereAPI::FRequest_UpdatePlayerPresenceSelf& Request, const RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf& Delegate)
{
	if (!Request.AuthContext)
	{
		Request.AuthContext = GetAuthContext();
	}

	typedef RallyHereAPI::Traits_UpdatePlayerPresenceSelf BaseType;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Delegate](const BaseType::Response& Resp)
		{
			// this does not write to a local cache!
			Delegate.ExecuteIfBound(Resp);
			if (Resp.IsSuccessful() && Poller.IsValid())
			{
				Poller->DeferPollTimer();
			}
		}), 
		FRH_GenericSuccessDelegate()
	);

	Helper->Start(RH_APIs::GetPresenceAPI(), Request);
}

void URH_LocalPlayerPresenceSubsystem::GetPlayerPresenceSelf(RallyHereAPI::FRequest_GetPlayerPresenceSelf& Request, const RallyHereAPI::FDelegate_GetPlayerPresenceSelf& Delegate)
{
	typedef RallyHereAPI::Traits_GetPlayerPresenceSelf BaseType;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Delegate](const BaseType::Response& Resp)
		{
			// this does not write to a local cache!
			Delegate.ExecuteIfBound(Resp);
		}),
		FRH_GenericSuccessDelegate()
	);

	Helper->Start(RH_APIs::GetPresenceAPI(), Request);
}

void URH_LocalPlayerPresenceSubsystem::StartRefreshTimer()
{
	static FName PollTimerName(TEXT("LocalPresenceUpdate"));

	if (Poller.IsValid())
	{
		Poller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_LocalPlayerPresenceSubsystem::PollRefreshStatus), PollTimerName);
	}
}

void URH_LocalPlayerPresenceSubsystem::StopRefreshTimer()
{
	if (Poller.IsValid())
	{
		Poller->StopPoll();
	}
}

void URH_LocalPlayerPresenceSubsystem::RefreshStatus()
{
	auto AuthContext = GetAuthContext();
	if (AuthContext.IsValid() && AuthContext->IsLoggedIn())
	{
		typedef RallyHereAPI::Traits_UpdatePlayerPresenceSelf BaseType;
		BaseType::Request Request;
		Request.AuthContext = AuthContext;
		Request.PlayerPresenceUpdateSelf.SetStatus(DesiredStatus);
		BaseType::DoCall(RH_APIs::GetPresenceAPI(), Request,
			RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
				{
					if (Poller.IsValid())
					{
						Poller->DeferPollTimer();
					}
				})
		);
	}
}

void URH_LocalPlayerPresenceSubsystem::PollRefreshStatus(const FRH_PollCompleteFunc& Delegate)
{
	auto AuthContext = GetAuthContext();
	if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
	{
		Delegate.ExecuteIfBound(false, true);
		return;
	}

	typedef RallyHereAPI::Traits_UpdatePlayerPresenceSelf BaseType;
	BaseType::Request Request;
	Request.AuthContext = AuthContext;
	Request.PlayerPresenceUpdateSelf.SetStatus(DesiredStatus);
	BaseType::DoCall(RH_APIs::GetPresenceAPI(), Request,
		RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf::CreateWeakLambda(this, [this, Delegate](const BaseType::Response& Resp)
		{
			Delegate.ExecuteIfBound(Resp.IsSuccessful(), true);
		})
	);
}

void URH_LocalPlayerPresenceSubsystem::OnUserChanged()
{
	Super::OnUserChanged();
	InitPropertiesWithDefaultValues();
}

void URH_LocalPlayerPresenceSubsystem::InitPropertiesWithDefaultValues()
{
	SetDesiredStatus(ERHAPI_OnlineStatus::Online);
}

void URH_LocalPlayerPresenceSubsystem::GetSettings(RallyHereAPI::FRequest_GetPresenceSettings& Request, const RallyHereAPI::FDelegate_GetPresenceSettings& Delegate)
{
	typedef RallyHereAPI::Traits_GetPresenceSettings BaseType;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(Delegate);

	Helper->Start(RH_APIs::GetPresenceAPI(), Request);
}