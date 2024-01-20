---
title: URH_SettingsSubsystem Class
---Inherits from [URH_GameInstanceSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystemplugin/#classURH__GameInstanceSubsystemPlugin)

Settings Subsystem used for settings API calls.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[TGetConfigSettings](/unreal-plugins/all/classurh__settingssubsystem/#classURH__SettingsSubsystem_1a38cbf40b30111c905cd3926ac5c9d368)|Type Define for Get Config FO All Setting Types calls.|
|TMap< FString, [FRHAPI_SettingType](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType) >|[CachedSettingsTypes](/unreal-plugins/all/classurh__settingssubsystem/#classURH__SettingsSubsystem_1ab978c2c24f56b7723acdc0c5fb7264d5)|Map of settings types by name.|
|void|[GetSettingTypes](/unreal-plugins/all/classurh__settingssubsystem/#classURH__SettingsSubsystem_1a9baeabf8f6c627f0aeb372d167860dbb)(const FRH_GenericSuccessWithErrorBlock & Delegate)|Gets all settings type configs.|
|void|[BLUEPRINT_GetSettingTypes](/unreal-plugins/all/classurh__settingssubsystem/#classURH__SettingsSubsystem_1ae8e69830b7e041fd446fbf264d13d6ab)(const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)||
|const TMap< FString, [FRHAPI_SettingType](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType) > &|[GetCachedSettingTypes](/unreal-plugins/all/classurh__settingssubsystem/#classURH__SettingsSubsystem_1abb85d55eef809317eec10c4389832e19)()|Gets Cached Settings Types.|
## Public Types



### `TGetConfigSettings` <a id="classURH__SettingsSubsystem_1a38cbf40b30111c905cd3926ac5c9d368"></a>

typedef RallyHereAPI::Traits_GetConfigForAllSettingTypes TGetConfigSettingsType Define for Get Config FO All Setting Types calls.





## Protected Attributes



### `CachedSettingsTypes` <a id="classURH__SettingsSubsystem_1ab978c2c24f56b7723acdc0c5fb7264d5"></a>

`TMap<FString, FRHAPI_SettingType> URH_SettingsSubsystem::CachedSettingsTypes`

Map of settings types by name.





## Public Functions



### `GetSettingTypes` <a id="classURH__SettingsSubsystem_1a9baeabf8f6c627f0aeb372d167860dbb"></a>

void GetSettingTypes(const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description

Gets all settings type configs.


#### Parameters

Delegate
: Callback when the API call is complete. 



### `BLUEPRINT_GetSettingTypes` <a id="classURH__SettingsSubsystem_1ae8e69830b7e041fd446fbf264d13d6ab"></a>

void BLUEPRINT_GetSettingTypes(const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessWithErrorDynamicDelegate &|Delegate|

#### Description






### `GetCachedSettingTypes` <a id="classURH__SettingsSubsystem_1abb85d55eef809317eec10c4389832e19"></a>

const TMap< FString, [FRHAPI_SettingType](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType) > & GetCachedSettingTypes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets Cached Settings Types.





