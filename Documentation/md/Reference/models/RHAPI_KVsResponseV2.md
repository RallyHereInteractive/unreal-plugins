---
title: RHAPI_KVsResponseV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KVsResponseV2`](#structFRHAPI__KVsResponseV2) | 

## struct `FRHAPI_KVsResponseV2` <a id="structFRHAPI__KVsResponseV2"></a>

```
struct FRHAPI_KVsResponseV2
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`Kvs_Optional`](#structFRHAPI__KVsResponseV2_1a82becbf26311d31710b9a8565790b750) | The list of key/value pairs.
`public bool `[`Kvs_IsSet`](#structFRHAPI__KVsResponseV2_1a2472e7743cd7526c7660eb4e3f013a85) | true if Kvs_Optional has been set to a value
`public TMap< FString, FString > `[`SecretKvs_Optional`](#structFRHAPI__KVsResponseV2_1aec975fc79d0ab06c9a350336fc4e4890) | *DEPRECATED* The list of permissioned key/value pairs
`public bool `[`SecretKvs_IsSet`](#structFRHAPI__KVsResponseV2_1ab81590821f474549e20e936b43490aed) | true if SecretKvs_Optional has been set to a value
`public FDateTime `[`KickBeforeHint_Optional`](#structFRHAPI__KVsResponseV2_1a1c0a8e368f007745fe2d035f92ca0db1) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`KickBeforeHint_IsSet`](#structFRHAPI__KVsResponseV2_1a9b71da32e91425d77c18ca9e5cf798c7) | true if KickBeforeHint_Optional has been set to a value
`public bool `[`KickBeforeHint_IsNull`](#structFRHAPI__KVsResponseV2_1af00bfc8ad61e88dbab2759c2453d8e11) | true if KickBeforeHint_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__KVsResponseV2_1ab70764bcb0234ac210e0af2e89d1a9f1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KVsResponseV2_1a7b514a4962a8c678ecb406ffc5e6a6f9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1ac673fbd3f895f289e0cbbe603ce61a62)`()` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a4e841c58de28adba247b47637979962f)`() const` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a30d25655d95dac0e228664598e392679)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a1a71151b149264d149a91f50e8e9f9e4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1aa6f6884bbac10570e60140bef8c2afb1)`()` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1aa69e32db8d85a461579dad6cd00dd40e)`() const` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1a5ba628f1c8fbc3305afcd0151f0ec000)`(const TMap< FString, FString > & NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.
`public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1a8d8f045aaf79967b3b841a260089d040)`(TMap< FString, FString > && NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.
`public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2)`()` | Clears the value of Kvs_Optional and sets Kvs_IsSet to false.
`public inline bool `[`IsKvsSet`](#structFRHAPI__KVsResponseV2_1a0389804bfba6a613ffd081ccb0ba4286)`() const` | Checks whether Kvs_Optional has been set.
`public inline TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a5049108b0f303e95e6c661ea1523c6b5)`()` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a15d567121ffec10881795052ed9a9f3d)`() const` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1ab9eb87416074988e34c8bee0655c0f6b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a4c060960fdd938171b48f81fd8023af4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a6d640f43d482e408a15a8d1ba9abdddd)`()` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a8e19fb579974840590c4102981c45015)`() const` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1ace017fbf13868fd79c520f2e0480f009)`(const TMap< FString, FString > & NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.
`public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1afca79ef23c8f802c124bc86c58d44107)`(TMap< FString, FString > && NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.
`public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473)`()` | Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.
`public inline bool `[`IsSecretKvsSet`](#structFRHAPI__KVsResponseV2_1aefb72886828150897f237615dc781017)`() const` | Checks whether SecretKvs_Optional has been set.
`public inline FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a6ab27e74efd440e261967c7f0b994527)`()` | Gets the value of KickBeforeHint_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a6ac373a5370af0531a6063f251428aa3)`() const` | Gets the value of KickBeforeHint_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1acf3fd21a515780bc7a5f8b98c41389de)`(const FDateTime & DefaultValue) const` | Gets the value of KickBeforeHint_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1add80d3e8abf1a17fc5c9aa5a1f21b5cd)`(FDateTime & OutValue) const` | Fills OutValue with the value of KickBeforeHint_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetKickBeforeHintOrNull`](#structFRHAPI__KVsResponseV2_1abb667ea5591dff9e839a0ad4f80762dc)`()` | Returns a pointer to KickBeforeHint_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetKickBeforeHintOrNull`](#structFRHAPI__KVsResponseV2_1a3323d7a562945f9773de4d19ca9d339f)`() const` | Returns a pointer to KickBeforeHint_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a93f22fe919897974c5e80a6519a7eef9)`(const FDateTime & NewValue)` | Sets the value of KickBeforeHint_Optional and also sets KickBeforeHint_IsSet to true.
`public inline void `[`SetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a6777c7f31ee98d28aa940cbd02c2b4f8)`(FDateTime && NewValue)` | Sets the value of KickBeforeHint_Optional and also sets KickBeforeHint_IsSet to true using move semantics.
`public inline void `[`ClearKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a5764ddc0e6aa98ef1acfbba00d0642fd)`()` | Clears the value of KickBeforeHint_Optional and sets KickBeforeHint_IsSet to false.
`public inline bool `[`IsKickBeforeHintSet`](#structFRHAPI__KVsResponseV2_1a17c4d9ccbe7009ebc6c975a8669328b7)`() const` | Checks whether KickBeforeHint_Optional has been set.
`public inline void `[`SetKickBeforeHintToNull`](#structFRHAPI__KVsResponseV2_1abfc8da534a208ebea809435a8c5bd101)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsKickBeforeHintNull`](#structFRHAPI__KVsResponseV2_1a157c1393cebef4ebb03e98e6b79faefe)`() const` | Checks whether KickBeforeHint_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`Kvs_Optional`](#structFRHAPI__KVsResponseV2_1a82becbf26311d31710b9a8565790b750) <a id="structFRHAPI__KVsResponseV2_1a82becbf26311d31710b9a8565790b750"></a>

The list of key/value pairs.

#### `public bool `[`Kvs_IsSet`](#structFRHAPI__KVsResponseV2_1a2472e7743cd7526c7660eb4e3f013a85) <a id="structFRHAPI__KVsResponseV2_1a2472e7743cd7526c7660eb4e3f013a85"></a>

true if Kvs_Optional has been set to a value

#### `public TMap< FString, FString > `[`SecretKvs_Optional`](#structFRHAPI__KVsResponseV2_1aec975fc79d0ab06c9a350336fc4e4890) <a id="structFRHAPI__KVsResponseV2_1aec975fc79d0ab06c9a350336fc4e4890"></a>

*DEPRECATED* The list of permissioned key/value pairs

#### `public bool `[`SecretKvs_IsSet`](#structFRHAPI__KVsResponseV2_1ab81590821f474549e20e936b43490aed) <a id="structFRHAPI__KVsResponseV2_1ab81590821f474549e20e936b43490aed"></a>

true if SecretKvs_Optional has been set to a value

#### `public FDateTime `[`KickBeforeHint_Optional`](#structFRHAPI__KVsResponseV2_1a1c0a8e368f007745fe2d035f92ca0db1) <a id="structFRHAPI__KVsResponseV2_1a1c0a8e368f007745fe2d035f92ca0db1"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`KickBeforeHint_IsSet`](#structFRHAPI__KVsResponseV2_1a9b71da32e91425d77c18ca9e5cf798c7) <a id="structFRHAPI__KVsResponseV2_1a9b71da32e91425d77c18ca9e5cf798c7"></a>

true if KickBeforeHint_Optional has been set to a value

#### `public bool `[`KickBeforeHint_IsNull`](#structFRHAPI__KVsResponseV2_1af00bfc8ad61e88dbab2759c2453d8e11) <a id="structFRHAPI__KVsResponseV2_1af00bfc8ad61e88dbab2759c2453d8e11"></a>

true if KickBeforeHint_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__KVsResponseV2_1ab70764bcb0234ac210e0af2e89d1a9f1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KVsResponseV2_1ab70764bcb0234ac210e0af2e89d1a9f1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KVsResponseV2_1a7b514a4962a8c678ecb406ffc5e6a6f9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__KVsResponseV2_1a7b514a4962a8c678ecb406ffc5e6a6f9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1ac673fbd3f895f289e0cbbe603ce61a62)`()` <a id="structFRHAPI__KVsResponseV2_1ac673fbd3f895f289e0cbbe603ce61a62"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a4e841c58de28adba247b47637979962f)`() const` <a id="structFRHAPI__KVsResponseV2_1a4e841c58de28adba247b47637979962f"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a30d25655d95dac0e228664598e392679)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV2_1a30d25655d95dac0e228664598e392679"></a>

Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a1a71151b149264d149a91f50e8e9f9e4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__KVsResponseV2_1a1a71151b149264d149a91f50e8e9f9e4"></a>

Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1aa6f6884bbac10570e60140bef8c2afb1)`()` <a id="structFRHAPI__KVsResponseV2_1aa6f6884bbac10570e60140bef8c2afb1"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1aa69e32db8d85a461579dad6cd00dd40e)`() const` <a id="structFRHAPI__KVsResponseV2_1aa69e32db8d85a461579dad6cd00dd40e"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1a5ba628f1c8fbc3305afcd0151f0ec000)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__KVsResponseV2_1a5ba628f1c8fbc3305afcd0151f0ec000"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.

