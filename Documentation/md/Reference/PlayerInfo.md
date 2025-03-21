---
title: PlayerInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_PlayerInfoSubobject`](#classURH__PlayerInfoSubobject) | Player Info Subobject base class used to store player data.
`class `[`URH_PlayerPresence`](#classURH__PlayerPresence) | Player Presence class used to store player presence data.
`class `[`URH_PlayerSettings`](#classURH__PlayerSettings) | Player Settings class used to store player settings data.
`class `[`URH_PlayerSessions`](#classURH__PlayerSessions) | Player Sessions class used to store player session membership information.
`class `[`URH_PlayerDeserter`](#classURH__PlayerDeserter) | Player Deserters class used to store player deserter information.
`class `[`URH_PlayerMatches`](#classURH__PlayerMatches) | Player Matches class used to store player match history information.
`class `[`URH_PlayerReports`](#classURH__PlayerReports) | Player Reports class used to store and send player report information.
`class `[`URH_PlayerRecentlyPlayedWith`](#classURH__PlayerRecentlyPlayedWith) | Player Recent Players class used to store list of recently played with players.
`class `[`URH_PlayerGuideEngagement`](#classURH__PlayerGuideEngagement) | Player Guide Engagement class used to store and update guide engagement (favorites and votes)
`class `[`URH_PlayerPlatformInfo`](#classURH__PlayerPlatformInfo) | Stores information a specific platform the player has linked to their account.
`class `[`URH_PlayerInfo`](#classURH__PlayerInfo) | Stores and fetchs all the information about a given player.
`class `[`URH_PlayerInfoSubsystem`](#classURH__PlayerInfoSubsystem) | Subsystem used to track and request information about players.
`struct `[`FRH_PlayerSettingKeySetWrapper`](#structFRH__PlayerSettingKeySetWrapper) | Wrapper to help with setting keys for player settings.
`struct `[`FRH_PlayerAndPlatformInfo`](#structFRH__PlayerAndPlatformInfo) | Wrapper to pair a players Unique Player Id and their current logged in Platform Id.

## class `URH_PlayerInfoSubobject` <a id="classURH__PlayerInfoSubobject"></a>

```
class URH_PlayerInfoSubobject
  : public UObject
