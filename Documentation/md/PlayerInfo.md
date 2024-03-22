# PlayerInfo <a id="group__PlayerInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_PlayerInfoSubobject`](#classURH__PlayerInfoSubobject) | Player Info Subobject base class used to store player data.
`class `[`URH_PlayerPresence`](#classURH__PlayerPresence) | Player Presence class used to store player presence data.
`class `[`URH_PlayerSessions`](#classURH__PlayerSessions) | Player Sessions class used to store player session membership information.
`class `[`URH_PlayerMatches`](#classURH__PlayerMatches) | Player Matches class used to store player match history information.
`class `[`URH_PlayerReports`](#classURH__PlayerReports) | Player Reports class used to store and send player report information.
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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`bInitialized`](#classURH__PlayerInfoSubobject_1ad175e37aa5147360d2e216a70d5390ce) | Tracks if the subobject has been initialized (updated at least once).
`public FDateTime `[`LastUpdated`](#classURH__PlayerInfoSubobject_1ae5d67bedce410bcc2f7ee5e6ac49cd92) | The last time the players data was updated on the client.
`public FString `[`ETag`](#classURH__PlayerInfoSubobject_1a43c6b83f587859abb61d71842801a64c) | ETag to track if the data is stale during requests.
`public FGuid `[`PlayerUuid`](#classURH__PlayerInfoSubobject_1ae2cc7f7dfc47525f2d6edaf01b04403f) | Players unique identifier.
`public FRH_OnPlayerInfoSubobjectUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnUpdatedDelegate`](#classURH__PlayerInfoSubobject_1acd235146d3e5d44c3deeee04a658bee6) | Blueprint delegate to listen for updates.
`public FRH_OnPlayerInfoSubobjectUpdatedMulticastDelegate `[`OnUpdatedDelegate`](#classURH__PlayerInfoSubobject_1a79fe3beb1968bb4fec503603aab7c7c5) | Native delegate to listen for presence updates.
`public TArray< FRH_OnRequestPlayerInfoSubobjectDelegateBlock > `[`TemporaryRequestDelegates`](#classURH__PlayerInfoSubobject_1a5968c4b094b525f7e54adc02b11a35bf) | Delegates stored to response to currently active requests.
`public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInfoSubobject_1aa4e6fb9d2cdcfd4690022db8ea155e0e)`() const` | Gets the PlayerInfo that owns this Player Matches object.
`public inline void `[`MarkUpdated`](#classURH__PlayerInfoSubobject_1a58ec05a187f04f59e206487e5130c20d)`()` | Sets the last updated time to now.
`public inline void `[`MarkDirty`](#classURH__PlayerInfoSubobject_1a65e9f132b7fb7d3dfa8be3fad451337a)`()` | Clears the last updated time to force an update.
`public inline void `[`RequestUpdate`](#classURH__PlayerInfoSubobject_1a973f4d625860eb6477b615d24a906461)`(bool bForceUpdate,const FRH_OnRequestPlayerInfoSubobjectDelegateBlock & Delegate)` | Enqueues an update request for the players information from the RallyHere API.
`public inline void `[`BLUEPRINT_RequestUpdate`](#classURH__PlayerInfoSubobject_1ad60fb784f621475df3a543126b379209)`(bool bForceUpdate,const FRH_OnRequestPlayerInfoSubobjectDynamicDelegate & Delegate)` | 
`public void `[`CheckPollStatus`](#classURH__PlayerInfoSubobject_1a993e45b8a7968072c2469392e97c86b2)`(const bool bForceUpdate)` | Updates the poll status to be active or inactive based on if it should currently be polling.
`protected FRH_AutoPollerPtr `[`Poller`](#classURH__PlayerInfoSubobject_1a9abab6c88fabe22a23835813a56bffbd) | Poller for the players matches.
`protected FName `[`PollTimerName`](#classURH__PlayerInfoSubobject_1a697ccd6d2e132cd4ac05fcc31e64272f) | The name of the timer preset to use for polling.
`protected int32 `[`PollPriority`](#classURH__PlayerInfoSubobject_1aa0795fa3b53d3842dc358564abed8f5d) | The priority of the poll request.
`protected inline virtual bool `[`ShouldPoll`](#classURH__PlayerInfoSubobject_1aa73d16e9e42fd18afd95db6723ead346)`() const` | Gets if the poller should be actively polling, only polls if something cares about it.
`protected inline virtual void `[`Poll`](#classURH__PlayerInfoSubobject_1aa6bc5fb282ea6eb162c44106b89d1fc5)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the object data.
`protected template<>`  <br/>`inline void `[`UpdateBase`](#classURH__PlayerInfoSubobject_1a9256fdd7baceb430ba944ce641646273)`(const T & Other)` | Stores the response data from an API presence request.
`protected inline virtual void `[`PollComplete`](#classURH__PlayerInfoSubobject_1a25950945c3f6bfd0122858aa944a2bac)`(bool bSuccess,const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the object data.
`protected virtual void `[`ExecuteUpdatedDelegates`](#classURH__PlayerInfoSubobject_1a38d53acfed235ac77964549ec780a2d4)`(bool bSuccess)` | Handles executing any delegate listeners for the update.

#### Members

#### `public bool `[`bInitialized`](#classURH__PlayerInfoSubobject_1ad175e37aa5147360d2e216a70d5390ce) <a id="classURH__PlayerInfoSubobject_1ad175e37aa5147360d2e216a70d5390ce"></a>

Tracks if the subobject has been initialized (updated at least once).

<br>
#### `public FDateTime `[`LastUpdated`](#classURH__PlayerInfoSubobject_1ae5d67bedce410bcc2f7ee5e6ac49cd92) <a id="classURH__PlayerInfoSubobject_1ae5d67bedce410bcc2f7ee5e6ac49cd92"></a>

The last time the players data was updated on the client.

<br>
#### `public FString `[`ETag`](#classURH__PlayerInfoSubobject_1a43c6b83f587859abb61d71842801a64c) <a id="classURH__PlayerInfoSubobject_1a43c6b83f587859abb61d71842801a64c"></a>

ETag to track if the data is stale during requests.

<br>
#### `public FGuid `[`PlayerUuid`](#classURH__PlayerInfoSubobject_1ae2cc7f7dfc47525f2d6edaf01b04403f) <a id="classURH__PlayerInfoSubobject_1ae2cc7f7dfc47525f2d6edaf01b04403f"></a>

Players unique identifier.

<br>
#### `public FRH_OnPlayerInfoSubobjectUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnUpdatedDelegate`](#classURH__PlayerInfoSubobject_1acd235146d3e5d44c3deeee04a658bee6) <a id="classURH__PlayerInfoSubobject_1acd235146d3e5d44c3deeee04a658bee6"></a>

Blueprint delegate to listen for updates.

<br>
#### `public FRH_OnPlayerInfoSubobjectUpdatedMulticastDelegate `[`OnUpdatedDelegate`](#classURH__PlayerInfoSubobject_1a79fe3beb1968bb4fec503603aab7c7c5) <a id="classURH__PlayerInfoSubobject_1a79fe3beb1968bb4fec503603aab7c7c5"></a>

Native delegate to listen for presence updates.

<br>
#### `public TArray< FRH_OnRequestPlayerInfoSubobjectDelegateBlock > `[`TemporaryRequestDelegates`](#classURH__PlayerInfoSubobject_1a5968c4b094b525f7e54adc02b11a35bf) <a id="classURH__PlayerInfoSubobject_1a5968c4b094b525f7e54adc02b11a35bf"></a>

Delegates stored to response to currently active requests.

<br>
#### `public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInfoSubobject_1aa4e6fb9d2cdcfd4690022db8ea155e0e)`() const` <a id="classURH__PlayerInfoSubobject_1aa4e6fb9d2cdcfd4690022db8ea155e0e"></a>

Gets the PlayerInfo that owns this Player Matches object.

#### Returns
The PlayerInfo that owns the Player Matches object.

<br>
#### `public inline void `[`MarkUpdated`](#classURH__PlayerInfoSubobject_1a58ec05a187f04f59e206487e5130c20d)`()` <a id="classURH__PlayerInfoSubobject_1a58ec05a187f04f59e206487e5130c20d"></a>

Sets the last updated time to now.

<br>
#### `public inline void `[`MarkDirty`](#classURH__PlayerInfoSubobject_1a65e9f132b7fb7d3dfa8be3fad451337a)`()` <a id="classURH__PlayerInfoSubobject_1a65e9f132b7fb7d3dfa8be3fad451337a"></a>

Clears the last updated time to force an update.

<br>
#### `public inline void `[`RequestUpdate`](#classURH__PlayerInfoSubobject_1a973f4d625860eb6477b615d24a906461)`(bool bForceUpdate,const FRH_OnRequestPlayerInfoSubobjectDelegateBlock & Delegate)` <a id="classURH__PlayerInfoSubobject_1a973f4d625860eb6477b615d24a906461"></a>

Enqueues an update request for the players information from the RallyHere API.

#### Parameters
* `bForceUpdate` If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly 

* `Delegate` Callback delegate for the request.

<br>
#### `public inline void `[`BLUEPRINT_RequestUpdate`](#classURH__PlayerInfoSubobject_1ad60fb784f621475df3a543126b379209)`(bool bForceUpdate,const FRH_OnRequestPlayerInfoSubobjectDynamicDelegate & Delegate)` <a id="classURH__PlayerInfoSubobject_1ad60fb784f621475df3a543126b379209"></a>

<br>
#### `public void `[`CheckPollStatus`](#classURH__PlayerInfoSubobject_1a993e45b8a7968072c2469392e97c86b2)`(const bool bForceUpdate)` <a id="classURH__PlayerInfoSubobject_1a993e45b8a7968072c2469392e97c86b2"></a>

Updates the poll status to be active or inactive based on if it should currently be polling.

#### Parameters
* `bForceUpdate` If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly

<br>
#### `protected FRH_AutoPollerPtr `[`Poller`](#classURH__PlayerInfoSubobject_1a9abab6c88fabe22a23835813a56bffbd) <a id="classURH__PlayerInfoSubobject_1a9abab6c88fabe22a23835813a56bffbd"></a>

Poller for the players matches.

<br>
#### `protected FName `[`PollTimerName`](#classURH__PlayerInfoSubobject_1a697ccd6d2e132cd4ac05fcc31e64272f) <a id="classURH__PlayerInfoSubobject_1a697ccd6d2e132cd4ac05fcc31e64272f"></a>

The name of the timer preset to use for polling.

<br>
#### `protected int32 `[`PollPriority`](#classURH__PlayerInfoSubobject_1aa0795fa3b53d3842dc358564abed8f5d) <a id="classURH__PlayerInfoSubobject_1aa0795fa3b53d3842dc358564abed8f5d"></a>

The priority of the poll request.

<br>
#### `protected inline virtual bool `[`ShouldPoll`](#classURH__PlayerInfoSubobject_1aa73d16e9e42fd18afd95db6723ead346)`() const` <a id="classURH__PlayerInfoSubobject_1aa73d16e9e42fd18afd95db6723ead346"></a>

Gets if the poller should be actively polling, only polls if something cares about it.

<br>
#### `protected inline virtual void `[`Poll`](#classURH__PlayerInfoSubobject_1aa6bc5fb282ea6eb162c44106b89d1fc5)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerInfoSubobject_1aa6bc5fb282ea6eb162c44106b89d1fc5"></a>

Starts a poll of the object data.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected template<>`  <br/>`inline void `[`UpdateBase`](#classURH__PlayerInfoSubobject_1a9256fdd7baceb430ba944ce641646273)`(const T & Other)` <a id="classURH__PlayerInfoSubobject_1a9256fdd7baceb430ba944ce641646273"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The presence data to store.

<br>
#### `protected inline virtual void `[`PollComplete`](#classURH__PlayerInfoSubobject_1a25950945c3f6bfd0122858aa944a2bac)`(bool bSuccess,const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerInfoSubobject_1a25950945c3f6bfd0122858aa944a2bac"></a>

Starts a poll of the object data.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected virtual void `[`ExecuteUpdatedDelegates`](#classURH__PlayerInfoSubobject_1a38d53acfed235ac77964549ec780a2d4)`(bool bSuccess)` <a id="classURH__PlayerInfoSubobject_1a38d53acfed235ac77964549ec780a2d4"></a>

Handles executing any delegate listeners for the update.

#### Parameters
* `bSuccess` If the poll was successful.

<br>
## class `URH_PlayerPresence` <a id="classURH__PlayerPresence"></a>

```
class URH_PlayerPresence
  : public URH_PlayerInfoSubobject
```

Player Presence class used to store player presence data.

#### Summary

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

#### Members

#### `public ERHAPI_OnlineStatus `[`Status`](#classURH__PlayerPresence_1a51af6d5a0caf4f5e47e4498a7bb3e456) <a id="classURH__PlayerPresence_1a51af6d5a0caf4f5e47e4498a7bb3e456"></a>

Online status of the player.

<br>
#### `public FString `[`Message`](#classURH__PlayerPresence_1abd625e3be04fcb0527bbc719dc929d6e) <a id="classURH__PlayerPresence_1abd625e3be04fcb0527bbc719dc929d6e"></a>

Message set by a player to display on their presence information.

<br>
#### `public FString `[`Platform`](#classURH__PlayerPresence_1ad461b02f3065a8e712a127e954fb9e36) <a id="classURH__PlayerPresence_1ad461b02f3065a8e712a127e954fb9e36"></a>

Which platform the player is currently playing / last seen on.

<br>
#### `public FString `[`DisplayName`](#classURH__PlayerPresence_1a93fef7276ca2b984c0d2e66ca3dc3852) <a id="classURH__PlayerPresence_1a93fef7276ca2b984c0d2e66ca3dc3852"></a>

The players display name for their current or last seen platform.

<br>
#### `public TMap< FString, FString > `[`CustomData`](#classURH__PlayerPresence_1abbc5a206683a5117cc6c3aa200e137c8) <a id="classURH__PlayerPresence_1abbc5a206683a5117cc6c3aa200e137c8"></a>

Custom data that can be set by the player.

<br>
#### `protected virtual void `[`Poll`](#classURH__PlayerPresence_1adf598cc475db7d98b03df67879097808)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerPresence_1adf598cc475db7d98b03df67879097808"></a>

Starts a poll of the players presence.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected inline virtual void `[`Update`](#classURH__PlayerPresence_1aa6ef217e8b96b79fa309824e8bd73520)`(const GetPresenceType::Response & Other)` <a id="classURH__PlayerPresence_1aa6ef217e8b96b79fa309824e8bd73520"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The presence data to store.

<br>
#### `typedef `[`GetPresenceType`](#classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214) <a id="classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214"></a>

<br>
## class `URH_PlayerSessions` <a id="classURH__PlayerSessions"></a>

```
class URH_PlayerSessions
  : public URH_PlayerInfoSubobject
```

Player Sessions class used to store player session membership information.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRHAPI_PlayerSessions`](models/RHAPI_PlayerSessions.md#structFRHAPI__PlayerSessions)` `[`Sessions`](#classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab) | The sessions the player is a member of.
`protected virtual void `[`Poll`](#classURH__PlayerSessions_1a7adb05ae630f0bffb316507c08749a95)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the players sessions.
`protected inline virtual void `[`Update`](#classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e)`(const GetSessionsType::Response & Other)` | Stores the response data from an API request.
`typedef `[`GetSessionsType`](#classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92) | 

#### Members

#### `public `[`FRHAPI_PlayerSessions`](models/RHAPI_PlayerSessions.md#structFRHAPI__PlayerSessions)` `[`Sessions`](#classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab) <a id="classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab"></a>

The sessions the player is a member of.

<br>
#### `protected virtual void `[`Poll`](#classURH__PlayerSessions_1a7adb05ae630f0bffb316507c08749a95)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerSessions_1a7adb05ae630f0bffb316507c08749a95"></a>

Starts a poll of the players sessions.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected inline virtual void `[`Update`](#classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e)`(const GetSessionsType::Response & Other)` <a id="classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e"></a>

Stores the response data from an API request.

#### Parameters
* `Other` The response data to store.

<br>
#### `typedef `[`GetSessionsType`](#classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92) <a id="classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92"></a>

<br>
## class `URH_PlayerMatches` <a id="classURH__PlayerMatches"></a>

```
class URH_PlayerMatches
  : public URH_PlayerInfoSubobject
```

Player Matches class used to store player match history information.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PollPageSize`](#classURH__PlayerMatches_1a5d396c7fa4ed1186a1e88fc848571be2) | The size of the pages to poll, if 0, uses default.
`public int32 `[`PollMaxPageCount`](#classURH__PlayerMatches_1ab61d485e5d851ff8fea078e331c9c7b8) | Polling of new pages is stopped after this value is reached, if 0, polls until all pages are polled.
`public FTimespan `[`PollMaxAge`](#classURH__PlayerMatches_1ae4bebdc4d6137fb5585f4310b1d7c4e7) | The maximum age after which to stop polling new pages, if 0, polls until max count is reached.
`public TMap< FString, `[`FRHAPI_MatchPlayerWithMatch`](models/RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > `[`Matches`](#classURH__PlayerMatches_1aca9fc68c9d093c1a90bce75d0f9832ea) | The matches the player has participated in.
`protected virtual void `[`Poll`](#classURH__PlayerMatches_1a078e6c98d6151bf84750e9118fcdbf71)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the object data.
`protected virtual void `[`PollNextPage`](#classURH__PlayerMatches_1a2ca5a0cec9f116fd4469fb3a2a387e11)`(const FRH_PollCompleteFunc & Delegate,TSharedPtr< `[`FPollContext`](undefined.md#structURH__PlayerMatches_1_1FPollContext)` > Context)` | Starts a poll of the object data.
`protected inline virtual void `[`Update`](#classURH__PlayerMatches_1a2d718f1945307bc4570e9b6fc1a10a27)`(const GetMatchesType::Response & Other,TSharedPtr< `[`FPollContext`](undefined.md#structURH__PlayerMatches_1_1FPollContext)` > Context)` | Stores the response data from an API presence request.
`typedef `[`GetMatchesType`](#classURH__PlayerMatches_1a13c41a6b6f28555aa13c6536c706c8b9) | 

#### Members

#### `public int32 `[`PollPageSize`](#classURH__PlayerMatches_1a5d396c7fa4ed1186a1e88fc848571be2) <a id="classURH__PlayerMatches_1a5d396c7fa4ed1186a1e88fc848571be2"></a>

The size of the pages to poll, if 0, uses default.

<br>
#### `public int32 `[`PollMaxPageCount`](#classURH__PlayerMatches_1ab61d485e5d851ff8fea078e331c9c7b8) <a id="classURH__PlayerMatches_1ab61d485e5d851ff8fea078e331c9c7b8"></a>

Polling of new pages is stopped after this value is reached, if 0, polls until all pages are polled.

<br>
#### `public FTimespan `[`PollMaxAge`](#classURH__PlayerMatches_1ae4bebdc4d6137fb5585f4310b1d7c4e7) <a id="classURH__PlayerMatches_1ae4bebdc4d6137fb5585f4310b1d7c4e7"></a>

The maximum age after which to stop polling new pages, if 0, polls until max count is reached.

<br>
#### `public TMap< FString, `[`FRHAPI_MatchPlayerWithMatch`](models/RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > `[`Matches`](#classURH__PlayerMatches_1aca9fc68c9d093c1a90bce75d0f9832ea) <a id="classURH__PlayerMatches_1aca9fc68c9d093c1a90bce75d0f9832ea"></a>

The matches the player has participated in.

<br>
#### `protected virtual void `[`Poll`](#classURH__PlayerMatches_1a078e6c98d6151bf84750e9118fcdbf71)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerMatches_1a078e6c98d6151bf84750e9118fcdbf71"></a>

Starts a poll of the object data.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected virtual void `[`PollNextPage`](#classURH__PlayerMatches_1a2ca5a0cec9f116fd4469fb3a2a387e11)`(const FRH_PollCompleteFunc & Delegate,TSharedPtr< `[`FPollContext`](undefined.md#structURH__PlayerMatches_1_1FPollContext)` > Context)` <a id="classURH__PlayerMatches_1a2ca5a0cec9f116fd4469fb3a2a387e11"></a>

Starts a poll of the object data.

#### Parameters
* `Delegate` Callback delegate for the poll. 

* `Context` The context to use for the poll.

<br>
#### `protected inline virtual void `[`Update`](#classURH__PlayerMatches_1a2d718f1945307bc4570e9b6fc1a10a27)`(const GetMatchesType::Response & Other,TSharedPtr< `[`FPollContext`](undefined.md#structURH__PlayerMatches_1_1FPollContext)` > Context)` <a id="classURH__PlayerMatches_1a2d718f1945307bc4570e9b6fc1a10a27"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The match data to store. 

* `Context` The context to use for the poll.

<br>
#### `typedef `[`GetMatchesType`](#classURH__PlayerMatches_1a13c41a6b6f28555aa13c6536c706c8b9) <a id="classURH__PlayerMatches_1a13c41a6b6f28555aa13c6536c706c8b9"></a>

<br>
## class `URH_PlayerReports` <a id="classURH__PlayerReports"></a>

```
class URH_PlayerReports
  : public URH_PlayerInfoSubobject
```

Player Reports class used to store and send player report information.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`GetReportsSentAsync`](#classURH__PlayerReports_1a998c9757f509c24745f705ee6f3152ec)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsBlock & Delegate)` | Request a list of player reports send by this player.
`public inline void `[`BLUEPRINT_GetReportsSentAsync`](#classURH__PlayerReports_1abc1c0b9e9fb18c326cffcd0c21030078)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsDynamicDelegate & Delegate)` | Request a list of player reports send by this player.
`public inline TArray< `[`FRHAPI_PlayerReport`](models/RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`GetReportsSent`](#classURH__PlayerReports_1a143d1f8a21fec0136747bd53bfe85750)`() const` | Get the current cached list of player reports sent by this player.
`public void `[`GetReportsReceivedAsync`](#classURH__PlayerReports_1a1f5420d091da13449807424a2151433c)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsBlock & Delegate)` | Request a list of player reports received by this player.
`public inline void `[`BLUEPRINT_GetReportsReceivedAsync`](#classURH__PlayerReports_1af22eebdd08e50bf32cb51c42712d42bd)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsDynamicDelegate & Delegate)` | Request a list of player reports received by this player.
`public inline TArray< `[`FRHAPI_PlayerReport`](models/RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`GetReportsReceived`](#classURH__PlayerReports_1ae2797d22ab1d3dc0a492aefb8a9aa9ce)`() const` | Get the current cached list of player reports received by this player.
`public void `[`CreateReport`](#classURH__PlayerReports_1ad3901abf329a8ad6400d68ee82e41678)`(const `[`FRHAPI_PlayerReportCreate`](models/RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,const FRH_PlayerInfoCreatePlayerReportBlock & Delegate)` | Create a new report for the target player.
`public inline void `[`BLUEPRINT_CreateReport`](#classURH__PlayerReports_1a6ed2cfcfa311ed6eaed59db909566e15)`(const `[`FRHAPI_PlayerReportCreate`](models/RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,const FRH_PlayerInfoCreatePlayerReportDynamicDelegate & Delegate)` | Create a new report for the target player.
`public void `[`CreateReport`](#classURH__PlayerReports_1a675dcfb7ec0e5b4708da14bfaa419809)`(const `[`FRHAPI_PlayerReportCreate`](models/RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,FAuthContextPtr AuthContext,const FRH_PlayerInfoCreatePlayerReportBlock & Delegate)` | Create a new report for the target player with a specific auth context.
`protected TArray< `[`FRHAPI_PlayerReport`](models/RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`ReportsSent`](#classURH__PlayerReports_1afa610002ff1c15ed7e6dfdfce53b2263) | 
`protected TArray< `[`FRHAPI_PlayerReport`](models/RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`ReportsReceived`](#classURH__PlayerReports_1a3f561b683fa7026383b75e5494ca6959) | 
`typedef `[`GetReportsSentType`](#classURH__PlayerReports_1a66e9b68dfeb75fe986b3f615385e80a7) | 
`typedef `[`GetReportsReceivedType`](#classURH__PlayerReports_1a2bebbdb949cccf80084b2e5b3cb99951) | 
`typedef `[`CreateReportType`](#classURH__PlayerReports_1a6b101fa42b9857a05a752b07cade837d) | 

#### Members

#### `public void `[`GetReportsSentAsync`](#classURH__PlayerReports_1a998c9757f509c24745f705ee6f3152ec)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsBlock & Delegate)` <a id="classURH__PlayerReports_1a998c9757f509c24745f705ee6f3152ec"></a>

Request a list of player reports send by this player.

#### Parameters
* `Cursor` The cursor to use for the request. 

* `PageSize` The size of the pages to poll, if 0, uses default 

* `Delegate` Callback delegate for the request.

<br>
#### `public inline void `[`BLUEPRINT_GetReportsSentAsync`](#classURH__PlayerReports_1abc1c0b9e9fb18c326cffcd0c21030078)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsDynamicDelegate & Delegate)` <a id="classURH__PlayerReports_1abc1c0b9e9fb18c326cffcd0c21030078"></a>

Request a list of player reports send by this player.

#### Parameters
* `Cursor` The cursor to use for the request. 

* `PageSize` The size of the pages to poll, if 0, uses default 

* `Delegate` Callback delegate for the request.

<br>
#### `public inline TArray< `[`FRHAPI_PlayerReport`](models/RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`GetReportsSent`](#classURH__PlayerReports_1a143d1f8a21fec0136747bd53bfe85750)`() const` <a id="classURH__PlayerReports_1a143d1f8a21fec0136747bd53bfe85750"></a>

Get the current cached list of player reports sent by this player.

<br>
#### `public void `[`GetReportsReceivedAsync`](#classURH__PlayerReports_1a1f5420d091da13449807424a2151433c)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsBlock & Delegate)` <a id="classURH__PlayerReports_1a1f5420d091da13449807424a2151433c"></a>

Request a list of player reports received by this player.

#### Parameters
* `Cursor` The cursor to use for the request. 

* `PageSize` The size of the pages to poll, if 0, uses default 

* `Delegate` Callback delegate for the request.

<br>
#### `public inline void `[`BLUEPRINT_GetReportsReceivedAsync`](#classURH__PlayerReports_1af22eebdd08e50bf32cb51c42712d42bd)`(const FString & Cursor,const int32 PageSize,const FRH_PlayerInfoGetPlayerReportsDynamicDelegate & Delegate)` <a id="classURH__PlayerReports_1af22eebdd08e50bf32cb51c42712d42bd"></a>

Request a list of player reports received by this player.

#### Parameters
* `Cursor` The cursor to use for the request. 

* `PageSize` The size of the pages to poll, if 0, uses default 

* `Delegate` Callback delegate for the request.

<br>
#### `public inline TArray< `[`FRHAPI_PlayerReport`](models/RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`GetReportsReceived`](#classURH__PlayerReports_1ae2797d22ab1d3dc0a492aefb8a9aa9ce)`() const` <a id="classURH__PlayerReports_1ae2797d22ab1d3dc0a492aefb8a9aa9ce"></a>

Get the current cached list of player reports received by this player.

<br>
#### `public void `[`CreateReport`](#classURH__PlayerReports_1ad3901abf329a8ad6400d68ee82e41678)`(const `[`FRHAPI_PlayerReportCreate`](models/RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,const FRH_PlayerInfoCreatePlayerReportBlock & Delegate)` <a id="classURH__PlayerReports_1ad3901abf329a8ad6400d68ee82e41678"></a>

Create a new report for the target player.

#### Parameters
* `Report` The report to create. 

* `Delegate` Callback delegate for the request.

<br>
#### `public inline void `[`BLUEPRINT_CreateReport`](#classURH__PlayerReports_1a6ed2cfcfa311ed6eaed59db909566e15)`(const `[`FRHAPI_PlayerReportCreate`](models/RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,const FRH_PlayerInfoCreatePlayerReportDynamicDelegate & Delegate)` <a id="classURH__PlayerReports_1a6ed2cfcfa311ed6eaed59db909566e15"></a>

Create a new report for the target player.

#### Parameters
* `Report` The report to create. 

* `Delegate` Callback delegate for the request.

<br>
#### `public void `[`CreateReport`](#classURH__PlayerReports_1a675dcfb7ec0e5b4708da14bfaa419809)`(const `[`FRHAPI_PlayerReportCreate`](models/RHAPI_PlayerReportCreate.md#structFRHAPI__PlayerReportCreate)` & Report,FAuthContextPtr AuthContext,const FRH_PlayerInfoCreatePlayerReportBlock & Delegate)` <a id="classURH__PlayerReports_1a675dcfb7ec0e5b4708da14bfaa419809"></a>

Create a new report for the target player with a specific auth context.

#### Parameters
* `Report` The report to create. 

* `AuthContext` The auth context to use for the request. 

* `Delegate` Callback delegate for the request.

<br>
#### `protected TArray< `[`FRHAPI_PlayerReport`](models/RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`ReportsSent`](#classURH__PlayerReports_1afa610002ff1c15ed7e6dfdfce53b2263) <a id="classURH__PlayerReports_1afa610002ff1c15ed7e6dfdfce53b2263"></a>

<br>
#### `protected TArray< `[`FRHAPI_PlayerReport`](models/RHAPI_PlayerReport.md#structFRHAPI__PlayerReport)` > `[`ReportsReceived`](#classURH__PlayerReports_1a3f561b683fa7026383b75e5494ca6959) <a id="classURH__PlayerReports_1a3f561b683fa7026383b75e5494ca6959"></a>

<br>
#### `typedef `[`GetReportsSentType`](#classURH__PlayerReports_1a66e9b68dfeb75fe986b3f615385e80a7) <a id="classURH__PlayerReports_1a66e9b68dfeb75fe986b3f615385e80a7"></a>

<br>
#### `typedef `[`GetReportsReceivedType`](#classURH__PlayerReports_1a2bebbdb949cccf80084b2e5b3cb99951) <a id="classURH__PlayerReports_1a2bebbdb949cccf80084b2e5b3cb99951"></a>

<br>
#### `typedef `[`CreateReportType`](#classURH__PlayerReports_1a6b101fa42b9857a05a752b07cade837d) <a id="classURH__PlayerReports_1a6b101fa42b9857a05a752b07cade837d"></a>

<br>
## class `URH_PlayerPlatformInfo` <a id="classURH__PlayerPlatformInfo"></a>

```
class URH_PlayerPlatformInfo
  : public UObject
```

Stores information a specific platform the player has linked to their account.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#classURH__PlayerPlatformInfo_1ac0ef7725316040314b2488260850eabb) | Players Platform ID struct.
`public FString `[`DisplayName`](#classURH__PlayerPlatformInfo_1a056f2023dd209b4807ac14a699cd594e) | Last seen display name for the player on the platform.
`public inline FORCEINLINE `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`GetPlayerPlatformId`](#classURH__PlayerPlatformInfo_1a01087e75b35b862c18d8579f9d84a7ba)`() const` | Gets the Platform Id struct for the player.
`public inline FORCEINLINE FString `[`GetPlatformUserId`](#classURH__PlayerPlatformInfo_1abf743e9775a21e9526ec50775f9491c1)`() const` | Gets the Platform Id for the player.
`public inline FORCEINLINE ERHAPI_Platform `[`GetPlatform`](#classURH__PlayerPlatformInfo_1a3dd011d8a3919bc528adc47cad307cf0)`() const` | Gets the Platform Type for the player.
`public inline FORCEINLINE FString `[`GetLastKnownDisplayName`](#classURH__PlayerPlatformInfo_1ab91b2f7ba0378669bc1a2b756c2ba940)`() const` | Gets the display name stored the last time this player logged in to the Rally Here server.

#### Members

#### `public `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#classURH__PlayerPlatformInfo_1ac0ef7725316040314b2488260850eabb) <a id="classURH__PlayerPlatformInfo_1ac0ef7725316040314b2488260850eabb"></a>

Players Platform ID struct.

<br>
#### `public FString `[`DisplayName`](#classURH__PlayerPlatformInfo_1a056f2023dd209b4807ac14a699cd594e) <a id="classURH__PlayerPlatformInfo_1a056f2023dd209b4807ac14a699cd594e"></a>

Last seen display name for the player on the platform.

<br>
#### `public inline FORCEINLINE `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`GetPlayerPlatformId`](#classURH__PlayerPlatformInfo_1a01087e75b35b862c18d8579f9d84a7ba)`() const` <a id="classURH__PlayerPlatformInfo_1a01087e75b35b862c18d8579f9d84a7ba"></a>

Gets the Platform Id struct for the player.

#### Returns
The players Platform Id struct.

<br>
#### `public inline FORCEINLINE FString `[`GetPlatformUserId`](#classURH__PlayerPlatformInfo_1abf743e9775a21e9526ec50775f9491c1)`() const` <a id="classURH__PlayerPlatformInfo_1abf743e9775a21e9526ec50775f9491c1"></a>

Gets the Platform Id for the player.

#### Returns
The players Platform Unique Id.

<br>
#### `public inline FORCEINLINE ERHAPI_Platform `[`GetPlatform`](#classURH__PlayerPlatformInfo_1a3dd011d8a3919bc528adc47cad307cf0)`() const` <a id="classURH__PlayerPlatformInfo_1a3dd011d8a3919bc528adc47cad307cf0"></a>

Gets the Platform Type for the player.

#### Returns
The players Platform Type.

<br>
#### `public inline FORCEINLINE FString `[`GetLastKnownDisplayName`](#classURH__PlayerPlatformInfo_1ab91b2f7ba0378669bc1a2b756c2ba940)`() const` <a id="classURH__PlayerPlatformInfo_1ab91b2f7ba0378669bc1a2b756c2ba940"></a>

Gets the display name stored the last time this player logged in to the Rally Here server.

#### Returns
The players display name for the platform.

<br>
## class `URH_PlayerInfo` <a id="classURH__PlayerInfo"></a>

```
class URH_PlayerInfo
  : public UObject
```

Stores and fetchs all the information about a given player.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline FORCEINLINE FGuid & `[`GetRHPlayerUuid`](#classURH__PlayerInfo_1ab4bac7a190b2e5fec6d242c25f7672f4)`()` | Gets the players Unique player Id.
`public inline FORCEINLINE `[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * `[`GetPresence`](#classURH__PlayerInfo_1a30440b0a7ab410262e696bc6ac976568)`() const` | Gets The players presence class.
`public inline FORCEINLINE `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`GetSessions`](#classURH__PlayerInfo_1a3a012da0a55d1edb09a80dcf658ae7f4)`() const` | Gets The players sessions class.
`public inline FORCEINLINE `[`URH_PlayerMatches`](PlayerInfo.md#classURH__PlayerMatches)` * `[`GetMatches`](#classURH__PlayerInfo_1a18162aabb6b78affb52f918ae8517f84)`() const` | Gets The players matches class.
`public inline FORCEINLINE `[`URH_PlayerReports`](PlayerInfo.md#classURH__PlayerReports)` * `[`GetReports`](#classURH__PlayerInfo_1a384f5b99113927ed0f47cf1278e45018)`() const` | Gets The players reports class.
`public inline FORCEINLINE TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > & `[`GetPlayerPlatformIds`](#classURH__PlayerInfo_1a6da64917c1815b0048dbf5b770a43480)`()` | Gets the associated platform ids of the player.
`public inline FORCEINLINE const TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > & `[`GetPlayerPlatformIds`](#classURH__PlayerInfo_1ab0617adb51499a0c8ce36ef60693e6d6)`() const` | Gets the associated platform ids of the player.
`public TArray< `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > `[`GetPlayerPlatforms`](#classURH__PlayerInfo_1a3896d84ba5481158ce3cfc62b39e064e)`() const` | Gets the associated platforms of the player.
`public `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetPlayerPlatformInfo`](#classURH__PlayerInfo_1a0e3a7df23b8a7a183d1b8c94c578e343)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` | Gets a specific platform for the player.
`public inline `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`GetPlayerInventory`](#classURH__PlayerInfo_1a430d123219813a6ba0c8100b367df6ec)`() const` | Gets the players Inventory Subsystem.
`public inline `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`GetPlayerNotifications`](#classURH__PlayerInfo_1a6f1e1f6ef4d38ed87c2c2b920a5cd891)`() const` | Gets the players Notification Subsystem.
`public void `[`StartStreamingNotifications`](#classURH__PlayerInfo_1a15c2a3c44c22cfb7461609fa5e5d45cc)`()` | Request to start streaming notifications for this player.
`public void `[`StopStreamingNotifications`](#classURH__PlayerInfo_1a17cff21d266da2c72a4f200e316d45b6)`(bool bClearCache)` | Requests to stop streaming notifications.
`public inline const TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > & `[`GetAllStoredPlayerSettings`](#classURH__PlayerInfo_1a3eb1adffb0e0f4f503241ae5848818ce)`() const` | Gets all the players store settings data.
`public inline const TMap< FString, `[`FRHAPI_PlayerRankResponseV2`](models/RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetAllStoredPlayerRankings`](#classURH__PlayerInfo_1aa79ba1c1bcb06d02478ec145999b06a3)`() const` | Gets all the players stored ranking data.
`public `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__PlayerInfo_1a0f038ae188d71729b19771f401bee34a)`() const` | Gets the players Info Subsystem that the Player Info is on.
`public void `[`InitializeForPlayer`](#classURH__PlayerInfo_1a38608b8b57751e9db1c1dcfb818d0506)`(const FGuid & PlayerUuid)` | Initialized the player info from a given Player Unique Id.
`public void `[`GetLastKnownDisplayNameAsync`](#classURH__PlayerInfo_1a748ec2c5cc1c2aa3f3a91d906c8ba04b)`(const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock & Delegate,const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem)` | Gets the last known display name for the player, will make required API calls to retrieve the information if needed.
`public inline void `[`BLUEPRINT_GetLastKnownDisplayNameAsync`](#classURH__PlayerInfo_1a2a5f9d31fb4c1096e06d68569d617257)`(const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)` | 
`public bool `[`GetLastKnownDisplayName`](#classURH__PlayerInfo_1a1013650527f7be680adc07896e49d555)`(FString & OutDisplayName,ERHAPI_Platform PreferredPlatformType) const` | Gets the last known display name for the player.
`public inline bool `[`BLUEPRINT_GetLastKnownDisplayName`](#classURH__PlayerInfo_1a4b096747849fe22e2c7934fb3212bb85)`(ERHAPI_Platform PreferredPlatformType,FString & OutDisplayName) const` | 
`public void `[`GetLinkedPlatformInfo`](#classURH__PlayerInfo_1ac5a0056e3adcab2d8a5c65ea7d5e43ca)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlatformsBlock & Delegate)` | Gets the players linked platforms via API call.
`public inline void `[`BLUEPRINT_GetLinkedPlatformInfo`](#classURH__PlayerInfo_1a17dd835ef46a8418e6cf760eb076d01d)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlatformsDynamicDelegate & Delegate)` | 
`public void `[`GetPlayerSettings`](#classURH__PlayerInfo_1aa9d33400032ef41067fbc52f72f092c2)`(const FString & SettingTypeId,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` | Gets the players settings information for a given type.
`public inline void `[`BLUEPRINT_GetPlayerSettings`](#classURH__PlayerInfo_1a76e2f0a5ded932bc524553a9a2d43976)`(const FString & SettingTypeId,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate & Delegate)` | 
`public void `[`SetPlayerSettings`](#classURH__PlayerInfo_1a74ee0e82383414759503cc731086ab54)`(const FString & SettingTypeId,`[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` & SettingsData,const FRH_PlayerInfoSetPlayerSettingsBlock & Delegate)` | Sets the players settings information for a given type.
`public inline void `[`BLUEPRINT_SetPlayerSettings`](#classURH__PlayerInfo_1aebf4859d56d3fc772711fd1c8714d4f0)`(const FString & SettingTypeId,`[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` SettingsData,const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate & Delegate)` | 
`public void `[`GetPlayerRankings`](#classURH__PlayerInfo_1a7ff2423c28633ab7f4f62039aba32c8d)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)` | Gets the players ranking information for a given type.
`public inline void `[`BLUEPRINT_GetPlayerRankings`](#classURH__PlayerInfo_1adbfa47a9d0df7dec931ce18fa7b4f8b4)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate & Delegate)` | 
`public void `[`UpdatePlayerRanking`](#classURH__PlayerInfo_1a504494976ef115b48b620bcbfc914d17)`(const FString & RankId,const `[`FRHAPI_PlayerRankUpdateRequest`](models/RHAPI_PlayerRankUpdateRequest.md#structFRHAPI__PlayerRankUpdateRequest)` & RankData,const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)` | Sets the players settings information for a given type.
`public inline void `[`BLUEPRINT_UpdatePlayerRanking`](#classURH__PlayerInfo_1a60648275bd880b33cfb78b403e0832ac)`(const FString & RankId,const `[`FRHAPI_PlayerRankUpdateRequest`](models/RHAPI_PlayerRankUpdateRequest.md#structFRHAPI__PlayerRankUpdateRequest)` & RankData,const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate & Delegate)` | 
`public FAuthContextPtr `[`GetAuthContext`](#classURH__PlayerInfo_1a38aa7a072a97be36bc623a9cda702cdf)`() const` | Gets the local Auth Context for making API calls.
`public ERHAPI_Platform `[`GetLoggedInPlatform`](#classURH__PlayerInfo_1ad8fc7aea229a59d52a1c9e3491b8d168)`() const` | Gets the local users logged in platform type.
`protected FGuid `[`RHPlayerUuid`](#classURH__PlayerInfo_1abd6b1bad2e1044b59af44d04f822cef1) | The Unique Player Id for the player.
`protected TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > `[`PlayerSettingsByTypeId`](#classURH__PlayerInfo_1a17fa2a55af8c7efa708db4871753ae07) | Cache of Player Settings Data by their settings types.
`protected TMap< FString, `[`FRH_PlayerSettingKeySetWrapper`](PlayerInfo.md#structFRH__PlayerSettingKeySetWrapper)` > `[`PendingSettingRequestsByTypeId`](#classURH__PlayerInfo_1a65d3de9960e39b3dcacc0d885c14b016) | When requesting multiple Player Settings Updates at once, this keeps track of pending requests so we know when all requests are completed.
`protected TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > `[`SetPlayerSettingResponses`](#classURH__PlayerInfo_1ae9c58905a224f950cec5f6fc65de81f3) | Used when requesting multiple Player Settings Updates to track all their responses.
`protected TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > `[`LinkedPlayerPlatforms`](#classURH__PlayerInfo_1a9f74bbf7a958d7a5a00d7daa8c159c2f) | Cache of all platforms the player is linked to.
`protected `[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * `[`PlayerPresence`](#classURH__PlayerInfo_1ae3c851503d0b5b8c024dc55252acb688) | The players Presence Information.
`protected `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`PlayerSessions`](#classURH__PlayerInfo_1a7af4d09bb83333d3028bc9a94cf067fd) | The players Sessions Information.
`protected `[`URH_PlayerMatches`](PlayerInfo.md#classURH__PlayerMatches)` * `[`PlayerMatches`](#classURH__PlayerInfo_1a1f355fbb71f17bc3bb40283c931138aa) | The players Matches Information.
`protected `[`URH_PlayerReports`](PlayerInfo.md#classURH__PlayerReports)` * `[`PlayerReports`](#classURH__PlayerInfo_1a99a08ebcbd1c9c030f1d4ca7f9fcb572) | The players Reports Information.
`protected `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`PlayerInventory`](#classURH__PlayerInfo_1ab06228dae3921d141dbbf2bf895c55da) | The Players Inventory Subsystem.
`protected `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`PlayerNotifications`](#classURH__PlayerInfo_1ac1eb1a25b4d89a7f7c75cbb6d4c9e4a8) | The Players Inventory Subsystem.
`protected TMap< FString, `[`FRHAPI_PlayerRankResponseV2`](models/RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRankingsByRankingId`](#classURH__PlayerInfo_1a5728d3241aef0abed0788e90422ad071) | List of the player's rankings.
`protected FDateTime `[`LastRequestPlatforms`](#classURH__PlayerInfo_1aa5e1b18e6f2841b2f1e32914d8552756) | Tracks the last time the players linked platforms were requested for checking if the data is stale.
`protected TMap< FString, FDateTime > `[`LastRequestSettingsByTypeId`](#classURH__PlayerInfo_1aaa55e58e83b940311b96f7869bea9bba) | Tracks the last time each settings type was request for checking if the data is stale.
`protected FDateTime `[`LastRequestRankings`](#classURH__PlayerInfo_1a5e9c3bbbc44273cfa7286f52c457d435) | Tracks the last time the player rankings were requested for checking if the data is stale.
`protected virtual void `[`OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse`](#classURH__PlayerInfo_1a49e19ae4082f15e22b2062c1cb78deb0)`(bool bSuccess,const TArray< `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > & Platforms,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate,const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem)` | Handles the response to a Get Linked Platforms For Last Known Display Name call.
`protected virtual void `[`OnDisplayNameSanitized`](#classURH__PlayerInfo_1afe5a34e86382c3f78767f2d72e3819fd)`(bool bSuccess,const FString & SanitizedMessage,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate)` | Handles the response to sanitizing the players display name.
`protected virtual void `[`OnGetPlayerLinkedPlatformsResponse`](#classURH__PlayerInfo_1ada74501b2e422f1fcf8f76825d74cc58)`(const GetPlatforms::Response & Response,const FRH_PlayerInfoGetPlatformsBlock Delegate)` | Handles the response to a Get Linked Platforms call.
`protected virtual void `[`OnGetPlayerSettingsResponse`](#classURH__PlayerInfo_1a115f584e7b7b210193fd9e302abbd3ed)`(const GetSettings::Response & Response,const FRH_PlayerInfoGetPlayerSettingsBlock Delegate,const FString SettingTypeId)` | Handles the response to a Get Player Settings call.
`protected virtual void `[`OnSetPlayerSettingsResponse`](#classURH__PlayerInfo_1a6f59dae05d5371b867091b180280f091)`(const SetSettings::Response & Response,const FRH_PlayerInfoSetPlayerSettingsBlock Delegate,const FString SettingTypeId,const FString SettingKey,`[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` SettingsData)` | Handles the response to a Set Player Settings call.
`protected virtual void `[`OnGetPlayerRankingsResponse`](#classURH__PlayerInfo_1a53c355b2f85273d37008d685c3cc113c)`(const GetRankings::Response & Response,const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)` | Handles the response to a Get Player Rankings call.
`protected virtual void `[`OnUpdatePlayerRankingResponse`](#classURH__PlayerInfo_1a214672d0d5001ec24098b5414b0fc35d)`(const UpdateRanking::Response & Response,const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)` | Handles the response to a Update Player Ranking call.
`typedef `[`GetPlatforms`](#classURH__PlayerInfo_1a88c3597ebf7f47399d936f5a96d344f6) | 
`typedef `[`GetSettings`](#classURH__PlayerInfo_1ae425cac3ffa853a48c03df8caa2c8ca9) | 
`typedef `[`SetSettings`](#classURH__PlayerInfo_1af84cca7ca91da85ceec6caf73af9db11) | 
`typedef `[`GetRankings`](#classURH__PlayerInfo_1ae1180995c5f25cb946b6f47e44886c46) | 
`typedef `[`UpdateRanking`](#classURH__PlayerInfo_1a0dde72a36a43d91264f8dc89aafcd5de) | 

#### Members

#### `public inline FORCEINLINE FGuid & `[`GetRHPlayerUuid`](#classURH__PlayerInfo_1ab4bac7a190b2e5fec6d242c25f7672f4)`()` <a id="classURH__PlayerInfo_1ab4bac7a190b2e5fec6d242c25f7672f4"></a>

Gets the players Unique player Id.

#### Returns
The players Unique Player Id.

<br>
#### `public inline FORCEINLINE `[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * `[`GetPresence`](#classURH__PlayerInfo_1a30440b0a7ab410262e696bc6ac976568)`() const` <a id="classURH__PlayerInfo_1a30440b0a7ab410262e696bc6ac976568"></a>

Gets The players presence class.

#### Returns
The players presence class.

<br>
#### `public inline FORCEINLINE `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`GetSessions`](#classURH__PlayerInfo_1a3a012da0a55d1edb09a80dcf658ae7f4)`() const` <a id="classURH__PlayerInfo_1a3a012da0a55d1edb09a80dcf658ae7f4"></a>

Gets The players sessions class.

#### Returns
The players sessions class.

<br>
#### `public inline FORCEINLINE `[`URH_PlayerMatches`](PlayerInfo.md#classURH__PlayerMatches)` * `[`GetMatches`](#classURH__PlayerInfo_1a18162aabb6b78affb52f918ae8517f84)`() const` <a id="classURH__PlayerInfo_1a18162aabb6b78affb52f918ae8517f84"></a>

Gets The players matches class.

#### Returns
The players matches class.

<br>
#### `public inline FORCEINLINE `[`URH_PlayerReports`](PlayerInfo.md#classURH__PlayerReports)` * `[`GetReports`](#classURH__PlayerInfo_1a384f5b99113927ed0f47cf1278e45018)`() const` <a id="classURH__PlayerInfo_1a384f5b99113927ed0f47cf1278e45018"></a>

Gets The players reports class.

#### Returns
The players reports class.

<br>
#### `public inline FORCEINLINE TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > & `[`GetPlayerPlatformIds`](#classURH__PlayerInfo_1a6da64917c1815b0048dbf5b770a43480)`()` <a id="classURH__PlayerInfo_1a6da64917c1815b0048dbf5b770a43480"></a>

Gets the associated platform ids of the player.

#### Returns
The players associated platforms ids.

<br>
#### `public inline FORCEINLINE const TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > & `[`GetPlayerPlatformIds`](#classURH__PlayerInfo_1ab0617adb51499a0c8ce36ef60693e6d6)`() const` <a id="classURH__PlayerInfo_1ab0617adb51499a0c8ce36ef60693e6d6"></a>

Gets the associated platform ids of the player.

#### Returns
The players associated platforms ids.

<br>
#### `public TArray< `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > `[`GetPlayerPlatforms`](#classURH__PlayerInfo_1a3896d84ba5481158ce3cfc62b39e064e)`() const` <a id="classURH__PlayerInfo_1a3896d84ba5481158ce3cfc62b39e064e"></a>

Gets the associated platforms of the player.

#### Returns
The players associated platforms.

<br>
#### `public `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetPlayerPlatformInfo`](#classURH__PlayerInfo_1a0e3a7df23b8a7a183d1b8c94c578e343)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` <a id="classURH__PlayerInfo_1a0e3a7df23b8a7a183d1b8c94c578e343"></a>

Gets a specific platform for the player.

#### Parameters
* `PlayerPlatformId` The Id of the platform being requested. 

#### Returns
The platform requested for the player if it exists.

<br>
#### `public inline `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`GetPlayerInventory`](#classURH__PlayerInfo_1a430d123219813a6ba0c8100b367df6ec)`() const` <a id="classURH__PlayerInfo_1a430d123219813a6ba0c8100b367df6ec"></a>

Gets the players Inventory Subsystem.

#### Returns
The players Inventory Subsystem.

<br>
#### `public inline `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`GetPlayerNotifications`](#classURH__PlayerInfo_1a6f1e1f6ef4d38ed87c2c2b920a5cd891)`() const` <a id="classURH__PlayerInfo_1a6f1e1f6ef4d38ed87c2c2b920a5cd891"></a>

Gets the players Notification Subsystem.

#### Returns
The players Notification Subsystem.

<br>
#### `public void `[`StartStreamingNotifications`](#classURH__PlayerInfo_1a15c2a3c44c22cfb7461609fa5e5d45cc)`()` <a id="classURH__PlayerInfo_1a15c2a3c44c22cfb7461609fa5e5d45cc"></a>

Request to start streaming notifications for this player.

<br>
#### `public void `[`StopStreamingNotifications`](#classURH__PlayerInfo_1a17cff21d266da2c72a4f200e316d45b6)`(bool bClearCache)` <a id="classURH__PlayerInfo_1a17cff21d266da2c72a4f200e316d45b6"></a>

Requests to stop streaming notifications.

#### Parameters
* `[in[` bClearCache If true, the cache of notifications will be cleared.

<br>
#### `public inline const TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > & `[`GetAllStoredPlayerSettings`](#classURH__PlayerInfo_1a3eb1adffb0e0f4f503241ae5848818ce)`() const` <a id="classURH__PlayerInfo_1a3eb1adffb0e0f4f503241ae5848818ce"></a>

Gets all the players store settings data.

#### Returns
The players stored settings data.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlayerRankResponseV2`](models/RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetAllStoredPlayerRankings`](#classURH__PlayerInfo_1aa79ba1c1bcb06d02478ec145999b06a3)`() const` <a id="classURH__PlayerInfo_1aa79ba1c1bcb06d02478ec145999b06a3"></a>

Gets all the players stored ranking data.

#### Returns
The players stored settings data.

<br>
#### `public `[`URH_PlayerInfoSubsystem`](PlayerInfo.md#classURH__PlayerInfoSubsystem)` * `[`GetPlayerInfoSubsystem`](#classURH__PlayerInfo_1a0f038ae188d71729b19771f401bee34a)`() const` <a id="classURH__PlayerInfo_1a0f038ae188d71729b19771f401bee34a"></a>

Gets the players Info Subsystem that the Player Info is on.

#### Returns
The Player Info Subsystem.

<br>
#### `public void `[`InitializeForPlayer`](#classURH__PlayerInfo_1a38608b8b57751e9db1c1dcfb818d0506)`(const FGuid & PlayerUuid)` <a id="classURH__PlayerInfo_1a38608b8b57751e9db1c1dcfb818d0506"></a>

Initialized the player info from a given Player Unique Id.

#### Parameters
* `PlayerUuid` The Unique Id of the player.

<br>
#### `public void `[`GetLastKnownDisplayNameAsync`](#classURH__PlayerInfo_1a748ec2c5cc1c2aa3f3a91d906c8ba04b)`(const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock & Delegate,const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem)` <a id="classURH__PlayerInfo_1a748ec2c5cc1c2aa3f3a91d906c8ba04b"></a>

Gets the last known display name for the player, will make required API calls to retrieve the information if needed.

#### Parameters
* `LocalPlayerSubsystem` The Local Player Subsystem to sanitizing player names. 

* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `PreferredPlatformType` If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player. 

* `Delegate` Callback with the players display name.

<br>
#### `public inline void `[`BLUEPRINT_GetLastKnownDisplayNameAsync`](#classURH__PlayerInfo_1a2a5f9d31fb4c1096e06d68569d617257)`(const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem,const FTimespan & StaleThreshold,bool bForceRefresh,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)` <a id="classURH__PlayerInfo_1a2a5f9d31fb4c1096e06d68569d617257"></a>

<br>
#### `public bool `[`GetLastKnownDisplayName`](#classURH__PlayerInfo_1a1013650527f7be680adc07896e49d555)`(FString & OutDisplayName,ERHAPI_Platform PreferredPlatformType) const` <a id="classURH__PlayerInfo_1a1013650527f7be680adc07896e49d555"></a>

Gets the last known display name for the player.

#### Parameters
* `PreferredPlatformType` If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player. 

* `OutDisplayName` The player's display name. 

#### Returns
If the call successfully found a display name for the player already stored on the client.

<br>
#### `public inline bool `[`BLUEPRINT_GetLastKnownDisplayName`](#classURH__PlayerInfo_1a4b096747849fe22e2c7934fb3212bb85)`(ERHAPI_Platform PreferredPlatformType,FString & OutDisplayName) const` <a id="classURH__PlayerInfo_1a4b096747849fe22e2c7934fb3212bb85"></a>

<br>
#### `public void `[`GetLinkedPlatformInfo`](#classURH__PlayerInfo_1ac5a0056e3adcab2d8a5c65ea7d5e43ca)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlatformsBlock & Delegate)` <a id="classURH__PlayerInfo_1ac5a0056e3adcab2d8a5c65ea7d5e43ca"></a>

Gets the players linked platforms via API call.

#### Parameters
* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players linked platforms.

<br>
#### `public inline void `[`BLUEPRINT_GetLinkedPlatformInfo`](#classURH__PlayerInfo_1a17dd835ef46a8418e6cf760eb076d01d)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlatformsDynamicDelegate & Delegate)` <a id="classURH__PlayerInfo_1a17dd835ef46a8418e6cf760eb076d01d"></a>

<br>
#### `public void `[`GetPlayerSettings`](#classURH__PlayerInfo_1aa9d33400032ef41067fbc52f72f092c2)`(const FString & SettingTypeId,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)` <a id="classURH__PlayerInfo_1aa9d33400032ef41067fbc52f72f092c2"></a>

Gets the players settings information for a given type.

#### Parameters
* `SettingTypeId` The setting type requested. 

* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players settings for the given type.

<br>
#### `public inline void `[`BLUEPRINT_GetPlayerSettings`](#classURH__PlayerInfo_1a76e2f0a5ded932bc524553a9a2d43976)`(const FString & SettingTypeId,const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate & Delegate)` <a id="classURH__PlayerInfo_1a76e2f0a5ded932bc524553a9a2d43976"></a>

<br>
#### `public void `[`SetPlayerSettings`](#classURH__PlayerInfo_1a74ee0e82383414759503cc731086ab54)`(const FString & SettingTypeId,`[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` & SettingsData,const FRH_PlayerInfoSetPlayerSettingsBlock & Delegate)` <a id="classURH__PlayerInfo_1a74ee0e82383414759503cc731086ab54"></a>

Sets the players settings information for a given type.

#### Parameters
* `SettingTypeId` The setting type to update. 

* `SettingsData` Data to be stored into the players settings. 

* `Delegate` Callback when the operation is complete with success information.

<br>
#### `public inline void `[`BLUEPRINT_SetPlayerSettings`](#classURH__PlayerInfo_1aebf4859d56d3fc772711fd1c8714d4f0)`(const FString & SettingTypeId,`[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` SettingsData,const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate & Delegate)` <a id="classURH__PlayerInfo_1aebf4859d56d3fc772711fd1c8714d4f0"></a>

<br>
#### `public void `[`GetPlayerRankings`](#classURH__PlayerInfo_1a7ff2423c28633ab7f4f62039aba32c8d)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)` <a id="classURH__PlayerInfo_1a7ff2423c28633ab7f4f62039aba32c8d"></a>

Gets the players ranking information for a given type.

#### Parameters
* `StaleThreshold` If set, will force a re-request of the players information if the last updated time was more than the threshold. 

* `bForceRefresh` If true, will force a re-request of the players information. 

* `Delegate` Callback with the players ranking for the given type.

<br>
#### `public inline void `[`BLUEPRINT_GetPlayerRankings`](#classURH__PlayerInfo_1adbfa47a9d0df7dec931ce18fa7b4f8b4)`(const FTimespan & StaleThreshold,bool bForceRefresh,const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate & Delegate)` <a id="classURH__PlayerInfo_1adbfa47a9d0df7dec931ce18fa7b4f8b4"></a>

<br>
#### `public void `[`UpdatePlayerRanking`](#classURH__PlayerInfo_1a504494976ef115b48b620bcbfc914d17)`(const FString & RankId,const `[`FRHAPI_PlayerRankUpdateRequest`](models/RHAPI_PlayerRankUpdateRequest.md#structFRHAPI__PlayerRankUpdateRequest)` & RankData,const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)` <a id="classURH__PlayerInfo_1a504494976ef115b48b620bcbfc914d17"></a>

Sets the players settings information for a given type.

#### Parameters
* `SettingTypeId` The setting type to update. 

* `SettingsData` Data to be stored into the players settings. 

* `Delegate` Callback when the operation is complete with success information.

<br>
#### `public inline void `[`BLUEPRINT_UpdatePlayerRanking`](#classURH__PlayerInfo_1a60648275bd880b33cfb78b403e0832ac)`(const FString & RankId,const `[`FRHAPI_PlayerRankUpdateRequest`](models/RHAPI_PlayerRankUpdateRequest.md#structFRHAPI__PlayerRankUpdateRequest)` & RankData,const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate & Delegate)` <a id="classURH__PlayerInfo_1a60648275bd880b33cfb78b403e0832ac"></a>

<br>
#### `public FAuthContextPtr `[`GetAuthContext`](#classURH__PlayerInfo_1a38aa7a072a97be36bc623a9cda702cdf)`() const` <a id="classURH__PlayerInfo_1a38aa7a072a97be36bc623a9cda702cdf"></a>

Gets the local Auth Context for making API calls.

#### Returns
Local auth context for the given player or instance

<br>
#### `public ERHAPI_Platform `[`GetLoggedInPlatform`](#classURH__PlayerInfo_1ad8fc7aea229a59d52a1c9e3491b8d168)`() const` <a id="classURH__PlayerInfo_1ad8fc7aea229a59d52a1c9e3491b8d168"></a>

Gets the local users logged in platform type.

#### Returns
The Platform type of the local user

<br>
#### `protected FGuid `[`RHPlayerUuid`](#classURH__PlayerInfo_1abd6b1bad2e1044b59af44d04f822cef1) <a id="classURH__PlayerInfo_1abd6b1bad2e1044b59af44d04f822cef1"></a>

The Unique Player Id for the player.

<br>
#### `protected TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > `[`PlayerSettingsByTypeId`](#classURH__PlayerInfo_1a17fa2a55af8c7efa708db4871753ae07) <a id="classURH__PlayerInfo_1a17fa2a55af8c7efa708db4871753ae07"></a>

Cache of Player Settings Data by their settings types.

<br>
#### `protected TMap< FString, `[`FRH_PlayerSettingKeySetWrapper`](PlayerInfo.md#structFRH__PlayerSettingKeySetWrapper)` > `[`PendingSettingRequestsByTypeId`](#classURH__PlayerInfo_1a65d3de9960e39b3dcacc0d885c14b016) <a id="classURH__PlayerInfo_1a65d3de9960e39b3dcacc0d885c14b016"></a>

When requesting multiple Player Settings Updates at once, this keeps track of pending requests so we know when all requests are completed.

<br>
#### `protected TMap< FString, `[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` > `[`SetPlayerSettingResponses`](#classURH__PlayerInfo_1ae9c58905a224f950cec5f6fc65de81f3) <a id="classURH__PlayerInfo_1ae9c58905a224f950cec5f6fc65de81f3"></a>

Used when requesting multiple Player Settings Updates to track all their responses.

<br>
#### `protected TArray< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` > `[`LinkedPlayerPlatforms`](#classURH__PlayerInfo_1a9f74bbf7a958d7a5a00d7daa8c159c2f) <a id="classURH__PlayerInfo_1a9f74bbf7a958d7a5a00d7daa8c159c2f"></a>

Cache of all platforms the player is linked to.

<br>
#### `protected `[`URH_PlayerPresence`](PlayerInfo.md#classURH__PlayerPresence)` * `[`PlayerPresence`](#classURH__PlayerInfo_1ae3c851503d0b5b8c024dc55252acb688) <a id="classURH__PlayerInfo_1ae3c851503d0b5b8c024dc55252acb688"></a>

The players Presence Information.

<br>
#### `protected `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`PlayerSessions`](#classURH__PlayerInfo_1a7af4d09bb83333d3028bc9a94cf067fd) <a id="classURH__PlayerInfo_1a7af4d09bb83333d3028bc9a94cf067fd"></a>

The players Sessions Information.

<br>
#### `protected `[`URH_PlayerMatches`](PlayerInfo.md#classURH__PlayerMatches)` * `[`PlayerMatches`](#classURH__PlayerInfo_1a1f355fbb71f17bc3bb40283c931138aa) <a id="classURH__PlayerInfo_1a1f355fbb71f17bc3bb40283c931138aa"></a>

The players Matches Information.

<br>
#### `protected `[`URH_PlayerReports`](PlayerInfo.md#classURH__PlayerReports)` * `[`PlayerReports`](#classURH__PlayerInfo_1a99a08ebcbd1c9c030f1d4ca7f9fcb572) <a id="classURH__PlayerInfo_1a99a08ebcbd1c9c030f1d4ca7f9fcb572"></a>

The players Reports Information.

<br>
#### `protected `[`URH_PlayerInventory`](Inventory.md#classURH__PlayerInventory)` * `[`PlayerInventory`](#classURH__PlayerInfo_1ab06228dae3921d141dbbf2bf895c55da) <a id="classURH__PlayerInfo_1ab06228dae3921d141dbbf2bf895c55da"></a>

The Players Inventory Subsystem.

<br>
#### `protected `[`URH_PlayerNotifications`](Notifications.md#classURH__PlayerNotifications)` * `[`PlayerNotifications`](#classURH__PlayerInfo_1ac1eb1a25b4d89a7f7c75cbb6d4c9e4a8) <a id="classURH__PlayerInfo_1ac1eb1a25b4d89a7f7c75cbb6d4c9e4a8"></a>

The Players Inventory Subsystem.

<br>
#### `protected TMap< FString, `[`FRHAPI_PlayerRankResponseV2`](models/RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRankingsByRankingId`](#classURH__PlayerInfo_1a5728d3241aef0abed0788e90422ad071) <a id="classURH__PlayerInfo_1a5728d3241aef0abed0788e90422ad071"></a>

List of the player's rankings.

<br>
#### `protected FDateTime `[`LastRequestPlatforms`](#classURH__PlayerInfo_1aa5e1b18e6f2841b2f1e32914d8552756) <a id="classURH__PlayerInfo_1aa5e1b18e6f2841b2f1e32914d8552756"></a>

Tracks the last time the players linked platforms were requested for checking if the data is stale.

<br>
#### `protected TMap< FString, FDateTime > `[`LastRequestSettingsByTypeId`](#classURH__PlayerInfo_1aaa55e58e83b940311b96f7869bea9bba) <a id="classURH__PlayerInfo_1aaa55e58e83b940311b96f7869bea9bba"></a>

Tracks the last time each settings type was request for checking if the data is stale.

<br>
#### `protected FDateTime `[`LastRequestRankings`](#classURH__PlayerInfo_1a5e9c3bbbc44273cfa7286f52c457d435) <a id="classURH__PlayerInfo_1a5e9c3bbbc44273cfa7286f52c457d435"></a>

Tracks the last time the player rankings were requested for checking if the data is stale.

<br>
#### `protected virtual void `[`OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse`](#classURH__PlayerInfo_1a49e19ae4082f15e22b2062c1cb78deb0)`(bool bSuccess,const TArray< `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > & Platforms,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate,const class `[`URH_LocalPlayerSubsystem`](LocalPlayer.md#classURH__LocalPlayerSubsystem)` * LocalPlayerSubsystem)` <a id="classURH__PlayerInfo_1a49e19ae4082f15e22b2062c1cb78deb0"></a>

Handles the response to a Get Linked Platforms For Last Known Display Name call.

#### Parameters
* `bSuccess` If the call was successful. 

* `Platforms` List of platforms the player is linked to. 

* `PreferredPlatformType` The preferred platform type to use for the player. 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `LocalPlayerSubsystem` The local player subsystem that made the original call.

<br>
#### `protected virtual void `[`OnDisplayNameSanitized`](#classURH__PlayerInfo_1afe5a34e86382c3f78767f2d72e3819fd)`(bool bSuccess,const FString & SanitizedMessage,ERHAPI_Platform PreferredPlatformType,const FRH_PlayerInfoGetDisplayNameBlock Delegate)` <a id="classURH__PlayerInfo_1afe5a34e86382c3f78767f2d72e3819fd"></a>

Handles the response to sanitizing the players display name.

#### Parameters
* `bSuccess` If the call was successful. 

* `SanitizedMessage` The sanitized display name. 

* `PreferredPlatformType` The preferred platform type to use for the player. 

* `Delegate` Callback Delegate to return the name.

<br>
#### `protected virtual void `[`OnGetPlayerLinkedPlatformsResponse`](#classURH__PlayerInfo_1ada74501b2e422f1fcf8f76825d74cc58)`(const GetPlatforms::Response & Response,const FRH_PlayerInfoGetPlatformsBlock Delegate)` <a id="classURH__PlayerInfo_1ada74501b2e422f1fcf8f76825d74cc58"></a>

Handles the response to a Get Linked Platforms call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnGetPlayerSettingsResponse`](#classURH__PlayerInfo_1a115f584e7b7b210193fd9e302abbd3ed)`(const GetSettings::Response & Response,const FRH_PlayerInfoGetPlayerSettingsBlock Delegate,const FString SettingTypeId)` <a id="classURH__PlayerInfo_1a115f584e7b7b210193fd9e302abbd3ed"></a>

Handles the response to a Get Player Settings call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `SettinyTypeId` The type of settings that were requested.

<br>
#### `protected virtual void `[`OnSetPlayerSettingsResponse`](#classURH__PlayerInfo_1a6f59dae05d5371b867091b180280f091)`(const SetSettings::Response & Response,const FRH_PlayerInfoSetPlayerSettingsBlock Delegate,const FString SettingTypeId,const FString SettingKey,`[`FRH_PlayerSettingsDataWrapper`](undefined.md#structFRH__PlayerSettingsDataWrapper)` SettingsData)` <a id="classURH__PlayerInfo_1a6f59dae05d5371b867091b180280f091"></a>

Handles the response to a Set Player Settings call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes. 

* `SettinyTypeId` The type of settings that being updated requested. 

* `SettingKey` The key of the setting that was updated. 

* `SettingsData` The data of the setting that was updated.

<br>
#### `protected virtual void `[`OnGetPlayerRankingsResponse`](#classURH__PlayerInfo_1a53c355b2f85273d37008d685c3cc113c)`(const GetRankings::Response & Response,const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)` <a id="classURH__PlayerInfo_1a53c355b2f85273d37008d685c3cc113c"></a>

Handles the response to a Get Player Rankings call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnUpdatePlayerRankingResponse`](#classURH__PlayerInfo_1a214672d0d5001ec24098b5414b0fc35d)`(const UpdateRanking::Response & Response,const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)` <a id="classURH__PlayerInfo_1a214672d0d5001ec24098b5414b0fc35d"></a>

Handles the response to a Update Player Ranking call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `typedef `[`GetPlatforms`](#classURH__PlayerInfo_1a88c3597ebf7f47399d936f5a96d344f6) <a id="classURH__PlayerInfo_1a88c3597ebf7f47399d936f5a96d344f6"></a>

<br>
#### `typedef `[`GetSettings`](#classURH__PlayerInfo_1ae425cac3ffa853a48c03df8caa2c8ca9) <a id="classURH__PlayerInfo_1ae425cac3ffa853a48c03df8caa2c8ca9"></a>

<br>
#### `typedef `[`SetSettings`](#classURH__PlayerInfo_1af84cca7ca91da85ceec6caf73af9db11) <a id="classURH__PlayerInfo_1af84cca7ca91da85ceec6caf73af9db11"></a>

<br>
#### `typedef `[`GetRankings`](#classURH__PlayerInfo_1ae1180995c5f25cb946b6f47e44886c46) <a id="classURH__PlayerInfo_1ae1180995c5f25cb946b6f47e44886c46"></a>

<br>
#### `typedef `[`UpdateRanking`](#classURH__PlayerInfo_1a0dde72a36a43d91264f8dc89aafcd5de) <a id="classURH__PlayerInfo_1a0dde72a36a43d91264f8dc89aafcd5de"></a>

<br>
## class `URH_PlayerInfoSubsystem` <a id="classURH__PlayerInfoSubsystem"></a>

```
class URH_PlayerInfoSubsystem
  : public URH_SandboxedSubsystemPlugin
  : public FTickableGameObject
```

Subsystem used to track and request information about players.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__PlayerInfoSubsystem_1a572d4ae155b61530e30fdf4943313228)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__PlayerInfoSubsystem_1ac84840e29cafeb3dd61382c359dd93e8)`()` | Safely tears down the subsystem.
`public inline const TMap< FGuid, `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * > & `[`GetPlayerInfos`](#classURH__PlayerInfoSubsystem_1abc456ab4d8ed5e310f4069cd412b7015)`() const` | Gets a map of all the player infos.
`public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetOrCreatePlayerInfo`](#classURH__PlayerInfoSubsystem_1a86cbf48c7736df66c95719b2aa2e56df)`(const FGuid & PlayerUuid)` | Gets a Player Info object for a given Player Unique Id, creates if needed.
`public virtual `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetOrCreatePlayerPlatformInfo`](#classURH__PlayerInfoSubsystem_1afe3412c3393e536a6bfa3df5c32b1d30)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId)` | Gets a Player Info object for a given Player Platform Id, creates if needed.
`public `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`FindPlayerInfoByPlatformId`](#classURH__PlayerInfoSubsystem_1accd9b150a34cf217253a503d2ade40f9)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` | Gets a Player Info object for a given Player Platform Id.
`public inline `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInfoSubsystem_1a7b424cc74c8113e946640262a255be78)`(const FGuid & PlayerUuid) const` | Gets a Player Info object for a given Unique Player Id.
`public inline `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetPlayerPlatformInfo`](#classURH__PlayerInfoSubsystem_1a14b5f2d5b7d3813fb765667f14395681)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` | Gets the platform info object for a player by the Platform Id.
`public inline void `[`AddPlayerLink`](#classURH__PlayerInfoSubsystem_1a7dff591ef7779e9b7fc24f778c819ad4)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId,const FGuid & PlayerUuid)` | Adds a platform mapping for a given player.
`public void `[`LookupPlayer`](#classURH__PlayerInfoSubsystem_1a2985421b191b211a64e28bc0a6f60d73)`(FString PlayerName,const FRH_PlayerInfoLookupPlayerBlock & Delegate)` | Searchs for all players who use the given display name via API Call.
`public inline void `[`BLUEPRINT_LookupPlayer`](#classURH__PlayerInfoSubsystem_1af49782e7e30900e743e026d08a5f991b)`(FString PlayerName,const FRH_PlayerInfoLookupPlayerDynamicDelegate & Delegate)` | 
`public void `[`LookupPlayerByPlatformUserId`](#classURH__PlayerInfoSubsystem_1a919f9dce2894aa34b79e2a95387adc2e)`(`[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` PlayerPlatformId,const FRH_PlayerInfoLookupPlayerBlock & Delegate)` | Searchs for players associated with the given platform and platform user id via API Call.
`public inline void `[`BLUEPRINT_LookupPlayerByPlatformUserId`](#classURH__PlayerInfoSubsystem_1acf620014114fa3f12ec521960f84d779)`(`[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` PlayerPlatformId,const FRH_PlayerInfoLookupPlayerDynamicDelegate & Delegate)` | 
`public `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`RemovePlayerInfoFromCache`](#classURH__PlayerInfoSubsystem_1a4ccb69f748014aa9baddae76250b7e31)`(const FGuid & PlayerUuid)` | Remove a specific Player Info from PlayerInfoSubsystem's cache.
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

#### Members

#### `public virtual void `[`Initialize`](#classURH__PlayerInfoSubsystem_1a572d4ae155b61530e30fdf4943313228)`()` <a id="classURH__PlayerInfoSubsystem_1a572d4ae155b61530e30fdf4943313228"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__PlayerInfoSubsystem_1ac84840e29cafeb3dd61382c359dd93e8)`()` <a id="classURH__PlayerInfoSubsystem_1ac84840e29cafeb3dd61382c359dd93e8"></a>

Safely tears down the subsystem.

<br>
#### `public inline const TMap< FGuid, `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * > & `[`GetPlayerInfos`](#classURH__PlayerInfoSubsystem_1abc456ab4d8ed5e310f4069cd412b7015)`() const` <a id="classURH__PlayerInfoSubsystem_1abc456ab4d8ed5e310f4069cd412b7015"></a>

Gets a map of all the player infos.

#### Returns
Map of player infos by Player Unique Id

<br>
#### `public virtual `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetOrCreatePlayerInfo`](#classURH__PlayerInfoSubsystem_1a86cbf48c7736df66c95719b2aa2e56df)`(const FGuid & PlayerUuid)` <a id="classURH__PlayerInfoSubsystem_1a86cbf48c7736df66c95719b2aa2e56df"></a>

Gets a Player Info object for a given Player Unique Id, creates if needed.

#### Parameters
* `PlayerUuid` Unique Player Id for the given player 

#### Returns
Player Info for the player

<br>
#### `public virtual `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetOrCreatePlayerPlatformInfo`](#classURH__PlayerInfoSubsystem_1afe3412c3393e536a6bfa3df5c32b1d30)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId)` <a id="classURH__PlayerInfoSubsystem_1afe3412c3393e536a6bfa3df5c32b1d30"></a>

Gets a Player Info object for a given Player Platform Id, creates if needed.

#### Parameters
* `PlayerPlatformId` Player Platform Id for the given player 

#### Returns
Player Info for the player

<br>
#### `public `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`FindPlayerInfoByPlatformId`](#classURH__PlayerInfoSubsystem_1accd9b150a34cf217253a503d2ade40f9)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` <a id="classURH__PlayerInfoSubsystem_1accd9b150a34cf217253a503d2ade40f9"></a>

Gets a Player Info object for a given Player Platform Id.

#### Parameters
* `PlayerPlatformId` Player Platform Id for the given player 

#### Returns
Player Info for the player if found

<br>
#### `public inline `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerInfoSubsystem_1a7b424cc74c8113e946640262a255be78)`(const FGuid & PlayerUuid) const` <a id="classURH__PlayerInfoSubsystem_1a7b424cc74c8113e946640262a255be78"></a>

Gets a Player Info object for a given Unique Player Id.

#### Parameters
* `PlayerUuid` Unique Player Id for the given player 

#### Returns
Player Info for the player if found

<br>
#### `public inline `[`URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * `[`GetPlayerPlatformInfo`](#classURH__PlayerInfoSubsystem_1a14b5f2d5b7d3813fb765667f14395681)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId) const` <a id="classURH__PlayerInfoSubsystem_1a14b5f2d5b7d3813fb765667f14395681"></a>

Gets the platform info object for a player by the Platform Id.

#### Parameters
* `PlayerPlatformId` Player Platform Id for the given player 

#### Returns
Player Platform Info for the player if found

<br>
#### `public inline void `[`AddPlayerLink`](#classURH__PlayerInfoSubsystem_1a7dff591ef7779e9b7fc24f778c819ad4)`(const `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` & PlayerPlatformId,const FGuid & PlayerUuid)` <a id="classURH__PlayerInfoSubsystem_1a7dff591ef7779e9b7fc24f778c819ad4"></a>

Adds a platform mapping for a given player.

#### Parameters
* `PlayerUuid` Unique Player Id for the given player 

* `PlayerPlatformId` Player Platform Id for the given player

<br>
#### `public void `[`LookupPlayer`](#classURH__PlayerInfoSubsystem_1a2985421b191b211a64e28bc0a6f60d73)`(FString PlayerName,const FRH_PlayerInfoLookupPlayerBlock & Delegate)` <a id="classURH__PlayerInfoSubsystem_1a2985421b191b211a64e28bc0a6f60d73"></a>

Searchs for all players who use the given display name via API Call.

#### Parameters
* `PlayerName` The display name we want to search for 

* `Delegate` Callback with the all PlayerInfos that are found with that display name

<br>
#### `public inline void `[`BLUEPRINT_LookupPlayer`](#classURH__PlayerInfoSubsystem_1af49782e7e30900e743e026d08a5f991b)`(FString PlayerName,const FRH_PlayerInfoLookupPlayerDynamicDelegate & Delegate)` <a id="classURH__PlayerInfoSubsystem_1af49782e7e30900e743e026d08a5f991b"></a>

<br>
#### `public void `[`LookupPlayerByPlatformUserId`](#classURH__PlayerInfoSubsystem_1a919f9dce2894aa34b79e2a95387adc2e)`(`[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` PlayerPlatformId,const FRH_PlayerInfoLookupPlayerBlock & Delegate)` <a id="classURH__PlayerInfoSubsystem_1a919f9dce2894aa34b79e2a95387adc2e"></a>

Searchs for players associated with the given platform and platform user id via API Call.

#### Parameters
* `Platform` The platform used for the lookup 

* `PlatformUserId` The platform user id used for the lookup 

* `Delegate` Callback with the all PlayerInfos that are found with that display name

<br>
#### `public inline void `[`BLUEPRINT_LookupPlayerByPlatformUserId`](#classURH__PlayerInfoSubsystem_1acf620014114fa3f12ec521960f84d779)`(`[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` PlayerPlatformId,const FRH_PlayerInfoLookupPlayerDynamicDelegate & Delegate)` <a id="classURH__PlayerInfoSubsystem_1acf620014114fa3f12ec521960f84d779"></a>

<br>
#### `public `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`RemovePlayerInfoFromCache`](#classURH__PlayerInfoSubsystem_1a4ccb69f748014aa9baddae76250b7e31)`(const FGuid & PlayerUuid)` <a id="classURH__PlayerInfoSubsystem_1a4ccb69f748014aa9baddae76250b7e31"></a>

Remove a specific Player Info from PlayerInfoSubsystem's cache.

#### Parameters
* `PlayerUuid` The UUID of the Player Info to be removed 

#### Returns
The Player Info that got removed

<br>
#### `public virtual void `[`Tick`](#classURH__PlayerInfoSubsystem_1abf83de825c346653c1bc3cba1df75815)`(float DeltaTime)` <a id="classURH__PlayerInfoSubsystem_1abf83de825c346653c1bc3cba1df75815"></a>

Unreals basic Tick function.

<br>
#### `public inline virtual bool `[`IsTickable`](#classURH__PlayerInfoSubsystem_1a49b75fe691775b67c9af6a818d2e4592)`() const` <a id="classURH__PlayerInfoSubsystem_1a49b75fe691775b67c9af6a818d2e4592"></a>

Gets if currently tickable.

<br>
#### `public inline virtual TStatId `[`GetStatId`](#classURH__PlayerInfoSubsystem_1a159d3535c053aa721f87274f48742cfa)`() const` <a id="classURH__PlayerInfoSubsystem_1a159d3535c053aa721f87274f48742cfa"></a>

Gets the stat to use for the tick time.

<br>
#### `protected TSubclassOf< `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` > `[`PlayerInfoClassOverride`](#classURH__PlayerInfoSubsystem_1a53d13eb27e48d9e00cd52986c5741fcf) <a id="classURH__PlayerInfoSubsystem_1a53d13eb27e48d9e00cd52986c5741fcf"></a>

Override class for Player Info if extended.

<br>
#### `protected TMap< FGuid, `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * > `[`PlayerInfos`](#classURH__PlayerInfoSubsystem_1a616fa3bfe4df4b7f8edd78f2414a42d5) <a id="classURH__PlayerInfoSubsystem_1a616fa3bfe4df4b7f8edd78f2414a42d5"></a>

Map of Player Infos to their player Uuids.

<br>
#### `protected TMap< `[`FRH_PlayerPlatformId](Common.md#structFRH__PlayerPlatformId), [URH_PlayerPlatformInfo`](PlayerInfo.md#classURH__PlayerPlatformInfo)` * > `[`PlayerPlatformInfos`](#classURH__PlayerInfoSubsystem_1a17e2ac363f59929e2c5be24746c03dbe) <a id="classURH__PlayerInfoSubsystem_1a17e2ac363f59929e2c5be24746c03dbe"></a>

Map of Player Platform Infos to their Platform Ids.

<br>
#### `protected TMap< `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)`, FGuid > `[`PlayerPlatformIdToUuidMap`](#classURH__PlayerInfoSubsystem_1a25ed5e4057d3929418e973228f9851a1) <a id="classURH__PlayerInfoSubsystem_1a25ed5e4057d3929418e973228f9851a1"></a>

Map of Player Uuid to their Platform Ids.

<br>
#### `protected virtual void `[`ClearPlayerInfoCache`](#classURH__PlayerInfoSubsystem_1a2ddbe40cfed50b7e76437aec24e4c054)`()` <a id="classURH__PlayerInfoSubsystem_1a2ddbe40cfed50b7e76437aec24e4c054"></a>

Clears the cached player infos.

<br>
#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__PlayerInfoSubsystem_1a5e14a7f60c320b9a2186e33726f7e5ee)`()` <a id="classURH__PlayerInfoSubsystem_1a5e14a7f60c320b9a2186e33726f7e5ee"></a>

Initializes the subsystem with defaults for its cached data.

<br>
#### `protected virtual void `[`OnLookupPlayerResponse`](#classURH__PlayerInfoSubsystem_1a5d178f65256eafbf0fccfc17e87bae62)`(const TLookupPlayer::Response & Response,const FRH_PlayerInfoLookupPlayerBlock Delegate)` <a id="classURH__PlayerInfoSubsystem_1a5d178f65256eafbf0fccfc17e87bae62"></a>

Handles the response to a Lookup Player call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnLookupPlayerByPlatformUserIdResponse`](#classURH__PlayerInfoSubsystem_1a0cd6b58da263387aead9c9d17729cb27)`(const TLookupPlayer::Response & Response,const FRH_PlayerInfoLookupPlayerBlock Delegate)` <a id="classURH__PlayerInfoSubsystem_1a0cd6b58da263387aead9c9d17729cb27"></a>

Handles the response to a Lookup Player By Platform User Id call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `typedef `[`TLookupPlayer`](#classURH__PlayerInfoSubsystem_1a221cacf49cc61a7df9b7e791befbb312) <a id="classURH__PlayerInfoSubsystem_1a221cacf49cc61a7df9b7e791befbb312"></a>

<br>
## struct `FRH_PlayerSettingKeySetWrapper` <a id="structFRH__PlayerSettingKeySetWrapper"></a>

Wrapper to help with setting keys for player settings.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TSet< FString > `[`SettingKeySet`](#structFRH__PlayerSettingKeySetWrapper_1a2857ee7d7522d7cfa86e1fd44fed229c) | Set of keys being set by the settings update.
`public inline  `[`FRH_PlayerSettingKeySetWrapper`](#structFRH__PlayerSettingKeySetWrapper_1a67aefafe77cd84f15942f74a220f93a8)`()` | Default constructor.

#### Members

#### `public TSet< FString > `[`SettingKeySet`](#structFRH__PlayerSettingKeySetWrapper_1a2857ee7d7522d7cfa86e1fd44fed229c) <a id="structFRH__PlayerSettingKeySetWrapper_1a2857ee7d7522d7cfa86e1fd44fed229c"></a>

Set of keys being set by the settings update.

<br>
#### `public inline  `[`FRH_PlayerSettingKeySetWrapper`](#structFRH__PlayerSettingKeySetWrapper_1a67aefafe77cd84f15942f74a220f93a8)`()` <a id="structFRH__PlayerSettingKeySetWrapper_1a67aefafe77cd84f15942f74a220f93a8"></a>

Default constructor.

<br>
## struct `FRH_PlayerAndPlatformInfo` <a id="structFRH__PlayerAndPlatformInfo"></a>

Wrapper to pair a players Unique Player Id and their current logged in Platform Id.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRH__PlayerAndPlatformInfo_1a15d2eb292a9d24de619281272e0dbd3d) | The players Unique Player id.
`public `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#structFRH__PlayerAndPlatformInfo_1a3e37b7de18225d02a405d03901b2f9a2) | The players logged in Platform Id.
`public inline  `[`FRH_PlayerAndPlatformInfo`](#structFRH__PlayerAndPlatformInfo_1a06195fa8f09f200dba4da24a838bc58e)`()` | Default Constructor.

#### Members

#### `public FGuid `[`PlayerUuid`](#structFRH__PlayerAndPlatformInfo_1a15d2eb292a9d24de619281272e0dbd3d) <a id="structFRH__PlayerAndPlatformInfo_1a15d2eb292a9d24de619281272e0dbd3d"></a>

The players Unique Player id.

<br>
#### `public `[`FRH_PlayerPlatformId`](Common.md#structFRH__PlayerPlatformId)` `[`PlayerPlatformId`](#structFRH__PlayerAndPlatformInfo_1a3e37b7de18225d02a405d03901b2f9a2) <a id="structFRH__PlayerAndPlatformInfo_1a3e37b7de18225d02a405d03901b2f9a2"></a>

The players logged in Platform Id.

<br>
#### `public inline  `[`FRH_PlayerAndPlatformInfo`](#structFRH__PlayerAndPlatformInfo_1a06195fa8f09f200dba4da24a838bc58e)`()` <a id="structFRH__PlayerAndPlatformInfo_1a06195fa8f09f200dba4da24a838bc58e"></a>

Default Constructor.

<br>
