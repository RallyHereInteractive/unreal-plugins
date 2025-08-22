---
title: RHAPI_PricePoints
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PricePoints`](#structFRHAPI__PricePoints) | A collection of Price Points by Price Point ID.

## struct `FRHAPI_PricePoints` <a id="structFRHAPI__PricePoints"></a>

```
struct FRHAPI_PricePoints
  : public FRHAPI_Model
```

A collection of Price Points by Price Point ID.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > `[`PricePoints_Optional`](#structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466) | Price Points mapped by Price Point ID.
`public bool `[`PricePoints_IsSet`](#structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4) | true if PricePoints_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__PricePoints_1a2d2593bf7b57a14941a506bba9ef2742) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PricePoints_1ae5223d7df2e8cc2d115d0997f17c4c2a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PricePoints_1a9dd3f02f3b5b8236fa985e3e73c300d4)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a2c40535d58492bcd5df62fd791215560)`()` | Gets the value of PricePoints_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a92e5fba8224eeeca7e565d14f7f7a6d6)`() const` | Gets the value of PricePoints_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1ad0b974db30d646699ff5365c6db1c7d4)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & DefaultValue) const` | Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPricePoints`](#structFRHAPI__PricePoints_1a8191208db5d3bd74921b8b9387c765aa)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & OutValue) const` | Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a74c58861511c5f66f16eba75495774c0)`()` | Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a199dac48797019a761242a08d7320e38)`() const` | Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPricePoints`](#structFRHAPI__PricePoints_1ab20bebabfc1cf59c176e71d63202b7b6)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & NewValue)` | Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.
`public inline FORCEINLINE void `[`SetPricePoints`](#structFRHAPI__PricePoints_1a0d419fff6c52c741171dacbdcc065d1b)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > && NewValue)` | Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true using move semantics.
`public inline void `[`ClearPricePoints`](#structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328)`()` | Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a6c2fdeeafc97fca2a6a3f44ec557e3cd)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1afa0cfbbd48b9375d74dd45df8c84045e)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1ad79e836801d8f2751f3ecbe61398e415)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PricePoints_1af3e3483fe058c590a6ba26281ab27ec6)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1a4248f008d79b0389ad81530082743e8d)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1a2d8cbdc588f66699fa2965651010fe73)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1a543ca75aed0eeb90411e8eaa1fe0f8ef)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1aa2dc969d9ec7bba372e525062698e571)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PricePoints_1a26c9f59e1288b4a922184712893a6d33)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PricePoints_1aa104d7a4cf7a33fcbb9d745c161c8cc2)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > `[`PricePoints_Optional`](#structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466) <a id="structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466"></a>

Price Points mapped by Price Point ID.

#### `public bool `[`PricePoints_IsSet`](#structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4) <a id="structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4"></a>

true if PricePoints_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0) <a id="structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1) <a id="structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__PricePoints_1a2d2593bf7b57a14941a506bba9ef2742) <a id="structFRHAPI__PricePoints_1a2d2593bf7b57a14941a506bba9ef2742"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PricePoints_1ae5223d7df2e8cc2d115d0997f17c4c2a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PricePoints_1ae5223d7df2e8cc2d115d0997f17c4c2a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PricePoints_1a9dd3f02f3b5b8236fa985e3e73c300d4)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PricePoints_1a9dd3f02f3b5b8236fa985e3e73c300d4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a2c40535d58492bcd5df62fd791215560)`()` <a id="structFRHAPI__PricePoints_1a2c40535d58492bcd5df62fd791215560"></a>

Gets the value of PricePoints_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a92e5fba8224eeeca7e565d14f7f7a6d6)`() const` <a id="structFRHAPI__PricePoints_1a92e5fba8224eeeca7e565d14f7f7a6d6"></a>

Gets the value of PricePoints_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1ad0b974db30d646699ff5365c6db1c7d4)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoints_1ad0b974db30d646699ff5365c6db1c7d4"></a>

Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPricePoints`](#structFRHAPI__PricePoints_1a8191208db5d3bd74921b8b9387c765aa)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & OutValue) const` <a id="structFRHAPI__PricePoints_1a8191208db5d3bd74921b8b9387c765aa"></a>

Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a74c58861511c5f66f16eba75495774c0)`()` <a id="structFRHAPI__PricePoints_1a74c58861511c5f66f16eba75495774c0"></a>

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a199dac48797019a761242a08d7320e38)`() const` <a id="structFRHAPI__PricePoints_1a199dac48797019a761242a08d7320e38"></a>

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPricePoints`](#structFRHAPI__PricePoints_1ab20bebabfc1cf59c176e71d63202b7b6)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & NewValue)` <a id="structFRHAPI__PricePoints_1ab20bebabfc1cf59c176e71d63202b7b6"></a>

Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPricePoints`](#structFRHAPI__PricePoints_1a0d419fff6c52c741171dacbdcc065d1b)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > && NewValue)` <a id="structFRHAPI__PricePoints_1a0d419fff6c52c741171dacbdcc065d1b"></a>

Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true using move semantics.

#### `public inline void `[`ClearPricePoints`](#structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328)`()` <a id="structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328"></a>

Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a6c2fdeeafc97fca2a6a3f44ec557e3cd)`()` <a id="structFRHAPI__PricePoints_1a6c2fdeeafc97fca2a6a3f44ec557e3cd"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1afa0cfbbd48b9375d74dd45df8c84045e)`() const` <a id="structFRHAPI__PricePoints_1afa0cfbbd48b9375d74dd45df8c84045e"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1ad79e836801d8f2751f3ecbe61398e415)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PricePoints_1ad79e836801d8f2751f3ecbe61398e415"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PricePoints_1af3e3483fe058c590a6ba26281ab27ec6)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PricePoints_1af3e3483fe058c590a6ba26281ab27ec6"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1a4248f008d79b0389ad81530082743e8d)`()` <a id="structFRHAPI__PricePoints_1a4248f008d79b0389ad81530082743e8d"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1a2d8cbdc588f66699fa2965651010fe73)`() const` <a id="structFRHAPI__PricePoints_1a2d8cbdc588f66699fa2965651010fe73"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1a543ca75aed0eeb90411e8eaa1fe0f8ef)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PricePoints_1a543ca75aed0eeb90411e8eaa1fe0f8ef"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1aa2dc969d9ec7bba372e525062698e571)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PricePoints_1aa2dc969d9ec7bba372e525062698e571"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158)`()` <a id="structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PricePoints_1a26c9f59e1288b4a922184712893a6d33)`()` <a id="structFRHAPI__PricePoints_1a26c9f59e1288b4a922184712893a6d33"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PricePoints_1aa104d7a4cf7a33fcbb9d745c161c8cc2)`() const` <a id="structFRHAPI__PricePoints_1aa104d7a4cf7a33fcbb9d745c161c8cc2"></a>

Checks whether CacheInfo_Optional is set to null.

