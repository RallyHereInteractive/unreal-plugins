# Config <a id="group__Config"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_ConfigSubsystem`](#classURH__ConfigSubsystem) | Config Subsystem used for interfacing with configuration coming from the core servers.
`struct `[`FRH_ServerTimeCache`](#structFRH__ServerTimeCache) | An object that caches information about server time and differences.

## class `URH_ConfigSubsystem` <a id="classURH__ConfigSubsystem"></a>

```
class URH_ConfigSubsystem
  : public URH_GameInstanceSubsystemPlugin
```

Config Subsystem used for interfacing with configuration coming from the core servers.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FAppSettingsUpdatedDelegate `[`AppSettingsUpdatedDelegate`](#classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232) | Delegate that can be listented to for whenever App Settings get updated from polling.
`public FSettingsUpdatedDelegate `[`OnSettingsUpdated`](#classURH__ConfigSubsystem_1ae1e142e7cd1617f8c6dfea4025da1f51) | Delegate that can be listented to for whenever Settings get updated from polling.
`public FSettingsUpdatedDynamicDelegate `[`BLUEPRINT_OnSettingsUpdated`](#classURH__ConfigSubsystem_1a6cd9170e3b5adf90d10225eeaeeab310) | Delegate that can be listented to for whenever Settings get updated from polling.
`public virtual void `[`Initialize`](#classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482)`()` | Safely tears down the subsystem.
`public void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1ad403c4ca8a27ea7c655e90a284dc78d5)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Requests the server for the latest App Settings.
`public inline FORCEINLINE void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1a50fe9c7e6cff1c087b90a9a260589d42)`(const FRH_GenericSuccessDelegate & Delegate)` | 
`public void `[`PollAppSettings`](#classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e)`(const FRH_PollCompleteFunc & Delegate)` | Pulses a FetchAppSettings call for the polling of App Settings.
`public inline const TMap< FString, FString > & `[`GetAppSettings`](#classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885)`() const` | Gets the map of all the App Settings and their values.
`public inline bool `[`GetAppSetting`](#classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055)`(const FString & Key,FString & Value) const` | Gets the value of a specific App Setting.
`public void `[`TriggerHotfixProcessing`](#classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6)`()` | If hotfix settings are set, this starts the process of applying them to unreal assets.
`public void `[`StartAppSettingsRefreshTimer`](#classURH__ConfigSubsystem_1ac4025b9a4e7668d077902c15884f1f84)`()` | Starts the polling for App Settings.
`public void `[`StopAppSettingsRefreshTimer`](#classURH__ConfigSubsystem_1a4d102b2b260b8931994a758fc0ea1854)`()` | Stops the polling for App Settings.
`public void `[`RefreshServerTimeCache`](#classURH__ConfigSubsystem_1afeee33613fe6dfd83ad7b2a8b8a82397)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Requests the server time cache to be updated.
`public inline FORCEINLINE void `[`RefreshServerTimeCache`](#classURH__ConfigSubsystem_1a40ee1a749620c20841273b8ace40d721)`(const FRH_GenericSuccessBlock & Delegate)` | 
`public inline void `[`BLUEPRINT_RefreshServerTimeCache`](#classURH__ConfigSubsystem_1a5c4610a7f6baf7d8b3d6b385b8318232)`(const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | 
`public inline const `[`FRH_ServerTimeCache`](Config.md#structFRH__ServerTimeCache)` & `[`GetServerTimeCache`](#classURH__ConfigSubsystem_1a15bf58f4b62f9d9f638c2ceae633c474)`() const` | Gets the server time cache object.
`public inline bool `[`GetServerTime`](#classURH__ConfigSubsystem_1a946dd5b6f7306f98540241a22a02bb4a)`(FDateTime & Time) const` | Gets the approximate server time, if we have received one.
`public inline bool `[`GetServerTimeDrift`](#classURH__ConfigSubsystem_1a8c858f002ca9de0d0c656e2dad1d08a8)`(FTimespan & Timespan) const` | Gets the approximate server time, if we have received one.
`public inline bool `[`GetHotfixTestValue`](#classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4)`() const` | Gets if the hotfix system is enabled.
`protected TMap< FString, FString > `[`AppSettings`](#classURH__ConfigSubsystem_1acbb61ccb593c2ab63b88e724af77ac7b) | Map of app settings by name.
`protected FString `[`AppSettingsETag`](#classURH__ConfigSubsystem_1a8d386d5683aedd0d45ac56239f45eadd) | ETag of last Get App Settings call response.
`protected FRH_AutoPollerPtr `[`AppSettingsPoller`](#classURH__ConfigSubsystem_1a3fa83db7018f68e8cb4f22733629df09) | Poller responsible for App Settings.
`protected bool `[`bAutomaticallyPollConfigurationData`](#classURH__ConfigSubsystem_1aa0a4994a1e4728341c2c9d99cb23bf9f) | If set, automatically start the poller for App Settings.
`protected bool `[`bAutomaticallyApplyHotfixData`](#classURH__ConfigSubsystem_1ae6a1ea4e7a62149e8742979bcc8ad4e8) | If set, automatically use hotfix data in App Settings to modify local data.
`protected bool `[`bHotfixTestValue`](#classURH__ConfigSubsystem_1ad8f7a9544bd7e02d623c6706b26309d9) | debug value to test if the hotfix system is working properly.
`protected `[`FRH_ServerTimeCache`](Config.md#structFRH__ServerTimeCache)` `[`ServerTimeCache`](#classURH__ConfigSubsystem_1a89412dc101f8e23d7715719f46ac079a) | Cache data for storing time information from the API.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b)`()` | Initializes the subsystem with defaults for its cached data.
`protected virtual void `[`OnFetchAppSettings`](#classURH__ConfigSubsystem_1abdfe9bdb927724998ee14a9ca74fef80)`(const RallyHereAPI::FResponse_GetAppSettingsClient & Resp)` | Handles the response to a Fetch App Settings call.

#### Members

#### `public FAppSettingsUpdatedDelegate `[`AppSettingsUpdatedDelegate`](#classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232) <a id="classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232"></a>

Delegate that can be listented to for whenever App Settings get updated from polling.

<br>
#### `public FSettingsUpdatedDelegate `[`OnSettingsUpdated`](#classURH__ConfigSubsystem_1ae1e142e7cd1617f8c6dfea4025da1f51) <a id="classURH__ConfigSubsystem_1ae1e142e7cd1617f8c6dfea4025da1f51"></a>

Delegate that can be listented to for whenever Settings get updated from polling.

<br>
#### `public FSettingsUpdatedDynamicDelegate `[`BLUEPRINT_OnSettingsUpdated`](#classURH__ConfigSubsystem_1a6cd9170e3b5adf90d10225eeaeeab310) <a id="classURH__ConfigSubsystem_1a6cd9170e3b5adf90d10225eeaeeab310"></a>

Delegate that can be listented to for whenever Settings get updated from polling.

<br>
#### `public virtual void `[`Initialize`](#classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f)`()` <a id="classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482)`()` <a id="classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482"></a>

Safely tears down the subsystem.

<br>
#### `public void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1ad403c4ca8a27ea7c655e90a284dc78d5)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__ConfigSubsystem_1ad403c4ca8a27ea7c655e90a284dc78d5"></a>

Requests the server for the latest App Settings.

#### Parameters
* `Delegate` Delegate to call when the request is complete.

<br>
#### `public inline FORCEINLINE void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1a50fe9c7e6cff1c087b90a9a260589d42)`(const FRH_GenericSuccessDelegate & Delegate)` <a id="classURH__ConfigSubsystem_1a50fe9c7e6cff1c087b90a9a260589d42"></a>

<br>
#### `public void `[`PollAppSettings`](#classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e"></a>

Pulses a FetchAppSettings call for the polling of App Settings.

#### Parameters
* `Delegate` Delegate to call when the request is complete.

<br>
#### `public inline const TMap< FString, FString > & `[`GetAppSettings`](#classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885)`() const` <a id="classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885"></a>

Gets the map of all the App Settings and their values.

#### Returns
Map of all the App Settings and their values

<br>
#### `public inline bool `[`GetAppSetting`](#classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055)`(const FString & Key,FString & Value) const` <a id="classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055"></a>

Gets the value of a specific App Setting.

#### Parameters
* `Key` Key of the App Setting to get the value of. 

* `Value` Value of the App Setting. 

#### Returns
if true, a Value was found for the Key.

<br>
#### `public void `[`TriggerHotfixProcessing`](#classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6)`()` <a id="classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6"></a>

If hotfix settings are set, this starts the process of applying them to unreal assets.

<br>
#### `public void `[`StartAppSettingsRefreshTimer`](#classURH__ConfigSubsystem_1ac4025b9a4e7668d077902c15884f1f84)`()` <a id="classURH__ConfigSubsystem_1ac4025b9a4e7668d077902c15884f1f84"></a>

Starts the polling for App Settings.

<br>
#### `public void `[`StopAppSettingsRefreshTimer`](#classURH__ConfigSubsystem_1a4d102b2b260b8931994a758fc0ea1854)`()` <a id="classURH__ConfigSubsystem_1a4d102b2b260b8931994a758fc0ea1854"></a>

Stops the polling for App Settings.

<br>
#### `public void `[`RefreshServerTimeCache`](#classURH__ConfigSubsystem_1afeee33613fe6dfd83ad7b2a8b8a82397)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__ConfigSubsystem_1afeee33613fe6dfd83ad7b2a8b8a82397"></a>

Requests the server time cache to be updated.

<br>
#### `public inline FORCEINLINE void `[`RefreshServerTimeCache`](#classURH__ConfigSubsystem_1a40ee1a749620c20841273b8ace40d721)`(const FRH_GenericSuccessBlock & Delegate)` <a id="classURH__ConfigSubsystem_1a40ee1a749620c20841273b8ace40d721"></a>

<br>
#### `public inline void `[`BLUEPRINT_RefreshServerTimeCache`](#classURH__ConfigSubsystem_1a5c4610a7f6baf7d8b3d6b385b8318232)`(const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__ConfigSubsystem_1a5c4610a7f6baf7d8b3d6b385b8318232"></a>

<br>
#### `public inline const `[`FRH_ServerTimeCache`](Config.md#structFRH__ServerTimeCache)` & `[`GetServerTimeCache`](#classURH__ConfigSubsystem_1a15bf58f4b62f9d9f638c2ceae633c474)`() const` <a id="classURH__ConfigSubsystem_1a15bf58f4b62f9d9f638c2ceae633c474"></a>

Gets the server time cache object.

<br>
#### `public inline bool `[`GetServerTime`](#classURH__ConfigSubsystem_1a946dd5b6f7306f98540241a22a02bb4a)`(FDateTime & Time) const` <a id="classURH__ConfigSubsystem_1a946dd5b6f7306f98540241a22a02bb4a"></a>

Gets the approximate server time, if we have received one.

#### Parameters
* `Time` The approximate server time. 

#### Returns
True if we have received a server time, false otherwise.

<br>
#### `public inline bool `[`GetServerTimeDrift`](#classURH__ConfigSubsystem_1a8c858f002ca9de0d0c656e2dad1d08a8)`(FTimespan & Timespan) const` <a id="classURH__ConfigSubsystem_1a8c858f002ca9de0d0c656e2dad1d08a8"></a>

Gets the approximate server time, if we have received one.

#### Parameters
* `Timespan` The approximate server time drift 

#### Returns
True if we have received a server time, false otherwise.

<br>
#### `public inline bool `[`GetHotfixTestValue`](#classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4)`() const` <a id="classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4"></a>

Gets if the hotfix system is enabled.

#### Returns
Gets if enabled.

<br>
#### `protected TMap< FString, FString > `[`AppSettings`](#classURH__ConfigSubsystem_1acbb61ccb593c2ab63b88e724af77ac7b) <a id="classURH__ConfigSubsystem_1acbb61ccb593c2ab63b88e724af77ac7b"></a>

Map of app settings by name.

<br>
#### `protected FString `[`AppSettingsETag`](#classURH__ConfigSubsystem_1a8d386d5683aedd0d45ac56239f45eadd) <a id="classURH__ConfigSubsystem_1a8d386d5683aedd0d45ac56239f45eadd"></a>

ETag of last Get App Settings call response.

<br>
#### `protected FRH_AutoPollerPtr `[`AppSettingsPoller`](#classURH__ConfigSubsystem_1a3fa83db7018f68e8cb4f22733629df09) <a id="classURH__ConfigSubsystem_1a3fa83db7018f68e8cb4f22733629df09"></a>

Poller responsible for App Settings.

<br>
#### `protected bool `[`bAutomaticallyPollConfigurationData`](#classURH__ConfigSubsystem_1aa0a4994a1e4728341c2c9d99cb23bf9f) <a id="classURH__ConfigSubsystem_1aa0a4994a1e4728341c2c9d99cb23bf9f"></a>

If set, automatically start the poller for App Settings.

<br>
#### `protected bool `[`bAutomaticallyApplyHotfixData`](#classURH__ConfigSubsystem_1ae6a1ea4e7a62149e8742979bcc8ad4e8) <a id="classURH__ConfigSubsystem_1ae6a1ea4e7a62149e8742979bcc8ad4e8"></a>

If set, automatically use hotfix data in App Settings to modify local data.

<br>
#### `protected bool `[`bHotfixTestValue`](#classURH__ConfigSubsystem_1ad8f7a9544bd7e02d623c6706b26309d9) <a id="classURH__ConfigSubsystem_1ad8f7a9544bd7e02d623c6706b26309d9"></a>

debug value to test if the hotfix system is working properly.

<br>
#### `protected `[`FRH_ServerTimeCache`](Config.md#structFRH__ServerTimeCache)` `[`ServerTimeCache`](#classURH__ConfigSubsystem_1a89412dc101f8e23d7715719f46ac079a) <a id="classURH__ConfigSubsystem_1a89412dc101f8e23d7715719f46ac079a"></a>

Cache data for storing time information from the API.

<br>
#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b)`()` <a id="classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b"></a>

Initializes the subsystem with defaults for its cached data.

<br>
#### `protected virtual void `[`OnFetchAppSettings`](#classURH__ConfigSubsystem_1abdfe9bdb927724998ee14a9ca74fef80)`(const RallyHereAPI::FResponse_GetAppSettingsClient & Resp)` <a id="classURH__ConfigSubsystem_1abdfe9bdb927724998ee14a9ca74fef80"></a>

Handles the response to a Fetch App Settings call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
## struct `FRH_ServerTimeCache` <a id="structFRH__ServerTimeCache"></a>

An object that caches information about server time and differences.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastReceivedServerDateTime`](#structFRH__ServerTimeCache_1a63f0350b41f3722399766db10f11366e) | The timestamp received during the most recent update from the server.
`public FDateTime `[`LastReceivedServerAtTime`](#structFRH__ServerTimeCache_1af3fc128d16c059cb4420ca5841a91d20) | The time we received the most recent update from the server.
`public inline  `[`FRH_ServerTimeCache`](#structFRH__ServerTimeCache_1a4b895cff8968b4e82df5e794376b8168)`()` | Constructor.
`public inline FDateTime `[`GetLocalTime`](#structFRH__ServerTimeCache_1a9c40461ffd5001e460d8e897bb45f68a)`() const` | Gets the current local time.
`public inline bool `[`GetServerTime`](#structFRH__ServerTimeCache_1aaa54f6ae4bddd94bc4665ae40f69dae6)`(FDateTime & Time) const` | Gets the approximate server time, if we have received one.
`public inline bool `[`GetServerTimeDrift`](#structFRH__ServerTimeCache_1a777a359d346cb75f394b622844fa6f68)`(FTimespan & Timespan) const` | Gets the approximate server time, if we have received one.
`public inline void `[`ImportAPITime`](#structFRH__ServerTimeCache_1a5b805808b827d56da61fe16ecd38cf20)`(const RallyHereAPI::FResponse_GetUtcTime & Time)` | Imports data from the server response.

#### Members

#### `public FDateTime `[`LastReceivedServerDateTime`](#structFRH__ServerTimeCache_1a63f0350b41f3722399766db10f11366e) <a id="structFRH__ServerTimeCache_1a63f0350b41f3722399766db10f11366e"></a>

The timestamp received during the most recent update from the server.

<br>
#### `public FDateTime `[`LastReceivedServerAtTime`](#structFRH__ServerTimeCache_1af3fc128d16c059cb4420ca5841a91d20) <a id="structFRH__ServerTimeCache_1af3fc128d16c059cb4420ca5841a91d20"></a>

The time we received the most recent update from the server.

<br>
#### `public inline  `[`FRH_ServerTimeCache`](#structFRH__ServerTimeCache_1a4b895cff8968b4e82df5e794376b8168)`()` <a id="structFRH__ServerTimeCache_1a4b895cff8968b4e82df5e794376b8168"></a>

Constructor.

<br>
#### `public inline FDateTime `[`GetLocalTime`](#structFRH__ServerTimeCache_1a9c40461ffd5001e460d8e897bb45f68a)`() const` <a id="structFRH__ServerTimeCache_1a9c40461ffd5001e460d8e897bb45f68a"></a>

Gets the current local time.

<br>
#### `public inline bool `[`GetServerTime`](#structFRH__ServerTimeCache_1aaa54f6ae4bddd94bc4665ae40f69dae6)`(FDateTime & Time) const` <a id="structFRH__ServerTimeCache_1aaa54f6ae4bddd94bc4665ae40f69dae6"></a>

Gets the approximate server time, if we have received one.

#### Parameters
* `Time` The approximate server time. 

#### Returns
True if we have received a server time, false otherwise.

<br>
#### `public inline bool `[`GetServerTimeDrift`](#structFRH__ServerTimeCache_1a777a359d346cb75f394b622844fa6f68)`(FTimespan & Timespan) const` <a id="structFRH__ServerTimeCache_1a777a359d346cb75f394b622844fa6f68"></a>

Gets the approximate server time, if we have received one.

#### Parameters
* `Timespan` The approximate server time drift 

#### Returns
True if we have received a server time, false otherwise.

<br>
#### `public inline void `[`ImportAPITime`](#structFRH__ServerTimeCache_1a5b805808b827d56da61fe16ecd38cf20)`(const RallyHereAPI::FResponse_GetUtcTime & Time)` <a id="structFRH__ServerTimeCache_1a5b805808b827d56da61fe16ecd38cf20"></a>

Imports data from the server response.

#### Parameters
* `Time` the time data to import

<br>
