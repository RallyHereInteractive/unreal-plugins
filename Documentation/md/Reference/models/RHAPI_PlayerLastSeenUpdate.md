---
title: RHAPI_PlayerLastSeenUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerLastSeenUpdate`](#structFRHAPI__PlayerLastSeenUpdate) | 

## struct `FRHAPI_PlayerLastSeenUpdate` <a id="structFRHAPI__PlayerLastSeenUpdate"></a>

```
struct FRHAPI_PlayerLastSeenUpdate
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`Time`](#structFRHAPI__PlayerLastSeenUpdate_1ac52ac599410a5675a0052148618eb994) | Last time this player reported their online status.
`public FString `[`Platform_Optional`](#structFRHAPI__PlayerLastSeenUpdate_1ace7260325ef2f15713ef90d0544387d3) | Platform the user was online in.
`public bool `[`Platform_IsSet`](#structFRHAPI__PlayerLastSeenUpdate_1a3e0f8a06427ed33debc26f6e803716f3) | true if Platform_Optional has been set to a value
`public FString `[`DisplayName_Optional`](#structFRHAPI__PlayerLastSeenUpdate_1af7ccaaa4754dfdfecb54198a36a1023c) | Player Display Name.
`public bool `[`DisplayName_IsSet`](#structFRHAPI__PlayerLastSeenUpdate_1a5806815fa7538ea0b3c068d1542bc012) | true if DisplayName_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerLastSeenUpdate_1acdff6f30fa41ed2d32f1aef8d5398354)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerLastSeenUpdate_1a0c2d9dd3b7095e1d00a28837ea08ac6a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetTime`](#structFRHAPI__PlayerLastSeenUpdate_1ac10275c4c37e491c830cb6c97072c80d)`()` | Gets the value of Time.
`public inline const FDateTime & `[`GetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a660266608163bd8eab594accc2423316)`() const` | Gets the value of Time.
`public inline void `[`SetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a933b218884e95bbcc4939c866f4b9236)`(const FDateTime & NewValue)` | Sets the value of Time.
`public inline void `[`SetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a6ea8251247dc65947ff43a4662b85795)`(FDateTime && NewValue)` | Sets the value of Time using move semantics.
`public inline FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a3d7a160dec6861dae9b2088fc3bb0ebc)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a1f9b818fea31a3749b503f160a08f79d)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1abe0df81c3d7201900b6a880c5bad25ad)`(const FString & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a904d2fa8eb892778c6b748195fed4593)`(FString & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a3c08ed09a2c107edeacfa976a9625f0e)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1aec287f0c1684e557ad45bf62756538ce)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a2f74200474697172317f73a8d1d239b8)`(const FString & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a4a304fbedc72ca6af46ac4c8e0ccdcfc)`(FString && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1aa3cc09e14a89615c9bbe6c0c8d8fae9b)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__PlayerLastSeenUpdate_1a1425f361e296cac6d400c1757d0824a7)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a11116357e6bf3f94c01bb8fcb5aec09b)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a312a865ca169003cdcc17dc6a9944ff0)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a96978bae16491e5db4624e435ec31b2f)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a7ed6067e479cde3635a48302c86c7db6)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a8a315fc700d8bd2a52d3150127f3629a)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a1290607611840c166f4fb4157ecc31fb)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a044d97dcca4d408d3ac08c7f80920ea2)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline void `[`SetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1adca1ce68a1856d916018857a35cc5755)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a808a56f9cf76cfde9abcf2bb0c5bd9c4)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline bool `[`IsDisplayNameSet`](#structFRHAPI__PlayerLastSeenUpdate_1a9791205d4eae74a55568f2db4e52a527)`() const` | Checks whether DisplayName_Optional has been set.

### Members

#### `public FDateTime `[`Time`](#structFRHAPI__PlayerLastSeenUpdate_1ac52ac599410a5675a0052148618eb994) <a id="structFRHAPI__PlayerLastSeenUpdate_1ac52ac599410a5675a0052148618eb994"></a>

Last time this player reported their online status.

#### `public FString `[`Platform_Optional`](#structFRHAPI__PlayerLastSeenUpdate_1ace7260325ef2f15713ef90d0544387d3) <a id="structFRHAPI__PlayerLastSeenUpdate_1ace7260325ef2f15713ef90d0544387d3"></a>

Platform the user was online in.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__PlayerLastSeenUpdate_1a3e0f8a06427ed33debc26f6e803716f3) <a id="structFRHAPI__PlayerLastSeenUpdate_1a3e0f8a06427ed33debc26f6e803716f3"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`DisplayName_Optional`](#structFRHAPI__PlayerLastSeenUpdate_1af7ccaaa4754dfdfecb54198a36a1023c) <a id="structFRHAPI__PlayerLastSeenUpdate_1af7ccaaa4754dfdfecb54198a36a1023c"></a>

Player Display Name.

#### `public bool `[`DisplayName_IsSet`](#structFRHAPI__PlayerLastSeenUpdate_1a5806815fa7538ea0b3c068d1542bc012) <a id="structFRHAPI__PlayerLastSeenUpdate_1a5806815fa7538ea0b3c068d1542bc012"></a>

true if DisplayName_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerLastSeenUpdate_1acdff6f30fa41ed2d32f1aef8d5398354)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1acdff6f30fa41ed2d32f1aef8d5398354"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerLastSeenUpdate_1a0c2d9dd3b7095e1d00a28837ea08ac6a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a0c2d9dd3b7095e1d00a28837ea08ac6a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetTime`](#structFRHAPI__PlayerLastSeenUpdate_1ac10275c4c37e491c830cb6c97072c80d)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1ac10275c4c37e491c830cb6c97072c80d"></a>

Gets the value of Time.

#### `public inline const FDateTime & `[`GetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a660266608163bd8eab594accc2423316)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a660266608163bd8eab594accc2423316"></a>

Gets the value of Time.

#### `public inline void `[`SetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a933b218884e95bbcc4939c866f4b9236)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a933b218884e95bbcc4939c866f4b9236"></a>

Sets the value of Time.

#### `public inline void `[`SetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a6ea8251247dc65947ff43a4662b85795)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a6ea8251247dc65947ff43a4662b85795"></a>

Sets the value of Time using move semantics.

#### `public inline FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a3d7a160dec6861dae9b2088fc3bb0ebc)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1a3d7a160dec6861dae9b2088fc3bb0ebc"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a1f9b818fea31a3749b503f160a08f79d)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a1f9b818fea31a3749b503f160a08f79d"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1abe0df81c3d7201900b6a880c5bad25ad)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1abe0df81c3d7201900b6a880c5bad25ad"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a904d2fa8eb892778c6b748195fed4593)`(FString & OutValue) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a904d2fa8eb892778c6b748195fed4593"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a3c08ed09a2c107edeacfa976a9625f0e)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1a3c08ed09a2c107edeacfa976a9625f0e"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1aec287f0c1684e557ad45bf62756538ce)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1aec287f0c1684e557ad45bf62756538ce"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a2f74200474697172317f73a8d1d239b8)`(const FString & NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a2f74200474697172317f73a8d1d239b8"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a4a304fbedc72ca6af46ac4c8e0ccdcfc)`(FString && NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a4a304fbedc72ca6af46ac4c8e0ccdcfc"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1aa3cc09e14a89615c9bbe6c0c8d8fae9b)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1aa3cc09e14a89615c9bbe6c0c8d8fae9b"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__PlayerLastSeenUpdate_1a1425f361e296cac6d400c1757d0824a7)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a1425f361e296cac6d400c1757d0824a7"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a11116357e6bf3f94c01bb8fcb5aec09b)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1a11116357e6bf3f94c01bb8fcb5aec09b"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a312a865ca169003cdcc17dc6a9944ff0)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a312a865ca169003cdcc17dc6a9944ff0"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a96978bae16491e5db4624e435ec31b2f)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a96978bae16491e5db4624e435ec31b2f"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a7ed6067e479cde3635a48302c86c7db6)`(FString & OutValue) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a7ed6067e479cde3635a48302c86c7db6"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a8a315fc700d8bd2a52d3150127f3629a)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1a8a315fc700d8bd2a52d3150127f3629a"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a1290607611840c166f4fb4157ecc31fb)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a1290607611840c166f4fb4157ecc31fb"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a044d97dcca4d408d3ac08c7f80920ea2)`(const FString & NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a044d97dcca4d408d3ac08c7f80920ea2"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1adca1ce68a1856d916018857a35cc5755)`(FString && NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1adca1ce68a1856d916018857a35cc5755"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a808a56f9cf76cfde9abcf2bb0c5bd9c4)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1a808a56f9cf76cfde9abcf2bb0c5bd9c4"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline bool `[`IsDisplayNameSet`](#structFRHAPI__PlayerLastSeenUpdate_1a9791205d4eae74a55568f2db4e52a527)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a9791205d4eae74a55568f2db4e52a527"></a>

Checks whether DisplayName_Optional has been set.

