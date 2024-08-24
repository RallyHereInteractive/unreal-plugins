---
title: RHAPI_ClientVisibleSettings
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ClientVisibleSettings`](#structFRHAPI__ClientVisibleSettings) | 

## struct `FRHAPI_ClientVisibleSettings` <a id="structFRHAPI__ClientVisibleSettings"></a>

```
struct FRHAPI_ClientVisibleSettings
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`SelfPingIntervalSeconds_Optional`](#structFRHAPI__ClientVisibleSettings_1a828c993abb6fdc42104faec4caf421e2) | How frequently the client should tell this service that it's online.
`public bool `[`SelfPingIntervalSeconds_IsSet`](#structFRHAPI__ClientVisibleSettings_1ace70bf6d96d174b2e1586ff94716cbe4) | true if SelfPingIntervalSeconds_Optional has been set to a value
`public int32 `[`LastSeenAgeConsideredOfflineSeconds_Optional`](#structFRHAPI__ClientVisibleSettings_1a90a6939a980c3a1bbb3f77d767a5b302) | If a client hasn't said that it's online within this time period, it will be treated as offline when others query its presence.
`public bool `[`LastSeenAgeConsideredOfflineSeconds_IsSet`](#structFRHAPI__ClientVisibleSettings_1ad45b6ad6b30c9df78d8d035a20c26816) | true if LastSeenAgeConsideredOfflineSeconds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ClientVisibleSettings_1a3da0fac3cee8f7cf102effdefe7388af)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ClientVisibleSettings_1ad7d63f28d12e4094c7675d0c57a2398e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a367b02ea4c55c72b344c147f925d4469)`()` | Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1ac6553749a0cb092f7c2c2ea00940345f)`() const` | Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a6bfb606cc8b9b1fbb47bda64432fcc68)`(const int32 & DefaultValue) const` | Gets the value of SelfPingIntervalSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a7d37f13d0e6f3b4c649fd3ccb39f4218)`(int32 & OutValue) const` | Fills OutValue with the value of SelfPingIntervalSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetSelfPingIntervalSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1a34678a73c4d9347369a1f20cc260bb9b)`()` | Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetSelfPingIntervalSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1afcfdcd7dc359cb1a1ebbb6ce509a483e)`() const` | Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a5613c77805f14dcfb7ee721558a140d1)`(const int32 & NewValue)` | Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true.
`public inline void `[`SetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1ab039af57d889c2b8889d583f01dd2457)`(int32 && NewValue)` | Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true using move semantics.
`public inline void `[`ClearSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1adafb2332f88d81839bf4bf0900a5de60)`()` | Clears the value of SelfPingIntervalSeconds_Optional and sets SelfPingIntervalSeconds_IsSet to false.
`public inline bool `[`IsSelfPingIntervalSecondsSet`](#structFRHAPI__ClientVisibleSettings_1a38e0064271bdb1718ed68668389f8ba8)`() const` | Checks whether SelfPingIntervalSeconds_Optional has been set.
`public inline bool `[`IsSelfPingIntervalSecondsDefaultValue`](#structFRHAPI__ClientVisibleSettings_1a033a38b4df1faee9ca6d2696fead88d7)`() const` | Returns true if SelfPingIntervalSeconds_Optional is set and matches the default value.
`public inline void `[`SetSelfPingIntervalSecondsToDefault`](#structFRHAPI__ClientVisibleSettings_1ad3c526b51d28291c49c00d222e8d1049)`()` | Sets the value of SelfPingIntervalSeconds_Optional to its default and also sets SelfPingIntervalSeconds_IsSet to true.
`public inline int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a082111c6526b754fca40b60a1507af78)`()` | Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1afa37dae5ec3ff70d8de79622b43abc61)`() const` | Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a33640a9b88b094a093b4ff1ce0be2498)`(const int32 & DefaultValue) const` | Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a29bd6609cd9e8d706240941c142e3da7)`(int32 & OutValue) const` | Fills OutValue with the value of LastSeenAgeConsideredOfflineSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLastSeenAgeConsideredOfflineSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1af01ca031f3dfcc31ebaf224639f9dcb1)`()` | Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLastSeenAgeConsideredOfflineSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1ac8ebdc79ad956d299d6294514e85eca2)`() const` | Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1af8e7143f85fa107b0c82f287e40b6047)`(const int32 & NewValue)` | Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.
`public inline void `[`SetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a4b1675323119711225de3c0ee8022598)`(int32 && NewValue)` | Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true using move semantics.
`public inline void `[`ClearLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a6c06cf26f430201a9cca63f91203f0e2)`()` | Clears the value of LastSeenAgeConsideredOfflineSeconds_Optional and sets LastSeenAgeConsideredOfflineSeconds_IsSet to false.
`public inline bool `[`IsLastSeenAgeConsideredOfflineSecondsSet`](#structFRHAPI__ClientVisibleSettings_1a827fbe99635362c406035fb72a925ab5)`() const` | Checks whether LastSeenAgeConsideredOfflineSeconds_Optional has been set.
`public inline bool `[`IsLastSeenAgeConsideredOfflineSecondsDefaultValue`](#structFRHAPI__ClientVisibleSettings_1aa3e05d3f534bb08e0d5179551dc8766b)`() const` | Returns true if LastSeenAgeConsideredOfflineSeconds_Optional is set and matches the default value.
`public inline void `[`SetLastSeenAgeConsideredOfflineSecondsToDefault`](#structFRHAPI__ClientVisibleSettings_1a34afe649f51b3772bd802d3e4982d686)`()` | Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional to its default and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.

### Members

#### `public int32 `[`SelfPingIntervalSeconds_Optional`](#structFRHAPI__ClientVisibleSettings_1a828c993abb6fdc42104faec4caf421e2) <a id="structFRHAPI__ClientVisibleSettings_1a828c993abb6fdc42104faec4caf421e2"></a>

How frequently the client should tell this service that it's online.

#### `public bool `[`SelfPingIntervalSeconds_IsSet`](#structFRHAPI__ClientVisibleSettings_1ace70bf6d96d174b2e1586ff94716cbe4) <a id="structFRHAPI__ClientVisibleSettings_1ace70bf6d96d174b2e1586ff94716cbe4"></a>

true if SelfPingIntervalSeconds_Optional has been set to a value

#### `public int32 `[`LastSeenAgeConsideredOfflineSeconds_Optional`](#structFRHAPI__ClientVisibleSettings_1a90a6939a980c3a1bbb3f77d767a5b302) <a id="structFRHAPI__ClientVisibleSettings_1a90a6939a980c3a1bbb3f77d767a5b302"></a>

If a client hasn't said that it's online within this time period, it will be treated as offline when others query its presence.

#### `public bool `[`LastSeenAgeConsideredOfflineSeconds_IsSet`](#structFRHAPI__ClientVisibleSettings_1ad45b6ad6b30c9df78d8d035a20c26816) <a id="structFRHAPI__ClientVisibleSettings_1ad45b6ad6b30c9df78d8d035a20c26816"></a>

true if LastSeenAgeConsideredOfflineSeconds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ClientVisibleSettings_1a3da0fac3cee8f7cf102effdefe7388af)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ClientVisibleSettings_1a3da0fac3cee8f7cf102effdefe7388af"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ClientVisibleSettings_1ad7d63f28d12e4094c7675d0c57a2398e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__ClientVisibleSettings_1ad7d63f28d12e4094c7675d0c57a2398e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a367b02ea4c55c72b344c147f925d4469)`()` <a id="structFRHAPI__ClientVisibleSettings_1a367b02ea4c55c72b344c147f925d4469"></a>

Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1ac6553749a0cb092f7c2c2ea00940345f)`() const` <a id="structFRHAPI__ClientVisibleSettings_1ac6553749a0cb092f7c2c2ea00940345f"></a>

Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a6bfb606cc8b9b1fbb47bda64432fcc68)`(const int32 & DefaultValue) const` <a id="structFRHAPI__ClientVisibleSettings_1a6bfb606cc8b9b1fbb47bda64432fcc68"></a>

Gets the value of SelfPingIntervalSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a7d37f13d0e6f3b4c649fd3ccb39f4218)`(int32 & OutValue) const` <a id="structFRHAPI__ClientVisibleSettings_1a7d37f13d0e6f3b4c649fd3ccb39f4218"></a>

Fills OutValue with the value of SelfPingIntervalSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetSelfPingIntervalSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1a34678a73c4d9347369a1f20cc260bb9b)`()` <a id="structFRHAPI__ClientVisibleSettings_1a34678a73c4d9347369a1f20cc260bb9b"></a>

Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetSelfPingIntervalSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1afcfdcd7dc359cb1a1ebbb6ce509a483e)`() const` <a id="structFRHAPI__ClientVisibleSettings_1afcfdcd7dc359cb1a1ebbb6ce509a483e"></a>

Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a5613c77805f14dcfb7ee721558a140d1)`(const int32 & NewValue)` <a id="structFRHAPI__ClientVisibleSettings_1a5613c77805f14dcfb7ee721558a140d1"></a>

Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true.

#### `public inline void `[`SetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1ab039af57d889c2b8889d583f01dd2457)`(int32 && NewValue)` <a id="structFRHAPI__ClientVisibleSettings_1ab039af57d889c2b8889d583f01dd2457"></a>

Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1adafb2332f88d81839bf4bf0900a5de60)`()` <a id="structFRHAPI__ClientVisibleSettings_1adafb2332f88d81839bf4bf0900a5de60"></a>

Clears the value of SelfPingIntervalSeconds_Optional and sets SelfPingIntervalSeconds_IsSet to false.

#### `public inline bool `[`IsSelfPingIntervalSecondsSet`](#structFRHAPI__ClientVisibleSettings_1a38e0064271bdb1718ed68668389f8ba8)`() const` <a id="structFRHAPI__ClientVisibleSettings_1a38e0064271bdb1718ed68668389f8ba8"></a>

Checks whether SelfPingIntervalSeconds_Optional has been set.

#### `public inline bool `[`IsSelfPingIntervalSecondsDefaultValue`](#structFRHAPI__ClientVisibleSettings_1a033a38b4df1faee9ca6d2696fead88d7)`() const` <a id="structFRHAPI__ClientVisibleSettings_1a033a38b4df1faee9ca6d2696fead88d7"></a>

Returns true if SelfPingIntervalSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetSelfPingIntervalSecondsToDefault`](#structFRHAPI__ClientVisibleSettings_1ad3c526b51d28291c49c00d222e8d1049)`()` <a id="structFRHAPI__ClientVisibleSettings_1ad3c526b51d28291c49c00d222e8d1049"></a>

Sets the value of SelfPingIntervalSeconds_Optional to its default and also sets SelfPingIntervalSeconds_IsSet to true.

#### `public inline int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a082111c6526b754fca40b60a1507af78)`()` <a id="structFRHAPI__ClientVisibleSettings_1a082111c6526b754fca40b60a1507af78"></a>

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1afa37dae5ec3ff70d8de79622b43abc61)`() const` <a id="structFRHAPI__ClientVisibleSettings_1afa37dae5ec3ff70d8de79622b43abc61"></a>

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a33640a9b88b094a093b4ff1ce0be2498)`(const int32 & DefaultValue) const` <a id="structFRHAPI__ClientVisibleSettings_1a33640a9b88b094a093b4ff1ce0be2498"></a>

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a29bd6609cd9e8d706240941c142e3da7)`(int32 & OutValue) const` <a id="structFRHAPI__ClientVisibleSettings_1a29bd6609cd9e8d706240941c142e3da7"></a>

Fills OutValue with the value of LastSeenAgeConsideredOfflineSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLastSeenAgeConsideredOfflineSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1af01ca031f3dfcc31ebaf224639f9dcb1)`()` <a id="structFRHAPI__ClientVisibleSettings_1af01ca031f3dfcc31ebaf224639f9dcb1"></a>

Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLastSeenAgeConsideredOfflineSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1ac8ebdc79ad956d299d6294514e85eca2)`() const` <a id="structFRHAPI__ClientVisibleSettings_1ac8ebdc79ad956d299d6294514e85eca2"></a>

Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1af8e7143f85fa107b0c82f287e40b6047)`(const int32 & NewValue)` <a id="structFRHAPI__ClientVisibleSettings_1af8e7143f85fa107b0c82f287e40b6047"></a>

Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.

