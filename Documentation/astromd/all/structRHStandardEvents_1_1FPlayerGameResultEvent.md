---
title: RHStandardEvents::FPlayerGameResultEvent Struct
---
This event is meant to capture high level information about a completed match.The RHIntegration Plugin will not automatically trigger this, but this event is something that RallyHere will process and have an understanding of the data.

rh.player_game_result 
## Summary
| Kind | View | Description |
|------|------|-------------|
|TOptional< int32 >|[Placement](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a7df827b68e03a2ce139139162dc8101b)||
|TOptional< FString >|[GameSessionId](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a998cf9acd8bf7ca3a162c62b7989774f)||
|TOptional< FString >|[InstanceId](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a3036135c8fde18b3db67538cdf2dbca5)||
|TOptional< float >|[DurationSeconds](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1aede2e3d23874e944f318e87fcb588f3d)||
|TOptional< FString >|[TeamId](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1ae1d77a154cb24e4a449552c004ced8c8)||
|TOptional< FString >|[Round](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1ae27ed2a3cdae86c14f81c8a80989547d)||
|TOptional< FString >|[PartySessionId](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a3cd4f78c414d84382109f60b78a6034e)||
|TOptional< bool >|[IsAfkKicked](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a678f1a35938b6d7f9aac18c6858f13bf)||
|TOptional< bool >|[WasBackfilled](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a9606cf9d0fb06527326965a10c05ac0c)||
|TOptional< FString >|[PrimaryInputType](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1adbe683133ec0c01df96811e54c4c235d)||
|TOptional< TMap< FString, FString > >|[CustomData](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a53999f026467c7e844cf0dbe19e36e37)|custom data fields (will be auto-prefixed with custom data prefix)|
|FString|[GetEventName](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a645265ad3067ab1bf928337382dbd387)()||
|void|[Emit](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1aa24ad48f9207a42f1ff7ee65a8d31a33)(IAnalyticsProvider * Provider, const TOptional< int32 > & InPlacement, const TOptional< FString > & InGameSessionId, const TOptional< FString > & InInstanceId, const TOptional< float > & InDurationSeconds, const TOptional< FString > & InTeamId, const TOptional< FString > & InRound, const TOptional< FString > & InPartySessionId, const TOptional< bool > & InIsAfkKicked, const TOptional< bool > & InWasBackfilled, const TOptional< FString > & InPrimaryInputType, const TOptional< TMap< FString, FString >> & InCustomData)||
||[FPlayerGameResultEvent](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a63ed113be1c84b80b0d193dbf3faead0)()||
|void|[EmitTo](/unreal-plugins/all/structrhstandardevents_1_1fplayergameresultevent/#structRHStandardEvents_1_1FPlayerGameResultEvent_1a5428c9acaee0b90c784476e272fae149)(IAnalyticsProvider * Provider)||
## Public Attributes



### `Placement` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a7df827b68e03a2ce139139162dc8101b"></a>

`TOptional<int32> RHStandardEvents::FPlayerGameResultEvent::Placement`



The placement of the player in the game 



### `GameSessionId` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a998cf9acd8bf7ca3a162c62b7989774f"></a>

`TOptional<FString> RHStandardEvents::FPlayerGameResultEvent::GameSessionId`



The session_id of the game 



### `InstanceId` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a3036135c8fde18b3db67538cdf2dbca5"></a>

`TOptional<FString> RHStandardEvents::FPlayerGameResultEvent::InstanceId`



The instance_id of the game within the session 



### `DurationSeconds` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1aede2e3d23874e944f318e87fcb588f3d"></a>

`TOptional<float> RHStandardEvents::FPlayerGameResultEvent::DurationSeconds`



The duration of the game in seconds 



### `TeamId` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1ae1d77a154cb24e4a449552c004ced8c8"></a>

`TOptional<FString> RHStandardEvents::FPlayerGameResultEvent::TeamId`



The team_id of the player 



### `Round` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1ae27ed2a3cdae86c14f81c8a80989547d"></a>

`TOptional<FString> RHStandardEvents::FPlayerGameResultEvent::Round`



The round of the game 



### `PartySessionId` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a3cd4f78c414d84382109f60b78a6034e"></a>

`TOptional<FString> RHStandardEvents::FPlayerGameResultEvent::PartySessionId`



The session_id of the party the player is in 



### `IsAfkKicked` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a678f1a35938b6d7f9aac18c6858f13bf"></a>

`TOptional<bool> RHStandardEvents::FPlayerGameResultEvent::IsAfkKicked`



Whether the player was kicked for being AFK 



### `WasBackfilled` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a9606cf9d0fb06527326965a10c05ac0c"></a>

`TOptional<bool> RHStandardEvents::FPlayerGameResultEvent::WasBackfilled`



Whether the player was backfilled into the game 



### `PrimaryInputType` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1adbe683133ec0c01df96811e54c4c235d"></a>

`TOptional<FString> RHStandardEvents::FPlayerGameResultEvent::PrimaryInputType`



The primary input type of the player 



### `CustomData` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a53999f026467c7e844cf0dbe19e36e37"></a>

`TOptional<TMap<FString, FString> > RHStandardEvents::FPlayerGameResultEvent::CustomData`

custom data fields (will be auto-prefixed with custom data prefix)





## Public Static Functions



### `GetEventName` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a645265ad3067ab1bf928337382dbd387"></a>

FString GetEventName()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Emit` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1aa24ad48f9207a42f1ff7ee65a8d31a33"></a>

void Emit(IAnalyticsProvider * Provider, const TOptional< int32 > & InPlacement, const TOptional< FString > & InGameSessionId, const TOptional< FString > & InInstanceId, const TOptional< float > & InDurationSeconds, const TOptional< FString > & InTeamId, const TOptional< FString > & InRound, const TOptional< FString > & InPartySessionId, const TOptional< bool > & InIsAfkKicked, const TOptional< bool > & InWasBackfilled, const TOptional< FString > & InPrimaryInputType, const TOptional< TMap< FString, FString >> & InCustomData)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|
|const TOptional< int32 > &|InPlacement|
|const TOptional< FString > &|InGameSessionId|
|const TOptional< FString > &|InInstanceId|
|const TOptional< float > &|InDurationSeconds|
|const TOptional< FString > &|InTeamId|
|const TOptional< FString > &|InRound|
|const TOptional< FString > &|InPartySessionId|
|const TOptional< bool > &|InIsAfkKicked|
|const TOptional< bool > &|InWasBackfilled|
|const TOptional< FString > &|InPrimaryInputType|
|const TOptional< TMap< FString, FString >> &|InCustomData|

#### Description







## Public Functions



### `FPlayerGameResultEvent` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a63ed113be1c84b80b0d193dbf3faead0"></a>

 FPlayerGameResultEvent()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `EmitTo` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a5428c9acaee0b90c784476e272fae149"></a>

void EmitTo(IAnalyticsProvider * Provider)

#### Parameters

| Type | Name |
|------|------|
|IAnalyticsProvider *|Provider|

#### Description







