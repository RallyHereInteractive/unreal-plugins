// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "CoreMinimal.h"

#include "RH_AnalyticsProviderEventCache.h"
#include "AnalyticsRallyHere.h"
#include "Analytics.h"
#include "Interfaces/IAnalyticsProvider.h"
#include "AnalyticsEventAttribute.h"
#include "Misc/ScopeLock.h"
#include "Containers/Ticker.h"

#include "Interfaces/IHttpResponse.h"
#include "Interfaces/IHttpRequest.h"
#include "HttpModule.h"
#include "PlatformHttp.h"
#include "HttpRetrySystem.h"

/**
 * @brief Implementation of analytics for RallyHere GETS.
 */
class ANALYTICSRALLYHERE_API FRH_AnalyticsProvider :
	public IAnalyticsProvider,
	public FTSTickerObjectBase,
	public TSharedFromThis<FRH_AnalyticsProvider>
{
public:
	FRH_AnalyticsProvider(const FRH_Analytics::Config& ConfigValues);

	// FTSTickerObjectBase

	bool Tick(float DeltaSeconds) override;

	// IAnalyticsProvider

	virtual bool StartSession(const TArray<FAnalyticsEventAttribute>& Attributes) override;
	virtual void EndSession() override;
	virtual void FlushEvents() override;

	virtual void SetUserID(const FString& InUserID) override;
	virtual FString GetUserID() const override;

	virtual FString GetSessionID() const override;
	virtual bool SetSessionID(const FString& InSessionID) override;

	virtual bool ShouldRecordEvent(const FString& EventName) const;
	virtual void RecordEvent(const FString& EventName, const TArray<FAnalyticsEventAttribute>& Attributes) override;
	virtual void SetDefaultEventAttributes(TArray<FAnalyticsEventAttribute>&& Attributes);
	virtual TArray<FAnalyticsEventAttribute> GetDefaultEventAttributesSafe() const;
	virtual int32 GetDefaultEventAttributeCount() const;
	virtual FAnalyticsEventAttribute GetDefaultEventAttribute(int AttributeIndex) const;

	virtual bool AppendSetDefaultEventAttribute(const FString& Key, const FString& Value);
	virtual bool ClearDefaultEventAttribute(const FString& Key);

	virtual void BlockUntilFlushed(float InTimeoutSec);
	virtual ~FRH_AnalyticsProvider();

	virtual const FRH_Analytics::Config& GetConfig() const { return Config; }

private:
	void FlushEventsOnce();

	/** Create a request utilizing HttpRetry domains */
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> CreateRequest();

	bool bSessionInProgress;
	/** The current configuration (might be updated with respect to the one provided at construction). */
	FRH_Analytics::Config Config;
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
	bool bInDestructor;

	FRH_AnalyticsProviderEventCache EventCache;

	/**
	* Delegate called when an event Http request completes
	*/
	void EventRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);

	TSharedPtr<class FHttpRetrySystem::FManager> HttpRetryManager;
	FHttpRetrySystem::FRetryDomainsPtr RetryServers;
};
