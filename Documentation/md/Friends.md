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
`public inline FString `[`GetClientDisplayName`](#classURH__PlatformFriend_1a09e86c7e1139775b4471eac31db6fd71)`() const` | Gets the display name of the user on their platform.
`public inline FString `[`GetClientGamerTag`](#classURH__PlatformFriend_1a9a80fb7968f468dac2fcaac36564b055)`() const` | 
`public inline FString `[`GetRichPresenceInfo`](#classURH__PlatformFriend_1ae9fbf2acec3091ae08c7a20553bdce8c)`() const` | Gets the rich presence of the user on their platform.
`public inline const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & `[`GetPlayerPlatformId`](#classURH__PlatformFriend_1a6eaf359b230a173d585617720b72cf91)`() const` | Gets a struct of the players platform and unique platform player id.
`public inline `[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` `[`GetPlatform`](#classURH__PlatformFriend_1a5a97d2c7155f36bf5d065161dcc16152)`() const` | Gets the type of platform.
`public inline ERHAPI_Platform `[`GetPlatformBase`](#classURH__PlatformFriend_1ab7affa3eadeebbe6d4c5e5aa6673be48)`() const` | Gets the type of platform.
`public inline const FString & `[`GetPlatformUserId`](#classURH__PlatformFriend_1a32e5b86cc9568d927f2cf98ee4442ddf)`() const` | Gets the users unique platform player id.
`public inline bool `[`IsJoinable`](#classURH__PlatformFriend_1a471e1426cd5693912fa3ebf57fd4540a)`() const` | Gets if you are able to join the user in their gaming session.
`public inline bool `[`IsPlayingGame`](#classURH__PlatformFriend_1adcbf4c48ec43e2c3db5df0423cb14f37)`() const` | Gets if the user is playing any game.
`public inline bool `[`IsPlayingThisGame`](#classURH__PlatformFriend_1aeb207b249b7ebcbd994dfce117b85e63)`() const` | Gets if the user is playing this game.
`public inline bool `[`IsOnline`](#classURH__PlatformFriend_1a762df48ad7d203526a11ed0ebcca591d)`() const` | Gets if the user is online on their platform.
`public inline bool `[`IsDND`](#classURH__PlatformFriend_1ae31c8b2976c5fdba8997ed86741c32b6)`() const` | Gets if the user has set Do Non Disturb mode on their platform.
`public inline bool `[`IsFriend`](#classURH__PlatformFriend_1ad80512a9aeb07dcfb8dfea738c03c3b3)`() const` | Gets if the user is your friend on their platform.
`public inline bool `[`IsBlocked`](#classURH__PlatformFriend_1af3d470d61dcec1e4c7b6e9620d116ebc)`() const` | Gets if the user is blocked by you on their platform.
`public inline bool `[`HasPendingFriendRequestToYou`](#classURH__PlatformFriend_1a28f23d7a48b451795262b407a4b9e1e8)`() const` | Gets if the user has sent a friend request to you on their platform.
`public inline bool `[`HasPendingFriendRequestFromYou`](#classURH__PlatformFriend_1a0f1be6edfeebb8bbc73b4a06adfc0707)`() const` | Gets if the user has been sent a friend request by you on their platform.
`public inline bool `[`HasAnyRelationship`](#classURH__PlatformFriend_1affa1328c8735c3e1cad102186a8ca688)`() const` | Gets if the user is a friend or has been sent or has sent a friend request on their platform with you.
`public inline void `[`Clear`](#classURH__PlatformFriend_1a8b646f0d1117da0268e55a6c6d4c1934)`()` | Clears all the info.
`public inline void `[`ClearFriendAndStatusInfo`](#classURH__PlatformFriend_1a684d343b73ed3fc6bc79a1fdd5e5cd2f)`()` | Clears all the status information but not the users id.
`public inline void `[`Init`](#classURH__PlatformFriend_1a6aaf6ce557dedb468ce8b471424886fb)`(`[`URH_PlatformFriend`](#classURH__PlatformFriend)` * other)` | Initializes a Platform Friend with another Platform Friend.
`public inline void `[`Init`](#classURH__PlatformFriend_1af052393745bf5c27078fcec268344ef5)`(const FOnlineFriend & OnlineFriend,const FOnlineUserPresence & Presence,IOnlineSubsystem * OSS)` | Initializes a Platform Friend from online information from their platform.
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

#### `public inline FString `[`GetClientDisplayName`](#classURH__PlatformFriend_1a09e86c7e1139775b4471eac31db6fd71)`() const` <a id="classURH__PlatformFriend_1a09e86c7e1139775b4471eac31db6fd71"></a>

Gets the display name of the user on their platform.

<br>
#### `public inline FString `[`GetClientGamerTag`](#classURH__PlatformFriend_1a9a80fb7968f468dac2fcaac36564b055)`() const` <a id="classURH__PlatformFriend_1a9a80fb7968f468dac2fcaac36564b055"></a>

<br>
#### `public inline FString `[`GetRichPresenceInfo`](#classURH__PlatformFriend_1ae9fbf2acec3091ae08c7a20553bdce8c)`() const` <a id="classURH__PlatformFriend_1ae9fbf2acec3091ae08c7a20553bdce8c"></a>

Gets the rich presence of the user on their platform.

<br>
#### `public inline const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & `[`GetPlayerPlatformId`](#classURH__PlatformFriend_1a6eaf359b230a173d585617720b72cf91)`() const` <a id="classURH__PlatformFriend_1a6eaf359b230a173d585617720b72cf91"></a>

Gets a struct of the players platform and unique platform player id.

<br>
#### `public inline `[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` `[`GetPlatform`](#classURH__PlatformFriend_1a5a97d2c7155f36bf5d065161dcc16152)`() const` <a id="classURH__PlatformFriend_1a5a97d2c7155f36bf5d065161dcc16152"></a>

Gets the type of platform.

<br>
#### `public inline ERHAPI_Platform `[`GetPlatformBase`](#classURH__PlatformFriend_1ab7affa3eadeebbe6d4c5e5aa6673be48)`() const` <a id="classURH__PlatformFriend_1ab7affa3eadeebbe6d4c5e5aa6673be48"></a>

Gets the type of platform.

<br>
#### `public inline const FString & `[`GetPlatformUserId`](#classURH__PlatformFriend_1a32e5b86cc9568d927f2cf98ee4442ddf)`() const` <a id="classURH__PlatformFriend_1a32e5b86cc9568d927f2cf98ee4442ddf"></a>

Gets the users unique platform player id.

<br>
#### `public inline bool `[`IsJoinable`](#classURH__PlatformFriend_1a471e1426cd5693912fa3ebf57fd4540a)`() const` <a id="classURH__PlatformFriend_1a471e1426cd5693912fa3ebf57fd4540a"></a>

Gets if you are able to join the user in their gaming session.

<br>
#### `public inline bool `[`IsPlayingGame`](#classURH__PlatformFriend_1adcbf4c48ec43e2c3db5df0423cb14f37)`() const` <a id="classURH__PlatformFriend_1adcbf4c48ec43e2c3db5df0423cb14f37"></a>

Gets if the user is playing any game.

<br>
#### `public inline bool `[`IsPlayingThisGame`](#classURH__PlatformFriend_1aeb207b249b7ebcbd994dfce117b85e63)`() const` <a id="classURH__PlatformFriend_1aeb207b249b7ebcbd994dfce117b85e63"></a>

Gets if the user is playing this game.

<br>
#### `public inline bool `[`IsOnline`](#classURH__PlatformFriend_1a762df48ad7d203526a11ed0ebcca591d)`() const` <a id="classURH__PlatformFriend_1a762df48ad7d203526a11ed0ebcca591d"></a>

Gets if the user is online on their platform.

<br>
#### `public inline bool `[`IsDND`](#classURH__PlatformFriend_1ae31c8b2976c5fdba8997ed86741c32b6)`() const` <a id="classURH__PlatformFriend_1ae31c8b2976c5fdba8997ed86741c32b6"></a>

Gets if the user has set Do Non Disturb mode on their platform.

<br>
#### `public inline bool `[`IsFriend`](#classURH__PlatformFriend_1ad80512a9aeb07dcfb8dfea738c03c3b3)`() const` <a id="classURH__PlatformFriend_1ad80512a9aeb07dcfb8dfea738c03c3b3"></a>

Gets if the user is your friend on their platform.

<br>
#### `public inline bool `[`IsBlocked`](#classURH__PlatformFriend_1af3d470d61dcec1e4c7b6e9620d116ebc)`() const` <a id="classURH__PlatformFriend_1af3d470d61dcec1e4c7b6e9620d116ebc"></a>

Gets if the user is blocked by you on their platform.

<br>
#### `public inline bool `[`HasPendingFriendRequestToYou`](#classURH__PlatformFriend_1a28f23d7a48b451795262b407a4b9e1e8)`() const` <a id="classURH__PlatformFriend_1a28f23d7a48b451795262b407a4b9e1e8"></a>

Gets if the user has sent a friend request to you on their platform.

<br>
#### `public inline bool `[`HasPendingFriendRequestFromYou`](#classURH__PlatformFriend_1a0f1be6edfeebb8bbc73b4a06adfc0707)`() const` <a id="classURH__PlatformFriend_1a0f1be6edfeebb8bbc73b4a06adfc0707"></a>

Gets if the user has been sent a friend request by you on their platform.

<br>
#### `public inline bool `[`HasAnyRelationship`](#classURH__PlatformFriend_1affa1328c8735c3e1cad102186a8ca688)`() const` <a id="classURH__PlatformFriend_1affa1328c8735c3e1cad102186a8ca688"></a>

Gets if the user is a friend or has been sent or has sent a friend request on their platform with you.

<br>
#### `public inline void `[`Clear`](#classURH__PlatformFriend_1a8b646f0d1117da0268e55a6c6d4c1934)`()` <a id="classURH__PlatformFriend_1a8b646f0d1117da0268e55a6c6d4c1934"></a>

Clears all the info.

<br>
#### `public inline void `[`ClearFriendAndStatusInfo`](#classURH__PlatformFriend_1a684d343b73ed3fc6bc79a1fdd5e5cd2f)`()` <a id="classURH__PlatformFriend_1a684d343b73ed3fc6bc79a1fdd5e5cd2f"></a>

Clears all the status information but not the users id.

<br>
#### `public inline void `[`Init`](#classURH__PlatformFriend_1a6aaf6ce557dedb468ce8b471424886fb)`(`[`URH_PlatformFriend`](#classURH__PlatformFriend)` * other)` <a id="classURH__PlatformFriend_1a6aaf6ce557dedb468ce8b471424886fb"></a>

Initializes a Platform Friend with another Platform Friend.

<br>
#### `public inline void `[`Init`](#classURH__PlatformFriend_1af052393745bf5c27078fcec268344ef5)`(const FOnlineFriend & OnlineFriend,const FOnlineUserPresence & Presence,IOnlineSubsystem * OSS)` <a id="classURH__PlatformFriend_1af052393745bf5c27078fcec268344ef5"></a>

Initializes a Platform Friend from online information from their platform.

<br>
#### `protected `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#classURH__PlatformFriend_1a1eca8d8c1f024dbb754aff1ecc7e7ff0) <a id="classURH__PlatformFriend_1a1eca8d8c1f024dbb754aff1ecc7e7ff0"></a>

The players Platform Id.

<br>
#### `protected FString `[`DisplayName`](#classURH__PlatformFriend_1a6ffdcb673470361a4eb3f67436219ac9) <a id="classURH__PlatformFriend_1a6ffdcb673470361a4eb3f67436219ac9"></a>

The players Display Name for the platform.

<br>
#### `protected FString `[`RichPresenceInfo`](#classURH__PlatformFriend_1a9656106e79de89728f5dd29b02f87432) <a id="classURH__PlatformFriend_1a9656106e79de89728f5dd29b02f87432"></a>

The players Rich Presence on the platform.

<br>
#### `protected bool `[`Joinable`](#classURH__PlatformFriend_1adf43f5e6425ce44836e406c6fb3c18ef) <a id="classURH__PlatformFriend_1adf43f5e6425ce44836e406c6fb3c18ef"></a>

If the player is currently joinable.

<br>
#### `protected bool `[`PlayingGame`](#classURH__PlatformFriend_1ae47a2802d826185a6e409b1bc7839cb9) <a id="classURH__PlatformFriend_1ae47a2802d826185a6e409b1bc7839cb9"></a>

If the player is currently playering a game.

<br>
#### `protected bool `[`PlayingThisGame`](#classURH__PlatformFriend_1a6533963934e5cdd342e6bdf75486f039) <a id="classURH__PlatformFriend_1a6533963934e5cdd342e6bdf75486f039"></a>

If the player is currently playing this game.

<br>
#### `protected bool `[`Online`](#classURH__PlatformFriend_1a52a160091ccf388919ef4cc23450d617) <a id="classURH__PlatformFriend_1a52a160091ccf388919ef4cc23450d617"></a>

If the player is online.

<br>
#### `protected bool `[`DoNotDisturb`](#classURH__PlatformFriend_1a2dff3ff7e95ab89d203ba0489c618688) <a id="classURH__PlatformFriend_1a2dff3ff7e95ab89d203ba0489c618688"></a>

If the player has do not disturb on.

<br>
#### `protected bool `[`Friend`](#classURH__PlatformFriend_1afd2199ee1c085ee9be41d687cf55eb3e) <a id="classURH__PlatformFriend_1afd2199ee1c085ee9be41d687cf55eb3e"></a>

If the player is a platform friend.

<br>
#### `protected bool `[`Blocked`](#classURH__PlatformFriend_1a790eb947fad2442e857a2aa08487fb53) <a id="classURH__PlatformFriend_1a790eb947fad2442e857a2aa08487fb53"></a>

If the player is blocked by you by platform.

<br>
#### `protected bool `[`PendingFriendRequestToYou`](#classURH__PlatformFriend_1a3f81ed5d899ca081e83bda98ca0d6c94) <a id="classURH__PlatformFriend_1a3f81ed5d899ca081e83bda98ca0d6c94"></a>

If the player is requesting your friendship via platform.

<br>
#### `protected bool `[`PendingFriendRequestFromYou`](#classURH__PlatformFriend_1a27df17201ec44564399d2c7f65c3f091) <a id="classURH__PlatformFriend_1a27df17201ec44564399d2c7f65c3f091"></a>

If the player has a pendinf friendship request via platform.

<br>
## class `URH_RHFriendAndPlatformFriend` <a id="classURH__RHFriendAndPlatformFriend"></a>

```
class URH_RHFriendAndPlatformFriend
  : public UObject
```

RH Friend and Platform Friend class that wraps a Rally Here Friend and Platform Friend together.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_OnPresenceUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnPresenceUpdatedDelegate`](#classURH__RHFriendAndPlatformFriend_1a65b2017a3425ee682f706f14990be2a7) | Blueprint delegate to listen for presence updates.
`public FRH_OnPresenceUpdatedMulticastDelegate `[`OnPresenceUpdatedDelegate`](#classURH__RHFriendAndPlatformFriend_1a55317bf6b9ee5a4bb83e0f92fae106e2) | Native delegate to listen for presence updates.
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
`public inline FGuid `[`GetRHPlayerUuid`](#classURH__RHFriendAndPlatformFriend_1a770e5dffacab76f1bd850953282c5606)`() const` | Gets the players unique player id.
`public inline `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`GetStatus`](#classURH__RHFriendAndPlatformFriend_1acda68106fa1cc559ea680e947c7736a9)`() const` | Gets the current Rally Here relationship status with the player.
`public inline FDateTime `[`GetLastModifiedOn`](#classURH__RHFriendAndPlatformFriend_1ab99b48ddf2c3f33d93356eceaaa5af11)`() const` | Gets the last time the players friend data was modified.
`public inline FString `[`GetNotes`](#classURH__RHFriendAndPlatformFriend_1a4bbf8001f44af03e7a84afb5e44acef8)`() const` | Gets any notes the player has set for this player.
`public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriendAtIndex`](#classURH__RHFriendAndPlatformFriend_1a5e3dc00a2cea69ce8b96ba1308727eb1)`(int32 Index) const` | Gets a platform friend at given index for iterating plaform Friends.
`public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriend`](#classURH__RHFriendAndPlatformFriend_1afc99c0f055a5ecb7119fd2059e9bee7f)`(`[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` Platform) const` | Gets a platform friend object for the specified platform if it exists.
`public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriendBase`](#classURH__RHFriendAndPlatformFriend_1a0ba8a124c68354881afeb15a4344d71a)`(ERHAPI_Platform Platform) const` | Gets a platform friend object for the specified platform if it exists.
`public inline const TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > `[`GetPlatformFriends`](#classURH__RHFriendAndPlatformFriend_1acf8b730ee0c7ef8b34c368ad413c7ed2)`() const` | Gets all of the players platform friend entries.
`public inline const `[`FRH_PlayerAndPlatformInfo`](PlayerInfo.md#structFRH__PlayerAndPlatformInfo)` & `[`GetPlayerAndPlatformInfo`](#classURH__RHFriendAndPlatformFriend_1a8e94f074e512e3c62569ba135c2a68db)`() const` | Gets the wrapper of the players RH and platform info.
`public FString `[`GetLastKnownDisplayName`](#classURH__RHFriendAndPlatformFriend_1acd73b58468f7e35971e820244372ae84)`(ERHAPI_Platform PreferredPlatformType) const` | Gets the last known cached display name for the player.
`public inline FString `[`GetLastKnownGamerTag`](#classURH__RHFriendAndPlatformFriend_1ab5ca8bf44880c07a03d7d7edf255fb15)`(`[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` PreferredPlatformType) const` | 
`public void `[`GetLastKnownDisplayNameAsync`](#classURH__RHFriendAndPlatformFriend_1a0649044a011244406abccce1f472fd34)`(const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate,const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem) const` | Gets the last known display name for the player, will request from API as needed.
`public inline void `[`BLUEPRINT_GetLastKnownDisplayNameAsync`](#classURH__RHFriendAndPlatformFriend_1a5d46cd7dc1554dcff6609500317c6177)`(const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)` | 
`public void `[`GetLastKnownGamerTagAsync`](#classURH__RHFriendAndPlatformFriend_1a968235f0d938072435dfe660551dea47)`(const FTimespan & StaleThreshold,bool bForceRefresh,`[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate,const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem) const` | 
`public inline void `[`BLUEPRINT_GetLastKnownGamerTagAsync`](#classURH__RHFriendAndPlatformFriend_1a1af9bada940b52efa3c743bf23d8f201)`(const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FTimespan & StaleThreshold,bool bForceRefresh,`[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)` | 
`protected `[`FRH_PlayerAndPlatformInfo`](PlayerInfo.md#structFRH__PlayerAndPlatformInfo)` `[`PlayerAndPlatformInfo`](#classURH__RHFriendAndPlatformFriend_1a85603f6ad7e4c8402012642ba70df5d3) | Player Info and Platform Info combined.
`protected `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`RHFriendshipStatus`](#classURH__RHFriendAndPlatformFriend_1a048470b3c114f6379667149ea0a1328b) | Core friendship status.
`protected `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`PreviousRHFriendshipStatus`](#classURH__RHFriendAndPlatformFriend_1aa86a3555aa8881bcf2a4d6af5a8dffc4) | cached previous core friendship status.
`protected FDateTime `[`LastModifiedOn`](#classURH__RHFriendAndPlatformFriend_1a5dc5734dfba3cba698486e514727c79a) | Last update of the current friend information.
`protected FString `[`Notes`](#classURH__RHFriendAndPlatformFriend_1a66cefbb47f0cad7d59bd18df980022c5) | Notes set for the friend.
`protected TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > `[`PlatformFriends`](#classURH__RHFriendAndPlatformFriend_1a2a7cea15c536d6f1dc0e372bd75a7dc3) | Array of platforms the player has linked to their account.
`protected FString `[`Etag`](#classURH__RHFriendAndPlatformFriend_1ab4bca6808ed022b3d72edf548745c04c) | ETag of last friend update response.
`protected inline virtual void `[`OnPresenceUpdated`](#classURH__RHFriendAndPlatformFriend_1a42b31a6399415e3b0cf5e272a07a0488)`(`[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * PlayerPresence)` | Passes presence updates of the player on through internal delgates.
`protected inline virtual void `[`ClearRHFriendStatus`](#classURH__RHFriendAndPlatformFriend_1a192552b9a61592ae648c4e50afafeca0)`()` | Clears the cached friendship status for the player.
`protected inline virtual void `[`ClearPlatformFriendStatus`](#classURH__RHFriendAndPlatformFriend_1a2868052b24a6cf21af2ba2ce0aab026b)`()` | Clears cached data for the platform friends for this player.

#### Members

#### `public FRH_OnPresenceUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnPresenceUpdatedDelegate`](#classURH__RHFriendAndPlatformFriend_1a65b2017a3425ee682f706f14990be2a7) <a id="classURH__RHFriendAndPlatformFriend_1a65b2017a3425ee682f706f14990be2a7"></a>

Blueprint delegate to listen for presence updates.

<br>
#### `public FRH_OnPresenceUpdatedMulticastDelegate `[`OnPresenceUpdatedDelegate`](#classURH__RHFriendAndPlatformFriend_1a55317bf6b9ee5a4bb83e0f92fae106e2) <a id="classURH__RHFriendAndPlatformFriend_1a55317bf6b9ee5a4bb83e0f92fae106e2"></a>

Native delegate to listen for presence updates.

<br>
#### `public inline bool `[`AreFriends`](#classURH__RHFriendAndPlatformFriend_1a3614d4c1ddb543c6f262dd27b65ab67b)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a3614d4c1ddb543c6f262dd27b65ab67b"></a>

Gets if the player is a friend through Rally Here systems or their platform.

<br>
#### `public inline bool `[`AreRHFriends`](#classURH__RHFriendAndPlatformFriend_1a4fe2dc0a23755f8069aa7adac470b79b)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a4fe2dc0a23755f8069aa7adac470b79b"></a>

Gets if the player is a friend through Rally Here.

<br>
#### `public inline bool `[`ArePlatformFriends`](#classURH__RHFriendAndPlatformFriend_1aff5cffa84cf22c06bfdb6fdbf6c86d42)`() const` <a id="classURH__RHFriendAndPlatformFriend_1aff5cffa84cf22c06bfdb6fdbf6c86d42"></a>

Gets if the player is a friend through their platform.

<br>
#### `public inline bool `[`FriendRequestSent`](#classURH__RHFriendAndPlatformFriend_1afb2d64ae40c67ff9be8e05dc3efee08f)`() const` <a id="classURH__RHFriendAndPlatformFriend_1afb2d64ae40c67ff9be8e05dc3efee08f"></a>

Gets if you have sent a friend request to the player through Rally Here or their platform.

<br>
#### `public inline bool `[`RHFriendRequestSent`](#classURH__RHFriendAndPlatformFriend_1a01322359b249aa216ec7cdd237f94efd)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a01322359b249aa216ec7cdd237f94efd"></a>

Gets if you have sent a friend request to the player through Rally Here.

<br>
#### `public inline bool `[`PendingFriendRequest`](#classURH__RHFriendAndPlatformFriend_1ab84f7920479877917a2251fb16c38a19)`() const` <a id="classURH__RHFriendAndPlatformFriend_1ab84f7920479877917a2251fb16c38a19"></a>

Gets if the player has sent you a friend through Rally Here or their platform.

<br>
#### `public inline bool `[`RhPendingFriendRequest`](#classURH__RHFriendAndPlatformFriend_1a6a93c886ade405ce778fa54621dcd455)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a6a93c886ade405ce778fa54621dcd455"></a>

Gets if the player has sent you a friend through Rally Here.

<br>
#### `public inline bool `[`HaveRhRelationship`](#classURH__RHFriendAndPlatformFriend_1a3d80d9734091740fe541d6057c07955d)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a3d80d9734091740fe541d6057c07955d"></a>

Gets if the player has any sort of relationship with you through Rally Here.

<br>
#### `public inline bool `[`HaveAnyRelationship`](#classURH__RHFriendAndPlatformFriend_1a5f7fb5fb59474fa3ad7126a64d2b7adb)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a5f7fb5fb59474fa3ad7126a64d2b7adb"></a>

Gets if the player has any sort of relationship with you through Rally Here or their platform.

<br>
#### `public inline bool `[`HavePlatformRelationship`](#classURH__RHFriendAndPlatformFriend_1a00b3960652a313fd9c4bd8a99e53c36b)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a00b3960652a313fd9c4bd8a99e53c36b"></a>

Gets if the player has any sort of relationship with you through their platform.

<br>
#### `public inline bool `[`IsOnline`](#classURH__RHFriendAndPlatformFriend_1aa0abd090b067cdd78cc511467853e9c9)`() const` <a id="classURH__RHFriendAndPlatformFriend_1aa0abd090b067cdd78cc511467853e9c9"></a>

Gets if the player is online on their platform.

<br>
#### `public inline bool `[`IsPlayingThisGame`](#classURH__RHFriendAndPlatformFriend_1a75e1425a51bddff614302a10c83b9189)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a75e1425a51bddff614302a10c83b9189"></a>

Gets if the player is playing this game.

<br>
#### `public inline bool `[`IsDnD`](#classURH__RHFriendAndPlatformFriend_1a063eb82f35f76b18578a22451fee6cfd)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a063eb82f35f76b18578a22451fee6cfd"></a>

Gets if the player is set to Do Not Distrub on their platform.

<br>
#### `public inline bool `[`OtherDeclinedFriendship`](#classURH__RHFriendAndPlatformFriend_1aee6f1bc6d1278a9503910c4a1460f86e)`() const` <a id="classURH__RHFriendAndPlatformFriend_1aee6f1bc6d1278a9503910c4a1460f86e"></a>

Gets if the player has declined your Rally Here friend request.

<br>
#### `public inline bool `[`AwaitingFriendshipResponse`](#classURH__RHFriendAndPlatformFriend_1a32a0502bbb92dd01ae3ca862c3e81bd5)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a32a0502bbb92dd01ae3ca862c3e81bd5"></a>

Gets if the player has an outstanding Rally Here friend request by you.

<br>
#### `public inline bool `[`OtherIsAwaitingFriendshipResponse`](#classURH__RHFriendAndPlatformFriend_1a23f36830cbe8e74cf296cf14894113e2)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a23f36830cbe8e74cf296cf14894113e2"></a>

Gets if the player has sent you a Rally Here friend request.

<br>
#### `public inline FGuid `[`GetRHPlayerUuid`](#classURH__RHFriendAndPlatformFriend_1a770e5dffacab76f1bd850953282c5606)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a770e5dffacab76f1bd850953282c5606"></a>

Gets the players unique player id.

<br>
#### `public inline `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`GetStatus`](#classURH__RHFriendAndPlatformFriend_1acda68106fa1cc559ea680e947c7736a9)`() const` <a id="classURH__RHFriendAndPlatformFriend_1acda68106fa1cc559ea680e947c7736a9"></a>

Gets the current Rally Here relationship status with the player.

<br>
#### `public inline FDateTime `[`GetLastModifiedOn`](#classURH__RHFriendAndPlatformFriend_1ab99b48ddf2c3f33d93356eceaaa5af11)`() const` <a id="classURH__RHFriendAndPlatformFriend_1ab99b48ddf2c3f33d93356eceaaa5af11"></a>

Gets the last time the players friend data was modified.

<br>
#### `public inline FString `[`GetNotes`](#classURH__RHFriendAndPlatformFriend_1a4bbf8001f44af03e7a84afb5e44acef8)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a4bbf8001f44af03e7a84afb5e44acef8"></a>

Gets any notes the player has set for this player.

<br>
#### `public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriendAtIndex`](#classURH__RHFriendAndPlatformFriend_1a5e3dc00a2cea69ce8b96ba1308727eb1)`(int32 Index) const` <a id="classURH__RHFriendAndPlatformFriend_1a5e3dc00a2cea69ce8b96ba1308727eb1"></a>

Gets a platform friend at given index for iterating plaform Friends.

<br>
#### `public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriend`](#classURH__RHFriendAndPlatformFriend_1afc99c0f055a5ecb7119fd2059e9bee7f)`(`[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` Platform) const` <a id="classURH__RHFriendAndPlatformFriend_1afc99c0f055a5ecb7119fd2059e9bee7f"></a>

Gets a platform friend object for the specified platform if it exists.

<br>
#### `public inline `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * `[`GetPlatformFriendBase`](#classURH__RHFriendAndPlatformFriend_1a0ba8a124c68354881afeb15a4344d71a)`(ERHAPI_Platform Platform) const` <a id="classURH__RHFriendAndPlatformFriend_1a0ba8a124c68354881afeb15a4344d71a"></a>

Gets a platform friend object for the specified platform if it exists.

<br>
#### `public inline const TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > `[`GetPlatformFriends`](#classURH__RHFriendAndPlatformFriend_1acf8b730ee0c7ef8b34c368ad413c7ed2)`() const` <a id="classURH__RHFriendAndPlatformFriend_1acf8b730ee0c7ef8b34c368ad413c7ed2"></a>

Gets all of the players platform friend entries.

<br>
#### `public inline const `[`FRH_PlayerAndPlatformInfo`](PlayerInfo.md#structFRH__PlayerAndPlatformInfo)` & `[`GetPlayerAndPlatformInfo`](#classURH__RHFriendAndPlatformFriend_1a8e94f074e512e3c62569ba135c2a68db)`() const` <a id="classURH__RHFriendAndPlatformFriend_1a8e94f074e512e3c62569ba135c2a68db"></a>

Gets the wrapper of the players RH and platform info.

<br>
#### `public FString `[`GetLastKnownDisplayName`](#classURH__RHFriendAndPlatformFriend_1acd73b58468f7e35971e820244372ae84)`(ERHAPI_Platform PreferredPlatformType) const` <a id="classURH__RHFriendAndPlatformFriend_1acd73b58468f7e35971e820244372ae84"></a>

Gets the last known cached display name for the player.

#### Parameters
* `PreferredPlatformType` The preferred platform to get the display name from. 

#### Returns
The players last seen display name, will try to find a valid display name even if on a different platform than the preferred.

<br>
#### `public inline FString `[`GetLastKnownGamerTag`](#classURH__RHFriendAndPlatformFriend_1ab5ca8bf44880c07a03d7d7edf255fb15)`(`[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` PreferredPlatformType) const` <a id="classURH__RHFriendAndPlatformFriend_1ab5ca8bf44880c07a03d7d7edf255fb15"></a>

<br>
#### `public void `[`GetLastKnownDisplayNameAsync`](#classURH__RHFriendAndPlatformFriend_1a0649044a011244406abccce1f472fd34)`(const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate,const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem) const` <a id="classURH__RHFriendAndPlatformFriend_1a0649044a011244406abccce1f472fd34"></a>

Gets the last known display name for the player, will request from API as needed.

#### Parameters
* `StaleThreshold` The time threshold to consider the cached display name stale. 

* `bForceRefresh` If true will force a request from the API. 

* `PreferredPlatformType` The preferred platform to get the display name from. 

* `Delegate` The delegate to call when the request is complete.

<br>
#### `public inline void `[`BLUEPRINT_GetLastKnownDisplayNameAsync`](#classURH__RHFriendAndPlatformFriend_1a5d46cd7dc1554dcff6609500317c6177)`(const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)` <a id="classURH__RHFriendAndPlatformFriend_1a5d46cd7dc1554dcff6609500317c6177"></a>

<br>
#### `public void `[`GetLastKnownGamerTagAsync`](#classURH__RHFriendAndPlatformFriend_1a968235f0d938072435dfe660551dea47)`(const FTimespan & StaleThreshold,bool bForceRefresh,`[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate,const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem) const` <a id="classURH__RHFriendAndPlatformFriend_1a968235f0d938072435dfe660551dea47"></a>

<br>
#### `public inline void `[`BLUEPRINT_GetLastKnownGamerTagAsync`](#classURH__RHFriendAndPlatformFriend_1a1af9bada940b52efa3c743bf23d8f201)`(const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FTimespan & StaleThreshold,bool bForceRefresh,`[`ERHAPI_PlatformTypes_DEPRECATED`](undefined.md#group__Common_1ga8d2aa1d87e398a5548531751e8cea759)` PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)` <a id="classURH__RHFriendAndPlatformFriend_1a1af9bada940b52efa3c743bf23d8f201"></a>

<br>
#### `protected `[`FRH_PlayerAndPlatformInfo`](PlayerInfo.md#structFRH__PlayerAndPlatformInfo)` `[`PlayerAndPlatformInfo`](#classURH__RHFriendAndPlatformFriend_1a85603f6ad7e4c8402012642ba70df5d3) <a id="classURH__RHFriendAndPlatformFriend_1a85603f6ad7e4c8402012642ba70df5d3"></a>

Player Info and Platform Info combined.

<br>
#### `protected `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`RHFriendshipStatus`](#classURH__RHFriendAndPlatformFriend_1a048470b3c114f6379667149ea0a1328b) <a id="classURH__RHFriendAndPlatformFriend_1a048470b3c114f6379667149ea0a1328b"></a>

Core friendship status.

<br>
#### `protected `[`FriendshipStatus`](undefined.md#group__Friends_1gaa62b73aa8acc62ee0551d83f8da13244)` `[`PreviousRHFriendshipStatus`](#classURH__RHFriendAndPlatformFriend_1aa86a3555aa8881bcf2a4d6af5a8dffc4) <a id="classURH__RHFriendAndPlatformFriend_1aa86a3555aa8881bcf2a4d6af5a8dffc4"></a>

cached previous core friendship status.

<br>
#### `protected FDateTime `[`LastModifiedOn`](#classURH__RHFriendAndPlatformFriend_1a5dc5734dfba3cba698486e514727c79a) <a id="classURH__RHFriendAndPlatformFriend_1a5dc5734dfba3cba698486e514727c79a"></a>

Last update of the current friend information.

<br>
#### `protected FString `[`Notes`](#classURH__RHFriendAndPlatformFriend_1a66cefbb47f0cad7d59bd18df980022c5) <a id="classURH__RHFriendAndPlatformFriend_1a66cefbb47f0cad7d59bd18df980022c5"></a>

Notes set for the friend.

<br>
#### `protected TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > `[`PlatformFriends`](#classURH__RHFriendAndPlatformFriend_1a2a7cea15c536d6f1dc0e372bd75a7dc3) <a id="classURH__RHFriendAndPlatformFriend_1a2a7cea15c536d6f1dc0e372bd75a7dc3"></a>

Array of platforms the player has linked to their account.

<br>
#### `protected FString `[`Etag`](#classURH__RHFriendAndPlatformFriend_1ab4bca6808ed022b3d72edf548745c04c) <a id="classURH__RHFriendAndPlatformFriend_1ab4bca6808ed022b3d72edf548745c04c"></a>

ETag of last friend update response.

<br>
#### `protected inline virtual void `[`OnPresenceUpdated`](#classURH__RHFriendAndPlatformFriend_1a42b31a6399415e3b0cf5e272a07a0488)`(`[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * PlayerPresence)` <a id="classURH__RHFriendAndPlatformFriend_1a42b31a6399415e3b0cf5e272a07a0488"></a>

Passes presence updates of the player on through internal delgates.

#### Parameters
* `PlayerPresence` The players precence information.

<br>
#### `protected inline virtual void `[`ClearRHFriendStatus`](#classURH__RHFriendAndPlatformFriend_1a192552b9a61592ae648c4e50afafeca0)`()` <a id="classURH__RHFriendAndPlatformFriend_1a192552b9a61592ae648c4e50afafeca0"></a>

Clears the cached friendship status for the player.

<br>
#### `protected inline virtual void `[`ClearPlatformFriendStatus`](#classURH__RHFriendAndPlatformFriend_1a2868052b24a6cf21af2ba2ce0aab026b)`()` <a id="classURH__RHFriendAndPlatformFriend_1a2868052b24a6cf21af2ba2ce0aab026b"></a>

Clears cached data for the platform friends for this player.

<br>
## class `URH_FriendSubsystem` <a id="classURH__FriendSubsystem"></a>

```
class URH_FriendSubsystem
  : public URH_LocalPlayerSubsystemPlugin
```

Friends Subsystem for handling a users relationships with other players.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FriendListUpdatedDelegate `[`FriendListUpdatedDelegate`](#classURH__FriendSubsystem_1acd1a9b1028bc948a2e6840ecaa1be954) | Delegate that fires whenever the friends list is updated.
`public FriendUpdatedDelegate `[`FriendUpdatedDelegate`](#classURH__FriendSubsystem_1a127bc31a3a29d95cf302a9ad3f0b3ce1) | Delegate that fires whenever a friend is updated.
`public FriendUpdateErrorDelegate `[`FriendUpdateErrorDelegate`](#classURH__FriendSubsystem_1a00db0d828b0d02c7068303df42a6ce64) | Delegate that fires whenever a friend API call fails.
`public BlockedListUpdatedDelegate `[`BlockedListUpdatedDelegate`](#classURH__FriendSubsystem_1a5ad9d9bfb7f39282cd3331dc05a2540e) | Delegate that fires whenever blocked players list is updated.
`public BlockedPlayerUpdatedDelegate `[`BlockedPlayerUpdatedDelegate`](#classURH__FriendSubsystem_1a3d0c4c6943da0c06eb904c02bc78b006) | Delegate that fires whenever a blocked player is updated.
`public BlockedPlayerUpdateErrorDelegate `[`BlockedPlayerUpdateErrorDelegate`](#classURH__FriendSubsystem_1a21daf6b89af4b9eeb1c01fad836193dc) | Delegate that fires whenever blocked player API call fails.
`public virtual void `[`Initialize`](#classURH__FriendSubsystem_1aa7d2fe1ad8d807af77c3432cecd68882)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__FriendSubsystem_1a22ad8844b9c65a3ae173d4df9dc2a6a3)`()` | Safely tears down the subsystem.
`public bool `[`FetchFriendsList`](#classURH__FriendSubsystem_1ad108bdc0210e4b784aa3ef8be7460cb2)`(FRH_GenericFriendBlock Delegate)` | Calls the Friends API to get the players friends list.
`public inline bool `[`BLUEPRINT_FetchFriendsList`](#classURH__FriendSubsystem_1ae106f27a44bb1f4845c431889b0fb88c)`(const FRH_GenericFriendDynamicDelegate & Delegate)` | 
`public bool `[`FetchFriend`](#classURH__FriendSubsystem_1ae9289c902523419817971ef323ac43c5)`(const FGuid & PlayerUUID,FRH_GenericFriendWithUuidBlock Delegate)` | Calls the Friends API to get data for a specific friend.
`public inline bool `[`BLUEPRINT_FetchFriend`](#classURH__FriendSubsystem_1ace3b5156215342fde35c681c7222693b)`(UPARAM(ref) const FGuid & PlayerUUID,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` | 
`public bool `[`AddFriend`](#classURH__FriendSubsystem_1a2254ae82b2b774b8cced137e74459878)`(const FGuid & PlayerUuid,FRH_AddFriendBlock Delegate)` | Calls the Friends API to create a new friendship relationship with another player.
`public inline bool `[`BLUEPRINT_AddFriend`](#classURH__FriendSubsystem_1a0981e250c763c837b221fa679ae9b711)`(UPARAM(ref) const FGuid & PlayerUuid,const FRH_AddFriendDynamicDelegate & Delegate)` | 
`public bool `[`RemoveFriend`](#classURH__FriendSubsystem_1a445425c3b7469be0fd275c2ef580cd7b)`(const FGuid & PlayerUuid,FRH_GenericFriendWithUuidBlock Delegate)` | Calls the Friends API to remove a friend relationship with another player.
`public inline bool `[`BLUEPRINT_RemoveFriend`](#classURH__FriendSubsystem_1a3f6078048c0446d85d60437b02e5b7c3)`(UPARAM(ref) const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` | 
`public bool `[`AddNotes`](#classURH__FriendSubsystem_1aff504b0b3e4f447beb62d90b9769a2c5)`(const FGuid & PlayerUuid,const FString & Notes,FRH_AddNotesBlock Delegate)` | Calls the Friends API to set/modify personal notes for another player.
`public inline bool `[`BLUEPRINT_AddNotes`](#classURH__FriendSubsystem_1aff6e4e3d7280fe2da1c43b5450393035)`(UPARAM(ref) const FGuid & PlayerUuid,UPARAM(ref) const FString & Notes,const FRH_AddNotesDynamicDelegate & Delegate)` | 
`public bool `[`FetchBlockedList`](#classURH__FriendSubsystem_1ae254f8687dd546e8c15efc26fafe3ac9)`(FRH_GenericFriendBlock Delegate)` | Calls the Friends API to get the list of players you have blocked.
`public inline bool `[`BLUEPRINT_FetchBlockedList`](#classURH__FriendSubsystem_1a586d0224a947d926c86b7ee4383b7aad)`(const FRH_GenericFriendDynamicDelegate & Delegate)` | 
`public bool `[`FetchBlockedPlayer`](#classURH__FriendSubsystem_1aa59a1d382887eee6858eb1089ddbbe68)`(const FGuid & PlayerUuid,FRH_GenericFriendWithUuidBlock Delegate)` | Calls the Friends API to get data for a specific blocked player.
`public inline bool `[`BLUEPRINT_FetchBlockedPlayer`](#classURH__FriendSubsystem_1a5e7db1366da35064c80bafb05167848a)`(UPARAM(ref) const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` | 
`public bool `[`BlockPlayer`](#classURH__FriendSubsystem_1a1d9c0ac64a724af24dae15d2334e24d7)`(const FGuid & PlayerUuid,FRH_GenericFriendWithUuidBlock Delegate)` | Calls the Friends API to create a new block relationship with another player.
`public inline bool `[`BLUEPRINT_BlockPlayer`](#classURH__FriendSubsystem_1a6c07284e45881126b8975b3d92f02900)`(UPARAM(ref) const FGuid & PlayerUUID,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` | 
`public bool `[`UnblockPlayer`](#classURH__FriendSubsystem_1a1440f62d4319c184d6ecfcafca3dd43d)`(const FGuid & PlayerUuid,FRH_GenericFriendWithUuidBlock Delegate)` | Calls the Friends API to remove a block relationship with another player.
`public inline bool `[`BLUEPRINT_UnblockPlayer`](#classURH__FriendSubsystem_1acb1949519c95d83ddc15ca9885e5423f)`(UPARAM(ref) const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` | 
`public void `[`UpdateRecentPlayerForOSS`](#classURH__FriendSubsystem_1ae3fda9069196b472db23598bc8bfbcee)`(const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FGuid & PlayerUuid)` | Updates the platform OSS with a player you have recently played with.
`public void `[`OSSReadFriendsList`](#classURH__FriendSubsystem_1a1d67c41ac34ab52852236256994d545d)`(const FString & ListName)` | Triggers the OSS call to get platform friends.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetOrCreateFriend`](#classURH__FriendSubsystem_1afdd65b2cb3b5c2dcfb41af247426d39e)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * PlayerInfo)` | Gets if the specified players friend wrapper, or creates one if it doesn't exist yet.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByUuid`](#classURH__FriendSubsystem_1a4b30486cb9175913ba77702f9148b3b6)`(const FGuid & PlayerUuid) const` | Gets the cached friend wrapper for the specified player.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByPlayerInfo`](#classURH__FriendSubsystem_1a0e8bfdf4e3dbff614e3931ec8e7fec30)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * PlayerInfo) const` | Gets the cached friend wrapper for the specified player.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByPlatformId`](#classURH__FriendSubsystem_1af97f126a67a75dd74416eadf099f4968)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformPlayerId) const` | Gets the cached friend wrapper for the specified player.
`public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByUuidOrPlatformId`](#classURH__FriendSubsystem_1af887af8839847c43703f0883912f9030)`(const FGuid & PlayerUuid,const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformPlayerId) const` | Gets the cached friend wrapper for the specified player.
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
`protected FString `[`FriendsETag`](#classURH__FriendSubsystem_1ad31945d455f553d20b46e14884b0058c) | ETag of last Get Friends List call response.
`protected FString `[`BlockedPlayersETag`](#classURH__FriendSubsystem_1a4c140df2e72bb201c437ec7cadd5104d) | ETag of last Get Blocked Players call response.
`protected bool `[`FriendsCached`](#classURH__FriendSubsystem_1a34673d7332ff081ffbc0e67d11fad742) | Tracks if friends are currently cached.
`protected FRH_AutoPollerPtr `[`FriendsListPoller`](#classURH__FriendSubsystem_1ae4e279605cefbf9699c08c1f9a56a190) | Poller for getting friends list.
`protected FRH_AutoPollerPtr `[`BlockedListPoller`](#classURH__FriendSubsystem_1a702f1614a6893998c654fd7ee5f340b0) | Poller for getting blocked players list.
`protected FDelegateHandle `[`OnOSSPresenceReceivedHandle`](#classURH__FriendSubsystem_1af4dee5d7db87903fc77a81214efdda36) | Delegate to be fired when online subsystem presence is received.
`protected virtual void `[`OnUserChanged`](#classURH__FriendSubsystem_1af5610e7a103a6e3fa10cbddf90f5f37c)`()` | Callback that occurs whenever the local player this subsystem is associated with changes.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__FriendSubsystem_1a329dc919c010125a81f508eaf83f3d74)`()` | Initializes the subsystem with defaults for its cached data.
`protected virtual bool `[`SetDefaultParamsForGetFriendRequest`](#classURH__FriendSubsystem_1ac4a8491381ccb8bcc26a031048d628b9)`(GetFriendRelationshipType::Request & Request) const` | Fills our a Get Friend request.
`protected virtual void `[`PostReloadConfig`](#classURH__FriendSubsystem_1ad94ca4a65eeae28cd4fde373c4035d8d)`(class FProperty * PropertyThatWasLoaded)` | Called from ReloadConfig after the object has reloaded its configuration data.
`protected inline virtual void `[`OnPresenceUpdated`](#classURH__FriendSubsystem_1aaaa983d7ebd475108c9664d2bc29bff7)`(`[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * PlayerPresence)` | Helper function to push out presence updates on delegates on this system.
`protected virtual void `[`OnFetchFriendsListResponse`](#classURH__FriendSubsystem_1adbb6fe73ff7a12d1938a5cb43fb62a36)`(const GetFriendsListType::Response & Resp,FRH_GenericFriendBlock Delegate)` | Handles the response to a Fetch Friend List call.
`protected virtual void `[`OnFetchFriendResponse`](#classURH__FriendSubsystem_1ae6c422ae8346e2fd28261c8c7531a682)`(const GetFriendRelationshipType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate)` | Handles the response to a Fetch Friend call.
`protected virtual void `[`OnAddFriendResponse`](#classURH__FriendSubsystem_1afb780d7a524e0f13b67255870106d306)`(const AddFriendType::Response & Resp,FRH_AddFriendBlock Delegate,AddFriendType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Add Friend call.
`protected virtual void `[`OnRemoveFriendResponse`](#classURH__FriendSubsystem_1aff33f7420d6caa3930e816b67e5cbb10)`(const DeleteFriendType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,DeleteFriendType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Remove Friend call.
`protected virtual void `[`OnAddNotesResponse`](#classURH__FriendSubsystem_1aa257682299d65ef7f95ce1189a23610d)`(const AddNotesType::Response & Resp,FRH_AddNotesBlock Delegate,AddNotesType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Add Friend Notes call.
`protected virtual void `[`OnFetchBlockedListResponse`](#classURH__FriendSubsystem_1ad59e61fcf5c707c728f1482c4ac91ae2)`(const GetBlockedListType::Response & Resp,FRH_GenericFriendBlock Delegate)` | Handles the response to a Get Blocked List call.
`protected virtual void `[`OnFetchBlockedPlayerResponse`](#classURH__FriendSubsystem_1a5aed953608f2ee07f485c8507badaef1)`(const GetBlockedType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` | Handles the response to a Get Blocked Player call.
`protected virtual void `[`OnBlockPlayerResponse`](#classURH__FriendSubsystem_1a6b52dd3e78e9e3336e492668277b5226)`(const BlockType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` | Handles the response to a Block Player call.
`protected virtual void `[`OnUnblockPlayerResponse`](#classURH__FriendSubsystem_1aa4b44d94306aa9b37a4e562ef050cdf6)`(const UnblockType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` | Handles the response to a Unblock Player call.
`protected virtual void `[`OnFetchFriendForAdd`](#classURH__FriendSubsystem_1af6cdb4f4e37d9a30ae6a95bc39e6b4c8)`(const GetFriendRelationshipType::Response & Resp,FRH_AddFriendBlock Delegate,AddFriendType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Fetch Friend For Add call.
`protected virtual void `[`OnFetchFriendForAddNote`](#classURH__FriendSubsystem_1a78e61abb415147a1716565bad8b750bc)`(const GetFriendRelationshipType::Response & Resp,FRH_AddNotesBlock Delegate,AddNotesType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Fetch Friend For Add Note call.
`protected virtual void `[`OnFetchFriendForRemove`](#classURH__FriendSubsystem_1a449dfd7d35ac5d40579bfebfaded8814)`(const GetFriendRelationshipType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,DeleteFriendType::Request Request,int32 RetryEtagFailureCount)` | Handles the response to a Fetch Friend For Remove call.
`protected void `[`AcknowledgeFriendUpdate`](#classURH__FriendSubsystem_1a245e9b2d92925e7d54c9d84a368c85c7)`(const FGuid & PlayerUuid) const` | Updates the Previous friendship status to the current friendship status for a given friend.
`protected void `[`UpdatePlatformFriends`](#classURH__FriendSubsystem_1ab69b65c10ec179b8611677163a2247c2)`(TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > & NewFriends)` | Updates the cached Platforms friends with the new set of friends data.
`protected void `[`RemoveAllFriendsWithNoRelationships`](#classURH__FriendSubsystem_1a8e2baea2c4b27a854894385976495cb2)`(TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > & OutArray)` | Removes all friends from the cached data that have no relationship to the player the subsystem is for.
`protected void `[`PollFriendsList`](#classURH__FriendSubsystem_1ac09b6bec4ef50e2e2c7bc9daee98cc9b)`(const FRH_PollCompleteFunc & Delegate)` | Executes a poll of the players friends list.
`protected void `[`PollBlockedPlayers`](#classURH__FriendSubsystem_1a3eb26a11fae901e018b1a1863c576f3b)`(const FRH_PollCompleteFunc & Delegate)` | Executes a poll of the players blocked list.
`protected FName `[`ExtractErrorCodeFromResponse`](#classURH__FriendSubsystem_1a132d8e0a874d1f686f085ab4b3a6e68f)`(const FHttpResponsePtr & Response) const` | Gets the error code response name from a http request.
`protected `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetRH_PlayerInfoSubsystem`](#classURH__FriendSubsystem_1ad113da46527b010c8f09a5419c5fa425)`() const` | Helper function to get the Player Info Subsystem that owns this.
`protected virtual void `[`OnReadOSSFriendsComplete`](#classURH__FriendSubsystem_1a28e2e549632ea1cde658e352a74e5e71)`(int32 LocalUserNum,bool bWasSuccessful,const FString & ListName,const FString & ErrorStr)` | Handles the response from the online subsystem call to get friends.
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

#### Members

#### `public FriendListUpdatedDelegate `[`FriendListUpdatedDelegate`](#classURH__FriendSubsystem_1acd1a9b1028bc948a2e6840ecaa1be954) <a id="classURH__FriendSubsystem_1acd1a9b1028bc948a2e6840ecaa1be954"></a>

Delegate that fires whenever the friends list is updated.

<br>
#### `public FriendUpdatedDelegate `[`FriendUpdatedDelegate`](#classURH__FriendSubsystem_1a127bc31a3a29d95cf302a9ad3f0b3ce1) <a id="classURH__FriendSubsystem_1a127bc31a3a29d95cf302a9ad3f0b3ce1"></a>

Delegate that fires whenever a friend is updated.

<br>
#### `public FriendUpdateErrorDelegate `[`FriendUpdateErrorDelegate`](#classURH__FriendSubsystem_1a00db0d828b0d02c7068303df42a6ce64) <a id="classURH__FriendSubsystem_1a00db0d828b0d02c7068303df42a6ce64"></a>

Delegate that fires whenever a friend API call fails.

<br>
#### `public BlockedListUpdatedDelegate `[`BlockedListUpdatedDelegate`](#classURH__FriendSubsystem_1a5ad9d9bfb7f39282cd3331dc05a2540e) <a id="classURH__FriendSubsystem_1a5ad9d9bfb7f39282cd3331dc05a2540e"></a>

Delegate that fires whenever blocked players list is updated.

<br>
#### `public BlockedPlayerUpdatedDelegate `[`BlockedPlayerUpdatedDelegate`](#classURH__FriendSubsystem_1a3d0c4c6943da0c06eb904c02bc78b006) <a id="classURH__FriendSubsystem_1a3d0c4c6943da0c06eb904c02bc78b006"></a>

Delegate that fires whenever a blocked player is updated.

<br>
#### `public BlockedPlayerUpdateErrorDelegate `[`BlockedPlayerUpdateErrorDelegate`](#classURH__FriendSubsystem_1a21daf6b89af4b9eeb1c01fad836193dc) <a id="classURH__FriendSubsystem_1a21daf6b89af4b9eeb1c01fad836193dc"></a>

Delegate that fires whenever blocked player API call fails.

<br>
#### `public virtual void `[`Initialize`](#classURH__FriendSubsystem_1aa7d2fe1ad8d807af77c3432cecd68882)`()` <a id="classURH__FriendSubsystem_1aa7d2fe1ad8d807af77c3432cecd68882"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__FriendSubsystem_1a22ad8844b9c65a3ae173d4df9dc2a6a3)`()` <a id="classURH__FriendSubsystem_1a22ad8844b9c65a3ae173d4df9dc2a6a3"></a>

Safely tears down the subsystem.

<br>
#### `public bool `[`FetchFriendsList`](#classURH__FriendSubsystem_1ad108bdc0210e4b784aa3ef8be7460cb2)`(FRH_GenericFriendBlock Delegate)` <a id="classURH__FriendSubsystem_1ad108bdc0210e4b784aa3ef8be7460cb2"></a>

Calls the Friends API to get the players friends list.

#### Parameters
* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_FetchFriendsList`](#classURH__FriendSubsystem_1ae106f27a44bb1f4845c431889b0fb88c)`(const FRH_GenericFriendDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1ae106f27a44bb1f4845c431889b0fb88c"></a>

<br>
#### `public bool `[`FetchFriend`](#classURH__FriendSubsystem_1ae9289c902523419817971ef323ac43c5)`(const FGuid & PlayerUUID,FRH_GenericFriendWithUuidBlock Delegate)` <a id="classURH__FriendSubsystem_1ae9289c902523419817971ef323ac43c5"></a>

Calls the Friends API to get data for a specific friend.

#### Parameters
* `PlayerUUID` The unique player id of the friend to get. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_FetchFriend`](#classURH__FriendSubsystem_1ace3b5156215342fde35c681c7222693b)`(UPARAM(ref) const FGuid & PlayerUUID,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1ace3b5156215342fde35c681c7222693b"></a>

<br>
#### `public bool `[`AddFriend`](#classURH__FriendSubsystem_1a2254ae82b2b774b8cced137e74459878)`(const FGuid & PlayerUuid,FRH_AddFriendBlock Delegate)` <a id="classURH__FriendSubsystem_1a2254ae82b2b774b8cced137e74459878"></a>

Calls the Friends API to create a new friendship relationship with another player.

#### Parameters
* `PlayerUUID` The unique player id of the player to add. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_AddFriend`](#classURH__FriendSubsystem_1a0981e250c763c837b221fa679ae9b711)`(UPARAM(ref) const FGuid & PlayerUuid,const FRH_AddFriendDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1a0981e250c763c837b221fa679ae9b711"></a>

<br>
#### `public bool `[`RemoveFriend`](#classURH__FriendSubsystem_1a445425c3b7469be0fd275c2ef580cd7b)`(const FGuid & PlayerUuid,FRH_GenericFriendWithUuidBlock Delegate)` <a id="classURH__FriendSubsystem_1a445425c3b7469be0fd275c2ef580cd7b"></a>

Calls the Friends API to remove a friend relationship with another player.

#### Parameters
* `PlayerUUID` The unique player id of the friend to remove. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_RemoveFriend`](#classURH__FriendSubsystem_1a3f6078048c0446d85d60437b02e5b7c3)`(UPARAM(ref) const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1a3f6078048c0446d85d60437b02e5b7c3"></a>

<br>
#### `public bool `[`AddNotes`](#classURH__FriendSubsystem_1aff504b0b3e4f447beb62d90b9769a2c5)`(const FGuid & PlayerUuid,const FString & Notes,FRH_AddNotesBlock Delegate)` <a id="classURH__FriendSubsystem_1aff504b0b3e4f447beb62d90b9769a2c5"></a>

Calls the Friends API to set/modify personal notes for another player.

#### Parameters
* `PlayerUUID` The unique player id of the friend to remove. 

* `Notes` The notes to set for the player. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_AddNotes`](#classURH__FriendSubsystem_1aff6e4e3d7280fe2da1c43b5450393035)`(UPARAM(ref) const FGuid & PlayerUuid,UPARAM(ref) const FString & Notes,const FRH_AddNotesDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1aff6e4e3d7280fe2da1c43b5450393035"></a>

<br>
#### `public bool `[`FetchBlockedList`](#classURH__FriendSubsystem_1ae254f8687dd546e8c15efc26fafe3ac9)`(FRH_GenericFriendBlock Delegate)` <a id="classURH__FriendSubsystem_1ae254f8687dd546e8c15efc26fafe3ac9"></a>

Calls the Friends API to get the list of players you have blocked.

#### Parameters
* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_FetchBlockedList`](#classURH__FriendSubsystem_1a586d0224a947d926c86b7ee4383b7aad)`(const FRH_GenericFriendDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1a586d0224a947d926c86b7ee4383b7aad"></a>

<br>
#### `public bool `[`FetchBlockedPlayer`](#classURH__FriendSubsystem_1aa59a1d382887eee6858eb1089ddbbe68)`(const FGuid & PlayerUuid,FRH_GenericFriendWithUuidBlock Delegate)` <a id="classURH__FriendSubsystem_1aa59a1d382887eee6858eb1089ddbbe68"></a>

Calls the Friends API to get data for a specific blocked player.

#### Parameters
* `PlayerUUID` The unique player id of the blocked player to get. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_FetchBlockedPlayer`](#classURH__FriendSubsystem_1a5e7db1366da35064c80bafb05167848a)`(UPARAM(ref) const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1a5e7db1366da35064c80bafb05167848a"></a>

<br>
#### `public bool `[`BlockPlayer`](#classURH__FriendSubsystem_1a1d9c0ac64a724af24dae15d2334e24d7)`(const FGuid & PlayerUuid,FRH_GenericFriendWithUuidBlock Delegate)` <a id="classURH__FriendSubsystem_1a1d9c0ac64a724af24dae15d2334e24d7"></a>

Calls the Friends API to create a new block relationship with another player.

#### Parameters
* `PlayerUUID` The unique player id of the player to block. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_BlockPlayer`](#classURH__FriendSubsystem_1a6c07284e45881126b8975b3d92f02900)`(UPARAM(ref) const FGuid & PlayerUUID,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1a6c07284e45881126b8975b3d92f02900"></a>

<br>
#### `public bool `[`UnblockPlayer`](#classURH__FriendSubsystem_1a1440f62d4319c184d6ecfcafca3dd43d)`(const FGuid & PlayerUuid,FRH_GenericFriendWithUuidBlock Delegate)` <a id="classURH__FriendSubsystem_1a1440f62d4319c184d6ecfcafca3dd43d"></a>

Calls the Friends API to remove a block relationship with another player.

#### Parameters
* `PlayerUUID` The unique player id of the blocked player to unblock. 

* `Delegate` Callback delegate for when the call completes. 

#### Returns
If true, the call was executed.

<br>
#### `public inline bool `[`BLUEPRINT_UnblockPlayer`](#classURH__FriendSubsystem_1acb1949519c95d83ddc15ca9885e5423f)`(UPARAM(ref) const FGuid & PlayerUuid,const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)` <a id="classURH__FriendSubsystem_1acb1949519c95d83ddc15ca9885e5423f"></a>

<br>
#### `public void `[`UpdateRecentPlayerForOSS`](#classURH__FriendSubsystem_1ae3fda9069196b472db23598bc8bfbcee)`(const `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FGuid & PlayerUuid)` <a id="classURH__FriendSubsystem_1ae3fda9069196b472db23598bc8bfbcee"></a>

Updates the platform OSS with a player you have recently played with.

#### Parameters
* `LocalPlayerSubsystem` The local player subsystem to obtain the unique net id from. 

* `PlayerUuid` The recently player with players Unique Player Id.

<br>
#### `public void `[`OSSReadFriendsList`](#classURH__FriendSubsystem_1a1d67c41ac34ab52852236256994d545d)`(const FString & ListName)` <a id="classURH__FriendSubsystem_1a1d67c41ac34ab52852236256994d545d"></a>

Triggers the OSS call to get platform friends.

<br>
#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetOrCreateFriend`](#classURH__FriendSubsystem_1afdd65b2cb3b5c2dcfb41af247426d39e)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * PlayerInfo)` <a id="classURH__FriendSubsystem_1afdd65b2cb3b5c2dcfb41af247426d39e"></a>

Gets if the specified players friend wrapper, or creates one if it doesn't exist yet.

#### Parameters
* `PlayerInfo` The player info to get the friend wrapper for. 

#### Returns
The friend wrapper for the specified player.

<br>
#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByUuid`](#classURH__FriendSubsystem_1a4b30486cb9175913ba77702f9148b3b6)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a4b30486cb9175913ba77702f9148b3b6"></a>

Gets the cached friend wrapper for the specified player.

#### Parameters
* `PlayerUuid` The unique player Id for the requested friend wrapper.

<br>
#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByPlayerInfo`](#classURH__FriendSubsystem_1a0e8bfdf4e3dbff614e3931ec8e7fec30)`(`[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * PlayerInfo) const` <a id="classURH__FriendSubsystem_1a0e8bfdf4e3dbff614e3931ec8e7fec30"></a>

Gets the cached friend wrapper for the specified player.

#### Parameters
* `PlayerInfo` The player info to get the friend wrapper for.

<br>
#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByPlatformId`](#classURH__FriendSubsystem_1af97f126a67a75dd74416eadf099f4968)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformPlayerId) const` <a id="classURH__FriendSubsystem_1af97f126a67a75dd74416eadf099f4968"></a>

Gets the cached friend wrapper for the specified player.

#### Parameters
* `PlatformPlayerId` The player platform id to get the friend wrapper for.

<br>
#### `public `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * `[`GetFriendByUuidOrPlatformId`](#classURH__FriendSubsystem_1af887af8839847c43703f0883912f9030)`(const FGuid & PlayerUuid,const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlatformPlayerId) const` <a id="classURH__FriendSubsystem_1af887af8839847c43703f0883912f9030"></a>

Gets the cached friend wrapper for the specified player.

#### Parameters
* `PlayerUuid` The unique player Id for the requested friend wrapper. 

* `PlatformPlayerId` The player platform id to get the friend wrapper for.

<br>
#### `public inline bool `[`IsPlayerBlocked`](#classURH__FriendSubsystem_1a796323262a6d65dbd3871600ec67333a)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a796323262a6d65dbd3871600ec67333a"></a>

Gets if the specified player is blocked via platform or Rally Here.

#### Parameters
* `PlayerUuid` The unique player id of the player to check.

<br>
#### `public inline bool `[`IsPlayerPlatformBlocked`](#classURH__FriendSubsystem_1a5daea0768eab9487eb4d07b6eec7bcc0)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a5daea0768eab9487eb4d07b6eec7bcc0"></a>

Gets if the specified player is blocked via platform.

#### Parameters
* `PlayerUuid` The unique player id of the player to check.

<br>
#### `public inline bool `[`IsPlayerRhBlocked`](#classURH__FriendSubsystem_1a7729188985902b5d94f5f0e6f4c5a99a)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a7729188985902b5d94f5f0e6f4c5a99a"></a>

Gets if the specified player is blocked via Rally Here.

#### Parameters
* `PlayerUuid` The unique player id of the player to check.

<br>
#### `public void `[`StartFriendsRefreshTimer`](#classURH__FriendSubsystem_1a712bf02500dd9805476827baac779bf9)`()` <a id="classURH__FriendSubsystem_1a712bf02500dd9805476827baac779bf9"></a>

Starts the polling for Rally Here friends.

<br>
#### `public void `[`StopFriendsRefreshTimer`](#classURH__FriendSubsystem_1a498526405f2fafda302f2bebf8d19211)`()` <a id="classURH__FriendSubsystem_1a498526405f2fafda302f2bebf8d19211"></a>

Stops the polling for Rally Here friends.

<br>
#### `public void `[`StartBlockedRefreshTimer`](#classURH__FriendSubsystem_1acaa7395b257ae7cd83b95613d7782740)`()` <a id="classURH__FriendSubsystem_1acaa7395b257ae7cd83b95613d7782740"></a>

Starts the polling for blocked players.

<br>
#### `public void `[`StopBlockedRefreshTimer`](#classURH__FriendSubsystem_1a99e71815f47abc452ab5e0961e660d8d)`()` <a id="classURH__FriendSubsystem_1a99e71815f47abc452ab5e0961e660d8d"></a>

Stops the polling for blocked players.

<br>
#### `public void `[`ClearBlockedCache`](#classURH__FriendSubsystem_1a725db30767e3f7c8ff1a8c7bb8622d30)`()` <a id="classURH__FriendSubsystem_1a725db30767e3f7c8ff1a8c7bb8622d30"></a>

Clears the cache of blocked players.

<br>
#### `public void `[`ClearRHFriendCache`](#classURH__FriendSubsystem_1aac6111bfbf9164250b79c60ee7377353)`()` <a id="classURH__FriendSubsystem_1aac6111bfbf9164250b79c60ee7377353"></a>

Clears the cache of Rally Here friends.

<br>
#### `public inline const TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > & `[`GetFriends`](#classURH__FriendSubsystem_1a159b2f037e79aa087404d2834a4e89a5)`() const` <a id="classURH__FriendSubsystem_1a159b2f037e79aa087404d2834a4e89a5"></a>

Gets an array of your friends.

<br>
#### `public inline const TArray< FGuid > & `[`GetBlocked`](#classURH__FriendSubsystem_1a794939965ac249a8a073584b4bb61e29)`() const` <a id="classURH__FriendSubsystem_1a794939965ac249a8a073584b4bb61e29"></a>

Gets an array of blocked player ids.

<br>
#### `public inline bool `[`HasFriendsCached`](#classURH__FriendSubsystem_1a73865b1583b1952540939321fd19fbda)`() const` <a id="classURH__FriendSubsystem_1a73865b1583b1952540939321fd19fbda"></a>

Gets if the subsystem has cached friend data.

<br>
#### `protected TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > `[`Friends`](#classURH__FriendSubsystem_1a5ba094d058031c840feeb5ed2271bac7) <a id="classURH__FriendSubsystem_1a5ba094d058031c840feeb5ed2271bac7"></a>

Cached array of all friends.

<br>
#### `protected TArray< FGuid > `[`BlockedPlayersUUIDs`](#classURH__FriendSubsystem_1a8cea9f39f35a8c7c8249105f8cdb8c3c) <a id="classURH__FriendSubsystem_1a8cea9f39f35a8c7c8249105f8cdb8c3c"></a>

Array of blocked player ids.

<br>
#### `protected FString `[`FriendsETag`](#classURH__FriendSubsystem_1ad31945d455f553d20b46e14884b0058c) <a id="classURH__FriendSubsystem_1ad31945d455f553d20b46e14884b0058c"></a>

ETag of last Get Friends List call response.

<br>
#### `protected FString `[`BlockedPlayersETag`](#classURH__FriendSubsystem_1a4c140df2e72bb201c437ec7cadd5104d) <a id="classURH__FriendSubsystem_1a4c140df2e72bb201c437ec7cadd5104d"></a>

ETag of last Get Blocked Players call response.

<br>
#### `protected bool `[`FriendsCached`](#classURH__FriendSubsystem_1a34673d7332ff081ffbc0e67d11fad742) <a id="classURH__FriendSubsystem_1a34673d7332ff081ffbc0e67d11fad742"></a>

Tracks if friends are currently cached.

<br>
#### `protected FRH_AutoPollerPtr `[`FriendsListPoller`](#classURH__FriendSubsystem_1ae4e279605cefbf9699c08c1f9a56a190) <a id="classURH__FriendSubsystem_1ae4e279605cefbf9699c08c1f9a56a190"></a>

Poller for getting friends list.

<br>
#### `protected FRH_AutoPollerPtr `[`BlockedListPoller`](#classURH__FriendSubsystem_1a702f1614a6893998c654fd7ee5f340b0) <a id="classURH__FriendSubsystem_1a702f1614a6893998c654fd7ee5f340b0"></a>

Poller for getting blocked players list.

<br>
#### `protected FDelegateHandle `[`OnOSSPresenceReceivedHandle`](#classURH__FriendSubsystem_1af4dee5d7db87903fc77a81214efdda36) <a id="classURH__FriendSubsystem_1af4dee5d7db87903fc77a81214efdda36"></a>

Delegate to be fired when online subsystem presence is received.

<br>
#### `protected virtual void `[`OnUserChanged`](#classURH__FriendSubsystem_1af5610e7a103a6e3fa10cbddf90f5f37c)`()` <a id="classURH__FriendSubsystem_1af5610e7a103a6e3fa10cbddf90f5f37c"></a>

Callback that occurs whenever the local player this subsystem is associated with changes.

<br>
#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__FriendSubsystem_1a329dc919c010125a81f508eaf83f3d74)`()` <a id="classURH__FriendSubsystem_1a329dc919c010125a81f508eaf83f3d74"></a>

Initializes the subsystem with defaults for its cached data.

<br>
#### `protected virtual bool `[`SetDefaultParamsForGetFriendRequest`](#classURH__FriendSubsystem_1ac4a8491381ccb8bcc26a031048d628b9)`(GetFriendRelationshipType::Request & Request) const` <a id="classURH__FriendSubsystem_1ac4a8491381ccb8bcc26a031048d628b9"></a>

Fills our a Get Friend request.

#### Parameters
* `Request` The request with the default params filled out. 

#### Returns
True, if the request was filled out successfully.

<br>
#### `protected virtual void `[`PostReloadConfig`](#classURH__FriendSubsystem_1ad94ca4a65eeae28cd4fde373c4035d8d)`(class FProperty * PropertyThatWasLoaded)` <a id="classURH__FriendSubsystem_1ad94ca4a65eeae28cd4fde373c4035d8d"></a>

Called from ReloadConfig after the object has reloaded its configuration data.

#### Parameters
* `PropertyThatWasLoaded` The property loaded.

<br>
#### `protected inline virtual void `[`OnPresenceUpdated`](#classURH__FriendSubsystem_1aaaa983d7ebd475108c9664d2bc29bff7)`(`[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * PlayerPresence)` <a id="classURH__FriendSubsystem_1aaaa983d7ebd475108c9664d2bc29bff7"></a>

Helper function to push out presence updates on delegates on this system.

#### Parameters
* `PlayerPresence` The Player Presence updated.

<br>
#### `protected virtual void `[`OnFetchFriendsListResponse`](#classURH__FriendSubsystem_1adbb6fe73ff7a12d1938a5cb43fb62a36)`(const GetFriendsListType::Response & Resp,FRH_GenericFriendBlock Delegate)` <a id="classURH__FriendSubsystem_1adbb6fe73ff7a12d1938a5cb43fb62a36"></a>

Handles the response to a Fetch Friend List call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnFetchFriendResponse`](#classURH__FriendSubsystem_1ae6c422ae8346e2fd28261c8c7531a682)`(const GetFriendRelationshipType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate)` <a id="classURH__FriendSubsystem_1ae6c422ae8346e2fd28261c8c7531a682"></a>

Handles the response to a Fetch Friend call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnAddFriendResponse`](#classURH__FriendSubsystem_1afb780d7a524e0f13b67255870106d306)`(const AddFriendType::Response & Resp,FRH_AddFriendBlock Delegate,AddFriendType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1afb780d7a524e0f13b67255870106d306"></a>

Handles the response to a Add Friend call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

<br>
#### `protected virtual void `[`OnRemoveFriendResponse`](#classURH__FriendSubsystem_1aff33f7420d6caa3930e816b67e5cbb10)`(const DeleteFriendType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,DeleteFriendType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1aff33f7420d6caa3930e816b67e5cbb10"></a>

Handles the response to a Remove Friend call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the remove friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

<br>
#### `protected virtual void `[`OnAddNotesResponse`](#classURH__FriendSubsystem_1aa257682299d65ef7f95ce1189a23610d)`(const AddNotesType::Response & Resp,FRH_AddNotesBlock Delegate,AddNotesType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1aa257682299d65ef7f95ce1189a23610d"></a>

Handles the response to a Add Friend Notes call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

<br>
#### `protected virtual void `[`OnFetchBlockedListResponse`](#classURH__FriendSubsystem_1ad59e61fcf5c707c728f1482c4ac91ae2)`(const GetBlockedListType::Response & Resp,FRH_GenericFriendBlock Delegate)` <a id="classURH__FriendSubsystem_1ad59e61fcf5c707c728f1482c4ac91ae2"></a>

Handles the response to a Get Blocked List call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnFetchBlockedPlayerResponse`](#classURH__FriendSubsystem_1a5aed953608f2ee07f485c8507badaef1)`(const GetBlockedType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` <a id="classURH__FriendSubsystem_1a5aed953608f2ee07f485c8507badaef1"></a>

Handles the response to a Get Blocked Player call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `PlayerUuid` The UUID of the player that is being requested.

<br>
#### `protected virtual void `[`OnBlockPlayerResponse`](#classURH__FriendSubsystem_1a6b52dd3e78e9e3336e492668277b5226)`(const BlockType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` <a id="classURH__FriendSubsystem_1a6b52dd3e78e9e3336e492668277b5226"></a>

Handles the response to a Block Player call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `PlayerUuid` The UUID of the player that is being blocked.

<br>
#### `protected virtual void `[`OnUnblockPlayerResponse`](#classURH__FriendSubsystem_1aa4b44d94306aa9b37a4e562ef050cdf6)`(const UnblockType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,const FGuid PlayerUuid)` <a id="classURH__FriendSubsystem_1aa4b44d94306aa9b37a4e562ef050cdf6"></a>

Handles the response to a Unblock Player call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `PlayerUuid` The UUID of the player that is being unblocked.

<br>
#### `protected virtual void `[`OnFetchFriendForAdd`](#classURH__FriendSubsystem_1af6cdb4f4e37d9a30ae6a95bc39e6b4c8)`(const GetFriendRelationshipType::Response & Resp,FRH_AddFriendBlock Delegate,AddFriendType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1af6cdb4f4e37d9a30ae6a95bc39e6b4c8"></a>

Handles the response to a Fetch Friend For Add call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the fetch friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

<br>
#### `protected virtual void `[`OnFetchFriendForAddNote`](#classURH__FriendSubsystem_1a78e61abb415147a1716565bad8b750bc)`(const GetFriendRelationshipType::Response & Resp,FRH_AddNotesBlock Delegate,AddNotesType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1a78e61abb415147a1716565bad8b750bc"></a>

Handles the response to a Fetch Friend For Add Note call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the fetch friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

<br>
#### `protected virtual void `[`OnFetchFriendForRemove`](#classURH__FriendSubsystem_1a449dfd7d35ac5d40579bfebfaded8814)`(const GetFriendRelationshipType::Response & Resp,FRH_GenericFriendWithUuidBlock Delegate,DeleteFriendType::Request Request,int32 RetryEtagFailureCount)` <a id="classURH__FriendSubsystem_1a449dfd7d35ac5d40579bfebfaded8814"></a>

Handles the response to a Fetch Friend For Remove call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `Request` The Request used to make the fetch friend call. 

* `RetryEtagFailureCount` Number of times this has failed, to determine course of action.

<br>
#### `protected void `[`AcknowledgeFriendUpdate`](#classURH__FriendSubsystem_1a245e9b2d92925e7d54c9d84a368c85c7)`(const FGuid & PlayerUuid) const` <a id="classURH__FriendSubsystem_1a245e9b2d92925e7d54c9d84a368c85c7"></a>

Updates the Previous friendship status to the current friendship status for a given friend.

#### Parameters
* `PlayerUuid` The UUID of the friend to update.

<br>
#### `protected void `[`UpdatePlatformFriends`](#classURH__FriendSubsystem_1ab69b65c10ec179b8611677163a2247c2)`(TArray< `[`URH_PlatformFriend`](Friends.md#classURH__PlatformFriend)` * > & NewFriends)` <a id="classURH__FriendSubsystem_1ab69b65c10ec179b8611677163a2247c2"></a>

Updates the cached Platforms friends with the new set of friends data.

#### Parameters
* `NewFriends` New platform friend data.

<br>
#### `protected void `[`RemoveAllFriendsWithNoRelationships`](#classURH__FriendSubsystem_1a8e2baea2c4b27a854894385976495cb2)`(TArray< `[`URH_RHFriendAndPlatformFriend`](Friends.md#classURH__RHFriendAndPlatformFriend)` * > & OutArray)` <a id="classURH__FriendSubsystem_1a8e2baea2c4b27a854894385976495cb2"></a>

Removes all friends from the cached data that have no relationship to the player the subsystem is for.

#### Parameters
* `OutArray` Array of players that were removed.

<br>
#### `protected void `[`PollFriendsList`](#classURH__FriendSubsystem_1ac09b6bec4ef50e2e2c7bc9daee98cc9b)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__FriendSubsystem_1ac09b6bec4ef50e2e2c7bc9daee98cc9b"></a>

Executes a poll of the players friends list.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected void `[`PollBlockedPlayers`](#classURH__FriendSubsystem_1a3eb26a11fae901e018b1a1863c576f3b)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__FriendSubsystem_1a3eb26a11fae901e018b1a1863c576f3b"></a>

Executes a poll of the players blocked list.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected FName `[`ExtractErrorCodeFromResponse`](#classURH__FriendSubsystem_1a132d8e0a874d1f686f085ab4b3a6e68f)`(const FHttpResponsePtr & Response) const` <a id="classURH__FriendSubsystem_1a132d8e0a874d1f686f085ab4b3a6e68f"></a>

Gets the error code response name from a http request.

#### Parameters
* `Response` The Http response to get the error from. 

#### Returns
The error code.

<br>
#### `protected `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetRH_PlayerInfoSubsystem`](#classURH__FriendSubsystem_1ad113da46527b010c8f09a5419c5fa425)`() const` <a id="classURH__FriendSubsystem_1ad113da46527b010c8f09a5419c5fa425"></a>

Helper function to get the Player Info Subsystem that owns this.

<br>
#### `protected virtual void `[`OnReadOSSFriendsComplete`](#classURH__FriendSubsystem_1a28e2e549632ea1cde658e352a74e5e71)`(int32 LocalUserNum,bool bWasSuccessful,const FString & ListName,const FString & ErrorStr)` <a id="classURH__FriendSubsystem_1a28e2e549632ea1cde658e352a74e5e71"></a>

Handles the response from the online subsystem call to get friends.

#### Parameters
* `LocalUserNum` Controller id of the local player. 

* `bWasSuccessful` If the get friends call was successful. 

* `ListName` The name of the list that was requested. 

* `ErrorStr` Error string if the call failed.

<br>
#### `protected virtual void `[`UpdateWithOSSFriends`](#classURH__FriendSubsystem_1ac1ec831e3a17301014fd02b08cd786e6)`(const FString & ListName)` <a id="classURH__FriendSubsystem_1ac1ec831e3a17301014fd02b08cd786e6"></a>

Updates the system with the friends from the online subsystem.

#### Parameters
* `ListName` The list name where the friends are stored.

<br>
#### `protected virtual void `[`OnOSSPresenceReceived`](#classURH__FriendSubsystem_1a96025e788f843e3af281e4a35bc67f2d)`(const FUniqueNetId & UserId,const TSharedRef< FOnlineUserPresence > & NewPresence)` <a id="classURH__FriendSubsystem_1a96025e788f843e3af281e4a35bc67f2d"></a>

Handles the response from the online subsystem call to get presence.

#### Parameters
* `UserId` Net Id of the player the presence is for. 

* `NewPresence` The presence information from the online subsystem.

<br>
#### `typedef `[`GetBlockedListType`](#classURH__FriendSubsystem_1a86947a66ea21048117d78b043f66c2a4) <a id="classURH__FriendSubsystem_1a86947a66ea21048117d78b043f66c2a4"></a>

Type Define for Get Blocked List calls.

<br>
#### `typedef `[`GetBlockedType`](#classURH__FriendSubsystem_1abf3d2913b2440d3ccf90f73e5466b667) <a id="classURH__FriendSubsystem_1abf3d2913b2440d3ccf90f73e5466b667"></a>

Type Define for Get Blocked calls.

<br>
#### `typedef `[`BlockType`](#classURH__FriendSubsystem_1afde127473ff38097c2158547c884c12c) <a id="classURH__FriendSubsystem_1afde127473ff38097c2158547c884c12c"></a>

Type Define for Block Player calls.

<br>
#### `typedef `[`UnblockType`](#classURH__FriendSubsystem_1a873630d80c6b2ec588a0f5057beb4029) <a id="classURH__FriendSubsystem_1a873630d80c6b2ec588a0f5057beb4029"></a>

Type Define for Unblock Player calls.

<br>
#### `typedef `[`GetFriendsListType`](#classURH__FriendSubsystem_1a5ea265c6a3d4410edef249077f7a29fc) <a id="classURH__FriendSubsystem_1a5ea265c6a3d4410edef249077f7a29fc"></a>

Type Define for Get Friends List calls.

<br>
#### `typedef `[`GetFriendRelationshipType`](#classURH__FriendSubsystem_1abbd85d9a95318bfa9be709e5e98ab6ac) <a id="classURH__FriendSubsystem_1abbd85d9a95318bfa9be709e5e98ab6ac"></a>

Type Define for Get Friend Relationship calls.

<br>
#### `typedef `[`AddFriendType`](#classURH__FriendSubsystem_1a5b292ddb94cace20f504e49490cdd640) <a id="classURH__FriendSubsystem_1a5b292ddb94cace20f504e49490cdd640"></a>

Type Define for Add Friend calls.

<br>
#### `typedef `[`DeleteFriendType`](#classURH__FriendSubsystem_1a03a40c4622679a1506a77ff5f33d16e1) <a id="classURH__FriendSubsystem_1a03a40c4622679a1506a77ff5f33d16e1"></a>

Type Define for Remove Friend calls.

<br>
#### `typedef `[`AddNotesType`](#classURH__FriendSubsystem_1aab7335b06d00faaa339a13b0d555047e) <a id="classURH__FriendSubsystem_1aab7335b06d00faaa339a13b0d555047e"></a>

Type Define for Add Friend Notes calls.

<br>
