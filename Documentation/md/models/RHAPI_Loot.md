# RHAPI_Loot <a id="group__RHAPI__Loot"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Loot`](#structFRHAPI__Loot) | Loot determines how an Item fulfilled. When Loot is fulfilled, the Item is granted to the player or the Sub Vendor is fulfilled but not both.

## struct `FRHAPI_Loot` <a id="structFRHAPI__Loot"></a>

```
struct FRHAPI_Loot
  : public FRHAPI_Model
```

Loot determines how an Item fulfilled. When Loot is fulfilled, the Item is granted to the player or the Sub Vendor is fulfilled but not both.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Loot_1a3ac4b8fa1534ddc987f9809a78b0f573) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Loot_1ab5141af81d9f12541fa2a640cc9025d5) | true if CustomData_Optional has been set to a value
`public int32 `[`LootId`](#structFRHAPI__Loot_1a5f92839acf839d6c49b57b1cc66dba4f) | The Loot ID.
`public int32 `[`VendorId`](#structFRHAPI__Loot_1aeebadf01967a63239b42fe6094e7a9c5) | The Vendor ID.
`public int32 `[`ItemId_Optional`](#structFRHAPI__Loot_1a8cd4e2427345b15dd5a3a12f5fdc7497) | The Item ID. Optional Item that will be granted to the player if Sub Vendor ID is not specified.
`public bool `[`ItemId_IsSet`](#structFRHAPI__Loot_1ab203c9039289860b29222870d6c41689) | true if ItemId_Optional has been set to a value
`public `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` `[`Item_Optional`](#structFRHAPI__Loot_1a2465b63dbf01c76fa9cc736f7356d278) | In-line Item definition. Optional Item that will be granted to the player if Sub Vendor ID is not specified.
`public bool `[`Item_IsSet`](#structFRHAPI__Loot_1a5511b7f6472a4da05f937a4262f15843) | true if Item_Optional has been set to a value
`public int32 `[`SubVendorId_Optional`](#structFRHAPI__Loot_1a9869e1988c40476054db483a6b763e73) | The Sub Vendor ID. Optional Vendor ID that will be used to fulfill the Loot instead of granting the Item.
`public bool `[`SubVendorId_IsSet`](#structFRHAPI__Loot_1a97e58634ed48e68a3eb038df38ede464) | true if SubVendorId_Optional has been set to a value
`public int32 `[`Quantity_Optional`](#structFRHAPI__Loot_1a507bf92cd6bc234afa66946931e806b9) | The quantity of the Item or Sub Vendor to fulfill. This will be multiplied by the quantity of fulfilled Loot and the parent Loot if quantity_type is relative.
`public bool `[`Quantity_IsSet`](#structFRHAPI__Loot_1abb9332211b9db78f3eb03556977d1add) | true if Quantity_Optional has been set to a value
`public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__Loot_1a43c10b4f70841b48fdec3f81de3325f5) | The Inventory Selector Type. Determine how the Inventory is selected and quantity is modified.
`public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__Loot_1afde2ba63a4fe363fd04030d691f53ea8) | true if InventorySelectorType_Optional has been set to a value
`public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__Loot_1a05d38a166aa71dceb816fcf5c3883655) | The Inventory Operation. Determine how the Loot quantity is modified based on the context it is fulfilled in. This also determines the order Loot will be fulfilled in when sort_order is the same.
`public bool `[`InventoryOperation_IsSet`](#structFRHAPI__Loot_1ae432979fcb368180c320fe3a859b9fc8) | true if InventoryOperation_Optional has been set to a value
`public bool `[`Active_Optional`](#structFRHAPI__Loot_1a54948ce1e603d2ab0bf23d1b77e90866) | Determines if the Loot is active. Inactive Loot will not be fulfilled.
`public bool `[`Active_IsSet`](#structFRHAPI__Loot_1aad1d01bf7a99966aa59f72495e840ec1) | true if Active_Optional has been set to a value
`public int32 `[`SortOrder_Optional`](#structFRHAPI__Loot_1ab906a8714eb2296f6017caac3d06f088) | The sort order of the Loot. Lower sort order will be fulfilled first. Inventory Operation is used as a tie breaker when sort_order is the same.
`public bool `[`SortOrder_IsSet`](#structFRHAPI__Loot_1ac2495f13e749de6982277aecf580171b) | true if SortOrder_Optional has been set to a value
`public int32 `[`DropWeight_Optional`](#structFRHAPI__Loot_1ae52d49075f11b8b4a6cbe93634c4d141) | The drop weight of the Loot. Higher drop weight will be more likely to be fulfilled.
`public bool `[`DropWeight_IsSet`](#structFRHAPI__Loot_1ac826cf7c16d679150786eef688b22702) | true if DropWeight_Optional has been set to a value
`public bool `[`FillInNewOrder_Optional`](#structFRHAPI__Loot_1a7c8b3f3950233c904f9a0fa08fc1fa5d) | When dropped in a randomly sampled vendor, will this create a new order or fill inline?. The primary use case for this is when you want the same loot to be dropped multiple times in a randomly sampled vendor.
`public bool `[`FillInNewOrder_IsSet`](#structFRHAPI__Loot_1a88b56445963d45d4728243e1bf1308c4) | true if FillInNewOrder_Optional has been set to a value
`public bool `[`AllowPartialBundles_Optional`](#structFRHAPI__Loot_1ae8fcee9d99c567d50b57e143769a7bc8) | When dropped in a randomly sampled vendor, will the sub vendor allow dropping part of the the bundle? False means it will only drop if the entire sub vendor can be given to the player.
`public bool `[`AllowPartialBundles_IsSet`](#structFRHAPI__Loot_1ad84758793e1dff016a53cc580fe15916) | true if AllowPartialBundles_Optional has been set to a value
`public int32 `[`RequiredItemId_Optional`](#structFRHAPI__Loot_1ae088775af177f58b9bac7cdfe69b38ed) | Item required to be owned/rented to drop this Loot in a randomly sampled vendor.
`public bool `[`RequiredItemId_IsSet`](#structFRHAPI__Loot_1a47d9045f2c086ffa823850f5a02f0b60) | true if RequiredItemId_Optional has been set to a value
`public int32 `[`RequiredItemCount_Optional`](#structFRHAPI__Loot_1abf8e2c11c8acf567243cec8c806b7a62) | Amount of the required_item_id to be owned/rented to drop this Loot in a randomly sampled vendor.
`public bool `[`RequiredItemCount_IsSet`](#structFRHAPI__Loot_1ada979daeddf09bd7b4b566aa9bf3df28) | true if RequiredItemCount_Optional has been set to a value
`public int32 `[`StackLimit_Optional`](#structFRHAPI__Loot_1a970fa609225d3c8af096f35f2d17cd9a) | Amount of owned/rented of this Loot's item that will prevent this Loot from dropping in a randomly sampled vendor.
`public bool `[`StackLimit_IsSet`](#structFRHAPI__Loot_1a00cb9abdbcd7404d7b093d3c0c8152f1) | true if StackLimit_Optional has been set to a value
`public int32 `[`UiHint_Optional`](#structFRHAPI__Loot_1ab4d0035bf9df79460aa855ed965bc633) | 
`public bool `[`UiHint_IsSet`](#structFRHAPI__Loot_1a3a7fc556249776abb1bd0aec415a97d9) | true if UiHint_Optional has been set to a value
`public FDateTime `[`EffectiveFrom_Optional`](#structFRHAPI__Loot_1a12465a1abc8d7ed119bf9f65ab3d33a2) | 
`public bool `[`EffectiveFrom_IsSet`](#structFRHAPI__Loot_1aaf2276f068ed4507f5ac347af87b49c3) | true if EffectiveFrom_Optional has been set to a value
`public ERHAPI_QuantityType `[`QuantityType_Optional`](#structFRHAPI__Loot_1a8e89961081f18de1c004e987f27dcb8c) | Determines how the quantity is modified in the context it is fulfilled in.
`public bool `[`QuantityType_IsSet`](#structFRHAPI__Loot_1a0d4fa18901b7c09f35f00642da594250) | true if QuantityType_Optional has been set to a value
`public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__Loot_1a06a811681044c08cfff63b71fcc1003c) | When fulfilling Loot if this is set the quantity will be multiplied by the quantity of this Item in the Player's Inventory.
`public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__Loot_1a564d2f00696631dab3416ab83691c8c7) | true if QuantityMultInventoryItemId_Optional has been set to a value
`public bool `[`IsClaimableByClient_Optional`](#structFRHAPI__Loot_1a311ebbe8b318350f6bdea1992d3db086) | Determines if the Loot can be claimed by the client. This is dangerous without the correct loot confiuration as a client could claim Loot multiple times.
`public bool `[`IsClaimableByClient_IsSet`](#structFRHAPI__Loot_1afe049eb4ba6639b5ac75b652ef7c1059) | true if IsClaimableByClient_Optional has been set to a value
`public int32 `[`TimeFrameId_Optional`](#structFRHAPI__Loot_1af9803c09b5cca0b04f5cf8f299944e87) | The Time Frame ID. Optional Time Frame ID that will be used the expiration of Loot when it is fulfilled.
`public bool `[`TimeFrameId_IsSet`](#structFRHAPI__Loot_1adcc16ccb1b5c1a2fc504ce5543504057) | true if TimeFrameId_Optional has been set to a value
`public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__Loot_1ac130c02eb58b7c8d68b93889b81db06d) | Inventory Bucket to use for this Loot.
`public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__Loot_1a68f88c797ce9bb3516e1f19196a00424) | true if UseInventoryBucket_Optional has been set to a value
`public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__Loot_1ab7bd194e175ef8b245205e8e723d9532) | Allows treating quantity as additional levels to grant to the Player.
`public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__Loot_1a9d0c5c3838e45cd8f3311f0866b2141a) | true if XpQuantityTransformType_Optional has been set to a value
`public FString `[`CurrentPricePointGuid_Optional`](#structFRHAPI__Loot_1a705277f1b2e48fd2b70cfb5cf984dd4d) | The current price point guid. Optional Price Point ID that will be used to determine the price of the Loot when it is fulfilled.
`public bool `[`CurrentPricePointGuid_IsSet`](#structFRHAPI__Loot_1a57d3d52962158cb7136a373762b5be5e) | true if CurrentPricePointGuid_Optional has been set to a value
`public FString `[`PreSalePricePointGuid_Optional`](#structFRHAPI__Loot_1abcf89f067a2db68ae1244e2d9507cf42) | The pre sale price point guid. Optional Price Point ID that will be used to show the previous price of the Loot.
`public bool `[`PreSalePricePointGuid_IsSet`](#structFRHAPI__Loot_1af34c049ed2551deb2dc219b61a8dfd4c) | true if PreSalePricePointGuid_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Loot_1acf3ab767cf43aebb4a1c5e9eaa5ed60d) | Cache info for the Loot.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Loot_1aafb036901a2d16ef1337d520d808ec6b) | true if CacheInfo_Optional has been set to a value
`public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__Loot_1aa6a8b8fcd71d2911a55ea28b6be66cde) | Hard cap on quantity of an item this Loot can give. Disabled with 0.
`public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__Loot_1a7d6fe172fee6cd5f1545379d64367c01) | true if HardQuantityMaximum_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Loot_1a242a4296481c5fb420d714cd32fec3ad)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Loot_1a06faa7738909f964886ad0e56d8da1ec)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a0495d616eb651af6641ec2812b920f2e)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a6406b470cab476fcf1238cec9ecbdf9c)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1ae0a3ada990e150f805128840817f4e03)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Loot_1a287c688a61e03a4822e3d7a1f0e42a49)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1affba9d4aa84ed10beddebd0a9a46deab)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1a3e5752d789f2ed8704c69c4771f50b68)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Loot_1abb522fd63c1589b00b4ff33caf873946)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline int32 & `[`GetLootId`](#structFRHAPI__Loot_1acd2ed4c712d9bed9983240653df6e25e)`()` | Gets the value of LootId.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__Loot_1a207349872f4c121f408f0fd02314ca89)`() const` | Gets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__Loot_1a18c0f6d15e5dd757c726d65a95abc6a3)`(int32 NewValue)` | Sets the value of LootId.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__Loot_1ac34d328155722dece2b3d333d8110e41)`() const` | Returns true if LootId matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__Loot_1a5e2f6f21cf1b05ab3abd7bd1e0b30c87)`()` | Sets the value of LootId to its default
`public inline int32 & `[`GetVendorId`](#structFRHAPI__Loot_1afc06e9641cadc5e4c548d2687de6339c)`()` | Gets the value of VendorId.
`public inline const int32 & `[`GetVendorId`](#structFRHAPI__Loot_1a1f6f1d4240d320453bd4609457a22569)`() const` | Gets the value of VendorId.
`public inline void `[`SetVendorId`](#structFRHAPI__Loot_1aba7abf2c233ddd25c049b5a21f485b6e)`(int32 NewValue)` | Sets the value of VendorId.
`public inline bool `[`IsVendorIdDefaultValue`](#structFRHAPI__Loot_1a34294c3a7a9eba0d2be427e08546868c)`() const` | Returns true if VendorId matches the default value.
`public inline void `[`SetVendorIdToDefault`](#structFRHAPI__Loot_1a7ba740230264c05551800de8b9830745)`()` | Sets the value of VendorId to its default
`public inline int32 & `[`GetItemId`](#structFRHAPI__Loot_1acbe340fce6f530fbce884bc9a4fa1766)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a1cdf690a9d65f41ac2f903514b1f5f57)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a2fa583df5dafce861fe723c8450b93cc)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__Loot_1af46204b226c63dbb8cdb2645fea6c50d)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1ad6c8e92b4cdecac859dd4fff238c5af8)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1ada95a259f5df1434d12368e86546bb20)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__Loot_1a4af92839c74362c6f2f887a70a0320b2)`(int32 NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`ClearItemId`](#structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__Loot_1ab1fb89c1cd120fbdccbad20b4f1058c9)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__Loot_1a175257a1162b73e5e5897dc7ce9138de)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1ab6b9ab768d5f3f6787f199565b9f5276)`()` | Gets the value of Item_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a055ddfc83937a90aa78b468fde6ba0ae)`() const` | Gets the value of Item_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1ae5d5dfe794234b8af9b212fdbf0ca1ff)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & DefaultValue) const` | Gets the value of Item_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItem`](#structFRHAPI__Loot_1a780c162ed85fa8ca7a9ad6895819166c)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & OutValue) const` | Fills OutValue with the value of Item_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1af92d71a4932d1c847404aa86a673dbfc)`()` | Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1ad32395f6be68999b7517822060b100b6)`() const` | Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItem`](#structFRHAPI__Loot_1a73ff925b5e85d57f72f4e12f2167d718)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` NewValue)` | Sets the value of Item_Optional and also sets Item_IsSet to true.
`public inline void `[`ClearItem`](#structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8)`()` | Clears the value of Item_Optional and sets Item_IsSet to false.
`public inline int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a15a91fdfd7149929f1ee3b10ef2fc4fe)`()` | Gets the value of SubVendorId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1ad6c05065e6d1cc723d0da0272e1f57ce)`() const` | Gets the value of SubVendorId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a73101b64e45e1926453dfe6b743f9f1c)`(const int32 & DefaultValue) const` | Gets the value of SubVendorId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSubVendorId`](#structFRHAPI__Loot_1ab6c9112b74f2cb0a103d65bb19897165)`(int32 & OutValue) const` | Fills OutValue with the value of SubVendorId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a0a6a3efe02e0991a98ed13e8c69b2992)`()` | Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a0f1770874ce644d15d3354c3a9a99436)`() const` | Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSubVendorId`](#structFRHAPI__Loot_1abd0423b5f7bd4a9d7d17f8632f9e684a)`(int32 NewValue)` | Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true.
`public inline void `[`ClearSubVendorId`](#structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058)`()` | Clears the value of SubVendorId_Optional and sets SubVendorId_IsSet to false.
`public inline bool `[`IsSubVendorIdDefaultValue`](#structFRHAPI__Loot_1ac0a741bcd286b2adccd25fe38f97983b)`() const` | Returns true if SubVendorId_Optional is set and matches the default value.
`public inline void `[`SetSubVendorIdToDefault`](#structFRHAPI__Loot_1afd50a2496a24d46fddc881f22eed4b02)`()` | Sets the value of SubVendorId_Optional to its default and also sets SubVendorId_IsSet to true.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__Loot_1ae066065a51d0fb4abc472d85f9ddcc4b)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1a87646105d6db15b764841a20f4540bbb)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1ade46fe47ab6ded01d87ed716e4846bbc)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantity`](#structFRHAPI__Loot_1a4ecfe9e6cf43b74396de5ca5366f058e)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1a093f82d870c44e5aeffe9ca34fcd8973)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1af6ec07f3923ed815527802fa2048f093)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantity`](#structFRHAPI__Loot_1a39296ab17c155afc422c7aa9e780bcf7)`(int32 NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline void `[`ClearQuantity`](#structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__Loot_1a5e81fc2e46f491acafcf83ec9eb97c7f)`() const` | Returns true if Quantity_Optional is set and matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__Loot_1a88fbbb95da4cab22777b629c403c4155)`()` | Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.
`public inline ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1aa322e86131bd4530064572a111b6f43a)`()` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1aa0ead34cef88232549e06e543b639955)`() const` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1af4edd31cd9c5c22d40f1a3d8c108a4d5)`(const ERHAPI_InventorySelector & DefaultValue) const` | Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventorySelectorType`](#structFRHAPI__Loot_1ab13961c4e92163e6be9c25a5db91dcaf)`(ERHAPI_InventorySelector & OutValue) const` | Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1aa7f8ffa074e9bd708594da02b10f29d8)`()` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1a16a06acaebe82714beac25281b06816f)`() const` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1a4e8c9db874e65ac31e920a7fa2da62ae)`(ERHAPI_InventorySelector NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.
`public inline void `[`ClearInventorySelectorType`](#structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b)`()` | Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.
`public inline ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1ad7302341dbcffaff54d40249299cc812)`()` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a1f8266c7f24dd4d474446d96bec2eb5b)`() const` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a67e40cc05376283592441d4fde58cb0a)`(const ERHAPI_InventoryOperation & DefaultValue) const` | Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryOperation`](#structFRHAPI__Loot_1a4afcfa7ae60e4c96381c5d97b563814c)`(ERHAPI_InventoryOperation & OutValue) const` | Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1a244d8d5d2ae0c7ca5a40250d7be190bf)`()` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1a41a1ef51943307008202bdb908e6ac67)`() const` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryOperation`](#structFRHAPI__Loot_1a575445562782f377e6df5caabe489b3c)`(ERHAPI_InventoryOperation NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.
`public inline void `[`ClearInventoryOperation`](#structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68)`()` | Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.
`public inline bool & `[`GetActive`](#structFRHAPI__Loot_1aaa40a6889d2d480eeda7900dd5826c4c)`()` | Gets the value of Active_Optional, regardless of it having been set.
`public inline const bool & `[`GetActive`](#structFRHAPI__Loot_1a3ff4c80bbc2b0d4f018ecf6681c6a27f)`() const` | Gets the value of Active_Optional, regardless of it having been set.
`public inline const bool & `[`GetActive`](#structFRHAPI__Loot_1a15d262ce19e2772650104738f4f62438)`(const bool & DefaultValue) const` | Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActive`](#structFRHAPI__Loot_1aba509de727c43ec1d964c4463432a858)`(bool & OutValue) const` | Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1a044a4d9031d518cfacb391a7afbb40e5)`()` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1a79471305be90e930d1e41f929e9cd574)`() const` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActive`](#structFRHAPI__Loot_1a24956770a2651ca7a42e687185f107ca)`(bool NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true.
`public inline void `[`ClearActive`](#structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8)`()` | Clears the value of Active_Optional and sets Active_IsSet to false.
`public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__Loot_1a21764f599b5c382557c5f5f3f4d42e20)`() const` | Returns true if Active_Optional is set and matches the default value.
`public inline void `[`SetActiveToDefault`](#structFRHAPI__Loot_1a99fdeb71b6776d8b69d964f1f6554e50)`()` | Sets the value of Active_Optional to its default and also sets Active_IsSet to true.
`public inline int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a5f12da47e4d500c12717aa05d5b3297d)`()` | Gets the value of SortOrder_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a5b6d3cb18b763ebe1aa4722ecf889add)`() const` | Gets the value of SortOrder_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1aff690307120cf4a6836a8922ab12f843)`(const int32 & DefaultValue) const` | Gets the value of SortOrder_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSortOrder`](#structFRHAPI__Loot_1a9db9bb45bbd74194e41703dc40408045)`(int32 & OutValue) const` | Fills OutValue with the value of SortOrder_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1aea4875236320e7bb00410213c35ee7b7)`()` | Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1a2e56e4d5aadeace2ecde18cf12bf2e87)`() const` | Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSortOrder`](#structFRHAPI__Loot_1ab47b2699e8e365f3607b53fedf8a703a)`(int32 NewValue)` | Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true.
`public inline void `[`ClearSortOrder`](#structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955)`()` | Clears the value of SortOrder_Optional and sets SortOrder_IsSet to false.
`public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__Loot_1a476d6b43e6c290f07c3879d9d18f0acb)`() const` | Returns true if SortOrder_Optional is set and matches the default value.
`public inline void `[`SetSortOrderToDefault`](#structFRHAPI__Loot_1a69397f89697497621e33a6ee1eb4f0a3)`()` | Sets the value of SortOrder_Optional to its default and also sets SortOrder_IsSet to true.
`public inline int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a8a66c24b792f4f865e495d8f331dd701)`()` | Gets the value of DropWeight_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a1f9473f5b292c7545bb67f81be58de18)`() const` | Gets the value of DropWeight_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1aa2a1d678dd3b12eed0106b659e911351)`(const int32 & DefaultValue) const` | Gets the value of DropWeight_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDropWeight`](#structFRHAPI__Loot_1a50ece77b36c63ce6bf2a1cb4e5d5160c)`(int32 & OutValue) const` | Fills OutValue with the value of DropWeight_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1a08c8342bc4a70ae819c65bb4e06a9b79)`()` | Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1a6ab52a61886369f636297475d24f4272)`() const` | Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDropWeight`](#structFRHAPI__Loot_1ac16202c61d654326df7d982186b1e3c4)`(int32 NewValue)` | Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true.
`public inline void `[`ClearDropWeight`](#structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412)`()` | Clears the value of DropWeight_Optional and sets DropWeight_IsSet to false.
`public inline bool `[`IsDropWeightDefaultValue`](#structFRHAPI__Loot_1ac612f584a88113b0c0cd73ce5a3b7486)`() const` | Returns true if DropWeight_Optional is set and matches the default value.
`public inline void `[`SetDropWeightToDefault`](#structFRHAPI__Loot_1a6363ba8bb117c271097619b48a5cb685)`()` | Sets the value of DropWeight_Optional to its default and also sets DropWeight_IsSet to true.
`public inline bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1ab299812c7b635f1527c2ae7e4c99cf24)`()` | Gets the value of FillInNewOrder_Optional, regardless of it having been set.
`public inline const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a4ae0b3fb5690265834f3b2b1e0a4378f)`() const` | Gets the value of FillInNewOrder_Optional, regardless of it having been set.
`public inline const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1adf50f8a5d97b9bb692ab8f19e33329dc)`(const bool & DefaultValue) const` | Gets the value of FillInNewOrder_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a558055c9e4b468bfe8c2961d325e3f2c)`(bool & OutValue) const` | Fills OutValue with the value of FillInNewOrder_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a9aaf656c31f16b38f51a3f856e264618)`()` | Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a768f50d9e9e71e99a4937e63b8550b91)`() const` | Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a7d4fc77c178456471da3920fae5392c0)`(bool NewValue)` | Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true.
`public inline void `[`ClearFillInNewOrder`](#structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb)`()` | Clears the value of FillInNewOrder_Optional and sets FillInNewOrder_IsSet to false.
`public inline bool `[`IsFillInNewOrderDefaultValue`](#structFRHAPI__Loot_1a096cd5304b7e6ce8e38e2ed23a2d9937)`() const` | Returns true if FillInNewOrder_Optional is set and matches the default value.
`public inline void `[`SetFillInNewOrderToDefault`](#structFRHAPI__Loot_1af49c135f5f8a2278cd294b0f856c69a0)`()` | Sets the value of FillInNewOrder_Optional to its default and also sets FillInNewOrder_IsSet to true.
`public inline bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1adab6cf0ce7e1dbb963bdc969b2f2e3a9)`()` | Gets the value of AllowPartialBundles_Optional, regardless of it having been set.
`public inline const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a3cac3a73120c4908629b4340e674f621)`() const` | Gets the value of AllowPartialBundles_Optional, regardless of it having been set.
`public inline const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1adff71139123b6665d18212ee6f8a38b4)`(const bool & DefaultValue) const` | Gets the value of AllowPartialBundles_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1ae024296bd76a74c144f9a0b39b819ed8)`(bool & OutValue) const` | Fills OutValue with the value of AllowPartialBundles_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a55f10e4a668b0406c3bc93574590eb20)`()` | Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1abb575ad6c241242566576d96291f48f3)`() const` | Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1a9a3d167314fc25f7f400249ace77688b)`(bool NewValue)` | Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true.
`public inline void `[`ClearAllowPartialBundles`](#structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95)`()` | Clears the value of AllowPartialBundles_Optional and sets AllowPartialBundles_IsSet to false.
`public inline bool `[`IsAllowPartialBundlesDefaultValue`](#structFRHAPI__Loot_1a398d73cfc4df91f93783bc9f8134b731)`() const` | Returns true if AllowPartialBundles_Optional is set and matches the default value.
`public inline void `[`SetAllowPartialBundlesToDefault`](#structFRHAPI__Loot_1afa4e37c2b1cc8728c875d20c143de249)`()` | Sets the value of AllowPartialBundles_Optional to its default and also sets AllowPartialBundles_IsSet to true.
`public inline int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1afce6e6ec62acd1bdec2f24240802866f)`()` | Gets the value of RequiredItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a7ffe9fefbc8b5540aba6dace5757d6c0)`() const` | Gets the value of RequiredItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a0cca1ce3c86675b86e8330e3dd2434b7)`(const int32 & DefaultValue) const` | Gets the value of RequiredItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemId`](#structFRHAPI__Loot_1a4dbb79c91f8fc5203268629701fbcb0a)`(int32 & OutValue) const` | Fills OutValue with the value of RequiredItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1a7d8f4a28a17ae1ea37f03ef4dfa402ee)`()` | Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1aaac67f6d3eec9d808d76a8f6cd79d52d)`() const` | Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemId`](#structFRHAPI__Loot_1a2fdcfaf5a33e2e5a7d441aa17592fd34)`(int32 NewValue)` | Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true.
`public inline void `[`ClearRequiredItemId`](#structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181)`()` | Clears the value of RequiredItemId_Optional and sets RequiredItemId_IsSet to false.
`public inline bool `[`IsRequiredItemIdDefaultValue`](#structFRHAPI__Loot_1ac293dab8fa44d784dc6f80acbb030b9d)`() const` | Returns true if RequiredItemId_Optional is set and matches the default value.
`public inline void `[`SetRequiredItemIdToDefault`](#structFRHAPI__Loot_1ae89159c7256c304f929c487a1d6668c3)`()` | Sets the value of RequiredItemId_Optional to its default and also sets RequiredItemId_IsSet to true.
`public inline int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1aec8edb7083d53fcf1bff458a05f73701)`()` | Gets the value of RequiredItemCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1afd7decfa1c4a8c1b91d2d0c53e20a736)`() const` | Gets the value of RequiredItemCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1adabba1a845f2abd7c12409c078754949)`(const int32 & DefaultValue) const` | Gets the value of RequiredItemCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a074bc7b7cfcfa02889b3e32e6b567875)`(int32 & OutValue) const` | Fills OutValue with the value of RequiredItemCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a29282708cff742aac906829d7853fa0f)`()` | Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a7fbab9601e235ae232d7fa5b969d5bcc)`() const` | Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1afaf98b2ffd5b01e55e1a7689835d92fa)`(int32 NewValue)` | Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true.
`public inline void `[`ClearRequiredItemCount`](#structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd)`()` | Clears the value of RequiredItemCount_Optional and sets RequiredItemCount_IsSet to false.
`public inline bool `[`IsRequiredItemCountDefaultValue`](#structFRHAPI__Loot_1ab465a43f9dcfe5bbac7aeac109cb7c81)`() const` | Returns true if RequiredItemCount_Optional is set and matches the default value.
`public inline void `[`SetRequiredItemCountToDefault`](#structFRHAPI__Loot_1a98f2f8f4d019a7d4a7d58658c5061857)`()` | Sets the value of RequiredItemCount_Optional to its default and also sets RequiredItemCount_IsSet to true.
`public inline int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1ab6d9334cf474f61dc7df2d5352779036)`()` | Gets the value of StackLimit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1aef5cbdcaf9823c2b4a5fd4371ef2d7b8)`() const` | Gets the value of StackLimit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a27ba66d86592d63164078b80e7525a9a)`(const int32 & DefaultValue) const` | Gets the value of StackLimit_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStackLimit`](#structFRHAPI__Loot_1a01aed35350e799d59a51e5c735eb99b6)`(int32 & OutValue) const` | Fills OutValue with the value of StackLimit_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1a4889eb3beed4e20a0ae3224173d75768)`()` | Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1aa1613a69c81312e5a10108a23fbb5f6d)`() const` | Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStackLimit`](#structFRHAPI__Loot_1a0bc52fb536085f72d57cc7aecb33337f)`(int32 NewValue)` | Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true.
`public inline void `[`ClearStackLimit`](#structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68)`()` | Clears the value of StackLimit_Optional and sets StackLimit_IsSet to false.
`public inline bool `[`IsStackLimitDefaultValue`](#structFRHAPI__Loot_1a4411301f594cf03ca1ac883fc5aa8092)`() const` | Returns true if StackLimit_Optional is set and matches the default value.
`public inline void `[`SetStackLimitToDefault`](#structFRHAPI__Loot_1a4178e812d7007b89cffdc5425bc70165)`()` | Sets the value of StackLimit_Optional to its default and also sets StackLimit_IsSet to true.
`public inline int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a3d1dff274c7f9da278a3d1248d563041)`()` | Gets the value of UiHint_Optional, regardless of it having been set.
`public inline const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a66b92824e54a23766a326d941b7f247c)`() const` | Gets the value of UiHint_Optional, regardless of it having been set.
`public inline const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a0a8945ca2fa76a27b3549db7e9fc58ab)`(const int32 & DefaultValue) const` | Gets the value of UiHint_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUiHint`](#structFRHAPI__Loot_1a978fe0b67180757bda7ac94bcd149a94)`(int32 & OutValue) const` | Fills OutValue with the value of UiHint_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1ab6e81003e702e2862e554205330b10b0)`()` | Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1a2bfee0b8eabaed982670ded34212795d)`() const` | Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUiHint`](#structFRHAPI__Loot_1a952fbaa81d68be6b5e03f14cfb32faa9)`(int32 NewValue)` | Sets the value of UiHint_Optional and also sets UiHint_IsSet to true.
`public inline void `[`ClearUiHint`](#structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666)`()` | Clears the value of UiHint_Optional and sets UiHint_IsSet to false.
`public inline bool `[`IsUiHintDefaultValue`](#structFRHAPI__Loot_1a768434aca6d481543db42a6ba4ab04fb)`() const` | Returns true if UiHint_Optional is set and matches the default value.
`public inline void `[`SetUiHintToDefault`](#structFRHAPI__Loot_1aa04866c631982d1d3fb998505c09f763)`()` | Sets the value of UiHint_Optional to its default and also sets UiHint_IsSet to true.
`public inline FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1aee89d8de5f3ec4c4d02fcebe58ffe536)`()` | Gets the value of EffectiveFrom_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1af1e0e5abfd28052cd1547cdeea002d45)`() const` | Gets the value of EffectiveFrom_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1afd63a6a118a81067a8e746526476adb2)`(const FDateTime & DefaultValue) const` | Gets the value of EffectiveFrom_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEffectiveFrom`](#structFRHAPI__Loot_1af51ee7d4f692fc48fa6281955948f0ef)`(FDateTime & OutValue) const` | Fills OutValue with the value of EffectiveFrom_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a1f2eb7316df3787d9135fcef3046d11e)`()` | Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a47c40fd04c127180dfcb148cd008593f)`() const` | Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1a9f10f21fbb584f0bb85f49e714df8c73)`(FDateTime NewValue)` | Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true.
`public inline void `[`ClearEffectiveFrom`](#structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008)`()` | Clears the value of EffectiveFrom_Optional and sets EffectiveFrom_IsSet to false.
`public inline ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1ac60f5021029d7495532f4e92256d2c1c)`()` | Gets the value of QuantityType_Optional, regardless of it having been set.
`public inline const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a52f893e2ba2b5efb550dc3d4219ae57c)`() const` | Gets the value of QuantityType_Optional, regardless of it having been set.
`public inline const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a98bb97bded9f560574b06547ca11c68b)`(const ERHAPI_QuantityType & DefaultValue) const` | Gets the value of QuantityType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantityType`](#structFRHAPI__Loot_1a06585bd89d8595f273d2561085036c7f)`(ERHAPI_QuantityType & OutValue) const` | Fills OutValue with the value of QuantityType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1ab04af33e8c4c0a23eb02e03fc03e3acd)`()` | Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1af1b1fd9e5c187bae0192c0548c15ef26)`() const` | Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantityType`](#structFRHAPI__Loot_1a1117831c87af22af2588aed09ce98e5a)`(ERHAPI_QuantityType NewValue)` | Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true.
`public inline void `[`ClearQuantityType`](#structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd)`()` | Clears the value of QuantityType_Optional and sets QuantityType_IsSet to false.
`public inline int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1abdb65cbbe843109fc780c5896e836d84)`()` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a8407f742227106b6e18f2d68286e7f8b)`() const` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a5a93c513af4fb98079d1f4e8f8e48ef5)`(const int32 & DefaultValue) const` | Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a39ff579e93b70184c70016e8f8370f3d)`(int32 & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1ae8af82ddb950d6e8ab30f1210d26fd57)`()` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1aef08112c1a56763c36d5e592d06901f3)`() const` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1aaca93c71048ee7c5760210d4f3cf5b79)`(int32 NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50)`()` | Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.
`public inline bool `[`IsQuantityMultInventoryItemIdDefaultValue`](#structFRHAPI__Loot_1a1c513bf258edd56413a96b8e4ca2f63d)`() const` | Returns true if QuantityMultInventoryItemId_Optional is set and matches the default value.
`public inline void `[`SetQuantityMultInventoryItemIdToDefault`](#structFRHAPI__Loot_1a480179232e881178aa0bae6eac822e72)`()` | Sets the value of QuantityMultInventoryItemId_Optional to its default and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a78b6c6b4774fab979e3ad6f8eb81949b)`()` | Gets the value of IsClaimableByClient_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a07b4aebdcd35fc8b7954ac84d3a47fde)`() const` | Gets the value of IsClaimableByClient_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1ad7c1e53d67d82fdf3c2a45695da55930)`(const bool & DefaultValue) const` | Gets the value of IsClaimableByClient_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1ae2cea6c0c8a4bde7087ab75ed5b0e10d)`(bool & OutValue) const` | Fills OutValue with the value of IsClaimableByClient_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1a2a12a87471302f579b421e3ad810080b)`()` | Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1a66a594b011b922e023d0056aeed59a4b)`() const` | Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1aec4627b3108dae64c60cb3b50ad49241)`(bool NewValue)` | Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true.
`public inline void `[`ClearIsClaimableByClient`](#structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6)`()` | Clears the value of IsClaimableByClient_Optional and sets IsClaimableByClient_IsSet to false.
`public inline bool `[`IsIsClaimableByClientDefaultValue`](#structFRHAPI__Loot_1a9d2152f9ebbac480467ccf601a3fe673)`() const` | Returns true if IsClaimableByClient_Optional is set and matches the default value.
`public inline void `[`SetIsClaimableByClientToDefault`](#structFRHAPI__Loot_1a336c1ad23684075d60e7da97dca72e26)`()` | Sets the value of IsClaimableByClient_Optional to its default and also sets IsClaimableByClient_IsSet to true.
`public inline int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1ae8cb1df8ccb738ea8ce1ed44ead0ba12)`()` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1aab3c0ef8a61f14416bd328b690a05354)`() const` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a373844143f5d643286d9fa24a8a22f5a)`(const int32 & DefaultValue) const` | Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTimeFrameId`](#structFRHAPI__Loot_1aa90943249db3ef3ec9b0a64d09c3e048)`(int32 & OutValue) const` | Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1a18333ea3d1951ca2a8754049decc3dc7)`()` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1a9cc0c0ba12e5bddd72309501ee667807)`() const` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTimeFrameId`](#structFRHAPI__Loot_1ad5aa07b2d5574fd5bea4e1ec085627d7)`(int32 NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.
`public inline void `[`ClearTimeFrameId`](#structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0)`()` | Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.
`public inline bool `[`IsTimeFrameIdDefaultValue`](#structFRHAPI__Loot_1ab7ce5827e1a9a6f065f55fa958ea9dfe)`() const` | Returns true if TimeFrameId_Optional is set and matches the default value.
`public inline void `[`SetTimeFrameIdToDefault`](#structFRHAPI__Loot_1aaaf27b49e24ee23b0584f580d46d0e36)`()` | Sets the value of TimeFrameId_Optional to its default and also sets TimeFrameId_IsSet to true.
`public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a3f4efa8c5d7eab831433c61eee98789f)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a158e18ae64ebfb2da85b638c6a0dd61d)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a9f4f7dc197733865c1ed143ec1cba51c)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1aa46c343b94bb7c9bc8d7c82ecdeb13e2)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1aff754e919618374602735eb3b0b9d57b)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1a97bb08ebed28d27c5e62732775dbc727)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1a87abed0a46f496629ad2b138e62c8b70)`(ERHAPI_InventoryBucket NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a1ae16806e9cb8f3051903c5a55e4a986)`()` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1ac4f6778d5b2a41b175b1d69b7460bd85)`() const` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a30605e03961ef334f131fae77c39559a)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` | Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a75e8680087f9474f45dae8497cf61f86)`(ERHAPI_XpQuantityTransform & OutValue) const` | Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1ad73ddf32cad8f18aa0ccfdda0bf101f1)`()` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1a8a3cb2cc1fc5d253a7eb1d1168cbedb4)`() const` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1a57b9733c7869bd1eecf9fab24f6d4104)`(ERHAPI_XpQuantityTransform NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.
`public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da)`()` | Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.
`public inline FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a3b85b73e88cefbdde01435440a11076d)`()` | Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a412f4764df6dfb5cee18e7fa883a1896)`() const` | Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a71bdcce58525f93601c85b385ce5141e)`(const FString & DefaultValue) const` | Gets the value of CurrentPricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a1cdd271fa5085a0400483f9479cd3240)`(FString & OutValue) const` | Fills OutValue with the value of CurrentPricePointGuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1a2c4eb929baaaee872a3b88eb0b7ecd86)`()` | Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1af7fc55fbbac53f0aa80ea2a149d4efd1)`() const` | Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1a1a9da553d93d53bfc2fa81ac6d489070)`(FString NewValue)` | Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true.
`public inline void `[`ClearCurrentPricePointGuid`](#structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e)`()` | Clears the value of CurrentPricePointGuid_Optional and sets CurrentPricePointGuid_IsSet to false.
`public inline FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1aa9d374bc62fd3b59b776a17b1834bc9f)`()` | Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a791fe69ee647033dd38511bc3b11d3f0)`() const` | Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a8ee4701f8e546cef003f40836fb11e9f)`(const FString & DefaultValue) const` | Gets the value of PreSalePricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a566fb155c23cbc637cbfa1bf07bd59d5)`(FString & OutValue) const` | Fills OutValue with the value of PreSalePricePointGuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1affcacd5fafc0758c39e9196ecd95f56f)`()` | Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1a792dbbffbe29595646210c49c93b4c57)`() const` | Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1ad75446329a6cd63178df57c06b268277)`(FString NewValue)` | Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true.
`public inline void `[`ClearPreSalePricePointGuid`](#structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e)`()` | Clears the value of PreSalePricePointGuid_Optional and sets PreSalePricePointGuid_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1adac9909b3816a31768afbd01c129f76b)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a7168aeb8126ef8adb139410146ccf77e)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1acdf9b0a96fc3568814e93a938f79a57c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Loot_1a5cc085454f37806d9400e794b7d64ab5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1a97c1582a19ea5d336b44a8bbf3a7611c)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1a59c09e2560aebb2bfc588102831cdc73)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Loot_1ad535f49eefaa68050d429b0f0dbebd2b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a22ad3a8f1b3ff1bb6b6444f74a6ac17a)`()` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1af2c0aa49b89341a3b62b8a4a87402aa7)`() const` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1aff89e7fdd36eddb551bdd11499f13da9)`(const int32 & DefaultValue) const` | Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a99f6530818176b2d7276082dba8de91a)`(int32 & OutValue) const` | Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1aa004b1374099fa67b9f31e6e18242fcf)`()` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1a41c1e6a38321871cbd2beef41f18c219)`() const` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1adfc8bce30a4d95c2471aabaae77045cb)`(int32 NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.
`public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df)`()` | Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.
`public inline bool `[`IsHardQuantityMaximumDefaultValue`](#structFRHAPI__Loot_1a1dcf73ab36076f3fe98df72496ac7ae1)`() const` | Returns true if HardQuantityMaximum_Optional is set and matches the default value.
`public inline void `[`SetHardQuantityMaximumToDefault`](#structFRHAPI__Loot_1ae75d4313ecf4e431d50d1a6defb18831)`()` | Sets the value of HardQuantityMaximum_Optional to its default and also sets HardQuantityMaximum_IsSet to true.

#### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Loot_1a3ac4b8fa1534ddc987f9809a78b0f573) <a id="structFRHAPI__Loot_1a3ac4b8fa1534ddc987f9809a78b0f573"></a>

Custom data associated with the resource.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Loot_1ab5141af81d9f12541fa2a640cc9025d5) <a id="structFRHAPI__Loot_1ab5141af81d9f12541fa2a640cc9025d5"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public int32 `[`LootId`](#structFRHAPI__Loot_1a5f92839acf839d6c49b57b1cc66dba4f) <a id="structFRHAPI__Loot_1a5f92839acf839d6c49b57b1cc66dba4f"></a>

The Loot ID.

<br>
#### `public int32 `[`VendorId`](#structFRHAPI__Loot_1aeebadf01967a63239b42fe6094e7a9c5) <a id="structFRHAPI__Loot_1aeebadf01967a63239b42fe6094e7a9c5"></a>

The Vendor ID.

<br>
#### `public int32 `[`ItemId_Optional`](#structFRHAPI__Loot_1a8cd4e2427345b15dd5a3a12f5fdc7497) <a id="structFRHAPI__Loot_1a8cd4e2427345b15dd5a3a12f5fdc7497"></a>

The Item ID. Optional Item that will be granted to the player if Sub Vendor ID is not specified.

<br>
#### `public bool `[`ItemId_IsSet`](#structFRHAPI__Loot_1ab203c9039289860b29222870d6c41689) <a id="structFRHAPI__Loot_1ab203c9039289860b29222870d6c41689"></a>

true if ItemId_Optional has been set to a value

<br>
#### `public `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` `[`Item_Optional`](#structFRHAPI__Loot_1a2465b63dbf01c76fa9cc736f7356d278) <a id="structFRHAPI__Loot_1a2465b63dbf01c76fa9cc736f7356d278"></a>

In-line Item definition. Optional Item that will be granted to the player if Sub Vendor ID is not specified.

<br>
#### `public bool `[`Item_IsSet`](#structFRHAPI__Loot_1a5511b7f6472a4da05f937a4262f15843) <a id="structFRHAPI__Loot_1a5511b7f6472a4da05f937a4262f15843"></a>

true if Item_Optional has been set to a value

<br>
#### `public int32 `[`SubVendorId_Optional`](#structFRHAPI__Loot_1a9869e1988c40476054db483a6b763e73) <a id="structFRHAPI__Loot_1a9869e1988c40476054db483a6b763e73"></a>

The Sub Vendor ID. Optional Vendor ID that will be used to fulfill the Loot instead of granting the Item.

<br>
#### `public bool `[`SubVendorId_IsSet`](#structFRHAPI__Loot_1a97e58634ed48e68a3eb038df38ede464) <a id="structFRHAPI__Loot_1a97e58634ed48e68a3eb038df38ede464"></a>

true if SubVendorId_Optional has been set to a value

<br>
#### `public int32 `[`Quantity_Optional`](#structFRHAPI__Loot_1a507bf92cd6bc234afa66946931e806b9) <a id="structFRHAPI__Loot_1a507bf92cd6bc234afa66946931e806b9"></a>

The quantity of the Item or Sub Vendor to fulfill. This will be multiplied by the quantity of fulfilled Loot and the parent Loot if quantity_type is relative.

<br>
#### `public bool `[`Quantity_IsSet`](#structFRHAPI__Loot_1abb9332211b9db78f3eb03556977d1add) <a id="structFRHAPI__Loot_1abb9332211b9db78f3eb03556977d1add"></a>

true if Quantity_Optional has been set to a value

<br>
#### `public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__Loot_1a43c10b4f70841b48fdec3f81de3325f5) <a id="structFRHAPI__Loot_1a43c10b4f70841b48fdec3f81de3325f5"></a>

The Inventory Selector Type. Determine how the Inventory is selected and quantity is modified.

<br>
#### `public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__Loot_1afde2ba63a4fe363fd04030d691f53ea8) <a id="structFRHAPI__Loot_1afde2ba63a4fe363fd04030d691f53ea8"></a>

true if InventorySelectorType_Optional has been set to a value

<br>
#### `public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__Loot_1a05d38a166aa71dceb816fcf5c3883655) <a id="structFRHAPI__Loot_1a05d38a166aa71dceb816fcf5c3883655"></a>

The Inventory Operation. Determine how the Loot quantity is modified based on the context it is fulfilled in. This also determines the order Loot will be fulfilled in when sort_order is the same.

<br>
#### `public bool `[`InventoryOperation_IsSet`](#structFRHAPI__Loot_1ae432979fcb368180c320fe3a859b9fc8) <a id="structFRHAPI__Loot_1ae432979fcb368180c320fe3a859b9fc8"></a>

true if InventoryOperation_Optional has been set to a value

<br>
#### `public bool `[`Active_Optional`](#structFRHAPI__Loot_1a54948ce1e603d2ab0bf23d1b77e90866) <a id="structFRHAPI__Loot_1a54948ce1e603d2ab0bf23d1b77e90866"></a>

Determines if the Loot is active. Inactive Loot will not be fulfilled.

<br>
#### `public bool `[`Active_IsSet`](#structFRHAPI__Loot_1aad1d01bf7a99966aa59f72495e840ec1) <a id="structFRHAPI__Loot_1aad1d01bf7a99966aa59f72495e840ec1"></a>

true if Active_Optional has been set to a value

<br>
#### `public int32 `[`SortOrder_Optional`](#structFRHAPI__Loot_1ab906a8714eb2296f6017caac3d06f088) <a id="structFRHAPI__Loot_1ab906a8714eb2296f6017caac3d06f088"></a>

The sort order of the Loot. Lower sort order will be fulfilled first. Inventory Operation is used as a tie breaker when sort_order is the same.

<br>
#### `public bool `[`SortOrder_IsSet`](#structFRHAPI__Loot_1ac2495f13e749de6982277aecf580171b) <a id="structFRHAPI__Loot_1ac2495f13e749de6982277aecf580171b"></a>

true if SortOrder_Optional has been set to a value

<br>
#### `public int32 `[`DropWeight_Optional`](#structFRHAPI__Loot_1ae52d49075f11b8b4a6cbe93634c4d141) <a id="structFRHAPI__Loot_1ae52d49075f11b8b4a6cbe93634c4d141"></a>

The drop weight of the Loot. Higher drop weight will be more likely to be fulfilled.

<br>
#### `public bool `[`DropWeight_IsSet`](#structFRHAPI__Loot_1ac826cf7c16d679150786eef688b22702) <a id="structFRHAPI__Loot_1ac826cf7c16d679150786eef688b22702"></a>

true if DropWeight_Optional has been set to a value

<br>
#### `public bool `[`FillInNewOrder_Optional`](#structFRHAPI__Loot_1a7c8b3f3950233c904f9a0fa08fc1fa5d) <a id="structFRHAPI__Loot_1a7c8b3f3950233c904f9a0fa08fc1fa5d"></a>

When dropped in a randomly sampled vendor, will this create a new order or fill inline?. The primary use case for this is when you want the same loot to be dropped multiple times in a randomly sampled vendor.

<br>
#### `public bool `[`FillInNewOrder_IsSet`](#structFRHAPI__Loot_1a88b56445963d45d4728243e1bf1308c4) <a id="structFRHAPI__Loot_1a88b56445963d45d4728243e1bf1308c4"></a>

true if FillInNewOrder_Optional has been set to a value

<br>
#### `public bool `[`AllowPartialBundles_Optional`](#structFRHAPI__Loot_1ae8fcee9d99c567d50b57e143769a7bc8) <a id="structFRHAPI__Loot_1ae8fcee9d99c567d50b57e143769a7bc8"></a>

When dropped in a randomly sampled vendor, will the sub vendor allow dropping part of the the bundle? False means it will only drop if the entire sub vendor can be given to the player.

<br>
#### `public bool `[`AllowPartialBundles_IsSet`](#structFRHAPI__Loot_1ad84758793e1dff016a53cc580fe15916) <a id="structFRHAPI__Loot_1ad84758793e1dff016a53cc580fe15916"></a>

true if AllowPartialBundles_Optional has been set to a value

<br>
#### `public int32 `[`RequiredItemId_Optional`](#structFRHAPI__Loot_1ae088775af177f58b9bac7cdfe69b38ed) <a id="structFRHAPI__Loot_1ae088775af177f58b9bac7cdfe69b38ed"></a>

Item required to be owned/rented to drop this Loot in a randomly sampled vendor.

<br>
#### `public bool `[`RequiredItemId_IsSet`](#structFRHAPI__Loot_1a47d9045f2c086ffa823850f5a02f0b60) <a id="structFRHAPI__Loot_1a47d9045f2c086ffa823850f5a02f0b60"></a>

true if RequiredItemId_Optional has been set to a value

<br>
#### `public int32 `[`RequiredItemCount_Optional`](#structFRHAPI__Loot_1abf8e2c11c8acf567243cec8c806b7a62) <a id="structFRHAPI__Loot_1abf8e2c11c8acf567243cec8c806b7a62"></a>

Amount of the required_item_id to be owned/rented to drop this Loot in a randomly sampled vendor.

<br>
#### `public bool `[`RequiredItemCount_IsSet`](#structFRHAPI__Loot_1ada979daeddf09bd7b4b566aa9bf3df28) <a id="structFRHAPI__Loot_1ada979daeddf09bd7b4b566aa9bf3df28"></a>

true if RequiredItemCount_Optional has been set to a value

<br>
#### `public int32 `[`StackLimit_Optional`](#structFRHAPI__Loot_1a970fa609225d3c8af096f35f2d17cd9a) <a id="structFRHAPI__Loot_1a970fa609225d3c8af096f35f2d17cd9a"></a>

Amount of owned/rented of this Loot's item that will prevent this Loot from dropping in a randomly sampled vendor.

<br>
#### `public bool `[`StackLimit_IsSet`](#structFRHAPI__Loot_1a00cb9abdbcd7404d7b093d3c0c8152f1) <a id="structFRHAPI__Loot_1a00cb9abdbcd7404d7b093d3c0c8152f1"></a>

true if StackLimit_Optional has been set to a value

<br>
#### `public int32 `[`UiHint_Optional`](#structFRHAPI__Loot_1ab4d0035bf9df79460aa855ed965bc633) <a id="structFRHAPI__Loot_1ab4d0035bf9df79460aa855ed965bc633"></a>

<br>
#### `public bool `[`UiHint_IsSet`](#structFRHAPI__Loot_1a3a7fc556249776abb1bd0aec415a97d9) <a id="structFRHAPI__Loot_1a3a7fc556249776abb1bd0aec415a97d9"></a>

true if UiHint_Optional has been set to a value

<br>
#### `public FDateTime `[`EffectiveFrom_Optional`](#structFRHAPI__Loot_1a12465a1abc8d7ed119bf9f65ab3d33a2) <a id="structFRHAPI__Loot_1a12465a1abc8d7ed119bf9f65ab3d33a2"></a>

<br>
#### `public bool `[`EffectiveFrom_IsSet`](#structFRHAPI__Loot_1aaf2276f068ed4507f5ac347af87b49c3) <a id="structFRHAPI__Loot_1aaf2276f068ed4507f5ac347af87b49c3"></a>

true if EffectiveFrom_Optional has been set to a value

<br>
#### `public ERHAPI_QuantityType `[`QuantityType_Optional`](#structFRHAPI__Loot_1a8e89961081f18de1c004e987f27dcb8c) <a id="structFRHAPI__Loot_1a8e89961081f18de1c004e987f27dcb8c"></a>

Determines how the quantity is modified in the context it is fulfilled in.

<br>
#### `public bool `[`QuantityType_IsSet`](#structFRHAPI__Loot_1a0d4fa18901b7c09f35f00642da594250) <a id="structFRHAPI__Loot_1a0d4fa18901b7c09f35f00642da594250"></a>

true if QuantityType_Optional has been set to a value

<br>
#### `public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__Loot_1a06a811681044c08cfff63b71fcc1003c) <a id="structFRHAPI__Loot_1a06a811681044c08cfff63b71fcc1003c"></a>

When fulfilling Loot if this is set the quantity will be multiplied by the quantity of this Item in the Player's Inventory.

<br>
#### `public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__Loot_1a564d2f00696631dab3416ab83691c8c7) <a id="structFRHAPI__Loot_1a564d2f00696631dab3416ab83691c8c7"></a>

true if QuantityMultInventoryItemId_Optional has been set to a value

<br>
#### `public bool `[`IsClaimableByClient_Optional`](#structFRHAPI__Loot_1a311ebbe8b318350f6bdea1992d3db086) <a id="structFRHAPI__Loot_1a311ebbe8b318350f6bdea1992d3db086"></a>

Determines if the Loot can be claimed by the client. This is dangerous without the correct loot confiuration as a client could claim Loot multiple times.

<br>
#### `public bool `[`IsClaimableByClient_IsSet`](#structFRHAPI__Loot_1afe049eb4ba6639b5ac75b652ef7c1059) <a id="structFRHAPI__Loot_1afe049eb4ba6639b5ac75b652ef7c1059"></a>

true if IsClaimableByClient_Optional has been set to a value

<br>
#### `public int32 `[`TimeFrameId_Optional`](#structFRHAPI__Loot_1af9803c09b5cca0b04f5cf8f299944e87) <a id="structFRHAPI__Loot_1af9803c09b5cca0b04f5cf8f299944e87"></a>

The Time Frame ID. Optional Time Frame ID that will be used the expiration of Loot when it is fulfilled.

<br>
#### `public bool `[`TimeFrameId_IsSet`](#structFRHAPI__Loot_1adcc16ccb1b5c1a2fc504ce5543504057) <a id="structFRHAPI__Loot_1adcc16ccb1b5c1a2fc504ce5543504057"></a>

true if TimeFrameId_Optional has been set to a value

<br>
#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__Loot_1ac130c02eb58b7c8d68b93889b81db06d) <a id="structFRHAPI__Loot_1ac130c02eb58b7c8d68b93889b81db06d"></a>

Inventory Bucket to use for this Loot.

<br>
#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__Loot_1a68f88c797ce9bb3516e1f19196a00424) <a id="structFRHAPI__Loot_1a68f88c797ce9bb3516e1f19196a00424"></a>

true if UseInventoryBucket_Optional has been set to a value

<br>
#### `public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__Loot_1ab7bd194e175ef8b245205e8e723d9532) <a id="structFRHAPI__Loot_1ab7bd194e175ef8b245205e8e723d9532"></a>

Allows treating quantity as additional levels to grant to the Player.

<br>
#### `public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__Loot_1a9d0c5c3838e45cd8f3311f0866b2141a) <a id="structFRHAPI__Loot_1a9d0c5c3838e45cd8f3311f0866b2141a"></a>

true if XpQuantityTransformType_Optional has been set to a value

<br>
#### `public FString `[`CurrentPricePointGuid_Optional`](#structFRHAPI__Loot_1a705277f1b2e48fd2b70cfb5cf984dd4d) <a id="structFRHAPI__Loot_1a705277f1b2e48fd2b70cfb5cf984dd4d"></a>

The current price point guid. Optional Price Point ID that will be used to determine the price of the Loot when it is fulfilled.

<br>
#### `public bool `[`CurrentPricePointGuid_IsSet`](#structFRHAPI__Loot_1a57d3d52962158cb7136a373762b5be5e) <a id="structFRHAPI__Loot_1a57d3d52962158cb7136a373762b5be5e"></a>

true if CurrentPricePointGuid_Optional has been set to a value

<br>
#### `public FString `[`PreSalePricePointGuid_Optional`](#structFRHAPI__Loot_1abcf89f067a2db68ae1244e2d9507cf42) <a id="structFRHAPI__Loot_1abcf89f067a2db68ae1244e2d9507cf42"></a>

The pre sale price point guid. Optional Price Point ID that will be used to show the previous price of the Loot.

<br>
#### `public bool `[`PreSalePricePointGuid_IsSet`](#structFRHAPI__Loot_1af34c049ed2551deb2dc219b61a8dfd4c) <a id="structFRHAPI__Loot_1af34c049ed2551deb2dc219b61a8dfd4c"></a>

true if PreSalePricePointGuid_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Loot_1acf3ab767cf43aebb4a1c5e9eaa5ed60d) <a id="structFRHAPI__Loot_1acf3ab767cf43aebb4a1c5e9eaa5ed60d"></a>

Cache info for the Loot.

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Loot_1aafb036901a2d16ef1337d520d808ec6b) <a id="structFRHAPI__Loot_1aafb036901a2d16ef1337d520d808ec6b"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__Loot_1aa6a8b8fcd71d2911a55ea28b6be66cde) <a id="structFRHAPI__Loot_1aa6a8b8fcd71d2911a55ea28b6be66cde"></a>

Hard cap on quantity of an item this Loot can give. Disabled with 0.

<br>
#### `public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__Loot_1a7d6fe172fee6cd5f1545379d64367c01) <a id="structFRHAPI__Loot_1a7d6fe172fee6cd5f1545379d64367c01"></a>

true if HardQuantityMaximum_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Loot_1a242a4296481c5fb420d714cd32fec3ad)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Loot_1a242a4296481c5fb420d714cd32fec3ad"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Loot_1a06faa7738909f964886ad0e56d8da1ec)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Loot_1a06faa7738909f964886ad0e56d8da1ec"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a0495d616eb651af6641ec2812b920f2e)`()` <a id="structFRHAPI__Loot_1a0495d616eb651af6641ec2812b920f2e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a6406b470cab476fcf1238cec9ecbdf9c)`() const` <a id="structFRHAPI__Loot_1a6406b470cab476fcf1238cec9ecbdf9c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1ae0a3ada990e150f805128840817f4e03)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Loot_1ae0a3ada990e150f805128840817f4e03"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__Loot_1a287c688a61e03a4822e3d7a1f0e42a49)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Loot_1a287c688a61e03a4822e3d7a1f0e42a49"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1affba9d4aa84ed10beddebd0a9a46deab)`()` <a id="structFRHAPI__Loot_1affba9d4aa84ed10beddebd0a9a46deab"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1a3e5752d789f2ed8704c69c4771f50b68)`() const` <a id="structFRHAPI__Loot_1a3e5752d789f2ed8704c69c4771f50b68"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__Loot_1abb522fd63c1589b00b4ff33caf873946)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__Loot_1abb522fd63c1589b00b4ff33caf873946"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7)`()` <a id="structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline int32 & `[`GetLootId`](#structFRHAPI__Loot_1acd2ed4c712d9bed9983240653df6e25e)`()` <a id="structFRHAPI__Loot_1acd2ed4c712d9bed9983240653df6e25e"></a>

Gets the value of LootId.

<br>
#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__Loot_1a207349872f4c121f408f0fd02314ca89)`() const` <a id="structFRHAPI__Loot_1a207349872f4c121f408f0fd02314ca89"></a>

Gets the value of LootId.

<br>
#### `public inline void `[`SetLootId`](#structFRHAPI__Loot_1a18c0f6d15e5dd757c726d65a95abc6a3)`(int32 NewValue)` <a id="structFRHAPI__Loot_1a18c0f6d15e5dd757c726d65a95abc6a3"></a>

Sets the value of LootId.

<br>
#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__Loot_1ac34d328155722dece2b3d333d8110e41)`() const` <a id="structFRHAPI__Loot_1ac34d328155722dece2b3d333d8110e41"></a>

Returns true if LootId matches the default value.

<br>
#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__Loot_1a5e2f6f21cf1b05ab3abd7bd1e0b30c87)`()` <a id="structFRHAPI__Loot_1a5e2f6f21cf1b05ab3abd7bd1e0b30c87"></a>

Sets the value of LootId to its default

<br>
#### `public inline int32 & `[`GetVendorId`](#structFRHAPI__Loot_1afc06e9641cadc5e4c548d2687de6339c)`()` <a id="structFRHAPI__Loot_1afc06e9641cadc5e4c548d2687de6339c"></a>

Gets the value of VendorId.

<br>
#### `public inline const int32 & `[`GetVendorId`](#structFRHAPI__Loot_1a1f6f1d4240d320453bd4609457a22569)`() const` <a id="structFRHAPI__Loot_1a1f6f1d4240d320453bd4609457a22569"></a>

Gets the value of VendorId.

<br>
#### `public inline void `[`SetVendorId`](#structFRHAPI__Loot_1aba7abf2c233ddd25c049b5a21f485b6e)`(int32 NewValue)` <a id="structFRHAPI__Loot_1aba7abf2c233ddd25c049b5a21f485b6e"></a>

Sets the value of VendorId.

<br>
#### `public inline bool `[`IsVendorIdDefaultValue`](#structFRHAPI__Loot_1a34294c3a7a9eba0d2be427e08546868c)`() const` <a id="structFRHAPI__Loot_1a34294c3a7a9eba0d2be427e08546868c"></a>

Returns true if VendorId matches the default value.

<br>
#### `public inline void `[`SetVendorIdToDefault`](#structFRHAPI__Loot_1a7ba740230264c05551800de8b9830745)`()` <a id="structFRHAPI__Loot_1a7ba740230264c05551800de8b9830745"></a>

Sets the value of VendorId to its default

<br>
#### `public inline int32 & `[`GetItemId`](#structFRHAPI__Loot_1acbe340fce6f530fbce884bc9a4fa1766)`()` <a id="structFRHAPI__Loot_1acbe340fce6f530fbce884bc9a4fa1766"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a1cdf690a9d65f41ac2f903514b1f5f57)`() const` <a id="structFRHAPI__Loot_1a1cdf690a9d65f41ac2f903514b1f5f57"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a2fa583df5dafce861fe723c8450b93cc)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a2fa583df5dafce861fe723c8450b93cc"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetItemId`](#structFRHAPI__Loot_1af46204b226c63dbb8cdb2645fea6c50d)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1af46204b226c63dbb8cdb2645fea6c50d"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1ad6c8e92b4cdecac859dd4fff238c5af8)`()` <a id="structFRHAPI__Loot_1ad6c8e92b4cdecac859dd4fff238c5af8"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1ada95a259f5df1434d12368e86546bb20)`() const` <a id="structFRHAPI__Loot_1ada95a259f5df1434d12368e86546bb20"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetItemId`](#structFRHAPI__Loot_1a4af92839c74362c6f2f887a70a0320b2)`(int32 NewValue)` <a id="structFRHAPI__Loot_1a4af92839c74362c6f2f887a70a0320b2"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

<br>
#### `public inline void `[`ClearItemId`](#structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac)`()` <a id="structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

<br>
#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__Loot_1ab1fb89c1cd120fbdccbad20b4f1058c9)`() const` <a id="structFRHAPI__Loot_1ab1fb89c1cd120fbdccbad20b4f1058c9"></a>

Returns true if ItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__Loot_1a175257a1162b73e5e5897dc7ce9138de)`()` <a id="structFRHAPI__Loot_1a175257a1162b73e5e5897dc7ce9138de"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

<br>
#### `public inline `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1ab6b9ab768d5f3f6787f199565b9f5276)`()` <a id="structFRHAPI__Loot_1ab6b9ab768d5f3f6787f199565b9f5276"></a>

Gets the value of Item_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a055ddfc83937a90aa78b468fde6ba0ae)`() const` <a id="structFRHAPI__Loot_1a055ddfc83937a90aa78b468fde6ba0ae"></a>

Gets the value of Item_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1ae5d5dfe794234b8af9b212fdbf0ca1ff)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & DefaultValue) const` <a id="structFRHAPI__Loot_1ae5d5dfe794234b8af9b212fdbf0ca1ff"></a>

Gets the value of Item_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetItem`](#structFRHAPI__Loot_1a780c162ed85fa8ca7a9ad6895819166c)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & OutValue) const` <a id="structFRHAPI__Loot_1a780c162ed85fa8ca7a9ad6895819166c"></a>

Fills OutValue with the value of Item_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1af92d71a4932d1c847404aa86a673dbfc)`()` <a id="structFRHAPI__Loot_1af92d71a4932d1c847404aa86a673dbfc"></a>

Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1ad32395f6be68999b7517822060b100b6)`() const` <a id="structFRHAPI__Loot_1ad32395f6be68999b7517822060b100b6"></a>

Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetItem`](#structFRHAPI__Loot_1a73ff925b5e85d57f72f4e12f2167d718)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` NewValue)` <a id="structFRHAPI__Loot_1a73ff925b5e85d57f72f4e12f2167d718"></a>

Sets the value of Item_Optional and also sets Item_IsSet to true.

<br>
#### `public inline void `[`ClearItem`](#structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8)`()` <a id="structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8"></a>

Clears the value of Item_Optional and sets Item_IsSet to false.

<br>
#### `public inline int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a15a91fdfd7149929f1ee3b10ef2fc4fe)`()` <a id="structFRHAPI__Loot_1a15a91fdfd7149929f1ee3b10ef2fc4fe"></a>

