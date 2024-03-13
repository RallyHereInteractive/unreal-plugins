---
title: URH_InventoryBlueprintLibrary Class
---Inherits from UBlueprintFunctionLibrary

Inventory Blueprint Library with helper methods for inventory item struct.

## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[CheckIfInventoryExpires](/unreal-plugins/all/classurh__inventoryblueprintlibrary/#classURH__InventoryBlueprintLibrary_1ab30fa55c414c38e2fc34ad303d24e0e1)(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)|Checks if the inventory item has an expiration.|
|bool|[GetInventoryExpiration](/unreal-plugins/all/classurh__inventoryblueprintlibrary/#classURH__InventoryBlueprintLibrary_1a2bac931a3e46c094869b5757ee3b6d72)(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory, FDateTime & DateTimeOut)|Gets the inventory item expiration.|
|void|[AddCustomDataToItemInventory](/unreal-plugins/all/classurh__inventoryblueprintlibrary/#classURH__InventoryBlueprintLibrary_1a2cb0238e360728c05a7a06d812258e4c)([FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory, const FString & Key, const FString & Value)|Adds custom data onto an inventory item.|
|void|[RemoveCustomDataFromItemInventory](/unreal-plugins/all/classurh__inventoryblueprintlibrary/#classURH__InventoryBlueprintLibrary_1a80469ff0516a5cc8eecb52e8646095fc)([FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory, const FString & Key)|Removes custom data on an inventory item.|
|FString|[FindCustomDataOnItemInventory](/unreal-plugins/all/classurh__inventoryblueprintlibrary/#classURH__InventoryBlueprintLibrary_1a11934ea15fe4952db476a76cf4894060)(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory, const FString & Key)|Gets custom data onto an inventory item.|
|bool|[InitCreateInventoryWithItemInventoryValues](/unreal-plugins/all/classurh__inventoryblueprintlibrary/#classURH__InventoryBlueprintLibrary_1ac034407e6b0eaff6342834762c9d0918)([FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) CreateInventory, const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)|Initializes a Create Inventory struct with an item inventory.|
|bool|[InitUpdateInventoryWithItemInventoryValues](/unreal-plugins/all/classurh__inventoryblueprintlibrary/#classURH__InventoryBlueprintLibrary_1ad02f06fd2d2a5a3c96c5db6292dc2718)([FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) UpdateInventory, const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)|Initializes a Update Inventory struct with an item inventory.|
## Private Static Functions



### `CheckIfInventoryExpires` <a id="classURH__InventoryBlueprintLibrary_1ab30fa55c414c38e2fc34ad303d24e0e1"></a>

bool CheckIfInventoryExpires(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|

#### Description

Checks if the inventory item has an expiration.


#### Parameters

ItemInventory
: The item inventory to check. 

#### Returns
If true, the item has an expiritation. 



### `GetInventoryExpiration` <a id="classURH__InventoryBlueprintLibrary_1a2bac931a3e46c094869b5757ee3b6d72"></a>

bool GetInventoryExpiration(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory, FDateTime & DateTimeOut)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|
|FDateTime &|DateTimeOut|

#### Description

Gets the inventory item expiration.


#### Parameters

ItemInventory
: The item inventory to get the expiration of. 
DateTimeOut
: The expiration date time. 

#### Returns
If true, the item has an expiritation to return. 



### `AddCustomDataToItemInventory` <a id="classURH__InventoryBlueprintLibrary_1a2cb0238e360728c05a7a06d812258e4c"></a>

void AddCustomDataToItemInventory([FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory, const FString & Key, const FString & Value)

#### Parameters

| Type | Name |
|------|------|
|[FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|
|const FString &|Key|
|const FString &|Value|

#### Description

Adds custom data onto an inventory item.


#### Parameters

ItemInventory
: The item inventory to get the expiration of. 
Key
: The key for the custom data. 
Value
: The value for the custom data. 



### `RemoveCustomDataFromItemInventory` <a id="classURH__InventoryBlueprintLibrary_1a80469ff0516a5cc8eecb52e8646095fc"></a>

void RemoveCustomDataFromItemInventory([FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory, const FString & Key)

#### Parameters

| Type | Name |
|------|------|
|[FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|
|const FString &|Key|

#### Description

Removes custom data on an inventory item.


#### Parameters

ItemInventory
: The item inventory to get the expiration of. 
Key
: The key for the custom data. 



### `FindCustomDataOnItemInventory` <a id="classURH__InventoryBlueprintLibrary_1a11934ea15fe4952db476a76cf4894060"></a>

FString FindCustomDataOnItemInventory(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory, const FString & Key)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|
|const FString &|Key|

#### Description

Gets custom data onto an inventory item.


#### Parameters

ItemInventory
: The item inventory to get the expiration of. 
Key
: The key for the custom data. 

#### Returns
The value for the custom data. 



### `InitCreateInventoryWithItemInventoryValues` <a id="classURH__InventoryBlueprintLibrary_1ac034407e6b0eaff6342834762c9d0918"></a>

bool InitCreateInventoryWithItemInventoryValues([FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory) CreateInventory, const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)

#### Parameters

| Type | Name |
|------|------|
|[FRH_CreateInventory](/unreal-plugins/all/structfrh__createinventory/#structFRH__CreateInventory)|CreateInventory|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|

#### Description

Initializes a Create Inventory struct with an item inventory.


#### Parameters

CreateInventory
: The create inventory struct to initilize. 
ItemInventory
: The item inventory to use for initilization. 

#### Returns
If true, the struct was intialized with the data. 



### `InitUpdateInventoryWithItemInventoryValues` <a id="classURH__InventoryBlueprintLibrary_1ad02f06fd2d2a5a3c96c5db6292dc2718"></a>

bool InitUpdateInventoryWithItemInventoryValues([FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory) UpdateInventory, const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & ItemInventory)

#### Parameters

| Type | Name |
|------|------|
|[FRH_UpdateInventory](/unreal-plugins/all/structfrh__updateinventory/#structFRH__UpdateInventory)|UpdateInventory|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|ItemInventory|

#### Description

Initializes a Update Inventory struct with an item inventory.


#### Parameters

UpdateInventory
: The update inventory struct to initilize. 
ItemInventory
: The item inventory to use for initilization. 

#### Returns
If true, the struct was intialized with the data. 




