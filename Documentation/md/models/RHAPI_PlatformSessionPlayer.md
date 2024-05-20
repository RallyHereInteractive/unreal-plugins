# RHAPI_PlatformSessionPlayer <a id="group__RHAPI__PlatformSessionPlayer"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId_Optional`](#structFRHAPI__PlatformSessionPlayer_1aa583360e52aae06e68cc240b4828b1c6) | Player ID representing the current player.
`public bool `[`PlayerId_IsSet`](#structFRHAPI__PlatformSessionPlayer_1a62a5cfdf5b5495549d4bf02f9eac0088) | true if PlayerId_Optional has been set to a value
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a1308c9d9ac539eda9d6a4e1ea013e7c1) | Player UUID representing the current player.
`public bool `[`Leader_Optional`](#structFRHAPI__PlatformSessionPlayer_1af25bb552fada49ae3759e7bc473d6fb0) | Is this player the leader of the platform session? When setting up the parent session, if all players are from the same platform session, leadership is coordinated.
`public bool `[`Leader_IsSet`](#structFRHAPI__PlatformSessionPlayer_1a5ffe9e5e4a236e96fb0ad853b7c6a1bb) | true if Leader_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSessionPlayer_1ac306dece915d61efa007448f63f2db02)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSessionPlayer_1a363682afb881c387cb9871db8d80ac2a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ab97a96298dd08e0de097eae8912434d6)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a3d0d01fcee6c5ef7a029a9c0c2e8ed2d)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a686f9f2d357e9ace50e724a1d606d97a)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a9e06a0931f56b5b4fa046d3468310795)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1ab6a0f0ea8aabc882fc517492047566f4)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1a5a87c3a7ee80e97518b8d2994f634bd5)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a0f77291dac4e3ac36c15299c6c94dc69)`(int32 NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline void `[`ClearPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlatformSessionPlayer_1aeab3f493aea47825d306eb7fc0d34a0b)`() const` | Returns true if PlayerId_Optional is set and matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlatformSessionPlayer_1a061c54f1a70a22fb0043bce4d70d2b6c)`()` | Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1af89400cb11d1ee66cc086e93d342bcfc)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a4ded60d33bfd83e2611caf5ca1f33e60)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a1f656876075eb9cc3cce297ea8f80a63)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1acefa4678c8e6e3c46363a9dbbdc775bb)`()` | Gets the value of Leader_Optional, regardless of it having been set.
`public inline const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1aa5e6566ab95802764e8bf924ddf09d8c)`() const` | Gets the value of Leader_Optional, regardless of it having been set.
`public inline const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a13512aeb7ff61302432ef6951e625a0a)`(const bool & DefaultValue) const` | Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a223d97927d19ac63603b8eb879a33e55)`(bool & OutValue) const` | Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a74ac0590dc01605b8fcfc942cea9716f)`()` | Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1aa9deb6f2fb4669728e44d1a8e6cff336)`() const` | Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1ae81ebdf7f552e039bc2fb7b6db031fe4)`(bool NewValue)` | Sets the value of Leader_Optional and also sets Leader_IsSet to true.
`public inline void `[`ClearLeader`](#structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e)`()` | Clears the value of Leader_Optional and sets Leader_IsSet to false.
`public inline bool `[`IsLeaderDefaultValue`](#structFRHAPI__PlatformSessionPlayer_1a3b18105fa390a5974fc04aad4472abad)`() const` | Returns true if Leader_Optional is set and matches the default value.
`public inline void `[`SetLeaderToDefault`](#structFRHAPI__PlatformSessionPlayer_1a8d7d302ebb8566e204633630192a6a74)`()` | Sets the value of Leader_Optional to its default and also sets Leader_IsSet to true.

#### Members

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSessionPlayer_1ac306dece915d61efa007448f63f2db02)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSessionPlayer_1ac306dece915d61efa007448f63f2db02"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSessionPlayer_1a363682afb881c387cb9871db8d80ac2a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformSessionPlayer_1a363682afb881c387cb9871db8d80ac2a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ab97a96298dd08e0de097eae8912434d6)`()` <a id="structFRHAPI__PlatformSessionPlayer_1ab97a96298dd08e0de097eae8912434d6"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a3d0d01fcee6c5ef7a029a9c0c2e8ed2d)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a3d0d01fcee6c5ef7a029a9c0c2e8ed2d"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a686f9f2d357e9ace50e724a1d606d97a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1a686f9f2d357e9ace50e724a1d606d97a"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a9e06a0931f56b5b4fa046d3468310795)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1a9e06a0931f56b5b4fa046d3468310795"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1ab6a0f0ea8aabc882fc517492047566f4)`()` <a id="structFRHAPI__PlatformSessionPlayer_1ab6a0f0ea8aabc882fc517492047566f4"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlatformSessionPlayer_1a5a87c3a7ee80e97518b8d2994f634bd5)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a5a87c3a7ee80e97518b8d2994f634bd5"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlatformSessionPlayer_1a0f77291dac4e3ac36c15299c6c94dc69)`(int32 NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1a0f77291dac4e3ac36c15299c6c94dc69"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa)`()` <a id="structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlatformSessionPlayer_1aeab3f493aea47825d306eb7fc0d34a0b)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1aeab3f493aea47825d306eb7fc0d34a0b"></a>

