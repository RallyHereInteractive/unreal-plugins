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
`public FDateTime `[`Expiration_Optional`](#structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57) | Date the restriction expires. Null means the restriction is permanent.
`public bool `[`Expiration_IsSet`](#structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2) | true if Expiration_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Restriction_1a6bb3492732b881d3c6474f29890aa367)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Restriction_1a90bc5fca835a86191b4d6b171d6290bf)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a3b9f455e0c867bfd7754103ecc9e7ba7)`()` | Gets the value of Type.
`public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a591e500a3661de66229c5f1ba7724435)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__Restriction_1aa95290fbf9706c49ec1b49f5fb3cdcc3)`(const ERHAPI_RestrictionType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__Restriction_1a2e0a205fffdbfda1c2ce9c36aee7ef04)`(ERHAPI_RestrictionType && NewValue)` | Sets the value of Type using move semantics.
`public inline ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a6e7a8311942d1852cb2ebdb2e69c2837)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1afb6347d7b4097728d1c3eff0adb348d6)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a5cf31a5bec5fe7039936f378efdf5ec0)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReason`](#structFRHAPI__Restriction_1aa074595a9ed3d659d65c57b387faff40)`(ERHAPI_RestrictionReasonCode & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a382a9d92915b5fde944ed9cad1db13c6)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1aaa0593407274af1f1f7faafc9e45532e)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReason`](#structFRHAPI__Restriction_1aff66cfec7a51cc9356382c657a764379)`(const ERHAPI_RestrictionReasonCode & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline void `[`SetReason`](#structFRHAPI__Restriction_1aef686486305517d940d5eea912d08131)`(ERHAPI_RestrictionReasonCode && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline bool `[`IsReasonSet`](#structFRHAPI__Restriction_1a9146cac6536c766279fc4a9a7af831a9)`() const` | Checks whether Reason_Optional has been set.
`public inline FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1a9de96ed60891e7a52aff0cb19582fe96)`()` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1a41500509f91eaaa0659b1d40c038eb0b)`() const` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1aadf3d0a157498122a8794f504bbcf770)`(const FDateTime & DefaultValue) const` | Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpiration`](#structFRHAPI__Restriction_1a0fc25026a69be9341c05a89894121eec)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1a866067dfa68137f91940de9ab1499d40)`()` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1a09ebfb37388cad70e5d94da468bf3c08)`() const` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpiration`](#structFRHAPI__Restriction_1a8d502f1b2b2760e6a9bff0dc99a41f9d)`(const FDateTime & NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.
`public inline void `[`SetExpiration`](#structFRHAPI__Restriction_1aaaf7fae17caf907eeb52bc054b467f3c)`(FDateTime && NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.
`public inline void `[`ClearExpiration`](#structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3)`()` | Clears the value of Expiration_Optional and sets Expiration_IsSet to false.
`public inline bool `[`IsExpirationSet`](#structFRHAPI__Restriction_1ab73ea34e33da42da7ae56ade3c1b01be)`() const` | Checks whether Expiration_Optional has been set.

### Members

#### `public ERHAPI_RestrictionType `[`Type`](#structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1) <a id="structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1"></a>

Type of restriction.

#### `public ERHAPI_RestrictionReasonCode `[`Reason_Optional`](#structFRHAPI__Restriction_1a7474068fad2a2ea3deb79e6ac72d8808) <a id="structFRHAPI__Restriction_1a7474068fad2a2ea3deb79e6ac72d8808"></a>

Reason the restriction was applied.

#### `public bool `[`Reason_IsSet`](#structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239) <a id="structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239"></a>

true if Reason_Optional has been set to a value

#### `public FDateTime `[`Expiration_Optional`](#structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57) <a id="structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57"></a>

Date the restriction expires. Null means the restriction is permanent.

#### `public bool `[`Expiration_IsSet`](#structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2) <a id="structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2"></a>

true if Expiration_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Restriction_1a6bb3492732b881d3c6474f29890aa367)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Restriction_1a6bb3492732b881d3c6474f29890aa367"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Restriction_1a90bc5fca835a86191b4d6b171d6290bf)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Restriction_1a90bc5fca835a86191b4d6b171d6290bf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a3b9f455e0c867bfd7754103ecc9e7ba7)`()` <a id="structFRHAPI__Restriction_1a3b9f455e0c867bfd7754103ecc9e7ba7"></a>

Gets the value of Type.

#### `public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a591e500a3661de66229c5f1ba7724435)`() const` <a id="structFRHAPI__Restriction_1a591e500a3661de66229c5f1ba7724435"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__Restriction_1aa95290fbf9706c49ec1b49f5fb3cdcc3)`(const ERHAPI_RestrictionType & NewValue)` <a id="structFRHAPI__Restriction_1aa95290fbf9706c49ec1b49f5fb3cdcc3"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__Restriction_1a2e0a205fffdbfda1c2ce9c36aee7ef04)`(ERHAPI_RestrictionType && NewValue)` <a id="structFRHAPI__Restriction_1a2e0a205fffdbfda1c2ce9c36aee7ef04"></a>

Sets the value of Type using move semantics.

#### `public inline ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a6e7a8311942d1852cb2ebdb2e69c2837)`()` <a id="structFRHAPI__Restriction_1a6e7a8311942d1852cb2ebdb2e69c2837"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1afb6347d7b4097728d1c3eff0adb348d6)`() const` <a id="structFRHAPI__Restriction_1afb6347d7b4097728d1c3eff0adb348d6"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__Restriction_1a5cf31a5bec5fe7039936f378efdf5ec0)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` <a id="structFRHAPI__Restriction_1a5cf31a5bec5fe7039936f378efdf5ec0"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReason`](#structFRHAPI__Restriction_1aa074595a9ed3d659d65c57b387faff40)`(ERHAPI_RestrictionReasonCode & OutValue) const` <a id="structFRHAPI__Restriction_1aa074595a9ed3d659d65c57b387faff40"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a382a9d92915b5fde944ed9cad1db13c6)`()` <a id="structFRHAPI__Restriction_1a382a9d92915b5fde944ed9cad1db13c6"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1aaa0593407274af1f1f7faafc9e45532e)`() const` <a id="structFRHAPI__Restriction_1aaa0593407274af1f1f7faafc9e45532e"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReason`](#structFRHAPI__Restriction_1aff66cfec7a51cc9356382c657a764379)`(const ERHAPI_RestrictionReasonCode & NewValue)` <a id="structFRHAPI__Restriction_1aff66cfec7a51cc9356382c657a764379"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline void `[`SetReason`](#structFRHAPI__Restriction_1aef686486305517d940d5eea912d08131)`(ERHAPI_RestrictionReasonCode && NewValue)` <a id="structFRHAPI__Restriction_1aef686486305517d940d5eea912d08131"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c)`()` <a id="structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline bool `[`IsReasonSet`](#structFRHAPI__Restriction_1a9146cac6536c766279fc4a9a7af831a9)`() const` <a id="structFRHAPI__Restriction_1a9146cac6536c766279fc4a9a7af831a9"></a>

Checks whether Reason_Optional has been set.

#### `public inline FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1a9de96ed60891e7a52aff0cb19582fe96)`()` <a id="structFRHAPI__Restriction_1a9de96ed60891e7a52aff0cb19582fe96"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1a41500509f91eaaa0659b1d40c038eb0b)`() const` <a id="structFRHAPI__Restriction_1a41500509f91eaaa0659b1d40c038eb0b"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1aadf3d0a157498122a8794f504bbcf770)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__Restriction_1aadf3d0a157498122a8794f504bbcf770"></a>

Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpiration`](#structFRHAPI__Restriction_1a0fc25026a69be9341c05a89894121eec)`(FDateTime & OutValue) const` <a id="structFRHAPI__Restriction_1a0fc25026a69be9341c05a89894121eec"></a>

Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1a866067dfa68137f91940de9ab1499d40)`()` <a id="structFRHAPI__Restriction_1a866067dfa68137f91940de9ab1499d40"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1a09ebfb37388cad70e5d94da468bf3c08)`() const` <a id="structFRHAPI__Restriction_1a09ebfb37388cad70e5d94da468bf3c08"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpiration`](#structFRHAPI__Restriction_1a8d502f1b2b2760e6a9bff0dc99a41f9d)`(const FDateTime & NewValue)` <a id="structFRHAPI__Restriction_1a8d502f1b2b2760e6a9bff0dc99a41f9d"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.

#### `public inline void `[`SetExpiration`](#structFRHAPI__Restriction_1aaaf7fae17caf907eeb52bc054b467f3c)`(FDateTime && NewValue)` <a id="structFRHAPI__Restriction_1aaaf7fae17caf907eeb52bc054b467f3c"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiration`](#structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3)`()` <a id="structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3"></a>

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

#### `public inline bool `[`IsExpirationSet`](#structFRHAPI__Restriction_1ab73ea34e33da42da7ae56ade3c1b01be)`() const` <a id="structFRHAPI__Restriction_1ab73ea34e33da42da7ae56ade3c1b01be"></a>

Checks whether Expiration_Optional has been set.

