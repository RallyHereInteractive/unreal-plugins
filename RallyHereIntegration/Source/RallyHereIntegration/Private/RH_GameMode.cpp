// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "RH_GameMode.h"
#include "RH_Common.h"
#include "RH_GameInstanceBootstrappers.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "TimerManager.h"
#include "GameFramework/PlayerController.h"

ARH_GameMode::ARH_GameMode(const FObjectInitializer& ObjectInitializer /*= FObjectInitializer::Get()*/)
    : Super(ObjectInitializer)
{
	MatchSpindownDelay = 60;
	MatchEndReturnToLobbyDelay = 10;

	ShutdownOnEmptyDelay = 20 * 60; // 20 minutes
}

void ARH_GameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	// register for soft stop notifications
	RallyHere::TermSignalHandler::OnSoftStopRequstedGameThread.AddUObject(this, &ARH_GameMode::NotifySoftStopRequested);
}


void ARH_GameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	// if a new player has joined, stop the empty timer
	CheckMatchEmptyTimer();
}

void ARH_GameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	// if a player has left, check if we need to start the empty timer
	CheckMatchEmptyTimer();
}

void ARH_GameMode::HandleMatchIsWaitingToStart()
{
	Super::HandleMatchIsWaitingToStart();

	CheckMatchEmptyTimer();
}

void ARH_GameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	CheckMatchEmptyTimer();
}

void ARH_GameMode::HandleMatchHasEnded()
{
	// empty timer is cleared, even if it's not active
	CheckMatchEmptyTimer(true);
	
	Super::HandleMatchHasEnded();

	HandleCommonMatchEndFlow();
}

void ARH_GameMode::HandleMatchAborted()
{
	// empty timer is cleared, even if it's not active
	CheckMatchEmptyTimer(true);

	Super::HandleMatchAborted();

	HandleCommonMatchEndFlow();
}

void ARH_GameMode::HandleCommonMatchEndFlow()
{
	if (MatchEndReturnToLobbyDelay > 0.f)
	{
		// start timer for return to lobby
		GetWorldTimerManager().SetTimer(
			ReturnToLobbyTimer,
			this,
			&ARH_GameMode::AllPlayersReturnToLobby,
			MatchEndReturnToLobbyDelay);
	}
	else
	{
		AllPlayersReturnToLobby();
	}

	// mark session as NotJoinable to prevent new joins
	auto* GameInstance = GetGameInstance();
	if (GameInstance != nullptr)
	{
		auto* GISS = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		if (GISS != nullptr)
		{
			auto GISession = GISS->GetSessionSubsystem();
			if (GISession != nullptr && GISession->GetActiveSession() != nullptr)
			{ 
				auto* RHSession = GISession->GetActiveSession();

				FRHAPI_InstanceInfoUpdate InstanceInfo = RHSession->GetInstanceUpdateInfoDefaults();
				InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Unjoinable);
				RHSession->UpdateInstanceInfo(InstanceInfo);
			}
		}
	}
	
	
	// start timer for instance shutdown (network loop)
	if (MatchSpindownDelay > 0.f)
	{
		GetWorldTimerManager().SetTimer(
			ShutdownTimer,
			this,
			&ARH_GameMode::FinalizeMatchFlow,
			MatchSpindownDelay);
	}
	else
	{
		FinalizeMatchFlow();
	}
}


void ARH_GameMode::FinalizeMatchFlow()
{
	// make sure everyone is out
	AllPlayersReturnToLobby();

	GetWorldTimerManager().ClearTimer(ShutdownTimer);

	auto* GameInstance = GetGameInstance();
	if (GameInstance != nullptr)
	{
		auto* GISS = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		if (GISS != nullptr)
		{
			auto GISession = GISS->GetSessionSubsystem();
			if (GISession != nullptr && GISession->GetActiveSession() != nullptr)
			{
				auto* Session = GISession->GetActiveSession();

				// start leaving the instance, this should mark the instance as closed, which should start a recycle for a dedicated server
				GISession->SyncToSession(nullptr);
			}
		}
	}

	// start timer for instance shutdown fallback.  This is expected to NOT fire, as the above call should have started the instance shutdown process, and will unload the gamemode before this triggers
	GetWorldTimerManager().SetTimer(
		ShutdownTimer,
		this,
		&ARH_GameMode::FinalShutdown,
		5.0f);
}

// It's the fi-nal shut-down!
void ARH_GameMode::FinalShutdown()
{
	// if we have reached this point where the gamemode is still active, ending the instance either did not succeed quickly, or failed, in which case we need to use a backup routine
	if (IsRunningDedicatedServer())
	{
		// if running a dedicated server, shutdown.  This should go through normal instance shutdown-and-recycle logic.
		RequestEngineExit(TEXT("RHGamemode FinalShutdown"));
	}
	else
	{
		// for non dedicated servers, run the leave flow if we can
		bool bHandledViaLeaveFlow = false;
		auto* GameInstance = GetGameInstance();
		if (GameInstance != nullptr)
		{
			auto* GISS = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
			if (GISS != nullptr)
			{
				auto GISession = GISS->GetSessionSubsystem();
				if (GISession != nullptr && GISession->GetActiveSession() != nullptr)
				{
					GISession->SyncToSession(nullptr);
					bHandledViaLeaveFlow = true;
				}
			}
		}

		// if the leave flow could not be triggered, run the engine disconnect handler
		if (!bHandledViaLeaveFlow)
		{
			GEngine->HandleDisconnect(GetWorld(), GetWorld()->GetNetDriver());
		}
	}
}

void ARH_GameMode::AllPlayersReturnToLobby()
{
	GetWorldTimerManager().ClearTimer(ReturnToLobbyTimer);

	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PC = Iterator->Get();
		if (PC)
		{
			PC->ClientReturnToMainMenuWithTextReason(FText::AsCultureInvariant(TEXT("Game Has Ended")));
		}
	}
}

void ARH_GameMode::CheckMatchEmptyTimer(bool bForceStop)
{
	if (GetNumPlayers() == 0 && !bForceStop)
	{
		// if timer delay is set and is not active, activate it
		if (ShutdownOnEmptyDelay > 0 && !MatchEmptyTimerHandle.IsValid())
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("Starting match empty timer (Delay = %f seconds)"), ShutdownOnEmptyDelay);
			GetWorldTimerManager().SetTimer(MatchEmptyTimerHandle, this, &ARH_GameMode::MatchEmptyTimer, ShutdownOnEmptyDelay, false);
		}
	}
	else
	{
		// stop the timer if it is running
		if (MatchEmptyTimerHandle.IsValid())
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("Clearing match empty timer (bForceStop = %d)"), bForceStop ? 1 : 0);
			GetWorldTimerManager().ClearTimer(MatchEmptyTimerHandle);
			MatchEmptyTimerHandle.Invalidate();
		}
	}
}

void ARH_GameMode::MatchEmptyTimer()
{
	// if empty timer goes off, end the match
	UE_LOG(LogRallyHereIntegration, Warning, TEXT("MatchEmptyTimer triggered due to not enough players, ending match"));
	if (!HasMatchStarted())
	{
		// if the match hasn't started yet, abort it
		AbortMatch();
	}
	else if (!HasMatchEnded())
	{
		// if the match has started and not ended, end it
		EndMatch();
	}
	else
	{
		// match has already ended and should already have shutdown logic running
	}
}
