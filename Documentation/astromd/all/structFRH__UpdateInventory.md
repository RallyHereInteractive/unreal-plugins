---
title: FRH_UpdateInventory Struct
---
Inherits from [FRH_BaseInventoryOperation](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation)

Update Inventory Operation struct for setting up data to Update an Inventory record.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[InventoryId](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory_1a12dcae9ffba97bf3612c579efab5bc48)|Unique Id of the inventory record being operated on.|
|int32|[Count](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory_1afe4138f30fa8b11f449af55f944f9552)|The amount of the inventory operation, defaults to 0.|
|bool|[InitFromItemInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory_1aff31e7fc1bf79da3f6fcdc58210bd3ed)(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)|Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.|
## Public Attributes



### `InventoryId` <a id="structFRH__UpdateInventory_1a12dcae9ffba97bf3612c579efab5bc48"></a>

`FGuid FRH_UpdateInventory::InventoryId`

Unique Id of the inventory record being operated on.




### `Count` <a id="structFRH__UpdateInventory_1afe4138f30fa8b11f449af55f944f9552"></a>

`int32 FRH_UpdateInventory::Count`

The amount of the inventory operation, defaults to 0.





## Public Functions



### `InitFromItemInventory` <a id="structFRH__UpdateInventory_1aff31e7fc1bf79da3f6fcdc58210bd3ed"></a>

bool InitFromItemInventory(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|

#### Description

Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.



#### Returns
If true, the operation was initialized successfully. 




