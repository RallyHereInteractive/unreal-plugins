---
title: RHAPI_Loot
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Loot_1a3ac4b8fa1534ddc987f9809a78b0f573) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Loot_1ab5141af81d9f12541fa2a640cc9025d5) | true if CustomData_Optional has been set to a value
`public FGuid `[`LootUuid_Optional`](#structFRHAPI__Loot_1a0a6a4416afa1beca2b7709091c92c97f) | 
`public bool `[`LootUuid_IsSet`](#structFRHAPI__Loot_1a51db4c187b5dbf6ed7a663f99b88d1e6) | true if LootUuid_Optional has been set to a value
`public bool `[`LootUuid_IsNull`](#structFRHAPI__Loot_1a0ac398d76a4ecb75049bbd2f9cd30454) | true if LootUuid_Optional has been explicitly set to null
`public int32 `[`LootId`](#structFRHAPI__Loot_1a5f92839acf839d6c49b57b1cc66dba4f) | The Loot ID.
`public int32 `[`VendorId`](#structFRHAPI__Loot_1aeebadf01967a63239b42fe6094e7a9c5) | The Vendor ID.
`public FGuid `[`VendorUuid_Optional`](#structFRHAPI__Loot_1a49b6c65bf3c5c01f838e7b4c8c5bb002) | 
`public bool `[`VendorUuid_IsSet`](#structFRHAPI__Loot_1a2ce5e65a054bb3ea289cab8b6598076a) | true if VendorUuid_Optional has been set to a value
`public bool `[`VendorUuid_IsNull`](#structFRHAPI__Loot_1a08d0b6fff8dc77a92b8d52ca1b99480e) | true if VendorUuid_Optional has been explicitly set to null
`public int32 `[`ItemId_Optional`](#structFRHAPI__Loot_1a8cd4e2427345b15dd5a3a12f5fdc7497) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__Loot_1ab203c9039289860b29222870d6c41689) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__Loot_1a171ca88b495ab3cc2ff97237f69ed5cb) | true if ItemId_Optional has been explicitly set to null
`public FGuid `[`ItemUuid_Optional`](#structFRHAPI__Loot_1ab26b195362fb3205f9daf2e9d337a831) | 
`public bool `[`ItemUuid_IsSet`](#structFRHAPI__Loot_1a1e5d89ac63110e823cf82a6816e1986d) | true if ItemUuid_Optional has been set to a value
`public bool `[`ItemUuid_IsNull`](#structFRHAPI__Loot_1adbf7e0dc9d08efee5b5024ce859e3257) | true if ItemUuid_Optional has been explicitly set to null
`public `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` `[`Item_Optional`](#structFRHAPI__Loot_1a2465b63dbf01c76fa9cc736f7356d278) | 
`public bool `[`Item_IsSet`](#structFRHAPI__Loot_1a5511b7f6472a4da05f937a4262f15843) | true if Item_Optional has been set to a value
`public bool `[`Item_IsNull`](#structFRHAPI__Loot_1aeb869e611f062ea049f5c9c9df877efb) | true if Item_Optional has been explicitly set to null
`public int32 `[`SubVendorId_Optional`](#structFRHAPI__Loot_1a9869e1988c40476054db483a6b763e73) | 
`public bool `[`SubVendorId_IsSet`](#structFRHAPI__Loot_1a97e58634ed48e68a3eb038df38ede464) | true if SubVendorId_Optional has been set to a value
`public bool `[`SubVendorId_IsNull`](#structFRHAPI__Loot_1a05c0bf89a082e0716ac0e4a6a8a4cb46) | true if SubVendorId_Optional has been explicitly set to null
`public FGuid `[`SubVendorUuid_Optional`](#structFRHAPI__Loot_1ab719d2287abef832f70c456caea1cbd8) | 
`public bool `[`SubVendorUuid_IsSet`](#structFRHAPI__Loot_1a98cd7e07a54a3f7726a218fc52900f96) | true if SubVendorUuid_Optional has been set to a value
`public bool `[`SubVendorUuid_IsNull`](#structFRHAPI__Loot_1a35423a18214bc2cb18d6fb3464f2ea4a) | true if SubVendorUuid_Optional has been explicitly set to null
`public int32 `[`Quantity_Optional`](#structFRHAPI__Loot_1a507bf92cd6bc234afa66946931e806b9) | The quantity of the Item or Sub Vendor to fulfill. This will be multiplied by the quantity of fulfilled Loot and the parent Loot if quantity_type is relative.
`public bool `[`Quantity_IsSet`](#structFRHAPI__Loot_1abb9332211b9db78f3eb03556977d1add) | true if Quantity_Optional has been set to a value
`public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__Loot_1a43c10b4f70841b48fdec3f81de3325f5) | 
`public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__Loot_1afde2ba63a4fe363fd04030d691f53ea8) | true if InventorySelectorType_Optional has been set to a value
`public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__Loot_1a05d38a166aa71dceb816fcf5c3883655) | 
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
`public int32 `[`RequiredItemId_Optional`](#structFRHAPI__Loot_1ae088775af177f58b9bac7cdfe69b38ed) | 
`public bool `[`RequiredItemId_IsSet`](#structFRHAPI__Loot_1a47d9045f2c086ffa823850f5a02f0b60) | true if RequiredItemId_Optional has been set to a value
`public bool `[`RequiredItemId_IsNull`](#structFRHAPI__Loot_1a2580918505e128c34cce7ea01f008971) | true if RequiredItemId_Optional has been explicitly set to null
`public FGuid `[`RequiredItemUuid_Optional`](#structFRHAPI__Loot_1a07ecd96d29ea60496e8e18cacade4eb9) | 
`public bool `[`RequiredItemUuid_IsSet`](#structFRHAPI__Loot_1ae0a9947ab89c289afae27916214536d8) | true if RequiredItemUuid_Optional has been set to a value
`public bool `[`RequiredItemUuid_IsNull`](#structFRHAPI__Loot_1adb1fdb9aebf8737a4e62b415bc8a4c52) | true if RequiredItemUuid_Optional has been explicitly set to null
`public int32 `[`RequiredItemCount_Optional`](#structFRHAPI__Loot_1abf8e2c11c8acf567243cec8c806b7a62) | Amount of the required_item_id to be owned/rented to drop this Loot in a randomly sampled vendor.
`public bool `[`RequiredItemCount_IsSet`](#structFRHAPI__Loot_1ada979daeddf09bd7b4b566aa9bf3df28) | true if RequiredItemCount_Optional has been set to a value
`public int32 `[`StackLimit_Optional`](#structFRHAPI__Loot_1a970fa609225d3c8af096f35f2d17cd9a) | Amount of owned/rented of this Loot's item that will prevent this Loot from dropping in a randomly sampled vendor.
`public bool `[`StackLimit_IsSet`](#structFRHAPI__Loot_1a00cb9abdbcd7404d7b093d3c0c8152f1) | true if StackLimit_Optional has been set to a value
`public int32 `[`UiHint_Optional`](#structFRHAPI__Loot_1ab4d0035bf9df79460aa855ed965bc633) | 
`public bool `[`UiHint_IsSet`](#structFRHAPI__Loot_1a3a7fc556249776abb1bd0aec415a97d9) | true if UiHint_Optional has been set to a value
`public FDateTime `[`EffectiveFrom_Optional`](#structFRHAPI__Loot_1a12465a1abc8d7ed119bf9f65ab3d33a2) | 
`public bool `[`EffectiveFrom_IsSet`](#structFRHAPI__Loot_1aaf2276f068ed4507f5ac347af87b49c3) | true if EffectiveFrom_Optional has been set to a value
`public bool `[`EffectiveFrom_IsNull`](#structFRHAPI__Loot_1a57e82d681a5f526fbdf8640495bbbf17) | true if EffectiveFrom_Optional has been explicitly set to null
`public ERHAPI_QuantityType `[`QuantityType_Optional`](#structFRHAPI__Loot_1a8e89961081f18de1c004e987f27dcb8c) | 
`public bool `[`QuantityType_IsSet`](#structFRHAPI__Loot_1a0d4fa18901b7c09f35f00642da594250) | true if QuantityType_Optional has been set to a value
`public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__Loot_1a06a811681044c08cfff63b71fcc1003c) | 
`public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__Loot_1a564d2f00696631dab3416ab83691c8c7) | true if QuantityMultInventoryItemId_Optional has been set to a value
`public bool `[`QuantityMultInventoryItemId_IsNull`](#structFRHAPI__Loot_1a83bd330fb624ebc7209a27968c968958) | true if QuantityMultInventoryItemId_Optional has been explicitly set to null
`public FGuid `[`QuantityMultInventoryItemUuid_Optional`](#structFRHAPI__Loot_1ac1089913b9de812c8161fdb1b5b4691e) | 
`public bool `[`QuantityMultInventoryItemUuid_IsSet`](#structFRHAPI__Loot_1a0eb524b46f080ed5204b468c5f8c481e) | true if QuantityMultInventoryItemUuid_Optional has been set to a value
`public bool `[`QuantityMultInventoryItemUuid_IsNull`](#structFRHAPI__Loot_1ad51b0ab84dad4b3bf20c622f16440a6f) | true if QuantityMultInventoryItemUuid_Optional has been explicitly set to null
`public bool `[`IsClaimableByClient_Optional`](#structFRHAPI__Loot_1a311ebbe8b318350f6bdea1992d3db086) | Determines if the Loot can be claimed by the client. This is dangerous without the correct loot confiuration as a client could claim Loot multiple times.
`public bool `[`IsClaimableByClient_IsSet`](#structFRHAPI__Loot_1afe049eb4ba6639b5ac75b652ef7c1059) | true if IsClaimableByClient_Optional has been set to a value
`public int32 `[`TimeFrameId_Optional`](#structFRHAPI__Loot_1af9803c09b5cca0b04f5cf8f299944e87) | 
`public bool `[`TimeFrameId_IsSet`](#structFRHAPI__Loot_1adcc16ccb1b5c1a2fc504ce5543504057) | true if TimeFrameId_Optional has been set to a value
`public bool `[`TimeFrameId_IsNull`](#structFRHAPI__Loot_1a1eb93e36dd2752f3ae679a8951621584) | true if TimeFrameId_Optional has been explicitly set to null
`public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__Loot_1ac130c02eb58b7c8d68b93889b81db06d) | 
`public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__Loot_1a68f88c797ce9bb3516e1f19196a00424) | true if UseInventoryBucket_Optional has been set to a value
`public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__Loot_1adf0e6bfc356046952b2c9699e66b6f05) | true if UseInventoryBucket_Optional has been explicitly set to null
`public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__Loot_1ab7bd194e175ef8b245205e8e723d9532) | 
`public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__Loot_1a9d0c5c3838e45cd8f3311f0866b2141a) | true if XpQuantityTransformType_Optional has been set to a value
`public FString `[`CurrentPricePointGuid_Optional`](#structFRHAPI__Loot_1a705277f1b2e48fd2b70cfb5cf984dd4d) | 
`public bool `[`CurrentPricePointGuid_IsSet`](#structFRHAPI__Loot_1a57d3d52962158cb7136a373762b5be5e) | true if CurrentPricePointGuid_Optional has been set to a value
`public bool `[`CurrentPricePointGuid_IsNull`](#structFRHAPI__Loot_1aeff827225f9ee6e7e502a20833ff6e4a) | true if CurrentPricePointGuid_Optional has been explicitly set to null
`public FString `[`PreSalePricePointGuid_Optional`](#structFRHAPI__Loot_1abcf89f067a2db68ae1244e2d9507cf42) | 
`public bool `[`PreSalePricePointGuid_IsSet`](#structFRHAPI__Loot_1af34c049ed2551deb2dc219b61a8dfd4c) | true if PreSalePricePointGuid_Optional has been set to a value
`public bool `[`PreSalePricePointGuid_IsNull`](#structFRHAPI__Loot_1a2ab23d6dc33abf180b9e428906eda45b) | true if PreSalePricePointGuid_Optional has been explicitly set to null
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Loot_1acf3ab767cf43aebb4a1c5e9eaa5ed60d) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Loot_1aafb036901a2d16ef1337d520d808ec6b) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__Loot_1a330f220ceb11a1cd88fbcaa8e235d795) | true if CacheInfo_Optional has been explicitly set to null
`public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__Loot_1aa6a8b8fcd71d2911a55ea28b6be66cde) | Hard cap on quantity of an item this Loot can give. Disabled with 0.
`public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__Loot_1a7d6fe172fee6cd5f1545379d64367c01) | true if HardQuantityMaximum_Optional has been set to a value
`public `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` `[`Price_Optional`](#structFRHAPI__Loot_1a36a5fecbf4a8d2c8b5e8f51e35a93d4a) | 
`public bool `[`Price_IsSet`](#structFRHAPI__Loot_1a66c5f32e0c0754f897a016a1db80b0b6) | true if Price_Optional has been set to a value
`public bool `[`Price_IsNull`](#structFRHAPI__Loot_1a287a9004f95c785f742ef2b8c12d9043) | true if Price_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__Loot_1ae1fafb9905923f64a0753b812227f84b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Loot_1a4383b0859a84465e5988b801c366eca3)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a35807462c77b218576ad06a68fc47d0f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1ac05d9df6098c1b892450822f7d176836)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a79c9140531d023aeb9f9abc7c016854f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Loot_1a287c688a61e03a4822e3d7a1f0e42a49)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1aec6fe7a12de43a3f5da8e263b8bfa103)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1a21f16d164fd3a8a92ef9fdb173f98a59)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Loot_1aa36b0c0b7c3f30f5246629aa3da3a69d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__Loot_1aa5228ab9d32a49746465a23fb1f546c9)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__Loot_1aad7353c9d0e83d3cbce2f0b6701e184a)`() const` | Checks whether CustomData_Optional has been set.
`public inline FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1aef41a3b5be988a91c8f8cc80a308f784)`()` | Gets the value of LootUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1ae3dffd5ee9e56103f4768a7bd9d9098b)`() const` | Gets the value of LootUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1aebe4d058b580bb0c181d8da52d50c8b1)`(const FGuid & DefaultValue) const` | Gets the value of LootUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootUuid`](#structFRHAPI__Loot_1a24cdde21c4fa5305b7b4d84bd26e7211)`(FGuid & OutValue) const` | Fills OutValue with the value of LootUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetLootUuidOrNull`](#structFRHAPI__Loot_1affd0de515daf2897db0f0253f73c8ef6)`()` | Returns a pointer to LootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetLootUuidOrNull`](#structFRHAPI__Loot_1a8ae549e53de0650cdb22b4932a70a9a1)`() const` | Returns a pointer to LootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootUuid`](#structFRHAPI__Loot_1a6269114a54510259ba74e3ba02baf9b7)`(const FGuid & NewValue)` | Sets the value of LootUuid_Optional and also sets LootUuid_IsSet to true.
`public inline void `[`SetLootUuid`](#structFRHAPI__Loot_1af18833c1ede8b9bea806cd50a97fc581)`(FGuid && NewValue)` | Sets the value of LootUuid_Optional and also sets LootUuid_IsSet to true using move semantics.
`public inline void `[`ClearLootUuid`](#structFRHAPI__Loot_1ad0eb5151359a29ff49a600e4e8faa236)`()` | Clears the value of LootUuid_Optional and sets LootUuid_IsSet to false.
`public inline bool `[`IsLootUuidSet`](#structFRHAPI__Loot_1a0055e1d3190b40815755e7a7de3d1800)`() const` | Checks whether LootUuid_Optional has been set.
`public inline void `[`SetLootUuidToNull`](#structFRHAPI__Loot_1a8d35555846a8e50dce4533da3bc3d880)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLootUuidNull`](#structFRHAPI__Loot_1a67eb24e441823d46b73cb4a33f2f3c28)`() const` | Checks whether LootUuid_Optional is set to null.
`public inline int32 & `[`GetLootId`](#structFRHAPI__Loot_1aab4048b6643aa2ece6d496bb4ab42102)`()` | Gets the value of LootId.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__Loot_1a97297a5ce522b04029ec1a0bb3929517)`() const` | Gets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__Loot_1afdaef30a5fe95ab02988ab4ec957e4dd)`(const int32 & NewValue)` | Sets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__Loot_1a8e04ceda8c0201df5421c9be8921de3e)`(int32 && NewValue)` | Sets the value of LootId using move semantics.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__Loot_1ac34d328155722dece2b3d333d8110e41)`() const` | Returns true if LootId matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__Loot_1a5e2f6f21cf1b05ab3abd7bd1e0b30c87)`()` | Sets the value of LootId to its default
`public inline int32 & `[`GetVendorId`](#structFRHAPI__Loot_1a4e24586e9cb3a1e417dea2a40a353aca)`()` | Gets the value of VendorId.
`public inline const int32 & `[`GetVendorId`](#structFRHAPI__Loot_1a6259545ac8758d8b7b9a321a1df863fb)`() const` | Gets the value of VendorId.
`public inline void `[`SetVendorId`](#structFRHAPI__Loot_1ae69cfc828ab7998bf4eb3d8b20dba6c0)`(const int32 & NewValue)` | Sets the value of VendorId.
`public inline void `[`SetVendorId`](#structFRHAPI__Loot_1ad9728d58e6bc412044baf18edd9032f5)`(int32 && NewValue)` | Sets the value of VendorId using move semantics.
`public inline bool `[`IsVendorIdDefaultValue`](#structFRHAPI__Loot_1a34294c3a7a9eba0d2be427e08546868c)`() const` | Returns true if VendorId matches the default value.
`public inline void `[`SetVendorIdToDefault`](#structFRHAPI__Loot_1a7ba740230264c05551800de8b9830745)`()` | Sets the value of VendorId to its default
`public inline FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1a9966007e6f71ce1b12fbe3ee26ea4575)`()` | Gets the value of VendorUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1a13d529e48b8ade811acbb9b11d693e28)`() const` | Gets the value of VendorUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1adf357052b1a90c1da3c14ab797cdc871)`(const FGuid & DefaultValue) const` | Gets the value of VendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorUuid`](#structFRHAPI__Loot_1a84b9672d56ccf190b1dafce22b968ea2)`(FGuid & OutValue) const` | Fills OutValue with the value of VendorUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Loot_1a92e71dad65badbc2c14645fc965b42cc)`()` | Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Loot_1a4a52b1c697e2e536ba374ed7ad306c38)`() const` | Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorUuid`](#structFRHAPI__Loot_1a38bdba90f027d1fdc0097cb9235f551d)`(const FGuid & NewValue)` | Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true.
`public inline void `[`SetVendorUuid`](#structFRHAPI__Loot_1a54b130316e8ed20b4684697c9647604e)`(FGuid && NewValue)` | Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true using move semantics.
`public inline void `[`ClearVendorUuid`](#structFRHAPI__Loot_1ab8eefa8d3e6b848d9ae649f62f42bc77)`()` | Clears the value of VendorUuid_Optional and sets VendorUuid_IsSet to false.
`public inline bool `[`IsVendorUuidSet`](#structFRHAPI__Loot_1a15822bbcd6abd6c905072ae4bad92193)`() const` | Checks whether VendorUuid_Optional has been set.
`public inline void `[`SetVendorUuidToNull`](#structFRHAPI__Loot_1a013c79aa0ac3078d4ca690b5991cf344)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsVendorUuidNull`](#structFRHAPI__Loot_1a5a02376b9d42841086edcd20802ad8ae)`() const` | Checks whether VendorUuid_Optional is set to null.
`public inline int32 & `[`GetItemId`](#structFRHAPI__Loot_1a09ad345ad2ce957d5de502b80d3ba723)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a81d8cc603251a649e7211912b61f89c5)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a318dcd7fbc59736f668103e8b1c8b785)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__Loot_1af46204b226c63dbb8cdb2645fea6c50d)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1a850b23b49f017cf7486a70184acf16fb)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1ac0202a2adec9338ebf0f874e65f16256)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__Loot_1a9644d761f2970aedb3907e28e7329fdf)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__Loot_1aea42066abd1642e685a2782db762ffed)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__Loot_1a3bd9f1d783d96bb8f7087fe53822e8a9)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__Loot_1ab1fb89c1cd120fbdccbad20b4f1058c9)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__Loot_1a175257a1162b73e5e5897dc7ce9138de)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline void `[`SetItemIdToNull`](#structFRHAPI__Loot_1a67319b04876eee18c40210694d288b61)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsItemIdNull`](#structFRHAPI__Loot_1a9fe938d80346a32b13b6ac7aac2d632b)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a226d7631252d94eb6de32a4b04940c93)`()` | Gets the value of ItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a8072ee89fc8e48af602da0709b8df023)`() const` | Gets the value of ItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a2b1e24648e232e89a78554258610c38d)`(const FGuid & DefaultValue) const` | Gets the value of ItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemUuid`](#structFRHAPI__Loot_1ac1559e9395621cac02e1fe91b2eb3064)`(FGuid & OutValue) const` | Fills OutValue with the value of ItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Loot_1a2f3a0916741b3080157a600e21c30536)`()` | Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Loot_1a4b7601a25ae42ad9fb799be12f79799c)`() const` | Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemUuid`](#structFRHAPI__Loot_1a7340b358ec7f40244767290dd36231f6)`(const FGuid & NewValue)` | Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true.
`public inline void `[`SetItemUuid`](#structFRHAPI__Loot_1ae3e1920626a006ae79da706dbe68a7a5)`(FGuid && NewValue)` | Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearItemUuid`](#structFRHAPI__Loot_1a7d4d0b4d2020d60a73326ae1a436380e)`()` | Clears the value of ItemUuid_Optional and sets ItemUuid_IsSet to false.
`public inline bool `[`IsItemUuidSet`](#structFRHAPI__Loot_1a94a4fecce862a531daedbbb5db9cdd5f)`() const` | Checks whether ItemUuid_Optional has been set.
`public inline void `[`SetItemUuidToNull`](#structFRHAPI__Loot_1acbfa6bcd1a0b5b2b2ec92c60c8eeb901)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsItemUuidNull`](#structFRHAPI__Loot_1a4dce154044b85f8915730bc1e6d38c08)`() const` | Checks whether ItemUuid_Optional is set to null.
`public inline `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1acccfe9f0ebb377cc60c70d1cb2dcf371)`()` | Gets the value of Item_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a6bca49d33a1c37faf7c26799cb101791)`() const` | Gets the value of Item_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a485d4b16ac3e237da6a158f567bdd8a5)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & DefaultValue) const` | Gets the value of Item_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItem`](#structFRHAPI__Loot_1a780c162ed85fa8ca7a9ad6895819166c)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & OutValue) const` | Fills OutValue with the value of Item_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1ab86472e4b9a6edc622080147211db1bb)`()` | Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1a5332073c64f2e8458f223136d2a4d709)`() const` | Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItem`](#structFRHAPI__Loot_1ab8db52d9494b290cf633f9433ac64e02)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & NewValue)` | Sets the value of Item_Optional and also sets Item_IsSet to true.
`public inline void `[`SetItem`](#structFRHAPI__Loot_1aa52823829875545fd00ace4031039413)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` && NewValue)` | Sets the value of Item_Optional and also sets Item_IsSet to true using move semantics.
`public inline void `[`ClearItem`](#structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8)`()` | Clears the value of Item_Optional and sets Item_IsSet to false.
`public inline bool `[`IsItemSet`](#structFRHAPI__Loot_1a00b84b8a70a8b3c27f0efdf51194e14a)`() const` | Checks whether Item_Optional has been set.
`public inline void `[`SetItemToNull`](#structFRHAPI__Loot_1af600635fb8efda2c85faaaf7c1da859d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsItemNull`](#structFRHAPI__Loot_1abd8321c10589327366b9846b89644184)`() const` | Checks whether Item_Optional is set to null.
`public inline int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a0379cb4420fa4b036aef093bb60d6f01)`()` | Gets the value of SubVendorId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a1712504172275c4a9560bcaa0755f5d3)`() const` | Gets the value of SubVendorId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1ad98de97305fcf706510bb195c9551221)`(const int32 & DefaultValue) const` | Gets the value of SubVendorId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSubVendorId`](#structFRHAPI__Loot_1ab6c9112b74f2cb0a103d65bb19897165)`(int32 & OutValue) const` | Fills OutValue with the value of SubVendorId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a99ad7e317f24a7ef819276efffc3a01c)`()` | Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a95c8432de90331859f0f4dfdff55c55e)`() const` | Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSubVendorId`](#structFRHAPI__Loot_1a725de669455d784feb45568d0cbf98ae)`(const int32 & NewValue)` | Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true.
`public inline void `[`SetSubVendorId`](#structFRHAPI__Loot_1a845ac2dc17af57c95ae88c911504e19b)`(int32 && NewValue)` | Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true using move semantics.
`public inline void `[`ClearSubVendorId`](#structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058)`()` | Clears the value of SubVendorId_Optional and sets SubVendorId_IsSet to false.
`public inline bool `[`IsSubVendorIdSet`](#structFRHAPI__Loot_1a1d533b637fd1fc9d05df1dfd7c64ab0f)`() const` | Checks whether SubVendorId_Optional has been set.
`public inline bool `[`IsSubVendorIdDefaultValue`](#structFRHAPI__Loot_1ac0a741bcd286b2adccd25fe38f97983b)`() const` | Returns true if SubVendorId_Optional is set and matches the default value.
`public inline void `[`SetSubVendorIdToDefault`](#structFRHAPI__Loot_1afd50a2496a24d46fddc881f22eed4b02)`()` | Sets the value of SubVendorId_Optional to its default and also sets SubVendorId_IsSet to true.
`public inline void `[`SetSubVendorIdToNull`](#structFRHAPI__Loot_1a1ff6f1bbc7515bebe5949f690b87464c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSubVendorIdNull`](#structFRHAPI__Loot_1aa27dc35db93d4080f053f9a5e7013468)`() const` | Checks whether SubVendorId_Optional is set to null.
`public inline FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a225942850b04a3ff35197fd1afa9ce0e)`()` | Gets the value of SubVendorUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1ab3cc1e4fea120b5f9f29e441a68bc353)`() const` | Gets the value of SubVendorUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a6dda2192eb50f1c97198076b1940492e)`(const FGuid & DefaultValue) const` | Gets the value of SubVendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSubVendorUuid`](#structFRHAPI__Loot_1ae4e7ba0924a2027ed9556fcfdddf55eb)`(FGuid & OutValue) const` | Fills OutValue with the value of SubVendorUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetSubVendorUuidOrNull`](#structFRHAPI__Loot_1a70cc7dbda5fada2ee1831f84d0a49510)`()` | Returns a pointer to SubVendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetSubVendorUuidOrNull`](#structFRHAPI__Loot_1a21e3b1abb00f31868ee47de2f6618c3c)`() const` | Returns a pointer to SubVendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSubVendorUuid`](#structFRHAPI__Loot_1af56a9987fa9f2184ae67895fababf07d)`(const FGuid & NewValue)` | Sets the value of SubVendorUuid_Optional and also sets SubVendorUuid_IsSet to true.
`public inline void `[`SetSubVendorUuid`](#structFRHAPI__Loot_1af77645ae4aa35601abc00db5ba3ee5ea)`(FGuid && NewValue)` | Sets the value of SubVendorUuid_Optional and also sets SubVendorUuid_IsSet to true using move semantics.
`public inline void `[`ClearSubVendorUuid`](#structFRHAPI__Loot_1ae750501163eb9a843eb23a6b1247b8e1)`()` | Clears the value of SubVendorUuid_Optional and sets SubVendorUuid_IsSet to false.
`public inline bool `[`IsSubVendorUuidSet`](#structFRHAPI__Loot_1a99e16b3fc068c13fcbb95796596dba5a)`() const` | Checks whether SubVendorUuid_Optional has been set.
`public inline void `[`SetSubVendorUuidToNull`](#structFRHAPI__Loot_1a2aa7f97fa18ace252eff42a046a45823)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSubVendorUuidNull`](#structFRHAPI__Loot_1aa90ca6a0320913e2a918a03d11172269)`() const` | Checks whether SubVendorUuid_Optional is set to null.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__Loot_1abe390fd6e04254c6873058955b002e87)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1aa992c98070c610f370c21df6bcd6a1f1)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1ab358632d19d4a4f2001a32781a2e8ec1)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantity`](#structFRHAPI__Loot_1a4ecfe9e6cf43b74396de5ca5366f058e)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1a4a781daeea1960c7f7d980c8c6a6bb17)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1a8889c8a70363962a438ab9444b98fcef)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantity`](#structFRHAPI__Loot_1a20604dbc96d84bdbb648a9c3e606edbf)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline void `[`SetQuantity`](#structFRHAPI__Loot_1ae6d618648bb8114acfd1d75bec28825f)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline bool `[`IsQuantitySet`](#structFRHAPI__Loot_1a00a01a8335980cfda514b6b70a3f5997)`() const` | Checks whether Quantity_Optional has been set.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__Loot_1a5e81fc2e46f491acafcf83ec9eb97c7f)`() const` | Returns true if Quantity_Optional is set and matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__Loot_1a88fbbb95da4cab22777b629c403c4155)`()` | Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.
`public inline ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1adc8eddf2b5ab504521010cf3b85f6853)`()` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a6863e24787ed96bc61f41ee53524ca4f)`() const` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a329e448dd1f7f0cb79d97d4f88c672a7)`(const ERHAPI_InventorySelector & DefaultValue) const` | Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventorySelectorType`](#structFRHAPI__Loot_1ab13961c4e92163e6be9c25a5db91dcaf)`(ERHAPI_InventorySelector & OutValue) const` | Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1a8ccd8410b9fcb75c8033d96c2e0df8e6)`()` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1abad28b3655c646ab863c9864d4004d2b)`() const` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1a4bac4ec7f141cd22174be8bed51cf6f8)`(const ERHAPI_InventorySelector & NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.
`public inline void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1aed76077b233919e80fdd37f8271b708d)`(ERHAPI_InventorySelector && NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.
`public inline void `[`ClearInventorySelectorType`](#structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b)`()` | Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.
`public inline bool `[`IsInventorySelectorTypeSet`](#structFRHAPI__Loot_1ae58489ede4e165cb9e227f1de1b17ce0)`() const` | Checks whether InventorySelectorType_Optional has been set.
`public inline ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1af261d262bc527a9c04e77f0ecad0789b)`()` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a844c6f77cd10f34e5cf8f35b6d1aa891)`() const` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1aa4fd2d2484690ff7219d7da2e41911cc)`(const ERHAPI_InventoryOperation & DefaultValue) const` | Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryOperation`](#structFRHAPI__Loot_1a4afcfa7ae60e4c96381c5d97b563814c)`(ERHAPI_InventoryOperation & OutValue) const` | Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1aa623dafe6c7ffd3cc09e79b84199eb7a)`()` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1af260f2090e6b7dfee78588a6dc70cb61)`() const` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryOperation`](#structFRHAPI__Loot_1a2ca2d2a007ca2ca1e4b58da6e78c4537)`(const ERHAPI_InventoryOperation & NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.
`public inline void `[`SetInventoryOperation`](#structFRHAPI__Loot_1a22fe6582484fe9454802962a3d956302)`(ERHAPI_InventoryOperation && NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.
`public inline void `[`ClearInventoryOperation`](#structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68)`()` | Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.
`public inline bool `[`IsInventoryOperationSet`](#structFRHAPI__Loot_1a736c2c5de18122560b750d7af701debd)`() const` | Checks whether InventoryOperation_Optional has been set.
`public inline bool & `[`GetActive`](#structFRHAPI__Loot_1aa4fc5501a8079912a21c3c3d2aaf714b)`()` | Gets the value of Active_Optional, regardless of it having been set.
`public inline const bool & `[`GetActive`](#structFRHAPI__Loot_1aa6af2f5531c747c6eb238c2634869897)`() const` | Gets the value of Active_Optional, regardless of it having been set.
`public inline const bool & `[`GetActive`](#structFRHAPI__Loot_1ac5418de548a513435b0147c21beece9c)`(const bool & DefaultValue) const` | Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActive`](#structFRHAPI__Loot_1aba509de727c43ec1d964c4463432a858)`(bool & OutValue) const` | Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1ab44362cc35c018fae2e1c2f53e58bd44)`()` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1a72db6962247fc983bfb22c4e464d25b0)`() const` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActive`](#structFRHAPI__Loot_1a08d28507bd619fd5db8363c6b4f3364a)`(const bool & NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true.
`public inline void `[`SetActive`](#structFRHAPI__Loot_1a9350c7930d19d24133f65ff99b3032fb)`(bool && NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true using move semantics.
`public inline void `[`ClearActive`](#structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8)`()` | Clears the value of Active_Optional and sets Active_IsSet to false.
`public inline bool `[`IsActiveSet`](#structFRHAPI__Loot_1a3d50e44bfa48ffa323c852621df55c87)`() const` | Checks whether Active_Optional has been set.
`public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__Loot_1a21764f599b5c382557c5f5f3f4d42e20)`() const` | Returns true if Active_Optional is set and matches the default value.
`public inline void `[`SetActiveToDefault`](#structFRHAPI__Loot_1a99fdeb71b6776d8b69d964f1f6554e50)`()` | Sets the value of Active_Optional to its default and also sets Active_IsSet to true.
`public inline int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1af93be954773173767be0f71d3dfc2486)`()` | Gets the value of SortOrder_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a7af0f627eff40a60f3c0502d26674489)`() const` | Gets the value of SortOrder_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a91384d9bb23dd79b79cec9608ba80043)`(const int32 & DefaultValue) const` | Gets the value of SortOrder_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSortOrder`](#structFRHAPI__Loot_1a9db9bb45bbd74194e41703dc40408045)`(int32 & OutValue) const` | Fills OutValue with the value of SortOrder_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1ad2697ae9f5c4040b57318f1df174ef36)`()` | Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1a6521d242650e2b79f87ad449a5ecdd73)`() const` | Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSortOrder`](#structFRHAPI__Loot_1aa2d0587fcb36026311a3cbb4ecee21d2)`(const int32 & NewValue)` | Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true.
`public inline void `[`SetSortOrder`](#structFRHAPI__Loot_1a9d31791b68fb7c870d8bd35147b33e46)`(int32 && NewValue)` | Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true using move semantics.
`public inline void `[`ClearSortOrder`](#structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955)`()` | Clears the value of SortOrder_Optional and sets SortOrder_IsSet to false.
`public inline bool `[`IsSortOrderSet`](#structFRHAPI__Loot_1a6929f1f030f4c95d302448d48eea9183)`() const` | Checks whether SortOrder_Optional has been set.
`public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__Loot_1a476d6b43e6c290f07c3879d9d18f0acb)`() const` | Returns true if SortOrder_Optional is set and matches the default value.
`public inline void `[`SetSortOrderToDefault`](#structFRHAPI__Loot_1a69397f89697497621e33a6ee1eb4f0a3)`()` | Sets the value of SortOrder_Optional to its default and also sets SortOrder_IsSet to true.
`public inline int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1ad69c183d174ebb7c5197e5ddd43bf9d8)`()` | Gets the value of DropWeight_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1ab12e549f1ddeed13860fa8c4343acb83)`() const` | Gets the value of DropWeight_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a63e6ce77edf4236d2dd2adf8db17562c)`(const int32 & DefaultValue) const` | Gets the value of DropWeight_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDropWeight`](#structFRHAPI__Loot_1a50ece77b36c63ce6bf2a1cb4e5d5160c)`(int32 & OutValue) const` | Fills OutValue with the value of DropWeight_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1a57a760a3eb88f84a55f9544c5b9a2039)`()` | Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1aa191dc271faab83814582fa245121ed3)`() const` | Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDropWeight`](#structFRHAPI__Loot_1ab89d6f704862be83139da7e579b32154)`(const int32 & NewValue)` | Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true.
`public inline void `[`SetDropWeight`](#structFRHAPI__Loot_1a7f8e9153f621f127ca943f87a434923a)`(int32 && NewValue)` | Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true using move semantics.
`public inline void `[`ClearDropWeight`](#structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412)`()` | Clears the value of DropWeight_Optional and sets DropWeight_IsSet to false.
`public inline bool `[`IsDropWeightSet`](#structFRHAPI__Loot_1a6e099dfbf18bd3d7e8c1317a67fd3b8d)`() const` | Checks whether DropWeight_Optional has been set.
`public inline bool `[`IsDropWeightDefaultValue`](#structFRHAPI__Loot_1ac612f584a88113b0c0cd73ce5a3b7486)`() const` | Returns true if DropWeight_Optional is set and matches the default value.
`public inline void `[`SetDropWeightToDefault`](#structFRHAPI__Loot_1a6363ba8bb117c271097619b48a5cb685)`()` | Sets the value of DropWeight_Optional to its default and also sets DropWeight_IsSet to true.
`public inline bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a27ca6307fa8d1111f442cfae6673d8a4)`()` | Gets the value of FillInNewOrder_Optional, regardless of it having been set.
`public inline const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a6fa044aa1ba9b493441e2d8931dba20f)`() const` | Gets the value of FillInNewOrder_Optional, regardless of it having been set.
`public inline const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1ad002a52465c4ad2668fee94cdebed957)`(const bool & DefaultValue) const` | Gets the value of FillInNewOrder_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a558055c9e4b468bfe8c2961d325e3f2c)`(bool & OutValue) const` | Fills OutValue with the value of FillInNewOrder_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a283cb270de6372afcfdaee929a4cc06a)`()` | Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a8e10b09b1a22075afcab71caa3e86494)`() const` | Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a5e182efbdd7faaf9f2420899162153ef)`(const bool & NewValue)` | Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true.
`public inline void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a1c9c9bef3b5f0ce18c42ff6982147f36)`(bool && NewValue)` | Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true using move semantics.
`public inline void `[`ClearFillInNewOrder`](#structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb)`()` | Clears the value of FillInNewOrder_Optional and sets FillInNewOrder_IsSet to false.
`public inline bool `[`IsFillInNewOrderSet`](#structFRHAPI__Loot_1a4c627a1b1695a2eca1462e38d0785a71)`() const` | Checks whether FillInNewOrder_Optional has been set.
`public inline bool `[`IsFillInNewOrderDefaultValue`](#structFRHAPI__Loot_1a096cd5304b7e6ce8e38e2ed23a2d9937)`() const` | Returns true if FillInNewOrder_Optional is set and matches the default value.
`public inline void `[`SetFillInNewOrderToDefault`](#structFRHAPI__Loot_1af49c135f5f8a2278cd294b0f856c69a0)`()` | Sets the value of FillInNewOrder_Optional to its default and also sets FillInNewOrder_IsSet to true.
`public inline bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a77a3dddfe61e555c3a5d55cfa30fd1a9)`()` | Gets the value of AllowPartialBundles_Optional, regardless of it having been set.
`public inline const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a9d81f9c5b0ac7e965f47d09d6c32770c)`() const` | Gets the value of AllowPartialBundles_Optional, regardless of it having been set.
`public inline const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a342443e340a2867ec82b111077b49c65)`(const bool & DefaultValue) const` | Gets the value of AllowPartialBundles_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1ae024296bd76a74c144f9a0b39b819ed8)`(bool & OutValue) const` | Fills OutValue with the value of AllowPartialBundles_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a894a8fc3c1a7c777e1c10f3fae0d86cf)`()` | Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a204bef0d2835a09fc7f3d631acc3feba)`() const` | Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1ac08c0d23a9fe1959373b99f3d9a599e6)`(const bool & NewValue)` | Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true.
`public inline void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1a2bf67472b454720a3c4e79906d13a711)`(bool && NewValue)` | Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true using move semantics.
`public inline void `[`ClearAllowPartialBundles`](#structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95)`()` | Clears the value of AllowPartialBundles_Optional and sets AllowPartialBundles_IsSet to false.
`public inline bool `[`IsAllowPartialBundlesSet`](#structFRHAPI__Loot_1ab4d949e49537a13654740303da8903f5)`() const` | Checks whether AllowPartialBundles_Optional has been set.
`public inline bool `[`IsAllowPartialBundlesDefaultValue`](#structFRHAPI__Loot_1a398d73cfc4df91f93783bc9f8134b731)`() const` | Returns true if AllowPartialBundles_Optional is set and matches the default value.
`public inline void `[`SetAllowPartialBundlesToDefault`](#structFRHAPI__Loot_1afa4e37c2b1cc8728c875d20c143de249)`()` | Sets the value of AllowPartialBundles_Optional to its default and also sets AllowPartialBundles_IsSet to true.
`public inline int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a644204d734055c1ad6db64dbf3c24c49)`()` | Gets the value of RequiredItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1aad7a41842f8f28776a0a41cc499ff5da)`() const` | Gets the value of RequiredItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1af4d4734de12bea9c6455ec4b0b56e050)`(const int32 & DefaultValue) const` | Gets the value of RequiredItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemId`](#structFRHAPI__Loot_1a4dbb79c91f8fc5203268629701fbcb0a)`(int32 & OutValue) const` | Fills OutValue with the value of RequiredItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1a2e150188d347bee5762e2885f98baa74)`()` | Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1a041a1d414e39d434aa1b611e2e552b31)`() const` | Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemId`](#structFRHAPI__Loot_1aedc8b2da4d0c228eefeddc9ad359e7e8)`(const int32 & NewValue)` | Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true.
`public inline void `[`SetRequiredItemId`](#structFRHAPI__Loot_1a68dafe7433eea381adb188a20ab45009)`(int32 && NewValue)` | Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemId`](#structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181)`()` | Clears the value of RequiredItemId_Optional and sets RequiredItemId_IsSet to false.
`public inline bool `[`IsRequiredItemIdSet`](#structFRHAPI__Loot_1abad4d37297ee50c37546b3ebef139fd2)`() const` | Checks whether RequiredItemId_Optional has been set.
`public inline bool `[`IsRequiredItemIdDefaultValue`](#structFRHAPI__Loot_1ac293dab8fa44d784dc6f80acbb030b9d)`() const` | Returns true if RequiredItemId_Optional is set and matches the default value.
`public inline void `[`SetRequiredItemIdToDefault`](#structFRHAPI__Loot_1ae89159c7256c304f929c487a1d6668c3)`()` | Sets the value of RequiredItemId_Optional to its default and also sets RequiredItemId_IsSet to true.
`public inline void `[`SetRequiredItemIdToNull`](#structFRHAPI__Loot_1aaf38b30ab716e703d56c1ae5fccfe1b6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsRequiredItemIdNull`](#structFRHAPI__Loot_1a120d065265a25b6b159de230f7dc0b61)`() const` | Checks whether RequiredItemId_Optional is set to null.
`public inline FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a7aec700af7d2a8bf57ea15db03d84d73)`()` | Gets the value of RequiredItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a19cf4298c285102d4c52808ab80b8ff1)`() const` | Gets the value of RequiredItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a3c6afb7bab6ba6b6de2cd5c8c5ed938e)`(const FGuid & DefaultValue) const` | Gets the value of RequiredItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a015cd4f2792a0ce4063dbc08032af111)`(FGuid & OutValue) const` | Fills OutValue with the value of RequiredItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetRequiredItemUuidOrNull`](#structFRHAPI__Loot_1a557e9b3d90b70d2b268977f4f2c1dc9a)`()` | Returns a pointer to RequiredItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetRequiredItemUuidOrNull`](#structFRHAPI__Loot_1a246d7311bd262b3b9d53f3026430ab4a)`() const` | Returns a pointer to RequiredItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemUuid`](#structFRHAPI__Loot_1ae795e53a83af5ef7fcdfcc7fafe868f1)`(const FGuid & NewValue)` | Sets the value of RequiredItemUuid_Optional and also sets RequiredItemUuid_IsSet to true.
`public inline void `[`SetRequiredItemUuid`](#structFRHAPI__Loot_1a6776bae33ae3f4fdf6f1ea8cebd001dd)`(FGuid && NewValue)` | Sets the value of RequiredItemUuid_Optional and also sets RequiredItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemUuid`](#structFRHAPI__Loot_1aa41e02a9d9dd29c3497869a31d64b977)`()` | Clears the value of RequiredItemUuid_Optional and sets RequiredItemUuid_IsSet to false.
`public inline bool `[`IsRequiredItemUuidSet`](#structFRHAPI__Loot_1a748958019132d24d849841183bb43031)`() const` | Checks whether RequiredItemUuid_Optional has been set.
`public inline void `[`SetRequiredItemUuidToNull`](#structFRHAPI__Loot_1ace3b6ade36eeb5773185398fa133fbe4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsRequiredItemUuidNull`](#structFRHAPI__Loot_1a2e8feb0b5d337e886995f44034006365)`() const` | Checks whether RequiredItemUuid_Optional is set to null.
`public inline int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1ab097b00a06047b25ebd36fb39368e1cf)`()` | Gets the value of RequiredItemCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a00bbd6a7297fa1576b077658ea45aaf4)`() const` | Gets the value of RequiredItemCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1afc95c49aae0d9e9c3290eb0157663465)`(const int32 & DefaultValue) const` | Gets the value of RequiredItemCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a074bc7b7cfcfa02889b3e32e6b567875)`(int32 & OutValue) const` | Fills OutValue with the value of RequiredItemCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1abfb67e8a7f00cd942df516ad97b34806)`()` | Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a5aa279a28a3edab13004f4bdc7ca3e19)`() const` | Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1a9eac390a8e7ede0a245342e5a323aaba)`(const int32 & NewValue)` | Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true.
`public inline void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1aa6c50e038013978ed1ec83fcab8b5a5c)`(int32 && NewValue)` | Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemCount`](#structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd)`()` | Clears the value of RequiredItemCount_Optional and sets RequiredItemCount_IsSet to false.
`public inline bool `[`IsRequiredItemCountSet`](#structFRHAPI__Loot_1a93e2fc425b8a0d30a2cb123c0b094ee4)`() const` | Checks whether RequiredItemCount_Optional has been set.
`public inline bool `[`IsRequiredItemCountDefaultValue`](#structFRHAPI__Loot_1ab465a43f9dcfe5bbac7aeac109cb7c81)`() const` | Returns true if RequiredItemCount_Optional is set and matches the default value.
`public inline void `[`SetRequiredItemCountToDefault`](#structFRHAPI__Loot_1a98f2f8f4d019a7d4a7d58658c5061857)`()` | Sets the value of RequiredItemCount_Optional to its default and also sets RequiredItemCount_IsSet to true.
`public inline int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1ac833abfa9b7d46def3da9ab5e7b7d8ec)`()` | Gets the value of StackLimit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a4edbe09078a1ade68506249b8acb08e8)`() const` | Gets the value of StackLimit_Optional, regardless of it having been set.
`public inline const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1aeab2757293034eb740794132fcdb61e3)`(const int32 & DefaultValue) const` | Gets the value of StackLimit_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStackLimit`](#structFRHAPI__Loot_1a01aed35350e799d59a51e5c735eb99b6)`(int32 & OutValue) const` | Fills OutValue with the value of StackLimit_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1a4b82c102f354be72135f2c0dafa16dcd)`()` | Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1a663d57514732a8b1bd5fed4e9e97cfb8)`() const` | Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStackLimit`](#structFRHAPI__Loot_1a5c0d6ac331d6378e8df0b557148b993c)`(const int32 & NewValue)` | Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true.
`public inline void `[`SetStackLimit`](#structFRHAPI__Loot_1aa2d922b6609527df433764e835871bb7)`(int32 && NewValue)` | Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true using move semantics.
`public inline void `[`ClearStackLimit`](#structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68)`()` | Clears the value of StackLimit_Optional and sets StackLimit_IsSet to false.
`public inline bool `[`IsStackLimitSet`](#structFRHAPI__Loot_1a79e96ce475ebfd6865cd67b9b3ec26f7)`() const` | Checks whether StackLimit_Optional has been set.
`public inline bool `[`IsStackLimitDefaultValue`](#structFRHAPI__Loot_1a4411301f594cf03ca1ac883fc5aa8092)`() const` | Returns true if StackLimit_Optional is set and matches the default value.
`public inline void `[`SetStackLimitToDefault`](#structFRHAPI__Loot_1a4178e812d7007b89cffdc5425bc70165)`()` | Sets the value of StackLimit_Optional to its default and also sets StackLimit_IsSet to true.
`public inline int32 & `[`GetUiHint`](#structFRHAPI__Loot_1afda48083dbc6fc8c13d0375560649f72)`()` | Gets the value of UiHint_Optional, regardless of it having been set.
`public inline const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a27ee675258cb83a9e539c7801b9124b4)`() const` | Gets the value of UiHint_Optional, regardless of it having been set.
`public inline const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1ab652df8c110878e7b4936f92654297da)`(const int32 & DefaultValue) const` | Gets the value of UiHint_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUiHint`](#structFRHAPI__Loot_1a978fe0b67180757bda7ac94bcd149a94)`(int32 & OutValue) const` | Fills OutValue with the value of UiHint_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1ab98b2f45a0b286c7ca214c3ce7451b2a)`()` | Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1a39b60cd141e52dd1f47098930f047676)`() const` | Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUiHint`](#structFRHAPI__Loot_1afaad686a069f3871ac204f5b42a6ab82)`(const int32 & NewValue)` | Sets the value of UiHint_Optional and also sets UiHint_IsSet to true.
`public inline void `[`SetUiHint`](#structFRHAPI__Loot_1aab69be8553516257498e87b900fbbff4)`(int32 && NewValue)` | Sets the value of UiHint_Optional and also sets UiHint_IsSet to true using move semantics.
`public inline void `[`ClearUiHint`](#structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666)`()` | Clears the value of UiHint_Optional and sets UiHint_IsSet to false.
`public inline bool `[`IsUiHintSet`](#structFRHAPI__Loot_1ad89add7bbbb5d24e86c86afbf083a67f)`() const` | Checks whether UiHint_Optional has been set.
`public inline bool `[`IsUiHintDefaultValue`](#structFRHAPI__Loot_1a768434aca6d481543db42a6ba4ab04fb)`() const` | Returns true if UiHint_Optional is set and matches the default value.
`public inline void `[`SetUiHintToDefault`](#structFRHAPI__Loot_1aa04866c631982d1d3fb998505c09f763)`()` | Sets the value of UiHint_Optional to its default and also sets UiHint_IsSet to true.
`public inline FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1ae072c36d4d9298bc94864c66a6304b0d)`()` | Gets the value of EffectiveFrom_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1a1d2dabd11b22beb7f257169d20f65dac)`() const` | Gets the value of EffectiveFrom_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1aa43d9765df77f3c149978cda4e40d7e2)`(const FDateTime & DefaultValue) const` | Gets the value of EffectiveFrom_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEffectiveFrom`](#structFRHAPI__Loot_1af51ee7d4f692fc48fa6281955948f0ef)`(FDateTime & OutValue) const` | Fills OutValue with the value of EffectiveFrom_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a9306429f9df1742bf26e80e6324dd3bf)`()` | Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a7b1281b60fd26cc2709905662730943d)`() const` | Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1a26810f22a8dc416770296510ddcf492b)`(const FDateTime & NewValue)` | Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true.
`public inline void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1a634a4374f488fe51d04f770efe8d217b)`(FDateTime && NewValue)` | Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true using move semantics.
`public inline void `[`ClearEffectiveFrom`](#structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008)`()` | Clears the value of EffectiveFrom_Optional and sets EffectiveFrom_IsSet to false.
`public inline bool `[`IsEffectiveFromSet`](#structFRHAPI__Loot_1ae2266b7ddce7252d3cd27cf3eb42f5cf)`() const` | Checks whether EffectiveFrom_Optional has been set.
`public inline void `[`SetEffectiveFromToNull`](#structFRHAPI__Loot_1a8f588c087de85b0f365382ef1d3d7b53)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEffectiveFromNull`](#structFRHAPI__Loot_1a2425955b647778fca07465fd7749453b)`() const` | Checks whether EffectiveFrom_Optional is set to null.
`public inline ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1affdf5827e7ae0b9416fef061934efade)`()` | Gets the value of QuantityType_Optional, regardless of it having been set.
`public inline const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a922c8769efa7470ce37159b8f639c429)`() const` | Gets the value of QuantityType_Optional, regardless of it having been set.
`public inline const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a1fa2bb37391e296c6dacb756027a3d3e)`(const ERHAPI_QuantityType & DefaultValue) const` | Gets the value of QuantityType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantityType`](#structFRHAPI__Loot_1a06585bd89d8595f273d2561085036c7f)`(ERHAPI_QuantityType & OutValue) const` | Fills OutValue with the value of QuantityType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1a9e859a104d981fc595300b456ddf94c9)`()` | Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1a09871b543ac833fca4a363bd53ff4aea)`() const` | Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantityType`](#structFRHAPI__Loot_1a4d80f18bdfa8d7727db0b3eb5cfac683)`(const ERHAPI_QuantityType & NewValue)` | Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true.
`public inline void `[`SetQuantityType`](#structFRHAPI__Loot_1a12a6df55378ba27c2674e87029eb4400)`(ERHAPI_QuantityType && NewValue)` | Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true using move semantics.
`public inline void `[`ClearQuantityType`](#structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd)`()` | Clears the value of QuantityType_Optional and sets QuantityType_IsSet to false.
`public inline bool `[`IsQuantityTypeSet`](#structFRHAPI__Loot_1a3d659a8e8109c0ba0da785a8a23f3bba)`() const` | Checks whether QuantityType_Optional has been set.
`public inline int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1acd3194b7c96cae542c29a3efe678f2ea)`()` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a5b2ff024534655a743fcc870912d4b76)`() const` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1aebef2ca09e71059b6000265f93e58da2)`(const int32 & DefaultValue) const` | Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a39ff579e93b70184c70016e8f8370f3d)`(int32 & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1abb98ef34b0389de5e8f5fb3a71de348a)`()` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1a1a81390a03f685c64975f33d301fbfd1)`() const` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1afc9ef0444a38b7bb4325218462ab9eed)`(const int32 & NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a602fad89314b60b581244f945e870690)`(int32 && NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.
`public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50)`()` | Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.
`public inline bool `[`IsQuantityMultInventoryItemIdSet`](#structFRHAPI__Loot_1a1a2509821822f1d7500f7fbfd44ee230)`() const` | Checks whether QuantityMultInventoryItemId_Optional has been set.
`public inline bool `[`IsQuantityMultInventoryItemIdDefaultValue`](#structFRHAPI__Loot_1a1c513bf258edd56413a96b8e4ca2f63d)`() const` | Returns true if QuantityMultInventoryItemId_Optional is set and matches the default value.
`public inline void `[`SetQuantityMultInventoryItemIdToDefault`](#structFRHAPI__Loot_1a480179232e881178aa0bae6eac822e72)`()` | Sets the value of QuantityMultInventoryItemId_Optional to its default and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__Loot_1a16668bd2d8c5241fa051a75e2b90d7eb)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__Loot_1a7cd327b5cc744939f3d2806f0dbda3bc)`() const` | Checks whether QuantityMultInventoryItemId_Optional is set to null.
`public inline FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1aa1b3e4e0a8afe755464d93f351d7a269)`()` | Gets the value of QuantityMultInventoryItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1acc352d5abc9ece699cd24accdc4b38bc)`() const` | Gets the value of QuantityMultInventoryItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1af8b4b7a91d2bde2589226273c81cbc8a)`(const FGuid & DefaultValue) const` | Gets the value of QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a320e94e735e3a5eae184b05278fe8b1f)`(FGuid & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetQuantityMultInventoryItemUuidOrNull`](#structFRHAPI__Loot_1a0494b9c70130db2041291b4fff069232)`()` | Returns a pointer to QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetQuantityMultInventoryItemUuidOrNull`](#structFRHAPI__Loot_1a6891aacf37dabbaa67a971c8f9e4c3b1)`() const` | Returns a pointer to QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1ae8921ffcff5270847f002ec162602684)`(const FGuid & NewValue)` | Sets the value of QuantityMultInventoryItemUuid_Optional and also sets QuantityMultInventoryItemUuid_IsSet to true.
`public inline void `[`SetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a7a02b8d2b63c29570c51e7e6fb5c8219)`(FGuid && NewValue)` | Sets the value of QuantityMultInventoryItemUuid_Optional and also sets QuantityMultInventoryItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a69be0a85188c51421539df8cf652912b)`()` | Clears the value of QuantityMultInventoryItemUuid_Optional and sets QuantityMultInventoryItemUuid_IsSet to false.
`public inline bool `[`IsQuantityMultInventoryItemUuidSet`](#structFRHAPI__Loot_1a41e42b918a91333946db8b704191afc7)`() const` | Checks whether QuantityMultInventoryItemUuid_Optional has been set.
`public inline void `[`SetQuantityMultInventoryItemUuidToNull`](#structFRHAPI__Loot_1a7a43d5a29a3b51b07cd36c21d4de93ea)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsQuantityMultInventoryItemUuidNull`](#structFRHAPI__Loot_1a437e2a72d334874f68102dbe69c9e262)`() const` | Checks whether QuantityMultInventoryItemUuid_Optional is set to null.
`public inline bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1aafaeadeed4112122432bfb952f85eb11)`()` | Gets the value of IsClaimableByClient_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a29a5c936721938f9e14d96782029e28c)`() const` | Gets the value of IsClaimableByClient_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a37f2c54c862b4ab956580e4fae62010a)`(const bool & DefaultValue) const` | Gets the value of IsClaimableByClient_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1ae2cea6c0c8a4bde7087ab75ed5b0e10d)`(bool & OutValue) const` | Fills OutValue with the value of IsClaimableByClient_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1a3dc938c87c63627f42ca04a49f17b791)`()` | Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1afc09f46c80f23ac28ad316ab51e5f9b3)`() const` | Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1af1b3ba3dd60616855dff4c177d5f934b)`(const bool & NewValue)` | Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true.
`public inline void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1a4ce0dc54c2b3f539c157e3a5e5569ee5)`(bool && NewValue)` | Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true using move semantics.
`public inline void `[`ClearIsClaimableByClient`](#structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6)`()` | Clears the value of IsClaimableByClient_Optional and sets IsClaimableByClient_IsSet to false.
`public inline bool `[`IsIsClaimableByClientSet`](#structFRHAPI__Loot_1ae393a59c5dfd958a440df421fde06169)`() const` | Checks whether IsClaimableByClient_Optional has been set.
`public inline bool `[`IsIsClaimableByClientDefaultValue`](#structFRHAPI__Loot_1a9d2152f9ebbac480467ccf601a3fe673)`() const` | Returns true if IsClaimableByClient_Optional is set and matches the default value.
`public inline void `[`SetIsClaimableByClientToDefault`](#structFRHAPI__Loot_1a336c1ad23684075d60e7da97dca72e26)`()` | Sets the value of IsClaimableByClient_Optional to its default and also sets IsClaimableByClient_IsSet to true.
`public inline int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a6c323e6e0612e181e44d269400d34a45)`()` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a0ecd5eb336b56ea827bef5ff27b91864)`() const` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a3f7676486e87b22bf799bb59beaf02a5)`(const int32 & DefaultValue) const` | Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTimeFrameId`](#structFRHAPI__Loot_1aa90943249db3ef3ec9b0a64d09c3e048)`(int32 & OutValue) const` | Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1a662c5df10adacab84252d93cc27cd60d)`()` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1a89e0fe05aaad9084b4cbc1f3b3b646ce)`() const` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTimeFrameId`](#structFRHAPI__Loot_1ae8e2e7fd878445d35dbc3fe6b0479e7b)`(const int32 & NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.
`public inline void `[`SetTimeFrameId`](#structFRHAPI__Loot_1a5fd203ce391fe60c3929ed65c73c6d40)`(int32 && NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.
`public inline void `[`ClearTimeFrameId`](#structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0)`()` | Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.
`public inline bool `[`IsTimeFrameIdSet`](#structFRHAPI__Loot_1a8f6c139e0717dd774a9a0e0b61ea669a)`() const` | Checks whether TimeFrameId_Optional has been set.
`public inline bool `[`IsTimeFrameIdDefaultValue`](#structFRHAPI__Loot_1ab7ce5827e1a9a6f065f55fa958ea9dfe)`() const` | Returns true if TimeFrameId_Optional is set and matches the default value.
`public inline void `[`SetTimeFrameIdToDefault`](#structFRHAPI__Loot_1aaaf27b49e24ee23b0584f580d46d0e36)`()` | Sets the value of TimeFrameId_Optional to its default and also sets TimeFrameId_IsSet to true.
`public inline void `[`SetTimeFrameIdToNull`](#structFRHAPI__Loot_1ac8677f7d46a172ccf5f3643aa710c9e3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTimeFrameIdNull`](#structFRHAPI__Loot_1aab3788bfa3e2fbe360ddb985fdbe5a76)`() const` | Checks whether TimeFrameId_Optional is set to null.
`public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1aade57d645e5788df9674febeef4aac63)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a8773fb61f0c5cbd4866291d204843e30)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a2e0ca3547d508a89d2d21abc53949c75)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1aa46c343b94bb7c9bc8d7c82ecdeb13e2)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1ae0627af409529cf53dd24ad8defeeb8b)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1aa8b8263d3fac7cf76f68e244bf2cdd83)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1aa87a5e0280fe48d98ba27884b5d0333b)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1a0ec60ab61d2175b194366ffaa42b6f33)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__Loot_1a0c83e17321a542a48869ef74233968a6)`() const` | Checks whether UseInventoryBucket_Optional has been set.
`public inline void `[`SetUseInventoryBucketToNull`](#structFRHAPI__Loot_1aa52f0decc85cfd8a9a77f9c750cbd311)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsUseInventoryBucketNull`](#structFRHAPI__Loot_1a7d9e449c28369005244cc076c9005aab)`() const` | Checks whether UseInventoryBucket_Optional is set to null.
`public inline ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a6a9434cb329e2da5b41557c5a11e2147)`()` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1aef0bf6cc2089118d09f28c99ca0c9e44)`() const` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1ab0dee2b26446c54e47d3c78aa6bab175)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` | Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a75e8680087f9474f45dae8497cf61f86)`(ERHAPI_XpQuantityTransform & OutValue) const` | Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1afa973c3e2d6c6846d0cf8b263200eb3a)`()` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1a852ca6b6159f36264458735911917301)`() const` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1aede41113f17cdc20912efe9357e824d7)`(const ERHAPI_XpQuantityTransform & NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.
`public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1aaf5c492282ab518ab8b1ae9e3b2e0b2c)`(ERHAPI_XpQuantityTransform && NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.
`public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da)`()` | Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.
`public inline bool `[`IsXpQuantityTransformTypeSet`](#structFRHAPI__Loot_1ad1abe2db996f93f6323e225683f5d05b)`() const` | Checks whether XpQuantityTransformType_Optional has been set.
`public inline FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a192debb1b487e6044db6a83521ec8617)`()` | Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a5d8c6c1304bf9ee54fc5a7f4c7c89479)`() const` | Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a82779cb6fe784d058eafb98a6e916fa1)`(const FString & DefaultValue) const` | Gets the value of CurrentPricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a1cdd271fa5085a0400483f9479cd3240)`(FString & OutValue) const` | Fills OutValue with the value of CurrentPricePointGuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1a3848b5d5396bd85b304800888c929c8d)`()` | Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1a90cf280303376fd2e46d7242b85ef46b)`() const` | Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1aa07ac83717115f7907fae06487989d5c)`(const FString & NewValue)` | Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true.
`public inline void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1a61087ca6e438436c957d8253568eebdf)`(FString && NewValue)` | Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true using move semantics.
`public inline void `[`ClearCurrentPricePointGuid`](#structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e)`()` | Clears the value of CurrentPricePointGuid_Optional and sets CurrentPricePointGuid_IsSet to false.
`public inline bool `[`IsCurrentPricePointGuidSet`](#structFRHAPI__Loot_1ad5230b0d787b81d156fa59517733c73c)`() const` | Checks whether CurrentPricePointGuid_Optional has been set.
`public inline void `[`SetCurrentPricePointGuidToNull`](#structFRHAPI__Loot_1aba4371e81090ba230a0d2dc4734803c0)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCurrentPricePointGuidNull`](#structFRHAPI__Loot_1abf30000c9f7f3761d0cdd682dcb2b158)`() const` | Checks whether CurrentPricePointGuid_Optional is set to null.
`public inline FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a0a8d4128b601e6f0e59cf06cfba7f07a)`()` | Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a437debb3837b804aef58c9cf5bc8fafe)`() const` | Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1aed59450aa926415f6ac390623118b066)`(const FString & DefaultValue) const` | Gets the value of PreSalePricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a566fb155c23cbc637cbfa1bf07bd59d5)`(FString & OutValue) const` | Fills OutValue with the value of PreSalePricePointGuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1af313af4ec8cd0a19969ba480caa6b2f5)`()` | Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1a4341d1268acb3cb6dbad70bd151a95e0)`() const` | Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1af4a068f843b026090a8c35a43ac21700)`(const FString & NewValue)` | Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true.
`public inline void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1afae4c15dc92a4eafa9218baee86f5ddd)`(FString && NewValue)` | Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true using move semantics.
`public inline void `[`ClearPreSalePricePointGuid`](#structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e)`()` | Clears the value of PreSalePricePointGuid_Optional and sets PreSalePricePointGuid_IsSet to false.
`public inline bool `[`IsPreSalePricePointGuidSet`](#structFRHAPI__Loot_1ad6f9cbc630b08f103dad3d20cfe69fed)`() const` | Checks whether PreSalePricePointGuid_Optional has been set.
`public inline void `[`SetPreSalePricePointGuidToNull`](#structFRHAPI__Loot_1add9bde1d3c7eb9943d242b86f381a8e5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPreSalePricePointGuidNull`](#structFRHAPI__Loot_1a4e01f64ed3e1ad393e94314b2264d08a)`() const` | Checks whether PreSalePricePointGuid_Optional is set to null.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a2039265cc3933c87f52f649365ce80aa)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a3e87e3502894ed8a7a313f656c3823ba)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1ac593ab1b44d63a635272c0be6e347cc4)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Loot_1a5cc085454f37806d9400e794b7d64ab5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1a1cf8daaa04586e3a6bd6a63e02224a79)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1a2bcda3da8cb2e7c53afe6b9f11ac310b)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Loot_1a1d8e16be89e1f22c6672c547df6593f3)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Loot_1a990dfa89a8255c0ea88443aeb68b0be1)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Loot_1a151daa852517492e955e1bb4375d32c5)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__Loot_1a27a6ad4028734ee985306d2429e2b67a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__Loot_1a4922c731ff4a9b2d6dd178d991f982ab)`() const` | Checks whether CacheInfo_Optional is set to null.
`public inline int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a50561277d90d95069d37feeb3bfb2e7c)`()` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1af38f9a5ed9eee9398723846b646f100a)`() const` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1ac5ecc84f81dba443728d63519e1ae375)`(const int32 & DefaultValue) const` | Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a99f6530818176b2d7276082dba8de91a)`(int32 & OutValue) const` | Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1aa99d054ad01b75c0dac38bb2f93d59b1)`()` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1af5ec36f8051563362c113ac1a769cc65)`() const` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1ad3ad704a5b89921dc3d08745b4954bd6)`(const int32 & NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.
`public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1a0125a96961951141e108df6f8bc9d8e3)`(int32 && NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.
`public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df)`()` | Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.
`public inline bool `[`IsHardQuantityMaximumSet`](#structFRHAPI__Loot_1ac77f90979a81dc8f0675a30189d97b6e)`() const` | Checks whether HardQuantityMaximum_Optional has been set.
`public inline bool `[`IsHardQuantityMaximumDefaultValue`](#structFRHAPI__Loot_1a1dcf73ab36076f3fe98df72496ac7ae1)`() const` | Returns true if HardQuantityMaximum_Optional is set and matches the default value.
`public inline void `[`SetHardQuantityMaximumToDefault`](#structFRHAPI__Loot_1ae75d4313ecf4e431d50d1a6defb18831)`()` | Sets the value of HardQuantityMaximum_Optional to its default and also sets HardQuantityMaximum_IsSet to true.
`public inline `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a175280a79910207b3abf9c1d406a6fe3)`()` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1aaf6b286039c6d70d4fa08041aad189ef)`() const` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a7567bffe3cfd705bef0743e37c3ec24d)`(const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & DefaultValue) const` | Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPrice`](#structFRHAPI__Loot_1affb5485eaced42454b3e4d92cfdbd723)`(`[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & OutValue) const` | Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` * `[`GetPriceOrNull`](#structFRHAPI__Loot_1ae9fb8a7417ba4a5e40211c0d71f23379)`()` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` * `[`GetPriceOrNull`](#structFRHAPI__Loot_1a1de71ae8ea4035d765dd0122536305f8)`() const` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPrice`](#structFRHAPI__Loot_1ac857eda13f1cb850f345bc83e2124af2)`(const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true.
`public inline void `[`SetPrice`](#structFRHAPI__Loot_1a099db48ed6f0814b19923f0559d85cf7)`(`[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` && NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.
`public inline void `[`ClearPrice`](#structFRHAPI__Loot_1ab1aa3a168ad71a2d2f93b5a7253f93d5)`()` | Clears the value of Price_Optional and sets Price_IsSet to false.
`public inline bool `[`IsPriceSet`](#structFRHAPI__Loot_1aa63f6ad9f4db27c02a2bbe58bc825a7f)`() const` | Checks whether Price_Optional has been set.
`public inline void `[`SetPriceToNull`](#structFRHAPI__Loot_1ad1153b5d7d6a9ebcf9f3dbdc92dbb132)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPriceNull`](#structFRHAPI__Loot_1aa8d93260da3fe70656a46addb32a17ff)`() const` | Checks whether Price_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Loot_1a3ac4b8fa1534ddc987f9809a78b0f573) <a id="structFRHAPI__Loot_1a3ac4b8fa1534ddc987f9809a78b0f573"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Loot_1ab5141af81d9f12541fa2a640cc9025d5) <a id="structFRHAPI__Loot_1ab5141af81d9f12541fa2a640cc9025d5"></a>

true if CustomData_Optional has been set to a value

#### `public FGuid `[`LootUuid_Optional`](#structFRHAPI__Loot_1a0a6a4416afa1beca2b7709091c92c97f) <a id="structFRHAPI__Loot_1a0a6a4416afa1beca2b7709091c92c97f"></a>

#### `public bool `[`LootUuid_IsSet`](#structFRHAPI__Loot_1a51db4c187b5dbf6ed7a663f99b88d1e6) <a id="structFRHAPI__Loot_1a51db4c187b5dbf6ed7a663f99b88d1e6"></a>

true if LootUuid_Optional has been set to a value

#### `public bool `[`LootUuid_IsNull`](#structFRHAPI__Loot_1a0ac398d76a4ecb75049bbd2f9cd30454) <a id="structFRHAPI__Loot_1a0ac398d76a4ecb75049bbd2f9cd30454"></a>

true if LootUuid_Optional has been explicitly set to null

#### `public int32 `[`LootId`](#structFRHAPI__Loot_1a5f92839acf839d6c49b57b1cc66dba4f) <a id="structFRHAPI__Loot_1a5f92839acf839d6c49b57b1cc66dba4f"></a>

The Loot ID.

#### `public int32 `[`VendorId`](#structFRHAPI__Loot_1aeebadf01967a63239b42fe6094e7a9c5) <a id="structFRHAPI__Loot_1aeebadf01967a63239b42fe6094e7a9c5"></a>

The Vendor ID.

#### `public FGuid `[`VendorUuid_Optional`](#structFRHAPI__Loot_1a49b6c65bf3c5c01f838e7b4c8c5bb002) <a id="structFRHAPI__Loot_1a49b6c65bf3c5c01f838e7b4c8c5bb002"></a>

#### `public bool `[`VendorUuid_IsSet`](#structFRHAPI__Loot_1a2ce5e65a054bb3ea289cab8b6598076a) <a id="structFRHAPI__Loot_1a2ce5e65a054bb3ea289cab8b6598076a"></a>

true if VendorUuid_Optional has been set to a value

#### `public bool `[`VendorUuid_IsNull`](#structFRHAPI__Loot_1a08d0b6fff8dc77a92b8d52ca1b99480e) <a id="structFRHAPI__Loot_1a08d0b6fff8dc77a92b8d52ca1b99480e"></a>

true if VendorUuid_Optional has been explicitly set to null

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__Loot_1a8cd4e2427345b15dd5a3a12f5fdc7497) <a id="structFRHAPI__Loot_1a8cd4e2427345b15dd5a3a12f5fdc7497"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__Loot_1ab203c9039289860b29222870d6c41689) <a id="structFRHAPI__Loot_1ab203c9039289860b29222870d6c41689"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__Loot_1a171ca88b495ab3cc2ff97237f69ed5cb) <a id="structFRHAPI__Loot_1a171ca88b495ab3cc2ff97237f69ed5cb"></a>

true if ItemId_Optional has been explicitly set to null

#### `public FGuid `[`ItemUuid_Optional`](#structFRHAPI__Loot_1ab26b195362fb3205f9daf2e9d337a831) <a id="structFRHAPI__Loot_1ab26b195362fb3205f9daf2e9d337a831"></a>

#### `public bool `[`ItemUuid_IsSet`](#structFRHAPI__Loot_1a1e5d89ac63110e823cf82a6816e1986d) <a id="structFRHAPI__Loot_1a1e5d89ac63110e823cf82a6816e1986d"></a>

true if ItemUuid_Optional has been set to a value

#### `public bool `[`ItemUuid_IsNull`](#structFRHAPI__Loot_1adbf7e0dc9d08efee5b5024ce859e3257) <a id="structFRHAPI__Loot_1adbf7e0dc9d08efee5b5024ce859e3257"></a>

true if ItemUuid_Optional has been explicitly set to null

#### `public `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` `[`Item_Optional`](#structFRHAPI__Loot_1a2465b63dbf01c76fa9cc736f7356d278) <a id="structFRHAPI__Loot_1a2465b63dbf01c76fa9cc736f7356d278"></a>

#### `public bool `[`Item_IsSet`](#structFRHAPI__Loot_1a5511b7f6472a4da05f937a4262f15843) <a id="structFRHAPI__Loot_1a5511b7f6472a4da05f937a4262f15843"></a>

true if Item_Optional has been set to a value

#### `public bool `[`Item_IsNull`](#structFRHAPI__Loot_1aeb869e611f062ea049f5c9c9df877efb) <a id="structFRHAPI__Loot_1aeb869e611f062ea049f5c9c9df877efb"></a>

true if Item_Optional has been explicitly set to null

#### `public int32 `[`SubVendorId_Optional`](#structFRHAPI__Loot_1a9869e1988c40476054db483a6b763e73) <a id="structFRHAPI__Loot_1a9869e1988c40476054db483a6b763e73"></a>

#### `public bool `[`SubVendorId_IsSet`](#structFRHAPI__Loot_1a97e58634ed48e68a3eb038df38ede464) <a id="structFRHAPI__Loot_1a97e58634ed48e68a3eb038df38ede464"></a>

true if SubVendorId_Optional has been set to a value

#### `public bool `[`SubVendorId_IsNull`](#structFRHAPI__Loot_1a05c0bf89a082e0716ac0e4a6a8a4cb46) <a id="structFRHAPI__Loot_1a05c0bf89a082e0716ac0e4a6a8a4cb46"></a>

true if SubVendorId_Optional has been explicitly set to null

#### `public FGuid `[`SubVendorUuid_Optional`](#structFRHAPI__Loot_1ab719d2287abef832f70c456caea1cbd8) <a id="structFRHAPI__Loot_1ab719d2287abef832f70c456caea1cbd8"></a>

#### `public bool `[`SubVendorUuid_IsSet`](#structFRHAPI__Loot_1a98cd7e07a54a3f7726a218fc52900f96) <a id="structFRHAPI__Loot_1a98cd7e07a54a3f7726a218fc52900f96"></a>

true if SubVendorUuid_Optional has been set to a value

#### `public bool `[`SubVendorUuid_IsNull`](#structFRHAPI__Loot_1a35423a18214bc2cb18d6fb3464f2ea4a) <a id="structFRHAPI__Loot_1a35423a18214bc2cb18d6fb3464f2ea4a"></a>

true if SubVendorUuid_Optional has been explicitly set to null

#### `public int32 `[`Quantity_Optional`](#structFRHAPI__Loot_1a507bf92cd6bc234afa66946931e806b9) <a id="structFRHAPI__Loot_1a507bf92cd6bc234afa66946931e806b9"></a>

The quantity of the Item or Sub Vendor to fulfill. This will be multiplied by the quantity of fulfilled Loot and the parent Loot if quantity_type is relative.

#### `public bool `[`Quantity_IsSet`](#structFRHAPI__Loot_1abb9332211b9db78f3eb03556977d1add) <a id="structFRHAPI__Loot_1abb9332211b9db78f3eb03556977d1add"></a>

true if Quantity_Optional has been set to a value

#### `public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__Loot_1a43c10b4f70841b48fdec3f81de3325f5) <a id="structFRHAPI__Loot_1a43c10b4f70841b48fdec3f81de3325f5"></a>

#### `public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__Loot_1afde2ba63a4fe363fd04030d691f53ea8) <a id="structFRHAPI__Loot_1afde2ba63a4fe363fd04030d691f53ea8"></a>

true if InventorySelectorType_Optional has been set to a value

#### `public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__Loot_1a05d38a166aa71dceb816fcf5c3883655) <a id="structFRHAPI__Loot_1a05d38a166aa71dceb816fcf5c3883655"></a>

#### `public bool `[`InventoryOperation_IsSet`](#structFRHAPI__Loot_1ae432979fcb368180c320fe3a859b9fc8) <a id="structFRHAPI__Loot_1ae432979fcb368180c320fe3a859b9fc8"></a>

true if InventoryOperation_Optional has been set to a value

#### `public bool `[`Active_Optional`](#structFRHAPI__Loot_1a54948ce1e603d2ab0bf23d1b77e90866) <a id="structFRHAPI__Loot_1a54948ce1e603d2ab0bf23d1b77e90866"></a>

Determines if the Loot is active. Inactive Loot will not be fulfilled.

#### `public bool `[`Active_IsSet`](#structFRHAPI__Loot_1aad1d01bf7a99966aa59f72495e840ec1) <a id="structFRHAPI__Loot_1aad1d01bf7a99966aa59f72495e840ec1"></a>

true if Active_Optional has been set to a value

#### `public int32 `[`SortOrder_Optional`](#structFRHAPI__Loot_1ab906a8714eb2296f6017caac3d06f088) <a id="structFRHAPI__Loot_1ab906a8714eb2296f6017caac3d06f088"></a>

The sort order of the Loot. Lower sort order will be fulfilled first. Inventory Operation is used as a tie breaker when sort_order is the same.

#### `public bool `[`SortOrder_IsSet`](#structFRHAPI__Loot_1ac2495f13e749de6982277aecf580171b) <a id="structFRHAPI__Loot_1ac2495f13e749de6982277aecf580171b"></a>

true if SortOrder_Optional has been set to a value

#### `public int32 `[`DropWeight_Optional`](#structFRHAPI__Loot_1ae52d49075f11b8b4a6cbe93634c4d141) <a id="structFRHAPI__Loot_1ae52d49075f11b8b4a6cbe93634c4d141"></a>

The drop weight of the Loot. Higher drop weight will be more likely to be fulfilled.

#### `public bool `[`DropWeight_IsSet`](#structFRHAPI__Loot_1ac826cf7c16d679150786eef688b22702) <a id="structFRHAPI__Loot_1ac826cf7c16d679150786eef688b22702"></a>

true if DropWeight_Optional has been set to a value

#### `public bool `[`FillInNewOrder_Optional`](#structFRHAPI__Loot_1a7c8b3f3950233c904f9a0fa08fc1fa5d) <a id="structFRHAPI__Loot_1a7c8b3f3950233c904f9a0fa08fc1fa5d"></a>

When dropped in a randomly sampled vendor, will this create a new order or fill inline?. The primary use case for this is when you want the same loot to be dropped multiple times in a randomly sampled vendor.

#### `public bool `[`FillInNewOrder_IsSet`](#structFRHAPI__Loot_1a88b56445963d45d4728243e1bf1308c4) <a id="structFRHAPI__Loot_1a88b56445963d45d4728243e1bf1308c4"></a>

true if FillInNewOrder_Optional has been set to a value

#### `public bool `[`AllowPartialBundles_Optional`](#structFRHAPI__Loot_1ae8fcee9d99c567d50b57e143769a7bc8) <a id="structFRHAPI__Loot_1ae8fcee9d99c567d50b57e143769a7bc8"></a>

When dropped in a randomly sampled vendor, will the sub vendor allow dropping part of the the bundle? False means it will only drop if the entire sub vendor can be given to the player.

#### `public bool `[`AllowPartialBundles_IsSet`](#structFRHAPI__Loot_1ad84758793e1dff016a53cc580fe15916) <a id="structFRHAPI__Loot_1ad84758793e1dff016a53cc580fe15916"></a>

true if AllowPartialBundles_Optional has been set to a value

#### `public int32 `[`RequiredItemId_Optional`](#structFRHAPI__Loot_1ae088775af177f58b9bac7cdfe69b38ed) <a id="structFRHAPI__Loot_1ae088775af177f58b9bac7cdfe69b38ed"></a>

#### `public bool `[`RequiredItemId_IsSet`](#structFRHAPI__Loot_1a47d9045f2c086ffa823850f5a02f0b60) <a id="structFRHAPI__Loot_1a47d9045f2c086ffa823850f5a02f0b60"></a>

true if RequiredItemId_Optional has been set to a value

#### `public bool `[`RequiredItemId_IsNull`](#structFRHAPI__Loot_1a2580918505e128c34cce7ea01f008971) <a id="structFRHAPI__Loot_1a2580918505e128c34cce7ea01f008971"></a>

true if RequiredItemId_Optional has been explicitly set to null

#### `public FGuid `[`RequiredItemUuid_Optional`](#structFRHAPI__Loot_1a07ecd96d29ea60496e8e18cacade4eb9) <a id="structFRHAPI__Loot_1a07ecd96d29ea60496e8e18cacade4eb9"></a>

#### `public bool `[`RequiredItemUuid_IsSet`](#structFRHAPI__Loot_1ae0a9947ab89c289afae27916214536d8) <a id="structFRHAPI__Loot_1ae0a9947ab89c289afae27916214536d8"></a>

true if RequiredItemUuid_Optional has been set to a value

#### `public bool `[`RequiredItemUuid_IsNull`](#structFRHAPI__Loot_1adb1fdb9aebf8737a4e62b415bc8a4c52) <a id="structFRHAPI__Loot_1adb1fdb9aebf8737a4e62b415bc8a4c52"></a>

true if RequiredItemUuid_Optional has been explicitly set to null

#### `public int32 `[`RequiredItemCount_Optional`](#structFRHAPI__Loot_1abf8e2c11c8acf567243cec8c806b7a62) <a id="structFRHAPI__Loot_1abf8e2c11c8acf567243cec8c806b7a62"></a>

Amount of the required_item_id to be owned/rented to drop this Loot in a randomly sampled vendor.

#### `public bool `[`RequiredItemCount_IsSet`](#structFRHAPI__Loot_1ada979daeddf09bd7b4b566aa9bf3df28) <a id="structFRHAPI__Loot_1ada979daeddf09bd7b4b566aa9bf3df28"></a>

true if RequiredItemCount_Optional has been set to a value

#### `public int32 `[`StackLimit_Optional`](#structFRHAPI__Loot_1a970fa609225d3c8af096f35f2d17cd9a) <a id="structFRHAPI__Loot_1a970fa609225d3c8af096f35f2d17cd9a"></a>

Amount of owned/rented of this Loot's item that will prevent this Loot from dropping in a randomly sampled vendor.

#### `public bool `[`StackLimit_IsSet`](#structFRHAPI__Loot_1a00cb9abdbcd7404d7b093d3c0c8152f1) <a id="structFRHAPI__Loot_1a00cb9abdbcd7404d7b093d3c0c8152f1"></a>

true if StackLimit_Optional has been set to a value

#### `public int32 `[`UiHint_Optional`](#structFRHAPI__Loot_1ab4d0035bf9df79460aa855ed965bc633) <a id="structFRHAPI__Loot_1ab4d0035bf9df79460aa855ed965bc633"></a>

#### `public bool `[`UiHint_IsSet`](#structFRHAPI__Loot_1a3a7fc556249776abb1bd0aec415a97d9) <a id="structFRHAPI__Loot_1a3a7fc556249776abb1bd0aec415a97d9"></a>

true if UiHint_Optional has been set to a value

#### `public FDateTime `[`EffectiveFrom_Optional`](#structFRHAPI__Loot_1a12465a1abc8d7ed119bf9f65ab3d33a2) <a id="structFRHAPI__Loot_1a12465a1abc8d7ed119bf9f65ab3d33a2"></a>

#### `public bool `[`EffectiveFrom_IsSet`](#structFRHAPI__Loot_1aaf2276f068ed4507f5ac347af87b49c3) <a id="structFRHAPI__Loot_1aaf2276f068ed4507f5ac347af87b49c3"></a>

true if EffectiveFrom_Optional has been set to a value

#### `public bool `[`EffectiveFrom_IsNull`](#structFRHAPI__Loot_1a57e82d681a5f526fbdf8640495bbbf17) <a id="structFRHAPI__Loot_1a57e82d681a5f526fbdf8640495bbbf17"></a>

true if EffectiveFrom_Optional has been explicitly set to null

#### `public ERHAPI_QuantityType `[`QuantityType_Optional`](#structFRHAPI__Loot_1a8e89961081f18de1c004e987f27dcb8c) <a id="structFRHAPI__Loot_1a8e89961081f18de1c004e987f27dcb8c"></a>

#### `public bool `[`QuantityType_IsSet`](#structFRHAPI__Loot_1a0d4fa18901b7c09f35f00642da594250) <a id="structFRHAPI__Loot_1a0d4fa18901b7c09f35f00642da594250"></a>

true if QuantityType_Optional has been set to a value

#### `public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__Loot_1a06a811681044c08cfff63b71fcc1003c) <a id="structFRHAPI__Loot_1a06a811681044c08cfff63b71fcc1003c"></a>

#### `public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__Loot_1a564d2f00696631dab3416ab83691c8c7) <a id="structFRHAPI__Loot_1a564d2f00696631dab3416ab83691c8c7"></a>

true if QuantityMultInventoryItemId_Optional has been set to a value

#### `public bool `[`QuantityMultInventoryItemId_IsNull`](#structFRHAPI__Loot_1a83bd330fb624ebc7209a27968c968958) <a id="structFRHAPI__Loot_1a83bd330fb624ebc7209a27968c968958"></a>

true if QuantityMultInventoryItemId_Optional has been explicitly set to null

#### `public FGuid `[`QuantityMultInventoryItemUuid_Optional`](#structFRHAPI__Loot_1ac1089913b9de812c8161fdb1b5b4691e) <a id="structFRHAPI__Loot_1ac1089913b9de812c8161fdb1b5b4691e"></a>

#### `public bool `[`QuantityMultInventoryItemUuid_IsSet`](#structFRHAPI__Loot_1a0eb524b46f080ed5204b468c5f8c481e) <a id="structFRHAPI__Loot_1a0eb524b46f080ed5204b468c5f8c481e"></a>

true if QuantityMultInventoryItemUuid_Optional has been set to a value

#### `public bool `[`QuantityMultInventoryItemUuid_IsNull`](#structFRHAPI__Loot_1ad51b0ab84dad4b3bf20c622f16440a6f) <a id="structFRHAPI__Loot_1ad51b0ab84dad4b3bf20c622f16440a6f"></a>

true if QuantityMultInventoryItemUuid_Optional has been explicitly set to null

#### `public bool `[`IsClaimableByClient_Optional`](#structFRHAPI__Loot_1a311ebbe8b318350f6bdea1992d3db086) <a id="structFRHAPI__Loot_1a311ebbe8b318350f6bdea1992d3db086"></a>

Determines if the Loot can be claimed by the client. This is dangerous without the correct loot confiuration as a client could claim Loot multiple times.

#### `public bool `[`IsClaimableByClient_IsSet`](#structFRHAPI__Loot_1afe049eb4ba6639b5ac75b652ef7c1059) <a id="structFRHAPI__Loot_1afe049eb4ba6639b5ac75b652ef7c1059"></a>

true if IsClaimableByClient_Optional has been set to a value

#### `public int32 `[`TimeFrameId_Optional`](#structFRHAPI__Loot_1af9803c09b5cca0b04f5cf8f299944e87) <a id="structFRHAPI__Loot_1af9803c09b5cca0b04f5cf8f299944e87"></a>

#### `public bool `[`TimeFrameId_IsSet`](#structFRHAPI__Loot_1adcc16ccb1b5c1a2fc504ce5543504057) <a id="structFRHAPI__Loot_1adcc16ccb1b5c1a2fc504ce5543504057"></a>

true if TimeFrameId_Optional has been set to a value

#### `public bool `[`TimeFrameId_IsNull`](#structFRHAPI__Loot_1a1eb93e36dd2752f3ae679a8951621584) <a id="structFRHAPI__Loot_1a1eb93e36dd2752f3ae679a8951621584"></a>

true if TimeFrameId_Optional has been explicitly set to null

#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__Loot_1ac130c02eb58b7c8d68b93889b81db06d) <a id="structFRHAPI__Loot_1ac130c02eb58b7c8d68b93889b81db06d"></a>

#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__Loot_1a68f88c797ce9bb3516e1f19196a00424) <a id="structFRHAPI__Loot_1a68f88c797ce9bb3516e1f19196a00424"></a>

true if UseInventoryBucket_Optional has been set to a value

#### `public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__Loot_1adf0e6bfc356046952b2c9699e66b6f05) <a id="structFRHAPI__Loot_1adf0e6bfc356046952b2c9699e66b6f05"></a>

true if UseInventoryBucket_Optional has been explicitly set to null

#### `public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__Loot_1ab7bd194e175ef8b245205e8e723d9532) <a id="structFRHAPI__Loot_1ab7bd194e175ef8b245205e8e723d9532"></a>

#### `public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__Loot_1a9d0c5c3838e45cd8f3311f0866b2141a) <a id="structFRHAPI__Loot_1a9d0c5c3838e45cd8f3311f0866b2141a"></a>

true if XpQuantityTransformType_Optional has been set to a value

#### `public FString `[`CurrentPricePointGuid_Optional`](#structFRHAPI__Loot_1a705277f1b2e48fd2b70cfb5cf984dd4d) <a id="structFRHAPI__Loot_1a705277f1b2e48fd2b70cfb5cf984dd4d"></a>

#### `public bool `[`CurrentPricePointGuid_IsSet`](#structFRHAPI__Loot_1a57d3d52962158cb7136a373762b5be5e) <a id="structFRHAPI__Loot_1a57d3d52962158cb7136a373762b5be5e"></a>

true if CurrentPricePointGuid_Optional has been set to a value

#### `public bool `[`CurrentPricePointGuid_IsNull`](#structFRHAPI__Loot_1aeff827225f9ee6e7e502a20833ff6e4a) <a id="structFRHAPI__Loot_1aeff827225f9ee6e7e502a20833ff6e4a"></a>

true if CurrentPricePointGuid_Optional has been explicitly set to null

#### `public FString `[`PreSalePricePointGuid_Optional`](#structFRHAPI__Loot_1abcf89f067a2db68ae1244e2d9507cf42) <a id="structFRHAPI__Loot_1abcf89f067a2db68ae1244e2d9507cf42"></a>

#### `public bool `[`PreSalePricePointGuid_IsSet`](#structFRHAPI__Loot_1af34c049ed2551deb2dc219b61a8dfd4c) <a id="structFRHAPI__Loot_1af34c049ed2551deb2dc219b61a8dfd4c"></a>

true if PreSalePricePointGuid_Optional has been set to a value

#### `public bool `[`PreSalePricePointGuid_IsNull`](#structFRHAPI__Loot_1a2ab23d6dc33abf180b9e428906eda45b) <a id="structFRHAPI__Loot_1a2ab23d6dc33abf180b9e428906eda45b"></a>

true if PreSalePricePointGuid_Optional has been explicitly set to null

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Loot_1acf3ab767cf43aebb4a1c5e9eaa5ed60d) <a id="structFRHAPI__Loot_1acf3ab767cf43aebb4a1c5e9eaa5ed60d"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Loot_1aafb036901a2d16ef1337d520d808ec6b) <a id="structFRHAPI__Loot_1aafb036901a2d16ef1337d520d808ec6b"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__Loot_1a330f220ceb11a1cd88fbcaa8e235d795) <a id="structFRHAPI__Loot_1a330f220ceb11a1cd88fbcaa8e235d795"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__Loot_1aa6a8b8fcd71d2911a55ea28b6be66cde) <a id="structFRHAPI__Loot_1aa6a8b8fcd71d2911a55ea28b6be66cde"></a>

Hard cap on quantity of an item this Loot can give. Disabled with 0.

#### `public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__Loot_1a7d6fe172fee6cd5f1545379d64367c01) <a id="structFRHAPI__Loot_1a7d6fe172fee6cd5f1545379d64367c01"></a>

true if HardQuantityMaximum_Optional has been set to a value

#### `public `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` `[`Price_Optional`](#structFRHAPI__Loot_1a36a5fecbf4a8d2c8b5e8f51e35a93d4a) <a id="structFRHAPI__Loot_1a36a5fecbf4a8d2c8b5e8f51e35a93d4a"></a>

#### `public bool `[`Price_IsSet`](#structFRHAPI__Loot_1a66c5f32e0c0754f897a016a1db80b0b6) <a id="structFRHAPI__Loot_1a66c5f32e0c0754f897a016a1db80b0b6"></a>

true if Price_Optional has been set to a value

#### `public bool `[`Price_IsNull`](#structFRHAPI__Loot_1a287a9004f95c785f742ef2b8c12d9043) <a id="structFRHAPI__Loot_1a287a9004f95c785f742ef2b8c12d9043"></a>

true if Price_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__Loot_1ae1fafb9905923f64a0753b812227f84b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Loot_1ae1fafb9905923f64a0753b812227f84b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Loot_1a4383b0859a84465e5988b801c366eca3)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Loot_1a4383b0859a84465e5988b801c366eca3"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a35807462c77b218576ad06a68fc47d0f)`()` <a id="structFRHAPI__Loot_1a35807462c77b218576ad06a68fc47d0f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1ac05d9df6098c1b892450822f7d176836)`() const` <a id="structFRHAPI__Loot_1ac05d9df6098c1b892450822f7d176836"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a79c9140531d023aeb9f9abc7c016854f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Loot_1a79c9140531d023aeb9f9abc7c016854f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__Loot_1a287c688a61e03a4822e3d7a1f0e42a49)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Loot_1a287c688a61e03a4822e3d7a1f0e42a49"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1aec6fe7a12de43a3f5da8e263b8bfa103)`()` <a id="structFRHAPI__Loot_1aec6fe7a12de43a3f5da8e263b8bfa103"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1a21f16d164fd3a8a92ef9fdb173f98a59)`() const` <a id="structFRHAPI__Loot_1a21f16d164fd3a8a92ef9fdb173f98a59"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Loot_1aa36b0c0b7c3f30f5246629aa3da3a69d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Loot_1aa36b0c0b7c3f30f5246629aa3da3a69d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Loot_1aa5228ab9d32a49746465a23fb1f546c9)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Loot_1aa5228ab9d32a49746465a23fb1f546c9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7)`()` <a id="structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__Loot_1aad7353c9d0e83d3cbce2f0b6701e184a)`() const` <a id="structFRHAPI__Loot_1aad7353c9d0e83d3cbce2f0b6701e184a"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1aef41a3b5be988a91c8f8cc80a308f784)`()` <a id="structFRHAPI__Loot_1aef41a3b5be988a91c8f8cc80a308f784"></a>

Gets the value of LootUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1ae3dffd5ee9e56103f4768a7bd9d9098b)`() const` <a id="structFRHAPI__Loot_1ae3dffd5ee9e56103f4768a7bd9d9098b"></a>

Gets the value of LootUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1aebe4d058b580bb0c181d8da52d50c8b1)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1aebe4d058b580bb0c181d8da52d50c8b1"></a>

Gets the value of LootUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootUuid`](#structFRHAPI__Loot_1a24cdde21c4fa5305b7b4d84bd26e7211)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1a24cdde21c4fa5305b7b4d84bd26e7211"></a>

Fills OutValue with the value of LootUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetLootUuidOrNull`](#structFRHAPI__Loot_1affd0de515daf2897db0f0253f73c8ef6)`()` <a id="structFRHAPI__Loot_1affd0de515daf2897db0f0253f73c8ef6"></a>

Returns a pointer to LootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetLootUuidOrNull`](#structFRHAPI__Loot_1a8ae549e53de0650cdb22b4932a70a9a1)`() const` <a id="structFRHAPI__Loot_1a8ae549e53de0650cdb22b4932a70a9a1"></a>

Returns a pointer to LootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootUuid`](#structFRHAPI__Loot_1a6269114a54510259ba74e3ba02baf9b7)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1a6269114a54510259ba74e3ba02baf9b7"></a>

Sets the value of LootUuid_Optional and also sets LootUuid_IsSet to true.

#### `public inline void `[`SetLootUuid`](#structFRHAPI__Loot_1af18833c1ede8b9bea806cd50a97fc581)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1af18833c1ede8b9bea806cd50a97fc581"></a>

Sets the value of LootUuid_Optional and also sets LootUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearLootUuid`](#structFRHAPI__Loot_1ad0eb5151359a29ff49a600e4e8faa236)`()` <a id="structFRHAPI__Loot_1ad0eb5151359a29ff49a600e4e8faa236"></a>

Clears the value of LootUuid_Optional and sets LootUuid_IsSet to false.

#### `public inline bool `[`IsLootUuidSet`](#structFRHAPI__Loot_1a0055e1d3190b40815755e7a7de3d1800)`() const` <a id="structFRHAPI__Loot_1a0055e1d3190b40815755e7a7de3d1800"></a>

Checks whether LootUuid_Optional has been set.

#### `public inline void `[`SetLootUuidToNull`](#structFRHAPI__Loot_1a8d35555846a8e50dce4533da3bc3d880)`()` <a id="structFRHAPI__Loot_1a8d35555846a8e50dce4533da3bc3d880"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLootUuidNull`](#structFRHAPI__Loot_1a67eb24e441823d46b73cb4a33f2f3c28)`() const` <a id="structFRHAPI__Loot_1a67eb24e441823d46b73cb4a33f2f3c28"></a>

Checks whether LootUuid_Optional is set to null.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__Loot_1aab4048b6643aa2ece6d496bb4ab42102)`()` <a id="structFRHAPI__Loot_1aab4048b6643aa2ece6d496bb4ab42102"></a>

Gets the value of LootId.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__Loot_1a97297a5ce522b04029ec1a0bb3929517)`() const` <a id="structFRHAPI__Loot_1a97297a5ce522b04029ec1a0bb3929517"></a>

Gets the value of LootId.

#### `public inline void `[`SetLootId`](#structFRHAPI__Loot_1afdaef30a5fe95ab02988ab4ec957e4dd)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1afdaef30a5fe95ab02988ab4ec957e4dd"></a>

Sets the value of LootId.

#### `public inline void `[`SetLootId`](#structFRHAPI__Loot_1a8e04ceda8c0201df5421c9be8921de3e)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a8e04ceda8c0201df5421c9be8921de3e"></a>

Sets the value of LootId using move semantics.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__Loot_1ac34d328155722dece2b3d333d8110e41)`() const` <a id="structFRHAPI__Loot_1ac34d328155722dece2b3d333d8110e41"></a>

Returns true if LootId matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__Loot_1a5e2f6f21cf1b05ab3abd7bd1e0b30c87)`()` <a id="structFRHAPI__Loot_1a5e2f6f21cf1b05ab3abd7bd1e0b30c87"></a>

Sets the value of LootId to its default

#### `public inline int32 & `[`GetVendorId`](#structFRHAPI__Loot_1a4e24586e9cb3a1e417dea2a40a353aca)`()` <a id="structFRHAPI__Loot_1a4e24586e9cb3a1e417dea2a40a353aca"></a>

Gets the value of VendorId.

#### `public inline const int32 & `[`GetVendorId`](#structFRHAPI__Loot_1a6259545ac8758d8b7b9a321a1df863fb)`() const` <a id="structFRHAPI__Loot_1a6259545ac8758d8b7b9a321a1df863fb"></a>

Gets the value of VendorId.

#### `public inline void `[`SetVendorId`](#structFRHAPI__Loot_1ae69cfc828ab7998bf4eb3d8b20dba6c0)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1ae69cfc828ab7998bf4eb3d8b20dba6c0"></a>

Sets the value of VendorId.

#### `public inline void `[`SetVendorId`](#structFRHAPI__Loot_1ad9728d58e6bc412044baf18edd9032f5)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1ad9728d58e6bc412044baf18edd9032f5"></a>

Sets the value of VendorId using move semantics.

#### `public inline bool `[`IsVendorIdDefaultValue`](#structFRHAPI__Loot_1a34294c3a7a9eba0d2be427e08546868c)`() const` <a id="structFRHAPI__Loot_1a34294c3a7a9eba0d2be427e08546868c"></a>

Returns true if VendorId matches the default value.

#### `public inline void `[`SetVendorIdToDefault`](#structFRHAPI__Loot_1a7ba740230264c05551800de8b9830745)`()` <a id="structFRHAPI__Loot_1a7ba740230264c05551800de8b9830745"></a>

Sets the value of VendorId to its default

#### `public inline FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1a9966007e6f71ce1b12fbe3ee26ea4575)`()` <a id="structFRHAPI__Loot_1a9966007e6f71ce1b12fbe3ee26ea4575"></a>

Gets the value of VendorUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1a13d529e48b8ade811acbb9b11d693e28)`() const` <a id="structFRHAPI__Loot_1a13d529e48b8ade811acbb9b11d693e28"></a>

Gets the value of VendorUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1adf357052b1a90c1da3c14ab797cdc871)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1adf357052b1a90c1da3c14ab797cdc871"></a>

Gets the value of VendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorUuid`](#structFRHAPI__Loot_1a84b9672d56ccf190b1dafce22b968ea2)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1a84b9672d56ccf190b1dafce22b968ea2"></a>

Fills OutValue with the value of VendorUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Loot_1a92e71dad65badbc2c14645fc965b42cc)`()` <a id="structFRHAPI__Loot_1a92e71dad65badbc2c14645fc965b42cc"></a>

Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Loot_1a4a52b1c697e2e536ba374ed7ad306c38)`() const` <a id="structFRHAPI__Loot_1a4a52b1c697e2e536ba374ed7ad306c38"></a>

Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorUuid`](#structFRHAPI__Loot_1a38bdba90f027d1fdc0097cb9235f551d)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1a38bdba90f027d1fdc0097cb9235f551d"></a>

Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true.

#### `public inline void `[`SetVendorUuid`](#structFRHAPI__Loot_1a54b130316e8ed20b4684697c9647604e)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1a54b130316e8ed20b4684697c9647604e"></a>

Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorUuid`](#structFRHAPI__Loot_1ab8eefa8d3e6b848d9ae649f62f42bc77)`()` <a id="structFRHAPI__Loot_1ab8eefa8d3e6b848d9ae649f62f42bc77"></a>

Clears the value of VendorUuid_Optional and sets VendorUuid_IsSet to false.

#### `public inline bool `[`IsVendorUuidSet`](#structFRHAPI__Loot_1a15822bbcd6abd6c905072ae4bad92193)`() const` <a id="structFRHAPI__Loot_1a15822bbcd6abd6c905072ae4bad92193"></a>

Checks whether VendorUuid_Optional has been set.

#### `public inline void `[`SetVendorUuidToNull`](#structFRHAPI__Loot_1a013c79aa0ac3078d4ca690b5991cf344)`()` <a id="structFRHAPI__Loot_1a013c79aa0ac3078d4ca690b5991cf344"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsVendorUuidNull`](#structFRHAPI__Loot_1a5a02376b9d42841086edcd20802ad8ae)`() const` <a id="structFRHAPI__Loot_1a5a02376b9d42841086edcd20802ad8ae"></a>

Checks whether VendorUuid_Optional is set to null.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__Loot_1a09ad345ad2ce957d5de502b80d3ba723)`()` <a id="structFRHAPI__Loot_1a09ad345ad2ce957d5de502b80d3ba723"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a81d8cc603251a649e7211912b61f89c5)`() const` <a id="structFRHAPI__Loot_1a81d8cc603251a649e7211912b61f89c5"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a318dcd7fbc59736f668103e8b1c8b785)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a318dcd7fbc59736f668103e8b1c8b785"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__Loot_1af46204b226c63dbb8cdb2645fea6c50d)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1af46204b226c63dbb8cdb2645fea6c50d"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1a850b23b49f017cf7486a70184acf16fb)`()` <a id="structFRHAPI__Loot_1a850b23b49f017cf7486a70184acf16fb"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1ac0202a2adec9338ebf0f874e65f16256)`() const` <a id="structFRHAPI__Loot_1ac0202a2adec9338ebf0f874e65f16256"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__Loot_1a9644d761f2970aedb3907e28e7329fdf)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a9644d761f2970aedb3907e28e7329fdf"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__Loot_1aea42066abd1642e685a2782db762ffed)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1aea42066abd1642e685a2782db762ffed"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac)`()` <a id="structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__Loot_1a3bd9f1d783d96bb8f7087fe53822e8a9)`() const` <a id="structFRHAPI__Loot_1a3bd9f1d783d96bb8f7087fe53822e8a9"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__Loot_1ab1fb89c1cd120fbdccbad20b4f1058c9)`() const` <a id="structFRHAPI__Loot_1ab1fb89c1cd120fbdccbad20b4f1058c9"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__Loot_1a175257a1162b73e5e5897dc7ce9138de)`()` <a id="structFRHAPI__Loot_1a175257a1162b73e5e5897dc7ce9138de"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemIdToNull`](#structFRHAPI__Loot_1a67319b04876eee18c40210694d288b61)`()` <a id="structFRHAPI__Loot_1a67319b04876eee18c40210694d288b61"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsItemIdNull`](#structFRHAPI__Loot_1a9fe938d80346a32b13b6ac7aac2d632b)`() const` <a id="structFRHAPI__Loot_1a9fe938d80346a32b13b6ac7aac2d632b"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a226d7631252d94eb6de32a4b04940c93)`()` <a id="structFRHAPI__Loot_1a226d7631252d94eb6de32a4b04940c93"></a>

Gets the value of ItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a8072ee89fc8e48af602da0709b8df023)`() const` <a id="structFRHAPI__Loot_1a8072ee89fc8e48af602da0709b8df023"></a>

Gets the value of ItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a2b1e24648e232e89a78554258610c38d)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1a2b1e24648e232e89a78554258610c38d"></a>

Gets the value of ItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemUuid`](#structFRHAPI__Loot_1ac1559e9395621cac02e1fe91b2eb3064)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1ac1559e9395621cac02e1fe91b2eb3064"></a>

Fills OutValue with the value of ItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Loot_1a2f3a0916741b3080157a600e21c30536)`()` <a id="structFRHAPI__Loot_1a2f3a0916741b3080157a600e21c30536"></a>

Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Loot_1a4b7601a25ae42ad9fb799be12f79799c)`() const` <a id="structFRHAPI__Loot_1a4b7601a25ae42ad9fb799be12f79799c"></a>

Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemUuid`](#structFRHAPI__Loot_1a7340b358ec7f40244767290dd36231f6)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1a7340b358ec7f40244767290dd36231f6"></a>

Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true.

#### `public inline void `[`SetItemUuid`](#structFRHAPI__Loot_1ae3e1920626a006ae79da706dbe68a7a5)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1ae3e1920626a006ae79da706dbe68a7a5"></a>

Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearItemUuid`](#structFRHAPI__Loot_1a7d4d0b4d2020d60a73326ae1a436380e)`()` <a id="structFRHAPI__Loot_1a7d4d0b4d2020d60a73326ae1a436380e"></a>

Clears the value of ItemUuid_Optional and sets ItemUuid_IsSet to false.

#### `public inline bool `[`IsItemUuidSet`](#structFRHAPI__Loot_1a94a4fecce862a531daedbbb5db9cdd5f)`() const` <a id="structFRHAPI__Loot_1a94a4fecce862a531daedbbb5db9cdd5f"></a>

Checks whether ItemUuid_Optional has been set.

#### `public inline void `[`SetItemUuidToNull`](#structFRHAPI__Loot_1acbfa6bcd1a0b5b2b2ec92c60c8eeb901)`()` <a id="structFRHAPI__Loot_1acbfa6bcd1a0b5b2b2ec92c60c8eeb901"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsItemUuidNull`](#structFRHAPI__Loot_1a4dce154044b85f8915730bc1e6d38c08)`() const` <a id="structFRHAPI__Loot_1a4dce154044b85f8915730bc1e6d38c08"></a>

Checks whether ItemUuid_Optional is set to null.

#### `public inline `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1acccfe9f0ebb377cc60c70d1cb2dcf371)`()` <a id="structFRHAPI__Loot_1acccfe9f0ebb377cc60c70d1cb2dcf371"></a>

Gets the value of Item_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a6bca49d33a1c37faf7c26799cb101791)`() const` <a id="structFRHAPI__Loot_1a6bca49d33a1c37faf7c26799cb101791"></a>

Gets the value of Item_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a485d4b16ac3e237da6a158f567bdd8a5)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & DefaultValue) const` <a id="structFRHAPI__Loot_1a485d4b16ac3e237da6a158f567bdd8a5"></a>

Gets the value of Item_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItem`](#structFRHAPI__Loot_1a780c162ed85fa8ca7a9ad6895819166c)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & OutValue) const` <a id="structFRHAPI__Loot_1a780c162ed85fa8ca7a9ad6895819166c"></a>

Fills OutValue with the value of Item_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1ab86472e4b9a6edc622080147211db1bb)`()` <a id="structFRHAPI__Loot_1ab86472e4b9a6edc622080147211db1bb"></a>

Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1a5332073c64f2e8458f223136d2a4d709)`() const` <a id="structFRHAPI__Loot_1a5332073c64f2e8458f223136d2a4d709"></a>

Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItem`](#structFRHAPI__Loot_1ab8db52d9494b290cf633f9433ac64e02)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & NewValue)` <a id="structFRHAPI__Loot_1ab8db52d9494b290cf633f9433ac64e02"></a>

Sets the value of Item_Optional and also sets Item_IsSet to true.

#### `public inline void `[`SetItem`](#structFRHAPI__Loot_1aa52823829875545fd00ace4031039413)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` && NewValue)` <a id="structFRHAPI__Loot_1aa52823829875545fd00ace4031039413"></a>

Sets the value of Item_Optional and also sets Item_IsSet to true using move semantics.

#### `public inline void `[`ClearItem`](#structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8)`()` <a id="structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8"></a>

Clears the value of Item_Optional and sets Item_IsSet to false.

#### `public inline bool `[`IsItemSet`](#structFRHAPI__Loot_1a00b84b8a70a8b3c27f0efdf51194e14a)`() const` <a id="structFRHAPI__Loot_1a00b84b8a70a8b3c27f0efdf51194e14a"></a>

Checks whether Item_Optional has been set.

#### `public inline void `[`SetItemToNull`](#structFRHAPI__Loot_1af600635fb8efda2c85faaaf7c1da859d)`()` <a id="structFRHAPI__Loot_1af600635fb8efda2c85faaaf7c1da859d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsItemNull`](#structFRHAPI__Loot_1abd8321c10589327366b9846b89644184)`() const` <a id="structFRHAPI__Loot_1abd8321c10589327366b9846b89644184"></a>

Checks whether Item_Optional is set to null.

#### `public inline int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a0379cb4420fa4b036aef093bb60d6f01)`()` <a id="structFRHAPI__Loot_1a0379cb4420fa4b036aef093bb60d6f01"></a>

Gets the value of SubVendorId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a1712504172275c4a9560bcaa0755f5d3)`() const` <a id="structFRHAPI__Loot_1a1712504172275c4a9560bcaa0755f5d3"></a>

Gets the value of SubVendorId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1ad98de97305fcf706510bb195c9551221)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ad98de97305fcf706510bb195c9551221"></a>

Gets the value of SubVendorId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSubVendorId`](#structFRHAPI__Loot_1ab6c9112b74f2cb0a103d65bb19897165)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1ab6c9112b74f2cb0a103d65bb19897165"></a>

Fills OutValue with the value of SubVendorId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a99ad7e317f24a7ef819276efffc3a01c)`()` <a id="structFRHAPI__Loot_1a99ad7e317f24a7ef819276efffc3a01c"></a>

Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a95c8432de90331859f0f4dfdff55c55e)`() const` <a id="structFRHAPI__Loot_1a95c8432de90331859f0f4dfdff55c55e"></a>

Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSubVendorId`](#structFRHAPI__Loot_1a725de669455d784feb45568d0cbf98ae)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a725de669455d784feb45568d0cbf98ae"></a>

Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true.

#### `public inline void `[`SetSubVendorId`](#structFRHAPI__Loot_1a845ac2dc17af57c95ae88c911504e19b)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a845ac2dc17af57c95ae88c911504e19b"></a>

Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true using move semantics.

#### `public inline void `[`ClearSubVendorId`](#structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058)`()` <a id="structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058"></a>

Clears the value of SubVendorId_Optional and sets SubVendorId_IsSet to false.

#### `public inline bool `[`IsSubVendorIdSet`](#structFRHAPI__Loot_1a1d533b637fd1fc9d05df1dfd7c64ab0f)`() const` <a id="structFRHAPI__Loot_1a1d533b637fd1fc9d05df1dfd7c64ab0f"></a>

Checks whether SubVendorId_Optional has been set.

#### `public inline bool `[`IsSubVendorIdDefaultValue`](#structFRHAPI__Loot_1ac0a741bcd286b2adccd25fe38f97983b)`() const` <a id="structFRHAPI__Loot_1ac0a741bcd286b2adccd25fe38f97983b"></a>

Returns true if SubVendorId_Optional is set and matches the default value.

#### `public inline void `[`SetSubVendorIdToDefault`](#structFRHAPI__Loot_1afd50a2496a24d46fddc881f22eed4b02)`()` <a id="structFRHAPI__Loot_1afd50a2496a24d46fddc881f22eed4b02"></a>

Sets the value of SubVendorId_Optional to its default and also sets SubVendorId_IsSet to true.

#### `public inline void `[`SetSubVendorIdToNull`](#structFRHAPI__Loot_1a1ff6f1bbc7515bebe5949f690b87464c)`()` <a id="structFRHAPI__Loot_1a1ff6f1bbc7515bebe5949f690b87464c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSubVendorIdNull`](#structFRHAPI__Loot_1aa27dc35db93d4080f053f9a5e7013468)`() const` <a id="structFRHAPI__Loot_1aa27dc35db93d4080f053f9a5e7013468"></a>

Checks whether SubVendorId_Optional is set to null.

#### `public inline FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a225942850b04a3ff35197fd1afa9ce0e)`()` <a id="structFRHAPI__Loot_1a225942850b04a3ff35197fd1afa9ce0e"></a>

Gets the value of SubVendorUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1ab3cc1e4fea120b5f9f29e441a68bc353)`() const` <a id="structFRHAPI__Loot_1ab3cc1e4fea120b5f9f29e441a68bc353"></a>

Gets the value of SubVendorUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a6dda2192eb50f1c97198076b1940492e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1a6dda2192eb50f1c97198076b1940492e"></a>

Gets the value of SubVendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSubVendorUuid`](#structFRHAPI__Loot_1ae4e7ba0924a2027ed9556fcfdddf55eb)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1ae4e7ba0924a2027ed9556fcfdddf55eb"></a>

Fills OutValue with the value of SubVendorUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetSubVendorUuidOrNull`](#structFRHAPI__Loot_1a70cc7dbda5fada2ee1831f84d0a49510)`()` <a id="structFRHAPI__Loot_1a70cc7dbda5fada2ee1831f84d0a49510"></a>

Returns a pointer to SubVendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetSubVendorUuidOrNull`](#structFRHAPI__Loot_1a21e3b1abb00f31868ee47de2f6618c3c)`() const` <a id="structFRHAPI__Loot_1a21e3b1abb00f31868ee47de2f6618c3c"></a>

Returns a pointer to SubVendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSubVendorUuid`](#structFRHAPI__Loot_1af56a9987fa9f2184ae67895fababf07d)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1af56a9987fa9f2184ae67895fababf07d"></a>

Sets the value of SubVendorUuid_Optional and also sets SubVendorUuid_IsSet to true.

#### `public inline void `[`SetSubVendorUuid`](#structFRHAPI__Loot_1af77645ae4aa35601abc00db5ba3ee5ea)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1af77645ae4aa35601abc00db5ba3ee5ea"></a>

Sets the value of SubVendorUuid_Optional and also sets SubVendorUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearSubVendorUuid`](#structFRHAPI__Loot_1ae750501163eb9a843eb23a6b1247b8e1)`()` <a id="structFRHAPI__Loot_1ae750501163eb9a843eb23a6b1247b8e1"></a>

Clears the value of SubVendorUuid_Optional and sets SubVendorUuid_IsSet to false.

#### `public inline bool `[`IsSubVendorUuidSet`](#structFRHAPI__Loot_1a99e16b3fc068c13fcbb95796596dba5a)`() const` <a id="structFRHAPI__Loot_1a99e16b3fc068c13fcbb95796596dba5a"></a>

Checks whether SubVendorUuid_Optional has been set.

#### `public inline void `[`SetSubVendorUuidToNull`](#structFRHAPI__Loot_1a2aa7f97fa18ace252eff42a046a45823)`()` <a id="structFRHAPI__Loot_1a2aa7f97fa18ace252eff42a046a45823"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSubVendorUuidNull`](#structFRHAPI__Loot_1aa90ca6a0320913e2a918a03d11172269)`() const` <a id="structFRHAPI__Loot_1aa90ca6a0320913e2a918a03d11172269"></a>

Checks whether SubVendorUuid_Optional is set to null.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__Loot_1abe390fd6e04254c6873058955b002e87)`()` <a id="structFRHAPI__Loot_1abe390fd6e04254c6873058955b002e87"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1aa992c98070c610f370c21df6bcd6a1f1)`() const` <a id="structFRHAPI__Loot_1aa992c98070c610f370c21df6bcd6a1f1"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1ab358632d19d4a4f2001a32781a2e8ec1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ab358632d19d4a4f2001a32781a2e8ec1"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantity`](#structFRHAPI__Loot_1a4ecfe9e6cf43b74396de5ca5366f058e)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a4ecfe9e6cf43b74396de5ca5366f058e"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1a4a781daeea1960c7f7d980c8c6a6bb17)`()` <a id="structFRHAPI__Loot_1a4a781daeea1960c7f7d980c8c6a6bb17"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1a8889c8a70363962a438ab9444b98fcef)`() const` <a id="structFRHAPI__Loot_1a8889c8a70363962a438ab9444b98fcef"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantity`](#structFRHAPI__Loot_1a20604dbc96d84bdbb648a9c3e606edbf)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a20604dbc96d84bdbb648a9c3e606edbf"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline void `[`SetQuantity`](#structFRHAPI__Loot_1ae6d618648bb8114acfd1d75bec28825f)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1ae6d618648bb8114acfd1d75bec28825f"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51)`()` <a id="structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline bool `[`IsQuantitySet`](#structFRHAPI__Loot_1a00a01a8335980cfda514b6b70a3f5997)`() const` <a id="structFRHAPI__Loot_1a00a01a8335980cfda514b6b70a3f5997"></a>

Checks whether Quantity_Optional has been set.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__Loot_1a5e81fc2e46f491acafcf83ec9eb97c7f)`() const` <a id="structFRHAPI__Loot_1a5e81fc2e46f491acafcf83ec9eb97c7f"></a>

Returns true if Quantity_Optional is set and matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__Loot_1a88fbbb95da4cab22777b629c403c4155)`()` <a id="structFRHAPI__Loot_1a88fbbb95da4cab22777b629c403c4155"></a>

Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.

#### `public inline ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1adc8eddf2b5ab504521010cf3b85f6853)`()` <a id="structFRHAPI__Loot_1adc8eddf2b5ab504521010cf3b85f6853"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a6863e24787ed96bc61f41ee53524ca4f)`() const` <a id="structFRHAPI__Loot_1a6863e24787ed96bc61f41ee53524ca4f"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a329e448dd1f7f0cb79d97d4f88c672a7)`(const ERHAPI_InventorySelector & DefaultValue) const` <a id="structFRHAPI__Loot_1a329e448dd1f7f0cb79d97d4f88c672a7"></a>

Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventorySelectorType`](#structFRHAPI__Loot_1ab13961c4e92163e6be9c25a5db91dcaf)`(ERHAPI_InventorySelector & OutValue) const` <a id="structFRHAPI__Loot_1ab13961c4e92163e6be9c25a5db91dcaf"></a>

Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1a8ccd8410b9fcb75c8033d96c2e0df8e6)`()` <a id="structFRHAPI__Loot_1a8ccd8410b9fcb75c8033d96c2e0df8e6"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1abad28b3655c646ab863c9864d4004d2b)`() const` <a id="structFRHAPI__Loot_1abad28b3655c646ab863c9864d4004d2b"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1a4bac4ec7f141cd22174be8bed51cf6f8)`(const ERHAPI_InventorySelector & NewValue)` <a id="structFRHAPI__Loot_1a4bac4ec7f141cd22174be8bed51cf6f8"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.

#### `public inline void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1aed76077b233919e80fdd37f8271b708d)`(ERHAPI_InventorySelector && NewValue)` <a id="structFRHAPI__Loot_1aed76077b233919e80fdd37f8271b708d"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.

#### `public inline void `[`ClearInventorySelectorType`](#structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b)`()` <a id="structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b"></a>

Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.

#### `public inline bool `[`IsInventorySelectorTypeSet`](#structFRHAPI__Loot_1ae58489ede4e165cb9e227f1de1b17ce0)`() const` <a id="structFRHAPI__Loot_1ae58489ede4e165cb9e227f1de1b17ce0"></a>

Checks whether InventorySelectorType_Optional has been set.

#### `public inline ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1af261d262bc527a9c04e77f0ecad0789b)`()` <a id="structFRHAPI__Loot_1af261d262bc527a9c04e77f0ecad0789b"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a844c6f77cd10f34e5cf8f35b6d1aa891)`() const` <a id="structFRHAPI__Loot_1a844c6f77cd10f34e5cf8f35b6d1aa891"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1aa4fd2d2484690ff7219d7da2e41911cc)`(const ERHAPI_InventoryOperation & DefaultValue) const` <a id="structFRHAPI__Loot_1aa4fd2d2484690ff7219d7da2e41911cc"></a>

Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryOperation`](#structFRHAPI__Loot_1a4afcfa7ae60e4c96381c5d97b563814c)`(ERHAPI_InventoryOperation & OutValue) const` <a id="structFRHAPI__Loot_1a4afcfa7ae60e4c96381c5d97b563814c"></a>

Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1aa623dafe6c7ffd3cc09e79b84199eb7a)`()` <a id="structFRHAPI__Loot_1aa623dafe6c7ffd3cc09e79b84199eb7a"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1af260f2090e6b7dfee78588a6dc70cb61)`() const` <a id="structFRHAPI__Loot_1af260f2090e6b7dfee78588a6dc70cb61"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryOperation`](#structFRHAPI__Loot_1a2ca2d2a007ca2ca1e4b58da6e78c4537)`(const ERHAPI_InventoryOperation & NewValue)` <a id="structFRHAPI__Loot_1a2ca2d2a007ca2ca1e4b58da6e78c4537"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.

#### `public inline void `[`SetInventoryOperation`](#structFRHAPI__Loot_1a22fe6582484fe9454802962a3d956302)`(ERHAPI_InventoryOperation && NewValue)` <a id="structFRHAPI__Loot_1a22fe6582484fe9454802962a3d956302"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryOperation`](#structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68)`()` <a id="structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68"></a>

Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.

#### `public inline bool `[`IsInventoryOperationSet`](#structFRHAPI__Loot_1a736c2c5de18122560b750d7af701debd)`() const` <a id="structFRHAPI__Loot_1a736c2c5de18122560b750d7af701debd"></a>

Checks whether InventoryOperation_Optional has been set.

#### `public inline bool & `[`GetActive`](#structFRHAPI__Loot_1aa4fc5501a8079912a21c3c3d2aaf714b)`()` <a id="structFRHAPI__Loot_1aa4fc5501a8079912a21c3c3d2aaf714b"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetActive`](#structFRHAPI__Loot_1aa6af2f5531c747c6eb238c2634869897)`() const` <a id="structFRHAPI__Loot_1aa6af2f5531c747c6eb238c2634869897"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetActive`](#structFRHAPI__Loot_1ac5418de548a513435b0147c21beece9c)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1ac5418de548a513435b0147c21beece9c"></a>

Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActive`](#structFRHAPI__Loot_1aba509de727c43ec1d964c4463432a858)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1aba509de727c43ec1d964c4463432a858"></a>

Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1ab44362cc35c018fae2e1c2f53e58bd44)`()` <a id="structFRHAPI__Loot_1ab44362cc35c018fae2e1c2f53e58bd44"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1a72db6962247fc983bfb22c4e464d25b0)`() const` <a id="structFRHAPI__Loot_1a72db6962247fc983bfb22c4e464d25b0"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActive`](#structFRHAPI__Loot_1a08d28507bd619fd5db8363c6b4f3364a)`(const bool & NewValue)` <a id="structFRHAPI__Loot_1a08d28507bd619fd5db8363c6b4f3364a"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true.

#### `public inline void `[`SetActive`](#structFRHAPI__Loot_1a9350c7930d19d24133f65ff99b3032fb)`(bool && NewValue)` <a id="structFRHAPI__Loot_1a9350c7930d19d24133f65ff99b3032fb"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true using move semantics.

#### `public inline void `[`ClearActive`](#structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8)`()` <a id="structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8"></a>

Clears the value of Active_Optional and sets Active_IsSet to false.

#### `public inline bool `[`IsActiveSet`](#structFRHAPI__Loot_1a3d50e44bfa48ffa323c852621df55c87)`() const` <a id="structFRHAPI__Loot_1a3d50e44bfa48ffa323c852621df55c87"></a>

Checks whether Active_Optional has been set.

#### `public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__Loot_1a21764f599b5c382557c5f5f3f4d42e20)`() const` <a id="structFRHAPI__Loot_1a21764f599b5c382557c5f5f3f4d42e20"></a>

Returns true if Active_Optional is set and matches the default value.

#### `public inline void `[`SetActiveToDefault`](#structFRHAPI__Loot_1a99fdeb71b6776d8b69d964f1f6554e50)`()` <a id="structFRHAPI__Loot_1a99fdeb71b6776d8b69d964f1f6554e50"></a>

Sets the value of Active_Optional to its default and also sets Active_IsSet to true.

#### `public inline int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1af93be954773173767be0f71d3dfc2486)`()` <a id="structFRHAPI__Loot_1af93be954773173767be0f71d3dfc2486"></a>

Gets the value of SortOrder_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a7af0f627eff40a60f3c0502d26674489)`() const` <a id="structFRHAPI__Loot_1a7af0f627eff40a60f3c0502d26674489"></a>

Gets the value of SortOrder_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a91384d9bb23dd79b79cec9608ba80043)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a91384d9bb23dd79b79cec9608ba80043"></a>

Gets the value of SortOrder_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSortOrder`](#structFRHAPI__Loot_1a9db9bb45bbd74194e41703dc40408045)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a9db9bb45bbd74194e41703dc40408045"></a>

Fills OutValue with the value of SortOrder_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1ad2697ae9f5c4040b57318f1df174ef36)`()` <a id="structFRHAPI__Loot_1ad2697ae9f5c4040b57318f1df174ef36"></a>

Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1a6521d242650e2b79f87ad449a5ecdd73)`() const` <a id="structFRHAPI__Loot_1a6521d242650e2b79f87ad449a5ecdd73"></a>

Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSortOrder`](#structFRHAPI__Loot_1aa2d0587fcb36026311a3cbb4ecee21d2)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1aa2d0587fcb36026311a3cbb4ecee21d2"></a>

Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true.

#### `public inline void `[`SetSortOrder`](#structFRHAPI__Loot_1a9d31791b68fb7c870d8bd35147b33e46)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a9d31791b68fb7c870d8bd35147b33e46"></a>

Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true using move semantics.

#### `public inline void `[`ClearSortOrder`](#structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955)`()` <a id="structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955"></a>

Clears the value of SortOrder_Optional and sets SortOrder_IsSet to false.

#### `public inline bool `[`IsSortOrderSet`](#structFRHAPI__Loot_1a6929f1f030f4c95d302448d48eea9183)`() const` <a id="structFRHAPI__Loot_1a6929f1f030f4c95d302448d48eea9183"></a>

Checks whether SortOrder_Optional has been set.

#### `public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__Loot_1a476d6b43e6c290f07c3879d9d18f0acb)`() const` <a id="structFRHAPI__Loot_1a476d6b43e6c290f07c3879d9d18f0acb"></a>

Returns true if SortOrder_Optional is set and matches the default value.

#### `public inline void `[`SetSortOrderToDefault`](#structFRHAPI__Loot_1a69397f89697497621e33a6ee1eb4f0a3)`()` <a id="structFRHAPI__Loot_1a69397f89697497621e33a6ee1eb4f0a3"></a>

Sets the value of SortOrder_Optional to its default and also sets SortOrder_IsSet to true.

#### `public inline int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1ad69c183d174ebb7c5197e5ddd43bf9d8)`()` <a id="structFRHAPI__Loot_1ad69c183d174ebb7c5197e5ddd43bf9d8"></a>

Gets the value of DropWeight_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1ab12e549f1ddeed13860fa8c4343acb83)`() const` <a id="structFRHAPI__Loot_1ab12e549f1ddeed13860fa8c4343acb83"></a>

Gets the value of DropWeight_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a63e6ce77edf4236d2dd2adf8db17562c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a63e6ce77edf4236d2dd2adf8db17562c"></a>

Gets the value of DropWeight_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDropWeight`](#structFRHAPI__Loot_1a50ece77b36c63ce6bf2a1cb4e5d5160c)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a50ece77b36c63ce6bf2a1cb4e5d5160c"></a>

Fills OutValue with the value of DropWeight_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1a57a760a3eb88f84a55f9544c5b9a2039)`()` <a id="structFRHAPI__Loot_1a57a760a3eb88f84a55f9544c5b9a2039"></a>

Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1aa191dc271faab83814582fa245121ed3)`() const` <a id="structFRHAPI__Loot_1aa191dc271faab83814582fa245121ed3"></a>

Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDropWeight`](#structFRHAPI__Loot_1ab89d6f704862be83139da7e579b32154)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1ab89d6f704862be83139da7e579b32154"></a>

Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true.

#### `public inline void `[`SetDropWeight`](#structFRHAPI__Loot_1a7f8e9153f621f127ca943f87a434923a)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a7f8e9153f621f127ca943f87a434923a"></a>

Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true using move semantics.

#### `public inline void `[`ClearDropWeight`](#structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412)`()` <a id="structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412"></a>

Clears the value of DropWeight_Optional and sets DropWeight_IsSet to false.

#### `public inline bool `[`IsDropWeightSet`](#structFRHAPI__Loot_1a6e099dfbf18bd3d7e8c1317a67fd3b8d)`() const` <a id="structFRHAPI__Loot_1a6e099dfbf18bd3d7e8c1317a67fd3b8d"></a>

Checks whether DropWeight_Optional has been set.

#### `public inline bool `[`IsDropWeightDefaultValue`](#structFRHAPI__Loot_1ac612f584a88113b0c0cd73ce5a3b7486)`() const` <a id="structFRHAPI__Loot_1ac612f584a88113b0c0cd73ce5a3b7486"></a>

Returns true if DropWeight_Optional is set and matches the default value.

#### `public inline void `[`SetDropWeightToDefault`](#structFRHAPI__Loot_1a6363ba8bb117c271097619b48a5cb685)`()` <a id="structFRHAPI__Loot_1a6363ba8bb117c271097619b48a5cb685"></a>

Sets the value of DropWeight_Optional to its default and also sets DropWeight_IsSet to true.

#### `public inline bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a27ca6307fa8d1111f442cfae6673d8a4)`()` <a id="structFRHAPI__Loot_1a27ca6307fa8d1111f442cfae6673d8a4"></a>

Gets the value of FillInNewOrder_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a6fa044aa1ba9b493441e2d8931dba20f)`() const` <a id="structFRHAPI__Loot_1a6fa044aa1ba9b493441e2d8931dba20f"></a>

Gets the value of FillInNewOrder_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1ad002a52465c4ad2668fee94cdebed957)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1ad002a52465c4ad2668fee94cdebed957"></a>

Gets the value of FillInNewOrder_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a558055c9e4b468bfe8c2961d325e3f2c)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1a558055c9e4b468bfe8c2961d325e3f2c"></a>

Fills OutValue with the value of FillInNewOrder_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a283cb270de6372afcfdaee929a4cc06a)`()` <a id="structFRHAPI__Loot_1a283cb270de6372afcfdaee929a4cc06a"></a>

Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a8e10b09b1a22075afcab71caa3e86494)`() const` <a id="structFRHAPI__Loot_1a8e10b09b1a22075afcab71caa3e86494"></a>

Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a5e182efbdd7faaf9f2420899162153ef)`(const bool & NewValue)` <a id="structFRHAPI__Loot_1a5e182efbdd7faaf9f2420899162153ef"></a>

Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true.

#### `public inline void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a1c9c9bef3b5f0ce18c42ff6982147f36)`(bool && NewValue)` <a id="structFRHAPI__Loot_1a1c9c9bef3b5f0ce18c42ff6982147f36"></a>

Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true using move semantics.

#### `public inline void `[`ClearFillInNewOrder`](#structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb)`()` <a id="structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb"></a>

Clears the value of FillInNewOrder_Optional and sets FillInNewOrder_IsSet to false.

#### `public inline bool `[`IsFillInNewOrderSet`](#structFRHAPI__Loot_1a4c627a1b1695a2eca1462e38d0785a71)`() const` <a id="structFRHAPI__Loot_1a4c627a1b1695a2eca1462e38d0785a71"></a>

Checks whether FillInNewOrder_Optional has been set.

#### `public inline bool `[`IsFillInNewOrderDefaultValue`](#structFRHAPI__Loot_1a096cd5304b7e6ce8e38e2ed23a2d9937)`() const` <a id="structFRHAPI__Loot_1a096cd5304b7e6ce8e38e2ed23a2d9937"></a>

Returns true if FillInNewOrder_Optional is set and matches the default value.

#### `public inline void `[`SetFillInNewOrderToDefault`](#structFRHAPI__Loot_1af49c135f5f8a2278cd294b0f856c69a0)`()` <a id="structFRHAPI__Loot_1af49c135f5f8a2278cd294b0f856c69a0"></a>

Sets the value of FillInNewOrder_Optional to its default and also sets FillInNewOrder_IsSet to true.

#### `public inline bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a77a3dddfe61e555c3a5d55cfa30fd1a9)`()` <a id="structFRHAPI__Loot_1a77a3dddfe61e555c3a5d55cfa30fd1a9"></a>

Gets the value of AllowPartialBundles_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a9d81f9c5b0ac7e965f47d09d6c32770c)`() const` <a id="structFRHAPI__Loot_1a9d81f9c5b0ac7e965f47d09d6c32770c"></a>

Gets the value of AllowPartialBundles_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a342443e340a2867ec82b111077b49c65)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1a342443e340a2867ec82b111077b49c65"></a>

Gets the value of AllowPartialBundles_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1ae024296bd76a74c144f9a0b39b819ed8)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1ae024296bd76a74c144f9a0b39b819ed8"></a>

Fills OutValue with the value of AllowPartialBundles_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a894a8fc3c1a7c777e1c10f3fae0d86cf)`()` <a id="structFRHAPI__Loot_1a894a8fc3c1a7c777e1c10f3fae0d86cf"></a>

Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a204bef0d2835a09fc7f3d631acc3feba)`() const` <a id="structFRHAPI__Loot_1a204bef0d2835a09fc7f3d631acc3feba"></a>

Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1ac08c0d23a9fe1959373b99f3d9a599e6)`(const bool & NewValue)` <a id="structFRHAPI__Loot_1ac08c0d23a9fe1959373b99f3d9a599e6"></a>

Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true.

#### `public inline void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1a2bf67472b454720a3c4e79906d13a711)`(bool && NewValue)` <a id="structFRHAPI__Loot_1a2bf67472b454720a3c4e79906d13a711"></a>

Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true using move semantics.

#### `public inline void `[`ClearAllowPartialBundles`](#structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95)`()` <a id="structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95"></a>

Clears the value of AllowPartialBundles_Optional and sets AllowPartialBundles_IsSet to false.

#### `public inline bool `[`IsAllowPartialBundlesSet`](#structFRHAPI__Loot_1ab4d949e49537a13654740303da8903f5)`() const` <a id="structFRHAPI__Loot_1ab4d949e49537a13654740303da8903f5"></a>

Checks whether AllowPartialBundles_Optional has been set.

#### `public inline bool `[`IsAllowPartialBundlesDefaultValue`](#structFRHAPI__Loot_1a398d73cfc4df91f93783bc9f8134b731)`() const` <a id="structFRHAPI__Loot_1a398d73cfc4df91f93783bc9f8134b731"></a>

Returns true if AllowPartialBundles_Optional is set and matches the default value.

#### `public inline void `[`SetAllowPartialBundlesToDefault`](#structFRHAPI__Loot_1afa4e37c2b1cc8728c875d20c143de249)`()` <a id="structFRHAPI__Loot_1afa4e37c2b1cc8728c875d20c143de249"></a>

Sets the value of AllowPartialBundles_Optional to its default and also sets AllowPartialBundles_IsSet to true.

#### `public inline int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a644204d734055c1ad6db64dbf3c24c49)`()` <a id="structFRHAPI__Loot_1a644204d734055c1ad6db64dbf3c24c49"></a>

Gets the value of RequiredItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1aad7a41842f8f28776a0a41cc499ff5da)`() const` <a id="structFRHAPI__Loot_1aad7a41842f8f28776a0a41cc499ff5da"></a>

Gets the value of RequiredItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1af4d4734de12bea9c6455ec4b0b56e050)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1af4d4734de12bea9c6455ec4b0b56e050"></a>

Gets the value of RequiredItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiredItemId`](#structFRHAPI__Loot_1a4dbb79c91f8fc5203268629701fbcb0a)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a4dbb79c91f8fc5203268629701fbcb0a"></a>

Fills OutValue with the value of RequiredItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1a2e150188d347bee5762e2885f98baa74)`()` <a id="structFRHAPI__Loot_1a2e150188d347bee5762e2885f98baa74"></a>

Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1a041a1d414e39d434aa1b611e2e552b31)`() const` <a id="structFRHAPI__Loot_1a041a1d414e39d434aa1b611e2e552b31"></a>

Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequiredItemId`](#structFRHAPI__Loot_1aedc8b2da4d0c228eefeddc9ad359e7e8)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1aedc8b2da4d0c228eefeddc9ad359e7e8"></a>

Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true.

#### `public inline void `[`SetRequiredItemId`](#structFRHAPI__Loot_1a68dafe7433eea381adb188a20ab45009)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a68dafe7433eea381adb188a20ab45009"></a>

Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemId`](#structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181)`()` <a id="structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181"></a>

Clears the value of RequiredItemId_Optional and sets RequiredItemId_IsSet to false.

#### `public inline bool `[`IsRequiredItemIdSet`](#structFRHAPI__Loot_1abad4d37297ee50c37546b3ebef139fd2)`() const` <a id="structFRHAPI__Loot_1abad4d37297ee50c37546b3ebef139fd2"></a>

Checks whether RequiredItemId_Optional has been set.

#### `public inline bool `[`IsRequiredItemIdDefaultValue`](#structFRHAPI__Loot_1ac293dab8fa44d784dc6f80acbb030b9d)`() const` <a id="structFRHAPI__Loot_1ac293dab8fa44d784dc6f80acbb030b9d"></a>

Returns true if RequiredItemId_Optional is set and matches the default value.

#### `public inline void `[`SetRequiredItemIdToDefault`](#structFRHAPI__Loot_1ae89159c7256c304f929c487a1d6668c3)`()` <a id="structFRHAPI__Loot_1ae89159c7256c304f929c487a1d6668c3"></a>

Sets the value of RequiredItemId_Optional to its default and also sets RequiredItemId_IsSet to true.

#### `public inline void `[`SetRequiredItemIdToNull`](#structFRHAPI__Loot_1aaf38b30ab716e703d56c1ae5fccfe1b6)`()` <a id="structFRHAPI__Loot_1aaf38b30ab716e703d56c1ae5fccfe1b6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsRequiredItemIdNull`](#structFRHAPI__Loot_1a120d065265a25b6b159de230f7dc0b61)`() const` <a id="structFRHAPI__Loot_1a120d065265a25b6b159de230f7dc0b61"></a>

Checks whether RequiredItemId_Optional is set to null.

#### `public inline FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a7aec700af7d2a8bf57ea15db03d84d73)`()` <a id="structFRHAPI__Loot_1a7aec700af7d2a8bf57ea15db03d84d73"></a>

Gets the value of RequiredItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a19cf4298c285102d4c52808ab80b8ff1)`() const` <a id="structFRHAPI__Loot_1a19cf4298c285102d4c52808ab80b8ff1"></a>

Gets the value of RequiredItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a3c6afb7bab6ba6b6de2cd5c8c5ed938e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1a3c6afb7bab6ba6b6de2cd5c8c5ed938e"></a>

Gets the value of RequiredItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a015cd4f2792a0ce4063dbc08032af111)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1a015cd4f2792a0ce4063dbc08032af111"></a>

Fills OutValue with the value of RequiredItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetRequiredItemUuidOrNull`](#structFRHAPI__Loot_1a557e9b3d90b70d2b268977f4f2c1dc9a)`()` <a id="structFRHAPI__Loot_1a557e9b3d90b70d2b268977f4f2c1dc9a"></a>

Returns a pointer to RequiredItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetRequiredItemUuidOrNull`](#structFRHAPI__Loot_1a246d7311bd262b3b9d53f3026430ab4a)`() const` <a id="structFRHAPI__Loot_1a246d7311bd262b3b9d53f3026430ab4a"></a>

Returns a pointer to RequiredItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequiredItemUuid`](#structFRHAPI__Loot_1ae795e53a83af5ef7fcdfcc7fafe868f1)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1ae795e53a83af5ef7fcdfcc7fafe868f1"></a>

Sets the value of RequiredItemUuid_Optional and also sets RequiredItemUuid_IsSet to true.

#### `public inline void `[`SetRequiredItemUuid`](#structFRHAPI__Loot_1a6776bae33ae3f4fdf6f1ea8cebd001dd)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1a6776bae33ae3f4fdf6f1ea8cebd001dd"></a>

Sets the value of RequiredItemUuid_Optional and also sets RequiredItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemUuid`](#structFRHAPI__Loot_1aa41e02a9d9dd29c3497869a31d64b977)`()` <a id="structFRHAPI__Loot_1aa41e02a9d9dd29c3497869a31d64b977"></a>

Clears the value of RequiredItemUuid_Optional and sets RequiredItemUuid_IsSet to false.

#### `public inline bool `[`IsRequiredItemUuidSet`](#structFRHAPI__Loot_1a748958019132d24d849841183bb43031)`() const` <a id="structFRHAPI__Loot_1a748958019132d24d849841183bb43031"></a>

Checks whether RequiredItemUuid_Optional has been set.

#### `public inline void `[`SetRequiredItemUuidToNull`](#structFRHAPI__Loot_1ace3b6ade36eeb5773185398fa133fbe4)`()` <a id="structFRHAPI__Loot_1ace3b6ade36eeb5773185398fa133fbe4"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsRequiredItemUuidNull`](#structFRHAPI__Loot_1a2e8feb0b5d337e886995f44034006365)`() const` <a id="structFRHAPI__Loot_1a2e8feb0b5d337e886995f44034006365"></a>

Checks whether RequiredItemUuid_Optional is set to null.

#### `public inline int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1ab097b00a06047b25ebd36fb39368e1cf)`()` <a id="structFRHAPI__Loot_1ab097b00a06047b25ebd36fb39368e1cf"></a>

Gets the value of RequiredItemCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a00bbd6a7297fa1576b077658ea45aaf4)`() const` <a id="structFRHAPI__Loot_1a00bbd6a7297fa1576b077658ea45aaf4"></a>

Gets the value of RequiredItemCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1afc95c49aae0d9e9c3290eb0157663465)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1afc95c49aae0d9e9c3290eb0157663465"></a>

Gets the value of RequiredItemCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a074bc7b7cfcfa02889b3e32e6b567875)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a074bc7b7cfcfa02889b3e32e6b567875"></a>

Fills OutValue with the value of RequiredItemCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1abfb67e8a7f00cd942df516ad97b34806)`()` <a id="structFRHAPI__Loot_1abfb67e8a7f00cd942df516ad97b34806"></a>

Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a5aa279a28a3edab13004f4bdc7ca3e19)`() const` <a id="structFRHAPI__Loot_1a5aa279a28a3edab13004f4bdc7ca3e19"></a>

Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1a9eac390a8e7ede0a245342e5a323aaba)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a9eac390a8e7ede0a245342e5a323aaba"></a>

Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true.

#### `public inline void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1aa6c50e038013978ed1ec83fcab8b5a5c)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1aa6c50e038013978ed1ec83fcab8b5a5c"></a>

Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemCount`](#structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd)`()` <a id="structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd"></a>

Clears the value of RequiredItemCount_Optional and sets RequiredItemCount_IsSet to false.

#### `public inline bool `[`IsRequiredItemCountSet`](#structFRHAPI__Loot_1a93e2fc425b8a0d30a2cb123c0b094ee4)`() const` <a id="structFRHAPI__Loot_1a93e2fc425b8a0d30a2cb123c0b094ee4"></a>

Checks whether RequiredItemCount_Optional has been set.

#### `public inline bool `[`IsRequiredItemCountDefaultValue`](#structFRHAPI__Loot_1ab465a43f9dcfe5bbac7aeac109cb7c81)`() const` <a id="structFRHAPI__Loot_1ab465a43f9dcfe5bbac7aeac109cb7c81"></a>

Returns true if RequiredItemCount_Optional is set and matches the default value.

#### `public inline void `[`SetRequiredItemCountToDefault`](#structFRHAPI__Loot_1a98f2f8f4d019a7d4a7d58658c5061857)`()` <a id="structFRHAPI__Loot_1a98f2f8f4d019a7d4a7d58658c5061857"></a>

Sets the value of RequiredItemCount_Optional to its default and also sets RequiredItemCount_IsSet to true.

#### `public inline int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1ac833abfa9b7d46def3da9ab5e7b7d8ec)`()` <a id="structFRHAPI__Loot_1ac833abfa9b7d46def3da9ab5e7b7d8ec"></a>

Gets the value of StackLimit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a4edbe09078a1ade68506249b8acb08e8)`() const` <a id="structFRHAPI__Loot_1a4edbe09078a1ade68506249b8acb08e8"></a>

Gets the value of StackLimit_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1aeab2757293034eb740794132fcdb61e3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1aeab2757293034eb740794132fcdb61e3"></a>

Gets the value of StackLimit_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStackLimit`](#structFRHAPI__Loot_1a01aed35350e799d59a51e5c735eb99b6)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a01aed35350e799d59a51e5c735eb99b6"></a>

Fills OutValue with the value of StackLimit_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1a4b82c102f354be72135f2c0dafa16dcd)`()` <a id="structFRHAPI__Loot_1a4b82c102f354be72135f2c0dafa16dcd"></a>

Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1a663d57514732a8b1bd5fed4e9e97cfb8)`() const` <a id="structFRHAPI__Loot_1a663d57514732a8b1bd5fed4e9e97cfb8"></a>

Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStackLimit`](#structFRHAPI__Loot_1a5c0d6ac331d6378e8df0b557148b993c)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a5c0d6ac331d6378e8df0b557148b993c"></a>

Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true.

#### `public inline void `[`SetStackLimit`](#structFRHAPI__Loot_1aa2d922b6609527df433764e835871bb7)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1aa2d922b6609527df433764e835871bb7"></a>

Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true using move semantics.

#### `public inline void `[`ClearStackLimit`](#structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68)`()` <a id="structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68"></a>

Clears the value of StackLimit_Optional and sets StackLimit_IsSet to false.

#### `public inline bool `[`IsStackLimitSet`](#structFRHAPI__Loot_1a79e96ce475ebfd6865cd67b9b3ec26f7)`() const` <a id="structFRHAPI__Loot_1a79e96ce475ebfd6865cd67b9b3ec26f7"></a>

Checks whether StackLimit_Optional has been set.

#### `public inline bool `[`IsStackLimitDefaultValue`](#structFRHAPI__Loot_1a4411301f594cf03ca1ac883fc5aa8092)`() const` <a id="structFRHAPI__Loot_1a4411301f594cf03ca1ac883fc5aa8092"></a>

Returns true if StackLimit_Optional is set and matches the default value.

#### `public inline void `[`SetStackLimitToDefault`](#structFRHAPI__Loot_1a4178e812d7007b89cffdc5425bc70165)`()` <a id="structFRHAPI__Loot_1a4178e812d7007b89cffdc5425bc70165"></a>

Sets the value of StackLimit_Optional to its default and also sets StackLimit_IsSet to true.

#### `public inline int32 & `[`GetUiHint`](#structFRHAPI__Loot_1afda48083dbc6fc8c13d0375560649f72)`()` <a id="structFRHAPI__Loot_1afda48083dbc6fc8c13d0375560649f72"></a>

Gets the value of UiHint_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a27ee675258cb83a9e539c7801b9124b4)`() const` <a id="structFRHAPI__Loot_1a27ee675258cb83a9e539c7801b9124b4"></a>

Gets the value of UiHint_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1ab652df8c110878e7b4936f92654297da)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ab652df8c110878e7b4936f92654297da"></a>

Gets the value of UiHint_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUiHint`](#structFRHAPI__Loot_1a978fe0b67180757bda7ac94bcd149a94)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a978fe0b67180757bda7ac94bcd149a94"></a>

Fills OutValue with the value of UiHint_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1ab98b2f45a0b286c7ca214c3ce7451b2a)`()` <a id="structFRHAPI__Loot_1ab98b2f45a0b286c7ca214c3ce7451b2a"></a>

Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1a39b60cd141e52dd1f47098930f047676)`() const` <a id="structFRHAPI__Loot_1a39b60cd141e52dd1f47098930f047676"></a>

Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUiHint`](#structFRHAPI__Loot_1afaad686a069f3871ac204f5b42a6ab82)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1afaad686a069f3871ac204f5b42a6ab82"></a>

Sets the value of UiHint_Optional and also sets UiHint_IsSet to true.

#### `public inline void `[`SetUiHint`](#structFRHAPI__Loot_1aab69be8553516257498e87b900fbbff4)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1aab69be8553516257498e87b900fbbff4"></a>

Sets the value of UiHint_Optional and also sets UiHint_IsSet to true using move semantics.

#### `public inline void `[`ClearUiHint`](#structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666)`()` <a id="structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666"></a>

Clears the value of UiHint_Optional and sets UiHint_IsSet to false.

#### `public inline bool `[`IsUiHintSet`](#structFRHAPI__Loot_1ad89add7bbbb5d24e86c86afbf083a67f)`() const` <a id="structFRHAPI__Loot_1ad89add7bbbb5d24e86c86afbf083a67f"></a>

Checks whether UiHint_Optional has been set.

#### `public inline bool `[`IsUiHintDefaultValue`](#structFRHAPI__Loot_1a768434aca6d481543db42a6ba4ab04fb)`() const` <a id="structFRHAPI__Loot_1a768434aca6d481543db42a6ba4ab04fb"></a>

Returns true if UiHint_Optional is set and matches the default value.

#### `public inline void `[`SetUiHintToDefault`](#structFRHAPI__Loot_1aa04866c631982d1d3fb998505c09f763)`()` <a id="structFRHAPI__Loot_1aa04866c631982d1d3fb998505c09f763"></a>

Sets the value of UiHint_Optional to its default and also sets UiHint_IsSet to true.

#### `public inline FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1ae072c36d4d9298bc94864c66a6304b0d)`()` <a id="structFRHAPI__Loot_1ae072c36d4d9298bc94864c66a6304b0d"></a>

Gets the value of EffectiveFrom_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1a1d2dabd11b22beb7f257169d20f65dac)`() const` <a id="structFRHAPI__Loot_1a1d2dabd11b22beb7f257169d20f65dac"></a>

Gets the value of EffectiveFrom_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1aa43d9765df77f3c149978cda4e40d7e2)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__Loot_1aa43d9765df77f3c149978cda4e40d7e2"></a>

Gets the value of EffectiveFrom_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEffectiveFrom`](#structFRHAPI__Loot_1af51ee7d4f692fc48fa6281955948f0ef)`(FDateTime & OutValue) const` <a id="structFRHAPI__Loot_1af51ee7d4f692fc48fa6281955948f0ef"></a>

Fills OutValue with the value of EffectiveFrom_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a9306429f9df1742bf26e80e6324dd3bf)`()` <a id="structFRHAPI__Loot_1a9306429f9df1742bf26e80e6324dd3bf"></a>

Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a7b1281b60fd26cc2709905662730943d)`() const` <a id="structFRHAPI__Loot_1a7b1281b60fd26cc2709905662730943d"></a>

Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1a26810f22a8dc416770296510ddcf492b)`(const FDateTime & NewValue)` <a id="structFRHAPI__Loot_1a26810f22a8dc416770296510ddcf492b"></a>

Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true.

#### `public inline void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1a634a4374f488fe51d04f770efe8d217b)`(FDateTime && NewValue)` <a id="structFRHAPI__Loot_1a634a4374f488fe51d04f770efe8d217b"></a>

Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true using move semantics.

#### `public inline void `[`ClearEffectiveFrom`](#structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008)`()` <a id="structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008"></a>

Clears the value of EffectiveFrom_Optional and sets EffectiveFrom_IsSet to false.

#### `public inline bool `[`IsEffectiveFromSet`](#structFRHAPI__Loot_1ae2266b7ddce7252d3cd27cf3eb42f5cf)`() const` <a id="structFRHAPI__Loot_1ae2266b7ddce7252d3cd27cf3eb42f5cf"></a>

Checks whether EffectiveFrom_Optional has been set.

#### `public inline void `[`SetEffectiveFromToNull`](#structFRHAPI__Loot_1a8f588c087de85b0f365382ef1d3d7b53)`()` <a id="structFRHAPI__Loot_1a8f588c087de85b0f365382ef1d3d7b53"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEffectiveFromNull`](#structFRHAPI__Loot_1a2425955b647778fca07465fd7749453b)`() const` <a id="structFRHAPI__Loot_1a2425955b647778fca07465fd7749453b"></a>

Checks whether EffectiveFrom_Optional is set to null.

#### `public inline ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1affdf5827e7ae0b9416fef061934efade)`()` <a id="structFRHAPI__Loot_1affdf5827e7ae0b9416fef061934efade"></a>

Gets the value of QuantityType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a922c8769efa7470ce37159b8f639c429)`() const` <a id="structFRHAPI__Loot_1a922c8769efa7470ce37159b8f639c429"></a>

Gets the value of QuantityType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a1fa2bb37391e296c6dacb756027a3d3e)`(const ERHAPI_QuantityType & DefaultValue) const` <a id="structFRHAPI__Loot_1a1fa2bb37391e296c6dacb756027a3d3e"></a>

Gets the value of QuantityType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantityType`](#structFRHAPI__Loot_1a06585bd89d8595f273d2561085036c7f)`(ERHAPI_QuantityType & OutValue) const` <a id="structFRHAPI__Loot_1a06585bd89d8595f273d2561085036c7f"></a>

Fills OutValue with the value of QuantityType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1a9e859a104d981fc595300b456ddf94c9)`()` <a id="structFRHAPI__Loot_1a9e859a104d981fc595300b456ddf94c9"></a>

Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1a09871b543ac833fca4a363bd53ff4aea)`() const` <a id="structFRHAPI__Loot_1a09871b543ac833fca4a363bd53ff4aea"></a>

Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantityType`](#structFRHAPI__Loot_1a4d80f18bdfa8d7727db0b3eb5cfac683)`(const ERHAPI_QuantityType & NewValue)` <a id="structFRHAPI__Loot_1a4d80f18bdfa8d7727db0b3eb5cfac683"></a>

Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true.

#### `public inline void `[`SetQuantityType`](#structFRHAPI__Loot_1a12a6df55378ba27c2674e87029eb4400)`(ERHAPI_QuantityType && NewValue)` <a id="structFRHAPI__Loot_1a12a6df55378ba27c2674e87029eb4400"></a>

Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityType`](#structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd)`()` <a id="structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd"></a>

Clears the value of QuantityType_Optional and sets QuantityType_IsSet to false.

#### `public inline bool `[`IsQuantityTypeSet`](#structFRHAPI__Loot_1a3d659a8e8109c0ba0da785a8a23f3bba)`() const` <a id="structFRHAPI__Loot_1a3d659a8e8109c0ba0da785a8a23f3bba"></a>

Checks whether QuantityType_Optional has been set.

#### `public inline int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1acd3194b7c96cae542c29a3efe678f2ea)`()` <a id="structFRHAPI__Loot_1acd3194b7c96cae542c29a3efe678f2ea"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a5b2ff024534655a743fcc870912d4b76)`() const` <a id="structFRHAPI__Loot_1a5b2ff024534655a743fcc870912d4b76"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1aebef2ca09e71059b6000265f93e58da2)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1aebef2ca09e71059b6000265f93e58da2"></a>

Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a39ff579e93b70184c70016e8f8370f3d)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a39ff579e93b70184c70016e8f8370f3d"></a>

Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1abb98ef34b0389de5e8f5fb3a71de348a)`()` <a id="structFRHAPI__Loot_1abb98ef34b0389de5e8f5fb3a71de348a"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1a1a81390a03f685c64975f33d301fbfd1)`() const` <a id="structFRHAPI__Loot_1a1a81390a03f685c64975f33d301fbfd1"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1afc9ef0444a38b7bb4325218462ab9eed)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1afc9ef0444a38b7bb4325218462ab9eed"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.

#### `public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a602fad89314b60b581244f945e870690)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a602fad89314b60b581244f945e870690"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50)`()` <a id="structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50"></a>

Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.

#### `public inline bool `[`IsQuantityMultInventoryItemIdSet`](#structFRHAPI__Loot_1a1a2509821822f1d7500f7fbfd44ee230)`() const` <a id="structFRHAPI__Loot_1a1a2509821822f1d7500f7fbfd44ee230"></a>

Checks whether QuantityMultInventoryItemId_Optional has been set.

#### `public inline bool `[`IsQuantityMultInventoryItemIdDefaultValue`](#structFRHAPI__Loot_1a1c513bf258edd56413a96b8e4ca2f63d)`() const` <a id="structFRHAPI__Loot_1a1c513bf258edd56413a96b8e4ca2f63d"></a>

Returns true if QuantityMultInventoryItemId_Optional is set and matches the default value.

#### `public inline void `[`SetQuantityMultInventoryItemIdToDefault`](#structFRHAPI__Loot_1a480179232e881178aa0bae6eac822e72)`()` <a id="structFRHAPI__Loot_1a480179232e881178aa0bae6eac822e72"></a>

Sets the value of QuantityMultInventoryItemId_Optional to its default and also sets QuantityMultInventoryItemId_IsSet to true.

#### `public inline void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__Loot_1a16668bd2d8c5241fa051a75e2b90d7eb)`()` <a id="structFRHAPI__Loot_1a16668bd2d8c5241fa051a75e2b90d7eb"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__Loot_1a7cd327b5cc744939f3d2806f0dbda3bc)`() const` <a id="structFRHAPI__Loot_1a7cd327b5cc744939f3d2806f0dbda3bc"></a>

Checks whether QuantityMultInventoryItemId_Optional is set to null.

#### `public inline FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1aa1b3e4e0a8afe755464d93f351d7a269)`()` <a id="structFRHAPI__Loot_1aa1b3e4e0a8afe755464d93f351d7a269"></a>

Gets the value of QuantityMultInventoryItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1acc352d5abc9ece699cd24accdc4b38bc)`() const` <a id="structFRHAPI__Loot_1acc352d5abc9ece699cd24accdc4b38bc"></a>

Gets the value of QuantityMultInventoryItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1af8b4b7a91d2bde2589226273c81cbc8a)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1af8b4b7a91d2bde2589226273c81cbc8a"></a>

Gets the value of QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a320e94e735e3a5eae184b05278fe8b1f)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1a320e94e735e3a5eae184b05278fe8b1f"></a>

Fills OutValue with the value of QuantityMultInventoryItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetQuantityMultInventoryItemUuidOrNull`](#structFRHAPI__Loot_1a0494b9c70130db2041291b4fff069232)`()` <a id="structFRHAPI__Loot_1a0494b9c70130db2041291b4fff069232"></a>

Returns a pointer to QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetQuantityMultInventoryItemUuidOrNull`](#structFRHAPI__Loot_1a6891aacf37dabbaa67a971c8f9e4c3b1)`() const` <a id="structFRHAPI__Loot_1a6891aacf37dabbaa67a971c8f9e4c3b1"></a>

Returns a pointer to QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1ae8921ffcff5270847f002ec162602684)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1ae8921ffcff5270847f002ec162602684"></a>

Sets the value of QuantityMultInventoryItemUuid_Optional and also sets QuantityMultInventoryItemUuid_IsSet to true.

#### `public inline void `[`SetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a7a02b8d2b63c29570c51e7e6fb5c8219)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1a7a02b8d2b63c29570c51e7e6fb5c8219"></a>

Sets the value of QuantityMultInventoryItemUuid_Optional and also sets QuantityMultInventoryItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a69be0a85188c51421539df8cf652912b)`()` <a id="structFRHAPI__Loot_1a69be0a85188c51421539df8cf652912b"></a>

Clears the value of QuantityMultInventoryItemUuid_Optional and sets QuantityMultInventoryItemUuid_IsSet to false.

#### `public inline bool `[`IsQuantityMultInventoryItemUuidSet`](#structFRHAPI__Loot_1a41e42b918a91333946db8b704191afc7)`() const` <a id="structFRHAPI__Loot_1a41e42b918a91333946db8b704191afc7"></a>

Checks whether QuantityMultInventoryItemUuid_Optional has been set.

#### `public inline void `[`SetQuantityMultInventoryItemUuidToNull`](#structFRHAPI__Loot_1a7a43d5a29a3b51b07cd36c21d4de93ea)`()` <a id="structFRHAPI__Loot_1a7a43d5a29a3b51b07cd36c21d4de93ea"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsQuantityMultInventoryItemUuidNull`](#structFRHAPI__Loot_1a437e2a72d334874f68102dbe69c9e262)`() const` <a id="structFRHAPI__Loot_1a437e2a72d334874f68102dbe69c9e262"></a>

Checks whether QuantityMultInventoryItemUuid_Optional is set to null.

#### `public inline bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1aafaeadeed4112122432bfb952f85eb11)`()` <a id="structFRHAPI__Loot_1aafaeadeed4112122432bfb952f85eb11"></a>

Gets the value of IsClaimableByClient_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a29a5c936721938f9e14d96782029e28c)`() const` <a id="structFRHAPI__Loot_1a29a5c936721938f9e14d96782029e28c"></a>

Gets the value of IsClaimableByClient_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a37f2c54c862b4ab956580e4fae62010a)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1a37f2c54c862b4ab956580e4fae62010a"></a>

Gets the value of IsClaimableByClient_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1ae2cea6c0c8a4bde7087ab75ed5b0e10d)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1ae2cea6c0c8a4bde7087ab75ed5b0e10d"></a>

Fills OutValue with the value of IsClaimableByClient_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1a3dc938c87c63627f42ca04a49f17b791)`()` <a id="structFRHAPI__Loot_1a3dc938c87c63627f42ca04a49f17b791"></a>

Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1afc09f46c80f23ac28ad316ab51e5f9b3)`() const` <a id="structFRHAPI__Loot_1afc09f46c80f23ac28ad316ab51e5f9b3"></a>

Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1af1b3ba3dd60616855dff4c177d5f934b)`(const bool & NewValue)` <a id="structFRHAPI__Loot_1af1b3ba3dd60616855dff4c177d5f934b"></a>

Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true.

#### `public inline void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1a4ce0dc54c2b3f539c157e3a5e5569ee5)`(bool && NewValue)` <a id="structFRHAPI__Loot_1a4ce0dc54c2b3f539c157e3a5e5569ee5"></a>

Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true using move semantics.

#### `public inline void `[`ClearIsClaimableByClient`](#structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6)`()` <a id="structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6"></a>

Clears the value of IsClaimableByClient_Optional and sets IsClaimableByClient_IsSet to false.

#### `public inline bool `[`IsIsClaimableByClientSet`](#structFRHAPI__Loot_1ae393a59c5dfd958a440df421fde06169)`() const` <a id="structFRHAPI__Loot_1ae393a59c5dfd958a440df421fde06169"></a>

Checks whether IsClaimableByClient_Optional has been set.

#### `public inline bool `[`IsIsClaimableByClientDefaultValue`](#structFRHAPI__Loot_1a9d2152f9ebbac480467ccf601a3fe673)`() const` <a id="structFRHAPI__Loot_1a9d2152f9ebbac480467ccf601a3fe673"></a>

Returns true if IsClaimableByClient_Optional is set and matches the default value.

#### `public inline void `[`SetIsClaimableByClientToDefault`](#structFRHAPI__Loot_1a336c1ad23684075d60e7da97dca72e26)`()` <a id="structFRHAPI__Loot_1a336c1ad23684075d60e7da97dca72e26"></a>

Sets the value of IsClaimableByClient_Optional to its default and also sets IsClaimableByClient_IsSet to true.

#### `public inline int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a6c323e6e0612e181e44d269400d34a45)`()` <a id="structFRHAPI__Loot_1a6c323e6e0612e181e44d269400d34a45"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a0ecd5eb336b56ea827bef5ff27b91864)`() const` <a id="structFRHAPI__Loot_1a0ecd5eb336b56ea827bef5ff27b91864"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a3f7676486e87b22bf799bb59beaf02a5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a3f7676486e87b22bf799bb59beaf02a5"></a>

Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTimeFrameId`](#structFRHAPI__Loot_1aa90943249db3ef3ec9b0a64d09c3e048)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1aa90943249db3ef3ec9b0a64d09c3e048"></a>

Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1a662c5df10adacab84252d93cc27cd60d)`()` <a id="structFRHAPI__Loot_1a662c5df10adacab84252d93cc27cd60d"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1a89e0fe05aaad9084b4cbc1f3b3b646ce)`() const` <a id="structFRHAPI__Loot_1a89e0fe05aaad9084b4cbc1f3b3b646ce"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTimeFrameId`](#structFRHAPI__Loot_1ae8e2e7fd878445d35dbc3fe6b0479e7b)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1ae8e2e7fd878445d35dbc3fe6b0479e7b"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.

#### `public inline void `[`SetTimeFrameId`](#structFRHAPI__Loot_1a5fd203ce391fe60c3929ed65c73c6d40)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a5fd203ce391fe60c3929ed65c73c6d40"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.

#### `public inline void `[`ClearTimeFrameId`](#structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0)`()` <a id="structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0"></a>

Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.

#### `public inline bool `[`IsTimeFrameIdSet`](#structFRHAPI__Loot_1a8f6c139e0717dd774a9a0e0b61ea669a)`() const` <a id="structFRHAPI__Loot_1a8f6c139e0717dd774a9a0e0b61ea669a"></a>

Checks whether TimeFrameId_Optional has been set.

#### `public inline bool `[`IsTimeFrameIdDefaultValue`](#structFRHAPI__Loot_1ab7ce5827e1a9a6f065f55fa958ea9dfe)`() const` <a id="structFRHAPI__Loot_1ab7ce5827e1a9a6f065f55fa958ea9dfe"></a>

Returns true if TimeFrameId_Optional is set and matches the default value.

#### `public inline void `[`SetTimeFrameIdToDefault`](#structFRHAPI__Loot_1aaaf27b49e24ee23b0584f580d46d0e36)`()` <a id="structFRHAPI__Loot_1aaaf27b49e24ee23b0584f580d46d0e36"></a>

Sets the value of TimeFrameId_Optional to its default and also sets TimeFrameId_IsSet to true.

#### `public inline void `[`SetTimeFrameIdToNull`](#structFRHAPI__Loot_1ac8677f7d46a172ccf5f3643aa710c9e3)`()` <a id="structFRHAPI__Loot_1ac8677f7d46a172ccf5f3643aa710c9e3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTimeFrameIdNull`](#structFRHAPI__Loot_1aab3788bfa3e2fbe360ddb985fdbe5a76)`() const` <a id="structFRHAPI__Loot_1aab3788bfa3e2fbe360ddb985fdbe5a76"></a>

Checks whether TimeFrameId_Optional is set to null.

#### `public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1aade57d645e5788df9674febeef4aac63)`()` <a id="structFRHAPI__Loot_1aade57d645e5788df9674febeef4aac63"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a8773fb61f0c5cbd4866291d204843e30)`() const` <a id="structFRHAPI__Loot_1a8773fb61f0c5cbd4866291d204843e30"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a2e0ca3547d508a89d2d21abc53949c75)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__Loot_1a2e0ca3547d508a89d2d21abc53949c75"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1aa46c343b94bb7c9bc8d7c82ecdeb13e2)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__Loot_1aa46c343b94bb7c9bc8d7c82ecdeb13e2"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1ae0627af409529cf53dd24ad8defeeb8b)`()` <a id="structFRHAPI__Loot_1ae0627af409529cf53dd24ad8defeeb8b"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1aa8b8263d3fac7cf76f68e244bf2cdd83)`() const` <a id="structFRHAPI__Loot_1aa8b8263d3fac7cf76f68e244bf2cdd83"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1aa87a5e0280fe48d98ba27884b5d0333b)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__Loot_1aa87a5e0280fe48d98ba27884b5d0333b"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1a0ec60ab61d2175b194366ffaa42b6f33)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__Loot_1a0ec60ab61d2175b194366ffaa42b6f33"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed)`()` <a id="structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__Loot_1a0c83e17321a542a48869ef74233968a6)`() const` <a id="structFRHAPI__Loot_1a0c83e17321a542a48869ef74233968a6"></a>

Checks whether UseInventoryBucket_Optional has been set.

#### `public inline void `[`SetUseInventoryBucketToNull`](#structFRHAPI__Loot_1aa52f0decc85cfd8a9a77f9c750cbd311)`()` <a id="structFRHAPI__Loot_1aa52f0decc85cfd8a9a77f9c750cbd311"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsUseInventoryBucketNull`](#structFRHAPI__Loot_1a7d9e449c28369005244cc076c9005aab)`() const` <a id="structFRHAPI__Loot_1a7d9e449c28369005244cc076c9005aab"></a>

Checks whether UseInventoryBucket_Optional is set to null.

#### `public inline ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a6a9434cb329e2da5b41557c5a11e2147)`()` <a id="structFRHAPI__Loot_1a6a9434cb329e2da5b41557c5a11e2147"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1aef0bf6cc2089118d09f28c99ca0c9e44)`() const` <a id="structFRHAPI__Loot_1aef0bf6cc2089118d09f28c99ca0c9e44"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1ab0dee2b26446c54e47d3c78aa6bab175)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` <a id="structFRHAPI__Loot_1ab0dee2b26446c54e47d3c78aa6bab175"></a>

Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a75e8680087f9474f45dae8497cf61f86)`(ERHAPI_XpQuantityTransform & OutValue) const` <a id="structFRHAPI__Loot_1a75e8680087f9474f45dae8497cf61f86"></a>

Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1afa973c3e2d6c6846d0cf8b263200eb3a)`()` <a id="structFRHAPI__Loot_1afa973c3e2d6c6846d0cf8b263200eb3a"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1a852ca6b6159f36264458735911917301)`() const` <a id="structFRHAPI__Loot_1a852ca6b6159f36264458735911917301"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1aede41113f17cdc20912efe9357e824d7)`(const ERHAPI_XpQuantityTransform & NewValue)` <a id="structFRHAPI__Loot_1aede41113f17cdc20912efe9357e824d7"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.

