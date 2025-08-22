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
`public FDateTime `[`Expiration_Optional`](#structFRHAPI__RestrictionCreate_1ad29c07e4af7fbcb6a4abbeacb8b3c46f) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expiration_IsSet`](#structFRHAPI__RestrictionCreate_1a37ada59cfad3ecce8a0c3a5574caa28b) | true if Expiration_Optional has been set to a value
`public ERHAPI_RestrictionIssuerType `[`IssuerType`](#structFRHAPI__RestrictionCreate_1abe11d5d16d3b2a151e8ad5255586958c) | Type of the Issuer.
`public FString `[`Issuer`](#structFRHAPI__RestrictionCreate_1aefdcfacbf07f36db7af539b99b74ffd1) | The creator of the restriction.
`public FString `[`ReasonDetail_Optional`](#structFRHAPI__RestrictionCreate_1ab584f517df6d46becf6a506b0328b754) | Internal-only reason describing the restriction.
`public bool `[`ReasonDetail_IsSet`](#structFRHAPI__RestrictionCreate_1aa3c0b7e557877efea4bd553473b6878d) | true if ReasonDetail_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RestrictionCreate_1a560ac591b3992acfd40be3711cbe7ba0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RestrictionCreate_1ad36ca37a3a2ce88b52f5eb288597ddba)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a1105dec48624c1bbb4ddd7f564757f38)`()` | Gets the value of Type.
`public inline FORCEINLINE const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1aced5fdf98ed23dd640d791936fe923c5)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__RestrictionCreate_1adef52342a8804fc7e28cdd59e83e5add)`(const ERHAPI_RestrictionType & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__RestrictionCreate_1a0957538c3fb29bc52473381039427b7d)`(ERHAPI_RestrictionType && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a3b6482878ba8bf75c0a33876c467398c)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a0e4a6b709ee64f4e5c9ca5b575380910)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a9f8ec7b2445f82b0198bf8b66e5ce508)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__RestrictionCreate_1af272f27809fc3aeac78806fb53f0f91f)`(ERHAPI_RestrictionReasonCode & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1a880b64e79f7782413c6a777dd83b5a08)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1af2dab7ef718efc07f3494df437205d8c)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__RestrictionCreate_1a5609543ee2af5b92266831f25163100b)`(const ERHAPI_RestrictionReasonCode & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__RestrictionCreate_1a493667cb6b95776b6ab57657fbbf32bf)`(ERHAPI_RestrictionReasonCode && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1ad2dbe884ebf9d9efc8339296d6dbc5a0)`()` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a3b7acbf49c62db0edd86b4c5578b2355)`() const` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1afefa1614a7d10e453676bc704966df9a)`(const FDateTime & DefaultValue) const` | Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a78fe4b8e959e9afefff096a8608025f6)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a1f8a88dd6f972107dd3da15714d86efb)`()` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a80338d476a5669b23ccc2ca61c2d0d2a)`() const` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1a1be84b41b91f55c595f428a6b3497b79)`(const FDateTime & NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.
`public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1ac04f9a808611990d9e02a6cefd442031)`(FDateTime && NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.
`public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177)`()` | Clears the value of Expiration_Optional and sets Expiration_IsSet to false.
`public inline FORCEINLINE ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1a6512260f63fc13be03ba15ce38e2d256)`()` | Gets the value of IssuerType.
`public inline FORCEINLINE const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1a41fc64f2554ece7c8b4439731ecb120e)`() const` | Gets the value of IssuerType.
`public inline FORCEINLINE void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1adad32789b69e29357346e32315d7a087)`(const ERHAPI_RestrictionIssuerType & NewValue)` | Sets the value of IssuerType.
`public inline FORCEINLINE void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a0269c00137b4e13369cb3b68bc3e4110)`(ERHAPI_RestrictionIssuerType && NewValue)` | Sets the value of IssuerType using move semantics.
`public inline FORCEINLINE FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a60de9018cff26033f27a56e15794c320)`()` | Gets the value of Issuer.
`public inline FORCEINLINE const FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a1a8a2c7f1d2adbcca87fe1218e1178c5)`() const` | Gets the value of Issuer.
`public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1ac751598b069a9273b2b4988325e95a90)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1acd349b8b680198ef676e283626e239de)`(FString && NewValue)` | Sets the value of Issuer using move semantics.
`public inline FORCEINLINE FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1a21eeb456dea884cbb9db5f1b6b697d54)`()` | Gets the value of ReasonDetail_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1adcc64382d3e58da11e47aa7f68af87b6)`() const` | Gets the value of ReasonDetail_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1aa16f25a752645ed498f0ead136da7fc8)`(const FString & DefaultValue) const` | Gets the value of ReasonDetail_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1aef0f556aaa7c1a934c13e7680ecfeeb5)`(FString & OutValue) const` | Fills OutValue with the value of ReasonDetail_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionCreate_1ad9ed646db95ddfa5aefe02424531cd20)`()` | Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionCreate_1aa427ebc2b5152e1aa40c44717f676f0e)`() const` | Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReasonDetail`](#structFRHAPI__RestrictionCreate_1a89744a693428ecb8751a233cd975ba95)`(const FString & NewValue)` | Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true.
`public inline FORCEINLINE void `[`SetReasonDetail`](#structFRHAPI__RestrictionCreate_1a12c524814102141edb45bf62baae8a3f)`(FString && NewValue)` | Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true using move semantics.
`public inline void `[`ClearReasonDetail`](#structFRHAPI__RestrictionCreate_1aea59ca09f4c9f3f0f3ee7b77af25c6ce)`()` | Clears the value of ReasonDetail_Optional and sets ReasonDetail_IsSet to false.

### Members

#### `public ERHAPI_RestrictionType `[`Type`](#structFRHAPI__RestrictionCreate_1a110e81d8902b59337e66e7e616e6a3fe) <a id="structFRHAPI__RestrictionCreate_1a110e81d8902b59337e66e7e616e6a3fe"></a>

Type of restriction.

#### `public ERHAPI_RestrictionReasonCode `[`Reason_Optional`](#structFRHAPI__RestrictionCreate_1aa4e51ff10d65465f44e6aec04a2bb676) <a id="structFRHAPI__RestrictionCreate_1aa4e51ff10d65465f44e6aec04a2bb676"></a>

Reason the restriction was applied.

#### `public bool `[`Reason_IsSet`](#structFRHAPI__RestrictionCreate_1a46c4e9b710bf676b36d111bd19468ce4) <a id="structFRHAPI__RestrictionCreate_1a46c4e9b710bf676b36d111bd19468ce4"></a>

true if Reason_Optional has been set to a value

#### `public FDateTime `[`Expiration_Optional`](#structFRHAPI__RestrictionCreate_1ad29c07e4af7fbcb6a4abbeacb8b3c46f) <a id="structFRHAPI__RestrictionCreate_1ad29c07e4af7fbcb6a4abbeacb8b3c46f"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expiration_IsSet`](#structFRHAPI__RestrictionCreate_1a37ada59cfad3ecce8a0c3a5574caa28b) <a id="structFRHAPI__RestrictionCreate_1a37ada59cfad3ecce8a0c3a5574caa28b"></a>

true if Expiration_Optional has been set to a value

#### `public ERHAPI_RestrictionIssuerType `[`IssuerType`](#structFRHAPI__RestrictionCreate_1abe11d5d16d3b2a151e8ad5255586958c) <a id="structFRHAPI__RestrictionCreate_1abe11d5d16d3b2a151e8ad5255586958c"></a>

Type of the Issuer.

#### `public FString `[`Issuer`](#structFRHAPI__RestrictionCreate_1aefdcfacbf07f36db7af539b99b74ffd1) <a id="structFRHAPI__RestrictionCreate_1aefdcfacbf07f36db7af539b99b74ffd1"></a>

The creator of the restriction.

#### `public FString `[`ReasonDetail_Optional`](#structFRHAPI__RestrictionCreate_1ab584f517df6d46becf6a506b0328b754) <a id="structFRHAPI__RestrictionCreate_1ab584f517df6d46becf6a506b0328b754"></a>

Internal-only reason describing the restriction.

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

#### `public inline FORCEINLINE ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a1105dec48624c1bbb4ddd7f564757f38)`()` <a id="structFRHAPI__RestrictionCreate_1a1105dec48624c1bbb4ddd7f564757f38"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1aced5fdf98ed23dd640d791936fe923c5)`() const` <a id="structFRHAPI__RestrictionCreate_1aced5fdf98ed23dd640d791936fe923c5"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__RestrictionCreate_1adef52342a8804fc7e28cdd59e83e5add)`(const ERHAPI_RestrictionType & NewValue)` <a id="structFRHAPI__RestrictionCreate_1adef52342a8804fc7e28cdd59e83e5add"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__RestrictionCreate_1a0957538c3fb29bc52473381039427b7d)`(ERHAPI_RestrictionType && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a0957538c3fb29bc52473381039427b7d"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a3b6482878ba8bf75c0a33876c467398c)`()` <a id="structFRHAPI__RestrictionCreate_1a3b6482878ba8bf75c0a33876c467398c"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a0e4a6b709ee64f4e5c9ca5b575380910)`() const` <a id="structFRHAPI__RestrictionCreate_1a0e4a6b709ee64f4e5c9ca5b575380910"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a9f8ec7b2445f82b0198bf8b66e5ce508)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` <a id="structFRHAPI__RestrictionCreate_1a9f8ec7b2445f82b0198bf8b66e5ce508"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__RestrictionCreate_1af272f27809fc3aeac78806fb53f0f91f)`(ERHAPI_RestrictionReasonCode & OutValue) const` <a id="structFRHAPI__RestrictionCreate_1af272f27809fc3aeac78806fb53f0f91f"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1a880b64e79f7782413c6a777dd83b5a08)`()` <a id="structFRHAPI__RestrictionCreate_1a880b64e79f7782413c6a777dd83b5a08"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1af2dab7ef718efc07f3494df437205d8c)`() const` <a id="structFRHAPI__RestrictionCreate_1af2dab7ef718efc07f3494df437205d8c"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__RestrictionCreate_1a5609543ee2af5b92266831f25163100b)`(const ERHAPI_RestrictionReasonCode & NewValue)` <a id="structFRHAPI__RestrictionCreate_1a5609543ee2af5b92266831f25163100b"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__RestrictionCreate_1a493667cb6b95776b6ab57657fbbf32bf)`(ERHAPI_RestrictionReasonCode && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a493667cb6b95776b6ab57657fbbf32bf"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1)`()` <a id="structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1ad2dbe884ebf9d9efc8339296d6dbc5a0)`()` <a id="structFRHAPI__RestrictionCreate_1ad2dbe884ebf9d9efc8339296d6dbc5a0"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a3b7acbf49c62db0edd86b4c5578b2355)`() const` <a id="structFRHAPI__RestrictionCreate_1a3b7acbf49c62db0edd86b4c5578b2355"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1afefa1614a7d10e453676bc704966df9a)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__RestrictionCreate_1afefa1614a7d10e453676bc704966df9a"></a>

Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a78fe4b8e959e9afefff096a8608025f6)`(FDateTime & OutValue) const` <a id="structFRHAPI__RestrictionCreate_1a78fe4b8e959e9afefff096a8608025f6"></a>

Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a1f8a88dd6f972107dd3da15714d86efb)`()` <a id="structFRHAPI__RestrictionCreate_1a1f8a88dd6f972107dd3da15714d86efb"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a80338d476a5669b23ccc2ca61c2d0d2a)`() const` <a id="structFRHAPI__RestrictionCreate_1a80338d476a5669b23ccc2ca61c2d0d2a"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1a1be84b41b91f55c595f428a6b3497b79)`(const FDateTime & NewValue)` <a id="structFRHAPI__RestrictionCreate_1a1be84b41b91f55c595f428a6b3497b79"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1ac04f9a808611990d9e02a6cefd442031)`(FDateTime && NewValue)` <a id="structFRHAPI__RestrictionCreate_1ac04f9a808611990d9e02a6cefd442031"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177)`()` <a id="structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177"></a>

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1a6512260f63fc13be03ba15ce38e2d256)`()` <a id="structFRHAPI__RestrictionCreate_1a6512260f63fc13be03ba15ce38e2d256"></a>