Returns true if PlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlatformSessionPlayer_1a061c54f1a70a22fb0043bce4d70d2b6c)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a061c54f1a70a22fb0043bce4d70d2b6c"></a>

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1af89400cb11d1ee66cc086e93d342bcfc)`()` <a id="structFRHAPI__PlatformSessionPlayer_1af89400cb11d1ee66cc086e93d342bcfc"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a4ded60d33bfd83e2611caf5ca1f33e60)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a4ded60d33bfd83e2611caf5ca1f33e60"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformSessionPlayer_1a1f656876075eb9cc3cce297ea8f80a63)`(FGuid NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1a1f656876075eb9cc3cce297ea8f80a63"></a>

Sets the value of PlayerUuid.

#### `public inline bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1acefa4678c8e6e3c46363a9dbbdc775bb)`()` <a id="structFRHAPI__PlatformSessionPlayer_1acefa4678c8e6e3c46363a9dbbdc775bb"></a>

Gets the value of Leader_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1aa5e6566ab95802764e8bf924ddf09d8c)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1aa5e6566ab95802764e8bf924ddf09d8c"></a>

Gets the value of Leader_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a13512aeb7ff61302432ef6951e625a0a)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1a13512aeb7ff61302432ef6951e625a0a"></a>

Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeader`](#structFRHAPI__PlatformSessionPlayer_1a223d97927d19ac63603b8eb879a33e55)`(bool & OutValue) const` <a id="structFRHAPI__PlatformSessionPlayer_1a223d97927d19ac63603b8eb879a33e55"></a>

Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1a74ac0590dc01605b8fcfc942cea9716f)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a74ac0590dc01605b8fcfc942cea9716f"></a>

Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetLeaderOrNull`](#structFRHAPI__PlatformSessionPlayer_1aa9deb6f2fb4669728e44d1a8e6cff336)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1aa9deb6f2fb4669728e44d1a8e6cff336"></a>

Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeader`](#structFRHAPI__PlatformSessionPlayer_1ae81ebdf7f552e039bc2fb7b6db031fe4)`(bool NewValue)` <a id="structFRHAPI__PlatformSessionPlayer_1ae81ebdf7f552e039bc2fb7b6db031fe4"></a>

Sets the value of Leader_Optional and also sets Leader_IsSet to true.

#### `public inline void `[`ClearLeader`](#structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e"></a>

Clears the value of Leader_Optional and sets Leader_IsSet to false.

#### `public inline bool `[`IsLeaderDefaultValue`](#structFRHAPI__PlatformSessionPlayer_1a3b18105fa390a5974fc04aad4472abad)`() const` <a id="structFRHAPI__PlatformSessionPlayer_1a3b18105fa390a5974fc04aad4472abad"></a>

Returns true if Leader_Optional is set and matches the default value.

#### `public inline void `[`SetLeaderToDefault`](#structFRHAPI__PlatformSessionPlayer_1a8d7d302ebb8566e204633630192a6a74)`()` <a id="structFRHAPI__PlatformSessionPlayer_1a8d7d302ebb8566e204633630192a6a74"></a>

Sets the value of Leader_Optional to its default and also sets Leader_IsSet to true.

