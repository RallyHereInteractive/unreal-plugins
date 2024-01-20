---
title: FRHAPI_BlockedPlayer Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

The player that is being blocked.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[BlockedPlayerUuid](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3)||
|FDateTime|[LastModifiedOn](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1a3b5c3b7a054ba579ce4e085a4fb4545b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1a1037583cdcc3c272106e0488926ee1d4)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetBlockedPlayerUuid](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1a9548784ebf50d0e6718d8bdaa05bdc01)()|Gets the value of BlockedPlayerUuid.|
|const FGuid &|[GetBlockedPlayerUuid](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1ad843e12c6107e58a99f84ed0f5362bcf)()|Gets the value of BlockedPlayerUuid.|
|void|[SetBlockedPlayerUuid](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1a299f215923b86d31db71fc18f61fb4c9)(FGuid NewValue)|Sets the value of BlockedPlayerUuid.|
|FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1a711a83c7742b9e7314aa164e49f6d455)()|Gets the value of LastModifiedOn.|
|const FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1a1fde10dd3b7b0c4a4900aedebff87713)()|Gets the value of LastModifiedOn.|
|void|[SetLastModifiedOn](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer_1ac53ba9d483ec1f43c39fcc34203b9bc7)(FDateTime NewValue)|Sets the value of LastModifiedOn.|
## Public Attributes



### `BlockedPlayerUuid` <a id="structFRHAPI__BlockedPlayer_1a25926c09c253b77621025b03a36ddaa3"></a>

`FGuid FRHAPI_BlockedPlayer::BlockedPlayerUuid`






### `LastModifiedOn` <a id="structFRHAPI__BlockedPlayer_1aae4cca6fd2693a52cd56e666dd06e6f0"></a>

`FDateTime FRHAPI_BlockedPlayer::LastModifiedOn`







## Public Functions



### `FromJson` <a id="structFRHAPI__BlockedPlayer_1a3b5c3b7a054ba579ce4e085a4fb4545b"></a>

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



### `WriteJson` <a id="structFRHAPI__BlockedPlayer_1a1037583cdcc3c272106e0488926ee1d4"></a>

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



### `GetBlockedPlayerUuid` <a id="structFRHAPI__BlockedPlayer_1a9548784ebf50d0e6718d8bdaa05bdc01"></a>

FGuid & GetBlockedPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BlockedPlayerUuid.




### `GetBlockedPlayerUuid` <a id="structFRHAPI__BlockedPlayer_1ad843e12c6107e58a99f84ed0f5362bcf"></a>

const FGuid & GetBlockedPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BlockedPlayerUuid.




### `SetBlockedPlayerUuid` <a id="structFRHAPI__BlockedPlayer_1a299f215923b86d31db71fc18f61fb4c9"></a>

void SetBlockedPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of BlockedPlayerUuid.




### `GetLastModifiedOn` <a id="structFRHAPI__BlockedPlayer_1a711a83c7742b9e7314aa164e49f6d455"></a>

FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `GetLastModifiedOn` <a id="structFRHAPI__BlockedPlayer_1a1fde10dd3b7b0c4a4900aedebff87713"></a>

const FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `SetLastModifiedOn` <a id="structFRHAPI__BlockedPlayer_1ac53ba9d483ec1f43c39fcc34203b9bc7"></a>

void SetLastModifiedOn(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of LastModifiedOn.





