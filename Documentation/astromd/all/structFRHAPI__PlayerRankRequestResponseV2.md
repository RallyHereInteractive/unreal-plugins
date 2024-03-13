---
title: FRHAPI_PlayerRankRequestResponseV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response to successfully requesting all of a player&#39;s ranks.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) >|[PlayerRanks](/unreal-plugins/all/structfrhapi__playerrankrequestresponsev2/#structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3)|List of player's ranks.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerrankrequestresponsev2/#structFRHAPI__PlayerRankRequestResponseV2_1a03712dedf7488733a2162a4b4cedc7d7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerrankrequestresponsev2/#structFRHAPI__PlayerRankRequestResponseV2_1a038b46467170246424f5a188361d7cf1)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > &|[GetPlayerRanks](/unreal-plugins/all/structfrhapi__playerrankrequestresponsev2/#structFRHAPI__PlayerRankRequestResponseV2_1a4b0f64f6adb6b32e30d012eea8623b54)()|Gets the value of PlayerRanks.|
|const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > &|[GetPlayerRanks](/unreal-plugins/all/structfrhapi__playerrankrequestresponsev2/#structFRHAPI__PlayerRankRequestResponseV2_1ab5ce87761c241ccefaf1c5fe1ac0db82)()|Gets the value of PlayerRanks.|
|void|[SetPlayerRanks](/unreal-plugins/all/structfrhapi__playerrankrequestresponsev2/#structFRHAPI__PlayerRankRequestResponseV2_1acdf16df8acc6e2f1341971ea6d2c2fa5)(TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > NewValue)|Sets the value of PlayerRanks.|
## Public Attributes



### `PlayerRanks` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3"></a>

`TArray<FRHAPI_PlayerRankResponseV2> FRHAPI_PlayerRankRequestResponseV2::PlayerRanks`

List of player's ranks.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a03712dedf7488733a2162a4b4cedc7d7"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a038b46467170246424f5a188361d7cf1"></a>

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



### `GetPlayerRanks` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a4b0f64f6adb6b32e30d012eea8623b54"></a>

TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & GetPlayerRanks()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerRanks.




### `GetPlayerRanks` <a id="structFRHAPI__PlayerRankRequestResponseV2_1ab5ce87761c241ccefaf1c5fe1ac0db82"></a>

const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & GetPlayerRanks()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerRanks.




### `SetPlayerRanks` <a id="structFRHAPI__PlayerRankRequestResponseV2_1acdf16df8acc6e2f1341971ea6d2c2fa5"></a>

void SetPlayerRanks(TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) >|NewValue|

#### Description

Sets the value of PlayerRanks.





