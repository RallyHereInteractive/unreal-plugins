---
title: URH_PlayerPresence Class
---Inherits from UObject

Player Presence class used to store player presence data.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[GetPresenceType](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214)||
|bool|[bInitialized](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a3f6af11e501d2f96fe4b520e193e46da)|Tracks if the Presence has been initialized.|
|ERHAPI_OnlineStatus|[Status](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a51af6d5a0caf4f5e47e4498a7bb3e456)|Online status of the player.|
|FString|[Message](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1abd625e3be04fcb0527bbc719dc929d6e)|Message set by a player to display on their presence information.|
|FString|[Platform](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1ad461b02f3065a8e712a127e954fb9e36)|Which platform the player is currently playing / last seen on.|
|FString|[DisplayName](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a93fef7276ca2b984c0d2e66ca3dc3852)|The players display name for their current or last seen platform.|
|TMap< FString, FString >|[CustomData](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1abbc5a206683a5117cc6c3aa200e137c8)|Custom data that can be set by the player.|
|FGuid|[PlayerUuid](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a124c1f1a05dbd0993286b8c62348d46d)|Players unique identifier.|
|FDateTime|[LastUpdated](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1ab54ee60de419c460569b4500725eb111)|The last time the players presence data was updated on the client.|
|FString|[ETag](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a7608e0238c8c94c369b7ee9b42bac10d)|ETag to track if the presence is stale during requests.|
|FRH_OnPresenceUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnPresenceUpdatedDelegate](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a7cb31d865f01ae74eff5ed5ce7f121f7)|Blueprint delegate to listen for presence updates.|
|FRH_OnPresenceUpdatedMulticastDelegate|[OnPresenceUpdatedDelegate](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1aef3e7a5f08976a00d0a7e72af535d645)|Native delegate to listen for presence updates.|
|TArray< FRH_OnRequestPlayerPresenceBlock >|[TemporaryRequestDelegates](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a0c4a50a5612408e6a017ca3f249e8763)|Delegates stored to response to currently active requests.|
|FRH_AutoPollerPtr|[PresencePoller](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a733193654e8f5783c4d69380ec946686)|Poller for the players presence.|
|void|[Update](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1ad8e9439f6208b737bbf2c34428567a96)(const [FRHAPI_PlayerPresence](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence) & Other)|Stores the response data from an API presence request.|
|void|[Update](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1ada7244129a60c38caea63a604c65d21c)(const T & Other)|Stores the response data from an API presence request.|
|void|[MarkUpdated](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1ada0aeb79948e6a326c4e0730722012c8)()|Sets the last updated time to now.|
|void|[MarkDirty](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a0c5758952db9d0daa9840032fb010b22)()|Clears the last updated time to force an update.|
|void|[RequestUpdate](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a7c2429b932c790fc766b1dd081a3d1eb)(bool bForceUpdate, const FRH_OnRequestPlayerPresenceBlock & Delegate)|Enqueues an update request for the players presence information from the RallyHere API.|
|void|[BLUEPRINT_RequestUpdate](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a2c3c8c9dfa0005d87b61fb75f57ec7f9)(bool bForceUpdate, const FRH_OnRequestPlayerPresenceDynamicDelegate & Delegate)||
|class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[GetPlayerInfo](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1aa423b5dc5ad1bb56fbba410f634a955b)()|Gets the PlayerInfo that owns this Player Presence.|
|void|[CheckPollStatus](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1af4e990217a6d2e06b4ad6ee7f4188229)(const bool bForceUpdate)|Updates the poll status to be active or inactive based on if it should currently be polling.|
|bool|[ShouldPoll](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a46f7f69fa125dbdcbda3b0a8c0281c34)()|Gets if the poller should be actively polling, only polls if something cares about it.|
|void|[PollPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a6d563892989854c37ca316298c0f7edc)(const FRH_PollCompleteFunc & Delegate)|Starts a poll of the players presence.|
|void|[ExecuteDelegates](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence_1a81e83d51d446fcd89c4d5f7c5519c0e4)(bool bSuccess)|Handles executing any delegate listeners for the players presence.|
## Public Types



### `GetPresenceType` <a id="classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214"></a>

typedef RallyHereAPI::Traits_GetPlayerPresencePublicByUuid GetPresenceType





## Public Attributes



### `bInitialized` <a id="classURH__PlayerPresence_1a3f6af11e501d2f96fe4b520e193e46da"></a>

`bool URH_PlayerPresence::bInitialized`

Tracks if the Presence has been initialized.




### `Status` <a id="classURH__PlayerPresence_1a51af6d5a0caf4f5e47e4498a7bb3e456"></a>

`ERHAPI_OnlineStatus URH_PlayerPresence::Status`

Online status of the player.




### `Message` <a id="classURH__PlayerPresence_1abd625e3be04fcb0527bbc719dc929d6e"></a>

`FString URH_PlayerPresence::Message`

Message set by a player to display on their presence information.




### `Platform` <a id="classURH__PlayerPresence_1ad461b02f3065a8e712a127e954fb9e36"></a>

`FString URH_PlayerPresence::Platform`

Which platform the player is currently playing / last seen on.




### `DisplayName` <a id="classURH__PlayerPresence_1a93fef7276ca2b984c0d2e66ca3dc3852"></a>

`FString URH_PlayerPresence::DisplayName`

