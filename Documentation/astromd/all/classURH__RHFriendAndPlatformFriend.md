---
title: URH_RHFriendAndPlatformFriend Class
---Inherits from UObject

RH Friend and Platform Friend class that wraps a Rally Here Friend and Platform Friend together.

## Summary
| Kind | View | Description |
|------|------|-------------|
|friend|[URH_FriendSubsystem](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1ad251709985520e4fa4a2fa9dbba14298)||
|FRH_OnPresenceUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnPresenceUpdatedDelegate](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a65b2017a3425ee682f706f14990be2a7)|Blueprint delegate to listen for presence updates.|
|FRH_OnPresenceUpdatedMulticastDelegate|[OnPresenceUpdatedDelegate](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a55317bf6b9ee5a4bb83e0f92fae106e2)|Native delegate to listen for presence updates.|
|[FRH_PlayerAndPlatformInfo](/unreal-plugins/all/structfrh__playerandplatforminfo/#structFRH__PlayerAndPlatformInfo)|[PlayerAndPlatformInfo](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a85603f6ad7e4c8402012642ba70df5d3)|Player Info and Platform Info combined.|
|[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)|[RHFriendshipStatus](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a048470b3c114f6379667149ea0a1328b)|Core friendship status.|
|[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)|[PreviousRHFriendshipStatus](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1aa86a3555aa8881bcf2a4d6af5a8dffc4)|cached previous core friendship status.|
|FDateTime|[LastModifiedOn](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a5dc5734dfba3cba698486e514727c79a)|Last update of the current friend information.|
|FString|[Notes](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a66cefbb47f0cad7d59bd18df980022c5)|Notes set for the friend.|
|TArray< [URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * >|[PlatformFriends](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a2a7cea15c536d6f1dc0e372bd75a7dc3)|Array of platforms the player has linked to their account.|
|FString|[Etag](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1ab4bca6808ed022b3d72edf548745c04c)|ETag of last friend update response.|
|class [URH_FriendSubsystem](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem) *|[GetFriendSubsystem](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1afca989ff581d5d013cfac12722f5f4ee)()||
|bool|[AreFriends](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a3614d4c1ddb543c6f262dd27b65ab67b)()|Gets if the player is a friend through Rally Here systems or their platform.|
|bool|[AreRHFriends](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a4fe2dc0a23755f8069aa7adac470b79b)()|Gets if the player is a friend through Rally Here.|
|bool|[ArePlatformFriends](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1aff5cffa84cf22c06bfdb6fdbf6c86d42)()|Gets if the player is a friend through their platform.|
|bool|[FriendRequestSent](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1afb2d64ae40c67ff9be8e05dc3efee08f)()|Gets if you have sent a friend request to the player through Rally Here or their platform.|
|bool|[RHFriendRequestSent](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a01322359b249aa216ec7cdd237f94efd)()|Gets if you have sent a friend request to the player through Rally Here.|
|bool|[PendingFriendRequest](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1ab84f7920479877917a2251fb16c38a19)()|Gets if the player has sent you a friend through Rally Here or their platform.|
|bool|[RhPendingFriendRequest](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a6a93c886ade405ce778fa54621dcd455)()|Gets if the player has sent you a friend through Rally Here.|
|bool|[HaveRhRelationship](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a3d80d9734091740fe541d6057c07955d)()|Gets if the player has any sort of relationship with you through Rally Here.|
|bool|[HaveAnyRelationship](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a5f7fb5fb59474fa3ad7126a64d2b7adb)()|Gets if the player has any sort of relationship with you through Rally Here or their platform.|
|bool|[HavePlatformRelationship](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a00b3960652a313fd9c4bd8a99e53c36b)()|Gets if the player has any sort of relationship with you through their platform.|
|bool|[IsOnline](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1aa0abd090b067cdd78cc511467853e9c9)()|Gets if the player is online on their platform.|
|bool|[IsPlayingThisGame](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a75e1425a51bddff614302a10c83b9189)()|Gets if the player is playing this game.|
|bool|[IsDnD](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a063eb82f35f76b18578a22451fee6cfd)()|Gets if the player is set to Do Not Distrub on their platform.|
|bool|[OtherDeclinedFriendship](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1aee6f1bc6d1278a9503910c4a1460f86e)()|Gets if the player has declined your Rally Here friend request.|
|bool|[AwaitingFriendshipResponse](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a32a0502bbb92dd01ae3ca862c3e81bd5)()|Gets if the player has an outstanding Rally Here friend request by you.|
|bool|[OtherIsAwaitingFriendshipResponse](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a23f36830cbe8e74cf296cf14894113e2)()|Gets if the player has sent you a Rally Here friend request.|
|const FGuid &|[GetRHPlayerUuid](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1ab1154a1e521acfa23059fc0951e383f1)()|Gets the players unique player id.|
|[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)|[GetStatus](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1acda68106fa1cc559ea680e947c7736a9)()|Gets the current Rally Here relationship status with the player.|
|[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)|[GetPreviousStatus](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a962b43450e40b0482021894c55e09c3a)()|Gets the previous Rally Here relationship status with the player prior to the most recent update.|
|void|[AcknowledgeFriendUpdate](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1ad1c88009e392036b8864a68673cd570f)()|Updates the Previous friendship status to the current friendship status for this friend.|
|const FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a58a687696ffbd4c36e0e1cca516afa87)()|Gets the last time the players friend data was modified.|
|const FString &|[GetNotes](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a8b8d26c7b6e55b23969aaff582890668)()|Gets any notes the player has set for this player.|
|[URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) *|[GetPlatformFriendAtIndex](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a5e3dc00a2cea69ce8b96ba1308727eb1)(int32 Index)|Gets a platform friend at given index for iterating plaform Friends.|
|[URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) *|[GetPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a9cdc1d50958adff822d9d2f01932061f)(ERHAPI_Platform Platform)|Gets a platform friend object for the specified platform if it exists.|
|[URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) *|[GetPlatformFriendBase](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a0ba8a124c68354881afeb15a4344d71a)(ERHAPI_Platform Platform)|Gets a platform friend object for the specified platform if it exists.|
|const TArray< [URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * > &|[GetPlatformFriends](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a7a4011046e26ffd080a5946c972a33e7)()|Gets all of the players platform friend entries.|
|const [FRH_PlayerAndPlatformInfo](/unreal-plugins/all/structfrh__playerandplatforminfo/#structFRH__PlayerAndPlatformInfo) &|[GetPlayerAndPlatformInfo](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a8e94f074e512e3c62569ba135c2a68db)()|Gets the wrapper of the players RH and platform info.|
|bool|[CanViewPlatformProfile](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1ac88f7e3d20355a574680d93412219864)()|Determines if the local player can view this player's platform profile (i.e. Gamercard on Xbox)|
|bool|[ViewPlatformProfile](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1ac806bbe4d0f6e71ca8c97d7fadc34caa)()|Attempts to show this player's platform profile.|
|class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|[GetPlayerInfo](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a18ff72f08c02d890a3c82c61689ec93d)()|Attempts to get the player info.|
|FString|[GetLastKnownDisplayName](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1acd73b58468f7e35971e820244372ae84)(ERHAPI_Platform PreferredPlatformType)|Gets the last known cached display name for the player.|
|void|[GetLastKnownDisplayNameAsync](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a3b8bf590fdccb5b793ed98b52918656d)(const FTimespan & StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock & Delegate)|Gets the last known display name for the player, will request from API as needed.|
|void|[BLUEPRINT_GetLastKnownDisplayNameAsync](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a271e31fc4527a2b1d8c2ba97342104b0)(const FTimespan & StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)||
|void|[GetRHPlayerUuidAsync](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a26d3a5a15aaf4b8787910b1a83927a82)(const FRH_GetRHPlayerUuidBlock & Delegate)|Gets the RH Player UUID for the player, will request from API as needed. As a side effect, it will update the RH Player Uuid on PlayerAndPlatformInfo.|
|void|[BLUEPRINT_GetRHPlayerUuidAsync](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1af1e785415f790f58ad334064b341dfd0)(const FRH_GetRHPlayerUuidDynamicDelegate & Delegate)||
|void|[OnPresenceUpdated](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a42b31a6399415e3b0cf5e272a07a0488)([URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * PlayerPresence)|Passes presence updates of the player on through internal delgates.|
|void|[ClearRHFriendStatus](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a192552b9a61592ae648c4e50afafeca0)()|Clears the cached friendship status for the player.|
|void|[ClearPlatformFriendStatus](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend_1a2868052b24a6cf21af2ba2ce0aab026b)()|Clears cached data for the platform friends for this player.|
## Friends



### `URH_FriendSubsystem` <a id="classURH__RHFriendAndPlatformFriend_1ad251709985520e4fa4a2fa9dbba14298"></a>

`friend class URH_FriendSubsystem`

#### Parameters

| Type | Name |
|------|------|
|[URH_FriendSubsystem](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem)||

#### Description







## Public Attributes



### `BLUEPRINT_OnPresenceUpdatedDelegate` <a id="classURH__RHFriendAndPlatformFriend_1a65b2017a3425ee682f706f14990be2a7"></a>

`FRH_OnPresenceUpdatedMulticastDynamicDelegate URH_RHFriendAndPlatformFriend::BLUEPRINT_OnPresenceUpdatedDelegate`

Blueprint delegate to listen for presence updates.




### `OnPresenceUpdatedDelegate` <a id="classURH__RHFriendAndPlatformFriend_1a55317bf6b9ee5a4bb83e0f92fae106e2"></a>

`FRH_OnPresenceUpdatedMulticastDelegate URH_RHFriendAndPlatformFriend::OnPresenceUpdatedDelegate`

Native delegate to listen for presence updates.





## Protected Attributes



### `PlayerAndPlatformInfo` <a id="classURH__RHFriendAndPlatformFriend_1a85603f6ad7e4c8402012642ba70df5d3"></a>

`FRH_PlayerAndPlatformInfo URH_RHFriendAndPlatformFriend::PlayerAndPlatformInfo`

Player Info and Platform Info combined.




### `RHFriendshipStatus` <a id="classURH__RHFriendAndPlatformFriend_1a048470b3c114f6379667149ea0a1328b"></a>

`FriendshipStatus URH_RHFriendAndPlatformFriend::RHFriendshipStatus`

Core friendship status.




### `PreviousRHFriendshipStatus` <a id="classURH__RHFriendAndPlatformFriend_1aa86a3555aa8881bcf2a4d6af5a8dffc4"></a>

`FriendshipStatus URH_RHFriendAndPlatformFriend::PreviousRHFriendshipStatus`

cached previous core friendship status.




### `LastModifiedOn` <a id="classURH__RHFriendAndPlatformFriend_1a5dc5734dfba3cba698486e514727c79a"></a>

`FDateTime URH_RHFriendAndPlatformFriend::LastModifiedOn`

Last update of the current friend information.




### `Notes` <a id="classURH__RHFriendAndPlatformFriend_1a66cefbb47f0cad7d59bd18df980022c5"></a>

`FString URH_RHFriendAndPlatformFriend::Notes`

Notes set for the friend.




### `PlatformFriends` <a id="classURH__RHFriendAndPlatformFriend_1a2a7cea15c536d6f1dc0e372bd75a7dc3"></a>

`TArray<URH_PlatformFriend*> URH_RHFriendAndPlatformFriend::PlatformFriends`

Array of platforms the player has linked to their account.




### `Etag` <a id="classURH__RHFriendAndPlatformFriend_1ab4bca6808ed022b3d72edf548745c04c"></a>

`FString URH_RHFriendAndPlatformFriend::Etag`

ETag of last friend update response.





## Public Functions



### `GetFriendSubsystem` <a id="classURH__RHFriendAndPlatformFriend_1afca989ff581d5d013cfac12722f5f4ee"></a>

class [URH_FriendSubsystem](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem) * GetFriendSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `AreFriends` <a id="classURH__RHFriendAndPlatformFriend_1a3614d4c1ddb543c6f262dd27b65ab67b"></a>

bool AreFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player is a friend through Rally Here systems or their platform.




### `AreRHFriends` <a id="classURH__RHFriendAndPlatformFriend_1a4fe2dc0a23755f8069aa7adac470b79b"></a>

bool AreRHFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player is a friend through Rally Here.




### `ArePlatformFriends` <a id="classURH__RHFriendAndPlatformFriend_1aff5cffa84cf22c06bfdb6fdbf6c86d42"></a>

bool ArePlatformFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player is a friend through their platform.




### `FriendRequestSent` <a id="classURH__RHFriendAndPlatformFriend_1afb2d64ae40c67ff9be8e05dc3efee08f"></a>

bool FriendRequestSent()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if you have sent a friend request to the player through Rally Here or their platform.




### `RHFriendRequestSent` <a id="classURH__RHFriendAndPlatformFriend_1a01322359b249aa216ec7cdd237f94efd"></a>

bool RHFriendRequestSent()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if you have sent a friend request to the player through Rally Here.




### `PendingFriendRequest` <a id="classURH__RHFriendAndPlatformFriend_1ab84f7920479877917a2251fb16c38a19"></a>

bool PendingFriendRequest()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player has sent you a friend through Rally Here or their platform.




### `RhPendingFriendRequest` <a id="classURH__RHFriendAndPlatformFriend_1a6a93c886ade405ce778fa54621dcd455"></a>

bool RhPendingFriendRequest()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player has sent you a friend through Rally Here.




### `HaveRhRelationship` <a id="classURH__RHFriendAndPlatformFriend_1a3d80d9734091740fe541d6057c07955d"></a>

bool HaveRhRelationship()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player has any sort of relationship with you through Rally Here.




### `HaveAnyRelationship` <a id="classURH__RHFriendAndPlatformFriend_1a5f7fb5fb59474fa3ad7126a64d2b7adb"></a>

bool HaveAnyRelationship()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player has any sort of relationship with you through Rally Here or their platform.




### `HavePlatformRelationship` <a id="classURH__RHFriendAndPlatformFriend_1a00b3960652a313fd9c4bd8a99e53c36b"></a>

bool HavePlatformRelationship()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player has any sort of relationship with you through their platform.




### `IsOnline` <a id="classURH__RHFriendAndPlatformFriend_1aa0abd090b067cdd78cc511467853e9c9"></a>

bool IsOnline()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player is online on their platform.




### `IsPlayingThisGame` <a id="classURH__RHFriendAndPlatformFriend_1a75e1425a51bddff614302a10c83b9189"></a>

bool IsPlayingThisGame()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player is playing this game.




### `IsDnD` <a id="classURH__RHFriendAndPlatformFriend_1a063eb82f35f76b18578a22451fee6cfd"></a>

bool IsDnD()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player is set to Do Not Distrub on their platform.




### `OtherDeclinedFriendship` <a id="classURH__RHFriendAndPlatformFriend_1aee6f1bc6d1278a9503910c4a1460f86e"></a>

bool OtherDeclinedFriendship()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player has declined your Rally Here friend request.




### `AwaitingFriendshipResponse` <a id="classURH__RHFriendAndPlatformFriend_1a32a0502bbb92dd01ae3ca862c3e81bd5"></a>

bool AwaitingFriendshipResponse()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player has an outstanding Rally Here friend request by you.




### `OtherIsAwaitingFriendshipResponse` <a id="classURH__RHFriendAndPlatformFriend_1a23f36830cbe8e74cf296cf14894113e2"></a>

bool OtherIsAwaitingFriendshipResponse()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the player has sent you a Rally Here friend request.




### `GetRHPlayerUuid` <a id="classURH__RHFriendAndPlatformFriend_1ab1154a1e521acfa23059fc0951e383f1"></a>

const FGuid & GetRHPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the players unique player id.




### `GetStatus` <a id="classURH__RHFriendAndPlatformFriend_1acda68106fa1cc559ea680e947c7736a9"></a>

[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the current Rally Here relationship status with the player.




### `GetPreviousStatus` <a id="classURH__RHFriendAndPlatformFriend_1a962b43450e40b0482021894c55e09c3a"></a>

[FriendshipStatus](/unreal-plugins/group__friends/#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) GetPreviousStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the previous Rally Here relationship status with the player prior to the most recent update.




### `AcknowledgeFriendUpdate` <a id="classURH__RHFriendAndPlatformFriend_1ad1c88009e392036b8864a68673cd570f"></a>

void AcknowledgeFriendUpdate()

#### Parameters

| Type | Name |
|------|------|

#### Description

Updates the Previous friendship status to the current friendship status for this friend.




### `GetLastModifiedOn` <a id="classURH__RHFriendAndPlatformFriend_1a58a687696ffbd4c36e0e1cca516afa87"></a>

const FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the last time the players friend data was modified.




### `GetNotes` <a id="classURH__RHFriendAndPlatformFriend_1a8b8d26c7b6e55b23969aaff582890668"></a>

const FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets any notes the player has set for this player.




### `GetPlatformFriendAtIndex` <a id="classURH__RHFriendAndPlatformFriend_1a5e3dc00a2cea69ce8b96ba1308727eb1"></a>

[URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * GetPlatformFriendAtIndex(int32 Index)

#### Parameters

| Type | Name |
|------|------|
|int32|Index|

#### Description

Gets a platform friend at given index for iterating plaform Friends.




### `GetPlatformFriend` <a id="classURH__RHFriendAndPlatformFriend_1a9cdc1d50958adff822d9d2f01932061f"></a>

[URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * GetPlatformFriend(ERHAPI_Platform Platform)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|Platform|

#### Description

Gets a platform friend object for the specified platform if it exists.




### `GetPlatformFriendBase` <a id="classURH__RHFriendAndPlatformFriend_1a0ba8a124c68354881afeb15a4344d71a"></a>

[URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * GetPlatformFriendBase(ERHAPI_Platform Platform)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|Platform|

#### Description

Gets a platform friend object for the specified platform if it exists.




### `GetPlatformFriends` <a id="classURH__RHFriendAndPlatformFriend_1a7a4011046e26ffd080a5946c972a33e7"></a>

const TArray< [URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * > & GetPlatformFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets all of the players platform friend entries.




### `GetPlayerAndPlatformInfo` <a id="classURH__RHFriendAndPlatformFriend_1a8e94f074e512e3c62569ba135c2a68db"></a>

const [FRH_PlayerAndPlatformInfo](/unreal-plugins/all/structfrh__playerandplatforminfo/#structFRH__PlayerAndPlatformInfo) & GetPlayerAndPlatformInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the wrapper of the players RH and platform info.




### `CanViewPlatformProfile` <a id="classURH__RHFriendAndPlatformFriend_1ac88f7e3d20355a574680d93412219864"></a>

bool CanViewPlatformProfile()

#### Parameters

| Type | Name |
|------|------|

#### Description

Determines if the local player can view this player's platform profile (i.e. Gamercard on Xbox)




### `ViewPlatformProfile` <a id="classURH__RHFriendAndPlatformFriend_1ac806bbe4d0f6e71ca8c97d7fadc34caa"></a>

bool ViewPlatformProfile()

#### Parameters

| Type | Name |
|------|------|

#### Description

Attempts to show this player's platform profile.



#### Returns
true if successfully requested the OSS to show the player's platform profile 



### `GetPlayerInfo` <a id="classURH__RHFriendAndPlatformFriend_1a18ff72f08c02d890a3c82c61689ec93d"></a>

class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * GetPlayerInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Attempts to get the player info.




### `GetLastKnownDisplayName` <a id="classURH__RHFriendAndPlatformFriend_1acd73b58468f7e35971e820244372ae84"></a>

FString GetLastKnownDisplayName(ERHAPI_Platform PreferredPlatformType)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|PreferredPlatformType|

#### Description

Gets the last known cached display name for the player.


#### Parameters

PreferredPlatformType
: The preferred platform to get the display name from. 

#### Returns
The players last seen display name, will try to find a valid display name even if on a different platform than the preferred. 



### `GetLastKnownDisplayNameAsync` <a id="classURH__RHFriendAndPlatformFriend_1a3b8bf590fdccb5b793ed98b52918656d"></a>

void GetLastKnownDisplayNameAsync(const FTimespan & StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|ERHAPI_Platform|PreferredPlatformType|
|const FRH_PlayerInfoGetDisplayNameBlock &|Delegate|

#### Description

Gets the last known display name for the player, will request from API as needed.


#### Parameters

PlayerInfoSubsystem
: The subsystem to use for the lookup 
StaleThreshold
: The time threshold to consider the cached display name stale. 
bForceRefresh
: If true will force a request from the API. 
PreferredPlatformType
: The preferred platform to get the display name from. 
Delegate
: The delegate to call when the request is complete. 



### `BLUEPRINT_GetLastKnownDisplayNameAsync` <a id="classURH__RHFriendAndPlatformFriend_1a271e31fc4527a2b1d8c2ba97342104b0"></a>

void BLUEPRINT_GetLastKnownDisplayNameAsync(const FTimespan & StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|ERHAPI_Platform|PreferredPlatformType|
|const FRH_PlayerInfoGetDisplayNameDynamicDelegate &|Delegate|

#### Description






### `GetRHPlayerUuidAsync` <a id="classURH__RHFriendAndPlatformFriend_1a26d3a5a15aaf4b8787910b1a83927a82"></a>

void GetRHPlayerUuidAsync(const FRH_GetRHPlayerUuidBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GetRHPlayerUuidBlock &|Delegate|

#### Description

Gets the RH Player UUID for the player, will request from API as needed. As a side effect, it will update the RH Player Uuid on PlayerAndPlatformInfo.


#### Parameters

Delegate
: The delegate to call when the request is complete. 



### `BLUEPRINT_GetRHPlayerUuidAsync` <a id="classURH__RHFriendAndPlatformFriend_1af1e785415f790f58ad334064b341dfd0"></a>

void BLUEPRINT_GetRHPlayerUuidAsync(const FRH_GetRHPlayerUuidDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GetRHPlayerUuidDynamicDelegate &|Delegate|

#### Description







## Protected Functions



### `OnPresenceUpdated` <a id="classURH__RHFriendAndPlatformFriend_1a42b31a6399415e3b0cf5e272a07a0488"></a>

void OnPresenceUpdated([URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * PlayerPresence)

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *|PlayerPresence|

#### Description

Passes presence updates of the player on through internal delgates.


#### Parameters

PlayerPresence
: The players precence information. 



### `ClearRHFriendStatus` <a id="classURH__RHFriendAndPlatformFriend_1a192552b9a61592ae648c4e50afafeca0"></a>

void ClearRHFriendStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the cached friendship status for the player.




### `ClearPlatformFriendStatus` <a id="classURH__RHFriendAndPlatformFriend_1a2868052b24a6cf21af2ba2ce0aab026b"></a>

void ClearPlatformFriendStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears cached data for the platform friends for this player.





