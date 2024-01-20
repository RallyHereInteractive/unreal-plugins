---
title: FRHAPI_InventorySessionCreateRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request body for creating a new Inventory Session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_Platform|[SessionPlatform_Optional](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1a3ce3d37c36fd64abb0c9f2ac71c7de0b)|The platform for the session.|
|bool|[SessionPlatform_IsSet](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1ab4b7db4ec8fc04e689de59d6277dd7fd)|true if SessionPlatform_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1a0ad9b032707d5e257a32fdb6b775ba2a)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1ac9b911adc322b031836db578fd705c6f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1a399a8e0b4eff8aa1b5e32465b09bcd1a)()|Gets the value of SessionPlatform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1a71d76d23f6e179dd66d70bf12320b279)()|Gets the value of SessionPlatform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1ad83246843db2f5a6cbad43766265996f)(const ERHAPI_Platform & DefaultValue)|Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1acbb25e0e1ca49d59732c2f58fa7ce40b)(ERHAPI_Platform & OutValue)|Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Platform *|[GetSessionPlatformOrNull](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1a6b04a45761ddcd173be6bd2f1663b9e4)()|Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Platform *|[GetSessionPlatformOrNull](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1aa24dff40feb38b6811dbdb940b04c681)()|Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1a851b5285b0f1ba825dd40d5d9b5eef43)(ERHAPI_Platform NewValue)|Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.|
|void|[ClearSessionPlatform](/unreal-plugins/all/structfrhapi__inventorysessioncreaterequest/#structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71)()|Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.|
## Public Attributes



### `SessionPlatform_Optional` <a id="structFRHAPI__InventorySessionCreateRequest_1a3ce3d37c36fd64abb0c9f2ac71c7de0b"></a>

`ERHAPI_Platform FRHAPI_InventorySessionCreateRequest::SessionPlatform_Optional`

The platform for the session.




### `SessionPlatform_IsSet` <a id="structFRHAPI__InventorySessionCreateRequest_1ab4b7db4ec8fc04e689de59d6277dd7fd"></a>

`bool FRHAPI_InventorySessionCreateRequest::SessionPlatform_IsSet`

true if SessionPlatform_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InventorySessionCreateRequest_1a0ad9b032707d5e257a32fdb6b775ba2a"></a>

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



### `WriteJson` <a id="structFRHAPI__InventorySessionCreateRequest_1ac9b911adc322b031836db578fd705c6f"></a>

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



### `GetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateRequest_1a399a8e0b4eff8aa1b5e32465b09bcd1a"></a>

ERHAPI_Platform & GetSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionPlatform_Optional, regardless of it having been set.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateRequest_1a71d76d23f6e179dd66d70bf12320b279"></a>

const ERHAPI_Platform & GetSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionPlatform_Optional, regardless of it having been set.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateRequest_1ad83246843db2f5a6cbad43766265996f"></a>

const ERHAPI_Platform & GetSessionPlatform(const ERHAPI_Platform & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform &|DefaultValue|

#### Description

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateRequest_1acbb25e0e1ca49d59732c2f58fa7ce40b"></a>

bool GetSessionPlatform(ERHAPI_Platform & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform &|OutValue|

#### Description

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.




### `GetSessionPlatformOrNull` <a id="structFRHAPI__InventorySessionCreateRequest_1a6b04a45761ddcd173be6bd2f1663b9e4"></a>

ERHAPI_Platform * GetSessionPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.




### `GetSessionPlatformOrNull` <a id="structFRHAPI__InventorySessionCreateRequest_1aa24dff40feb38b6811dbdb940b04c681"></a>

const ERHAPI_Platform * GetSessionPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.




### `SetSessionPlatform` <a id="structFRHAPI__InventorySessionCreateRequest_1a851b5285b0f1ba825dd40d5d9b5eef43"></a>

void SetSessionPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.




### `ClearSessionPlatform` <a id="structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71"></a>

void ClearSessionPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.





