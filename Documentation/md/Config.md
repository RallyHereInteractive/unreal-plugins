# group `Config` <a id="group__Config"></a>

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FKVsUpdatedDelegate `[`OnKVsUpdated`](#classURH__ConfigSubsystem_1a07bcba8c1fa8aac58b54bd8de6cd9211) | Delegate that can be listented to for whenever KVs get updated from polling.
`public FAppSettingsUpdatedDelegate `[`AppSettingsUpdatedDelegate`](#classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232) | Delegate that can be listented to for whenever App Settings get updated from polling.
`public FSettingsUpdatedDelegate `[`OnSettingsUpdated`](#classURH__ConfigSubsystem_1ae1e142e7cd1617f8c6dfea4025da1f51) | Delegate that can be listented to for whenever Settings get updated from polling.
`public virtual void `[`Initialize`](#classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482)`()` | Safely tears down the subsystem.
`public virtual void `[`FetchKVs`](#classURH__ConfigSubsystem_1a79d77433c4d5f4c671fc1ecadf1645bd)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Requests the server for the latest KVs.
`public void `[`PollKVs`](#classURH__ConfigSubsystem_1aac6461308740848ec368388c5793f5c8)`(const FRH_PollCompleteFunc & Delegate)` | Pulses a FetchKVs call for the polling of KVs.
`public inline const TMap< FString, FString > & `[`GetKVs`](#classURH__ConfigSubsystem_1a757de9fcdf1e5cb32f566f9415f79921)`() const` | Gets the map of all the Public KVs and their values.
`public inline bool `[`GetKV`](#classURH__ConfigSubsystem_1aa1248874924178b0be7b383b09fb095b)`(const FString & Key,FString & Value) const` | Gets the value of a specific Publc KV.
`public inline bool `[`GetAnyKV`](#classURH__ConfigSubsystem_1ac5caaee0e2aa29122861d5b45ee3d41c)`(const FString & Key,FString & Value) const` | Gets the value of a specific KV (wrapper for if multiple KV sources are present).
`public inline FDateTime `[`GetKickBeforeHint`](#classURH__ConfigSubsystem_1a5051253a4523c1d2b76c0a3fe53d5e3a)`() const` | Time for which any player logins older than should log out (staggered kick all players support).
`public inline void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1ad403c4ca8a27ea7c655e90a284dc78d5)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Requests the server for the latest App Settings.
`public inline FORCEINLINE void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1a50fe9c7e6cff1c087b90a9a260589d42)`(const FRH_GenericSuccessDelegate & Delegate)` | 
`public inline void `[`PollAppSettings`](#classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e)`(const FRH_PollCompleteFunc & Delegate)` | Pulses a FetchAppSettings call for the polling of App Settings.
`public inline const TMap< FString, FString > & `[`GetAppSettings`](#classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885)`() const` | Gets the map of all the App Settings and their values.
`public inline bool `[`GetAppSetting`](#classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055)`(const FString & Key,FString & Value) const` | Gets the value of a specific App Setting.
`public void `[`TriggerHotfixProcessing`](#classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6)`()` | If hotfix settings are set, this starts the process of applying them to unreal assets.
`public void `[`StartKVsRefreshTimer`](#classURH__ConfigSubsystem_1a2159e9b6bb06f03fa2f53216672e46fe)`()` | Starts the polling for KVs.
`public void `[`StopKVsRefreshTimer`](#classURH__ConfigSubsystem_1aba0146f1ca8686280cf28153330388bc)`()` | Stops the polling for KVs.
`public void `[`RefreshServerTimeCache`](#classURH__ConfigSubsystem_1afeee33613fe6dfd83ad7b2a8b8a82397)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Requests the server time cache to be updated.
`public inline const `[`FRH_ServerTimeCache`](Config.md#structFRH__ServerTimeCache)` & `[`GetServerTimeCache`](#classURH__ConfigSubsystem_1a15bf58f4b62f9d9f638c2ceae633c474)`() const` | Gets the server time cache object.
`public inline bool `[`GetServerTime`](#classURH__ConfigSubsystem_1a946dd5b6f7306f98540241a22a02bb4a)`(FDateTime & Time) const` | Gets the approximate server time, if we have received one.
`public inline bool `[`GetServerTimeDrift`](#classURH__ConfigSubsystem_1a8c858f002ca9de0d0c656e2dad1d08a8)`(FTimespan & Timespan) const` | Gets the approximate server time, if we have received one.
`public bool `[`GetHotfixTestValue`](#classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4)`() const` | Gets if the hotfix system is enabled.
`protected TMap< FString, FString > `[`KVs`](#classURH__ConfigSubsystem_1a1e87c42ea752046a6f1451ef8b0af7fb) | Map of KVs by Key.
`protected FDateTime `[`KickBeforeHint`](#classURH__ConfigSubsystem_1a50515929646fb35feaf02832a3dc9b9e) | Time for which any player logins older than should log out (staggered kick all players support).
`protected FString `[`KVsETag`](#classURH__ConfigSubsystem_1ad27491fc5b8ddc1e7479a642579d721f) | ETag of last GetKVs call response.
`protected FRH_AutoPollerPtr `[`KVsPoller`](#classURH__ConfigSubsystem_1aa886fb633317ba0538aec00464604ba6) | Poller responsible for KVs.
`protected `[`FRH_ServerTimeCache`](Config.md#structFRH__ServerTimeCache)` `[`ServerTimeCache`](#classURH__ConfigSubsystem_1a89412dc101f8e23d7715719f46ac079a) | Cache data for storing time information from the API.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b)`()` | Initializes the subsystem with defaults for its cached data.
`protected virtual void `[`OnFetchKVs`](#classURH__ConfigSubsystem_1ae09c88d61a5e98e23756a2abc6f6ebb3)`(const GetKVsAPIType::Response & Resp)` | Handles the response to a FetchKVs call.
`typedef `[`GetKVsAPIType`](#classURH__ConfigSubsystem_1abb6be8f99a9217fb5704e5e4ad9de8cb) | 

### Members

#### `public FKVsUpdatedDelegate `[`OnKVsUpdated`](#classURH__ConfigSubsystem_1a07bcba8c1fa8aac58b54bd8de6cd9211) <a id="classURH__ConfigSubsystem_1a07bcba8c1fa8aac58b54bd8de6cd9211"></a>

Delegate that can be listented to for whenever KVs get updated from polling.

#### `public FAppSettingsUpdatedDelegate `[`AppSettingsUpdatedDelegate`](#classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232) <a id="classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232"></a>

Delegate that can be listented to for whenever App Settings get updated from polling.

#### `public FSettingsUpdatedDelegate `[`OnSettingsUpdated`](#classURH__ConfigSubsystem_1ae1e142e7cd1617f8c6dfea4025da1f51) <a id="classURH__ConfigSubsystem_1ae1e142e7cd1617f8c6dfea4025da1f51"></a>

Delegate that can be listented to for whenever Settings get updated from polling.

#### `public virtual void `[`Initialize`](#classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f)`()` <a id="classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482)`()` <a id="classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482"></a>

Safely tears down the subsystem.

#### `public virtual void `[`FetchKVs`](#classURH__ConfigSubsystem_1a79d77433c4d5f4c671fc1ecadf1645bd)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__ConfigSubsystem_1a79d77433c4d5f4c671fc1ecadf1645bd"></a>

Requests the server for the latest KVs.

#### Parameters
* `Delegate` Delegate to call when the request is complete.

#### `public void `[`PollKVs`](#classURH__ConfigSubsystem_1aac6461308740848ec368388c5793f5c8)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__ConfigSubsystem_1aac6461308740848ec368388c5793f5c8"></a>

Pulses a FetchKVs call for the polling of KVs.

#### Parameters
* `Delegate` Delegate to call when the request is complete.

#### `public inline const TMap< FString, FString > & `[`GetKVs`](#classURH__ConfigSubsystem_1a757de9fcdf1e5cb32f566f9415f79921)`() const` <a id="classURH__ConfigSubsystem_1a757de9fcdf1e5cb32f566f9415f79921"></a>

Gets the map of all the Public KVs and their values.

#### Returns
Map of all the Public KVs and their values

#### `public inline bool `[`GetKV`](#classURH__ConfigSubsystem_1aa1248874924178b0be7b383b09fb095b)`(const FString & Key,FString & Value) const` <a id="classURH__ConfigSubsystem_1aa1248874924178b0be7b383b09fb095b"></a>

Gets the value of a specific Publc KV.

#### Parameters
* `Key` Key of the KV to get the value of. 

* `Value` Value of the KV. 

#### Returns
if true, a Value was found for the Key.

#### `public inline bool `[`GetAnyKV`](#classURH__ConfigSubsystem_1ac5caaee0e2aa29122861d5b45ee3d41c)`(const FString & Key,FString & Value) const` <a id="classURH__ConfigSubsystem_1ac5caaee0e2aa29122861d5b45ee3d41c"></a>

Gets the value of a specific KV (wrapper for if multiple KV sources are present).

#### Parameters
* `Key` Key of the KV to get the value of. 

* `Value` Value of the KV. 

#### Returns
if true, a Value was found for the Key.

#### `public inline FDateTime `[`GetKickBeforeHint`](#classURH__ConfigSubsystem_1a5051253a4523c1d2b76c0a3fe53d5e3a)`() const` <a id="classURH__ConfigSubsystem_1a5051253a4523c1d2b76c0a3fe53d5e3a"></a>

Time for which any player logins older than should log out (staggered kick all players support).

#### `public inline void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1ad403c4ca8a27ea7c655e90a284dc78d5)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__ConfigSubsystem_1ad403c4ca8a27ea7c655e90a284dc78d5"></a>

