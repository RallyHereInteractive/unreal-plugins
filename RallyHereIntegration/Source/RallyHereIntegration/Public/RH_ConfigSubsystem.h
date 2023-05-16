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
DECLARE_MULTICAST_DELEGATE_OneParam(FSiteSettingsUpdatedDelegate, URH_ConfigSubsystem*);

UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_ConfigSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_UCLASS_BODY()
public:
	FAppSettingsUpdatedDelegate AppSettingsUpdatedDelegate;
	FSiteSettingsUpdatedDelegate SiteSettingsUpdatedDelegate;
	
	virtual void Initialize() override;
	virtual void Deinitialize() override;

	void FetchAppSettings(const FRH_GenericSuccessDelegate& Delegate = FRH_GenericSuccessDelegate());
	void FetchSiteSettings(const FRH_GenericSuccessDelegate& Delegate = FRH_GenericSuccessDelegate());

	void PollAppSettings(const FRH_PollCompleteFunc& Delegate);
	void PollSiteSettings(const FRH_PollCompleteFunc& Delegate);

	UFUNCTION(BlueprintGetter, Category = "Config")
	const TMap<FString, FString>& GetAppSettings() const
	{
		return AppSettings;
	}
	UFUNCTION(BlueprintGetter, Category = "Config")
	const TMap<int32, FRHAPI_SiteSettings>& GetSites() const
	{
		return SiteSettings;
	}

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

	void TriggerHotfixProcessing();

	void StartAppSettingsRefreshTimer();
	void StopAppSettingsRefreshTimer();
	
	void StartSiteSettingsRefreshTimer();
	void StopSiteSettingsRefreshTimer();

	void ClearSiteSettings()
	{
		SiteSettings.Empty();
	}

	bool GetHotfixTestValue() const { return bHotfixTestValue; }
	
private:
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter=GetAppSettings, Category = "Config")
	TMap<FString, FString> AppSettings;
	UPROPERTY(VisibleInstanceOnly, Category = "Config")
	FString AppSettingsETag;
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetSites, Category = "Config")
	TMap<int32, FRHAPI_SiteSettings> SiteSettings;

	FRH_AutoPollerPtr AppSettingsPoller;
	FRH_AutoPollerPtr SiteSettingsPoller;

	UPROPERTY(config)
	bool bAutomaticallyPollConfigurationData;

	UPROPERTY(config)
	bool bAutomaticallyApplyHotfixData;

	UPROPERTY(config)
	bool bHotfixTestValue;

	void InitPropertiesWithDefaultValues();
	
	void OnFetchAppSettings(const RallyHereAPI::FResponse_GetAppSettingsClient& Resp);
	void OnFetchSiteSettings(const RallyHereAPI::FResponse_GetSiteSettings& Resp);

	friend class FRH_FetchAppSettingsHelper;
};