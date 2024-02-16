# PlayerInfo <a id="group__PlayerInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_PlayerPresence`](#classURH__PlayerPresence) | Player Presence class used to store player presence data.
`class `[`URH_PlayerSessions`](#classURH__PlayerSessions) | Player Sessions class used to store player session membership information.
`class `[`URH_PlayerPlatformInfo`](#classURH__PlayerPlatformInfo) | Stores information a specific platform the player has linked to their account.
`class `[`URH_PlayerInfo`](#classURH__PlayerInfo) | Stores and fetchs all the information about a given player.
`class `[`URH_PlayerInfoSubsystem`](#classURH__PlayerInfoSubsystem) | Subsystem used to track and request information about players.
`struct `[`FRH_PlayerSettingKeySetWrapper`](#structFRH__PlayerSettingKeySetWrapper) | Wrapper to help with setting keys for player settings.
`struct `[`FRH_PlayerAndPlatformInfo`](#structFRH__PlayerAndPlatformInfo) | Wrapper to pair a players Unique Player Id and their current logged in Platform Id.

## class `URH_PlayerPresence` <a id="classURH__PlayerPresence"></a>

```
class URH_PlayerPresence
  : public UObject
```

Player Presence class used to store player presence data.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`bInitialized`](#classURH__PlayerPresence_1a3f6af11e501d2f96fe4b520e193e46da) | Tracks if the Presence has been initialized.
`public ERHAPI_OnlineStatus `[`Status`](#classURH__PlayerPresence_1a51af6d5a0caf4f5e47e4498a7bb3e456) | Online status of the player.
`public FString `[`Message`](#classURH__PlayerPresence_1abd625e3be04fcb0527bbc719dc929d6e) | Message set by a player to display on their presence information.
`public FString `[`Platform`](#classURH__PlayerPresence_1ad461b02f3065a8e712a127e954fb9e36) | Which platform the player is currently playing / last seen on.
`public FString `[`DisplayName`](#classURH__PlayerPresence_1a93fef7276ca2b984c0d2e66ca3dc3852) | The players display name for their current or last seen platform.
`public TMap< FString, FString > `[`CustomData`](#classURH__PlayerPresence_1abbc5a206683a5117cc6c3aa200e137c8) | Custom data that can be set by the player.
`public FGuid `[`PlayerUuid`](#classURH__PlayerPresence_1a124c1f1a05dbd0993286b8c62348d46d) | Players unique identifier.
`public FDateTime `[`LastUpdated`](#classURH__PlayerPresence_1ab54ee60de419c460569b4500725eb111) | The last time the players presence data was updated on the client.
`public FString `[`ETag`](#classURH__PlayerPresence_1a7608e0238c8c94c369b7ee9b42bac10d) | ETag to track if the presence is stale during requests.
`public FRH_OnPresenceUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnPresenceUpdatedDelegate`](#classURH__PlayerPresence_1a7cb31d865f01ae74eff5ed5ce7f121f7) | Blueprint delegate to listen for presence updates.
`public FRH_OnPresenceUpdatedMulticastDelegate `[`OnPresenceUpdatedDelegate`](#classURH__PlayerPresence_1aef3e7a5f08976a00d0a7e72af535d645) | Native delegate to listen for presence updates.
`public TArray< FRH_OnRequestPlayerPresenceBlock > `[`TemporaryRequestDelegates`](#classURH__PlayerPresence_1a0c4a50a5612408e6a017ca3f249e8763) | Delegates stored to response to currently active requests.
`public inline virtual void `[`Update`](#classURH__PlayerPresence_1ad8e9439f6208b737bbf2c34428567a96)`(const `[`FRHAPI_PlayerPresence`](models/RHAPI_PlayerPresence.md#structFRHAPI__PlayerPresence)` & Other)` | Stores the response data from an API presence request.
`public template<>`  <br/>`inline void `[`Update`](#classURH__PlayerPresence_1ada7244129a60c38caea63a604c65d21c)`(const T & Other)` | Stores the response data from an API presence request.
`public inline void `[`MarkUpdated`](#classURH__PlayerPresence_1ada0aeb79948e6a326c4e0730722012c8)`()` | Sets the last updated time to now.
`public inline void `[`MarkDirty`](#classURH__PlayerPresence_1a0c5758952db9d0daa9840032fb010b22)`()` | Clears the last updated time to force an update.
`public inline void `[`RequestUpdate`](#classURH__PlayerPresence_1a7c2429b932c790fc766b1dd081a3d1eb)`(bool bForceUpdate,const FRH_OnRequestPlayerPresenceBlock & Delegate)` | Enqueues an update request for the players presence information from the RallyHere API.
`public inline void `[`BLUEPRINT_RequestUpdate`](#classURH__PlayerPresence_1a2c3c8c9dfa0005d87b61fb75f57ec7f9)`(bool bForceUpdate,const FRH_OnRequestPlayerPresenceDynamicDelegate & Delegate)` | 
`public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerPresence_1aa423b5dc5ad1bb56fbba410f634a955b)`() const` | Gets the PlayerInfo that owns this Player Presence.
`public void `[`CheckPollStatus`](#classURH__PlayerPresence_1af4e990217a6d2e06b4ad6ee7f4188229)`(const bool bForceUpdate)` | Updates the poll status to be active or inactive based on if it should currently be polling.
`protected FRH_AutoPollerPtr `[`PresencePoller`](#classURH__PlayerPresence_1a733193654e8f5783c4d69380ec946686) | Poller for the players presence.
`protected inline virtual bool `[`ShouldPoll`](#classURH__PlayerPresence_1a46f7f69fa125dbdcbda3b0a8c0281c34)`() const` | Gets if the poller should be actively polling, only polls if something cares about it.
`protected void `[`PollPresence`](#classURH__PlayerPresence_1a6d563892989854c37ca316298c0f7edc)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the players presence.
`protected virtual void `[`ExecuteDelegates`](#classURH__PlayerPresence_1a81e83d51d446fcd89c4d5f7c5519c0e4)`(bool bSuccess)` | Handles executing any delegate listeners for the players presence.
`typedef `[`GetPresenceType`](#classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214) | 

#### Members

#### `public bool `[`bInitialized`](#classURH__PlayerPresence_1a3f6af11e501d2f96fe4b520e193e46da) <a id="classURH__PlayerPresence_1a3f6af11e501d2f96fe4b520e193e46da"></a>

Tracks if the Presence has been initialized.

<br>
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
#### `public FGuid `[`PlayerUuid`](#classURH__PlayerPresence_1a124c1f1a05dbd0993286b8c62348d46d) <a id="classURH__PlayerPresence_1a124c1f1a05dbd0993286b8c62348d46d"></a>

Players unique identifier.

<br>
#### `public FDateTime `[`LastUpdated`](#classURH__PlayerPresence_1ab54ee60de419c460569b4500725eb111) <a id="classURH__PlayerPresence_1ab54ee60de419c460569b4500725eb111"></a>

The last time the players presence data was updated on the client.

<br>
#### `public FString `[`ETag`](#classURH__PlayerPresence_1a7608e0238c8c94c369b7ee9b42bac10d) <a id="classURH__PlayerPresence_1a7608e0238c8c94c369b7ee9b42bac10d"></a>

ETag to track if the presence is stale during requests.

<br>
#### `public FRH_OnPresenceUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnPresenceUpdatedDelegate`](#classURH__PlayerPresence_1a7cb31d865f01ae74eff5ed5ce7f121f7) <a id="classURH__PlayerPresence_1a7cb31d865f01ae74eff5ed5ce7f121f7"></a>

Blueprint delegate to listen for presence updates.

<br>
#### `public FRH_OnPresenceUpdatedMulticastDelegate `[`OnPresenceUpdatedDelegate`](#classURH__PlayerPresence_1aef3e7a5f08976a00d0a7e72af535d645) <a id="classURH__PlayerPresence_1aef3e7a5f08976a00d0a7e72af535d645"></a>

Native delegate to listen for presence updates.

<br>
#### `public TArray< FRH_OnRequestPlayerPresenceBlock > `[`TemporaryRequestDelegates`](#classURH__PlayerPresence_1a0c4a50a5612408e6a017ca3f249e8763) <a id="classURH__PlayerPresence_1a0c4a50a5612408e6a017ca3f249e8763"></a>

Delegates stored to response to currently active requests.

<br>
#### `public inline virtual void `[`Update`](#classURH__PlayerPresence_1ad8e9439f6208b737bbf2c34428567a96)`(const `[`FRHAPI_PlayerPresence`](models/RHAPI_PlayerPresence.md#structFRHAPI__PlayerPresence)` & Other)` <a id="classURH__PlayerPresence_1ad8e9439f6208b737bbf2c34428567a96"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The presence data to store.

<br>
#### `public template<>`  <br/>`inline void `[`Update`](#classURH__PlayerPresence_1ada7244129a60c38caea63a604c65d21c)`(const T & Other)` <a id="classURH__PlayerPresence_1ada7244129a60c38caea63a604c65d21c"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The presence data to store.

<br>
#### `public inline void `[`MarkUpdated`](#classURH__PlayerPresence_1ada0aeb79948e6a326c4e0730722012c8)`()` <a id="classURH__PlayerPresence_1ada0aeb79948e6a326c4e0730722012c8"></a>

Sets the last updated time to now.

<br>
#### `public inline void `[`MarkDirty`](#classURH__PlayerPresence_1a0c5758952db9d0daa9840032fb010b22)`()` <a id="classURH__PlayerPresence_1a0c5758952db9d0daa9840032fb010b22"></a>

Clears the last updated time to force an update.

<br>
#### `public inline void `[`RequestUpdate`](#classURH__PlayerPresence_1a7c2429b932c790fc766b1dd081a3d1eb)`(bool bForceUpdate,const FRH_OnRequestPlayerPresenceBlock & Delegate)` <a id="classURH__PlayerPresence_1a7c2429b932c790fc766b1dd081a3d1eb"></a>

Enqueues an update request for the players presence information from the RallyHere API.

#### Parameters
* `bForceUpdate` If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly 

* `Delegate` Callback delegate for the request.

<br>
#### `public inline void `[`BLUEPRINT_RequestUpdate`](#classURH__PlayerPresence_1a2c3c8c9dfa0005d87b61fb75f57ec7f9)`(bool bForceUpdate,const FRH_OnRequestPlayerPresenceDynamicDelegate & Delegate)` <a id="classURH__PlayerPresence_1a2c3c8c9dfa0005d87b61fb75f57ec7f9"></a>

<br>
#### `public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerPresence_1aa423b5dc5ad1bb56fbba410f634a955b)`() const` <a id="classURH__PlayerPresence_1aa423b5dc5ad1bb56fbba410f634a955b"></a>

Gets the PlayerInfo that owns this Player Presence.

#### Returns
The PlayerInfo that owns the Presence.

<br>
#### `public void `[`CheckPollStatus`](#classURH__PlayerPresence_1af4e990217a6d2e06b4ad6ee7f4188229)`(const bool bForceUpdate)` <a id="classURH__PlayerPresence_1af4e990217a6d2e06b4ad6ee7f4188229"></a>

Updates the poll status to be active or inactive based on if it should currently be polling.

#### Parameters
* `bForceUpdate` If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly

<br>
#### `protected FRH_AutoPollerPtr `[`PresencePoller`](#classURH__PlayerPresence_1a733193654e8f5783c4d69380ec946686) <a id="classURH__PlayerPresence_1a733193654e8f5783c4d69380ec946686"></a>

Poller for the players presence.

<br>
#### `protected inline virtual bool `[`ShouldPoll`](#classURH__PlayerPresence_1a46f7f69fa125dbdcbda3b0a8c0281c34)`() const` <a id="classURH__PlayerPresence_1a46f7f69fa125dbdcbda3b0a8c0281c34"></a>

Gets if the poller should be actively polling, only polls if something cares about it.

<br>
#### `protected void `[`PollPresence`](#classURH__PlayerPresence_1a6d563892989854c37ca316298c0f7edc)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerPresence_1a6d563892989854c37ca316298c0f7edc"></a>

Starts a poll of the players presence.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected virtual void `[`ExecuteDelegates`](#classURH__PlayerPresence_1a81e83d51d446fcd89c4d5f7c5519c0e4)`(bool bSuccess)` <a id="classURH__PlayerPresence_1a81e83d51d446fcd89c4d5f7c5519c0e4"></a>

Handles executing any delegate listeners for the players presence.

#### Parameters
* `bSuccess` If the poll was successful.

<br>
#### `typedef `[`GetPresenceType`](#classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214) <a id="classURH__PlayerPresence_1a08e8229618b324bafea2d8195b6b9214"></a>

<br>
## class `URH_PlayerSessions` <a id="classURH__PlayerSessions"></a>

```
class URH_PlayerSessions
  : public UObject
```

Player Sessions class used to store player session membership information.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`bInitialized`](#classURH__PlayerSessions_1a30bb48d8307e142e04960dcc1e9256f5) | Tracks if the Presence has been initialized.
`public FGuid `[`PlayerUuid`](#classURH__PlayerSessions_1ae2b7f7a6ea620af20b267980081fa7a1) | Players unique identifier.
`public FDateTime `[`LastUpdated`](#classURH__PlayerSessions_1aecfe8c9469d2bc7080457d5636b0404f) | The last time the players session data was updated on the client.
`public FString `[`ETag`](#classURH__PlayerSessions_1a9f9cebbae2067bc4b0f813531f19b903) | ETag to track if the session list is stale during requests.
`public `[`FRHAPI_PlayerSessions`](models/RHAPI_PlayerSessions.md#structFRHAPI__PlayerSessions)` `[`Sessions`](#classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab) | 
`public FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnSessionsUpdatedDelegate`](#classURH__PlayerSessions_1a64fc4ec7f3776ac0420da639183df59b) | Blueprint delegate to listen for sessions updates.
`public FRH_OnPlayerSessionsUpdatedMulticastDelegate `[`OnSessionsUpdatedDelegate`](#classURH__PlayerSessions_1a7739454886f42eb35d0bb043c9a5f4fe) | Native delegate to listen for sessions updates.
`public TArray< FRH_OnRequestPlayerSessionsBlock > `[`TemporaryRequestDelegates`](#classURH__PlayerSessions_1a209f56744d0a9207e9a775bc474a9f4a) | Delegates stored to response to currently active requests.
`public inline virtual void `[`Update`](#classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e)`(const GetSessionsType::Response & Other)` | Stores the response data from an API presence request.
`public inline void `[`MarkUpdated`](#classURH__PlayerSessions_1ad046ac0a8e57425ebcb234bc404bb5da)`()` | Sets the last updated time to now.
`public inline void `[`MarkDirty`](#classURH__PlayerSessions_1ae06b941d9bb3c94e5927d27d11cfc79b)`()` | Clears the last updated time to force an update.
`public inline void `[`RequestUpdate`](#classURH__PlayerSessions_1a1e6bb38840955f354f932da78ef351cb)`(bool bForceUpdate,const FRH_OnRequestPlayerSessionsBlock & Delegate)` | Enqueues an update request for the players presence information from the RallyHere API.
`public inline void `[`BLUEPRINT_RequestUpdate`](#classURH__PlayerSessions_1a09c0ba6876623cb118d164d40fc2caec)`(bool bForceUpdate,const FRH_OnRequestPlayerSessionsDynamicDelegate & Delegate)` | 
`public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerSessions_1ab2165d110e8f88374fbe82d39b4c23e9)`() const` | Gets the PlayerInfo that owns this Player Presence.
`public void `[`CheckPollStatus`](#classURH__PlayerSessions_1a77273d2f5e1e57948b992c9fa7806983)`(const bool bForceUpdate)` | Updates the poll status to be active or inactive based on if it should currently be polling.
`protected FRH_AutoPollerPtr `[`SessionsPoller`](#classURH__PlayerSessions_1adcdf9391c758196a1ce00b648f897c6d) | Poller for the players presence.
`protected inline virtual bool `[`ShouldPoll`](#classURH__PlayerSessions_1a1650dfe4743702dd125c8b584e96e263)`() const` | Gets if the poller should be actively polling, only polls if something cares about it.
`protected void `[`PollSessions`](#classURH__PlayerSessions_1a26d7c63218d1c3cd1b91293cf5b6bd4a)`(const FRH_PollCompleteFunc & Delegate)` | Starts a poll of the players presence.
`protected virtual void `[`ExecuteDelegates`](#classURH__PlayerSessions_1ae34694cba191f48499bae15e8a13336c)`(bool bSuccess)` | Handles executing any delegate listeners for the players presence.
`typedef `[`GetSessionsType`](#classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92) | 

#### Members

#### `public bool `[`bInitialized`](#classURH__PlayerSessions_1a30bb48d8307e142e04960dcc1e9256f5) <a id="classURH__PlayerSessions_1a30bb48d8307e142e04960dcc1e9256f5"></a>

Tracks if the Presence has been initialized.

<br>
#### `public FGuid `[`PlayerUuid`](#classURH__PlayerSessions_1ae2b7f7a6ea620af20b267980081fa7a1) <a id="classURH__PlayerSessions_1ae2b7f7a6ea620af20b267980081fa7a1"></a>

Players unique identifier.

<br>
#### `public FDateTime `[`LastUpdated`](#classURH__PlayerSessions_1aecfe8c9469d2bc7080457d5636b0404f) <a id="classURH__PlayerSessions_1aecfe8c9469d2bc7080457d5636b0404f"></a>

The last time the players session data was updated on the client.

<br>
#### `public FString `[`ETag`](#classURH__PlayerSessions_1a9f9cebbae2067bc4b0f813531f19b903) <a id="classURH__PlayerSessions_1a9f9cebbae2067bc4b0f813531f19b903"></a>

ETag to track if the session list is stale during requests.

<br>
#### `public `[`FRHAPI_PlayerSessions`](models/RHAPI_PlayerSessions.md#structFRHAPI__PlayerSessions)` `[`Sessions`](#classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab) <a id="classURH__PlayerSessions_1ac1c23232b2bb48fc13ea1b7fd438f2ab"></a>

<br>
#### `public FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate `[`BLUEPRINT_OnSessionsUpdatedDelegate`](#classURH__PlayerSessions_1a64fc4ec7f3776ac0420da639183df59b) <a id="classURH__PlayerSessions_1a64fc4ec7f3776ac0420da639183df59b"></a>

Blueprint delegate to listen for sessions updates.

<br>
#### `public FRH_OnPlayerSessionsUpdatedMulticastDelegate `[`OnSessionsUpdatedDelegate`](#classURH__PlayerSessions_1a7739454886f42eb35d0bb043c9a5f4fe) <a id="classURH__PlayerSessions_1a7739454886f42eb35d0bb043c9a5f4fe"></a>

Native delegate to listen for sessions updates.

<br>
#### `public TArray< FRH_OnRequestPlayerSessionsBlock > `[`TemporaryRequestDelegates`](#classURH__PlayerSessions_1a209f56744d0a9207e9a775bc474a9f4a) <a id="classURH__PlayerSessions_1a209f56744d0a9207e9a775bc474a9f4a"></a>

Delegates stored to response to currently active requests.

<br>
#### `public inline virtual void `[`Update`](#classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e)`(const GetSessionsType::Response & Other)` <a id="classURH__PlayerSessions_1aec7d221dfaac8ca3386fc25280a9817e"></a>

Stores the response data from an API presence request.

#### Parameters
* `Other` The presence data to store.

<br>
#### `public inline void `[`MarkUpdated`](#classURH__PlayerSessions_1ad046ac0a8e57425ebcb234bc404bb5da)`()` <a id="classURH__PlayerSessions_1ad046ac0a8e57425ebcb234bc404bb5da"></a>

Sets the last updated time to now.

<br>
#### `public inline void `[`MarkDirty`](#classURH__PlayerSessions_1ae06b941d9bb3c94e5927d27d11cfc79b)`()` <a id="classURH__PlayerSessions_1ae06b941d9bb3c94e5927d27d11cfc79b"></a>

Clears the last updated time to force an update.

<br>
#### `public inline void `[`RequestUpdate`](#classURH__PlayerSessions_1a1e6bb38840955f354f932da78ef351cb)`(bool bForceUpdate,const FRH_OnRequestPlayerSessionsBlock & Delegate)` <a id="classURH__PlayerSessions_1a1e6bb38840955f354f932da78ef351cb"></a>

Enqueues an update request for the players presence information from the RallyHere API.

#### Parameters
* `bForceUpdate` If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly 

* `Delegate` Callback delegate for the request.

<br>
#### `public inline void `[`BLUEPRINT_RequestUpdate`](#classURH__PlayerSessions_1a09c0ba6876623cb118d164d40fc2caec)`(bool bForceUpdate,const FRH_OnRequestPlayerSessionsDynamicDelegate & Delegate)` <a id="classURH__PlayerSessions_1a09c0ba6876623cb118d164d40fc2caec"></a>

<br>
#### `public class `[`URH_PlayerInfo`](PlayerInfo.md#classURH__PlayerInfo)` * `[`GetPlayerInfo`](#classURH__PlayerSessions_1ab2165d110e8f88374fbe82d39b4c23e9)`() const` <a id="classURH__PlayerSessions_1ab2165d110e8f88374fbe82d39b4c23e9"></a>

Gets the PlayerInfo that owns this Player Presence.

#### Returns
The PlayerInfo that owns the Presence.

<br>
#### `public void `[`CheckPollStatus`](#classURH__PlayerSessions_1a77273d2f5e1e57948b992c9fa7806983)`(const bool bForceUpdate)` <a id="classURH__PlayerSessions_1a77273d2f5e1e57948b992c9fa7806983"></a>

Updates the poll status to be active or inactive based on if it should currently be polling.

#### Parameters
* `bForceUpdate` If true, immediately requests an update rather than waiting for the next poll time. WARNING: Use this sparingly

<br>
#### `protected FRH_AutoPollerPtr `[`SessionsPoller`](#classURH__PlayerSessions_1adcdf9391c758196a1ce00b648f897c6d) <a id="classURH__PlayerSessions_1adcdf9391c758196a1ce00b648f897c6d"></a>

Poller for the players presence.

<br>
#### `protected inline virtual bool `[`ShouldPoll`](#classURH__PlayerSessions_1a1650dfe4743702dd125c8b584e96e263)`() const` <a id="classURH__PlayerSessions_1a1650dfe4743702dd125c8b584e96e263"></a>

Gets if the poller should be actively polling, only polls if something cares about it.

<br>
#### `protected void `[`PollSessions`](#classURH__PlayerSessions_1a26d7c63218d1c3cd1b91293cf5b6bd4a)`(const FRH_PollCompleteFunc & Delegate)` <a id="classURH__PlayerSessions_1a26d7c63218d1c3cd1b91293cf5b6bd4a"></a>

Starts a poll of the players presence.

#### Parameters
* `Delegate` Callback delegate for the poll.

<br>
#### `protected virtual void `[`ExecuteDelegates`](#classURH__PlayerSessions_1ae34694cba191f48499bae15e8a13336c)`(bool bSuccess)` <a id="classURH__PlayerSessions_1ae34694cba191f48499bae15e8a13336c"></a>

Handles executing any delegate listeners for the players presence.

#### Parameters
* `bSuccess` If the poll was successful.

<br>
#### `typedef `[`GetSessionsType`](#classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92) <a id="classURH__PlayerSessions_1afa8a5657954ca5d686f07cea03b23b92"></a>

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
`public inline FORCEINLINE `[`URH_PlayerSessions`](PlayerInfo.md#classURH__PlayerSessions)` * `[`GetSessions`](#classURH__PlayerInfo_1a3a012da0a55d1edb09a80dcf658ae7f4)`() const` | Gets The players presence class.
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

Gets The players presence class.

#### Returns
The players presence class.

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
