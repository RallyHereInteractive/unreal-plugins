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
`public virtual void `[`WriteJson`](#structFRHAPI__ClientVisibleSettings_1a5080489b3ab7f69a72a8bada829840f9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a51d35c93c358825fd7951a8977935b72)`()` | Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a74264f2878deb36db11bc1ada9d26ed4)`() const` | Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1ac456edd295c919a46a7e480bc5e2b70e)`(const int32 & DefaultValue) const` | Gets the value of SelfPingIntervalSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1afa902be3e4a4e763bdca5a075b24f25f)`(int32 & OutValue) const` | Fills OutValue with the value of SelfPingIntervalSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetSelfPingIntervalSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1a6b4e95b247c37e1558ab2cd19a11ae6c)`()` | Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetSelfPingIntervalSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1afe218c215c1d5c6c8ffdf71fb0b1250b)`() const` | Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1ad225ed0c8e73f8522318e4cffd2f76e2)`(const int32 & NewValue)` | Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a3ec1f8dbb00d144b43705536b998fcde)`(int32 && NewValue)` | Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true using move semantics.
`public inline void `[`ClearSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1adafb2332f88d81839bf4bf0900a5de60)`()` | Clears the value of SelfPingIntervalSeconds_Optional and sets SelfPingIntervalSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_SelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1abf8934a59eb0b0fdcaecf40750263ad1)`()` | Returns the default value of SelfPingIntervalSeconds.
`public inline FORCEINLINE int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1adae4e156c1f5ed2d4d57faa6b8cb76a4)`()` | Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a6c42f82674784bec9f48aafb7c487a22)`() const` | Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a9ea664feda5225a63761da19c64526aa)`(const int32 & DefaultValue) const` | Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1acc81eb21bc2aca23ad108f17c4584af4)`(int32 & OutValue) const` | Fills OutValue with the value of LastSeenAgeConsideredOfflineSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLastSeenAgeConsideredOfflineSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1ae95bdd1cbdf6e2a8d8a01dc7438ec5eb)`()` | Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLastSeenAgeConsideredOfflineSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1a6b0da5c4fb788e711d465f27d5a1ef89)`() const` | Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a4c13254ed38d2e2746ead089a31d7218)`(const int32 & NewValue)` | Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a18040f009e8346e8428d81bcb7f0d2c4)`(int32 && NewValue)` | Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true using move semantics.
`public inline void `[`ClearLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a6c06cf26f430201a9cca63f91203f0e2)`()` | Clears the value of LastSeenAgeConsideredOfflineSeconds_Optional and sets LastSeenAgeConsideredOfflineSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1ab08f93dae0f0322e6f39c7165ce87aff)`()` | Returns the default value of LastSeenAgeConsideredOfflineSeconds.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__ClientVisibleSettings_1a5080489b3ab7f69a72a8bada829840f9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ClientVisibleSettings_1a5080489b3ab7f69a72a8bada829840f9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a51d35c93c358825fd7951a8977935b72)`()` <a id="structFRHAPI__ClientVisibleSettings_1a51d35c93c358825fd7951a8977935b72"></a>

Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a74264f2878deb36db11bc1ada9d26ed4)`() const` <a id="structFRHAPI__ClientVisibleSettings_1a74264f2878deb36db11bc1ada9d26ed4"></a>

Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1ac456edd295c919a46a7e480bc5e2b70e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__ClientVisibleSettings_1ac456edd295c919a46a7e480bc5e2b70e"></a>

Gets the value of SelfPingIntervalSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1afa902be3e4a4e763bdca5a075b24f25f)`(int32 & OutValue) const` <a id="structFRHAPI__ClientVisibleSettings_1afa902be3e4a4e763bdca5a075b24f25f"></a>

Fills OutValue with the value of SelfPingIntervalSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetSelfPingIntervalSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1a6b4e95b247c37e1558ab2cd19a11ae6c)`()` <a id="structFRHAPI__ClientVisibleSettings_1a6b4e95b247c37e1558ab2cd19a11ae6c"></a>

Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetSelfPingIntervalSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1afe218c215c1d5c6c8ffdf71fb0b1250b)`() const` <a id="structFRHAPI__ClientVisibleSettings_1afe218c215c1d5c6c8ffdf71fb0b1250b"></a>

Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1ad225ed0c8e73f8522318e4cffd2f76e2)`(const int32 & NewValue)` <a id="structFRHAPI__ClientVisibleSettings_1ad225ed0c8e73f8522318e4cffd2f76e2"></a>

Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1a3ec1f8dbb00d144b43705536b998fcde)`(int32 && NewValue)` <a id="structFRHAPI__ClientVisibleSettings_1a3ec1f8dbb00d144b43705536b998fcde"></a>

Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearSelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1adafb2332f88d81839bf4bf0900a5de60)`()` <a id="structFRHAPI__ClientVisibleSettings_1adafb2332f88d81839bf4bf0900a5de60"></a>

Clears the value of SelfPingIntervalSeconds_Optional and sets SelfPingIntervalSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_SelfPingIntervalSeconds`](#structFRHAPI__ClientVisibleSettings_1abf8934a59eb0b0fdcaecf40750263ad1)`()` <a id="structFRHAPI__ClientVisibleSettings_1abf8934a59eb0b0fdcaecf40750263ad1"></a>

Returns the default value of SelfPingIntervalSeconds.

#### `public inline FORCEINLINE int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1adae4e156c1f5ed2d4d57faa6b8cb76a4)`()` <a id="structFRHAPI__ClientVisibleSettings_1adae4e156c1f5ed2d4d57faa6b8cb76a4"></a>

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a6c42f82674784bec9f48aafb7c487a22)`() const` <a id="structFRHAPI__ClientVisibleSettings_1a6c42f82674784bec9f48aafb7c487a22"></a>

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a9ea664feda5225a63761da19c64526aa)`(const int32 & DefaultValue) const` <a id="structFRHAPI__ClientVisibleSettings_1a9ea664feda5225a63761da19c64526aa"></a>

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1acc81eb21bc2aca23ad108f17c4584af4)`(int32 & OutValue) const` <a id="structFRHAPI__ClientVisibleSettings_1acc81eb21bc2aca23ad108f17c4584af4"></a>

