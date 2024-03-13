---
title: FRHAPI_FriendsListV1 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

List of the player&#39;s friends. Includes sent friend requests and received friends requests.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a1ae064e536bbc06887a7d980c6ff05fd)||
|int32|[PlayerId](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a888cda0f1399a44f0102b753000da38a)||
|TArray< [FRHAPI_FriendRelationshipV1](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1) >|[Friends](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a72b02064df97a58ed9a8597105914037)||
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta)|[Page](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a62ae7b423bc44e1df2b3396ee104ac4d)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a05be4b233d4ce36e7dad369628e55d69)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1acb7cbed9846f10171b989619086a769e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a5f7796f0b61994ae71393f8ec6101d86)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a4ffa53937f68363a1e96ce0f2cb7be85)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a7ab7696e9baa27a137419b7d4a8a7dd9)(FGuid NewValue)|Sets the value of PlayerUuid.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a402e7cf34b752b335d312f904f2d8f2e)()|Gets the value of PlayerId.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a91b2af4c18e9ab9f9c8c5c1a6679d292)()|Gets the value of PlayerId.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a4382fa4a609d7d0c0402a0257eef40cb)(int32 NewValue)|Sets the value of PlayerId.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1aafea53a89c4b5766d526b913c41ee543)()|Returns true if PlayerId matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a06892fea936dbec54161498bdb8a90ae)()|Sets the value of PlayerId to its default|
|TArray< [FRHAPI_FriendRelationshipV1](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1) > &|[GetFriends](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a77ecb24de44970c92a16bf238a542fc7)()|Gets the value of Friends.|
|const TArray< [FRHAPI_FriendRelationshipV1](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1) > &|[GetFriends](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a0341d564ceed3e4075a69581e10aa257)()|Gets the value of Friends.|
|void|[SetFriends](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1af97016f516552cad4261deda850db56a)(TArray< [FRHAPI_FriendRelationshipV1](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1) > NewValue)|Sets the value of Friends.|
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a644b85484d368f28a31a885aa47d6008)()|Gets the value of Page.|
|const [FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) &|[GetPage](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a3db91f511ebae8a145e619b0057e2692)()|Gets the value of Page.|
|void|[SetPage](/unreal-plugins/all/structfrhapi__friendslistv1/#structFRHAPI__FriendsListV1_1a97a749a8ef5ec437d006a5488ab1ca4c)([FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) NewValue)|Sets the value of Page.|
## Public Attributes



### `PlayerUuid` <a id="structFRHAPI__FriendsListV1_1a1ae064e536bbc06887a7d980c6ff05fd"></a>

`FGuid FRHAPI_FriendsListV1::PlayerUuid`






### `PlayerId` <a id="structFRHAPI__FriendsListV1_1a888cda0f1399a44f0102b753000da38a"></a>

`int32 FRHAPI_FriendsListV1::PlayerId`






### `Friends` <a id="structFRHAPI__FriendsListV1_1a72b02064df97a58ed9a8597105914037"></a>

`TArray<FRHAPI_FriendRelationshipV1> FRHAPI_FriendsListV1::Friends`






### `Page` <a id="structFRHAPI__FriendsListV1_1a62ae7b423bc44e1df2b3396ee104ac4d"></a>

`FRHAPI_PageMeta FRHAPI_FriendsListV1::Page`







## Public Functions



### `FromJson` <a id="structFRHAPI__FriendsListV1_1a05be4b233d4ce36e7dad369628e55d69"></a>

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



### `WriteJson` <a id="structFRHAPI__FriendsListV1_1acb7cbed9846f10171b989619086a769e"></a>

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



### `GetPlayerUuid` <a id="structFRHAPI__FriendsListV1_1a5f7796f0b61994ae71393f8ec6101d86"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__FriendsListV1_1a4ffa53937f68363a1e96ce0f2cb7be85"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__FriendsListV1_1a7ab7696e9baa27a137419b7d4a8a7dd9"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetPlayerId` <a id="structFRHAPI__FriendsListV1_1a402e7cf34b752b335d312f904f2d8f2e"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `GetPlayerId` <a id="structFRHAPI__FriendsListV1_1a91b2af4c18e9ab9f9c8c5c1a6679d292"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `SetPlayerId` <a id="structFRHAPI__FriendsListV1_1a4382fa4a609d7d0c0402a0257eef40cb"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__FriendsListV1_1aafea53a89c4b5766d526b913c41ee543"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__FriendsListV1_1a06892fea936dbec54161498bdb8a90ae"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId to its default




### `GetFriends` <a id="structFRHAPI__FriendsListV1_1a77ecb24de44970c92a16bf238a542fc7"></a>

TArray< [FRHAPI_FriendRelationshipV1](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1) > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Friends.




### `GetFriends` <a id="structFRHAPI__FriendsListV1_1a0341d564ceed3e4075a69581e10aa257"></a>

const TArray< [FRHAPI_FriendRelationshipV1](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1) > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Friends.




### `SetFriends` <a id="structFRHAPI__FriendsListV1_1af97016f516552cad4261deda850db56a"></a>

void SetFriends(TArray< [FRHAPI_FriendRelationshipV1](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_FriendRelationshipV1](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1) >|NewValue|

#### Description

Sets the value of Friends.




### `GetPage` <a id="structFRHAPI__FriendsListV1_1a644b85484d368f28a31a885aa47d6008"></a>

[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `GetPage` <a id="structFRHAPI__FriendsListV1_1a3db91f511ebae8a145e619b0057e2692"></a>

const [FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) & GetPage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Page.




### `SetPage` <a id="structFRHAPI__FriendsListV1_1a97a749a8ef5ec437d006a5488ab1ca4c"></a>

void SetPage([FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PageMeta](/unreal-plugins/all/structfrhapi__pagemeta/#structFRHAPI__PageMeta)|NewValue|

#### Description

Sets the value of Page.





