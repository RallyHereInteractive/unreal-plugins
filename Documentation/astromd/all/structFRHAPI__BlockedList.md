---
title: FRHAPI_BlockedList Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

The list of players that is blocked.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a81ca3ffaaa57933136d4e34c898eaf59)||
|TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) >|[Blocked](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a9513852bd685b421e1d530d4c5fef82b)||
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta)|[Page](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a8744288d16432ddc662e34b3390c569a)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a4777a3c2c7202d9cb8b8d04f433fdb1d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a86a943e21ccd5a660b10343c57622437)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a5396c01063e705f35bed44517fb57d9e)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a5788033debdec806a353b479d52e3774)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a2f8feadf687903ac9945373feaf3dc2f)(FGuid NewValue)|Sets the value of PlayerUuid.|
|TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > &|[GetBlocked](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1aefc67b5c3763f47afd921a641856edc1)()|Gets the value of Blocked.|
|const TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > &|[GetBlocked](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1aacc7a644b18e06511b937af710e3134f)()|Gets the value of Blocked.|
|void|[SetBlocked](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1aa2edda272be205f770947162306a6dd0)(TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > NewValue)|Sets the value of Blocked.|
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1abe000a32ad378198993a9e59888d677a)()|Gets the value of Page.|
|const [FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a7f06d404b524b06615fd6c6ddaaf8e3c)()|Gets the value of Page.|
|void|[SetPage](/unreal-plugins/all/structfrhapi__blockedlist/#structFRHAPI__BlockedList_1a129e7a3334f3898dc780ac2797a96ca5)([FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) NewValue)|Sets the value of Page.|
## Public Attributes



### `PlayerUuid` <a id="structFRHAPI__BlockedList_1a81ca3ffaaa57933136d4e34c898eaf59"></a>

`FGuid FRHAPI_BlockedList::PlayerUuid`






### `Blocked` <a id="structFRHAPI__BlockedList_1a9513852bd685b421e1d530d4c5fef82b"></a>

`TArray<FRHAPI_BlockedPlayer> FRHAPI_BlockedList::Blocked`






### `Page` <a id="structFRHAPI__BlockedList_1a8744288d16432ddc662e34b3390c569a"></a>

`FRHAPI_PageMeta FRHAPI_BlockedList::Page`







## Public Functions



### `FromJson` <a id="structFRHAPI__BlockedList_1a4777a3c2c7202d9cb8b8d04f433fdb1d"></a>

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



### `WriteJson` <a id="structFRHAPI__BlockedList_1a86a943e21ccd5a660b10343c57622437"></a>

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



### `GetPlayerUuid` <a id="structFRHAPI__BlockedList_1a5396c01063e705f35bed44517fb57d9e"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__BlockedList_1a5788033debdec806a353b479d52e3774"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__BlockedList_1a2f8feadf687903ac9945373feaf3dc2f"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetBlocked` <a id="structFRHAPI__BlockedList_1aefc67b5c3763f47afd921a641856edc1"></a>

TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > & GetBlocked()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Blocked.




### `GetBlocked` <a id="structFRHAPI__BlockedList_1aacc7a644b18e06511b937af710e3134f"></a>

const TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > & GetBlocked()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Blocked.




### `SetBlocked` <a id="structFRHAPI__BlockedList_1aa2edda272be205f770947162306a6dd0"></a>

void SetBlocked(TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_BlockedPlayer](/unreal-plugins/all/structfrhapi__blockedplayer/#structFRHAPI__BlockedPlayer) >|NewValue|

#### Description

Sets the value of Blocked.




### `GetPage` <a id="structFRHAPI__BlockedList_1abe000a32ad378198993a9e59888d677a"></a>

[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `GetPage` <a id="structFRHAPI__BlockedList_1a7f06d404b524b06615fd6c6ddaaf8e3c"></a>

const [FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `SetPage` <a id="structFRHAPI__BlockedList_1a129e7a3334f3898dc780ac2797a96ca5"></a>

void SetPage([FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta)|NewValue|

#### Description

Sets the value of Page.





