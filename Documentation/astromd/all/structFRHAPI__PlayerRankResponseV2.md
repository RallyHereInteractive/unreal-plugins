---
title: FRHAPI_PlayerRankResponseV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response to successfully requesting a player&#39;s rank.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6)|UUID for this specific player.|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData)|[Rank](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1adf07ad32c8f17803efc173c7c9ac1da5)||
|FString|[RankId](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967)|ID for this rank.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a02bc6e94b724096091a0caa8caa9cbdd)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a757f9ea037f1eceb84f3d68201898bd1)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a174222cd630849b99fbed5f94a53cd82)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a4a3a7f6b1ee199dc903b3ba903223293)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a3d1d4732d4120a4737aaff48e76b7127)(FGuid NewValue)|Sets the value of PlayerUuid.|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) &|[GetRank](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1ac0bf2c0e32e464eabb65775162e0d9ba)()|Gets the value of Rank.|
|const [FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) &|[GetRank](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a9294cfa6ceca4a2f6732ec959326190a)()|Gets the value of Rank.|
|void|[SetRank](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a78609598c4b8aa825012e70d10986b84)([FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) NewValue)|Sets the value of Rank.|
|FString &|[GetRankId](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a38609090cb20fc2bda2591c6b184dc8f)()|Gets the value of RankId.|
|const FString &|[GetRankId](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1ac8ae609b8dfc814936a2805c65d6a2b7)()|Gets the value of RankId.|
|void|[SetRankId](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2_1a0101d12f93802b6057f0996fb60e08aa)(FString NewValue)|Sets the value of RankId.|
## Public Attributes



### `PlayerUuid` <a id="structFRHAPI__PlayerRankResponseV2_1a10fe34359412aef124eaf028e9f318e6"></a>

`FGuid FRHAPI_PlayerRankResponseV2::PlayerUuid`

UUID for this specific player.




### `Rank` <a id="structFRHAPI__PlayerRankResponseV2_1adf07ad32c8f17803efc173c7c9ac1da5"></a>

`FRHAPI_RankData FRHAPI_PlayerRankResponseV2::Rank`






### `RankId` <a id="structFRHAPI__PlayerRankResponseV2_1a1c0a9730b764c6c249de4a58491f0967"></a>

`FString FRHAPI_PlayerRankResponseV2::RankId`

ID for this rank.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerRankResponseV2_1a02bc6e94b724096091a0caa8caa9cbdd"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerRankResponseV2_1a757f9ea037f1eceb84f3d68201898bd1"></a>

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



### `GetPlayerUuid` <a id="structFRHAPI__PlayerRankResponseV2_1a174222cd630849b99fbed5f94a53cd82"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__PlayerRankResponseV2_1a4a3a7f6b1ee199dc903b3ba903223293"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__PlayerRankResponseV2_1a3d1d4732d4120a4737aaff48e76b7127"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetRank` <a id="structFRHAPI__PlayerRankResponseV2_1ac0bf2c0e32e464eabb65775162e0d9ba"></a>

[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) & GetRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rank.




### `GetRank` <a id="structFRHAPI__PlayerRankResponseV2_1a9294cfa6ceca4a2f6732ec959326190a"></a>

const [FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) & GetRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rank.




### `SetRank` <a id="structFRHAPI__PlayerRankResponseV2_1a78609598c4b8aa825012e70d10986b84"></a>

void SetRank([FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData)|NewValue|

#### Description

Sets the value of Rank.




### `GetRankId` <a id="structFRHAPI__PlayerRankResponseV2_1a38609090cb20fc2bda2591c6b184dc8f"></a>

FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `GetRankId` <a id="structFRHAPI__PlayerRankResponseV2_1ac8ae609b8dfc814936a2805c65d6a2b7"></a>

const FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `SetRankId` <a id="structFRHAPI__PlayerRankResponseV2_1a0101d12f93802b6057f0996fb60e08aa"></a>

void SetRankId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RankId.