#### `public inline void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1a8d8f045aaf79967b3b841a260089d040)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__KVsResponseV2_1a8d8f045aaf79967b3b841a260089d040"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.

#### `public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2)`()` <a id="structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2"></a>

Clears the value of Kvs_Optional and sets Kvs_IsSet to false.

#### `public inline bool `[`IsKvsSet`](#structFRHAPI__KVsResponseV2_1a0389804bfba6a613ffd081ccb0ba4286)`() const` <a id="structFRHAPI__KVsResponseV2_1a0389804bfba6a613ffd081ccb0ba4286"></a>

Checks whether Kvs_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a5049108b0f303e95e6c661ea1523c6b5)`()` <a id="structFRHAPI__KVsResponseV2_1a5049108b0f303e95e6c661ea1523c6b5"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a15d567121ffec10881795052ed9a9f3d)`() const` <a id="structFRHAPI__KVsResponseV2_1a15d567121ffec10881795052ed9a9f3d"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1ab9eb87416074988e34c8bee0655c0f6b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV2_1ab9eb87416074988e34c8bee0655c0f6b"></a>

Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a4c060960fdd938171b48f81fd8023af4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__KVsResponseV2_1a4c060960fdd938171b48f81fd8023af4"></a>

Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a6d640f43d482e408a15a8d1ba9abdddd)`()` <a id="structFRHAPI__KVsResponseV2_1a6d640f43d482e408a15a8d1ba9abdddd"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a8e19fb579974840590c4102981c45015)`() const` <a id="structFRHAPI__KVsResponseV2_1a8e19fb579974840590c4102981c45015"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1ace017fbf13868fd79c520f2e0480f009)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__KVsResponseV2_1ace017fbf13868fd79c520f2e0480f009"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.