#### `public inline void `[`SetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a4b1675323119711225de3c0ee8022598)`(int32 && NewValue)` <a id="structFRHAPI__ClientVisibleSettings_1a4b1675323119711225de3c0ee8022598"></a>

Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a6c06cf26f430201a9cca63f91203f0e2)`()` <a id="structFRHAPI__ClientVisibleSettings_1a6c06cf26f430201a9cca63f91203f0e2"></a>

Clears the value of LastSeenAgeConsideredOfflineSeconds_Optional and sets LastSeenAgeConsideredOfflineSeconds_IsSet to false.

#### `public inline bool `[`IsLastSeenAgeConsideredOfflineSecondsSet`](#structFRHAPI__ClientVisibleSettings_1a827fbe99635362c406035fb72a925ab5)`() const` <a id="structFRHAPI__ClientVisibleSettings_1a827fbe99635362c406035fb72a925ab5"></a>

Checks whether LastSeenAgeConsideredOfflineSeconds_Optional has been set.

#### `public inline bool `[`IsLastSeenAgeConsideredOfflineSecondsDefaultValue`](#structFRHAPI__ClientVisibleSettings_1aa3e05d3f534bb08e0d5179551dc8766b)`() const` <a id="structFRHAPI__ClientVisibleSettings_1aa3e05d3f534bb08e0d5179551dc8766b"></a>

Returns true if LastSeenAgeConsideredOfflineSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetLastSeenAgeConsideredOfflineSecondsToDefault`](#structFRHAPI__ClientVisibleSettings_1a34afe649f51b3772bd802d3e4982d686)`()` <a id="structFRHAPI__ClientVisibleSettings_1a34afe649f51b3772bd802d3e4982d686"></a>

Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional to its default and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.