Gets the value of SubVendorId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1ad6c05065e6d1cc723d0da0272e1f57ce)`() const` <a id="structFRHAPI__Loot_1ad6c05065e6d1cc723d0da0272e1f57ce"></a>

Gets the value of SubVendorId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a73101b64e45e1926453dfe6b743f9f1c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a73101b64e45e1926453dfe6b743f9f1c"></a>

Gets the value of SubVendorId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSubVendorId`](#structFRHAPI__Loot_1ab6c9112b74f2cb0a103d65bb19897165)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1ab6c9112b74f2cb0a103d65bb19897165"></a>

Fills OutValue with the value of SubVendorId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a0a6a3efe02e0991a98ed13e8c69b2992)`()` <a id="structFRHAPI__Loot_1a0a6a3efe02e0991a98ed13e8c69b2992"></a>

Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a0f1770874ce644d15d3354c3a9a99436)`() const` <a id="structFRHAPI__Loot_1a0f1770874ce644d15d3354c3a9a99436"></a>

Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSubVendorId`](#structFRHAPI__Loot_1abd0423b5f7bd4a9d7d17f8632f9e684a)`(int32 NewValue)` <a id="structFRHAPI__Loot_1abd0423b5f7bd4a9d7d17f8632f9e684a"></a>

Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true.

<br>
#### `public inline void `[`ClearSubVendorId`](#structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058)`()` <a id="structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058"></a>

Clears the value of SubVendorId_Optional and sets SubVendorId_IsSet to false.

<br>
#### `public inline bool `[`IsSubVendorIdDefaultValue`](#structFRHAPI__Loot_1ac0a741bcd286b2adccd25fe38f97983b)`() const` <a id="structFRHAPI__Loot_1ac0a741bcd286b2adccd25fe38f97983b"></a>

Returns true if SubVendorId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetSubVendorIdToDefault`](#structFRHAPI__Loot_1afd50a2496a24d46fddc881f22eed4b02)`()` <a id="structFRHAPI__Loot_1afd50a2496a24d46fddc881f22eed4b02"></a>

Sets the value of SubVendorId_Optional to its default and also sets SubVendorId_IsSet to true.

<br>
#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__Loot_1ae066065a51d0fb4abc472d85f9ddcc4b)`()` <a id="structFRHAPI__Loot_1ae066065a51d0fb4abc472d85f9ddcc4b"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1a87646105d6db15b764841a20f4540bbb)`() const` <a id="structFRHAPI__Loot_1a87646105d6db15b764841a20f4540bbb"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1ade46fe47ab6ded01d87ed716e4846bbc)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ade46fe47ab6ded01d87ed716e4846bbc"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetQuantity`](#structFRHAPI__Loot_1a4ecfe9e6cf43b74396de5ca5366f058e)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a4ecfe9e6cf43b74396de5ca5366f058e"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1a093f82d870c44e5aeffe9ca34fcd8973)`()` <a id="structFRHAPI__Loot_1a093f82d870c44e5aeffe9ca34fcd8973"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1af6ec07f3923ed815527802fa2048f093)`() const` <a id="structFRHAPI__Loot_1af6ec07f3923ed815527802fa2048f093"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetQuantity`](#structFRHAPI__Loot_1a39296ab17c155afc422c7aa9e780bcf7)`(int32 NewValue)` <a id="structFRHAPI__Loot_1a39296ab17c155afc422c7aa9e780bcf7"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

<br>
#### `public inline void `[`ClearQuantity`](#structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51)`()` <a id="structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

<br>
#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__Loot_1a5e81fc2e46f491acafcf83ec9eb97c7f)`() const` <a id="structFRHAPI__Loot_1a5e81fc2e46f491acafcf83ec9eb97c7f"></a>

Returns true if Quantity_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__Loot_1a88fbbb95da4cab22777b629c403c4155)`()` <a id="structFRHAPI__Loot_1a88fbbb95da4cab22777b629c403c4155"></a>

Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.