Gets the value of IssuerType.

#### `public inline FORCEINLINE const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1a41fc64f2554ece7c8b4439731ecb120e)`() const` <a id="structFRHAPI__RestrictionCreate_1a41fc64f2554ece7c8b4439731ecb120e"></a>

Gets the value of IssuerType.

#### `public inline FORCEINLINE void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1adad32789b69e29357346e32315d7a087)`(const ERHAPI_RestrictionIssuerType & NewValue)` <a id="structFRHAPI__RestrictionCreate_1adad32789b69e29357346e32315d7a087"></a>

Sets the value of IssuerType.

#### `public inline FORCEINLINE void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a0269c00137b4e13369cb3b68bc3e4110)`(ERHAPI_RestrictionIssuerType && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a0269c00137b4e13369cb3b68bc3e4110"></a>

Sets the value of IssuerType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a60de9018cff26033f27a56e15794c320)`()` <a id="structFRHAPI__RestrictionCreate_1a60de9018cff26033f27a56e15794c320"></a>

Gets the value of Issuer.

#### `public inline FORCEINLINE const FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a1a8a2c7f1d2adbcca87fe1218e1178c5)`() const` <a id="structFRHAPI__RestrictionCreate_1a1a8a2c7f1d2adbcca87fe1218e1178c5"></a>

