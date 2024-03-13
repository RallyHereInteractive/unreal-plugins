---
title: FRHAPI_PlayerUuidFromId Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Model for getting a player UUID from a player ID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[Uuid](/unreal-plugins/all/structfrhapi__playeruuidfromid/#structFRHAPI__PlayerUuidFromId_1af3d1c98234ec394e36c4ac3ba7873ebc)|Player UUID.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playeruuidfromid/#structFRHAPI__PlayerUuidFromId_1a923cb73cadda24da3b8fd227f14d6060)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playeruuidfromid/#structFRHAPI__PlayerUuidFromId_1a6e18ad078934048aa08c3b68ffc43706)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetUuid](/unreal-plugins/all/structfrhapi__playeruuidfromid/#structFRHAPI__PlayerUuidFromId_1a47a1e049d978c28ee4e97a26da4d49be)()|Gets the value of Uuid.|
|const FGuid &|[GetUuid](/unreal-plugins/all/structfrhapi__playeruuidfromid/#structFRHAPI__PlayerUuidFromId_1ab17b92b34de1090d5a2b392882100ae1)()|Gets the value of Uuid.|
|void|[SetUuid](/unreal-plugins/all/structfrhapi__playeruuidfromid/#structFRHAPI__PlayerUuidFromId_1af7a1334489be24d8295ab4bebfab0029)(FGuid NewValue)|Sets the value of Uuid.|
## Public Attributes



### `Uuid` <a id="structFRHAPI__PlayerUuidFromId_1af3d1c98234ec394e36c4ac3ba7873ebc"></a>

`FGuid FRHAPI_PlayerUuidFromId::Uuid`

Player UUID.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerUuidFromId_1a923cb73cadda24da3b8fd227f14d6060"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerUuidFromId_1a6e18ad078934048aa08c3b68ffc43706"></a>

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



### `GetUuid` <a id="structFRHAPI__PlayerUuidFromId_1a47a1e049d978c28ee4e97a26da4d49be"></a>

FGuid & GetUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Uuid.




### `GetUuid` <a id="structFRHAPI__PlayerUuidFromId_1ab17b92b34de1090d5a2b392882100ae1"></a>

const FGuid & GetUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Uuid.




### `SetUuid` <a id="structFRHAPI__PlayerUuidFromId_1af7a1334489be24d8295ab4bebfab0029"></a>

void SetUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of Uuid.