<br>
#### `public inline ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1aa322e86131bd4530064572a111b6f43a)`()` <a id="structFRHAPI__Loot_1aa322e86131bd4530064572a111b6f43a"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1aa0ead34cef88232549e06e543b639955)`() const` <a id="structFRHAPI__Loot_1aa0ead34cef88232549e06e543b639955"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1af4edd31cd9c5c22d40f1a3d8c108a4d5)`(const ERHAPI_InventorySelector & DefaultValue) const` <a id="structFRHAPI__Loot_1af4edd31cd9c5c22d40f1a3d8c108a4d5"></a>

Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInventorySelectorType`](#structFRHAPI__Loot_1ab13961c4e92163e6be9c25a5db91dcaf)`(ERHAPI_InventorySelector & OutValue) const` <a id="structFRHAPI__Loot_1ab13961c4e92163e6be9c25a5db91dcaf"></a>

Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1aa7f8ffa074e9bd708594da02b10f29d8)`()` <a id="structFRHAPI__Loot_1aa7f8ffa074e9bd708594da02b10f29d8"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1a16a06acaebe82714beac25281b06816f)`() const` <a id="structFRHAPI__Loot_1a16a06acaebe82714beac25281b06816f"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1a4e8c9db874e65ac31e920a7fa2da62ae)`(ERHAPI_InventorySelector NewValue)` <a id="structFRHAPI__Loot_1a4e8c9db874e65ac31e920a7fa2da62ae"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.

<br>
#### `public inline void `[`ClearInventorySelectorType`](#structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b)`()` <a id="structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b"></a>

Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.

<br>
#### `public inline ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1ad7302341dbcffaff54d40249299cc812)`()` <a id="structFRHAPI__Loot_1ad7302341dbcffaff54d40249299cc812"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a1f8266c7f24dd4d474446d96bec2eb5b)`() const` <a id="structFRHAPI__Loot_1a1f8266c7f24dd4d474446d96bec2eb5b"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a67e40cc05376283592441d4fde58cb0a)`(const ERHAPI_InventoryOperation & DefaultValue) const` <a id="structFRHAPI__Loot_1a67e40cc05376283592441d4fde58cb0a"></a>

Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInventoryOperation`](#structFRHAPI__Loot_1a4afcfa7ae60e4c96381c5d97b563814c)`(ERHAPI_InventoryOperation & OutValue) const` <a id="structFRHAPI__Loot_1a4afcfa7ae60e4c96381c5d97b563814c"></a>

Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1a244d8d5d2ae0c7ca5a40250d7be190bf)`()` <a id="structFRHAPI__Loot_1a244d8d5d2ae0c7ca5a40250d7be190bf"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1a41a1ef51943307008202bdb908e6ac67)`() const` <a id="structFRHAPI__Loot_1a41a1ef51943307008202bdb908e6ac67"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInventoryOperation`](#structFRHAPI__Loot_1a575445562782f377e6df5caabe489b3c)`(ERHAPI_InventoryOperation NewValue)` <a id="structFRHAPI__Loot_1a575445562782f377e6df5caabe489b3c"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.

<br>
#### `public inline void `[`ClearInventoryOperation`](#structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68)`()` <a id="structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68"></a>

Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.

<br>
#### `public inline bool & `[`GetActive`](#structFRHAPI__Loot_1aaa40a6889d2d480eeda7900dd5826c4c)`()` <a id="structFRHAPI__Loot_1aaa40a6889d2d480eeda7900dd5826c4c"></a>

Gets the value of Active_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetActive`](#structFRHAPI__Loot_1a3ff4c80bbc2b0d4f018ecf6681c6a27f)`() const` <a id="structFRHAPI__Loot_1a3ff4c80bbc2b0d4f018ecf6681c6a27f"></a>

Gets the value of Active_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetActive`](#structFRHAPI__Loot_1a15d262ce19e2772650104738f4f62438)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1a15d262ce19e2772650104738f4f62438"></a>

Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetActive`](#structFRHAPI__Loot_1aba509de727c43ec1d964c4463432a858)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1aba509de727c43ec1d964c4463432a858"></a>

Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1a044a4d9031d518cfacb391a7afbb40e5)`()` <a id="structFRHAPI__Loot_1a044a4d9031d518cfacb391a7afbb40e5"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1a79471305be90e930d1e41f929e9cd574)`() const` <a id="structFRHAPI__Loot_1a79471305be90e930d1e41f929e9cd574"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetActive`](#structFRHAPI__Loot_1a24956770a2651ca7a42e687185f107ca)`(bool NewValue)` <a id="structFRHAPI__Loot_1a24956770a2651ca7a42e687185f107ca"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true.

<br>
#### `public inline void `[`ClearActive`](#structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8)`()` <a id="structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8"></a>

Clears the value of Active_Optional and sets Active_IsSet to false.

<br>
#### `public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__Loot_1a21764f599b5c382557c5f5f3f4d42e20)`() const` <a id="structFRHAPI__Loot_1a21764f599b5c382557c5f5f3f4d42e20"></a>

Returns true if Active_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetActiveToDefault`](#structFRHAPI__Loot_1a99fdeb71b6776d8b69d964f1f6554e50)`()` <a id="structFRHAPI__Loot_1a99fdeb71b6776d8b69d964f1f6554e50"></a>

Sets the value of Active_Optional to its default and also sets Active_IsSet to true.

<br>
#### `public inline int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a5f12da47e4d500c12717aa05d5b3297d)`()` <a id="structFRHAPI__Loot_1a5f12da47e4d500c12717aa05d5b3297d"></a>

