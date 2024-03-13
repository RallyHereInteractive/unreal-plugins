---
title: FRHAPI_ConnectionInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Connection info about the requesting client.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Ip](/unreal-plugins/all/structfrhapi__connectioninfo/#structFRHAPI__ConnectionInfo_1a77c50f9776e44b93e60bf4b8c5e2c3b6)|IP that sent the request.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__connectioninfo/#structFRHAPI__ConnectionInfo_1a8163d13a92ed5ca0a8292e3269a5b7d1)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__connectioninfo/#structFRHAPI__ConnectionInfo_1a194e39da068ff951effe98a6b0a36a56)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetIp](/unreal-plugins/all/structfrhapi__connectioninfo/#structFRHAPI__ConnectionInfo_1a35cdcfa371719695f1ad4fe00c86db75)()|Gets the value of Ip.|
|const FString &|[GetIp](/unreal-plugins/all/structfrhapi__connectioninfo/#structFRHAPI__ConnectionInfo_1add13d7706711b691a3dbf9bbd504a749)()|Gets the value of Ip.|
|void|[SetIp](/unreal-plugins/all/structfrhapi__connectioninfo/#structFRHAPI__ConnectionInfo_1ab2a203deb1501471c2ff86bcfd6ae3b3)(FString NewValue)|Sets the value of Ip.|
## Public Attributes



### `Ip` <a id="structFRHAPI__ConnectionInfo_1a77c50f9776e44b93e60bf4b8c5e2c3b6"></a>

`FString FRHAPI_ConnectionInfo::Ip`

IP that sent the request.





## Public Functions



### `FromJson` <a id="structFRHAPI__ConnectionInfo_1a8163d13a92ed5ca0a8292e3269a5b7d1"></a>

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



### `WriteJson` <a id="structFRHAPI__ConnectionInfo_1a194e39da068ff951effe98a6b0a36a56"></a>

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



### `GetIp` <a id="structFRHAPI__ConnectionInfo_1a35cdcfa371719695f1ad4fe00c86db75"></a>

FString & GetIp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Ip.




### `GetIp` <a id="structFRHAPI__ConnectionInfo_1add13d7706711b691a3dbf9bbd504a749"></a>

const FString & GetIp()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Ip.




### `SetIp` <a id="structFRHAPI__ConnectionInfo_1ab2a203deb1501471c2ff86bcfd6ae3b3"></a>

void SetIp(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Ip.





