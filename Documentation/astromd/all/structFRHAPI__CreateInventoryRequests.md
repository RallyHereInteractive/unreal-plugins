---
title: FRHAPI_CreateInventoryRequests Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Collection of Create Inventory Requests. This will create new Inventory for each request. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_Source|[Source_Optional](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738)|Source of this Inventory Operation.|
|bool|[Source_IsSet](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb)|true if Source_Optional has been set to a value|
|FGuid|[ClientOrderRefId_Optional](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da)|Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.|
|bool|[ClientOrderRefId_IsSet](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562)|true if ClientOrderRefId_Optional has been set to a value|
|TArray< [FRHAPI_CreateInventoryRequest](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest) >|[Inventory](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1ac2b8055447714c8995c1559a981b65f5)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1afa6301fedd555ab58c415e584e9098ac)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a9e43c93b0a9a5c7af37a7d9cf3ae97fc)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a9f9ff36141cdb47965679de1fbcb83a1)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1aefae853960da20680ba75f5a65683ddc)(const ERHAPI_Source & DefaultValue)|Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSource](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a1a99930daf928829ebb924a5a740f540)(ERHAPI_Source & OutValue)|Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1abd0c538423d0ec9ec2c899f9631455ca)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a62033c4a6e9c0ad4881120b246031b3b)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSource](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1adbf3bf91c9312625188443c623b57096)(ERHAPI_Source NewValue)|Sets the value of Source_Optional and also sets Source_IsSet to true.|
|void|[ClearSource](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348)()|Clears the value of Source_Optional and sets Source_IsSet to false.|
|FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a565a833705289f5c07105b05943cc039)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a0698edcf7fbb16caf071a17880b7e28a)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1acdfc93d4f3cbaab4f34422a5b43fbe4b)(const FGuid & DefaultValue)|Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1ab9f6db390a15c3fa4ac4ff104db322d8)(FGuid & OutValue)|Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a3fa2f0c4554d53851b954d409a4bc214)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1ab0f6306bd9ef3d60caf067e4a11fbc4e)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetClientOrderRefId](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a3bc963edff75d6cdc2b9f52f8b4c573c)(FGuid NewValue)|Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.|
|void|[ClearClientOrderRefId](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8)()|Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.|
|TArray< [FRHAPI_CreateInventoryRequest](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest) > &|[GetInventory](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1ab87530ee191fc29901fa0476956ac096)()|Gets the value of Inventory.|
|const TArray< [FRHAPI_CreateInventoryRequest](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest) > &|[GetInventory](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1a3e03c3090869f269a876a2aebc5ecae9)()|Gets the value of Inventory.|
|void|[SetInventory](/unreal-plugins/all/structfrhapi__createinventoryrequests/#structFRHAPI__CreateInventoryRequests_1ae6e1d27accc25ddc56041bf6ac6af78a)(TArray< [FRHAPI_CreateInventoryRequest](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest) > NewValue)|Sets the value of Inventory.|
## Public Attributes



### `Source_Optional` <a id="structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738"></a>

`ERHAPI_Source FRHAPI_CreateInventoryRequests::Source_Optional`

Source of this Inventory Operation.




### `Source_IsSet` <a id="structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb"></a>

`bool FRHAPI_CreateInventoryRequests::Source_IsSet`

true if Source_Optional has been set to a value




### `ClientOrderRefId_Optional` <a id="structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da"></a>

`FGuid FRHAPI_CreateInventoryRequests::ClientOrderRefId_Optional`

Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.




### `ClientOrderRefId_IsSet` <a id="structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562"></a>

`bool FRHAPI_CreateInventoryRequests::ClientOrderRefId_IsSet`

true if ClientOrderRefId_Optional has been set to a value




### `Inventory` <a id="structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a"></a>

`TArray<FRHAPI_CreateInventoryRequest> FRHAPI_CreateInventoryRequests::Inventory`







## Public Functions



### `FromJson` <a id="structFRHAPI__CreateInventoryRequests_1ac2b8055447714c8995c1559a981b65f5"></a>

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



### `WriteJson` <a id="structFRHAPI__CreateInventoryRequests_1afa6301fedd555ab58c415e584e9098ac"></a>

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



### `GetSource` <a id="structFRHAPI__CreateInventoryRequests_1a9e43c93b0a9a5c7af37a7d9cf3ae97fc"></a>

ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__CreateInventoryRequests_1a9f9ff36141cdb47965679de1fbcb83a1"></a>

const ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__CreateInventoryRequests_1aefae853960da20680ba75f5a65683ddc"></a>

const ERHAPI_Source & GetSource(const ERHAPI_Source & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Source &|DefaultValue|

#### Description

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSource` <a id="structFRHAPI__CreateInventoryRequests_1a1a99930daf928829ebb924a5a740f540"></a>

bool GetSource(ERHAPI_Source & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source &|OutValue|

#### Description

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.




### `GetSourceOrNull` <a id="structFRHAPI__CreateInventoryRequests_1abd0c538423d0ec9ec2c899f9631455ca"></a>

ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `GetSourceOrNull` <a id="structFRHAPI__CreateInventoryRequests_1a62033c4a6e9c0ad4881120b246031b3b"></a>

const ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `SetSource` <a id="structFRHAPI__CreateInventoryRequests_1adbf3bf91c9312625188443c623b57096"></a>

void SetSource(ERHAPI_Source NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|NewValue|

#### Description

Sets the value of Source_Optional and also sets Source_IsSet to true.




### `ClearSource` <a id="structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348"></a>

void ClearSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Source_Optional and sets Source_IsSet to false.




### `GetClientOrderRefId` <a id="structFRHAPI__CreateInventoryRequests_1a565a833705289f5c07105b05943cc039"></a>

FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__CreateInventoryRequests_1a0698edcf7fbb16caf071a17880b7e28a"></a>

const FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__CreateInventoryRequests_1acdfc93d4f3cbaab4f34422a5b43fbe4b"></a>

const FGuid & GetClientOrderRefId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetClientOrderRefId` <a id="structFRHAPI__CreateInventoryRequests_1ab9f6db390a15c3fa4ac4ff104db322d8"></a>

bool GetClientOrderRefId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__CreateInventoryRequests_1a3fa2f0c4554d53851b954d409a4bc214"></a>

FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__CreateInventoryRequests_1ab0f6306bd9ef3d60caf067e4a11fbc4e"></a>

const FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `SetClientOrderRefId` <a id="structFRHAPI__CreateInventoryRequests_1a3bc963edff75d6cdc2b9f52f8b4c573c"></a>

void SetClientOrderRefId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.




### `ClearClientOrderRefId` <a id="structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8"></a>

void ClearClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.




### `GetInventory` <a id="structFRHAPI__CreateInventoryRequests_1ab87530ee191fc29901fa0476956ac096"></a>

TArray< [FRHAPI_CreateInventoryRequest](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest) > & GetInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Inventory.




### `GetInventory` <a id="structFRHAPI__CreateInventoryRequests_1a3e03c3090869f269a876a2aebc5ecae9"></a>

const TArray< [FRHAPI_CreateInventoryRequest](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest) > & GetInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Inventory.




### `SetInventory` <a id="structFRHAPI__CreateInventoryRequests_1ae6e1d27accc25ddc56041bf6ac6af78a"></a>

void SetInventory(TArray< [FRHAPI_CreateInventoryRequest](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_CreateInventoryRequest](/unreal-plugins/all/structfrhapi__createinventoryrequest/#structFRHAPI__CreateInventoryRequest) >|NewValue|

#### Description

Sets the value of Inventory.