Gets the value of SortOrder_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a5b6d3cb18b763ebe1aa4722ecf889add)`() const` <a id="structFRHAPI__Loot_1a5b6d3cb18b763ebe1aa4722ecf889add"></a>

Gets the value of SortOrder_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1aff690307120cf4a6836a8922ab12f843)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1aff690307120cf4a6836a8922ab12f843"></a>

Gets the value of SortOrder_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSortOrder`](#structFRHAPI__Loot_1a9db9bb45bbd74194e41703dc40408045)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a9db9bb45bbd74194e41703dc40408045"></a>

Fills OutValue with the value of SortOrder_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1aea4875236320e7bb00410213c35ee7b7)`()` <a id="structFRHAPI__Loot_1aea4875236320e7bb00410213c35ee7b7"></a>

Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1a2e56e4d5aadeace2ecde18cf12bf2e87)`() const` <a id="structFRHAPI__Loot_1a2e56e4d5aadeace2ecde18cf12bf2e87"></a>

Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSortOrder`](#structFRHAPI__Loot_1ab47b2699e8e365f3607b53fedf8a703a)`(int32 NewValue)` <a id="structFRHAPI__Loot_1ab47b2699e8e365f3607b53fedf8a703a"></a>

Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true.

<br>
#### `public inline void `[`ClearSortOrder`](#structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955)`()` <a id="structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955"></a>

Clears the value of SortOrder_Optional and sets SortOrder_IsSet to false.

<br>
#### `public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__Loot_1a476d6b43e6c290f07c3879d9d18f0acb)`() const` <a id="structFRHAPI__Loot_1a476d6b43e6c290f07c3879d9d18f0acb"></a>

Returns true if SortOrder_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetSortOrderToDefault`](#structFRHAPI__Loot_1a69397f89697497621e33a6ee1eb4f0a3)`()` <a id="structFRHAPI__Loot_1a69397f89697497621e33a6ee1eb4f0a3"></a>

Sets the value of SortOrder_Optional to its default and also sets SortOrder_IsSet to true.

<br>
#### `public inline int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a8a66c24b792f4f865e495d8f331dd701)`()` <a id="structFRHAPI__Loot_1a8a66c24b792f4f865e495d8f331dd701"></a>

