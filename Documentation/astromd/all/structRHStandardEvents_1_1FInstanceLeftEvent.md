---
title: RHStandardEvents::FInstanceLeftEvent Struct
---
This event is triggered when a player / game client has disconnected from the instance.

rh.instance_left 
## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< FString >|[SessionId](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent_1a137db99dea205b6820ee4012be508b8d)|The session_id of the instance the player is leaving.|
|TOptional< FString >|[InstanceId](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent_1ad43fed5658c18978918684d96c785306)|The instance_id of the instance the player is leaving.|
|TOptional< FString >|[Reason](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent_1a686540f637f62130ffc392ede61f09f9)|The reason for the player leaving the instance.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent_1af42085b7b056b6dd38e169dd0342811e)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent_1ade2f8118927af711cd31242f2a02a9fd)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent_1af856fd1e20ee5d8eb69688c636593e00)(IAnalyticsProvider * Provider, const TOptional< FString > & InSessionId, const TOptional< FString > & InInstanceId, const TOptional< FString > & InReason, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FInstanceLeftEvent](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent_1a698bd9d2e86ef8f5956b84286c677ba6)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1finstanceleftevent/#structRHStandardEvents_1_1FInstanceLeftEvent_1acb0af23c65982c32df6644f4b4a82b6f)(IAnalyticsProvider * Provider)||
## Public Attributes



### `SessionId` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1a137db99dea205b6820ee4012be508b8d"></a>

`TOptional<FString> RHStandardEvents::FInstanceLeftEvent::SessionId`

The session_id of the instance the player is leaving.




### `InstanceId` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1ad43fed5658c18978918684d96c785306"></a>

`TOptional<FString> RHStandardEvents::FInstanceLeftEvent::InstanceId`

The instance_id of the instance the player is leaving.




### `Reason` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1a686540f637f62130ffc392ede61f09f9"></a>

`TOptional<FString> RHStandardEvents::FInstanceLeftEvent::Reason`

The reason for the player leaving the instance.




### `CustomData` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1af42085b7b056b6dd38e169dd0342811e"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FInstanceLeftEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1ade2f8118927af711cd31242f2a02a9fd"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1af856fd1e20ee5d8eb69688c636593e00"></a>

void Emit(IAnalyticsProvider * Provider, const TOptional< FString > & InSessionId, const TOptional< FString > & InInstanceId, const TOptional< FString > & InReason, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const TOptional< FString > &|InSessionId|
|const TOptional< FString > &|InInstanceId|
|const TOptional< FString > &|InReason|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FInstanceLeftEvent` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1a698bd9d2e86ef8f5956b84286c677ba6"></a>

 FInstanceLeftEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1acb0af23c65982c32df6644f4b4a82b6f"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







