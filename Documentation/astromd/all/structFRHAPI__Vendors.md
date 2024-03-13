---
title: FRHAPI_Vendors Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Vendors by Vendor ID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) >|[Vendors_Optional](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1aa0932323dd37de9240161ecfe54b90f7)||
|bool|[Vendors_IsSet](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a8a31455ea201b24fee5c64979cb805c2)|true if Vendors_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1aee885d293125555b4b4b1d77f07c86c6)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1aaec0407be12287e3c6c8b446eee6e835)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a1465ffa063760bb1158100efdb832951)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1ad242669a09a05542227fd1b4ff2f1912)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > &|[GetVendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a889d5215cae0ecda378d2d2221fa6951)()|Gets the value of Vendors_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > &|[GetVendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a639b0e253c63a470c96873244e516ebf)()|Gets the value of Vendors_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > &|[GetVendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1aa2caf8513ae3b43c0329614b8c1dfc64)(const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > & DefaultValue)|Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a21ae98705597d7efaad06c370782b488)(TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > & OutValue)|Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > *|[GetVendorsOrNull](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1ac86c11f25325fb7eae822d137a1f7bae)()|Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > *|[GetVendorsOrNull](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a09cc0607623365d139c958bfca353e42)()|Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a1992ec62fd36fe7256f70dc6e6a2a1ae)(TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > NewValue)|Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.|
|void|[ClearVendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855)()|Clears the value of Vendors_Optional and sets Vendors_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1ad06a6b0281def6dfb91da3879cda952f)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1af6bd7728ecb4fe616da14216b0e2d406)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a3e049768dfa55187ff8e9f7a50312c80)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a566ae446763cd8784d96daadfd0d8693)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1a77e46209434a0e26c564ac1f6f14b6e2)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1ae925fc7ec39abd1e809daa3c7d7e5d7d)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1ab8a4b8ef4f2b0dd91046eecc58feffd2)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `Vendors_Optional` <a id="structFRHAPI__Vendors_1aa0932323dd37de9240161ecfe54b90f7"></a>

`TMap<FString, FRHAPI_Vendor> FRHAPI_Vendors::Vendors_Optional`






### `Vendors_IsSet` <a id="structFRHAPI__Vendors_1a8a31455ea201b24fee5c64979cb805c2"></a>

`bool FRHAPI_Vendors::Vendors_IsSet`

true if Vendors_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__Vendors_1aee885d293125555b4b4b1d77f07c86c6"></a>

`FRHAPI_CacheInfo FRHAPI_Vendors::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__Vendors_1aaec0407be12287e3c6c8b446eee6e835"></a>

`bool FRHAPI_Vendors::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Vendors_1a1465ffa063760bb1158100efdb832951"></a>

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



### `WriteJson` <a id="structFRHAPI__Vendors_1ad242669a09a05542227fd1b4ff2f1912"></a>

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



### `GetVendors` <a id="structFRHAPI__Vendors_1a889d5215cae0ecda378d2d2221fa6951"></a>

TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > & GetVendors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Vendors_Optional, regardless of it having been set.




### `GetVendors` <a id="structFRHAPI__Vendors_1a639b0e253c63a470c96873244e516ebf"></a>

const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > & GetVendors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Vendors_Optional, regardless of it having been set.




### `GetVendors` <a id="structFRHAPI__Vendors_1aa2caf8513ae3b43c0329614b8c1dfc64"></a>

const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > & GetVendors(const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > &|DefaultValue|

#### Description

Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVendors` <a id="structFRHAPI__Vendors_1a21ae98705597d7efaad06c370782b488"></a>

bool GetVendors(TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > &|OutValue|

#### Description

Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.




### `GetVendorsOrNull` <a id="structFRHAPI__Vendors_1ac86c11f25325fb7eae822d137a1f7bae"></a>

TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > * GetVendorsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.




### `GetVendorsOrNull` <a id="structFRHAPI__Vendors_1a09cc0607623365d139c958bfca353e42"></a>

const TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > * GetVendorsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.




### `SetVendors` <a id="structFRHAPI__Vendors_1a1992ec62fd36fe7256f70dc6e6a2a1ae"></a>

void SetVendors(TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) >|NewValue|

#### Description

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.




### `ClearVendors` <a id="structFRHAPI__Vendors_1aba0ed2732c70584fa05e8abb0eb14855"></a>

void ClearVendors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Vendors_Optional and sets Vendors_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__Vendors_1ad06a6b0281def6dfb91da3879cda952f"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Vendors_1af6bd7728ecb4fe616da14216b0e2d406"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Vendors_1a3e049768dfa55187ff8e9f7a50312c80"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__Vendors_1a566ae446763cd8784d96daadfd0d8693"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Vendors_1a77e46209434a0e26c564ac1f6f14b6e2"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Vendors_1ae925fc7ec39abd1e809daa3c7d7e5d7d"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__Vendors_1ab8a4b8ef4f2b0dd91046eecc58feffd2"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__Vendors_1ae62d7b93e3f17f45b54c1d61b666a0c7"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





