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
`public virtual bool `[`FromJson`](#structFRHAPI__RestrictionCreate_1a560ac591b3992acfd40be3711cbe7ba0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RestrictionCreate_1a818d91682460996ff3555e9c7e611b63)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a7c865b6e499b1d01bbdd3eff1e20c234)`()` | Gets the value of Type.
`public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a22c34e14054d2505f4fc5ab61f91dd8c)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__RestrictionCreate_1abaff0abf29c3d320378a4b42540124b0)`(const ERHAPI_RestrictionType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__RestrictionCreate_1af29314e595ed3e4e08c59a8ada92b7bd)`(ERHAPI_RestrictionType && NewValue)` | Sets the value of Type using move semantics.
`public inline ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1ad61fa2fab62b3f1c53d7a68f3f0621e9)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a06245da00e14977ef663f45e42a4e158)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a588193888d5c2bf7cb8bd38c4ef82361)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReason`](#structFRHAPI__RestrictionCreate_1afa9940fd48758f7ac57b7b0c93b0df33)`(ERHAPI_RestrictionReasonCode & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1a2b8cb050da0047f7acd4f585ccba1401)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1ae37cacfab9b7f796b8eee77c1a7d20ee)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReason`](#structFRHAPI__RestrictionCreate_1af2eabd3f2265fedfa7b6c10b7dfbda05)`(const ERHAPI_RestrictionReasonCode & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline void `[`SetReason`](#structFRHAPI__RestrictionCreate_1a3b37025050ffd417c5a9fedd5054fab5)`(ERHAPI_RestrictionReasonCode && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline bool `[`IsReasonSet`](#structFRHAPI__RestrictionCreate_1ac7a2188062b1b8655599c8c7344c15d3)`() const` | Checks whether Reason_Optional has been set.
`public inline FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1ad3ec845e144a84b2bdcd3f56764c96ef)`()` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a5172f0bb3f7bc2fae2a8848280baa7e7)`() const` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a32d06f5f5792379953c3297deb691c9f)`(const FDateTime & DefaultValue) const` | Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1ae49b010fdd06d11dbc0c0b0e5da2af91)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a474624831002b51f21857aadea81fbec)`()` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a23426d96b90cda256e726326962bac99)`() const` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1aeb775b21e606c88fee82bdb6ef2869c8)`(const FDateTime & NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.
`public inline void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1adcb5ffd2666512a6c5408a6c9f3e505b)`(FDateTime && NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.
`public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177)`()` | Clears the value of Expiration_Optional and sets Expiration_IsSet to false.
`public inline bool `[`IsExpirationSet`](#structFRHAPI__RestrictionCreate_1a9595334b7e0f7ba564456c0339321b4e)`() const` | Checks whether Expiration_Optional has been set.
`public inline ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1ad4055da005f7208065ad0b9547b7950d)`()` | Gets the value of IssuerType.
`public inline const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1aa1ecebe1aff9c1cd82dfdb1bf4f81ad6)`() const` | Gets the value of IssuerType.
`public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a9b49614243798bff7083fcd72546f9ef)`(const ERHAPI_RestrictionIssuerType & NewValue)` | Sets the value of IssuerType.
`public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a7668c1084da13276105a1e0c467acaff)`(ERHAPI_RestrictionIssuerType && NewValue)` | Sets the value of IssuerType using move semantics.
`public inline FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a2bd52555f3590c131522505a3a1b0891)`()` | Gets the value of Issuer.
`public inline const FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a885b759f7e95e37f84eb5649115cb5e8)`() const` | Gets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1adaf0d17a24e07a07b4ec533f1eebcdb4)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1a6e166369710df8de3900aa53d6feda3c)`(FString && NewValue)` | Sets the value of Issuer using move semantics.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__RestrictionCreate_1a560ac591b3992acfd40be3711cbe7ba0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RestrictionCreate_1a560ac591b3992acfd40be3711cbe7ba0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RestrictionCreate_1a818d91682460996ff3555e9c7e611b63)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RestrictionCreate_1a818d91682460996ff3555e9c7e611b63"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a7c865b6e499b1d01bbdd3eff1e20c234)`()` <a id="structFRHAPI__RestrictionCreate_1a7c865b6e499b1d01bbdd3eff1e20c234"></a>

Gets the value of Type.

#### `public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionCreate_1a22c34e14054d2505f4fc5ab61f91dd8c)`() const` <a id="structFRHAPI__RestrictionCreate_1a22c34e14054d2505f4fc5ab61f91dd8c"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__RestrictionCreate_1abaff0abf29c3d320378a4b42540124b0)`(const ERHAPI_RestrictionType & NewValue)` <a id="structFRHAPI__RestrictionCreate_1abaff0abf29c3d320378a4b42540124b0"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__RestrictionCreate_1af29314e595ed3e4e08c59a8ada92b7bd)`(ERHAPI_RestrictionType && NewValue)` <a id="structFRHAPI__RestrictionCreate_1af29314e595ed3e4e08c59a8ada92b7bd"></a>

