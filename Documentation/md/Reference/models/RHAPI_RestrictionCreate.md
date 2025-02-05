---
title: RHAPI_RestrictionCreate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RestrictionCreate`](#structFRHAPI__RestrictionCreate) | Restriction applied to a player.

## struct `FRHAPI_RestrictionCreate` <a id="structFRHAPI__RestrictionCreate"></a>

```
struct FRHAPI_RestrictionCreate
  : public FRHAPI_Model
```

Restriction applied to a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_RestrictionType `[`Type`](#structFRHAPI__RestrictionCreate_1a110e81d8902b59337e66e7e616e6a3fe) | Type of restriction.
`public ERHAPI_RestrictionReasonCode `[`Reason_Optional`](#structFRHAPI__RestrictionCreate_1aa4e51ff10d65465f44e6aec04a2bb676) | Reason the restriction was applied.
`public bool `[`Reason_IsSet`](#structFRHAPI__RestrictionCreate_1a46c4e9b710bf676b36d111bd19468ce4) | true if Reason_Optional has been set to a value
`public FDateTime `[`Expiration_Optional`](#structFRHAPI__RestrictionCreate_1ad29c07e4af7fbcb6a4abbeacb8b3c46f) | Date the restriction expires. Null means the restriction is permanent.
`public bool `[`Expiration_IsSet`](#structFRHAPI__RestrictionCreate_1a37ada59cfad3ecce8a0c3a5574caa28b) | true if Expiration_Optional has been set to a value
`public ERHAPI_RestrictionIssuerType `[`IssuerType`](#structFRHAPI__RestrictionCreate_1abe11d5d16d3b2a151e8ad5255586958c) | Type of the Issuer.
`public FString `[`Issuer`](#structFRHAPI__RestrictionCreate_1aefdcfacbf07f36db7af539b99b74ffd1) | The creator of the restriction.
`public FString `[`ReasonDetail_Optional`](#structFRHAPI__RestrictionCreate_1ab584f517df6d46becf6a506b0328b754) | Additional reason describing the restriction.
`public bool `[`ReasonDetail_IsSet`](#structFRHAPI__RestrictionCreate_1aa3c0b7e557877efea4bd553473b6878d) | true if ReasonDetail_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RestrictionCreate_1a560ac591b3992acfd40be3711cbe7ba0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RestrictionCreate_1ad36ca37a3a2ce88b52f5eb288597ddba)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a10651fe9c291a5deadab02af13b246b9)`()` | Gets the value of Type.
`public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a6e032d74c8e2b36db366585252e3928c)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__RestrictionCreate_1abaff0abf29c3d320378a4b42540124b0)`(const ERHAPI_RestrictionType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__RestrictionCreate_1af29314e595ed3e4e08c59a8ada92b7bd)`(ERHAPI_RestrictionType && NewValue)` | Sets the value of Type using move semantics.
`public inline ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1aeb362dc90c2f70721b9d1da527b34a10)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1ab2d903af8936bedab37eb63fe6f1894b)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1ab193bc29315391a21951eb2e4dbe287f)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReason`](#structFRHAPI__RestrictionCreate_1afa9940fd48758f7ac57b7b0c93b0df33)`(ERHAPI_RestrictionReasonCode & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1ae2ed087e689b10a50ff2c629a0194a23)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1aabfef72c96d05bc234bc69b2a7c35b18)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReason`](#structFRHAPI__RestrictionCreate_1af2eabd3f2265fedfa7b6c10b7dfbda05)`(const ERHAPI_RestrictionReasonCode & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline void `[`SetReason`](#structFRHAPI__RestrictionCreate_1a3b37025050ffd417c5a9fedd5054fab5)`(ERHAPI_RestrictionReasonCode && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline bool `[`IsReasonSet`](#structFRHAPI__RestrictionCreate_1ac7a2188062b1b8655599c8c7344c15d3)`() const` | Checks whether Reason_Optional has been set.
`public inline FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a0c748c212a1dea6e5f01363b8c150692)`()` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a59502fa8b5380791af2acce72928b0ed)`() const` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a403cb46d970fa8defba81cdc496c9e3b)`(const FDateTime & DefaultValue) const` | Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1ae49b010fdd06d11dbc0c0b0e5da2af91)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a9a08af65661ec7fc530bea3188acd214)`()` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1aaff9faadd8dbba0cfc557786030c8d11)`() const` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1aeb775b21e606c88fee82bdb6ef2869c8)`(const FDateTime & NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.
`public inline void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1adcb5ffd2666512a6c5408a6c9f3e505b)`(FDateTime && NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.
`public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177)`()` | Clears the value of Expiration_Optional and sets Expiration_IsSet to false.
`public inline bool `[`IsExpirationSet`](#structFRHAPI__RestrictionCreate_1a9595334b7e0f7ba564456c0339321b4e)`() const` | Checks whether Expiration_Optional has been set.
`public inline ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1a0bac25bb23fd54027c82a3a4c2f5105f)`()` | Gets the value of IssuerType.
`public inline const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1a4900771fceb7896917786f7fb4beb7eb)`() const` | Gets the value of IssuerType.
`public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a9b49614243798bff7083fcd72546f9ef)`(const ERHAPI_RestrictionIssuerType & NewValue)` | Sets the value of IssuerType.
`public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a7668c1084da13276105a1e0c467acaff)`(ERHAPI_RestrictionIssuerType && NewValue)` | Sets the value of IssuerType using move semantics.
`public inline FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a09bf6c426f4e395ffa21da880dd00e53)`()` | Gets the value of Issuer.
`public inline const FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a4e9afff3b24e2f7d417af1738df22b30)`() const` | Gets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1adaf0d17a24e07a07b4ec533f1eebcdb4)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1a6e166369710df8de3900aa53d6feda3c)`(FString && NewValue)` | Sets the value of Issuer using move semantics.
`public inline FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1ab4237c3f1db4d621d347f3cfae5b4037)`()` | Gets the value of ReasonDetail_Optional, regardless of it having been set.
`public inline const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1a6302c7beb2c7c536f8bdb4eaf5761ddc)`() const` | Gets the value of ReasonDetail_Optional, regardless of it having been set.
`public inline const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1a17ecc2d6ed480c592f4eeb5527b054e7)`(const FString & DefaultValue) const` | Gets the value of ReasonDetail_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1a21e8bcfd0efa0c79f51d4404b5dc23aa)`(FString & OutValue) const` | Fills OutValue with the value of ReasonDetail_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionCreate_1afe2a0f298264bc35c9c0a19ae30a076b)`()` | Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionCreate_1a5bb8c13f85dc8b3fe76b15b6e524af83)`() const` | Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReasonDetail`](#structFRHAPI__RestrictionCreate_1a089eb493b706fa75153bcf1ef0b32caa)`(const FString & NewValue)` | Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true.
`public inline void `[`SetReasonDetail`](#structFRHAPI__RestrictionCreate_1a735dfef88ae6709deb75e9019c1ecb4d)`(FString && NewValue)` | Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true using move semantics.
`public inline void `[`ClearReasonDetail`](#structFRHAPI__RestrictionCreate_1aea59ca09f4c9f3f0f3ee7b77af25c6ce)`()` | Clears the value of ReasonDetail_Optional and sets ReasonDetail_IsSet to false.
`public inline bool `[`IsReasonDetailSet`](#structFRHAPI__RestrictionCreate_1ad807474e4842e1a1982a4b66d6e1baa8)`() const` | Checks whether ReasonDetail_Optional has been set.

### Members

#### `public ERHAPI_RestrictionType `[`Type`](#structFRHAPI__RestrictionCreate_1a110e81d8902b59337e66e7e616e6a3fe) <a id="structFRHAPI__RestrictionCreate_1a110e81d8902b59337e66e7e616e6a3fe"></a>

Type of restriction.

#### `public ERHAPI_RestrictionReasonCode `[`Reason_Optional`](#structFRHAPI__RestrictionCreate_1aa4e51ff10d65465f44e6aec04a2bb676) <a id="structFRHAPI__RestrictionCreate_1aa4e51ff10d65465f44e6aec04a2bb676"></a>

Reason the restriction was applied.

#### `public bool `[`Reason_IsSet`](#structFRHAPI__RestrictionCreate_1a46c4e9b710bf676b36d111bd19468ce4) <a id="structFRHAPI__RestrictionCreate_1a46c4e9b710bf676b36d111bd19468ce4"></a>

true if Reason_Optional has been set to a value

#### `public FDateTime `[`Expiration_Optional`](#structFRHAPI__RestrictionCreate_1ad29c07e4af7fbcb6a4abbeacb8b3c46f) <a id="structFRHAPI__RestrictionCreate_1ad29c07e4af7fbcb6a4abbeacb8b3c46f"></a>

Date the restriction expires. Null means the restriction is permanent.

#### `public bool `[`Expiration_IsSet`](#structFRHAPI__RestrictionCreate_1a37ada59cfad3ecce8a0c3a5574caa28b) <a id="structFRHAPI__RestrictionCreate_1a37ada59cfad3ecce8a0c3a5574caa28b"></a>

true if Expiration_Optional has been set to a value

#### `public ERHAPI_RestrictionIssuerType `[`IssuerType`](#structFRHAPI__RestrictionCreate_1abe11d5d16d3b2a151e8ad5255586958c) <a id="structFRHAPI__RestrictionCreate_1abe11d5d16d3b2a151e8ad5255586958c"></a>

Type of the Issuer.

#### `public FString `[`Issuer`](#structFRHAPI__RestrictionCreate_1aefdcfacbf07f36db7af539b99b74ffd1) <a id="structFRHAPI__RestrictionCreate_1aefdcfacbf07f36db7af539b99b74ffd1"></a>

The creator of the restriction.

#### `public FString `[`ReasonDetail_Optional`](#structFRHAPI__RestrictionCreate_1ab584f517df6d46becf6a506b0328b754) <a id="structFRHAPI__RestrictionCreate_1ab584f517df6d46becf6a506b0328b754"></a>

Additional reason describing the restriction.

#### `public bool `[`ReasonDetail_IsSet`](#structFRHAPI__RestrictionCreate_1aa3c0b7e557877efea4bd553473b6878d) <a id="structFRHAPI__RestrictionCreate_1aa3c0b7e557877efea4bd553473b6878d"></a>

true if ReasonDetail_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__RestrictionCreate_1a560ac591b3992acfd40be3711cbe7ba0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RestrictionCreate_1a560ac591b3992acfd40be3711cbe7ba0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RestrictionCreate_1ad36ca37a3a2ce88b52f5eb288597ddba)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RestrictionCreate_1ad36ca37a3a2ce88b52f5eb288597ddba"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a10651fe9c291a5deadab02af13b246b9)`()` <a id="structFRHAPI__RestrictionCreate_1a10651fe9c291a5deadab02af13b246b9"></a>

Gets the value of Type.

#### `public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a6e032d74c8e2b36db366585252e3928c)`() const` <a id="structFRHAPI__RestrictionCreate_1a6e032d74c8e2b36db366585252e3928c"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__RestrictionCreate_1abaff0abf29c3d320378a4b42540124b0)`(const ERHAPI_RestrictionType & NewValue)` <a id="structFRHAPI__RestrictionCreate_1abaff0abf29c3d320378a4b42540124b0"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__RestrictionCreate_1af29314e595ed3e4e08c59a8ada92b7bd)`(ERHAPI_RestrictionType && NewValue)` <a id="structFRHAPI__RestrictionCreate_1af29314e595ed3e4e08c59a8ada92b7bd"></a>

