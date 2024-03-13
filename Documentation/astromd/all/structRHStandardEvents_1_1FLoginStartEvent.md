---
title: RHStandardEvents::FLoginStartEvent Struct
---
This event is triggered at the start of the client login process.

rh.login_start 
## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< FString >|[PlatformDisplayName](/unreal-plugins/all/structrhstandardevents_1_1floginstartevent/#structRHStandardEvents_1_1FLoginStartEvent_1ad86dab7ee24d5268c6a919f4bd940bee)|Platform username / gamertag of the player.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1floginstartevent/#structRHStandardEvents_1_1FLoginStartEvent_1aaa8c15c1d4484c3ea1a940b5432b6999)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1floginstartevent/#structRHStandardEvents_1_1FLoginStartEvent_1a036a98c95208d20afbe29d1d982489bc)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1floginstartevent/#structRHStandardEvents_1_1FLoginStartEvent_1a4734006bd00de92e32f88bdc29b0827e)(IAnalyticsProvider * Provider, const TOptional< FString > & InPlatformDisplayName, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FLoginStartEvent](/unreal-plugins/all/structrhstandardevents_1_1floginstartevent/#structRHStandardEvents_1_1FLoginStartEvent_1ade639811664eb76689e326042f554bca)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1floginstartevent/#structRHStandardEvents_1_1FLoginStartEvent_1a21dac598f0c7d0c9a06f0535d8eab4ac)(IAnalyticsProvider * Provider)||
## Public Attributes



### `PlatformDisplayName` <a id="structRHStandardEvents_1_1FLoginStartEvent_1ad86dab7ee24d5268c6a919f4bd940bee"></a>

`TOptional<FString> RHStandardEvents::FLoginStartEvent::PlatformDisplayName`

Platform username / gamertag of the player.




### `CustomData` <a id="structRHStandardEvents_1_1FLoginStartEvent_1aaa8c15c1d4484c3ea1a940b5432b6999"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FLoginStartEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FLoginStartEvent_1a036a98c95208d20afbe29d1d982489bc"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FLoginStartEvent_1a4734006bd00de92e32f88bdc29b0827e"></a>

void Emit(IAnalyticsProvider * Provider, const TOptional< FString > & InPlatformDisplayName, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const TOptional< FString > &|InPlatformDisplayName|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FLoginStartEvent` <a id="structRHStandardEvents_1_1FLoginStartEvent_1ade639811664eb76689e326042f554bca"></a>

 FLoginStartEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FLoginStartEvent_1a21dac598f0c7d0c9a06f0535d8eab4ac"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







