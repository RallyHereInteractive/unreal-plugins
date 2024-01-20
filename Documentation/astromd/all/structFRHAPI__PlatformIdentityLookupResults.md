---
title: FRHAPI_PlatformIdentityLookupResults Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Lookup results for a platform user id.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >|[Identity_Optional](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a770dcf050dd98432ebaf4cf67be3b31b)|List of platform user ids and the players that match that platform user id.|
|bool|[Identity_IsSet](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a726c02e11706d55e61507f78b39c86e0)|true if Identity_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a9e157dd1f379185352e84233304f8a98)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a8570a73905d233486b39be55dfc22731)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|[GetIdentity](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a11959a09f8ff2131a34d3a81ad51a684)()|Gets the value of Identity_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|[GetIdentity](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1acbe9eeb085f5634eb37966a990bb3061)()|Gets the value of Identity_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|[GetIdentity](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a5b8b998bc31ecc3e04d72c57a3d19296)(const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & DefaultValue)|Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetIdentity](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a5d34c865dd67d82644989486c3ca19b6)(TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & OutValue)|Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > *|[GetIdentityOrNull](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a78662a60d3e9bf723bd3d8681dd8850c)()|Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > *|[GetIdentityOrNull](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a2256a0fe1009b3b9dea514c94e1ecb3d)()|Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetIdentity](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a22c42e34eeb78028a98a745bc05c77da)(TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > NewValue)|Sets the value of Identity_Optional and also sets Identity_IsSet to true.|
|void|[ClearIdentity](/unreal-plugins/all/structfrhapi__platformidentitylookupresults/#structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b)()|Clears the value of Identity_Optional and sets Identity_IsSet to false.|
## Public Attributes



### `Identity_Optional` <a id="structFRHAPI__PlatformIdentityLookupResults_1a770dcf050dd98432ebaf4cf67be3b31b"></a>

`TMap<FString, FRHAPI_PlayerResponse> FRHAPI_PlatformIdentityLookupResults::Identity_Optional`

List of platform user ids and the players that match that platform user id.




### `Identity_IsSet` <a id="structFRHAPI__PlatformIdentityLookupResults_1a726c02e11706d55e61507f78b39c86e0"></a>

`bool FRHAPI_PlatformIdentityLookupResults::Identity_IsSet`

true if Identity_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlatformIdentityLookupResults_1a9e157dd1f379185352e84233304f8a98"></a>

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



### `WriteJson` <a id="structFRHAPI__PlatformIdentityLookupResults_1a8570a73905d233486b39be55dfc22731"></a>

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



### `GetIdentity` <a id="structFRHAPI__PlatformIdentityLookupResults_1a11959a09f8ff2131a34d3a81ad51a684"></a>

TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & GetIdentity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Identity_Optional, regardless of it having been set.




### `GetIdentity` <a id="structFRHAPI__PlatformIdentityLookupResults_1acbe9eeb085f5634eb37966a990bb3061"></a>

const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & GetIdentity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Identity_Optional, regardless of it having been set.




### `GetIdentity` <a id="structFRHAPI__PlatformIdentityLookupResults_1a5b8b998bc31ecc3e04d72c57a3d19296"></a>

const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & GetIdentity(const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|DefaultValue|

#### Description

Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetIdentity` <a id="structFRHAPI__PlatformIdentityLookupResults_1a5d34c865dd67d82644989486c3ca19b6"></a>

bool GetIdentity(TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|OutValue|

#### Description

Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false.




### `GetIdentityOrNull` <a id="structFRHAPI__PlatformIdentityLookupResults_1a78662a60d3e9bf723bd3d8681dd8850c"></a>

TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > * GetIdentityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.




### `GetIdentityOrNull` <a id="structFRHAPI__PlatformIdentityLookupResults_1a2256a0fe1009b3b9dea514c94e1ecb3d"></a>

const TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > * GetIdentityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.




### `SetIdentity` <a id="structFRHAPI__PlatformIdentityLookupResults_1a22c42e34eeb78028a98a745bc05c77da"></a>

void SetIdentity(TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >|NewValue|

#### Description

Sets the value of Identity_Optional and also sets Identity_IsSet to true.




### `ClearIdentity` <a id="structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b"></a>

void ClearIdentity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Identity_Optional and sets Identity_IsSet to false.





