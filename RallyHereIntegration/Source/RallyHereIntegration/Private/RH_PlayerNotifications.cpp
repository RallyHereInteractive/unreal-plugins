// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_PlayerNotifications.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "NotificationCreate.h"
#include "RallyHereIntegrationModule.h"
#include "RH_NotificationHelpers.h"
#include "RH_PlayerInfoSubsystem.h"

#include "RH_GameInstanceSubsystem.h"
#include "Engine/World.h"
#include "TimerManager.h"

void URH_PlayerNotifications::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	StreamingHistorySize = 50;

	PollingType = FRH_NotificationPollingTypes::LongPoll;

	NextLongPollDelay = 0.f;
	MaxLongPollDelay = 30.f;
}

FAuthContextPtr URH_PlayerNotifications::GetAuthContext() const
{
	if (const URH_PlayerInfoSubsystem* PSS = GetPlayerInfo()->GetPlayerInfoSubsystem())
	{
		return PSS->GetAuthContext();
	}
	return nullptr;
}

FGuid URH_PlayerNotifications::GetRHPlayerUuid() const
{
	return PlayerInfo ? PlayerInfo->GetRHPlayerUuid() : FGuid();
}

void URH_PlayerNotifications::StartStreamingLatestNotifications(const FString& Cursor)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (bIsStreaming)
	{
		StopStreamingLatestNotifications();
	}

	StreamingCursor = Cursor;
	StreamingPlayerUuid = GetRHPlayerUuid();

	// reset the delay on long polls
	NextLongPollDelay = 0.f;

	bIsStreaming = true;

	if (PollingType == FRH_NotificationPollingTypes::LongPoll)
	{
		RestartLongPollLoop();
	}
}

void URH_PlayerNotifications::RestartLongPollLoop(bool bPreviousPollSuccessful)
{
	if (bPreviousPollSuccessful)
	{
		// clear poll delay and restart immediately if previous poll was successful
		NextLongPollDelay = 0.f;
		StartLongPoll();
	}
	else
	{
		// increment delay and restart on a timer (2 second base increase, capped at max time)
		NextLongPollDelay = FMath::Min(2.f + NextLongPollDelay * 2.f, MaxLongPollDelay);
		if (PlayerInfo != nullptr)
		{
			auto GISS = PlayerInfo->GetPlayerInfoSubsystem()->GetGameInstanceSubsystem();
			if (GISS != nullptr)
			{
				auto pWorld = GISS->GetWorld();

				if (pWorld != nullptr)
				{
					pWorld->GetTimerManager().SetTimer(LongPollDeferralHandle, this, &URH_PlayerNotifications::StartLongPoll, NextLongPollDelay, false);
				}
			}
		}

		// if we failed to set a deferal timer on a failure, stop streaming
		if (!LongPollDeferralHandle.IsValid())
		{
			StopStreamingLatestNotifications();
		}
	}
}

void URH_PlayerNotifications::StartLongPoll()
{
	LongPollHelper = MakeShared<FRH_NotificationStreamingLongPollHelper>(GetAuthContext(), StreamingPlayerUuid, StreamingCursor,
		FRH_OnNotificationsStreamedHelperDelegate::CreateUObject(
			this,
			&URH_PlayerNotifications::
			OnNotificationsStreamed));

	LongPollHelper->Start();
}

void URH_PlayerNotifications::StopStreamingLatestNotifications(bool bClearCache)
{
	bIsStreaming = false;

	if (LongPollHelper.IsValid())
	{
		LongPollHelper->Cancel(TEXT("Stop notification streaming requested"));
		LongPollHelper.Reset();
	}

	ClearStreamingHistory();
	StreamingCursor = TEXT("");
	StreamingPlayerUuid.Invalidate();

	// clear timer handle if it's still active
	if (LongPollDeferralHandle.IsValid())
	{
		if (PlayerInfo != nullptr)
		{
			auto GISS = PlayerInfo->GetPlayerInfoSubsystem()->GetGameInstanceSubsystem();
			if (GISS != nullptr)
			{
				auto pWorld = GISS->GetWorld();

				pWorld->GetTimerManager().ClearTimer(LongPollDeferralHandle);
			}
		}

		LongPollDeferralHandle.Invalidate();
	}
}

