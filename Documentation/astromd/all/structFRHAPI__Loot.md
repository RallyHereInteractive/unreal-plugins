---
title: FRHAPI_Loot Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Loot determines how an Item fulfilled. When Loot is fulfilled, the Item is granted to the player or the Sub Vendor is fulfilled but not both.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a3ac4b8fa1534ddc987f9809a78b0f573)|Custom data associated with the resource.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab5141af81d9f12541fa2a640cc9025d5)|true if CustomData_Optional has been set to a value|
|int32|[LootId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a5f92839acf839d6c49b57b1cc66dba4f)|The Loot ID.|
|int32|[VendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aeebadf01967a63239b42fe6094e7a9c5)|The Vendor ID.|
|int32|[ItemId_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a8cd4e2427345b15dd5a3a12f5fdc7497)|The Item ID. Optional Item that will be granted to the player if Sub Vendor ID is not specified.|
|bool|[ItemId_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab203c9039289860b29222870d6c41689)|true if ItemId_Optional has been set to a value|
|[FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item)|[Item_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a2465b63dbf01c76fa9cc736f7356d278)||
|bool|[Item_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a5511b7f6472a4da05f937a4262f15843)|true if Item_Optional has been set to a value|
|int32|[SubVendorId_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9869e1988c40476054db483a6b763e73)|The Sub Vendor ID. Optional Vendor ID that will be used to fulfill the Loot instead of granting the Item.|
|bool|[SubVendorId_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a97e58634ed48e68a3eb038df38ede464)|true if SubVendorId_Optional has been set to a value|
|int32|[Quantity_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a507bf92cd6bc234afa66946931e806b9)|The quantity of the Item or Sub Vendor to fulfill. This will be multiplied by the quantity of fulfilled Loot and the parent Loot if quantity_type is relative.|
|bool|[Quantity_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1abb9332211b9db78f3eb03556977d1add)|true if Quantity_Optional has been set to a value|
|ERHAPI_InventorySelector|[InventorySelectorType_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a43c10b4f70841b48fdec3f81de3325f5)|The Inventory Selector Type. Determine how the Inventory is selected and quantity is modified.|
|bool|[InventorySelectorType_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afde2ba63a4fe363fd04030d691f53ea8)|true if InventorySelectorType_Optional has been set to a value|
|ERHAPI_InventoryOperation|[InventoryOperation_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a05d38a166aa71dceb816fcf5c3883655)|The Inventory Operation. Determine how the Loot quantity is modified based on the context it is fulfilled in. This also determines the order Loot will be fulfilled in when sort_order is the same.|
|bool|[InventoryOperation_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae432979fcb368180c320fe3a859b9fc8)|true if InventoryOperation_Optional has been set to a value|
|bool|[Active_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a54948ce1e603d2ab0bf23d1b77e90866)|Determines if the Loot is active. Inactive Loot will not be fulfilled.|
|bool|[Active_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aad1d01bf7a99966aa59f72495e840ec1)|true if Active_Optional has been set to a value|
|int32|[SortOrder_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab906a8714eb2296f6017caac3d06f088)|The sort order of the Loot. Lower sort order will be fulfilled first. Inventory Operation is used as a tie breaker when sort_order is the same.|
|bool|[SortOrder_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac2495f13e749de6982277aecf580171b)|true if SortOrder_Optional has been set to a value|
|int32|[DropWeight_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae52d49075f11b8b4a6cbe93634c4d141)|The drop weight of the Loot. Higher drop weight will be more likely to be fulfilled.|
|bool|[DropWeight_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac826cf7c16d679150786eef688b22702)|true if DropWeight_Optional has been set to a value|
|bool|[FillInNewOrder_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a7c8b3f3950233c904f9a0fa08fc1fa5d)|When dropped in a randomly sampled vendor, will this create a new order or fill inline?. The primary use case for this is when you want the same loot to be dropped multiple times in a randomly sampled vendor.|
|bool|[FillInNewOrder_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a88b56445963d45d4728243e1bf1308c4)|true if FillInNewOrder_Optional has been set to a value|
|bool|[AllowPartialBundles_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae8fcee9d99c567d50b57e143769a7bc8)|When dropped in a randomly sampled vendor, will the sub vendor allow dropping part of the the bundle? False means it will only drop if the entire sub vendor can be given to the player.|
|bool|[AllowPartialBundles_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad84758793e1dff016a53cc580fe15916)|true if AllowPartialBundles_Optional has been set to a value|
|int32|[RequiredItemId_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae088775af177f58b9bac7cdfe69b38ed)|Item required to be owned/rented to drop this Loot in a randomly sampled vendor.|
|bool|[RequiredItemId_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a47d9045f2c086ffa823850f5a02f0b60)|true if RequiredItemId_Optional has been set to a value|
|int32|[RequiredItemCount_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1abf8e2c11c8acf567243cec8c806b7a62)|Amount of the required_item_id to be owned/rented to drop this Loot in a randomly sampled vendor.|
|bool|[RequiredItemCount_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ada979daeddf09bd7b4b566aa9bf3df28)|true if RequiredItemCount_Optional has been set to a value|
|int32|[StackLimit_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a970fa609225d3c8af096f35f2d17cd9a)|Amount of owned/rented of this Loot's item that will prevent this Loot from dropping in a randomly sampled vendor.|
|bool|[StackLimit_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a00cb9abdbcd7404d7b093d3c0c8152f1)|true if StackLimit_Optional has been set to a value|
|int32|[UiHint_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab4d0035bf9df79460aa855ed965bc633)||
|bool|[UiHint_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a3a7fc556249776abb1bd0aec415a97d9)|true if UiHint_Optional has been set to a value|
|FDateTime|[EffectiveFrom_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a12465a1abc8d7ed119bf9f65ab3d33a2)||
|bool|[EffectiveFrom_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aaf2276f068ed4507f5ac347af87b49c3)|true if EffectiveFrom_Optional has been set to a value|
|ERHAPI_QuantityType|[QuantityType_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a8e89961081f18de1c004e987f27dcb8c)|Determines how the quantity is modified in the context it is fulfilled in.|
|bool|[QuantityType_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0d4fa18901b7c09f35f00642da594250)|true if QuantityType_Optional has been set to a value|
|int32|[QuantityMultInventoryItemId_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a06a811681044c08cfff63b71fcc1003c)|When fulfilling Loot if this is set the quantity will be multiplied by the quantity of this Item in the Player's Inventory.|
|bool|[QuantityMultInventoryItemId_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a564d2f00696631dab3416ab83691c8c7)|true if QuantityMultInventoryItemId_Optional has been set to a value|
|bool|[IsClaimableByClient_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a311ebbe8b318350f6bdea1992d3db086)|Determines if the Loot can be claimed by the client. This is dangerous without the correct loot confiuration as a client could claim Loot multiple times.|
|bool|[IsClaimableByClient_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afe049eb4ba6639b5ac75b652ef7c1059)|true if IsClaimableByClient_Optional has been set to a value|
|int32|[TimeFrameId_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af9803c09b5cca0b04f5cf8f299944e87)|The Time Frame ID. Optional Time Frame ID that will be used the expiration of Loot when it is fulfilled.|
|bool|[TimeFrameId_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1adcc16ccb1b5c1a2fc504ce5543504057)|true if TimeFrameId_Optional has been set to a value|
|ERHAPI_InventoryBucket|[UseInventoryBucket_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac130c02eb58b7c8d68b93889b81db06d)|Inventory Bucket to use for this Loot.|
|bool|[UseInventoryBucket_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a68f88c797ce9bb3516e1f19196a00424)|true if UseInventoryBucket_Optional has been set to a value|
|ERHAPI_XpQuantityTransform|[XpQuantityTransformType_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab7bd194e175ef8b245205e8e723d9532)|Allows treating quantity as additional levels to grant to the Player.|
|bool|[XpQuantityTransformType_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9d0c5c3838e45cd8f3311f0866b2141a)|true if XpQuantityTransformType_Optional has been set to a value|
|FString|[CurrentPricePointGuid_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a705277f1b2e48fd2b70cfb5cf984dd4d)|The current price point guid. Optional Price Point ID that will be used to determine the price of the Loot when it is fulfilled.|
|bool|[CurrentPricePointGuid_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a57d3d52962158cb7136a373762b5be5e)|true if CurrentPricePointGuid_Optional has been set to a value|
|FString|[PreSalePricePointGuid_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1abcf89f067a2db68ae1244e2d9507cf42)|The pre sale price point guid. Optional Price Point ID that will be used to show the previous price of the Loot.|
|bool|[PreSalePricePointGuid_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af34c049ed2551deb2dc219b61a8dfd4c)|true if PreSalePricePointGuid_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1acf3ab767cf43aebb4a1c5e9eaa5ed60d)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aafb036901a2d16ef1337d520d808ec6b)|true if CacheInfo_Optional has been set to a value|
|int32|[HardQuantityMaximum_Optional](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa6a8b8fcd71d2911a55ea28b6be66cde)|Hard cap on quantity of an item this Loot can give. Disabled with 0.|
|bool|[HardQuantityMaximum_IsSet](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a7d6fe172fee6cd5f1545379d64367c01)|true if HardQuantityMaximum_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a242a4296481c5fb420d714cd32fec3ad)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a06faa7738909f964886ad0e56d8da1ec)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0495d616eb651af6641ec2812b920f2e)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a6406b470cab476fcf1238cec9ecbdf9c)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae0a3ada990e150f805128840817f4e03)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a287c688a61e03a4822e3d7a1f0e42a49)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1affba9d4aa84ed10beddebd0a9a46deab)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a3e5752d789f2ed8704c69c4771f50b68)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1abb522fd63c1589b00b4ff33caf873946)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1acd2ed4c712d9bed9983240653df6e25e)()|Gets the value of LootId.|
|const int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a207349872f4c121f408f0fd02314ca89)()|Gets the value of LootId.|
|void|[SetLootId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a18c0f6d15e5dd757c726d65a95abc6a3)(int32 NewValue)|Sets the value of LootId.|
|bool|[IsLootIdDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac34d328155722dece2b3d333d8110e41)()|Returns true if LootId matches the default value.|
|void|[SetLootIdToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a5e2f6f21cf1b05ab3abd7bd1e0b30c87)()|Sets the value of LootId to its default|
|int32 &|[GetVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afc06e9641cadc5e4c548d2687de6339c)()|Gets the value of VendorId.|
|const int32 &|[GetVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1f6f1d4240d320453bd4609457a22569)()|Gets the value of VendorId.|
|void|[SetVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aba7abf2c233ddd25c049b5a21f485b6e)(int32 NewValue)|Sets the value of VendorId.|
|bool|[IsVendorIdDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a34294c3a7a9eba0d2be427e08546868c)()|Returns true if VendorId matches the default value.|
|void|[SetVendorIdToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a7ba740230264c05551800de8b9830745)()|Sets the value of VendorId to its default|
|int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1acbe340fce6f530fbce884bc9a4fa1766)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1cdf690a9d65f41ac2f903514b1f5f57)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a2fa583df5dafce861fe723c8450b93cc)(const int32 & DefaultValue)|Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af46204b226c63dbb8cdb2645fea6c50d)(int32 & OutValue)|Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad6c8e92b4cdecac859dd4fff238c5af8)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ada95a259f5df1434d12368e86546bb20)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4af92839c74362c6f2f887a70a0320b2)(int32 NewValue)|Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.|
|void|[ClearItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac)()|Clears the value of ItemId_Optional and sets ItemId_IsSet to false.|
|bool|[IsItemIdDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab1fb89c1cd120fbdccbad20b4f1058c9)()|Returns true if ItemId_Optional is set and matches the default value.|
|void|[SetItemIdToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a175257a1162b73e5e5897dc7ce9138de)()|Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.|
|[FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) &|[GetItem](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab6b9ab768d5f3f6787f199565b9f5276)()|Gets the value of Item_Optional, regardless of it having been set.|
|const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) &|[GetItem](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a055ddfc83937a90aa78b468fde6ba0ae)()|Gets the value of Item_Optional, regardless of it having been set.|
|const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) &|[GetItem](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae5d5dfe794234b8af9b212fdbf0ca1ff)(const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & DefaultValue)|Gets the value of Item_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItem](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a780c162ed85fa8ca7a9ad6895819166c)([FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & OutValue)|Fills OutValue with the value of Item_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) *|[GetItemOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af92d71a4932d1c847404aa86a673dbfc)()|Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) *|[GetItemOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad32395f6be68999b7517822060b100b6)()|Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItem](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a73ff925b5e85d57f72f4e12f2167d718)([FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) NewValue)|Sets the value of Item_Optional and also sets Item_IsSet to true.|
|void|[ClearItem](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8)()|Clears the value of Item_Optional and sets Item_IsSet to false.|
|int32 &|[GetSubVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a15a91fdfd7149929f1ee3b10ef2fc4fe)()|Gets the value of SubVendorId_Optional, regardless of it having been set.|
|const int32 &|[GetSubVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad6c05065e6d1cc723d0da0272e1f57ce)()|Gets the value of SubVendorId_Optional, regardless of it having been set.|
|const int32 &|[GetSubVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a73101b64e45e1926453dfe6b743f9f1c)(const int32 & DefaultValue)|Gets the value of SubVendorId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSubVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab6c9112b74f2cb0a103d65bb19897165)(int32 & OutValue)|Fills OutValue with the value of SubVendorId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetSubVendorIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0a6a3efe02e0991a98ed13e8c69b2992)()|Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetSubVendorIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0f1770874ce644d15d3354c3a9a99436)()|Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSubVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1abd0423b5f7bd4a9d7d17f8632f9e684a)(int32 NewValue)|Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true.|
|void|[ClearSubVendorId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058)()|Clears the value of SubVendorId_Optional and sets SubVendorId_IsSet to false.|
|bool|[IsSubVendorIdDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac0a741bcd286b2adccd25fe38f97983b)()|Returns true if SubVendorId_Optional is set and matches the default value.|
|void|[SetSubVendorIdToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afd50a2496a24d46fddc881f22eed4b02)()|Sets the value of SubVendorId_Optional to its default and also sets SubVendorId_IsSet to true.|
|int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae066065a51d0fb4abc472d85f9ddcc4b)()|Gets the value of Quantity_Optional, regardless of it having been set.|
|const int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a87646105d6db15b764841a20f4540bbb)()|Gets the value of Quantity_Optional, regardless of it having been set.|
|const int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ade46fe47ab6ded01d87ed716e4846bbc)(const int32 & DefaultValue)|Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetQuantity](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4ecfe9e6cf43b74396de5ca5366f058e)(int32 & OutValue)|Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetQuantityOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a093f82d870c44e5aeffe9ca34fcd8973)()|Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetQuantityOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af6ec07f3923ed815527802fa2048f093)()|Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetQuantity](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a39296ab17c155afc422c7aa9e780bcf7)(int32 NewValue)|Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.|
|void|[ClearQuantity](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51)()|Clears the value of Quantity_Optional and sets Quantity_IsSet to false.|
|bool|[IsQuantityDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a5e81fc2e46f491acafcf83ec9eb97c7f)()|Returns true if Quantity_Optional is set and matches the default value.|
|void|[SetQuantityToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a88fbbb95da4cab22777b629c403c4155)()|Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.|
|ERHAPI_InventorySelector &|[GetInventorySelectorType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa322e86131bd4530064572a111b6f43a)()|Gets the value of InventorySelectorType_Optional, regardless of it having been set.|
|const ERHAPI_InventorySelector &|[GetInventorySelectorType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa0ead34cef88232549e06e543b639955)()|Gets the value of InventorySelectorType_Optional, regardless of it having been set.|
|const ERHAPI_InventorySelector &|[GetInventorySelectorType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af4edd31cd9c5c22d40f1a3d8c108a4d5)(const ERHAPI_InventorySelector & DefaultValue)|Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInventorySelectorType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab13961c4e92163e6be9c25a5db91dcaf)(ERHAPI_InventorySelector & OutValue)|Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventorySelector *|[GetInventorySelectorTypeOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa7f8ffa074e9bd708594da02b10f29d8)()|Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventorySelector *|[GetInventorySelectorTypeOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a16a06acaebe82714beac25281b06816f)()|Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInventorySelectorType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4e8c9db874e65ac31e920a7fa2da62ae)(ERHAPI_InventorySelector NewValue)|Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.|
|void|[ClearInventorySelectorType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b)()|Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.|
|ERHAPI_InventoryOperation &|[GetInventoryOperation](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad7302341dbcffaff54d40249299cc812)()|Gets the value of InventoryOperation_Optional, regardless of it having been set.|
|const ERHAPI_InventoryOperation &|[GetInventoryOperation](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1f8266c7f24dd4d474446d96bec2eb5b)()|Gets the value of InventoryOperation_Optional, regardless of it having been set.|
|const ERHAPI_InventoryOperation &|[GetInventoryOperation](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a67e40cc05376283592441d4fde58cb0a)(const ERHAPI_InventoryOperation & DefaultValue)|Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInventoryOperation](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4afcfa7ae60e4c96381c5d97b563814c)(ERHAPI_InventoryOperation & OutValue)|Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryOperation *|[GetInventoryOperationOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a244d8d5d2ae0c7ca5a40250d7be190bf)()|Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryOperation *|[GetInventoryOperationOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a41a1ef51943307008202bdb908e6ac67)()|Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInventoryOperation](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a575445562782f377e6df5caabe489b3c)(ERHAPI_InventoryOperation NewValue)|Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.|
|void|[ClearInventoryOperation](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68)()|Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.|
|bool &|[GetActive](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aaa40a6889d2d480eeda7900dd5826c4c)()|Gets the value of Active_Optional, regardless of it having been set.|
|const bool &|[GetActive](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a3ff4c80bbc2b0d4f018ecf6681c6a27f)()|Gets the value of Active_Optional, regardless of it having been set.|
|const bool &|[GetActive](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a15d262ce19e2772650104738f4f62438)(const bool & DefaultValue)|Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetActive](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aba509de727c43ec1d964c4463432a858)(bool & OutValue)|Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetActiveOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a044a4d9031d518cfacb391a7afbb40e5)()|Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetActiveOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a79471305be90e930d1e41f929e9cd574)()|Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetActive](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a24956770a2651ca7a42e687185f107ca)(bool NewValue)|Sets the value of Active_Optional and also sets Active_IsSet to true.|
|void|[ClearActive](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8)()|Clears the value of Active_Optional and sets Active_IsSet to false.|
|bool|[IsActiveDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a21764f599b5c382557c5f5f3f4d42e20)()|Returns true if Active_Optional is set and matches the default value.|
|void|[SetActiveToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a99fdeb71b6776d8b69d964f1f6554e50)()|Sets the value of Active_Optional to its default and also sets Active_IsSet to true.|
|int32 &|[GetSortOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a5f12da47e4d500c12717aa05d5b3297d)()|Gets the value of SortOrder_Optional, regardless of it having been set.|
|const int32 &|[GetSortOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a5b6d3cb18b763ebe1aa4722ecf889add)()|Gets the value of SortOrder_Optional, regardless of it having been set.|
|const int32 &|[GetSortOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aff690307120cf4a6836a8922ab12f843)(const int32 & DefaultValue)|Gets the value of SortOrder_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSortOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9db9bb45bbd74194e41703dc40408045)(int32 & OutValue)|Fills OutValue with the value of SortOrder_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetSortOrderOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aea4875236320e7bb00410213c35ee7b7)()|Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetSortOrderOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a2e56e4d5aadeace2ecde18cf12bf2e87)()|Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSortOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab47b2699e8e365f3607b53fedf8a703a)(int32 NewValue)|Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true.|
|void|[ClearSortOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955)()|Clears the value of SortOrder_Optional and sets SortOrder_IsSet to false.|
|bool|[IsSortOrderDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a476d6b43e6c290f07c3879d9d18f0acb)()|Returns true if SortOrder_Optional is set and matches the default value.|
|void|[SetSortOrderToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a69397f89697497621e33a6ee1eb4f0a3)()|Sets the value of SortOrder_Optional to its default and also sets SortOrder_IsSet to true.|
|int32 &|[GetDropWeight](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a8a66c24b792f4f865e495d8f331dd701)()|Gets the value of DropWeight_Optional, regardless of it having been set.|
|const int32 &|[GetDropWeight](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1f9473f5b292c7545bb67f81be58de18)()|Gets the value of DropWeight_Optional, regardless of it having been set.|
|const int32 &|[GetDropWeight](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa2a1d678dd3b12eed0106b659e911351)(const int32 & DefaultValue)|Gets the value of DropWeight_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDropWeight](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a50ece77b36c63ce6bf2a1cb4e5d5160c)(int32 & OutValue)|Fills OutValue with the value of DropWeight_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetDropWeightOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a08c8342bc4a70ae819c65bb4e06a9b79)()|Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetDropWeightOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a6ab52a61886369f636297475d24f4272)()|Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDropWeight](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac16202c61d654326df7d982186b1e3c4)(int32 NewValue)|Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true.|
|void|[ClearDropWeight](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412)()|Clears the value of DropWeight_Optional and sets DropWeight_IsSet to false.|
|bool|[IsDropWeightDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac612f584a88113b0c0cd73ce5a3b7486)()|Returns true if DropWeight_Optional is set and matches the default value.|
|void|[SetDropWeightToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a6363ba8bb117c271097619b48a5cb685)()|Sets the value of DropWeight_Optional to its default and also sets DropWeight_IsSet to true.|
|bool &|[GetFillInNewOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab299812c7b635f1527c2ae7e4c99cf24)()|Gets the value of FillInNewOrder_Optional, regardless of it having been set.|
|const bool &|[GetFillInNewOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4ae0b3fb5690265834f3b2b1e0a4378f)()|Gets the value of FillInNewOrder_Optional, regardless of it having been set.|
|const bool &|[GetFillInNewOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1adf50f8a5d97b9bb692ab8f19e33329dc)(const bool & DefaultValue)|Gets the value of FillInNewOrder_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetFillInNewOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a558055c9e4b468bfe8c2961d325e3f2c)(bool & OutValue)|Fills OutValue with the value of FillInNewOrder_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetFillInNewOrderOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9aaf656c31f16b38f51a3f856e264618)()|Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetFillInNewOrderOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a768f50d9e9e71e99a4937e63b8550b91)()|Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetFillInNewOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a7d4fc77c178456471da3920fae5392c0)(bool NewValue)|Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true.|
|void|[ClearFillInNewOrder](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb)()|Clears the value of FillInNewOrder_Optional and sets FillInNewOrder_IsSet to false.|
|bool|[IsFillInNewOrderDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a096cd5304b7e6ce8e38e2ed23a2d9937)()|Returns true if FillInNewOrder_Optional is set and matches the default value.|
|void|[SetFillInNewOrderToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af49c135f5f8a2278cd294b0f856c69a0)()|Sets the value of FillInNewOrder_Optional to its default and also sets FillInNewOrder_IsSet to true.|
|bool &|[GetAllowPartialBundles](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1adab6cf0ce7e1dbb963bdc969b2f2e3a9)()|Gets the value of AllowPartialBundles_Optional, regardless of it having been set.|
|const bool &|[GetAllowPartialBundles](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a3cac3a73120c4908629b4340e674f621)()|Gets the value of AllowPartialBundles_Optional, regardless of it having been set.|
|const bool &|[GetAllowPartialBundles](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1adff71139123b6665d18212ee6f8a38b4)(const bool & DefaultValue)|Gets the value of AllowPartialBundles_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAllowPartialBundles](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae024296bd76a74c144f9a0b39b819ed8)(bool & OutValue)|Fills OutValue with the value of AllowPartialBundles_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAllowPartialBundlesOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a55f10e4a668b0406c3bc93574590eb20)()|Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAllowPartialBundlesOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1abb575ad6c241242566576d96291f48f3)()|Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAllowPartialBundles](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9a3d167314fc25f7f400249ace77688b)(bool NewValue)|Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true.|
|void|[ClearAllowPartialBundles](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95)()|Clears the value of AllowPartialBundles_Optional and sets AllowPartialBundles_IsSet to false.|
|bool|[IsAllowPartialBundlesDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a398d73cfc4df91f93783bc9f8134b731)()|Returns true if AllowPartialBundles_Optional is set and matches the default value.|
|void|[SetAllowPartialBundlesToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afa4e37c2b1cc8728c875d20c143de249)()|Sets the value of AllowPartialBundles_Optional to its default and also sets AllowPartialBundles_IsSet to true.|
|int32 &|[GetRequiredItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afce6e6ec62acd1bdec2f24240802866f)()|Gets the value of RequiredItemId_Optional, regardless of it having been set.|
|const int32 &|[GetRequiredItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a7ffe9fefbc8b5540aba6dace5757d6c0)()|Gets the value of RequiredItemId_Optional, regardless of it having been set.|
|const int32 &|[GetRequiredItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0cca1ce3c86675b86e8330e3dd2434b7)(const int32 & DefaultValue)|Gets the value of RequiredItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRequiredItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4dbb79c91f8fc5203268629701fbcb0a)(int32 & OutValue)|Fills OutValue with the value of RequiredItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetRequiredItemIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a7d8f4a28a17ae1ea37f03ef4dfa402ee)()|Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetRequiredItemIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aaac67f6d3eec9d808d76a8f6cd79d52d)()|Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRequiredItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a2fdcfaf5a33e2e5a7d441aa17592fd34)(int32 NewValue)|Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true.|
|void|[ClearRequiredItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181)()|Clears the value of RequiredItemId_Optional and sets RequiredItemId_IsSet to false.|
|bool|[IsRequiredItemIdDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac293dab8fa44d784dc6f80acbb030b9d)()|Returns true if RequiredItemId_Optional is set and matches the default value.|
|void|[SetRequiredItemIdToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae89159c7256c304f929c487a1d6668c3)()|Sets the value of RequiredItemId_Optional to its default and also sets RequiredItemId_IsSet to true.|
|int32 &|[GetRequiredItemCount](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aec8edb7083d53fcf1bff458a05f73701)()|Gets the value of RequiredItemCount_Optional, regardless of it having been set.|
|const int32 &|[GetRequiredItemCount](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afd7decfa1c4a8c1b91d2d0c53e20a736)()|Gets the value of RequiredItemCount_Optional, regardless of it having been set.|
|const int32 &|[GetRequiredItemCount](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1adabba1a845f2abd7c12409c078754949)(const int32 & DefaultValue)|Gets the value of RequiredItemCount_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRequiredItemCount](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a074bc7b7cfcfa02889b3e32e6b567875)(int32 & OutValue)|Fills OutValue with the value of RequiredItemCount_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetRequiredItemCountOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a29282708cff742aac906829d7853fa0f)()|Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetRequiredItemCountOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a7fbab9601e235ae232d7fa5b969d5bcc)()|Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRequiredItemCount](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afaf98b2ffd5b01e55e1a7689835d92fa)(int32 NewValue)|Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true.|
|void|[ClearRequiredItemCount](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd)()|Clears the value of RequiredItemCount_Optional and sets RequiredItemCount_IsSet to false.|
|bool|[IsRequiredItemCountDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab465a43f9dcfe5bbac7aeac109cb7c81)()|Returns true if RequiredItemCount_Optional is set and matches the default value.|
|void|[SetRequiredItemCountToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a98f2f8f4d019a7d4a7d58658c5061857)()|Sets the value of RequiredItemCount_Optional to its default and also sets RequiredItemCount_IsSet to true.|
|int32 &|[GetStackLimit](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab6d9334cf474f61dc7df2d5352779036)()|Gets the value of StackLimit_Optional, regardless of it having been set.|
|const int32 &|[GetStackLimit](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aef5cbdcaf9823c2b4a5fd4371ef2d7b8)()|Gets the value of StackLimit_Optional, regardless of it having been set.|
|const int32 &|[GetStackLimit](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a27ba66d86592d63164078b80e7525a9a)(const int32 & DefaultValue)|Gets the value of StackLimit_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStackLimit](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a01aed35350e799d59a51e5c735eb99b6)(int32 & OutValue)|Fills OutValue with the value of StackLimit_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetStackLimitOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4889eb3beed4e20a0ae3224173d75768)()|Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetStackLimitOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa1613a69c81312e5a10108a23fbb5f6d)()|Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStackLimit](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0bc52fb536085f72d57cc7aecb33337f)(int32 NewValue)|Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true.|
|void|[ClearStackLimit](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68)()|Clears the value of StackLimit_Optional and sets StackLimit_IsSet to false.|
|bool|[IsStackLimitDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4411301f594cf03ca1ac883fc5aa8092)()|Returns true if StackLimit_Optional is set and matches the default value.|
|void|[SetStackLimitToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a4178e812d7007b89cffdc5425bc70165)()|Sets the value of StackLimit_Optional to its default and also sets StackLimit_IsSet to true.|
|int32 &|[GetUiHint](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a3d1dff274c7f9da278a3d1248d563041)()|Gets the value of UiHint_Optional, regardless of it having been set.|
|const int32 &|[GetUiHint](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a66b92824e54a23766a326d941b7f247c)()|Gets the value of UiHint_Optional, regardless of it having been set.|
|const int32 &|[GetUiHint](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0a8945ca2fa76a27b3549db7e9fc58ab)(const int32 & DefaultValue)|Gets the value of UiHint_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetUiHint](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a978fe0b67180757bda7ac94bcd149a94)(int32 & OutValue)|Fills OutValue with the value of UiHint_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetUiHintOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab6e81003e702e2862e554205330b10b0)()|Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetUiHintOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a2bfee0b8eabaed982670ded34212795d)()|Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetUiHint](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a952fbaa81d68be6b5e03f14cfb32faa9)(int32 NewValue)|Sets the value of UiHint_Optional and also sets UiHint_IsSet to true.|
|void|[ClearUiHint](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666)()|Clears the value of UiHint_Optional and sets UiHint_IsSet to false.|
|bool|[IsUiHintDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a768434aca6d481543db42a6ba4ab04fb)()|Returns true if UiHint_Optional is set and matches the default value.|
|void|[SetUiHintToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa04866c631982d1d3fb998505c09f763)()|Sets the value of UiHint_Optional to its default and also sets UiHint_IsSet to true.|
|FDateTime &|[GetEffectiveFrom](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aee89d8de5f3ec4c4d02fcebe58ffe536)()|Gets the value of EffectiveFrom_Optional, regardless of it having been set.|
|const FDateTime &|[GetEffectiveFrom](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af1e0e5abfd28052cd1547cdeea002d45)()|Gets the value of EffectiveFrom_Optional, regardless of it having been set.|
|const FDateTime &|[GetEffectiveFrom](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1afd63a6a118a81067a8e746526476adb2)(const FDateTime & DefaultValue)|Gets the value of EffectiveFrom_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEffectiveFrom](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af51ee7d4f692fc48fa6281955948f0ef)(FDateTime & OutValue)|Fills OutValue with the value of EffectiveFrom_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetEffectiveFromOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1f2eb7316df3787d9135fcef3046d11e)()|Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetEffectiveFromOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a47c40fd04c127180dfcb148cd008593f)()|Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEffectiveFrom](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9f10f21fbb584f0bb85f49e714df8c73)(FDateTime NewValue)|Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true.|
|void|[ClearEffectiveFrom](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008)()|Clears the value of EffectiveFrom_Optional and sets EffectiveFrom_IsSet to false.|
|ERHAPI_QuantityType &|[GetQuantityType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac60f5021029d7495532f4e92256d2c1c)()|Gets the value of QuantityType_Optional, regardless of it having been set.|
|const ERHAPI_QuantityType &|[GetQuantityType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a52f893e2ba2b5efb550dc3d4219ae57c)()|Gets the value of QuantityType_Optional, regardless of it having been set.|
|const ERHAPI_QuantityType &|[GetQuantityType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a98bb97bded9f560574b06547ca11c68b)(const ERHAPI_QuantityType & DefaultValue)|Gets the value of QuantityType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetQuantityType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a06585bd89d8595f273d2561085036c7f)(ERHAPI_QuantityType & OutValue)|Fills OutValue with the value of QuantityType_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_QuantityType *|[GetQuantityTypeOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab04af33e8c4c0a23eb02e03fc03e3acd)()|Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_QuantityType *|[GetQuantityTypeOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af1b1fd9e5c187bae0192c0548c15ef26)()|Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetQuantityType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1117831c87af22af2588aed09ce98e5a)(ERHAPI_QuantityType NewValue)|Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true.|
|void|[ClearQuantityType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd)()|Clears the value of QuantityType_Optional and sets QuantityType_IsSet to false.|
|int32 &|[GetQuantityMultInventoryItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1abdb65cbbe843109fc780c5896e836d84)()|Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.|
|const int32 &|[GetQuantityMultInventoryItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a8407f742227106b6e18f2d68286e7f8b)()|Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.|
|const int32 &|[GetQuantityMultInventoryItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a5a93c513af4fb98079d1f4e8f8e48ef5)(const int32 & DefaultValue)|Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetQuantityMultInventoryItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a39ff579e93b70184c70016e8f8370f3d)(int32 & OutValue)|Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetQuantityMultInventoryItemIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae8af82ddb950d6e8ab30f1210d26fd57)()|Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetQuantityMultInventoryItemIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aef08112c1a56763c36d5e592d06901f3)()|Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetQuantityMultInventoryItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aaca93c71048ee7c5760210d4f3cf5b79)(int32 NewValue)|Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.|
|void|[ClearQuantityMultInventoryItemId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50)()|Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.|
|bool|[IsQuantityMultInventoryItemIdDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1c513bf258edd56413a96b8e4ca2f63d)()|Returns true if QuantityMultInventoryItemId_Optional is set and matches the default value.|
|void|[SetQuantityMultInventoryItemIdToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a480179232e881178aa0bae6eac822e72)()|Sets the value of QuantityMultInventoryItemId_Optional to its default and also sets QuantityMultInventoryItemId_IsSet to true.|
|bool &|[GetIsClaimableByClient](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a78b6c6b4774fab979e3ad6f8eb81949b)()|Gets the value of IsClaimableByClient_Optional, regardless of it having been set.|
|const bool &|[GetIsClaimableByClient](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a07b4aebdcd35fc8b7954ac84d3a47fde)()|Gets the value of IsClaimableByClient_Optional, regardless of it having been set.|
|const bool &|[GetIsClaimableByClient](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad7c1e53d67d82fdf3c2a45695da55930)(const bool & DefaultValue)|Gets the value of IsClaimableByClient_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetIsClaimableByClient](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae2cea6c0c8a4bde7087ab75ed5b0e10d)(bool & OutValue)|Fills OutValue with the value of IsClaimableByClient_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetIsClaimableByClientOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a2a12a87471302f579b421e3ad810080b)()|Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetIsClaimableByClientOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a66a594b011b922e023d0056aeed59a4b)()|Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetIsClaimableByClient](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aec4627b3108dae64c60cb3b50ad49241)(bool NewValue)|Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true.|
|void|[ClearIsClaimableByClient](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6)()|Clears the value of IsClaimableByClient_Optional and sets IsClaimableByClient_IsSet to false.|
|bool|[IsIsClaimableByClientDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9d2152f9ebbac480467ccf601a3fe673)()|Returns true if IsClaimableByClient_Optional is set and matches the default value.|
|void|[SetIsClaimableByClientToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a336c1ad23684075d60e7da97dca72e26)()|Sets the value of IsClaimableByClient_Optional to its default and also sets IsClaimableByClient_IsSet to true.|
|int32 &|[GetTimeFrameId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae8cb1df8ccb738ea8ce1ed44ead0ba12)()|Gets the value of TimeFrameId_Optional, regardless of it having been set.|
|const int32 &|[GetTimeFrameId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aab3c0ef8a61f14416bd328b690a05354)()|Gets the value of TimeFrameId_Optional, regardless of it having been set.|
|const int32 &|[GetTimeFrameId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a373844143f5d643286d9fa24a8a22f5a)(const int32 & DefaultValue)|Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTimeFrameId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa90943249db3ef3ec9b0a64d09c3e048)(int32 & OutValue)|Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetTimeFrameIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a18333ea3d1951ca2a8754049decc3dc7)()|Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetTimeFrameIdOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9cc0c0ba12e5bddd72309501ee667807)()|Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTimeFrameId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad5aa07b2d5574fd5bea4e1ec085627d7)(int32 NewValue)|Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.|
|void|[ClearTimeFrameId](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0)()|Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.|
|bool|[IsTimeFrameIdDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ab7ce5827e1a9a6f065f55fa958ea9dfe)()|Returns true if TimeFrameId_Optional is set and matches the default value.|
|void|[SetTimeFrameIdToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aaaf27b49e24ee23b0584f580d46d0e36)()|Sets the value of TimeFrameId_Optional to its default and also sets TimeFrameId_IsSet to true.|
|ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a3f4efa8c5d7eab831433c61eee98789f)()|Gets the value of UseInventoryBucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a158e18ae64ebfb2da85b638c6a0dd61d)()|Gets the value of UseInventoryBucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a9f4f7dc197733865c1ed143ec1cba51c)(const ERHAPI_InventoryBucket & DefaultValue)|Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa46c343b94bb7c9bc8d7c82ecdeb13e2)(ERHAPI_InventoryBucket & OutValue)|Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryBucket *|[GetUseInventoryBucketOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aff754e919618374602735eb3b0b9d57b)()|Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryBucket *|[GetUseInventoryBucketOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a97bb08ebed28d27c5e62732775dbc727)()|Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetUseInventoryBucket](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a87abed0a46f496629ad2b138e62c8b70)(ERHAPI_InventoryBucket NewValue)|Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.|
|void|[ClearUseInventoryBucket](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed)()|Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.|
|ERHAPI_XpQuantityTransform &|[GetXpQuantityTransformType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1ae16806e9cb8f3051903c5a55e4a986)()|Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.|
|const ERHAPI_XpQuantityTransform &|[GetXpQuantityTransformType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ac4f6778d5b2a41b175b1d69b7460bd85)()|Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.|
|const ERHAPI_XpQuantityTransform &|[GetXpQuantityTransformType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a30605e03961ef334f131fae77c39559a)(const ERHAPI_XpQuantityTransform & DefaultValue)|Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetXpQuantityTransformType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a75e8680087f9474f45dae8497cf61f86)(ERHAPI_XpQuantityTransform & OutValue)|Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_XpQuantityTransform *|[GetXpQuantityTransformTypeOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad73ddf32cad8f18aa0ccfdda0bf101f1)()|Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_XpQuantityTransform *|[GetXpQuantityTransformTypeOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a8a3cb2cc1fc5d253a7eb1d1168cbedb4)()|Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetXpQuantityTransformType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a57b9733c7869bd1eecf9fab24f6d4104)(ERHAPI_XpQuantityTransform NewValue)|Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.|
|void|[ClearXpQuantityTransformType](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da)()|Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.|
|FString &|[GetCurrentPricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a3b85b73e88cefbdde01435440a11076d)()|Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.|
|const FString &|[GetCurrentPricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a412f4764df6dfb5cee18e7fa883a1896)()|Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.|
|const FString &|[GetCurrentPricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a71bdcce58525f93601c85b385ce5141e)(const FString & DefaultValue)|Gets the value of CurrentPricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCurrentPricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1cdd271fa5085a0400483f9479cd3240)(FString & OutValue)|Fills OutValue with the value of CurrentPricePointGuid_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetCurrentPricePointGuidOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a2c4eb929baaaee872a3b88eb0b7ecd86)()|Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetCurrentPricePointGuidOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af7fc55fbbac53f0aa80ea2a149d4efd1)()|Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCurrentPricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1a9da553d93d53bfc2fa81ac6d489070)(FString NewValue)|Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true.|
|void|[ClearCurrentPricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e)()|Clears the value of CurrentPricePointGuid_Optional and sets CurrentPricePointGuid_IsSet to false.|
|FString &|[GetPreSalePricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa9d374bc62fd3b59b776a17b1834bc9f)()|Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.|
|const FString &|[GetPreSalePricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a791fe69ee647033dd38511bc3b11d3f0)()|Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.|
|const FString &|[GetPreSalePricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a8ee4701f8e546cef003f40836fb11e9f)(const FString & DefaultValue)|Gets the value of PreSalePricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPreSalePricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a566fb155c23cbc637cbfa1bf07bd59d5)(FString & OutValue)|Fills OutValue with the value of PreSalePricePointGuid_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPreSalePricePointGuidOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1affcacd5fafc0758c39e9196ecd95f56f)()|Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPreSalePricePointGuidOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a792dbbffbe29595646210c49c93b4c57)()|Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPreSalePricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad75446329a6cd63178df57c06b268277)(FString NewValue)|Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true.|
|void|[ClearPreSalePricePointGuid](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e)()|Clears the value of PreSalePricePointGuid_Optional and sets PreSalePricePointGuid_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1adac9909b3816a31768afbd01c129f76b)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a7168aeb8126ef8adb139410146ccf77e)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1acdf9b0a96fc3568814e93a938f79a57c)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a5cc085454f37806d9400e794b7d64ab5)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a97c1582a19ea5d336b44a8bbf3a7611c)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a59c09e2560aebb2bfc588102831cdc73)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ad535f49eefaa68050d429b0f0dbebd2b)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
|int32 &|[GetHardQuantityMaximum](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a22ad3a8f1b3ff1bb6b6444f74a6ac17a)()|Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.|
|const int32 &|[GetHardQuantityMaximum](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1af2c0aa49b89341a3b62b8a4a87402aa7)()|Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.|
|const int32 &|[GetHardQuantityMaximum](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aff89e7fdd36eddb551bdd11499f13da9)(const int32 & DefaultValue)|Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetHardQuantityMaximum](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a99f6530818176b2d7276082dba8de91a)(int32 & OutValue)|Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetHardQuantityMaximumOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1aa004b1374099fa67b9f31e6e18242fcf)()|Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetHardQuantityMaximumOrNull](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a41c1e6a38321871cbd2beef41f18c219)()|Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetHardQuantityMaximum](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1adfc8bce30a4d95c2471aabaae77045cb)(int32 NewValue)|Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.|
|void|[ClearHardQuantityMaximum](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df)()|Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.|
|bool|[IsHardQuantityMaximumDefaultValue](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1a1dcf73ab36076f3fe98df72496ac7ae1)()|Returns true if HardQuantityMaximum_Optional is set and matches the default value.|
|void|[SetHardQuantityMaximumToDefault](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot_1ae75d4313ecf4e431d50d1a6defb18831)()|Sets the value of HardQuantityMaximum_Optional to its default and also sets HardQuantityMaximum_IsSet to true.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__Loot_1a3ac4b8fa1534ddc987f9809a78b0f573"></a>

