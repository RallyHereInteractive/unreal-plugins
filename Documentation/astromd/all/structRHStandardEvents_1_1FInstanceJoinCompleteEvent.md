---
title: RHStandardEvents::FInstanceJoinCompleteEvent Struct
---
This event is triggered when the player / game client has attempted to connect to the instance.This event will capture both the success and the failure to connect to an instance.

rh.instnace_join_complete 
## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[IsSuccess](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7f22215472927a1e1560f110957b381a)|Whether or not the join was an overall success.|
|TOptional< FString >|[SessionId](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1afe91b49ca38affef3d630953d8fcb112)|The session_id of the instance the player is attempting to join.|
|TOptional< FString >|[InstanceId](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1ab9e632d1a19e316929798e3b252bd71a)|The instance_id of the instance the player is attempting to join.|
|TOptional< FString >|[Reason](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a8295d75bbfd9a941c64eeb68b8722c6d)|The reason for the failure to join the instance.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7a60eeaf37414665063ad1a6386fb40c)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1ab66b6a12d490f32351f28f9c6e348102)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a813d1afb69559e9690c398bf238eb88b)(IAnalyticsProvider * Provider, bool InIsSuccess, const TOptional< FString > & InSessionId, const TOptional< FString > & InInstanceId, const TOptional< FString > & InReason, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FInstanceJoinCompleteEvent](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a90fc553eeebc4e89006ed2709011fc10)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1finstancejoincompleteevent/#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1aef5e96360a6ac8389b5371a78efddf98)(IAnalyticsProvider * Provider)||
## Public Attributes



### `IsSuccess` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7f22215472927a1e1560f110957b381a"></a>

`bool RHStandardEvents::FInstanceJoinCompleteEvent::IsSuccess`

Whether or not the join was an overall success.




### `SessionId` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1afe91b49ca38affef3d630953d8fcb112"></a>

`TOptional<FString> RHStandardEvents::FInstanceJoinCompleteEvent::SessionId`

The session_id of the instance the player is attempting to join.




### `InstanceId` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1ab9e632d1a19e316929798e3b252bd71a"></a>

`TOptional<FString> RHStandardEvents::FInstanceJoinCompleteEvent::InstanceId`

The instance_id of the instance the player is attempting to join.




### `Reason` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a8295d75bbfd9a941c64eeb68b8722c6d"></a>

`TOptional<FString> RHStandardEvents::FInstanceJoinCompleteEvent::Reason`

The reason for the failure to join the instance.




### `CustomData` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7a60eeaf37414665063ad1a6386fb40c"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FInstanceJoinCompleteEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1ab66b6a12d490f32351f28f9c6e348102"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a813d1afb69559e9690c398bf238eb88b"></a>

void Emit(IAnalyticsProvider * Provider, bool InIsSuccess, const TOptional< FString > & InSessionId, const TOptional< FString > & InInstanceId, const TOptional< FString > & InReason, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|bool|InIsSuccess|
|const TOptional< FString > &|InSessionId|
|const TOptional< FString > &|InInstanceId|
|const TOptional< FString > &|InReason|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FInstanceJoinCompleteEvent` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a90fc553eeebc4e89006ed2709011fc10"></a>

 FInstanceJoinCompleteEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1aef5e96360a6ac8389b5371a78efddf98"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







