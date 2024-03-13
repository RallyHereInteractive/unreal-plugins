---
title: FRHAPI_SetSinglePlayerSettingRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Updatable contents of a setting for a player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[V](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d)|Setting Type Version to update setting for. Must be a valid version for the setting type.|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[Value](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f)|New value for the setting. Must conform to the jsonschema defined for the setting type+version.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1a18c9b67c6f02a6928f08d4a4929a07d5)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1a413e895216855c3ae074fa0823e4eaeb)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetV](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1abca292eac082cd5723422b68fb905aa9)()|Gets the value of V.|
|const int32 &|[GetV](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1ae6b9e2663e1c571414ea48bbf94d0d43)()|Gets the value of V.|
|void|[SetV](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1ab1c381a9737538afc8f4bd1bcd8da4f3)(int32 NewValue)|Sets the value of V.|
|bool|[IsVDefaultValue](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018)()|Returns true if V matches the default value.|
|void|[SetVToDefault](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a)()|Sets the value of V to its default|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|[GetValue](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1a7cb5fb8393aedc898f47ad2d929d32ae)()|Gets the value of Value.|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|[GetValue](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1aaa2c2551ebb2f201f7fcdf9e6e8adfc7)()|Gets the value of Value.|
|void|[SetValue](/unreal-plugins/all/structfrhapi__setsingleplayersettingrequest/#structFRHAPI__SetSinglePlayerSettingRequest_1a74b0b55e594aa836bbfc55c5673fad40)([FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) NewValue)|Sets the value of Value.|
## Public Attributes



### `V` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d"></a>

`int32 FRHAPI_SetSinglePlayerSettingRequest::V`

Setting Type Version to update setting for. Must be a valid version for the setting type.




### `Value` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f"></a>

`FRHAPI_JsonValue FRHAPI_SetSinglePlayerSettingRequest::Value`

New value for the setting. Must conform to the jsonschema defined for the setting type+version.





## Public Functions



### `FromJson` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a18c9b67c6f02a6928f08d4a4929a07d5"></a>

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



### `WriteJson` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a413e895216855c3ae074fa0823e4eaeb"></a>

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



### `GetV` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1abca292eac082cd5723422b68fb905aa9"></a>

int32 & GetV()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of V.




### `GetV` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ae6b9e2663e1c571414ea48bbf94d0d43"></a>

const int32 & GetV()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of V.




### `SetV` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ab1c381a9737538afc8f4bd1bcd8da4f3"></a>

void SetV(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of V.




### `IsVDefaultValue` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018"></a>

bool IsVDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if V matches the default value.




### `SetVToDefault` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a"></a>

void SetVToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of V to its default




### `GetValue` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a7cb5fb8393aedc898f47ad2d929d32ae"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & GetValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Value.




### `GetValue` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1aaa2c2551ebb2f201f7fcdf9e6e8adfc7"></a>

const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & GetValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Value.




### `SetValue` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a74b0b55e594aa836bbfc55c5673fad40"></a>

void SetValue([FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|NewValue|

#### Description

Sets the value of Value.





