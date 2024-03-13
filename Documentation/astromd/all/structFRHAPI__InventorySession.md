---
title: FRHAPI_InventorySession Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Inventory Session for a Player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[SessionId](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1ac32000025fb5fd4d9f376126e1819fd3)|Unique ID for this Inventory Session.|
|ERHAPI_Platform|[SessionPlatform_Optional](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a4ecfb1a090ef3ecaee13168cdefd26cf)|Platform for this Inventory Session.|
|bool|[SessionPlatform_IsSet](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a243f2da591a0898aecb05f911c3c8ad1)|true if SessionPlatform_Optional has been set to a value|
|TArray< int32 >|[AppliedDurableLoot_Optional](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a030b2590e3b6f227f40108949604cfcf)|Durable Loot that has been applied when this Inventory Session was created.|
|bool|[AppliedDurableLoot_IsSet](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a7b4edec20f92776ba5f623561cd07b5e)|true if AppliedDurableLoot_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a82dfe9a883929188d8e1992dbe621c33)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1aaf67e592061638455c03f23e9b6e6af0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a10cb51533bbbc8244080e85e17c09a76)()|Gets the value of SessionId.|
|const FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a202175283db4a05dd154c881b985eff4)()|Gets the value of SessionId.|
|void|[SetSessionId](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a25f0ed07ef974fe3bb288b0fd36e3e01)(FString NewValue)|Sets the value of SessionId.|
|ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a20a6232c95b09797a1510a1a2ac1fc7d)()|Gets the value of SessionPlatform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a5f3d3d0b80da74d07ee84faf95ee5431)()|Gets the value of SessionPlatform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1ad1311408a74721f8317b0ac9826d75df)(const ERHAPI_Platform & DefaultValue)|Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a6eac73db464ca0efa6942e7b247992f3)(ERHAPI_Platform & OutValue)|Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Platform *|[GetSessionPlatformOrNull](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a45eb5a36fa089ca350d0738ac1342e86)()|Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Platform *|[GetSessionPlatformOrNull](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a775b96b8deafb53540f45fb6e7e1d029)()|Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a32e0d1d6d90a177a8cd0d7d3bbc46d50)(ERHAPI_Platform NewValue)|Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.|
|void|[ClearSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619)()|Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.|
|TArray< int32 > &|[GetAppliedDurableLoot](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1aaa3a59128de3317f5d52ecaee8e89914)()|Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetAppliedDurableLoot](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1ae08db78edf3f9de2bd870863608f01be)()|Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetAppliedDurableLoot](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1ac5f83cdf5324dd27e3157bcf4ecae4e0)(const TArray< int32 > & DefaultValue)|Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAppliedDurableLoot](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a19b3b9f32380d4a9e1dd821fec1b0f4a)(TArray< int32 > & OutValue)|Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false.|
|TArray< int32 > *|[GetAppliedDurableLootOrNull](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1aec8ec744eab2b5905327d176125b57e1)()|Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< int32 > *|[GetAppliedDurableLootOrNull](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1ab3d2bd70b737c587bff6d5060f528657)()|Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAppliedDurableLoot](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a41c013be7c6b2d5d17464c1acd20d72d)(TArray< int32 > NewValue)|Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true.|
|void|[ClearAppliedDurableLoot](/unreal-plugins/all/structfrhapi__inventorysession/#structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5)()|Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false.|
## Public Attributes



### `SessionId` <a id="structFRHAPI__InventorySession_1ac32000025fb5fd4d9f376126e1819fd3"></a>

`FString FRHAPI_InventorySession::SessionId`

Unique ID for this Inventory Session.




### `SessionPlatform_Optional` <a id="structFRHAPI__InventorySession_1a4ecfb1a090ef3ecaee13168cdefd26cf"></a>

`ERHAPI_Platform FRHAPI_InventorySession::SessionPlatform_Optional`

Platform for this Inventory Session.




### `SessionPlatform_IsSet` <a id="structFRHAPI__InventorySession_1a243f2da591a0898aecb05f911c3c8ad1"></a>

`bool FRHAPI_InventorySession::SessionPlatform_IsSet`

true if SessionPlatform_Optional has been set to a value




### `AppliedDurableLoot_Optional` <a id="structFRHAPI__InventorySession_1a030b2590e3b6f227f40108949604cfcf"></a>

`TArray<int32> FRHAPI_InventorySession::AppliedDurableLoot_Optional`

Durable Loot that has been applied when this Inventory Session was created.




### `AppliedDurableLoot_IsSet` <a id="structFRHAPI__InventorySession_1a7b4edec20f92776ba5f623561cd07b5e"></a>

`bool FRHAPI_InventorySession::AppliedDurableLoot_IsSet`

true if AppliedDurableLoot_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InventorySession_1a82dfe9a883929188d8e1992dbe621c33"></a>

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



### `WriteJson` <a id="structFRHAPI__InventorySession_1aaf67e592061638455c03f23e9b6e6af0"></a>

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



### `GetSessionId` <a id="structFRHAPI__InventorySession_1a10cb51533bbbc8244080e85e17c09a76"></a>

FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `GetSessionId` <a id="structFRHAPI__InventorySession_1a202175283db4a05dd154c881b985eff4"></a>

const FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `SetSessionId` <a id="structFRHAPI__InventorySession_1a25f0ed07ef974fe3bb288b0fd36e3e01"></a>

void SetSessionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionId.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySession_1a20a6232c95b09797a1510a1a2ac1fc7d"></a>

ERHAPI_Platform & GetSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionPlatform_Optional, regardless of it having been set.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySession_1a5f3d3d0b80da74d07ee84faf95ee5431"></a>

const ERHAPI_Platform & GetSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionPlatform_Optional, regardless of it having been set.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySession_1ad1311408a74721f8317b0ac9826d75df"></a>

const ERHAPI_Platform & GetSessionPlatform(const ERHAPI_Platform & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform &|DefaultValue|

#### Description

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySession_1a6eac73db464ca0efa6942e7b247992f3"></a>

bool GetSessionPlatform(ERHAPI_Platform & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform &|OutValue|

#### Description

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.




### `GetSessionPlatformOrNull` <a id="structFRHAPI__InventorySession_1a45eb5a36fa089ca350d0738ac1342e86"></a>

ERHAPI_Platform * GetSessionPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.




### `GetSessionPlatformOrNull` <a id="structFRHAPI__InventorySession_1a775b96b8deafb53540f45fb6e7e1d029"></a>

const ERHAPI_Platform * GetSessionPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.




### `SetSessionPlatform` <a id="structFRHAPI__InventorySession_1a32e0d1d6d90a177a8cd0d7d3bbc46d50"></a>

void SetSessionPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.




### `ClearSessionPlatform` <a id="structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619"></a>

void ClearSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.




### `GetAppliedDurableLoot` <a id="structFRHAPI__InventorySession_1aaa3a59128de3317f5d52ecaee8e89914"></a>

TArray< int32 > & GetAppliedDurableLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.




### `GetAppliedDurableLoot` <a id="structFRHAPI__InventorySession_1ae08db78edf3f9de2bd870863608f01be"></a>

const TArray< int32 > & GetAppliedDurableLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.




### `GetAppliedDurableLoot` <a id="structFRHAPI__InventorySession_1ac5f83cdf5324dd27e3157bcf4ecae4e0"></a>

const TArray< int32 > & GetAppliedDurableLoot(const TArray< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|DefaultValue|

#### Description

Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAppliedDurableLoot` <a id="structFRHAPI__InventorySession_1a19b3b9f32380d4a9e1dd821fec1b0f4a"></a>

bool GetAppliedDurableLoot(TArray< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 > &|OutValue|

#### Description

Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false.




### `GetAppliedDurableLootOrNull` <a id="structFRHAPI__InventorySession_1aec8ec744eab2b5905327d176125b57e1"></a>

TArray< int32 > * GetAppliedDurableLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.




### `GetAppliedDurableLootOrNull` <a id="structFRHAPI__InventorySession_1ab3d2bd70b737c587bff6d5060f528657"></a>

const TArray< int32 > * GetAppliedDurableLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.




### `SetAppliedDurableLoot` <a id="structFRHAPI__InventorySession_1a41c013be7c6b2d5d17464c1acd20d72d"></a>

void SetAppliedDurableLoot(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true.




### `ClearAppliedDurableLoot` <a id="structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5"></a>

void ClearAppliedDurableLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false.





