---
title: FRHAPI_PlayerResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response for getting a player&#39;s info.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PlayerId](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1ad310dc7254bc7601cb78f946655b4896)|Player ID DEPRECATED use player_uuid instead.|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1adc688a62eabd80c3cfde9688e61bd030)|Player UUID.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1ad95f65d26ed9beae939f37a4cd5bc765)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1af73853ee9ac143469af094d5046b6845)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1a57e3b6edbaf4c9725ed93ee10d9c1871)()|Gets the value of PlayerId.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1a8f31b3dd5619b099307535499154f461)()|Gets the value of PlayerId.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1a9b452954dbf91a860e01f9ed8e0dbc32)(int32 NewValue)|Sets the value of PlayerId.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1a1e4e3035c00a0707189ce52e4c1f1649)()|Returns true if PlayerId matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1ae3de40c04341be8f81a980d77123ae55)()|Sets the value of PlayerId to its default|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1a5aa6031765ed727ee1d7d9416a17157e)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1a75fb0b696a3523f43cc84316c727f559)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse_1a9a02552a86853550af3ed132f5392167)(FGuid NewValue)|Sets the value of PlayerUuid.|
## Public Attributes



### `PlayerId` <a id="structFRHAPI__PlayerResponse_1ad310dc7254bc7601cb78f946655b4896"></a>

`int32 FRHAPI_PlayerResponse::PlayerId`

Player ID DEPRECATED use player_uuid instead.




### `PlayerUuid` <a id="structFRHAPI__PlayerResponse_1adc688a62eabd80c3cfde9688e61bd030"></a>

`FGuid FRHAPI_PlayerResponse::PlayerUuid`

Player UUID.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerResponse_1ad95f65d26ed9beae939f37a4cd5bc765"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerResponse_1af73853ee9ac143469af094d5046b6845"></a>

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



### `GetPlayerId` <a id="structFRHAPI__PlayerResponse_1a57e3b6edbaf4c9725ed93ee10d9c1871"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `GetPlayerId` <a id="structFRHAPI__PlayerResponse_1a8f31b3dd5619b099307535499154f461"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `SetPlayerId` <a id="structFRHAPI__PlayerResponse_1a9b452954dbf91a860e01f9ed8e0dbc32"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__PlayerResponse_1a1e4e3035c00a0707189ce52e4c1f1649"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__PlayerResponse_1ae3de40c04341be8f81a980d77123ae55"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId to its default




### `GetPlayerUuid` <a id="structFRHAPI__PlayerResponse_1a5aa6031765ed727ee1d7d9416a17157e"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__PlayerResponse_1a75fb0b696a3523f43cc84316c727f559"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__PlayerResponse_1a9a02552a86853550af3ed132f5392167"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.





