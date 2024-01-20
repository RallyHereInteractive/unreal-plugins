---
title: URH_PlayerSessions Class
---Inherits from UObject

Player Sessions class used to store player session membership information.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[GetSessionsType](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92)||
|bool|[bInitialized](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a30bb48d8307e142e04960dcc1e9256f5)|Tracks if the Presence has been initialized.|
|FGuid|[PlayerUuid](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1ae2b7f7a6ea620af20b267980081fa7a1)|Players unique identifier.|
|FDateTime|[LastUpdated](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1aecfe8c9469d2bc7080457d5636b0404f)|The last time the players session data was updated on the client.|
|FString|[ETag](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a9f9cebbae2067bc4b0f813531f19b903)|ETag to track if the session list is stale during requests.|
|[FRHAPI_PlayerSessions](/unreal-plugins/all/structfrhapi__playersessions/#structFRHAPI__PlayerSessions)|[Sessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab)||
|FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnSessionsUpdatedDelegate](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a64fc4ec7f3776ac0420da639183df59b)|Blueprint delegate to listen for sessions updates.|
|FRH_OnPlayerSessionsUpdatedMulticastDelegate|[OnSessionsUpdatedDelegate](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a7739454886f42eb35d0bb043c9a5f4fe)|Native delegate to listen for sessions updates.|
|TArray< FRH_OnRequestPlayerSessionsBlock >|[TemporaryRequestDelegates](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a209f56744d0a9207e9a775bc474a9f4a)|Delegates stored to response to currently active requests.|
|FRH_AutoPollerPtr|[SessionsPoller](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1adcdf9391c758196a1ce00b648f897c6d)|Poller for the players presence.|
|void|[Update](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e)(const GetSessionsType::Response & Other)|Stores the response data from an API presence request.|
|void|[MarkUpdated](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1ad046ac0a8e57425ebcb234bc404bb5da)()|Sets the last updated time to now.|
|void|[MarkDirty](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1ae06b941d9bb3c94e5927d27d11cfc79b)()|Clears the last updated time to force an update.|
|void|[RequestUpdate](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a1e6bb38840955f354f932da78ef351cb)(bool bForceUpdate, const FRH_OnRequestPlayerSessionsBlock & Delegate)|Enqueues an update request for the players presence information from the RallyHere API.|
|void|[BLUEPRINT_RequestUpdate](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a09c0ba6876623cb118d164d40fc2caec)(bool bForceUpdate, const FRH_OnRequestPlayerSessionsDynamicDelegate & Delegate)||
|class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[GetPlayerInfo](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1ab2165d110e8f88374fbe82d39b4c23e9)()|Gets the PlayerInfo that owns this Player Presence.|
|void|[CheckPollStatus](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a77273d2f5e1e57948b992c9fa7806983)(const bool bForceUpdate)|Updates the poll status to be active or inactive based on if it should currently be polling.|
|bool|[ShouldPoll](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a1650dfe4743702dd125c8b584e96e263)()|Gets if the poller should be actively polling, only polls if something cares about it.|
|void|[PollSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1a26d7c63218d1c3cd1b91293cf5b6bd4a)(const FRH_PollCompleteFunc & Delegate)|Starts a poll of the players presence.|
|void|[ExecuteDelegates](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions_1ae34694cba191f48499bae15e8a13336c)(bool bSuccess)|Handles executing any delegate listeners for the players presence.|
## Public Types



### `GetSessionsType` <a id="classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92"></a>

typedef RallyHereAPI::Traits_GetPlayerSessionsByUuid GetSessionsType





## Public Attributes



### `bInitialized` <a id="classURH__PlayerSessions_1a30bb48d8307e142e04960dcc1e9256f5"></a>

`bool URH_PlayerSessions::bInitialized`

Tracks if the Presence has been initialized.




### `PlayerUuid` <a id="classURH__PlayerSessions_1ae2b7f7a6ea620af20b267980081fa7a1"></a>

`FGuid URH_PlayerSessions::PlayerUuid`

Players unique identifier.




### `LastUpdated` <a id="classURH__PlayerSessions_1aecfe8c9469d2bc7080457d5636b0404f"></a>

`FDateTime URH_PlayerSessions::LastUpdated`

The last time the players session data was updated on the client.




### `ETag` <a id="classURH__PlayerSessions_1a9f9cebbae2067bc4b0f813531f19b903"></a>

`FString URH_PlayerSessions::ETag`