Sets the value of Type using move semantics.

#### `public inline ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1aeb362dc90c2f70721b9d1da527b34a10)`()` <a id="structFRHAPI__RestrictionCreate_1aeb362dc90c2f70721b9d1da527b34a10"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1ab2d903af8936bedab37eb63fe6f1894b)`() const` <a id="structFRHAPI__RestrictionCreate_1ab2d903af8936bedab37eb63fe6f1894b"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1ab193bc29315391a21951eb2e4dbe287f)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` <a id="structFRHAPI__RestrictionCreate_1ab193bc29315391a21951eb2e4dbe287f"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReason`](#structFRHAPI__RestrictionCreate_1afa9940fd48758f7ac57b7b0c93b0df33)`(ERHAPI_RestrictionReasonCode & OutValue) const` <a id="structFRHAPI__RestrictionCreate_1afa9940fd48758f7ac57b7b0c93b0df33"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1ae2ed087e689b10a50ff2c629a0194a23)`()` <a id="structFRHAPI__RestrictionCreate_1ae2ed087e689b10a50ff2c629a0194a23"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1aabfef72c96d05bc234bc69b2a7c35b18)`() const` <a id="structFRHAPI__RestrictionCreate_1aabfef72c96d05bc234bc69b2a7c35b18"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReason`](#structFRHAPI__RestrictionCreate_1af2eabd3f2265fedfa7b6c10b7dfbda05)`(const ERHAPI_RestrictionReasonCode & NewValue)` <a id="structFRHAPI__RestrictionCreate_1af2eabd3f2265fedfa7b6c10b7dfbda05"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline void `[`SetReason`](#structFRHAPI__RestrictionCreate_1a3b37025050ffd417c5a9fedd5054fab5)`(ERHAPI_RestrictionReasonCode && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a3b37025050ffd417c5a9fedd5054fab5"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1)`()` <a id="structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline bool `[`IsReasonSet`](#structFRHAPI__RestrictionCreate_1ac7a2188062b1b8655599c8c7344c15d3)`() const` <a id="structFRHAPI__RestrictionCreate_1ac7a2188062b1b8655599c8c7344c15d3"></a>

