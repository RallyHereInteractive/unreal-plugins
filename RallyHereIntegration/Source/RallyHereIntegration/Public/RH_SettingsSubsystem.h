#pragma once

#include "SettingsAPI.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_SettingsSubsystem.generated.h"

class URH_SettingsSubsystem;

/** @defgroup Settings RallyHere Settings
 *  @{
 */

/**
 * @brief Settings Subsystem used for settings API calls.
 */
UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_SettingsSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_UCLASS_BODY()
public:
	/** @brief Type Define for Get Config FO All Setting Types calls. */
	typedef RallyHereAPI::Traits_GetConfigForAllSettingTypes TGetConfigSettings;

	/**
	* @brief Gets all settings type configs.
	* @param [in] Delegate Callback when the API call is complete.
	*/
	void GetSettingTypes(const FRH_GenericSuccessBlock& Delegate = FRH_GenericSuccessBlock());
	UFUNCTION(BlueprintCallable, Category = "Settings Subsystem", meta = (DisplayName = "Get Setting Types", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetSettingTypes(const FRH_GenericSuccessDynamicDelegate& Delegate) { GetSettingTypes(Delegate); }

	/** @brief Gets Cached Settings Types */
	UFUNCTION(BlueprintGetter)
	const TMap<FString, FRHAPI_SettingType>& GetCachedSettingTypes() { return CachedSettingsTypes; }
	
protected:
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetCachedSettingTypes, Category = "Settings")
	/** @brief Map of settings types by name. */
	TMap<FString, FRHAPI_SettingType> CachedSettingsTypes;
};

/** @} */