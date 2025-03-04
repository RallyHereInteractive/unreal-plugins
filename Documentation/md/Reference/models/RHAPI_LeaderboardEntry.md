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
`public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardEntry_1a190bd5ee502e7af120154341f7cced2e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardEntry_1ac62b460a8721ef56d4f1fe0ed879cc4e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a72c177336529472656b1680fe977d9ed)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a261f1e251de17cef5cd0446fa0cf06d4)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1ad13bcfe4966a694f3936ac4f4669e73a)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1af3b2abc509ed50276591e7191f2ed7f4)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a99b4df1145bc41b62cc6d95671d23644)`()` | Gets the value of StatValue_Optional, regardless of it having been set.
`public inline const float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1ab1d54cd0815c874a5210caa1c847c360)`() const` | Gets the value of StatValue_Optional, regardless of it having been set.
`public inline const float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a0d3a9b2772208186195e6b87652b3376)`(const float & DefaultValue) const` | Gets the value of StatValue_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a17dec48cd9b2d152e6091707cb3d733d)`(float & OutValue) const` | Fills OutValue with the value of StatValue_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetStatValueOrNull`](#structFRHAPI__LeaderboardEntry_1a20ed77ea6bf91d30ff266d70065061d9)`()` | Returns a pointer to StatValue_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetStatValueOrNull`](#structFRHAPI__LeaderboardEntry_1a4a3ee1044627be0f338d17b8fada3bbc)`() const` | Returns a pointer to StatValue_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatValue`](#structFRHAPI__LeaderboardEntry_1afb72edb4726a8390a5f807a9a701830c)`(const float & NewValue)` | Sets the value of StatValue_Optional and also sets StatValue_IsSet to true.
`public inline void `[`SetStatValue`](#structFRHAPI__LeaderboardEntry_1a927f73df5e9187445c006cdafd23c364)`(float && NewValue)` | Sets the value of StatValue_Optional and also sets StatValue_IsSet to true using move semantics.
`public inline void `[`ClearStatValue`](#structFRHAPI__LeaderboardEntry_1aa836e9b830d63f58af52b221ce0a95d4)`()` | Clears the value of StatValue_Optional and sets StatValue_IsSet to false.
`public inline bool `[`IsStatValueSet`](#structFRHAPI__LeaderboardEntry_1a0c62b1358fcfa2be488f28ac89577012)`() const` | Checks whether StatValue_Optional has been set.
`public inline void `[`SetStatValueToNull`](#structFRHAPI__LeaderboardEntry_1a5cff19b50cdecd03f0c01f67644626a3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStatValueNull`](#structFRHAPI__LeaderboardEntry_1ae67b742de247cedfbb9cfb942def4cae)`() const` | Checks whether StatValue_Optional is set to null.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__LeaderboardEntry_1a70dd9cb134348a994acd70e9ba941a10) <a id="structFRHAPI__LeaderboardEntry_1a70dd9cb134348a994acd70e9ba941a10"></a>

Unique ID for the player in this leaderboard entry.

#### `public float `[`StatValue_Optional`](#structFRHAPI__LeaderboardEntry_1a6f8764c65207db12a8d9081daba20b51) <a id="structFRHAPI__LeaderboardEntry_1a6f8764c65207db12a8d9081daba20b51"></a>

#### `public bool `[`StatValue_IsSet`](#structFRHAPI__LeaderboardEntry_1ad60dd1ef0f62a1d6f91e121d8a1370e2) <a id="structFRHAPI__LeaderboardEntry_1ad60dd1ef0f62a1d6f91e121d8a1370e2"></a>

true if StatValue_Optional has been set to a value

#### `public bool `[`StatValue_IsNull`](#structFRHAPI__LeaderboardEntry_1a6f489b8233d3344bca2854b011a1ded2) <a id="structFRHAPI__LeaderboardEntry_1a6f489b8233d3344bca2854b011a1ded2"></a>

true if StatValue_Optional has been explicitly set to null

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

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a72c177336529472656b1680fe977d9ed)`()` <a id="structFRHAPI__LeaderboardEntry_1a72c177336529472656b1680fe977d9ed"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1a261f1e251de17cef5cd0446fa0cf06d4)`() const` <a id="structFRHAPI__LeaderboardEntry_1a261f1e251de17cef5cd0446fa0cf06d4"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1ad13bcfe4966a694f3936ac4f4669e73a)`(const FGuid & NewValue)` <a id="structFRHAPI__LeaderboardEntry_1ad13bcfe4966a694f3936ac4f4669e73a"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__LeaderboardEntry_1af3b2abc509ed50276591e7191f2ed7f4)`(FGuid && NewValue)` <a id="structFRHAPI__LeaderboardEntry_1af3b2abc509ed50276591e7191f2ed7f4"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a99b4df1145bc41b62cc6d95671d23644)`()` <a id="structFRHAPI__LeaderboardEntry_1a99b4df1145bc41b62cc6d95671d23644"></a>

