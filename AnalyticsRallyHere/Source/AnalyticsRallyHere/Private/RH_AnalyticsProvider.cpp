// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_AnalyticsProvider.h"

#include "Misc/CommandLine.h"
#include "Stats/Stats.h"
#include "Misc/App.h"
#include "Misc/TimeGuard.h"

#include "Policies/CondensedJsonPrintPolicy.h"
#include "Serialization/JsonWriter.h"
#include "Misc/EngineVersion.h"
#include "Misc/CoreDelegates.h"
#include "HAL/IConsoleManager.h"

#include "RallyHereIntegrationModule.h"
#include "RH_IntegrationSettings.h"
#include "RallyHereAPIHttpRequester.h"
#include "EventsAPI.h"

namespace RH_AnalyticsProviderCvars
{
	static bool PreventMultipleFlushesInOneFrame = true;
	FAutoConsoleVariableRef CvarPreventMultipleFlushesInOneFrame(
		TEXT("AnalyticsRallyHere.PreventMultipleFlushesInOneFrame"),
		PreventMultipleFlushesInOneFrame,
		TEXT("When true, prevents more than one RH_AnalyticsProvider instance from flushing in the same frame, allowing the flush and HTTP cost to be amortized.")
	);
}

TSharedPtr<IAnalyticsProvider> FRH_Analytics::CreateAnalyticsProvider(const FAnalyticsET::Config& ConfigValues) const
{
	// custom deleter that runs shutdown to remove callback bindings, then deletes the provider.
	auto Deleter = [](FRH_AnalyticsProvider* ProviderToDelete)
		{
			ProviderToDelete->Shutdown();
			delete ProviderToDelete;
		};

	TSharedRef<FRH_AnalyticsProvider> Provider = MakeShareable(new FRH_AnalyticsProvider(ConfigValues), MoveTemp(Deleter));
	Provider->Init();
	return Provider;
}

/**
 * Perform any initialization.
 */
FRH_AnalyticsProvider::FRH_AnalyticsProvider(const FAnalyticsET::Config& ConfigValues)
	: bSessionInProgress(false)
	, Config(ConfigValues)
	, FlushIntervalSec(ConfigValues.FlushIntervalSec < 0 ? DefaultFlushIntervalSec : ConfigValues.FlushIntervalSec)
	, bShouldCacheEvents(true)
	, NextEventFlushTime(FPlatformTime::Seconds() + FlushIntervalSec)
	, bShuttingDown(false)
	// avoid preallocating space if we are using the legacy protocol.
	, EventCache(ConfigValues.MaximumPayloadSize, ConfigValues.PreallocatedPayloadSize)
{
}

void FRH_AnalyticsProvider::Init()
{
	UE_LOG(LogAnalyticsRallyHere, Verbose, TEXT("Initializing RallyHere Analytics provider"));

	FCoreDelegates::OnEnginePreExit.AddSP(this, &FRH_AnalyticsProvider::OnEngineExit);
}

void FRH_AnalyticsProvider::Shutdown()
{
	UE_LOG(LogAnalyticsRallyHere, Verbose, TEXT("Destroying RallyHere Analytics provider"));

	FCoreDelegates::OnEnginePreExit.RemoveAll(this);

	bShuttingDown = true;

	EndSession();
}

FRH_AnalyticsProvider::~FRH_AnalyticsProvider()
{
}

bool FRH_AnalyticsProvider::Tick(float DeltaSeconds)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FRH_AnalyticsProvider_Tick);

	// hold a lock the entire time here because we're making several calls to the event cache that we need to be consistent when we decide to flush.
	// With more care, we can likely avoid holding this lock the entire time.
	FRH_AnalyticsProviderEventCache::Lock EventCacheLock(EventCache);

	// Countdown to flush
	const double Now = FPlatformTime::Seconds();

	// Never tick-flush more than one provider in a single frame. There's non-trivial overhead to flushing events.
	// On servers where there may be dozens of provider instances, this will spread out the cost a bit.
	// If caching is disabled, we still want events to be flushed immediately, so we are only guarding the flush calls from tick,
	// any other calls to flush are allowed to happen in the same frame.
	static uint32 LastFrameCounterFlushed = 0;

	const bool bHadFlushesQueued = EventCache.HasFlushesQueued();
	const bool bShouldFlush = bHadFlushesQueued || (EventCache.CanFlush() && Now >= NextEventFlushTime);

	if (bShouldFlush)
	{
		if (GFrameCounter == LastFrameCounterFlushed && RH_AnalyticsProviderCvars::PreventMultipleFlushesInOneFrame)
		{
			UE_LOG(LogAnalyticsRallyHere, Verbose, TEXT("Tried to flush, but another analytics provider has already flushed this frame. Deferring until next frame."));
		}
		else
		{
			// Just flush one payload, even if we may have more than one queued.
			FlushEventsOnce();
			LastFrameCounterFlushed = GFrameCounter;
			// If we aren't flushing up a previous queued payload, then this was a regular interval flush, so we need to reset the timer.
			// try to keep on the same cadence when flushing, since we could miss our window by several frames.
			if (!bHadFlushesQueued && Now >= NextEventFlushTime)
			{
				const float Multiplier = (int)((Now - NextEventFlushTime) / FlushIntervalSec) + 1.f;
				NextEventFlushTime += Multiplier * FlushIntervalSec;
			}
		}
	}
	return true;
}

