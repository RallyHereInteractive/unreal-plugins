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
`public inline FORCEINLINE TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1acb575f895cacbfea9cbbb5049d9f4f98)`()` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1ac54219043f7c760170beb49219a0e9fd)`() const` | Gets the value of Kvs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1ad3d5e3231110474080b9e9c4d89e8842)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a65a00e1ee0d1a8eff7b8c7e521a43bac)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1acfe6e1635be801ed44f77f8970a7a57b)`()` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1aa7d875cbea9dbbf3ffd4c1982a3a5e87)`() const` | Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1aa6734858b8fd216943e00dbfcb117554)`(const TMap< FString, FString > & NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.
`public inline FORCEINLINE void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1aa26e696087ffd76e765f760a717b0a9d)`(TMap< FString, FString > && NewValue)` | Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.
`public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2)`()` | Clears the value of Kvs_Optional and sets Kvs_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a82ed2e2bebfe8bd7330a6821ee65c826)`()` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a99d95dff3b926ea139c7c643a19451ac)`() const` | Gets the value of SecretKvs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a6155ea326d4273c060a5722ea6c39ddc)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a221d136712ae48b5543f45792b4f043c)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a3ac05536d01ec2a253f2a945c09cf3ad)`()` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1ab2e861c51e4f8c548b59ed13334760df)`() const` | Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1aa8ad67b6eda4c3671ec0cef918c72335)`(const TMap< FString, FString > & NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.
`public inline FORCEINLINE void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1a6ab20c6b82fdff9c522a1d44943a5efe)`(TMap< FString, FString > && NewValue)` | Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.
`public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473)`()` | Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1af95b073f53fade9d6e0b234a551b6e3b)`()` | Gets the value of KickBeforeHint_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a4fc9c233a6bf0eac31494723bcf562ba)`() const` | Gets the value of KickBeforeHint_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a8e3e7d8afeea2ed73d7bc52c984d8ea1)`(const FDateTime & DefaultValue) const` | Gets the value of KickBeforeHint_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1aa0fc8caf954e1022ad0b39aee1103a9f)`(FDateTime & OutValue) const` | Fills OutValue with the value of KickBeforeHint_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetKickBeforeHintOrNull`](#structFRHAPI__KVsResponseV2_1a8ee1371de0854298fb885d19c94cbe42)`()` | Returns a pointer to KickBeforeHint_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetKickBeforeHintOrNull`](#structFRHAPI__KVsResponseV2_1a248d6fddf17ef16896b6341911e37d27)`() const` | Returns a pointer to KickBeforeHint_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a11e2496f6c6e56dad8308ab2752799a3)`(const FDateTime & NewValue)` | Sets the value of KickBeforeHint_Optional and also sets KickBeforeHint_IsSet to true.
`public inline FORCEINLINE void `[`SetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a27478123aa52736b0cfb388d99bfffee)`(FDateTime && NewValue)` | Sets the value of KickBeforeHint_Optional and also sets KickBeforeHint_IsSet to true using move semantics.
`public inline void `[`ClearKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a5764ddc0e6aa98ef1acfbba00d0642fd)`()` | Clears the value of KickBeforeHint_Optional and sets KickBeforeHint_IsSet to false.
`public inline FORCEINLINE void `[`SetKickBeforeHintToNull`](#structFRHAPI__KVsResponseV2_1a130d35065dfe9cf81461919da01a84d5)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsKickBeforeHintNull`](#structFRHAPI__KVsResponseV2_1a83281c48c6eb2fca20d2e9aa50778a1c)`() const` | Checks whether KickBeforeHint_Optional is set to null.

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

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1acb575f895cacbfea9cbbb5049d9f4f98)`()` <a id="structFRHAPI__KVsResponseV2_1acb575f895cacbfea9cbbb5049d9f4f98"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1ac54219043f7c760170beb49219a0e9fd)`() const` <a id="structFRHAPI__KVsResponseV2_1ac54219043f7c760170beb49219a0e9fd"></a>