Gets the value of DropWeight_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a1f9473f5b292c7545bb67f81be58de18)`() const` <a id="structFRHAPI__Loot_1a1f9473f5b292c7545bb67f81be58de18"></a>

Gets the value of DropWeight_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1aa2a1d678dd3b12eed0106b659e911351)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1aa2a1d678dd3b12eed0106b659e911351"></a>

Gets the value of DropWeight_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDropWeight`](#structFRHAPI__Loot_1a50ece77b36c63ce6bf2a1cb4e5d5160c)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a50ece77b36c63ce6bf2a1cb4e5d5160c"></a>

Fills OutValue with the value of DropWeight_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1a08c8342bc4a70ae819c65bb4e06a9b79)`()` <a id="structFRHAPI__Loot_1a08c8342bc4a70ae819c65bb4e06a9b79"></a>

Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1a6ab52a61886369f636297475d24f4272)`() const` <a id="structFRHAPI__Loot_1a6ab52a61886369f636297475d24f4272"></a>

Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDropWeight`](#structFRHAPI__Loot_1ac16202c61d654326df7d982186b1e3c4)`(int32 NewValue)` <a id="structFRHAPI__Loot_1ac16202c61d654326df7d982186b1e3c4"></a>

Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true.

<br>
#### `public inline void `[`ClearDropWeight`](#structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412)`()` <a id="structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412"></a>

Clears the value of DropWeight_Optional and sets DropWeight_IsSet to false.

<br>
#### `public inline bool `[`IsDropWeightDefaultValue`](#structFRHAPI__Loot_1ac612f584a88113b0c0cd73ce5a3b7486)`() const` <a id="structFRHAPI__Loot_1ac612f584a88113b0c0cd73ce5a3b7486"></a>

Returns true if DropWeight_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetDropWeightToDefault`](#structFRHAPI__Loot_1a6363ba8bb117c271097619b48a5cb685)`()` <a id="structFRHAPI__Loot_1a6363ba8bb117c271097619b48a5cb685"></a>

Sets the value of DropWeight_Optional to its default and also sets DropWeight_IsSet to true.

<br>
#### `public inline bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1ab299812c7b635f1527c2ae7e4c99cf24)`()` <a id="structFRHAPI__Loot_1ab299812c7b635f1527c2ae7e4c99cf24"></a>

