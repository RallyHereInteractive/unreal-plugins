---
title: FRHAPI_Role Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Role object that is used to define a role for a player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[RoleId](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a52f32f8c3152eec8e2eaba9bcfc8f8b5)|Unique Role ID.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[CustomData_Optional](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1ab56bcc46d8e231e0c8970cf4b28806c4)|Custom data for the role.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a7009c6fa9d36ddb72c54a9658b63e42d)|true if CustomData_Optional has been set to a value|
|ERHAPI_RoleAuthBypass|[AuthBypass_Optional](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a8e0230998648ffb297d56c4605a1332d)|Level of auth bypass for limited/locked modes.|
|bool|[AuthBypass_IsSet](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a950879446b1d18137f3af343f23fc8d1)|true if AuthBypass_Optional has been set to a value|
|TArray< int32 >|[LoginLootRewards_Optional](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a5085d5aa449f92dbb0cb0c236f476b86)|List of loot table item ids that are fulfilled for the player when they begin a new inventory session.|
|bool|[LoginLootRewards_IsSet](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a6e132dc93f9582659561567ad17f151c)|true if LoginLootRewards_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a229641efe3ca109c0f3c7b53422b42ad)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1ae845c90d963aeb9ae58170a483d25275)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetRoleId](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a49452f02b34778848d259e045e851009)()|Gets the value of RoleId.|
|const FString &|[GetRoleId](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1ac0647a02b144923a4cd8580a1dc2e57b)()|Gets the value of RoleId.|
|void|[SetRoleId](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a9f7686e73ba330fc24da8745bd76ec5c)(FString NewValue)|Sets the value of RoleId.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetCustomData](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a6a89b0beabb5a58ef2732b747c52c3f5)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetCustomData](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a6f0ff8d950da4423d60febbad9613730)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetCustomData](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a07133ecd6ca89b5c37506def2ef52e2a)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a8bf58372a5ac17505435fffd2d03e1d3)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1ae8305c6970feae2fff88f38b4e4064bb)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1ab88a5bb3ecf915fd1576007efca37877)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|ERHAPI_RoleAuthBypass &|[GetAuthBypass](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a96717a2f39eeab5e35efc25fc997d6fb)()|Gets the value of AuthBypass_Optional, regardless of it having been set.|
|const ERHAPI_RoleAuthBypass &|[GetAuthBypass](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a176cc7996b1a51c4db7eb9342e4e1577)()|Gets the value of AuthBypass_Optional, regardless of it having been set.|
|const ERHAPI_RoleAuthBypass &|[GetAuthBypass](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a9a2f320042ee44649cfc88afcdefff58)(const ERHAPI_RoleAuthBypass & DefaultValue)|Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAuthBypass](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a8c7e8e6738df06e4828df0fbde8ee0f1)(ERHAPI_RoleAuthBypass & OutValue)|Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_RoleAuthBypass *|[GetAuthBypassOrNull](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a3c8cfc1bea5fb9275e3a34a0d442f6e3)()|Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_RoleAuthBypass *|[GetAuthBypassOrNull](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a588ea5b537363e4def3ece41944e694c)()|Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAuthBypass](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1af518f2a9a12392cde65e1b434914a3cf)(ERHAPI_RoleAuthBypass NewValue)|Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true.|
|void|[ClearAuthBypass](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026)()|Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false.|
|TArray< int32 > &|[GetLoginLootRewards](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a85e8879b4b2fbd1984816123c7bd7c63)()|Gets the value of LoginLootRewards_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetLoginLootRewards](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a00f845665922f1e86a648b164d1f4d4d)()|Gets the value of LoginLootRewards_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetLoginLootRewards](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1af667b94f1457c4162846587ab1c81bd8)(const TArray< int32 > & DefaultValue)|Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLoginLootRewards](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1ac995d6d055b323f552a834e750652754)(TArray< int32 > & OutValue)|Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.|
|TArray< int32 > *|[GetLoginLootRewardsOrNull](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1af16dec3e5e36570a7089df6038b2bfa3)()|Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< int32 > *|[GetLoginLootRewardsOrNull](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a59107e4c9555de012c1fdb8ebed12e2a)()|Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLoginLootRewards](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1a420acb1ad3fd91c2a7d1f97d6e1e17d3)(TArray< int32 > NewValue)|Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.|
|void|[ClearLoginLootRewards](/unreal-plugins/all/structfrhapi__role/#structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d)()|Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.|
## Public Attributes



### `RoleId` <a id="structFRHAPI__Role_1a52f32f8c3152eec8e2eaba9bcfc8f8b5"></a>

`FString FRHAPI_Role::RoleId`

Unique Role ID.




### `CustomData_Optional` <a id="structFRHAPI__Role_1ab56bcc46d8e231e0c8970cf4b28806c4"></a>

`FRHAPI_JsonObject FRHAPI_Role::CustomData_Optional`

Custom data for the role.




### `CustomData_IsSet` <a id="structFRHAPI__Role_1a7009c6fa9d36ddb72c54a9658b63e42d"></a>

`bool FRHAPI_Role::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `AuthBypass_Optional` <a id="structFRHAPI__Role_1a8e0230998648ffb297d56c4605a1332d"></a>

`ERHAPI_RoleAuthBypass FRHAPI_Role::AuthBypass_Optional`

Level of auth bypass for limited/locked modes.




### `AuthBypass_IsSet` <a id="structFRHAPI__Role_1a950879446b1d18137f3af343f23fc8d1"></a>

`bool FRHAPI_Role::AuthBypass_IsSet`

true if AuthBypass_Optional has been set to a value




### `LoginLootRewards_Optional` <a id="structFRHAPI__Role_1a5085d5aa449f92dbb0cb0c236f476b86"></a>

`TArray<int32> FRHAPI_Role::LoginLootRewards_Optional`

List of loot table item ids that are fulfilled for the player when they begin a new inventory session.




### `LoginLootRewards_IsSet` <a id="structFRHAPI__Role_1a6e132dc93f9582659561567ad17f151c"></a>

`bool FRHAPI_Role::LoginLootRewards_IsSet`

true if LoginLootRewards_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Role_1a229641efe3ca109c0f3c7b53422b42ad"></a>

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



### `WriteJson` <a id="structFRHAPI__Role_1ae845c90d963aeb9ae58170a483d25275"></a>

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



### `GetRoleId` <a id="structFRHAPI__Role_1a49452f02b34778848d259e045e851009"></a>

FString & GetRoleId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RoleId.




### `GetRoleId` <a id="structFRHAPI__Role_1ac0647a02b144923a4cd8580a1dc2e57b"></a>

const FString & GetRoleId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RoleId.




### `SetRoleId` <a id="structFRHAPI__Role_1a9f7686e73ba330fc24da8745bd76ec5c"></a>

void SetRoleId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RoleId.




### `GetCustomData` <a id="structFRHAPI__Role_1a6a89b0beabb5a58ef2732b747c52c3f5"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Role_1a6f0ff8d950da4423d60febbad9613730"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Role_1a07133ecd6ca89b5c37506def2ef52e2a"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetCustomData(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8"></a>

bool GetCustomData([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__Role_1a8bf58372a5ac17505435fffd2d03e1d3"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__Role_1ae8305c6970feae2fff88f38b4e4064bb"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__Role_1ab88a5bb3ecf915fd1576007efca37877"></a>

void SetCustomData([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetAuthBypass` <a id="structFRHAPI__Role_1a96717a2f39eeab5e35efc25fc997d6fb"></a>

ERHAPI_RoleAuthBypass & GetAuthBypass()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AuthBypass_Optional, regardless of it having been set.




### `GetAuthBypass` <a id="structFRHAPI__Role_1a176cc7996b1a51c4db7eb9342e4e1577"></a>

const ERHAPI_RoleAuthBypass & GetAuthBypass()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AuthBypass_Optional, regardless of it having been set.




### `GetAuthBypass` <a id="structFRHAPI__Role_1a9a2f320042ee44649cfc88afcdefff58"></a>

const ERHAPI_RoleAuthBypass & GetAuthBypass(const ERHAPI_RoleAuthBypass & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_RoleAuthBypass &|DefaultValue|

#### Description

Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAuthBypass` <a id="structFRHAPI__Role_1a8c7e8e6738df06e4828df0fbde8ee0f1"></a>

bool GetAuthBypass(ERHAPI_RoleAuthBypass & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_RoleAuthBypass &|OutValue|

#### Description

Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false.




### `GetAuthBypassOrNull` <a id="structFRHAPI__Role_1a3c8cfc1bea5fb9275e3a34a0d442f6e3"></a>

ERHAPI_RoleAuthBypass * GetAuthBypassOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.




### `GetAuthBypassOrNull` <a id="structFRHAPI__Role_1a588ea5b537363e4def3ece41944e694c"></a>

const ERHAPI_RoleAuthBypass * GetAuthBypassOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.




### `SetAuthBypass` <a id="structFRHAPI__Role_1af518f2a9a12392cde65e1b434914a3cf"></a>

void SetAuthBypass(ERHAPI_RoleAuthBypass NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_RoleAuthBypass|NewValue|

#### Description

Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true.




### `ClearAuthBypass` <a id="structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026"></a>

void ClearAuthBypass()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false.




### `GetLoginLootRewards` <a id="structFRHAPI__Role_1a85e8879b4b2fbd1984816123c7bd7c63"></a>

TArray< int32 > & GetLoginLootRewards()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LoginLootRewards_Optional, regardless of it having been set.




### `GetLoginLootRewards` <a id="structFRHAPI__Role_1a00f845665922f1e86a648b164d1f4d4d"></a>

const TArray< int32 > & GetLoginLootRewards()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LoginLootRewards_Optional, regardless of it having been set.




### `GetLoginLootRewards` <a id="structFRHAPI__Role_1af667b94f1457c4162846587ab1c81bd8"></a>

const TArray< int32 > & GetLoginLootRewards(const TArray< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|DefaultValue|

#### Description

Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLoginLootRewards` <a id="structFRHAPI__Role_1ac995d6d055b323f552a834e750652754"></a>

bool GetLoginLootRewards(TArray< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 > &|OutValue|

#### Description

Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.




### `GetLoginLootRewardsOrNull` <a id="structFRHAPI__Role_1af16dec3e5e36570a7089df6038b2bfa3"></a>

TArray< int32 > * GetLoginLootRewardsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.




### `GetLoginLootRewardsOrNull` <a id="structFRHAPI__Role_1a59107e4c9555de012c1fdb8ebed12e2a"></a>

const TArray< int32 > * GetLoginLootRewardsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.




### `SetLoginLootRewards` <a id="structFRHAPI__Role_1a420acb1ad3fd91c2a7d1f97d6e1e17d3"></a>

void SetLoginLootRewards(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.




### `ClearLoginLootRewards` <a id="structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d"></a>

void ClearLoginLootRewards()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.