Gets the value of Issuer.

#### `public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1ac751598b069a9273b2b4988325e95a90)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionCreate_1ac751598b069a9273b2b4988325e95a90"></a>

Sets the value of Issuer.

#### `public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1acd349b8b680198ef676e283626e239de)`(FString && NewValue)` <a id="structFRHAPI__RestrictionCreate_1acd349b8b680198ef676e283626e239de"></a>

Sets the value of Issuer using move semantics.

#### `public inline FORCEINLINE FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1a21eeb456dea884cbb9db5f1b6b697d54)`()` <a id="structFRHAPI__RestrictionCreate_1a21eeb456dea884cbb9db5f1b6b697d54"></a>

Gets the value of ReasonDetail_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1adcc64382d3e58da11e47aa7f68af87b6)`() const` <a id="structFRHAPI__RestrictionCreate_1adcc64382d3e58da11e47aa7f68af87b6"></a>

Gets the value of ReasonDetail_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1aa16f25a752645ed498f0ead136da7fc8)`(const FString & DefaultValue) const` <a id="structFRHAPI__RestrictionCreate_1aa16f25a752645ed498f0ead136da7fc8"></a>

Gets the value of ReasonDetail_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReasonDetail`](#structFRHAPI__RestrictionCreate_1aef0f556aaa7c1a934c13e7680ecfeeb5)`(FString & OutValue) const` <a id="structFRHAPI__RestrictionCreate_1aef0f556aaa7c1a934c13e7680ecfeeb5"></a>

Fills OutValue with the value of ReasonDetail_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionCreate_1ad9ed646db95ddfa5aefe02424531cd20)`()` <a id="structFRHAPI__RestrictionCreate_1ad9ed646db95ddfa5aefe02424531cd20"></a>

Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionCreate_1aa427ebc2b5152e1aa40c44717f676f0e)`() const` <a id="structFRHAPI__RestrictionCreate_1aa427ebc2b5152e1aa40c44717f676f0e"></a>

Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReasonDetail`](#structFRHAPI__RestrictionCreate_1a89744a693428ecb8751a233cd975ba95)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionCreate_1a89744a693428ecb8751a233cd975ba95"></a>

Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReasonDetail`](#structFRHAPI__RestrictionCreate_1a12c524814102141edb45bf62baae8a3f)`(FString && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a12c524814102141edb45bf62baae8a3f"></a>

Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true using move semantics.

#### `public inline void `[`ClearReasonDetail`](#structFRHAPI__RestrictionCreate_1aea59ca09f4c9f3f0f3ee7b77af25c6ce)`()` <a id="structFRHAPI__RestrictionCreate_1aea59ca09f4c9f3f0f3ee7b77af25c6ce"></a>

Clears the value of ReasonDetail_Optional and sets ReasonDetail_IsSet to false.

