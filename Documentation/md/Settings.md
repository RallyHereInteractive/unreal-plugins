# group `Settings` <a id="group__Settings"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_SettingsSubsystem`](#classURH__SettingsSubsystem) | Settings Subsystem used for settings API calls.

---
title: URH_SettingsSubsystem
---

```
class URH_SettingsSubsystem
  : public URH_GameInstanceSubsystemPlugin
```

Settings Subsystem used for settings API calls.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`GetSettingTypes`](#classURH__SettingsSubsystem_1a9baeabf8f6c627f0aeb372d167860dbb)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Gets all settings type configs.
`public inline const TMap< FString, `[`FRHAPI_SettingType`](models/RHAPI_SettingType.md#structFRHAPI__SettingType)` > & `[`GetCachedSettingTypes`](#classURH__SettingsSubsystem_1abb85d55eef809317eec10c4389832e19)`()` | Gets Cached Settings Types.
`protected TMap< FString, `[`FRHAPI_SettingType`](models/RHAPI_SettingType.md#structFRHAPI__SettingType)` > `[`CachedSettingsTypes`](#classURH__SettingsSubsystem_1ab978c2c24f56b7723acdc0c5fb7264d5) | Map of settings types by name.
`typedef `[`TGetConfigSettings`](#classURH__SettingsSubsystem_1a38cbf40b30111c905cd3926ac5c9d368) | Type Define for Get Config FO All Setting Types calls.

### Members

#### `public void `[`GetSettingTypes`](#classURH__SettingsSubsystem_1a9baeabf8f6c627f0aeb372d167860dbb)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__SettingsSubsystem_1a9baeabf8f6c627f0aeb372d167860dbb"></a>

Gets all settings type configs.

#### Parameters
* `Delegate` Callback when the API call is complete.

#### `public inline const TMap< FString, `[`FRHAPI_SettingType`](models/RHAPI_SettingType.md#structFRHAPI__SettingType)` > & `[`GetCachedSettingTypes`](#classURH__SettingsSubsystem_1abb85d55eef809317eec10c4389832e19)`()` <a id="classURH__SettingsSubsystem_1abb85d55eef809317eec10c4389832e19"></a>

Gets Cached Settings Types.

#### `protected TMap< FString, `[`FRHAPI_SettingType`](models/RHAPI_SettingType.md#structFRHAPI__SettingType)` > `[`CachedSettingsTypes`](#classURH__SettingsSubsystem_1ab978c2c24f56b7723acdc0c5fb7264d5) <a id="classURH__SettingsSubsystem_1ab978c2c24f56b7723acdc0c5fb7264d5"></a>

Map of settings types by name.

#### `typedef `[`TGetConfigSettings`](#classURH__SettingsSubsystem_1a38cbf40b30111c905cd3926ac5c9d368) <a id="classURH__SettingsSubsystem_1a38cbf40b30111c905cd3926ac5c9d368"></a>

Type Define for Get Config FO All Setting Types calls.