Requests the server for the latest App Settings.

#### Parameters
* `Delegate` Delegate to call when the request is complete.

#### `public inline FORCEINLINE void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1a50fe9c7e6cff1c087b90a9a260589d42)`(const FRH_GenericSuccessDelegate & Delegate)` <a id="classURH__ConfigSubsystem_1a50fe9c7e6cff1c087b90a9a260589d42"></a>

#### `public inline void `[`PollAppSettings`](#classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e"></a>

Pulses a FetchAppSettings call for the polling of App Settings.

#### Parameters
* `Delegate` Delegate to call when the request is complete.

#### `public inline const TMap< FString, FString > & `[`GetAppSettings`](#classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885)`() const` <a id="classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885"></a>

Gets the map of all the App Settings and their values.

#### Returns
Map of all the App Settings and their values

#### `public inline bool `[`GetAppSetting`](#classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055)`(const FString & Key,FString & Value) const` <a id="classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055"></a>

Gets the value of a specific App Setting.

#### Parameters
* `Key` Key of the App Setting to get the value of. 

* `Value` Value of the App Setting. 

#### Returns
if true, a Value was found for the Key.

#### `public void `[`TriggerHotfixProcessing`](#classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6)`()` <a id="classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6"></a>

If hotfix settings are set, this starts the process of applying them to unreal assets.

