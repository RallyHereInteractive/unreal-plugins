// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "RH_AnalyticsProvider.h"

#include "Misc/CommandLine.h"
#include "Stats/Stats.h"
#include "Misc/App.h"
#include "Misc/TimeGuard.h"

#include "Policies/CondensedJsonPrintPolicy.h"
#include "Serialization/JsonWriter.h"
#include "Misc/EngineVersion.h"
#include "HAL/IConsoleManager.h"

namespace RH_AnalyticsProviderCvars
{
	static bool PreventMultipleFlushesInOneFrame = true;
	FAutoConsoleVariableRef CvarPreventMultipleFlushesInOneFrame(
		TEXT("AnalyticsRallyHere.PreventMultipleFlushesInOneFrame"),
		PreventMultipleFlushesInOneFrame,
		TEXT("When true, prevents more than one RH_AnalyticsProvider instance from flushing in the same frame, allowing the flush and HTTP cost to be amortized.")
	);
}

TSharedPtr<IAnalyticsProvider> FRH_Analytics::CreateAnalyticsProvider(const Config& ConfigValues) const
{
	// If we didn't have a proper APIServer, return NULL
	if (ConfigValues.APIServer.IsEmpty())
	{
		UE_LOG(LogAnalytics, Warning, TEXT("CreateAnalyticsProvider config not contain required parameter %s"), *Config::GetKeyNameForAPIServer());
		return NULL;
	}
	return MakeShared<FRH_AnalyticsProvider>(ConfigValues);
}

/**
 * Perform any initialization.
 */
FRH_AnalyticsProvider::FRH_AnalyticsProvider(const FRH_Analytics::Config& ConfigValues)
	: bSessionInProgress(false)
	, Config(ConfigValues)
	, FlushIntervalSec(ConfigValues.FlushIntervalSec < 0 ? DefaultFlushIntervalSec : ConfigValues.FlushIntervalSec)
	, bShouldCacheEvents(true)
	, NextEventFlushTime(FPlatformTime::Seconds() + FlushIntervalSec)
	, bInDestructor(false)
	// avoid preallocating space if we are using the legacy protocol.
	, EventCache(ConfigValues.MaximumPayloadSize, ConfigValues.PreallocatedPayloadSize)
{
	if (Config.APIServer.IsEmpty())
	{
		UE_LOG(LogAnalytics, Fatal, TEXT("AnalyticsRallyHere: APIServer (%s) cannot be empty!"), *Config.APIServer);
	}

	HttpRetryManager = MakeShared<FHttpRetrySystem::FManager>(
		FHttpRetrySystem::FRetryLimitCountSetting(Config.RetryLimitCount),
		FHttpRetrySystem::FRetryTimeoutRelativeSecondsSetting()
		);

	UE_LOG(LogAnalytics, Verbose, TEXT("[RHAnalytics] Initializing RallyHere Analytics provider"));

	UE_LOG(LogAnalytics, Display, TEXT("APIServer = %s"), *Config.APIServer);
}

bool FRH_AnalyticsProvider::Tick(float DeltaSeconds)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FRH_AnalyticsProvider_Tick);

	HttpRetryManager->Update();

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
			UE_LOG(LogAnalytics, Verbose, TEXT("[RHAnalytics] Tried to flush, but another analytics provider has already flushed this frame. Deferring until next frame."));
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

FRH_AnalyticsProvider::~FRH_AnalyticsProvider()
{
	UE_LOG(LogAnalytics, Verbose, TEXT("[RHAnalytics] Destroying RallyHere Analytics provider"));
	bInDestructor = true;
	EndSession();
}

bool FRH_AnalyticsProvider::StartSession(const TArray<FAnalyticsEventAttribute>& Attributes)
{
	UE_LOG(LogAnalytics, Log, TEXT("[RHAnalytics] AnalyticsRallyHere::StartSession"));

	// end/flush previous session before staring new one
	if (bSessionInProgress)
	{
		EndSession();
	}
	FGuid SessionGUID;
	FPlatformMisc::CreateGuid(SessionGUID);
	SessionID = SessionGUID.ToString(EGuidFormats::DigitsWithHyphens);

	// add session ID to attributes
	static FString SessionIdKey(TEXT("sessionID"));
	AppendSetDefaultEventAttribute(SessionIdKey, SessionID);

	// always ensure we send a few specific attributes on session start.
	TArray<FAnalyticsEventAttribute> AttributesWithPlatform = Attributes;
	AttributesWithPlatform.Emplace(TEXT("Platform"), FString(FPlatformProperties::IniPlatformName()));

	RecordEvent(TEXT("SessionStart"), AttributesWithPlatform);
	bSessionInProgress = true;
	return bSessionInProgress;
}

/**
 * End capturing stats and queue the upload
 */
void FRH_AnalyticsProvider::EndSession()
{
	if (bSessionInProgress)
	{
		RecordEvent(TEXT("SessionEnd"), TArray<FAnalyticsEventAttribute>());
	}
	FlushEvents();
	SessionID.Empty();

	static FString SessionIdKey(TEXT("sessionID"));
	ClearDefaultEventAttribute(SessionIdKey);

	bSessionInProgress = false;
}

