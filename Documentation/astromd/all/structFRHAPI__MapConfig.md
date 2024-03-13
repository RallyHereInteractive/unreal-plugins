---
title: FRHAPI_MapConfig Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED Configuration about a specific map for an instance to load into.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[MapGameId_Optional](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3)|ID to uniquely identify this map game.|
|bool|[MapGameId_IsSet](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5)|true if MapGameId_Optional has been set to a value|
|FString|[MapName](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7)|Name of the map the instance should load into.|
|FString|[Mode_Optional](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a)|Game mode for the instance to spawn in.|
|bool|[Mode_IsSet](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e)|true if Mode_Optional has been set to a value|
|float|[SelectionChance_Optional](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c)|Chance that this map will get selected in a rotation list.|
|bool|[SelectionChance_IsSet](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c)|true if SelectionChance_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1)|Custom data to pass through to the instance.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a3de7214c500186260bf974e68095261d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1accd3f9cf0e110a050df727587d58e4e9)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetMapGameId](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ae6c61d0fdd1981491193c42ac31eb607)()|Gets the value of MapGameId_Optional, regardless of it having been set.|
|const int32 &|[GetMapGameId](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a80ea786abbcbcbb4b3f42c306284284a)()|Gets the value of MapGameId_Optional, regardless of it having been set.|
|const int32 &|[GetMapGameId](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1aaaab76f8077d4e4eb71d4c8cba8cae7b)(const int32 & DefaultValue)|Gets the value of MapGameId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMapGameId](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1abcbe09fe8a9d2dd1c3f9f05cbaeb87fc)(int32 & OutValue)|Fills OutValue with the value of MapGameId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetMapGameIdOrNull](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a9a16306f3216e53b717a8593c718eaea)()|Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetMapGameIdOrNull](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a69e7bcdd3a16264fabdc8937dd7760c3)()|Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMapGameId](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ab203a8dcc999b1d5340158933adbc19a)(int32 NewValue)|Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true.|
|void|[ClearMapGameId](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05)()|Clears the value of MapGameId_Optional and sets MapGameId_IsSet to false.|
|bool|[IsMapGameIdDefaultValue](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a36a2156b1d30d0b47f56376bd242b123)()|Returns true if MapGameId_Optional is set and matches the default value.|
|void|[SetMapGameIdToDefault](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a24903abb198452e204c245fbc922540c)()|Sets the value of MapGameId_Optional to its default and also sets MapGameId_IsSet to true.|
|FString &|[GetMapName](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a9613f874dcf15fefac1c813ae30c6d47)()|Gets the value of MapName.|
|const FString &|[GetMapName](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1aee0cef5d97250f3d8746b13af9f48cf4)()|Gets the value of MapName.|
|void|[SetMapName](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a68f3defa870cdfba61629ed92da5fd34)(FString NewValue)|Sets the value of MapName.|
|FString &|[GetMode](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ac275535c7ec8edce5041767344c1e2cf)()|Gets the value of Mode_Optional, regardless of it having been set.|
|const FString &|[GetMode](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a73caf694c9a79e1b662cca0544e0bcb5)()|Gets the value of Mode_Optional, regardless of it having been set.|
|const FString &|[GetMode](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a4f63168976803cd4ffbce38d26be26dd)(const FString & DefaultValue)|Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMode](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a64cdef675cf4cb5d70a958e0db65f087)(FString & OutValue)|Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetModeOrNull](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ac53050ede4b6af673aec47771cf64c09)()|Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetModeOrNull](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a8f94dc4ad559d6b7f1b152b81d70750a)()|Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMode](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a98ba8cb631f678c20950a83339532a18)(FString NewValue)|Sets the value of Mode_Optional and also sets Mode_IsSet to true.|
|void|[ClearMode](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e)()|Clears the value of Mode_Optional and sets Mode_IsSet to false.|
|float &|[GetSelectionChance](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1adff47451ba8cb1bc858eb86a705dee18)()|Gets the value of SelectionChance_Optional, regardless of it having been set.|
|const float &|[GetSelectionChance](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a77948a14fc86712b0da6c6089fb55435)()|Gets the value of SelectionChance_Optional, regardless of it having been set.|
|const float &|[GetSelectionChance](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a5d02d77a96b0eadca36a6468dd1c5244)(const float & DefaultValue)|Gets the value of SelectionChance_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSelectionChance](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a954568a014c7015ef1cfe8df58cfe7f3)(float & OutValue)|Fills OutValue with the value of SelectionChance_Optional and returns true if it has been set, otherwise returns false.|
|float *|[GetSelectionChanceOrNull](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a6067e02d5d174e61188d346aef5825ed)()|Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.|
|const float *|[GetSelectionChanceOrNull](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a174cd841783dbb5d1c27c18a6f4829af)()|Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSelectionChance](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1aeaa12a9139b006b16e45a02e52fd94d3)(float NewValue)|Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true.|
|void|[ClearSelectionChance](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb)()|Clears the value of SelectionChance_Optional and sets SelectionChance_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1aa21d7c490044213da89e8d7b46e3b563)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1adb5864db78f92ecec60c5826a505bbff)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a32d1d42b213c9d44d3cc0200163f4633)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1a51577179874ea72f06ad8726ffefc694)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1abe51517c32a9e215dccce6b8d6f9105b)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ab0fa35c32c6caf71441ac496bb4357ad)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ae7a5fe2266db4784b236b2ce9a39e4e8)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `MapGameId_Optional` <a id="structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3"></a>

