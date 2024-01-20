---
title: FRHAPI_PlayerRankResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED Response to successfully requesting a player&#39;s rank.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1ad515f738c5f7ba86c3cc1cbc7aabb511)|UUID for this specific player.|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData)|[Rank](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a52b54e3853b393e59f3c344ec9e5e645)||
|int32|[RankId](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a8200a6af92b552e2e7976f8bc6b0356c)|ID for this rank.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a629c47f7b0ca8162bc16f1cdad7b08dc)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a412ba11e1fbd72b54600368177cfddb4)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a857484d63bbcf814e50c28724260c4fe)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a4e9ebe28e42d96f00e27a7429635e380)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1ae30125afefcc2643bd8358dc321f74d3)(FGuid NewValue)|Sets the value of PlayerUuid.|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) &|[GetRank](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a82cf4536727d77a43bc213fec4993201)()|Gets the value of Rank.|
|const [FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) &|[GetRank](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a975d50ded3a316e5989e711a9441590f)()|Gets the value of Rank.|
|void|[SetRank](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1ae32e97272d7a575f7c6d2d99b38e00c7)([FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) NewValue)|Sets the value of Rank.|
|int32 &|[GetRankId](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1aabbbbb4a9a91e91f8733f8f9188a31f7)()|Gets the value of RankId.|
|const int32 &|[GetRankId](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a918c6bbbd69cd6c14ec05ae0b364948a)()|Gets the value of RankId.|
|void|[SetRankId](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a2d2fd39b73919221dd9c65182a63b0cb)(int32 NewValue)|Sets the value of RankId.|
|bool|[IsRankIdDefaultValue](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a876bc1f29e317513febb2030029f4b67)()|Returns true if RankId matches the default value.|
|void|[SetRankIdToDefault](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse_1a33d6cc9d2f0c07f8b349991d2319ab7a)()|Sets the value of RankId to its default|
## Public Attributes



### `PlayerUuid` <a id="structFRHAPI__PlayerRankResponse_1ad515f738c5f7ba86c3cc1cbc7aabb511"></a>

`FGuid FRHAPI_PlayerRankResponse::PlayerUuid`

UUID for this specific player.




### `Rank` <a id="structFRHAPI__PlayerRankResponse_1a52b54e3853b393e59f3c344ec9e5e645"></a>

`FRHAPI_RankData FRHAPI_PlayerRankResponse::Rank`






### `RankId` <a id="structFRHAPI__PlayerRankResponse_1a8200a6af92b552e2e7976f8bc6b0356c"></a>

`int32 FRHAPI_PlayerRankResponse::RankId`

ID for this rank.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerRankResponse_1a629c47f7b0ca8162bc16f1cdad7b08dc"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerRankResponse_1a412ba11e1fbd72b54600368177cfddb4"></a>

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



### `GetPlayerUuid` <a id="structFRHAPI__PlayerRankResponse_1a857484d63bbcf814e50c28724260c4fe"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__PlayerRankResponse_1a4e9ebe28e42d96f00e27a7429635e380"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__PlayerRankResponse_1ae30125afefcc2643bd8358dc321f74d3"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetRank` <a id="structFRHAPI__PlayerRankResponse_1a82cf4536727d77a43bc213fec4993201"></a>

[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) & GetRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rank.




### `GetRank` <a id="structFRHAPI__PlayerRankResponse_1a975d50ded3a316e5989e711a9441590f"></a>

const [FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) & GetRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rank.




### `SetRank` <a id="structFRHAPI__PlayerRankResponse_1ae32e97272d7a575f7c6d2d99b38e00c7"></a>

void SetRank([FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_RankData](/unreal-plugins/all/structfrhapi__rankdata/#structFRHAPI__RankData)|NewValue|

#### Description

Sets the value of Rank.




### `GetRankId` <a id="structFRHAPI__PlayerRankResponse_1aabbbbb4a9a91e91f8733f8f9188a31f7"></a>

int32 & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `GetRankId` <a id="structFRHAPI__PlayerRankResponse_1a918c6bbbd69cd6c14ec05ae0b364948a"></a>

const int32 & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `SetRankId` <a id="structFRHAPI__PlayerRankResponse_1a2d2fd39b73919221dd9c65182a63b0cb"></a>

void SetRankId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of RankId.




### `IsRankIdDefaultValue` <a id="structFRHAPI__PlayerRankResponse_1a876bc1f29e317513febb2030029f4b67"></a>

bool IsRankIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if RankId matches the default value.




### `SetRankIdToDefault` <a id="structFRHAPI__PlayerRankResponse_1a33d6cc9d2f0c07f8b349991d2319ab7a"></a>

void SetRankIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of RankId to its default