TSharedRef<IHttpRequest, ESPMode::ThreadSafe> FRH_AnalyticsProvider::CreateRequest()
{
	// TODO add config values for retries, for now, using default
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = HttpRetryManager->CreateRequest(FHttpRetrySystem::FRetryLimitCountSetting(),
		FHttpRetrySystem::FRetryTimeoutRelativeSecondsSetting(),
		FHttpRetrySystem::FRetryResponseCodes(),
		FHttpRetrySystem::FRetryVerbs(),
		FHttpRetrySystem::FRetryDomainsPtr());

	return HttpRequest;
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

void FRH_AnalyticsProvider::FlushEventsOnce()
{
	// Make sure we don't try to flush too many times. When we are not caching events it's possible this can be called when there are no events in the array.
	if (!EventCache.CanFlush())
	{
		return;
	}

	if(ensure(FModuleManager::Get().IsModuleLoaded("HTTP")))
	{
		TArray<uint8> Payload = EventCache.FlushCache();

		// This should never be done in production. MUCH slower!
		if (UE_LOG_ACTIVE(LogAnalytics, VeryVerbose))
		{
			// need to null terminate to load the payload.
			Payload.Add(TEXT('\0'));
			// Recreate the URLPath for logging because we do not want to escape the parameters when logging.
			// We cannot simply UrlEncode the entire Path after logging it because UrlEncode(Params) != UrlEncode(Param1) & UrlEncode(Param2) ...
			FString LogString = FString::Printf(TEXT("[RHAnalytics] GETS request for [%s]. Payload:%s"),
				*Config.APIServer,
				UTF8_TO_TCHAR(Payload.GetData()));
			UE_LOG(LogAnalytics, VeryVerbose, TEXT("%s"), *LogString);
			Payload.SetNum(Payload.Num()-1);
		}

		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_FlushEventsHttpRequest);
			// Create/send Http request for an event
			TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = CreateRequest();
			HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
			HttpRequest->SetURL(Config.APIServer);
			HttpRequest->SetVerb(TEXT("POST"));
			HttpRequest->SetContent(MoveTemp(Payload));

			// Don't set a response callback if we are in our destructor, as the instance will no longer be there to call.
			if (!bInDestructor)
			{
				HttpRequest->OnProcessRequestComplete().BindSP(this, &FRH_AnalyticsProvider::EventRequestComplete);
			}

			HttpRequest->ProcessRequest();
		}
	}
}

void FRH_AnalyticsProvider::SetUserID(const FString& InUserID)
{
	if (UserID == InUserID)
	{
		UE_LOG(LogAnalytics, Log, TEXT("[RHAnalytics] SetUserId %s already has that user id"), *InUserID);
		return;
	}

	UE_LOG(LogAnalytics, Log, TEXT("[RHAnalytics] SetUserId %s"), *InUserID);
	// Flush any cached events that would be using the old UserID.
	FlushEvents();
	UserID = InUserID;

	static FString UserIDKey = TEXT("userID");
	if (InUserID.Len() > 0)
	{
		AppendSetDefaultEventAttribute(UserIDKey, UserID);
	}
	else
	{
		ClearDefaultEventAttribute(UserIDKey);
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
		// Flush any cached events that would be using the old SessionID.
		FlushEvents();
		SessionID = InSessionID;
		UE_LOG(LogAnalytics, Log, TEXT("[RHAnalytics] Forcing SessionID to %s."), *SessionID);
	}
	return true;
}

bool FRH_AnalyticsProvider::ShouldRecordEvent(const FString& EventName) const
{
	return true; // TODO whitelist/blacklist check
}

void FRH_AnalyticsProvider::RecordEvent(const FString& EventName, const TArray<FAnalyticsEventAttribute>& Attributes)
{
	// let higher level code filter the decision of whether to send the event
	if (ShouldRecordEvent(EventName))
	{
		EventCache.AddToCache(EventName, Attributes);
		// if we aren't caching events, flush immediately. This is really only for debugging as it will significantly affect bandwidth.
		if (!bShouldCacheEvents)
		{
			FlushEvents();
		}
	}
	else
	{
		UE_LOG(LogAnalytics, Verbose, TEXT("Ignoring event named '%s' due to ShouldRecordEvent check"), *EventName);
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

void FRH_AnalyticsProvider::EventRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool)
{
	// process responses
	bool bEventsDelivered = false;
	if (HttpResponse.IsValid())
	{
		UE_LOG(LogAnalytics, VeryVerbose, TEXT("[RHAnalytics] GETS response for [%s]. Code: %d. Payload: %s"), *HttpRequest->GetURL(), HttpResponse->GetResponseCode(), *HttpResponse->GetContentAsString());
		if (EHttpResponseCodes::IsOk(HttpResponse->GetResponseCode()))
		{
			bEventsDelivered = true;
		}
	}
	else
	{
		UE_LOG(LogAnalytics, VeryVerbose, TEXT("[RHAnalytics] GETS response for [%s]. No response"), *HttpRequest->GetURL());
	}
}

void FRH_AnalyticsProvider::BlockUntilFlushed(float InTimeoutSec)
{
	FlushEvents();
	HttpRetryManager->BlockUntilFlushed(InTimeoutSec);
}

