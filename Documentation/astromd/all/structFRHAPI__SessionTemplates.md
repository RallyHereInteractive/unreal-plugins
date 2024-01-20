---
title: FRHAPI_SessionTemplates Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A mapping of RallyHere session template types to the templates.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) >|[Templates_Optional](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1ab83f2a56e2b367da2d7abfbfc5ab6f43)|Dictionary of SessionTemplates keyed on their template type.|
|bool|[Templates_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a96b1b77d9c3dfcd644a9dfa3805dd612)|true if Templates_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a15bd57d291d2da5b4373ac69bb6f770d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a542b7e96b03d933536ef6eb92d7be6c8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > &|[GetTemplates](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a5cd0569f7dd491416871e8009eba1fff)()|Gets the value of Templates_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > &|[GetTemplates](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a8558e2ca9f7baec69252f884af1e4f7a)()|Gets the value of Templates_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > &|[GetTemplates](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a74e666c7009e061e05011937cace2c55)(const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > & DefaultValue)|Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTemplates](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a0d42b4824bb9af1c810646c3d90d8644)(TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > & OutValue)|Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > *|[GetTemplatesOrNull](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a1a92056debc0a11a1e04ca9753b50071)()|Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > *|[GetTemplatesOrNull](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1acbd85ceb3a6e5991c6f457452319019b)()|Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTemplates](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a371255f9f30c3b980c055c01ff674948)(TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > NewValue)|Sets the value of Templates_Optional and also sets Templates_IsSet to true.|
|void|[ClearTemplates](/unreal-plugins/all/structfrhapi__sessiontemplates/#structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a)()|Clears the value of Templates_Optional and sets Templates_IsSet to false.|
## Public Attributes



### `Templates_Optional` <a id="structFRHAPI__SessionTemplates_1ab83f2a56e2b367da2d7abfbfc5ab6f43"></a>

`TMap<FString, FRHAPI_SessionTemplate> FRHAPI_SessionTemplates::Templates_Optional`

Dictionary of SessionTemplates keyed on their template type.




### `Templates_IsSet` <a id="structFRHAPI__SessionTemplates_1a96b1b77d9c3dfcd644a9dfa3805dd612"></a>

`bool FRHAPI_SessionTemplates::Templates_IsSet`

true if Templates_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionTemplates_1a15bd57d291d2da5b4373ac69bb6f770d"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionTemplates_1a542b7e96b03d933536ef6eb92d7be6c8"></a>

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



### `GetTemplates` <a id="structFRHAPI__SessionTemplates_1a5cd0569f7dd491416871e8009eba1fff"></a>

TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > & GetTemplates()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Templates_Optional, regardless of it having been set.




### `GetTemplates` <a id="structFRHAPI__SessionTemplates_1a8558e2ca9f7baec69252f884af1e4f7a"></a>

const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > & GetTemplates()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Templates_Optional, regardless of it having been set.




### `GetTemplates` <a id="structFRHAPI__SessionTemplates_1a74e666c7009e061e05011937cace2c55"></a>

const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > & GetTemplates(const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > &|DefaultValue|

#### Description

Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTemplates` <a id="structFRHAPI__SessionTemplates_1a0d42b4824bb9af1c810646c3d90d8644"></a>

bool GetTemplates(TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > &|OutValue|

#### Description

Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false.




### `GetTemplatesOrNull` <a id="structFRHAPI__SessionTemplates_1a1a92056debc0a11a1e04ca9753b50071"></a>

TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > * GetTemplatesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.




### `GetTemplatesOrNull` <a id="structFRHAPI__SessionTemplates_1acbd85ceb3a6e5991c6f457452319019b"></a>

const TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > * GetTemplatesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr.




### `SetTemplates` <a id="structFRHAPI__SessionTemplates_1a371255f9f30c3b980c055c01ff674948"></a>

void SetTemplates(TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) >|NewValue|

#### Description

Sets the value of Templates_Optional and also sets Templates_IsSet to true.




### `ClearTemplates` <a id="structFRHAPI__SessionTemplates_1a131f21d340cfc955ef693695785df14a"></a>

void ClearTemplates()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Templates_Optional and sets Templates_IsSet to false.