Gets the value of FillInNewOrder_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a4ae0b3fb5690265834f3b2b1e0a4378f)`() const` <a id="structFRHAPI__Loot_1a4ae0b3fb5690265834f3b2b1e0a4378f"></a>

Gets the value of FillInNewOrder_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1adf50f8a5d97b9bb692ab8f19e33329dc)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1adf50f8a5d97b9bb692ab8f19e33329dc"></a>

Gets the value of FillInNewOrder_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a558055c9e4b468bfe8c2961d325e3f2c)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1a558055c9e4b468bfe8c2961d325e3f2c"></a>

Fills OutValue with the value of FillInNewOrder_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a9aaf656c31f16b38f51a3f856e264618)`()` <a id="structFRHAPI__Loot_1a9aaf656c31f16b38f51a3f856e264618"></a>

Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a768f50d9e9e71e99a4937e63b8550b91)`() const` <a id="structFRHAPI__Loot_1a768f50d9e9e71e99a4937e63b8550b91"></a>

Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a7d4fc77c178456471da3920fae5392c0)`(bool NewValue)` <a id="structFRHAPI__Loot_1a7d4fc77c178456471da3920fae5392c0"></a>

Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true.

<br>
#### `public inline void `[`ClearFillInNewOrder`](#structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb)`()` <a id="structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb"></a>

Clears the value of FillInNewOrder_Optional and sets FillInNewOrder_IsSet to false.

<br>
#### `public inline bool `[`IsFillInNewOrderDefaultValue`](#structFRHAPI__Loot_1a096cd5304b7e6ce8e38e2ed23a2d9937)`() const` <a id="structFRHAPI__Loot_1a096cd5304b7e6ce8e38e2ed23a2d9937"></a>

Returns true if FillInNewOrder_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetFillInNewOrderToDefault`](#structFRHAPI__Loot_1af49c135f5f8a2278cd294b0f856c69a0)`()` <a id="structFRHAPI__Loot_1af49c135f5f8a2278cd294b0f856c69a0"></a>

Sets the value of FillInNewOrder_Optional to its default and also sets FillInNewOrder_IsSet to true.

<br>
#### `public inline bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1adab6cf0ce7e1dbb963bdc969b2f2e3a9)`()` <a id="structFRHAPI__Loot_1adab6cf0ce7e1dbb963bdc969b2f2e3a9"></a>

Gets the value of AllowPartialBundles_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a3cac3a73120c4908629b4340e674f621)`() const` <a id="structFRHAPI__Loot_1a3cac3a73120c4908629b4340e674f621"></a>

Gets the value of AllowPartialBundles_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1adff71139123b6665d18212ee6f8a38b4)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1adff71139123b6665d18212ee6f8a38b4"></a>

Gets the value of AllowPartialBundles_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1ae024296bd76a74c144f9a0b39b819ed8)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1ae024296bd76a74c144f9a0b39b819ed8"></a>

Fills OutValue with the value of AllowPartialBundles_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a55f10e4a668b0406c3bc93574590eb20)`()` <a id="structFRHAPI__Loot_1a55f10e4a668b0406c3bc93574590eb20"></a>

Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1abb575ad6c241242566576d96291f48f3)`() const` <a id="structFRHAPI__Loot_1abb575ad6c241242566576d96291f48f3"></a>

Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1a9a3d167314fc25f7f400249ace77688b)`(bool NewValue)` <a id="structFRHAPI__Loot_1a9a3d167314fc25f7f400249ace77688b"></a>

Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true.

<br>
#### `public inline void `[`ClearAllowPartialBundles`](#structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95)`()` <a id="structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95"></a>

Clears the value of AllowPartialBundles_Optional and sets AllowPartialBundles_IsSet to false.

<br>
#### `public inline bool `[`IsAllowPartialBundlesDefaultValue`](#structFRHAPI__Loot_1a398d73cfc4df91f93783bc9f8134b731)`() const` <a id="structFRHAPI__Loot_1a398d73cfc4df91f93783bc9f8134b731"></a>

