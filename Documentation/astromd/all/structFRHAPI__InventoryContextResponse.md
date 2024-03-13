---
title: FRHAPI_InventoryContextResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Inventory Context for a Player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory)|[Inventory_Optional](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c)||
|bool|[Inventory_IsSet](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a)|true if Inventory_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1ae834b0342287ef7e2daf8fb9ed47f70d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1a66b6953f96b5caba364122a3328ee0db)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|[FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) &|[GetInventory](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1af5475321db2829b4bad00d99efb69a4b)()|Gets the value of Inventory_Optional, regardless of it having been set.|
|const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) &|[GetInventory](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1a973fbb972b1333e42340f83ef003defd)()|Gets the value of Inventory_Optional, regardless of it having been set.|
|const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) &|[GetInventory](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1a05a932a30a4523e5d12bf7a199103542)(const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) & DefaultValue)|Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInventory](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1a9b4af4258c9a4fb458ddab83157d4e7f)([FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) & OutValue)|Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) *|[GetInventoryOrNull](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1a799ccbd402f02d24f1172b38ad4469fa)()|Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) *|[GetInventoryOrNull](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1ac2709dcadd009f843c4c66000a969128)()|Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInventory](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1a55bde5b6a680c3b5985044755a31d1f3)([FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) NewValue)|Sets the value of Inventory_Optional and also sets Inventory_IsSet to true.|
|void|[ClearInventory](/unreal-plugins/all/structfrhapi__inventorycontextresponse/#structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4)()|Clears the value of Inventory_Optional and sets Inventory_IsSet to false.|
## Public Attributes



### `Inventory_Optional` <a id="structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c"></a>

`FRHAPI_Inventory FRHAPI_InventoryContextResponse::Inventory_Optional`






### `Inventory_IsSet` <a id="structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a"></a>

`bool FRHAPI_InventoryContextResponse::Inventory_IsSet`

true if Inventory_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InventoryContextResponse_1ae834b0342287ef7e2daf8fb9ed47f70d"></a>

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



### `WriteJson` <a id="structFRHAPI__InventoryContextResponse_1a66b6953f96b5caba364122a3328ee0db"></a>

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



### `GetInventory` <a id="structFRHAPI__InventoryContextResponse_1af5475321db2829b4bad00d99efb69a4b"></a>

[FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) & GetInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Inventory_Optional, regardless of it having been set.




### `GetInventory` <a id="structFRHAPI__InventoryContextResponse_1a973fbb972b1333e42340f83ef003defd"></a>

const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) & GetInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Inventory_Optional, regardless of it having been set.




### `GetInventory` <a id="structFRHAPI__InventoryContextResponse_1a05a932a30a4523e5d12bf7a199103542"></a>

const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) & GetInventory(const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) &|DefaultValue|

#### Description

Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInventory` <a id="structFRHAPI__InventoryContextResponse_1a9b4af4258c9a4fb458ddab83157d4e7f"></a>

bool GetInventory([FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) &|OutValue|

#### Description

Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false.




### `GetInventoryOrNull` <a id="structFRHAPI__InventoryContextResponse_1a799ccbd402f02d24f1172b38ad4469fa"></a>

[FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) * GetInventoryOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.




### `GetInventoryOrNull` <a id="structFRHAPI__InventoryContextResponse_1ac2709dcadd009f843c4c66000a969128"></a>

const [FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) * GetInventoryOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.




### `SetInventory` <a id="structFRHAPI__InventoryContextResponse_1a55bde5b6a680c3b5985044755a31d1f3"></a>

void SetInventory([FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Inventory](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory)|NewValue|

#### Description

Sets the value of Inventory_Optional and also sets Inventory_IsSet to true.




### `ClearInventory` <a id="structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4"></a>

void ClearInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Inventory_Optional and sets Inventory_IsSet to false.





