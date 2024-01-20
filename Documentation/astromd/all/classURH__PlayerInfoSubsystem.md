---
title: URH_PlayerInfoSubsystem Class
---Inherits from [URH_SandboxedSubsystemPlugin](/unreal-plugins/all/classurh__sandboxedsubsystemplugin/#classURH__SandboxedSubsystemPlugin)

Inherits from FTickableGameObject

Subsystem used to track and request information about players.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[TLookupPlayer](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a221cacf49cc61a7df9b7e791befbb312)||
|TSubclassOf< [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) >|[PlayerInfoClassOverride](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a53d13eb27e48d9e00cd52986c5741fcf)|Override class for Player Info if extended.|
|TMap< FGuid, [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * >|[PlayerInfos](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a616fa3bfe4df4b7f8edd78f2414a42d5)|Map of Player Infos to their player Uuids.|
|TMap< [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId), [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * >|[PlayerPlatformInfos](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a17e2ac363f59929e2c5be24746c03dbe)|Map of Player Platform Infos to their Platform Ids.|
|TMap< [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId), FGuid >|[PlayerPlatformIdToUuidMap](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a25ed5e4057d3929418e973228f9851a1)|Map of Player Uuid to their Platform Ids.|
|void|[Initialize](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a572d4ae155b61530e30fdf4943313228)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1ac84840e29cafeb3dd61382c359dd93e8)()|Safely tears down the subsystem.|
|const TMap< FGuid, [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * > &|[GetPlayerInfos](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1abc456ab4d8ed5e310f4069cd412b7015)()|Gets a map of all the player infos.|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[GetOrCreatePlayerInfo](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a86cbf48c7736df66c95719b2aa2e56df)(const FGuid & PlayerUuid)|Gets a Player Info object for a given Player Unique Id, creates if needed.|
|[URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) *|[GetOrCreatePlayerPlatformInfo](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1afe3412c3393e536a6bfa3df5c32b1d30)(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId)|Gets a Player Info object for a given Player Platform Id, creates if needed.|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[FindPlayerInfoByPlatformId](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1accd9b150a34cf217253a503d2ade40f9)(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId)|Gets a Player Info object for a given Player Platform Id.|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[GetPlayerInfo](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a7b424cc74c8113e946640262a255be78)(const FGuid & PlayerUuid)|Gets a Player Info object for a given Unique Player Id.|
|[URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) *|[GetPlayerPlatformInfo](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a14b5f2d5b7d3813fb765667f14395681)(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId)|Gets the platform info object for a player by the Platform Id.|
|void|[AddPlayerLink](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a7dff591ef7779e9b7fc24f778c819ad4)(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId, const FGuid & PlayerUuid)|Adds a platform mapping for a given player.|
|void|[LookupPlayer](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a2985421b191b211a64e28bc0a6f60d73)(FString PlayerName, const FRH_PlayerInfoLookupPlayerBlock & Delegate)|Searchs for all players who use the given display name via API Call.|
|void|[BLUEPRINT_LookupPlayer](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1af49782e7e30900e743e026d08a5f991b)(FString PlayerName, const FRH_PlayerInfoLookupPlayerDynamicDelegate & Delegate)||
|void|[LookupPlayerByPlatformUserId](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a919f9dce2894aa34b79e2a95387adc2e)([FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) PlayerPlatformId, const FRH_PlayerInfoLookupPlayerBlock & Delegate)|Searchs for players associated with the given platform and platform user id via API Call.|
|void|[BLUEPRINT_LookupPlayerByPlatformUserId](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1acf620014114fa3f12ec521960f84d779)([FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) PlayerPlatformId, const FRH_PlayerInfoLookupPlayerDynamicDelegate & Delegate)||
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[RemovePlayerInfoFromCache](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a4ccb69f748014aa9baddae76250b7e31)(const FGuid & PlayerUuid)|Remove a specific Player Info from PlayerInfoSubsystem's cache.|
|void|[Tick](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1abf83de825c346653c1bc3cba1df75815)(float DeltaTime)|Unreals basic Tick function.|
|bool|[IsTickable](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a49b75fe691775b67c9af6a818d2e4592)()|Gets if currently tickable.|
|TStatId|[GetStatId](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a159d3535c053aa721f87274f48742cfa)()|Gets the stat to use for the tick time.|
|void|[ClearPlayerInfoCache](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a2ddbe40cfed50b7e76437aec24e4c054)()|Clears the cached player infos.|
|void|[InitPropertiesWithDefaultValues](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a5e14a7f60c320b9a2186e33726f7e5ee)()|Initializes the subsystem with defaults for its cached data.|
|void|[OnLookupPlayerResponse](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a5d178f65256eafbf0fccfc17e87bae62)(const TLookupPlayer::Response & Response, const FRH_PlayerInfoLookupPlayerBlock Delegate)|Handles the response to a Lookup Player call.|
|void|[OnLookupPlayerByPlatformUserIdResponse](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem_1a0cd6b58da263387aead9c9d17729cb27)(const TLookupPlayer::Response & Response, const FRH_PlayerInfoLookupPlayerBlock Delegate)|Handles the response to a Lookup Player By Platform User Id call.|
## Public Types



### `TLookupPlayer` <a id="classURH__PlayerInfoSubsystem_1a221cacf49cc61a7df9b7e791befbb312"></a>

typedef RallyHereAPI::Traits_LookupPlayerByPortal TLookupPlayer





## Protected Attributes



### `PlayerInfoClassOverride` <a id="classURH__PlayerInfoSubsystem_1a53d13eb27e48d9e00cd52986c5741fcf"></a>

`TSubclassOf<URH_PlayerInfo> URH_PlayerInfoSubsystem::PlayerInfoClassOverride`

Override class for Player Info if extended.




### `PlayerInfos` <a id="classURH__PlayerInfoSubsystem_1a616fa3bfe4df4b7f8edd78f2414a42d5"></a>

`TMap<FGuid, URH_PlayerInfo*> URH_PlayerInfoSubsystem::PlayerInfos`

Map of Player Infos to their player Uuids.




### `PlayerPlatformInfos` <a id="classURH__PlayerInfoSubsystem_1a17e2ac363f59929e2c5be24746c03dbe"></a>

`TMap<FRH_PlayerPlatformId, URH_PlayerPlatformInfo*> URH_PlayerInfoSubsystem::PlayerPlatformInfos`

Map of Player Platform Infos to their Platform Ids.




### `PlayerPlatformIdToUuidMap` <a id="classURH__PlayerInfoSubsystem_1a25ed5e4057d3929418e973228f9851a1"></a>

`TMap<FRH_PlayerPlatformId, FGuid> URH_PlayerInfoSubsystem::PlayerPlatformIdToUuidMap`

Map of Player Uuid to their Platform Ids.





## Public Functions



### `Initialize` <a id="classURH__PlayerInfoSubsystem_1a572d4ae155b61530e30fdf4943313228"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__PlayerInfoSubsystem_1ac84840e29cafeb3dd61382c359dd93e8"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `GetPlayerInfos` <a id="classURH__PlayerInfoSubsystem_1abc456ab4d8ed5e310f4069cd412b7015"></a>

const TMap< FGuid, [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * > & GetPlayerInfos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a map of all the player infos.



#### Returns
Map of player infos by Player Unique Id 



### `GetOrCreatePlayerInfo` <a id="classURH__PlayerInfoSubsystem_1a86cbf48c7736df66c95719b2aa2e56df"></a>

[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * GetOrCreatePlayerInfo(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Gets a Player Info object for a given Player Unique Id, creates if needed.


#### Parameters

PlayerUuid
: Unique Player Id for the given player 

#### Returns
Player Info for the player 



### `GetOrCreatePlayerPlatformInfo` <a id="classURH__PlayerInfoSubsystem_1afe3412c3393e536a6bfa3df5c32b1d30"></a>

[URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * GetOrCreatePlayerPlatformInfo(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|PlayerPlatformId|

#### Description

Gets a Player Info object for a given Player Platform Id, creates if needed.


#### Parameters

PlayerPlatformId
: Player Platform Id for the given player 

#### Returns
Player Info for the player 



### `FindPlayerInfoByPlatformId` <a id="classURH__PlayerInfoSubsystem_1accd9b150a34cf217253a503d2ade40f9"></a>

[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * FindPlayerInfoByPlatformId(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|PlayerPlatformId|

#### Description

Gets a Player Info object for a given Player Platform Id.


#### Parameters

PlayerPlatformId
: Player Platform Id for the given player 

#### Returns
Player Info for the player if found 



### `GetPlayerInfo` <a id="classURH__PlayerInfoSubsystem_1a7b424cc74c8113e946640262a255be78"></a>

[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * GetPlayerInfo(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Gets a Player Info object for a given Unique Player Id.


#### Parameters

PlayerUuid
: Unique Player Id for the given player 

#### Returns
Player Info for the player if found 



### `GetPlayerPlatformInfo` <a id="classURH__PlayerInfoSubsystem_1a14b5f2d5b7d3813fb765667f14395681"></a>

[URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * GetPlayerPlatformInfo(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|PlayerPlatformId|

#### Description

Gets the platform info object for a player by the Platform Id.


#### Parameters

PlayerPlatformId
: Player Platform Id for the given player 

#### Returns
Player Platform Info for the player if found 



### `AddPlayerLink` <a id="classURH__PlayerInfoSubsystem_1a7dff591ef7779e9b7fc24f778c819ad4"></a>

void AddPlayerLink(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId, const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|PlayerPlatformId|
|const FGuid &|PlayerUuid|

#### Description

Adds a platform mapping for a given player.


#### Parameters

PlayerUuid
: Unique Player Id for the given player 
PlayerPlatformId
: Player Platform Id for the given player 



### `LookupPlayer` <a id="classURH__PlayerInfoSubsystem_1a2985421b191b211a64e28bc0a6f60d73"></a>

void LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|FString|PlayerName|
|const FRH_PlayerInfoLookupPlayerBlock &|Delegate|

#### Description

Searchs for all players who use the given display name via API Call.


#### Parameters

PlayerName
: The display name we want to search for 
Delegate
: Callback with the all PlayerInfos that are found with that display name 



### `BLUEPRINT_LookupPlayer` <a id="classURH__PlayerInfoSubsystem_1af49782e7e30900e743e026d08a5f991b"></a>

void BLUEPRINT_LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|FString|PlayerName|
|const FRH_PlayerInfoLookupPlayerDynamicDelegate &|Delegate|

#### Description






### `LookupPlayerByPlatformUserId` <a id="classURH__PlayerInfoSubsystem_1a919f9dce2894aa34b79e2a95387adc2e"></a>

void LookupPlayerByPlatformUserId([FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) PlayerPlatformId, const FRH_PlayerInfoLookupPlayerBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId)|PlayerPlatformId|
|const FRH_PlayerInfoLookupPlayerBlock &|Delegate|

#### Description

Searchs for players associated with the given platform and platform user id via API Call.


#### Parameters

Platform
: The platform used for the lookup 
PlatformUserId
: The platform user id used for the lookup 
Delegate
: Callback with the all PlayerInfos that are found with that display name 



### `BLUEPRINT_LookupPlayerByPlatformUserId` <a id="classURH__PlayerInfoSubsystem_1acf620014114fa3f12ec521960f84d779"></a>

void BLUEPRINT_LookupPlayerByPlatformUserId([FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) PlayerPlatformId, const FRH_PlayerInfoLookupPlayerDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId)|PlayerPlatformId|
|const FRH_PlayerInfoLookupPlayerDynamicDelegate &|Delegate|

#### Description






### `RemovePlayerInfoFromCache` <a id="classURH__PlayerInfoSubsystem_1a4ccb69f748014aa9baddae76250b7e31"></a>

[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * RemovePlayerInfoFromCache(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Remove a specific Player Info from PlayerInfoSubsystem's cache.


#### Parameters

PlayerUuid
: The UUID of the Player Info to be removed 

#### Returns
The Player Info that got removed 



### `Tick` <a id="classURH__PlayerInfoSubsystem_1abf83de825c346653c1bc3cba1df75815"></a>

void Tick(float DeltaTime)

#### Parameters

| Type | Name |
|------|------|
|float|DeltaTime|

#### Description

Unreals basic Tick function.




### `IsTickable` <a id="classURH__PlayerInfoSubsystem_1a49b75fe691775b67c9af6a818d2e4592"></a>

bool IsTickable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if currently tickable.




### `GetStatId` <a id="classURH__PlayerInfoSubsystem_1a159d3535c053aa721f87274f48742cfa"></a>

TStatId GetStatId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the stat to use for the tick time.





## Protected Functions



### `ClearPlayerInfoCache` <a id="classURH__PlayerInfoSubsystem_1a2ddbe40cfed50b7e76437aec24e4c054"></a>

void ClearPlayerInfoCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the cached player infos.




### `InitPropertiesWithDefaultValues` <a id="classURH__PlayerInfoSubsystem_1a5e14a7f60c320b9a2186e33726f7e5ee"></a>

void InitPropertiesWithDefaultValues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initializes the subsystem with defaults for its cached data.




### `OnLookupPlayerResponse` <a id="classURH__PlayerInfoSubsystem_1a5d178f65256eafbf0fccfc17e87bae62"></a>

void OnLookupPlayerResponse(const TLookupPlayer::Response & Response, const FRH_PlayerInfoLookupPlayerBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TLookupPlayer::Response &|Response|
|const FRH_PlayerInfoLookupPlayerBlock|Delegate|

#### Description

Handles the response to a Lookup Player call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnLookupPlayerByPlatformUserIdResponse` <a id="classURH__PlayerInfoSubsystem_1a0cd6b58da263387aead9c9d17729cb27"></a>

void OnLookupPlayerByPlatformUserIdResponse(const TLookupPlayer::Response & Response, const FRH_PlayerInfoLookupPlayerBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TLookupPlayer::Response &|Response|
|const FRH_PlayerInfoLookupPlayerBlock|Delegate|

#### Description

Handles the response to a Lookup Player By Platform User Id call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 




