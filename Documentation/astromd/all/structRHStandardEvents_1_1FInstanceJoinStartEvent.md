---
title: RHStandardEvents::FInstanceJoinStartEvent Struct
---
This event is triggered when the player / game client has an instance to connect to and has started the process to connect to it.

rh.instance_join_start 
## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< FString >|[SessionId](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent_1ac697b9f001444fb9d7485ecfe41630b0)|The session_id of the instance the player is attempting to join.|
|TOptional< FString >|[InstanceId](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a1e83a69a7bb5bfe0ceb77535c1d2f185)|The instance_id of the instance the player is attempting to join.|
|TOptional< FString >|[ConnectionString](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a133d73e2a9d924f03beb8701a94fa153)|The connection string of the instance the player is attempting to join.|
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a809a4e3ad455ea11f699db5e96c823c0)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a383f2d4d5687c118b047867205c05f4c)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent_1ab549fa7349882f87e8ee64656fc60158)(IAnalyticsProvider * Provider, const TOptional< FString > & InSessionId, const TOptional< FString > & InInstanceId, const TOptional< FString > & InConnectionString, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FInstanceJoinStartEvent](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a9fe9145048ff3fc4d3c3c951d8a1f2ec)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1finstancejoinstartevent/#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a410a6489ad2d7531ad7bd5816d9306a3)(IAnalyticsProvider * Provider)||
## Public Attributes



### `SessionId` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1ac697b9f001444fb9d7485ecfe41630b0"></a>

`TOptional<FString> RHStandardEvents::FInstanceJoinStartEvent::SessionId`

The session_id of the instance the player is attempting to join.




### `InstanceId` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a1e83a69a7bb5bfe0ceb77535c1d2f185"></a>

`TOptional<FString> RHStandardEvents::FInstanceJoinStartEvent::InstanceId`

The instance_id of the instance the player is attempting to join.




### `ConnectionString` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a133d73e2a9d924f03beb8701a94fa153"></a>

`TOptional<FString> RHStandardEvents::FInstanceJoinStartEvent::ConnectionString`

The connection string of the instance the player is attempting to join.




### `CustomData` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a809a4e3ad455ea11f699db5e96c823c0"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FInstanceJoinStartEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a383f2d4d5687c118b047867205c05f4c"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1ab549fa7349882f87e8ee64656fc60158"></a>

void Emit(IAnalyticsProvider * Provider, const TOptional< FString > & InSessionId, const TOptional< FString > & InInstanceId, const TOptional< FString > & InConnectionString, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const TOptional< FString > &|InSessionId|
|const TOptional< FString > &|InInstanceId|
|const TOptional< FString > &|InConnectionString|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FInstanceJoinStartEvent` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a9fe9145048ff3fc4d3c3c951d8a1f2ec"></a>

 FInstanceJoinStartEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a410a6489ad2d7531ad7bd5816d9306a3"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







