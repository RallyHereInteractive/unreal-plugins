---
title: FRHAPI_BlockedPlayerV1 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

The player that is being blocked. V1 includes player_id and player_uuid.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[BlockedPlayerId_Optional](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a2c0a8dc3a7a9c10eebed6a6ec6566199)||
|bool|[BlockedPlayerId_IsSet](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a54dbc01c6c7e00ac91846fece6f7d104)|true if BlockedPlayerId_Optional has been set to a value|
|FGuid|[BlockedPlayerUuid](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a5d4cb32109c33c54a9f78b78051d1f7b)||
|FDateTime|[LastModifiedOn](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a0dd41d0ff26e497bc7c0296d8427b77f)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a6f64351fbbc1c96c9826085b98d384a9)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a840a2d478851d5cac96982d47636466e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetBlockedPlayerId](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a14e1175346fa416207d7c93dc9ea9edd)()|Gets the value of BlockedPlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetBlockedPlayerId](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a43af2c3ac8226d61e7b499088f254a0d)()|Gets the value of BlockedPlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetBlockedPlayerId](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a24ddb71f53adc353474ff6d4386971f2)(const int32 & DefaultValue)|Gets the value of BlockedPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBlockedPlayerId](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a205bd3351c53e2302c6cc1248a728eaa)(int32 & OutValue)|Fills OutValue with the value of BlockedPlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetBlockedPlayerIdOrNull](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a9e11a950a8516599fee0b407ac1fedee)()|Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetBlockedPlayerIdOrNull](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1ad5963fa5d1ffe8ed94d4b497079c2a0c)()|Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBlockedPlayerId](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a755fc2d828b8734851a73da798c8875c)(int32 NewValue)|Sets the value of BlockedPlayerId_Optional and also sets BlockedPlayerId_IsSet to true.|
|void|[ClearBlockedPlayerId](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a2e7d44afaa128e42642207f7ca8942d0)()|Clears the value of BlockedPlayerId_Optional and sets BlockedPlayerId_IsSet to false.|
|bool|[IsBlockedPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a569e9403d985c563dc2520420d7d0678)()|Returns true if BlockedPlayerId_Optional is set and matches the default value.|
|void|[SetBlockedPlayerIdToDefault](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1ae7d25bb29a63de671f8b98d10dcd1f21)()|Sets the value of BlockedPlayerId_Optional to its default and also sets BlockedPlayerId_IsSet to true.|
|FGuid &|[GetBlockedPlayerUuid](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1ac42f806a7777f546ffd6ab133c6a2e5c)()|Gets the value of BlockedPlayerUuid.|
|const FGuid &|[GetBlockedPlayerUuid](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a2202ee54fdde82fceb495fef30d0e937)()|Gets the value of BlockedPlayerUuid.|
|void|[SetBlockedPlayerUuid](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1ab379b9ecaf5ada4a5ba827f686930e27)(FGuid NewValue)|Sets the value of BlockedPlayerUuid.|
|FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1adb166e94801e68f9f9b781bf3e47135d)()|Gets the value of LastModifiedOn.|
|const FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1a6ac3224bec707ae8bb7cb49c3ddb1c59)()|Gets the value of LastModifiedOn.|
|void|[SetLastModifiedOn](/unreal-plugins/all/structfrhapi__blockedplayerv1/#structFRHAPI__BlockedPlayerV1_1aee5bfec8464fb07e11c36a60a03ce35e)(FDateTime NewValue)|Sets the value of LastModifiedOn.|
## Public Attributes



### `BlockedPlayerId_Optional` <a id="structFRHAPI__BlockedPlayerV1_1a2c0a8dc3a7a9c10eebed6a6ec6566199"></a>

`int32 FRHAPI_BlockedPlayerV1::BlockedPlayerId_Optional`






### `BlockedPlayerId_IsSet` <a id="structFRHAPI__BlockedPlayerV1_1a54dbc01c6c7e00ac91846fece6f7d104"></a>

`bool FRHAPI_BlockedPlayerV1::BlockedPlayerId_IsSet`

true if BlockedPlayerId_Optional has been set to a value




### `BlockedPlayerUuid` <a id="structFRHAPI__BlockedPlayerV1_1a5d4cb32109c33c54a9f78b78051d1f7b"></a>

`FGuid FRHAPI_BlockedPlayerV1::BlockedPlayerUuid`






### `LastModifiedOn` <a id="structFRHAPI__BlockedPlayerV1_1a0dd41d0ff26e497bc7c0296d8427b77f"></a>

`FDateTime FRHAPI_BlockedPlayerV1::LastModifiedOn`







## Public Functions



### `FromJson` <a id="structFRHAPI__BlockedPlayerV1_1a6f64351fbbc1c96c9826085b98d384a9"></a>

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



### `WriteJson` <a id="structFRHAPI__BlockedPlayerV1_1a840a2d478851d5cac96982d47636466e"></a>

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



### `GetBlockedPlayerId` <a id="structFRHAPI__BlockedPlayerV1_1a14e1175346fa416207d7c93dc9ea9edd"></a>

int32 & GetBlockedPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BlockedPlayerId_Optional, regardless of it having been set.




### `GetBlockedPlayerId` <a id="structFRHAPI__BlockedPlayerV1_1a43af2c3ac8226d61e7b499088f254a0d"></a>

const int32 & GetBlockedPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BlockedPlayerId_Optional, regardless of it having been set.




### `GetBlockedPlayerId` <a id="structFRHAPI__BlockedPlayerV1_1a24ddb71f53adc353474ff6d4386971f2"></a>

const int32 & GetBlockedPlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of BlockedPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBlockedPlayerId` <a id="structFRHAPI__BlockedPlayerV1_1a205bd3351c53e2302c6cc1248a728eaa"></a>

bool GetBlockedPlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of BlockedPlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetBlockedPlayerIdOrNull` <a id="structFRHAPI__BlockedPlayerV1_1a9e11a950a8516599fee0b407ac1fedee"></a>

int32 * GetBlockedPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetBlockedPlayerIdOrNull` <a id="structFRHAPI__BlockedPlayerV1_1ad5963fa5d1ffe8ed94d4b497079c2a0c"></a>

const int32 * GetBlockedPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetBlockedPlayerId` <a id="structFRHAPI__BlockedPlayerV1_1a755fc2d828b8734851a73da798c8875c"></a>

void SetBlockedPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of BlockedPlayerId_Optional and also sets BlockedPlayerId_IsSet to true.




### `ClearBlockedPlayerId` <a id="structFRHAPI__BlockedPlayerV1_1a2e7d44afaa128e42642207f7ca8942d0"></a>

void ClearBlockedPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of BlockedPlayerId_Optional and sets BlockedPlayerId_IsSet to false.




### `IsBlockedPlayerIdDefaultValue` <a id="structFRHAPI__BlockedPlayerV1_1a569e9403d985c563dc2520420d7d0678"></a>

bool IsBlockedPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if BlockedPlayerId_Optional is set and matches the default value.




### `SetBlockedPlayerIdToDefault` <a id="structFRHAPI__BlockedPlayerV1_1ae7d25bb29a63de671f8b98d10dcd1f21"></a>

void SetBlockedPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of BlockedPlayerId_Optional to its default and also sets BlockedPlayerId_IsSet to true.




### `GetBlockedPlayerUuid` <a id="structFRHAPI__BlockedPlayerV1_1ac42f806a7777f546ffd6ab133c6a2e5c"></a>

FGuid & GetBlockedPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BlockedPlayerUuid.




### `GetBlockedPlayerUuid` <a id="structFRHAPI__BlockedPlayerV1_1a2202ee54fdde82fceb495fef30d0e937"></a>

const FGuid & GetBlockedPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BlockedPlayerUuid.




### `SetBlockedPlayerUuid` <a id="structFRHAPI__BlockedPlayerV1_1ab379b9ecaf5ada4a5ba827f686930e27"></a>

void SetBlockedPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of BlockedPlayerUuid.




### `GetLastModifiedOn` <a id="structFRHAPI__BlockedPlayerV1_1adb166e94801e68f9f9b781bf3e47135d"></a>

FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `GetLastModifiedOn` <a id="structFRHAPI__BlockedPlayerV1_1a6ac3224bec707ae8bb7cb49c3ddb1c59"></a>

const FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `SetLastModifiedOn` <a id="structFRHAPI__BlockedPlayerV1_1aee5bfec8464fb07e11c36a60a03ce35e"></a>

void SetLastModifiedOn(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of LastModifiedOn.





