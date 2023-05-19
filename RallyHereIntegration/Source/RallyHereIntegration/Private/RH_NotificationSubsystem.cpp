#include "RH_NotificationSubsystem.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereAPI/Public/NotificationCreate.h"
#include "RallyHereIntegrationModule.h"
#include "RH_NotificationHelpers.h"

void URH_NotificationSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();
	StreamingHistorySize = 50;

	PollingType = FRH_NotificationPollingTypes::LongPoll;
}

void URH_NotificationSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
}

void URH_NotificationSubsystem::OnUserChanged()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	auto AuthContext = GetAuthContext();
	if (AuthContext.IsValid() && AuthContext->IsLoggedIn())
	{
		// start streaming notifications for this context
		StartStreamingLatestNotifications(AuthContext->GetLoginResult()->GetActivePlayerUuid());
	}
	else
	{
		// stop streaming and clear out history as we may not be able to conveniently resume from here
		StopStreamingLatestNotifications();
		ClearStreamingHistory();
		StreamingCursor = TEXT("");
	}
}

void URH_NotificationSubsystem::StartStreamingLatestNotifications(const FGuid& PlayerUuid, const FString& Cursor)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (bIsStreaming)
	{
		StopStreamingLatestNotifications();
	}

	StreamingCursor = Cursor;
	StreamingPlayerUuid = PlayerUuid;

	bIsStreaming = true;

	if (PollingType == FRH_NotificationPollingTypes::LongPoll)
	{
		StartLongPoll();
	}
}

void URH_NotificationSubsystem::StartLongPoll()
{
	LongPollHelper = MakeShared<FRH_NotificationStreamingLongPollHelper>(GetAuthContext(), StreamingPlayerUuid, StreamingCursor,
		FRH_OnNotificationsStreamedHelperDelegate::CreateUObject(
			this,
			&URH_NotificationSubsystem::
			OnNotificationsStreamed));

	LongPollHelper->Start();
}

void URH_NotificationSubsystem::StopStreamingLatestNotifications()
{
	if (LongPollHelper.IsValid())
	{
		LongPollHelper->Cancel(TEXT("Stop notification streaming requested"));
		LongPollHelper.Reset();
	}

	bIsStreaming = false;
}

bool URH_NotificationSubsystem::CreateNotification(const FGuid& PlayerUuid,
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
	createInfo.CustomData = CustomData;
	TArray<FRHAPI_NotificationCreate> creates;
	creates.Add(createInfo);
	Request.NotificationCreates.SetNotifications(creates);

	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	const auto HttpPtr = FTraits::DoCall(RH_APIs::GetAPIs().GetPlayerNotification(), Request,
	                                     FTraits::Delegate::CreateUObject(
		                                     this, &URH_NotificationSubsystem::OnNotificationCreated, Delegate));
	return HttpPtr != nullptr;
}

void URH_NotificationSubsystem::OnNotificationsStreamed(bool bSuccess, const FString& CursorAfter, float RequestDuration, const FRHAPI_Notifications& NotificationsWrapper)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	//TODO - compact notifications to remove duplicates

	if (bSuccess && NotificationsWrapper.Notifications_IsSet)
	{
		const auto& Notifications = NotificationsWrapper.GetNotifications();

		// if tracking history, add new notifications to history before dispatch, in case dispatch wants to inspect the history
		if (StreamingHistorySize > 0)
		{
			// add to history
			StreamingHistory.Append(Notifications);
			TrimStreamingHistory();
		}

		const FString BaseURL = FRallyHereIntegrationModule::Get().GetBaseURL();

		//dispatch notifications
		for (const auto& Notification : Notifications)
		{
			FString APIName;
			TArray<FString> APIParams;
			// parse out the API name
			FString URL;
			if (Notification.GetRhUrl(URL))
			{
				RH_BreakApartURL(URL, BaseURL, APIName, APIParams);
			}

			// invoke generate delegates
			OnNotificationStreamedDynamic.Broadcast(Notification, APIName, APIParams);
			OnNotificationStreamed.Broadcast(Notification, APIName, APIParams);

			if (APIName.Len() > 0)
			{
				if (OnNotificationStreamedByAPI.Contains(APIName))
				{
					OnNotificationStreamedByAPI[APIName].Broadcast(Notification, APIName, APIParams);
				}
			}
		}

		StreamingCursor = CursorAfter;
	}

	// TODO - make timer, make this new kickoff more robust
	// make sure streaming is still enabled before kicking off the next request
	if (bIsStreaming)
	{
		StartLongPoll();
	}
}

void URH_NotificationSubsystem::OnNotificationCreated(const RallyHereAPI::FResponse_PlayerCreateNotification& Resp,
                                                      const FRH_OnSingularNotificationIDDelegateBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Delegate.ExecuteIfBound(Resp.IsSuccessful(), Resp.Content.NotificationId, Resp);
}
