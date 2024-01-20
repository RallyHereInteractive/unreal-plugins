---
title: FRHAPI_TimeFrames Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Time Frames by Time Frame ID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) >|[TimeFrames_Optional](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968)|Time Frames mapped by Time Frame ID.|
|bool|[TimeFrames_IsSet](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941)|true if TimeFrames_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1ae878fe3b3c90541d724f10fc6f314553)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1af19b5115fb551f63293d5e526bbea6a0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > &|[GetTimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a0de07dc2f3be8a9ddf80f432abd04ac2)()|Gets the value of TimeFrames_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > &|[GetTimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a92572355f05fcf7a8444dff1631781ae)()|Gets the value of TimeFrames_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > &|[GetTimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a6039960c7cb3ca287c1454a4654f516f)(const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > & DefaultValue)|Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1afb3119beec255e6853e5e9ae8eba508e)(TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > & OutValue)|Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > *|[GetTimeFramesOrNull](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a1eb971c80b89995829a7e6e75fb6d6d4)()|Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > *|[GetTimeFramesOrNull](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a8a84f1d040479d378e3f01590b5330a4)()|Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a342bc17e411933efa817ffaef12b9ac9)(TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > NewValue)|Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.|
|void|[ClearTimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac)()|Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1afdce661d2525303ec4f6efd32d6267a6)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a244e574ac594017a49cedd06d9833c7e)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a102ea5ffca49bf4c8f266282dcc69659)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1abc908c43a015dc171892dcfd5935e2e4)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a579bb68ed372843a81b04429f24b624e)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a8a84c2ed7f86c298bea23afd5c543d3d)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a1f1b825a37d54eb121adfbde6148df66)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `TimeFrames_Optional` <a id="structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968"></a>

`TMap<FString, FRHAPI_TimeFrame> FRHAPI_TimeFrames::TimeFrames_Optional`

Time Frames mapped by Time Frame ID.




### `TimeFrames_IsSet` <a id="structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941"></a>

`bool FRHAPI_TimeFrames::TimeFrames_IsSet`

true if TimeFrames_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4"></a>

`FRHAPI_CacheInfo FRHAPI_TimeFrames::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a"></a>

`bool FRHAPI_TimeFrames::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__TimeFrames_1ae878fe3b3c90541d724f10fc6f314553"></a>

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



### `WriteJson` <a id="structFRHAPI__TimeFrames_1af19b5115fb551f63293d5e526bbea6a0"></a>

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



### `GetTimeFrames` <a id="structFRHAPI__TimeFrames_1a0de07dc2f3be8a9ddf80f432abd04ac2"></a>

TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > & GetTimeFrames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TimeFrames_Optional, regardless of it having been set.




### `GetTimeFrames` <a id="structFRHAPI__TimeFrames_1a92572355f05fcf7a8444dff1631781ae"></a>

const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > & GetTimeFrames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TimeFrames_Optional, regardless of it having been set.




### `GetTimeFrames` <a id="structFRHAPI__TimeFrames_1a6039960c7cb3ca287c1454a4654f516f"></a>

const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > & GetTimeFrames(const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > &|DefaultValue|

#### Description

Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTimeFrames` <a id="structFRHAPI__TimeFrames_1afb3119beec255e6853e5e9ae8eba508e"></a>

bool GetTimeFrames(TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > &|OutValue|

#### Description

Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.




### `GetTimeFramesOrNull` <a id="structFRHAPI__TimeFrames_1a1eb971c80b89995829a7e6e75fb6d6d4"></a>

TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > * GetTimeFramesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.




### `GetTimeFramesOrNull` <a id="structFRHAPI__TimeFrames_1a8a84f1d040479d378e3f01590b5330a4"></a>

const TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > * GetTimeFramesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.




### `SetTimeFrames` <a id="structFRHAPI__TimeFrames_1a342bc17e411933efa817ffaef12b9ac9"></a>

void SetTimeFrames(TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) >|NewValue|

#### Description

Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.




### `ClearTimeFrames` <a id="structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac"></a>

void ClearTimeFrames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__TimeFrames_1afdce661d2525303ec4f6efd32d6267a6"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__TimeFrames_1a244e574ac594017a49cedd06d9833c7e"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__TimeFrames_1a102ea5ffca49bf4c8f266282dcc69659"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__TimeFrames_1abc908c43a015dc171892dcfd5935e2e4"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__TimeFrames_1a579bb68ed372843a81b04429f24b624e"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__TimeFrames_1a8a84c2ed7f86c298bea23afd5c543d3d"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__TimeFrames_1a1f1b825a37d54eb121adfbde6148df66"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