#### `public void `[`StartKVsRefreshTimer`](#classURH__ConfigSubsystem_1a2159e9b6bb06f03fa2f53216672e46fe)`()` <a id="classURH__ConfigSubsystem_1a2159e9b6bb06f03fa2f53216672e46fe"></a>

Starts the polling for KVs.

#### `public void `[`StopKVsRefreshTimer`](#classURH__ConfigSubsystem_1aba0146f1ca8686280cf28153330388bc)`()` <a id="classURH__ConfigSubsystem_1aba0146f1ca8686280cf28153330388bc"></a>

Stops the polling for KVs.

#### `public void `[`RefreshServerTimeCache`](#classURH__ConfigSubsystem_1afeee33613fe6dfd83ad7b2a8b8a82397)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__ConfigSubsystem_1afeee33613fe6dfd83ad7b2a8b8a82397"></a>

Requests the server time cache to be updated.

#### `public inline const `[`FRH_ServerTimeCache`](Config.md#structFRH__ServerTimeCache)` & `[`GetServerTimeCache`](#classURH__ConfigSubsystem_1a15bf58f4b62f9d9f638c2ceae633c474)`() const` <a id="classURH__ConfigSubsystem_1a15bf58f4b62f9d9f638c2ceae633c474"></a>

Gets the server time cache object.

