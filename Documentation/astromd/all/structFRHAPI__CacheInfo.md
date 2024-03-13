---
title: FRHAPI_CacheInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Cache information for the resource it is attached to. The etag value can be used with the If-None-Match and If-Match headers.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Etag](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a3865c393796a7c19f6d7a654189fabaf)||
|FString|[StrRep_Optional](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a938568e3ec9062c4a82cece832024b9f)||
|bool|[StrRep_IsSet](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a87a1e5ca07427850d04158a042692726)|true if StrRep_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1acd6f92f7d036d8477f93c8932434bab6)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1afc9b3c904076053b5d4c457cb59fc9d6)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetEtag](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a3eeacaaa962ca3a8c2dbd5c786c03d47)()|Gets the value of Etag.|
|const FString &|[GetEtag](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a70906082e6cf7aaaccfcb3a28914df4a)()|Gets the value of Etag.|
|void|[SetEtag](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1ab00ba350e0d857f8f5a25b2502d61f72)(FString NewValue)|Sets the value of Etag.|
|FString &|[GetStrRep](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1aa2c8e02237725aeb366b3ad9d4321a84)()|Gets the value of StrRep_Optional, regardless of it having been set.|
|const FString &|[GetStrRep](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a3770dab27ec97bbd78cff0687c6a1419)()|Gets the value of StrRep_Optional, regardless of it having been set.|
|const FString &|[GetStrRep](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1ad6577093d7ff910a546f357f63cd6678)(const FString & DefaultValue)|Gets the value of StrRep_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStrRep](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1ade0b14154bf2de9b79dd99a5f82f0e3f)(FString & OutValue)|Fills OutValue with the value of StrRep_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetStrRepOrNull](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a1e2371d34addfd12dbb140d2657269c7)()|Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetStrRepOrNull](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1af2861c77379562d11e31f7130c42562e)()|Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStrRep](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a664234243e3f6949edc29a3b46726d82)(FString NewValue)|Sets the value of StrRep_Optional and also sets StrRep_IsSet to true.|
|void|[ClearStrRep](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo_1a961e7ae4d42f98b5708fa842a80bb990)()|Clears the value of StrRep_Optional and sets StrRep_IsSet to false.|
## Public Attributes



### `Etag` <a id="structFRHAPI__CacheInfo_1a3865c393796a7c19f6d7a654189fabaf"></a>

`FString FRHAPI_CacheInfo::Etag`






### `StrRep_Optional` <a id="structFRHAPI__CacheInfo_1a938568e3ec9062c4a82cece832024b9f"></a>

`FString FRHAPI_CacheInfo::StrRep_Optional`






### `StrRep_IsSet` <a id="structFRHAPI__CacheInfo_1a87a1e5ca07427850d04158a042692726"></a>

`bool FRHAPI_CacheInfo::StrRep_IsSet`

true if StrRep_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__CacheInfo_1acd6f92f7d036d8477f93c8932434bab6"></a>

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



### `WriteJson` <a id="structFRHAPI__CacheInfo_1afc9b3c904076053b5d4c457cb59fc9d6"></a>

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



### `GetEtag` <a id="structFRHAPI__CacheInfo_1a3eeacaaa962ca3a8c2dbd5c786c03d47"></a>

FString & GetEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Etag.




### `GetEtag` <a id="structFRHAPI__CacheInfo_1a70906082e6cf7aaaccfcb3a28914df4a"></a>

const FString & GetEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Etag.




### `SetEtag` <a id="structFRHAPI__CacheInfo_1ab00ba350e0d857f8f5a25b2502d61f72"></a>

void SetEtag(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Etag.




### `GetStrRep` <a id="structFRHAPI__CacheInfo_1aa2c8e02237725aeb366b3ad9d4321a84"></a>

FString & GetStrRep()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StrRep_Optional, regardless of it having been set.




### `GetStrRep` <a id="structFRHAPI__CacheInfo_1a3770dab27ec97bbd78cff0687c6a1419"></a>

const FString & GetStrRep()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StrRep_Optional, regardless of it having been set.




### `GetStrRep` <a id="structFRHAPI__CacheInfo_1ad6577093d7ff910a546f357f63cd6678"></a>

const FString & GetStrRep(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of StrRep_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStrRep` <a id="structFRHAPI__CacheInfo_1ade0b14154bf2de9b79dd99a5f82f0e3f"></a>

bool GetStrRep(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of StrRep_Optional and returns true if it has been set, otherwise returns false.




### `GetStrRepOrNull` <a id="structFRHAPI__CacheInfo_1a1e2371d34addfd12dbb140d2657269c7"></a>

FString * GetStrRepOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.




### `GetStrRepOrNull` <a id="structFRHAPI__CacheInfo_1af2861c77379562d11e31f7130c42562e"></a>

const FString * GetStrRepOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.




### `SetStrRep` <a id="structFRHAPI__CacheInfo_1a664234243e3f6949edc29a3b46726d82"></a>

void SetStrRep(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of StrRep_Optional and also sets StrRep_IsSet to true.




### `ClearStrRep` <a id="structFRHAPI__CacheInfo_1a961e7ae4d42f98b5708fa842a80bb990"></a>

void ClearStrRep()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of StrRep_Optional and sets StrRep_IsSet to false.