Sets the value of Type using move semantics.

#### `public inline ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1ad61fa2fab62b3f1c53d7a68f3f0621e9)`()` <a id="structFRHAPI__RestrictionCreate_1ad61fa2fab62b3f1c53d7a68f3f0621e9"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a06245da00e14977ef663f45e42a4e158)`() const` <a id="structFRHAPI__RestrictionCreate_1a06245da00e14977ef663f45e42a4e158"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionCreate_1a588193888d5c2bf7cb8bd38c4ef82361)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` <a id="structFRHAPI__RestrictionCreate_1a588193888d5c2bf7cb8bd38c4ef82361"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReason`](#structFRHAPI__RestrictionCreate_1afa9940fd48758f7ac57b7b0c93b0df33)`(ERHAPI_RestrictionReasonCode & OutValue) const` <a id="structFRHAPI__RestrictionCreate_1afa9940fd48758f7ac57b7b0c93b0df33"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1a2b8cb050da0047f7acd4f585ccba1401)`()` <a id="structFRHAPI__RestrictionCreate_1a2b8cb050da0047f7acd4f585ccba1401"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionCreate_1ae37cacfab9b7f796b8eee77c1a7d20ee)`() const` <a id="structFRHAPI__RestrictionCreate_1ae37cacfab9b7f796b8eee77c1a7d20ee"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReason`](#structFRHAPI__RestrictionCreate_1af2eabd3f2265fedfa7b6c10b7dfbda05)`(const ERHAPI_RestrictionReasonCode & NewValue)` <a id="structFRHAPI__RestrictionCreate_1af2eabd3f2265fedfa7b6c10b7dfbda05"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline void `[`SetReason`](#structFRHAPI__RestrictionCreate_1a3b37025050ffd417c5a9fedd5054fab5)`(ERHAPI_RestrictionReasonCode && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a3b37025050ffd417c5a9fedd5054fab5"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1)`()` <a id="structFRHAPI__RestrictionCreate_1a206011f1358cdf596dc17266bdd2ebe1"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline bool `[`IsReasonSet`](#structFRHAPI__RestrictionCreate_1ac7a2188062b1b8655599c8c7344c15d3)`() const` <a id="structFRHAPI__RestrictionCreate_1ac7a2188062b1b8655599c8c7344c15d3"></a>

Checks whether Reason_Optional has been set.