The players display name for their current or last seen platform.




### `CustomData` <a id="classURH__PlayerPresence_1abbc5a206683a5117cc6c3aa200e137c8"></a>

`TMap<FString, FString> URH_PlayerPresence::CustomData`

Custom data that can be set by the player.




### `PlayerUuid` <a id="classURH__PlayerPresence_1a124c1f1a05dbd0993286b8c62348d46d"></a>

`FGuid URH_PlayerPresence::PlayerUuid`

Players unique identifier.




### `LastUpdated` <a id="classURH__PlayerPresence_1ab54ee60de419c460569b4500725eb111"></a>

`FDateTime URH_PlayerPresence::LastUpdated`

The last time the players presence data was updated on the client.




### `ETag` <a id="classURH__PlayerPresence_1a7608e0238c8c94c369b7ee9b42bac10d"></a>

`FString URH_PlayerPresence::ETag`

ETag to track if the presence is stale during requests.




### `BLUEPRINT_OnPresenceUpdatedDelegate` <a id="classURH__PlayerPresence_1a7cb31d865f01ae74eff5ed5ce7f121f7"></a>

`FRH_OnPresenceUpdatedMulticastDynamicDelegate URH_PlayerPresence::BLUEPRINT_OnPresenceUpdatedDelegate`

Blueprint delegate to listen for presence updates.




### `OnPresenceUpdatedDelegate` <a id="classURH__PlayerPresence_1aef3e7a5f08976a00d0a7e72af535d645"></a>

`FRH_OnPresenceUpdatedMulticastDelegate URH_PlayerPresence::OnPresenceUpdatedDelegate`

Native delegate to listen for presence updates.




### `TemporaryRequestDelegates` <a id="classURH__PlayerPresence_1a0c4a50a5612408e6a017ca3f249e8763"></a>

`TArray<FRH_OnRequestPlayerPresenceBlock> URH_PlayerPresence::TemporaryRequestDelegates`

Delegates stored to response to currently active requests.





## Protected Attributes



### `PresencePoller` <a id="classURH__PlayerPresence_1a733193654e8f5783c4d69380ec946686"></a>

`FRH_AutoPollerPtr URH_PlayerPresence::PresencePoller`

Poller for the players presence.





## Public Functions



### `Update` <a id="classURH__PlayerPresence_1ad8e9439f6208b737bbf2c34428567a96"></a>

void Update(const [FRHAPI_PlayerPresence](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence) & Other)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PlayerPresence](/unreal-plugins/all/structfrhapi__playerpresence/#structFRHAPI__PlayerPresence) &|Other|

#### Description

Stores the response data from an API presence request.


#### Parameters

Other
: The presence data to store. 



### `Update` <a id="classURH__PlayerPresence_1ada7244129a60c38caea63a604c65d21c"></a>

void Update(const T & Other)

#### Parameters

| Type | Name |
|------|------|
|const T &|Other|

#### Description

Stores the response data from an API presence request.


#### templateparam

Other
: The presence data to store. 



### `MarkUpdated` <a id="classURH__PlayerPresence_1ada0aeb79948e6a326c4e0730722012c8"></a>

void MarkUpdated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the last updated time to now.




### `MarkDirty` <a id="classURH__PlayerPresence_1a0c5758952db9d0daa9840032fb010b22"></a>

void MarkDirty()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the last updated time to force an update.




### `RequestUpdate` <a id="classURH__PlayerPresence_1a7c2429b932c790fc766b1dd081a3d1eb"></a>

void RequestUpdate(bool bForceUpdate, const FRH_OnRequestPlayerPresenceBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bForceUpdate|
|const FRH_OnRequestPlayerPresenceBlock &|Delegate|

#### Description

Enqueues an update request for the players presence information from the RallyHere API.


#### Parameters

bForceUpdate
: If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly 
Delegate
: Callback delegate for the request. 



### `BLUEPRINT_RequestUpdate` <a id="classURH__PlayerPresence_1a2c3c8c9dfa0005d87b61fb75f57ec7f9"></a>

void BLUEPRINT_RequestUpdate(bool bForceUpdate, const FRH_OnRequestPlayerPresenceDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bForceUpdate|
|const FRH_OnRequestPlayerPresenceDynamicDelegate &|Delegate|

#### Description






### `GetPlayerInfo` <a id="classURH__PlayerPresence_1aa423b5dc5ad1bb56fbba410f634a955b"></a>

class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * GetPlayerInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the PlayerInfo that owns this Player Presence.



#### Returns
The PlayerInfo that owns the Presence. 



### `CheckPollStatus` <a id="classURH__PlayerPresence_1af4e990217a6d2e06b4ad6ee7f4188229"></a>

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



### `ShouldPoll` <a id="classURH__PlayerPresence_1a46f7f69fa125dbdcbda3b0a8c0281c34"></a>

bool ShouldPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the poller should be actively polling, only polls if something cares about it.




### `PollPresence` <a id="classURH__PlayerPresence_1a6d563892989854c37ca316298c0f7edc"></a>

void PollPresence(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Starts a poll of the players presence.


#### Parameters

Delegate
: Callback delegate for the poll. 



### `ExecuteDelegates` <a id="classURH__PlayerPresence_1a81e83d51d446fcd89c4d5f7c5519c0e4"></a>

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




