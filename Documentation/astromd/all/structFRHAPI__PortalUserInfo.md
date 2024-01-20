---
title: FRHAPI_PortalUserInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Portal user info.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_Platform|[Platform](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06)|Platform for the user.|
|ERHAPI_Portal|[PortalId](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1adb682b56cd6f79975dedcb3c3062e644)|Portal ID. DEPRECATED use platform instead.|
|FString|[PortalUserId](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab)|Platform User ID.|
|FString|[DisplayName](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0)|Display name.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a157222df92a9e58a8a7f4e86a8451e6e)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a2344390b2002ec9ee2cfcb5fc80d346d)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a3f453744df9708c61b8d4cbc145eb71a)()|Gets the value of Platform.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a40e45a21d723e554b55aa7a41b4af6d1)()|Gets the value of Platform.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1aa5016a42a179303e547de00d3d6a1134)(ERHAPI_Platform NewValue)|Sets the value of Platform.|
|ERHAPI_Portal &|[GetPortalId](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a450d1eb3a351c952f6e653df28e64152)()|Gets the value of PortalId.|
|const ERHAPI_Portal &|[GetPortalId](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a30a26996c34aaa6e6ace87b335c5f983)()|Gets the value of PortalId.|
|void|[SetPortalId](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a11ca7c43d92f81fd4a714f4dfe9f0388)(ERHAPI_Portal NewValue)|Sets the value of PortalId.|
|FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a02293533e662c590c4d1434fa698c8e8)()|Gets the value of PortalUserId.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1add30541439590b909bdcff70ceaed762)()|Gets the value of PortalUserId.|
|void|[SetPortalUserId](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a94df2aa5c3d86b04e197424b6c87aef4)(FString NewValue)|Sets the value of PortalUserId.|
|FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a2db99b60ec4b0ee6d486bfcc92499af1)()|Gets the value of DisplayName.|
|const FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a3748a4f9b1fe44030fc16bce07e5f092)()|Gets the value of DisplayName.|
|void|[SetDisplayName](/unreal-plugins/all/structfrhapi__portaluserinfo/#structFRHAPI__PortalUserInfo_1a21b0a04d9950ed600c1b0b76d3863475)(FString NewValue)|Sets the value of DisplayName.|
## Public Attributes



### `Platform` <a id="structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06"></a>

`ERHAPI_Platform FRHAPI_PortalUserInfo::Platform`

Platform for the user.




### `PortalId` <a id="structFRHAPI__PortalUserInfo_1adb682b56cd6f79975dedcb3c3062e644"></a>

`ERHAPI_Portal FRHAPI_PortalUserInfo::PortalId`

Portal ID. DEPRECATED use platform instead.




### `PortalUserId` <a id="structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab"></a>

`FString FRHAPI_PortalUserInfo::PortalUserId`

Platform User ID.




### `DisplayName` <a id="structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0"></a>

`FString FRHAPI_PortalUserInfo::DisplayName`

Display name.





## Public Functions



### `FromJson` <a id="structFRHAPI__PortalUserInfo_1a157222df92a9e58a8a7f4e86a8451e6e"></a>

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



### `WriteJson` <a id="structFRHAPI__PortalUserInfo_1a2344390b2002ec9ee2cfcb5fc80d346d"></a>

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



### `GetPlatform` <a id="structFRHAPI__PortalUserInfo_1a3f453744df9708c61b8d4cbc145eb71a"></a>

ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `GetPlatform` <a id="structFRHAPI__PortalUserInfo_1a40e45a21d723e554b55aa7a41b4af6d1"></a>

const ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `SetPlatform` <a id="structFRHAPI__PortalUserInfo_1aa5016a42a179303e547de00d3d6a1134"></a>

void SetPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of Platform.




### `GetPortalId` <a id="structFRHAPI__PortalUserInfo_1a450d1eb3a351c952f6e653df28e64152"></a>

ERHAPI_Portal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId.




### `GetPortalId` <a id="structFRHAPI__PortalUserInfo_1a30a26996c34aaa6e6ace87b335c5f983"></a>

const ERHAPI_Portal & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId.




### `SetPortalId` <a id="structFRHAPI__PortalUserInfo_1a11ca7c43d92f81fd4a714f4dfe9f0388"></a>

void SetPortalId(ERHAPI_Portal NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Portal|NewValue|

#### Description

Sets the value of PortalId.




### `GetPortalUserId` <a id="structFRHAPI__PortalUserInfo_1a02293533e662c590c4d1434fa698c8e8"></a>

FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId.




### `GetPortalUserId` <a id="structFRHAPI__PortalUserInfo_1add30541439590b909bdcff70ceaed762"></a>

const FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId.




### `SetPortalUserId` <a id="structFRHAPI__PortalUserInfo_1a94df2aa5c3d86b04e197424b6c87aef4"></a>

void SetPortalUserId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalUserId.




### `GetDisplayName` <a id="structFRHAPI__PortalUserInfo_1a2db99b60ec4b0ee6d486bfcc92499af1"></a>

FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName.




### `GetDisplayName` <a id="structFRHAPI__PortalUserInfo_1a3748a4f9b1fe44030fc16bce07e5f092"></a>

const FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName.




### `SetDisplayName` <a id="structFRHAPI__PortalUserInfo_1a21b0a04d9950ed600c1b0b76d3863475"></a>

void SetDisplayName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of DisplayName.