#### `public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1aaf5c492282ab518ab8b1ae9e3b2e0b2c)`(ERHAPI_XpQuantityTransform && NewValue)` <a id="structFRHAPI__Loot_1aaf5c492282ab518ab8b1ae9e3b2e0b2c"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.

#### `public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da)`()` <a id="structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da"></a>

Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.

#### `public inline bool `[`IsXpQuantityTransformTypeSet`](#structFRHAPI__Loot_1ad1abe2db996f93f6323e225683f5d05b)`() const` <a id="structFRHAPI__Loot_1ad1abe2db996f93f6323e225683f5d05b"></a>

Checks whether XpQuantityTransformType_Optional has been set.

#### `public inline FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a192debb1b487e6044db6a83521ec8617)`()` <a id="structFRHAPI__Loot_1a192debb1b487e6044db6a83521ec8617"></a>

Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a5d8c6c1304bf9ee54fc5a7f4c7c89479)`() const` <a id="structFRHAPI__Loot_1a5d8c6c1304bf9ee54fc5a7f4c7c89479"></a>

Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a82779cb6fe784d058eafb98a6e916fa1)`(const FString & DefaultValue) const` <a id="structFRHAPI__Loot_1a82779cb6fe784d058eafb98a6e916fa1"></a>

Gets the value of CurrentPricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a1cdd271fa5085a0400483f9479cd3240)`(FString & OutValue) const` <a id="structFRHAPI__Loot_1a1cdd271fa5085a0400483f9479cd3240"></a>