Gets the value of StatValue_Optional, regardless of it having been set.

#### `public inline const float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1ab1d54cd0815c874a5210caa1c847c360)`() const` <a id="structFRHAPI__LeaderboardEntry_1ab1d54cd0815c874a5210caa1c847c360"></a>

Gets the value of StatValue_Optional, regardless of it having been set.

#### `public inline const float & `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a0d3a9b2772208186195e6b87652b3376)`(const float & DefaultValue) const` <a id="structFRHAPI__LeaderboardEntry_1a0d3a9b2772208186195e6b87652b3376"></a>

Gets the value of StatValue_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatValue`](#structFRHAPI__LeaderboardEntry_1a17dec48cd9b2d152e6091707cb3d733d)`(float & OutValue) const` <a id="structFRHAPI__LeaderboardEntry_1a17dec48cd9b2d152e6091707cb3d733d"></a>

Fills OutValue with the value of StatValue_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetStatValueOrNull`](#structFRHAPI__LeaderboardEntry_1a20ed77ea6bf91d30ff266d70065061d9)`()` <a id="structFRHAPI__LeaderboardEntry_1a20ed77ea6bf91d30ff266d70065061d9"></a>

Returns a pointer to StatValue_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetStatValueOrNull`](#structFRHAPI__LeaderboardEntry_1a4a3ee1044627be0f338d17b8fada3bbc)`() const` <a id="structFRHAPI__LeaderboardEntry_1a4a3ee1044627be0f338d17b8fada3bbc"></a>

Returns a pointer to StatValue_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatValue`](#structFRHAPI__LeaderboardEntry_1afb72edb4726a8390a5f807a9a701830c)`(const float & NewValue)` <a id="structFRHAPI__LeaderboardEntry_1afb72edb4726a8390a5f807a9a701830c"></a>

Sets the value of StatValue_Optional and also sets StatValue_IsSet to true.

#### `public inline void `[`SetStatValue`](#structFRHAPI__LeaderboardEntry_1a927f73df5e9187445c006cdafd23c364)`(float && NewValue)` <a id="structFRHAPI__LeaderboardEntry_1a927f73df5e9187445c006cdafd23c364"></a>

Sets the value of StatValue_Optional and also sets StatValue_IsSet to true using move semantics.

#### `public inline void `[`ClearStatValue`](#structFRHAPI__LeaderboardEntry_1aa836e9b830d63f58af52b221ce0a95d4)`()` <a id="structFRHAPI__LeaderboardEntry_1aa836e9b830d63f58af52b221ce0a95d4"></a>

Clears the value of StatValue_Optional and sets StatValue_IsSet to false.

#### `public inline bool `[`IsStatValueSet`](#structFRHAPI__LeaderboardEntry_1a0c62b1358fcfa2be488f28ac89577012)`() const` <a id="structFRHAPI__LeaderboardEntry_1a0c62b1358fcfa2be488f28ac89577012"></a>

Checks whether StatValue_Optional has been set.

#### `public inline void `[`SetStatValueToNull`](#structFRHAPI__LeaderboardEntry_1a5cff19b50cdecd03f0c01f67644626a3)`()` <a id="structFRHAPI__LeaderboardEntry_1a5cff19b50cdecd03f0c01f67644626a3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStatValueNull`](#structFRHAPI__LeaderboardEntry_1ae67b742de247cedfbb9cfb942def4cae)`() const` <a id="structFRHAPI__LeaderboardEntry_1ae67b742de247cedfbb9cfb942def4cae"></a>

Checks whether StatValue_Optional is set to null.

