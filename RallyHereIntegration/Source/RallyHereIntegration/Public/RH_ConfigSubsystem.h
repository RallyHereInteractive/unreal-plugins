#pragma once

#include "CoreMinimal.h"
#include "Containers/Map.h"
#include "Delegates/Delegate.h"
#include "ConfigAPI.h"
#include "TimeAPI.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"

#include "RH_ConfigSubsystem.generated.h"

class URH_ConfigSubsystem;

DECLARE_MULTICAST_DELEGATE_OneParam(FAppSettingsUpdatedDelegate, URH_ConfigSubsystem*);

DECLARE_MULTICAST_DELEGATE_OneParam(FSettingsUpdatedDelegate, URH_ConfigSubsystem*);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingsUpdatedDynamicDelegate, URH_ConfigSubsystem*, ConfigSubsystem);


/** @defgroup Config RallyHere Config
 *  @{
 */

/**
* @brief An object that caches information about server time and differences
*/
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_ServerTimeCache
{
	GENERATED_USTRUCT_BODY()

	/** @brief The timestamp received during the most recent update from the server */
	UPROPERTY(VisibleInstanceOnly, Category = "Config|Time")
	FDateTime LastReceivedServerDateTime;
	/** @brief The time we received the most recent update from the server */
	UPROPERTY(VisibleInstanceOnly, Category = "Config|Time")
	FDateTime LastReceivedServerAtTime;

	/** @brief Constructor */
	FRH_ServerTimeCache() : LastReceivedServerDateTime(FDateTime::MinValue()), LastReceivedServerAtTime(FDateTime::MinValue()) {}

	/**
	 * @brief Gets the current local time.
	 */
	FDateTime GetLocalTime() const { return FDateTime::UtcNow(); }
	/**
	 * @brief Gets the approximate server time, if we have received one.
	 * @param [out] Time The approximate server time.
	 * @return True if we have received a server time, false otherwise.
	 */
	bool GetServerTime(FDateTime& Time) const
	{
		if (LastReceivedServerAtTime == FDateTime::MinValue())
		{
			return false;
		}
		Time = LastReceivedServerDateTime + (GetLocalTime() - LastReceivedServerAtTime);
		return true;
	}
	/**
	 * @brief Gets the approximate server time, if we have received one.
	 * @param [out] Timespan The approximate server time drift
	 * @return True if we have received a server time, false otherwise.
	 */
	bool GetServerTimeDrift(FTimespan& Timespan) const
	{
		if (LastReceivedServerAtTime == FDateTime::MinValue())
		{
			return false;
		}
		Timespan = LastReceivedServerAtTime - LastReceivedServerDateTime;
		return true;
	}
	/**
	 * @brief Imports data from the server response
	 * @param [in] Time the time data to import
	 */
	void ImportAPITime(const RallyHereAPI::FResponse_GetUtcTime& Time)
	{
		LastReceivedServerAtTime = GetLocalTime();
		LastReceivedServerDateTime = Time.Content;
	}
};

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
	UE_DEPRECATED(5.0, "Please use the OnSettingsUpdatedDelegate instead")
	FAppSettingsUpdatedDelegate AppSettingsUpdatedDelegate;
	/**
	 * @brief Delegate that can be listented to for whenever Settings get updated from polling.
	 */
	FSettingsUpdatedDelegate OnSettingsUpdated;
	/**
	 * @brief Delegate that can be listented to for whenever Settings get updated from polling.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Config", meta = (DisplayName = "On Settings Updated"))
	FSettingsUpdatedDynamicDelegate BLUEPRINT_OnSettingsUpdated;
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
	void FetchAppSettings(const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	UE_DEPRECATED(5.0, "Please use the version with the error delegate")
	FORCEINLINE void FetchAppSettings(const FRH_GenericSuccessDelegate& Delegate = FRH_GenericSuccessDelegate())
	{
		return FetchAppSettings(RH_ConvertGenericSucessDelegateBlock(Delegate));
	}
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
	* @brief Requests the server time cache to be updated
	*/
	void RefreshServerTimeCache(const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	UE_DEPRECATED(5.0, "Please use the version with the error delegate")
	FORCEINLINE void RefreshServerTimeCache(const FRH_GenericSuccessBlock& Delegate)
	{
		RefreshServerTimeCache(RH_ConvertGenericSucessDelegateBlock(Delegate));
	}
	UFUNCTION(BlueprintCallable, Category = "Config", meta = (DisplayName = "Refresh Server Time Cache", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RefreshServerTimeCache(const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { return RefreshServerTimeCache(Delegate); };
	/**
	* @brief Gets the server time cache object
	*/
	UFUNCTION(BlueprintPure, Category = "Config|Time")
	const FRH_ServerTimeCache& GetServerTimeCache() const { return ServerTimeCache; }
	/**
	 * @brief Gets the approximate server time, if we have received one.
	 * @param [out] Time The approximate server time.
	 * @return True if we have received a server time, false otherwise.
	 */
	UFUNCTION(BlueprintPure, Category = "Config|Time")
	bool GetServerTime(FDateTime& Time) const { return ServerTimeCache.GetServerTime(Time); }
	/**
	 * @brief Gets the approximate server time, if we have received one.
	 * @param [out] Timespan The approximate server time drift
	 * @return True if we have received a server time, false otherwise.
	 */
	UFUNCTION(BlueprintPure, Category = "Config|Time")
	bool GetServerTimeDrift(FTimespan& Timespan) const { return ServerTimeCache.GetServerTimeDrift(Timespan); }

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
	/** @brief Poller responsible for App Settings. */
	FRH_AutoPollerPtr AppSettingsPoller;
	/** @brief If set, automatically start the poller for App Settings. */
	UPROPERTY(config)
	bool bAutomaticallyPollConfigurationData;
	/** @brief If set, automatically use hotfix data in App Settings to modify local data. */
	UPROPERTY(config)
	bool bAutomaticallyApplyHotfixData;
	/** @brief debug value to test if the hotfix system is working properly. */
	UPROPERTY(config)
	bool bHotfixTestValue;
	/** @brief Cache data for storing time information from the API */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetServerTimeCache, Category = "Config|Time", meta = (ShowOnlyInnerProperties))
	FRH_ServerTimeCache ServerTimeCache;

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