```

Player Info Subobject base class used to store player data.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`bInitialized`](#classURH__PlayerInfoSubobject_1ad175e37aa5147360d2e216a70d5390ce) | Tracks if the subobject has been initialized (updated at least once).
`public FDateTime `[`LastUpdated`](#classURH__PlayerInfoSubobject_1ae5d67bedce410bcc2f7ee5e6ac49cd92) | The last time the players data was updated on the client.
`public FString `[`ETag`](#classURH__PlayerInfoSubobject_1a43c6b83f587859abb61d71842801a64c) | ETag to track if the data is stale during requests.
`public FGuid `[`PlayerUuid`](#classURH__PlayerInfoSubobject_1ae2cc7f7dfc47525f2d6edaf01b04403f) | Players unique identifier.
`public FRH_OnPlayerInfoSubobjectUpdatedMulticastDelegate `[`OnUpdatedDelegate`](#classURH__PlayerInfoSubobject_1a79fe3beb1968bb4fec503603aab7c7c5) | Native delegate to listen for presence updates.
`public TArray< FRH_OnRequestPlayerInfoSubobjectDelegateBlock > `[`TemporaryRequestDelegates`](#classURH__PlayerInfoSubobject_1a5968c4b094b525f7e54adc02b11a35bf) | Delegates stored to response to currently active requests.
`public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInfoSubobject_1adb3e6ea4b2d577dfc0b48cff1f0b7829)`() const` | Gets the PlayerInfo that owns this Player Matches object.
`public inline virtual void `[`MarkUpdated`](#classURH__PlayerInfoSubobject_1a23487defc38d317099f23d9b68086f03)`()` | Sets the last updated time to now.
`public inline virtual void `[`MarkDirty`](#classURH__PlayerInfoSubobject_1ae49b2a6e09b8159f32f1ccedc27c3dcc)`()` | Clears the last updated time to force an update.
`public inline virtual void `[`RequestUpdate`](#classURH__PlayerInfoSubobject_1aab35a732de0ee7a292776887fae18190)`(bool bForceUpdate,const FRH_OnRequestPlayerInfoSubobjectDelegateBlock & Delegate)` | Enqueues an update request for the players information from the RallyHere API.
`public virtual void `[`RequestUpdateIfStale`](#classURH__PlayerInfoSubobject_1a2c2e6fef8d302d1511526b063e57faa0)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_OnRequestPlayerInfoSubobjectDelegateBlock & Delegate)` | Enqueues an update request for the players information from the RallyHere API.
`public virtual void `[`CheckPollStatus`](#classURH__PlayerInfoSubobject_1a2e46e4cf8c81cee9eeafac9d8dcdee36)`(const bool bForceUpdate)` | Updates the poll status to be active or inactive based on if it should currently be polling.
`protected FRH_AutoPollerPtr `[`Poller`](#classURH__PlayerInfoSubobject_1a9abab6c88fabe22a23835813a56bffbd) | Poller for the players matches.
`protected FName `[`PollTimerName`](#classURH__PlayerInfoSubobject_1a697ccd6d2e132cd4ac05fcc31e64272f) | The name of the timer preset to use for polling.
`protected int32 `[`PollPriority`](#classURH__PlayerInfoSubobject_1aa0795fa3b53d3842dc358564abed8f5d) | The priority of the poll request.
`protected inline virtual bool `[`ShouldPoll`](#classURH__PlayerInfoSubobject_1aa73d16e9e42fd18afd95db6723ead346)`() const` | Gets if the poller should be actively polling, only polls if something cares about it.
`protected inline virtual void `[`Poll`](#classURH__PlayerInfoSubobject_1aa6bc5fb282ea6eb162c44106b89d1fc5)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the object data.
`protected template<>`  <br/>`inline void `[`UpdateBase`](#classURH__PlayerInfoSubobject_1a9256fdd7baceb430ba944ce641646273)`(const T & Other)` | Stores the response data from an API presence request.
`protected inline virtual void `[`PollComplete`](#classURH__PlayerInfoSubobject_1a25950945c3f6bfd0122858aa944a2bac)`(bool bSuccess,const FRH_PollCompleteFunc & Delegate)` | Poll completion function that forwards completion callbacks.
`protected virtual void `[`ExecuteUpdatedDelegates`](#classURH__PlayerInfoSubobject_1a38d53acfed235ac77964549ec780a2d4)`(bool bSuccess)` | Handles executing any delegate listeners for the update.

### Members

#### `public bool `[`bInitialized`](#classURH__PlayerInfoSubobject_1ad175e37aa5147360d2e216a70d5390ce) <a id="classURH__PlayerInfoSubobject_1ad175e37aa5147360d2e216a70d5390ce"></a>

Tracks if the subobject has been initialized (updated at least once).

#### `public FDateTime `[`LastUpdated`](#classURH__PlayerInfoSubobject_1ae5d67bedce410bcc2f7ee5e6ac49cd92) <a id="classURH__PlayerInfoSubobject_1ae5d67bedce410bcc2f7ee5e6ac49cd92"></a>

The last time the players data was updated on the client.

#### `public FString `[`ETag`](#classURH__PlayerInfoSubobject_1a43c6b83f587859abb61d71842801a64c) <a id="classURH__PlayerInfoSubobject_1a43c6b83f587859abb61d71842801a64c"></a>

ETag to track if the data is stale during requests.

#### `public FGuid `[`PlayerUuid`](#classURH__PlayerInfoSubobject_1ae2cc7f7dfc47525f2d6edaf01b04403f) <a id="classURH__PlayerInfoSubobject_1ae2cc7f7dfc47525f2d6edaf01b04403f"></a>

Players unique identifier.

#### `public FRH_OnPlayerInfoSubobjectUpdatedMulticastDelegate `[`OnUpdatedDelegate`](#classURH__PlayerInfoSubobject_1a79fe3beb1968bb4fec503603aab7c7c5) <a id="classURH__PlayerInfoSubobject_1a79fe3beb1968bb4fec503603aab7c7c5"></a>

Native delegate to listen for presence updates.

#### `public TArray< FRH_OnRequestPlayerInfoSubobjectDelegateBlock > `[`TemporaryRequestDelegates`](#classURH__PlayerInfoSubobject_1a5968c4b094b525f7e54adc02b11a35bf) <a id="classURH__PlayerInfoSubobject_1a5968c4b094b525f7e54adc02b11a35bf"></a>

Delegates stored to response to currently active requests.

#### `public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInfoSubobject_1adb3e6ea4b2d577dfc0b48cff1f0b7829)`() const` <a id="classURH__PlayerInfoSubobject_1adb3e6ea4b2d577dfc0b48cff1f0b7829"></a>

Gets the PlayerInfo that owns this Player Matches object.

#### Returns
The PlayerInfo that owns the Player Matches object.

#### `public inline virtual void `[`MarkUpdated`](#classURH__PlayerInfoSubobject_1a23487defc38d317099f23d9b68086f03)`()` <a id="classURH__PlayerInfoSubobject_1a23487defc38d317099f23d9b68086f03"></a>

Sets the last updated time to now.

#### `public inline virtual void `[`MarkDirty`](#classURH__PlayerInfoSubobject_1ae49b2a6e09b8159f32f1ccedc27c3dcc)`()` <a id="classURH__PlayerInfoSubobject_1ae49b2a6e09b8159f32f1ccedc27c3dcc"></a>

Clears the last updated time to force an update.

#### `public inline virtual void `[`RequestUpdate`](#classURH__PlayerInfoSubobject_1aab35a732de0ee7a292776887fae18190)`(bool bForceUpdate,const FRH_OnRequestPlayerInfoSubobjectDelegateBlock & Delegate)` <a id="classURH__PlayerInfoSubobject_1aab35a732de0ee7a292776887fae18190"></a>

Enqueues an update request for the players information from the RallyHere API.

#### Parameters
* `bForceUpdate` If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly 

* `Delegate` Callback delegate for the request.

#### `public virtual void `[`RequestUpdateIfStale`](#classURH__PlayerInfoSubobject_1a2c2e6fef8d302d1511526b063e57faa0)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_OnRequestPlayerInfoSubobjectDelegateBlock & Delegate)` <a id="classURH__PlayerInfoSubobject_1a2c2e6fef8d302d1511526b063e57faa0"></a>

Enqueues an update request for the players information from the RallyHere API.

#### Parameters
* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback delegate for the request.

#### `public virtual void `[`CheckPollStatus`](#classURH__PlayerInfoSubobject_1a2e46e4cf8c81cee9eeafac9d8dcdee36)`(const bool bForceUpdate)` <a id="classURH__PlayerInfoSubobject_1a2e46e4cf8c81cee9eeafac9d8dcdee36"></a>

Updates the poll status to be active or inactive based on if it should currently be polling.

#### Parameters
* `bForceUpdate` If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly

#### `protected FRH_AutoPollerPtr `[`Poller`](#classURH__PlayerInfoSubobject_1a9abab6c88fabe22a23835813a56bffbd) <a id="classURH__PlayerInfoSubobject_1a9abab6c88fabe22a23835813a56bffbd"></a>

Poller for the players matches.

#### `protected FName `[`PollTimerName`](#classURH__PlayerInfoSubobject_1a697ccd6d2e132cd4ac05fcc31e64272f) <a id="classURH__PlayerInfoSubobject_1a697ccd6d2e132cd4ac05fcc31e64272f"></a>

The name of the timer preset to use for polling.

#### `protected int32 `[`PollPriority`](#classURH__PlayerInfoSubobject_1aa0795fa3b53d3842dc358564abed8f5d) <a id="classURH__PlayerInfoSubobject_1aa0795fa3b53d3842dc358564abed8f5d"></a>

The priority of the poll request.

#### `protected inline virtual bool `[`ShouldPoll`](#classURH__PlayerInfoSubobject_1aa73d16e9e42fd18afd95db6723ead346)`() const` <a id="classURH__PlayerInfoSubobject_1aa73d16e9e42fd18afd95db6723ead346"></a>

Gets if the poller should be actively polling, only polls if something cares about it.

#### `protected inline virtual void `[`Poll`](#classURH__PlayerInfoSubobject_1aa6bc5fb282ea6eb162c44106b89d1fc5)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerInfoSubobject_1aa6bc5fb282ea6eb162c44106b89d1fc5"></a>

Starts a poll of the object data.

#### Parameters
* `Delegate` Callback delegate for the poll.

#### `protected template<>`  <br/>`inline void `[`UpdateBase`](#classURH__PlayerInfoSubobject_1a9256fdd7baceb430ba944ce641646273)`(const T & Other)` <a id="classURH__PlayerInfoSubobject_1a9256fdd7baceb430ba944ce641646273"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The presence data to store.

#### `protected inline virtual void `[`PollComplete`](#classURH__PlayerInfoSubobject_1a25950945c3f6bfd0122858aa944a2bac)`(bool bSuccess,const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerInfoSubobject_1a25950945c3f6bfd0122858aa944a2bac"></a>

Poll completion function that forwards completion callbacks.

#### Parameters
* `bSuccess` If the poll was successful. 

* `Delegate` Callback delegate for the poll.

#### `protected virtual void `[`ExecuteUpdatedDelegates`](#classURH__PlayerInfoSubobject_1a38d53acfed235ac77964549ec780a2d4)`(bool bSuccess)` <a id="classURH__PlayerInfoSubobject_1a38d53acfed235ac77964549ec780a2d4"></a>

Handles executing any delegate listeners for the update.

#### Parameters
* `bSuccess` If the poll was successful.

## class `URH_PlayerPresence` <a id="classURH__PlayerPresence"></a>

```
class URH_PlayerPresence
  : public URH_PlayerInfoSubobject
```

Player Presence class used to store player presence data.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_OnlineStatus `[`Status`](#classURH__PlayerPresence_1a51af6d5a0caf4f5e47e4498a7bb3e456) | Online status of the player.
`public FString `[`Message`](#classURH__PlayerPresence_1abd625e3be04fcb0527bbc719dc929d6e) | Message set by a player to display on their presence information.
`public FString `[`Platform`](#classURH__PlayerPresence_1ad461b02f3065a8e712a127e954fb9e36) | Which platform the player is currently playing / last seen on.
`public FString `[`DisplayName`](#classURH__PlayerPresence_1a93fef7276ca2b984c0d2e66ca3dc3852) | The players display name for their current or last seen platform.
`public TMap< FString, FString > `[`CustomData`](#classURH__PlayerPresence_1abbc5a206683a5117cc6c3aa200e137c8) | Custom data that can be set by the player.
`protected virtual void `[`Poll`](#classURH__PlayerPresence_1adf598cc475db7d98b03df67879097808)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the players presence.
`protected inline virtual void `[`Update`](#classURH__PlayerPresence_1aa6ef217e8b96b79fa309824e8bd73520)`(const GetPresenceType::Response & Other)` | Stores the response data from an API presence request.
`typedef `[`GetPresenceType`](#classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214) | 

### Members

#### `public ERHAPI_OnlineStatus `[`Status`](#classURH__PlayerPresence_1a51af6d5a0caf4f5e47e4498a7bb3e456) <a id="classURH__PlayerPresence_1a51af6d5a0caf4f5e47e4498a7bb3e456"></a>

Online status of the player.

#### `public FString `[`Message`](#classURH__PlayerPresence_1abd625e3be04fcb0527bbc719dc929d6e) <a id="classURH__PlayerPresence_1abd625e3be04fcb0527bbc719dc929d6e"></a>

Message set by a player to display on their presence information.

#### `public FString `[`Platform`](#classURH__PlayerPresence_1ad461b02f3065a8e712a127e954fb9e36) <a id="classURH__PlayerPresence_1ad461b02f3065a8e712a127e954fb9e36"></a>

Which platform the player is currently playing / last seen on.

#### `public FString `[`DisplayName`](#classURH__PlayerPresence_1a93fef7276ca2b984c0d2e66ca3dc3852) <a id="classURH__PlayerPresence_1a93fef7276ca2b984c0d2e66ca3dc3852"></a>

The players display name for their current or last seen platform.

#### `public TMap< FString, FString > `[`CustomData`](#classURH__PlayerPresence_1abbc5a206683a5117cc6c3aa200e137c8) <a id="classURH__PlayerPresence_1abbc5a206683a5117cc6c3aa200e137c8"></a>

Custom data that can be set by the player.

#### `protected virtual void `[`Poll`](#classURH__PlayerPresence_1adf598cc475db7d98b03df67879097808)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerPresence_1adf598cc475db7d98b03df67879097808"></a>

Starts a poll of the players presence.

#### Parameters
* `Delegate` Callback delegate for the poll.

#### `protected inline virtual void `[`Update`](#classURH__PlayerPresence_1aa6ef217e8b96b79fa309824e8bd73520)`(const GetPresenceType::Response & Other)` <a id="classURH__PlayerPresence_1aa6ef217e8b96b79fa309824e8bd73520"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The presence data to store.

#### `typedef `[`GetPresenceType`](#classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214) <a id="classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214"></a>

## class `URH_PlayerSettings` <a id="classURH__PlayerSettings"></a>

```
class URH_PlayerSettings
  : public URH_PlayerInfoSubobject
```

Player Settings class used to store player settings data.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public const FString & `[`Key`](#classURH__PlayerSettings_1adccc01ae0f697d3b872358b1f94ba0b8) | 
`public const FString const FTimespan & `[`StaleThreshold`](#classURH__PlayerSettings_1a61ab33f5c7786aa4e62fa4623e288335) | 
`public const FString const FTimespan bool `[`bForceRefresh`](#classURH__PlayerSettings_1a9f0fb6afa92f6434148302e9661db75f) | 
`public const FString const FTimespan bool const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate & `[`Delegate`](#classURH__PlayerSettings_1a4b5f8e590e595e1f83c0290c12f9d962) | 
`public virtual void `[`GetPlayerSetting`](#classURH__PlayerSettings_1aefcf45115c7dec153d9f05191ffcfe1e)`(const FString & SettingTypeId,const FString & Key,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` | Gets the players settings information for a given type.
`public virtual void `[`GetPlayerSettingsForKeys`](#classURH__PlayerSettings_1a0d12274f161869118a878a2dce470582)`(const FString & SettingTypeId,const TArray< FString > & Keys,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` | Gets the players settings information for a given type, restricted to a list of keys.
`public virtual void `[`SetPlayerSetting`](#classURH__PlayerSettings_1adf7351daad25cabd96e3943f69bcc283)`(const FString & SettingTypeId,const FString & Key,const `[`FRHAPI_SetSinglePlayerSettingRequest`](RHAPI_SetSinglePlayerSettingRequest.md#structFRHAPI__SetSinglePlayerSettingRequest)` & Document,const FRH_PlayerInfoSetPlayerSettingBlock & Delegate,const `[`FRH_ObjectVersionCheck`](Common.md#structFRH__ObjectVersionCheck)` & VersionCheck)` | Sets the players settings information for a given type.
`public virtual void `[`DeletePlayerSetting`](#classURH__PlayerSettings_1aeae7898c01c64d7b260a71436ecf8c6b)`(const FString & SettingTypeId,const FString & Key,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Deletes a players setting for a given type.
`public inline virtual const TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > & `[`GetAllStoredPlayerSettings`](#classURH__PlayerSettings_1abcd75501f4f530590762d79c01064997)`() const` | Gets all the players store settings data.
`protected TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > `[`PlayerSettingsByTypeId`](#classURH__PlayerSettings_1a95d4670b0a19e82ab2be26776ccf991f) | Cache of Player Settings Data by their settings types.
`protected virtual void `[`OnGetPlayerSettingResponse`](#classURH__PlayerSettings_1a2d9c30fdee4ff9173707eddbf1f3cfae)`(const GetSingleSettingType::Response & Response,const FRH_PlayerInfoGetPlayerSettingsBlock Delegate,const FString SettingTypeId,FString Key)` | Handles the response to a Get Player Setting call.
`protected virtual void `[`OnGetPlayerSettingsResponse`](#classURH__PlayerSettings_1a18c0ce0863a4a5177c4fa4260ed77dfe)`(const GetSettingsForKeysType::Response & Response,const FRH_PlayerInfoGetPlayerSettingsBlock Delegate,const FString SettingTypeId,TOptional< TArray< FString > > PartialKeys)` | Handles the response to a Get Player Settings call.
`typedef `[`GetSingleSettingType`](#classURH__PlayerSettings_1a4b12e4ce5f44803c1a6d2df90d210eb0) | 
`typedef `[`GetSettingsForKeysType`](#classURH__PlayerSettings_1adf4e1f965655275eae23ecd2c684e197) | 
`typedef `[`SetSettingType`](#classURH__PlayerSettings_1acbf2e7681d406cd088a13cab0199622c) | 
`typedef `[`DeleteSettingType`](#classURH__PlayerSettings_1a959128ec74660a126b2ba85d91b9ab75) | 

### Members

#### `public const FString & `[`Key`](#classURH__PlayerSettings_1adccc01ae0f697d3b872358b1f94ba0b8) <a id="classURH__PlayerSettings_1adccc01ae0f697d3b872358b1f94ba0b8"></a>

#### `public const FString const FTimespan & `[`StaleThreshold`](#classURH__PlayerSettings_1a61ab33f5c7786aa4e62fa4623e288335) <a id="classURH__PlayerSettings_1a61ab33f5c7786aa4e62fa4623e288335"></a>

#### `public const FString const FTimespan bool `[`bForceRefresh`](#classURH__PlayerSettings_1a9f0fb6afa92f6434148302e9661db75f) <a id="classURH__PlayerSettings_1a9f0fb6afa92f6434148302e9661db75f"></a>

#### `public const FString const FTimespan bool const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate & `[`Delegate`](#classURH__PlayerSettings_1a4b5f8e590e595e1f83c0290c12f9d962) <a id="classURH__PlayerSettings_1a4b5f8e590e595e1f83c0290c12f9d962"></a>

#### `public virtual void `[`GetPlayerSetting`](#classURH__PlayerSettings_1aefcf45115c7dec153d9f05191ffcfe1e)`(const FString & SettingTypeId,const FString & Key,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` <a id="classURH__PlayerSettings_1aefcf45115c7dec153d9f05191ffcfe1e"></a>

Gets the players settings information for a given type.

#### Parameters
* `SettingTypeId` The setting type requested. 

* `Key` The setting key being requested within the type 

* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players settings for the given type.

#### `public virtual void `[`GetPlayerSettingsForKeys`](#classURH__PlayerSettings_1a0d12274f161869118a878a2dce470582)`(const FString & SettingTypeId,const TArray< FString > & Keys,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` <a id="classURH__PlayerSettings_1a0d12274f161869118a878a2dce470582"></a>

Gets the players settings information for a given type, restricted to a list of keys.

#### Parameters
* `SettingTypeId` The setting type requested. 

* `Keys` The list of keys to request. If empty, all keys are requested 

* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players settings for the given type.

#### `public virtual void `[`SetPlayerSetting`](#classURH__PlayerSettings_1adf7351daad25cabd96e3943f69bcc283)`(const FString & SettingTypeId,const FString & Key,const `[`FRHAPI_SetSinglePlayerSettingRequest`](RHAPI_SetSinglePlayerSettingRequest.md#structFRHAPI__SetSinglePlayerSettingRequest)` & Document,const FRH_PlayerInfoSetPlayerSettingBlock & Delegate,const `[`FRH_ObjectVersionCheck`](Common.md#structFRH__ObjectVersionCheck)` & VersionCheck)` <a id="classURH__PlayerSettings_1adf7351daad25cabd96e3943f69bcc283"></a>

Sets the players settings information for a given type.

#### Parameters
* `SettingTypeId` The setting type to update. 

* `Key` The setting key being updated within the type. 

* `Document` Json Document to be stored. 

* `Delegate` Callback when the operation is complete with success information. 

* `VersionCheck` Optional version check to ensure the data is not stale.

#### `public virtual void `[`DeletePlayerSetting`](#classURH__PlayerSettings_1aeae7898c01c64d7b260a71436ecf8c6b)`(const FString & SettingTypeId,const FString & Key,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PlayerSettings_1aeae7898c01c64d7b260a71436ecf8c6b"></a>

Deletes a players setting for a given type.

#### Parameters
* `SettingTypeId` The setting type to update. 

* `Key` The setting key being updated within the type. 

* `Delegate` Callback when the operation is complete with success information.

#### `public inline virtual const TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > & `[`GetAllStoredPlayerSettings`](#classURH__PlayerSettings_1abcd75501f4f530590762d79c01064997)`() const` <a id="classURH__PlayerSettings_1abcd75501f4f530590762d79c01064997"></a>

Gets all the players store settings data.

#### Returns
The players stored settings data.

#### `protected TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > `[`PlayerSettingsByTypeId`](#classURH__PlayerSettings_1a95d4670b0a19e82ab2be26776ccf991f) <a id="classURH__PlayerSettings_1a95d4670b0a19e82ab2be26776ccf991f"></a>

Cache of Player Settings Data by their settings types.

#### `protected virtual void `[`OnGetPlayerSettingResponse`](#classURH__PlayerSettings_1a2d9c30fdee4ff9173707eddbf1f3cfae)`(const GetSingleSettingType::Response & Response,const FRH_PlayerInfoGetPlayerSettingsBlock Delegate,const FString SettingTypeId,FString Key)` <a id="classURH__PlayerSettings_1a2d9c30fdee4ff9173707eddbf1f3cfae"></a>

Handles the response to a Get Player Setting call.

#### Parameters
* `Response` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `SettingTypeId` The type of settings that were requested. 

* `Key` The key that was requested.

#### `protected virtual void `[`OnGetPlayerSettingsResponse`](#classURH__PlayerSettings_1a18c0ce0863a4a5177c4fa4260ed77dfe)`(const GetSettingsForKeysType::Response & Response,const FRH_PlayerInfoGetPlayerSettingsBlock Delegate,const FString SettingTypeId,TOptional< TArray< FString > > PartialKeys)` <a id="classURH__PlayerSettings_1a18c0ce0863a4a5177c4fa4260ed77dfe"></a>

Handles the response to a Get Player Settings call.

#### Parameters
* `Response` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `SettingTypeId` The type of settings that were requested. 

* `PartialKeys` If Specified, only the keys in this list were requested.

#### `typedef `[`GetSingleSettingType`](#classURH__PlayerSettings_1a4b12e4ce5f44803c1a6d2df90d210eb0) <a id="classURH__PlayerSettings_1a4b12e4ce5f44803c1a6d2df90d210eb0"></a>

#### `typedef `[`GetSettingsForKeysType`](#classURH__PlayerSettings_1adf4e1f965655275eae23ecd2c684e197) <a id="classURH__PlayerSettings_1adf4e1f965655275eae23ecd2c684e197"></a>

#### `typedef `[`SetSettingType`](#classURH__PlayerSettings_1acbf2e7681d406cd088a13cab0199622c) <a id="classURH__PlayerSettings_1acbf2e7681d406cd088a13cab0199622c"></a>

#### `typedef `[`DeleteSettingType`](#classURH__PlayerSettings_1a959128ec74660a126b2ba85d91b9ab75) <a id="classURH__PlayerSettings_1a959128ec74660a126b2ba85d91b9ab75"></a>

## class `URH_PlayerSessions` <a id="classURH__PlayerSessions"></a>

```
class URH_PlayerSessions
  : public URH_PlayerInfoSubobject
```

Player Sessions class used to store player session membership information.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRHAPI_PlayerSessions`](RHAPI_PlayerSessions.md#structFRHAPI__PlayerSessions)` `[`Sessions`](#classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab) | The sessions the player is a member of.
`protected virtual void `[`Poll`](#classURH__PlayerSessions_1a7adb05ae630f0bffb316507c08749a95)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the players sessions.
`protected inline virtual void `[`Update`](#classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e)`(const GetSessionsType::Response & Other)` | Stores the response data from an API request.
`typedef `[`GetSessionsType`](#classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92) | 

### Members

#### `public `[`FRHAPI_PlayerSessions`](RHAPI_PlayerSessions.md#structFRHAPI__PlayerSessions)` `[`Sessions`](#classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab) <a id="classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab"></a>

The sessions the player is a member of.

#### `protected virtual void `[`Poll`](#classURH__PlayerSessions_1a7adb05ae630f0bffb316507c08749a95)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerSessions_1a7adb05ae630f0bffb316507c08749a95"></a>

Starts a poll of the players sessions.

#### Parameters
* `Delegate` Callback delegate for the poll.

#### `protected inline virtual void `[`Update`](#classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e)`(const GetSessionsType::Response & Other)` <a id="classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e"></a>

Stores the response data from an API request.

#### Parameters
* `Other` The response data to store.

#### `typedef `[`GetSessionsType`](#classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92) <a id="classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92"></a>

## class `URH_PlayerDeserter` <a id="classURH__PlayerDeserter"></a>

```
class URH_PlayerDeserter
  : public URH_PlayerInfoSubobject
```

Player Deserters class used to store player deserter information.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > `[`DeserterStatus`](#classURH__PlayerDeserter_1a05ffb9ed63dc9857664c8f6c11a2b5e7) | The deserter status for the player by DeserterId.
`public virtual void `[`SetDeserterStatus`](#classURH__PlayerDeserter_1a69f7bd8f4cdeceae377fe8b733b9fb29)`(const FString & DeserterId,const `[`FRHAPI_DeserterUpdateRequest`](RHAPI_DeserterUpdateRequest.md#structFRHAPI__DeserterUpdateRequest)` & NewDeserterStatus,const FRH_OnRequestPlayerInfoSubobjectDelegateBlock & Delegate)` | Updates the deserter status for the player.
`public virtual void `[`ClearDeserterStatus`](#classURH__PlayerDeserter_1a0a7433a6727348f723c0e202e0d65934)`(const FString & DeserterId,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Clears the deserter state for the player for the given id.
`public virtual void `[`ClearAllDeserterStatus`](#classURH__PlayerDeserter_1a994048ec55a1137c5dacd24b93358e1d)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` | Clears all deserter states for the player.
`protected virtual void `[`Poll`](#classURH__PlayerDeserter_1a544d4de164032b9966a4f42a609f4c09)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the players deserter status.
`protected inline virtual void `[`Update`](#classURH__PlayerDeserter_1a3beaca0b403e6a3acfcdaa32f5c7f07a)`(const GetDeserterAllType::Response & Other)` | Stores the response data from an API request.
`typedef `[`GetDeserterAllType`](#classURH__PlayerDeserter_1a3b48a9187fb15ba053246a946f9ae856) | 
`typedef `[`SetDeserterType`](#classURH__PlayerDeserter_1a9f0433dab4eef56a33abc0a08de818f9) | 
`typedef `[`ClearDeserterType`](#classURH__PlayerDeserter_1af0fc2c37f987361930f2fc5867a62935) | 
`typedef `[`ClearAllDeserterType`](#classURH__PlayerDeserter_1a381d7584a5c025924cfecf661c5b4a37) | 

### Members

#### `public TMap< FString, `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > `[`DeserterStatus`](#classURH__PlayerDeserter_1a05ffb9ed63dc9857664c8f6c11a2b5e7) <a id="classURH__PlayerDeserter_1a05ffb9ed63dc9857664c8f6c11a2b5e7"></a>

The deserter status for the player by DeserterId.

#### `public virtual void `[`SetDeserterStatus`](#classURH__PlayerDeserter_1a69f7bd8f4cdeceae377fe8b733b9fb29)`(const FString & DeserterId,const `[`FRHAPI_DeserterUpdateRequest`](RHAPI_DeserterUpdateRequest.md#structFRHAPI__DeserterUpdateRequest)` & NewDeserterStatus,const FRH_OnRequestPlayerInfoSubobjectDelegateBlock & Delegate)` <a id="classURH__PlayerDeserter_1a69f7bd8f4cdeceae377fe8b733b9fb29"></a>

Updates the deserter status for the player.

#### Parameters
* `DeserterId` The deserter id to update for the player. 

* `NewDeserterStatus` The new deserter status for the player. 

* `Delegate` The callback delegate for the request.

#### `public virtual void `[`ClearDeserterStatus`](#classURH__PlayerDeserter_1a0a7433a6727348f723c0e202e0d65934)`(const FString & DeserterId,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PlayerDeserter_1a0a7433a6727348f723c0e202e0d65934"></a>

Clears the deserter state for the player for the given id.

#### Parameters
* `DeserterId` The deserter id to update for the player. 

* `Delegate` The callback delegate for the request.

#### `public virtual void `[`ClearAllDeserterStatus`](#classURH__PlayerDeserter_1a994048ec55a1137c5dacd24b93358e1d)`(const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PlayerDeserter_1a994048ec55a1137c5dacd24b93358e1d"></a>

Clears all deserter states for the player.

#### Parameters
* `Delegate` The callback delegate for the request.

#### `protected virtual void `[`Poll`](#classURH__PlayerDeserter_1a544d4de164032b9966a4f42a609f4c09)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerDeserter_1a544d4de164032b9966a4f42a609f4c09"></a>

Starts a poll of the players deserter status.

#### Parameters
* `Delegate` Callback delegate for the poll.

#### `protected inline virtual void `[`Update`](#classURH__PlayerDeserter_1a3beaca0b403e6a3acfcdaa32f5c7f07a)`(const GetDeserterAllType::Response & Other)` <a id="classURH__PlayerDeserter_1a3beaca0b403e6a3acfcdaa32f5c7f07a"></a>

Stores the response data from an API request.

#### Parameters
* `Other` The response data to store.

#### `typedef `[`GetDeserterAllType`](#classURH__PlayerDeserter_1a3b48a9187fb15ba053246a946f9ae856) <a id="classURH__PlayerDeserter_1a3b48a9187fb15ba053246a946f9ae856"></a>

#### `typedef `[`SetDeserterType`](#classURH__PlayerDeserter_1a9f0433dab4eef56a33abc0a08de818f9) <a id="classURH__PlayerDeserter_1a9f0433dab4eef56a33abc0a08de818f9"></a>

#### `typedef `[`ClearDeserterType`](#classURH__PlayerDeserter_1af0fc2c37f987361930f2fc5867a62935) <a id="classURH__PlayerDeserter_1af0fc2c37f987361930f2fc5867a62935"></a>

#### `typedef `[`ClearAllDeserterType`](#classURH__PlayerDeserter_1a381d7584a5c025924cfecf661c5b4a37) <a id="classURH__PlayerDeserter_1a381d7584a5c025924cfecf661c5b4a37"></a>

## class `URH_PlayerMatches` <a id="classURH__PlayerMatches"></a>

```
class URH_PlayerMatches
  : public URH_PlayerInfoSubobject
```

Player Matches class used to store player match history information.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PollPageSize`](#classURH__PlayerMatches_1a5d396c7fa4ed1186a1e88fc848571be2) | The size of the pages to poll, if 0, uses default.
`public int32 `[`PollMaxPageCount`](#classURH__PlayerMatches_1ab61d485e5d851ff8fea078e331c9c7b8) | Polling of new pages is stopped after this value is reached, if 0, polls until all pages are polled.
`public FTimespan `[`PollMaxAge`](#classURH__PlayerMatches_1ae4bebdc4d6137fb5585f4310b1d7c4e7) | The maximum age after which to stop polling new pages, if 0, polls until max count is reached.
`public TMap< FString, `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > `[`Matches`](#classURH__PlayerMatches_1aca9fc68c9d093c1a90bce75d0f9832ea) | The matches the player has participated in.
`protected virtual void `[`Poll`](#classURH__PlayerMatches_1a40b839311638c5097b6bc1f74b3156d3)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the object data.
`protected virtual void `[`PollNextPage`](#classURH__PlayerMatches_1a2ca5a0cec9f116fd4469fb3a2a387e11)`(const FRH_PollCompleteFunc & Delegate,TSharedPtr< `[`FPollContext`](undefined.md#structURH__PlayerMatches_1_1FPollContext)` > Context)` | Starts a poll of the object data.
`protected inline virtual void `[`Update`](#classURH__PlayerMatches_1a2d718f1945307bc4570e9b6fc1a10a27)`(const GetMatchesType::Response & Other,TSharedPtr< `[`FPollContext`](undefined.md#structURH__PlayerMatches_1_1FPollContext)` > Context)` | Stores the response data from an API presence request.
`typedef `[`GetMatchesType`](#classURH__PlayerMatches_1a13c41a6b6f28555aa13c6536c706c8b9) | 

### Members

#### `public int32 `[`PollPageSize`](#classURH__PlayerMatches_1a5d396c7fa4ed1186a1e88fc848571be2) <a id="classURH__PlayerMatches_1a5d396c7fa4ed1186a1e88fc848571be2"></a>

The size of the pages to poll, if 0, uses default.

#### `public int32 `[`PollMaxPageCount`](#classURH__PlayerMatches_1ab61d485e5d851ff8fea078e331c9c7b8) <a id="classURH__PlayerMatches_1ab61d485e5d851ff8fea078e331c9c7b8"></a>

Polling of new pages is stopped after this value is reached, if 0, polls until all pages are polled.

#### `public FTimespan `[`PollMaxAge`](#classURH__PlayerMatches_1ae4bebdc4d6137fb5585f4310b1d7c4e7) <a id="classURH__PlayerMatches_1ae4bebdc4d6137fb5585f4310b1d7c4e7"></a>

The maximum age after which to stop polling new pages, if 0, polls until max count is reached.

#### `public TMap< FString, `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > `[`Matches`](#classURH__PlayerMatches_1aca9fc68c9d093c1a90bce75d0f9832ea) <a id="classURH__PlayerMatches_1aca9fc68c9d093c1a90bce75d0f9832ea"></a>

The matches the player has participated in.

#### `protected virtual void `[`Poll`](#classURH__PlayerMatches_1a40b839311638c5097b6bc1f74b3156d3)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerMatches_1a40b839311638c5097b6bc1f74b3156d3"></a>

Starts a poll of the object data.

#### Parameters
* `Delegate` Callback delegate for the poll.

#### `protected virtual void `[`PollNextPage`](#classURH__PlayerMatches_1a2ca5a0cec9f116fd4469fb3a2a387e11)`(const FRH_PollCompleteFunc & Delegate,TSharedPtr< `[`FPollContext`](undefined.md#structURH__PlayerMatches_1_1FPollContext)` > Context)` <a id="classURH__PlayerMatches_1a2ca5a0cec9f116fd4469fb3a2a387e11"></a>

Starts a poll of the object data.

#### Parameters
* `Delegate` Callback delegate for the poll. 

* `Context` The context to use for the poll.

#### `protected inline virtual void `[`Update`](#classURH__PlayerMatches_1a2d718f1945307bc4570e9b6fc1a10a27)`(const GetMatchesType::Response & Other,TSharedPtr< `[`FPollContext`](undefined.md#structURH__PlayerMatches_1_1FPollContext)` > Context)` <a id="classURH__PlayerMatches_1a2d718f1945307bc4570e9b6fc1a10a27"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The match data to store. 

* `Context` The context to use for the poll.

#### `typedef `[`GetMatchesType`](#classURH__PlayerMatches_1a13c41a6b6f28555aa13c6536c706c8b9) <a id="classURH__PlayerMatches_1a13c41a6b6f28555aa13c6536c706c8b9"></a>

## class `URH_PlayerReports` <a id="classURH__PlayerReports"></a>

```
class URH_PlayerReports
  : public URH_PlayerInfoSubobject
```

Player Reports class used to store and send player report information.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`GetReportsSentAsync`](#classURH__PlayerReports_1a8286167a68b0b8f0dc9e57c394fd29fd)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsBlock & Delegate)` | Request a list of player reports send by this player.
`public inline TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`GetReportsSent`](#classURH__PlayerReports_1a640b9bbfa7c5f4059d6f4febae50692f)`() const` | Get the current cached list of player reports sent by this player.
`public virtual void `[`GetReportsReceivedAsync`](#classURH__PlayerReports_1ace60d12bc864d0546372df009c41f5f2)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsBlock & Delegate)` | Request a list of player reports received by this player.
`public inline virtual TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`GetReportsReceived`](#classURH__PlayerReports_1aff09a68f6aab8261b75181c6c8c129b4)`() const` | Get the current cached list of player reports received by this player.
`public virtual void `[`CreateReport`](#classURH__PlayerReports_1a3a7db86764cfd8c2a83be10dd5d9d157)`(const `[`FRHAPI_PlayerReportCreate`](RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,const FRH_PlayerInfoCreatePlayerReportBlock & Delegate)` | Create a new report for the target player.
`public virtual void `[`CreateReport`](#classURH__PlayerReports_1a33a8bdc35ba9d092820b6796dc9763bf)`(const `[`FRHAPI_PlayerReportCreate`](RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,FAuthContextPtr AuthContext,const FRH_PlayerInfoCreatePlayerReportBlock & Delegate)` | Create a new report for the target player with a specific auth context.
`protected TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`ReportsSent`](#classURH__PlayerReports_1afa610002ff1c15ed7e6dfdfce53b2263) | 
`protected TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`ReportsReceived`](#classURH__PlayerReports_1a3f561b683fa7026383b75e5494ca6959) | 
`typedef `[`GetReportsSentType`](#classURH__PlayerReports_1a66e9b68dfeb75fe986b3f615385e80a7) | 
`typedef `[`GetReportsReceivedType`](#classURH__PlayerReports_1a2bebbdb949cccf80084b2e5b3cb99951) | 
`typedef `[`CreateReportType`](#classURH__PlayerReports_1a6b101fa42b9857a05a752b07cade837d) | 

### Members

#### `public virtual void `[`GetReportsSentAsync`](#classURH__PlayerReports_1a8286167a68b0b8f0dc9e57c394fd29fd)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsBlock & Delegate)` <a id="classURH__PlayerReports_1a8286167a68b0b8f0dc9e57c394fd29fd"></a>

Request a list of player reports send by this player.

#### Parameters
* `Cursor` The cursor to use for the request. 

* `PageSize` The size of the pages to poll, if 0, uses default 

* `Delegate` Callback delegate for the request.

#### `public inline TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`GetReportsSent`](#classURH__PlayerReports_1a640b9bbfa7c5f4059d6f4febae50692f)`() const` <a id="classURH__PlayerReports_1a640b9bbfa7c5f4059d6f4febae50692f"></a>

Get the current cached list of player reports sent by this player.

#### `public virtual void `[`GetReportsReceivedAsync`](#classURH__PlayerReports_1ace60d12bc864d0546372df009c41f5f2)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsBlock & Delegate)` <a id="classURH__PlayerReports_1ace60d12bc864d0546372df009c41f5f2"></a>

Request a list of player reports received by this player.

#### Parameters
* `Cursor` The cursor to use for the request. 

* `PageSize` The size of the pages to poll, if 0, uses default 

* `Delegate` Callback delegate for the request.

#### `public inline virtual TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`GetReportsReceived`](#classURH__PlayerReports_1aff09a68f6aab8261b75181c6c8c129b4)`() const` <a id="classURH__PlayerReports_1aff09a68f6aab8261b75181c6c8c129b4"></a>

Get the current cached list of player reports received by this player.

#### `public virtual void `[`CreateReport`](#classURH__PlayerReports_1a3a7db86764cfd8c2a83be10dd5d9d157)`(const `[`FRHAPI_PlayerReportCreate`](RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,const FRH_PlayerInfoCreatePlayerReportBlock & Delegate)` <a id="classURH__PlayerReports_1a3a7db86764cfd8c2a83be10dd5d9d157"></a>

Create a new report for the target player.

#### Parameters
* `Report` The report to create. 

* `Delegate` Callback delegate for the request.

#### `public virtual void `[`CreateReport`](#classURH__PlayerReports_1a33a8bdc35ba9d092820b6796dc9763bf)`(const `[`FRHAPI_PlayerReportCreate`](RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,FAuthContextPtr AuthContext,const FRH_PlayerInfoCreatePlayerReportBlock & Delegate)` <a id="classURH__PlayerReports_1a33a8bdc35ba9d092820b6796dc9763bf"></a>

Create a new report for the target player with a specific auth context.

#### Parameters
* `Report` The report to create. 

* `AuthContext` The auth context to use for the request. 

* `Delegate` Callback delegate for the request.

#### `protected TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`ReportsSent`](#classURH__PlayerReports_1afa610002ff1c15ed7e6dfdfce53b2263) <a id="classURH__PlayerReports_1afa610002ff1c15ed7e6dfdfce53b2263"></a>

#### `protected TArray< `[`FRHAPI_PlayerReport`](RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`ReportsReceived`](#classURH__PlayerReports_1a3f561b683fa7026383b75e5494ca6959) <a id="classURH__PlayerReports_1a3f561b683fa7026383b75e5494ca6959"></a>

#### `typedef `[`GetReportsSentType`](#classURH__PlayerReports_1a66e9b68dfeb75fe986b3f615385e80a7) <a id="classURH__PlayerReports_1a66e9b68dfeb75fe986b3f615385e80a7"></a>

#### `typedef `[`GetReportsReceivedType`](#classURH__PlayerReports_1a2bebbdb949cccf80084b2e5b3cb99951) <a id="classURH__PlayerReports_1a2bebbdb949cccf80084b2e5b3cb99951"></a>

#### `typedef `[`CreateReportType`](#classURH__PlayerReports_1a6b101fa42b9857a05a752b07cade837d) <a id="classURH__PlayerReports_1a6b101fa42b9857a05a752b07cade837d"></a>

## class `URH_PlayerRecentlyPlayedWith` <a id="classURH__PlayerRecentlyPlayedWith"></a>

```
class URH_PlayerRecentlyPlayedWith
  : public URH_PlayerInfoSubobject
```

Player Recent Players class used to store list of recently played with players.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetRecentlyPlayedWith`](#classURH__PlayerRecentlyPlayedWith_1a74df1d48f573569a976c167dc73ecf63)`() const` | Get the current cached list of guide engagement by this player.
`protected TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > `[`RecentlyPlayedWith`](#classURH__PlayerRecentlyPlayedWith_1a290ca2fafdcbfa9ffa31262c959f1ada) | 
`protected virtual void `[`Poll`](#classURH__PlayerRecentlyPlayedWith_1a49f8aeba81382aa0776987b35afcd0e3)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the object data.
`protected inline virtual void `[`Update`](#classURH__PlayerRecentlyPlayedWith_1aafa128b440a1b9b27cd29e3806e9926b)`(const GetPlayerRecentlyPlayedWith::Response & Other)` | 
`typedef `[`GetPlayerRecentlyPlayedWith`](#classURH__PlayerRecentlyPlayedWith_1a01cb99587a23e231e3286ab060f1c25b) | 

### Members

#### `public inline const TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > & `[`GetRecentlyPlayedWith`](#classURH__PlayerRecentlyPlayedWith_1a74df1d48f573569a976c167dc73ecf63)`() const` <a id="classURH__PlayerRecentlyPlayedWith_1a74df1d48f573569a976c167dc73ecf63"></a>

Get the current cached list of guide engagement by this player.

#### `protected TArray< `[`FRHAPI_RecentlyPlayedPlayer`](RHAPI_RecentlyPlayedPlayer.md#structFRHAPI__RecentlyPlayedPlayer)` > `[`RecentlyPlayedWith`](#classURH__PlayerRecentlyPlayedWith_1a290ca2fafdcbfa9ffa31262c959f1ada) <a id="classURH__PlayerRecentlyPlayedWith_1a290ca2fafdcbfa9ffa31262c959f1ada"></a>

#### `protected virtual void `[`Poll`](#classURH__PlayerRecentlyPlayedWith_1a49f8aeba81382aa0776987b35afcd0e3)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerRecentlyPlayedWith_1a49f8aeba81382aa0776987b35afcd0e3"></a>

Starts a poll of the object data.

#### Parameters
* `Delegate` Callback delegate for the poll.

#### `protected inline virtual void `[`Update`](#classURH__PlayerRecentlyPlayedWith_1aafa128b440a1b9b27cd29e3806e9926b)`(const GetPlayerRecentlyPlayedWith::Response & Other)` <a id="classURH__PlayerRecentlyPlayedWith_1aafa128b440a1b9b27cd29e3806e9926b"></a>

#### `typedef `[`GetPlayerRecentlyPlayedWith`](#classURH__PlayerRecentlyPlayedWith_1a01cb99587a23e231e3286ab060f1c25b) <a id="classURH__PlayerRecentlyPlayedWith_1a01cb99587a23e231e3286ab060f1c25b"></a>

## class `URH_PlayerGuideEngagement` <a id="classURH__PlayerGuideEngagement"></a>

```
class URH_PlayerGuideEngagement
  : public URH_PlayerInfoSubobject
```

Player Guide Engagement class used to store and update guide engagement (favorites and votes)

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`AddGuideToFavorites`](#classURH__PlayerGuideEngagement_1a7e68d8860390c2f87b7fcda8574c3c76)`(const FGuid & GuideID,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Add a guide to the player's favorite guides.
`public virtual void `[`RemoveGuideFromFavorites`](#classURH__PlayerGuideEngagement_1afc31986a9ad4915553dec34c949f8ff8)`(const FGuid & GuideID,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Remove a guide to the player's favorite guides.
`public virtual void `[`RateGuide`](#classURH__PlayerGuideEngagement_1a69a1fcae68f5cefb69f603f2e092b9b2)`(const FGuid & GuideID,int32 Rating,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Update the player's rating for a guide.
`public inline void `[`BLUEPRINT_RateGuide`](#classURH__PlayerGuideEngagement_1adea886c006756cd1bd5ebe44e76f9536)`(const FGuid & GuideID,int32 Rating,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Update the player's rating for a guide.
`public virtual void `[`GetGuideEngagementAsync`](#classURH__PlayerGuideEngagement_1a957cdc2bbb6591016bed507d38616393)`(TArray< FGuid > GuideIDs,const FRH_PlayerInfoGetGuideEngagementBlock & Delegate)` | Request a list of player reports received by this player.
`public inline const TMap< FGuid, `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetGuideEngagement`](#classURH__PlayerGuideEngagement_1ab440bdff8c900735418c063bdda6b4ef)`() const` | Get the current cached list of guide engagement by this player.
`protected TMap< FGuid, `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > `[`GuideEngagement`](#classURH__PlayerGuideEngagement_1aa1b43f01fbe1e59c21140751ddf2fabf) | 
`typedef `[`GetEntityGuideEngageementType`](#classURH__PlayerGuideEngagement_1a9baa717087b0ad5639b2950f9dd0dc25) | 
`typedef `[`AddEntityFavoriteGuideType`](#classURH__PlayerGuideEngagement_1a5a430361fec3b5b4d6734133146bf804) | 
`typedef `[`RemoveEntityFavoriteGuideType`](#classURH__PlayerGuideEngagement_1a38ff50425f9a98d341ba19fee593a176) | 
`typedef `[`AddEntityRatingForGuideType`](#classURH__PlayerGuideEngagement_1a60702e0dd111cc2b977e177a9b55c4c4) | 

### Members

#### `public virtual void `[`AddGuideToFavorites`](#classURH__PlayerGuideEngagement_1a7e68d8860390c2f87b7fcda8574c3c76)`(const FGuid & GuideID,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PlayerGuideEngagement_1a7e68d8860390c2f87b7fcda8574c3c76"></a>

Add a guide to the player's favorite guides.

#### Parameters
* `GuideID` Guide to add to favorite list 

* `Delegate` Callback delegate for the request.

#### `public virtual void `[`RemoveGuideFromFavorites`](#classURH__PlayerGuideEngagement_1afc31986a9ad4915553dec34c949f8ff8)`(const FGuid & GuideID,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PlayerGuideEngagement_1afc31986a9ad4915553dec34c949f8ff8"></a>

Remove a guide to the player's favorite guides.

#### Parameters
* `GuideID` Guide to add to favorite list 

* `Delegate` Callback delegate for the request.

#### `public virtual void `[`RateGuide`](#classURH__PlayerGuideEngagement_1a69a1fcae68f5cefb69f603f2e092b9b2)`(const FGuid & GuideID,int32 Rating,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PlayerGuideEngagement_1a69a1fcae68f5cefb69f603f2e092b9b2"></a>

Update the player's rating for a guide.

#### Parameters
* `GuideID` Guide to change rating 

* `Rating` Rating (-1, 0, 1) that the player is giving the guide 

* `Delegate` Callback delegate for the request.

#### `public inline void `[`BLUEPRINT_RateGuide`](#classURH__PlayerGuideEngagement_1adea886c006756cd1bd5ebe44e76f9536)`(const FGuid & GuideID,int32 Rating,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__PlayerGuideEngagement_1adea886c006756cd1bd5ebe44e76f9536"></a>

Update the player's rating for a guide.

#### Parameters
* `GuideID` Guide to change rating 

* `Rating` Rating (-1, 0, 1) that the player is giving the guide 

* `Delegate` Callback delegate for the request.

#### `public virtual void `[`GetGuideEngagementAsync`](#classURH__PlayerGuideEngagement_1a957cdc2bbb6591016bed507d38616393)`(TArray< FGuid > GuideIDs,const FRH_PlayerInfoGetGuideEngagementBlock & Delegate)` <a id="classURH__PlayerGuideEngagement_1a957cdc2bbb6591016bed507d38616393"></a>

Request a list of player reports received by this player.

#### Parameters
* `Cursor` The cursor to use for the request. 

* `PageSize` The size of the pages to poll, if 0, uses default 

* `Delegate` Callback delegate for the request.

#### `public inline const TMap< FGuid, `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetGuideEngagement`](#classURH__PlayerGuideEngagement_1ab440bdff8c900735418c063bdda6b4ef)`() const` <a id="classURH__PlayerGuideEngagement_1ab440bdff8c900735418c063bdda6b4ef"></a>

Get the current cached list of guide engagement by this player.

#### `protected TMap< FGuid, `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > `[`GuideEngagement`](#classURH__PlayerGuideEngagement_1aa1b43f01fbe1e59c21140751ddf2fabf) <a id="classURH__PlayerGuideEngagement_1aa1b43f01fbe1e59c21140751ddf2fabf"></a>

#### `typedef `[`GetEntityGuideEngageementType`](#classURH__PlayerGuideEngagement_1a9baa717087b0ad5639b2950f9dd0dc25) <a id="classURH__PlayerGuideEngagement_1a9baa717087b0ad5639b2950f9dd0dc25"></a>

#### `typedef `[`AddEntityFavoriteGuideType`](#classURH__PlayerGuideEngagement_1a5a430361fec3b5b4d6734133146bf804) <a id="classURH__PlayerGuideEngagement_1a5a430361fec3b5b4d6734133146bf804"></a>

#### `typedef `[`RemoveEntityFavoriteGuideType`](#classURH__PlayerGuideEngagement_1a38ff50425f9a98d341ba19fee593a176) <a id="classURH__PlayerGuideEngagement_1a38ff50425f9a98d341ba19fee593a176"></a>

#### `typedef `[`AddEntityRatingForGuideType`](#classURH__PlayerGuideEngagement_1a60702e0dd111cc2b977e177a9b55c4c4) <a id="classURH__PlayerGuideEngagement_1a60702e0dd111cc2b977e177a9b55c4c4"></a>

## class `URH_PlayerPlatformInfo` <a id="classURH__PlayerPlatformInfo"></a>

```
class URH_PlayerPlatformInfo
  : public UObject
```

Stores information a specific platform the player has linked to their account.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#classURH__PlayerPlatformInfo_1ac0ef7725316040314b2488260850eabb) | Players Platform ID struct.
`public FString `[`DisplayName`](#classURH__PlayerPlatformInfo_1a056f2023dd209b4807ac14a699cd594e) | Last seen display name for the player on the platform.
`public inline virtual `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`GetPlayerPlatformId`](#classURH__PlayerPlatformInfo_1a521e63d00404a311a21c224d73001b0b)`() const` | Gets the Platform Id struct for the player.
`public inline virtual FString `[`GetPlatformUserId`](#classURH__PlayerPlatformInfo_1aef5dad4953cf0c0edfb30119e6724bd9)`() const` | Gets the Platform Id for the player.
`public inline virtual ERHAPI_Platform `[`GetPlatform`](#classURH__PlayerPlatformInfo_1ae004f09524c3e8be17dedc18ab220e51)`() const` | Gets the Platform Type for the player.
`public inline virtual FString `[`GetLastKnownDisplayName`](#classURH__PlayerPlatformInfo_1a285f132c06d72cdb4876115765de9af2)`() const` | Gets the display name stored the last time this player logged in to the Rally Here server.

### Members

#### `public `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#classURH__PlayerPlatformInfo_1ac0ef7725316040314b2488260850eabb) <a id="classURH__PlayerPlatformInfo_1ac0ef7725316040314b2488260850eabb"></a>

Players Platform ID struct.

#### `public FString `[`DisplayName`](#classURH__PlayerPlatformInfo_1a056f2023dd209b4807ac14a699cd594e) <a id="classURH__PlayerPlatformInfo_1a056f2023dd209b4807ac14a699cd594e"></a>

Last seen display name for the player on the platform.

#### `public inline virtual `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`GetPlayerPlatformId`](#classURH__PlayerPlatformInfo_1a521e63d00404a311a21c224d73001b0b)`() const` <a id="classURH__PlayerPlatformInfo_1a521e63d00404a311a21c224d73001b0b"></a>

Gets the Platform Id struct for the player.

#### Returns
The players Platform Id struct.

#### `public inline virtual FString `[`GetPlatformUserId`](#classURH__PlayerPlatformInfo_1aef5dad4953cf0c0edfb30119e6724bd9)`() const` <a id="classURH__PlayerPlatformInfo_1aef5dad4953cf0c0edfb30119e6724bd9"></a>

Gets the Platform Id for the player.

#### Returns
The players Platform Unique Id.

#### `public inline virtual ERHAPI_Platform `[`GetPlatform`](#classURH__PlayerPlatformInfo_1ae004f09524c3e8be17dedc18ab220e51)`() const` <a id="classURH__PlayerPlatformInfo_1ae004f09524c3e8be17dedc18ab220e51"></a>

Gets the Platform Type for the player.

#### Returns
The players Platform Type.

#### `public inline virtual FString `[`GetLastKnownDisplayName`](#classURH__PlayerPlatformInfo_1a285f132c06d72cdb4876115765de9af2)`() const` <a id="classURH__PlayerPlatformInfo_1a285f132c06d72cdb4876115765de9af2"></a>

Gets the display name stored the last time this player logged in to the Rally Here server.

#### Returns
The players display name for the platform.

## class `URH_PlayerInfo` <a id="classURH__PlayerInfo"></a>

```
class URH_PlayerInfo
  : public UObject
```

Stores and fetchs all the information about a given player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline FORCEINLINE FGuid & `[`GetRHPlayerUuid`](#classURH__PlayerInfo_1aefce19eecdef10f5201e3169557e6faa)`()` | Gets the players Unique player Id.
`public inline FORCEINLINE `[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * `[`GetPresence`](#classURH__PlayerInfo_1ad9659a9732c06001f74d914c4d604ce1)`() const` | Gets The players presence class.
`public inline FORCEINLINE `[`URH_PlayerSettings`](PlayerInfo.md#classURH__PlayerSettings)` * `[`GetSettings`](#classURH__PlayerInfo_1af3df76bf1062e38b2ad1b4ca6981a633)`() const` | Gets The players settings class.
`public inline FORCEINLINE `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`GetSessions`](#classURH__PlayerInfo_1a2792b9d33049abbb1914e7a30aefc5d0)`() const` | Gets The players sessions class.
`public inline FORCEINLINE `[`URH_PlayerDeserter`](PlayerInfo.md#classURH__PlayerDeserter)` * `[`GetDeserter`](#classURH__PlayerInfo_1ae0f62a5c1c239065cf553b271028df78)`() const` | Gets The players deserter class.
`public inline FORCEINLINE `[`URH_PlayerMatches`](PlayerInfo.md#classURH__PlayerMatches)` * `[`GetMatches`](#classURH__PlayerInfo_1adf80a62480686f8a0a07df3984549e6d)`() const` | Gets The players matches class.
`public inline FORCEINLINE `[`URH_PlayerRecentlyPlayedWith`](PlayerInfo.md#classURH__PlayerRecentlyPlayedWith)` * `[`GetRecentlyPlayedWith`](#classURH__PlayerInfo_1a8dddb52b8d043d8946b8019e90e13194)`() const` | Gets The players recently played with class.
`public inline FORCEINLINE `[`URH_PlayerReports`](PlayerInfo.md#classURH__PlayerReports)` * `[`GetReports`](#classURH__PlayerInfo_1a4c837d7a547fd1cf311315834e0416d1)`() const` | Gets The players reports class.
`public inline FORCEINLINE `[`URH_PlayerGuideEngagement`](PlayerInfo.md#classURH__PlayerGuideEngagement)` * `[`GetGuideEngagement`](#classURH__PlayerInfo_1a2131dce1c13fb73eac8a52bef55a4bf6)`() const` | Gets The players Guide engagement class.
`public inline virtual TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > & `[`GetPlayerPlatformIds`](#classURH__PlayerInfo_1a3a419c311ffbd17b766e293407663f1c)`()` | Gets the associated platform ids of the player.
`public inline virtual const TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > & `[`GetPlayerPlatformIds`](#classURH__PlayerInfo_1ae2979dea7727e07acfba65d1ee9e5ceb)`() const` | Gets the associated platform ids of the player.
`public virtual TArray< `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > `[`GetPlayerPlatforms`](#classURH__PlayerInfo_1ad81c81dd9e0267d0aa3a22e99ececc93)`() const` | Gets the associated platforms of the player.
`public virtual `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetPlayerPlatformInfo`](#classURH__PlayerInfo_1a5888c7dd8cc1cab5e597fb73465753b8)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` | Gets a specific platform for the player.
`public inline `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`GetPlayerInventory`](#classURH__PlayerInfo_1a5f8f4ca11ffc3452f2bfb187e6501afb)`() const` | Gets the players Inventory Subsystem.
`public inline `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`GetPlayerNotifications`](#classURH__PlayerInfo_1ab06214fd39968624f2df09e152d2d782)`() const` | Gets the players Notification Subsystem.
`public virtual void `[`StartStreamingNotifications`](#classURH__PlayerInfo_1af0c9066d3c0b17440adfaf7e6b9cca9f)`()` | Request to start streaming notifications for this player.
`public virtual void `[`StopStreamingNotifications`](#classURH__PlayerInfo_1a030ec9d94254cb742700d1c3947412dd)`(bool bClearCache)` | Requests to stop streaming notifications.
`public inline virtual const TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > & `[`GetAllStoredPlayerSettings`](#classURH__PlayerInfo_1af879e401811cacbd0599278a2cce22b9)`() const` | Gets all the players store settings data.
`public inline virtual const TMap< FString, `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetAllStoredPlayerRankings`](#classURH__PlayerInfo_1aa0e1761677b503537a9b942ae5ad0d82)`() const` | Gets all the players stored ranking data.
`public virtual `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__PlayerInfo_1ab520fd6614f500da4d93332d10bb9bbb)`() const` | Gets the players Info Subsystem that the Player Info is on.
`public virtual void `[`InitializeForPlayer`](#classURH__PlayerInfo_1a95e3c7c6762abe6c801e98e708905d39)`(const FGuid & PlayerUuid)` | Initialized the player info from a given Player Unique Id.
`public virtual void `[`GetLastKnownDisplayNameAsync`](#classURH__PlayerInfo_1a2294e1b29debae35974c1776ef703cfd)`(const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock & Delegate,const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem)` | Gets the last known display name for the player, will make required API calls to retrieve the information if needed.
`public virtual bool `[`GetLastKnownDisplayName`](#classURH__PlayerInfo_1ac983a0c5b8e6e3df2f216b94b7fd249c)`(FString & OutDisplayName,ERHAPI_Platform PreferredPlatformType) const` | Gets the last known display name for the player.
`public virtual void `[`GetLinkedPlatformInfo`](#classURH__PlayerInfo_1a3cdeb290b652d16aa44e5c6e1e4ae44c)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlatformsBlock & Delegate)` | Gets the players linked platforms via API call.
`public inline virtual void `[`GetPlayerSettings`](#classURH__PlayerInfo_1a6f0c823fb1c55bcf4ab2482092cfad2a)`(const FString & SettingTypeId,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` | Gets the players settings information for a given type.
`public inline virtual void `[`GetPlayerSettingsForKeys`](#classURH__PlayerInfo_1ae6eeb698d34e599d1ec6f32b04c182eb)`(const FString & SettingTypeId,const TArray< FString > & Keys,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` | Gets the players settings information for a given type, restricted to a list of keys.
`public inline virtual void `[`SetPlayerSetting`](#classURH__PlayerInfo_1ae7b9fda2aa95f72d7786072877d22ee2)`(const FString & SettingTypeId,const FString & Key,const `[`FRHAPI_SetSinglePlayerSettingRequest`](RHAPI_SetSinglePlayerSettingRequest.md#structFRHAPI__SetSinglePlayerSettingRequest)` & Document,const FRH_PlayerInfoSetPlayerSettingBlock & Delegate)` | Sets the players settings information for a given type.
`public inline virtual void `[`DeletePlayerSetting`](#classURH__PlayerInfo_1a75f8a74087a97a33e9bc3dc296abbf0c)`(const FString & SettingTypeId,const FString & Key,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Deletes a players setting for a given type.
`public virtual void `[`GetPlayerRankings`](#classURH__PlayerInfo_1a03b9bc9136601f64145bec69a5e9e9e8)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)` | Gets the players ranking information for a given type.
`public virtual void `[`UpdatePlayerRanking`](#classURH__PlayerInfo_1afd6c1206e990ca64b9fa56a54e085094)`(const FString & RankId,const `[`FRHAPI_PlayerRankUpdateRequest`](RHAPI_PlayerRankUpdateRequest.md#structFRHAPI__PlayerRankUpdateRequest)` & RankData,const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)` | Sets the players settings information for a given type.
`public FAuthContextPtr `[`GetAuthContext`](#classURH__PlayerInfo_1a38aa7a072a97be36bc623a9cda702cdf)`() const` | Gets the local Auth Context for making API calls.
`public virtual ERHAPI_Platform `[`GetLoggedInPlatform`](#classURH__PlayerInfo_1a12baa089a6981ccb98fba0dab3ea550b)`() const` | Gets the local users logged in platform type.
`protected FGuid `[`RHPlayerUuid`](#classURH__PlayerInfo_1abd6b1bad2e1044b59af44d04f822cef1) | The Unique Player Id for the player.
`protected TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > `[`LinkedPlayerPlatforms`](#classURH__PlayerInfo_1a9f74bbf7a958d7a5a00d7daa8c159c2f) | Cache of all platforms the player is linked to.
`protected `[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * `[`PlayerPresence`](#classURH__PlayerInfo_1ae3c851503d0b5b8c024dc55252acb688) | The players Presence Information.
`protected `[`URH_PlayerSettings`](PlayerInfo.md#classURH__PlayerSettings)` * `[`PlayerSettings`](#classURH__PlayerInfo_1a22d44410f65c478ecede1d275028abca) | The player's settings information.
`protected `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`PlayerSessions`](#classURH__PlayerInfo_1a7af4d09bb83333d3028bc9a94cf067fd) | The players Sessions Information.
`protected `[`URH_PlayerDeserter`](PlayerInfo.md#classURH__PlayerDeserter)` * `[`PlayerDeserter`](#classURH__PlayerInfo_1ae80f624b84391b5e096fcca335c8e8e4) | The players Deserter Information.
`protected `[`URH_PlayerMatches`](PlayerInfo.md#classURH__PlayerMatches)` * `[`PlayerMatches`](#classURH__PlayerInfo_1a1f355fbb71f17bc3bb40283c931138aa) | The players Matches Information.
`protected `[`URH_PlayerRecentlyPlayedWith`](PlayerInfo.md#classURH__PlayerRecentlyPlayedWith)` * `[`PlayerRecentlyPlayedWith`](#classURH__PlayerInfo_1aa0e6141159de5642088e422efe871b3c) | The players Recently Played Information.
`protected `[`URH_PlayerReports`](PlayerInfo.md#classURH__PlayerReports)` * `[`PlayerReports`](#classURH__PlayerInfo_1a99a08ebcbd1c9c030f1d4ca7f9fcb572) | The players Reports Information.
`protected `[`URH_PlayerGuideEngagement`](PlayerInfo.md#classURH__PlayerGuideEngagement)` * `[`PlayerGuideEngagement`](#classURH__PlayerInfo_1aa7c569ce12168e33685201a4d99bcb5d) | The players Guide Engagement Information.
`protected `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`PlayerInventory`](#classURH__PlayerInfo_1ab06228dae3921d141dbbf2bf895c55da) | The Players Inventory Subsystem.
`protected `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`PlayerNotifications`](#classURH__PlayerInfo_1ac1eb1a25b4d89a7f7c75cbb6d4c9e4a8) | The Players Inventory Subsystem.
`protected TMap< FString, `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRankingsByRankingId`](#classURH__PlayerInfo_1a5728d3241aef0abed0788e90422ad071) | List of the player's rankings.
`protected FDateTime `[`LastRequestPlatforms`](#classURH__PlayerInfo_1aa5e1b18e6f2841b2f1e32914d8552756) | Tracks the last time the players linked platforms were requested for checking if the data is stale.
`protected FDateTime `[`LastRequestRankings`](#classURH__PlayerInfo_1a5e9c3bbbc44273cfa7286f52c457d435) | Tracks the last time the player rankings were requested for checking if the data is stale.
`protected virtual void `[`OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse`](#classURH__PlayerInfo_1a49e19ae4082f15e22b2062c1cb78deb0)`(bool bSuccess,const TArray< `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > & Platforms,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate,const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem)` | Handles the response to a Get Linked Platforms For Last Known Display Name call.
`protected virtual void `[`OnDisplayNameSanitized`](#classURH__PlayerInfo_1afe5a34e86382c3f78767f2d72e3819fd)`(bool bSuccess,const FString & SanitizedMessage,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate)` | Handles the response to sanitizing the players display name.
`protected virtual void `[`OnGetPlayerLinkedPlatformsResponse`](#classURH__PlayerInfo_1ada74501b2e422f1fcf8f76825d74cc58)`(const GetPlatforms::Response & Response,const FRH_PlayerInfoGetPlatformsBlock Delegate)` | Handles the response to a Get Linked Platforms call.
`protected virtual void `[`OnGetPlayerRankingsResponse`](#classURH__PlayerInfo_1a53c355b2f85273d37008d685c3cc113c)`(const GetRankings::Response & Response,const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)` | Handles the response to a Get Player Rankings call.
`protected virtual void `[`OnUpdatePlayerRankingResponse`](#classURH__PlayerInfo_1a214672d0d5001ec24098b5414b0fc35d)`(const UpdateRanking::Response & Response,const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)` | Handles the response to a Update Player Ranking call.
`typedef `[`GetPlatforms`](#classURH__PlayerInfo_1a88c3597ebf7f47399d936f5a96d344f6) | 
`typedef `[`GetRankings`](#classURH__PlayerInfo_1ae1180995c5f25cb946b6f47e44886c46) | 
`typedef `[`UpdateRanking`](#classURH__PlayerInfo_1a0dde72a36a43d91264f8dc89aafcd5de) | 

### Members

#### `public inline FORCEINLINE FGuid & `[`GetRHPlayerUuid`](#classURH__PlayerInfo_1aefce19eecdef10f5201e3169557e6faa)`()` <a id="classURH__PlayerInfo_1aefce19eecdef10f5201e3169557e6faa"></a>

Gets the players Unique player Id.

#### Returns
The players Unique Player Id.

#### `public inline FORCEINLINE `[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * `[`GetPresence`](#classURH__PlayerInfo_1ad9659a9732c06001f74d914c4d604ce1)`() const` <a id="classURH__PlayerInfo_1ad9659a9732c06001f74d914c4d604ce1"></a>

Gets The players presence class.

#### Returns
The players presence class.

#### `public inline FORCEINLINE `[`URH_PlayerSettings`](PlayerInfo.md#classURH__PlayerSettings)` * `[`GetSettings`](#classURH__PlayerInfo_1af3df76bf1062e38b2ad1b4ca6981a633)`() const` <a id="classURH__PlayerInfo_1af3df76bf1062e38b2ad1b4ca6981a633"></a>

Gets The players settings class.

#### Returns
The players settings class.

#### `public inline FORCEINLINE `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`GetSessions`](#classURH__PlayerInfo_1a2792b9d33049abbb1914e7a30aefc5d0)`() const` <a id="classURH__PlayerInfo_1a2792b9d33049abbb1914e7a30aefc5d0"></a>

Gets The players sessions class.

#### Returns
The players sessions class.

#### `public inline FORCEINLINE `[`URH_PlayerDeserter`](PlayerInfo.md#classURH__PlayerDeserter)` * `[`GetDeserter`](#classURH__PlayerInfo_1ae0f62a5c1c239065cf553b271028df78)`() const` <a id="classURH__PlayerInfo_1ae0f62a5c1c239065cf553b271028df78"></a>

Gets The players deserter class.

#### Returns
The players deserter class.

#### `public inline FORCEINLINE `[`URH_PlayerMatches`](PlayerInfo.md#classURH__PlayerMatches)` * `[`GetMatches`](#classURH__PlayerInfo_1adf80a62480686f8a0a07df3984549e6d)`() const` <a id="classURH__PlayerInfo_1adf80a62480686f8a0a07df3984549e6d"></a>

Gets The players matches class.

#### Returns
The players matches class.

#### `public inline FORCEINLINE `[`URH_PlayerRecentlyPlayedWith`](PlayerInfo.md#classURH__PlayerRecentlyPlayedWith)` * `[`GetRecentlyPlayedWith`](#classURH__PlayerInfo_1a8dddb52b8d043d8946b8019e90e13194)`() const` <a id="classURH__PlayerInfo_1a8dddb52b8d043d8946b8019e90e13194"></a>

Gets The players recently played with class.

#### Returns
The players recently played with class.

#### `public inline FORCEINLINE `[`URH_PlayerReports`](PlayerInfo.md#classURH__PlayerReports)` * `[`GetReports`](#classURH__PlayerInfo_1a4c837d7a547fd1cf311315834e0416d1)`() const` <a id="classURH__PlayerInfo_1a4c837d7a547fd1cf311315834e0416d1"></a>

Gets The players reports class.

#### Returns
The players reports class.

#### `public inline FORCEINLINE `[`URH_PlayerGuideEngagement`](PlayerInfo.md#classURH__PlayerGuideEngagement)` * `[`GetGuideEngagement`](#classURH__PlayerInfo_1a2131dce1c13fb73eac8a52bef55a4bf6)`() const` <a id="classURH__PlayerInfo_1a2131dce1c13fb73eac8a52bef55a4bf6"></a>

Gets The players Guide engagement class.

#### Returns
The players Guide engagemetn class.

#### `public inline virtual TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > & `[`GetPlayerPlatformIds`](#classURH__PlayerInfo_1a3a419c311ffbd17b766e293407663f1c)`()` <a id="classURH__PlayerInfo_1a3a419c311ffbd17b766e293407663f1c"></a>

Gets the associated platform ids of the player.

#### Returns
The players associated platforms ids.

#### `public inline virtual const TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > & `[`GetPlayerPlatformIds`](#classURH__PlayerInfo_1ae2979dea7727e07acfba65d1ee9e5ceb)`() const` <a id="classURH__PlayerInfo_1ae2979dea7727e07acfba65d1ee9e5ceb"></a>

Gets the associated platform ids of the player.

#### Returns
The players associated platforms ids.

#### `public virtual TArray< `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > `[`GetPlayerPlatforms`](#classURH__PlayerInfo_1ad81c81dd9e0267d0aa3a22e99ececc93)`() const` <a id="classURH__PlayerInfo_1ad81c81dd9e0267d0aa3a22e99ececc93"></a>

Gets the associated platforms of the player.

#### Returns
The players associated platforms.

#### `public virtual `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetPlayerPlatformInfo`](#classURH__PlayerInfo_1a5888c7dd8cc1cab5e597fb73465753b8)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` <a id="classURH__PlayerInfo_1a5888c7dd8cc1cab5e597fb73465753b8"></a>

Gets a specific platform for the player.

#### Parameters
* `PlayerPlatformId` The Id of the platform being requested. 

#### Returns
The platform requested for the player if it exists.

#### `public inline `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`GetPlayerInventory`](#classURH__PlayerInfo_1a5f8f4ca11ffc3452f2bfb187e6501afb)`() const` <a id="classURH__PlayerInfo_1a5f8f4ca11ffc3452f2bfb187e6501afb"></a>

Gets the players Inventory Subsystem.

#### Returns
The players Inventory Subsystem.

#### `public inline `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`GetPlayerNotifications`](#classURH__PlayerInfo_1ab06214fd39968624f2df09e152d2d782)`() const` <a id="classURH__PlayerInfo_1ab06214fd39968624f2df09e152d2d782"></a>

Gets the players Notification Subsystem.

#### Returns
The players Notification Subsystem.

#### `public virtual void `[`StartStreamingNotifications`](#classURH__PlayerInfo_1af0c9066d3c0b17440adfaf7e6b9cca9f)`()` <a id="classURH__PlayerInfo_1af0c9066d3c0b17440adfaf7e6b9cca9f"></a>

Request to start streaming notifications for this player.

#### `public virtual void `[`StopStreamingNotifications`](#classURH__PlayerInfo_1a030ec9d94254cb742700d1c3947412dd)`(bool bClearCache)` <a id="classURH__PlayerInfo_1a030ec9d94254cb742700d1c3947412dd"></a>

Requests to stop streaming notifications.

#### Parameters
* `[in[` bClearCache If true, the cache of notifications will be cleared.

#### `public inline virtual const TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > & `[`GetAllStoredPlayerSettings`](#classURH__PlayerInfo_1af879e401811cacbd0599278a2cce22b9)`() const` <a id="classURH__PlayerInfo_1af879e401811cacbd0599278a2cce22b9"></a>

Gets all the players store settings data.

#### Returns
The players stored settings data.

#### `public inline virtual const TMap< FString, `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetAllStoredPlayerRankings`](#classURH__PlayerInfo_1aa0e1761677b503537a9b942ae5ad0d82)`() const` <a id="classURH__PlayerInfo_1aa0e1761677b503537a9b942ae5ad0d82"></a>

Gets all the players stored ranking data.

#### Returns
The players stored settings data.

#### `public virtual `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__PlayerInfo_1ab520fd6614f500da4d93332d10bb9bbb)`() const` <a id="classURH__PlayerInfo_1ab520fd6614f500da4d93332d10bb9bbb"></a>

Gets the players Info Subsystem that the Player Info is on.

#### Returns
The Player Info Subsystem.

#### `public virtual void `[`InitializeForPlayer`](#classURH__PlayerInfo_1a95e3c7c6762abe6c801e98e708905d39)`(const FGuid & PlayerUuid)` <a id="classURH__PlayerInfo_1a95e3c7c6762abe6c801e98e708905d39"></a>

Initialized the player info from a given Player Unique Id.

#### Parameters
* `PlayerUuid` The Unique Id of the player.

#### `public virtual void `[`GetLastKnownDisplayNameAsync`](#classURH__PlayerInfo_1a2294e1b29debae35974c1776ef703cfd)`(const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock & Delegate,const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem)` <a id="classURH__PlayerInfo_1a2294e1b29debae35974c1776ef703cfd"></a>

Gets the last known display name for the player, will make required API calls to retrieve the information if needed.

#### Parameters
* `LocalPlayerSubsystem` The Local Player Subsystem to sanitizing player names. 

* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `PreferredPlatformType` If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player. 

* `Delegate` Callback with the players display name.

#### `public virtual bool `[`GetLastKnownDisplayName`](#classURH__PlayerInfo_1ac983a0c5b8e6e3df2f216b94b7fd249c)`(FString & OutDisplayName,ERHAPI_Platform PreferredPlatformType) const` <a id="classURH__PlayerInfo_1ac983a0c5b8e6e3df2f216b94b7fd249c"></a>

Gets the last known display name for the player.

#### Parameters
* `PreferredPlatformType` If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player. 

* `OutDisplayName` The player's display name. 

#### Returns
If the call successfully found a display name for the player already stored on the client.

#### `public virtual void `[`GetLinkedPlatformInfo`](#classURH__PlayerInfo_1a3cdeb290b652d16aa44e5c6e1e4ae44c)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlatformsBlock & Delegate)` <a id="classURH__PlayerInfo_1a3cdeb290b652d16aa44e5c6e1e4ae44c"></a>

Gets the players linked platforms via API call.

#### Parameters
* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players linked platforms.

#### `public inline virtual void `[`GetPlayerSettings`](#classURH__PlayerInfo_1a6f0c823fb1c55bcf4ab2482092cfad2a)`(const FString & SettingTypeId,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` <a id="classURH__PlayerInfo_1a6f0c823fb1c55bcf4ab2482092cfad2a"></a>

Gets the players settings information for a given type.

#### Parameters
* `SettingTypeId` The setting type requested. 

* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players settings for the given type.

#### `public inline virtual void `[`GetPlayerSettingsForKeys`](#classURH__PlayerInfo_1ae6eeb698d34e599d1ec6f32b04c182eb)`(const FString & SettingTypeId,const TArray< FString > & Keys,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` <a id="classURH__PlayerInfo_1ae6eeb698d34e599d1ec6f32b04c182eb"></a>

Gets the players settings information for a given type, restricted to a list of keys.

#### Parameters
* `SettingTypeId` The setting type requested. 

* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players settings for the given type.

#### `public inline virtual void `[`SetPlayerSetting`](#classURH__PlayerInfo_1ae7b9fda2aa95f72d7786072877d22ee2)`(const FString & SettingTypeId,const FString & Key,const `[`FRHAPI_SetSinglePlayerSettingRequest`](RHAPI_SetSinglePlayerSettingRequest.md#structFRHAPI__SetSinglePlayerSettingRequest)` & Document,const FRH_PlayerInfoSetPlayerSettingBlock & Delegate)` <a id="classURH__PlayerInfo_1ae7b9fda2aa95f72d7786072877d22ee2"></a>

Sets the players settings information for a given type.

#### Parameters
* `SettingTypeId` The setting type to update. 

* `Key` The setting key being updated within the type. 

* `Document` Json Document to be stored. 

* `Delegate` Callback when the operation is complete with success information.

#### `public inline virtual void `[`DeletePlayerSetting`](#classURH__PlayerInfo_1a75f8a74087a97a33e9bc3dc296abbf0c)`(const FString & SettingTypeId,const FString & Key,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__PlayerInfo_1a75f8a74087a97a33e9bc3dc296abbf0c"></a>

Deletes a players setting for a given type.

#### Parameters
* `SettingTypeId` The setting type to update. 

* `Key` The setting key being updated within the type. 

* `Delegate` Callback when the operation is complete with success information.

#### `public virtual void `[`GetPlayerRankings`](#classURH__PlayerInfo_1a03b9bc9136601f64145bec69a5e9e9e8)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)` <a id="classURH__PlayerInfo_1a03b9bc9136601f64145bec69a5e9e9e8"></a>

Gets the players ranking information for a given type.

#### Parameters
* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players ranking for the given type.

#### `public virtual void `[`UpdatePlayerRanking`](#classURH__PlayerInfo_1afd6c1206e990ca64b9fa56a54e085094)`(const FString & RankId,const `[`FRHAPI_PlayerRankUpdateRequest`](RHAPI_PlayerRankUpdateRequest.md#structFRHAPI__PlayerRankUpdateRequest)` & RankData,const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)` <a id="classURH__PlayerInfo_1afd6c1206e990ca64b9fa56a54e085094"></a>

Sets the players settings information for a given type.

#### Parameters
* `SettingTypeId` The setting type to update. 

* `SettingsData` Data to be stored into the players settings. 

* `Delegate` Callback when the operation is complete with success information.

#### `public FAuthContextPtr `[`GetAuthContext`](#classURH__PlayerInfo_1a38aa7a072a97be36bc623a9cda702cdf)`() const` <a id="classURH__PlayerInfo_1a38aa7a072a97be36bc623a9cda702cdf"></a>

Gets the local Auth Context for making API calls.

#### Returns
Local auth context for the given player or instance

#### `public virtual ERHAPI_Platform `[`GetLoggedInPlatform`](#classURH__PlayerInfo_1a12baa089a6981ccb98fba0dab3ea550b)`() const` <a id="classURH__PlayerInfo_1a12baa089a6981ccb98fba0dab3ea550b"></a>

Gets the local users logged in platform type.

#### Returns
The Platform type of the local user

#### `protected FGuid `[`RHPlayerUuid`](#classURH__PlayerInfo_1abd6b1bad2e1044b59af44d04f822cef1) <a id="classURH__PlayerInfo_1abd6b1bad2e1044b59af44d04f822cef1"></a>

The Unique Player Id for the player.

#### `protected TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > `[`LinkedPlayerPlatforms`](#classURH__PlayerInfo_1a9f74bbf7a958d7a5a00d7daa8c159c2f) <a id="classURH__PlayerInfo_1a9f74bbf7a958d7a5a00d7daa8c159c2f"></a>

Cache of all platforms the player is linked to.

#### `protected `[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * `[`PlayerPresence`](#classURH__PlayerInfo_1ae3c851503d0b5b8c024dc55252acb688) <a id="classURH__PlayerInfo_1ae3c851503d0b5b8c024dc55252acb688"></a>

The players Presence Information.

#### `protected `[`URH_PlayerSettings`](PlayerInfo.md#classURH__PlayerSettings)` * `[`PlayerSettings`](#classURH__PlayerInfo_1a22d44410f65c478ecede1d275028abca) <a id="classURH__PlayerInfo_1a22d44410f65c478ecede1d275028abca"></a>

The player's settings information.

#### `protected `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`PlayerSessions`](#classURH__PlayerInfo_1a7af4d09bb83333d3028bc9a94cf067fd) <a id="classURH__PlayerInfo_1a7af4d09bb83333d3028bc9a94cf067fd"></a>

The players Sessions Information.

#### `protected `[`URH_PlayerDeserter`](PlayerInfo.md#classURH__PlayerDeserter)` * `[`PlayerDeserter`](#classURH__PlayerInfo_1ae80f624b84391b5e096fcca335c8e8e4) <a id="classURH__PlayerInfo_1ae80f624b84391b5e096fcca335c8e8e4"></a>

The players Deserter Information.

#### `protected `[`URH_PlayerMatches`](PlayerInfo.md#classURH__PlayerMatches)` * `[`PlayerMatches`](#classURH__PlayerInfo_1a1f355fbb71f17bc3bb40283c931138aa) <a id="classURH__PlayerInfo_1a1f355fbb71f17bc3bb40283c931138aa"></a>

The players Matches Information.

#### `protected `[`URH_PlayerRecentlyPlayedWith`](PlayerInfo.md#classURH__PlayerRecentlyPlayedWith)` * `[`PlayerRecentlyPlayedWith`](#classURH__PlayerInfo_1aa0e6141159de5642088e422efe871b3c) <a id="classURH__PlayerInfo_1aa0e6141159de5642088e422efe871b3c"></a>

The players Recently Played Information.

#### `protected `[`URH_PlayerReports`](PlayerInfo.md#classURH__PlayerReports)` * `[`PlayerReports`](#classURH__PlayerInfo_1a99a08ebcbd1c9c030f1d4ca7f9fcb572) <a id="classURH__PlayerInfo_1a99a08ebcbd1c9c030f1d4ca7f9fcb572"></a>

The players Reports Information.

#### `protected `[`URH_PlayerGuideEngagement`](PlayerInfo.md#classURH__PlayerGuideEngagement)` * `[`PlayerGuideEngagement`](#classURH__PlayerInfo_1aa7c569ce12168e33685201a4d99bcb5d) <a id="classURH__PlayerInfo_1aa7c569ce12168e33685201a4d99bcb5d"></a>

The players Guide Engagement Information.

#### `protected `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`PlayerInventory`](#classURH__PlayerInfo_1ab06228dae3921d141dbbf2bf895c55da) <a id="classURH__PlayerInfo_1ab06228dae3921d141dbbf2bf895c55da"></a>

The Players Inventory Subsystem.

#### `protected `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`PlayerNotifications`](#classURH__PlayerInfo_1ac1eb1a25b4d89a7f7c75cbb6d4c9e4a8) <a id="classURH__PlayerInfo_1ac1eb1a25b4d89a7f7c75cbb6d4c9e4a8"></a>

The Players Inventory Subsystem.

#### `protected TMap< FString, `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRankingsByRankingId`](#classURH__PlayerInfo_1a5728d3241aef0abed0788e90422ad071) <a id="classURH__PlayerInfo_1a5728d3241aef0abed0788e90422ad071"></a>

List of the player's rankings.

#### `protected FDateTime `[`LastRequestPlatforms`](#classURH__PlayerInfo_1aa5e1b18e6f2841b2f1e32914d8552756) <a id="classURH__PlayerInfo_1aa5e1b18e6f2841b2f1e32914d8552756"></a>

Tracks the last time the players linked platforms were requested for checking if the data is stale.

#### `protected FDateTime `[`LastRequestRankings`](#classURH__PlayerInfo_1a5e9c3bbbc44273cfa7286f52c457d435) <a id="classURH__PlayerInfo_1a5e9c3bbbc44273cfa7286f52c457d435"></a>

Tracks the last time the player rankings were requested for checking if the data is stale.

#### `protected virtual void `[`OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse`](#classURH__PlayerInfo_1a49e19ae4082f15e22b2062c1cb78deb0)`(bool bSuccess,const TArray< `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > & Platforms,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate,const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem)` <a id="classURH__PlayerInfo_1a49e19ae4082f15e22b2062c1cb78deb0"></a>

Handles the response to a Get Linked Platforms For Last Known Display Name call.

#### Parameters
* `bSuccess` If the call was successful. 

* `Platforms` List of platforms the player is linked to. 

* `PreferredPlatformType` The preferred platform type to use for the player. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `LocalPlayerSubsystem` The local player subsystem that made the original call.

#### `protected virtual void `[`OnDisplayNameSanitized`](#classURH__PlayerInfo_1afe5a34e86382c3f78767f2d72e3819fd)`(bool bSuccess,const FString & SanitizedMessage,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate)` <a id="classURH__PlayerInfo_1afe5a34e86382c3f78767f2d72e3819fd"></a>

Handles the response to sanitizing the players display name.

#### Parameters
* `bSuccess` If the call was successful. 

* `SanitizedMessage` The sanitized display name. 

* `PreferredPlatformType` The preferred platform type to use for the player. 

* `Delegate` Callback Delegate to return the name.

#### `protected virtual void `[`OnGetPlayerLinkedPlatformsResponse`](#classURH__PlayerInfo_1ada74501b2e422f1fcf8f76825d74cc58)`(const GetPlatforms::Response & Response,const FRH_PlayerInfoGetPlatformsBlock Delegate)` <a id="classURH__PlayerInfo_1ada74501b2e422f1fcf8f76825d74cc58"></a>

Handles the response to a Get Linked Platforms call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnGetPlayerRankingsResponse`](#classURH__PlayerInfo_1a53c355b2f85273d37008d685c3cc113c)`(const GetRankings::Response & Response,const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)` <a id="classURH__PlayerInfo_1a53c355b2f85273d37008d685c3cc113c"></a>

Handles the response to a Get Player Rankings call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnUpdatePlayerRankingResponse`](#classURH__PlayerInfo_1a214672d0d5001ec24098b5414b0fc35d)`(const UpdateRanking::Response & Response,const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)` <a id="classURH__PlayerInfo_1a214672d0d5001ec24098b5414b0fc35d"></a>

Handles the response to a Update Player Ranking call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `typedef `[`GetPlatforms`](#classURH__PlayerInfo_1a88c3597ebf7f47399d936f5a96d344f6) <a id="classURH__PlayerInfo_1a88c3597ebf7f47399d936f5a96d344f6"></a>

#### `typedef `[`GetRankings`](#classURH__PlayerInfo_1ae1180995c5f25cb946b6f47e44886c46) <a id="classURH__PlayerInfo_1ae1180995c5f25cb946b6f47e44886c46"></a>

#### `typedef `[`UpdateRanking`](#classURH__PlayerInfo_1a0dde72a36a43d91264f8dc89aafcd5de) <a id="classURH__PlayerInfo_1a0dde72a36a43d91264f8dc89aafcd5de"></a>

## class `URH_PlayerInfoSubsystem` <a id="classURH__PlayerInfoSubsystem"></a>

```
class URH_PlayerInfoSubsystem
  : public URH_SandboxedSubsystemPlugin
  : public FTickableGameObject
```

Subsystem used to track and request information about players.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__PlayerInfoSubsystem_1a572d4ae155b61530e30fdf4943313228)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__PlayerInfoSubsystem_1ac84840e29cafeb3dd61382c359dd93e8)`()` | Safely tears down the subsystem.
`public inline const TMap< FGuid, `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * > & `[`GetPlayerInfos`](#classURH__PlayerInfoSubsystem_1ad5e71939758e23389251760e48d4efdb)`() const` | Gets a map of all the player infos.
`public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetOrCreatePlayerInfo`](#classURH__PlayerInfoSubsystem_1a77ee4243e4f177805461015fd2a51d21)`(const FGuid & PlayerUuid)` | Gets a Player Info object for a given Player Unique Id, creates if needed.
`public virtual `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetOrCreatePlayerPlatformInfo`](#classURH__PlayerInfoSubsystem_1ad233b8f23a07b796170eb861198abe6f)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId)` | Gets a Player Info object for a given Player Platform Id, creates if needed.
`public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`FindPlayerInfoByPlatformId`](#classURH__PlayerInfoSubsystem_1a2cbbca04050ce7a4fe92e0ddf0218dda)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` | Gets a Player Info object for a given Player Platform Id.
`public inline virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInfoSubsystem_1a6f36f578556bb8d774e302491b38bcfc)`(const FGuid & PlayerUuid) const` | Gets a Player Info object for a given Unique Player Id.
`public inline virtual `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetPlayerPlatformInfo`](#classURH__PlayerInfoSubsystem_1a3583f26376d4cc3906cc2d09942c5f6e)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` | Gets the platform info object for a player by the Platform Id.
`public inline virtual void `[`AddPlayerLink`](#classURH__PlayerInfoSubsystem_1a4036500640f2d33632faee6aa5c09755)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId,const FGuid & PlayerUuid)` | Adds a platform mapping for a given player.
`public virtual void `[`LookupPlayer`](#classURH__PlayerInfoSubsystem_1a4440282ee5fee5dfee7e23cb905a87d7)`(FString PlayerName,const FRH_PlayerInfoLookupPlayerBlock & Delegate)` | Searchs for all players who use the given display name via API Call.
`public virtual void `[`LookupPlayerByPlatformUserId`](#classURH__PlayerInfoSubsystem_1a9f0630cd321711484630ba48a75cdef2)`(`[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` PlayerPlatformId,const FRH_PlayerInfoLookupPlayerBlock & Delegate)` | Searchs for players associated with the given platform and platform user id via API Call.
`public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`RemovePlayerInfoFromCache`](#classURH__PlayerInfoSubsystem_1a25bda7fb6a01c6158f8aadb1d6f2eab4)`(const FGuid & PlayerUuid)` | Remove a specific Player Info from PlayerInfoSubsystem's cache.
`public virtual void `[`Tick`](#classURH__PlayerInfoSubsystem_1abf83de825c346653c1bc3cba1df75815)`(float DeltaTime)` | Unreals basic Tick function.
`public inline virtual bool `[`IsTickable`](#classURH__PlayerInfoSubsystem_1a49b75fe691775b67c9af6a818d2e4592)`() const` | Gets if currently tickable.
`public inline virtual TStatId `[`GetStatId`](#classURH__PlayerInfoSubsystem_1a159d3535c053aa721f87274f48742cfa)`() const` | Gets the stat to use for the tick time.
`protected TSubclassOf< `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` > `[`PlayerInfoClassOverride`](#classURH__PlayerInfoSubsystem_1a53d13eb27e48d9e00cd52986c5741fcf) | Override class for Player Info if extended.
`protected TMap< FGuid, `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * > `[`PlayerInfos`](#classURH__PlayerInfoSubsystem_1a616fa3bfe4df4b7f8edd78f2414a42d5) | Map of Player Infos to their player Uuids.
`protected TMap< `[`FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId), [URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > `[`PlayerPlatformInfos`](#classURH__PlayerInfoSubsystem_1a17e2ac363f59929e2c5be24746c03dbe) | Map of Player Platform Infos to their Platform Ids.
`protected TMap< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)`, FGuid > `[`PlayerPlatformIdToUuidMap`](#classURH__PlayerInfoSubsystem_1a25ed5e4057d3929418e973228f9851a1) | Map of Player Uuid to their Platform Ids.
`protected virtual void `[`ClearPlayerInfoCache`](#classURH__PlayerInfoSubsystem_1a2ddbe40cfed50b7e76437aec24e4c054)`()` | Clears the cached player infos.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__PlayerInfoSubsystem_1a5e14a7f60c320b9a2186e33726f7e5ee)`()` | Initializes the subsystem with defaults for its cached data.
`protected virtual void `[`OnLookupPlayerResponse`](#classURH__PlayerInfoSubsystem_1a5d178f65256eafbf0fccfc17e87bae62)`(const TLookupPlayer::Response & Response,const FRH_PlayerInfoLookupPlayerBlock Delegate)` | Handles the response to a Lookup Player call.
`protected virtual void `[`OnLookupPlayerByPlatformUserIdResponse`](#classURH__PlayerInfoSubsystem_1a0cd6b58da263387aead9c9d17729cb27)`(const TLookupPlayer::Response & Response,const FRH_PlayerInfoLookupPlayerBlock Delegate)` | Handles the response to a Lookup Player By Platform User Id call.
`typedef `[`TLookupPlayer`](#classURH__PlayerInfoSubsystem_1a221cacf49cc61a7df9b7e791befbb312) | 

### Members

#### `public virtual void `[`Initialize`](#classURH__PlayerInfoSubsystem_1a572d4ae155b61530e30fdf4943313228)`()` <a id="classURH__PlayerInfoSubsystem_1a572d4ae155b61530e30fdf4943313228"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__PlayerInfoSubsystem_1ac84840e29cafeb3dd61382c359dd93e8)`()` <a id="classURH__PlayerInfoSubsystem_1ac84840e29cafeb3dd61382c359dd93e8"></a>

Safely tears down the subsystem.

#### `public inline const TMap< FGuid, `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * > & `[`GetPlayerInfos`](#classURH__PlayerInfoSubsystem_1ad5e71939758e23389251760e48d4efdb)`() const` <a id="classURH__PlayerInfoSubsystem_1ad5e71939758e23389251760e48d4efdb"></a>

Gets a map of all the player infos.

#### Returns
Map of player infos by Player Unique Id

#### `public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetOrCreatePlayerInfo`](#classURH__PlayerInfoSubsystem_1a77ee4243e4f177805461015fd2a51d21)`(const FGuid & PlayerUuid)` <a id="classURH__PlayerInfoSubsystem_1a77ee4243e4f177805461015fd2a51d21"></a>

Gets a Player Info object for a given Player Unique Id, creates if needed.

#### Parameters
* `PlayerUuid` Unique Player Id for the given player 

#### Returns
Player Info for the player

#### `public virtual `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetOrCreatePlayerPlatformInfo`](#classURH__PlayerInfoSubsystem_1ad233b8f23a07b796170eb861198abe6f)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId)` <a id="classURH__PlayerInfoSubsystem_1ad233b8f23a07b796170eb861198abe6f"></a>

Gets a Player Info object for a given Player Platform Id, creates if needed.

#### Parameters
* `PlayerPlatformId` Player Platform Id for the given player 

#### Returns
Player Info for the player

#### `public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`FindPlayerInfoByPlatformId`](#classURH__PlayerInfoSubsystem_1a2cbbca04050ce7a4fe92e0ddf0218dda)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` <a id="classURH__PlayerInfoSubsystem_1a2cbbca04050ce7a4fe92e0ddf0218dda"></a>

Gets a Player Info object for a given Player Platform Id.

#### Parameters
* `PlayerPlatformId` Player Platform Id for the given player 

#### Returns
Player Info for the player if found

#### `public inline virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInfoSubsystem_1a6f36f578556bb8d774e302491b38bcfc)`(const FGuid & PlayerUuid) const` <a id="classURH__PlayerInfoSubsystem_1a6f36f578556bb8d774e302491b38bcfc"></a>

Gets a Player Info object for a given Unique Player Id.

#### Parameters
* `PlayerUuid` Unique Player Id for the given player 

#### Returns
Player Info for the player if found

#### `public inline virtual `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetPlayerPlatformInfo`](#classURH__PlayerInfoSubsystem_1a3583f26376d4cc3906cc2d09942c5f6e)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` <a id="classURH__PlayerInfoSubsystem_1a3583f26376d4cc3906cc2d09942c5f6e"></a>

Gets the platform info object for a player by the Platform Id.

#### Parameters
* `PlayerPlatformId` Player Platform Id for the given player 

#### Returns
Player Platform Info for the player if found

#### `public inline virtual void `[`AddPlayerLink`](#classURH__PlayerInfoSubsystem_1a4036500640f2d33632faee6aa5c09755)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId,const FGuid & PlayerUuid)` <a id="classURH__PlayerInfoSubsystem_1a4036500640f2d33632faee6aa5c09755"></a>

Adds a platform mapping for a given player.

#### Parameters
* `PlayerUuid` Unique Player Id for the given player 

* `PlayerPlatformId` Player Platform Id for the given player

#### `public virtual void `[`LookupPlayer`](#classURH__PlayerInfoSubsystem_1a4440282ee5fee5dfee7e23cb905a87d7)`(FString PlayerName,const FRH_PlayerInfoLookupPlayerBlock & Delegate)` <a id="classURH__PlayerInfoSubsystem_1a4440282ee5fee5dfee7e23cb905a87d7"></a>

Searchs for all players who use the given display name via API Call.

#### Parameters
* `PlayerName` The display name we want to search for 

* `Delegate` Callback with the all PlayerInfos that are found with that display name

#### `public virtual void `[`LookupPlayerByPlatformUserId`](#classURH__PlayerInfoSubsystem_1a9f0630cd321711484630ba48a75cdef2)`(`[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` PlayerPlatformId,const FRH_PlayerInfoLookupPlayerBlock & Delegate)` <a id="classURH__PlayerInfoSubsystem_1a9f0630cd321711484630ba48a75cdef2"></a>

Searchs for players associated with the given platform and platform user id via API Call.

#### Parameters
* `Platform` The platform used for the lookup 

* `PlatformUserId` The platform user id used for the lookup 

* `Delegate` Callback with the all PlayerInfos that are found with that display name

#### `public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`RemovePlayerInfoFromCache`](#classURH__PlayerInfoSubsystem_1a25bda7fb6a01c6158f8aadb1d6f2eab4)`(const FGuid & PlayerUuid)` <a id="classURH__PlayerInfoSubsystem_1a25bda7fb6a01c6158f8aadb1d6f2eab4"></a>

Remove a specific Player Info from PlayerInfoSubsystem's cache.

#### Parameters
* `PlayerUuid` The UUID of the Player Info to be removed 

#### Returns
The Player Info that got removed

#### `public virtual void `[`Tick`](#classURH__PlayerInfoSubsystem_1abf83de825c346653c1bc3cba1df75815)`(float DeltaTime)` <a id="classURH__PlayerInfoSubsystem_1abf83de825c346653c1bc3cba1df75815"></a>

Unreals basic Tick function.

#### `public inline virtual bool `[`IsTickable`](#classURH__PlayerInfoSubsystem_1a49b75fe691775b67c9af6a818d2e4592)`() const` <a id="classURH__PlayerInfoSubsystem_1a49b75fe691775b67c9af6a818d2e4592"></a>

Gets if currently tickable.

#### `public inline virtual TStatId `[`GetStatId`](#classURH__PlayerInfoSubsystem_1a159d3535c053aa721f87274f48742cfa)`() const` <a id="classURH__PlayerInfoSubsystem_1a159d3535c053aa721f87274f48742cfa"></a>

Gets the stat to use for the tick time.

#### `protected TSubclassOf< `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` > `[`PlayerInfoClassOverride`](#classURH__PlayerInfoSubsystem_1a53d13eb27e48d9e00cd52986c5741fcf) <a id="classURH__PlayerInfoSubsystem_1a53d13eb27e48d9e00cd52986c5741fcf"></a>

Override class for Player Info if extended.

#### `protected TMap< FGuid, `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * > `[`PlayerInfos`](#classURH__PlayerInfoSubsystem_1a616fa3bfe4df4b7f8edd78f2414a42d5) <a id="classURH__PlayerInfoSubsystem_1a616fa3bfe4df4b7f8edd78f2414a42d5"></a>

Map of Player Infos to their player Uuids.

#### `protected TMap< `[`FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId), [URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > `[`PlayerPlatformInfos`](#classURH__PlayerInfoSubsystem_1a17e2ac363f59929e2c5be24746c03dbe) <a id="classURH__PlayerInfoSubsystem_1a17e2ac363f59929e2c5be24746c03dbe"></a>

Map of Player Platform Infos to their Platform Ids.

#### `protected TMap< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)`, FGuid > `[`PlayerPlatformIdToUuidMap`](#classURH__PlayerInfoSubsystem_1a25ed5e4057d3929418e973228f9851a1) <a id="classURH__PlayerInfoSubsystem_1a25ed5e4057d3929418e973228f9851a1"></a>

Map of Player Uuid to their Platform Ids.

#### `protected virtual void `[`ClearPlayerInfoCache`](#classURH__PlayerInfoSubsystem_1a2ddbe40cfed50b7e76437aec24e4c054)`()` <a id="classURH__PlayerInfoSubsystem_1a2ddbe40cfed50b7e76437aec24e4c054"></a>

Clears the cached player infos.

#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__PlayerInfoSubsystem_1a5e14a7f60c320b9a2186e33726f7e5ee)`()` <a id="classURH__PlayerInfoSubsystem_1a5e14a7f60c320b9a2186e33726f7e5ee"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected virtual void `[`OnLookupPlayerResponse`](#classURH__PlayerInfoSubsystem_1a5d178f65256eafbf0fccfc17e87bae62)`(const TLookupPlayer::Response & Response,const FRH_PlayerInfoLookupPlayerBlock Delegate)` <a id="classURH__PlayerInfoSubsystem_1a5d178f65256eafbf0fccfc17e87bae62"></a>

Handles the response to a Lookup Player call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnLookupPlayerByPlatformUserIdResponse`](#classURH__PlayerInfoSubsystem_1a0cd6b58da263387aead9c9d17729cb27)`(const TLookupPlayer::Response & Response,const FRH_PlayerInfoLookupPlayerBlock Delegate)` <a id="classURH__PlayerInfoSubsystem_1a0cd6b58da263387aead9c9d17729cb27"></a>

Handles the response to a Lookup Player By Platform User Id call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `typedef `[`TLookupPlayer`](#classURH__PlayerInfoSubsystem_1a221cacf49cc61a7df9b7e791befbb312) <a id="classURH__PlayerInfoSubsystem_1a221cacf49cc61a7df9b7e791befbb312"></a>

## struct `FRH_PlayerSettingKeySetWrapper` <a id="structFRH__PlayerSettingKeySetWrapper"></a>

Wrapper to help with setting keys for player settings.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TSet< FString > `[`SettingKeySet`](#structFRH__PlayerSettingKeySetWrapper_1a2857ee7d7522d7cfa86e1fd44fed229c) | Set of keys being set by the settings update.
`public inline  `[`FRH_PlayerSettingKeySetWrapper`](#structFRH__PlayerSettingKeySetWrapper_1a67aefafe77cd84f15942f74a220f93a8)`()` | Default constructor.

### Members

#### `public TSet< FString > `[`SettingKeySet`](#structFRH__PlayerSettingKeySetWrapper_1a2857ee7d7522d7cfa86e1fd44fed229c) <a id="structFRH__PlayerSettingKeySetWrapper_1a2857ee7d7522d7cfa86e1fd44fed229c"></a>

Set of keys being set by the settings update.

#### `public inline  `[`FRH_PlayerSettingKeySetWrapper`](#structFRH__PlayerSettingKeySetWrapper_1a67aefafe77cd84f15942f74a220f93a8)`()` <a id="structFRH__PlayerSettingKeySetWrapper_1a67aefafe77cd84f15942f74a220f93a8"></a>

Default constructor.

## struct `FRH_PlayerAndPlatformInfo` <a id="structFRH__PlayerAndPlatformInfo"></a>

Wrapper to pair a players Unique Player Id and their current logged in Platform Id.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRH__PlayerAndPlatformInfo_1a15d2eb292a9d24de619281272e0dbd3d) | The players Unique Player id.
`public `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#structFRH__PlayerAndPlatformInfo_1a3e37b7de18225d02a405d03901b2f9a2) | The players logged in Platform Id.
`public inline  `[`FRH_PlayerAndPlatformInfo`](#structFRH__PlayerAndPlatformInfo_1a06195fa8f09f200dba4da24a838bc58e)`()` | Default Constructor.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRH__PlayerAndPlatformInfo_1a15d2eb292a9d24de619281272e0dbd3d) <a id="structFRH__PlayerAndPlatformInfo_1a15d2eb292a9d24de619281272e0dbd3d"></a>

The players Unique Player id.

#### `public `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#structFRH__PlayerAndPlatformInfo_1a3e37b7de18225d02a405d03901b2f9a2) <a id="structFRH__PlayerAndPlatformInfo_1a3e37b7de18225d02a405d03901b2f9a2"></a>

The players logged in Platform Id.

#### `public inline  `[`FRH_PlayerAndPlatformInfo`](#structFRH__PlayerAndPlatformInfo_1a06195fa8f09f200dba4da24a838bc58e)`()` <a id="structFRH__PlayerAndPlatformInfo_1a06195fa8f09f200dba4da24a838bc58e"></a>

Default Constructor.

