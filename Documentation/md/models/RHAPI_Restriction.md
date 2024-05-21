# group `RHAPI_Restriction` <a id="group__RHAPI__Restriction"></a>

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
`public FString `[`Reason_Optional`](#structFRHAPI__Restriction_1acb07c004735610b31b0326e85867841f) | Reason the restriction was applied.
`public bool `[`Reason_IsSet`](#structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239) | true if Reason_Optional has been set to a value
`public FDateTime `[`Expiration_Optional`](#structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57) | Date the restriction expires. Null means the restriction is permanent.
`public bool `[`Expiration_IsSet`](#structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2) | true if Expiration_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Restriction_1a5a03667bdf37bfdf85209ed872024579)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Restriction_1ad9b9b26c7c642e5d5c0d08fb4625a43f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a3b9f455e0c867bfd7754103ecc9e7ba7)`()` | Gets the value of Type.
`public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a591e500a3661de66229c5f1ba7724435)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__Restriction_1aa8c1f024b4049bac6c1241a6cdaeddad)`(ERHAPI_RestrictionType NewValue)` | Sets the value of Type.
`public inline FString & `[`GetReason`](#structFRHAPI__Restriction_1a182cbbe5278382533d8c8ba1929a35bf)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const FString & `[`GetReason`](#structFRHAPI__Restriction_1a531a35039b7dec535cd8ad7c84d066bb)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const FString & `[`GetReason`](#structFRHAPI__Restriction_1afe82ab3fd779eb1d73b537f733ba6bc0)`(const FString & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReason`](#structFRHAPI__Restriction_1a560c7de16a3a9e8ae18c7f200d34104f)`(FString & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a580cc0f156b36849c2bdf786383a9b65)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a6b62ccb570a792b511846846be454f02)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReason`](#structFRHAPI__Restriction_1ac50ac97764b8e3d0c121c7f8b22024e7)`(FString NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline void `[`ClearReason`](#structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1a9de96ed60891e7a52aff0cb19582fe96)`()` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1a41500509f91eaaa0659b1d40c038eb0b)`() const` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__Restriction_1aadf3d0a157498122a8794f504bbcf770)`(const FDateTime & DefaultValue) const` | Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpiration`](#structFRHAPI__Restriction_1a0fc25026a69be9341c05a89894121eec)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1a866067dfa68137f91940de9ab1499d40)`()` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__Restriction_1a09ebfb37388cad70e5d94da468bf3c08)`() const` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpiration`](#structFRHAPI__Restriction_1a6ac12c65ddd67ce353226d6acf29e559)`(FDateTime NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.
`public inline void `[`ClearExpiration`](#structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3)`()` | Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

### Members

#### `public ERHAPI_RestrictionType `[`Type`](#structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1) <a id="structFRHAPI__Restriction_1a4563f4ef4361eacf1e83acde5aa9e9b1"></a>

Type of restriction.

#### `public FString `[`Reason_Optional`](#structFRHAPI__Restriction_1acb07c004735610b31b0326e85867841f) <a id="structFRHAPI__Restriction_1acb07c004735610b31b0326e85867841f"></a>

Reason the restriction was applied.

#### `public bool `[`Reason_IsSet`](#structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239) <a id="structFRHAPI__Restriction_1a33efc2fe715a3c3ee06ec148ab82a239"></a>

true if Reason_Optional has been set to a value

#### `public FDateTime `[`Expiration_Optional`](#structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57) <a id="structFRHAPI__Restriction_1aa9e2bfa5e8c955b12b209034e64c5e57"></a>

Date the restriction expires. Null means the restriction is permanent.

#### `public bool `[`Expiration_IsSet`](#structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2) <a id="structFRHAPI__Restriction_1ae0bb6d1bcce99870a53bd773b2740cf2"></a>

true if Expiration_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Restriction_1a5a03667bdf37bfdf85209ed872024579)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Restriction_1a5a03667bdf37bfdf85209ed872024579"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Restriction_1ad9b9b26c7c642e5d5c0d08fb4625a43f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Restriction_1ad9b9b26c7c642e5d5c0d08fb4625a43f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a3b9f455e0c867bfd7754103ecc9e7ba7)`()` <a id="structFRHAPI__Restriction_1a3b9f455e0c867bfd7754103ecc9e7ba7"></a>

Gets the value of Type.

#### `public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__Restriction_1a591e500a3661de66229c5f1ba7724435)`() const` <a id="structFRHAPI__Restriction_1a591e500a3661de66229c5f1ba7724435"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__Restriction_1aa8c1f024b4049bac6c1241a6cdaeddad)`(ERHAPI_RestrictionType NewValue)` <a id="structFRHAPI__Restriction_1aa8c1f024b4049bac6c1241a6cdaeddad"></a>

Sets the value of Type.

#### `public inline FString & `[`GetReason`](#structFRHAPI__Restriction_1a182cbbe5278382533d8c8ba1929a35bf)`()` <a id="structFRHAPI__Restriction_1a182cbbe5278382533d8c8ba1929a35bf"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReason`](#structFRHAPI__Restriction_1a531a35039b7dec535cd8ad7c84d066bb)`() const` <a id="structFRHAPI__Restriction_1a531a35039b7dec535cd8ad7c84d066bb"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReason`](#structFRHAPI__Restriction_1afe82ab3fd779eb1d73b537f733ba6bc0)`(const FString & DefaultValue) const` <a id="structFRHAPI__Restriction_1afe82ab3fd779eb1d73b537f733ba6bc0"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReason`](#structFRHAPI__Restriction_1a560c7de16a3a9e8ae18c7f200d34104f)`(FString & OutValue) const` <a id="structFRHAPI__Restriction_1a560c7de16a3a9e8ae18c7f200d34104f"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a580cc0f156b36849c2bdf786383a9b65)`()` <a id="structFRHAPI__Restriction_1a580cc0f156b36849c2bdf786383a9b65"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetReasonOrNull`](#structFRHAPI__Restriction_1a6b62ccb570a792b511846846be454f02)`() const` <a id="structFRHAPI__Restriction_1a6b62ccb570a792b511846846be454f02"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReason`](#structFRHAPI__Restriction_1ac50ac97764b8e3d0c121c7f8b22024e7)`(FString NewValue)` <a id="structFRHAPI__Restriction_1ac50ac97764b8e3d0c121c7f8b22024e7"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline void `[`ClearReason`](#structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c)`()` <a id="structFRHAPI__Restriction_1a7d50b5b72086bb552c7a73c2acd0dd2c"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

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

#### `public inline void `[`SetExpiration`](#structFRHAPI__Restriction_1a6ac12c65ddd67ce353226d6acf29e559)`(FDateTime NewValue)` <a id="structFRHAPI__Restriction_1a6ac12c65ddd67ce353226d6acf29e559"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.

#### `public inline void `[`ClearExpiration`](#structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3)`()` <a id="structFRHAPI__Restriction_1a0d5fdc4f552874f065336b803cef5eb3"></a>

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

