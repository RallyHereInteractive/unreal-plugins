---
title: FRHAPI_BackfillInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Info about the open-match backfill object in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[BackfillId](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a01c5dc7289f87b6f57bbb0783f183b83)|Unique ID for the backfill object.|
|TMap< FString, FString >|[Extensions_Optional](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1ac013531459d42192ff7f1967c0157816)|Optional additional extensions used when acknowledging backfill requests.|
|bool|[Extensions_IsSet](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1ac63b53074f4e5de2f25454cf263297d4)|true if Extensions_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1ae4ed55e687619a482f28db4b50c90a56)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a4fcd1e078a86ff0937721ffd81b085b8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetBackfillId](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a659925f7bed4235d2b8463c5186f41f9)()|Gets the value of BackfillId.|
|const FString &|[GetBackfillId](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a2cbdf4b05da0a9c98abd8cb3c19f2876)()|Gets the value of BackfillId.|
|void|[SetBackfillId](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a6698fe25d3b61c366ba6dd4e97d3ba17)(FString NewValue)|Sets the value of BackfillId.|
|TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1acd4171be6f7e414904eae68893ba2142)()|Gets the value of Extensions_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1ac38c9455f02f2996c741ba1136b900e2)()|Gets the value of Extensions_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetExtensions](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a3e08fcb86b4377bf16321fc2fbd04acf)(const TMap< FString, FString > & DefaultValue)|Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExtensions](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a46d216b7646ac935c49eb297f468778a)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetExtensionsOrNull](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a0509b8d6c6613ee55f8e192fe60775fe)()|Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetExtensionsOrNull](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a0a89bb3f1cdde31055424028b04cb120)()|Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExtensions](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a952fe467e266ffc96f347779cf49b12d)(TMap< FString, FString > NewValue)|Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.|
|void|[ClearExtensions](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee)()|Clears the value of Extensions_Optional and sets Extensions_IsSet to false.|
## Public Attributes



### `BackfillId` <a id="structFRHAPI__BackfillInfo_1a01c5dc7289f87b6f57bbb0783f183b83"></a>

`FString FRHAPI_BackfillInfo::BackfillId`

Unique ID for the backfill object.




### `Extensions_Optional` <a id="structFRHAPI__BackfillInfo_1ac013531459d42192ff7f1967c0157816"></a>

`TMap<FString, FString> FRHAPI_BackfillInfo::Extensions_Optional`

Optional additional extensions used when acknowledging backfill requests.




### `Extensions_IsSet` <a id="structFRHAPI__BackfillInfo_1ac63b53074f4e5de2f25454cf263297d4"></a>

`bool FRHAPI_BackfillInfo::Extensions_IsSet`

true if Extensions_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__BackfillInfo_1ae4ed55e687619a482f28db4b50c90a56"></a>

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



### `WriteJson` <a id="structFRHAPI__BackfillInfo_1a4fcd1e078a86ff0937721ffd81b085b8"></a>

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



### `GetBackfillId` <a id="structFRHAPI__BackfillInfo_1a659925f7bed4235d2b8463c5186f41f9"></a>

FString & GetBackfillId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BackfillId.




### `GetBackfillId` <a id="structFRHAPI__BackfillInfo_1a2cbdf4b05da0a9c98abd8cb3c19f2876"></a>

const FString & GetBackfillId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BackfillId.




### `SetBackfillId` <a id="structFRHAPI__BackfillInfo_1a6698fe25d3b61c366ba6dd4e97d3ba17"></a>

void SetBackfillId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of BackfillId.




### `GetExtensions` <a id="structFRHAPI__BackfillInfo_1acd4171be6f7e414904eae68893ba2142"></a>

TMap< FString, FString > & GetExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Extensions_Optional, regardless of it having been set.




### `GetExtensions` <a id="structFRHAPI__BackfillInfo_1ac38c9455f02f2996c741ba1136b900e2"></a>

const TMap< FString, FString > & GetExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Extensions_Optional, regardless of it having been set.




### `GetExtensions` <a id="structFRHAPI__BackfillInfo_1a3e08fcb86b4377bf16321fc2fbd04acf"></a>

const TMap< FString, FString > & GetExtensions(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExtensions` <a id="structFRHAPI__BackfillInfo_1a46d216b7646ac935c49eb297f468778a"></a>

bool GetExtensions(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.




### `GetExtensionsOrNull` <a id="structFRHAPI__BackfillInfo_1a0509b8d6c6613ee55f8e192fe60775fe"></a>

TMap< FString, FString > * GetExtensionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.




### `GetExtensionsOrNull` <a id="structFRHAPI__BackfillInfo_1a0a89bb3f1cdde31055424028b04cb120"></a>

const TMap< FString, FString > * GetExtensionsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.




### `SetExtensions` <a id="structFRHAPI__BackfillInfo_1a952fe467e266ffc96f347779cf49b12d"></a>

void SetExtensions(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.




### `ClearExtensions` <a id="structFRHAPI__BackfillInfo_1a13c1c5696be1196b66b1706a090c59ee"></a>

void ClearExtensions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.





