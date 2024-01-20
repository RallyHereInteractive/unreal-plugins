---
title: FRHAPI_FriendsV1 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

List of player_ids to operate on.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< int32 >|[Friends](/unreal-plugins/all/structfrhapi__friendsv1/#structFRHAPI__FriendsV1_1aaec651841127d8d894369562ef07845f)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__friendsv1/#structFRHAPI__FriendsV1_1a71308d979e7b7568d7f804f832cc899f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__friendsv1/#structFRHAPI__FriendsV1_1a1e7d9580550c971346cedc2f3e9b9df0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< int32 > &|[GetFriends](/unreal-plugins/all/structfrhapi__friendsv1/#structFRHAPI__FriendsV1_1a3c23848f4395c361cde091e1bc56d7f6)()|Gets the value of Friends.|
|const TArray< int32 > &|[GetFriends](/unreal-plugins/all/structfrhapi__friendsv1/#structFRHAPI__FriendsV1_1a0ec1becb88da49d89a122b5d91c3a172)()|Gets the value of Friends.|
|void|[SetFriends](/unreal-plugins/all/structfrhapi__friendsv1/#structFRHAPI__FriendsV1_1a3a86db8797363e9c81019d3c24d2056f)(TArray< int32 > NewValue)|Sets the value of Friends.|
## Public Attributes



### `Friends` <a id="structFRHAPI__FriendsV1_1aaec651841127d8d894369562ef07845f"></a>

`TArray<int32> FRHAPI_FriendsV1::Friends`







## Public Functions



### `FromJson` <a id="structFRHAPI__FriendsV1_1a71308d979e7b7568d7f804f832cc899f"></a>

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



### `WriteJson` <a id="structFRHAPI__FriendsV1_1a1e7d9580550c971346cedc2f3e9b9df0"></a>

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



### `GetFriends` <a id="structFRHAPI__FriendsV1_1a3c23848f4395c361cde091e1bc56d7f6"></a>

TArray< int32 > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Friends.




### `GetFriends` <a id="structFRHAPI__FriendsV1_1a0ec1becb88da49d89a122b5d91c3a172"></a>

const TArray< int32 > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Friends.




### `SetFriends` <a id="structFRHAPI__FriendsV1_1a3a86db8797363e9c81019d3c24d2056f"></a>

void SetFriends(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of Friends.





