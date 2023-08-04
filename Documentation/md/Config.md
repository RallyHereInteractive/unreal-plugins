# Config <a id="group__Config"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_ConfigSubsystem`](#classURH__ConfigSubsystem) | Config Subsystem used for interfacing with configuration coming from the core servers.

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
`public virtual void `[`Initialize`](#classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482)`()` | Safely tears down the subsystem.
`public void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1ab48f6fcd6bbe61e8d3b8f9ef6f7996f8)`(const FRH_GenericSuccessDelegate & Delegate)` | Requests the server for the latest App Settings.
`public void `[`PollAppSettings`](#classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e)`(const FRH_PollCompleteFunc & Delegate)` | Pulses a FetchAppSettings call for the polling of App Settings.
`public inline const TMap< FString, FString > & `[`GetAppSettings`](#classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885)`() const` | Gets the map of all the App Settings and their values.
`public inline const TMap< int32, `[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` > & `[`GetSites`](#classURH__ConfigSubsystem_1a66b7e6bfd7544a8feeb934e970317131)`() const` | Gets the map of all the Matchmaking Sites.
`public inline bool `[`GetAppSetting`](#classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055)`(const FString & Key,FString & Value) const` | Gets the value of a specific App Setting.
`public inline bool `[`GetSite`](#classURH__ConfigSubsystem_1ac57c65eed848edcf1da47ff33ce073ee)`(const int32 & Key,`[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` & Value) const` | Gets the matchmaking site for a specific site id.
`public void `[`TriggerHotfixProcessing`](#classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6)`()` | If hotfix settings are set, this starts the process of applying them to unreal assets.
`public void `[`StartAppSettingsRefreshTimer`](#classURH__ConfigSubsystem_1ac4025b9a4e7668d077902c15884f1f84)`()` | Starts the polling for App Settings.
`public void `[`StopAppSettingsRefreshTimer`](#classURH__ConfigSubsystem_1a4d102b2b260b8931994a758fc0ea1854)`()` | Stops the polling for App Settings.
`public void `[`StartSiteSettingsRefreshTimer`](#classURH__ConfigSubsystem_1a753dbf006b2e15fb95cc3f040ae766d3)`()` | Starts the polling for Matchmaking Sites.
`public void `[`StopSiteSettingsRefreshTimer`](#classURH__ConfigSubsystem_1a1b2c233031a934d2083ce23897b7ff14)`()` | Stops the polling for Matchmaking Sites.
`public inline void `[`ClearSiteSettings`](#classURH__ConfigSubsystem_1a5f63acbd646cca46365c5fe223ab5af4)`()` | Clears all cached Matchmaking Sites.
`public inline bool `[`GetHotfixTestValue`](#classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4)`() const` | Gets if the hotfix system is enabled.
`protected TMap< FString, FString > `[`AppSettings`](#classURH__ConfigSubsystem_1acbb61ccb593c2ab63b88e724af77ac7b) | Map of app settings by name.
`protected FString `[`AppSettingsETag`](#classURH__ConfigSubsystem_1a8d386d5683aedd0d45ac56239f45eadd) | ETag of last Get App Settings call response.
`protected TMap< int32, `[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` > `[`SiteSettings`](#classURH__ConfigSubsystem_1a0733f9e945d3f00619aefaa9ce9309f2) | Map of matchmaking site settings by id.
`protected FRH_AutoPollerPtr `[`AppSettingsPoller`](#classURH__ConfigSubsystem_1a3fa83db7018f68e8cb4f22733629df09) | Poller responsible for App Settings.
`protected FRH_AutoPollerPtr `[`SiteSettingsPoller`](#classURH__ConfigSubsystem_1a76ed1ce43df46821204c9f1b4ce77f69) | Poller responsible for Site Settings.
`protected bool `[`bAutomaticallyPollConfigurationData`](#classURH__ConfigSubsystem_1aa0a4994a1e4728341c2c9d99cb23bf9f) | If set, automatically start the poller for App Settings.
`protected bool `[`bAutomaticallyApplyHotfixData`](#classURH__ConfigSubsystem_1ae6a1ea4e7a62149e8742979bcc8ad4e8) | If set, automatically use hotfix data in App Settings to modify local data.
`protected bool `[`bHotfixTestValue`](#classURH__ConfigSubsystem_1ad8f7a9544bd7e02d623c6706b26309d9) | debug value to test if the hotfix system is working properly.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b)`()` | Initializes the subsystem with defaults for its cached data.
`protected virtual void `[`OnFetchAppSettings`](#classURH__ConfigSubsystem_1abdfe9bdb927724998ee14a9ca74fef80)`(const RallyHereAPI::FResponse_GetAppSettingsClient & Resp)` | Handles the response to a Fetch App Settings call.

#### Members

#### `public FAppSettingsUpdatedDelegate `[`AppSettingsUpdatedDelegate`](#classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232) <a id="classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232"></a>

Delegate that can be listented to for whenever App Settings get updated from polling.

<br>
#### `public virtual void `[`Initialize`](#classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f)`()` <a id="classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482)`()` <a id="classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482"></a>

Safely tears down the subsystem.

<br>
#### `public void `[`FetchAppSettings`](#classURH__ConfigSubsystem_1ab48f6fcd6bbe61e8d3b8f9ef6f7996f8)`(const FRH_GenericSuccessDelegate & Delegate)` <a id="classURH__ConfigSubsystem_1ab48f6fcd6bbe61e8d3b8f9ef6f7996f8"></a>

Requests the server for the latest App Settings.

#### Parameters
* `Delegate` Delegate to call when the request is complete.

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
#### `public inline const TMap< int32, `[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` > & `[`GetSites`](#classURH__ConfigSubsystem_1a66b7e6bfd7544a8feeb934e970317131)`() const` <a id="classURH__ConfigSubsystem_1a66b7e6bfd7544a8feeb934e970317131"></a>

Gets the map of all the Matchmaking Sites.

#### Returns
Map of all Matchmaking Sites.

<br>
#### `public inline bool `[`GetAppSetting`](#classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055)`(const FString & Key,FString & Value) const` <a id="classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055"></a>

Gets the value of a specific App Setting.

#### Parameters
* `Key` Key of the App Setting to get the value of. 

* `Value` Value of the App Setting. 

#### Returns
if true, a Value was found for the Key.

<br>
#### `public inline bool `[`GetSite`](#classURH__ConfigSubsystem_1ac57c65eed848edcf1da47ff33ce073ee)`(const int32 & Key,`[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` & Value) const` <a id="classURH__ConfigSubsystem_1ac57c65eed848edcf1da47ff33ce073ee"></a>

Gets the matchmaking site for a specific site id.

#### Parameters
* `Key` The Site Id of the site to get. 

* `Value` The site information for the site. 

#### Returns
if true, a site was found for the Key.

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
#### `public void `[`StartSiteSettingsRefreshTimer`](#classURH__ConfigSubsystem_1a753dbf006b2e15fb95cc3f040ae766d3)`()` <a id="classURH__ConfigSubsystem_1a753dbf006b2e15fb95cc3f040ae766d3"></a>

Starts the polling for Matchmaking Sites.

<br>
#### `public void `[`StopSiteSettingsRefreshTimer`](#classURH__ConfigSubsystem_1a1b2c233031a934d2083ce23897b7ff14)`()` <a id="classURH__ConfigSubsystem_1a1b2c233031a934d2083ce23897b7ff14"></a>

Stops the polling for Matchmaking Sites.

<br>
#### `public inline void `[`ClearSiteSettings`](#classURH__ConfigSubsystem_1a5f63acbd646cca46365c5fe223ab5af4)`()` <a id="classURH__ConfigSubsystem_1a5f63acbd646cca46365c5fe223ab5af4"></a>

Clears all cached Matchmaking Sites.

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
#### `protected TMap< int32, `[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` > `[`SiteSettings`](#classURH__ConfigSubsystem_1a0733f9e945d3f00619aefaa9ce9309f2) <a id="classURH__ConfigSubsystem_1a0733f9e945d3f00619aefaa9ce9309f2"></a>

Map of matchmaking site settings by id.

<br>
#### `protected FRH_AutoPollerPtr `[`AppSettingsPoller`](#classURH__ConfigSubsystem_1a3fa83db7018f68e8cb4f22733629df09) <a id="classURH__ConfigSubsystem_1a3fa83db7018f68e8cb4f22733629df09"></a>

Poller responsible for App Settings.

<br>
#### `protected FRH_AutoPollerPtr `[`SiteSettingsPoller`](#classURH__ConfigSubsystem_1a76ed1ce43df46821204c9f1b4ce77f69) <a id="classURH__ConfigSubsystem_1a76ed1ce43df46821204c9f1b4ce77f69"></a>

Poller responsible for Site Settings.

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
#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b)`()` <a id="classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b"></a>

Initializes the subsystem with defaults for its cached data.

<br>
#### `protected virtual void `[`OnFetchAppSettings`](#classURH__ConfigSubsystem_1abdfe9bdb927724998ee14a9ca74fef80)`(const RallyHereAPI::FResponse_GetAppSettingsClient & Resp)` <a id="classURH__ConfigSubsystem_1abdfe9bdb927724998ee14a9ca74fef80"></a>

Handles the response to a Fetch App Settings call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
