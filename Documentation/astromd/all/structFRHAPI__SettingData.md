---
title: FRHAPI_SettingData Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Setting version/value data from a specific setting type/key for a player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[V](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b)|Setting Version.|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|[Value_Optional](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a0c0ac8ddf11aca2abc0c756c8f431416)|Setting Value document.|
|bool|[Value_IsSet](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a8ce10b0f55a0e56b14769becba43f6e2)|true if Value_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a516ada869d3a2a69ce7b4d42805dcba5)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1ac6098c095a74f24c31aff74290e1b19b)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetV](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a)()|Gets the value of V.|
|const int32 &|[GetV](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845)()|Gets the value of V.|
|void|[SetV](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a8584efc9cbcbbf717a8fa37e36aced01)(int32 NewValue)|Sets the value of V.|
|bool|[IsVDefaultValue](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14)()|Returns true if V matches the default value.|
|void|[SetVToDefault](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e)()|Sets the value of V to its default|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|[GetValue](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0)()|Gets the value of Value_Optional, regardless of it having been set.|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|[GetValue](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f)()|Gets the value of Value_Optional, regardless of it having been set.|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|[GetValue](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a56a698de32d60ea60aab8cca260bff27)(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & DefaultValue)|Gets the value of Value_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetValue](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1abf6b8af24da1c48580697ec497114cd4)([FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & OutValue)|Fills OutValue with the value of Value_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) *|[GetValueOrNull](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a99d489a3de1bb0d9480aa8f3ff02ce4c)()|Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) *|[GetValueOrNull](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1aa0a0a6dc2295285d8c1e36c95d230b3c)()|Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetValue](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1a829c0a3854f445ef75d87d45802fdeea)([FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) NewValue)|Sets the value of Value_Optional and also sets Value_IsSet to true.|
|void|[ClearValue](/unreal-plugins/all/structfrhapi__settingdata/#structFRHAPI__SettingData_1ae921409b065fd1a162494dbf3f9906ab)()|Clears the value of Value_Optional and sets Value_IsSet to false.|
## Public Attributes



### `V` <a id="structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b"></a>

`int32 FRHAPI_SettingData::V`

Setting Version.




### `Value_Optional` <a id="structFRHAPI__SettingData_1a0c0ac8ddf11aca2abc0c756c8f431416"></a>

`FRHAPI_JsonValue FRHAPI_SettingData::Value_Optional`

Setting Value document.




### `Value_IsSet` <a id="structFRHAPI__SettingData_1a8ce10b0f55a0e56b14769becba43f6e2"></a>

`bool FRHAPI_SettingData::Value_IsSet`

true if Value_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SettingData_1a516ada869d3a2a69ce7b4d42805dcba5"></a>

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



### `WriteJson` <a id="structFRHAPI__SettingData_1ac6098c095a74f24c31aff74290e1b19b"></a>

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



### `GetV` <a id="structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a"></a>

int32 & GetV()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of V.




### `GetV` <a id="structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845"></a>

const int32 & GetV()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of V.




### `SetV` <a id="structFRHAPI__SettingData_1a8584efc9cbcbbf717a8fa37e36aced01"></a>

void SetV(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of V.




### `IsVDefaultValue` <a id="structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14"></a>

bool IsVDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if V matches the default value.




### `SetVToDefault` <a id="structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e"></a>

void SetVToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of V to its default




### `GetValue` <a id="structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & GetValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Value_Optional, regardless of it having been set.




### `GetValue` <a id="structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f"></a>

const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & GetValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Value_Optional, regardless of it having been set.




### `GetValue` <a id="structFRHAPI__SettingData_1a56a698de32d60ea60aab8cca260bff27"></a>

const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & GetValue(const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|DefaultValue|

#### Description

Gets the value of Value_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetValue` <a id="structFRHAPI__SettingData_1abf6b8af24da1c48580697ec497114cd4"></a>

bool GetValue([FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) &|OutValue|

#### Description

Fills OutValue with the value of Value_Optional and returns true if it has been set, otherwise returns false.




### `GetValueOrNull` <a id="structFRHAPI__SettingData_1a99d489a3de1bb0d9480aa8f3ff02ce4c"></a>

[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) * GetValueOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr.




### `GetValueOrNull` <a id="structFRHAPI__SettingData_1aa0a0a6dc2295285d8c1e36c95d230b3c"></a>

const [FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) * GetValueOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr.




### `SetValue` <a id="structFRHAPI__SettingData_1a829c0a3854f445ef75d87d45802fdeea"></a>

void SetValue([FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonValue](/unreal-plugins/all/structfrhapi__jsonvalue/#structFRHAPI__JsonValue)|NewValue|

#### Description

Sets the value of Value_Optional and also sets Value_IsSet to true.




### `ClearValue` <a id="structFRHAPI__SettingData_1ae921409b065fd1a162494dbf3f9906ab"></a>

void ClearValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Value_Optional and sets Value_IsSet to false.





