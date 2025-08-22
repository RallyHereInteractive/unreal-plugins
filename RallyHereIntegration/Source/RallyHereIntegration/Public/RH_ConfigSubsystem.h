// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Containers/Map.h"
#include "Delegates/Delegate.h"
#include "ConfigAPI.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"

#include "RH_ConfigSubsystem.generated.h"

class URH_ConfigSubsystem;

DECLARE_MULTICAST_DELEGATE_OneParam(FAppSettingsUpdatedDelegate, URH_ConfigSubsystem*);

DECLARE_MULTICAST_DELEGATE_OneParam(FSettingsUpdatedDelegate, URH_ConfigSubsystem*);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingsUpdatedDynamicDelegate, URH_ConfigSubsystem*, ConfigSubsystem);

DECLARE_MULTICAST_DELEGATE_OneParam(FKVsUpdatedDelegate, URH_ConfigSubsystem*);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKVsUpdatedDynamicDelegate, URH_ConfigSubsystem*, ConfigSubsystem);


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
	static FDateTime GetLocalTime() { return FDateTime::UtcNow(); }
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
	 * @brief Gets the difference between approximate server time and local time, if possible.
	 * @param [out] Timespan The approximate server time drift
	 * @return True if the drift was calculated, false otherwise.
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
	 * @brief Converts a timestamp from local time to server time by applying the drift
	 * @param [in] InLocalTime The local time to convert.
	 * @param [out] OutServerTime The server time equivalent of the input local time.
	 * @return True if the conversion was successful, false otherwise.
	 */
	bool ConvertLocalTimeToServerTime(const FDateTime& InLocalTime, FDateTime& OutServerTime) const
	{
		FTimespan Drift;
		if (GetServerTimeDrift(Drift))
		{
			OutServerTime = InLocalTime - Drift;
			return true;
		}
		return false;
	}
	/**
	 * @brief Converts a timestamp from server time to local time by applying the drift
	 * @param [in] InServerTime The server time to convert.
	 * @param [out] OutLocalTime The local time equivalent of the input server time.
	 * @return True if the conversion was successful, false otherwise.
	 */
	bool ConvertServerTimeToLocalTime(const FDateTime& InServerTime, FDateTime& OutLocalTime) const
	{
		FTimespan Drift;
		if (GetServerTimeDrift(Drift))
		{
			OutLocalTime = InServerTime + Drift;
			return true;
		}
		return false;
	}
	/**
	 * @brief Imports data from the server response
	 * @param [in] Time the time data to import
	 */
	void ImportAPITime(const RallyHereAPI::FResponse_GetUtcTime& Time)
	{
		LastReceivedServerAtTime = GetLocalTime();
		Time.TryGetDefaultContent(LastReceivedServerDateTime);
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
	 * @brief Delegate that can be listented to for whenever KVs get updated from polling.
	 */
	FKVsUpdatedDelegate OnKVsUpdated;
	/**
	 * @private
	 * @brief Delegate that can be listented to for whenever KVs get updated from polling.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Config", meta = (DisplayName = "On KVs Updated"))
	FKVsUpdatedDynamicDelegate BLUEPRINT_OnKVsUpdated;
	/**
	 * @brief Delegate that can be listented to for whenever App Settings get updated from polling.
	 */
	UE_DEPRECATED(5.0, "Please use the OnKVsUpdatedDelegate instead")
	FAppSettingsUpdatedDelegate AppSettingsUpdatedDelegate;
	/**
	 * @brief Delegate that can be listented to for whenever Settings get updated from polling.
	 */
	UE_DEPRECATED(5.0, "Please use the OnKVsUpdatedDelegate instead")
	FSettingsUpdatedDelegate OnSettingsUpdated;
	/**
	 * @private
	 * @brief Delegate that can be listented to for whenever Settings get updated from polling.
	 */
	UE_DEPRECATED(5.0, "Please use the OnKVsUpdatedDelegate instead")
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Config", meta = (DeprecatedFunction, DisplayName = "On Settings Updated"))
	FSettingsUpdatedDynamicDelegate BLUEPRINT_OnSettingsUpdated;
	/**
	* @brief Initialize the subsystem.
	*/
	virtual void Initialize() override;
	/**
	* @brief Safely tears down the subsystem.
	*/
	virtual void Deinitialize() override;

	typedef RallyHereAPI::Traits_GetKvsV2 GetKVsAPIType;
	/**
	* @brief Requests the server for the latest KVs.
	* @param [in] Delegate Delegate to call when the request is complete.
	*/
	virtual void FetchKVs(const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	* @brief Pulses a FetchKVs call for the polling of KVs.
	* @param [in] Delegate Delegate to call when the request is complete.
	*/
	void PollKVs(const FRH_PollCompleteFunc& Delegate);
	/**
	* @brief Gets the map of all the Public KVs and their values.
	* @return Map of all the Public KVs and their values
	*/
	UFUNCTION(BlueprintGetter, Category = "Config")
	const TMap<FString, FString>& GetKVs() const
	{
		return KVs;
	}
	/**
	* @brief Gets the value of a specific Publc KV.
	* @param [in] Key Key of the KV to get the value of.
	* @param [out] Value Value of the KV.
	* @return if true, a Value was found for the Key.
	*/
	UFUNCTION(BlueprintPure, Category = "Config")
	bool GetKV(const FString& Key, FString& Value) const
	{
		const auto KVValue = KVs.Find(Key);
		if (KVValue != nullptr)
		{
			Value = *KVValue;
			return true;
		}
		return false;
	}
	/**
	 */
	UFUNCTION(BlueprintPure, Category = "Config")
	bool GetKVBool(const FString& Key, bool defaultValue = false) const
	{
		const auto KVValue = KVs.Find(Key);
		if (KVValue != nullptr)
		{
			return KVValue->ToBool();
		}
		return defaultValue;
	}
	/**
	* @brief Gets the value of a specific KV (wrapper for if multiple KV sources are present).
	* @param [in] Key Key of the KV to get the value of.
	* @param [out] Value Value of the KV.
	* @return if true, a Value was found for the Key.
	*/
	UFUNCTION(BlueprintPure, Category = "Config")
	bool GetAnyKV(const FString& Key, FString& Value) const
	{
		return GetKV(Key, Value);
	}
	/**
	 * @brief Time for which any player logins older than should log out (staggered kick all players support).
	 */
	UFUNCTION(BlueprintPure, Category = "Config")
	FDateTime GetKickBeforeHint() const { return KickBeforeHint; }	
	/**
	* @brief Requests the server for the latest App Settings.
	* @param [in] Delegate Delegate to call when the request is complete.
	*/
	UE_DEPRECATED(5.0, "Please use FetchKVs")
		void FetchAppSettings(const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock())
	{
		return FetchKVs(Delegate);
	}
	UE_DEPRECATED(5.0, "Please use FetchKVs")
	FORCEINLINE void FetchAppSettings(const FRH_GenericSuccessDelegate& Delegate = FRH_GenericSuccessDelegate())
	{
		return FetchKVs(RH_ConvertGenericSucessDelegateBlock(Delegate));
	}
	/**
	* @brief Pulses a FetchAppSettings call for the polling of App Settings.
	* @param [in] Delegate Delegate to call when the request is complete.
	*/
	UE_DEPRECATED(5.0, "Please use PollKVs")
	void PollAppSettings(const FRH_PollCompleteFunc& Delegate)
	{
		PollKVs(Delegate);
	}
	/**
	* @brief Gets the map of all the App Settings and their values.
	* @return Map of all the App Settings and their values
	*/
	UE_DEPRECATED(5.0, "Please use GetKVs")
	UFUNCTION(BlueprintGetter, Category = "Config", meta = (DeprecatedFunction))
	const TMap<FString, FString>& GetAppSettings() const
	{
		return GetKVs();
	}
	/**
	* @brief Gets the value of a specific App Setting.
	* @param [in] Key Key of the App Setting to get the value of.
	* @param [out] Value Value of the App Setting.
	* @return if true, a Value was found for the Key.
	*/
	UE_DEPRECATED(5.0, "Please use GetKV")
	UFUNCTION(BlueprintPure, Category = "Config", meta = (DeprecatedFunction))
	bool GetAppSetting(const FString& Key, FString& Value) const
	{
		return GetKV(Key, Value);
	}
	/**
	* @brief If hotfix settings are set, this starts the process of applying them to unreal assets.
	*/
	void TriggerHotfixProcessing();
	/**
	* @brief Starts the polling for KVs.
	*/
	void StartKVsRefreshTimer();
	/**
	* @brief Stops the polling for KVs.
	*/
	void StopKVsRefreshTimer();

	/**
	* @brief Requests the server time cache to be updated
	*/
	void RefreshServerTimeCache(const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	/** @private */
	UE_DEPRECATED(5.0, "Please use the version with the error delegate")
	FORCEINLINE void RefreshServerTimeCache(const FRH_GenericSuccessBlock& Delegate)
	{
		RefreshServerTimeCache(RH_ConvertGenericSucessDelegateBlock(Delegate));
	}
	/** @private */
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
	bool GetHotfixTestValue() const;

protected:
	/** @brief Map of KVs by Key. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter=GetKVs, Category = "Config")
	TMap<FString, FString> KVs;
	/** @brief Time for which any player logins older than should log out (staggered kick all players support). */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter=GetKickBeforeHint, Category = "Config")
	FDateTime KickBeforeHint;
	/** @brief ETag of last GetKVs call response. */
	UPROPERTY(VisibleInstanceOnly, Category = "Config")
	FString KVsETag;
	/** @brief Poller responsible for KVs. */
	FRH_AutoPollerPtr KVsPoller;

	/** @brief Cache data for storing time information from the API */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetServerTimeCache, Category = "Config|Time", meta = (ShowOnlyInnerProperties))
	FRH_ServerTimeCache ServerTimeCache;

	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();
	/**
	* @brief Handles the response to a FetchKVs call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnFetchKVs(const GetKVsAPIType::Response& Resp);
};

/** @} */