`TMap<FString, FString> FRHAPI_Loot::CustomData_Optional`

Custom data associated with the resource.




### `CustomData_IsSet` <a id="structFRHAPI__Loot_1ab5141af81d9f12541fa2a640cc9025d5"></a>

`bool FRHAPI_Loot::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `LootId` <a id="structFRHAPI__Loot_1a5f92839acf839d6c49b57b1cc66dba4f"></a>

`int32 FRHAPI_Loot::LootId`

The Loot ID.




### `VendorId` <a id="structFRHAPI__Loot_1aeebadf01967a63239b42fe6094e7a9c5"></a>

`int32 FRHAPI_Loot::VendorId`

The Vendor ID.




### `ItemId_Optional` <a id="structFRHAPI__Loot_1a8cd4e2427345b15dd5a3a12f5fdc7497"></a>

`int32 FRHAPI_Loot::ItemId_Optional`

The Item ID. Optional Item that will be granted to the player if Sub Vendor ID is not specified.




### `ItemId_IsSet` <a id="structFRHAPI__Loot_1ab203c9039289860b29222870d6c41689"></a>

`bool FRHAPI_Loot::ItemId_IsSet`

true if ItemId_Optional has been set to a value




### `Item_Optional` <a id="structFRHAPI__Loot_1a2465b63dbf01c76fa9cc736f7356d278"></a>

`FRHAPI_Item FRHAPI_Loot::Item_Optional`






### `Item_IsSet` <a id="structFRHAPI__Loot_1a5511b7f6472a4da05f937a4262f15843"></a>

`bool FRHAPI_Loot::Item_IsSet`

true if Item_Optional has been set to a value




### `SubVendorId_Optional` <a id="structFRHAPI__Loot_1a9869e1988c40476054db483a6b763e73"></a>

`int32 FRHAPI_Loot::SubVendorId_Optional`

The Sub Vendor ID. Optional Vendor ID that will be used to fulfill the Loot instead of granting the Item.




### `SubVendorId_IsSet` <a id="structFRHAPI__Loot_1a97e58634ed48e68a3eb038df38ede464"></a>

`bool FRHAPI_Loot::SubVendorId_IsSet`

true if SubVendorId_Optional has been set to a value




### `Quantity_Optional` <a id="structFRHAPI__Loot_1a507bf92cd6bc234afa66946931e806b9"></a>

`int32 FRHAPI_Loot::Quantity_Optional`

The quantity of the Item or Sub Vendor to fulfill. This will be multiplied by the quantity of fulfilled Loot and the parent Loot if quantity_type is relative.




### `Quantity_IsSet` <a id="structFRHAPI__Loot_1abb9332211b9db78f3eb03556977d1add"></a>

`bool FRHAPI_Loot::Quantity_IsSet`

true if Quantity_Optional has been set to a value




### `InventorySelectorType_Optional` <a id="structFRHAPI__Loot_1a43c10b4f70841b48fdec3f81de3325f5"></a>

`ERHAPI_InventorySelector FRHAPI_Loot::InventorySelectorType_Optional`

The Inventory Selector Type. Determine how the Inventory is selected and quantity is modified.




### `InventorySelectorType_IsSet` <a id="structFRHAPI__Loot_1afde2ba63a4fe363fd04030d691f53ea8"></a>

`bool FRHAPI_Loot::InventorySelectorType_IsSet`

true if InventorySelectorType_Optional has been set to a value




### `InventoryOperation_Optional` <a id="structFRHAPI__Loot_1a05d38a166aa71dceb816fcf5c3883655"></a>

`ERHAPI_InventoryOperation FRHAPI_Loot::InventoryOperation_Optional`

The Inventory Operation. Determine how the Loot quantity is modified based on the context it is fulfilled in. This also determines the order Loot will be fulfilled in when sort_order is the same.




### `InventoryOperation_IsSet` <a id="structFRHAPI__Loot_1ae432979fcb368180c320fe3a859b9fc8"></a>

`bool FRHAPI_Loot::InventoryOperation_IsSet`

true if InventoryOperation_Optional has been set to a value




### `Active_Optional` <a id="structFRHAPI__Loot_1a54948ce1e603d2ab0bf23d1b77e90866"></a>

`bool FRHAPI_Loot::Active_Optional`

Determines if the Loot is active. Inactive Loot will not be fulfilled.




### `Active_IsSet` <a id="structFRHAPI__Loot_1aad1d01bf7a99966aa59f72495e840ec1"></a>

`bool FRHAPI_Loot::Active_IsSet`

true if Active_Optional has been set to a value




### `SortOrder_Optional` <a id="structFRHAPI__Loot_1ab906a8714eb2296f6017caac3d06f088"></a>

`int32 FRHAPI_Loot::SortOrder_Optional`

The sort order of the Loot. Lower sort order will be fulfilled first. Inventory Operation is used as a tie breaker when sort_order is the same.




### `SortOrder_IsSet` <a id="structFRHAPI__Loot_1ac2495f13e749de6982277aecf580171b"></a>

`bool FRHAPI_Loot::SortOrder_IsSet`

true if SortOrder_Optional has been set to a value




### `DropWeight_Optional` <a id="structFRHAPI__Loot_1ae52d49075f11b8b4a6cbe93634c4d141"></a>

`int32 FRHAPI_Loot::DropWeight_Optional`

The drop weight of the Loot. Higher drop weight will be more likely to be fulfilled.




### `DropWeight_IsSet` <a id="structFRHAPI__Loot_1ac826cf7c16d679150786eef688b22702"></a>

`bool FRHAPI_Loot::DropWeight_IsSet`

true if DropWeight_Optional has been set to a value




### `FillInNewOrder_Optional` <a id="structFRHAPI__Loot_1a7c8b3f3950233c904f9a0fa08fc1fa5d"></a>

`bool FRHAPI_Loot::FillInNewOrder_Optional`

When dropped in a randomly sampled vendor, will this create a new order or fill inline?. The primary use case for this is when you want the same loot to be dropped multiple times in a randomly sampled vendor.




### `FillInNewOrder_IsSet` <a id="structFRHAPI__Loot_1a88b56445963d45d4728243e1bf1308c4"></a>

`bool FRHAPI_Loot::FillInNewOrder_IsSet`

true if FillInNewOrder_Optional has been set to a value




### `AllowPartialBundles_Optional` <a id="structFRHAPI__Loot_1ae8fcee9d99c567d50b57e143769a7bc8"></a>

`bool FRHAPI_Loot::AllowPartialBundles_Optional`

When dropped in a randomly sampled vendor, will the sub vendor allow dropping part of the the bundle? False means it will only drop if the entire sub vendor can be given to the player.




### `AllowPartialBundles_IsSet` <a id="structFRHAPI__Loot_1ad84758793e1dff016a53cc580fe15916"></a>

`bool FRHAPI_Loot::AllowPartialBundles_IsSet`

true if AllowPartialBundles_Optional has been set to a value




### `RequiredItemId_Optional` <a id="structFRHAPI__Loot_1ae088775af177f58b9bac7cdfe69b38ed"></a>

`int32 FRHAPI_Loot::RequiredItemId_Optional`

Item required to be owned/rented to drop this Loot in a randomly sampled vendor.




### `RequiredItemId_IsSet` <a id="structFRHAPI__Loot_1a47d9045f2c086ffa823850f5a02f0b60"></a>

`bool FRHAPI_Loot::RequiredItemId_IsSet`

true if RequiredItemId_Optional has been set to a value




### `RequiredItemCount_Optional` <a id="structFRHAPI__Loot_1abf8e2c11c8acf567243cec8c806b7a62"></a>

`int32 FRHAPI_Loot::RequiredItemCount_Optional`

Amount of the required_item_id to be owned/rented to drop this Loot in a randomly sampled vendor.




### `RequiredItemCount_IsSet` <a id="structFRHAPI__Loot_1ada979daeddf09bd7b4b566aa9bf3df28"></a>

`bool FRHAPI_Loot::RequiredItemCount_IsSet`

true if RequiredItemCount_Optional has been set to a value




### `StackLimit_Optional` <a id="structFRHAPI__Loot_1a970fa609225d3c8af096f35f2d17cd9a"></a>

`int32 FRHAPI_Loot::StackLimit_Optional`

Amount of owned/rented of this Loot's item that will prevent this Loot from dropping in a randomly sampled vendor.




### `StackLimit_IsSet` <a id="structFRHAPI__Loot_1a00cb9abdbcd7404d7b093d3c0c8152f1"></a>

`bool FRHAPI_Loot::StackLimit_IsSet`

true if StackLimit_Optional has been set to a value




### `UiHint_Optional` <a id="structFRHAPI__Loot_1ab4d0035bf9df79460aa855ed965bc633"></a>

`int32 FRHAPI_Loot::UiHint_Optional`






### `UiHint_IsSet` <a id="structFRHAPI__Loot_1a3a7fc556249776abb1bd0aec415a97d9"></a>

`bool FRHAPI_Loot::UiHint_IsSet`

true if UiHint_Optional has been set to a value




### `EffectiveFrom_Optional` <a id="structFRHAPI__Loot_1a12465a1abc8d7ed119bf9f65ab3d33a2"></a>

`FDateTime FRHAPI_Loot::EffectiveFrom_Optional`






### `EffectiveFrom_IsSet` <a id="structFRHAPI__Loot_1aaf2276f068ed4507f5ac347af87b49c3"></a>

`bool FRHAPI_Loot::EffectiveFrom_IsSet`

true if EffectiveFrom_Optional has been set to a value




### `QuantityType_Optional` <a id="structFRHAPI__Loot_1a8e89961081f18de1c004e987f27dcb8c"></a>

`ERHAPI_QuantityType FRHAPI_Loot::QuantityType_Optional`

Determines how the quantity is modified in the context it is fulfilled in.




### `QuantityType_IsSet` <a id="structFRHAPI__Loot_1a0d4fa18901b7c09f35f00642da594250"></a>

`bool FRHAPI_Loot::QuantityType_IsSet`

true if QuantityType_Optional has been set to a value




### `QuantityMultInventoryItemId_Optional` <a id="structFRHAPI__Loot_1a06a811681044c08cfff63b71fcc1003c"></a>

`int32 FRHAPI_Loot::QuantityMultInventoryItemId_Optional`

When fulfilling Loot if this is set the quantity will be multiplied by the quantity of this Item in the Player's Inventory.




### `QuantityMultInventoryItemId_IsSet` <a id="structFRHAPI__Loot_1a564d2f00696631dab3416ab83691c8c7"></a>

`bool FRHAPI_Loot::QuantityMultInventoryItemId_IsSet`

true if QuantityMultInventoryItemId_Optional has been set to a value




### `IsClaimableByClient_Optional` <a id="structFRHAPI__Loot_1a311ebbe8b318350f6bdea1992d3db086"></a>

`bool FRHAPI_Loot::IsClaimableByClient_Optional`

Determines if the Loot can be claimed by the client. This is dangerous without the correct loot confiuration as a client could claim Loot multiple times.




### `IsClaimableByClient_IsSet` <a id="structFRHAPI__Loot_1afe049eb4ba6639b5ac75b652ef7c1059"></a>

`bool FRHAPI_Loot::IsClaimableByClient_IsSet`

true if IsClaimableByClient_Optional has been set to a value




### `TimeFrameId_Optional` <a id="structFRHAPI__Loot_1af9803c09b5cca0b04f5cf8f299944e87"></a>

`int32 FRHAPI_Loot::TimeFrameId_Optional`

The Time Frame ID. Optional Time Frame ID that will be used the expiration of Loot when it is fulfilled.




### `TimeFrameId_IsSet` <a id="structFRHAPI__Loot_1adcc16ccb1b5c1a2fc504ce5543504057"></a>

`bool FRHAPI_Loot::TimeFrameId_IsSet`

true if TimeFrameId_Optional has been set to a value




### `UseInventoryBucket_Optional` <a id="structFRHAPI__Loot_1ac130c02eb58b7c8d68b93889b81db06d"></a>

`ERHAPI_InventoryBucket FRHAPI_Loot::UseInventoryBucket_Optional`

Inventory Bucket to use for this Loot.




### `UseInventoryBucket_IsSet` <a id="structFRHAPI__Loot_1a68f88c797ce9bb3516e1f19196a00424"></a>

`bool FRHAPI_Loot::UseInventoryBucket_IsSet`

true if UseInventoryBucket_Optional has been set to a value




### `XpQuantityTransformType_Optional` <a id="structFRHAPI__Loot_1ab7bd194e175ef8b245205e8e723d9532"></a>

`ERHAPI_XpQuantityTransform FRHAPI_Loot::XpQuantityTransformType_Optional`

Allows treating quantity as additional levels to grant to the Player.




### `XpQuantityTransformType_IsSet` <a id="structFRHAPI__Loot_1a9d0c5c3838e45cd8f3311f0866b2141a"></a>

`bool FRHAPI_Loot::XpQuantityTransformType_IsSet`

true if XpQuantityTransformType_Optional has been set to a value




### `CurrentPricePointGuid_Optional` <a id="structFRHAPI__Loot_1a705277f1b2e48fd2b70cfb5cf984dd4d"></a>

`FString FRHAPI_Loot::CurrentPricePointGuid_Optional`

The current price point guid. Optional Price Point ID that will be used to determine the price of the Loot when it is fulfilled.




### `CurrentPricePointGuid_IsSet` <a id="structFRHAPI__Loot_1a57d3d52962158cb7136a373762b5be5e"></a>

`bool FRHAPI_Loot::CurrentPricePointGuid_IsSet`

true if CurrentPricePointGuid_Optional has been set to a value




### `PreSalePricePointGuid_Optional` <a id="structFRHAPI__Loot_1abcf89f067a2db68ae1244e2d9507cf42"></a>

`FString FRHAPI_Loot::PreSalePricePointGuid_Optional`

The pre sale price point guid. Optional Price Point ID that will be used to show the previous price of the Loot.




### `PreSalePricePointGuid_IsSet` <a id="structFRHAPI__Loot_1af34c049ed2551deb2dc219b61a8dfd4c"></a>

`bool FRHAPI_Loot::PreSalePricePointGuid_IsSet`

true if PreSalePricePointGuid_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__Loot_1acf3ab767cf43aebb4a1c5e9eaa5ed60d"></a>

`FRHAPI_CacheInfo FRHAPI_Loot::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__Loot_1aafb036901a2d16ef1337d520d808ec6b"></a>

