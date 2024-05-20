# Friends <a id="group__Friends"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`FriendshipStatus`](#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)            | Status of players' friend relationship.
`class `[`URH_PlatformFriend`](#classURH__PlatformFriend) | Platform Friend class tracks all the information for a user you have a relationship with on your platform.
`class `[`URH_RHFriendAndPlatformFriend`](#classURH__RHFriendAndPlatformFriend) | RH Friend and Platform Friend class that wraps a Rally Here Friend and Platform Friend together.
`class `[`URH_FriendSubsystem`](#classURH__FriendSubsystem) | Friends Subsystem for handling a users relationships with other players.

## Members

#### `enum `[`FriendshipStatus`](#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244) <a id="group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244"></a>

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
RH_None            | Not friends
RH_Friends            | Mutual friends
RH_FriendRequestSent            | Friend request has been sent to other player
RH_FriendRequestPending            | Friend request has been sent by other player
RH_FriendRequestDeclinedByOther            | Friend request declined by other player

Status of players' friend relationship.

## class `URH_PlatformFriend` <a id="classURH__PlatformFriend"></a>

```
class URH_PlatformFriend
  : public UObject
```

Platform Friend class tracks all the information for a user you have a relationship with on your platform.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const FString & `[`GetClientDisplayName`](#classURH__PlatformFriend_1ac89430bd4d2963ba69e5cf08e7d810cd)`() const` | Gets the display name of the user on their platform.
`public inline const FString & `[`GetRichPresenceInfo`](#classURH__PlatformFriend_1a967b91abc74e03388029589d91e8fd43)`() const` | Gets the rich presence of the user on their platform.
`public inline const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & `[`GetPlayerPlatformId`](#classURH__PlatformFriend_1a6eaf359b230a173d585617720b72cf91)`() const` | Gets a struct of the players platform and unique platform player id.
`public inline ERHAPI_Platform `[`GetPlatform`](#classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776)`() const` | Gets the type of platform.
`public inline  `[`UE_DEPRECATED`](#classURH__PlatformFriend_1a9852e7171ecffc5a91fdd50cbbd89880)`(5. 0,"Use `[`GetPlatform`](Friends.md#classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776)() instead of GetPlatformBase()`") const` | Gets the type of platform.
`public inline const FString & `[`GetPlatformUserId`](#classURH__PlatformFriend_1a32e5b86cc9568d927f2cf98ee4442ddf)`() const` | Gets the users unique platform player id.
`public inline bool `[`IsJoinable`](#classURH__PlatformFriend_1a471e1426cd5693912fa3ebf57fd4540a)`() const` | Gets if you are able to join the user in their gaming session.
`public inline bool `[`IsPlayingGame`](#classURH__PlatformFriend_1adcbf4c48ec43e2c3db5df0423cb14f37)`() const` | Gets if the user is playing any game.
`public inline bool `[`IsPlayingThisGame`](#classURH__PlatformFriend_1aeb207b249b7ebcbd994dfce117b85e63)`() const` | Gets if the user is playing this game.
`public inline bool `[`IsOnline`](#classURH__PlatformFriend_1a762df48ad7d203526a11ed0ebcca591d)`() const` | Gets if the user is online on their platform.
`public inline bool `[`IsDND`](#classURH__PlatformFriend_1ae31c8b2976c5fdba8997ed86741c32b6)`() const` | Gets if the user has set Do Non Disturb mode on their platform.
`public inline bool `[`IsFriend`](#classURH__PlatformFriend_1ad80512a9aeb07dcfb8dfea738c03c3b3)`() const` | Gets if the user is your friend on their platform.
`public inline bool `[`IsBlocked`](#classURH__PlatformFriend_1af3d470d61dcec1e4c7b6e9620d116ebc)`() const` | Gets if the user is blocked by you on their platform.
`public inline void `[`SetBlocked`](#classURH__PlatformFriend_1ab73257e39abdce7f98f284db6da8440f)`(bool bNewBlocked)` | Sets this player as blocked by you on their platform.
`public inline bool `[`HasPendingFriendRequestToYou`](#classURH__PlatformFriend_1a28f23d7a48b451795262b407a4b9e1e8)`() const` | Gets if the user has sent a friend request to you on their platform.
`public inline bool `[`HasPendingFriendRequestFromYou`](#classURH__PlatformFriend_1a0f1be6edfeebb8bbc73b4a06adfc0707)`() const` | Gets if the user has been sent a friend request by you on their platform.
`public inline bool `[`HasAnyRelationship`](#classURH__PlatformFriend_1affa1328c8735c3e1cad102186a8ca688)`() const` | Gets if the user is a friend or has been sent or has sent a friend request on their platform with you.
`public inline void `[`Clear`](#classURH__PlatformFriend_1a8b646f0d1117da0268e55a6c6d4c1934)`()` | Clears all the info.
`public inline void `[`ClearFriendAndStatusInfo`](#classURH__PlatformFriend_1a684d343b73ed3fc6bc79a1fdd5e5cd2f)`()` | Clears all the status information but not the users id.
`public inline void `[`Init`](#classURH__PlatformFriend_1a6aaf6ce557dedb468ce8b471424886fb)`(`[`URH_PlatformFriend`](#classURH__PlatformFriend)` * other)` | Initializes a Platform Friend with another Platform Friend.
`public inline void `[`Init`](#classURH__PlatformFriend_1a82b31de1b0055a764e97b6f5f0348617)`(const FOnlineFriend & OnlineFriend,const FOnlineUserPresence & Presence,IOnlineSubsystem * OSS,bool bBlocked)` | Initializes a Platform Friend from online information from their platform.
`public inline void `[`Init`](#classURH__PlatformFriend_1a291f7161ae50b02048ab68f6a703a26c)`(const `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * PlayerPlatformInfo)` | Initializes a Platform Friend from linked player platform information.
`public inline void `[`InitBlocked`](#classURH__PlatformFriend_1a3dba0aff016b1fc7ee86fc8bc5c3c5a9)`(`[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` InPlatformId)` | Initializes a Blocked Platform Player with minimal information.
`public inline void `[`UpdatePresence`](#classURH__PlatformFriend_1a55dde9ee7ba023fc5b09e8a1e68322d9)`(const FOnlineUserPresence & Presence)` | 
`protected `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#classURH__PlatformFriend_1a1eca8d8c1f024dbb754aff1ecc7e7ff0) | The players Platform Id.
`protected FString `[`DisplayName`](#classURH__PlatformFriend_1a6ffdcb673470361a4eb3f67436219ac9) | The players Display Name for the platform.
`protected FString `[`RichPresenceInfo`](#classURH__PlatformFriend_1a9656106e79de89728f5dd29b02f87432) | The players Rich Presence on the platform.
`protected bool `[`Joinable`](#classURH__PlatformFriend_1adf43f5e6425ce44836e406c6fb3c18ef) | If the player is currently joinable.
`protected bool `[`PlayingGame`](#classURH__PlatformFriend_1ae47a2802d826185a6e409b1bc7839cb9) | If the player is currently playering a game.
`protected bool `[`PlayingThisGame`](#classURH__PlatformFriend_1a6533963934e5cdd342e6bdf75486f039) | If the player is currently playing this game.
`protected bool `[`Online`](#classURH__PlatformFriend_1a52a160091ccf388919ef4cc23450d617) | If the player is online.
`protected bool `[`DoNotDisturb`](#classURH__PlatformFriend_1a2dff3ff7e95ab89d203ba0489c618688) | If the player has do not disturb on.
`protected bool `[`Friend`](#classURH__PlatformFriend_1afd2199ee1c085ee9be41d687cf55eb3e) | If the player is a platform friend.
`protected bool `[`Blocked`](#classURH__PlatformFriend_1a790eb947fad2442e857a2aa08487fb53) | If the player is blocked by you by platform.
`protected bool `[`PendingFriendRequestToYou`](#classURH__PlatformFriend_1a3f81ed5d899ca081e83bda98ca0d6c94) | If the player is requesting your friendship via platform.
`protected bool `[`PendingFriendRequestFromYou`](#classURH__PlatformFriend_1a27df17201ec44564399d2c7f65c3f091) | If the player has a pendinf friendship request via platform.

#### Members

#### `public inline const FString & `[`GetClientDisplayName`](#classURH__PlatformFriend_1ac89430bd4d2963ba69e5cf08e7d810cd)`() const` <a id="classURH__PlatformFriend_1ac89430bd4d2963ba69e5cf08e7d810cd"></a>

Gets the display name of the user on their platform.

#### `public inline const FString & `[`GetRichPresenceInfo`](#classURH__PlatformFriend_1a967b91abc74e03388029589d91e8fd43)`() const` <a id="classURH__PlatformFriend_1a967b91abc74e03388029589d91e8fd43"></a>

Gets the rich presence of the user on their platform.

#### `public inline const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & `[`GetPlayerPlatformId`](#classURH__PlatformFriend_1a6eaf359b230a173d585617720b72cf91)`() const` <a id="classURH__PlatformFriend_1a6eaf359b230a173d585617720b72cf91"></a>

Gets a struct of the players platform and unique platform player id.

#### `public inline ERHAPI_Platform `[`GetPlatform`](#classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776)`() const` <a id="classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776"></a>

Gets the type of platform.

#### `public inline  `[`UE_DEPRECATED`](#classURH__PlatformFriend_1a9852e7171ecffc5a91fdd50cbbd89880)`(5. 0,"Use `[`GetPlatform`](Friends.md#classURH__PlatformFriend_1ad7c328a55f4d92b976946b4765be8776)() instead of GetPlatformBase()`") const` <a id="classURH__PlatformFriend_1a9852e7171ecffc5a91fdd50cbbd89880"></a>

Gets the type of platform.

#### `public inline const FString & `[`GetPlatformUserId`](#classURH__PlatformFriend_1a32e5b86cc9568d927f2cf98ee4442ddf)`() const` <a id="classURH__PlatformFriend_1a32e5b86cc9568d927f2cf98ee4442ddf"></a>

Gets the users unique platform player id.

#### `public inline bool `[`IsJoinable`](#classURH__PlatformFriend_1a471e1426cd5693912fa3ebf57fd4540a)`() const` <a id="classURH__PlatformFriend_1a471e1426cd5693912fa3ebf57fd4540a"></a>

Gets if you are able to join the user in their gaming session.

#### `public inline bool `[`IsPlayingGame`](#classURH__PlatformFriend_1adcbf4c48ec43e2c3db5df0423cb14f37)`() const` <a id="classURH__PlatformFriend_1adcbf4c48ec43e2c3db5df0423cb14f37"></a>

Gets if the user is playing any game.

#### `public inline bool `[`IsPlayingThisGame`](#classURH__PlatformFriend_1aeb207b249b7ebcbd994dfce117b85e63)`() const` <a id="classURH__PlatformFriend_1aeb207b249b7ebcbd994dfce117b85e63"></a>

Gets if the user is playing this game.

#### `public inline bool `[`IsOnline`](#classURH__PlatformFriend_1a762df48ad7d203526a11ed0ebcca591d)`() const` <a id="classURH__PlatformFriend_1a762df48ad7d203526a11ed0ebcca591d"></a>

Gets if the user is online on their platform.

#### `public inline bool `[`IsDND`](#classURH__PlatformFriend_1ae31c8b2976c5fdba8997ed86741c32b6)`() const` <a id="classURH__PlatformFriend_1ae31c8b2976c5fdba8997ed86741c32b6"></a>

Gets if the user has set Do Non Disturb mode on their platform.

#### `public inline bool `[`IsFriend`](#classURH__PlatformFriend_1ad80512a9aeb07dcfb8dfea738c03c3b3)`() const` <a id="classURH__PlatformFriend_1ad80512a9aeb07dcfb8dfea738c03c3b3"></a>

Gets if the user is your friend on their platform.

#### `public inline bool `[`IsBlocked`](#classURH__PlatformFriend_1af3d470d61dcec1e4c7b6e9620d116ebc)`() const` <a id="classURH__PlatformFriend_1af3d470d61dcec1e4c7b6e9620d116ebc"></a>

Gets if the user is blocked by you on their platform.

#### `public inline void `[`SetBlocked`](#classURH__PlatformFriend_1ab73257e39abdce7f98f284db6da8440f)`(bool bNewBlocked)` <a id="classURH__PlatformFriend_1ab73257e39abdce7f98f284db6da8440f"></a>

Sets this player as blocked by you on their platform.

#### `public inline bool `[`HasPendingFriendRequestToYou`](#classURH__PlatformFriend_1a28f23d7a48b451795262b407a4b9e1e8)`() const` <a id="classURH__PlatformFriend_1a28f23d7a48b451795262b407a4b9e1e8"></a>

Gets if the user has sent a friend request to you on their platform.

#### `public inline bool `[`HasPendingFriendRequestFromYou`](#classURH__PlatformFriend_1a0f1be6edfeebb8bbc73b4a06adfc0707)`() const` <a id="classURH__PlatformFriend_1a0f1be6edfeebb8bbc73b4a06adfc0707"></a>

Gets if the user has been sent a friend request by you on their platform.

#### `public inline bool `[`HasAnyRelationship`](#classURH__PlatformFriend_1affa1328c8735c3e1cad102186a8ca688)`() const` <a id="classURH__PlatformFriend_1affa1328c8735c3e1cad102186a8ca688"></a>

Gets if the user is a friend or has been sent or has sent a friend request on their platform with you.

#### `public inline void `[`Clear`](#classURH__PlatformFriend_1a8b646f0d1117da0268e55a6c6d4c1934)`()` <a id="classURH__PlatformFriend_1a8b646f0d1117da0268e55a6c6d4c1934"></a>

Clears all the info.

#### `public inline void `[`ClearFriendAndStatusInfo`](#classURH__PlatformFriend_1a684d343b73ed3fc6bc79a1fdd5e5cd2f)`()` <a id="classURH__PlatformFriend_1a684d343b73ed3fc6bc79a1fdd5e5cd2f"></a>

Clears all the status information but not the users id.

#### `public inline void `[`Init`](#classURH__PlatformFriend_1a6aaf6ce557dedb468ce8b471424886fb)`(`[`URH_PlatformFriend`](#classURH__PlatformFriend)` * other)` <a id="classURH__PlatformFriend_1a6aaf6ce557dedb468ce8b471424886fb"></a>

Initializes a Platform Friend with another Platform Friend.

#### `public inline void `[`Init`](#classURH__PlatformFriend_1a82b31de1b0055a764e97b6f5f0348617)`(const FOnlineFriend & OnlineFriend,const FOnlineUserPresence & Presence,IOnlineSubsystem * OSS,bool bBlocked)` <a id="classURH__PlatformFriend_1a82b31de1b0055a764e97b6f5f0348617"></a>

Initializes a Platform Friend from online information from their platform.

#### `public inline void `[`Init`](#classURH__PlatformFriend_1a291f7161ae50b02048ab68f6a703a26c)`(const `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * PlayerPlatformInfo)` <a id="classURH__PlatformFriend_1a291f7161ae50b02048ab68f6a703a26c"></a>

Initializes a Platform Friend from linked player platform information.

#### `public inline void `[`InitBlocked`](#classURH__PlatformFriend_1a3dba0aff016b1fc7ee86fc8bc5c3c5a9)`(`[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` InPlatformId)` <a id="classURH__PlatformFriend_1a3dba0aff016b1fc7ee86fc8bc5c3c5a9"></a>

Initializes a Blocked Platform Player with minimal information.

#### `public inline void `[`UpdatePresence`](#classURH__PlatformFriend_1a55dde9ee7ba023fc5b09e8a1e68322d9)`(const FOnlineUserPresence & Presence)` <a id="classURH__PlatformFriend_1a55dde9ee7ba023fc5b09e8a1e68322d9"></a>

#### `protected `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#classURH__PlatformFriend_1a1eca8d8c1f024dbb754aff1ecc7e7ff0) <a id="classURH__PlatformFriend_1a1eca8d8c1f024dbb754aff1ecc7e7ff0"></a>

The players Platform Id.

#### `protected FString `[`DisplayName`](#classURH__PlatformFriend_1a6ffdcb673470361a4eb3f67436219ac9) <a id="classURH__PlatformFriend_1a6ffdcb673470361a4eb3f67436219ac9"></a>

The players Display Name for the platform.

#### `protected FString `[`RichPresenceInfo`](#classURH__PlatformFriend_1a9656106e79de89728f5dd29b02f87432) <a id="classURH__PlatformFriend_1a9656106e79de89728f5dd29b02f87432"></a>

The players Rich Presence on the platform.

#### `protected bool `[`Joinable`](#classURH__PlatformFriend_1adf43f5e6425ce44836e406c6fb3c18ef) <a id="classURH__PlatformFriend_1adf43f5e6425ce44836e406c6fb3c18ef"></a>

If the player is currently joinable.

#### `protected bool `[`PlayingGame`](#classURH__PlatformFriend_1ae47a2802d826185a6e409b1bc7839cb9) <a id="classURH__PlatformFriend_1ae47a2802d826185a6e409b1bc7839cb9"></a>

If the player is currently playering a game.

#### `protected bool `[`PlayingThisGame`](#classURH__PlatformFriend_1a6533963934e5cdd342e6bdf75486f039) <a id="classURH__PlatformFriend_1a6533963934e5cdd342e6bdf75486f039"></a>

If the player is currently playing this game.

#### `protected bool `[`Online`](#classURH__PlatformFriend_1a52a160091ccf388919ef4cc23450d617) <a id="classURH__PlatformFriend_1a52a160091ccf388919ef4cc23450d617"></a>

If the player is online.

#### `protected bool `[`DoNotDisturb`](#classURH__PlatformFriend_1a2dff3ff7e95ab89d203ba0489c618688) <a id="classURH__PlatformFriend_1a2dff3ff7e95ab89d203ba0489c618688"></a>

If the player has do not disturb on.

#### `protected bool `[`Friend`](#classURH__PlatformFriend_1afd2199ee1c085ee9be41d687cf55eb3e) <a id="classURH__PlatformFriend_1afd2199ee1c085ee9be41d687cf55eb3e"></a>

If the player is a platform friend.

#### `protected bool `[`Blocked`](#classURH__PlatformFriend_1a790eb947fad2442e857a2aa08487fb53) <a id="classURH__PlatformFriend_1a790eb947fad2442e857a2aa08487fb53"></a>

If the player is blocked by you by platform.

#### `protected bool `[`PendingFriendRequestToYou`](#classURH__PlatformFriend_1a3f81ed5d899ca081e83bda98ca0d6c94) <a id="classURH__PlatformFriend_1a3f81ed5d899ca081e83bda98ca0d6c94"></a>

If the player is requesting your friendship via platform.

#### `protected bool `[`PendingFriendRequestFromYou`](#classURH__PlatformFriend_1a27df17201ec44564399d2c7f65c3f091) <a id="classURH__PlatformFriend_1a27df17201ec44564399d2c7f65c3f091"></a>

If the player has a pendinf friendship request via platform.

## class `URH_RHFriendAndPlatformFriend` <a id="classURH__RHFriendAndPlatformFriend"></a>

```
class URH_RHFriendAndPlatformFriend
  : public UObject
```

RH Friend and Platform Friend class that wraps a Rally Here Friend and Platform Friend together.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OnPlayerInfoSubobjectUpdatedMulticastDelegate `[`OnPresenceUpdatedDelegate`](#classURH__RHFriendAndPlatformFriend_1a8a0e044ae90e40b27535bb747f7dbda0) | Native delegate to listen for presence updates.
`public class `[`URH_FriendSubsystem`](Friends.md#classURH__FriendSubsystem)` * `[`GetFriendSubsystem`](#classURH__RHFriendAndPlatformFriend_1afca989ff581d5d013cfac12722f5f4ee)`() const` | 
`public inline bool `[`AreFriends`](#classURH__RHFriendAndPlatformFriend_1a3614d4c1ddb543c6f262dd27b65ab67b)`() const` | Gets if the player is a friend through Rally Here systems or their platform.
`public inline bool `[`AreRHFriends`](#classURH__RHFriendAndPlatformFriend_1a4fe2dc0a23755f8069aa7adac470b79b)`() const` | Gets if the player is a friend through Rally Here.
`public inline bool `[`ArePlatformFriends`](#classURH__RHFriendAndPlatformFriend_1aff5cffa84cf22c06bfdb6fdbf6c86d42)`() const` | Gets if the player is a friend through their platform.
`public inline bool `[`FriendRequestSent`](#classURH__RHFriendAndPlatformFriend_1afb2d64ae40c67ff9be8e05dc3efee08f)`() const` | Gets if you have sent a friend request to the player through Rally Here or their platform.
`public inline bool `[`RHFriendRequestSent`](#classURH__RHFriendAndPlatformFriend_1a01322359b249aa216ec7cdd237f94efd)`() const` | Gets if you have sent a friend request to the player through Rally Here.
`public inline bool `[`PendingFriendRequest`](#classURH__RHFriendAndPlatformFriend_1ab84f7920479877917a2251fb16c38a19)`() const` | Gets if the player has sent you a friend through Rally Here or their platform.
`public inline bool `[`RhPendingFriendRequest`](#classURH__RHFriendAndPlatformFriend_1a6a93c886ade405ce778fa54621dcd455)`() const` | Gets if the player has sent you a friend through Rally Here.
`public inline bool `[`HaveRhRelationship`](#classURH__RHFriendAndPlatformFriend_1a3d80d9734091740fe541d6057c07955d)`() const` | Gets if the player has any sort of relationship with you through Rally Here.
`public inline bool `[`HaveAnyRelationship`](#classURH__RHFriendAndPlatformFriend_1a5f7fb5fb59474fa3ad7126a64d2b7adb)`() const` | Gets if the player has any sort of relationship with you through Rally Here or their platform.
`public inline bool `[`HavePlatformRelationship`](#classURH__RHFriendAndPlatformFriend_1a00b3960652a313fd9c4bd8a99e53c36b)`() const` | Gets if the player has any sort of relationship with you through their platform.
`public inline bool `[`IsOnline`](#classURH__RHFriendAndPlatformFriend_1aa0abd090b067cdd78cc511467853e9c9)`() const` | Gets if the player is online on their platform.
`public inline bool `[`IsPlayingThisGame`](#classURH__RHFriendAndPlatformFriend_1a75e1425a51bddff614302a10c83b9189)`() const` | Gets if the player is playing this game.
`public inline bool `[`IsDnD`](#classURH__RHFriendAndPlatformFriend_1a063eb82f35f76b18578a22451fee6cfd)`() const` | Gets if the player is set to Do Not Distrub on their platform.
`public inline bool `[`OtherDeclinedFriendship`](#classURH__RHFriendAndPlatformFriend_1aee6f1bc6d1278a9503910c4a1460f86e)`() const` | Gets if the player has declined your Rally Here friend request.
`public inline bool `[`AwaitingFriendshipResponse`](#classURH__RHFriendAndPlatformFriend_1a32a0502bbb92dd01ae3ca862c3e81bd5)`() const` | Gets if the player has an outstanding Rally Here friend request by you.
`public inline bool `[`OtherIsAwaitingFriendshipResponse`](#classURH__RHFriendAndPlatformFriend_1a23f36830cbe8e74cf296cf14894113e2)`() const` | Gets if the player has sent you a Rally Here friend request.
`public inline const FGuid & `[`GetRHPlayerUuid`](#classURH__RHFriendAndPlatformFriend_1ab1154a1e521acfa23059fc0951e383f1)`() const` | Gets the players unique player id.
`public inline `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`GetStatus`](#classURH__RHFriendAndPlatformFriend_1acda68106fa1cc559ea680e947c7736a9)`() const` | Gets the current Rally Here relationship status with the player.
`public inline `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`GetPreviousStatus`](#classURH__RHFriendAndPlatformFriend_1a962b43450e40b0482021894c55e09c3a)`() const` | Gets the previous Rally Here relationship status with the player prior to the most recent update.
`public inline void `[`AcknowledgeFriendUpdate`](#classURH__RHFriendAndPlatformFriend_1ad1c88009e392036b8864a68673cd570f)`()` | Updates the Previous friendship status to the current friendship status for this friend.
`public inline const FDateTime & `[`GetLastModifiedOn`](#classURH__RHFriendAndPlatformFriend_1a58a687696ffbd4c36e0e1cca516afa87)`() const` | Gets the last time the players friend data was modified.
`public inline const FString & `[`GetNotes`](#classURH__RHFriendAndPlatformFriend_1a8b8d26c7b6e55b23969aaff582890668)`() const` | Gets any notes the player has set for this player.
`public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriendAtIndex`](#classURH__RHFriendAndPlatformFriend_1a5e3dc00a2cea69ce8b96ba1308727eb1)`(int32 Index) const` | Gets a platform friend at given index for iterating plaform Friends.
`public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriend`](#classURH__RHFriendAndPlatformFriend_1a9cdc1d50958adff822d9d2f01932061f)`(ERHAPI_Platform Platform) const` | Gets a platform friend object for the specified platform if it exists.
`public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriendBase`](#classURH__RHFriendAndPlatformFriend_1a0ba8a124c68354881afeb15a4344d71a)`(ERHAPI_Platform Platform) const` | Gets a platform friend object for the specified platform if it exists.
`public inline const TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > & `[`GetPlatformFriends`](#classURH__RHFriendAndPlatformFriend_1a7a4011046e26ffd080a5946c972a33e7)`() const` | Gets all of the players platform friend entries.
`public inline const `[`FRH_PlayerAndPlatformInfo`](PlayerInfo.md#structFRH__PlayerAndPlatformInfo)` & `[`GetPlayerAndPlatformInfo`](#classURH__RHFriendAndPlatformFriend_1a8e94f074e512e3c62569ba135c2a68db)`() const` | Gets the wrapper of the players RH and platform info.
`public bool `[`CanViewPlatformProfile`](#classURH__RHFriendAndPlatformFriend_1ac88f7e3d20355a574680d93412219864)`() const` | Determines if the local player can view this player's platform profile (i.e. Gamercard on Xbox)
`public bool `[`ViewPlatformProfile`](#classURH__RHFriendAndPlatformFriend_1ac806bbe4d0f6e71ca8c97d7fadc34caa)`() const` | Attempts to show this player's platform profile.
`public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__RHFriendAndPlatformFriend_1a18ff72f08c02d890a3c82c61689ec93d)`() const` | Attempts to get the player info.
`public FString `[`GetLastKnownDisplayName`](#classURH__RHFriendAndPlatformFriend_1acd73b58468f7e35971e820244372ae84)`(ERHAPI_Platform PreferredPlatformType) const` | Gets the last known cached display name for the player.
`public void `[`GetLastKnownDisplayNameAsync`](#classURH__RHFriendAndPlatformFriend_1a3b8bf590fdccb5b793ed98b52918656d)`(const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock & Delegate) const` | Gets the last known display name for the player, will request from API as needed.
`public void `[`GetRHPlayerUuidAsync`](#classURH__RHFriendAndPlatformFriend_1a26d3a5a15aaf4b8787910b1a83927a82)`(const FRH_GetRHPlayerUuidBlock & Delegate)` | Gets the RH Player UUID for the player, will request from API as needed. As a side effect, it will update the RH Player Uuid on PlayerAndPlatformInfo.
`protected `[`FRH_PlayerAndPlatformInfo`](PlayerInfo.md#structFRH__PlayerAndPlatformInfo)` `[`PlayerAndPlatformInfo`](#classURH__RHFriendAndPlatformFriend_1a85603f6ad7e4c8402012642ba70df5d3) | Player Info and Platform Info combined.
`protected `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`RHFriendshipStatus`](#classURH__RHFriendAndPlatformFriend_1a048470b3c114f6379667149ea0a1328b) | Core friendship status.
`protected `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`PreviousRHFriendshipStatus`](#classURH__RHFriendAndPlatformFriend_1aa86a3555aa8881bcf2a4d6af5a8dffc4) | cached previous core friendship status.
`protected FDateTime `[`LastModifiedOn`](#classURH__RHFriendAndPlatformFriend_1a5dc5734dfba3cba698486e514727c79a) | Last update of the current friend information.
`protected FString `[`Notes`](#classURH__RHFriendAndPlatformFriend_1a66cefbb47f0cad7d59bd18df980022c5) | Notes set for the friend.
`protected TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > `[`PlatformFriends`](#classURH__RHFriendAndPlatformFriend_1a2a7cea15c536d6f1dc0e372bd75a7dc3) | Array of platforms the player has linked to their account.
`protected FString `[`Etag`](#classURH__RHFriendAndPlatformFriend_1ab4bca6808ed022b3d72edf548745c04c) | ETag of last friend update response.
`protected inline virtual void `[`OnPresenceUpdated`](#classURH__RHFriendAndPlatformFriend_1a4621cd567a8229bce29ab035bb3fc469)`(`[`URH_PlayerInfoSubobject`](PlayerInfo.md#classURH__PlayerInfoSubobject)` * PlayerPresence)` | Passes presence updates of the player on through internal delgates.
`protected inline virtual void `[`ClearRHFriendStatus`](#classURH__RHFriendAndPlatformFriend_1a192552b9a61592ae648c4e50afafeca0)`()` | Clears the cached friendship status for the player.
`protected inline virtual void `[`ClearPlatformFriendStatus`](#classURH__RHFriendAndPlatformFriend_1a2868052b24a6cf21af2ba2ce0aab026b)`()` | Clears cached data for the platform friends for this player.

#### Members

#### `public FRH_OnPlayerInfoSubobjectUpdatedMulticastDelegate `[`OnPresenceUpdatedDelegate`](#classURH__RHFriendAndPlatformFriend_1a8a0e044ae90e40b27535bb747f7dbda0) <a id="classURH__RHFriendAndPlatformFriend_1a8a0e044ae90e40b27535bb747f7dbda0"></a>

Native delegate to listen for presence updates.

#### `public class `[`URH_FriendSubsystem`](Friends.md#classURH__FriendSubsystem)` * `[`GetFriendSubsystem`](#classURH__RHFriendAndPlatformFriend_1afca989ff581d5d013cfac12722f5f4ee)`() const` <a id="classURH__RHFriendAndPlatformFriend_1afca989ff581d5d013cfac12722f5f4ee"></a>

#### `public inline bool `[`AreFriends`](#classURH__RHFriendAndPlatformFriend_1a3614d4c1ddb543c6f262dd27b65ab67b)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a3614d4c1ddb543c6f262dd27b65ab67b"></a>

Gets if the player is a friend through Rally Here systems or their platform.

#### `public inline bool `[`AreRHFriends`](#classURH__RHFriendAndPlatformFriend_1a4fe2dc0a23755f8069aa7adac470b79b)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a4fe2dc0a23755f8069aa7adac470b79b"></a>

Gets if the player is a friend through Rally Here.

#### `public inline bool `[`ArePlatformFriends`](#classURH__RHFriendAndPlatformFriend_1aff5cffa84cf22c06bfdb6fdbf6c86d42)`() const` <a id="classURH__RHFriendAndPlatformFriend_1aff5cffa84cf22c06bfdb6fdbf6c86d42"></a>

Gets if the player is a friend through their platform.

#### `public inline bool `[`FriendRequestSent`](#classURH__RHFriendAndPlatformFriend_1afb2d64ae40c67ff9be8e05dc3efee08f)`() const` <a id="classURH__RHFriendAndPlatformFriend_1afb2d64ae40c67ff9be8e05dc3efee08f"></a>

Gets if you have sent a friend request to the player through Rally Here or their platform.

#### `public inline bool `[`RHFriendRequestSent`](#classURH__RHFriendAndPlatformFriend_1a01322359b249aa216ec7cdd237f94efd)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a01322359b249aa216ec7cdd237f94efd"></a>

Gets if you have sent a friend request to the player through Rally Here.

#### `public inline bool `[`PendingFriendRequest`](#classURH__RHFriendAndPlatformFriend_1ab84f7920479877917a2251fb16c38a19)`() const` <a id="classURH__RHFriendAndPlatformFriend_1ab84f7920479877917a2251fb16c38a19"></a>

Gets if the player has sent you a friend through Rally Here or their platform.

#### `public inline bool `[`RhPendingFriendRequest`](#classURH__RHFriendAndPlatformFriend_1a6a93c886ade405ce778fa54621dcd455)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a6a93c886ade405ce778fa54621dcd455"></a>

Gets if the player has sent you a friend through Rally Here.

#### `public inline bool `[`HaveRhRelationship`](#classURH__RHFriendAndPlatformFriend_1a3d80d9734091740fe541d6057c07955d)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a3d80d9734091740fe541d6057c07955d"></a>

Gets if the player has any sort of relationship with you through Rally Here.

#### `public inline bool `[`HaveAnyRelationship`](#classURH__RHFriendAndPlatformFriend_1a5f7fb5fb59474fa3ad7126a64d2b7adb)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a5f7fb5fb59474fa3ad7126a64d2b7adb"></a>

Gets if the player has any sort of relationship with you through Rally Here or their platform.

#### `public inline bool `[`HavePlatformRelationship`](#classURH__RHFriendAndPlatformFriend_1a00b3960652a313fd9c4bd8a99e53c36b)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a00b3960652a313fd9c4bd8a99e53c36b"></a>

Gets if the player has any sort of relationship with you through their platform.

#### `public inline bool `[`IsOnline`](#classURH__RHFriendAndPlatformFriend_1aa0abd090b067cdd78cc511467853e9c9)`() const` <a id="classURH__RHFriendAndPlatformFriend_1aa0abd090b067cdd78cc511467853e9c9"></a>

Gets if the player is online on their platform.

#### `public inline bool `[`IsPlayingThisGame`](#classURH__RHFriendAndPlatformFriend_1a75e1425a51bddff614302a10c83b9189)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a75e1425a51bddff614302a10c83b9189"></a>

Gets if the player is playing this game.

#### `public inline bool `[`IsDnD`](#classURH__RHFriendAndPlatformFriend_1a063eb82f35f76b18578a22451fee6cfd)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a063eb82f35f76b18578a22451fee6cfd"></a>

Gets if the player is set to Do Not Distrub on their platform.

#### `public inline bool `[`OtherDeclinedFriendship`](#classURH__RHFriendAndPlatformFriend_1aee6f1bc6d1278a9503910c4a1460f86e)`() const` <a id="classURH__RHFriendAndPlatformFriend_1aee6f1bc6d1278a9503910c4a1460f86e"></a>

Gets if the player has declined your Rally Here friend request.

#### `public inline bool `[`AwaitingFriendshipResponse`](#classURH__RHFriendAndPlatformFriend_1a32a0502bbb92dd01ae3ca862c3e81bd5)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a32a0502bbb92dd01ae3ca862c3e81bd5"></a>

Gets if the player has an outstanding Rally Here friend request by you.

#### `public inline bool `[`OtherIsAwaitingFriendshipResponse`](#classURH__RHFriendAndPlatformFriend_1a23f36830cbe8e74cf296cf14894113e2)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a23f36830cbe8e74cf296cf14894113e2"></a>

Gets if the player has sent you a Rally Here friend request.

#### `public inline const FGuid & `[`GetRHPlayerUuid`](#classURH__RHFriendAndPlatformFriend_1ab1154a1e521acfa23059fc0951e383f1)`() const` <a id="classURH__RHFriendAndPlatformFriend_1ab1154a1e521acfa23059fc0951e383f1"></a>

Gets the players unique player id.

#### `public inline `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`GetStatus`](#classURH__RHFriendAndPlatformFriend_1acda68106fa1cc559ea680e947c7736a9)`() const` <a id="classURH__RHFriendAndPlatformFriend_1acda68106fa1cc559ea680e947c7736a9"></a>

Gets the current Rally Here relationship status with the player.

#### `public inline `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`GetPreviousStatus`](#classURH__RHFriendAndPlatformFriend_1a962b43450e40b0482021894c55e09c3a)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a962b43450e40b0482021894c55e09c3a"></a>

Gets the previous Rally Here relationship status with the player prior to the most recent update.

#### `public inline void `[`AcknowledgeFriendUpdate`](#classURH__RHFriendAndPlatformFriend_1ad1c88009e392036b8864a68673cd570f)`()` <a id="classURH__RHFriendAndPlatformFriend_1ad1c88009e392036b8864a68673cd570f"></a>

Updates the Previous friendship status to the current friendship status for this friend.

#### `public inline const FDateTime & `[`GetLastModifiedOn`](#classURH__RHFriendAndPlatformFriend_1a58a687696ffbd4c36e0e1cca516afa87)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a58a687696ffbd4c36e0e1cca516afa87"></a>

Gets the last time the players friend data was modified.

#### `public inline const FString & `[`GetNotes`](#classURH__RHFriendAndPlatformFriend_1a8b8d26c7b6e55b23969aaff582890668)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a8b8d26c7b6e55b23969aaff582890668"></a>

Gets any notes the player has set for this player.

#### `public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriendAtIndex`](#classURH__RHFriendAndPlatformFriend_1a5e3dc00a2cea69ce8b96ba1308727eb1)`(int32 Index) const` <a id="classURH__RHFriendAndPlatformFriend_1a5e3dc00a2cea69ce8b96ba1308727eb1"></a>

Gets a platform friend at given index for iterating plaform Friends.

#### `public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriend`](#classURH__RHFriendAndPlatformFriend_1a9cdc1d50958adff822d9d2f01932061f)`(ERHAPI_Platform Platform) const` <a id="classURH__RHFriendAndPlatformFriend_1a9cdc1d50958adff822d9d2f01932061f"></a>

Gets a platform friend object for the specified platform if it exists.

#### `public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriendBase`](#classURH__RHFriendAndPlatformFriend_1a0ba8a124c68354881afeb15a4344d71a)`(ERHAPI_Platform Platform) const` <a id="classURH__RHFriendAndPlatformFriend_1a0ba8a124c68354881afeb15a4344d71a"></a>

Gets a platform friend object for the specified platform if it exists.

#### `public inline const TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > & `[`GetPlatformFriends`](#classURH__RHFriendAndPlatformFriend_1a7a4011046e26ffd080a5946c972a33e7)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a7a4011046e26ffd080a5946c972a33e7"></a>

Gets all of the players platform friend entries.

#### `public inline const `[`FRH_PlayerAndPlatformInfo`](PlayerInfo.md#structFRH__PlayerAndPlatformInfo)` & `[`GetPlayerAndPlatformInfo`](#classURH__RHFriendAndPlatformFriend_1a8e94f074e512e3c62569ba135c2a68db)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a8e94f074e512e3c62569ba135c2a68db"></a>

Gets the wrapper of the players RH and platform info.

#### `public bool `[`CanViewPlatformProfile`](#classURH__RHFriendAndPlatformFriend_1ac88f7e3d20355a574680d93412219864)`() const` <a id="classURH__RHFriendAndPlatformFriend_1ac88f7e3d20355a574680d93412219864"></a>

Determines if the local player can view this player's platform profile (i.e. Gamercard on Xbox)

#### `public bool `[`ViewPlatformProfile`](#classURH__RHFriendAndPlatformFriend_1ac806bbe4d0f6e71ca8c97d7fadc34caa)`() const` <a id="classURH__RHFriendAndPlatformFriend_1ac806bbe4d0f6e71ca8c97d7fadc34caa"></a>

Attempts to show this player's platform profile.

#### Returns
true if successfully requested the OSS to show the player's platform profile

#### `public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__RHFriendAndPlatformFriend_1a18ff72f08c02d890a3c82c61689ec93d)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a18ff72f08c02d890a3c82c61689ec93d"></a>

Attempts to get the player info.

#### `public FString `[`GetLastKnownDisplayName`](#classURH__RHFriendAndPlatformFriend_1acd73b58468f7e35971e820244372ae84)`(ERHAPI_Platform PreferredPlatformType) const` <a id="classURH__RHFriendAndPlatformFriend_1acd73b58468f7e35971e820244372ae84"></a>

Gets the last known cached display name for the player.

#### Parameters
* `PreferredPlatformType` The preferred platform to get the display name from. 

#### Returns
The players last seen display name, will try to find a valid display name even if on a different platform than the preferred.

#### `public void `[`GetLastKnownDisplayNameAsync`](#classURH__RHFriendAndPlatformFriend_1a3b8bf590fdccb5b793ed98b52918656d)`(const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock & Delegate) const` <a id="classURH__RHFriendAndPlatformFriend_1a3b8bf590fdccb5b793ed98b52918656d"></a>

Gets the last known display name for the player, will request from API as needed.

#### Parameters
* `PlayerInfoSubsystem` The subsystem to use for the lookup 

* `StaleThreshold` The time threshold to consider the cached display name stale. 

* `bForceRefresh` If true will force a request from the API. 

* `PreferredPlatformType` The preferred platform to get the display name from. 

* `Delegate` The delegate to call when the request is complete.

#### `public void `[`GetRHPlayerUuidAsync`](#classURH__RHFriendAndPlatformFriend_1a26d3a5a15aaf4b8787910b1a83927a82)`(const FRH_GetRHPlayerUuidBlock & Delegate)` <a id="classURH__RHFriendAndPlatformFriend_1a26d3a5a15aaf4b8787910b1a83927a82"></a>

Gets the RH Player UUID for the player, will request from API as needed. As a side effect, it will update the RH Player Uuid on PlayerAndPlatformInfo.

#### Parameters
* `Delegate` The delegate to call when the request is complete.

#### `protected `[`FRH_PlayerAndPlatformInfo`](PlayerInfo.md#structFRH__PlayerAndPlatformInfo)` `[`PlayerAndPlatformInfo`](#classURH__RHFriendAndPlatformFriend_1a85603f6ad7e4c8402012642ba70df5d3) <a id="classURH__RHFriendAndPlatformFriend_1a85603f6ad7e4c8402012642ba70df5d3"></a>

Player Info and Platform Info combined.

#### `protected `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`RHFriendshipStatus`](#classURH__RHFriendAndPlatformFriend_1a048470b3c114f6379667149ea0a1328b) <a id="classURH__RHFriendAndPlatformFriend_1a048470b3c114f6379667149ea0a1328b"></a>

Core friendship status.

#### `protected `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`PreviousRHFriendshipStatus`](#classURH__RHFriendAndPlatformFriend_1aa86a3555aa8881bcf2a4d6af5a8dffc4) <a id="classURH__RHFriendAndPlatformFriend_1aa86a3555aa8881bcf2a4d6af5a8dffc4"></a>

cached previous core friendship status.

#### `protected FDateTime `[`LastModifiedOn`](#classURH__RHFriendAndPlatformFriend_1a5dc5734dfba3cba698486e514727c79a) <a id="classURH__RHFriendAndPlatformFriend_1a5dc5734dfba3cba698486e514727c79a"></a>

Last update of the current friend information.

#### `protected FString `[`Notes`](#classURH__RHFriendAndPlatformFriend_1a66cefbb47f0cad7d59bd18df980022c5) <a id="classURH__RHFriendAndPlatformFriend_1a66cefbb47f0cad7d59bd18df980022c5"></a>

Notes set for the friend.

#### `protected TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > `[`PlatformFriends`](#classURH__RHFriendAndPlatformFriend_1a2a7cea15c536d6f1dc0e372bd75a7dc3) <a id="classURH__RHFriendAndPlatformFriend_1a2a7cea15c536d6f1dc0e372bd75a7dc3"></a>

Array of platforms the player has linked to their account.

#### `protected FString `[`Etag`](#classURH__RHFriendAndPlatformFriend_1ab4bca6808ed022b3d72edf548745c04c) <a id="classURH__RHFriendAndPlatformFriend_1ab4bca6808ed022b3d72edf548745c04c"></a>

ETag of last friend update response.

#### `protected inline virtual void `[`OnPresenceUpdated`](#classURH__RHFriendAndPlatformFriend_1a4621cd567a8229bce29ab035bb3fc469)`(`[`URH_PlayerInfoSubobject`](PlayerInfo.md#classURH__PlayerInfoSubobject)` * PlayerPresence)` <a id="classURH__RHFriendAndPlatformFriend_1a4621cd567a8229bce29ab035bb3fc469"></a>

Passes presence updates of the player on through internal delgates.

#### Parameters
* `PlayerPresence` The players precence information.

#### `protected inline virtual void `[`ClearRHFriendStatus`](#classURH__RHFriendAndPlatformFriend_1a192552b9a61592ae648c4e50afafeca0)`()` <a id="classURH__RHFriendAndPlatformFriend_1a192552b9a61592ae648c4e50afafeca0"></a>

Clears the cached friendship status for the player.

#### `protected inline virtual void `[`ClearPlatformFriendStatus`](#classURH__RHFriendAndPlatformFriend_1a2868052b24a6cf21af2ba2ce0aab026b)`()` <a id="classURH__RHFriendAndPlatformFriend_1a2868052b24a6cf21af2ba2ce0aab026b"></a>

Clears cached data for the platform friends for this player.

## class `URH_FriendSubsystem` <a id="classURH__FriendSubsystem"></a>

```
class URH_FriendSubsystem
  : public URH_LocalPlayerSubsystemPlugin
```

Friends Subsystem for handling a users relationships with other players.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_FriendListUpdatedDelegate `[`FriendListUpdatedDelegate`](#classURH__FriendSubsystem_1a20e7154a76895c2064838778968ab251) | Delegate that fires whenever the friends list is updated.
`public FRH_FriendUpdatedDelegate `[`FriendUpdatedDelegate`](#classURH__FriendSubsystem_1aa33bf82a4a48bdaf7319262dbcceb3a8) | Delegate that fires whenever a friend is updated.
`public FRH_FriendUpdateErrorDelegate `[`FriendUpdateErrorDelegate`](#classURH__FriendSubsystem_1ada2af14fd3ef58b25becd1540231c5c1) | Delegate that fires whenever a friend API call fails.
`public FRH_BlockedListUpdatedDelegate `[`BlockedListUpdatedDelegate`](#classURH__FriendSubsystem_1a02a3d66606f6ff33dcb23251ef3e6480) | Delegate that fires whenever blocked players list is updated.
`public FRH_BlockedPlayerUpdatedDelegate `[`BlockedPlayerUpdatedDelegate`](#classURH__FriendSubsystem_1a5390905f22179f57e83cfe3957134594) | Delegate that fires whenever a blocked player is updated.
`public FRH_BlockedPlayerUpdateErrorDelegate `[`BlockedPlayerUpdateErrorDelegate`](#classURH__FriendSubsystem_1a1847f636c942cbc0e6d9e3d6b90fe817) | Delegate that fires whenever blocked player API call fails.
`public virtual void `[`Initialize`](#classURH__FriendSubsystem_1aa7d2fe1ad8d807af77c3432cecd68882)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__FriendSubsystem_1a22ad8844b9c65a3ae173d4df9dc2a6a3)`()` | Safely tears down the subsystem.
`public `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetRH_PlayerInfoSubsystem`](#classURH__FriendSubsystem_1ad113da46527b010c8f09a5419c5fa425)`() const` | Helper function to get the Player Info Subsystem that owns this.
`public bool `[`FetchFriendsList`](#classURH__FriendSubsystem_1af9e36bd8e6a590aa0eb34e507aaf52cb)`(const FRH_GenericFriendBlock & Delegate)` | Calls the Friends API to get the players friends list.
`public bool `[`FetchFriend`](#classURH__FriendSubsystem_1a515eb3d9d965b33473efd7380a5df246)`(const FGuid & PlayerUUID,const FRH_GenericFriendWithUuidBlock & Delegate)` | Calls the Friends API to get data for a specific friend.
`public bool `[`AddFriend`](#classURH__FriendSubsystem_1ad700daa801bab689d87f4b630a5282c5)`(const FGuid & PlayerUuid,const FRH_AddFriendBlock & Delegate)` | Calls the Friends API to create a new friendship relationship with another player.
`public bool `[`RemoveFriend`](#classURH__FriendSubsystem_1af6e442d6353bde8467777b267422ea0d)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` | Calls the Friends API to remove a friend relationship with another player.
`public bool `[`AddNotes`](#classURH__FriendSubsystem_1a10beb339453283fe44aa2c3f71602d7a)`(const FGuid & PlayerUuid,const FString & Notes,const FRH_AddNotesBlock & Delegate)` | Calls the Friends API to set/modify personal notes for another player.
`public bool `[`DeleteNotes`](#classURH__FriendSubsystem_1a6fe36017bb483c85248c4311e9e01972)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` | Calls the Friends API to delete personal notes for another player.
`public bool `[`FetchBlockedList`](#classURH__FriendSubsystem_1ae5920534783b3289cd79af44eb93ac9a)`(const FRH_GenericFriendBlock & Delegate)` | Calls the Friends API to get the list of players you have blocked.
`public bool `[`FetchBlockedPlayer`](#classURH__FriendSubsystem_1a1d00d3d9d75ec1d1ee47b4985d09dbf1)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` | Calls the Friends API to get data for a specific blocked player.
`public bool `[`BlockPlayer`](#classURH__FriendSubsystem_1afaf34fd0bab40279aad46eed4ee17989)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` | Calls the Friends API to create a new block relationship with another player.
`public bool `[`UnblockPlayer`](#classURH__FriendSubsystem_1ae912cce935704be005779cd45d4bf84e)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` | Calls the Friends API to remove a block relationship with another player.
`public void `[`UpdateRecentPlayerForOSS`](#classURH__FriendSubsystem_1ae3fda9069196b472db23598bc8bfbcee)`(const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FGuid & PlayerUuid)` | Updates the platform OSS with a player you have recently played with.
`public void `[`OSSReadFriendsList`](#classURH__FriendSubsystem_1a1d67c41ac34ab52852236256994d545d)`(const FString & ListName)` | Triggers the OSS call to get platform friends.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetOrCreateFriend`](#classURH__FriendSubsystem_1afdd65b2cb3b5c2dcfb41af247426d39e)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * PlayerInfo)` | Gets if the specified players friend wrapper, or creates one if it doesn't exist yet.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByUuid`](#classURH__FriendSubsystem_1a4b30486cb9175913ba77702f9148b3b6)`(const FGuid & PlayerUuid) const` | Gets the cached friend wrapper for the specified player.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByPlayerInfo`](#classURH__FriendSubsystem_1a0e8bfdf4e3dbff614e3931ec8e7fec30)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * PlayerInfo) const` | Gets the cached friend wrapper for the specified player.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByPlatformId`](#classURH__FriendSubsystem_1af97f126a67a75dd74416eadf099f4968)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformPlayerId) const` | Gets the cached friend wrapper for the specified player.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByUuidOrPlatformId`](#classURH__FriendSubsystem_1af887af8839847c43703f0883912f9030)`(const FGuid & PlayerUuid,const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformPlayerId) const` | Gets the cached friend wrapper for the specified player.
`public inline bool `[`IsFriendBlocked`](#classURH__FriendSubsystem_1aef429e16fb76c76f805ed37a2c8bb35d)`(const `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * Player) const` | Gets if the specified player is blocked via platform or Rally Here.
`public inline bool `[`IsFriendPlatformBlocked`](#classURH__FriendSubsystem_1a0013b0ca7d5c98f0b20fed4d8d2f7649)`(const `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * Player) const` | Gets if the specified player is blocked via platform.
`public inline bool `[`IsPlayerBlocked`](#classURH__FriendSubsystem_1a796323262a6d65dbd3871600ec67333a)`(const FGuid & PlayerUuid) const` | Gets if the specified player is blocked via platform or Rally Here.
`public inline bool `[`IsPlayerPlatformBlocked`](#classURH__FriendSubsystem_1a5daea0768eab9487eb4d07b6eec7bcc0)`(const FGuid & PlayerUuid) const` | Gets if the specified player is blocked via platform.
`public inline bool `[`IsPlayerRhBlocked`](#classURH__FriendSubsystem_1a7729188985902b5d94f5f0e6f4c5a99a)`(const FGuid & PlayerUuid) const` | Gets if the specified player is blocked via Rally Here.
`public void `[`StartFriendsRefreshTimer`](#classURH__FriendSubsystem_1a712bf02500dd9805476827baac779bf9)`()` | Starts the polling for Rally Here friends.
`public void `[`StopFriendsRefreshTimer`](#classURH__FriendSubsystem_1a498526405f2fafda302f2bebf8d19211)`()` | Stops the polling for Rally Here friends.
`public void `[`StartBlockedRefreshTimer`](#classURH__FriendSubsystem_1acaa7395b257ae7cd83b95613d7782740)`()` | Starts the polling for blocked players.
`public void `[`StopBlockedRefreshTimer`](#classURH__FriendSubsystem_1a99e71815f47abc452ab5e0961e660d8d)`()` | Stops the polling for blocked players.
`public void `[`ClearBlockedCache`](#classURH__FriendSubsystem_1a725db30767e3f7c8ff1a8c7bb8622d30)`()` | Clears the cache of blocked players.
`public void `[`ClearRHFriendCache`](#classURH__FriendSubsystem_1aac6111bfbf9164250b79c60ee7377353)`()` | Clears the cache of Rally Here friends.
`public inline const TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > & `[`GetFriends`](#classURH__FriendSubsystem_1a159b2f037e79aa087404d2834a4e89a5)`() const` | Gets an array of your friends.
`public inline const TArray< FGuid > & `[`GetBlocked`](#classURH__FriendSubsystem_1a794939965ac249a8a073584b4bb61e29)`() const` | Gets an array of blocked player ids.
`public inline bool `[`HasFriendsCached`](#classURH__FriendSubsystem_1a73865b1583b1952540939321fd19fbda)`() const` | Gets if the subsystem has cached friend data.
`protected TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > `[`Friends`](#classURH__FriendSubsystem_1a5ba094d058031c840feeb5ed2271bac7) | Cached array of all friends.
`protected TArray< FGuid > `[`BlockedPlayersUUIDs`](#classURH__FriendSubsystem_1a8cea9f39f35a8c7c8249105f8cdb8c3c) | Array of blocked player ids.
`protected TArray< FString > `[`PlatformBlockedPlayers`](#classURH__FriendSubsystem_1abb8c329e6f9d3aa78a094a037bf4a0ec) | Array of blocked platform player ids.
`protected FString `[`FriendsETag`](#classURH__FriendSubsystem_1ad31945d455f553d20b46e14884b0058c) | ETag of last Get Friends List call response.
`protected FString `[`BlockedPlayersETag`](#classURH__FriendSubsystem_1a4c140df2e72bb201c437ec7cadd5104d) | ETag of last Get Blocked Players call response.
`protected bool `[`FriendsCached`](#classURH__FriendSubsystem_1a34673d7332ff081ffbc0e67d11fad742) | Tracks if friends are currently cached.
`protected FRH_AutoPollerPtr `[`FriendsListPoller`](#classURH__FriendSubsystem_1ae4e279605cefbf9699c08c1f9a56a190) | Poller for getting friends list.
`protected FRH_AutoPollerPtr `[`BlockedListPoller`](#classURH__FriendSubsystem_1a702f1614a6893998c654fd7ee5f340b0) | Poller for getting blocked players list.
`protected FDelegateHandle `[`OnOSSPresenceReceivedHandle`](#classURH__FriendSubsystem_1af4dee5d7db87903fc77a81214efdda36) | Delegate to be fired when online subsystem presence is received.
`protected FDelegateHandle `[`OnOSSBlockListReceivedHandle`](#classURH__FriendSubsystem_1aa34a363f7ba27902f860e261910f01aa) | Delegate to be fired when online subsystem blocked list is received.
`protected virtual void `[`OnUserChanged`](#classURH__FriendSubsystem_1ace5e8036219386fc48ec8ec89f391e36)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` | Callback that occurs whenever the local player this subsystem is associated with changes.
`protected virtual void `[`HandleNotification`](#classURH__FriendSubsystem_1a7e151250348a53e5ea59bd3b1e46621c)`(const struct `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` | Handle a notification from the notification API.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__FriendSubsystem_1a329dc919c010125a81f508eaf83f3d74)`()` | Initializes the subsystem with defaults for its cached data.
`protected virtual bool `[`SetDefaultParamsForGetFriendRequest`](#classURH__FriendSubsystem_1ac4a8491381ccb8bcc26a031048d628b9)`(GetFriendRelationshipType::Request & Request) const` | Fills our a Get Friend request.
`protected virtual void `[`PostReloadConfig`](#classURH__FriendSubsystem_1ad94ca4a65eeae28cd4fde373c4035d8d)`(class FProperty * PropertyThatWasLoaded)` | Called from ReloadConfig after the object has reloaded its configuration data.
`protected inline virtual void `[`OnPresenceUpdated`](#classURH__FriendSubsystem_1af43a2ad8bee539b08cb56d1d5800755d)`(`[`URH_PlayerInfoSubobject`](PlayerInfo.md#classURH__PlayerInfoSubobject)` * PlayerPresence)` | Helper function to push out presence updates on delegates on this system.
`protected virtual void `[`OnFetchFriendsListResponse`](#classURH__FriendSubsystem_1a1f31555fd208d81eaddc8f9fc1aadb17)`(const GetFriendsListType::Response & Resp,const FRH_GenericFriendBlock Delegate)` | Handles the response to a Fetch Friend List call.
`protected virtual void `[`OnFetchFriendResponse`](#classURH__FriendSubsystem_1a095efd57afb8653f4deccfd1ca6da1c5)`(const GetFriendRelationshipType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate)` | Handles the response to a Fetch Friend call.
`protected virtual void `[`OnAddFriendResponse`](#classURH__FriendSubsystem_1a193027a404185d6cb776bca21dcdd9b9)`(const AddFriendType::Response & Resp,const FRH_AddFriendBlock Delegate,const AddFriendType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Add Friend call.
`protected virtual void `[`OnRemoveFriendResponse`](#classURH__FriendSubsystem_1a59902f0693136bb2c965aaafd3f05c6d)`(const DeleteFriendType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const DeleteFriendType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Remove Friend call.
`protected virtual void `[`OnAddNotesResponse`](#classURH__FriendSubsystem_1a027d507e6a10d61a0cd3dd8afdbfd4b7)`(const AddNotesType::Response & Resp,const FRH_AddNotesBlock Delegate,const AddNotesType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Add Friend Notes call.
`protected virtual void `[`OnDeleteNotesResponse`](#classURH__FriendSubsystem_1aadb0f0d8b011cf2ac33f422043cde58e)`(const DeleteNotesType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const DeleteNotesType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Delete Friend Notes call.
`protected virtual void `[`OnFetchBlockedListResponse`](#classURH__FriendSubsystem_1a767b8f66ab46b1d2d9f1eaf81aa67755)`(const GetBlockedListType::Response & Resp,const FRH_GenericFriendBlock Delegate)` | Handles the response to a Get Blocked List call.
`protected virtual void `[`OnFetchBlockedPlayerResponse`](#classURH__FriendSubsystem_1aa59af9e5e4e2f41bf6f620e0fd54c915)`(const GetBlockedType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` | Handles the response to a Get Blocked Player call.
`protected virtual void `[`OnBlockPlayerResponse`](#classURH__FriendSubsystem_1ad0274f1f8b5311b8f6bdbdf8fba419c4)`(const BlockType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` | Handles the response to a Block Player call.
`protected virtual void `[`OnUnblockPlayerResponse`](#classURH__FriendSubsystem_1abda83155f03fdc2ebd3cdcf48af081b2)`(const UnblockType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` | Handles the response to a Unblock Player call.
`protected virtual void `[`OnFetchFriendForAdd`](#classURH__FriendSubsystem_1a8f23c7d98799cf5719444b9fca5f5257)`(const GetFriendRelationshipType::Response & Resp,const FRH_AddFriendBlock Delegate,AddFriendType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Fetch Friend For Add call.
`protected virtual void `[`OnFetchFriendForAddNote`](#classURH__FriendSubsystem_1ada9967c9cafff1902cd8495a9bba096d)`(const GetFriendRelationshipType::Response & Resp,const FRH_AddNotesBlock Delegate,AddNotesType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Fetch Friend For Add Note call.
`protected virtual void `[`OnFetchFriendForDeleteNote`](#classURH__FriendSubsystem_1ac5785416b739e7c4ac9f35d2de199b05)`(const GetFriendRelationshipType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,DeleteNotesType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Fetch Friend For Delete Note call.
`protected virtual void `[`OnFetchFriendForRemove`](#classURH__FriendSubsystem_1a2dff0a78994ba66003dd4fd8a4f3db78)`(const GetFriendRelationshipType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,DeleteFriendType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Fetch Friend For Remove call.
`protected void `[`UpdatePlatformFriends`](#classURH__FriendSubsystem_1a69aae2ad8b7200bf3dc0d51fbb59b3e6)`(const TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > & NewFriends)` | Updates the cached Platforms friends with the new set of friends data.
`protected void `[`RemoveAllFriendsWithNoRelationships`](#classURH__FriendSubsystem_1a8e2baea2c4b27a854894385976495cb2)`(TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > & OutArray)` | Removes all friends from the cached data that have no relationship to the player the subsystem is for.
`protected void `[`PollFriendsList`](#classURH__FriendSubsystem_1ac09b6bec4ef50e2e2c7bc9daee98cc9b)`(const FRH_PollCompleteFunc & Delegate)` | Executes a poll of the players friends list.
`protected void `[`PollBlockedPlayers`](#classURH__FriendSubsystem_1a3eb26a11fae901e018b1a1863c576f3b)`(const FRH_PollCompleteFunc & Delegate)` | Executes a poll of the players blocked list.
`protected FName `[`ExtractErrorCodeFromResponse`](#classURH__FriendSubsystem_1a132d8e0a874d1f686f085ab4b3a6e68f)`(const FHttpResponsePtr & Response) const` | Gets the error code response name from a http request.
`protected virtual void `[`OnReadOSSFriendsComplete`](#classURH__FriendSubsystem_1a28e2e549632ea1cde658e352a74e5e71)`(int32 LocalUserNum,bool bWasSuccessful,const FString & ListName,const FString & ErrorStr)` | Handles the response from the online subsystem call to get friends.
`protected void `[`OnOSSQueryBlockListComplete`](#classURH__FriendSubsystem_1ab8eb49f42a52b3cb1e6a1ae6c1663d3d)`(const FUniqueNetId & UserId,bool bWasSuccessful,const FString & ErrorStr)` | Handles the response from the online subsystem call to get blocked list.
`protected virtual void `[`OnOSSBlockListChanged`](#classURH__FriendSubsystem_1ac118c76788b362e16e3c254372921074)`(int32 LocalUserNum,const FString & ListName)` | Handles the response from the online subsystem call to get list of blocked players.
`protected virtual void `[`UpdateWithOSSFriends`](#classURH__FriendSubsystem_1ac1ec831e3a17301014fd02b08cd786e6)`(const FString & ListName)` | Updates the system with the friends from the online subsystem.
`protected virtual void `[`OnOSSPresenceReceived`](#classURH__FriendSubsystem_1a96025e788f843e3af281e4a35bc67f2d)`(const FUniqueNetId & UserId,const TSharedRef< FOnlineUserPresence > & NewPresence)` | Handles the response from the online subsystem call to get presence.
`typedef `[`GetBlockedListType`](#classURH__FriendSubsystem_1a86947a66ea21048117d78b043f66c2a4) | Type Define for Get Blocked List calls.
`typedef `[`GetBlockedType`](#classURH__FriendSubsystem_1abf3d2913b2440d3ccf90f73e5466b667) | Type Define for Get Blocked calls.
`typedef `[`BlockType`](#classURH__FriendSubsystem_1afde127473ff38097c2158547c884c12c) | Type Define for Block Player calls.
`typedef `[`UnblockType`](#classURH__FriendSubsystem_1a873630d80c6b2ec588a0f5057beb4029) | Type Define for Unblock Player calls.
`typedef `[`GetFriendsListType`](#classURH__FriendSubsystem_1a5ea265c6a3d4410edef249077f7a29fc) | Type Define for Get Friends List calls.
`typedef `[`GetFriendRelationshipType`](#classURH__FriendSubsystem_1abbd85d9a95318bfa9be709e5e98ab6ac) | Type Define for Get Friend Relationship calls.
`typedef `[`AddFriendType`](#classURH__FriendSubsystem_1a5b292ddb94cace20f504e49490cdd640) | Type Define for Add Friend calls.
`typedef `[`DeleteFriendType`](#classURH__FriendSubsystem_1a03a40c4622679a1506a77ff5f33d16e1) | Type Define for Remove Friend calls.
`typedef `[`AddNotesType`](#classURH__FriendSubsystem_1aab7335b06d00faaa339a13b0d555047e) | Type Define for Add Friend Notes calls.
`typedef `[`DeleteNotesType`](#classURH__FriendSubsystem_1a6552555d4071e1f7272104a44aa0ac60) | Type Define for Delete Friend Notes calls.

#### Members

#### `public FRH_FriendListUpdatedDelegate `[`FriendListUpdatedDelegate`](#classURH__FriendSubsystem_1a20e7154a76895c2064838778968ab251) <a id="classURH__FriendSubsystem_1a20e7154a76895c2064838778968ab251"></a>

Delegate that fires whenever the friends list is updated.

#### `public FRH_FriendUpdatedDelegate `[`FriendUpdatedDelegate`](#classURH__FriendSubsystem_1aa33bf82a4a48bdaf7319262dbcceb3a8) <a id="classURH__FriendSubsystem_1aa33bf82a4a48bdaf7319262dbcceb3a8"></a>

Delegate that fires whenever a friend is updated.

#### `public FRH_FriendUpdateErrorDelegate `[`FriendUpdateErrorDelegate`](#classURH__FriendSubsystem_1ada2af14fd3ef58b25becd1540231c5c1) <a id="classURH__FriendSubsystem_1ada2af14fd3ef58b25becd1540231c5c1"></a>

Delegate that fires whenever a friend API call fails.

#### `public FRH_BlockedListUpdatedDelegate `[`BlockedListUpdatedDelegate`](#classURH__FriendSubsystem_1a02a3d66606f6ff33dcb23251ef3e6480) <a id="classURH__FriendSubsystem_1a02a3d66606f6ff33dcb23251ef3e6480"></a>

Delegate that fires whenever blocked players list is updated.

#### `public FRH_BlockedPlayerUpdatedDelegate `[`BlockedPlayerUpdatedDelegate`](#classURH__FriendSubsystem_1a5390905f22179f57e83cfe3957134594) <a id="classURH__FriendSubsystem_1a5390905f22179f57e83cfe3957134594"></a>

Delegate that fires whenever a blocked player is updated.

#### `public FRH_BlockedPlayerUpdateErrorDelegate `[`BlockedPlayerUpdateErrorDelegate`](#classURH__FriendSubsystem_1a1847f636c942cbc0e6d9e3d6b90fe817) <a id="classURH__FriendSubsystem_1a1847f636c942cbc0e6d9e3d6b90fe817"></a>

Delegate that fires whenever blocked player API call fails.

#### `public virtual void `[`Initialize`](#classURH__FriendSubsystem_1aa7d2fe1ad8d807af77c3432cecd68882)`()` <a id="classURH__FriendSubsystem_1aa7d2fe1ad8d807af77c3432cecd68882"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__FriendSubsystem_1a22ad8844b9c65a3ae173d4df9dc2a6a3)`()` <a id="classURH__FriendSubsystem_1a22ad8844b9c65a3ae173d4df9dc2a6a3"></a>

Safely tears down the subsystem.

#### `public `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetRH_PlayerInfoSubsystem`](#classURH__FriendSubsystem_1ad113da46527b010c8f09a5419c5fa425)`() const` <a id="classURH__FriendSubsystem_1ad113da46527b010c8f09a5419c5fa425"></a>

Helper function to get the Player Info Subsystem that owns this.

#### `public bool `[`FetchFriendsList`](#classURH__FriendSubsystem_1af9e36bd8e6a590aa0eb34e507aaf52cb)`(const FRH_GenericFriendBlock & Delegate)` <a id="classURH__FriendSubsystem_1af9e36bd8e6a590aa0eb34e507aaf52cb"></a>

Calls the Friends API to get the players friends list.

#### Parameters
* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`FetchFriend`](#classURH__FriendSubsystem_1a515eb3d9d965b33473efd7380a5df246)`(const FGuid & PlayerUUID,const FRH_GenericFriendWithUuidBlock & Delegate)` <a id="classURH__FriendSubsystem_1a515eb3d9d965b33473efd7380a5df246"></a>

Calls the Friends API to get data for a specific friend.

#### Parameters
* `PlayerUUID` The unique player id of the friend to get. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`AddFriend`](#classURH__FriendSubsystem_1ad700daa801bab689d87f4b630a5282c5)`(const FGuid & PlayerUuid,const FRH_AddFriendBlock & Delegate)` <a id="classURH__FriendSubsystem_1ad700daa801bab689d87f4b630a5282c5"></a>

Calls the Friends API to create a new friendship relationship with another player.

#### Parameters
* `PlayerUUID` The unique player id of the player to add. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`RemoveFriend`](#classURH__FriendSubsystem_1af6e442d6353bde8467777b267422ea0d)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` <a id="classURH__FriendSubsystem_1af6e442d6353bde8467777b267422ea0d"></a>

Calls the Friends API to remove a friend relationship with another player.

#### Parameters
* `PlayerUUID` The unique player id of the friend to remove. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`AddNotes`](#classURH__FriendSubsystem_1a10beb339453283fe44aa2c3f71602d7a)`(const FGuid & PlayerUuid,const FString & Notes,const FRH_AddNotesBlock & Delegate)` <a id="classURH__FriendSubsystem_1a10beb339453283fe44aa2c3f71602d7a"></a>

Calls the Friends API to set/modify personal notes for another player.

#### Parameters
* `PlayerUUID` The unique player id of the friend to remove. 

* `Notes` The notes to set for the player. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`DeleteNotes`](#classURH__FriendSubsystem_1a6fe36017bb483c85248c4311e9e01972)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` <a id="classURH__FriendSubsystem_1a6fe36017bb483c85248c4311e9e01972"></a>

Calls the Friends API to delete personal notes for another player.

#### Parameters
* `PlayerUUID` The unique player id of the friend to whose notes will be modified. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`FetchBlockedList`](#classURH__FriendSubsystem_1ae5920534783b3289cd79af44eb93ac9a)`(const FRH_GenericFriendBlock & Delegate)` <a id="classURH__FriendSubsystem_1ae5920534783b3289cd79af44eb93ac9a"></a>

Calls the Friends API to get the list of players you have blocked.

#### Parameters
* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`FetchBlockedPlayer`](#classURH__FriendSubsystem_1a1d00d3d9d75ec1d1ee47b4985d09dbf1)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` <a id="classURH__FriendSubsystem_1a1d00d3d9d75ec1d1ee47b4985d09dbf1"></a>

Calls the Friends API to get data for a specific blocked player.

#### Parameters
* `PlayerUUID` The unique player id of the blocked player to get. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`BlockPlayer`](#classURH__FriendSubsystem_1afaf34fd0bab40279aad46eed4ee17989)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` <a id="classURH__FriendSubsystem_1afaf34fd0bab40279aad46eed4ee17989"></a>

Calls the Friends API to create a new block relationship with another player.

#### Parameters
* `PlayerUUID` The unique player id of the player to block. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public bool `[`UnblockPlayer`](#classURH__FriendSubsystem_1ae912cce935704be005779cd45d4bf84e)`(const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidBlock & Delegate)` <a id="classURH__FriendSubsystem_1ae912cce935704be005779cd45d4bf84e"></a>

Calls the Friends API to remove a block relationship with another player.

#### Parameters
* `PlayerUUID` The unique player id of the blocked player to unblock. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

#### `public void `[`UpdateRecentPlayerForOSS`](#classURH__FriendSubsystem_1ae3fda9069196b472db23598bc8bfbcee)`(const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FGuid & PlayerUuid)` <a id="classURH__FriendSubsystem_1ae3fda9069196b472db23598bc8bfbcee"></a>

Updates the platform OSS with a player you have recently played with.

#### Parameters
* `LocalPlayerSubsystem` The local player subsystem to obtain the unique net id from. 

* `PlayerUuid` The recently player with players Unique Player Id.

#### `public void `[`OSSReadFriendsList`](#classURH__FriendSubsystem_1a1d67c41ac34ab52852236256994d545d)`(const FString & ListName)` <a id="classURH__FriendSubsystem_1a1d67c41ac34ab52852236256994d545d"></a>

Triggers the OSS call to get platform friends.

#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetOrCreateFriend`](#classURH__FriendSubsystem_1afdd65b2cb3b5c2dcfb41af247426d39e)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * PlayerInfo)` <a id="classURH__FriendSubsystem_1afdd65b2cb3b5c2dcfb41af247426d39e"></a>

Gets if the specified players friend wrapper, or creates one if it doesn't exist yet.

#### Parameters
* `PlayerInfo` The player info to get the friend wrapper for. 

#### Returns
The friend wrapper for the specified player.

#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByUuid`](#classURH__FriendSubsystem_1a4b30486cb9175913ba77702f9148b3b6)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a4b30486cb9175913ba77702f9148b3b6"></a>

Gets the cached friend wrapper for the specified player.

#### Parameters
* `PlayerUuid` The unique player Id for the requested friend wrapper.

#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByPlayerInfo`](#classURH__FriendSubsystem_1a0e8bfdf4e3dbff614e3931ec8e7fec30)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * PlayerInfo) const` <a id="classURH__FriendSubsystem_1a0e8bfdf4e3dbff614e3931ec8e7fec30"></a>

Gets the cached friend wrapper for the specified player.

#### Parameters
* `PlayerInfo` The player info to get the friend wrapper for.

#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByPlatformId`](#classURH__FriendSubsystem_1af97f126a67a75dd74416eadf099f4968)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformPlayerId) const` <a id="classURH__FriendSubsystem_1af97f126a67a75dd74416eadf099f4968"></a>

Gets the cached friend wrapper for the specified player.

#### Parameters
* `PlatformPlayerId` The player platform id to get the friend wrapper for.

#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByUuidOrPlatformId`](#classURH__FriendSubsystem_1af887af8839847c43703f0883912f9030)`(const FGuid & PlayerUuid,const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformPlayerId) const` <a id="classURH__FriendSubsystem_1af887af8839847c43703f0883912f9030"></a>

Gets the cached friend wrapper for the specified player.

#### Parameters
* `PlayerUuid` The unique player Id for the requested friend wrapper. 

* `PlatformPlayerId` The player platform id to get the friend wrapper for.

#### `public inline bool `[`IsFriendBlocked`](#classURH__FriendSubsystem_1aef429e16fb76c76f805ed37a2c8bb35d)`(const `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * Player) const` <a id="classURH__FriendSubsystem_1aef429e16fb76c76f805ed37a2c8bb35d"></a>

Gets if the specified player is blocked via platform or Rally Here.

#### Parameters
* `Player` Pointer to the friend representation of the player

#### `public inline bool `[`IsFriendPlatformBlocked`](#classURH__FriendSubsystem_1a0013b0ca7d5c98f0b20fed4d8d2f7649)`(const `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * Player) const` <a id="classURH__FriendSubsystem_1a0013b0ca7d5c98f0b20fed4d8d2f7649"></a>

Gets if the specified player is blocked via platform.

#### Parameters
* `Player` Pointer to the friend representation of the player

#### `public inline bool `[`IsPlayerBlocked`](#classURH__FriendSubsystem_1a796323262a6d65dbd3871600ec67333a)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a796323262a6d65dbd3871600ec67333a"></a>

Gets if the specified player is blocked via platform or Rally Here.

#### Parameters
* `PlayerUuid` The unique player id of the player to check. 

It's more accurate to call the [URH_RHFriendAndPlatformFriend](Friends.md#classURH__RHFriendAndPlatformFriend) version of this function, as we may not have a Platform Friend's RallyHere UUID

#### `public inline bool `[`IsPlayerPlatformBlocked`](#classURH__FriendSubsystem_1a5daea0768eab9487eb4d07b6eec7bcc0)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a5daea0768eab9487eb4d07b6eec7bcc0"></a>

Gets if the specified player is blocked via platform.

#### Parameters
* `PlayerUuid` The unique player id of the player to check. 

It's more accurate to call the [URH_RHFriendAndPlatformFriend](Friends.md#classURH__RHFriendAndPlatformFriend) version of this function, as we may not have a Platform Friend's RallyHere UUID

#### `public inline bool `[`IsPlayerRhBlocked`](#classURH__FriendSubsystem_1a7729188985902b5d94f5f0e6f4c5a99a)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a7729188985902b5d94f5f0e6f4c5a99a"></a>

Gets if the specified player is blocked via Rally Here.

#### Parameters
* `PlayerUuid` The unique player id of the player to check.

#### `public void `[`StartFriendsRefreshTimer`](#classURH__FriendSubsystem_1a712bf02500dd9805476827baac779bf9)`()` <a id="classURH__FriendSubsystem_1a712bf02500dd9805476827baac779bf9"></a>

Starts the polling for Rally Here friends.

#### `public void `[`StopFriendsRefreshTimer`](#classURH__FriendSubsystem_1a498526405f2fafda302f2bebf8d19211)`()` <a id="classURH__FriendSubsystem_1a498526405f2fafda302f2bebf8d19211"></a>

Stops the polling for Rally Here friends.

#### `public void `[`StartBlockedRefreshTimer`](#classURH__FriendSubsystem_1acaa7395b257ae7cd83b95613d7782740)`()` <a id="classURH__FriendSubsystem_1acaa7395b257ae7cd83b95613d7782740"></a>

Starts the polling for blocked players.

#### `public void `[`StopBlockedRefreshTimer`](#classURH__FriendSubsystem_1a99e71815f47abc452ab5e0961e660d8d)`()` <a id="classURH__FriendSubsystem_1a99e71815f47abc452ab5e0961e660d8d"></a>

Stops the polling for blocked players.

#### `public void `[`ClearBlockedCache`](#classURH__FriendSubsystem_1a725db30767e3f7c8ff1a8c7bb8622d30)`()` <a id="classURH__FriendSubsystem_1a725db30767e3f7c8ff1a8c7bb8622d30"></a>

Clears the cache of blocked players.

#### `public void `[`ClearRHFriendCache`](#classURH__FriendSubsystem_1aac6111bfbf9164250b79c60ee7377353)`()` <a id="classURH__FriendSubsystem_1aac6111bfbf9164250b79c60ee7377353"></a>

Clears the cache of Rally Here friends.

#### `public inline const TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > & `[`GetFriends`](#classURH__FriendSubsystem_1a159b2f037e79aa087404d2834a4e89a5)`() const` <a id="classURH__FriendSubsystem_1a159b2f037e79aa087404d2834a4e89a5"></a>

Gets an array of your friends.

#### `public inline const TArray< FGuid > & `[`GetBlocked`](#classURH__FriendSubsystem_1a794939965ac249a8a073584b4bb61e29)`() const` <a id="classURH__FriendSubsystem_1a794939965ac249a8a073584b4bb61e29"></a>

Gets an array of blocked player ids.

#### `public inline bool `[`HasFriendsCached`](#classURH__FriendSubsystem_1a73865b1583b1952540939321fd19fbda)`() const` <a id="classURH__FriendSubsystem_1a73865b1583b1952540939321fd19fbda"></a>

Gets if the subsystem has cached friend data.

#### `protected TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > `[`Friends`](#classURH__FriendSubsystem_1a5ba094d058031c840feeb5ed2271bac7) <a id="classURH__FriendSubsystem_1a5ba094d058031c840feeb5ed2271bac7"></a>

Cached array of all friends.

#### `protected TArray< FGuid > `[`BlockedPlayersUUIDs`](#classURH__FriendSubsystem_1a8cea9f39f35a8c7c8249105f8cdb8c3c) <a id="classURH__FriendSubsystem_1a8cea9f39f35a8c7c8249105f8cdb8c3c"></a>

Array of blocked player ids.

#### `protected TArray< FString > `[`PlatformBlockedPlayers`](#classURH__FriendSubsystem_1abb8c329e6f9d3aa78a094a037bf4a0ec) <a id="classURH__FriendSubsystem_1abb8c329e6f9d3aa78a094a037bf4a0ec"></a>

Array of blocked platform player ids.

#### `protected FString `[`FriendsETag`](#classURH__FriendSubsystem_1ad31945d455f553d20b46e14884b0058c) <a id="classURH__FriendSubsystem_1ad31945d455f553d20b46e14884b0058c"></a>

ETag of last Get Friends List call response.

#### `protected FString `[`BlockedPlayersETag`](#classURH__FriendSubsystem_1a4c140df2e72bb201c437ec7cadd5104d) <a id="classURH__FriendSubsystem_1a4c140df2e72bb201c437ec7cadd5104d"></a>

ETag of last Get Blocked Players call response.

#### `protected bool `[`FriendsCached`](#classURH__FriendSubsystem_1a34673d7332ff081ffbc0e67d11fad742) <a id="classURH__FriendSubsystem_1a34673d7332ff081ffbc0e67d11fad742"></a>

Tracks if friends are currently cached.

#### `protected FRH_AutoPollerPtr `[`FriendsListPoller`](#classURH__FriendSubsystem_1ae4e279605cefbf9699c08c1f9a56a190) <a id="classURH__FriendSubsystem_1ae4e279605cefbf9699c08c1f9a56a190"></a>

Poller for getting friends list.

#### `protected FRH_AutoPollerPtr `[`BlockedListPoller`](#classURH__FriendSubsystem_1a702f1614a6893998c654fd7ee5f340b0) <a id="classURH__FriendSubsystem_1a702f1614a6893998c654fd7ee5f340b0"></a>

Poller for getting blocked players list.

#### `protected FDelegateHandle `[`OnOSSPresenceReceivedHandle`](#classURH__FriendSubsystem_1af4dee5d7db87903fc77a81214efdda36) <a id="classURH__FriendSubsystem_1af4dee5d7db87903fc77a81214efdda36"></a>

Delegate to be fired when online subsystem presence is received.

#### `protected FDelegateHandle `[`OnOSSBlockListReceivedHandle`](#classURH__FriendSubsystem_1aa34a363f7ba27902f860e261910f01aa) <a id="classURH__FriendSubsystem_1aa34a363f7ba27902f860e261910f01aa"></a>

Delegate to be fired when online subsystem blocked list is received.

#### `protected virtual void `[`OnUserChanged`](#classURH__FriendSubsystem_1ace5e8036219386fc48ec8ec89f391e36)`(const FGuid & OldPlayerUuid,class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * OldLocalPlayerInfo)` <a id="classURH__FriendSubsystem_1ace5e8036219386fc48ec8ec89f391e36"></a>

Callback that occurs whenever the local player this subsystem is associated with changes.

#### `protected virtual void `[`HandleNotification`](#classURH__FriendSubsystem_1a7e151250348a53e5ea59bd3b1e46621c)`(const struct `[`FRHAPI_Notification`](models/RHAPI_Notification.md#structFRHAPI__Notification)` & Notification,const FString & APIName,const TArray< FString > & APIParams)` <a id="classURH__FriendSubsystem_1a7e151250348a53e5ea59bd3b1e46621c"></a>

Handle a notification from the notification API.

#### Parameters
* `Notification` The notification to handle. 

* `APIName` The name of the API that sent the notification. 

* `APIParams` The parameters for the API that sent the notification.

#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__FriendSubsystem_1a329dc919c010125a81f508eaf83f3d74)`()` <a id="classURH__FriendSubsystem_1a329dc919c010125a81f508eaf83f3d74"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected virtual bool `[`SetDefaultParamsForGetFriendRequest`](#classURH__FriendSubsystem_1ac4a8491381ccb8bcc26a031048d628b9)`(GetFriendRelationshipType::Request & Request) const` <a id="classURH__FriendSubsystem_1ac4a8491381ccb8bcc26a031048d628b9"></a>

Fills our a Get Friend request.

#### Parameters
* `Request` The request with the default params filled out. 

#### Returns
True, if the request was filled out successfully.

#### `protected virtual void `[`PostReloadConfig`](#classURH__FriendSubsystem_1ad94ca4a65eeae28cd4fde373c4035d8d)`(class FProperty * PropertyThatWasLoaded)` <a id="classURH__FriendSubsystem_1ad94ca4a65eeae28cd4fde373c4035d8d"></a>

Called from ReloadConfig after the object has reloaded its configuration data.

#### Parameters
* `PropertyThatWasLoaded` The property loaded.

#### `protected inline virtual void `[`OnPresenceUpdated`](#classURH__FriendSubsystem_1af43a2ad8bee539b08cb56d1d5800755d)`(`[`URH_PlayerInfoSubobject`](PlayerInfo.md#classURH__PlayerInfoSubobject)` * PlayerPresence)` <a id="classURH__FriendSubsystem_1af43a2ad8bee539b08cb56d1d5800755d"></a>

Helper function to push out presence updates on delegates on this system.

#### Parameters
* `PlayerPresence` The Player Presence updated.

#### `protected virtual void `[`OnFetchFriendsListResponse`](#classURH__FriendSubsystem_1a1f31555fd208d81eaddc8f9fc1aadb17)`(const GetFriendsListType::Response & Resp,const FRH_GenericFriendBlock Delegate)` <a id="classURH__FriendSubsystem_1a1f31555fd208d81eaddc8f9fc1aadb17"></a>

Handles the response to a Fetch Friend List call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnFetchFriendResponse`](#classURH__FriendSubsystem_1a095efd57afb8653f4deccfd1ca6da1c5)`(const GetFriendRelationshipType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate)` <a id="classURH__FriendSubsystem_1a095efd57afb8653f4deccfd1ca6da1c5"></a>

Handles the response to a Fetch Friend call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnAddFriendResponse`](#classURH__FriendSubsystem_1a193027a404185d6cb776bca21dcdd9b9)`(const AddFriendType::Response & Resp,const FRH_AddFriendBlock Delegate,const AddFriendType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1a193027a404185d6cb776bca21dcdd9b9"></a>

Handles the response to a Add Friend call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

#### `protected virtual void `[`OnRemoveFriendResponse`](#classURH__FriendSubsystem_1a59902f0693136bb2c965aaafd3f05c6d)`(const DeleteFriendType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const DeleteFriendType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1a59902f0693136bb2c965aaafd3f05c6d"></a>

Handles the response to a Remove Friend call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the remove friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

#### `protected virtual void `[`OnAddNotesResponse`](#classURH__FriendSubsystem_1a027d507e6a10d61a0cd3dd8afdbfd4b7)`(const AddNotesType::Response & Resp,const FRH_AddNotesBlock Delegate,const AddNotesType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1a027d507e6a10d61a0cd3dd8afdbfd4b7"></a>

Handles the response to a Add Friend Notes call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

#### `protected virtual void `[`OnDeleteNotesResponse`](#classURH__FriendSubsystem_1aadb0f0d8b011cf2ac33f422043cde58e)`(const DeleteNotesType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const DeleteNotesType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1aadb0f0d8b011cf2ac33f422043cde58e"></a>

Handles the response to a Delete Friend Notes call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

#### `protected virtual void `[`OnFetchBlockedListResponse`](#classURH__FriendSubsystem_1a767b8f66ab46b1d2d9f1eaf81aa67755)`(const GetBlockedListType::Response & Resp,const FRH_GenericFriendBlock Delegate)` <a id="classURH__FriendSubsystem_1a767b8f66ab46b1d2d9f1eaf81aa67755"></a>

Handles the response to a Get Blocked List call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnFetchBlockedPlayerResponse`](#classURH__FriendSubsystem_1aa59af9e5e4e2f41bf6f620e0fd54c915)`(const GetBlockedType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` <a id="classURH__FriendSubsystem_1aa59af9e5e4e2f41bf6f620e0fd54c915"></a>

Handles the response to a Get Blocked Player call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `PlayerUuid` The UUID of the player that is being requested.

#### `protected virtual void `[`OnBlockPlayerResponse`](#classURH__FriendSubsystem_1ad0274f1f8b5311b8f6bdbdf8fba419c4)`(const BlockType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` <a id="classURH__FriendSubsystem_1ad0274f1f8b5311b8f6bdbdf8fba419c4"></a>

Handles the response to a Block Player call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `PlayerUuid` The UUID of the player that is being blocked.

#### `protected virtual void `[`OnUnblockPlayerResponse`](#classURH__FriendSubsystem_1abda83155f03fdc2ebd3cdcf48af081b2)`(const UnblockType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` <a id="classURH__FriendSubsystem_1abda83155f03fdc2ebd3cdcf48af081b2"></a>

Handles the response to a Unblock Player call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `PlayerUuid` The UUID of the player that is being unblocked.

#### `protected virtual void `[`OnFetchFriendForAdd`](#classURH__FriendSubsystem_1a8f23c7d98799cf5719444b9fca5f5257)`(const GetFriendRelationshipType::Response & Resp,const FRH_AddFriendBlock Delegate,AddFriendType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1a8f23c7d98799cf5719444b9fca5f5257"></a>

Handles the response to a Fetch Friend For Add call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the fetch friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

#### `protected virtual void `[`OnFetchFriendForAddNote`](#classURH__FriendSubsystem_1ada9967c9cafff1902cd8495a9bba096d)`(const GetFriendRelationshipType::Response & Resp,const FRH_AddNotesBlock Delegate,AddNotesType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1ada9967c9cafff1902cd8495a9bba096d"></a>

Handles the response to a Fetch Friend For Add Note call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the fetch friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

#### `protected virtual void `[`OnFetchFriendForDeleteNote`](#classURH__FriendSubsystem_1ac5785416b739e7c4ac9f35d2de199b05)`(const GetFriendRelationshipType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,DeleteNotesType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1ac5785416b739e7c4ac9f35d2de199b05"></a>

Handles the response to a Fetch Friend For Delete Note call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the fetch friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

#### `protected virtual void `[`OnFetchFriendForRemove`](#classURH__FriendSubsystem_1a2dff0a78994ba66003dd4fd8a4f3db78)`(const GetFriendRelationshipType::Response & Resp,const FRH_GenericFriendWithUuidBlock Delegate,DeleteFriendType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1a2dff0a78994ba66003dd4fd8a4f3db78"></a>

Handles the response to a Fetch Friend For Remove call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the fetch friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

#### `protected void `[`UpdatePlatformFriends`](#classURH__FriendSubsystem_1a69aae2ad8b7200bf3dc0d51fbb59b3e6)`(const TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > & NewFriends)` <a id="classURH__FriendSubsystem_1a69aae2ad8b7200bf3dc0d51fbb59b3e6"></a>

Updates the cached Platforms friends with the new set of friends data.

#### Parameters
* `NewFriends` New platform friend data.

#### `protected void `[`RemoveAllFriendsWithNoRelationships`](#classURH__FriendSubsystem_1a8e2baea2c4b27a854894385976495cb2)`(TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > & OutArray)` <a id="classURH__FriendSubsystem_1a8e2baea2c4b27a854894385976495cb2"></a>

Removes all friends from the cached data that have no relationship to the player the subsystem is for.

#### Parameters
* `OutArray` Array of players that were removed.

#### `protected void `[`PollFriendsList`](#classURH__FriendSubsystem_1ac09b6bec4ef50e2e2c7bc9daee98cc9b)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__FriendSubsystem_1ac09b6bec4ef50e2e2c7bc9daee98cc9b"></a>

Executes a poll of the players friends list.

#### Parameters
* `Delegate` Callback delegate for the poll.

#### `protected void `[`PollBlockedPlayers`](#classURH__FriendSubsystem_1a3eb26a11fae901e018b1a1863c576f3b)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__FriendSubsystem_1a3eb26a11fae901e018b1a1863c576f3b"></a>

Executes a poll of the players blocked list.

#### Parameters
* `Delegate` Callback delegate for the poll.

#### `protected FName `[`ExtractErrorCodeFromResponse`](#classURH__FriendSubsystem_1a132d8e0a874d1f686f085ab4b3a6e68f)`(const FHttpResponsePtr & Response) const` <a id="classURH__FriendSubsystem_1a132d8e0a874d1f686f085ab4b3a6e68f"></a>

Gets the error code response name from a http request.

#### Parameters
* `Response` The Http response to get the error from. 

#### Returns
The error code.

#### `protected virtual void `[`OnReadOSSFriendsComplete`](#classURH__FriendSubsystem_1a28e2e549632ea1cde658e352a74e5e71)`(int32 LocalUserNum,bool bWasSuccessful,const FString & ListName,const FString & ErrorStr)` <a id="classURH__FriendSubsystem_1a28e2e549632ea1cde658e352a74e5e71"></a>

Handles the response from the online subsystem call to get friends.

#### Parameters
* `LocalUserNum` Controller id of the local player. 

* `bWasSuccessful` If the get friends call was successful. 

* `ListName` The name of the list that was requested. 

* `ErrorStr` Error string if the call failed.

#### `protected void `[`OnOSSQueryBlockListComplete`](#classURH__FriendSubsystem_1ab8eb49f42a52b3cb1e6a1ae6c1663d3d)`(const FUniqueNetId & UserId,bool bWasSuccessful,const FString & ErrorStr)` <a id="classURH__FriendSubsystem_1ab8eb49f42a52b3cb1e6a1ae6c1663d3d"></a>

Handles the response from the online subsystem call to get blocked list.

#### Parameters
* `UserId` Unique id of the local player. 

* `bWasSuccessful` If the get friends call was successful. 

* `ErrorStr` Error string if the call failed.

#### `protected virtual void `[`OnOSSBlockListChanged`](#classURH__FriendSubsystem_1ac118c76788b362e16e3c254372921074)`(int32 LocalUserNum,const FString & ListName)` <a id="classURH__FriendSubsystem_1ac118c76788b362e16e3c254372921074"></a>

Handles the response from the online subsystem call to get list of blocked players.

#### Parameters
* `LocalUserNum` Controller id of the local player. 

* `ListName` The name of the list that was returned.

#### `protected virtual void `[`UpdateWithOSSFriends`](#classURH__FriendSubsystem_1ac1ec831e3a17301014fd02b08cd786e6)`(const FString & ListName)` <a id="classURH__FriendSubsystem_1ac1ec831e3a17301014fd02b08cd786e6"></a>

Updates the system with the friends from the online subsystem.

#### Parameters
* `ListName` The list name where the friends are stored.

#### `protected virtual void `[`OnOSSPresenceReceived`](#classURH__FriendSubsystem_1a96025e788f843e3af281e4a35bc67f2d)`(const FUniqueNetId & UserId,const TSharedRef< FOnlineUserPresence > & NewPresence)` <a id="classURH__FriendSubsystem_1a96025e788f843e3af281e4a35bc67f2d"></a>

Handles the response from the online subsystem call to get presence.

#### Parameters
* `UserId` Net Id of the player the presence is for. 

* `NewPresence` The presence information from the online subsystem.

#### `typedef `[`GetBlockedListType`](#classURH__FriendSubsystem_1a86947a66ea21048117d78b043f66c2a4) <a id="classURH__FriendSubsystem_1a86947a66ea21048117d78b043f66c2a4"></a>

Type Define for Get Blocked List calls.

#### `typedef `[`GetBlockedType`](#classURH__FriendSubsystem_1abf3d2913b2440d3ccf90f73e5466b667) <a id="classURH__FriendSubsystem_1abf3d2913b2440d3ccf90f73e5466b667"></a>

Type Define for Get Blocked calls.

#### `typedef `[`BlockType`](#classURH__FriendSubsystem_1afde127473ff38097c2158547c884c12c) <a id="classURH__FriendSubsystem_1afde127473ff38097c2158547c884c12c"></a>

Type Define for Block Player calls.

#### `typedef `[`UnblockType`](#classURH__FriendSubsystem_1a873630d80c6b2ec588a0f5057beb4029) <a id="classURH__FriendSubsystem_1a873630d80c6b2ec588a0f5057beb4029"></a>

Type Define for Unblock Player calls.

#### `typedef `[`GetFriendsListType`](#classURH__FriendSubsystem_1a5ea265c6a3d4410edef249077f7a29fc) <a id="classURH__FriendSubsystem_1a5ea265c6a3d4410edef249077f7a29fc"></a>

Type Define for Get Friends List calls.

#### `typedef `[`GetFriendRelationshipType`](#classURH__FriendSubsystem_1abbd85d9a95318bfa9be709e5e98ab6ac) <a id="classURH__FriendSubsystem_1abbd85d9a95318bfa9be709e5e98ab6ac"></a>

Type Define for Get Friend Relationship calls.

#### `typedef `[`AddFriendType`](#classURH__FriendSubsystem_1a5b292ddb94cace20f504e49490cdd640) <a id="classURH__FriendSubsystem_1a5b292ddb94cace20f504e49490cdd640"></a>

Type Define for Add Friend calls.

#### `typedef `[`DeleteFriendType`](#classURH__FriendSubsystem_1a03a40c4622679a1506a77ff5f33d16e1) <a id="classURH__FriendSubsystem_1a03a40c4622679a1506a77ff5f33d16e1"></a>

Type Define for Remove Friend calls.

#### `typedef `[`AddNotesType`](#classURH__FriendSubsystem_1aab7335b06d00faaa339a13b0d555047e) <a id="classURH__FriendSubsystem_1aab7335b06d00faaa339a13b0d555047e"></a>

Type Define for Add Friend Notes calls.

#### `typedef `[`DeleteNotesType`](#classURH__FriendSubsystem_1a6552555d4071e1f7272104a44aa0ac60) <a id="classURH__FriendSubsystem_1a6552555d4071e1f7272104a44aa0ac60"></a>

Type Define for Delete Friend Notes calls.