Checks whether Reason_Optional has been set.

#### `public inline FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a0c748c212a1dea6e5f01363b8c150692)`()` <a id="structFRHAPI__RestrictionCreate_1a0c748c212a1dea6e5f01363b8c150692"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a59502fa8b5380791af2acce72928b0ed)`() const` <a id="structFRHAPI__RestrictionCreate_1a59502fa8b5380791af2acce72928b0ed"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a403cb46d970fa8defba81cdc496c9e3b)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__RestrictionCreate_1a403cb46d970fa8defba81cdc496c9e3b"></a>

Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1ae49b010fdd06d11dbc0c0b0e5da2af91)`(FDateTime & OutValue) const` <a id="structFRHAPI__RestrictionCreate_1ae49b010fdd06d11dbc0c0b0e5da2af91"></a>

Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a9a08af65661ec7fc530bea3188acd214)`()` <a id="structFRHAPI__RestrictionCreate_1a9a08af65661ec7fc530bea3188acd214"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1aaff9faadd8dbba0cfc557786030c8d11)`() const` <a id="structFRHAPI__RestrictionCreate_1aaff9faadd8dbba0cfc557786030c8d11"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1aeb775b21e606c88fee82bdb6ef2869c8)`(const FDateTime & NewValue)` <a id="structFRHAPI__RestrictionCreate_1aeb775b21e606c88fee82bdb6ef2869c8"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.

