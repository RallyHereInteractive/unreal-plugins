---
title: FRHAPI_PlayerIdWrapper Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Model for getting a player ID from a player UUID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PlayerId](/unreal-plugins/all/structfrhapi__playeridwrapper/#structFRHAPI__PlayerIdWrapper_1a9d3517523183b4512a3e4335470be60a)|Player ID.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playeridwrapper/#structFRHAPI__PlayerIdWrapper_1af5ce582a754d7f0db265d7e33b039674)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playeridwrapper/#structFRHAPI__PlayerIdWrapper_1ac9e978d8c152b4cc909db76a787e4529)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playeridwrapper/#structFRHAPI__PlayerIdWrapper_1a1f525c0cdd5ad98d8bd51582e9644900)()|Gets the value of PlayerId.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playeridwrapper/#structFRHAPI__PlayerIdWrapper_1a6d4d79522551ec4b8d5bd0045cd3784f)()|Gets the value of PlayerId.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__playeridwrapper/#structFRHAPI__PlayerIdWrapper_1a5fab2ef714c104e844b89f62ffdd30f5)(int32 NewValue)|Sets the value of PlayerId.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__playeridwrapper/#structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4)()|Returns true if PlayerId matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__playeridwrapper/#structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa)()|Sets the value of PlayerId to its default|
## Public Attributes



### `PlayerId` <a id="structFRHAPI__PlayerIdWrapper_1a9d3517523183b4512a3e4335470be60a"></a>

`int32 FRHAPI_PlayerIdWrapper::PlayerId`

Player ID.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerIdWrapper_1af5ce582a754d7f0db265d7e33b039674"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerIdWrapper_1ac9e978d8c152b4cc909db76a787e4529"></a>

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



### `GetPlayerId` <a id="structFRHAPI__PlayerIdWrapper_1a1f525c0cdd5ad98d8bd51582e9644900"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `GetPlayerId` <a id="structFRHAPI__PlayerIdWrapper_1a6d4d79522551ec4b8d5bd0045cd3784f"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `SetPlayerId` <a id="structFRHAPI__PlayerIdWrapper_1a5fab2ef714c104e844b89f62ffdd30f5"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId to its default





