---
title: RHStandardEvents::FCorrelationEndEvent Struct
---
This event is triggered to mark the end of tracking events. Typically triggered when the client gracefully is closed.

rh.correlation_end 
## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< FString >|[Reason](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationendevent/#structRHStandardEvents_1_1FCorrelationEndEvent_1a13520150a2320beaa4d3fb6e711e942c)|The reason for the correlation to end.|
|TOptional< float >|[DurationSeconds](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationendevent/#structRHStandardEvents_1_1FCorrelationEndEvent_1a2198feae504ef70955648fe7752b37d7)|The duration of the correlation.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationendevent/#structRHStandardEvents_1_1FCorrelationEndEvent_1a2c182c2aafe72419987a26a15e57708b)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationendevent/#structRHStandardEvents_1_1FCorrelationEndEvent_1a81d3592198e305c58b6ff55aa2aa36b5)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationendevent/#structRHStandardEvents_1_1FCorrelationEndEvent_1acbf3292d8eeeae548d011722719dbe22)(IAnalyticsProvider * Provider, const TOptional< FString > & InReason, const TOptional< float > & InDurationSeconds, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FCorrelationEndEvent](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationendevent/#structRHStandardEvents_1_1FCorrelationEndEvent_1ab67461755e3ea773980869285b599e8d)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1fcorrelationendevent/#structRHStandardEvents_1_1FCorrelationEndEvent_1a19410683fa4e5105f754323ce77be689)(IAnalyticsProvider * Provider)||
## Public Attributes



### `Reason` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a13520150a2320beaa4d3fb6e711e942c"></a>

`TOptional<FString> RHStandardEvents::FCorrelationEndEvent::Reason`

The reason for the correlation to end.




### `DurationSeconds` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a2198feae504ef70955648fe7752b37d7"></a>

`TOptional<float> RHStandardEvents::FCorrelationEndEvent::DurationSeconds`

The duration of the correlation.




### `CustomData` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a2c182c2aafe72419987a26a15e57708b"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FCorrelationEndEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a81d3592198e305c58b6ff55aa2aa36b5"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1acbf3292d8eeeae548d011722719dbe22"></a>

void Emit(IAnalyticsProvider * Provider, const TOptional< FString > & InReason, const TOptional< float > & InDurationSeconds, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const TOptional< FString > &|InReason|
|const TOptional< float > &|InDurationSeconds|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FCorrelationEndEvent` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1ab67461755e3ea773980869285b599e8d"></a>

 FCorrelationEndEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a19410683fa4e5105f754323ce77be689"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







