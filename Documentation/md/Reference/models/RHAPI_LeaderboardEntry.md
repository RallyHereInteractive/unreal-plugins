---
title: RHAPI_LeaderboardEntry
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LeaderboardEntry`](#structFRHAPI__LeaderboardEntry) | 

## struct `FRHAPI_LeaderboardEntry` <a id="structFRHAPI__LeaderboardEntry"></a>

```
struct FRHAPI_LeaderboardEntry
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__LeaderboardEntry_1a70dd9cb134348a994acd70e9ba941a10) | Unique ID for the player in this leaderboard entry.
`public float `[`StatValue_Optional`](#structFRHAPI__LeaderboardEntry_1a6f8764c65207db12a8d9081daba20b51) | 
`public bool `[`StatValue_IsSet`](#structFRHAPI__LeaderboardEntry_1ad60dd1ef0f62a1d6f91e121d8a1370e2) | true if StatValue_Optional has been set to a value
`public bool `[`StatValue_IsNull`](#structFRHAPI__LeaderboardEntry_1a6f489b8233d3344bca2854b011a1ded2) | true if StatValue_Optional has been explicitly set to null
`public int32 `[`Position`](#structFRHAPI__LeaderboardEntry_1ab8e2f090e46937756ae3c3ffc3115dbd) | What position this entry is on the leaderboard.
`public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardEntry_1a190bd5ee502e7af120154341f7cced2e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardEntry_1ac62b460a8721ef56d4f1fe0ed879cc4e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a0e3dd934ecd4c1257898e6028debcfdf)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1ab2305407ab88b204e2c2effd74433cd1)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a6cc692c35d84c7c9253c05bc6e5823c4)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a55252f41dfdd3d7212dbc8a8d7ec445d)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a07e29de06691733e3e9e04b9622ac175)`()` | Gets the value of StatValue_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a19d5495d3b3fd57de6e7582d3b999b2e)`() const` | Gets the value of StatValue_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1acd0141b47fde8d5bbe5ba972cb28b95a)`(const float & DefaultValue) const` | Gets the value of StatValue_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a7cc83c213e933aa4f1df40a32f16c514)`(float & OutValue) const` | Fills OutValue with the value of StatValue_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetStatValueOrNull`](#structFRHAPI__LeaderboardEntry_1ac93485856c4dfb0a2b45c87151111144)`()` | Returns a pointer to StatValue_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetStatValueOrNull`](#structFRHAPI__LeaderboardEntry_1acba43300950aa2182770795cd6530f3f)`() const` | Returns a pointer to StatValue_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStatValue`](#structFRHAPI__LeaderboardEntry_1a572696fe637a2a0741c12dd2a03673ae)`(const float & NewValue)` | Sets the value of StatValue_Optional and also sets StatValue_IsSet to true.
`public inline FORCEINLINE void `[`SetStatValue`](#structFRHAPI__LeaderboardEntry_1a65b640a75b12bacbedd0f5dfe7551440)`(float && NewValue)` | Sets the value of StatValue_Optional and also sets StatValue_IsSet to true using move semantics.
`public inline void `[`ClearStatValue`](#structFRHAPI__LeaderboardEntry_1aa836e9b830d63f58af52b221ce0a95d4)`()` | Clears the value of StatValue_Optional and sets StatValue_IsSet to false.
`public inline FORCEINLINE void `[`SetStatValueToNull`](#structFRHAPI__LeaderboardEntry_1a4c1a96c30e516a4b81ace4af70e48e28)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStatValueNull`](#structFRHAPI__LeaderboardEntry_1a5dc16bdf2ffa2b88a367407f73e542fa)`() const` | Checks whether StatValue_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPosition`](#structFRHAPI__LeaderboardEntry_1a283ebcf7a66441bc83318369312666c7)`()` | Gets the value of Position.
`public inline FORCEINLINE const int32 & `[`GetPosition`](#structFRHAPI__LeaderboardEntry_1af253ade2d881b6a1f2548666950f45dd)`() const` | Gets the value of Position.
`public inline FORCEINLINE void `[`SetPosition`](#structFRHAPI__LeaderboardEntry_1ac3f85230b77edf70991bfee064a83e1f)`(const int32 & NewValue)` | Sets the value of Position.
`public inline FORCEINLINE void `[`SetPosition`](#structFRHAPI__LeaderboardEntry_1af1f62aacdda7062beabf82d69f8f93d5)`(int32 && NewValue)` | Sets the value of Position using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Position`](#structFRHAPI__LeaderboardEntry_1a128a3f2c9b9be206547e88e2bcbe9818)`()` | Returns the default value of Position.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__LeaderboardEntry_1a70dd9cb134348a994acd70e9ba941a10) <a id="structFRHAPI__LeaderboardEntry_1a70dd9cb134348a994acd70e9ba941a10"></a>

Unique ID for the player in this leaderboard entry.

#### `public float `[`StatValue_Optional`](#structFRHAPI__LeaderboardEntry_1a6f8764c65207db12a8d9081daba20b51) <a id="structFRHAPI__LeaderboardEntry_1a6f8764c65207db12a8d9081daba20b51"></a>

#### `public bool `[`StatValue_IsSet`](#structFRHAPI__LeaderboardEntry_1ad60dd1ef0f62a1d6f91e121d8a1370e2) <a id="structFRHAPI__LeaderboardEntry_1ad60dd1ef0f62a1d6f91e121d8a1370e2"></a>

true if StatValue_Optional has been set to a value

#### `public bool `[`StatValue_IsNull`](#structFRHAPI__LeaderboardEntry_1a6f489b8233d3344bca2854b011a1ded2) <a id="structFRHAPI__LeaderboardEntry_1a6f489b8233d3344bca2854b011a1ded2"></a>

true if StatValue_Optional has been explicitly set to null

#### `public int32 `[`Position`](#structFRHAPI__LeaderboardEntry_1ab8e2f090e46937756ae3c3ffc3115dbd) <a id="structFRHAPI__LeaderboardEntry_1ab8e2f090e46937756ae3c3ffc3115dbd"></a>

What position this entry is on the leaderboard.

#### `public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardEntry_1a190bd5ee502e7af120154341f7cced2e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LeaderboardEntry_1a190bd5ee502e7af120154341f7cced2e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardEntry_1ac62b460a8721ef56d4f1fe0ed879cc4e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LeaderboardEntry_1ac62b460a8721ef56d4f1fe0ed879cc4e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a0e3dd934ecd4c1257898e6028debcfdf)`()` <a id="structFRHAPI__LeaderboardEntry_1a0e3dd934ecd4c1257898e6028debcfdf"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1ab2305407ab88b204e2c2effd74433cd1)`() const` <a id="structFRHAPI__LeaderboardEntry_1ab2305407ab88b204e2c2effd74433cd1"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a6cc692c35d84c7c9253c05bc6e5823c4)`(const FGuid & NewValue)` <a id="structFRHAPI__LeaderboardEntry_1a6cc692c35d84c7c9253c05bc6e5823c4"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a55252f41dfdd3d7212dbc8a8d7ec445d)`(FGuid && NewValue)` <a id="structFRHAPI__LeaderboardEntry_1a55252f41dfdd3d7212dbc8a8d7ec445d"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a07e29de06691733e3e9e04b9622ac175)`()` <a id="structFRHAPI__LeaderboardEntry_1a07e29de06691733e3e9e04b9622ac175"></a>

Gets the value of StatValue_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a19d5495d3b3fd57de6e7582d3b999b2e)`() const` <a id="structFRHAPI__LeaderboardEntry_1a19d5495d3b3fd57de6e7582d3b999b2e"></a>

Gets the value of StatValue_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1acd0141b47fde8d5bbe5ba972cb28b95a)`(const float & DefaultValue) const` <a id="structFRHAPI__LeaderboardEntry_1acd0141b47fde8d5bbe5ba972cb28b95a"></a>

Gets the value of StatValue_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a7cc83c213e933aa4f1df40a32f16c514)`(float & OutValue) const` <a id="structFRHAPI__LeaderboardEntry_1a7cc83c213e933aa4f1df40a32f16c514"></a>

Fills OutValue with the value of StatValue_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetStatValueOrNull`](#structFRHAPI__LeaderboardEntry_1ac93485856c4dfb0a2b45c87151111144)`()` <a id="structFRHAPI__LeaderboardEntry_1ac93485856c4dfb0a2b45c87151111144"></a>

Returns a pointer to StatValue_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetStatValueOrNull`](#structFRHAPI__LeaderboardEntry_1acba43300950aa2182770795cd6530f3f)`() const` <a id="structFRHAPI__LeaderboardEntry_1acba43300950aa2182770795cd6530f3f"></a>

Returns a pointer to StatValue_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStatValue`](#structFRHAPI__LeaderboardEntry_1a572696fe637a2a0741c12dd2a03673ae)`(const float & NewValue)` <a id="structFRHAPI__LeaderboardEntry_1a572696fe637a2a0741c12dd2a03673ae"></a>

Sets the value of StatValue_Optional and also sets StatValue_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStatValue`](#structFRHAPI__LeaderboardEntry_1a65b640a75b12bacbedd0f5dfe7551440)`(float && NewValue)` <a id="structFRHAPI__LeaderboardEntry_1a65b640a75b12bacbedd0f5dfe7551440"></a>

Sets the value of StatValue_Optional and also sets StatValue_IsSet to true using move semantics.

#### `public inline void `[`ClearStatValue`](#structFRHAPI__LeaderboardEntry_1aa836e9b830d63f58af52b221ce0a95d4)`()` <a id="structFRHAPI__LeaderboardEntry_1aa836e9b830d63f58af52b221ce0a95d4"></a>

Clears the value of StatValue_Optional and sets StatValue_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStatValueToNull`](#structFRHAPI__LeaderboardEntry_1a4c1a96c30e516a4b81ace4af70e48e28)`()` <a id="structFRHAPI__LeaderboardEntry_1a4c1a96c30e516a4b81ace4af70e48e28"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStatValueNull`](#structFRHAPI__LeaderboardEntry_1a5dc16bdf2ffa2b88a367407f73e542fa)`() const` <a id="structFRHAPI__LeaderboardEntry_1a5dc16bdf2ffa2b88a367407f73e542fa"></a>

Checks whether StatValue_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPosition`](#structFRHAPI__LeaderboardEntry_1a283ebcf7a66441bc83318369312666c7)`()` <a id="structFRHAPI__LeaderboardEntry_1a283ebcf7a66441bc83318369312666c7"></a>

Gets the value of Position.

#### `public inline FORCEINLINE const int32 & `[`GetPosition`](#structFRHAPI__LeaderboardEntry_1af253ade2d881b6a1f2548666950f45dd)`() const` <a id="structFRHAPI__LeaderboardEntry_1af253ade2d881b6a1f2548666950f45dd"></a>

Gets the value of Position.

#### `public inline FORCEINLINE void `[`SetPosition`](#structFRHAPI__LeaderboardEntry_1ac3f85230b77edf70991bfee064a83e1f)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardEntry_1ac3f85230b77edf70991bfee064a83e1f"></a>

Sets the value of Position.

#### `public inline FORCEINLINE void `[`SetPosition`](#structFRHAPI__LeaderboardEntry_1af1f62aacdda7062beabf82d69f8f93d5)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardEntry_1af1f62aacdda7062beabf82d69f8f93d5"></a>

Sets the value of Position using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Position`](#structFRHAPI__LeaderboardEntry_1a128a3f2c9b9be206547e88e2bcbe9818)`()` <a id="structFRHAPI__LeaderboardEntry_1a128a3f2c9b9be206547e88e2bcbe9818"></a>

Returns the default value of Position.