Gets the value of Kvs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetKvs`](#structFRHAPI__KVsResponseV2_1ad3d5e3231110474080b9e9c4d89e8842)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV2_1ad3d5e3231110474080b9e9c4d89e8842"></a>

Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetKvs`](#structFRHAPI__KVsResponseV2_1a65a00e1ee0d1a8eff7b8c7e521a43bac)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__KVsResponseV2_1a65a00e1ee0d1a8eff7b8c7e521a43bac"></a>

Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1acfe6e1635be801ed44f77f8970a7a57b)`()` <a id="structFRHAPI__KVsResponseV2_1acfe6e1635be801ed44f77f8970a7a57b"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetKvsOrNull`](#structFRHAPI__KVsResponseV2_1aa7d875cbea9dbbf3ffd4c1982a3a5e87)`() const` <a id="structFRHAPI__KVsResponseV2_1aa7d875cbea9dbbf3ffd4c1982a3a5e87"></a>

Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1aa6734858b8fd216943e00dbfcb117554)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__KVsResponseV2_1aa6734858b8fd216943e00dbfcb117554"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true.

#### `public inline FORCEINLINE void `[`SetKvs`](#structFRHAPI__KVsResponseV2_1aa26e696087ffd76e765f760a717b0a9d)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__KVsResponseV2_1aa26e696087ffd76e765f760a717b0a9d"></a>

Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics.

#### `public inline void `[`ClearKvs`](#structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2)`()` <a id="structFRHAPI__KVsResponseV2_1a8777e5cde5028f594e27db29dae4bab2"></a>

Clears the value of Kvs_Optional and sets Kvs_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a82ed2e2bebfe8bd7330a6821ee65c826)`()` <a id="structFRHAPI__KVsResponseV2_1a82ed2e2bebfe8bd7330a6821ee65c826"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a99d95dff3b926ea139c7c643a19451ac)`() const` <a id="structFRHAPI__KVsResponseV2_1a99d95dff3b926ea139c7c643a19451ac"></a>

Gets the value of SecretKvs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a6155ea326d4273c060a5722ea6c39ddc)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__KVsResponseV2_1a6155ea326d4273c060a5722ea6c39ddc"></a>

Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSecretKvs`](#structFRHAPI__KVsResponseV2_1a221d136712ae48b5543f45792b4f043c)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__KVsResponseV2_1a221d136712ae48b5543f45792b4f043c"></a>

Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1a3ac05536d01ec2a253f2a945c09cf3ad)`()` <a id="structFRHAPI__KVsResponseV2_1a3ac05536d01ec2a253f2a945c09cf3ad"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetSecretKvsOrNull`](#structFRHAPI__KVsResponseV2_1ab2e861c51e4f8c548b59ed13334760df)`() const` <a id="structFRHAPI__KVsResponseV2_1ab2e861c51e4f8c548b59ed13334760df"></a>

Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1aa8ad67b6eda4c3671ec0cef918c72335)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__KVsResponseV2_1aa8ad67b6eda4c3671ec0cef918c72335"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSecretKvs`](#structFRHAPI__KVsResponseV2_1a6ab20c6b82fdff9c522a1d44943a5efe)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__KVsResponseV2_1a6ab20c6b82fdff9c522a1d44943a5efe"></a>

Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics.

#### `public inline void `[`ClearSecretKvs`](#structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473)`()` <a id="structFRHAPI__KVsResponseV2_1aaa15339436ec513d1e51e1900394c473"></a>

Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1af95b073f53fade9d6e0b234a551b6e3b)`()` <a id="structFRHAPI__KVsResponseV2_1af95b073f53fade9d6e0b234a551b6e3b"></a>

Gets the value of KickBeforeHint_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a4fc9c233a6bf0eac31494723bcf562ba)`() const` <a id="structFRHAPI__KVsResponseV2_1a4fc9c233a6bf0eac31494723bcf562ba"></a>

Gets the value of KickBeforeHint_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a8e3e7d8afeea2ed73d7bc52c984d8ea1)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__KVsResponseV2_1a8e3e7d8afeea2ed73d7bc52c984d8ea1"></a>

Gets the value of KickBeforeHint_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1aa0fc8caf954e1022ad0b39aee1103a9f)`(FDateTime & OutValue) const` <a id="structFRHAPI__KVsResponseV2_1aa0fc8caf954e1022ad0b39aee1103a9f"></a>

Fills OutValue with the value of KickBeforeHint_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetKickBeforeHintOrNull`](#structFRHAPI__KVsResponseV2_1a8ee1371de0854298fb885d19c94cbe42)`()` <a id="structFRHAPI__KVsResponseV2_1a8ee1371de0854298fb885d19c94cbe42"></a>

Returns a pointer to KickBeforeHint_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetKickBeforeHintOrNull`](#structFRHAPI__KVsResponseV2_1a248d6fddf17ef16896b6341911e37d27)`() const` <a id="structFRHAPI__KVsResponseV2_1a248d6fddf17ef16896b6341911e37d27"></a>

Returns a pointer to KickBeforeHint_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a11e2496f6c6e56dad8308ab2752799a3)`(const FDateTime & NewValue)` <a id="structFRHAPI__KVsResponseV2_1a11e2496f6c6e56dad8308ab2752799a3"></a>

Sets the value of KickBeforeHint_Optional and also sets KickBeforeHint_IsSet to true.

#### `public inline FORCEINLINE void `[`SetKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a27478123aa52736b0cfb388d99bfffee)`(FDateTime && NewValue)` <a id="structFRHAPI__KVsResponseV2_1a27478123aa52736b0cfb388d99bfffee"></a>

Sets the value of KickBeforeHint_Optional and also sets KickBeforeHint_IsSet to true using move semantics.

#### `public inline void `[`ClearKickBeforeHint`](#structFRHAPI__KVsResponseV2_1a5764ddc0e6aa98ef1acfbba00d0642fd)`()` <a id="structFRHAPI__KVsResponseV2_1a5764ddc0e6aa98ef1acfbba00d0642fd"></a>

Clears the value of KickBeforeHint_Optional and sets KickBeforeHint_IsSet to false.

#### `public inline FORCEINLINE void `[`SetKickBeforeHintToNull`](#structFRHAPI__KVsResponseV2_1a130d35065dfe9cf81461919da01a84d5)`()` <a id="structFRHAPI__KVsResponseV2_1a130d35065dfe9cf81461919da01a84d5"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsKickBeforeHintNull`](#structFRHAPI__KVsResponseV2_1a83281c48c6eb2fca20d2e9aa50778a1c)`() const` <a id="structFRHAPI__KVsResponseV2_1a83281c48c6eb2fca20d2e9aa50778a1c"></a>

Checks whether KickBeforeHint_Optional is set to null.

