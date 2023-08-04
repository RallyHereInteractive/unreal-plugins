# RHAPI_PricePoints <a id="group__RHAPI__PricePoints"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > `[`PricePoints_Optional`](#structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466) | Price Points mapped by Price Point ID.
`public bool `[`PricePoints_IsSet`](#structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4) | true if PricePoints_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PricePoints_1a7043a9c6f675719518d8a816d7c5285b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PricePoints_1a500f0f5aadf46549e71cd214e518878c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a2032211b6a89049ec98ca2ee7df9995e)`()` | Gets the value of PricePoints_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a772ac4e5f11ccb5be518d31c016d38f5)`() const` | Gets the value of PricePoints_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a073792aab89e129860f19d9b285fb301)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & DefaultValue) const` | Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPricePoints`](#structFRHAPI__PricePoints_1ad8c2c23f55f007fcadaacb79cb138e11)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & OutValue) const` | Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a6e7aec930ce4bc763d79e7948b08dbf4)`()` | Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a375fc514578157b23bf3dc1311b650e1)`() const` | Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPricePoints`](#structFRHAPI__PricePoints_1a3b058fb0d21723a567e4f955c4733f53)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > NewValue)` | Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.
`public inline void `[`ClearPricePoints`](#structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328)`()` | Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1af707663da5d4bbf8ec3fff55804f6960)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a2b48e1e38c0483a706eef570e35c8d54)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a6e03b6bc8338469fbbbfced6afcd3aed)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a8333dca65cc8af5aabe478e3d53a34c4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1a9196079c8599ca7f5d37ee1347ba773e)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1aa5663ad500695f85e6738784af32b9c9)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1ab3b6b85d8519b6b269a2d3bb2b8c958c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > `[`PricePoints_Optional`](#structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466) <a id="structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466"></a>

Price Points mapped by Price Point ID.

<br>
#### `public bool `[`PricePoints_IsSet`](#structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4) <a id="structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4"></a>

true if PricePoints_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0) <a id="structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1) <a id="structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PricePoints_1a7043a9c6f675719518d8a816d7c5285b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PricePoints_1a7043a9c6f675719518d8a816d7c5285b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PricePoints_1a500f0f5aadf46549e71cd214e518878c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PricePoints_1a500f0f5aadf46549e71cd214e518878c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a2032211b6a89049ec98ca2ee7df9995e)`()` <a id="structFRHAPI__PricePoints_1a2032211b6a89049ec98ca2ee7df9995e"></a>

Gets the value of PricePoints_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a772ac4e5f11ccb5be518d31c016d38f5)`() const` <a id="structFRHAPI__PricePoints_1a772ac4e5f11ccb5be518d31c016d38f5"></a>

Gets the value of PricePoints_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#structFRHAPI__PricePoints_1a073792aab89e129860f19d9b285fb301)`(const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoints_1a073792aab89e129860f19d9b285fb301"></a>

Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPricePoints`](#structFRHAPI__PricePoints_1ad8c2c23f55f007fcadaacb79cb138e11)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & OutValue) const` <a id="structFRHAPI__PricePoints_1ad8c2c23f55f007fcadaacb79cb138e11"></a>

Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a6e7aec930ce4bc763d79e7948b08dbf4)`()` <a id="structFRHAPI__PricePoints_1a6e7aec930ce4bc763d79e7948b08dbf4"></a>

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > * `[`GetPricePointsOrNull`](#structFRHAPI__PricePoints_1a375fc514578157b23bf3dc1311b650e1)`() const` <a id="structFRHAPI__PricePoints_1a375fc514578157b23bf3dc1311b650e1"></a>

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPricePoints`](#structFRHAPI__PricePoints_1a3b058fb0d21723a567e4f955c4733f53)`(TMap< FString, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > NewValue)` <a id="structFRHAPI__PricePoints_1a3b058fb0d21723a567e4f955c4733f53"></a>

Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.

<br>
#### `public inline void `[`ClearPricePoints`](#structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328)`()` <a id="structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328"></a>

Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1af707663da5d4bbf8ec3fff55804f6960)`()` <a id="structFRHAPI__PricePoints_1af707663da5d4bbf8ec3fff55804f6960"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a2b48e1e38c0483a706eef570e35c8d54)`() const` <a id="structFRHAPI__PricePoints_1a2b48e1e38c0483a706eef570e35c8d54"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a6e03b6bc8338469fbbbfced6afcd3aed)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PricePoints_1a6e03b6bc8338469fbbbfced6afcd3aed"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PricePoints_1a8333dca65cc8af5aabe478e3d53a34c4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PricePoints_1a8333dca65cc8af5aabe478e3d53a34c4"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1a9196079c8599ca7f5d37ee1347ba773e)`()` <a id="structFRHAPI__PricePoints_1a9196079c8599ca7f5d37ee1347ba773e"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoints_1aa5663ad500695f85e6738784af32b9c9)`() const` <a id="structFRHAPI__PricePoints_1aa5663ad500695f85e6738784af32b9c9"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoints_1ab3b6b85d8519b6b269a2d3bb2b8c958c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__PricePoints_1ab3b6b85d8519b6b269a2d3bb2b8c958c"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158)`()` <a id="structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
