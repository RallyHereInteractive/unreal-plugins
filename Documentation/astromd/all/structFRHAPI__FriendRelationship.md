---
title: FRHAPI_FriendRelationship Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Represents the relationship with a potential friend.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[FriendsPlayerUuid](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a961b5be56ed676a68023c50909ccc61a)||
|ERHAPI_FriendshipStatus|[Status](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1ada33400fa075474a9311b95c1c691686)||
|FString|[Notes_Optional](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a64f787e21add9b85b4cd7c45cfd5d678)||
|bool|[Notes_IsSet](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a0045e135ce9d4acd6734b217462072b4)|true if Notes_Optional has been set to a value|
|FDateTime|[LastModifiedOn](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1afa70cca868e2e54b587fc6db2874ea49)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a3c5901357dd68c86a27c2797ec1403bc)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a7485c9a1f8dfa91d225c7666c5b61574)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetFriendsPlayerUuid](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a3785aa62cd6f6af26ecfacef771d4982)()|Gets the value of FriendsPlayerUuid.|
|const FGuid &|[GetFriendsPlayerUuid](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a9032516c74fb94a9621231a5e14fe2f6)()|Gets the value of FriendsPlayerUuid.|
|void|[SetFriendsPlayerUuid](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a1ded577ee2dfcd218422e1e689f6f87f)(FGuid NewValue)|Sets the value of FriendsPlayerUuid.|
|ERHAPI_FriendshipStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1ad5e4babfae7dc5e263cbe174c8eb4183)()|Gets the value of Status.|
|const ERHAPI_FriendshipStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1af7968de90683a91203ef0a81757d535a)()|Gets the value of Status.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a08f135a51b59218b3c476caf11565ce5)(ERHAPI_FriendshipStatus NewValue)|Sets the value of Status.|
|FString &|[GetNotes](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a60bcdc9a11fb9eaae0e810c002471199)()|Gets the value of Notes_Optional, regardless of it having been set.|
|const FString &|[GetNotes](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1ad28ea9035e76544076b8b45edbaaa137)()|Gets the value of Notes_Optional, regardless of it having been set.|
|const FString &|[GetNotes](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a793dce2ed3478cef9a17cf6f5146cca8)(const FString & DefaultValue)|Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNotes](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1ada53f67cf3954122cc28792378702f87)(FString & OutValue)|Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetNotesOrNull](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1aff8ac1c222bba6abb53393db48fe1840)()|Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetNotesOrNull](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a444b81546e3ed27cb23353ed8d38e1aa)()|Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNotes](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a049fff80356674c164f723ce35670dc8)(FString NewValue)|Sets the value of Notes_Optional and also sets Notes_IsSet to true.|
|void|[ClearNotes](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a80279de05c50dc3699f2cbfd93ae5b1d)()|Clears the value of Notes_Optional and sets Notes_IsSet to false.|
|FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1aed27c3940fa2dedebae068962c9decc5)()|Gets the value of LastModifiedOn.|
|const FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1a7ee0bbea10de5dafb4f1714b5639587f)()|Gets the value of LastModifiedOn.|
|void|[SetLastModifiedOn](/unreal-plugins/all/structfrhapi__friendrelationship/#structFRHAPI__FriendRelationship_1af7fdb53b511ed604ba48b9b20ea2f27a)(FDateTime NewValue)|Sets the value of LastModifiedOn.|
## Public Attributes



### `FriendsPlayerUuid` <a id="structFRHAPI__FriendRelationship_1a961b5be56ed676a68023c50909ccc61a"></a>

`FGuid FRHAPI_FriendRelationship::FriendsPlayerUuid`






### `Status` <a id="structFRHAPI__FriendRelationship_1ada33400fa075474a9311b95c1c691686"></a>

`ERHAPI_FriendshipStatus FRHAPI_FriendRelationship::Status`






### `Notes_Optional` <a id="structFRHAPI__FriendRelationship_1a64f787e21add9b85b4cd7c45cfd5d678"></a>

`FString FRHAPI_FriendRelationship::Notes_Optional`






### `Notes_IsSet` <a id="structFRHAPI__FriendRelationship_1a0045e135ce9d4acd6734b217462072b4"></a>

`bool FRHAPI_FriendRelationship::Notes_IsSet`

true if Notes_Optional has been set to a value




### `LastModifiedOn` <a id="structFRHAPI__FriendRelationship_1afa70cca868e2e54b587fc6db2874ea49"></a>

`FDateTime FRHAPI_FriendRelationship::LastModifiedOn`







## Public Functions



### `FromJson` <a id="structFRHAPI__FriendRelationship_1a3c5901357dd68c86a27c2797ec1403bc"></a>

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



### `WriteJson` <a id="structFRHAPI__FriendRelationship_1a7485c9a1f8dfa91d225c7666c5b61574"></a>

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



### `GetFriendsPlayerUuid` <a id="structFRHAPI__FriendRelationship_1a3785aa62cd6f6af26ecfacef771d4982"></a>

FGuid & GetFriendsPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FriendsPlayerUuid.




### `GetFriendsPlayerUuid` <a id="structFRHAPI__FriendRelationship_1a9032516c74fb94a9621231a5e14fe2f6"></a>

const FGuid & GetFriendsPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FriendsPlayerUuid.




### `SetFriendsPlayerUuid` <a id="structFRHAPI__FriendRelationship_1a1ded577ee2dfcd218422e1e689f6f87f"></a>

void SetFriendsPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of FriendsPlayerUuid.




### `GetStatus` <a id="structFRHAPI__FriendRelationship_1ad5e4babfae7dc5e263cbe174c8eb4183"></a>

ERHAPI_FriendshipStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `GetStatus` <a id="structFRHAPI__FriendRelationship_1af7968de90683a91203ef0a81757d535a"></a>

const ERHAPI_FriendshipStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `SetStatus` <a id="structFRHAPI__FriendRelationship_1a08f135a51b59218b3c476caf11565ce5"></a>

void SetStatus(ERHAPI_FriendshipStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_FriendshipStatus|NewValue|

#### Description

Sets the value of Status.




### `GetNotes` <a id="structFRHAPI__FriendRelationship_1a60bcdc9a11fb9eaae0e810c002471199"></a>

FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notes_Optional, regardless of it having been set.




### `GetNotes` <a id="structFRHAPI__FriendRelationship_1ad28ea9035e76544076b8b45edbaaa137"></a>

const FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notes_Optional, regardless of it having been set.




### `GetNotes` <a id="structFRHAPI__FriendRelationship_1a793dce2ed3478cef9a17cf6f5146cca8"></a>

const FString & GetNotes(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNotes` <a id="structFRHAPI__FriendRelationship_1ada53f67cf3954122cc28792378702f87"></a>

bool GetNotes(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.




### `GetNotesOrNull` <a id="structFRHAPI__FriendRelationship_1aff8ac1c222bba6abb53393db48fe1840"></a>

FString * GetNotesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.




### `GetNotesOrNull` <a id="structFRHAPI__FriendRelationship_1a444b81546e3ed27cb23353ed8d38e1aa"></a>

const FString * GetNotesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.




### `SetNotes` <a id="structFRHAPI__FriendRelationship_1a049fff80356674c164f723ce35670dc8"></a>

void SetNotes(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Notes_Optional and also sets Notes_IsSet to true.




### `ClearNotes` <a id="structFRHAPI__FriendRelationship_1a80279de05c50dc3699f2cbfd93ae5b1d"></a>

void ClearNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Notes_Optional and sets Notes_IsSet to false.




### `GetLastModifiedOn` <a id="structFRHAPI__FriendRelationship_1aed27c3940fa2dedebae068962c9decc5"></a>

FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `GetLastModifiedOn` <a id="structFRHAPI__FriendRelationship_1a7ee0bbea10de5dafb4f1714b5639587f"></a>

const FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `SetLastModifiedOn` <a id="structFRHAPI__FriendRelationship_1af7fdb53b511ed604ba48b9b20ea2f27a"></a>

void SetLastModifiedOn(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of LastModifiedOn.





