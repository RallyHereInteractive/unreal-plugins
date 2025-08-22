---
title: RHAPI_PlatformSessionPlayer
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformSessionPlayer`](#structFRHAPI__PlatformSessionPlayer) | A platform player resource in a platform session.

## struct `FRHAPI_PlatformSessionPlayer` <a id="structFRHAPI__PlatformSessionPlayer"></a>

```
struct FRHAPI_PlatformSessionPlayer
  : public FRHAPI_Model
```

A platform player resource in a platform session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId_Optional`](#structFRHAPI__PlatformSessionPlayer_1aa583360e52aae06e68cc240b4828b1c6) | Player ID representing the current player.
`public bool `[`PlayerId_IsSet`](#structFRHAPI__PlatformSessionPlayer_1a62a5cfdf5b5495549d4bf02f9eac0088) | true if PlayerId_Optional has been set to a value
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a1308c9d9ac539eda9d6a4e1ea013e7c1) | Player UUID representing the current player.
`public bool `[`Leader_Optional`](#structFRHAPI__PlatformSessionPlayer_1af25bb552fada49ae3759e7bc473d6fb0) | Is this player the leader of the platform session? When setting up the parent session, if all players are from the same platform session, leadership is coordinated.
`public bool `[`Leader_IsSet`](#structFRHAPI__PlatformSessionPlayer_1a5ffe9e5e4a236e96fb0ad853b7c6a1bb) | true if Leader_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSessionPlayer_1a652762ae9eff57e6df3e73dce1eab14d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSessionPlayer_1a93db9af8f5cb608837314077f8593017)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1afcd7e579ca02a43dfde0ffc97bbaf0f6)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ae3d175b8771220728e6cc0056a8cdf7e)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1aba39d146e79305f0c8a98ce4c762db62)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ab3aab50c0035943a0cf701d405d13171)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1aab660aff83c6d621a91e1b52c9f998cc)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1a8e7e11e240adbd904f61e867374d5983)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a431e37d97689c011c76c1586d6215e1b)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1aa79f2b052cf743336062ba9811906c38)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlatformSessionPlayer_1a464b7c7333a2fd9cf170e1b64af9f770)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a1361bc790497d7543f07b04b11c5cb76)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a9625bbfd1ca31d2299e4e0f1d829d943)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1ae21d4bdee510997072e20cea04e6b76d)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a0da35b43090a1b28b7d6c3673f0a4d30)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1acaaa88d2b4c02aa073776d588d78c22b)`()` | Gets the value of Leader_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a1b5afacec8bfce3519c27f1291f7f5d4)`() const` | Gets the value of Leader_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1adb73256ed7fbbaeb8d3ae36b9736dd68)`(const bool & DefaultValue) const` | Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a03497b0b1d51bcb28494392c5c888b00)`(bool & OutValue) const` | Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a0c9487789aac9a945bd0cf3e1b697ef7)`()` | Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a9dfad1d347ffe46734c5c0b67b5a56f4)`() const` | Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1ada8f9bb62101fe518bd7efea057962ec)`(const bool & NewValue)` | Sets the value of Leader_Optional and also sets Leader_IsSet to true.
`public inline FORCEINLINE void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1a5b012d1b7223409403d5482119811a35)`(bool && NewValue)` | Sets the value of Leader_Optional and also sets Leader_IsSet to true using move semantics.
`public inline void `[`ClearLeader`](#structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e)`()` | Clears the value of Leader_Optional and sets Leader_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Leader`](#structFRHAPI__PlatformSessionPlayer_1afcddc3daaa9f3b694bd73218af2c8d35)`()` | Returns the default value of Leader.

### Members

#### `public int32 `[`PlayerId_Optional`](#structFRHAPI__PlatformSessionPlayer_1aa583360e52aae06e68cc240b4828b1c6) <a id="structFRHAPI__PlatformSessionPlayer_1aa583360e52aae06e68cc240b4828b1c6"></a>

Player ID representing the current player.

#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__PlatformSessionPlayer_1a62a5cfdf5b5495549d4bf02f9eac0088) <a id="structFRHAPI__PlatformSessionPlayer_1a62a5cfdf5b5495549d4bf02f9eac0088"></a>

true if PlayerId_Optional has been set to a value

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a1308c9d9ac539eda9d6a4e1ea013e7c1) <a id="structFRHAPI__PlatformSessionPlayer_1a1308c9d9ac539eda9d6a4e1ea013e7c1"></a>

Player UUID representing the current player.

#### `public bool `[`Leader_Optional`](#structFRHAPI__PlatformSessionPlayer_1af25bb552fada49ae3759e7bc473d6fb0) <a id="structFRHAPI__PlatformSessionPlayer_1af25bb552fada49ae3759e7bc473d6fb0"></a>

Is this player the leader of the platform session? When setting up the parent session, if all players are from the same platform session, leadership is coordinated.

#### `public bool `[`Leader_IsSet`](#structFRHAPI__PlatformSessionPlayer_1a5ffe9e5e4a236e96fb0ad853b7c6a1bb) <a id="structFRHAPI__PlatformSessionPlayer_1a5ffe9e5e4a236e96fb0ad853b7c6a1bb"></a>

true if Leader_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSessionPlayer_1a652762ae9eff57e6df3e73dce1eab14d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSessionPlayer_1a652762ae9eff57e6df3e73dce1eab14d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSessionPlayer_1a93db9af8f5cb608837314077f8593017)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformSessionPlayer_1a93db9af8f5cb608837314077f8593017"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1afcd7e579ca02a43dfde0ffc97bbaf0f6)`()` <a id="structFRHAPI__PlatformSessionPlayer_1afcd7e579ca02a43dfde0ffc97bbaf0f6"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ae3d175b8771220728e6cc0056a8cdf7e)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1ae3d175b8771220728e6cc0056a8cdf7e"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1aba39d146e79305f0c8a98ce4c762db62)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1aba39d146e79305f0c8a98ce4c762db62"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ab3aab50c0035943a0cf701d405d13171)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1ab3aab50c0035943a0cf701d405d13171"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1aab660aff83c6d621a91e1b52c9f998cc)`()` <a id="structFRHAPI__PlatformSessionPlayer_1aab660aff83c6d621a91e1b52c9f998cc"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1a8e7e11e240adbd904f61e867374d5983)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a8e7e11e240adbd904f61e867374d5983"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a431e37d97689c011c76c1586d6215e1b)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1a431e37d97689c011c76c1586d6215e1b"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1aa79f2b052cf743336062ba9811906c38)`(int32 && NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1aa79f2b052cf743336062ba9811906c38"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa)`()` <a id="structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlatformSessionPlayer_1a464b7c7333a2fd9cf170e1b64af9f770)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a464b7c7333a2fd9cf170e1b64af9f770"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a1361bc790497d7543f07b04b11c5cb76)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a1361bc790497d7543f07b04b11c5cb76"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a9625bbfd1ca31d2299e4e0f1d829d943)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a9625bbfd1ca31d2299e4e0f1d829d943"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1ae21d4bdee510997072e20cea04e6b76d)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1ae21d4bdee510997072e20cea04e6b76d"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a0da35b43090a1b28b7d6c3673f0a4d30)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1a0da35b43090a1b28b7d6c3673f0a4d30"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1acaaa88d2b4c02aa073776d588d78c22b)`()` <a id="structFRHAPI__PlatformSessionPlayer_1acaaa88d2b4c02aa073776d588d78c22b"></a>

Gets the value of Leader_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a1b5afacec8bfce3519c27f1291f7f5d4)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a1b5afacec8bfce3519c27f1291f7f5d4"></a>

Gets the value of Leader_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1adb73256ed7fbbaeb8d3ae36b9736dd68)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1adb73256ed7fbbaeb8d3ae36b9736dd68"></a>

Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a03497b0b1d51bcb28494392c5c888b00)`(bool & OutValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1a03497b0b1d51bcb28494392c5c888b00"></a>

Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a0c9487789aac9a945bd0cf3e1b697ef7)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a0c9487789aac9a945bd0cf3e1b697ef7"></a>

Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a9dfad1d347ffe46734c5c0b67b5a56f4)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a9dfad1d347ffe46734c5c0b67b5a56f4"></a>

Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1ada8f9bb62101fe518bd7efea057962ec)`(const bool & NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1ada8f9bb62101fe518bd7efea057962ec"></a>

Sets the value of Leader_Optional and also sets Leader_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1a5b012d1b7223409403d5482119811a35)`(bool && NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1a5b012d1b7223409403d5482119811a35"></a>

Sets the value of Leader_Optional and also sets Leader_IsSet to true using move semantics.

#### `public inline void `[`ClearLeader`](#structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e"></a>

Clears the value of Leader_Optional and sets Leader_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Leader`](#structFRHAPI__PlatformSessionPlayer_1afcddc3daaa9f3b694bd73218af2c8d35)`()` <a id="structFRHAPI__PlatformSessionPlayer_1afcddc3daaa9f3b694bd73218af2c8d35"></a>

Returns the default value of Leader.

