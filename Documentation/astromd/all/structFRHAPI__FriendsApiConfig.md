---
title: FRHAPI_FriendsApiConfig Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[FriendLimit_Optional](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a1b1dcb1ea05e871ddb0e9aff8c1e53b8)|Maximum number of friends a user can have.|
|bool|[FriendLimit_IsSet](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a4dadb896dc58a2e4337e82fb5badb867)|true if FriendLimit_Optional has been set to a value|
|int32|[BlockLimit_Optional](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1afb3858ccf8f703a9c54cd9cdf225122d)|Maximum number of blocked users a user can have.|
|bool|[BlockLimit_IsSet](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a4479801d5ac1ba074b482bd2a5eb6ff0)|true if BlockLimit_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a8effd6cdb3b86a33a6505de3ea22e552)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1afc86f641da0da9358de6db16503ca214)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetFriendLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1ae9a4a3218dbac9aa7446dc933710bf82)()|Gets the value of FriendLimit_Optional, regardless of it having been set.|
|const int32 &|[GetFriendLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1ae672f30acddb8405c9f0958a4267bc2a)()|Gets the value of FriendLimit_Optional, regardless of it having been set.|
|const int32 &|[GetFriendLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a04267e658fddb08beeb18e9e5a2491f8)(const int32 & DefaultValue)|Gets the value of FriendLimit_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetFriendLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a7b78efd3a914e2573ed53c5ca534ff63)(int32 & OutValue)|Fills OutValue with the value of FriendLimit_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetFriendLimitOrNull](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1aa2a7f053ea26ea6aaa4bd7aee282ddee)()|Returns a pointer to FriendLimit_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetFriendLimitOrNull](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a08ca443c142685db1b2992f2cbb1dda3)()|Returns a pointer to FriendLimit_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetFriendLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a83efbe00bd07534d4fc0ffab51887bf6)(int32 NewValue)|Sets the value of FriendLimit_Optional and also sets FriendLimit_IsSet to true.|
|void|[ClearFriendLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a60aa7aa4cfa84c0f671909ae7b175a0b)()|Clears the value of FriendLimit_Optional and sets FriendLimit_IsSet to false.|
|bool|[IsFriendLimitDefaultValue](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1ac72c7c55e3903f85f2e14cb155514b42)()|Returns true if FriendLimit_Optional is set and matches the default value.|
|void|[SetFriendLimitToDefault](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a65eface867cb58994c712fa3dd43fa83)()|Sets the value of FriendLimit_Optional to its default and also sets FriendLimit_IsSet to true.|
|int32 &|[GetBlockLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a03d48f2c7dc47d6a53f6c30de8dff58e)()|Gets the value of BlockLimit_Optional, regardless of it having been set.|
|const int32 &|[GetBlockLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a89ba8195ddd65ac63c5725afa35e19b0)()|Gets the value of BlockLimit_Optional, regardless of it having been set.|
|const int32 &|[GetBlockLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a9052c87bb5b6ff9d9228dc6e03f926e0)(const int32 & DefaultValue)|Gets the value of BlockLimit_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBlockLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1af601208b5269a541f1389e9506569317)(int32 & OutValue)|Fills OutValue with the value of BlockLimit_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetBlockLimitOrNull](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a3f7accd9cf22e2431740ba424b3fec1a)()|Returns a pointer to BlockLimit_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetBlockLimitOrNull](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a988918b5df52c1e25572782bd8ae53b1)()|Returns a pointer to BlockLimit_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBlockLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a30602bfb9ca8bff183307303bec0d8f5)(int32 NewValue)|Sets the value of BlockLimit_Optional and also sets BlockLimit_IsSet to true.|
|void|[ClearBlockLimit](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1ae1a531df74e704ff9a5d5df27eecd439)()|Clears the value of BlockLimit_Optional and sets BlockLimit_IsSet to false.|
|bool|[IsBlockLimitDefaultValue](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1ace5bbfa806e7314b7b8781eec0fdac77)()|Returns true if BlockLimit_Optional is set and matches the default value.|
|void|[SetBlockLimitToDefault](/unreal-plugins/all/structfrhapi__friendsapiconfig/#structFRHAPI__FriendsApiConfig_1a31550ce0b44294881608c3f7caf124cf)()|Sets the value of BlockLimit_Optional to its default and also sets BlockLimit_IsSet to true.|
## Public Attributes



### `FriendLimit_Optional` <a id="structFRHAPI__FriendsApiConfig_1a1b1dcb1ea05e871ddb0e9aff8c1e53b8"></a>

`int32 FRHAPI_FriendsApiConfig::FriendLimit_Optional`

Maximum number of friends a user can have.




### `FriendLimit_IsSet` <a id="structFRHAPI__FriendsApiConfig_1a4dadb896dc58a2e4337e82fb5badb867"></a>

`bool FRHAPI_FriendsApiConfig::FriendLimit_IsSet`

true if FriendLimit_Optional has been set to a value




### `BlockLimit_Optional` <a id="structFRHAPI__FriendsApiConfig_1afb3858ccf8f703a9c54cd9cdf225122d"></a>

`int32 FRHAPI_FriendsApiConfig::BlockLimit_Optional`

Maximum number of blocked users a user can have.




### `BlockLimit_IsSet` <a id="structFRHAPI__FriendsApiConfig_1a4479801d5ac1ba074b482bd2a5eb6ff0"></a>

`bool FRHAPI_FriendsApiConfig::BlockLimit_IsSet`

true if BlockLimit_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__FriendsApiConfig_1a8effd6cdb3b86a33a6505de3ea22e552"></a>

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



### `WriteJson` <a id="structFRHAPI__FriendsApiConfig_1afc86f641da0da9358de6db16503ca214"></a>

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



### `GetFriendLimit` <a id="structFRHAPI__FriendsApiConfig_1ae9a4a3218dbac9aa7446dc933710bf82"></a>

int32 & GetFriendLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FriendLimit_Optional, regardless of it having been set.




### `GetFriendLimit` <a id="structFRHAPI__FriendsApiConfig_1ae672f30acddb8405c9f0958a4267bc2a"></a>

const int32 & GetFriendLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FriendLimit_Optional, regardless of it having been set.




### `GetFriendLimit` <a id="structFRHAPI__FriendsApiConfig_1a04267e658fddb08beeb18e9e5a2491f8"></a>

const int32 & GetFriendLimit(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of FriendLimit_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetFriendLimit` <a id="structFRHAPI__FriendsApiConfig_1a7b78efd3a914e2573ed53c5ca534ff63"></a>

bool GetFriendLimit(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of FriendLimit_Optional and returns true if it has been set, otherwise returns false.




### `GetFriendLimitOrNull` <a id="structFRHAPI__FriendsApiConfig_1aa2a7f053ea26ea6aaa4bd7aee282ddee"></a>

int32 * GetFriendLimitOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to FriendLimit_Optional, if it has been set, otherwise returns nullptr.




### `GetFriendLimitOrNull` <a id="structFRHAPI__FriendsApiConfig_1a08ca443c142685db1b2992f2cbb1dda3"></a>

const int32 * GetFriendLimitOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to FriendLimit_Optional, if it has been set, otherwise returns nullptr.




### `SetFriendLimit` <a id="structFRHAPI__FriendsApiConfig_1a83efbe00bd07534d4fc0ffab51887bf6"></a>

void SetFriendLimit(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of FriendLimit_Optional and also sets FriendLimit_IsSet to true.




### `ClearFriendLimit` <a id="structFRHAPI__FriendsApiConfig_1a60aa7aa4cfa84c0f671909ae7b175a0b"></a>

void ClearFriendLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of FriendLimit_Optional and sets FriendLimit_IsSet to false.




### `IsFriendLimitDefaultValue` <a id="structFRHAPI__FriendsApiConfig_1ac72c7c55e3903f85f2e14cb155514b42"></a>

bool IsFriendLimitDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if FriendLimit_Optional is set and matches the default value.




### `SetFriendLimitToDefault` <a id="structFRHAPI__FriendsApiConfig_1a65eface867cb58994c712fa3dd43fa83"></a>

void SetFriendLimitToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of FriendLimit_Optional to its default and also sets FriendLimit_IsSet to true.




### `GetBlockLimit` <a id="structFRHAPI__FriendsApiConfig_1a03d48f2c7dc47d6a53f6c30de8dff58e"></a>

int32 & GetBlockLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BlockLimit_Optional, regardless of it having been set.




### `GetBlockLimit` <a id="structFRHAPI__FriendsApiConfig_1a89ba8195ddd65ac63c5725afa35e19b0"></a>

const int32 & GetBlockLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BlockLimit_Optional, regardless of it having been set.




### `GetBlockLimit` <a id="structFRHAPI__FriendsApiConfig_1a9052c87bb5b6ff9d9228dc6e03f926e0"></a>

const int32 & GetBlockLimit(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of BlockLimit_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBlockLimit` <a id="structFRHAPI__FriendsApiConfig_1af601208b5269a541f1389e9506569317"></a>

bool GetBlockLimit(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of BlockLimit_Optional and returns true if it has been set, otherwise returns false.




### `GetBlockLimitOrNull` <a id="structFRHAPI__FriendsApiConfig_1a3f7accd9cf22e2431740ba424b3fec1a"></a>

int32 * GetBlockLimitOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to BlockLimit_Optional, if it has been set, otherwise returns nullptr.




### `GetBlockLimitOrNull` <a id="structFRHAPI__FriendsApiConfig_1a988918b5df52c1e25572782bd8ae53b1"></a>

const int32 * GetBlockLimitOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to BlockLimit_Optional, if it has been set, otherwise returns nullptr.




### `SetBlockLimit` <a id="structFRHAPI__FriendsApiConfig_1a30602bfb9ca8bff183307303bec0d8f5"></a>

void SetBlockLimit(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of BlockLimit_Optional and also sets BlockLimit_IsSet to true.




### `ClearBlockLimit` <a id="structFRHAPI__FriendsApiConfig_1ae1a531df74e704ff9a5d5df27eecd439"></a>

void ClearBlockLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of BlockLimit_Optional and sets BlockLimit_IsSet to false.




### `IsBlockLimitDefaultValue` <a id="structFRHAPI__FriendsApiConfig_1ace5bbfa806e7314b7b8781eec0fdac77"></a>

bool IsBlockLimitDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if BlockLimit_Optional is set and matches the default value.




### `SetBlockLimitToDefault` <a id="structFRHAPI__FriendsApiConfig_1a31550ce0b44294881608c3f7caf124cf"></a>

void SetBlockLimitToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of BlockLimit_Optional to its default and also sets BlockLimit_IsSet to true.





