#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereDeveloperAPIAll.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "RH_DevIntegrationSettings.h"
#include "RH_DevWebRequests.h"

#include "RH_DevIntegration.generated.h"

typedef TSharedPtr<RallyHereDeveloperAPI::FHttpRetryManager> HttpRetryManagerPtr;

/** @defgroup IntegrationBase RallyHere Integration
 *  @{
 */

/**
 * @brief Main integration layer handler.
 */
UCLASS()
class RALLYHEREEDITOR_API URH_DevIntegration : public UObject
{
    GENERATED_BODY()

public:
	/**
	 * @brief Initialize the Integration layer.
	 */
    void Initialize();
	/**
	 * @brief Safely tears down the Integration layer.
	 */
    void Uninitialize();
    /**
     * @brief Gets all the APIs.
     */
	RallyHereDeveloperAPI::FRallyHereDeveloperAPIAll& GetAPIs() { return APIs; }
    /**
	* @brief Gets Base Retry Manager for all RallyHereAPI calls.
	*/
    HttpRetryManagerPtr GetRetryManager() const { return RetryManager; }
	/**
	 * @brief Sets the sandbox for he connection.
	 * @param [in] InSandboxId Id of the Sandbox to use.
	 * @param [in] Source The source of the sandbox change, for logging.
	 */
    void SetSandboxId(FString InSandboxId, FString Source = TEXT("Direct"));
	/**
	 * @brief Get the current Sandbox Id (will run ResolveSandboxId if there isn't one)
	 */
    FString GetSandboxId();

    /**
      * @brief Get the Sandbox ID used for finding the base URL from the first of the following sources:
      * 1. Command line values from the keys in SandboxCommandLineKeys.  By default these are:
      *     RallyHereSandboxX
      *     RallyHereSandbox
      *     RallyHereSandboxInternal
      * 2. Results from GetSandboxId from the SandboxOSSName (or default if one is not provided)
      */
    void ResolveSandboxId();

	/**
	  * @brief Updates the locked status of the Sandbox Id.
	  * @param [in] bLocked If locked, disables the ResolveSandboxId function.
	  */
	void LockSandboxId(bool bLocked = true)
	{
		bIsSandboxIdLocked = bLocked;
	}

	/**
     * @brief Set the base URL for all RallyHereAPI calls 
     * @param [in] InBaseURL The base URL to use.
     * @param [in] Source The source of the base URL change, for logging.
	 */
    void SetBaseURL(FString InBaseUrl, FString Source = TEXT("Direct"));

	/**
	 * @brief Get the current base URL (will run ResolveBaseURL if there isn't one) 
	 */
    FString GetBaseURL();

    /**
      * @brief Check for a base URL across several sources and assign the first non-empty value to the APIs:
      * 1. Command line values from the keys in BaseURLCommandLineKeys.  By default these are:
      *     RallyHereURLX
      *     RallyHereURL
      *     RallyHereURLInternal
      * 2. ini value from the "RallyHereSandboxURL" section, where the key is the current sandboxId returned from GetSandboxId
      * 3. ini value from the section for this class, with the "BaseUrl" key.
      */
    void ResolveBaseURL();

	/**
	* @brief Updates the locked status of the Base URL.
	* @param [in] bLocked If locked, disables the ResolveBaseURL function.
	*/
	void LockBaseURL(bool bLocked = true)
	{
		bIsBaseUrlLocked = bLocked;
	}

	/**
	 * @brief Set the client ID for the AuthContext.
	 * @param InClientId The client ID to use.
	 * @param [in] Source The source of the base Client Id Change, for logging.
	 */
	void SetClientId(FString InClientId, FString Source = TEXT("Direct"));

	/**
	 * @brief Get the current client ID (will run ResolveClientId if there isn't one).
	 */
	FString GetClientId();

	/**
	  * @brief Check for a client ID across several sources and assign the first non-empty value to the APIs:
	  * 1. Command line values from the keys in ClientIdCommandLineKeys.  By default these are:
	  *     RallyHereClientIdX
	  *     RallyHereClientId
	  *     RallyHereClientIdInternal
	  * 2. ini value from the "RallyHere" section, with the "ClientId" key.
	  * 3. ini value from the section for this class, with the "ClientId" key.
	  */
	void ResolveClientId();

	/**
	* @brief Updates the locked status of the Client Id.
	* @param [in] bLocked If locked, disables the ResolveClientId function.
	*/
	void LockClientId(bool bLocked = true)
	{
		bIsClientIdLocked = bLocked;
	}
    
	/**
	 * @brief Set the client secret for the AuthContext.
	 * @param InClientSecret The client secret to use.
	 * @param Source The source of the base Client Secret Change, for logging.
	 */
	void SetClientSecret(FString InClientSecret, FString Source = TEXT("Direct"));

	/**
	 * @brief Get the current client secret (will run ResolveClientSecret if there isn't one).
	 */
	FString GetClientSecret();

	/**
	  * @brief Check for a client secret across several sources and assign the first non-empty value to the APIs:
	  * 1. Command line values from the keys in ClientSecretCommandLineKeys.  By default these are:
	  *     RallyHereClientSecretX
	  *     RallyHereClientSecret
	  *     RallyHereClientSecretInternal
	  * 2. ini value from the "RallyHere" section, with the "ClientSecret" key.
	  * 3. ini value from the section for this class, with the "ClientSecret" key.
	  */
	void ResolveClientSecret();

	/**
	* @brief Updates the locked status of the Client Secret.
	* @param [in] bLocked If locked, disables the ResolveClientSecret function.
	*/
	void LockClientSecret(bool bLocked = true)
	{
		bIsClientSecretLocked = bLocked;
	}

	
	/**
	 * @brief Gets the Web Request Tracker.
	 */
	class URH_DevWebRequests* GetWebRequestTracker() const { return WebRequestTracker; }

	/**
	 * @brief Gets the Diagnostic Reporter.
	 */
	//class URH_Diagnostics* GetDiagnostics() const { return Diagnostics; }
private:
    RallyHereDeveloperAPI::FRallyHereDeveloperAPIAll APIs;
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

	UPROPERTY(Transient)
    FString ResolvedClientId;

    // Is the client ID locked - aka will not change during ResolveClientId calls.
    UPROPERTY(Transient)
    bool bIsClientIdLocked;

    UPROPERTY(Transient)
    FString ResolvedClientSecret;

    // Is the client secret locked - aka will not change during ResolveClientSecret calls.
    UPROPERTY(Transient)
    bool bIsClientSecretLocked;

	UPROPERTY()
	class URH_DevWebRequests* WebRequestTracker;
};

/** @} */