`bool FRHAPI_Loot::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value




### `HardQuantityMaximum_Optional` <a id="structFRHAPI__Loot_1aa6a8b8fcd71d2911a55ea28b6be66cde"></a>

`int32 FRHAPI_Loot::HardQuantityMaximum_Optional`

Hard cap on quantity of an item this Loot can give. Disabled with 0.




### `HardQuantityMaximum_IsSet` <a id="structFRHAPI__Loot_1a7d6fe172fee6cd5f1545379d64367c01"></a>

`bool FRHAPI_Loot::HardQuantityMaximum_IsSet`

true if HardQuantityMaximum_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Loot_1a242a4296481c5fb420d714cd32fec3ad"></a>

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



### `WriteJson` <a id="structFRHAPI__Loot_1a06faa7738909f964886ad0e56d8da1ec"></a>

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



### `GetCustomData` <a id="structFRHAPI__Loot_1a0495d616eb651af6641ec2812b920f2e"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Loot_1a6406b470cab476fcf1238cec9ecbdf9c"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Loot_1ae0a3ada990e150f805128840817f4e03"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__Loot_1a287c688a61e03a4822e3d7a1f0e42a49"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__Loot_1affba9d4aa84ed10beddebd0a9a46deab"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__Loot_1a3e5752d789f2ed8704c69c4771f50b68"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__Loot_1abb522fd63c1589b00b4ff33caf873946"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetLootId` <a id="structFRHAPI__Loot_1acd2ed4c712d9bed9983240653df6e25e"></a>

