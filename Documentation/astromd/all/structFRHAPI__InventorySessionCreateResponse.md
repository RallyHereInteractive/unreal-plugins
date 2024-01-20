---
title: FRHAPI_InventorySessionCreateResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response body for creating a new Inventory Session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[SessionId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a160a748950f52bf2d4dc9c750835512d)|The ID of the session.|
|ERHAPI_Platform|[SessionPlatform_Optional](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1aa63d532932e9ebeb99693a254e3b7df8)|The platform for the session.|
|bool|[SessionPlatform_IsSet](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f)|true if SessionPlatform_Optional has been set to a value|
|FString|[OrderId_Optional](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81)|The ID of the Order generated for any Loot given during the creation of the Inventory Session.|
|bool|[OrderId_IsSet](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88)|true if OrderId_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1ae9b690d82bf214d168849030a14cf65f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a37c0a3f8b429ba26ed669bf454d5db21)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a77aeee0f1ae5d7a103ff24d386ddcd55)()|Gets the value of SessionId.|
|const FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a19c5a7257ae09c490d41069927aa775b)()|Gets the value of SessionId.|
|void|[SetSessionId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1ad127ab1a1011409893174b01bd35f7bd)(FString NewValue)|Sets the value of SessionId.|
|ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a5226a12debf31b45d28c1033e0b07998)()|Gets the value of SessionPlatform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1aca6a03ec7c6589f23faf1cc057dcd7df)()|Gets the value of SessionPlatform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1ab821fb4c83b83379d4a462dea52cf1f6)(const ERHAPI_Platform & DefaultValue)|Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1af403bd2cd9c17cdc9def44c86659f303)(ERHAPI_Platform & OutValue)|Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Platform *|[GetSessionPlatformOrNull](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1ac67c0633fb26b54fa149ba3135af76d2)()|Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Platform *|[GetSessionPlatformOrNull](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a0cc15c28d9cc40bb19a4643c92c59b2d)()|Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a2e6226bab06355a442af999620c6d1b7)(ERHAPI_Platform NewValue)|Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.|
|void|[ClearSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852)()|Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.|
|FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a5908f55863626ef4fcfd5306f593ec1f)()|Gets the value of OrderId_Optional, regardless of it having been set.|
|const FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1ae428b644cc5cb9674d1396df83521554)()|Gets the value of OrderId_Optional, regardless of it having been set.|
|const FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a20c290568e3235d485fff45c02995eb5)(const FString & DefaultValue)|Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetOrderId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a55ceafca80b79d5330080d2371f81fe9)(FString & OutValue)|Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetOrderIdOrNull](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1ab366e349e214ee9dc8791d54f59f410b)()|Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetOrderIdOrNull](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1ac5166ea93efc6870f0dc5ef740ced2c4)()|Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetOrderId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a379ae7d16cc532c43049ef0fb2f1f307)(FString NewValue)|Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.|
|void|[ClearOrderId](/unreal-plugins/all/structfrhapi__inventorysessioncreateresponse/#structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910)()|Clears the value of OrderId_Optional and sets OrderId_IsSet to false.|
## Public Attributes



### `SessionId` <a id="structFRHAPI__InventorySessionCreateResponse_1a160a748950f52bf2d4dc9c750835512d"></a>

`FString FRHAPI_InventorySessionCreateResponse::SessionId`

The ID of the session.




### `SessionPlatform_Optional` <a id="structFRHAPI__InventorySessionCreateResponse_1aa63d532932e9ebeb99693a254e3b7df8"></a>

`ERHAPI_Platform FRHAPI_InventorySessionCreateResponse::SessionPlatform_Optional`

The platform for the session.




### `SessionPlatform_IsSet` <a id="structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f"></a>

`bool FRHAPI_InventorySessionCreateResponse::SessionPlatform_IsSet`

true if SessionPlatform_Optional has been set to a value




### `OrderId_Optional` <a id="structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81"></a>

`FString FRHAPI_InventorySessionCreateResponse::OrderId_Optional`

The ID of the Order generated for any Loot given during the creation of the Inventory Session.




### `OrderId_IsSet` <a id="structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88"></a>

`bool FRHAPI_InventorySessionCreateResponse::OrderId_IsSet`

true if OrderId_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InventorySessionCreateResponse_1ae9b690d82bf214d168849030a14cf65f"></a>

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



### `WriteJson` <a id="structFRHAPI__InventorySessionCreateResponse_1a37c0a3f8b429ba26ed669bf454d5db21"></a>

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



### `GetSessionId` <a id="structFRHAPI__InventorySessionCreateResponse_1a77aeee0f1ae5d7a103ff24d386ddcd55"></a>

FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `GetSessionId` <a id="structFRHAPI__InventorySessionCreateResponse_1a19c5a7257ae09c490d41069927aa775b"></a>

const FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `SetSessionId` <a id="structFRHAPI__InventorySessionCreateResponse_1ad127ab1a1011409893174b01bd35f7bd"></a>

void SetSessionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionId.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateResponse_1a5226a12debf31b45d28c1033e0b07998"></a>

ERHAPI_Platform & GetSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionPlatform_Optional, regardless of it having been set.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateResponse_1aca6a03ec7c6589f23faf1cc057dcd7df"></a>

const ERHAPI_Platform & GetSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionPlatform_Optional, regardless of it having been set.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateResponse_1ab821fb4c83b83379d4a462dea52cf1f6"></a>

const ERHAPI_Platform & GetSessionPlatform(const ERHAPI_Platform & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform &|DefaultValue|

#### Description

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateResponse_1af403bd2cd9c17cdc9def44c86659f303"></a>

bool GetSessionPlatform(ERHAPI_Platform & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform &|OutValue|

#### Description

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.




### `GetSessionPlatformOrNull` <a id="structFRHAPI__InventorySessionCreateResponse_1ac67c0633fb26b54fa149ba3135af76d2"></a>

ERHAPI_Platform * GetSessionPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.




### `GetSessionPlatformOrNull` <a id="structFRHAPI__InventorySessionCreateResponse_1a0cc15c28d9cc40bb19a4643c92c59b2d"></a>

const ERHAPI_Platform * GetSessionPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.




### `SetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateResponse_1a2e6226bab06355a442af999620c6d1b7"></a>

void SetSessionPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.




### `ClearSessionPlatform` <a id="structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852"></a>

void ClearSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.




### `GetOrderId` <a id="structFRHAPI__InventorySessionCreateResponse_1a5908f55863626ef4fcfd5306f593ec1f"></a>

FString & GetOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OrderId_Optional, regardless of it having been set.




### `GetOrderId` <a id="structFRHAPI__InventorySessionCreateResponse_1ae428b644cc5cb9674d1396df83521554"></a>

const FString & GetOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OrderId_Optional, regardless of it having been set.




### `GetOrderId` <a id="structFRHAPI__InventorySessionCreateResponse_1a20c290568e3235d485fff45c02995eb5"></a>

const FString & GetOrderId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetOrderId` <a id="structFRHAPI__InventorySessionCreateResponse_1a55ceafca80b79d5330080d2371f81fe9"></a>

bool GetOrderId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.




### `GetOrderIdOrNull` <a id="structFRHAPI__InventorySessionCreateResponse_1ab366e349e214ee9dc8791d54f59f410b"></a>

FString * GetOrderIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.




### `GetOrderIdOrNull` <a id="structFRHAPI__InventorySessionCreateResponse_1ac5166ea93efc6870f0dc5ef740ced2c4"></a>

const FString * GetOrderIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.




### `SetOrderId` <a id="structFRHAPI__InventorySessionCreateResponse_1a379ae7d16cc532c43049ef0fb2f1f307"></a>

void SetOrderId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.




### `ClearOrderId` <a id="structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910"></a>

void ClearOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.





