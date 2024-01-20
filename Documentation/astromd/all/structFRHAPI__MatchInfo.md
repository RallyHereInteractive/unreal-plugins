---
title: FRHAPI_MatchInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about a match.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[MatchId](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2)|Unique ID.|
|FDateTime|[Created](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792)|instance-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765)|true if CustomData_Optional has been set to a value|
|TArray< FString >|[TicketIds_Optional](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f)|List of tickets that were assigned to this match if created by matchmaking.|
|bool|[TicketIds_IsSet](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9)|true if TicketIds_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1afd6eb58532faf8990f254b715dda7481)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1ad759073eaa762a9f28560aa65bddb3a4)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a66a52762273bf0a0cf00646d2cf9af8d)()|Gets the value of MatchId.|
|const FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a9e9c91e87e3631e67364b3980fe54969)()|Gets the value of MatchId.|
|void|[SetMatchId](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a7fa8c3fb93df4717f75bce8b5a5dcb28)(FString NewValue)|Sets the value of MatchId.|
|FDateTime &|[GetCreated](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1ac8a05141162dd24ca4b5dc133febca82)()|Gets the value of Created.|
|const FDateTime &|[GetCreated](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a66461beaa2aa9191f410da3e0c64ef4e)()|Gets the value of Created.|
|void|[SetCreated](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1acaaa92ca3e828447393c7e3d54c190eb)(FDateTime NewValue)|Sets the value of Created.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a6e2954b026f341c70bdb5163c5b3df0e)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a394a37854dd0c65b9a8f3edd5c911e65)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1adc2c79614b27420ca402f7340c9dd3b4)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1aadb7b3626c5833f981e3d1897212b85e)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a64464356d87f77088e729a3fccccf672)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a1f9c80fc49c3149c3354cf9dd804be5c)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1af52f26531a5d2c64fdaa809ab946ce93)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|TArray< FString > &|[GetTicketIds](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1abb678240c130a0a257c19d966d4738ee)()|Gets the value of TicketIds_Optional, regardless of it having been set.|
|const TArray< FString > &|[GetTicketIds](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a5dd9ca468dc97f8dd8cfe14d9348a3be)()|Gets the value of TicketIds_Optional, regardless of it having been set.|
|const TArray< FString > &|[GetTicketIds](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a3963850ecad78bc34a5ffde423630df7)(const TArray< FString > & DefaultValue)|Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTicketIds](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1aa25cb0d6646abad91133a83b1ea782e0)(TArray< FString > & OutValue)|Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.|
|TArray< FString > *|[GetTicketIdsOrNull](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a0ee3ee5d21c2228e687100fa57a3c176)()|Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< FString > *|[GetTicketIdsOrNull](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1aff9e347941364eb85196ad3a7d0634c9)()|Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTicketIds](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1adf0731f95e38d4c13d0b981a88a91249)(TArray< FString > NewValue)|Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.|
|void|[ClearTicketIds](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39)()|Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.|
## Public Attributes



### `MatchId` <a id="structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2"></a>

`FString FRHAPI_MatchInfo::MatchId`

Unique ID.




### `Created` <a id="structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54"></a>

`FDateTime FRHAPI_MatchInfo::Created`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `CustomData_Optional` <a id="structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792"></a>

`TMap<FString, FString> FRHAPI_MatchInfo::CustomData_Optional`

instance-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765"></a>

`bool FRHAPI_MatchInfo::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `TicketIds_Optional` <a id="structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f"></a>

`TArray<FString> FRHAPI_MatchInfo::TicketIds_Optional`

List of tickets that were assigned to this match if created by matchmaking.




### `TicketIds_IsSet` <a id="structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9"></a>

`bool FRHAPI_MatchInfo::TicketIds_IsSet`

true if TicketIds_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchInfo_1afd6eb58532faf8990f254b715dda7481"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchInfo_1ad759073eaa762a9f28560aa65bddb3a4"></a>

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



### `GetMatchId` <a id="structFRHAPI__MatchInfo_1a66a52762273bf0a0cf00646d2cf9af8d"></a>

FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId.




### `GetMatchId` <a id="structFRHAPI__MatchInfo_1a9e9c91e87e3631e67364b3980fe54969"></a>

const FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId.




### `SetMatchId` <a id="structFRHAPI__MatchInfo_1a7fa8c3fb93df4717f75bce8b5a5dcb28"></a>

void SetMatchId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MatchId.




### `GetCreated` <a id="structFRHAPI__MatchInfo_1ac8a05141162dd24ca4b5dc133febca82"></a>

FDateTime & GetCreated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Created.




### `GetCreated` <a id="structFRHAPI__MatchInfo_1a66461beaa2aa9191f410da3e0c64ef4e"></a>

const FDateTime & GetCreated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Created.




### `SetCreated` <a id="structFRHAPI__MatchInfo_1acaaa92ca3e828447393c7e3d54c190eb"></a>

void SetCreated(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Created.




### `GetCustomData` <a id="structFRHAPI__MatchInfo_1a6e2954b026f341c70bdb5163c5b3df0e"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MatchInfo_1a394a37854dd0c65b9a8f3edd5c911e65"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MatchInfo_1adc2c79614b27420ca402f7340c9dd3b4"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__MatchInfo_1aadb7b3626c5833f981e3d1897212b85e"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__MatchInfo_1a64464356d87f77088e729a3fccccf672"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__MatchInfo_1a1f9c80fc49c3149c3354cf9dd804be5c"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__MatchInfo_1af52f26531a5d2c64fdaa809ab946ce93"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetTicketIds` <a id="structFRHAPI__MatchInfo_1abb678240c130a0a257c19d966d4738ee"></a>

TArray< FString > & GetTicketIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TicketIds_Optional, regardless of it having been set.




### `GetTicketIds` <a id="structFRHAPI__MatchInfo_1a5dd9ca468dc97f8dd8cfe14d9348a3be"></a>

const TArray< FString > & GetTicketIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TicketIds_Optional, regardless of it having been set.




### `GetTicketIds` <a id="structFRHAPI__MatchInfo_1a3963850ecad78bc34a5ffde423630df7"></a>

const TArray< FString > & GetTicketIds(const TArray< FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|DefaultValue|

#### Description

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTicketIds` <a id="structFRHAPI__MatchInfo_1aa25cb0d6646abad91133a83b1ea782e0"></a>

bool GetTicketIds(TArray< FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString > &|OutValue|

#### Description

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.




### `GetTicketIdsOrNull` <a id="structFRHAPI__MatchInfo_1a0ee3ee5d21c2228e687100fa57a3c176"></a>

TArray< FString > * GetTicketIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.




### `GetTicketIdsOrNull` <a id="structFRHAPI__MatchInfo_1aff9e347941364eb85196ad3a7d0634c9"></a>

const TArray< FString > * GetTicketIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.




### `SetTicketIds` <a id="structFRHAPI__MatchInfo_1adf0731f95e38d4c13d0b981a88a91249"></a>

void SetTicketIds(TArray< FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FString >|NewValue|

#### Description

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.




### `ClearTicketIds` <a id="structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39"></a>

void ClearTicketIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.





