---
title: FRHAPI_BlockedListV1 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

The list of players that is blocked. V1 includes player_id and player_uuid.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PlayerId](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1ade9caa9b10824edf6926d3b8469100ab)||
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a50c043118db11d7942acdf151465173d)||
|TArray< [FRHAPI_BlockedPlayerV1](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1) >|[Blocked](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1aba330a0566290f3fda0222b500989bfd)||
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta)|[Page](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a521032dec2dcb9ea96651449d37e7bf3)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a61600940704bfb4c08a22183035e4f6c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a0b3d1083d5c552dc6f25e6a65a069e40)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a662a4abd8bac8398bfb844267003fab2)()|Gets the value of PlayerId.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1aa68da4ac2bfcad2e100c40bc1a292a71)()|Gets the value of PlayerId.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1aa19790b8dff978cadda8ef95b0cfc185)(int32 NewValue)|Sets the value of PlayerId.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a699d03bcefb6ea6a41be3b97047e0509)()|Returns true if PlayerId matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a64a886e93872c0f49fdb00a326f936cd)()|Sets the value of PlayerId to its default|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a529642356bb09c2b33b03f481126549e)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a2ec5de2f6da5e7f1fc36d56b61fe4198)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1afdfd5130b1c1b52ec10bea416ed8efdd)(FGuid NewValue)|Sets the value of PlayerUuid.|
|TArray< [FRHAPI_BlockedPlayerV1](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1) > &|[GetBlocked](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1ae669839d122dd52e3bee6a91da44b1a5)()|Gets the value of Blocked.|
|const TArray< [FRHAPI_BlockedPlayerV1](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1) > &|[GetBlocked](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a3ab93256d3c954f84bb1141c09bd0a0e)()|Gets the value of Blocked.|
|void|[SetBlocked](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a32a8b086bc503d702f9136e90609f5d5)(TArray< [FRHAPI_BlockedPlayerV1](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1) > NewValue)|Sets the value of Blocked.|
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1af64951fcb4ca7d17d7b22ef758010b54)()|Gets the value of Page.|
|const [FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a3b976a1089c4eaf000ccb7b282866322)()|Gets the value of Page.|
|void|[SetPage](/unreal-plugins/all/structfrhapi__blockedlistv1/#structFRHAPI__BlockedListV1_1a259100b6a9f9fa2f868fcd41465902f1)([FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) NewValue)|Sets the value of Page.|
## Public Attributes



### `PlayerId` <a id="structFRHAPI__BlockedListV1_1ade9caa9b10824edf6926d3b8469100ab"></a>

`int32 FRHAPI_BlockedListV1::PlayerId`






### `PlayerUuid` <a id="structFRHAPI__BlockedListV1_1a50c043118db11d7942acdf151465173d"></a>

`FGuid FRHAPI_BlockedListV1::PlayerUuid`






### `Blocked` <a id="structFRHAPI__BlockedListV1_1aba330a0566290f3fda0222b500989bfd"></a>

`TArray<FRHAPI_BlockedPlayerV1> FRHAPI_BlockedListV1::Blocked`






### `Page` <a id="structFRHAPI__BlockedListV1_1a521032dec2dcb9ea96651449d37e7bf3"></a>

`FRHAPI_PageMeta FRHAPI_BlockedListV1::Page`







## Public Functions



### `FromJson` <a id="structFRHAPI__BlockedListV1_1a61600940704bfb4c08a22183035e4f6c"></a>

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



### `WriteJson` <a id="structFRHAPI__BlockedListV1_1a0b3d1083d5c552dc6f25e6a65a069e40"></a>

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



### `GetPlayerId` <a id="structFRHAPI__BlockedListV1_1a662a4abd8bac8398bfb844267003fab2"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `GetPlayerId` <a id="structFRHAPI__BlockedListV1_1aa68da4ac2bfcad2e100c40bc1a292a71"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `SetPlayerId` <a id="structFRHAPI__BlockedListV1_1aa19790b8dff978cadda8ef95b0cfc185"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__BlockedListV1_1a699d03bcefb6ea6a41be3b97047e0509"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__BlockedListV1_1a64a886e93872c0f49fdb00a326f936cd"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId to its default




### `GetPlayerUuid` <a id="structFRHAPI__BlockedListV1_1a529642356bb09c2b33b03f481126549e"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__BlockedListV1_1a2ec5de2f6da5e7f1fc36d56b61fe4198"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__BlockedListV1_1afdfd5130b1c1b52ec10bea416ed8efdd"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetBlocked` <a id="structFRHAPI__BlockedListV1_1ae669839d122dd52e3bee6a91da44b1a5"></a>

TArray< [FRHAPI_BlockedPlayerV1](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1) > & GetBlocked()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Blocked.




### `GetBlocked` <a id="structFRHAPI__BlockedListV1_1a3ab93256d3c954f84bb1141c09bd0a0e"></a>

const TArray< [FRHAPI_BlockedPlayerV1](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1) > & GetBlocked()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Blocked.




### `SetBlocked` <a id="structFRHAPI__BlockedListV1_1a32a8b086bc503d702f9136e90609f5d5"></a>

void SetBlocked(TArray< [FRHAPI_BlockedPlayerV1](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_BlockedPlayerV1](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1) >|NewValue|

#### Description

Sets the value of Blocked.




### `GetPage` <a id="structFRHAPI__BlockedListV1_1af64951fcb4ca7d17d7b22ef758010b54"></a>

[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `GetPage` <a id="structFRHAPI__BlockedListV1_1a3b976a1089c4eaf000ccb7b282866322"></a>

const [FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `SetPage` <a id="structFRHAPI__BlockedListV1_1a259100b6a9f9fa2f868fcd41465902f1"></a>

void SetPage([FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta)|NewValue|

#### Description

Sets the value of Page.