int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LootId.




### `GetLootId` <a id="structFRHAPI__Loot_1a207349872f4c121f408f0fd02314ca89"></a>

const int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LootId.




### `SetLootId` <a id="structFRHAPI__Loot_1a18c0f6d15e5dd757c726d65a95abc6a3"></a>

void SetLootId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LootId.




### `IsLootIdDefaultValue` <a id="structFRHAPI__Loot_1ac34d328155722dece2b3d333d8110e41"></a>

bool IsLootIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LootId matches the default value.




### `SetLootIdToDefault` <a id="structFRHAPI__Loot_1a5e2f6f21cf1b05ab3abd7bd1e0b30c87"></a>

void SetLootIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LootId to its default




### `GetVendorId` <a id="structFRHAPI__Loot_1afc06e9641cadc5e4c548d2687de6339c"></a>

int32 & GetVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorId.




### `GetVendorId` <a id="structFRHAPI__Loot_1a1f6f1d4240d320453bd4609457a22569"></a>

const int32 & GetVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorId.




### `SetVendorId` <a id="structFRHAPI__Loot_1aba7abf2c233ddd25c049b5a21f485b6e"></a>

void SetVendorId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of VendorId.




### `IsVendorIdDefaultValue` <a id="structFRHAPI__Loot_1a34294c3a7a9eba0d2be427e08546868c"></a>