ETag to track if the session list is stale during requests.




### `Sessions` <a id="classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab"></a>

`FRHAPI_PlayerSessions URH_PlayerSessions::Sessions`






### `BLUEPRINT_OnSessionsUpdatedDelegate` <a id="classURH__PlayerSessions_1a64fc4ec7f3776ac0420da639183df59b"></a>

`FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate URH_PlayerSessions::BLUEPRINT_OnSessionsUpdatedDelegate`

Blueprint delegate to listen for sessions updates.




### `OnSessionsUpdatedDelegate` <a id="classURH__PlayerSessions_1a7739454886f42eb35d0bb043c9a5f4fe"></a>

`FRH_OnPlayerSessionsUpdatedMulticastDelegate URH_PlayerSessions::OnSessionsUpdatedDelegate`

Native delegate to listen for sessions updates.




### `TemporaryRequestDelegates` <a id="classURH__PlayerSessions_1a209f56744d0a9207e9a775bc474a9f4a"></a>

`TArray<FRH_OnRequestPlayerSessionsBlock> URH_PlayerSessions::TemporaryRequestDelegates`

Delegates stored to response to currently active requests.





## Protected Attributes



### `SessionsPoller` <a id="classURH__PlayerSessions_1adcdf9391c758196a1ce00b648f897c6d"></a>

`FRH_AutoPollerPtr URH_PlayerSessions::SessionsPoller`

Poller for the players presence.





## Public Functions



### `Update` <a id="classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e"></a>

void Update(const GetSessionsType::Response & Other)

#### Parameters

| Type | Name |
|------|------|
|const GetSessionsType::Response &|Other|

#### Description

Stores the response data from an API presence request.


#### Parameters

Other
: The presence data to store. 



### `MarkUpdated` <a id="classURH__PlayerSessions_1ad046ac0a8e57425ebcb234bc404bb5da"></a>

void MarkUpdated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the last updated time to now.




### `MarkDirty` <a id="classURH__PlayerSessions_1ae06b941d9bb3c94e5927d27d11cfc79b"></a>

void MarkDirty()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the last updated time to force an update.




### `RequestUpdate` <a id="classURH__PlayerSessions_1a1e6bb38840955f354f932da78ef351cb"></a>

void RequestUpdate(bool bForceUpdate, const FRH_OnRequestPlayerSessionsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bForceUpdate|
|const FRH_OnRequestPlayerSessionsBlock &|Delegate|

#### Description

Enqueues an update request for the players presence information from the RallyHere API.


#### Parameters

bForceUpdate
: If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly 
Delegate
: Callback delegate for the request. 



### `BLUEPRINT_RequestUpdate` <a id="classURH__PlayerSessions_1a09c0ba6876623cb118d164d40fc2caec"></a>

void BLUEPRINT_RequestUpdate(bool bForceUpdate, const FRH_OnRequestPlayerSessionsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bForceUpdate|
|const FRH_OnRequestPlayerSessionsDynamicDelegate &|Delegate|

#### Description






### `GetPlayerInfo` <a id="classURH__PlayerSessions_1ab2165d110e8f88374fbe82d39b4c23e9"></a>

class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * GetPlayerInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the PlayerInfo that owns this Player Presence.



#### Returns
The PlayerInfo that owns the Presence. 



### `CheckPollStatus` <a id="classURH__PlayerSessions_1a77273d2f5e1e57948b992c9fa7806983"></a>

void CheckPollStatus(const bool bForceUpdate)

#### Parameters

| Type | Name |
|------|------|
|const bool|bForceUpdate|

#### Description

Updates the poll status to be active or inactive based on if it should currently be polling.


#### Parameters

bForceUpdate
: If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly 




## Protected Functions



### `ShouldPoll` <a id="classURH__PlayerSessions_1a1650dfe4743702dd125c8b584e96e263"></a>

bool ShouldPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the poller should be actively polling, only polls if something cares about it.




### `PollSessions` <a id="classURH__PlayerSessions_1a26d7c63218d1c3cd1b91293cf5b6bd4a"></a>

void PollSessions(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Starts a poll of the players presence.


#### Parameters

Delegate
: Callback delegate for the poll. 



### `ExecuteDelegates` <a id="classURH__PlayerSessions_1ae34694cba191f48499bae15e8a13336c"></a>

void ExecuteDelegates(bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|

#### Description

Handles executing any delegate listeners for the players presence.


#### Parameters

bSuccess
: If the poll was successful. 




