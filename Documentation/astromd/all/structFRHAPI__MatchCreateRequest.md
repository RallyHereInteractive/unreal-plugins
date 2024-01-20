---
title: FRHAPI_MatchCreateRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request to create a match resource on a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[MatchId](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1ad8d9a408fa37c4e799fa6c5d7bc7ac83)|Unique ID.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1a00ba1aa7b00b4c2d8712108d268e9bc8)|instance-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1ab895595c7d78c18ab51dadae3ff150a5)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1a104c9e01d8801fca4a59a2f875f8577c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1a53ef032e68d819118e7ef3b9fbe282ef)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1ab95fad88c9324938081892aa21da9702)()|Gets the value of MatchId.|
|const FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1ae604a67ed42e161b92abd82bf3a8b9c7)()|Gets the value of MatchId.|
|void|[SetMatchId](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1ab3c7b9cd8f85b6c645414679fa2b1c0c)(FString NewValue)|Sets the value of MatchId.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1a2eacd0abafeb9ddddbf706def27a9e58)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1ae76f0e12296ae1053f0268c344bf19f9)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1abee56b52b554943eb4650fdfde1453b1)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1aaba442e26327a10fb1d3afa07a02e742)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1af0cd0624bfc5034beb5c355f320b9781)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1aa590dae811bad14336ba8d1e3b79b2ef)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1aeee556c13a7be74b7f114a0b4f960a1d)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__matchcreaterequest/#structFRHAPI__MatchCreateRequest_1a34b715446ca4696a633e5aee8e0e9914)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `MatchId` <a id="structFRHAPI__MatchCreateRequest_1ad8d9a408fa37c4e799fa6c5d7bc7ac83"></a>

`FString FRHAPI_MatchCreateRequest::MatchId`

Unique ID.




### `CustomData_Optional` <a id="structFRHAPI__MatchCreateRequest_1a00ba1aa7b00b4c2d8712108d268e9bc8"></a>

`TMap<FString, FString> FRHAPI_MatchCreateRequest::CustomData_Optional`

instance-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__MatchCreateRequest_1ab895595c7d78c18ab51dadae3ff150a5"></a>

`bool FRHAPI_MatchCreateRequest::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchCreateRequest_1a104c9e01d8801fca4a59a2f875f8577c"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchCreateRequest_1a53ef032e68d819118e7ef3b9fbe282ef"></a>

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



### `GetMatchId` <a id="structFRHAPI__MatchCreateRequest_1ab95fad88c9324938081892aa21da9702"></a>

FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId.




### `GetMatchId` <a id="structFRHAPI__MatchCreateRequest_1ae604a67ed42e161b92abd82bf3a8b9c7"></a>

const FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId.




### `SetMatchId` <a id="structFRHAPI__MatchCreateRequest_1ab3c7b9cd8f85b6c645414679fa2b1c0c"></a>

void SetMatchId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MatchId.




### `GetCustomData` <a id="structFRHAPI__MatchCreateRequest_1a2eacd0abafeb9ddddbf706def27a9e58"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MatchCreateRequest_1ae76f0e12296ae1053f0268c344bf19f9"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MatchCreateRequest_1abee56b52b554943eb4650fdfde1453b1"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__MatchCreateRequest_1aaba442e26327a10fb1d3afa07a02e742"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__MatchCreateRequest_1af0cd0624bfc5034beb5c355f320b9781"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__MatchCreateRequest_1aa590dae811bad14336ba8d1e3b79b2ef"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__MatchCreateRequest_1aeee556c13a7be74b7f114a0b4f960a1d"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__MatchCreateRequest_1a34b715446ca4696a633e5aee8e0e9914"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





