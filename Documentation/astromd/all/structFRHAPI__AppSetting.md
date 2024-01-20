---
title: FRHAPI_AppSetting Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A key/value pair that represents a setting to be used by the client.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Key](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a82e74cc3acfe664c9c2d88093d0cdbb3)|The key for the setting.|
|FString|[Value](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a7016650e0478c3c8ca7cb6cdc46178df)|The value for the setting.|
|FString|[Notes_Optional](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a5fe4dd1667d49b258981f4d08bb7883f)|Notes to describe the key value pair.|
|bool|[Notes_IsSet](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a8b2b0c0f69dabec66c64d38e3f8aefff)|true if Notes_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a1bde3f6f996eea77aa1d04c2bf63de01)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1abc7ed081da7d54be8685a757e8f9d03b)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetKey](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a3bfe327e136dad38312642553ef58b1b)()|Gets the value of Key.|
|const FString &|[GetKey](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a5fd6a636476d43ab7c472703dd1f1a6f)()|Gets the value of Key.|
|void|[SetKey](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a496573c940d6d89d14b9ca07ac030302)(FString NewValue)|Sets the value of Key.|
|FString &|[GetValue](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1ab92b1b46ca377f9343fadfbc477effcb)()|Gets the value of Value.|
|const FString &|[GetValue](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a8757a6558bd6f8932839b0a83c102cee)()|Gets the value of Value.|
|void|[SetValue](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a9ce2c6de945a0fe8434c405db2ed917f)(FString NewValue)|Sets the value of Value.|
|FString &|[GetNotes](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a981fffd915427c5fe7ffae5618bd575c)()|Gets the value of Notes_Optional, regardless of it having been set.|
|const FString &|[GetNotes](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1adc354e82c921e2b8284888b4df7ee082)()|Gets the value of Notes_Optional, regardless of it having been set.|
|const FString &|[GetNotes](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a2174604b84007f4588cdb50e9f6894c2)(const FString & DefaultValue)|Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNotes](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1ae8bd1f41c455eb87f2d9fa7653b3881f)(FString & OutValue)|Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetNotesOrNull](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a49c5bf3dcc8cb17df6a260fb329730e0)()|Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetNotesOrNull](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a4f647f4fb51c2bcc846e1f2851a01375)()|Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNotes](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1afb4fcc3c29a9478fa7b264b244f0e5c2)(FString NewValue)|Sets the value of Notes_Optional and also sets Notes_IsSet to true.|
|void|[ClearNotes](/unreal-plugins/all/structfrhapi__appsetting/#structFRHAPI__AppSetting_1a5cad97ab5f5f80963ce34597fd484dae)()|Clears the value of Notes_Optional and sets Notes_IsSet to false.|
## Public Attributes



### `Key` <a id="structFRHAPI__AppSetting_1a82e74cc3acfe664c9c2d88093d0cdbb3"></a>

`FString FRHAPI_AppSetting::Key`

The key for the setting.




### `Value` <a id="structFRHAPI__AppSetting_1a7016650e0478c3c8ca7cb6cdc46178df"></a>

`FString FRHAPI_AppSetting::Value`

The value for the setting.




### `Notes_Optional` <a id="structFRHAPI__AppSetting_1a5fe4dd1667d49b258981f4d08bb7883f"></a>

`FString FRHAPI_AppSetting::Notes_Optional`

Notes to describe the key value pair.




### `Notes_IsSet` <a id="structFRHAPI__AppSetting_1a8b2b0c0f69dabec66c64d38e3f8aefff"></a>

`bool FRHAPI_AppSetting::Notes_IsSet`

true if Notes_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__AppSetting_1a1bde3f6f996eea77aa1d04c2bf63de01"></a>

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



### `WriteJson` <a id="structFRHAPI__AppSetting_1abc7ed081da7d54be8685a757e8f9d03b"></a>

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



### `GetKey` <a id="structFRHAPI__AppSetting_1a3bfe327e136dad38312642553ef58b1b"></a>

FString & GetKey()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Key.




### `GetKey` <a id="structFRHAPI__AppSetting_1a5fd6a636476d43ab7c472703dd1f1a6f"></a>

const FString & GetKey()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Key.




### `SetKey` <a id="structFRHAPI__AppSetting_1a496573c940d6d89d14b9ca07ac030302"></a>

void SetKey(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Key.




### `GetValue` <a id="structFRHAPI__AppSetting_1ab92b1b46ca377f9343fadfbc477effcb"></a>

FString & GetValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Value.




### `GetValue` <a id="structFRHAPI__AppSetting_1a8757a6558bd6f8932839b0a83c102cee"></a>

const FString & GetValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Value.




### `SetValue` <a id="structFRHAPI__AppSetting_1a9ce2c6de945a0fe8434c405db2ed917f"></a>

void SetValue(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Value.




### `GetNotes` <a id="structFRHAPI__AppSetting_1a981fffd915427c5fe7ffae5618bd575c"></a>

FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notes_Optional, regardless of it having been set.




### `GetNotes` <a id="structFRHAPI__AppSetting_1adc354e82c921e2b8284888b4df7ee082"></a>

const FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notes_Optional, regardless of it having been set.




### `GetNotes` <a id="structFRHAPI__AppSetting_1a2174604b84007f4588cdb50e9f6894c2"></a>

const FString & GetNotes(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNotes` <a id="structFRHAPI__AppSetting_1ae8bd1f41c455eb87f2d9fa7653b3881f"></a>

bool GetNotes(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.




### `GetNotesOrNull` <a id="structFRHAPI__AppSetting_1a49c5bf3dcc8cb17df6a260fb329730e0"></a>

FString * GetNotesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.




### `GetNotesOrNull` <a id="structFRHAPI__AppSetting_1a4f647f4fb51c2bcc846e1f2851a01375"></a>

const FString * GetNotesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.




### `SetNotes` <a id="structFRHAPI__AppSetting_1afb4fcc3c29a9478fa7b264b244f0e5c2"></a>

void SetNotes(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Notes_Optional and also sets Notes_IsSet to true.




### `ClearNotes` <a id="structFRHAPI__AppSetting_1a5cad97ab5f5f80963ce34597fd484dae"></a>

void ClearNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Notes_Optional and sets Notes_IsSet to false.





