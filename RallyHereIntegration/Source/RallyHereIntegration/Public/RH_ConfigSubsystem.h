#pragma once

#include "CoreMinimal.h"
#include "Containers/Map.h"
#include "Delegates/Delegate.h"
#include "ConfigAPI.h"
#include "SiteAPI.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"

#include "RH_ConfigSubsystem.generated.h"

class URH_ConfigSubsystem;

DECLARE_MULTICAST_DELEGATE_OneParam(FAppSettingsUpdatedDelegate, URH_ConfigSubsystem*);


/** @defgroup Config RallyHere Config
 *  @{
 */

/**
 * @brief Config Subsystem used for interfacing with configuration coming from the core servers.
 */
UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_ConfigSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_UCLASS_BODY()
public:
	/**
	 * @brief Delegate that can be listented to for whenever App Settings get updated from polling.
	 */
	FAppSettingsUpdatedDelegate AppSettingsUpdatedDelegate;
	/**
	* @brief Initialize the subsystem.
	*/
	virtual void Initialize() override;
	/**
	* @brief Safely tears down the subsystem.
	*/
	virtual void Deinitialize() override;
	/**
	* @brief Requests the server for the latest App Settings.
	* @param [in] Delegate Delegate to call when the request is complete.
	*/
	void FetchAppSettings(const FRH_GenericSuccessDelegate& Delegate = FRH_GenericSuccessDelegate());
	/**
	* @brief Pulses a FetchAppSettings call for the polling of App Settings.
	* @param [in] Delegate Delegate to call when the request is complete.
	*/
	void PollAppSettings(const FRH_PollCompleteFunc& Delegate);
	/**
	* @brief Gets the map of all the App Settings and their values.
	* @return Map of all the App Settings and their values
	*/
	UFUNCTION(BlueprintGetter, Category = "Config")
	const TMap<FString, FString>& GetAppSettings() const
	{
		return AppSettings;
	}
	/**
	* @brief Gets the map of all the Matchmaking Sites.
	* @return Map of all Matchmaking Sites.
	*/
	UFUNCTION(BlueprintGetter, Category = "Config")
	const TMap<int32, FRHAPI_SiteSettings>& GetSites() const
	{
		return SiteSettings;
	}
	/**
	* @brief Gets the value of a specific App Setting.
	* @param [in] Key Key of the App Setting to get the value of.
	* @param [out] Value Value of the App Setting.
	* @return if true, a Value was found for the Key.
	*/
	UFUNCTION(BlueprintPure, Category = "Config")
	bool GetAppSetting(const FString& Key, FString& Value) const
	{
		const auto AppSetting = AppSettings.Find(Key);
		if (AppSetting != nullptr)
		{
			Value = *AppSetting;
			return true;
		}
		return false;
	}
	/**
	* @brief Gets the matchmaking site for a specific site id.
	* @param [in] Key The Site Id of the site to get.
	* @param [out] Value The site information for the site.
	* @return if true, a site was found for the Key.
	*/
	UFUNCTION(BlueprintPure, Category = "Config")
	bool GetSite(const int32& Key, FRHAPI_SiteSettings& Value) const
	{
		const auto Site = SiteSettings.Find(Key);
		if (Site != nullptr)
		{
			Value = *Site;
			return true;
		}
		return false;
	}
	/**
	* @brief If hotfix settings are set, this starts the process of applying them to unreal assets.
	*/
	void TriggerHotfixProcessing();
	/**
	* @brief Starts the polling for App Settings.
	*/
	void StartAppSettingsRefreshTimer();
	/**
	* @brief Stops the polling for App Settings.
	*/
	void StopAppSettingsRefreshTimer();
	/**
	* @brief Starts the polling for Matchmaking Sites.
	*/
	void StartSiteSettingsRefreshTimer();
	/**
	* @brief Stops the polling for Matchmaking Sites.
	*/
	void StopSiteSettingsRefreshTimer();
	/**
	* @brief Clears all cached Matchmaking Sites.
	*/
	void ClearSiteSettings()
	{
		SiteSettings.Empty();
	}
	/**
	* @brief Gets if the hotfix system is enabled.
	* @return Gets if enabled.
	*/
	bool GetHotfixTestValue() const { return bHotfixTestValue; }
	
protected:
	/** @brief Map of app settings by name. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter=GetAppSettings, Category = "Config")
	TMap<FString, FString> AppSettings;
	/** @brief ETag of last Get App Settings call response. */
	UPROPERTY(VisibleInstanceOnly, Category = "Config")
	FString AppSettingsETag;
	/** @brief Map of matchmaking site settings by id. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetSites, Category = "Config")
	TMap<int32, FRHAPI_SiteSettings> SiteSettings;
	/** @brief Poller responsible for App Settings. */
	FRH_AutoPollerPtr AppSettingsPoller;
	/** @brief Poller responsible for Site Settings. */
	FRH_AutoPollerPtr SiteSettingsPoller;
	/** @brief If set, automatically start the poller for App Settings. */
	UPROPERTY(config)
	bool bAutomaticallyPollConfigurationData;
	/** @brief If set, automatically use hotfix data in App Settings to modify local data. */
	UPROPERTY(config)
	bool bAutomaticallyApplyHotfixData;
	/** @brief debug value to test if the hotfix system is working properly. */
	UPROPERTY(config)
	bool bHotfixTestValue;
	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();
	/**
	* @brief Handles the response to a Fetch App Settings call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnFetchAppSettings(const RallyHereAPI::FResponse_GetAppSettingsClient& Resp);

	friend class FRH_FetchAppSettingsHelper;
};

/** @} */