---
title: RHStandardEvents::FCorrelationStartEvent Struct
---
Event that is triggered at the start of the application and when we have generated a correlation_id to track events.

rh.correlation_start 
## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[PlatformName](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a8e604b52ad66462ed3bfeed0d636db82)|Used for tracking platform enumerations.List of possible values.|
|FString|[ClientBuildVersion](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a6cc8e387b5bbcba8603e9863b330646e)|The build version of the client.|
|FString|[EngineVersion](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1adc9fa712ac009d6a5a4c0bf59baab9f2)|The version of the engine.|
|FString|[IntegrationPluginVersion](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1aae577244f7c1ebff56e414a33c13fecb)|The version of the integration plugin.|
|FString|[ClientTimestamp](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a55a8d1162dcd1bd7f15fed4d5bfd2b73)|The client timestamp when the event was triggered.|
|TOptional< FString >|[ServerTimestamp](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1ad9506893fe3a9e17b618bcb18627b6f8)|The client's estimated server timestamp when the event was triggered.|
|TOptional< FString >|[CommandLineArg](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a3747872c0a5f42f5c2bd8f48165b058a)|The command line arguments passed to the client.|
|TOptional< bool >|[IsEditor](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a2dd4d71e29afe5f6ae4f0a5874ace098)|Whether the client is running in editor mode.|
|TOptional< FString >|[Mode](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a44a1e5df276714002007b51441393896)|The mode the client is running in.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a8d0e6c9968c9c4268ccb31d72aea70e2)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a099785451e7c93faef15da3a4156a853)()||
|void RALLYHEREINTEGRATION_API|[AutoEmit](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a665384dfa091b159c2d5665a46588642)(IAnalyticsProvider * Provider, UGameInstance * pGameInstance)|automaticly harvest data and emit the event|
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a32923a81c7c88ff5760d606f7758dbe3)(IAnalyticsProvider * Provider, const FString & InPlatformName, const FString & InClientBuildVersion, const FString & InEngineVersion, const FString & InIntegrationPluginVersion, const FString & InClientTimestamp, const TOptional< FString > & InServerTimestamp, const TOptional< FString > & InCommandLineArg, TOptional< bool > InIsEditor, const TOptional< FString > & InMode, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FCorrelationStartEvent](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a1a51eff01e7eb9d12b21c31bf06b8070)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationstartevent/#structRHStandardEvents_1_1FCorrelationStartEvent_1a0ccb1224987fdfcd710ce798dbedf13d)(IAnalyticsProvider * Provider)||
## Public Attributes



### `PlatformName` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a8e604b52ad66462ed3bfeed0d636db82"></a>

`FString RHStandardEvents::FCorrelationStartEvent::PlatformName`

Used for tracking platform enumerations.List of possible values.




### `ClientBuildVersion` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a6cc8e387b5bbcba8603e9863b330646e"></a>

`FString RHStandardEvents::FCorrelationStartEvent::ClientBuildVersion`

The build version of the client.




### `EngineVersion` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1adc9fa712ac009d6a5a4c0bf59baab9f2"></a>

`FString RHStandardEvents::FCorrelationStartEvent::EngineVersion`

The version of the engine.




### `IntegrationPluginVersion` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1aae577244f7c1ebff56e414a33c13fecb"></a>

`FString RHStandardEvents::FCorrelationStartEvent::IntegrationPluginVersion`

The version of the integration plugin.




### `ClientTimestamp` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a55a8d1162dcd1bd7f15fed4d5bfd2b73"></a>

`FString RHStandardEvents::FCorrelationStartEvent::ClientTimestamp`

The client timestamp when the event was triggered.




### `ServerTimestamp` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1ad9506893fe3a9e17b618bcb18627b6f8"></a>

`TOptional<FString> RHStandardEvents::FCorrelationStartEvent::ServerTimestamp`

The client's estimated server timestamp when the event was triggered.




### `CommandLineArg` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a3747872c0a5f42f5c2bd8f48165b058a"></a>

`TOptional<FString> RHStandardEvents::FCorrelationStartEvent::CommandLineArg`

The command line arguments passed to the client.




### `IsEditor` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a2dd4d71e29afe5f6ae4f0a5874ace098"></a>

`TOptional<bool> RHStandardEvents::FCorrelationStartEvent::IsEditor`

Whether the client is running in editor mode.




### `Mode` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a44a1e5df276714002007b51441393896"></a>

`TOptional<FString> RHStandardEvents::FCorrelationStartEvent::Mode`

The mode the client is running in.




### `CustomData` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a8d0e6c9968c9c4268ccb31d72aea70e2"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FCorrelationStartEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a099785451e7c93faef15da3a4156a853"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `AutoEmit` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a665384dfa091b159c2d5665a46588642"></a>

void RALLYHEREINTEGRATION_API AutoEmit(IAnalyticsProvider * Provider, UGameInstance * pGameInstance)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|UGameInstance *|pGameInstance|

#### Description

automaticly harvest data and emit the event




### `Emit` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a32923a81c7c88ff5760d606f7758dbe3"></a>

void Emit(IAnalyticsProvider * Provider, const FString & InPlatformName, const FString & InClientBuildVersion, const FString & InEngineVersion, const FString & InIntegrationPluginVersion, const FString & InClientTimestamp, const TOptional< FString > & InServerTimestamp, const TOptional< FString > & InCommandLineArg, TOptional< bool > InIsEditor, const TOptional< FString > & InMode, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const FString &|InPlatformName|
|const FString &|InClientBuildVersion|
|const FString &|InEngineVersion|
|const FString &|InIntegrationPluginVersion|
|const FString &|InClientTimestamp|
|const TOptional< FString > &|InServerTimestamp|
|const TOptional< FString > &|InCommandLineArg|
|TOptional< bool >|InIsEditor|
|const TOptional< FString > &|InMode|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FCorrelationStartEvent` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a1a51eff01e7eb9d12b21c31bf06b8070"></a>

 FCorrelationStartEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a0ccb1224987fdfcd710ce798dbedf13d"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