bool IsVendorIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if VendorId matches the default value.




### `SetVendorIdToDefault` <a id="structFRHAPI__Loot_1a7ba740230264c05551800de8b9830745"></a>

void SetVendorIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of VendorId to its default




### `GetItemId` <a id="structFRHAPI__Loot_1acbe340fce6f530fbce884bc9a4fa1766"></a>

int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__Loot_1a1cdf690a9d65f41ac2f903514b1f5f57"></a>

const int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__Loot_1a2fa583df5dafce861fe723c8450b93cc"></a>

const int32 & GetItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItemId` <a id="structFRHAPI__Loot_1af46204b226c63dbb8cdb2645fea6c50d"></a>

bool GetItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetItemIdOrNull` <a id="structFRHAPI__Loot_1ad6c8e92b4cdecac859dd4fff238c5af8"></a>

int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetItemIdOrNull` <a id="structFRHAPI__Loot_1ada95a259f5df1434d12368e86546bb20"></a>

const int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetItemId` <a id="structFRHAPI__Loot_1a4af92839c74362c6f2f887a70a0320b2"></a>

void SetItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.




### `ClearItemId` <a id="structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac"></a>

void ClearItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.




### `IsItemIdDefaultValue` <a id="structFRHAPI__Loot_1ab1fb89c1cd120fbdccbad20b4f1058c9"></a>

bool IsItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ItemId_Optional is set and matches the default value.




### `SetItemIdToDefault` <a id="structFRHAPI__Loot_1a175257a1162b73e5e5897dc7ce9138de"></a>

void SetItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.




### `GetItem` <a id="structFRHAPI__Loot_1ab6b9ab768d5f3f6787f199565b9f5276"></a>

[FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & GetItem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Item_Optional, regardless of it having been set.




### `GetItem` <a id="structFRHAPI__Loot_1a055ddfc83937a90aa78b468fde6ba0ae"></a>

const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & GetItem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Item_Optional, regardless of it having been set.




### `GetItem` <a id="structFRHAPI__Loot_1ae5d5dfe794234b8af9b212fdbf0ca1ff"></a>

const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & GetItem(const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) &|DefaultValue|

#### Description

Gets the value of Item_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItem` <a id="structFRHAPI__Loot_1a780c162ed85fa8ca7a9ad6895819166c"></a>

bool GetItem([FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) &|OutValue|

#### Description

Fills OutValue with the value of Item_Optional and returns true if it has been set, otherwise returns false.




### `GetItemOrNull` <a id="structFRHAPI__Loot_1af92d71a4932d1c847404aa86a673dbfc"></a>

[FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) * GetItemOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.




### `GetItemOrNull` <a id="structFRHAPI__Loot_1ad32395f6be68999b7517822060b100b6"></a>

const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) * GetItemOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.




### `SetItem` <a id="structFRHAPI__Loot_1a73ff925b5e85d57f72f4e12f2167d718"></a>

void SetItem([FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item)|NewValue|

#### Description

Sets the value of Item_Optional and also sets Item_IsSet to true.




### `ClearItem` <a id="structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8"></a>

void ClearItem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Item_Optional and sets Item_IsSet to false.




### `GetSubVendorId` <a id="structFRHAPI__Loot_1a15a91fdfd7149929f1ee3b10ef2fc4fe"></a>

int32 & GetSubVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SubVendorId_Optional, regardless of it having been set.




### `GetSubVendorId` <a id="structFRHAPI__Loot_1ad6c05065e6d1cc723d0da0272e1f57ce"></a>

const int32 & GetSubVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SubVendorId_Optional, regardless of it having been set.




### `GetSubVendorId` <a id="structFRHAPI__Loot_1a73101b64e45e1926453dfe6b743f9f1c"></a>

const int32 & GetSubVendorId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of SubVendorId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSubVendorId` <a id="structFRHAPI__Loot_1ab6c9112b74f2cb0a103d65bb19897165"></a>

bool GetSubVendorId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of SubVendorId_Optional and returns true if it has been set, otherwise returns false.




### `GetSubVendorIdOrNull` <a id="structFRHAPI__Loot_1a0a6a3efe02e0991a98ed13e8c69b2992"></a>

int32 * GetSubVendorIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.




### `GetSubVendorIdOrNull` <a id="structFRHAPI__Loot_1a0f1770874ce644d15d3354c3a9a99436"></a>

const int32 * GetSubVendorIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.




### `SetSubVendorId` <a id="structFRHAPI__Loot_1abd0423b5f7bd4a9d7d17f8632f9e684a"></a>

void SetSubVendorId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true.




### `ClearSubVendorId` <a id="structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058"></a>

void ClearSubVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SubVendorId_Optional and sets SubVendorId_IsSet to false.




### `IsSubVendorIdDefaultValue` <a id="structFRHAPI__Loot_1ac0a741bcd286b2adccd25fe38f97983b"></a>

bool IsSubVendorIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SubVendorId_Optional is set and matches the default value.




### `SetSubVendorIdToDefault` <a id="structFRHAPI__Loot_1afd50a2496a24d46fddc881f22eed4b02"></a>

void SetSubVendorIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SubVendorId_Optional to its default and also sets SubVendorId_IsSet to true.




### `GetQuantity` <a id="structFRHAPI__Loot_1ae066065a51d0fb4abc472d85f9ddcc4b"></a>

int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity_Optional, regardless of it having been set.




### `GetQuantity` <a id="structFRHAPI__Loot_1a87646105d6db15b764841a20f4540bbb"></a>

const int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity_Optional, regardless of it having been set.




### `GetQuantity` <a id="structFRHAPI__Loot_1ade46fe47ab6ded01d87ed716e4846bbc"></a>

const int32 & GetQuantity(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetQuantity` <a id="structFRHAPI__Loot_1a4ecfe9e6cf43b74396de5ca5366f058e"></a>

bool GetQuantity(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.




### `GetQuantityOrNull` <a id="structFRHAPI__Loot_1a093f82d870c44e5aeffe9ca34fcd8973"></a>

int32 * GetQuantityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.




### `GetQuantityOrNull` <a id="structFRHAPI__Loot_1af6ec07f3923ed815527802fa2048f093"></a>

const int32 * GetQuantityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.




### `SetQuantity` <a id="structFRHAPI__Loot_1a39296ab17c155afc422c7aa9e780bcf7"></a>

void SetQuantity(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.




### `ClearQuantity` <a id="structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51"></a>

void ClearQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.




### `IsQuantityDefaultValue` <a id="structFRHAPI__Loot_1a5e81fc2e46f491acafcf83ec9eb97c7f"></a>

bool IsQuantityDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Quantity_Optional is set and matches the default value.




### `SetQuantityToDefault` <a id="structFRHAPI__Loot_1a88fbbb95da4cab22777b629c403c4155"></a>

void SetQuantityToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.




### `GetInventorySelectorType` <a id="structFRHAPI__Loot_1aa322e86131bd4530064572a111b6f43a"></a>

ERHAPI_InventorySelector & GetInventorySelectorType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventorySelectorType_Optional, regardless of it having been set.




### `GetInventorySelectorType` <a id="structFRHAPI__Loot_1aa0ead34cef88232549e06e543b639955"></a>

const ERHAPI_InventorySelector & GetInventorySelectorType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventorySelectorType_Optional, regardless of it having been set.




### `GetInventorySelectorType` <a id="structFRHAPI__Loot_1af4edd31cd9c5c22d40f1a3d8c108a4d5"></a>

const ERHAPI_InventorySelector & GetInventorySelectorType(const ERHAPI_InventorySelector & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventorySelector &|DefaultValue|

#### Description

Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInventorySelectorType` <a id="structFRHAPI__Loot_1ab13961c4e92163e6be9c25a5db91dcaf"></a>

bool GetInventorySelectorType(ERHAPI_InventorySelector & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventorySelector &|OutValue|

#### Description

Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.




### `GetInventorySelectorTypeOrNull` <a id="structFRHAPI__Loot_1aa7f8ffa074e9bd708594da02b10f29d8"></a>

ERHAPI_InventorySelector * GetInventorySelectorTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.




### `GetInventorySelectorTypeOrNull` <a id="structFRHAPI__Loot_1a16a06acaebe82714beac25281b06816f"></a>

const ERHAPI_InventorySelector * GetInventorySelectorTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.




### `SetInventorySelectorType` <a id="structFRHAPI__Loot_1a4e8c9db874e65ac31e920a7fa2da62ae"></a>

void SetInventorySelectorType(ERHAPI_InventorySelector NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventorySelector|NewValue|

#### Description

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.




### `ClearInventorySelectorType` <a id="structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b"></a>

void ClearInventorySelectorType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.




### `GetInventoryOperation` <a id="structFRHAPI__Loot_1ad7302341dbcffaff54d40249299cc812"></a>

ERHAPI_InventoryOperation & GetInventoryOperation()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryOperation_Optional, regardless of it having been set.




### `GetInventoryOperation` <a id="structFRHAPI__Loot_1a1f8266c7f24dd4d474446d96bec2eb5b"></a>

const ERHAPI_InventoryOperation & GetInventoryOperation()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryOperation_Optional, regardless of it having been set.




### `GetInventoryOperation` <a id="structFRHAPI__Loot_1a67e40cc05376283592441d4fde58cb0a"></a>

const ERHAPI_InventoryOperation & GetInventoryOperation(const ERHAPI_InventoryOperation & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryOperation &|DefaultValue|

#### Description

Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInventoryOperation` <a id="structFRHAPI__Loot_1a4afcfa7ae60e4c96381c5d97b563814c"></a>

bool GetInventoryOperation(ERHAPI_InventoryOperation & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryOperation &|OutValue|

#### Description

Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.




### `GetInventoryOperationOrNull` <a id="structFRHAPI__Loot_1a244d8d5d2ae0c7ca5a40250d7be190bf"></a>

ERHAPI_InventoryOperation * GetInventoryOperationOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.




### `GetInventoryOperationOrNull` <a id="structFRHAPI__Loot_1a41a1ef51943307008202bdb908e6ac67"></a>

const ERHAPI_InventoryOperation * GetInventoryOperationOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.




### `SetInventoryOperation` <a id="structFRHAPI__Loot_1a575445562782f377e6df5caabe489b3c"></a>

void SetInventoryOperation(ERHAPI_InventoryOperation NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryOperation|NewValue|

#### Description

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.




### `ClearInventoryOperation` <a id="structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68"></a>

void ClearInventoryOperation()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.




### `GetActive` <a id="structFRHAPI__Loot_1aaa40a6889d2d480eeda7900dd5826c4c"></a>

bool & GetActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Active_Optional, regardless of it having been set.




### `GetActive` <a id="structFRHAPI__Loot_1a3ff4c80bbc2b0d4f018ecf6681c6a27f"></a>

const bool & GetActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Active_Optional, regardless of it having been set.




### `GetActive` <a id="structFRHAPI__Loot_1a15d262ce19e2772650104738f4f62438"></a>

const bool & GetActive(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetActive` <a id="structFRHAPI__Loot_1aba509de727c43ec1d964c4463432a858"></a>

bool GetActive(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.




### `GetActiveOrNull` <a id="structFRHAPI__Loot_1a044a4d9031d518cfacb391a7afbb40e5"></a>

bool * GetActiveOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.




### `GetActiveOrNull` <a id="structFRHAPI__Loot_1a79471305be90e930d1e41f929e9cd574"></a>

const bool * GetActiveOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.




### `SetActive` <a id="structFRHAPI__Loot_1a24956770a2651ca7a42e687185f107ca"></a>

void SetActive(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Active_Optional and also sets Active_IsSet to true.




### `ClearActive` <a id="structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8"></a>

void ClearActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Active_Optional and sets Active_IsSet to false.




### `IsActiveDefaultValue` <a id="structFRHAPI__Loot_1a21764f599b5c382557c5f5f3f4d42e20"></a>

bool IsActiveDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Active_Optional is set and matches the default value.




### `SetActiveToDefault` <a id="structFRHAPI__Loot_1a99fdeb71b6776d8b69d964f1f6554e50"></a>

void SetActiveToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Active_Optional to its default and also sets Active_IsSet to true.




### `GetSortOrder` <a id="structFRHAPI__Loot_1a5f12da47e4d500c12717aa05d5b3297d"></a>

int32 & GetSortOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SortOrder_Optional, regardless of it having been set.




### `GetSortOrder` <a id="structFRHAPI__Loot_1a5b6d3cb18b763ebe1aa4722ecf889add"></a>

const int32 & GetSortOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SortOrder_Optional, regardless of it having been set.




### `GetSortOrder` <a id="structFRHAPI__Loot_1aff690307120cf4a6836a8922ab12f843"></a>

const int32 & GetSortOrder(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of SortOrder_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSortOrder` <a id="structFRHAPI__Loot_1a9db9bb45bbd74194e41703dc40408045"></a>

bool GetSortOrder(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of SortOrder_Optional and returns true if it has been set, otherwise returns false.




### `GetSortOrderOrNull` <a id="structFRHAPI__Loot_1aea4875236320e7bb00410213c35ee7b7"></a>

int32 * GetSortOrderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.




### `GetSortOrderOrNull` <a id="structFRHAPI__Loot_1a2e56e4d5aadeace2ecde18cf12bf2e87"></a>

const int32 * GetSortOrderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.




### `SetSortOrder` <a id="structFRHAPI__Loot_1ab47b2699e8e365f3607b53fedf8a703a"></a>

void SetSortOrder(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true.




### `ClearSortOrder` <a id="structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955"></a>

void ClearSortOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SortOrder_Optional and sets SortOrder_IsSet to false.




### `IsSortOrderDefaultValue` <a id="structFRHAPI__Loot_1a476d6b43e6c290f07c3879d9d18f0acb"></a>

bool IsSortOrderDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SortOrder_Optional is set and matches the default value.




### `SetSortOrderToDefault` <a id="structFRHAPI__Loot_1a69397f89697497621e33a6ee1eb4f0a3"></a>

void SetSortOrderToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SortOrder_Optional to its default and also sets SortOrder_IsSet to true.




### `GetDropWeight` <a id="structFRHAPI__Loot_1a8a66c24b792f4f865e495d8f331dd701"></a>

int32 & GetDropWeight()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DropWeight_Optional, regardless of it having been set.




### `GetDropWeight` <a id="structFRHAPI__Loot_1a1f9473f5b292c7545bb67f81be58de18"></a>

const int32 & GetDropWeight()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DropWeight_Optional, regardless of it having been set.




### `GetDropWeight` <a id="structFRHAPI__Loot_1aa2a1d678dd3b12eed0106b659e911351"></a>

const int32 & GetDropWeight(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of DropWeight_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDropWeight` <a id="structFRHAPI__Loot_1a50ece77b36c63ce6bf2a1cb4e5d5160c"></a>

bool GetDropWeight(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of DropWeight_Optional and returns true if it has been set, otherwise returns false.




### `GetDropWeightOrNull` <a id="structFRHAPI__Loot_1a08c8342bc4a70ae819c65bb4e06a9b79"></a>

int32 * GetDropWeightOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.




### `GetDropWeightOrNull` <a id="structFRHAPI__Loot_1a6ab52a61886369f636297475d24f4272"></a>

const int32 * GetDropWeightOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.




### `SetDropWeight` <a id="structFRHAPI__Loot_1ac16202c61d654326df7d982186b1e3c4"></a>

void SetDropWeight(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true.




### `ClearDropWeight` <a id="structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412"></a>

void ClearDropWeight()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DropWeight_Optional and sets DropWeight_IsSet to false.




### `IsDropWeightDefaultValue` <a id="structFRHAPI__Loot_1ac612f584a88113b0c0cd73ce5a3b7486"></a>

bool IsDropWeightDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if DropWeight_Optional is set and matches the default value.




### `SetDropWeightToDefault` <a id="structFRHAPI__Loot_1a6363ba8bb117c271097619b48a5cb685"></a>

void SetDropWeightToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of DropWeight_Optional to its default and also sets DropWeight_IsSet to true.




### `GetFillInNewOrder` <a id="structFRHAPI__Loot_1ab299812c7b635f1527c2ae7e4c99cf24"></a>

bool & GetFillInNewOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FillInNewOrder_Optional, regardless of it having been set.




### `GetFillInNewOrder` <a id="structFRHAPI__Loot_1a4ae0b3fb5690265834f3b2b1e0a4378f"></a>

const bool & GetFillInNewOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of FillInNewOrder_Optional, regardless of it having been set.




### `GetFillInNewOrder` <a id="structFRHAPI__Loot_1adf50f8a5d97b9bb692ab8f19e33329dc"></a>

const bool & GetFillInNewOrder(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of FillInNewOrder_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetFillInNewOrder` <a id="structFRHAPI__Loot_1a558055c9e4b468bfe8c2961d325e3f2c"></a>

bool GetFillInNewOrder(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of FillInNewOrder_Optional and returns true if it has been set, otherwise returns false.




### `GetFillInNewOrderOrNull` <a id="structFRHAPI__Loot_1a9aaf656c31f16b38f51a3f856e264618"></a>

bool * GetFillInNewOrderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.




### `GetFillInNewOrderOrNull` <a id="structFRHAPI__Loot_1a768f50d9e9e71e99a4937e63b8550b91"></a>

const bool * GetFillInNewOrderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.




### `SetFillInNewOrder` <a id="structFRHAPI__Loot_1a7d4fc77c178456471da3920fae5392c0"></a>

void SetFillInNewOrder(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true.




### `ClearFillInNewOrder` <a id="structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb"></a>

void ClearFillInNewOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of FillInNewOrder_Optional and sets FillInNewOrder_IsSet to false.




### `IsFillInNewOrderDefaultValue` <a id="structFRHAPI__Loot_1a096cd5304b7e6ce8e38e2ed23a2d9937"></a>

bool IsFillInNewOrderDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if FillInNewOrder_Optional is set and matches the default value.




### `SetFillInNewOrderToDefault` <a id="structFRHAPI__Loot_1af49c135f5f8a2278cd294b0f856c69a0"></a>

void SetFillInNewOrderToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of FillInNewOrder_Optional to its default and also sets FillInNewOrder_IsSet to true.




### `GetAllowPartialBundles` <a id="structFRHAPI__Loot_1adab6cf0ce7e1dbb963bdc969b2f2e3a9"></a>

bool & GetAllowPartialBundles()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AllowPartialBundles_Optional, regardless of it having been set.




### `GetAllowPartialBundles` <a id="structFRHAPI__Loot_1a3cac3a73120c4908629b4340e674f621"></a>

const bool & GetAllowPartialBundles()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AllowPartialBundles_Optional, regardless of it having been set.




### `GetAllowPartialBundles` <a id="structFRHAPI__Loot_1adff71139123b6665d18212ee6f8a38b4"></a>

const bool & GetAllowPartialBundles(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AllowPartialBundles_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAllowPartialBundles` <a id="structFRHAPI__Loot_1ae024296bd76a74c144f9a0b39b819ed8"></a>

bool GetAllowPartialBundles(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AllowPartialBundles_Optional and returns true if it has been set, otherwise returns false.




### `GetAllowPartialBundlesOrNull` <a id="structFRHAPI__Loot_1a55f10e4a668b0406c3bc93574590eb20"></a>

bool * GetAllowPartialBundlesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.




### `GetAllowPartialBundlesOrNull` <a id="structFRHAPI__Loot_1abb575ad6c241242566576d96291f48f3"></a>

const bool * GetAllowPartialBundlesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.




### `SetAllowPartialBundles` <a id="structFRHAPI__Loot_1a9a3d167314fc25f7f400249ace77688b"></a>

void SetAllowPartialBundles(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true.




### `ClearAllowPartialBundles` <a id="structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95"></a>

void ClearAllowPartialBundles()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AllowPartialBundles_Optional and sets AllowPartialBundles_IsSet to false.




### `IsAllowPartialBundlesDefaultValue` <a id="structFRHAPI__Loot_1a398d73cfc4df91f93783bc9f8134b731"></a>

bool IsAllowPartialBundlesDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AllowPartialBundles_Optional is set and matches the default value.




### `SetAllowPartialBundlesToDefault` <a id="structFRHAPI__Loot_1afa4e37c2b1cc8728c875d20c143de249"></a>

void SetAllowPartialBundlesToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AllowPartialBundles_Optional to its default and also sets AllowPartialBundles_IsSet to true.




### `GetRequiredItemId` <a id="structFRHAPI__Loot_1afce6e6ec62acd1bdec2f24240802866f"></a>

int32 & GetRequiredItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequiredItemId_Optional, regardless of it having been set.




### `GetRequiredItemId` <a id="structFRHAPI__Loot_1a7ffe9fefbc8b5540aba6dace5757d6c0"></a>

const int32 & GetRequiredItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequiredItemId_Optional, regardless of it having been set.




### `GetRequiredItemId` <a id="structFRHAPI__Loot_1a0cca1ce3c86675b86e8330e3dd2434b7"></a>

const int32 & GetRequiredItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of RequiredItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRequiredItemId` <a id="structFRHAPI__Loot_1a4dbb79c91f8fc5203268629701fbcb0a"></a>

bool GetRequiredItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of RequiredItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetRequiredItemIdOrNull` <a id="structFRHAPI__Loot_1a7d8f4a28a17ae1ea37f03ef4dfa402ee"></a>

int32 * GetRequiredItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetRequiredItemIdOrNull` <a id="structFRHAPI__Loot_1aaac67f6d3eec9d808d76a8f6cd79d52d"></a>

const int32 * GetRequiredItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetRequiredItemId` <a id="structFRHAPI__Loot_1a2fdcfaf5a33e2e5a7d441aa17592fd34"></a>

void SetRequiredItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true.




### `ClearRequiredItemId` <a id="structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181"></a>

void ClearRequiredItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RequiredItemId_Optional and sets RequiredItemId_IsSet to false.




### `IsRequiredItemIdDefaultValue` <a id="structFRHAPI__Loot_1ac293dab8fa44d784dc6f80acbb030b9d"></a>

bool IsRequiredItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if RequiredItemId_Optional is set and matches the default value.




### `SetRequiredItemIdToDefault` <a id="structFRHAPI__Loot_1ae89159c7256c304f929c487a1d6668c3"></a>

void SetRequiredItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of RequiredItemId_Optional to its default and also sets RequiredItemId_IsSet to true.




### `GetRequiredItemCount` <a id="structFRHAPI__Loot_1aec8edb7083d53fcf1bff458a05f73701"></a>

int32 & GetRequiredItemCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequiredItemCount_Optional, regardless of it having been set.




### `GetRequiredItemCount` <a id="structFRHAPI__Loot_1afd7decfa1c4a8c1b91d2d0c53e20a736"></a>

const int32 & GetRequiredItemCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequiredItemCount_Optional, regardless of it having been set.




### `GetRequiredItemCount` <a id="structFRHAPI__Loot_1adabba1a845f2abd7c12409c078754949"></a>

const int32 & GetRequiredItemCount(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of RequiredItemCount_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRequiredItemCount` <a id="structFRHAPI__Loot_1a074bc7b7cfcfa02889b3e32e6b567875"></a>

bool GetRequiredItemCount(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of RequiredItemCount_Optional and returns true if it has been set, otherwise returns false.




### `GetRequiredItemCountOrNull` <a id="structFRHAPI__Loot_1a29282708cff742aac906829d7853fa0f"></a>

int32 * GetRequiredItemCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.




### `GetRequiredItemCountOrNull` <a id="structFRHAPI__Loot_1a7fbab9601e235ae232d7fa5b969d5bcc"></a>

const int32 * GetRequiredItemCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.




### `SetRequiredItemCount` <a id="structFRHAPI__Loot_1afaf98b2ffd5b01e55e1a7689835d92fa"></a>

void SetRequiredItemCount(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true.




### `ClearRequiredItemCount` <a id="structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd"></a>

void ClearRequiredItemCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RequiredItemCount_Optional and sets RequiredItemCount_IsSet to false.




### `IsRequiredItemCountDefaultValue` <a id="structFRHAPI__Loot_1ab465a43f9dcfe5bbac7aeac109cb7c81"></a>

bool IsRequiredItemCountDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if RequiredItemCount_Optional is set and matches the default value.




### `SetRequiredItemCountToDefault` <a id="structFRHAPI__Loot_1a98f2f8f4d019a7d4a7d58658c5061857"></a>

void SetRequiredItemCountToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of RequiredItemCount_Optional to its default and also sets RequiredItemCount_IsSet to true.




### `GetStackLimit` <a id="structFRHAPI__Loot_1ab6d9334cf474f61dc7df2d5352779036"></a>

int32 & GetStackLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StackLimit_Optional, regardless of it having been set.




### `GetStackLimit` <a id="structFRHAPI__Loot_1aef5cbdcaf9823c2b4a5fd4371ef2d7b8"></a>

const int32 & GetStackLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StackLimit_Optional, regardless of it having been set.




### `GetStackLimit` <a id="structFRHAPI__Loot_1a27ba66d86592d63164078b80e7525a9a"></a>

const int32 & GetStackLimit(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of StackLimit_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStackLimit` <a id="structFRHAPI__Loot_1a01aed35350e799d59a51e5c735eb99b6"></a>

bool GetStackLimit(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of StackLimit_Optional and returns true if it has been set, otherwise returns false.




### `GetStackLimitOrNull` <a id="structFRHAPI__Loot_1a4889eb3beed4e20a0ae3224173d75768"></a>

int32 * GetStackLimitOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.




### `GetStackLimitOrNull` <a id="structFRHAPI__Loot_1aa1613a69c81312e5a10108a23fbb5f6d"></a>

const int32 * GetStackLimitOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.




### `SetStackLimit` <a id="structFRHAPI__Loot_1a0bc52fb536085f72d57cc7aecb33337f"></a>

void SetStackLimit(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true.




### `ClearStackLimit` <a id="structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68"></a>

void ClearStackLimit()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of StackLimit_Optional and sets StackLimit_IsSet to false.




### `IsStackLimitDefaultValue` <a id="structFRHAPI__Loot_1a4411301f594cf03ca1ac883fc5aa8092"></a>

bool IsStackLimitDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if StackLimit_Optional is set and matches the default value.




### `SetStackLimitToDefault` <a id="structFRHAPI__Loot_1a4178e812d7007b89cffdc5425bc70165"></a>

void SetStackLimitToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of StackLimit_Optional to its default and also sets StackLimit_IsSet to true.




### `GetUiHint` <a id="structFRHAPI__Loot_1a3d1dff274c7f9da278a3d1248d563041"></a>

int32 & GetUiHint()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UiHint_Optional, regardless of it having been set.




### `GetUiHint` <a id="structFRHAPI__Loot_1a66b92824e54a23766a326d941b7f247c"></a>

const int32 & GetUiHint()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UiHint_Optional, regardless of it having been set.




### `GetUiHint` <a id="structFRHAPI__Loot_1a0a8945ca2fa76a27b3549db7e9fc58ab"></a>

const int32 & GetUiHint(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of UiHint_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetUiHint` <a id="structFRHAPI__Loot_1a978fe0b67180757bda7ac94bcd149a94"></a>

bool GetUiHint(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of UiHint_Optional and returns true if it has been set, otherwise returns false.




### `GetUiHintOrNull` <a id="structFRHAPI__Loot_1ab6e81003e702e2862e554205330b10b0"></a>

int32 * GetUiHintOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.




### `GetUiHintOrNull` <a id="structFRHAPI__Loot_1a2bfee0b8eabaed982670ded34212795d"></a>

const int32 * GetUiHintOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.




### `SetUiHint` <a id="structFRHAPI__Loot_1a952fbaa81d68be6b5e03f14cfb32faa9"></a>

void SetUiHint(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of UiHint_Optional and also sets UiHint_IsSet to true.




### `ClearUiHint` <a id="structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666"></a>

void ClearUiHint()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of UiHint_Optional and sets UiHint_IsSet to false.




### `IsUiHintDefaultValue` <a id="structFRHAPI__Loot_1a768434aca6d481543db42a6ba4ab04fb"></a>

bool IsUiHintDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if UiHint_Optional is set and matches the default value.




### `SetUiHintToDefault` <a id="structFRHAPI__Loot_1aa04866c631982d1d3fb998505c09f763"></a>

void SetUiHintToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of UiHint_Optional to its default and also sets UiHint_IsSet to true.




### `GetEffectiveFrom` <a id="structFRHAPI__Loot_1aee89d8de5f3ec4c4d02fcebe58ffe536"></a>

FDateTime & GetEffectiveFrom()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EffectiveFrom_Optional, regardless of it having been set.




### `GetEffectiveFrom` <a id="structFRHAPI__Loot_1af1e0e5abfd28052cd1547cdeea002d45"></a>

const FDateTime & GetEffectiveFrom()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EffectiveFrom_Optional, regardless of it having been set.




### `GetEffectiveFrom` <a id="structFRHAPI__Loot_1afd63a6a118a81067a8e746526476adb2"></a>

const FDateTime & GetEffectiveFrom(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of EffectiveFrom_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEffectiveFrom` <a id="structFRHAPI__Loot_1af51ee7d4f692fc48fa6281955948f0ef"></a>

bool GetEffectiveFrom(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of EffectiveFrom_Optional and returns true if it has been set, otherwise returns false.




### `GetEffectiveFromOrNull` <a id="structFRHAPI__Loot_1a1f2eb7316df3787d9135fcef3046d11e"></a>

FDateTime * GetEffectiveFromOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.




### `GetEffectiveFromOrNull` <a id="structFRHAPI__Loot_1a47c40fd04c127180dfcb148cd008593f"></a>

const FDateTime * GetEffectiveFromOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.




### `SetEffectiveFrom` <a id="structFRHAPI__Loot_1a9f10f21fbb584f0bb85f49e714df8c73"></a>

void SetEffectiveFrom(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true.




### `ClearEffectiveFrom` <a id="structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008"></a>

void ClearEffectiveFrom()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of EffectiveFrom_Optional and sets EffectiveFrom_IsSet to false.




### `GetQuantityType` <a id="structFRHAPI__Loot_1ac60f5021029d7495532f4e92256d2c1c"></a>

ERHAPI_QuantityType & GetQuantityType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QuantityType_Optional, regardless of it having been set.




### `GetQuantityType` <a id="structFRHAPI__Loot_1a52f893e2ba2b5efb550dc3d4219ae57c"></a>

const ERHAPI_QuantityType & GetQuantityType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QuantityType_Optional, regardless of it having been set.




### `GetQuantityType` <a id="structFRHAPI__Loot_1a98bb97bded9f560574b06547ca11c68b"></a>

const ERHAPI_QuantityType & GetQuantityType(const ERHAPI_QuantityType & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_QuantityType &|DefaultValue|

#### Description

Gets the value of QuantityType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetQuantityType` <a id="structFRHAPI__Loot_1a06585bd89d8595f273d2561085036c7f"></a>

bool GetQuantityType(ERHAPI_QuantityType & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_QuantityType &|OutValue|

#### Description

Fills OutValue with the value of QuantityType_Optional and returns true if it has been set, otherwise returns false.




### `GetQuantityTypeOrNull` <a id="structFRHAPI__Loot_1ab04af33e8c4c0a23eb02e03fc03e3acd"></a>

ERHAPI_QuantityType * GetQuantityTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.




### `GetQuantityTypeOrNull` <a id="structFRHAPI__Loot_1af1b1fd9e5c187bae0192c0548c15ef26"></a>

const ERHAPI_QuantityType * GetQuantityTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.




### `SetQuantityType` <a id="structFRHAPI__Loot_1a1117831c87af22af2588aed09ce98e5a"></a>

void SetQuantityType(ERHAPI_QuantityType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_QuantityType|NewValue|

#### Description

Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true.




### `ClearQuantityType` <a id="structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd"></a>

void ClearQuantityType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of QuantityType_Optional and sets QuantityType_IsSet to false.




### `GetQuantityMultInventoryItemId` <a id="structFRHAPI__Loot_1abdb65cbbe843109fc780c5896e836d84"></a>

int32 & GetQuantityMultInventoryItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.




### `GetQuantityMultInventoryItemId` <a id="structFRHAPI__Loot_1a8407f742227106b6e18f2d68286e7f8b"></a>

const int32 & GetQuantityMultInventoryItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.




### `GetQuantityMultInventoryItemId` <a id="structFRHAPI__Loot_1a5a93c513af4fb98079d1f4e8f8e48ef5"></a>

const int32 & GetQuantityMultInventoryItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetQuantityMultInventoryItemId` <a id="structFRHAPI__Loot_1a39ff579e93b70184c70016e8f8370f3d"></a>

bool GetQuantityMultInventoryItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetQuantityMultInventoryItemIdOrNull` <a id="structFRHAPI__Loot_1ae8af82ddb950d6e8ab30f1210d26fd57"></a>

int32 * GetQuantityMultInventoryItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetQuantityMultInventoryItemIdOrNull` <a id="structFRHAPI__Loot_1aef08112c1a56763c36d5e592d06901f3"></a>

const int32 * GetQuantityMultInventoryItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetQuantityMultInventoryItemId` <a id="structFRHAPI__Loot_1aaca93c71048ee7c5760210d4f3cf5b79"></a>

void SetQuantityMultInventoryItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.




### `ClearQuantityMultInventoryItemId` <a id="structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50"></a>

void ClearQuantityMultInventoryItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.




### `IsQuantityMultInventoryItemIdDefaultValue` <a id="structFRHAPI__Loot_1a1c513bf258edd56413a96b8e4ca2f63d"></a>

bool IsQuantityMultInventoryItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if QuantityMultInventoryItemId_Optional is set and matches the default value.




### `SetQuantityMultInventoryItemIdToDefault` <a id="structFRHAPI__Loot_1a480179232e881178aa0bae6eac822e72"></a>

void SetQuantityMultInventoryItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of QuantityMultInventoryItemId_Optional to its default and also sets QuantityMultInventoryItemId_IsSet to true.




### `GetIsClaimableByClient` <a id="structFRHAPI__Loot_1a78b6c6b4774fab979e3ad6f8eb81949b"></a>

bool & GetIsClaimableByClient()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IsClaimableByClient_Optional, regardless of it having been set.




### `GetIsClaimableByClient` <a id="structFRHAPI__Loot_1a07b4aebdcd35fc8b7954ac84d3a47fde"></a>

const bool & GetIsClaimableByClient()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IsClaimableByClient_Optional, regardless of it having been set.




### `GetIsClaimableByClient` <a id="structFRHAPI__Loot_1ad7c1e53d67d82fdf3c2a45695da55930"></a>

const bool & GetIsClaimableByClient(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of IsClaimableByClient_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetIsClaimableByClient` <a id="structFRHAPI__Loot_1ae2cea6c0c8a4bde7087ab75ed5b0e10d"></a>

bool GetIsClaimableByClient(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of IsClaimableByClient_Optional and returns true if it has been set, otherwise returns false.




### `GetIsClaimableByClientOrNull` <a id="structFRHAPI__Loot_1a2a12a87471302f579b421e3ad810080b"></a>

bool * GetIsClaimableByClientOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.




### `GetIsClaimableByClientOrNull` <a id="structFRHAPI__Loot_1a66a594b011b922e023d0056aeed59a4b"></a>

const bool * GetIsClaimableByClientOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.




### `SetIsClaimableByClient` <a id="structFRHAPI__Loot_1aec4627b3108dae64c60cb3b50ad49241"></a>

void SetIsClaimableByClient(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true.




### `ClearIsClaimableByClient` <a id="structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6"></a>

void ClearIsClaimableByClient()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of IsClaimableByClient_Optional and sets IsClaimableByClient_IsSet to false.




### `IsIsClaimableByClientDefaultValue` <a id="structFRHAPI__Loot_1a9d2152f9ebbac480467ccf601a3fe673"></a>

bool IsIsClaimableByClientDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if IsClaimableByClient_Optional is set and matches the default value.




### `SetIsClaimableByClientToDefault` <a id="structFRHAPI__Loot_1a336c1ad23684075d60e7da97dca72e26"></a>

void SetIsClaimableByClientToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of IsClaimableByClient_Optional to its default and also sets IsClaimableByClient_IsSet to true.




### `GetTimeFrameId` <a id="structFRHAPI__Loot_1ae8cb1df8ccb738ea8ce1ed44ead0ba12"></a>

int32 & GetTimeFrameId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TimeFrameId_Optional, regardless of it having been set.




### `GetTimeFrameId` <a id="structFRHAPI__Loot_1aab3c0ef8a61f14416bd328b690a05354"></a>

const int32 & GetTimeFrameId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TimeFrameId_Optional, regardless of it having been set.




### `GetTimeFrameId` <a id="structFRHAPI__Loot_1a373844143f5d643286d9fa24a8a22f5a"></a>

const int32 & GetTimeFrameId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTimeFrameId` <a id="structFRHAPI__Loot_1aa90943249db3ef3ec9b0a64d09c3e048"></a>

bool GetTimeFrameId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.




### `GetTimeFrameIdOrNull` <a id="structFRHAPI__Loot_1a18333ea3d1951ca2a8754049decc3dc7"></a>

int32 * GetTimeFrameIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.




### `GetTimeFrameIdOrNull` <a id="structFRHAPI__Loot_1a9cc0c0ba12e5bddd72309501ee667807"></a>

const int32 * GetTimeFrameIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.




### `SetTimeFrameId` <a id="structFRHAPI__Loot_1ad5aa07b2d5574fd5bea4e1ec085627d7"></a>

void SetTimeFrameId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.




### `ClearTimeFrameId` <a id="structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0"></a>

void ClearTimeFrameId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.




### `IsTimeFrameIdDefaultValue` <a id="structFRHAPI__Loot_1ab7ce5827e1a9a6f065f55fa958ea9dfe"></a>

bool IsTimeFrameIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TimeFrameId_Optional is set and matches the default value.




### `SetTimeFrameIdToDefault` <a id="structFRHAPI__Loot_1aaaf27b49e24ee23b0584f580d46d0e36"></a>

void SetTimeFrameIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TimeFrameId_Optional to its default and also sets TimeFrameId_IsSet to true.




### `GetUseInventoryBucket` <a id="structFRHAPI__Loot_1a3f4efa8c5d7eab831433c61eee98789f"></a>

ERHAPI_InventoryBucket & GetUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.




### `GetUseInventoryBucket` <a id="structFRHAPI__Loot_1a158e18ae64ebfb2da85b638c6a0dd61d"></a>

const ERHAPI_InventoryBucket & GetUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.




### `GetUseInventoryBucket` <a id="structFRHAPI__Loot_1a9f4f7dc197733865c1ed143ec1cba51c"></a>

const ERHAPI_InventoryBucket & GetUseInventoryBucket(const ERHAPI_InventoryBucket & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|DefaultValue|

#### Description

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetUseInventoryBucket` <a id="structFRHAPI__Loot_1aa46c343b94bb7c9bc8d7c82ecdeb13e2"></a>

bool GetUseInventoryBucket(ERHAPI_InventoryBucket & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket &|OutValue|

#### Description

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.




### `GetUseInventoryBucketOrNull` <a id="structFRHAPI__Loot_1aff754e919618374602735eb3b0b9d57b"></a>

ERHAPI_InventoryBucket * GetUseInventoryBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.




### `GetUseInventoryBucketOrNull` <a id="structFRHAPI__Loot_1a97bb08ebed28d27c5e62732775dbc727"></a>

const ERHAPI_InventoryBucket * GetUseInventoryBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.




### `SetUseInventoryBucket` <a id="structFRHAPI__Loot_1a87abed0a46f496629ad2b138e62c8b70"></a>

void SetUseInventoryBucket(ERHAPI_InventoryBucket NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket|NewValue|

#### Description

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.




### `ClearUseInventoryBucket` <a id="structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed"></a>

void ClearUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.




### `GetXpQuantityTransformType` <a id="structFRHAPI__Loot_1a1ae16806e9cb8f3051903c5a55e4a986"></a>

ERHAPI_XpQuantityTransform & GetXpQuantityTransformType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.




### `GetXpQuantityTransformType` <a id="structFRHAPI__Loot_1ac4f6778d5b2a41b175b1d69b7460bd85"></a>

const ERHAPI_XpQuantityTransform & GetXpQuantityTransformType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.




### `GetXpQuantityTransformType` <a id="structFRHAPI__Loot_1a30605e03961ef334f131fae77c39559a"></a>

const ERHAPI_XpQuantityTransform & GetXpQuantityTransformType(const ERHAPI_XpQuantityTransform & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_XpQuantityTransform &|DefaultValue|

#### Description

Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetXpQuantityTransformType` <a id="structFRHAPI__Loot_1a75e8680087f9474f45dae8497cf61f86"></a>

bool GetXpQuantityTransformType(ERHAPI_XpQuantityTransform & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_XpQuantityTransform &|OutValue|

#### Description

Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.




### `GetXpQuantityTransformTypeOrNull` <a id="structFRHAPI__Loot_1ad73ddf32cad8f18aa0ccfdda0bf101f1"></a>

ERHAPI_XpQuantityTransform * GetXpQuantityTransformTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.




### `GetXpQuantityTransformTypeOrNull` <a id="structFRHAPI__Loot_1a8a3cb2cc1fc5d253a7eb1d1168cbedb4"></a>

const ERHAPI_XpQuantityTransform * GetXpQuantityTransformTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.




### `SetXpQuantityTransformType` <a id="structFRHAPI__Loot_1a57b9733c7869bd1eecf9fab24f6d4104"></a>

void SetXpQuantityTransformType(ERHAPI_XpQuantityTransform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_XpQuantityTransform|NewValue|

#### Description

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.




### `ClearXpQuantityTransformType` <a id="structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da"></a>

void ClearXpQuantityTransformType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.




### `GetCurrentPricePointGuid` <a id="structFRHAPI__Loot_1a3b85b73e88cefbdde01435440a11076d"></a>

FString & GetCurrentPricePointGuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.




### `GetCurrentPricePointGuid` <a id="structFRHAPI__Loot_1a412f4764df6dfb5cee18e7fa883a1896"></a>

const FString & GetCurrentPricePointGuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.




### `GetCurrentPricePointGuid` <a id="structFRHAPI__Loot_1a71bdcce58525f93601c85b385ce5141e"></a>

const FString & GetCurrentPricePointGuid(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of CurrentPricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCurrentPricePointGuid` <a id="structFRHAPI__Loot_1a1cdd271fa5085a0400483f9479cd3240"></a>

bool GetCurrentPricePointGuid(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of CurrentPricePointGuid_Optional and returns true if it has been set, otherwise returns false.




### `GetCurrentPricePointGuidOrNull` <a id="structFRHAPI__Loot_1a2c4eb929baaaee872a3b88eb0b7ecd86"></a>

FString * GetCurrentPricePointGuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.




### `GetCurrentPricePointGuidOrNull` <a id="structFRHAPI__Loot_1af7fc55fbbac53f0aa80ea2a149d4efd1"></a>

const FString * GetCurrentPricePointGuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.




### `SetCurrentPricePointGuid` <a id="structFRHAPI__Loot_1a1a9da553d93d53bfc2fa81ac6d489070"></a>

void SetCurrentPricePointGuid(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true.




### `ClearCurrentPricePointGuid` <a id="structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e"></a>

void ClearCurrentPricePointGuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CurrentPricePointGuid_Optional and sets CurrentPricePointGuid_IsSet to false.




### `GetPreSalePricePointGuid` <a id="structFRHAPI__Loot_1aa9d374bc62fd3b59b776a17b1834bc9f"></a>

FString & GetPreSalePricePointGuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.




### `GetPreSalePricePointGuid` <a id="structFRHAPI__Loot_1a791fe69ee647033dd38511bc3b11d3f0"></a>

const FString & GetPreSalePricePointGuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.




### `GetPreSalePricePointGuid` <a id="structFRHAPI__Loot_1a8ee4701f8e546cef003f40836fb11e9f"></a>

const FString & GetPreSalePricePointGuid(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PreSalePricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPreSalePricePointGuid` <a id="structFRHAPI__Loot_1a566fb155c23cbc637cbfa1bf07bd59d5"></a>

bool GetPreSalePricePointGuid(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PreSalePricePointGuid_Optional and returns true if it has been set, otherwise returns false.




### `GetPreSalePricePointGuidOrNull` <a id="structFRHAPI__Loot_1affcacd5fafc0758c39e9196ecd95f56f"></a>

FString * GetPreSalePricePointGuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.




### `GetPreSalePricePointGuidOrNull` <a id="structFRHAPI__Loot_1a792dbbffbe29595646210c49c93b4c57"></a>

const FString * GetPreSalePricePointGuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.




### `SetPreSalePricePointGuid` <a id="structFRHAPI__Loot_1ad75446329a6cd63178df57c06b268277"></a>

void SetPreSalePricePointGuid(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true.




### `ClearPreSalePricePointGuid` <a id="structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e"></a>

void ClearPreSalePricePointGuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PreSalePricePointGuid_Optional and sets PreSalePricePointGuid_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__Loot_1adac9909b3816a31768afbd01c129f76b"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Loot_1a7168aeb8126ef8adb139410146ccf77e"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Loot_1acdf9b0a96fc3568814e93a938f79a57c"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__Loot_1a5cc085454f37806d9400e794b7d64ab5"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Loot_1a97c1582a19ea5d336b44a8bbf3a7611c"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Loot_1a59c09e2560aebb2bfc588102831cdc73"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__Loot_1ad535f49eefaa68050d429b0f0dbebd2b"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.




### `GetHardQuantityMaximum` <a id="structFRHAPI__Loot_1a22ad3a8f1b3ff1bb6b6444f74a6ac17a"></a>

int32 & GetHardQuantityMaximum()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.




### `GetHardQuantityMaximum` <a id="structFRHAPI__Loot_1af2c0aa49b89341a3b62b8a4a87402aa7"></a>

const int32 & GetHardQuantityMaximum()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.




### `GetHardQuantityMaximum` <a id="structFRHAPI__Loot_1aff89e7fdd36eddb551bdd11499f13da9"></a>

const int32 & GetHardQuantityMaximum(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetHardQuantityMaximum` <a id="structFRHAPI__Loot_1a99f6530818176b2d7276082dba8de91a"></a>

bool GetHardQuantityMaximum(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.




### `GetHardQuantityMaximumOrNull` <a id="structFRHAPI__Loot_1aa004b1374099fa67b9f31e6e18242fcf"></a>

int32 * GetHardQuantityMaximumOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.




### `GetHardQuantityMaximumOrNull` <a id="structFRHAPI__Loot_1a41c1e6a38321871cbd2beef41f18c219"></a>

const int32 * GetHardQuantityMaximumOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.




### `SetHardQuantityMaximum` <a id="structFRHAPI__Loot_1adfc8bce30a4d95c2471aabaae77045cb"></a>

void SetHardQuantityMaximum(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.




### `ClearHardQuantityMaximum` <a id="structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df"></a>

void ClearHardQuantityMaximum()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.




### `IsHardQuantityMaximumDefaultValue` <a id="structFRHAPI__Loot_1a1dcf73ab36076f3fe98df72496ac7ae1"></a>

bool IsHardQuantityMaximumDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if HardQuantityMaximum_Optional is set and matches the default value.




### `SetHardQuantityMaximumToDefault` <a id="structFRHAPI__Loot_1ae75d4313ecf4e431d50d1a6defb18831"></a>

void SetHardQuantityMaximumToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of HardQuantityMaximum_Optional to its default and also sets HardQuantityMaximum_IsSet to true.





