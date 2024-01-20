---
title: FRHAPI_FriendsList Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

List of the player&#39;s friends. Includes sent friend requests and received friends requests.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1a00993f4b19d7fda1904312a3eb2a721b)||
|TArray< [FRHAPI_FriendRelationship](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship) >|[Friends](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1ab0a6ee5eb6e5ebeaaa99474ef95b5af2)||
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta)|[Page](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1a6b5c622ef326cc1ecf38070ec82ba6ef)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1ae9e7ad7dadfb8351eb319327d832c9db)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1ada7287c9fe486755ba1170ea84c93716)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1a77a2a4ab921922160437b22c8198fbc1)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1a8eabd6c72d7710f20eaadba1085ab064)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1acb21a78522e5888d36f1cd32536eae7f)(FGuid NewValue)|Sets the value of PlayerUuid.|
|TArray< [FRHAPI_FriendRelationship](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship) > &|[GetFriends](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1af808143843707a5b8bb1decb82ed8fe0)()|Gets the value of Friends.|
|const TArray< [FRHAPI_FriendRelationship](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship) > &|[GetFriends](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1a96a0abf9001329b31c2fbc765bb7eb7a)()|Gets the value of Friends.|
|void|[SetFriends](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1a7ddc05ee230dfd4ff8bf899bbded2149)(TArray< [FRHAPI_FriendRelationship](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship) > NewValue)|Sets the value of Friends.|
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1ab1f06c56d1df9372a91ab0ca777ff95b)()|Gets the value of Page.|
|const [FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1a3455d176b11020fba24c22f1dc29b674)()|Gets the value of Page.|
|void|[SetPage](/unreal-plugins/all/structfrhapi__friendslist/#structFRHAPI__FriendsList_1aecdca26cc609cd3503c66bba009a2e58)([FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) NewValue)|Sets the value of Page.|
## Public Attributes



### `PlayerUuid` <a id="structFRHAPI__FriendsList_1a00993f4b19d7fda1904312a3eb2a721b"></a>

`FGuid FRHAPI_FriendsList::PlayerUuid`






### `Friends` <a id="structFRHAPI__FriendsList_1ab0a6ee5eb6e5ebeaaa99474ef95b5af2"></a>

`TArray<FRHAPI_FriendRelationship> FRHAPI_FriendsList::Friends`






### `Page` <a id="structFRHAPI__FriendsList_1a6b5c622ef326cc1ecf38070ec82ba6ef"></a>

`FRHAPI_PageMeta FRHAPI_FriendsList::Page`







## Public Functions



### `FromJson` <a id="structFRHAPI__FriendsList_1ae9e7ad7dadfb8351eb319327d832c9db"></a>

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



### `WriteJson` <a id="structFRHAPI__FriendsList_1ada7287c9fe486755ba1170ea84c93716"></a>

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



### `GetPlayerUuid` <a id="structFRHAPI__FriendsList_1a77a2a4ab921922160437b22c8198fbc1"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__FriendsList_1a8eabd6c72d7710f20eaadba1085ab064"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__FriendsList_1acb21a78522e5888d36f1cd32536eae7f"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetFriends` <a id="structFRHAPI__FriendsList_1af808143843707a5b8bb1decb82ed8fe0"></a>

TArray< [FRHAPI_FriendRelationship](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship) > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Friends.




### `GetFriends` <a id="structFRHAPI__FriendsList_1a96a0abf9001329b31c2fbc765bb7eb7a"></a>

const TArray< [FRHAPI_FriendRelationship](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship) > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Friends.




### `SetFriends` <a id="structFRHAPI__FriendsList_1a7ddc05ee230dfd4ff8bf899bbded2149"></a>

void SetFriends(TArray< [FRHAPI_FriendRelationship](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_FriendRelationship](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship) >|NewValue|

#### Description

Sets the value of Friends.




### `GetPage` <a id="structFRHAPI__FriendsList_1ab1f06c56d1df9372a91ab0ca777ff95b"></a>

[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `GetPage` <a id="structFRHAPI__FriendsList_1a3455d176b11020fba24c22f1dc29b674"></a>

const [FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `SetPage` <a id="structFRHAPI__FriendsList_1aecdca26cc609cd3503c66bba009a2e58"></a>

void SetPage([FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta)|NewValue|

#### Description

Sets the value of Page.





