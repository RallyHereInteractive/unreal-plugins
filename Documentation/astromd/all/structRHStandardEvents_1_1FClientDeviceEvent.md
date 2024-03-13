---
title: RHStandardEvents::FClientDeviceEvent Struct
---
Records the first time a user launches an app and when device information changes.

rh.client_device 
## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< FString >|[CpuType](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a8a9cb7125da22db2fca5e9f37b577a8c)|The type of CPU.|
|TOptional< int32 >|[CpuCores](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a600aefe9173f574976a7b60235cf2daf)|The number of logical CPU cores.|
|TOptional< FString >|[GpuType](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a6dd0de7fad58903b5f80f352144a1ef6)|The reference of the GPU(brand name and model)|
|TOptional< int32 >|[ScreenHeight](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1ad76cec719196daa0ed83f36e873148f4)|Maximum known number of height pixels(dpi)|
|TOptional< int32 >|[ScreenWidth](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a3d248cbe9809b22653d10a72f08130a0)|Maximum known number of width pixels(dpi)|
|TOptional< int32 >|[RamTotal](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a8df7f359bd078ae6622a98d0e70aa35a)|Size of the RAM on the device in megabytes.|
|TOptional< int32 >|[RamAvailable](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1ada61fffa384c031f8f39b2db6fab2801)|Size of the available RAM on the device in megabytes.|
|TOptional< FString >|[Ip](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a8dbd86970e47d2e6cc456df43f61c92a)|This is the IP of the game client.|
|TOptional< FString >|[DeviceType](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a52fbd8a4229809e92327d3e6f83cc4c5)|This will be then platform the game client is running on.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a341236af57be2415969ac60cc296c7c5)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a7ce72fd7a821fc503896821201a89d41)()||
|void RALLYHEREINTEGRATION_API|[AutoEmit](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1a8f688a577c6186f211f28804e14e8d74)(IAnalyticsProvider * Provider, class UGameInstance * pGameInstance)|automaticly harvest data and emit the event|
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1aa4d765b547a77bd072bc3f427b64cd96)(IAnalyticsProvider * Provider, const TOptional< FString > & InCpuType, const TOptional< int32 > & InCpuCores, const TOptional< FString > & InGpuType, const TOptional< int32 > & InScreenHeight, const TOptional< int32 > & InScreenWidth, const TOptional< int32 > & InRamTotal, const TOptional< int32 > & InRamAvailable, const TOptional< FString > & InIp, const TOptional< FString > & InDeviceType, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FClientDeviceEvent](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1ad549fc630bc30c9f77f2d5f1a6c39ac3)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1fclientdeviceevent/#structRHStandardEvents_1_1FClientDeviceEvent_1acfb344c95e558432c3a3e07311be7fc9)(IAnalyticsProvider * Provider)||
## Public Attributes



### `CpuType` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a8a9cb7125da22db2fca5e9f37b577a8c"></a>

`TOptional<FString> RHStandardEvents::FClientDeviceEvent::CpuType`

The type of CPU.




### `CpuCores` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a600aefe9173f574976a7b60235cf2daf"></a>

`TOptional<int32> RHStandardEvents::FClientDeviceEvent::CpuCores`

The number of logical CPU cores.




### `GpuType` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a6dd0de7fad58903b5f80f352144a1ef6"></a>

`TOptional<FString> RHStandardEvents::FClientDeviceEvent::GpuType`

The reference of the GPU(brand name and model)




### `ScreenHeight` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1ad76cec719196daa0ed83f36e873148f4"></a>

`TOptional<int32> RHStandardEvents::FClientDeviceEvent::ScreenHeight`

Maximum known number of height pixels(dpi)




### `ScreenWidth` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a3d248cbe9809b22653d10a72f08130a0"></a>

`TOptional<int32> RHStandardEvents::FClientDeviceEvent::ScreenWidth`

Maximum known number of width pixels(dpi)




### `RamTotal` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a8df7f359bd078ae6622a98d0e70aa35a"></a>

`TOptional<int32> RHStandardEvents::FClientDeviceEvent::RamTotal`

Size of the RAM on the device in megabytes.




### `RamAvailable` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1ada61fffa384c031f8f39b2db6fab2801"></a>

`TOptional<int32> RHStandardEvents::FClientDeviceEvent::RamAvailable`

Size of the available RAM on the device in megabytes.




### `Ip` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a8dbd86970e47d2e6cc456df43f61c92a"></a>

`TOptional<FString> RHStandardEvents::FClientDeviceEvent::Ip`

This is the IP of the game client.




### `DeviceType` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a52fbd8a4229809e92327d3e6f83cc4c5"></a>

`TOptional<FString> RHStandardEvents::FClientDeviceEvent::DeviceType`

This will be then platform the game client is running on.




### `CustomData` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a341236af57be2415969ac60cc296c7c5"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FClientDeviceEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a7ce72fd7a821fc503896821201a89d41"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `AutoEmit` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a8f688a577c6186f211f28804e14e8d74"></a>

void RALLYHEREINTEGRATION_API AutoEmit(IAnalyticsProvider * Provider, class UGameInstance * pGameInstance)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|class UGameInstance *|pGameInstance|

#### Description

automaticly harvest data and emit the event




### `Emit` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1aa4d765b547a77bd072bc3f427b64cd96"></a>

void Emit(IAnalyticsProvider * Provider, const TOptional< FString > & InCpuType, const TOptional< int32 > & InCpuCores, const TOptional< FString > & InGpuType, const TOptional< int32 > & InScreenHeight, const TOptional< int32 > & InScreenWidth, const TOptional< int32 > & InRamTotal, const TOptional< int32 > & InRamAvailable, const TOptional< FString > & InIp, const TOptional< FString > & InDeviceType, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const TOptional< FString > &|InCpuType|
|const TOptional< int32 > &|InCpuCores|
|const TOptional< FString > &|InGpuType|
|const TOptional< int32 > &|InScreenHeight|
|const TOptional< int32 > &|InScreenWidth|
|const TOptional< int32 > &|InRamTotal|
|const TOptional< int32 > &|InRamAvailable|
|const TOptional< FString > &|InIp|
|const TOptional< FString > &|InDeviceType|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FClientDeviceEvent` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1ad549fc630bc30c9f77f2d5f1a6c39ac3"></a>

 FClientDeviceEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1acfb344c95e558432c3a3e07311be7fc9"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







