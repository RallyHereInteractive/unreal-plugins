// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#pragma once

#include "AnalyticsProviderConfigurationDelegate.h"
#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "CoreMinimal.h"
#include "HAL/Platform.h"
#include "HAL/PlatformCrt.h"
#include "Interfaces/IAnalyticsProviderModule.h"
#include "Modules/ModuleManager.h"
#include "Templates/SharedPointer.h"
#include "Templates/UnrealTemplate.h"

class IAnalyticsProvider;

/**
 * @brief Analytics provider module for RallyHere GETS system
 */
class ANALYTICSRALLYHERE_API FRH_Analytics : public IAnalyticsProviderModule
{
	//--------------------------------------------------------------------------
	// Module functionality
	//--------------------------------------------------------------------------
public:
	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline FRH_Analytics& Get()
	{
		return FModuleManager::LoadModuleChecked< FRH_Analytics >( "AnalyticsRallyHere" );
	}

	//--------------------------------------------------------------------------
	// Configuration functionality
	//--------------------------------------------------------------------------
public:
	/**
	 * Defines required configuration values for RallyHere analytics provider. 
	*/
	struct Config
	{
		/** APIKey - Get from your account manager (can be empty) */
		FString APIKey;
		/** API Server - Base URL to send events. Set this to an empty string to essentially create a NULL analytics provider that will be non-null, but won't actually send events. */
		FString APIServer;
		/** When true (default), events are dropped if flush fails */
		bool bDropEventsOnFlushFailure = true;
		/** Maximum number of retries to attempt. */
		uint32 RetryLimitCount = 0;
		/** Maximum time to elapse before forcing events to be flushed. Use a negative value to use the defaults (60 sec). */
		float FlushIntervalSec = -1.f;
		/** Maximum size a payload can reach before we force a flush of the payload. Use a negative value to use the defaults. See FRH_AnalyticsProviderEventCache. */
		int32 MaximumPayloadSize = -1;
		/** We preallocate a payload. It defaults to the Maximum configured payload size (see FAnalyticsProviderETEventCache). Use a negative value use the default. See FRH_AnalyticsProviderEventCache. */
		int32 PreallocatedPayloadSize = -1;

		/** Default ctor to ensure all values have their proper default. */
		Config() = default;

		/** KeyName required for APIKey configuration. */
		static FString GetKeyNameForAPIKey() { return TEXT("RHAPIKey"); }
		/** KeyName required for APIServer configuration. */
		static FString GetKeyNameForAPIServer() { return TEXT("RHAPIServer"); }


	};

	//--------------------------------------------------------------------------
	// provider factory functions
	//--------------------------------------------------------------------------
public:
	/**
	 * IAnalyticsProviderModule interface.
	 * Creates the analytics provider given a configuration delegate.
	 * The keys required exactly match the field names in the Config object. 
	 */
	virtual TSharedPtr<IAnalyticsProvider> CreateAnalyticsProvider(const FAnalyticsProviderConfigurationDelegate& GetConfigValue) const override;

	/**
	 * Construct an RH analytics provider directly from a config object.
	 */
	virtual TSharedPtr<IAnalyticsProvider> CreateAnalyticsProvider(const Config& ConfigValues) const;

private:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