#### `public inline void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1afca79ef23c8f802c124bc86c58d44107)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__KVsResponseV2_1afca79ef23c8f802c124bc86c58d44107"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.

#### `public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473)`()` <a id="structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473"></a>

Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

#### `public inline bool `[`IsSecretKvsSet`](#structFRHAPI__KVsResponseV2_1aefb72886828150897f237615dc781017)`() const` <a id="structFRHAPI__KVsResponseV2_1aefb72886828150897f237615dc781017"></a>

Checks whether SecretKvs_Optional has been set.

#### `public inline FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a6ab27e74efd440e261967c7f0b994527)`()` <a id="structFRHAPI__KVsResponseV2_1a6ab27e74efd440e261967c7f0b994527"></a>

Gets the value of KickBeforeHint_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a6ac373a5370af0531a6063f251428aa3)`() const` <a id="structFRHAPI__KVsResponseV2_1a6ac373a5370af0531a6063f251428aa3"></a>

Gets the value of KickBeforeHint_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1acf3fd21a515780bc7a5f8b98c41389de)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__KVsResponseV2_1acf3fd21a515780bc7a5f8b98c41389de"></a>

Gets the value of KickBeforeHint_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1add80d3e8abf1a17fc5c9aa5a1f21b5cd)`(FDateTime & OutValue) const` <a id="structFRHAPI__KVsResponseV2_1add80d3e8abf1a17fc5c9aa5a1f21b5cd"></a>