#### `public inline void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1adcb5ffd2666512a6c5408a6c9f3e505b)`(FDateTime && NewValue)` <a id="structFRHAPI__RestrictionCreate_1adcb5ffd2666512a6c5408a6c9f3e505b"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177)`()` <a id="structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177"></a>

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

#### `public inline bool `[`IsExpirationSet`](#structFRHAPI__RestrictionCreate_1a9595334b7e0f7ba564456c0339321b4e)`() const` <a id="structFRHAPI__RestrictionCreate_1a9595334b7e0f7ba564456c0339321b4e"></a>

Checks whether Expiration_Optional has been set.

#### `public inline ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1a0bac25bb23fd54027c82a3a4c2f5105f)`()` <a id="structFRHAPI__RestrictionCreate_1a0bac25bb23fd54027c82a3a4c2f5105f"></a>

Gets the value of IssuerType.

#### `public inline const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1a4900771fceb7896917786f7fb4beb7eb)`() const` <a id="structFRHAPI__RestrictionCreate_1a4900771fceb7896917786f7fb4beb7eb"></a>

Gets the value of IssuerType.

#### `public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a9b49614243798bff7083fcd72546f9ef)`(const ERHAPI_RestrictionIssuerType & NewValue)` <a id="structFRHAPI__RestrictionCreate_1a9b49614243798bff7083fcd72546f9ef"></a>