Returns true if AllowPartialBundles_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetAllowPartialBundlesToDefault`](#structFRHAPI__Loot_1afa4e37c2b1cc8728c875d20c143de249)`()` <a id="structFRHAPI__Loot_1afa4e37c2b1cc8728c875d20c143de249"></a>

Sets the value of AllowPartialBundles_Optional to its default and also sets AllowPartialBundles_IsSet to true.

<br>
#### `public inline int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1afce6e6ec62acd1bdec2f24240802866f)`()` <a id="structFRHAPI__Loot_1afce6e6ec62acd1bdec2f24240802866f"></a>

Gets the value of RequiredItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a7ffe9fefbc8b5540aba6dace5757d6c0)`() const` <a id="structFRHAPI__Loot_1a7ffe9fefbc8b5540aba6dace5757d6c0"></a>

Gets the value of RequiredItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a0cca1ce3c86675b86e8330e3dd2434b7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a0cca1ce3c86675b86e8330e3dd2434b7"></a>

Gets the value of RequiredItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRequiredItemId`](#structFRHAPI__Loot_1a4dbb79c91f8fc5203268629701fbcb0a)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a4dbb79c91f8fc5203268629701fbcb0a"></a>

Fills OutValue with the value of RequiredItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1a7d8f4a28a17ae1ea37f03ef4dfa402ee)`()` <a id="structFRHAPI__Loot_1a7d8f4a28a17ae1ea37f03ef4dfa402ee"></a>

Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1aaac67f6d3eec9d808d76a8f6cd79d52d)`() const` <a id="structFRHAPI__Loot_1aaac67f6d3eec9d808d76a8f6cd79d52d"></a>

Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRequiredItemId`](#structFRHAPI__Loot_1a2fdcfaf5a33e2e5a7d441aa17592fd34)`(int32 NewValue)` <a id="structFRHAPI__Loot_1a2fdcfaf5a33e2e5a7d441aa17592fd34"></a>

Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true.

<br>
#### `public inline void `[`ClearRequiredItemId`](#structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181)`()` <a id="structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181"></a>

Clears the value of RequiredItemId_Optional and sets RequiredItemId_IsSet to false.

<br>
#### `public inline bool `[`IsRequiredItemIdDefaultValue`](#structFRHAPI__Loot_1ac293dab8fa44d784dc6f80acbb030b9d)`() const` <a id="structFRHAPI__Loot_1ac293dab8fa44d784dc6f80acbb030b9d"></a>

Returns true if RequiredItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetRequiredItemIdToDefault`](#structFRHAPI__Loot_1ae89159c7256c304f929c487a1d6668c3)`()` <a id="structFRHAPI__Loot_1ae89159c7256c304f929c487a1d6668c3"></a>

Sets the value of RequiredItemId_Optional to its default and also sets RequiredItemId_IsSet to true.

<br>
#### `public inline int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1aec8edb7083d53fcf1bff458a05f73701)`()` <a id="structFRHAPI__Loot_1aec8edb7083d53fcf1bff458a05f73701"></a>

Gets the value of RequiredItemCount_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1afd7decfa1c4a8c1b91d2d0c53e20a736)`() const` <a id="structFRHAPI__Loot_1afd7decfa1c4a8c1b91d2d0c53e20a736"></a>

Gets the value of RequiredItemCount_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1adabba1a845f2abd7c12409c078754949)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1adabba1a845f2abd7c12409c078754949"></a>

Gets the value of RequiredItemCount_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a074bc7b7cfcfa02889b3e32e6b567875)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a074bc7b7cfcfa02889b3e32e6b567875"></a>

Fills OutValue with the value of RequiredItemCount_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a29282708cff742aac906829d7853fa0f)`()` <a id="structFRHAPI__Loot_1a29282708cff742aac906829d7853fa0f"></a>

Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a7fbab9601e235ae232d7fa5b969d5bcc)`() const` <a id="structFRHAPI__Loot_1a7fbab9601e235ae232d7fa5b969d5bcc"></a>

Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1afaf98b2ffd5b01e55e1a7689835d92fa)`(int32 NewValue)` <a id="structFRHAPI__Loot_1afaf98b2ffd5b01e55e1a7689835d92fa"></a>

Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true.

<br>
#### `public inline void `[`ClearRequiredItemCount`](#structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd)`()` <a id="structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd"></a>

Clears the value of RequiredItemCount_Optional and sets RequiredItemCount_IsSet to false.

<br>
#### `public inline bool `[`IsRequiredItemCountDefaultValue`](#structFRHAPI__Loot_1ab465a43f9dcfe5bbac7aeac109cb7c81)`() const` <a id="structFRHAPI__Loot_1ab465a43f9dcfe5bbac7aeac109cb7c81"></a>

Returns true if RequiredItemCount_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetRequiredItemCountToDefault`](#structFRHAPI__Loot_1a98f2f8f4d019a7d4a7d58658c5061857)`()` <a id="structFRHAPI__Loot_1a98f2f8f4d019a7d4a7d58658c5061857"></a>

Sets the value of RequiredItemCount_Optional to its default and also sets RequiredItemCount_IsSet to true.

<br>
#### `public inline int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1ab6d9334cf474f61dc7df2d5352779036)`()` <a id="structFRHAPI__Loot_1ab6d9334cf474f61dc7df2d5352779036"></a>

Gets the value of StackLimit_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1aef5cbdcaf9823c2b4a5fd4371ef2d7b8)`() const` <a id="structFRHAPI__Loot_1aef5cbdcaf9823c2b4a5fd4371ef2d7b8"></a>

Gets the value of StackLimit_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a27ba66d86592d63164078b80e7525a9a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a27ba66d86592d63164078b80e7525a9a"></a>

Gets the value of StackLimit_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetStackLimit`](#structFRHAPI__Loot_1a01aed35350e799d59a51e5c735eb99b6)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a01aed35350e799d59a51e5c735eb99b6"></a>

Fills OutValue with the value of StackLimit_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1a4889eb3beed4e20a0ae3224173d75768)`()` <a id="structFRHAPI__Loot_1a4889eb3beed4e20a0ae3224173d75768"></a>

Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1aa1613a69c81312e5a10108a23fbb5f6d)`() const` <a id="structFRHAPI__Loot_1aa1613a69c81312e5a10108a23fbb5f6d"></a>

Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetStackLimit`](#structFRHAPI__Loot_1a0bc52fb536085f72d57cc7aecb33337f)`(int32 NewValue)` <a id="structFRHAPI__Loot_1a0bc52fb536085f72d57cc7aecb33337f"></a>

Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true.

<br>
#### `public inline void `[`ClearStackLimit`](#structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68)`()` <a id="structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68"></a>

Clears the value of StackLimit_Optional and sets StackLimit_IsSet to false.

<br>
#### `public inline bool `[`IsStackLimitDefaultValue`](#structFRHAPI__Loot_1a4411301f594cf03ca1ac883fc5aa8092)`() const` <a id="structFRHAPI__Loot_1a4411301f594cf03ca1ac883fc5aa8092"></a>

Returns true if StackLimit_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetStackLimitToDefault`](#structFRHAPI__Loot_1a4178e812d7007b89cffdc5425bc70165)`()` <a id="structFRHAPI__Loot_1a4178e812d7007b89cffdc5425bc70165"></a>

Sets the value of StackLimit_Optional to its default and also sets StackLimit_IsSet to true.

<br>
#### `public inline int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a3d1dff274c7f9da278a3d1248d563041)`()` <a id="structFRHAPI__Loot_1a3d1dff274c7f9da278a3d1248d563041"></a>

Gets the value of UiHint_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a66b92824e54a23766a326d941b7f247c)`() const` <a id="structFRHAPI__Loot_1a66b92824e54a23766a326d941b7f247c"></a>

Gets the value of UiHint_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a0a8945ca2fa76a27b3549db7e9fc58ab)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a0a8945ca2fa76a27b3549db7e9fc58ab"></a>

Gets the value of UiHint_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetUiHint`](#structFRHAPI__Loot_1a978fe0b67180757bda7ac94bcd149a94)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a978fe0b67180757bda7ac94bcd149a94"></a>

Fills OutValue with the value of UiHint_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1ab6e81003e702e2862e554205330b10b0)`()` <a id="structFRHAPI__Loot_1ab6e81003e702e2862e554205330b10b0"></a>

Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1a2bfee0b8eabaed982670ded34212795d)`() const` <a id="structFRHAPI__Loot_1a2bfee0b8eabaed982670ded34212795d"></a>

Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetUiHint`](#structFRHAPI__Loot_1a952fbaa81d68be6b5e03f14cfb32faa9)`(int32 NewValue)` <a id="structFRHAPI__Loot_1a952fbaa81d68be6b5e03f14cfb32faa9"></a>

Sets the value of UiHint_Optional and also sets UiHint_IsSet to true.

<br>
#### `public inline void `[`ClearUiHint`](#structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666)`()` <a id="structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666"></a>

Clears the value of UiHint_Optional and sets UiHint_IsSet to false.

<br>
#### `public inline bool `[`IsUiHintDefaultValue`](#structFRHAPI__Loot_1a768434aca6d481543db42a6ba4ab04fb)`() const` <a id="structFRHAPI__Loot_1a768434aca6d481543db42a6ba4ab04fb"></a>

Returns true if UiHint_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetUiHintToDefault`](#structFRHAPI__Loot_1aa04866c631982d1d3fb998505c09f763)`()` <a id="structFRHAPI__Loot_1aa04866c631982d1d3fb998505c09f763"></a>

Sets the value of UiHint_Optional to its default and also sets UiHint_IsSet to true.

<br>
#### `public inline FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1aee89d8de5f3ec4c4d02fcebe58ffe536)`()` <a id="structFRHAPI__Loot_1aee89d8de5f3ec4c4d02fcebe58ffe536"></a>

Gets the value of EffectiveFrom_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1af1e0e5abfd28052cd1547cdeea002d45)`() const` <a id="structFRHAPI__Loot_1af1e0e5abfd28052cd1547cdeea002d45"></a>

Gets the value of EffectiveFrom_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1afd63a6a118a81067a8e746526476adb2)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__Loot_1afd63a6a118a81067a8e746526476adb2"></a>

Gets the value of EffectiveFrom_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEffectiveFrom`](#structFRHAPI__Loot_1af51ee7d4f692fc48fa6281955948f0ef)`(FDateTime & OutValue) const` <a id="structFRHAPI__Loot_1af51ee7d4f692fc48fa6281955948f0ef"></a>

Fills OutValue with the value of EffectiveFrom_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a1f2eb7316df3787d9135fcef3046d11e)`()` <a id="structFRHAPI__Loot_1a1f2eb7316df3787d9135fcef3046d11e"></a>

Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a47c40fd04c127180dfcb148cd008593f)`() const` <a id="structFRHAPI__Loot_1a47c40fd04c127180dfcb148cd008593f"></a>

Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1a9f10f21fbb584f0bb85f49e714df8c73)`(FDateTime NewValue)` <a id="structFRHAPI__Loot_1a9f10f21fbb584f0bb85f49e714df8c73"></a>

Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true.

<br>
#### `public inline void `[`ClearEffectiveFrom`](#structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008)`()` <a id="structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008"></a>

Clears the value of EffectiveFrom_Optional and sets EffectiveFrom_IsSet to false.

<br>
#### `public inline ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1ac60f5021029d7495532f4e92256d2c1c)`()` <a id="structFRHAPI__Loot_1ac60f5021029d7495532f4e92256d2c1c"></a>

Gets the value of QuantityType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a52f893e2ba2b5efb550dc3d4219ae57c)`() const` <a id="structFRHAPI__Loot_1a52f893e2ba2b5efb550dc3d4219ae57c"></a>

Gets the value of QuantityType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a98bb97bded9f560574b06547ca11c68b)`(const ERHAPI_QuantityType & DefaultValue) const` <a id="structFRHAPI__Loot_1a98bb97bded9f560574b06547ca11c68b"></a>

Gets the value of QuantityType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetQuantityType`](#structFRHAPI__Loot_1a06585bd89d8595f273d2561085036c7f)`(ERHAPI_QuantityType & OutValue) const` <a id="structFRHAPI__Loot_1a06585bd89d8595f273d2561085036c7f"></a>

Fills OutValue with the value of QuantityType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1ab04af33e8c4c0a23eb02e03fc03e3acd)`()` <a id="structFRHAPI__Loot_1ab04af33e8c4c0a23eb02e03fc03e3acd"></a>

Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1af1b1fd9e5c187bae0192c0548c15ef26)`() const` <a id="structFRHAPI__Loot_1af1b1fd9e5c187bae0192c0548c15ef26"></a>

Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetQuantityType`](#structFRHAPI__Loot_1a1117831c87af22af2588aed09ce98e5a)`(ERHAPI_QuantityType NewValue)` <a id="structFRHAPI__Loot_1a1117831c87af22af2588aed09ce98e5a"></a>

Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true.

<br>
#### `public inline void `[`ClearQuantityType`](#structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd)`()` <a id="structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd"></a>

Clears the value of QuantityType_Optional and sets QuantityType_IsSet to false.

<br>
#### `public inline int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1abdb65cbbe843109fc780c5896e836d84)`()` <a id="structFRHAPI__Loot_1abdb65cbbe843109fc780c5896e836d84"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a8407f742227106b6e18f2d68286e7f8b)`() const` <a id="structFRHAPI__Loot_1a8407f742227106b6e18f2d68286e7f8b"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a5a93c513af4fb98079d1f4e8f8e48ef5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a5a93c513af4fb98079d1f4e8f8e48ef5"></a>

Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a39ff579e93b70184c70016e8f8370f3d)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a39ff579e93b70184c70016e8f8370f3d"></a>

Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1ae8af82ddb950d6e8ab30f1210d26fd57)`()` <a id="structFRHAPI__Loot_1ae8af82ddb950d6e8ab30f1210d26fd57"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1aef08112c1a56763c36d5e592d06901f3)`() const` <a id="structFRHAPI__Loot_1aef08112c1a56763c36d5e592d06901f3"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1aaca93c71048ee7c5760210d4f3cf5b79)`(int32 NewValue)` <a id="structFRHAPI__Loot_1aaca93c71048ee7c5760210d4f3cf5b79"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.

<br>
#### `public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50)`()` <a id="structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50"></a>

Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.

