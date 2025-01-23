---
title: RHAPI_PlatformSKUs
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformSKUs`](#structFRHAPI__PlatformSKUs) | A collection of SKUs.

## struct `FRHAPI_PlatformSKUs` <a id="structFRHAPI__PlatformSKUs"></a>

```
struct FRHAPI_PlatformSKUs
  : public FRHAPI_Model
```

A collection of SKUs.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > `[`Skus_Optional`](#structFRHAPI__PlatformSKUs_1a0a8a66e63cd86b4aa4a6ceead1affbc9) | A collection of SKUs.
`public bool `[`Skus_IsSet`](#structFRHAPI__PlatformSKUs_1ad02e809536bac106a826d6475e4bd4c5) | true if Skus_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PlatformSKUs_1a246d0a0bc4366646fbaef51ea057a45e) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PlatformSKUs_1aae1ce5ef5205e6d7c5414b1640f2b18f) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__PlatformSKUs_1ad16a2580b71c05b627b1b580efa2eba4) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKUs_1a160ce0dbf1d0db985fbb7f3b64d1af61)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKUs_1ab817f94ea403a0dd4add11d363ea05e0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a3f0aa747d847132a1ac7921c56310eca)`()` | Gets the value of Skus_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1aee09c54c0ddd33379a7cf8b6578a95bd)`() const` | Gets the value of Skus_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a41eab08f8d75ea19bbbdd867176a9339)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & DefaultValue) const` | Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a62141f4469ac477b36799bb984e16bb8)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & OutValue) const` | Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1a7e84af1b0c2950d24204ff17d45cb3e1)`()` | Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1adb1639d97bf35781f9cda12e2d00aa44)`() const` | Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1a055c88e65f30f64828cf9707084f282b)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & NewValue)` | Sets the value of Skus_Optional and also sets Skus_IsSet to true.
`public inline void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1a018fe0789adc5ef0a70fec3f6fb8c20b)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > && NewValue)` | Sets the value of Skus_Optional and also sets Skus_IsSet to true using move semantics.
`public inline void `[`ClearSkus`](#structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb)`()` | Clears the value of Skus_Optional and sets Skus_IsSet to false.
`public inline bool `[`IsSkusSet`](#structFRHAPI__PlatformSKUs_1acd37452c003a51f34b7f5b69b67e0d84)`() const` | Checks whether Skus_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a4315fc01368f9d25d8a05337a6bc0c4c)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a9963ee1fd79f14c58d722342ed1b3e8c)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1acc76cdc6d5272fb49ec203c798979b8a)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a886a5b9d4d09655191ac22fa2829f049)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1ab561d2eb93fbf2512b426c0744f62579)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1abd984fbb1eb96987023bd4c407e042cd)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a647ad0949a07a6a73353c92c917bddcb)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a882f66a9e09db87937061352f349b2b0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PlatformSKUs_1a8f7e3f1b7d722de5229da09b8add613a)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__PlatformSKUs_1a7353fd8c44ea788ea72479fd984c650f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__PlatformSKUs_1a77a7fa5b060c73328526fb47daba489d)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > `[`Skus_Optional`](#structFRHAPI__PlatformSKUs_1a0a8a66e63cd86b4aa4a6ceead1affbc9) <a id="structFRHAPI__PlatformSKUs_1a0a8a66e63cd86b4aa4a6ceead1affbc9"></a>

A collection of SKUs.

#### `public bool `[`Skus_IsSet`](#structFRHAPI__PlatformSKUs_1ad02e809536bac106a826d6475e4bd4c5) <a id="structFRHAPI__PlatformSKUs_1ad02e809536bac106a826d6475e4bd4c5"></a>

true if Skus_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PlatformSKUs_1a246d0a0bc4366646fbaef51ea057a45e) <a id="structFRHAPI__PlatformSKUs_1a246d0a0bc4366646fbaef51ea057a45e"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PlatformSKUs_1aae1ce5ef5205e6d7c5414b1640f2b18f) <a id="structFRHAPI__PlatformSKUs_1aae1ce5ef5205e6d7c5414b1640f2b18f"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__PlatformSKUs_1ad16a2580b71c05b627b1b580efa2eba4) <a id="structFRHAPI__PlatformSKUs_1ad16a2580b71c05b627b1b580efa2eba4"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKUs_1a160ce0dbf1d0db985fbb7f3b64d1af61)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSKUs_1a160ce0dbf1d0db985fbb7f3b64d1af61"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKUs_1ab817f94ea403a0dd4add11d363ea05e0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformSKUs_1ab817f94ea403a0dd4add11d363ea05e0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a3f0aa747d847132a1ac7921c56310eca)`()` <a id="structFRHAPI__PlatformSKUs_1a3f0aa747d847132a1ac7921c56310eca"></a>

