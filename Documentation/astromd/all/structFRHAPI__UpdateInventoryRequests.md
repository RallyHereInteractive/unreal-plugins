---
title: FRHAPI_UpdateInventoryRequests Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Collection of Update Inventory Requests. The Inventory referenced in the Update Inventory Requests must exist otherwise the request will fail. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_Source|[Source_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042)|Source of this Inventory Operation.|
|bool|[Source_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14)|true if Source_Optional has been set to a value|
|FGuid|[ClientOrderRefId_Optional](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46)|Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.|
|bool|[ClientOrderRefId_IsSet](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686)|true if ClientOrderRefId_Optional has been set to a value|
|TArray< [FRHAPI_UpdateInventoryRequestById](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById) >|[Inventory](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f)|Collection of Update Inventory Requests.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1ac5d431c50c9aedba2d53279f403ff35a)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a4878a3e38b44bfaf45c97c8642af43f0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a2cf859b8a7524363ffd07566d74bf526)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1abf994fbfcee1b57694d6553122929e89)()|Gets the value of Source_Optional, regardless of it having been set.|
|const ERHAPI_Source &|[GetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1accce20b73297dfc0041d9d270218b8ee)(const ERHAPI_Source & DefaultValue)|Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a79366bc7965bc537dfdafb254ee3975f)(ERHAPI_Source & OutValue)|Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1acac0c3fa2cf508046c640d27416c1ea1)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Source *|[GetSourceOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1ae98cb0c748edb0febba7fffa4afc513c)()|Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSource](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a5b24c0d3c4a9ef60f864d871e19125ce)(ERHAPI_Source NewValue)|Sets the value of Source_Optional and also sets Source_IsSet to true.|
|void|[ClearSource](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a)()|Clears the value of Source_Optional and sets Source_IsSet to false.|
|FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1af1f81290ae1ebbbdc4f401b94289c914)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a5884d2d9a33472cae64508ff3856122e)()|Gets the value of ClientOrderRefId_Optional, regardless of it having been set.|
|const FGuid &|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a6b10744de89614c7470a8eba498485d5)(const FGuid & DefaultValue)|Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a954e1f64dd5becb1c49b3892bbadaf51)(FGuid & OutValue)|Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1ae3e35d9e8cd76094dc8aede083a64725)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetClientOrderRefIdOrNull](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1aba5a2e840a0ae74d659652f8a1485773)()|Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a5a2f352883ea87a8299bb450843732d8)(FGuid NewValue)|Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.|
|void|[ClearClientOrderRefId](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602)()|Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.|
|TArray< [FRHAPI_UpdateInventoryRequestById](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById) > &|[GetInventory](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1aa3f7f39ca6239abb822c139bb0355c9a)()|Gets the value of Inventory.|
|const TArray< [FRHAPI_UpdateInventoryRequestById](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById) > &|[GetInventory](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1a16236c2da82677b936d1e02d891c1009)()|Gets the value of Inventory.|
|void|[SetInventory](/unreal-plugins/all/structfrhapi__updateinventoryrequests/#structFRHAPI__UpdateInventoryRequests_1ad386c910446362cdba8b737245b2769f)(TArray< [FRHAPI_UpdateInventoryRequestById](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById) > NewValue)|Sets the value of Inventory.|
## Public Attributes



### `Source_Optional` <a id="structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042"></a>

`ERHAPI_Source FRHAPI_UpdateInventoryRequests::Source_Optional`

Source of this Inventory Operation.




### `Source_IsSet` <a id="structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14"></a>

`bool FRHAPI_UpdateInventoryRequests::Source_IsSet`

true if Source_Optional has been set to a value




### `ClientOrderRefId_Optional` <a id="structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46"></a>

`FGuid FRHAPI_UpdateInventoryRequests::ClientOrderRefId_Optional`

Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.




### `ClientOrderRefId_IsSet` <a id="structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686"></a>

`bool FRHAPI_UpdateInventoryRequests::ClientOrderRefId_IsSet`

true if ClientOrderRefId_Optional has been set to a value




### `Inventory` <a id="structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f"></a>

`TArray<FRHAPI_UpdateInventoryRequestById> FRHAPI_UpdateInventoryRequests::Inventory`

Collection of Update Inventory Requests.





## Public Functions



### `FromJson` <a id="structFRHAPI__UpdateInventoryRequests_1ac5d431c50c9aedba2d53279f403ff35a"></a>

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



### `WriteJson` <a id="structFRHAPI__UpdateInventoryRequests_1a4878a3e38b44bfaf45c97c8642af43f0"></a>

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



### `GetSource` <a id="structFRHAPI__UpdateInventoryRequests_1a2cf859b8a7524363ffd07566d74bf526"></a>

ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__UpdateInventoryRequests_1abf994fbfcee1b57694d6553122929e89"></a>

const ERHAPI_Source & GetSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Source_Optional, regardless of it having been set.




### `GetSource` <a id="structFRHAPI__UpdateInventoryRequests_1accce20b73297dfc0041d9d270218b8ee"></a>

const ERHAPI_Source & GetSource(const ERHAPI_Source & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Source &|DefaultValue|

#### Description

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSource` <a id="structFRHAPI__UpdateInventoryRequests_1a79366bc7965bc537dfdafb254ee3975f"></a>

bool GetSource(ERHAPI_Source & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source &|OutValue|

#### Description

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.




### `GetSourceOrNull` <a id="structFRHAPI__UpdateInventoryRequests_1acac0c3fa2cf508046c640d27416c1ea1"></a>

ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `GetSourceOrNull` <a id="structFRHAPI__UpdateInventoryRequests_1ae98cb0c748edb0febba7fffa4afc513c"></a>

const ERHAPI_Source * GetSourceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.




### `SetSource` <a id="structFRHAPI__UpdateInventoryRequests_1a5b24c0d3c4a9ef60f864d871e19125ce"></a>

void SetSource(ERHAPI_Source NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Source|NewValue|

#### Description

Sets the value of Source_Optional and also sets Source_IsSet to true.




### `ClearSource` <a id="structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a"></a>

void ClearSource()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Source_Optional and sets Source_IsSet to false.




### `GetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequests_1af1f81290ae1ebbbdc4f401b94289c914"></a>

FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequests_1a5884d2d9a33472cae64508ff3856122e"></a>

const FGuid & GetClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.




### `GetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequests_1a6b10744de89614c7470a8eba498485d5"></a>

const FGuid & GetClientOrderRefId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequests_1a954e1f64dd5becb1c49b3892bbadaf51"></a>

bool GetClientOrderRefId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__UpdateInventoryRequests_1ae3e35d9e8cd76094dc8aede083a64725"></a>

FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `GetClientOrderRefIdOrNull` <a id="structFRHAPI__UpdateInventoryRequests_1aba5a2e840a0ae74d659652f8a1485773"></a>

const FGuid * GetClientOrderRefIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.




### `SetClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequests_1a5a2f352883ea87a8299bb450843732d8"></a>

void SetClientOrderRefId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.




### `ClearClientOrderRefId` <a id="structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602"></a>

void ClearClientOrderRefId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.




### `GetInventory` <a id="structFRHAPI__UpdateInventoryRequests_1aa3f7f39ca6239abb822c139bb0355c9a"></a>

TArray< [FRHAPI_UpdateInventoryRequestById](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById) > & GetInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Inventory.




### `GetInventory` <a id="structFRHAPI__UpdateInventoryRequests_1a16236c2da82677b936d1e02d891c1009"></a>

const TArray< [FRHAPI_UpdateInventoryRequestById](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById) > & GetInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Inventory.




### `SetInventory` <a id="structFRHAPI__UpdateInventoryRequests_1ad386c910446362cdba8b737245b2769f"></a>

void SetInventory(TArray< [FRHAPI_UpdateInventoryRequestById](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_UpdateInventoryRequestById](/unreal-plugins/all/structfrhapi__updateinventoryrequestbyid/#structFRHAPI__UpdateInventoryRequestById) >|NewValue|

#### Description

Sets the value of Inventory.