bool FRH_AnalyticsProvider::StartSession(FString InSessionID, const TArray<FAnalyticsEventAttribute>& Attributes)
{
	UE_LOG(LogAnalyticsRallyHere, Log, TEXT("AnalyticsRallyHere::StartSession"));

	// end/flush previous session before staring new one
	if (bSessionInProgress)
	{
		EndSession();
	}

	// enforce guid formatting for session ids
	if (InSessionID.IsEmpty())
	{
		InSessionID = FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens);
		UE_LOG(LogAnalyticsRallyHere, Log, TEXT("AnalyticsRallyHere::StartSession - SessionID is empty, creating as %s"), *InSessionID);
	}
	else
	{
		UE_LOG(LogAnalyticsRallyHere, Log, TEXT("AnalyticsRallyHere::StartSession - SessionID %s is not empty"), *InSessionID);
	}

	SetSessionID(InSessionID);

	bSessionInProgress = true;
	return bSessionInProgress;
}

/**
 * End capturing stats and queue the upload
 */
void FRH_AnalyticsProvider::EndSession()
{
	// only attempt to flush events if a session was in progress
	if (bSessionInProgress)
	{
		FlushEvents();
	}

	// ensure cache is flushed of all old events
	while (EventCache.CanFlush())
	{
		EventCache.FlushCache();
	}

	// clear out the old session id
	SetSessionID(FString());

	bSessionInProgress = false;
}

void FRH_AnalyticsProvider::OnEngineExit()
{
	EndSession();

	// flush requests to ensure we do not have any pending requests, as there will not be another tick to flush them.
	auto HttpRequester = RallyHereAPI::FRallyHereAPIHttpRequester::Get();
	if (HttpRequester != nullptr)
	{
		HttpRequester->FlushRequestQueue();
	}
}

void FRH_AnalyticsProvider::FlushEvents()
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FRH_AnalyticsProvider_FlushEvents);
	// Warn if this takes more than 2 ms
	SCOPE_TIME_GUARD_MS(TEXT("FRH_AnalyticsProvider::FlushEvents"), 2);

	// keep flushing until the event cache has cleared its queue.
	while (EventCache.CanFlush())
	{
		FlushEventsOnce();
	}
}

typedef RallyHereAPI::Traits_ReceiveEventsV1 BaseReceiveEventsType;
struct FReceiveEventWrapperType : public BaseReceiveEventsType::Request
{
	FReceiveEventWrapperType(TArray<uint8> InPayload)
		: Payload(MoveTemp(InPayload))
	{
	}

	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override
	{
		bool bSuccess = BaseReceiveEventsType::Request::SetupHttpRequest(HttpRequest);
		if (bSuccess)
		{
			// substitute the payload with the one we want to send.
			HttpRequest->SetContent(MoveTemp(Payload));
		}
		return bSuccess;
	}

	mutable TArray<uint8> Payload;
};

void FRH_AnalyticsProvider::FlushEventsOnce()
{
	// Make sure we don't try to flush too many times. When we are not caching events it's possible this can be called when there are no events in the array.
	if (!EventCache.CanFlush())
	{
		return;
	}

	// Flush cached events, even if we are not going to be able to send, to ensure that looped calls to this function eventually clear the cache.
	FReceiveEventWrapperType Request(EventCache.FlushCache());

	if(ensure(FModuleManager::Get().IsModuleLoaded("RallyHereIntegration")))
	{
		// grab event API, then compute the endpoint from a test event
		auto EventsAPI = RH_APIs::GetEventsAPI();

		// this manually emits the event for efficiency using a binary send, rather than using the API version which does extra copies
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_FlushEventsHttpRequest);

			// Create/send Http request for an event
			EventsAPI->ReceiveEventsV1(Request, 
				!bShuttingDown ? BaseReceiveEventsType::Delegate::CreateSP(this, &FRH_AnalyticsProvider::EventRequestComplete) : BaseReceiveEventsType::Delegate(),
				GetDefault<URH_IntegrationSettings>()->EventsReceiveEventPriority);
		}
	}
}