Fills OutValue with the value of KickBeforeHint_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetKickBeforeHintOrNull`](#structFRHAPI__KVsResponseV2_1abb667ea5591dff9e839a0ad4f80762dc)`()` <a id="structFRHAPI__KVsResponseV2_1abb667ea5591dff9e839a0ad4f80762dc"></a>

Returns a pointer to KickBeforeHint_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetKickBeforeHintOrNull`](#structFRHAPI__KVsResponseV2_1a3323d7a562945f9773de4d19ca9d339f)`() const` <a id="structFRHAPI__KVsResponseV2_1a3323d7a562945f9773de4d19ca9d339f"></a>

Returns a pointer to KickBeforeHint_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a93f22fe919897974c5e80a6519a7eef9)`(const FDateTime & NewValue)` <a id="structFRHAPI__KVsResponseV2_1a93f22fe919897974c5e80a6519a7eef9"></a>

Sets the value of KickBeforeHint_Optional and also sets KickBeforeHint_IsSet to true.

#### `public inline void `[`SetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a6777c7f31ee98d28aa940cbd02c2b4f8)`(FDateTime && NewValue)` <a id="structFRHAPI__KVsResponseV2_1a6777c7f31ee98d28aa940cbd02c2b4f8"></a>

Sets the value of KickBeforeHint_Optional and also sets KickBeforeHint_IsSet to true using move semantics.

#### `public inline void `[`ClearKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a5764ddc0e6aa98ef1acfbba00d0642fd)`()` <a id="structFRHAPI__KVsResponseV2_1a5764ddc0e6aa98ef1acfbba00d0642fd"></a>

Clears the value of KickBeforeHint_Optional and sets KickBeforeHint_IsSet to false.

#### `public inline bool `[`IsKickBeforeHintSet`](#structFRHAPI__KVsResponseV2_1a17c4d9ccbe7009ebc6c975a8669328b7)`() const` <a id="structFRHAPI__KVsResponseV2_1a17c4d9ccbe7009ebc6c975a8669328b7"></a>

Checks whether KickBeforeHint_Optional has been set.

#### `public inline void `[`SetKickBeforeHintToNull`](#structFRHAPI__KVsResponseV2_1abfc8da534a208ebea809435a8c5bd101)`()` <a id="structFRHAPI__KVsResponseV2_1abfc8da534a208ebea809435a8c5bd101"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsKickBeforeHintNull`](#structFRHAPI__KVsResponseV2_1a157c1393cebef4ebb03e98e6b79faefe)`() const` <a id="structFRHAPI__KVsResponseV2_1a157c1393cebef4ebb03e98e6b79faefe"></a>

Checks whether KickBeforeHint_Optional is set to null.