Fills OutValue with the value of CurrentPricePointGuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1a3848b5d5396bd85b304800888c929c8d)`()` <a id="structFRHAPI__Loot_1a3848b5d5396bd85b304800888c929c8d"></a>

Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1a90cf280303376fd2e46d7242b85ef46b)`() const` <a id="structFRHAPI__Loot_1a90cf280303376fd2e46d7242b85ef46b"></a>

Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1aa07ac83717115f7907fae06487989d5c)`(const FString & NewValue)` <a id="structFRHAPI__Loot_1aa07ac83717115f7907fae06487989d5c"></a>

Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true.

#### `public inline void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1a61087ca6e438436c957d8253568eebdf)`(FString && NewValue)` <a id="structFRHAPI__Loot_1a61087ca6e438436c957d8253568eebdf"></a>

Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrentPricePointGuid`](#structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e)`()` <a id="structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e"></a>

Clears the value of CurrentPricePointGuid_Optional and sets CurrentPricePointGuid_IsSet to false.

#### `public inline bool `[`IsCurrentPricePointGuidSet`](#structFRHAPI__Loot_1ad5230b0d787b81d156fa59517733c73c)`() const` <a id="structFRHAPI__Loot_1ad5230b0d787b81d156fa59517733c73c"></a>

Checks whether CurrentPricePointGuid_Optional has been set.

#### `public inline void `[`SetCurrentPricePointGuidToNull`](#structFRHAPI__Loot_1aba4371e81090ba230a0d2dc4734803c0)`()` <a id="structFRHAPI__Loot_1aba4371e81090ba230a0d2dc4734803c0"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCurrentPricePointGuidNull`](#structFRHAPI__Loot_1abf30000c9f7f3761d0cdd682dcb2b158)`() const` <a id="structFRHAPI__Loot_1abf30000c9f7f3761d0cdd682dcb2b158"></a>

Checks whether CurrentPricePointGuid_Optional is set to null.

#### `public inline FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a0a8d4128b601e6f0e59cf06cfba7f07a)`()` <a id="structFRHAPI__Loot_1a0a8d4128b601e6f0e59cf06cfba7f07a"></a>

Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a437debb3837b804aef58c9cf5bc8fafe)`() const` <a id="structFRHAPI__Loot_1a437debb3837b804aef58c9cf5bc8fafe"></a>

Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1aed59450aa926415f6ac390623118b066)`(const FString & DefaultValue) const` <a id="structFRHAPI__Loot_1aed59450aa926415f6ac390623118b066"></a>

