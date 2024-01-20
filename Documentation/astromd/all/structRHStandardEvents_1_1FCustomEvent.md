---
title: RHStandardEvents::FCustomEvent Struct
---
This is a wrapper for providing custom event data.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[EventName](/unreal-plugins/all/structrhstandardevents_1_1fcustomevent/#structRHStandardEvents_1_1FCustomEvent_1ab04513a6304068186509da1913a2896a)|Name of the event.|
|TArray< FAnalyticsEventAttribute >|[Attributes](/unreal-plugins/all/structrhstandardevents_1_1fcustomevent/#structRHStandardEvents_1_1FCustomEvent_1af6f0ea633eef4ceab7a4a985cb57fff0)|Attribute list.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1fcustomevent/#structRHStandardEvents_1_1FCustomEvent_1aa15d1cedc9143c218dc3db2506e32dc7)|custom data fields (will be auto-prefixed with custom data prefix)|
||[FCustomEvent](/unreal-plugins/all/structrhstandardevents_1_1fcustomevent/#structRHStandardEvents_1_1FCustomEvent_1add4d8214b9316a09b1974046126b6787)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1fcustomevent/#structRHStandardEvents_1_1FCustomEvent_1a9c9fe99fea36643abbf5082ea6c8ce6e)(IAnalyticsProvider * Provider)||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1fcustomevent/#structRHStandardEvents_1_1FCustomEvent_1a9ca94b887e0174177972c3a0718fc1a7)(IAnalyticsProvider * Provider, const FString & InEventName, const TArray< FAnalyticsEventAttribute > & InAttributes, const TOptional< TMap< FString, FString >> & InCustomData)||
## Public Attributes



### `EventName` <a id="structRHStandardEvents_1_1FCustomEvent_1ab04513a6304068186509da1913a2896a"></a>

`FString RHStandardEvents::FCustomEvent::EventName`

Name of the event.




### `Attributes` <a id="structRHStandardEvents_1_1FCustomEvent_1af6f0ea633eef4ceab7a4a985cb57fff0"></a>

`TArray<FAnalyticsEventAttribute> RHStandardEvents::FCustomEvent::Attributes`

Attribute list.




### `CustomData` <a id="structRHStandardEvents_1_1FCustomEvent_1aa15d1cedc9143c218dc3db2506e32dc7"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FCustomEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Functions



### `FCustomEvent` <a id="structRHStandardEvents_1_1FCustomEvent_1add4d8214b9316a09b1974046126b6787"></a>

 FCustomEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FCustomEvent_1a9c9fe99fea36643abbf5082ea6c8ce6e"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







## Public Static Functions



### `Emit` <a id="structRHStandardEvents_1_1FCustomEvent_1a9ca94b887e0174177972c3a0718fc1a7"></a>

void Emit(IAnalyticsProvider * Provider, const FString & InEventName, const TArray< FAnalyticsEventAttribute > & InAttributes, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const FString &|InEventName|
|const TArray< FAnalyticsEventAttribute > &|InAttributes|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







