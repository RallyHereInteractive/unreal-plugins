---
title: FRHAPI_PricePoints Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Price Points by Price Point ID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) >|[PricePoints_Optional](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466)|Price Points mapped by Price Point ID.|
|bool|[PricePoints_IsSet](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4)|true if PricePoints_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a7043a9c6f675719518d8a816d7c5285b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a500f0f5aadf46549e71cd214e518878c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > &|[GetPricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a2032211b6a89049ec98ca2ee7df9995e)()|Gets the value of PricePoints_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > &|[GetPricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a772ac4e5f11ccb5be518d31c016d38f5)()|Gets the value of PricePoints_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > &|[GetPricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a073792aab89e129860f19d9b285fb301)(const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > & DefaultValue)|Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1ad8c2c23f55f007fcadaacb79cb138e11)(TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > & OutValue)|Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > *|[GetPricePointsOrNull](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a6e7aec930ce4bc763d79e7948b08dbf4)()|Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > *|[GetPricePointsOrNull](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a375fc514578157b23bf3dc1311b650e1)()|Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a3b058fb0d21723a567e4f955c4733f53)(TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > NewValue)|Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.|
|void|[ClearPricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328)()|Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1af707663da5d4bbf8ec3fff55804f6960)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a2b48e1e38c0483a706eef570e35c8d54)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a6e03b6bc8338469fbbbfced6afcd3aed)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a8333dca65cc8af5aabe478e3d53a34c4)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1a9196079c8599ca7f5d37ee1347ba773e)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1aa5663ad500695f85e6738784af32b9c9)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1ab3b6b85d8519b6b269a2d3bb2b8c958c)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `PricePoints_Optional` <a id="structFRHAPI__PricePoints_1a70e82abf5cd08ddb7aa0d5fece697466"></a>

`TMap<FString, FRHAPI_PricePoint> FRHAPI_PricePoints::PricePoints_Optional`

Price Points mapped by Price Point ID.




### `PricePoints_IsSet` <a id="structFRHAPI__PricePoints_1ae5fdce3d5f30730677a6c8fef2397fd4"></a>

`bool FRHAPI_PricePoints::PricePoints_IsSet`

true if PricePoints_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__PricePoints_1a612733654c732623196ee449fa094ae0"></a>

`FRHAPI_CacheInfo FRHAPI_PricePoints::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__PricePoints_1aadc6fae8934998067331a65072fe72e1"></a>

`bool FRHAPI_PricePoints::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PricePoints_1a7043a9c6f675719518d8a816d7c5285b"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__PricePoints_1a500f0f5aadf46549e71cd214e518878c"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetPricePoints` <a id="structFRHAPI__PricePoints_1a2032211b6a89049ec98ca2ee7df9995e"></a>

TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > & GetPricePoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PricePoints_Optional, regardless of it having been set.




### `GetPricePoints` <a id="structFRHAPI__PricePoints_1a772ac4e5f11ccb5be518d31c016d38f5"></a>

const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > & GetPricePoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PricePoints_Optional, regardless of it having been set.




### `GetPricePoints` <a id="structFRHAPI__PricePoints_1a073792aab89e129860f19d9b285fb301"></a>

const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > & GetPricePoints(const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > &|DefaultValue|

#### Description

Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPricePoints` <a id="structFRHAPI__PricePoints_1ad8c2c23f55f007fcadaacb79cb138e11"></a>

bool GetPricePoints(TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > &|OutValue|

#### Description

Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.




### `GetPricePointsOrNull` <a id="structFRHAPI__PricePoints_1a6e7aec930ce4bc763d79e7948b08dbf4"></a>

TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > * GetPricePointsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.




### `GetPricePointsOrNull` <a id="structFRHAPI__PricePoints_1a375fc514578157b23bf3dc1311b650e1"></a>

const TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > * GetPricePointsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.




### `SetPricePoints` <a id="structFRHAPI__PricePoints_1a3b058fb0d21723a567e4f955c4733f53"></a>

void SetPricePoints(TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) >|NewValue|

#### Description

Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.




### `ClearPricePoints` <a id="structFRHAPI__PricePoints_1a352bbd66d385926c16a72270dd51a328"></a>

void ClearPricePoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__PricePoints_1af707663da5d4bbf8ec3fff55804f6960"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__PricePoints_1a2b48e1e38c0483a706eef570e35c8d54"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__PricePoints_1a6e03b6bc8338469fbbbfced6afcd3aed"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__PricePoints_1a8333dca65cc8af5aabe478e3d53a34c4"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__PricePoints_1a9196079c8599ca7f5d37ee1347ba773e"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__PricePoints_1aa5663ad500695f85e6738784af32b9c9"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__PricePoints_1ab3b6b85d8519b6b269a2d3bb2b8c958c"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__PricePoints_1abfa1adc34f7db0417bb34ef01d64f158"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