Gets the value of PreSalePricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a566fb155c23cbc637cbfa1bf07bd59d5)`(FString & OutValue) const` <a id="structFRHAPI__Loot_1a566fb155c23cbc637cbfa1bf07bd59d5"></a>

Fills OutValue with the value of PreSalePricePointGuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1af313af4ec8cd0a19969ba480caa6b2f5)`()` <a id="structFRHAPI__Loot_1af313af4ec8cd0a19969ba480caa6b2f5"></a>

Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1a4341d1268acb3cb6dbad70bd151a95e0)`() const` <a id="structFRHAPI__Loot_1a4341d1268acb3cb6dbad70bd151a95e0"></a>

Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1af4a068f843b026090a8c35a43ac21700)`(const FString & NewValue)` <a id="structFRHAPI__Loot_1af4a068f843b026090a8c35a43ac21700"></a>

Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true.

#### `public inline void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1afae4c15dc92a4eafa9218baee86f5ddd)`(FString && NewValue)` <a id="structFRHAPI__Loot_1afae4c15dc92a4eafa9218baee86f5ddd"></a>

Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPreSalePricePointGuid`](#structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e)`()` <a id="structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e"></a>

Clears the value of PreSalePricePointGuid_Optional and sets PreSalePricePointGuid_IsSet to false.

#### `public inline bool `[`IsPreSalePricePointGuidSet`](#structFRHAPI__Loot_1ad6f9cbc630b08f103dad3d20cfe69fed)`() const` <a id="structFRHAPI__Loot_1ad6f9cbc630b08f103dad3d20cfe69fed"></a>

Checks whether PreSalePricePointGuid_Optional has been set.

#### `public inline void `[`SetPreSalePricePointGuidToNull`](#structFRHAPI__Loot_1add9bde1d3c7eb9943d242b86f381a8e5)`()` <a id="structFRHAPI__Loot_1add9bde1d3c7eb9943d242b86f381a8e5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPreSalePricePointGuidNull`](#structFRHAPI__Loot_1a4e01f64ed3e1ad393e94314b2264d08a)`() const` <a id="structFRHAPI__Loot_1a4e01f64ed3e1ad393e94314b2264d08a"></a>

Checks whether PreSalePricePointGuid_Optional is set to null.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a2039265cc3933c87f52f649365ce80aa)`()` <a id="structFRHAPI__Loot_1a2039265cc3933c87f52f649365ce80aa"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a3e87e3502894ed8a7a313f656c3823ba)`() const` <a id="structFRHAPI__Loot_1a3e87e3502894ed8a7a313f656c3823ba"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1ac593ab1b44d63a635272c0be6e347cc4)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Loot_1ac593ab1b44d63a635272c0be6e347cc4"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Loot_1a5cc085454f37806d9400e794b7d64ab5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Loot_1a5cc085454f37806d9400e794b7d64ab5"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1a1cf8daaa04586e3a6bd6a63e02224a79)`()` <a id="structFRHAPI__Loot_1a1cf8daaa04586e3a6bd6a63e02224a79"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1a2bcda3da8cb2e7c53afe6b9f11ac310b)`() const` <a id="structFRHAPI__Loot_1a2bcda3da8cb2e7c53afe6b9f11ac310b"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Loot_1a1d8e16be89e1f22c6672c547df6593f3)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Loot_1a1d8e16be89e1f22c6672c547df6593f3"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Loot_1a990dfa89a8255c0ea88443aeb68b0be1)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Loot_1a990dfa89a8255c0ea88443aeb68b0be1"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a)`()` <a id="structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Loot_1a151daa852517492e955e1bb4375d32c5)`() const` <a id="structFRHAPI__Loot_1a151daa852517492e955e1bb4375d32c5"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__Loot_1a27a6ad4028734ee985306d2429e2b67a)`()` <a id="structFRHAPI__Loot_1a27a6ad4028734ee985306d2429e2b67a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__Loot_1a4922c731ff4a9b2d6dd178d991f982ab)`() const` <a id="structFRHAPI__Loot_1a4922c731ff4a9b2d6dd178d991f982ab"></a>

