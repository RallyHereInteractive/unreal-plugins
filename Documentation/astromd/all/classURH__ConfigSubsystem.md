---
title: URH_ConfigSubsystem Class
---Inherits from [URH_GameInstanceSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystemplugin/#classURH__GameInstanceSubsystemPlugin)

Config Subsystem used for interfacing with configuration coming from the core servers.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FAppSettingsUpdatedDelegate|[AppSettingsUpdatedDelegate](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232)|Delegate that can be listented to for whenever App Settings get updated from polling.|
|FSettingsUpdatedDelegate|[OnSettingsUpdated](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1ae1e142e7cd1617f8c6dfea4025da1f51)|Delegate that can be listented to for whenever Settings get updated from polling.|
|FSettingsUpdatedDynamicDelegate|[BLUEPRINT_OnSettingsUpdated](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a6cd9170e3b5adf90d10225eeaeeab310)|Delegate that can be listented to for whenever Settings get updated from polling.|
|TMap< FString, FString >|[AppSettings](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1acbb61ccb593c2ab63b88e724af77ac7b)|Map of app settings by name.|
|FString|[AppSettingsETag](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a8d386d5683aedd0d45ac56239f45eadd)|ETag of last Get App Settings call response.|
|FRH_AutoPollerPtr|[AppSettingsPoller](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a3fa83db7018f68e8cb4f22733629df09)|Poller responsible for App Settings.|
|bool|[bAutomaticallyPollConfigurationData](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1aa0a4994a1e4728341c2c9d99cb23bf9f)|If set, automatically start the poller for App Settings.|
|bool|[bAutomaticallyApplyHotfixData](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1ae6a1ea4e7a62149e8742979bcc8ad4e8)|If set, automatically use hotfix data in App Settings to modify local data.|
|bool|[bHotfixTestValue](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1ad8f7a9544bd7e02d623c6706b26309d9)|debug value to test if the hotfix system is working properly.|
|[FRH_ServerTimeCache](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache)|[ServerTimeCache](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a89412dc101f8e23d7715719f46ac079a)|Cache data for storing time information from the API.|
|friend|[FRH_FetchAppSettingsHelper](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a58b61e503c3d9b4110dc58144f480982)||
|void|[Initialize](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482)()|Safely tears down the subsystem.|
|void|[FetchAppSettings](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1ad403c4ca8a27ea7c655e90a284dc78d5)(const FRH_GenericSuccessWithErrorBlock & Delegate)|Requests the server for the latest App Settings.|
|FORCEINLINE void|[FetchAppSettings](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a50fe9c7e6cff1c087b90a9a260589d42)(const FRH_GenericSuccessDelegate & Delegate)||
|void|[PollAppSettings](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e)(const FRH_PollCompleteFunc & Delegate)|Pulses a FetchAppSettings call for the polling of App Settings.|
|const TMap< FString, FString > &|[GetAppSettings](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885)()|Gets the map of all the App Settings and their values.|
|bool|[GetAppSetting](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055)(const FString & Key, FString & Value)|Gets the value of a specific App Setting.|
|void|[TriggerHotfixProcessing](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6)()|If hotfix settings are set, this starts the process of applying them to unreal assets.|
|void|[StartAppSettingsRefreshTimer](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1ac4025b9a4e7668d077902c15884f1f84)()|Starts the polling for App Settings.|
|void|[StopAppSettingsRefreshTimer](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a4d102b2b260b8931994a758fc0ea1854)()|Stops the polling for App Settings.|
|void|[RefreshServerTimeCache](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1afeee33613fe6dfd83ad7b2a8b8a82397)(const FRH_GenericSuccessWithErrorBlock & Delegate)|Requests the server time cache to be updated.|
|FORCEINLINE void|[RefreshServerTimeCache](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a40ee1a749620c20841273b8ace40d721)(const FRH_GenericSuccessBlock & Delegate)||
|void|[BLUEPRINT_RefreshServerTimeCache](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a5c4610a7f6baf7d8b3d6b385b8318232)(const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)||
|const [FRH_ServerTimeCache](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache) &|[GetServerTimeCache](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a15bf58f4b62f9d9f638c2ceae633c474)()|Gets the server time cache object.|
|bool|[GetServerTime](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a946dd5b6f7306f98540241a22a02bb4a)(FDateTime & Time)|Gets the approximate server time, if we have received one.|
|bool|[GetServerTimeDrift](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a8c858f002ca9de0d0c656e2dad1d08a8)(FTimespan & Timespan)|Gets the approximate server time, if we have received one.|
|bool|[GetHotfixTestValue](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4)()|Gets if the hotfix system is enabled.|
|void|[InitPropertiesWithDefaultValues](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b)()|Initializes the subsystem with defaults for its cached data.|
|void|[OnFetchAppSettings](/unreal-plugins/all/classurh__configsubsystem/#classURH__ConfigSubsystem_1abdfe9bdb927724998ee14a9ca74fef80)(const RallyHereAPI::FResponse_GetAppSettingsClient & Resp)|Handles the response to a Fetch App Settings call.|
## Public Attributes



### `AppSettingsUpdatedDelegate` <a id="classURH__ConfigSubsystem_1a4a525f2ecb90941d1fc604cf9530f232"></a>

`FAppSettingsUpdatedDelegate URH_ConfigSubsystem::AppSettingsUpdatedDelegate`

Delegate that can be listented to for whenever App Settings get updated from polling.




### `OnSettingsUpdated` <a id="classURH__ConfigSubsystem_1ae1e142e7cd1617f8c6dfea4025da1f51"></a>

`FSettingsUpdatedDelegate URH_ConfigSubsystem::OnSettingsUpdated`

Delegate that can be listented to for whenever Settings get updated from polling.




### `BLUEPRINT_OnSettingsUpdated` <a id="classURH__ConfigSubsystem_1a6cd9170e3b5adf90d10225eeaeeab310"></a>

`FSettingsUpdatedDynamicDelegate URH_ConfigSubsystem::BLUEPRINT_OnSettingsUpdated`

Delegate that can be listented to for whenever Settings get updated from polling.





## Protected Attributes



### `AppSettings` <a id="classURH__ConfigSubsystem_1acbb61ccb593c2ab63b88e724af77ac7b"></a>

`TMap<FString, FString> URH_ConfigSubsystem::AppSettings`

Map of app settings by name.




### `AppSettingsETag` <a id="classURH__ConfigSubsystem_1a8d386d5683aedd0d45ac56239f45eadd"></a>

`FString URH_ConfigSubsystem::AppSettingsETag`

ETag of last Get App Settings call response.




### `AppSettingsPoller` <a id="classURH__ConfigSubsystem_1a3fa83db7018f68e8cb4f22733629df09"></a>

`FRH_AutoPollerPtr URH_ConfigSubsystem::AppSettingsPoller`

Poller responsible for App Settings.




### `bAutomaticallyPollConfigurationData` <a id="classURH__ConfigSubsystem_1aa0a4994a1e4728341c2c9d99cb23bf9f"></a>

`bool URH_ConfigSubsystem::bAutomaticallyPollConfigurationData`

If set, automatically start the poller for App Settings.




### `bAutomaticallyApplyHotfixData` <a id="classURH__ConfigSubsystem_1ae6a1ea4e7a62149e8742979bcc8ad4e8"></a>

`bool URH_ConfigSubsystem::bAutomaticallyApplyHotfixData`

If set, automatically use hotfix data in App Settings to modify local data.




### `bHotfixTestValue` <a id="classURH__ConfigSubsystem_1ad8f7a9544bd7e02d623c6706b26309d9"></a>

`bool URH_ConfigSubsystem::bHotfixTestValue`

debug value to test if the hotfix system is working properly.




### `ServerTimeCache` <a id="classURH__ConfigSubsystem_1a89412dc101f8e23d7715719f46ac079a"></a>

`FRH_ServerTimeCache URH_ConfigSubsystem::ServerTimeCache`

Cache data for storing time information from the API.





## Friends



### `FRH_FetchAppSettingsHelper` <a id="classURH__ConfigSubsystem_1a58b61e503c3d9b4110dc58144f480982"></a>

`friend class FRH_FetchAppSettingsHelper`

#### Parameters

| Type | Name |
|------|------|
|FRH_FetchAppSettingsHelper||

#### Description







## Public Functions



### `Initialize` <a id="classURH__ConfigSubsystem_1a5b2aa7a3ec7d38edff89acd5419dea8f"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__ConfigSubsystem_1a3772586395855d20b68419525357d482"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `FetchAppSettings` <a id="classURH__ConfigSubsystem_1ad403c4ca8a27ea7c655e90a284dc78d5"></a>

void FetchAppSettings(const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description

Requests the server for the latest App Settings.


#### Parameters

Delegate
: Delegate to call when the request is complete. 



### `FetchAppSettings` <a id="classURH__ConfigSubsystem_1a50fe9c7e6cff1c087b90a9a260589d42"></a>

FORCEINLINE void FetchAppSettings(const FRH_GenericSuccessDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessDelegate &|Delegate|

#### Description






### `PollAppSettings` <a id="classURH__ConfigSubsystem_1af54aaef08b3ea1cde7002a1d9c799f5e"></a>

void PollAppSettings(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Pulses a FetchAppSettings call for the polling of App Settings.


#### Parameters

Delegate
: Delegate to call when the request is complete. 



### `GetAppSettings` <a id="classURH__ConfigSubsystem_1a5dc66896184c8dfb91dd2be05adbf885"></a>

const TMap< FString, FString > & GetAppSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the map of all the App Settings and their values.



#### Returns
Map of all the App Settings and their values 



### `GetAppSetting` <a id="classURH__ConfigSubsystem_1aa720f15382278f6dc7843fd813f7c055"></a>

bool GetAppSetting(const FString & Key, FString & Value)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Key|
|FString &|Value|

#### Description

Gets the value of a specific App Setting.


#### Parameters

Key
: Key of the App Setting to get the value of. 
Value
: Value of the App Setting. 

#### Returns
if true, a Value was found for the Key. 



### `TriggerHotfixProcessing` <a id="classURH__ConfigSubsystem_1a524f29aaf89857bd7bbb75ee8a4a47a6"></a>

void TriggerHotfixProcessing()

#### Parameters

| Type | Name |
|------|------|

#### Description

If hotfix settings are set, this starts the process of applying them to unreal assets.




### `StartAppSettingsRefreshTimer` <a id="classURH__ConfigSubsystem_1ac4025b9a4e7668d077902c15884f1f84"></a>

void StartAppSettingsRefreshTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Starts the polling for App Settings.




### `StopAppSettingsRefreshTimer` <a id="classURH__ConfigSubsystem_1a4d102b2b260b8931994a758fc0ea1854"></a>

void StopAppSettingsRefreshTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Stops the polling for App Settings.




### `RefreshServerTimeCache` <a id="classURH__ConfigSubsystem_1afeee33613fe6dfd83ad7b2a8b8a82397"></a>

void RefreshServerTimeCache(const FRH_GenericSuccessWithErrorBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessWithErrorBlock &|Delegate|

#### Description

Requests the server time cache to be updated.




### `RefreshServerTimeCache` <a id="classURH__ConfigSubsystem_1a40ee1a749620c20841273b8ace40d721"></a>

FORCEINLINE void RefreshServerTimeCache(const FRH_GenericSuccessBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessBlock &|Delegate|

#### Description






### `BLUEPRINT_RefreshServerTimeCache` <a id="classURH__ConfigSubsystem_1a5c4610a7f6baf7d8b3d6b385b8318232"></a>

void BLUEPRINT_RefreshServerTimeCache(const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericSuccessWithErrorDynamicDelegate &|Delegate|

#### Description






### `GetServerTimeCache` <a id="classURH__ConfigSubsystem_1a15bf58f4b62f9d9f638c2ceae633c474"></a>

const [FRH_ServerTimeCache](/unreal-plugins/all/structfrh__servertimecache/#structFRH__ServerTimeCache) & GetServerTimeCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the server time cache object.




### `GetServerTime` <a id="classURH__ConfigSubsystem_1a946dd5b6f7306f98540241a22a02bb4a"></a>

bool GetServerTime(FDateTime & Time)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|Time|

#### Description

Gets the approximate server time, if we have received one.


#### Parameters

Time
: The approximate server time. 

#### Returns
True if we have received a server time, false otherwise. 



### `GetServerTimeDrift` <a id="classURH__ConfigSubsystem_1a8c858f002ca9de0d0c656e2dad1d08a8"></a>

bool GetServerTimeDrift(FTimespan & Timespan)

#### Parameters

| Type | Name |
|------|------|
|FTimespan &|Timespan|

#### Description

Gets the approximate server time, if we have received one.


#### Parameters

Timespan
: The approximate server time drift 

#### Returns
True if we have received a server time, false otherwise. 



### `GetHotfixTestValue` <a id="classURH__ConfigSubsystem_1a36219ba1c46c10df675d0fe546fc31b4"></a>

bool GetHotfixTestValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the hotfix system is enabled.



#### Returns
Gets if enabled. 




## Protected Functions



### `InitPropertiesWithDefaultValues` <a id="classURH__ConfigSubsystem_1ad979b4e471d7be71b35798bd79547e7b"></a>

void InitPropertiesWithDefaultValues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initializes the subsystem with defaults for its cached data.




### `OnFetchAppSettings` <a id="classURH__ConfigSubsystem_1abdfe9bdb927724998ee14a9ca74fef80"></a>

void OnFetchAppSettings(const RallyHereAPI::FResponse_GetAppSettingsClient & Resp)

#### Parameters

| Type | Name |
|------|------|
|const RallyHereAPI::FResponse_GetAppSettingsClient &|Resp|

#### Description

Handles the response to a Fetch App Settings call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 




