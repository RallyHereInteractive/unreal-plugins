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
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a72f7b462dbece7298cda70e42efe0b1e)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1aba6cd3e6afd6965058bd9cb03674d74d)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1abf611d221282924bfdaf272d0ab82e3f)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a9e06a0931f56b5b4fa046d3468310795)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1a499c9fcd28791abf7a3451745f447c0d)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1ae713e45cd7aa064b7178239c42595e25)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a2c00de6c14ad9cf1244d73caa318018f)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1aa3d8fa5d8bd05dedc36968376f722b93)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline bool `[`IsPlayerIdSet`](#structFRHAPI__PlatformSessionPlayer_1a58df32cce2f11e4d08d19fba1a9c1104)`() const` | Checks whether PlayerId_Optional has been set.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlatformSessionPlayer_1aeab3f493aea47825d306eb7fc0d34a0b)`() const` | Returns true if PlayerId_Optional is set and matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlatformSessionPlayer_1a061c54f1a70a22fb0043bce4d70d2b6c)`()` | Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a8c1d507660787b9d43d63f3299ccfd6d)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a3aa35e952be740525b33048786c17447)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1af10a465575837e65436e8ad95249737d)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1ad3d918871b912e69d753e59b11d1683f)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1ab750a6a8c4bc773bb5eb5a2b9bf1df57)`()` | Gets the value of Leader_Optional, regardless of it having been set.
`public inline const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a12b352ad166c3c0f474d4d9b3a07228c)`() const` | Gets the value of Leader_Optional, regardless of it having been set.
`public inline const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a4e73c4a5f3526c7fd84c7ab218ffd8ea)`(const bool & DefaultValue) const` | Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a223d97927d19ac63603b8eb879a33e55)`(bool & OutValue) const` | Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a76cc0d873210c8afce8ffb1ae19202b9)`()` | Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a8c513fb199443e87cf92c6d629e08cdc)`() const` | Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1a5e3022e81c3b022390fb0adffe4d3f70)`(const bool & NewValue)` | Sets the value of Leader_Optional and also sets Leader_IsSet to true.
`public inline void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1ad12ab862e57ec633edade94ee2ec20fe)`(bool && NewValue)` | Sets the value of Leader_Optional and also sets Leader_IsSet to true using move semantics.
`public inline void `[`ClearLeader`](#structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e)`()` | Clears the value of Leader_Optional and sets Leader_IsSet to false.
`public inline bool `[`IsLeaderSet`](#structFRHAPI__PlatformSessionPlayer_1af6f5738f9167c4be5552c573052f7c82)`() const` | Checks whether Leader_Optional has been set.
`public inline bool `[`IsLeaderDefaultValue`](#structFRHAPI__PlatformSessionPlayer_1a3b18105fa390a5974fc04aad4472abad)`() const` | Returns true if Leader_Optional is set and matches the default value.
`public inline void `[`SetLeaderToDefault`](#structFRHAPI__PlatformSessionPlayer_1a8d7d302ebb8566e204633630192a6a74)`()` | Sets the value of Leader_Optional to its default and also sets Leader_IsSet to true.

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

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a72f7b462dbece7298cda70e42efe0b1e)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a72f7b462dbece7298cda70e42efe0b1e"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1aba6cd3e6afd6965058bd9cb03674d74d)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1aba6cd3e6afd6965058bd9cb03674d74d"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1abf611d221282924bfdaf272d0ab82e3f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1abf611d221282924bfdaf272d0ab82e3f"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a9e06a0931f56b5b4fa046d3468310795)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1a9e06a0931f56b5b4fa046d3468310795"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1a499c9fcd28791abf7a3451745f447c0d)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a499c9fcd28791abf7a3451745f447c0d"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1ae713e45cd7aa064b7178239c42595e25)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1ae713e45cd7aa064b7178239c42595e25"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a2c00de6c14ad9cf1244d73caa318018f)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1a2c00de6c14ad9cf1244d73caa318018f"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1aa3d8fa5d8bd05dedc36968376f722b93)`(int32 && NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1aa3d8fa5d8bd05dedc36968376f722b93"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa)`()` <a id="structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline bool `[`IsPlayerIdSet`](#structFRHAPI__PlatformSessionPlayer_1a58df32cce2f11e4d08d19fba1a9c1104)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a58df32cce2f11e4d08d19fba1a9c1104"></a>

Checks whether PlayerId_Optional has been set.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlatformSessionPlayer_1aeab3f493aea47825d306eb7fc0d34a0b)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1aeab3f493aea47825d306eb7fc0d34a0b"></a>

Returns true if PlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlatformSessionPlayer_1a061c54f1a70a22fb0043bce4d70d2b6c)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a061c54f1a70a22fb0043bce4d70d2b6c"></a>

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a8c1d507660787b9d43d63f3299ccfd6d)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a8c1d507660787b9d43d63f3299ccfd6d"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a3aa35e952be740525b33048786c17447)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a3aa35e952be740525b33048786c17447"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1af10a465575837e65436e8ad95249737d)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1af10a465575837e65436e8ad95249737d"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1ad3d918871b912e69d753e59b11d1683f)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1ad3d918871b912e69d753e59b11d1683f"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1ab750a6a8c4bc773bb5eb5a2b9bf1df57)`()` <a id="structFRHAPI__PlatformSessionPlayer_1ab750a6a8c4bc773bb5eb5a2b9bf1df57"></a>

Gets the value of Leader_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a12b352ad166c3c0f474d4d9b3a07228c)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a12b352ad166c3c0f474d4d9b3a07228c"></a>

Gets the value of Leader_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a4e73c4a5f3526c7fd84c7ab218ffd8ea)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1a4e73c4a5f3526c7fd84c7ab218ffd8ea"></a>

Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a223d97927d19ac63603b8eb879a33e55)`(bool & OutValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1a223d97927d19ac63603b8eb879a33e55"></a>

Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a76cc0d873210c8afce8ffb1ae19202b9)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a76cc0d873210c8afce8ffb1ae19202b9"></a>

Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a8c513fb199443e87cf92c6d629e08cdc)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a8c513fb199443e87cf92c6d629e08cdc"></a>

Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1a5e3022e81c3b022390fb0adffe4d3f70)`(const bool & NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1a5e3022e81c3b022390fb0adffe4d3f70"></a>

Sets the value of Leader_Optional and also sets Leader_IsSet to true.

#### `public inline void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1ad12ab862e57ec633edade94ee2ec20fe)`(bool && NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1ad12ab862e57ec633edade94ee2ec20fe"></a>

Sets the value of Leader_Optional and also sets Leader_IsSet to true using move semantics.

#### `public inline void `[`ClearLeader`](#structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e"></a>

Clears the value of Leader_Optional and sets Leader_IsSet to false.

#### `public inline bool `[`IsLeaderSet`](#structFRHAPI__PlatformSessionPlayer_1af6f5738f9167c4be5552c573052f7c82)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1af6f5738f9167c4be5552c573052f7c82"></a>

Checks whether Leader_Optional has been set.

#### `public inline bool `[`IsLeaderDefaultValue`](#structFRHAPI__PlatformSessionPlayer_1a3b18105fa390a5974fc04aad4472abad)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a3b18105fa390a5974fc04aad4472abad"></a>

Returns true if Leader_Optional is set and matches the default value.

#### `public inline void `[`SetLeaderToDefault`](#structFRHAPI__PlatformSessionPlayer_1a8d7d302ebb8566e204633630192a6a74)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a8d7d302ebb8566e204633630192a6a74"></a>

Sets the value of Leader_Optional to its default and also sets Leader_IsSet to true.