Checks whether CacheInfo_Optional is set to null.

#### `public inline int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a50561277d90d95069d37feeb3bfb2e7c)`()` <a id="structFRHAPI__Loot_1a50561277d90d95069d37feeb3bfb2e7c"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1af38f9a5ed9eee9398723846b646f100a)`() const` <a id="structFRHAPI__Loot_1af38f9a5ed9eee9398723846b646f100a"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1ac5ecc84f81dba443728d63519e1ae375)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ac5ecc84f81dba443728d63519e1ae375"></a>

Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a99f6530818176b2d7276082dba8de91a)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a99f6530818176b2d7276082dba8de91a"></a>

Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1aa99d054ad01b75c0dac38bb2f93d59b1)`()` <a id="structFRHAPI__Loot_1aa99d054ad01b75c0dac38bb2f93d59b1"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1af5ec36f8051563362c113ac1a769cc65)`() const` <a id="structFRHAPI__Loot_1af5ec36f8051563362c113ac1a769cc65"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1ad3ad704a5b89921dc3d08745b4954bd6)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1ad3ad704a5b89921dc3d08745b4954bd6"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.

#### `public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1a0125a96961951141e108df6f8bc9d8e3)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a0125a96961951141e108df6f8bc9d8e3"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.

#### `public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df)`()` <a id="structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df"></a>

Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.

