---
title: FRH_CreateInventory Struct
---
Inherits from [FRH_BaseInventoryOperation](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation)

Create Inventory Operation struct for setting up data to Create an Inventory record.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[Count](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory_1ae35d25742e5090f59dce4451e597ae94)|The amount of the inventory operation, defaults to 1.|
|ERHAPI_CreateInventoryType|[InventoryType](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory_1aaf9b8cdb0208933622a7da151c35b76a)|The item id for the inventory operation, defaults to Persistent.|
|bool|[InitFromItemInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory_1ab22e9d4a705d3dcd2147629478673043)(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)|Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.|
## Public Attributes



### `Count` <a id="structFRH__CreateInventory_1ae35d25742e5090f59dce4451e597ae94"></a>

`int32 FRH_CreateInventory::Count`

The amount of the inventory operation, defaults to 1.




### `InventoryType` <a id="structFRH__CreateInventory_1aaf9b8cdb0208933622a7da151c35b76a"></a>

`ERHAPI_CreateInventoryType FRH_CreateInventory::InventoryType`

The item id for the inventory operation, defaults to Persistent.





## Public Functions



### `InitFromItemInventory` <a id="structFRH__CreateInventory_1ab22e9d4a705d3dcd2147629478673043"></a>

bool InitFromItemInventory(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|

#### Description

Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.



#### Returns
If true, the operation was initialized successfully. 