#### `public inline bool `[`GetServerTime`](#classURH__ConfigSubsystem_1a946dd5b6f7306f98540241a22a02bb4a)`(FDateTime & Time) const` <a id="classURH__ConfigSubsystem_1a946dd5b6f7306f98540241a22a02bb4a"></a>

Gets the approximate server time, if we have received one.

#### Parameters
* `Time` The approximate server time. 

#### Returns
True if we have received a server time, false otherwise.

#### `public inline bool `[`GetServerTimeDrift`](#classURH__ConfigSubsystem_1a8c858f002ca9de0d0c656e2dad1d08a8)`(FTimespan & Timespan) const` <a id="classURH__ConfigSubsystem_1a8c858f002ca9de0d0c656e2dad1d08a8"></a>

Gets the approximate server time, if we have received one.

#### Parameters
* `Timespan` The approximate server time drift 

#### Returns
True if we have received a server time, false otherwise.

#### `public bool `[`GetHotfixTestValue`](#classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4)`() const` <a id="classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4"></a>

Gets if the hotfix system is enabled.

#### Returns
Gets if enabled.

#### `protected TMap< FString, FString > `[`KVs`](#classURH__ConfigSubsystem_1a1e87c42ea752046a6f1451ef8b0af7fb) <a id="classURH__ConfigSubsystem_1a1e87c42ea752046a6f1451ef8b0af7fb"></a>

Map of KVs by Key.

#### `protected FDateTime `[`KickBeforeHint`](#classURH__ConfigSubsystem_1a50515929646fb35feaf02832a3dc9b9e) <a id="classURH__ConfigSubsystem_1a50515929646fb35feaf02832a3dc9b9e"></a>

Time for which any player logins older than should log out (staggered kick all players support).

#### `protected FString `[`KVsETag`](#classURH__ConfigSubsystem_1ad27491fc5b8ddc1e7479a642579d721f) <a id="classURH__ConfigSubsystem_1ad27491fc5b8ddc1e7479a642579d721f"></a>

ETag of last GetKVs call response.

#### `protected FRH_AutoPollerPtr `[`KVsPoller`](#classURH__ConfigSubsystem_1aa886fb633317ba0538aec00464604ba6) <a id="classURH__ConfigSubsystem_1aa886fb633317ba0538aec00464604ba6"></a>

Poller responsible for KVs.

#### `protected `[`FRH_ServerTimeCache`](Config.md#structFRH__ServerTimeCache)` `[`ServerTimeCache`](#classURH__ConfigSubsystem_1a89412dc101f8e23d7715719f46ac079a) <a id="classURH__ConfigSubsystem_1a89412dc101f8e23d7715719f46ac079a"></a>

Cache data for storing time information from the API.

#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b)`()` <a id="classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected virtual void `[`OnFetchKVs`](#classURH__ConfigSubsystem_1ae09c88d61a5e98e23756a2abc6f6ebb3)`(const GetKVsAPIType::Response & Resp)` <a id="classURH__ConfigSubsystem_1ae09c88d61a5e98e23756a2abc6f6ebb3"></a>