<br>
#### `public inline bool `[`IsQuantityMultInventoryItemIdDefaultValue`](#structFRHAPI__Loot_1a1c513bf258edd56413a96b8e4ca2f63d)`() const` <a id="structFRHAPI__Loot_1a1c513bf258edd56413a96b8e4ca2f63d"></a>

Returns true if QuantityMultInventoryItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetQuantityMultInventoryItemIdToDefault`](#structFRHAPI__Loot_1a480179232e881178aa0bae6eac822e72)`()` <a id="structFRHAPI__Loot_1a480179232e881178aa0bae6eac822e72"></a>

Sets the value of QuantityMultInventoryItemId_Optional to its default and also sets QuantityMultInventoryItemId_IsSet to true.

<br>
#### `public inline bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a78b6c6b4774fab979e3ad6f8eb81949b)`()` <a id="structFRHAPI__Loot_1a78b6c6b4774fab979e3ad6f8eb81949b"></a>

Gets the value of IsClaimableByClient_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a07b4aebdcd35fc8b7954ac84d3a47fde)`() const` <a id="structFRHAPI__Loot_1a07b4aebdcd35fc8b7954ac84d3a47fde"></a>

Gets the value of IsClaimableByClient_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1ad7c1e53d67d82fdf3c2a45695da55930)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1ad7c1e53d67d82fdf3c2a45695da55930"></a>

Gets the value of IsClaimableByClient_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1ae2cea6c0c8a4bde7087ab75ed5b0e10d)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1ae2cea6c0c8a4bde7087ab75ed5b0e10d"></a>

Fills OutValue with the value of IsClaimableByClient_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1a2a12a87471302f579b421e3ad810080b)`()` <a id="structFRHAPI__Loot_1a2a12a87471302f579b421e3ad810080b"></a>

Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1a66a594b011b922e023d0056aeed59a4b)`() const` <a id="structFRHAPI__Loot_1a66a594b011b922e023d0056aeed59a4b"></a>

Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1aec4627b3108dae64c60cb3b50ad49241)`(bool NewValue)` <a id="structFRHAPI__Loot_1aec4627b3108dae64c60cb3b50ad49241"></a>

Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true.

<br>
#### `public inline void `[`ClearIsClaimableByClient`](#structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6)`()` <a id="structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6"></a>

Clears the value of IsClaimableByClient_Optional and sets IsClaimableByClient_IsSet to false.

<br>
#### `public inline bool `[`IsIsClaimableByClientDefaultValue`](#structFRHAPI__Loot_1a9d2152f9ebbac480467ccf601a3fe673)`() const` <a id="structFRHAPI__Loot_1a9d2152f9ebbac480467ccf601a3fe673"></a>

Returns true if IsClaimableByClient_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetIsClaimableByClientToDefault`](#structFRHAPI__Loot_1a336c1ad23684075d60e7da97dca72e26)`()` <a id="structFRHAPI__Loot_1a336c1ad23684075d60e7da97dca72e26"></a>

Sets the value of IsClaimableByClient_Optional to its default and also sets IsClaimableByClient_IsSet to true.

<br>
#### `public inline int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1ae8cb1df8ccb738ea8ce1ed44ead0ba12)`()` <a id="structFRHAPI__Loot_1ae8cb1df8ccb738ea8ce1ed44ead0ba12"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1aab3c0ef8a61f14416bd328b690a05354)`() const` <a id="structFRHAPI__Loot_1aab3c0ef8a61f14416bd328b690a05354"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a373844143f5d643286d9fa24a8a22f5a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a373844143f5d643286d9fa24a8a22f5a"></a>

Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTimeFrameId`](#structFRHAPI__Loot_1aa90943249db3ef3ec9b0a64d09c3e048)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1aa90943249db3ef3ec9b0a64d09c3e048"></a>

Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1a18333ea3d1951ca2a8754049decc3dc7)`()` <a id="structFRHAPI__Loot_1a18333ea3d1951ca2a8754049decc3dc7"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1a9cc0c0ba12e5bddd72309501ee667807)`() const` <a id="structFRHAPI__Loot_1a9cc0c0ba12e5bddd72309501ee667807"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTimeFrameId`](#structFRHAPI__Loot_1ad5aa07b2d5574fd5bea4e1ec085627d7)`(int32 NewValue)` <a id="structFRHAPI__Loot_1ad5aa07b2d5574fd5bea4e1ec085627d7"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.

<br>
#### `public inline void `[`ClearTimeFrameId`](#structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0)`()` <a id="structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0"></a>

Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.

<br>
#### `public inline bool `[`IsTimeFrameIdDefaultValue`](#structFRHAPI__Loot_1ab7ce5827e1a9a6f065f55fa958ea9dfe)`() const` <a id="structFRHAPI__Loot_1ab7ce5827e1a9a6f065f55fa958ea9dfe"></a>

Returns true if TimeFrameId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetTimeFrameIdToDefault`](#structFRHAPI__Loot_1aaaf27b49e24ee23b0584f580d46d0e36)`()` <a id="structFRHAPI__Loot_1aaaf27b49e24ee23b0584f580d46d0e36"></a>

Sets the value of TimeFrameId_Optional to its default and also sets TimeFrameId_IsSet to true.

<br>
#### `public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a3f4efa8c5d7eab831433c61eee98789f)`()` <a id="structFRHAPI__Loot_1a3f4efa8c5d7eab831433c61eee98789f"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a158e18ae64ebfb2da85b638c6a0dd61d)`() const` <a id="structFRHAPI__Loot_1a158e18ae64ebfb2da85b638c6a0dd61d"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a9f4f7dc197733865c1ed143ec1cba51c)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__Loot_1a9f4f7dc197733865c1ed143ec1cba51c"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1aa46c343b94bb7c9bc8d7c82ecdeb13e2)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__Loot_1aa46c343b94bb7c9bc8d7c82ecdeb13e2"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1aff754e919618374602735eb3b0b9d57b)`()` <a id="structFRHAPI__Loot_1aff754e919618374602735eb3b0b9d57b"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1a97bb08ebed28d27c5e62732775dbc727)`() const` <a id="structFRHAPI__Loot_1a97bb08ebed28d27c5e62732775dbc727"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1a87abed0a46f496629ad2b138e62c8b70)`(ERHAPI_InventoryBucket NewValue)` <a id="structFRHAPI__Loot_1a87abed0a46f496629ad2b138e62c8b70"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

<br>
#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed)`()` <a id="structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

<br>
#### `public inline ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a1ae16806e9cb8f3051903c5a55e4a986)`()` <a id="structFRHAPI__Loot_1a1ae16806e9cb8f3051903c5a55e4a986"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1ac4f6778d5b2a41b175b1d69b7460bd85)`() const` <a id="structFRHAPI__Loot_1ac4f6778d5b2a41b175b1d69b7460bd85"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a30605e03961ef334f131fae77c39559a)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` <a id="structFRHAPI__Loot_1a30605e03961ef334f131fae77c39559a"></a>

Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a75e8680087f9474f45dae8497cf61f86)`(ERHAPI_XpQuantityTransform & OutValue) const` <a id="structFRHAPI__Loot_1a75e8680087f9474f45dae8497cf61f86"></a>

Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1ad73ddf32cad8f18aa0ccfdda0bf101f1)`()` <a id="structFRHAPI__Loot_1ad73ddf32cad8f18aa0ccfdda0bf101f1"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1a8a3cb2cc1fc5d253a7eb1d1168cbedb4)`() const` <a id="structFRHAPI__Loot_1a8a3cb2cc1fc5d253a7eb1d1168cbedb4"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1a57b9733c7869bd1eecf9fab24f6d4104)`(ERHAPI_XpQuantityTransform NewValue)` <a id="structFRHAPI__Loot_1a57b9733c7869bd1eecf9fab24f6d4104"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.

<br>
#### `public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da)`()` <a id="structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da"></a>

Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.

<br>
#### `public inline FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a3b85b73e88cefbdde01435440a11076d)`()` <a id="structFRHAPI__Loot_1a3b85b73e88cefbdde01435440a11076d"></a>

Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a412f4764df6dfb5cee18e7fa883a1896)`() const` <a id="structFRHAPI__Loot_1a412f4764df6dfb5cee18e7fa883a1896"></a>

Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a71bdcce58525f93601c85b385ce5141e)`(const FString & DefaultValue) const` <a id="structFRHAPI__Loot_1a71bdcce58525f93601c85b385ce5141e"></a>

Gets the value of CurrentPricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a1cdd271fa5085a0400483f9479cd3240)`(FString & OutValue) const` <a id="structFRHAPI__Loot_1a1cdd271fa5085a0400483f9479cd3240"></a>

Fills OutValue with the value of CurrentPricePointGuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1a2c4eb929baaaee872a3b88eb0b7ecd86)`()` <a id="structFRHAPI__Loot_1a2c4eb929baaaee872a3b88eb0b7ecd86"></a>

Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1af7fc55fbbac53f0aa80ea2a149d4efd1)`() const` <a id="structFRHAPI__Loot_1af7fc55fbbac53f0aa80ea2a149d4efd1"></a>

Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1a1a9da553d93d53bfc2fa81ac6d489070)`(FString NewValue)` <a id="structFRHAPI__Loot_1a1a9da553d93d53bfc2fa81ac6d489070"></a>

Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true.

<br>
#### `public inline void `[`ClearCurrentPricePointGuid`](#structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e)`()` <a id="structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e"></a>

Clears the value of CurrentPricePointGuid_Optional and sets CurrentPricePointGuid_IsSet to false.

<br>
#### `public inline FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1aa9d374bc62fd3b59b776a17b1834bc9f)`()` <a id="structFRHAPI__Loot_1aa9d374bc62fd3b59b776a17b1834bc9f"></a>

Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a791fe69ee647033dd38511bc3b11d3f0)`() const` <a id="structFRHAPI__Loot_1a791fe69ee647033dd38511bc3b11d3f0"></a>

Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a8ee4701f8e546cef003f40836fb11e9f)`(const FString & DefaultValue) const` <a id="structFRHAPI__Loot_1a8ee4701f8e546cef003f40836fb11e9f"></a>

Gets the value of PreSalePricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a566fb155c23cbc637cbfa1bf07bd59d5)`(FString & OutValue) const` <a id="structFRHAPI__Loot_1a566fb155c23cbc637cbfa1bf07bd59d5"></a>

Fills OutValue with the value of PreSalePricePointGuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1affcacd5fafc0758c39e9196ecd95f56f)`()` <a id="structFRHAPI__Loot_1affcacd5fafc0758c39e9196ecd95f56f"></a>

Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1a792dbbffbe29595646210c49c93b4c57)`() const` <a id="structFRHAPI__Loot_1a792dbbffbe29595646210c49c93b4c57"></a>

Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1ad75446329a6cd63178df57c06b268277)`(FString NewValue)` <a id="structFRHAPI__Loot_1ad75446329a6cd63178df57c06b268277"></a>

Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true.

<br>
#### `public inline void `[`ClearPreSalePricePointGuid`](#structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e)`()` <a id="structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e"></a>

Clears the value of PreSalePricePointGuid_Optional and sets PreSalePricePointGuid_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1adac9909b3816a31768afbd01c129f76b)`()` <a id="structFRHAPI__Loot_1adac9909b3816a31768afbd01c129f76b"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a7168aeb8126ef8adb139410146ccf77e)`() const` <a id="structFRHAPI__Loot_1a7168aeb8126ef8adb139410146ccf77e"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1acdf9b0a96fc3568814e93a938f79a57c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Loot_1acdf9b0a96fc3568814e93a938f79a57c"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Loot_1a5cc085454f37806d9400e794b7d64ab5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Loot_1a5cc085454f37806d9400e794b7d64ab5"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1a97c1582a19ea5d336b44a8bbf3a7611c)`()` <a id="structFRHAPI__Loot_1a97c1582a19ea5d336b44a8bbf3a7611c"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1a59c09e2560aebb2bfc588102831cdc73)`() const` <a id="structFRHAPI__Loot_1a59c09e2560aebb2bfc588102831cdc73"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Loot_1ad535f49eefaa68050d429b0f0dbebd2b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__Loot_1ad535f49eefaa68050d429b0f0dbebd2b"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a)`()` <a id="structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
#### `public inline int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a22ad3a8f1b3ff1bb6b6444f74a6ac17a)`()` <a id="structFRHAPI__Loot_1a22ad3a8f1b3ff1bb6b6444f74a6ac17a"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1af2c0aa49b89341a3b62b8a4a87402aa7)`() const` <a id="structFRHAPI__Loot_1af2c0aa49b89341a3b62b8a4a87402aa7"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1aff89e7fdd36eddb551bdd11499f13da9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1aff89e7fdd36eddb551bdd11499f13da9"></a>

Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a99f6530818176b2d7276082dba8de91a)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a99f6530818176b2d7276082dba8de91a"></a>

Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1aa004b1374099fa67b9f31e6e18242fcf)`()` <a id="structFRHAPI__Loot_1aa004b1374099fa67b9f31e6e18242fcf"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1a41c1e6a38321871cbd2beef41f18c219)`() const` <a id="structFRHAPI__Loot_1a41c1e6a38321871cbd2beef41f18c219"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1adfc8bce30a4d95c2471aabaae77045cb)`(int32 NewValue)` <a id="structFRHAPI__Loot_1adfc8bce30a4d95c2471aabaae77045cb"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.

<br>
#### `public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df)`()` <a id="structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df"></a>

Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.

<br>
#### `public inline bool `[`IsHardQuantityMaximumDefaultValue`](#structFRHAPI__Loot_1a1dcf73ab36076f3fe98df72496ac7ae1)`() const` <a id="structFRHAPI__Loot_1a1dcf73ab36076f3fe98df72496ac7ae1"></a>

Returns true if HardQuantityMaximum_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetHardQuantityMaximumToDefault`](#structFRHAPI__Loot_1ae75d4313ecf4e431d50d1a6defb18831)`()` <a id="structFRHAPI__Loot_1ae75d4313ecf4e431d50d1a6defb18831"></a>

Sets the value of HardQuantityMaximum_Optional to its default and also sets HardQuantityMaximum_IsSet to true.

<br>
