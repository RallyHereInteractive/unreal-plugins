// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAll.h"
#include "RallyHereAPIHelpers.h"
#include "RH_IntegrationSettings.h"
#include "RH_WebRequests.h"
#include "RH_Diagnostics.h"

typedef TSharedPtr<RallyHereAPI::FHttpRetryManager> HttpRetryManagerPtr;

/** @defgroup IntegrationBase RallyHere Integration
 *  @{
 */

/**
 * @brief Main integration layer handler.
 */
class RALLYHEREINTEGRATION_API FRH_Integration
{
public:
	FRH_Integration();

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
    RallyHereAPI::FRallyHereAPIAll& GetAPIs() { return APIs; }
    /**
	* @brief Gets Base Retry Manager for all RallyHereAPI calls.
	*/
    HttpRetryManagerPtr GetRetryManager() const { return RetryManager; }
	/**
	 * @brief Sets the environment for he connection.
	 * @param [in] InEnvironmentId Id of the Environment to use.
	 * @param [in] Source The source of the environment change, for logging.
	 */
    void SetEnvironmentId(FString InEnvironmentId, const FString& Source = TEXT("Direct"));
	/**
	 * @brief Get the current Environment Id (will run ResolveEnvironmentId if there isn't one)
	 */
    FString GetEnvironmentId();

    /**
      * @brief Get the Environment ID used for finding the base URL from the first of the following sources:
      * 1. Command line values from the keys in EnvironmentCommandLineKeysInternal.  By default these are:
      *     RallyHereEnvX
      *     RallyHereEnv
      *     RallyHereEnvInternal
	  * 2. Command line values from the keys in EnvironmentCommandLineKeys, which are configured by ini
      * 3. Results from GetEnvironmentId from the EnvironmentOSSName (or default if one is not provided)
      */
    void ResolveEnvironmentId();

	/**
	  * @brief Updates the locked status of the Environment Id.
	  * @param [in] bLocked If locked, disables the ResolveEnvironmentId function.
	  */
	void LockEnvironmentId(bool bLocked = true)
	{
		bIsEnvironmentIdLocked = bLocked;
	}

	/**
     * @brief Set the base URL for all RallyHereAPI calls
     * @param [in] InBaseURL The base URL to use.
     * @param [in] Source The source of the base URL change, for logging.
	 */
    void SetBaseURL(FString InBaseUrl, const FString& Source = TEXT("Direct"));

	/**
	 * @brief Get the current base URL (will run ResolveBaseURL if there isn't one)
	 */
    FString GetBaseURL();

    /**
      * @brief Check for a base URL across several sources and assign the first non-empty value to the APIs:
      * 1. Command line values from the keys in BaseURLCommandLineKeysInternal.  By default these are:
      *     RallyHereURLX
      *     RallyHereURL
      *     RallyHereURLInternal
	  * 2. Command line values from the keys in BaseURLCommandLineKeys, which are configured by ini
      * 3. ini value from the "RallyHereEnvURL" section, where the key is the current EnvironmentId returned from GetEnvironmentId
      * 4. ini value from the section for this class, with the "BaseUrl" key.
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
	void SetClientId(FString InClientId, const FString& Source = TEXT("Direct"));

	/**
	 * @brief Get the current client ID (will run ResolveClientId if there isn't one).
	 */
	FString GetClientId();

	/**
	  * @brief Check for a client ID across several sources and assign the first non-empty value to the APIs:
	  * 1. Command line values from the keys in ClientIdCommandLineKeysInternal.  By default these are:
	  *     RallyHereClientIdX
	  *     RallyHereClientId
	  *     RallyHereClientIdInternal
	  * 2. Command line values from the keys in ClientIdCommandLineKeys, which are configured by ini
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
	void SetClientSecret(FString InClientSecret, const FString& Source = TEXT("Direct"));

	/**
	 * @brief Get the current client secret (will run ResolveClientSecret if there isn't one).
	 */
	FString GetClientSecret();

	/**
	  * @brief Check for a client secret across several sources and assign the first non-empty value to the APIs:
	  * 1. Command line values from the keys in ClientSecretCommandLineKeysInternal.  By default these are:
	  *     RallyHereClientSecretX
	  *     RallyHereClientSecret
	  *     RallyHereClientSecretInternal
	  * 2. Command line values from the keys in ClientSecretCommandLineKeys, which are configured by ini
	  * 3. ini value from the "RallyHere" section, with the "ClientSecret" key.
	  * 4. ini value from the section for this class, with the "ClientSecret" key.
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
	FRH_WebRequests* GetWebRequestTracker() const { return WebRequestTracker.Get(); }

	/**
	 * @brief Gets the Diagnostic Reporter.
	 */
	FRH_Diagnostics* GetDiagnostics() const { return Diagnostics.Get(); }
private:
    RallyHereAPI::FRallyHereAPIAll APIs;
    HttpRetryManagerPtr RetryManager;

    FString ResolvedBaseUrl;

	// Is the base URL locked - aka will not change during ResolveBaseURL calls.
    bool bIsBaseUrlLocked;

    FString ResolvedEnvironmentId;

	// Is the EnvironmentId locked - aka will not change during ResolveEnvironmentId calls.
    bool bIsEnvironmentIdLocked;

    FString ResolvedClientId;

    // Is the client ID locked - aka will not change during ResolveClientId calls.
    bool bIsClientIdLocked;

    FString ResolvedClientSecret;

    // Is the client secret locked - aka will not change during ResolveClientSecret calls.
    bool bIsClientSecretLocked;

	// Web request tracker
	TSharedPtr<FRH_WebRequests> WebRequestTracker;

	// Diagnostic tracker and reporter
	TSharedPtr<FRH_Diagnostics> Diagnostics;
};

/** @} */