void FRH_AnalyticsProvider::SetUserID(const FString& InUserID)
{
	if (UserID == InUserID)
	{
		UE_LOG(LogAnalyticsRallyHere, Log, TEXT("SetUserId %s already has that user id"), *InUserID);
		return;
	}

	UE_LOG(LogAnalyticsRallyHere, Log, TEXT("SetUserId %s"), *InUserID);
	
	UserID = InUserID;

	if (UserID.Len() > 0)
	{
		EventCache.SetUserId(UserID);
	}
	else
	{
		EventCache.SetUserId(TOptional<FString>());
	}
}

FString FRH_AnalyticsProvider::GetUserID() const
{
	return UserID;
}

FString FRH_AnalyticsProvider::GetSessionID() const
{
	return SessionID;
}

bool FRH_AnalyticsProvider::SetSessionID(const FString& InSessionID)
{
	if (SessionID != InSessionID)
	{
		// set session id locally
		SessionID = InSessionID;

		// add session ID to event cache as correlation id (or clear it if it's empty)
		if (SessionID.Len() > 0)
		{
			EventCache.SetCorrelationId(SessionID);
		}
		else
		{
			EventCache.SetCorrelationId(TOptional<FString>());
		}
		
		UE_LOG(LogAnalyticsRallyHere, Log, TEXT("Setting SessionID to %s."), *SessionID);
	}
	return true;
}

void FRH_AnalyticsProvider::SetShouldRecordEventFunc(const ShouldRecordEventFunction& InShouldRecordEventFunc)
{
	ShouldRecordEventFunc = InShouldRecordEventFunc;
}

bool FRH_AnalyticsProvider::ShouldRecordEvent(const FString& EventName) const
{
	return (!ShouldRecordEventFunc || ShouldRecordEventFunc(*this, EventName));
}

void FRH_AnalyticsProvider::RecordEvent(FString&& EventName, const TArray<FAnalyticsEventAttribute>& Attributes)
{
	// let higher level code filter the decision of whether to send the event
	if (ShouldRecordEvent(EventName))
	{
		// fire any callbacks
		for (const auto& Cb : EventRecordedCallbacks)
		{
			// we no longer track if the event was Json, each attribute does.
			Cb(EventName, Attributes, false);
		}

		EventCache.AddToCache(EventName, Attributes);
		// if we aren't caching events, flush immediately. This is really only for debugging as it will significantly affect bandwidth.
		if (!bShouldCacheEvents)
		{
			FlushEvents();
		}
	}
	else
	{
		UE_LOG(LogAnalyticsRallyHere, Verbose, TEXT("Ignoring event named '%s' due to ShouldRecordEvent check"), *EventName);
	}
}

void FRH_AnalyticsProvider::SetDefaultEventAttributes(TArray<FAnalyticsEventAttribute>&& Attributes)
{
	EventCache.SetDefaultAttributes(MoveTemp(Attributes));
}

TArray<FAnalyticsEventAttribute> FRH_AnalyticsProvider::GetDefaultEventAttributesSafe() const
{
	return EventCache.GetDefaultAttributes();
}

int32 FRH_AnalyticsProvider::GetDefaultEventAttributeCount() const
{
	return EventCache.GetDefaultAttributeCount();
}


FAnalyticsEventAttribute FRH_AnalyticsProvider::GetDefaultEventAttribute(int AttributeIndex) const
{
	return EventCache.GetDefaultAttribute(AttributeIndex);
}

bool FRH_AnalyticsProvider::AppendSetDefaultEventAttribute(const FString& AttributeName, const FString& AttributeValue)
{
	return EventCache.AppendSetDefaultAttribute(AttributeName, AttributeValue);
}

bool FRH_AnalyticsProvider::ClearDefaultEventAttribute(const FString& AttributeName)
{
	return EventCache.ClearDefaultAttribute(AttributeName);
}

void FRH_AnalyticsProvider::SetURLEndpoint(const FString& UrlEndpoint, const TArray<FString>& AltDomains)
{
	// note - this endpoint is ignored, because we are using the RallyHereIntegration module to get the endpoint.
}

void FRH_AnalyticsProvider::SetEventCallback(const OnEventRecorded& Callback)
{
	EventRecordedCallbacks.Add(Callback);
}

void FRH_AnalyticsProvider::EventRequestComplete(const RallyHereAPI::FResponse_ReceiveEventsV1& Response)
{
	// process responses
	FRH_ErrorInfo ErrorInfo(Response);
	UE_LOG(LogAnalyticsRallyHere, VeryVerbose, TEXT("GETS response: Code: %d. Payload: %s"), ErrorInfo.ResponseCode, *ErrorInfo.ResponseContent);
}

void FRH_AnalyticsProvider::BlockUntilFlushed(float InTimeoutSec)
{
	FlushEvents();
}