#### `public inline FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1ad3ec845e144a84b2bdcd3f56764c96ef)`()` <a id="structFRHAPI__RestrictionCreate_1ad3ec845e144a84b2bdcd3f56764c96ef"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a5172f0bb3f7bc2fae2a8848280baa7e7)`() const` <a id="structFRHAPI__RestrictionCreate_1a5172f0bb3f7bc2fae2a8848280baa7e7"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1a32d06f5f5792379953c3297deb691c9f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__RestrictionCreate_1a32d06f5f5792379953c3297deb691c9f"></a>

Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpiration`](#structFRHAPI__RestrictionCreate_1ae49b010fdd06d11dbc0c0b0e5da2af91)`(FDateTime & OutValue) const` <a id="structFRHAPI__RestrictionCreate_1ae49b010fdd06d11dbc0c0b0e5da2af91"></a>

Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a474624831002b51f21857aadea81fbec)`()` <a id="structFRHAPI__RestrictionCreate_1a474624831002b51f21857aadea81fbec"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionCreate_1a23426d96b90cda256e726326962bac99)`() const` <a id="structFRHAPI__RestrictionCreate_1a23426d96b90cda256e726326962bac99"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1aeb775b21e606c88fee82bdb6ef2869c8)`(const FDateTime & NewValue)` <a id="structFRHAPI__RestrictionCreate_1aeb775b21e606c88fee82bdb6ef2869c8"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.

#### `public inline void `[`SetExpiration`](#structFRHAPI__RestrictionCreate_1adcb5ffd2666512a6c5408a6c9f3e505b)`(FDateTime && NewValue)` <a id="structFRHAPI__RestrictionCreate_1adcb5ffd2666512a6c5408a6c9f3e505b"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177)`()` <a id="structFRHAPI__RestrictionCreate_1abbd9a4669adb39cb3c9c9f02af3cc177"></a>

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

#### `public inline bool `[`IsExpirationSet`](#structFRHAPI__RestrictionCreate_1a9595334b7e0f7ba564456c0339321b4e)`() const` <a id="structFRHAPI__RestrictionCreate_1a9595334b7e0f7ba564456c0339321b4e"></a>

Checks whether Expiration_Optional has been set.

#### `public inline ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1ad4055da005f7208065ad0b9547b7950d)`()` <a id="structFRHAPI__RestrictionCreate_1ad4055da005f7208065ad0b9547b7950d"></a>

Gets the value of IssuerType.

#### `public inline const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionCreate_1aa1ecebe1aff9c1cd82dfdb1bf4f81ad6)`() const` <a id="structFRHAPI__RestrictionCreate_1aa1ecebe1aff9c1cd82dfdb1bf4f81ad6"></a>

Gets the value of IssuerType.

#### `public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a9b49614243798bff7083fcd72546f9ef)`(const ERHAPI_RestrictionIssuerType & NewValue)` <a id="structFRHAPI__RestrictionCreate_1a9b49614243798bff7083fcd72546f9ef"></a>

Sets the value of IssuerType.

#### `public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionCreate_1a7668c1084da13276105a1e0c467acaff)`(ERHAPI_RestrictionIssuerType && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a7668c1084da13276105a1e0c467acaff"></a>

Sets the value of IssuerType using move semantics.

#### `public inline FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a2bd52555f3590c131522505a3a1b0891)`()` <a id="structFRHAPI__RestrictionCreate_1a2bd52555f3590c131522505a3a1b0891"></a>

Gets the value of Issuer.

#### `public inline const FString & `[`GetIssuer`](#structFRHAPI__RestrictionCreate_1a885b759f7e95e37f84eb5649115cb5e8)`() const` <a id="structFRHAPI__RestrictionCreate_1a885b759f7e95e37f84eb5649115cb5e8"></a>

Gets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1adaf0d17a24e07a07b4ec533f1eebcdb4)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionCreate_1adaf0d17a24e07a07b4ec533f1eebcdb4"></a>

Sets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__RestrictionCreate_1a6e166369710df8de3900aa53d6feda3c)`(FString && NewValue)` <a id="structFRHAPI__RestrictionCreate_1a6e166369710df8de3900aa53d6feda3c"></a>

Sets the value of Issuer using move semantics.
