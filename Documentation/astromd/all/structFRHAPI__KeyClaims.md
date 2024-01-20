---
title: FRHAPI_KeyClaims Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

List of Key Claims available to the player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_KeyClaim](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim) >|[Claims](/unreal-plugins/all/structfrhapi__keyclaims/#structFRHAPI__KeyClaims_1adebd7612d1a529f391a1d643b58be263)|List of Key Claims available to the Player.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__keyclaims/#structFRHAPI__KeyClaims_1a267c896754ce2b5be2bda66816afb013)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__keyclaims/#structFRHAPI__KeyClaims_1acac4e11383c4b935a7ada20845c1e61c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_KeyClaim](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim) > &|[GetClaims](/unreal-plugins/all/structfrhapi__keyclaims/#structFRHAPI__KeyClaims_1a238768f96e700f779de67374bc77da86)()|Gets the value of Claims.|
|const TArray< [FRHAPI_KeyClaim](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim) > &|[GetClaims](/unreal-plugins/all/structfrhapi__keyclaims/#structFRHAPI__KeyClaims_1a54c92646bf5dd2ec2db58a29cafc1a49)()|Gets the value of Claims.|
|void|[SetClaims](/unreal-plugins/all/structfrhapi__keyclaims/#structFRHAPI__KeyClaims_1a63c11eaa09d0f26302c0ea044ec4a262)(TArray< [FRHAPI_KeyClaim](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim) > NewValue)|Sets the value of Claims.|
## Public Attributes



### `Claims` <a id="structFRHAPI__KeyClaims_1adebd7612d1a529f391a1d643b58be263"></a>

`TArray<FRHAPI_KeyClaim> FRHAPI_KeyClaims::Claims`

List of Key Claims available to the Player.





## Public Functions



### `FromJson` <a id="structFRHAPI__KeyClaims_1a267c896754ce2b5be2bda66816afb013"></a>

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



### `WriteJson` <a id="structFRHAPI__KeyClaims_1acac4e11383c4b935a7ada20845c1e61c"></a>

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



### `GetClaims` <a id="structFRHAPI__KeyClaims_1a238768f96e700f779de67374bc77da86"></a>

TArray< [FRHAPI_KeyClaim](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim) > & GetClaims()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Claims.




### `GetClaims` <a id="structFRHAPI__KeyClaims_1a54c92646bf5dd2ec2db58a29cafc1a49"></a>

const TArray< [FRHAPI_KeyClaim](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim) > & GetClaims()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Claims.




### `SetClaims` <a id="structFRHAPI__KeyClaims_1a63c11eaa09d0f26302c0ea044ec4a262"></a>

void SetClaims(TArray< [FRHAPI_KeyClaim](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_KeyClaim](/unreal-plugins/all/structfrhapi__keyclaim/#structFRHAPI__KeyClaim) >|NewValue|

#### Description

Sets the value of Claims.





