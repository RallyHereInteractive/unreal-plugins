#pragma once

#include "CoreMinimal.h"
#include "RH_Common.h"
#include "RallyHereAPI/Public/Notifications.h"
#include "RallyHereAPI/Public/PlayerNotificationAPI.h"
#include "RallyHereIntegrationModule.h"
#include "RH_PlayerNotifications.h"
#include "Tickable.h"
#include "HttpModule.h"
#include "../Public/RH_PlayerNotifications.h"

class FRH_NotificationStreamingLongPollHelper : public FRH_AsyncTaskHelper
{
	typedef RallyHereAPI::Traits_PlayerLongPollForNotifications LongPollTraits;
	typedef RallyHereAPI::Traits_PlayerLongPollForNotificationsSelf LongPollTraitsSelf;

public:
	FRH_NotificationStreamingLongPollHelper(FAuthContextPtr InAuthContext, const FGuid& InPlayerUuid, const FString& Cursor,
		const FRH_OnNotificationsStreamedHelperDelegate& InDelegate)
		: AuthContext(InAuthContext)
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

		if (PlayerUuid.IsValid())
		{
			auto Request = LongPollTraits::Request();
			Request.AuthContext = AuthContext;
			Request.ExcludeBefore = Cursor;
			Request.OffsetResetStrategy = ERHAPI_OffsetReset::Latest;
			Request.PlayerUuid = PlayerUuid;

			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
			HttpRequest = LongPollTraits::DoCall(RH_APIs::GetAPIs().GetPlayerNotification(), Request,
				LongPollTraits::Delegate::CreateSP(this, &FRH_NotificationStreamingLongPollHelper::LongPollComplete),
				GetDefault<URH_IntegrationSettings>()->NotificationPollSelfPriority);
		}
		else
		{
			auto Request = LongPollTraitsSelf::Request();
			Request.AuthContext = AuthContext;
			Request.ExcludeBefore = Cursor;
			Request.OffsetResetStrategy = ERHAPI_OffsetReset::Latest;

			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
			HttpRequest = LongPollTraitsSelf::DoCall(RH_APIs::GetAPIs().GetPlayerNotification(), Request,
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

		if (Resp.IsSuccessful())
		{
			NotificationsResult = Resp.Content;
			Completed(true);
		}
		else
		{
			Failed(TEXT("Long poll failed"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_NotificationStreamingLongPollHelper"));
		return Name;
	}

	virtual void ExecuteCallback(bool bSuccess) const override
	{
		const auto* NotificationList = NotificationsResult.GetNotificationsOrNull();
		FString NewCursor;
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
