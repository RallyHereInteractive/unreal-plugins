// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

// Based on AnalyticsProviderET from UE 5.1.0

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
		/** APIKey - Get from your account manager */
		FString APIKey;
		/** API Server - Base URL to send events. Set this to an empty string to essentially create a NULL analytics provider that will be non-null, but won't actually send events. */
		FString APIServer;
		/** Alt API Servers - Base URLs to send events on retry. */
		TArray<FString> AltAPIServers;
		/**
		 * AppVersion - defines the app version passed to the provider. By default this will be FEngineVersion::Current(), but you can supply your own.
		 * As a convenience, you can use -AnalyticsAppVersion=XXX to force the AppVersion to a specific value. Useful for playtest etc where you want to define a specific version string dynamically.
		 * If you supply your own Version string, occurrences of "%VERSION%" are replaced with FEngineVersion::Current(). ie, -AnalyticsAppVersion=MyCustomID-%VERSION%.
		 */
		FString AppVersion;
		/** When true, sends events using the legacy ET protocol that passes all attributes as URL parameters. Defaults to false. */
		bool UseLegacyProtocol = false;
		/** When true (default), events are dropped if flush fails */
		bool bDropEventsOnFlushFailure = true;
		/** Maximum number of retries to attempt. */
		uint32 RetryLimitCount = 0;
		/** Maximum time to elapse before forcing events to be flushed. Use a negative value to use the defaults (60 sec). */
		float FlushIntervalSec = -1.f;
		/** Maximum size a payload can reach before we force a flush of the payload. Use a negative value to use the defaults. See FAnalyticsProviderETEventCache. */
		int32 MaximumPayloadSize = -1;
		/** We preallocate a payload. It defaults to the Maximum configured payload size (see FAnalyticsProviderETEventCache). Use a negative value use the default. See FAnalyticsProviderETEventCache. */
		int32 PreallocatedPayloadSize = -1;

		/** Default ctor to ensure all values have their proper default. */
		Config() = default;

		/** KeyName required for APIKey configuration. */
		static FString GetKeyNameForAPIKey() { return TEXT("RHAPIKey"); }
		/** KeyName required for APIServer configuration. */
		static FString GetKeyNameForAPIServer() { return TEXT("RHAPIServer"); }
		/** KeyName required for AppVersion configuration. */
		static FString GetKeyNameForAppVersion() { return TEXT("RHAppVersion"); }
		/** Optional parameter to use the legacy backend protocol. */
		static FString GetKeyNameForUseLegacyProtocol() { return TEXT("UseLegacyProtocol"); }


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