`int32 FRHAPI_MapConfig::MapGameId_Optional`

ID to uniquely identify this map game.




### `MapGameId_IsSet` <a id="structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5"></a>

`bool FRHAPI_MapConfig::MapGameId_IsSet`

true if MapGameId_Optional has been set to a value




### `MapName` <a id="structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7"></a>

`FString FRHAPI_MapConfig::MapName`

Name of the map the instance should load into.




### `Mode_Optional` <a id="structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a"></a>

`FString FRHAPI_MapConfig::Mode_Optional`

Game mode for the instance to spawn in.




### `Mode_IsSet` <a id="structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e"></a>

`bool FRHAPI_MapConfig::Mode_IsSet`

true if Mode_Optional has been set to a value




### `SelectionChance_Optional` <a id="structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c"></a>

`float FRHAPI_MapConfig::SelectionChance_Optional`

Chance that this map will get selected in a rotation list.




### `SelectionChance_IsSet` <a id="structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c"></a>

`bool FRHAPI_MapConfig::SelectionChance_IsSet`

true if SelectionChance_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1"></a>

`TMap<FString, FString> FRHAPI_MapConfig::CustomData_Optional`

Custom data to pass through to the instance.




### `CustomData_IsSet` <a id="structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5"></a>

`bool FRHAPI_MapConfig::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MapConfig_1a3de7214c500186260bf974e68095261d"></a>

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



### `WriteJson` <a id="structFRHAPI__MapConfig_1accd3f9cf0e110a050df727587d58e4e9"></a>

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



### `GetMapGameId` <a id="structFRHAPI__MapConfig_1ae6c61d0fdd1981491193c42ac31eb607"></a>

int32 & GetMapGameId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapGameId_Optional, regardless of it having been set.




### `GetMapGameId` <a id="structFRHAPI__MapConfig_1a80ea786abbcbcbb4b3f42c306284284a"></a>

const int32 & GetMapGameId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapGameId_Optional, regardless of it having been set.




### `GetMapGameId` <a id="structFRHAPI__MapConfig_1aaaab76f8077d4e4eb71d4c8cba8cae7b"></a>

const int32 & GetMapGameId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of MapGameId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMapGameId` <a id="structFRHAPI__MapConfig_1abcbe09fe8a9d2dd1c3f9f05cbaeb87fc"></a>

bool GetMapGameId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of MapGameId_Optional and returns true if it has been set, otherwise returns false.




### `GetMapGameIdOrNull` <a id="structFRHAPI__MapConfig_1a9a16306f3216e53b717a8593c718eaea"></a>

int32 * GetMapGameIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.




### `GetMapGameIdOrNull` <a id="structFRHAPI__MapConfig_1a69e7bcdd3a16264fabdc8937dd7760c3"></a>

const int32 * GetMapGameIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.




### `SetMapGameId` <a id="structFRHAPI__MapConfig_1ab203a8dcc999b1d5340158933adbc19a"></a>

void SetMapGameId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true.




### `ClearMapGameId` <a id="structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05"></a>

void ClearMapGameId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MapGameId_Optional and sets MapGameId_IsSet to false.




### `IsMapGameIdDefaultValue` <a id="structFRHAPI__MapConfig_1a36a2156b1d30d0b47f56376bd242b123"></a>

bool IsMapGameIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MapGameId_Optional is set and matches the default value.




