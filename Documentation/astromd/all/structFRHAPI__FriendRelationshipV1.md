---
title: FRHAPI_FriendRelationshipV1 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Represents the relationship with a potential friend. V1 includes player_id and player_uuid.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[FriendsPlayerUuid](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a23b56a3672e1ad3d6a36754bab491c30)||
|int32|[FriendsPlayerId_Optional](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a5b26fd42f238b4d79aacaf2ff0054d0f)||
|bool|[FriendsPlayerId_IsSet](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a889b41c1b2373be3ba93c20858de32f3)|true if FriendsPlayerId_Optional has been set to a value|
|ERHAPI_FriendshipStatus|[Status](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1abff1f24fecc6eeb8be9be15c4d061195)||
|FString|[Notes_Optional](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a9fb229b7f12ae3cca981c92c6f7e7491)||
|bool|[Notes_IsSet](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a47248abcf13c7b15e3f0dedf35ed979e)|true if Notes_Optional has been set to a value|
|FDateTime|[LastModifiedOn](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a71e5b77ce982ad33be82daae3236b0f1)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a979b989f461647d4a62e39ddfcc199ad)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a8cdd8111d616fd13d3e7c9c939970ab2)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetFriendsPlayerUuid](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1ae09e5e5d3be8e29fd742d6b8fc0c976a)()|Gets the value of FriendsPlayerUuid.|
|const FGuid &|[GetFriendsPlayerUuid](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a603c9200619c098479fd58b218dae130)()|Gets the value of FriendsPlayerUuid.|
|void|[SetFriendsPlayerUuid](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a0fd57ec3fd2d9478015e6d0e5e456f88)(FGuid NewValue)|Sets the value of FriendsPlayerUuid.|
|int32 &|[GetFriendsPlayerId](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1ad28fcd121584ede5a8e2718de786079b)()|Gets the value of FriendsPlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetFriendsPlayerId](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1abd50fd59f4842d6eca523058d245c571)()|Gets the value of FriendsPlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetFriendsPlayerId](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a3f1d2c4c7bf309122114fe0e5567de94)(const int32 & DefaultValue)|Gets the value of FriendsPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetFriendsPlayerId](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1af305d8f0d1bf9eb59150c24a386810b2)(int32 & OutValue)|Fills OutValue with the value of FriendsPlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetFriendsPlayerIdOrNull](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a02b618afd988f84c9970756faa5e7ace)()|Returns a pointer to FriendsPlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetFriendsPlayerIdOrNull](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1ad6c45466f1d013786d1b37dc4e35dcc6)()|Returns a pointer to FriendsPlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetFriendsPlayerId](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a89d1733f3a933fac3bc85bda3530d991)(int32 NewValue)|Sets the value of FriendsPlayerId_Optional and also sets FriendsPlayerId_IsSet to true.|
|void|[ClearFriendsPlayerId](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a9f299a0d2c7c64960a44d6ee2d8f0c01)()|Clears the value of FriendsPlayerId_Optional and sets FriendsPlayerId_IsSet to false.|
|bool|[IsFriendsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1af31f734d2234c4980bcfaa3818e6c959)()|Returns true if FriendsPlayerId_Optional is set and matches the default value.|
|void|[SetFriendsPlayerIdToDefault](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a01513c503faa103f818bdb286631316a)()|Sets the value of FriendsPlayerId_Optional to its default and also sets FriendsPlayerId_IsSet to true.|
|ERHAPI_FriendshipStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a50af0782f062afe2dfbbf1a54a54f1ea)()|Gets the value of Status.|
|const ERHAPI_FriendshipStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1af54a47a554d93246eec37a7d62c96017)()|Gets the value of Status.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1aee1fab3f779cfa6f131af3a652a7798d)(ERHAPI_FriendshipStatus NewValue)|Sets the value of Status.|
|FString &|[GetNotes](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a426ede96c1cb73b5af3d707ca176d84e)()|Gets the value of Notes_Optional, regardless of it having been set.|
|const FString &|[GetNotes](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1abe77031a34d5f9497656f0960bd0fe4c)()|Gets the value of Notes_Optional, regardless of it having been set.|
|const FString &|[GetNotes](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1af4951327497ae0f632cc316693d0aa3d)(const FString & DefaultValue)|Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNotes](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1aa3f8ddf6a3905e5b95aaa3f67b0cd754)(FString & OutValue)|Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetNotesOrNull](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a66db5c6c995abc966146efd7768f8919)()|Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetNotesOrNull](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1abb35587d475e3007ec3e635a43f4a1d0)()|Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNotes](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1ae72a6ad9de5ffd3dc0bd995267879134)(FString NewValue)|Sets the value of Notes_Optional and also sets Notes_IsSet to true.|
|void|[ClearNotes](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a167ae4b14a2577434b585bbebc2a24c0)()|Clears the value of Notes_Optional and sets Notes_IsSet to false.|
|FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1ad2056206ccb715fda25af81a14315d3d)()|Gets the value of LastModifiedOn.|
|const FDateTime &|[GetLastModifiedOn](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a1e2082e0e74f07f05d5d201632b249f2)()|Gets the value of LastModifiedOn.|
|void|[SetLastModifiedOn](/unreal-plugins/all/structfrhapi__friendrelationshipv1/#structFRHAPI__FriendRelationshipV1_1a809b7c6812bad5f06f00966825448397)(FDateTime NewValue)|Sets the value of LastModifiedOn.|
## Public Attributes



### `FriendsPlayerUuid` <a id="structFRHAPI__FriendRelationshipV1_1a23b56a3672e1ad3d6a36754bab491c30"></a>

`FGuid FRHAPI_FriendRelationshipV1::FriendsPlayerUuid`






### `FriendsPlayerId_Optional` <a id="structFRHAPI__FriendRelationshipV1_1a5b26fd42f238b4d79aacaf2ff0054d0f"></a>

`int32 FRHAPI_FriendRelationshipV1::FriendsPlayerId_Optional`






### `FriendsPlayerId_IsSet` <a id="structFRHAPI__FriendRelationshipV1_1a889b41c1b2373be3ba93c20858de32f3"></a>

`bool FRHAPI_FriendRelationshipV1::FriendsPlayerId_IsSet`

true if FriendsPlayerId_Optional has been set to a value




### `Status` <a id="structFRHAPI__FriendRelationshipV1_1abff1f24fecc6eeb8be9be15c4d061195"></a>

`ERHAPI_FriendshipStatus FRHAPI_FriendRelationshipV1::Status`






### `Notes_Optional` <a id="structFRHAPI__FriendRelationshipV1_1a9fb229b7f12ae3cca981c92c6f7e7491"></a>

`FString FRHAPI_FriendRelationshipV1::Notes_Optional`






### `Notes_IsSet` <a id="structFRHAPI__FriendRelationshipV1_1a47248abcf13c7b15e3f0dedf35ed979e"></a>

`bool FRHAPI_FriendRelationshipV1::Notes_IsSet`

true if Notes_Optional has been set to a value




### `LastModifiedOn` <a id="structFRHAPI__FriendRelationshipV1_1a71e5b77ce982ad33be82daae3236b0f1"></a>

`FDateTime FRHAPI_FriendRelationshipV1::LastModifiedOn`







## Public Functions



### `FromJson` <a id="structFRHAPI__FriendRelationshipV1_1a979b989f461647d4a62e39ddfcc199ad"></a>

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



### `WriteJson` <a id="structFRHAPI__FriendRelationshipV1_1a8cdd8111d616fd13d3e7c9c939970ab2"></a>

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



### `GetFriendsPlayerUuid` <a id="structFRHAPI__FriendRelationshipV1_1ae09e5e5d3be8e29fd742d6b8fc0c976a"></a>

FGuid & GetFriendsPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FriendsPlayerUuid.




### `GetFriendsPlayerUuid` <a id="structFRHAPI__FriendRelationshipV1_1a603c9200619c098479fd58b218dae130"></a>

const FGuid & GetFriendsPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FriendsPlayerUuid.




### `SetFriendsPlayerUuid` <a id="structFRHAPI__FriendRelationshipV1_1a0fd57ec3fd2d9478015e6d0e5e456f88"></a>

void SetFriendsPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of FriendsPlayerUuid.




### `GetFriendsPlayerId` <a id="structFRHAPI__FriendRelationshipV1_1ad28fcd121584ede5a8e2718de786079b"></a>

int32 & GetFriendsPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FriendsPlayerId_Optional, regardless of it having been set.




### `GetFriendsPlayerId` <a id="structFRHAPI__FriendRelationshipV1_1abd50fd59f4842d6eca523058d245c571"></a>

const int32 & GetFriendsPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FriendsPlayerId_Optional, regardless of it having been set.




### `GetFriendsPlayerId` <a id="structFRHAPI__FriendRelationshipV1_1a3f1d2c4c7bf309122114fe0e5567de94"></a>

const int32 & GetFriendsPlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of FriendsPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetFriendsPlayerId` <a id="structFRHAPI__FriendRelationshipV1_1af305d8f0d1bf9eb59150c24a386810b2"></a>

bool GetFriendsPlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of FriendsPlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetFriendsPlayerIdOrNull` <a id="structFRHAPI__FriendRelationshipV1_1a02b618afd988f84c9970756faa5e7ace"></a>

int32 * GetFriendsPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to FriendsPlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetFriendsPlayerIdOrNull` <a id="structFRHAPI__FriendRelationshipV1_1ad6c45466f1d013786d1b37dc4e35dcc6"></a>

const int32 * GetFriendsPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to FriendsPlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetFriendsPlayerId` <a id="structFRHAPI__FriendRelationshipV1_1a89d1733f3a933fac3bc85bda3530d991"></a>

void SetFriendsPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of FriendsPlayerId_Optional and also sets FriendsPlayerId_IsSet to true.




### `ClearFriendsPlayerId` <a id="structFRHAPI__FriendRelationshipV1_1a9f299a0d2c7c64960a44d6ee2d8f0c01"></a>

void ClearFriendsPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of FriendsPlayerId_Optional and sets FriendsPlayerId_IsSet to false.




### `IsFriendsPlayerIdDefaultValue` <a id="structFRHAPI__FriendRelationshipV1_1af31f734d2234c4980bcfaa3818e6c959"></a>

bool IsFriendsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if FriendsPlayerId_Optional is set and matches the default value.




### `SetFriendsPlayerIdToDefault` <a id="structFRHAPI__FriendRelationshipV1_1a01513c503faa103f818bdb286631316a"></a>

void SetFriendsPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of FriendsPlayerId_Optional to its default and also sets FriendsPlayerId_IsSet to true.




### `GetStatus` <a id="structFRHAPI__FriendRelationshipV1_1a50af0782f062afe2dfbbf1a54a54f1ea"></a>

ERHAPI_FriendshipStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `GetStatus` <a id="structFRHAPI__FriendRelationshipV1_1af54a47a554d93246eec37a7d62c96017"></a>

const ERHAPI_FriendshipStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `SetStatus` <a id="structFRHAPI__FriendRelationshipV1_1aee1fab3f779cfa6f131af3a652a7798d"></a>

void SetStatus(ERHAPI_FriendshipStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_FriendshipStatus|NewValue|

#### Description

Sets the value of Status.




### `GetNotes` <a id="structFRHAPI__FriendRelationshipV1_1a426ede96c1cb73b5af3d707ca176d84e"></a>

FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notes_Optional, regardless of it having been set.




### `GetNotes` <a id="structFRHAPI__FriendRelationshipV1_1abe77031a34d5f9497656f0960bd0fe4c"></a>

const FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notes_Optional, regardless of it having been set.




### `GetNotes` <a id="structFRHAPI__FriendRelationshipV1_1af4951327497ae0f632cc316693d0aa3d"></a>

const FString & GetNotes(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNotes` <a id="structFRHAPI__FriendRelationshipV1_1aa3f8ddf6a3905e5b95aaa3f67b0cd754"></a>

bool GetNotes(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.




### `GetNotesOrNull` <a id="structFRHAPI__FriendRelationshipV1_1a66db5c6c995abc966146efd7768f8919"></a>

FString * GetNotesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.




### `GetNotesOrNull` <a id="structFRHAPI__FriendRelationshipV1_1abb35587d475e3007ec3e635a43f4a1d0"></a>

const FString * GetNotesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.




### `SetNotes` <a id="structFRHAPI__FriendRelationshipV1_1ae72a6ad9de5ffd3dc0bd995267879134"></a>

void SetNotes(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Notes_Optional and also sets Notes_IsSet to true.




### `ClearNotes` <a id="structFRHAPI__FriendRelationshipV1_1a167ae4b14a2577434b585bbebc2a24c0"></a>

void ClearNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Notes_Optional and sets Notes_IsSet to false.




### `GetLastModifiedOn` <a id="structFRHAPI__FriendRelationshipV1_1ad2056206ccb715fda25af81a14315d3d"></a>

FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `GetLastModifiedOn` <a id="structFRHAPI__FriendRelationshipV1_1a1e2082e0e74f07f05d5d201632b249f2"></a>

const FDateTime & GetLastModifiedOn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastModifiedOn.




### `SetLastModifiedOn` <a id="structFRHAPI__FriendRelationshipV1_1a809b7c6812bad5f06f00966825448397"></a>

void SetLastModifiedOn(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of LastModifiedOn.





