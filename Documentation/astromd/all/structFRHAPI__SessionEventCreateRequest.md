---
title: FRHAPI_SessionEventCreateRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body to create an event about a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[EventCode](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a0a088eb67435fd519970257762db77b0)|Code that identifies this type of event. See CommonEventCode for common examples.|
|FString|[Description_Optional](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a22cd2ddf3e866e8c0fd5171ce77fc5e3)|Description metadata about the event.|
|bool|[Description_IsSet](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a61cbf5337a4b5a51372211cec2bec0fe)|true if Description_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1ac6022d6a306fa7e90cbb39dbd6554326)|custom data about this event|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a6bffc766ccf7912b450f7773c6eb991c)|true if CustomData_Optional has been set to a value|
|FDateTime|[Timestamp](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1ae8f81eac20ff79d17ec39a9ab3d6e593)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1ae5f5949ce9a1d96fe83c51db743a5397)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a69f2d48bbb56e132641694827ff4115c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetEventCode](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a7597023b1ad889362a4a502fbf2e370d)()|Gets the value of EventCode.|
|const FString &|[GetEventCode](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a0a67ab088cdfefe276388581e3b42929)()|Gets the value of EventCode.|
|void|[SetEventCode](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1aa761b707ef797aaa3b20a2b293170d22)(FString NewValue)|Sets the value of EventCode.|
|FString &|[GetDescription](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a7ddec8d78b2771680b1263ef050909da)()|Gets the value of Description_Optional, regardless of it having been set.|
|const FString &|[GetDescription](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1ae652e2047507c4a9e368455c3f02a78f)()|Gets the value of Description_Optional, regardless of it having been set.|
|const FString &|[GetDescription](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a9b1518707ece6325f8358dd6b5f8be42)(const FString & DefaultValue)|Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDescription](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1af677f3b39304253dbc32647073802e60)(FString & OutValue)|Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetDescriptionOrNull](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1ac6ef64606f83edece564a9279dae51e0)()|Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetDescriptionOrNull](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a381670f63f7864cfbfd29d6f83b496c7)()|Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDescription](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a8a7e7bb1f1d1057a5d7dc455f81d72a1)(FString NewValue)|Sets the value of Description_Optional and also sets Description_IsSet to true.|
|void|[ClearDescription](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1aa2889c51a60923847829c1c365fcb0d7)()|Clears the value of Description_Optional and sets Description_IsSet to false.|
|bool|[IsDescriptionDefaultValue](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a0fca4deba5677f5c4a7e496fc91b01a1)()|Returns true if Description_Optional is set and matches the default value.|
|void|[SetDescriptionToDefault](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a95451ceddeaecc7d77b11d3fc72d9b25)()|Sets the value of Description_Optional to its default and also sets Description_IsSet to true.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a4fda2b95a6632f199be516381282543c)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a7312a5cdac682df6cdc677266b1e2522)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a4b82f9f9bc257ea30c064e7c25c3bf47)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1aad6833748bec6860a1d59006d773a587)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1ab1d32d5ba9907479657e4edb9f3d8daa)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a4aca4ec68effbaf9af9ecae53e5b506c)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a060a7f03d2c4df23cb399dc503e1759d)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a7fee47567b6fb44b26d592664a968a34)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FDateTime &|[GetTimestamp](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1a17c8380763441eed82b89b7866769c5e)()|Gets the value of Timestamp.|
|const FDateTime &|[GetTimestamp](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1ad236dd3ae31ee88278c6606b3062b68d)()|Gets the value of Timestamp.|
|void|[SetTimestamp](/unreal-plugins/all/structfrhapi__sessioneventcreaterequest/#structFRHAPI__SessionEventCreateRequest_1af95aa3b94dbc76c3c13bf7d13b80d82e)(FDateTime NewValue)|Sets the value of Timestamp.|
## Public Attributes



### `EventCode` <a id="structFRHAPI__SessionEventCreateRequest_1a0a088eb67435fd519970257762db77b0"></a>

`FString FRHAPI_SessionEventCreateRequest::EventCode`

Code that identifies this type of event. See CommonEventCode for common examples.




### `Description_Optional` <a id="structFRHAPI__SessionEventCreateRequest_1a22cd2ddf3e866e8c0fd5171ce77fc5e3"></a>

`FString FRHAPI_SessionEventCreateRequest::Description_Optional`

Description metadata about the event.




### `Description_IsSet` <a id="structFRHAPI__SessionEventCreateRequest_1a61cbf5337a4b5a51372211cec2bec0fe"></a>

`bool FRHAPI_SessionEventCreateRequest::Description_IsSet`

true if Description_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__SessionEventCreateRequest_1ac6022d6a306fa7e90cbb39dbd6554326"></a>

`TMap<FString, FString> FRHAPI_SessionEventCreateRequest::CustomData_Optional`

custom data about this event




### `CustomData_IsSet` <a id="structFRHAPI__SessionEventCreateRequest_1a6bffc766ccf7912b450f7773c6eb991c"></a>

`bool FRHAPI_SessionEventCreateRequest::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Timestamp` <a id="structFRHAPI__SessionEventCreateRequest_1ae8f81eac20ff79d17ec39a9ab3d6e593"></a>

`FDateTime FRHAPI_SessionEventCreateRequest::Timestamp`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionEventCreateRequest_1ae5f5949ce9a1d96fe83c51db743a5397"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionEventCreateRequest_1a69f2d48bbb56e132641694827ff4115c"></a>

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



### `GetEventCode` <a id="structFRHAPI__SessionEventCreateRequest_1a7597023b1ad889362a4a502fbf2e370d"></a>

FString & GetEventCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventCode.




### `GetEventCode` <a id="structFRHAPI__SessionEventCreateRequest_1a0a67ab088cdfefe276388581e3b42929"></a>

const FString & GetEventCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EventCode.




### `SetEventCode` <a id="structFRHAPI__SessionEventCreateRequest_1aa761b707ef797aaa3b20a2b293170d22"></a>

void SetEventCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of EventCode.




### `GetDescription` <a id="structFRHAPI__SessionEventCreateRequest_1a7ddec8d78b2771680b1263ef050909da"></a>

FString & GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Description_Optional, regardless of it having been set.




### `GetDescription` <a id="structFRHAPI__SessionEventCreateRequest_1ae652e2047507c4a9e368455c3f02a78f"></a>

const FString & GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Description_Optional, regardless of it having been set.




### `GetDescription` <a id="structFRHAPI__SessionEventCreateRequest_1a9b1518707ece6325f8358dd6b5f8be42"></a>

const FString & GetDescription(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDescription` <a id="structFRHAPI__SessionEventCreateRequest_1af677f3b39304253dbc32647073802e60"></a>

bool GetDescription(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.




### `GetDescriptionOrNull` <a id="structFRHAPI__SessionEventCreateRequest_1ac6ef64606f83edece564a9279dae51e0"></a>

FString * GetDescriptionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.




### `GetDescriptionOrNull` <a id="structFRHAPI__SessionEventCreateRequest_1a381670f63f7864cfbfd29d6f83b496c7"></a>

const FString * GetDescriptionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.




### `SetDescription` <a id="structFRHAPI__SessionEventCreateRequest_1a8a7e7bb1f1d1057a5d7dc455f81d72a1"></a>

void SetDescription(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Description_Optional and also sets Description_IsSet to true.




### `ClearDescription` <a id="structFRHAPI__SessionEventCreateRequest_1aa2889c51a60923847829c1c365fcb0d7"></a>

void ClearDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Description_Optional and sets Description_IsSet to false.




### `IsDescriptionDefaultValue` <a id="structFRHAPI__SessionEventCreateRequest_1a0fca4deba5677f5c4a7e496fc91b01a1"></a>

bool IsDescriptionDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Description_Optional is set and matches the default value.




### `SetDescriptionToDefault` <a id="structFRHAPI__SessionEventCreateRequest_1a95451ceddeaecc7d77b11d3fc72d9b25"></a>

void SetDescriptionToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Description_Optional to its default and also sets Description_IsSet to true.




### `GetCustomData` <a id="structFRHAPI__SessionEventCreateRequest_1a4fda2b95a6632f199be516381282543c"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionEventCreateRequest_1a7312a5cdac682df6cdc677266b1e2522"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionEventCreateRequest_1a4b82f9f9bc257ea30c064e7c25c3bf47"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SessionEventCreateRequest_1aad6833748bec6860a1d59006d773a587"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionEventCreateRequest_1ab1d32d5ba9907479657e4edb9f3d8daa"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionEventCreateRequest_1a4aca4ec68effbaf9af9ecae53e5b506c"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SessionEventCreateRequest_1a060a7f03d2c4df23cb399dc503e1759d"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SessionEventCreateRequest_1a7fee47567b6fb44b26d592664a968a34"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetTimestamp` <a id="structFRHAPI__SessionEventCreateRequest_1a17c8380763441eed82b89b7866769c5e"></a>

FDateTime & GetTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Timestamp.




### `GetTimestamp` <a id="structFRHAPI__SessionEventCreateRequest_1ad236dd3ae31ee88278c6606b3062b68d"></a>

const FDateTime & GetTimestamp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Timestamp.




### `SetTimestamp` <a id="structFRHAPI__SessionEventCreateRequest_1af95aa3b94dbc76c3c13bf7d13b80d82e"></a>

void SetTimestamp(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Timestamp.