### `SetMapGameIdToDefault` <a id="structFRHAPI__MapConfig_1a24903abb198452e204c245fbc922540c"></a>

void SetMapGameIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MapGameId_Optional to its default and also sets MapGameId_IsSet to true.




### `GetMapName` <a id="structFRHAPI__MapConfig_1a9613f874dcf15fefac1c813ae30c6d47"></a>

FString & GetMapName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapName.




### `GetMapName` <a id="structFRHAPI__MapConfig_1aee0cef5d97250f3d8746b13af9f48cf4"></a>

const FString & GetMapName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapName.




### `SetMapName` <a id="structFRHAPI__MapConfig_1a68f3defa870cdfba61629ed92da5fd34"></a>

void SetMapName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MapName.




### `GetMode` <a id="structFRHAPI__MapConfig_1ac275535c7ec8edce5041767344c1e2cf"></a>

FString & GetMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Mode_Optional, regardless of it having been set.




### `GetMode` <a id="structFRHAPI__MapConfig_1a73caf694c9a79e1b662cca0544e0bcb5"></a>

const FString & GetMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Mode_Optional, regardless of it having been set.




### `GetMode` <a id="structFRHAPI__MapConfig_1a4f63168976803cd4ffbce38d26be26dd"></a>

const FString & GetMode(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMode` <a id="structFRHAPI__MapConfig_1a64cdef675cf4cb5d70a958e0db65f087"></a>

bool GetMode(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.




### `GetModeOrNull` <a id="structFRHAPI__MapConfig_1ac53050ede4b6af673aec47771cf64c09"></a>

FString * GetModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.




### `GetModeOrNull` <a id="structFRHAPI__MapConfig_1a8f94dc4ad559d6b7f1b152b81d70750a"></a>

const FString * GetModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.




### `SetMode` <a id="structFRHAPI__MapConfig_1a98ba8cb631f678c20950a83339532a18"></a>

void SetMode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Mode_Optional and also sets Mode_IsSet to true.




### `ClearMode` <a id="structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e"></a>

void ClearMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Mode_Optional and sets Mode_IsSet to false.




### `GetSelectionChance` <a id="structFRHAPI__MapConfig_1adff47451ba8cb1bc858eb86a705dee18"></a>

float & GetSelectionChance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SelectionChance_Optional, regardless of it having been set.




### `GetSelectionChance` <a id="structFRHAPI__MapConfig_1a77948a14fc86712b0da6c6089fb55435"></a>

const float & GetSelectionChance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SelectionChance_Optional, regardless of it having been set.




### `GetSelectionChance` <a id="structFRHAPI__MapConfig_1a5d02d77a96b0eadca36a6468dd1c5244"></a>

const float & GetSelectionChance(const float & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const float &|DefaultValue|

#### Description

Gets the value of SelectionChance_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSelectionChance` <a id="structFRHAPI__MapConfig_1a954568a014c7015ef1cfe8df58cfe7f3"></a>

bool GetSelectionChance(float & OutValue)

#### Parameters

| Type | Name |
|------|------|
|float &|OutValue|

#### Description

Fills OutValue with the value of SelectionChance_Optional and returns true if it has been set, otherwise returns false.




### `GetSelectionChanceOrNull` <a id="structFRHAPI__MapConfig_1a6067e02d5d174e61188d346aef5825ed"></a>

float * GetSelectionChanceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.




### `GetSelectionChanceOrNull` <a id="structFRHAPI__MapConfig_1a174cd841783dbb5d1c27c18a6f4829af"></a>

const float * GetSelectionChanceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.




### `SetSelectionChance` <a id="structFRHAPI__MapConfig_1aeaa12a9139b006b16e45a02e52fd94d3"></a>

void SetSelectionChance(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true.




### `ClearSelectionChance` <a id="structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb"></a>

void ClearSelectionChance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SelectionChance_Optional and sets SelectionChance_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__MapConfig_1aa21d7c490044213da89e8d7b46e3b563"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MapConfig_1adb5864db78f92ecec60c5826a505bbff"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MapConfig_1a32d1d42b213c9d44d3cc0200163f4633"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__MapConfig_1a51577179874ea72f06ad8726ffefc694"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__MapConfig_1abe51517c32a9e215dccce6b8d6f9105b"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__MapConfig_1ab0fa35c32c6caf71441ac496bb4357ad"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__MapConfig_1ae7a5fe2266db4784b236b2ce9a39e4e8"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