Sets the value of IssuerType.

#### `public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a7668c1084da13276105a1e0c467acaff)`(ERHAPI_RestrictionIssuerType && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a7668c1084da13276105a1e0c467acaff"></a>

Sets the value of IssuerType using move semantics.

#### `public inline FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a09bf6c426f4e395ffa21da880dd00e53)`()` <a id="structFRHAPI__RestrictionCreate_1a09bf6c426f4e395ffa21da880dd00e53"></a>

Gets the value of Issuer.

#### `public inline const FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a4e9afff3b24e2f7d417af1738df22b30)`() const` <a id="structFRHAPI__RestrictionCreate_1a4e9afff3b24e2f7d417af1738df22b30"></a>

Gets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1adaf0d17a24e07a07b4ec533f1eebcdb4)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionCreate_1adaf0d17a24e07a07b4ec533f1eebcdb4"></a>

Sets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1a6e166369710df8de3900aa53d6feda3c)`(FString && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a6e166369710df8de3900aa53d6feda3c"></a>

Sets the value of Issuer using move semantics.

#### `public inline FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1ab4237c3f1db4d621d347f3cfae5b4037)`()` <a id="structFRHAPI__RestrictionCreate_1ab4237c3f1db4d621d347f3cfae5b4037"></a>

Gets the value of ReasonDetail_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1a6302c7beb2c7c536f8bdb4eaf5761ddc)`() const` <a id="structFRHAPI__RestrictionCreate_1a6302c7beb2c7c536f8bdb4eaf5761ddc"></a>

Gets the value of ReasonDetail_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1a17ecc2d6ed480c592f4eeb5527b054e7)`(const FString & DefaultValue) const` <a id="structFRHAPI__RestrictionCreate_1a17ecc2d6ed480c592f4eeb5527b054e7"></a>

Gets the value of ReasonDetail_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1a21e8bcfd0efa0c79f51d4404b5dc23aa)`(FString & OutValue) const` <a id="structFRHAPI__RestrictionCreate_1a21e8bcfd0efa0c79f51d4404b5dc23aa"></a>

Fills OutValue with the value of ReasonDetail_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionCreate_1afe2a0f298264bc35c9c0a19ae30a076b)`()` <a id="structFRHAPI__RestrictionCreate_1afe2a0f298264bc35c9c0a19ae30a076b"></a>

Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionCreate_1a5bb8c13f85dc8b3fe76b15b6e524af83)`() const` <a id="structFRHAPI__RestrictionCreate_1a5bb8c13f85dc8b3fe76b15b6e524af83"></a>

Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReasonDetail`](#structFRHAPI__RestrictionCreate_1a089eb493b706fa75153bcf1ef0b32caa)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionCreate_1a089eb493b706fa75153bcf1ef0b32caa"></a>

Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true.

#### `public inline void `[`SetReasonDetail`](#structFRHAPI__RestrictionCreate_1a735dfef88ae6709deb75e9019c1ecb4d)`(FString && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a735dfef88ae6709deb75e9019c1ecb4d"></a>

Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true using move semantics.

#### `public inline void `[`ClearReasonDetail`](#structFRHAPI__RestrictionCreate_1aea59ca09f4c9f3f0f3ee7b77af25c6ce)`()` <a id="structFRHAPI__RestrictionCreate_1aea59ca09f4c9f3f0f3ee7b77af25c6ce"></a>

Clears the value of ReasonDetail_Optional and sets ReasonDetail_IsSet to false.

#### `public inline bool `[`IsReasonDetailSet`](#structFRHAPI__RestrictionCreate_1ad807474e4842e1a1982a4b66d6e1baa8)`() const` <a id="structFRHAPI__RestrictionCreate_1ad807474e4842e1a1982a4b66d6e1baa8"></a>

Checks whether ReasonDetail_Optional has been set.