Fills OutValue with the value of LastSeenAgeConsideredOfflineSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLastSeenAgeConsideredOfflineSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1ae95bdd1cbdf6e2a8d8a01dc7438ec5eb)`()` <a id="structFRHAPI__ClientVisibleSettings_1ae95bdd1cbdf6e2a8d8a01dc7438ec5eb"></a>

Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLastSeenAgeConsideredOfflineSecondsOrNull`](#structFRHAPI__ClientVisibleSettings_1a6b0da5c4fb788e711d465f27d5a1ef89)`() const` <a id="structFRHAPI__ClientVisibleSettings_1a6b0da5c4fb788e711d465f27d5a1ef89"></a>

Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a4c13254ed38d2e2746ead089a31d7218)`(const int32 & NewValue)` <a id="structFRHAPI__ClientVisibleSettings_1a4c13254ed38d2e2746ead089a31d7218"></a>

Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a18040f009e8346e8428d81bcb7f0d2c4)`(int32 && NewValue)` <a id="structFRHAPI__ClientVisibleSettings_1a18040f009e8346e8428d81bcb7f0d2c4"></a>

Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearLastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1a6c06cf26f430201a9cca63f91203f0e2)`()` <a id="structFRHAPI__ClientVisibleSettings_1a6c06cf26f430201a9cca63f91203f0e2"></a>

Clears the value of LastSeenAgeConsideredOfflineSeconds_Optional and sets LastSeenAgeConsideredOfflineSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LastSeenAgeConsideredOfflineSeconds`](#structFRHAPI__ClientVisibleSettings_1ab08f93dae0f0322e6f39c7165ce87aff)`()` <a id="structFRHAPI__ClientVisibleSettings_1ab08f93dae0f0322e6f39c7165ce87aff"></a>

Returns the default value of LastSeenAgeConsideredOfflineSeconds.

