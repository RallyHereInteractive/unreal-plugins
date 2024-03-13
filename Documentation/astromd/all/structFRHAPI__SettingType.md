---
title: FRHAPI_SettingType Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_SettingTypeVersion](/unreal-plugins/all/structfrhapi__settingtypeversion/#structFRHAPI__SettingTypeVersion) >|[Versions](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType_1ab890cf6c935d2cd691a9b5c4caac7cc1)|Map of setting type version ids to the version.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType_1aceab82a3fc5d56e8469b3c7053be6330)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType_1a274f8e9b15db0cff2780a3ddd7a5e3fb)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_SettingTypeVersion](/unreal-plugins/all/structfrhapi__settingtypeversion/#structFRHAPI__SettingTypeVersion) > &|[GetVersions](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType_1a187afb11a54ff15041642bb3aa31bcb9)()|Gets the value of Versions.|
|const TMap< FString, [FRHAPI_SettingTypeVersion](/unreal-plugins/all/structfrhapi__settingtypeversion/#structFRHAPI__SettingTypeVersion) > &|[GetVersions](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType_1a0e2c33862b30c54b7acc43560f9eff0c)()|Gets the value of Versions.|
|void|[SetVersions](/unreal-plugins/all/structfrhapi__settingtype/#structFRHAPI__SettingType_1a5f3c6c20cd553b0601ec0ac82c709b76)(TMap< FString, [FRHAPI_SettingTypeVersion](/unreal-plugins/all/structfrhapi__settingtypeversion/#structFRHAPI__SettingTypeVersion) > NewValue)|Sets the value of Versions.|
## Public Attributes



### `Versions` <a id="structFRHAPI__SettingType_1ab890cf6c935d2cd691a9b5c4caac7cc1"></a>

`TMap<FString, FRHAPI_SettingTypeVersion> FRHAPI_SettingType::Versions`

Map of setting type version ids to the version.





## Public Functions



### `FromJson` <a id="structFRHAPI__SettingType_1aceab82a3fc5d56e8469b3c7053be6330"></a>

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



### `WriteJson` <a id="structFRHAPI__SettingType_1a274f8e9b15db0cff2780a3ddd7a5e3fb"></a>

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



### `GetVersions` <a id="structFRHAPI__SettingType_1a187afb11a54ff15041642bb3aa31bcb9"></a>

TMap< FString, [FRHAPI_SettingTypeVersion](/unreal-plugins/all/structfrhapi__settingtypeversion/#structFRHAPI__SettingTypeVersion) > & GetVersions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Versions.




### `GetVersions` <a id="structFRHAPI__SettingType_1a0e2c33862b30c54b7acc43560f9eff0c"></a>

const TMap< FString, [FRHAPI_SettingTypeVersion](/unreal-plugins/all/structfrhapi__settingtypeversion/#structFRHAPI__SettingTypeVersion) > & GetVersions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Versions.




### `SetVersions` <a id="structFRHAPI__SettingType_1a5f3c6c20cd553b0601ec0ac82c709b76"></a>

void SetVersions(TMap< FString, [FRHAPI_SettingTypeVersion](/unreal-plugins/all/structfrhapi__settingtypeversion/#structFRHAPI__SettingTypeVersion) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_SettingTypeVersion](/unreal-plugins/all/structfrhapi__settingtypeversion/#structFRHAPI__SettingTypeVersion) >|NewValue|

#### Description

Sets the value of Versions.





