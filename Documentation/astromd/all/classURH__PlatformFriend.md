---
title: URH_PlatformFriend Class
---Inherits from UObject

Platform Friend class tracks all the information for a user you have a relationship with on your platform.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId)|[PlayerPlatformId](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a1eca8d8c1f024dbb754aff1ecc7e7ff0)|The players Platform Id.|
|FString|[DisplayName](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a6ffdcb673470361a4eb3f67436219ac9)|The players Display Name for the platform.|
|FString|[RichPresenceInfo](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a9656106e79de89728f5dd29b02f87432)|The players Rich Presence on the platform.|
|bool|[Joinable](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1adf43f5e6425ce44836e406c6fb3c18ef)|If the player is currently joinable.|
|bool|[PlayingGame](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ae47a2802d826185a6e409b1bc7839cb9)|If the player is currently playering a game.|
|bool|[PlayingThisGame](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a6533963934e5cdd342e6bdf75486f039)|If the player is currently playing this game.|
|bool|[Online](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a52a160091ccf388919ef4cc23450d617)|If the player is online.|
|bool|[DoNotDisturb](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a2dff3ff7e95ab89d203ba0489c618688)|If the player has do not disturb on.|
|bool|[Friend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1afd2199ee1c085ee9be41d687cf55eb3e)|If the player is a platform friend.|
|bool|[Blocked](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a790eb947fad2442e857a2aa08487fb53)|If the player is blocked by you by platform.|
|bool|[PendingFriendRequestToYou](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a3f81ed5d899ca081e83bda98ca0d6c94)|If the player is requesting your friendship via platform.|
|bool|[PendingFriendRequestFromYou](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a27df17201ec44564399d2c7f65c3f091)|If the player has a pendinf friendship request via platform.|
|const FString &|[GetClientDisplayName](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ac89430bd4d2963ba69e5cf08e7d810cd)()|Gets the display name of the user on their platform.|
|const FString &|[GetRichPresenceInfo](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a967b91abc74e03388029589d91e8fd43)()|Gets the rich presence of the user on their platform.|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|[GetPlayerPlatformId](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a6eaf359b230a173d585617720b72cf91)()|Gets a struct of the players platform and unique platform player id.|
|ERHAPI_Platform|[GetPlatform](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776)()|Gets the type of platform.|
||[UE_DEPRECATED](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a9852e7171ecffc5a91fdd50cbbd89880)(5. 0, "Use [GetPlatform](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776)() instead of GetPlatformBase()" )|Gets the type of platform.|
|const FString &|[GetPlatformUserId](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a32e5b86cc9568d927f2cf98ee4442ddf)()|Gets the users unique platform player id.|
|bool|[IsJoinable](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a471e1426cd5693912fa3ebf57fd4540a)()|Gets if you are able to join the user in their gaming session.|
|bool|[IsPlayingGame](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1adcbf4c48ec43e2c3db5df0423cb14f37)()|Gets if the user is playing any game.|
|bool|[IsPlayingThisGame](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1aeb207b249b7ebcbd994dfce117b85e63)()|Gets if the user is playing this game.|
|bool|[IsOnline](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a762df48ad7d203526a11ed0ebcca591d)()|Gets if the user is online on their platform.|
|bool|[IsDND](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ae31c8b2976c5fdba8997ed86741c32b6)()|Gets if the user has set Do Non Disturb mode on their platform.|
|bool|[IsFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ad80512a9aeb07dcfb8dfea738c03c3b3)()|Gets if the user is your friend on their platform.|
|bool|[IsBlocked](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1af3d470d61dcec1e4c7b6e9620d116ebc)()|Gets if the user is blocked by you on their platform.|
|void|[SetBlocked](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ab73257e39abdce7f98f284db6da8440f)(bool bNewBlocked)|Sets this player as blocked by you on their platform.|
|bool|[HasPendingFriendRequestToYou](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a28f23d7a48b451795262b407a4b9e1e8)()|Gets if the user has sent a friend request to you on their platform.|
|bool|[HasPendingFriendRequestFromYou](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a0f1be6edfeebb8bbc73b4a06adfc0707)()|Gets if the user has been sent a friend request by you on their platform.|
|bool|[HasAnyRelationship](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1affa1328c8735c3e1cad102186a8ca688)()|Gets if the user is a friend or has been sent or has sent a friend request on their platform with you.|
|void|[Clear](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a8b646f0d1117da0268e55a6c6d4c1934)()|Clears all the info.|
|void|[ClearFriendAndStatusInfo](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a684d343b73ed3fc6bc79a1fdd5e5cd2f)()|Clears all the status information but not the users id.|
|void|[Init](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a6aaf6ce557dedb468ce8b471424886fb)([URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * other)|Initializes a Platform Friend with another Platform Friend.|
|void|[Init](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a82b31de1b0055a764e97b6f5f0348617)(const FOnlineFriend & OnlineFriend, const FOnlineUserPresence & Presence, IOnlineSubsystem * OSS, bool bBlocked)|Initializes a Platform Friend from online information from their platform.|
|void|[InitBlocked](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a3dba0aff016b1fc7ee86fc8bc5c3c5a9)([FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) InPlatformId)|Initializes a Blocked Platform Player with minimal information.|
|void|[UpdatePresence](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1a55dde9ee7ba023fc5b09e8a1e68322d9)(const FOnlineUserPresence & Presence)||
## Protected Attributes



### `PlayerPlatformId` <a id="classURH__PlatformFriend_1a1eca8d8c1f024dbb754aff1ecc7e7ff0"></a>

`FRH_PlayerPlatformId URH_PlatformFriend::PlayerPlatformId`

The players Platform Id.




### `DisplayName` <a id="classURH__PlatformFriend_1a6ffdcb673470361a4eb3f67436219ac9"></a>

`FString URH_PlatformFriend::DisplayName`

The players Display Name for the platform.




### `RichPresenceInfo` <a id="classURH__PlatformFriend_1a9656106e79de89728f5dd29b02f87432"></a>

`FString URH_PlatformFriend::RichPresenceInfo`

The players Rich Presence on the platform.




### `Joinable` <a id="classURH__PlatformFriend_1adf43f5e6425ce44836e406c6fb3c18ef"></a>

`bool URH_PlatformFriend::Joinable`

If the player is currently joinable.




### `PlayingGame` <a id="classURH__PlatformFriend_1ae47a2802d826185a6e409b1bc7839cb9"></a>

`bool URH_PlatformFriend::PlayingGame`

If the player is currently playering a game.




### `PlayingThisGame` <a id="classURH__PlatformFriend_1a6533963934e5cdd342e6bdf75486f039"></a>

`bool URH_PlatformFriend::PlayingThisGame`

If the player is currently playing this game.




### `Online` <a id="classURH__PlatformFriend_1a52a160091ccf388919ef4cc23450d617"></a>

`bool URH_PlatformFriend::Online`

If the player is online.




### `DoNotDisturb` <a id="classURH__PlatformFriend_1a2dff3ff7e95ab89d203ba0489c618688"></a>

`bool URH_PlatformFriend::DoNotDisturb`

If the player has do not disturb on.




### `Friend` <a id="classURH__PlatformFriend_1afd2199ee1c085ee9be41d687cf55eb3e"></a>

`bool URH_PlatformFriend::Friend`

If the player is a platform friend.




### `Blocked` <a id="classURH__PlatformFriend_1a790eb947fad2442e857a2aa08487fb53"></a>

`bool URH_PlatformFriend::Blocked`

If the player is blocked by you by platform.




### `PendingFriendRequestToYou` <a id="classURH__PlatformFriend_1a3f81ed5d899ca081e83bda98ca0d6c94"></a>

`bool URH_PlatformFriend::PendingFriendRequestToYou`

If the player is requesting your friendship via platform.




### `PendingFriendRequestFromYou` <a id="classURH__PlatformFriend_1a27df17201ec44564399d2c7f65c3f091"></a>

`bool URH_PlatformFriend::PendingFriendRequestFromYou`

If the player has a pendinf friendship request via platform.





## Public Functions



### `GetClientDisplayName` <a id="classURH__PlatformFriend_1ac89430bd4d2963ba69e5cf08e7d810cd"></a>

const FString & GetClientDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the display name of the user on their platform.




### `GetRichPresenceInfo` <a id="classURH__PlatformFriend_1a967b91abc74e03388029589d91e8fd43"></a>

const FString & GetRichPresenceInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the rich presence of the user on their platform.




### `GetPlayerPlatformId` <a id="classURH__PlatformFriend_1a6eaf359b230a173d585617720b72cf91"></a>

const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & GetPlayerPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a struct of the players platform and unique platform player id.




### `GetPlatform` <a id="classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776"></a>

ERHAPI_Platform GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the type of platform.




### `UE_DEPRECATED` <a id="classURH__PlatformFriend_1a9852e7171ecffc5a91fdd50cbbd89880"></a>

 UE_DEPRECATED(5. 0, "Use [GetPlatform](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776)() instead of GetPlatformBase()" )

#### Parameters

| Type | Name |
|------|------|
|5.|0|
|"Use [GetPlatform](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776)() instead of GetPlatformBase()"||

#### Description

Gets the type of platform.




### `GetPlatformUserId` <a id="classURH__PlatformFriend_1a32e5b86cc9568d927f2cf98ee4442ddf"></a>

const FString & GetPlatformUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the users unique platform player id.




### `IsJoinable` <a id="classURH__PlatformFriend_1a471e1426cd5693912fa3ebf57fd4540a"></a>

bool IsJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if you are able to join the user in their gaming session.




### `IsPlayingGame` <a id="classURH__PlatformFriend_1adcbf4c48ec43e2c3db5df0423cb14f37"></a>

bool IsPlayingGame()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user is playing any game.




### `IsPlayingThisGame` <a id="classURH__PlatformFriend_1aeb207b249b7ebcbd994dfce117b85e63"></a>

bool IsPlayingThisGame()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user is playing this game.




### `IsOnline` <a id="classURH__PlatformFriend_1a762df48ad7d203526a11ed0ebcca591d"></a>

bool IsOnline()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user is online on their platform.




### `IsDND` <a id="classURH__PlatformFriend_1ae31c8b2976c5fdba8997ed86741c32b6"></a>

bool IsDND()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user has set Do Non Disturb mode on their platform.




### `IsFriend` <a id="classURH__PlatformFriend_1ad80512a9aeb07dcfb8dfea738c03c3b3"></a>

bool IsFriend()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user is your friend on their platform.




### `IsBlocked` <a id="classURH__PlatformFriend_1af3d470d61dcec1e4c7b6e9620d116ebc"></a>

bool IsBlocked()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user is blocked by you on their platform.




### `SetBlocked` <a id="classURH__PlatformFriend_1ab73257e39abdce7f98f284db6da8440f"></a>

void SetBlocked(bool bNewBlocked)

#### Parameters

| Type | Name |
|------|------|
|bool|bNewBlocked|

#### Description

Sets this player as blocked by you on their platform.




### `HasPendingFriendRequestToYou` <a id="classURH__PlatformFriend_1a28f23d7a48b451795262b407a4b9e1e8"></a>

bool HasPendingFriendRequestToYou()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user has sent a friend request to you on their platform.




### `HasPendingFriendRequestFromYou` <a id="classURH__PlatformFriend_1a0f1be6edfeebb8bbc73b4a06adfc0707"></a>

bool HasPendingFriendRequestFromYou()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user has been sent a friend request by you on their platform.




### `HasAnyRelationship` <a id="classURH__PlatformFriend_1affa1328c8735c3e1cad102186a8ca688"></a>

bool HasAnyRelationship()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the user is a friend or has been sent or has sent a friend request on their platform with you.




### `Clear` <a id="classURH__PlatformFriend_1a8b646f0d1117da0268e55a6c6d4c1934"></a>

void Clear()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears all the info.




### `ClearFriendAndStatusInfo` <a id="classURH__PlatformFriend_1a684d343b73ed3fc6bc79a1fdd5e5cd2f"></a>

void ClearFriendAndStatusInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears all the status information but not the users id.




### `Init` <a id="classURH__PlatformFriend_1a6aaf6ce557dedb468ce8b471424886fb"></a>

void Init([URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * other)

#### Parameters

| Type | Name |
|------|------|
|[URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) *|other|

#### Description

Initializes a Platform Friend with another Platform Friend.




### `Init` <a id="classURH__PlatformFriend_1a82b31de1b0055a764e97b6f5f0348617"></a>

void Init(const FOnlineFriend & OnlineFriend, const FOnlineUserPresence & Presence, IOnlineSubsystem * OSS, bool bBlocked)

#### Parameters

| Type | Name |
|------|------|
|const FOnlineFriend &|OnlineFriend|
|const FOnlineUserPresence &|Presence|
|IOnlineSubsystem *|OSS|
|bool|bBlocked|

#### Description

Initializes a Platform Friend from online information from their platform.




### `InitBlocked` <a id="classURH__PlatformFriend_1a3dba0aff016b1fc7ee86fc8bc5c3c5a9"></a>

void InitBlocked([FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) InPlatformId)

#### Parameters

| Type | Name |
|------|------|
|[FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId)|InPlatformId|

#### Description

Initializes a Blocked Platform Player with minimal information.




### `UpdatePresence` <a id="classURH__PlatformFriend_1a55dde9ee7ba023fc5b09e8a1e68322d9"></a>

void UpdatePresence(const FOnlineUserPresence & Presence)

#### Parameters

| Type | Name |
|------|------|
|const FOnlineUserPresence &|Presence|

#### Description







