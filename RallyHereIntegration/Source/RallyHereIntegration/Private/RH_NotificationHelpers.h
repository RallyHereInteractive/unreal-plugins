// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "RH_Common.h"
#include "Notifications.h"
#include "NotificationAPI.h"
#include "RallyHereIntegrationModule.h"
#include "RH_PlayerNotifications.h"
#include "Tickable.h"
#include "HttpModule.h"

class FRH_NotificationStreamingLongPollHelper : public FRH_AsyncTaskHelper
{
	typedef RallyHereAPI::Traits_PlayerLongPollForNotifications LongPollTraits;
	typedef RallyHereAPI::Traits_PlayerLongPollForNotificationsSelf LongPollTraitsSelf;

public:
	FRH_NotificationStreamingLongPollHelper(FAuthContextPtr InAuthContext, const FGuid& InPlayerUuid, const FString& Cursor,
		const FRH_OnNotificationsStreamedHelperDelegate& InDelegate)
		: AuthContext(InAuthContext)
		, PlayerUuid(InPlayerUuid)
		, Cursor(Cursor)
		, NotificationsResult()
		, Delegate(InDelegate)
		, bCancelled(false)
		, HttpRequest(nullptr)
	{
	}

	virtual void Start()
	{
		Started();

		if (!AuthContext.IsValid())
		{
			Failed(TEXT("No AuthContext provided"));
			return;
		}

		if (!Delegate.IsBound())
		{
			// this helper is meaningless without being bound to a delegate
			Failed(TEXT("No object bound to delegate"));
			return;
		}

		BeginLongPoll();
	}

	virtual void Cancel(const FString& CancelReason)
	{
		// shut down the request
		if (HttpRequest != nullptr)
		{
			HttpRequest->CancelRequest();
			HttpRequest = nullptr;
		}

		FRH_AsyncTaskHelper::Cancel(CancelReason);
	}

protected:
	void BeginLongPoll()
	{
		check(HttpRequest == nullptr);

		// this request runs long with no activity, by default 30 seconds, so set the activity timeout to be higher so it does not get cancelled.
		auto ModifyTimeoutLambda = [](const RallyHereAPI::FRequest& InRHRequest, FHttpRequestRef InHttpRequest)
		{
#if RH_FROM_ENGINE_VERSION(5,4)
			InHttpRequest->SetActivityTimeout(60.f);
#endif
		};

		// the above does not seem to be entirely reliable for some reason, so also set a deadline manually to 25 seconds
		int32 Deadline = 25;

		if (PlayerUuid.IsValid())
		{
			auto Request = LongPollTraits::Request();
			Request.AuthContext = AuthContext;
			Request.ExcludeBefore = Cursor;
			Request.OffsetResetStrategy = ERHAPI_OffsetReset::Latest;
			Request.PlayerUuid = PlayerUuid;
			Request.Deadline = Deadline;

			Request.OnModifyRequest().AddLambda(ModifyTimeoutLambda);

			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
			HttpRequest = LongPollTraits::DoCall(RH_APIs::GetNotificationAPI(), Request,
				LongPollTraits::Delegate::CreateSP(this, &FRH_NotificationStreamingLongPollHelper::LongPollComplete),
				GetDefault<URH_IntegrationSettings>()->NotificationPollSelfPriority);
		}
		else
		{
			auto Request = LongPollTraitsSelf::Request();
			Request.AuthContext = AuthContext;
			Request.ExcludeBefore = Cursor;
			Request.OffsetResetStrategy = ERHAPI_OffsetReset::Latest;
			Request.Deadline = Deadline;

			Request.OnModifyRequest().AddLambda(ModifyTimeoutLambda);
			
			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
			HttpRequest = LongPollTraitsSelf::DoCall(RH_APIs::GetNotificationAPI(), Request,
				LongPollTraitsSelf::Delegate::CreateSP(this, &FRH_NotificationStreamingLongPollHelper::LongPollCompleteSelf),
				GetDefault<URH_IntegrationSettings>()->NotificationPollOtherPriority);
		}

		if (!HttpRequest)
		{
			Failed(TEXT("Failed to make notification streaming long poll request"));
		}
	}

	void LongPollComplete(const LongPollTraits::Response& Resp)
	{
		LongPollCompleteCommon(Resp);
	}

	void LongPollCompleteSelf(const LongPollTraitsSelf::Response& Resp)
	{
		LongPollCompleteCommon(Resp);
	}

	template<typename ResponseType>
	void LongPollCompleteCommon(const ResponseType& Resp)
	{
		// if we were cancelled, don't do anything
		if (bCancelled)
		{
			return;
		}

		RequestDuration = HttpRequest->GetElapsedTime();

		HttpRequest = nullptr;

		if (Resp.IsSuccessful() && Resp.TryGetDefaultContent(NotificationsResult))
		{
			Completed(true);
		}
		else
		{
			Failed(TEXT("Long poll failed"));
		}
	}

	virtual FString GetName() const override
	{
		static const FString Name(TEXT("FRH_NotificationStreamingLongPollHelper"));
		return Name;
	}

	virtual void ExecuteCallback(bool bSuccess) const override
	{
		const auto* NotificationList = NotificationsResult.GetNotificationsOrNull();
		FString NewCursor = Cursor; // default to the old cursor, in the case this notification was empty
		if (NotificationList != nullptr && NotificationList->Num() > 0)
		{
			NewCursor = NotificationList->Last().GetNotificationId();
		}

		Delegate.ExecuteIfBound(bSuccess, NewCursor, RequestDuration, NotificationsResult);
	}

	FAuthContextPtr AuthContext;
	FGuid PlayerUuid;
	FString Cursor;
	FRHAPI_Notifications NotificationsResult;
	float RequestDuration;

	FRH_OnNotificationsStreamedHelperDelegate Delegate;

	bool bCancelled;

	FHttpRequestPtr HttpRequest;
};
