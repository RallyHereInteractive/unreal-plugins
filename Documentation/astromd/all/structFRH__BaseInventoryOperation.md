---
title: FRH_BaseInventoryOperation Struct
---
Base Inventory Operation struct for defining shared input data for Inventory Modification API calls.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[Count](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation_1aa4d84c54e1ee0bf2813ab1026b764c01)|The amount of the inventory operation.|
|int32|[ItemId](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation_1a0805225ecfdcea0546be89e6333ac2bd)|The item id for the inventory operation.|
|TMap< FString, FString >|[CustomData](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation_1a1b3c0c1b37a2c0af483ed35f9d2067eb)|The custom data for the inventory operation.|
|ERHAPI_InventoryBucket|[Bucket](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation_1a95be2c5b7b5df2ab6ce50f57198b9ff0)|The bucket for the inventory operation.|
|TOptional< FDateTime >|[Expires](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation_1a297edc1d1d7f1acdd92ca2dc4e25535c)|The expiriation date of the inventory operation.|
|bool|[InventoryShouldExpire](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation_1a2bc300b71dfa8a8440e65da4d9947d51)|If set, then the the expiration date will be considered for the inventory operation.|
||[FRH_BaseInventoryOperation](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation_1aa718ffb220e49e5821c75764838e94d7)()|Default constructor.|
|bool|[InitFromItemInventory](/unreal-plugins/all/structfrh__baseinventoryoperation/#structFRH__BaseInventoryOperation_1a8dca78d16cced1969fa5955e30b47071)(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)|Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.|
## Public Attributes



### `Count` <a id="structFRH__BaseInventoryOperation_1aa4d84c54e1ee0bf2813ab1026b764c01"></a>

`int32 FRH_BaseInventoryOperation::Count`

The amount of the inventory operation.




### `ItemId` <a id="structFRH__BaseInventoryOperation_1a0805225ecfdcea0546be89e6333ac2bd"></a>

`int32 FRH_BaseInventoryOperation::ItemId`

The item id for the inventory operation.




### `CustomData` <a id="structFRH__BaseInventoryOperation_1a1b3c0c1b37a2c0af483ed35f9d2067eb"></a>

`TMap<FString, FString> FRH_BaseInventoryOperation::CustomData`

The custom data for the inventory operation.




### `Bucket` <a id="structFRH__BaseInventoryOperation_1a95be2c5b7b5df2ab6ce50f57198b9ff0"></a>

`ERHAPI_InventoryBucket FRH_BaseInventoryOperation::Bucket`

The bucket for the inventory operation.




### `Expires` <a id="structFRH__BaseInventoryOperation_1a297edc1d1d7f1acdd92ca2dc4e25535c"></a>

`TOptional<FDateTime> FRH_BaseInventoryOperation::Expires`

The expiriation date of the inventory operation.




### `InventoryShouldExpire` <a id="structFRH__BaseInventoryOperation_1a2bc300b71dfa8a8440e65da4d9947d51"></a>

`bool FRH_BaseInventoryOperation::InventoryShouldExpire`

If set, then the the expiration date will be considered for the inventory operation.





## Public Functions



### `FRH_BaseInventoryOperation` <a id="structFRH__BaseInventoryOperation_1aa718ffb220e49e5821c75764838e94d7"></a>

 FRH_BaseInventoryOperation()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `InitFromItemInventory` <a id="structFRH__BaseInventoryOperation_1a8dca78d16cced1969fa5955e30b47071"></a>

bool InitFromItemInventory(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|

#### Description

Initializes an inventory operation with the data from an Inventory Item. @params [in] ItemInventory The item inventory to initialize the operation with.



#### Returns
If true, the operation was initialized successfully. 




