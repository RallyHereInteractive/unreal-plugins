// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "CoreMinimal.h"

#include "RH_AnalyticsProviderEventCache.h"
#include "AnalyticsRallyHere.h"
#include "Analytics.h"
#include "Interfaces/IAnalyticsProvider.h"
#include "IAnalyticsProviderET.h"
#include "AnalyticsEventAttribute.h"
#include "Misc/ScopeLock.h"
#include "Containers/Ticker.h"

#include "Interfaces/IHttpResponse.h"
#include "Interfaces/IHttpRequest.h"
#include "HttpModule.h"
#include "PlatformHttp.h"
#include "HttpRetrySystem.h"

#include "Misc/EngineVersionComparison.h"

// forward declare the response struct
namespace RallyHereAPI
{
	struct FResponse_ReceiveEventsV1;
}

/**
 * @brief Implementation of analytics for RallyHere GETS.
 */
class ANALYTICSRALLYHERE_API FRH_AnalyticsProvider :
	public IAnalyticsProviderET,
	public FTSTickerObjectBase,
	public TSharedFromThis<FRH_AnalyticsProvider>
{
public:
	FRH_AnalyticsProvider(const FAnalyticsET::Config& ConfigValues);

	/** @brief Initialize the provider */
	virtual void Init();
	/** @brief Shutdown the provider */
	virtual void Shutdown();

	// FTSTickerObjectBase

	bool Tick(float DeltaSeconds) override;

	// IAnalyticsProvider

	/**
	 * Unlike AnalyticsET, we do not use the version of guid with braces
	 */
	virtual bool StartSession(const TArray<FAnalyticsEventAttribute>& Attributes) override
	{
		FGuid SessionGUID;
		FPlatformMisc::CreateGuid(SessionGUID);
		return StartSession(SessionGUID.ToString(EGuidFormats::DigitsWithHyphensLower), Attributes);
	}

	virtual bool StartSession(FString InSessionID, const TArray<FAnalyticsEventAttribute>& Attributes) override;
	virtual void EndSession() override;
	virtual void FlushEvents() override;
	virtual void OnEngineExit();

	// we do not currently handle these, but expose them for completeness and future use
	virtual void SetAppID(FString&& AppId) override {};
	virtual void SetAppVersion(FString&& AppVersion) override {};
#if (ENGINE_MAJOR_VERSION > 5 || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3))
	virtual void SetHeader(const FString& HeaderName, const FString& HeaderValue) override {}
#endif

	virtual void SetUserID(const FString& InUserID) override;
	virtual FString GetUserID() const override;

	virtual FString GetSessionID() const override;
	virtual bool SetSessionID(const FString& InSessionID) override;

	virtual void SetShouldRecordEventFunc(const ShouldRecordEventFunction& ShouldRecordEventFunc) override;
	virtual bool ShouldRecordEvent(const FString& EventName) const override;

	virtual void RecordEvent(FString&& EventName, const TArray<FAnalyticsEventAttribute>& Attributes) override;
	virtual void SetDefaultEventAttributes(TArray<FAnalyticsEventAttribute>&& Attributes) override;
	virtual TArray<FAnalyticsEventAttribute> GetDefaultEventAttributesSafe() const override;
	virtual int32 GetDefaultEventAttributeCount() const override;
	virtual FAnalyticsEventAttribute GetDefaultEventAttribute(int AttributeIndex) const override;

	virtual bool AppendSetDefaultEventAttribute(const FString& Key, const FString& Value);
	virtual bool ClearDefaultEventAttribute(const FString& Key);

	virtual void SetEventCallback(const OnEventRecorded& Callback) override;

	virtual void SetURLEndpoint(const FString& UrlEndpoint, const TArray<FString>& AltDomains) override;

	virtual void BlockUntilFlushed(float InTimeoutSec) override;
	virtual ~FRH_AnalyticsProvider();

	// we use our own config object
	virtual const FAnalyticsET::Config& GetConfig() const override { return Config; }

protected:
	void FlushEventsOnce();

	bool bSessionInProgress;
	/** The current configuration (might be updated with respect to the one provided at construction). */
	FAnalyticsET::Config Config;
	/** the unique UserID as passed to ET. */
	FString UserID;
	/** The session ID */
	FString SessionID;
	/** Default flush interval, when one is not explicitly given. */
	const float DefaultFlushIntervalSec = 60.0f;
	/** interval which to ensure events are flushed to the server. An event should not sit in the cache longer than this. It may be flushed sooner, but not longer (unless there is a hitch) */
	float FlushIntervalSec;
	/** Allows events to not be cached when -AnalyticsDisableCaching is used. This should only be used for debugging as caching significantly reduces bandwidth overhead per event. */
	bool bShouldCacheEvents;
	/** Current timer to keep track of FlushIntervalSec flushes */
	double NextEventFlushTime;
	/** Track destructing for unbinding callbacks when firing events at shutdown */
	bool bShuttingDown;

	FRH_AnalyticsProviderEventCache EventCache;

	TArray<OnEventRecorded> EventRecordedCallbacks;

	/** Event filter function */
	ShouldRecordEventFunction ShouldRecordEventFunc;

	/**
	* Delegate called when an event Http request completes
	*/
	void EventRequestComplete(const RallyHereAPI::FResponse_ReceiveEventsV1& Response);

	TSharedPtr<class FHttpRetrySystem::FManager> HttpRetryManager;
	FHttpRetrySystem::FRetryDomainsPtr RetryServers;
};
