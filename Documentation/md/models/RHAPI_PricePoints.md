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
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0) | Cache info for the Price Points.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PricePoints_1ae5223d7df2e8cc2d115d0997f17c4c2a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PricePoints_1ae597e274975fe30bcff24ccd55ccdd95)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a2032211b6a89049ec98ca2ee7df9995e)`()` | Gets the value of PricePoints_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a772ac4e5f11ccb5be518d31c016d38f5)`() const` | Gets the value of PricePoints_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a073792aab89e129860f19d9b285fb301)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & DefaultValue) const` | Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPricePoints`](#structFRHAPI__PricePoints_1ad8c2c23f55f007fcadaacb79cb138e11)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & OutValue) const` | Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a6e7aec930ce4bc763d79e7948b08dbf4)`()` | Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a375fc514578157b23bf3dc1311b650e1)`() const` | Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPricePoints`](#structFRHAPI__PricePoints_1aee6added6f303752a6123b955b464352)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & NewValue)` | Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.
`public inline void `[`SetPricePoints`](#structFRHAPI__PricePoints_1a7c49718f51bd207c46d4dd6b7d739d80)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > && NewValue)` | Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true using move semantics.
`public inline void `[`ClearPricePoints`](#structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328)`()` | Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.
`public inline bool `[`IsPricePointsSet`](#structFRHAPI__PricePoints_1a5b3cc9451836604a09b05602ce5f9c21)`() const` | Checks whether PricePoints_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1af707663da5d4bbf8ec3fff55804f6960)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a2b48e1e38c0483a706eef570e35c8d54)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a6e03b6bc8338469fbbbfced6afcd3aed)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a8333dca65cc8af5aabe478e3d53a34c4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1a9196079c8599ca7f5d37ee1347ba773e)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1aa5663ad500695f85e6738784af32b9c9)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1a33c968af1245465bfd900057fd774f02)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1a100d349c79e8afea4ca1c9f79d6b1c8d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PricePoints_1a09c2adfd31c5920b874cdfe1ddb7937e)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > `[`PricePoints_Optional`](#structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466) <a id="structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466"></a>

Price Points mapped by Price Point ID.

#### `public bool `[`PricePoints_IsSet`](#structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4) <a id="structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4"></a>

true if PricePoints_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0) <a id="structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0"></a>

Cache info for the Price Points.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1) <a id="structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PricePoints_1ae5223d7df2e8cc2d115d0997f17c4c2a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PricePoints_1ae5223d7df2e8cc2d115d0997f17c4c2a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PricePoints_1ae597e274975fe30bcff24ccd55ccdd95)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PricePoints_1ae597e274975fe30bcff24ccd55ccdd95"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a2032211b6a89049ec98ca2ee7df9995e)`()` <a id="structFRHAPI__PricePoints_1a2032211b6a89049ec98ca2ee7df9995e"></a>

Gets the value of PricePoints_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a772ac4e5f11ccb5be518d31c016d38f5)`() const` <a id="structFRHAPI__PricePoints_1a772ac4e5f11ccb5be518d31c016d38f5"></a>

Gets the value of PricePoints_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a073792aab89e129860f19d9b285fb301)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoints_1a073792aab89e129860f19d9b285fb301"></a>

Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPricePoints`](#structFRHAPI__PricePoints_1ad8c2c23f55f007fcadaacb79cb138e11)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & OutValue) const` <a id="structFRHAPI__PricePoints_1ad8c2c23f55f007fcadaacb79cb138e11"></a>

Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a6e7aec930ce4bc763d79e7948b08dbf4)`()` <a id="structFRHAPI__PricePoints_1a6e7aec930ce4bc763d79e7948b08dbf4"></a>

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a375fc514578157b23bf3dc1311b650e1)`() const` <a id="structFRHAPI__PricePoints_1a375fc514578157b23bf3dc1311b650e1"></a>

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPricePoints`](#structFRHAPI__PricePoints_1aee6added6f303752a6123b955b464352)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & NewValue)` <a id="structFRHAPI__PricePoints_1aee6added6f303752a6123b955b464352"></a>

Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.

#### `public inline void `[`SetPricePoints`](#structFRHAPI__PricePoints_1a7c49718f51bd207c46d4dd6b7d739d80)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > && NewValue)` <a id="structFRHAPI__PricePoints_1a7c49718f51bd207c46d4dd6b7d739d80"></a>

Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true using move semantics.

#### `public inline void `[`ClearPricePoints`](#structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328)`()` <a id="structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328"></a>

Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.

#### `public inline bool `[`IsPricePointsSet`](#structFRHAPI__PricePoints_1a5b3cc9451836604a09b05602ce5f9c21)`() const` <a id="structFRHAPI__PricePoints_1a5b3cc9451836604a09b05602ce5f9c21"></a>

Checks whether PricePoints_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1af707663da5d4bbf8ec3fff55804f6960)`()` <a id="structFRHAPI__PricePoints_1af707663da5d4bbf8ec3fff55804f6960"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a2b48e1e38c0483a706eef570e35c8d54)`() const` <a id="structFRHAPI__PricePoints_1a2b48e1e38c0483a706eef570e35c8d54"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a6e03b6bc8338469fbbbfced6afcd3aed)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PricePoints_1a6e03b6bc8338469fbbbfced6afcd3aed"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a8333dca65cc8af5aabe478e3d53a34c4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PricePoints_1a8333dca65cc8af5aabe478e3d53a34c4"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1a9196079c8599ca7f5d37ee1347ba773e)`()` <a id="structFRHAPI__PricePoints_1a9196079c8599ca7f5d37ee1347ba773e"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1aa5663ad500695f85e6738784af32b9c9)`() const` <a id="structFRHAPI__PricePoints_1aa5663ad500695f85e6738784af32b9c9"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1a33c968af1245465bfd900057fd774f02)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PricePoints_1a33c968af1245465bfd900057fd774f02"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1a100d349c79e8afea4ca1c9f79d6b1c8d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PricePoints_1a100d349c79e8afea4ca1c9f79d6b1c8d"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158)`()` <a id="structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PricePoints_1a09c2adfd31c5920b874cdfe1ddb7937e)`() const` <a id="structFRHAPI__PricePoints_1a09c2adfd31c5920b874cdfe1ddb7937e"></a>

Checks whether CacheInfo_Optional has been set.

