---
title: FRHAPI_TrueskillRank Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Additional data about a specific player&#39;s rank and previous match in order to make trueskill calculations.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1aedadea66bbdcec5f82b8a349283d068c)|UUID for this specific player.|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData)|[Rank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1af39b2ae881ae0ffdf4dd6836677f48a5)||
|int32|[SecondsInMatch](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a68c349e909efe6f7fd18d28c1b4b8e51)|How many seconds this player was in the match.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1ac22894eb357464b911aca49770507e5e)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a5714d0abce9d473dc0a14d097634e90f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a8ec1d7e23e97d4afa52e9e620e66b80f)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a6ad598cc0a624bd29bbe5f8ec8ba2ee9)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a7377bccba2509ac98fea81d2eb2735b3)(FGuid NewValue)|Sets the value of PlayerUuid.|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) &|[GetRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1af016b1248a10ffba74cac73c34b1cc37)()|Gets the value of Rank.|
|const [FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) &|[GetRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a8c754d61c93043a10e12531923a91c52)()|Gets the value of Rank.|
|void|[SetRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1ab51a53bb2327adfacc4299e1c3d7a63b)([FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) NewValue)|Sets the value of Rank.|
|int32 &|[GetSecondsInMatch](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a20b1960e0c1d51d01eeed21ebafe2195)()|Gets the value of SecondsInMatch.|
|const int32 &|[GetSecondsInMatch](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a2ec97a2e674ea48254803db5cb3b8752)()|Gets the value of SecondsInMatch.|
|void|[SetSecondsInMatch](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a86bf34b25badc628eb021aa9c9412b2a)(int32 NewValue)|Sets the value of SecondsInMatch.|
|bool|[IsSecondsInMatchDefaultValue](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1a16ddaad664bcb8338928f1c56a3bf8c2)()|Returns true if SecondsInMatch matches the default value.|
|void|[SetSecondsInMatchToDefault](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank_1aeb08477ff2f0cbdecd7c4f954bdaa0d9)()|Sets the value of SecondsInMatch to its default|
## Public Attributes



### `PlayerUuid` <a id="structFRHAPI__TrueskillRank_1aedadea66bbdcec5f82b8a349283d068c"></a>

`FGuid FRHAPI_TrueskillRank::PlayerUuid`

UUID for this specific player.




### `Rank` <a id="structFRHAPI__TrueskillRank_1af39b2ae881ae0ffdf4dd6836677f48a5"></a>

`FRHAPI_RankData FRHAPI_TrueskillRank::Rank`






### `SecondsInMatch` <a id="structFRHAPI__TrueskillRank_1a68c349e909efe6f7fd18d28c1b4b8e51"></a>

`int32 FRHAPI_TrueskillRank::SecondsInMatch`

How many seconds this player was in the match.





## Public Functions



### `FromJson` <a id="structFRHAPI__TrueskillRank_1ac22894eb357464b911aca49770507e5e"></a>

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



### `WriteJson` <a id="structFRHAPI__TrueskillRank_1a5714d0abce9d473dc0a14d097634e90f"></a>

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



### `GetPlayerUuid` <a id="structFRHAPI__TrueskillRank_1a8ec1d7e23e97d4afa52e9e620e66b80f"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__TrueskillRank_1a6ad598cc0a624bd29bbe5f8ec8ba2ee9"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__TrueskillRank_1a7377bccba2509ac98fea81d2eb2735b3"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetRank` <a id="structFRHAPI__TrueskillRank_1af016b1248a10ffba74cac73c34b1cc37"></a>

[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) & GetRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rank.




### `GetRank` <a id="structFRHAPI__TrueskillRank_1a8c754d61c93043a10e12531923a91c52"></a>

const [FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) & GetRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rank.




### `SetRank` <a id="structFRHAPI__TrueskillRank_1ab51a53bb2327adfacc4299e1c3d7a63b"></a>

void SetRank([FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData)|NewValue|

#### Description

Sets the value of Rank.




### `GetSecondsInMatch` <a id="structFRHAPI__TrueskillRank_1a20b1960e0c1d51d01eeed21ebafe2195"></a>

int32 & GetSecondsInMatch()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SecondsInMatch.




### `GetSecondsInMatch` <a id="structFRHAPI__TrueskillRank_1a2ec97a2e674ea48254803db5cb3b8752"></a>

const int32 & GetSecondsInMatch()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SecondsInMatch.




### `SetSecondsInMatch` <a id="structFRHAPI__TrueskillRank_1a86bf34b25badc628eb021aa9c9412b2a"></a>

void SetSecondsInMatch(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of SecondsInMatch.




### `IsSecondsInMatchDefaultValue` <a id="structFRHAPI__TrueskillRank_1a16ddaad664bcb8338928f1c56a3bf8c2"></a>

bool IsSecondsInMatchDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SecondsInMatch matches the default value.




### `SetSecondsInMatchToDefault` <a id="structFRHAPI__TrueskillRank_1aeb08477ff2f0cbdecd7c4f954bdaa0d9"></a>

void SetSecondsInMatchToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SecondsInMatch to its default





