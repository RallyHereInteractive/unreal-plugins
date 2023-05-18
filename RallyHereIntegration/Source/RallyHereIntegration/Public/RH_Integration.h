
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAll.h"
#include "RallyHereAPIHelpers.h"
#include "RH_IntegrationSettings.h"

#include "RH_Integration.generated.h"

UCLASS()
class RALLYHEREINTEGRATION_API URH_Integration : public UObject
{
    GENERATED_BODY()

public:
    void Initialize();
    void Uninitialize();

    // APIs
    RallyHereAPI::FRallyHereAPIAll& GetAPIs() { return APIs; }

    typedef TSharedPtr<RallyHereAPI::FHttpRetryManager> HttpRetryManagerPtr;
    /** Base Retry Manager for all RallyHereAPI calls */
    HttpRetryManagerPtr GetRetryManager() const { return RetryManager; }

    void SetSandboxId(FString InSandboxId, FString Source = TEXT("Direct"));

    /** Get the current Sandbox Id (will run ResolveSandboxId if there isn't one) */
    FString GetSandboxId();

    /**
      * Get the Sandbox ID used for finding the base URL from the first of the following sources:
      * 1. Command line values from the keys in SandboxCommandLineKeys.  By default these are:
      *     RallyHereSandboxX
      *     RallyHereSandbox
      *     RallyHereSandboxInternal
      * 2. Results from GetSandboxId from the SandboxOSSName (or default if one is not provided)
      */
    void ResolveSandboxId();

	// If locked, disables the ResolveSandboxId function
	void LockSandboxId(bool bLocked = true)
	{
		bIsSandboxIdLocked = bLocked;
	}

    /** Set the base URL for all RallyHereAPI calls */
    void SetBaseURL(FString InBaseUrl, FString Source = TEXT("Direct"));

    /** Get the current base URL (will run ResolveBaseURL if there isn't one) */
    FString GetBaseURL();

    /**
      * Check for a base URL across several sources and assign the first non-empty value to the APIs:
      * 1. Command line values from the keys in BaseURLCommandLineKeys.  By default these are:
      *     RallyHereURLX
      *     RallyHereURL
      *     RallyHereURLInternal
      * 2. ini value from the "RallyHereSandboxURL" section, where the key is the current sandboxId returned from GetSandboxId
      * 3. ini value from the section for this class, with the "BaseUrl" key.
      */
    void ResolveBaseURL();

	// If locked, disables the ResolveBaseURL function
	void LockBaseURL(bool bLocked = true)
	{
		bIsBaseUrlLocked = bLocked;
	}

	class URH_WebRequests* GetWebRequestTracker() const { return WebRequestTracker; }
private:
    RallyHereAPI::FRallyHereAPIAll APIs;
    HttpRetryManagerPtr RetryManager;

    UPROPERTY(Transient)
    FString ResolvedBaseUrl;

	// Is the base URL locked - aka will not change during ResolveBaseURL calls.
    UPROPERTY(Transient)
    bool bIsBaseUrlLocked;

    UPROPERTY(Transient)
    FString ResolvedSandboxId;

	// Is the SandboxId locked - aka will not change during ResolveSandboxId calls.
    UPROPERTY(Transient)
    bool bIsSandboxIdLocked;

	UPROPERTY()
	class URH_WebRequests* WebRequestTracker;
};