bool URH_PlayerNotifications::CreateNotification(const FGuid& PlayerUuid,
                                                   const FString& Message,
                                                   const FString& RhUrl,
                                                   const TMap<FString, FString>& CustomData,
                                                   const FRH_OnSingularNotificationIDDelegateBlock& Delegate)
{
	using FTraits = RallyHereAPI::Traits_PlayerCreateNotification;
	auto Request = FTraits::Request();
	Request.AuthContext = GetAuthContext();
	Request.PlayerUuid = PlayerUuid;
	FRHAPI_NotificationCreate createInfo;
	createInfo.Message = Message;
	if (!RhUrl.IsEmpty())
	{
		createInfo.SetRhUrl(RhUrl);
	}
	createInfo.SetCustomData(CustomData);
	TArray<FRHAPI_NotificationCreate> creates;
	creates.Add(createInfo);
	Request.NotificationCreates.SetNotifications(creates);

	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	const auto HttpPtr = FTraits::DoCall(RH_APIs::GetNotificationAPI(), Request,
	                                     FTraits::Delegate::CreateUObject(
		                                     this, &URH_PlayerNotifications::OnNotificationCreated, Delegate),
											 GetDefault<URH_IntegrationSettings>()->NotificationCreatePriority);
	return HttpPtr != nullptr;
}

void URH_PlayerNotifications::OnNotificationsStreamed(bool bSuccess, const FString& CursorAfter, float RequestDuration, const FRHAPI_Notifications& NotificationsWrapper)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	//TODO - compact notifications to remove duplicates

	if (!bIsStreaming)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("Notification stream received when streaming is disabled"));
		return;
	}

	const auto Notifications = NotificationsWrapper.GetNotificationsOrNull();
	if (bSuccess && Notifications)
	{
		// if tracking history, add new notifications to history before dispatch, in case dispatch wants to inspect the history
		if (StreamingHistorySize > 0)
		{
			// add to history
			StreamingHistory.Append(*Notifications);
			TrimStreamingHistory();
		}

		const FString BaseURL = FRallyHereIntegrationModule::Get().GetBaseURL();

		//dispatch notifications
		for (const auto& Notification : *Notifications)
		{
			FString APIName;
			TArray<FString> APIParams;
			// parse out the API name
			FString URL;
			if (Notification.GetRhUrl(URL))
			{
				RH_BreakApartURL(URL, BaseURL, APIName, APIParams);
			}

			// invoke general delegates
			{
				SCOPED_NAMED_EVENT(RallyHere_BroadcastNotificationsStreamed, FColor::Purple);
				OnNotificationStreamedDynamic.Broadcast(Notification, APIName, APIParams);
				OnNotificationStreamed.Broadcast(Notification, APIName, APIParams);
			}

			if (APIName.Len() > 0)
			{
				if (OnNotificationStreamedByAPI.Contains(APIName))
				{
					SCOPED_NAMED_EVENT(RallyHere_BroadcastNotificationsStreamedByAPI, FColor::Purple);
					OnNotificationStreamedByAPI[APIName].Broadcast(Notification, APIName, APIParams);
				}
			}
		}

		StreamingCursor = CursorAfter;
	}

	// if notifications are still enabled, restart polling loop
	if (bIsStreaming)
	{
		RestartLongPollLoop(bSuccess);
	}
}

void URH_PlayerNotifications::OnNotificationCreated(const RallyHereAPI::FResponse_PlayerCreateNotification& Resp,
                                                      const FRH_OnSingularNotificationIDDelegateBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	FString NotificationId = Content ? Content->NotificationId : TEXT("");
	Delegate.ExecuteIfBound(Resp.IsSuccessful(), NotificationId, Resp);
}
