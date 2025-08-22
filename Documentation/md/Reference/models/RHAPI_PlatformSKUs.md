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
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a15700c664c844a37ac2352c6d3459a17)`()` | Gets the value of Skus_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1aa320647d8ffcbc4bb03436d86395e190)`() const` | Gets the value of Skus_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a7c500358ad066cf2eac3ec55edd274d7)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & DefaultValue) const` | Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a3595859c3994786c363d896ab52ccdec)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & OutValue) const` | Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1a53e3922e6334442afcdf709aeba153e0)`()` | Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1a8c2aec23e5d2bd5f0cdfe30b947fdbb8)`() const` | Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1a67ad458ccf2f78eafe7380896b46f849)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & NewValue)` | Sets the value of Skus_Optional and also sets Skus_IsSet to true.
`public inline FORCEINLINE void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1abc202e55c0042939f58f8fbfd49428a6)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > && NewValue)` | Sets the value of Skus_Optional and also sets Skus_IsSet to true using move semantics.
`public inline void `[`ClearSkus`](#structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb)`()` | Clears the value of Skus_Optional and sets Skus_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a3c86a9232090f392d56bd19b129cc521)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a9dcff7454f30d6444a5454520bc60293)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a76706f544d73103025f803bea934f3b6)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a5cc56098b719dcf0d12f34fae56aeed0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1a60d2efdc445fa08e603d7f3219a46fa5)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1a5b39419fac3579d49c829540a5238557)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a511b008af79c91275add0716f1475176)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a6e09cfefa8af3ea4ab26e0754ecc4cae)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PlatformSKUs_1ac621146d8e4f13338a06c5cc47681c9b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PlatformSKUs_1afcff6b02e138ad65b1c1cef25ed7984e)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a15700c664c844a37ac2352c6d3459a17)`()` <a id="structFRHAPI__PlatformSKUs_1a15700c664c844a37ac2352c6d3459a17"></a>

Gets the value of Skus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1aa320647d8ffcbc4bb03436d86395e190)`() const` <a id="structFRHAPI__PlatformSKUs_1aa320647d8ffcbc4bb03436d86395e190"></a>

Gets the value of Skus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a7c500358ad066cf2eac3ec55edd274d7)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & DefaultValue) const` <a id="structFRHAPI__PlatformSKUs_1a7c500358ad066cf2eac3ec55edd274d7"></a>

Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSkus`](#structFRHAPI__PlatformSKUs_1a3595859c3994786c363d896ab52ccdec)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & OutValue) const` <a id="structFRHAPI__PlatformSKUs_1a3595859c3994786c363d896ab52ccdec"></a>

Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1a53e3922e6334442afcdf709aeba153e0)`()` <a id="structFRHAPI__PlatformSKUs_1a53e3922e6334442afcdf709aeba153e0"></a>

Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > * `[`GetSkusOrNull`](#structFRHAPI__PlatformSKUs_1a8c2aec23e5d2bd5f0cdfe30b947fdbb8)`() const` <a id="structFRHAPI__PlatformSKUs_1a8c2aec23e5d2bd5f0cdfe30b947fdbb8"></a>

Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1a67ad458ccf2f78eafe7380896b46f849)`(const TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > & NewValue)` <a id="structFRHAPI__PlatformSKUs_1a67ad458ccf2f78eafe7380896b46f849"></a>

Sets the value of Skus_Optional and also sets Skus_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSkus`](#structFRHAPI__PlatformSKUs_1abc202e55c0042939f58f8fbfd49428a6)`(TArray< `[`FRHAPI_PlatformSKU`](RHAPI_PlatformSKU.md#structFRHAPI__PlatformSKU)` > && NewValue)` <a id="structFRHAPI__PlatformSKUs_1abc202e55c0042939f58f8fbfd49428a6"></a>

Sets the value of Skus_Optional and also sets Skus_IsSet to true using move semantics.

#### `public inline void `[`ClearSkus`](#structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb)`()` <a id="structFRHAPI__PlatformSKUs_1a08ca18a31302856e16bd7c639613c6bb"></a>

Clears the value of Skus_Optional and sets Skus_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a3c86a9232090f392d56bd19b129cc521)`()` <a id="structFRHAPI__PlatformSKUs_1a3c86a9232090f392d56bd19b129cc521"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a9dcff7454f30d6444a5454520bc60293)`() const` <a id="structFRHAPI__PlatformSKUs_1a9dcff7454f30d6444a5454520bc60293"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a76706f544d73103025f803bea934f3b6)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKUs_1a76706f544d73103025f803bea934f3b6"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKUs_1a5cc56098b719dcf0d12f34fae56aeed0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PlatformSKUs_1a5cc56098b719dcf0d12f34fae56aeed0"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1a60d2efdc445fa08e603d7f3219a46fa5)`()` <a id="structFRHAPI__PlatformSKUs_1a60d2efdc445fa08e603d7f3219a46fa5"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKUs_1a5b39419fac3579d49c829540a5238557)`() const` <a id="structFRHAPI__PlatformSKUs_1a5b39419fac3579d49c829540a5238557"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a511b008af79c91275add0716f1475176)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PlatformSKUs_1a511b008af79c91275add0716f1475176"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PlatformSKUs_1a6e09cfefa8af3ea4ab26e0754ecc4cae)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PlatformSKUs_1a6e09cfefa8af3ea4ab26e0754ecc4cae"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3)`()` <a id="structFRHAPI__PlatformSKUs_1ab850ddbfa9a2c1ea59ff31d5c08825e3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PlatformSKUs_1ac621146d8e4f13338a06c5cc47681c9b)`()` <a id="structFRHAPI__PlatformSKUs_1ac621146d8e4f13338a06c5cc47681c9b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PlatformSKUs_1afcff6b02e138ad65b1c1cef25ed7984e)`() const` <a id="structFRHAPI__PlatformSKUs_1afcff6b02e138ad65b1c1cef25ed7984e"></a>

Checks whether CacheInfo_Optional is set to null.