Gets the value of Skus_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1aee09c54c0ddd33379a7cf8b6578a95bd)`() const` <a id="structFRHAPI__PlatformSKUs_1aee09c54c0ddd33379a7cf8b6578a95bd"></a>

Gets the value of Skus_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a41eab08f8d75ea19bbbdd867176a9339)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & DefaultValue) const` <a id="structFRHAPI__PlatformSKUs_1a41eab08f8d75ea19bbbdd867176a9339"></a>

Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a62141f4469ac477b36799bb984e16bb8)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & OutValue) const` <a id="structFRHAPI__PlatformSKUs_1a62141f4469ac477b36799bb984e16bb8"></a>

Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1a7e84af1b0c2950d24204ff17d45cb3e1)`()` <a id="structFRHAPI__PlatformSKUs_1a7e84af1b0c2950d24204ff17d45cb3e1"></a>

Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1adb1639d97bf35781f9cda12e2d00aa44)`() const` <a id="structFRHAPI__PlatformSKUs_1adb1639d97bf35781f9cda12e2d00aa44"></a>

Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1a055c88e65f30f64828cf9707084f282b)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & NewValue)` <a id="structFRHAPI__PlatformSKUs_1a055c88e65f30f64828cf9707084f282b"></a>

Sets the value of Skus_Optional and also sets Skus_IsSet to true.

#### `public inline void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1a018fe0789adc5ef0a70fec3f6fb8c20b)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > && NewValue)` <a id="structFRHAPI__PlatformSKUs_1a018fe0789adc5ef0a70fec3f6fb8c20b"></a>

Sets the value of Skus_Optional and also sets Skus_IsSet to true using move semantics.

#### `public inline void `[`ClearSkus`](#structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb)`()` <a id="structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb"></a>

Clears the value of Skus_Optional and sets Skus_IsSet to false.

#### `public inline bool `[`IsSkusSet`](#structFRHAPI__PlatformSKUs_1acd37452c003a51f34b7f5b69b67e0d84)`() const` <a id="structFRHAPI__PlatformSKUs_1acd37452c003a51f34b7f5b69b67e0d84"></a>

Checks whether Skus_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a4315fc01368f9d25d8a05337a6bc0c4c)`()` <a id="structFRHAPI__PlatformSKUs_1a4315fc01368f9d25d8a05337a6bc0c4c"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a9963ee1fd79f14c58d722342ed1b3e8c)`() const` <a id="structFRHAPI__PlatformSKUs_1a9963ee1fd79f14c58d722342ed1b3e8c"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1acc76cdc6d5272fb49ec203c798979b8a)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKUs_1acc76cdc6d5272fb49ec203c798979b8a"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a886a5b9d4d09655191ac22fa2829f049)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PlatformSKUs_1a886a5b9d4d09655191ac22fa2829f049"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1ab561d2eb93fbf2512b426c0744f62579)`()` <a id="structFRHAPI__PlatformSKUs_1ab561d2eb93fbf2512b426c0744f62579"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1abd984fbb1eb96987023bd4c407e042cd)`() const` <a id="structFRHAPI__PlatformSKUs_1abd984fbb1eb96987023bd4c407e042cd"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a647ad0949a07a6a73353c92c917bddcb)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PlatformSKUs_1a647ad0949a07a6a73353c92c917bddcb"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a882f66a9e09db87937061352f349b2b0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PlatformSKUs_1a882f66a9e09db87937061352f349b2b0"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3)`()` <a id="structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PlatformSKUs_1a8f7e3f1b7d722de5229da09b8add613a)`() const` <a id="structFRHAPI__PlatformSKUs_1a8f7e3f1b7d722de5229da09b8add613a"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__PlatformSKUs_1a7353fd8c44ea788ea72479fd984c650f)`()` <a id="structFRHAPI__PlatformSKUs_1a7353fd8c44ea788ea72479fd984c650f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__PlatformSKUs_1a77a7fa5b060c73328526fb47daba489d)`() const` <a id="structFRHAPI__PlatformSKUs_1a77a7fa5b060c73328526fb47daba489d"></a>

Checks whether CacheInfo_Optional is set to null.