#### `public inline bool `[`IsHardQuantityMaximumSet`](#structFRHAPI__Loot_1ac77f90979a81dc8f0675a30189d97b6e)`() const` <a id="structFRHAPI__Loot_1ac77f90979a81dc8f0675a30189d97b6e"></a>

Checks whether HardQuantityMaximum_Optional has been set.

#### `public inline bool `[`IsHardQuantityMaximumDefaultValue`](#structFRHAPI__Loot_1a1dcf73ab36076f3fe98df72496ac7ae1)`() const` <a id="structFRHAPI__Loot_1a1dcf73ab36076f3fe98df72496ac7ae1"></a>

Returns true if HardQuantityMaximum_Optional is set and matches the default value.

#### `public inline void `[`SetHardQuantityMaximumToDefault`](#structFRHAPI__Loot_1ae75d4313ecf4e431d50d1a6defb18831)`()` <a id="structFRHAPI__Loot_1ae75d4313ecf4e431d50d1a6defb18831"></a>

Sets the value of HardQuantityMaximum_Optional to its default and also sets HardQuantityMaximum_IsSet to true.

#### `public inline `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a175280a79910207b3abf9c1d406a6fe3)`()` <a id="structFRHAPI__Loot_1a175280a79910207b3abf9c1d406a6fe3"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1aaf6b286039c6d70d4fa08041aad189ef)`() const` <a id="structFRHAPI__Loot_1aaf6b286039c6d70d4fa08041aad189ef"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a7567bffe3cfd705bef0743e37c3ec24d)`(const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & DefaultValue) const` <a id="structFRHAPI__Loot_1a7567bffe3cfd705bef0743e37c3ec24d"></a>

Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPrice`](#structFRHAPI__Loot_1affb5485eaced42454b3e4d92cfdbd723)`(`[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & OutValue) const` <a id="structFRHAPI__Loot_1affb5485eaced42454b3e4d92cfdbd723"></a>

Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` * `[`GetPriceOrNull`](#structFRHAPI__Loot_1ae9fb8a7417ba4a5e40211c0d71f23379)`()` <a id="structFRHAPI__Loot_1ae9fb8a7417ba4a5e40211c0d71f23379"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` * `[`GetPriceOrNull`](#structFRHAPI__Loot_1a1de71ae8ea4035d765dd0122536305f8)`() const` <a id="structFRHAPI__Loot_1a1de71ae8ea4035d765dd0122536305f8"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPrice`](#structFRHAPI__Loot_1ac857eda13f1cb850f345bc83e2124af2)`(const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & NewValue)` <a id="structFRHAPI__Loot_1ac857eda13f1cb850f345bc83e2124af2"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true.

#### `public inline void `[`SetPrice`](#structFRHAPI__Loot_1a099db48ed6f0814b19923f0559d85cf7)`(`[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` && NewValue)` <a id="structFRHAPI__Loot_1a099db48ed6f0814b19923f0559d85cf7"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.

#### `public inline void `[`ClearPrice`](#structFRHAPI__Loot_1ab1aa3a168ad71a2d2f93b5a7253f93d5)`()` <a id="structFRHAPI__Loot_1ab1aa3a168ad71a2d2f93b5a7253f93d5"></a>

Clears the value of Price_Optional and sets Price_IsSet to false.

#### `public inline bool `[`IsPriceSet`](#structFRHAPI__Loot_1aa63f6ad9f4db27c02a2bbe58bc825a7f)`() const` <a id="structFRHAPI__Loot_1aa63f6ad9f4db27c02a2bbe58bc825a7f"></a>

Checks whether Price_Optional has been set.

#### `public inline void `[`SetPriceToNull`](#structFRHAPI__Loot_1ad1153b5d7d6a9ebcf9f3dbdc92dbb132)`()` <a id="structFRHAPI__Loot_1ad1153b5d7d6a9ebcf9f3dbdc92dbb132"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPriceNull`](#structFRHAPI__Loot_1aa8d93260da3fe70656a46addb32a17ff)`() const` <a id="structFRHAPI__Loot_1aa8d93260da3fe70656a46addb32a17ff"></a>

Checks whether Price_Optional is set to null.

