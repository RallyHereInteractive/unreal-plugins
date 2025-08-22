---
title: RHAPI_Restriction
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Restriction`](#structFRHAPI__Restriction) | Restriction applied to a player.

## struct `FRHAPI_Restriction` <a id="structFRHAPI__Restriction"></a>

```
struct FRHAPI_Restriction
  : public FRHAPI_Model
```

Restriction applied to a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_RestrictionType `[`Type`](#structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1) | Type of restriction.
`public ERHAPI_RestrictionReasonCode `[`Reason_Optional`](#structFRHAPI__Restriction_1a7474068fad2a2ea3deb79e6ac72d8808) | Reason the restriction was applied.
`public bool `[`Reason_IsSet`](#structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239) | true if Reason_Optional has been set to a value
`public FDateTime `[`Expiration_Optional`](#structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expiration_IsSet`](#structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2) | true if Expiration_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Restriction_1a6bb3492732b881d3c6474f29890aa367)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Restriction_1af082358c03ab25006d766a1a7863bf05)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a66092471fd970936fb63d78128c182c4)`()` | Gets the value of Type.
`public inline FORCEINLINE const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a6318cdb76ea588156efaa80b9b6b4831)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Restriction_1aded067667478578f857770db49b897b6)`(const ERHAPI_RestrictionType & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Restriction_1adb76aac52303a017a94c3309776e38c9)`(ERHAPI_RestrictionType && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a251e9b21fca97a8d1b8d69506325c327)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a1c07386f3df473ce7c560178bde629bb)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a665fb9dc88f59d8faa0aa9d060a4b955)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__Restriction_1a0857135d7c63d453fa7b6d204709ffd9)`(ERHAPI_RestrictionReasonCode & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a46d5e82e2bfa68f07086349777a10fe2)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a44f44331c3765906b6a768920889a0e2)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__Restriction_1a4d8a4aa921f088249985d345bf8434be)`(const ERHAPI_RestrictionReasonCode & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__Restriction_1a1b1d5a27f26d1e4b8a7229bbe4d2aa85)`(ERHAPI_RestrictionReasonCode && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1ab1cee7ef38e717bda033c1fd3696a2c5)`()` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1aa2ac5f8107e5a4789d95d6df77d10dac)`() const` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1af37c28ef70a88d15a11dbfbffd5ce712)`(const FDateTime & DefaultValue) const` | Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpiration`](#structFRHAPI__Restriction_1aa6ced16da9d96d9018a4fbdbae838ab3)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1ae11e1f604407d69a31eab019eedef513)`()` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1aac06faab93edc5bbe2b2c62c6b3cc443)`() const` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__Restriction_1a21f8ff98e2b1d161c9a9f8093b5b6403)`(const FDateTime & NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.
`public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__Restriction_1aef848926da9447bf3553dc6e64156462)`(FDateTime && NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.
`public inline void `[`ClearExpiration`](#structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3)`()` | Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

### Members

#### `public ERHAPI_RestrictionType `[`Type`](#structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1) <a id="structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1"></a>

Type of restriction.

#### `public ERHAPI_RestrictionReasonCode `[`Reason_Optional`](#structFRHAPI__Restriction_1a7474068fad2a2ea3deb79e6ac72d8808) <a id="structFRHAPI__Restriction_1a7474068fad2a2ea3deb79e6ac72d8808"></a>

Reason the restriction was applied.

#### `public bool `[`Reason_IsSet`](#structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239) <a id="structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239"></a>

true if Reason_Optional has been set to a value

#### `public FDateTime `[`Expiration_Optional`](#structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57) <a id="structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expiration_IsSet`](#structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2) <a id="structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2"></a>

true if Expiration_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Restriction_1a6bb3492732b881d3c6474f29890aa367)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Restriction_1a6bb3492732b881d3c6474f29890aa367"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Restriction_1af082358c03ab25006d766a1a7863bf05)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Restriction_1af082358c03ab25006d766a1a7863bf05"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a66092471fd970936fb63d78128c182c4)`()` <a id="structFRHAPI__Restriction_1a66092471fd970936fb63d78128c182c4"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a6318cdb76ea588156efaa80b9b6b4831)`() const` <a id="structFRHAPI__Restriction_1a6318cdb76ea588156efaa80b9b6b4831"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Restriction_1aded067667478578f857770db49b897b6)`(const ERHAPI_RestrictionType & NewValue)` <a id="structFRHAPI__Restriction_1aded067667478578f857770db49b897b6"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Restriction_1adb76aac52303a017a94c3309776e38c9)`(ERHAPI_RestrictionType && NewValue)` <a id="structFRHAPI__Restriction_1adb76aac52303a017a94c3309776e38c9"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a251e9b21fca97a8d1b8d69506325c327)`()` <a id="structFRHAPI__Restriction_1a251e9b21fca97a8d1b8d69506325c327"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a1c07386f3df473ce7c560178bde629bb)`() const` <a id="structFRHAPI__Restriction_1a1c07386f3df473ce7c560178bde629bb"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a665fb9dc88f59d8faa0aa9d060a4b955)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` <a id="structFRHAPI__Restriction_1a665fb9dc88f59d8faa0aa9d060a4b955"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__Restriction_1a0857135d7c63d453fa7b6d204709ffd9)`(ERHAPI_RestrictionReasonCode & OutValue) const` <a id="structFRHAPI__Restriction_1a0857135d7c63d453fa7b6d204709ffd9"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a46d5e82e2bfa68f07086349777a10fe2)`()` <a id="structFRHAPI__Restriction_1a46d5e82e2bfa68f07086349777a10fe2"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a44f44331c3765906b6a768920889a0e2)`() const` <a id="structFRHAPI__Restriction_1a44f44331c3765906b6a768920889a0e2"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__Restriction_1a4d8a4aa921f088249985d345bf8434be)`(const ERHAPI_RestrictionReasonCode & NewValue)` <a id="structFRHAPI__Restriction_1a4d8a4aa921f088249985d345bf8434be"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__Restriction_1a1b1d5a27f26d1e4b8a7229bbe4d2aa85)`(ERHAPI_RestrictionReasonCode && NewValue)` <a id="structFRHAPI__Restriction_1a1b1d5a27f26d1e4b8a7229bbe4d2aa85"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c)`()` <a id="structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1ab1cee7ef38e717bda033c1fd3696a2c5)`()` <a id="structFRHAPI__Restriction_1ab1cee7ef38e717bda033c1fd3696a2c5"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1aa2ac5f8107e5a4789d95d6df77d10dac)`() const` <a id="structFRHAPI__Restriction_1aa2ac5f8107e5a4789d95d6df77d10dac"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1af37c28ef70a88d15a11dbfbffd5ce712)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__Restriction_1af37c28ef70a88d15a11dbfbffd5ce712"></a>

Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpiration`](#structFRHAPI__Restriction_1aa6ced16da9d96d9018a4fbdbae838ab3)`(FDateTime & OutValue) const` <a id="structFRHAPI__Restriction_1aa6ced16da9d96d9018a4fbdbae838ab3"></a>

Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1ae11e1f604407d69a31eab019eedef513)`()` <a id="structFRHAPI__Restriction_1ae11e1f604407d69a31eab019eedef513"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1aac06faab93edc5bbe2b2c62c6b3cc443)`() const` <a id="structFRHAPI__Restriction_1aac06faab93edc5bbe2b2c62c6b3cc443"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__Restriction_1a21f8ff98e2b1d161c9a9f8093b5b6403)`(const FDateTime & NewValue)` <a id="structFRHAPI__Restriction_1a21f8ff98e2b1d161c9a9f8093b5b6403"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__Restriction_1aef848926da9447bf3553dc6e64156462)`(FDateTime && NewValue)` <a id="structFRHAPI__Restriction_1aef848926da9447bf3553dc6e64156462"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiration`](#structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3)`()` <a id="structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3"></a>

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

