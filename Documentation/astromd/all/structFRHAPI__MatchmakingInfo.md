---
title: FRHAPI_MatchmakingInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Info about the matchmaking status in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[TicketId](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a18cee065a4d780d93d1cd2a9bfde1886)|Unique ID for this attempt at matchmaking.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a800627839cbce5194f89db4579d5d14c)|session-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a0aa90688b46adb96245d4b9960649e7a)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1ac42b8b638994aa4afa39c062c7ca8ca0)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a5caf4c240571f435a14cef04fdfb37ae)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetTicketId](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a9cf459b92d8b3628d076579e339b9b84)()|Gets the value of TicketId.|
|const FString &|[GetTicketId](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a11c0e0ef0b753761420d761d85bc7f27)()|Gets the value of TicketId.|
|void|[SetTicketId](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1ac79e24ca3917259b076f28af6af3d187)(FString NewValue)|Sets the value of TicketId.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a8e9a6e7143b93b2ba742203077505998)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a3b59a2ff99e941c029cb4e6e222d2d68)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a98a2b2b116f635394928749c83b7936a)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a5756aab5970cf6e2c3ccb84085d79758)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1aace731bdf5e36da712c3419d502f98d0)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1ae2a4e3aad5d613c1b88688ccf0eabcc5)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `TicketId` <a id="structFRHAPI__MatchmakingInfo_1a18cee065a4d780d93d1cd2a9bfde1886"></a>

`FString FRHAPI_MatchmakingInfo::TicketId`

Unique ID for this attempt at matchmaking.




### `CustomData_Optional` <a id="structFRHAPI__MatchmakingInfo_1a800627839cbce5194f89db4579d5d14c"></a>

`TMap<FString, FString> FRHAPI_MatchmakingInfo::CustomData_Optional`

session-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__MatchmakingInfo_1a0aa90688b46adb96245d4b9960649e7a"></a>

`bool FRHAPI_MatchmakingInfo::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchmakingInfo_1ac42b8b638994aa4afa39c062c7ca8ca0"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchmakingInfo_1a5caf4c240571f435a14cef04fdfb37ae"></a>

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



### `GetTicketId` <a id="structFRHAPI__MatchmakingInfo_1a9cf459b92d8b3628d076579e339b9b84"></a>

FString & GetTicketId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TicketId.




### `GetTicketId` <a id="structFRHAPI__MatchmakingInfo_1a11c0e0ef0b753761420d761d85bc7f27"></a>

const FString & GetTicketId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TicketId.




### `SetTicketId` <a id="structFRHAPI__MatchmakingInfo_1ac79e24ca3917259b076f28af6af3d187"></a>

void SetTicketId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of TicketId.




### `GetCustomData` <a id="structFRHAPI__MatchmakingInfo_1a8e9a6e7143b93b2ba742203077505998"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MatchmakingInfo_1a3b59a2ff99e941c029cb4e6e222d2d68"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MatchmakingInfo_1a98a2b2b116f635394928749c83b7936a"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__MatchmakingInfo_1a5756aab5970cf6e2c3ccb84085d79758"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__MatchmakingInfo_1aace731bdf5e36da712c3419d502f98d0"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__MatchmakingInfo_1ae2a4e3aad5d613c1b88688ccf0eabcc5"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





