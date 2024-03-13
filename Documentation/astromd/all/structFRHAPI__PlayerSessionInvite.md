---
title: FRHAPI_PlayerSessionInvite Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about an invite to a session that a player received.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[SessionId](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a5300727633e2fcef5067968f3027dc50)|Session ID for the invite.|
|FGuid|[InvitingPlayerUuid_Optional](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1af2df5467426af28587216798cdbea9f5)|Player who sent the invite.|
|bool|[InvitingPlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a8e042b370589e5e406711482986a5a53)|true if InvitingPlayerUuid_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1aa9067401a0bd3f08ba514703a336f90b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a1917150994e9e3c2f21e7787ce66a704)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1ab4f322194e0846ffae453790aab9c632)()|Gets the value of SessionId.|
|const FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a6942c9405b4f6833913b0c6f78f54255)()|Gets the value of SessionId.|
|void|[SetSessionId](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a1a967f885f9f4e91cc7e2c9ff586b207)(FString NewValue)|Sets the value of SessionId.|
|FGuid &|[GetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a09ba2839f057d3fefb9aadf4280033d6)()|Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1ac6d73c9af405b60b9ec0212722b1da2e)()|Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a87a38b45131948df65ed5cac8ee9aff8)(const FGuid & DefaultValue)|Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a23a1e66ba7ed697efe527ecd9f157a6b)(FGuid & OutValue)|Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetInvitingPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1adb9649b04507d7924c1b42fc15661922)()|Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetInvitingPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a87df4f36cb3854b5b5de479e724bcada)()|Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1a1318d58c916503a97a85d5acce23ecf8)(FGuid NewValue)|Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.|
|void|[ClearInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__playersessioninvite/#structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8)()|Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.|
## Public Attributes



### `SessionId` <a id="structFRHAPI__PlayerSessionInvite_1a5300727633e2fcef5067968f3027dc50"></a>

`FString FRHAPI_PlayerSessionInvite::SessionId`

Session ID for the invite.




### `InvitingPlayerUuid_Optional` <a id="structFRHAPI__PlayerSessionInvite_1af2df5467426af28587216798cdbea9f5"></a>

`FGuid FRHAPI_PlayerSessionInvite::InvitingPlayerUuid_Optional`

Player who sent the invite.




### `InvitingPlayerUuid_IsSet` <a id="structFRHAPI__PlayerSessionInvite_1a8e042b370589e5e406711482986a5a53"></a>

`bool FRHAPI_PlayerSessionInvite::InvitingPlayerUuid_IsSet`

true if InvitingPlayerUuid_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerSessionInvite_1aa9067401a0bd3f08ba514703a336f90b"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerSessionInvite_1a1917150994e9e3c2f21e7787ce66a704"></a>

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



### `GetSessionId` <a id="structFRHAPI__PlayerSessionInvite_1ab4f322194e0846ffae453790aab9c632"></a>

FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `GetSessionId` <a id="structFRHAPI__PlayerSessionInvite_1a6942c9405b4f6833913b0c6f78f54255"></a>

const FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `SetSessionId` <a id="structFRHAPI__PlayerSessionInvite_1a1a967f885f9f4e91cc7e2c9ff586b207"></a>

void SetSessionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionId.




### `GetInvitingPlayerUuid` <a id="structFRHAPI__PlayerSessionInvite_1a09ba2839f057d3fefb9aadf4280033d6"></a>

FGuid & GetInvitingPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.




### `GetInvitingPlayerUuid` <a id="structFRHAPI__PlayerSessionInvite_1ac6d73c9af405b60b9ec0212722b1da2e"></a>

const FGuid & GetInvitingPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.




### `GetInvitingPlayerUuid` <a id="structFRHAPI__PlayerSessionInvite_1a87a38b45131948df65ed5cac8ee9aff8"></a>

const FGuid & GetInvitingPlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInvitingPlayerUuid` <a id="structFRHAPI__PlayerSessionInvite_1a23a1e66ba7ed697efe527ecd9f157a6b"></a>

bool GetInvitingPlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetInvitingPlayerUuidOrNull` <a id="structFRHAPI__PlayerSessionInvite_1adb9649b04507d7924c1b42fc15661922"></a>

FGuid * GetInvitingPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetInvitingPlayerUuidOrNull` <a id="structFRHAPI__PlayerSessionInvite_1a87df4f36cb3854b5b5de479e724bcada"></a>

const FGuid * GetInvitingPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetInvitingPlayerUuid` <a id="structFRHAPI__PlayerSessionInvite_1a1318d58c916503a97a85d5acce23ecf8"></a>

void SetInvitingPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.




### `ClearInvitingPlayerUuid` <a id="structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8"></a>

void ClearInvitingPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.