Handles the response to a FetchKVs call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `typedef `[`GetKVsAPIType`](#classURH__ConfigSubsystem_1abb6be8f99a9217fb5704e5e4ad9de8cb) <a id="classURH__ConfigSubsystem_1abb6be8f99a9217fb5704e5e4ad9de8cb"></a>

## struct `FRH_ServerTimeCache` <a id="structFRH__ServerTimeCache"></a>

An object that caches information about server time and differences.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastReceivedServerDateTime`](#structFRH__ServerTimeCache_1a63f0350b41f3722399766db10f11366e) | The timestamp received during the most recent update from the server.
`public FDateTime `[`LastReceivedServerAtTime`](#structFRH__ServerTimeCache_1af3fc128d16c059cb4420ca5841a91d20) | The time we received the most recent update from the server.
`public inline  `[`FRH_ServerTimeCache`](#structFRH__ServerTimeCache_1a4b895cff8968b4e82df5e794376b8168)`()` | Constructor.
`public inline bool `[`GetServerTime`](#structFRH__ServerTimeCache_1aaa54f6ae4bddd94bc4665ae40f69dae6)`(FDateTime & Time) const` | Gets the approximate server time, if we have received one.
`public inline bool `[`GetServerTimeDrift`](#structFRH__ServerTimeCache_1a777a359d346cb75f394b622844fa6f68)`(FTimespan & Timespan) const` | Gets the approximate server time, if we have received one.
`public inline void `[`ImportAPITime`](#structFRH__ServerTimeCache_1a5b805808b827d56da61fe16ecd38cf20)`(const RallyHereAPI::FResponse_GetUtcTime & Time)` | Imports data from the server response.

### Members

#### `public FDateTime `[`LastReceivedServerDateTime`](#structFRH__ServerTimeCache_1a63f0350b41f3722399766db10f11366e) <a id="structFRH__ServerTimeCache_1a63f0350b41f3722399766db10f11366e"></a>

The timestamp received during the most recent update from the server.

#### `public FDateTime `[`LastReceivedServerAtTime`](#structFRH__ServerTimeCache_1af3fc128d16c059cb4420ca5841a91d20) <a id="structFRH__ServerTimeCache_1af3fc128d16c059cb4420ca5841a91d20"></a>

The time we received the most recent update from the server.

#### `public inline  `[`FRH_ServerTimeCache`](#structFRH__ServerTimeCache_1a4b895cff8968b4e82df5e794376b8168)`()` <a id="structFRH__ServerTimeCache_1a4b895cff8968b4e82df5e794376b8168"></a>

Constructor.

#### `public inline bool `[`GetServerTime`](#structFRH__ServerTimeCache_1aaa54f6ae4bddd94bc4665ae40f69dae6)`(FDateTime & Time) const` <a id="structFRH__ServerTimeCache_1aaa54f6ae4bddd94bc4665ae40f69dae6"></a>

Gets the approximate server time, if we have received one.

#### Parameters
* `Time` The approximate server time. 

#### Returns
True if we have received a server time, false otherwise.

#### `public inline bool `[`GetServerTimeDrift`](#structFRH__ServerTimeCache_1a777a359d346cb75f394b622844fa6f68)`(FTimespan & Timespan) const` <a id="structFRH__ServerTimeCache_1a777a359d346cb75f394b622844fa6f68"></a>

Gets the approximate server time, if we have received one.

#### Parameters
* `Timespan` The approximate server time drift 

#### Returns
True if we have received a server time, false otherwise.

#### `public inline void `[`ImportAPITime`](#structFRH__ServerTimeCache_1a5b805808b827d56da61fe16ecd38cf20)`(const RallyHereAPI::FResponse_GetUtcTime & Time)` <a id="structFRH__ServerTimeCache_1a5b805808b827d56da61fe16ecd38cf20"></a>

Imports data from the server response.

#### Parameters
* `Time` the time data to import

