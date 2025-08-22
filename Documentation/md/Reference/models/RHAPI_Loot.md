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
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1ab363f0363654f63bec26b57272ba7e0a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a19b2a26a88bcf16503443baa0de9ad97)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a995847c7afdbf0c0fb5fce238f196a75)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Loot_1acb6a7ff99f4e0ac28c0e91340435988f)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1ab2016983b705a10e3001aa94f65ed0a8)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1a91f8453b891044179a174546467504c9)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Loot_1a72f7984eab0725584ae4e67d2de7a66f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Loot_1a9c556094629ea501cc1eb7ac277469df)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1aa35c74640b83211db97b7da3d243fc79)`()` | Gets the value of LootUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1a7bfb0a9d1fc3ea45c24e6c3abc4ce8ff)`() const` | Gets the value of LootUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1a3a51496a4261f44b0910554d53887c19)`(const FGuid & DefaultValue) const` | Gets the value of LootUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLootUuid`](#structFRHAPI__Loot_1af38d690485eccf35d31ad4b06ba26d27)`(FGuid & OutValue) const` | Fills OutValue with the value of LootUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetLootUuidOrNull`](#structFRHAPI__Loot_1a0176cfc288d1f77a35969df78d4493dd)`()` | Returns a pointer to LootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetLootUuidOrNull`](#structFRHAPI__Loot_1a825e647a2e7dad86b59e9b55d17871b1)`() const` | Returns a pointer to LootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLootUuid`](#structFRHAPI__Loot_1a9d312365998c9d47326e7399be776108)`(const FGuid & NewValue)` | Sets the value of LootUuid_Optional and also sets LootUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetLootUuid`](#structFRHAPI__Loot_1a3da269309982ecfb4311033c879c9486)`(FGuid && NewValue)` | Sets the value of LootUuid_Optional and also sets LootUuid_IsSet to true using move semantics.
`public inline void `[`ClearLootUuid`](#structFRHAPI__Loot_1ad0eb5151359a29ff49a600e4e8faa236)`()` | Clears the value of LootUuid_Optional and sets LootUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetLootUuidToNull`](#structFRHAPI__Loot_1a34e2af0b2999cdc87388a080cda1d394)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLootUuidNull`](#structFRHAPI__Loot_1a4edb4179cd669d537123db53f345724c)`() const` | Checks whether LootUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__Loot_1a4f6e173a68e4613f4678c8ef4a9d7a21)`()` | Gets the value of LootId.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__Loot_1a76a51f3bdc85353b5f04929cd62723b4)`() const` | Gets the value of LootId.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__Loot_1a9f5cd75e2ffee64861734fb04c3e2ecf)`(const int32 & NewValue)` | Sets the value of LootId.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__Loot_1a86b12695905ccd76e9bcf214f3852a74)`(int32 && NewValue)` | Sets the value of LootId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__Loot_1a8621485592fe60eba3a4538daa470804)`()` | Returns the default value of LootId.
`public inline FORCEINLINE int32 & `[`GetVendorId`](#structFRHAPI__Loot_1ac890e622feca87afca17875ae901955c)`()` | Gets the value of VendorId.
`public inline FORCEINLINE const int32 & `[`GetVendorId`](#structFRHAPI__Loot_1adb0d46d2edbf89c888e441b9d7b7ff1a)`() const` | Gets the value of VendorId.
`public inline FORCEINLINE void `[`SetVendorId`](#structFRHAPI__Loot_1a295865d7ccf3483d6ccc39d1fac2b216)`(const int32 & NewValue)` | Sets the value of VendorId.
`public inline FORCEINLINE void `[`SetVendorId`](#structFRHAPI__Loot_1a1e8116201bbc2e5f766b9d3c0fb199e5)`(int32 && NewValue)` | Sets the value of VendorId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_VendorId`](#structFRHAPI__Loot_1aa37943dcb5be8b7ed83102cad4e9e02f)`()` | Returns the default value of VendorId.
`public inline FORCEINLINE FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1aefe1c983e386baafd832e13cd8627dff)`()` | Gets the value of VendorUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1a5bf978ced6fd0a21838218299c00b602)`() const` | Gets the value of VendorUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1a5e3b927d2838b34ea1746392bfbb4cb0)`(const FGuid & DefaultValue) const` | Gets the value of VendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendorUuid`](#structFRHAPI__Loot_1a9b2cb7a7860bdcfdc00d1407e839ee07)`(FGuid & OutValue) const` | Fills OutValue with the value of VendorUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Loot_1a26c8d4e8d054ed2143c6602a60bdb702)`()` | Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Loot_1ac771b5e34bd5891a22ac0fc206dc914e)`() const` | Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendorUuid`](#structFRHAPI__Loot_1adb97f4e1c7a8d17f8a05a867c3860a5a)`(const FGuid & NewValue)` | Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetVendorUuid`](#structFRHAPI__Loot_1aea16ae05084d7af49fc4ca7cc6c14f26)`(FGuid && NewValue)` | Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true using move semantics.
`public inline void `[`ClearVendorUuid`](#structFRHAPI__Loot_1ab8eefa8d3e6b848d9ae649f62f42bc77)`()` | Clears the value of VendorUuid_Optional and sets VendorUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetVendorUuidToNull`](#structFRHAPI__Loot_1a531bd6e637d92dd8452dfaff74852caa)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVendorUuidNull`](#structFRHAPI__Loot_1ae4db99dc26e421453877e74e1e75501f)`() const` | Checks whether VendorUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__Loot_1ae58ab5773ee65270312935ecf15bd20f)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a947304bea2be3f77fc76e5871cd1a3f1)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__Loot_1ad9c03b96f2afa644497ee4f4d571260d)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__Loot_1a24c50e102c048edce3fd9764b6223878)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1add8794403858951f6508fc2e8c23cb4e)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1ad7714a8f2fdd1b5d90ff6175d1940d25)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__Loot_1a6ef8ba57f132f3050f221cd8750bf7e1)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__Loot_1a96390f3bcb2694421a31dcfd17b77bce)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__Loot_1ace085f242ed73bf1c618d97f716e4efb)`()` | Returns the default value of ItemId.
`public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__Loot_1aaf930be7fda2ebc13d0d8071ddb52524)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__Loot_1a34f0861fe4b3b4db54e83a1de0d03ef0)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a66b36e8064aec7e26f12d082229893b3)`()` | Gets the value of ItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a283db8c450c30c5a6704879479ed0b8e)`() const` | Gets the value of ItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a530136095182eaf5c952865b5de0b2a1)`(const FGuid & DefaultValue) const` | Gets the value of ItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemUuid`](#structFRHAPI__Loot_1adb4a54f1f65fa6a000b449da221e900b)`(FGuid & OutValue) const` | Fills OutValue with the value of ItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Loot_1ad73754a65bc5d2ce43d926f0ff662653)`()` | Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Loot_1aed2fef7ab16b76cf49ac7220ef5f1a2e)`() const` | Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__Loot_1a7fa6669775c11be7e175e2ed4e2bfe5f)`(const FGuid & NewValue)` | Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__Loot_1ad83d4ea7729b53c1e732eb2470cd1384)`(FGuid && NewValue)` | Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearItemUuid`](#structFRHAPI__Loot_1a7d4d0b4d2020d60a73326ae1a436380e)`()` | Clears the value of ItemUuid_Optional and sets ItemUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetItemUuidToNull`](#structFRHAPI__Loot_1a7d9ddc4e11fd3f0ede70c07df6fe81f8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemUuidNull`](#structFRHAPI__Loot_1abc3d692231627dee36c3d35864d3a165)`() const` | Checks whether ItemUuid_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a72a37201efeda633d244fece5501daed)`()` | Gets the value of Item_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a3879778ae007ab7b47d5a67ac3da8683)`() const` | Gets the value of Item_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a85e652aa120634c20ba156621b7bc56d)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & DefaultValue) const` | Gets the value of Item_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItem`](#structFRHAPI__Loot_1aa8a9992ffb95f6b1848feea97bb59665)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & OutValue) const` | Fills OutValue with the value of Item_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1a42eaf742526b86b73a9bdea0257de122)`()` | Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1ae2a89c9b7a0cce28993f5a02cb2bd888)`() const` | Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItem`](#structFRHAPI__Loot_1a5eca5a833a15f05a5243ef438aca94ba)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & NewValue)` | Sets the value of Item_Optional and also sets Item_IsSet to true.
`public inline FORCEINLINE void `[`SetItem`](#structFRHAPI__Loot_1af5b6e4a15366e267614671a4635dadd4)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` && NewValue)` | Sets the value of Item_Optional and also sets Item_IsSet to true using move semantics.
`public inline void `[`ClearItem`](#structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8)`()` | Clears the value of Item_Optional and sets Item_IsSet to false.
`public inline FORCEINLINE void `[`SetItemToNull`](#structFRHAPI__Loot_1ae03a86b3b771f4a7bfa81579c0468949)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemNull`](#structFRHAPI__Loot_1af298b7ade7db41b1541a6c22725158cd)`() const` | Checks whether Item_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a61d75fd7f9431e14aa37f9c3014b135f)`()` | Gets the value of SubVendorId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1aa03b3f0318c283bcbb7509ad310a66f8)`() const` | Gets the value of SubVendorId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1ac20e0926a20c4a09513f23d24a18e6a1)`(const int32 & DefaultValue) const` | Gets the value of SubVendorId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSubVendorId`](#structFRHAPI__Loot_1a44a2d72d5cb367028b5df31845ad5aac)`(int32 & OutValue) const` | Fills OutValue with the value of SubVendorId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a413c43edca09f440ff5c0989f297e798)`()` | Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1ad5d38ff94c53ebb6648ca333b61d44b6)`() const` | Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSubVendorId`](#structFRHAPI__Loot_1aa1b4a1cb04d92fdc7f7527d5535fc3a6)`(const int32 & NewValue)` | Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true.
`public inline FORCEINLINE void `[`SetSubVendorId`](#structFRHAPI__Loot_1adda202b1f46551f7ab141bbafcd61b65)`(int32 && NewValue)` | Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true using move semantics.
`public inline void `[`ClearSubVendorId`](#structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058)`()` | Clears the value of SubVendorId_Optional and sets SubVendorId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_SubVendorId`](#structFRHAPI__Loot_1a09236bc5759bd9c37b411931f6e9ad9d)`()` | Returns the default value of SubVendorId.
`public inline FORCEINLINE void `[`SetSubVendorIdToNull`](#structFRHAPI__Loot_1a4737aad9aab4d6cefe62a105cb46e257)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSubVendorIdNull`](#structFRHAPI__Loot_1adb1d772e641021a7a8de29c9a5069b85)`() const` | Checks whether SubVendorId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a30fae2528a5639d15964aec3197017fa)`()` | Gets the value of SubVendorUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a2b65411f1ebbd993591b4566df1a79c6)`() const` | Gets the value of SubVendorUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1ab6a566b3d313b66e4597ffb252e341c6)`(const FGuid & DefaultValue) const` | Gets the value of SubVendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a0ba0e04daf757787bd26f569a64ea7cf)`(FGuid & OutValue) const` | Fills OutValue with the value of SubVendorUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetSubVendorUuidOrNull`](#structFRHAPI__Loot_1a76d96c7a0fd0bb77b7866873ba31c369)`()` | Returns a pointer to SubVendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetSubVendorUuidOrNull`](#structFRHAPI__Loot_1a6db579de02c36bdd0578e8b2e23ec191)`() const` | Returns a pointer to SubVendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSubVendorUuid`](#structFRHAPI__Loot_1abe2f52a31a42e1126d76ef55fb92c450)`(const FGuid & NewValue)` | Sets the value of SubVendorUuid_Optional and also sets SubVendorUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetSubVendorUuid`](#structFRHAPI__Loot_1a18b04a845a1b189dbf4f2256dc7d13f3)`(FGuid && NewValue)` | Sets the value of SubVendorUuid_Optional and also sets SubVendorUuid_IsSet to true using move semantics.
`public inline void `[`ClearSubVendorUuid`](#structFRHAPI__Loot_1ae750501163eb9a843eb23a6b1247b8e1)`()` | Clears the value of SubVendorUuid_Optional and sets SubVendorUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetSubVendorUuidToNull`](#structFRHAPI__Loot_1a6f586fa153845b0c440a701fa12e3926)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSubVendorUuidNull`](#structFRHAPI__Loot_1a869c7c091125313a27f80d199cb3f605)`() const` | Checks whether SubVendorUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__Loot_1a2ce46c50457f10a8177072c0ec74bb7e)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1a0bd49e5d1e068454e63aa7908a6aee1e)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1ad09359b08b60fe678bbac78c9d8ade8f)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__Loot_1ae1c679229056c1b21b08bd57e7df80fa)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1ae5068a77b56e09ed74d32813723347df)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1a2acf83082d0302ac618778ee6a222a8e)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__Loot_1a255220f0aeb9b1afdf10d3196f1c4c37)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__Loot_1a4d931c4699f07cd7e37c6be9d9f549c7)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__Loot_1ae7f3f795ba87603246e61db1e6286ca2)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a9640cbfde76c0cad198a78b8818a0357)`()` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a68ea6602154e5c1cc9bb912b46c40ee3)`() const` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a86470cbcf64e2e2280480672b6c12a15)`(const ERHAPI_InventorySelector & DefaultValue) const` | Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventorySelectorType`](#structFRHAPI__Loot_1af6a70e482bdd9d5c9d88e8610c5924cc)`(ERHAPI_InventorySelector & OutValue) const` | Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1af62db898a019b0731ee053703fb3478f)`()` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1a9a2286a1e9dd43454e099bbea387f1b1)`() const` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1a85751845a88ef48119db5ba0e97d49a7)`(const ERHAPI_InventorySelector & NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.
`public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1a34dd35abbe65bd4f90439cab302667d1)`(ERHAPI_InventorySelector && NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.
`public inline void `[`ClearInventorySelectorType`](#structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b)`()` | Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.
`public inline FORCEINLINE ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a6340dda50f2883b90fb4d0e55541fd9f)`()` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a78d0eb75a6b63553f8c59cebab152e48)`() const` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a326c4cb72a96971e5cba7802ad895912)`(const ERHAPI_InventoryOperation & DefaultValue) const` | Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventoryOperation`](#structFRHAPI__Loot_1adadfa7097e55829e1ff5497c6a39776e)`(ERHAPI_InventoryOperation & OutValue) const` | Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1a2c2955cc471c886aafa86e240b778b71)`()` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1aa0f662404fa6948c0424e3fb7a22e5a9)`() const` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__Loot_1aca127bc1ca202ecb139eadca7b62447d)`(const ERHAPI_InventoryOperation & NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.
`public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__Loot_1ad7806fb11dcd14a60710e6c106f7e845)`(ERHAPI_InventoryOperation && NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.
`public inline void `[`ClearInventoryOperation`](#structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68)`()` | Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.
`public inline FORCEINLINE bool & `[`GetActive`](#structFRHAPI__Loot_1a04e339ecd404e25e557134747dc187a1)`()` | Gets the value of Active_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__Loot_1a9d7360b992baae2f811c9654247d9c78)`() const` | Gets the value of Active_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__Loot_1a2f0a93e41e77c50ec55b4beebd9be1ad)`(const bool & DefaultValue) const` | Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActive`](#structFRHAPI__Loot_1a84fcc370bd851b2978dcb2716f29460a)`(bool & OutValue) const` | Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1aa223a065b1a4e6f948380f08ed7693fe)`()` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1a23447de4128bf5b2f1c89becbd2cad5e)`() const` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__Loot_1a786aaf0500c6b200621e8768c65d6643)`(const bool & NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true.
`public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__Loot_1a06186de8bb84f1498729811810f536ea)`(bool && NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true using move semantics.
`public inline void `[`ClearActive`](#structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8)`()` | Clears the value of Active_Optional and sets Active_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Active`](#structFRHAPI__Loot_1a150eea4c959fa5272fdb3867b44f116e)`()` | Returns the default value of Active.
`public inline FORCEINLINE int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a12b35b7bb07313f4f39861d26e480a4e)`()` | Gets the value of SortOrder_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1ae3793f5647e0c4c711aef6fd7416f2a8)`() const` | Gets the value of SortOrder_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a05ad0761083d4ae6e47b682acde19838)`(const int32 & DefaultValue) const` | Gets the value of SortOrder_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSortOrder`](#structFRHAPI__Loot_1aa5f5490a7a09d937e2491630ee8650be)`(int32 & OutValue) const` | Fills OutValue with the value of SortOrder_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1adf00bc0f96c8bb49e7c8df46034a4f7f)`()` | Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1ab7f620a4dd476fd7b4674248c58bf13c)`() const` | Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__Loot_1acfd5d8f8abf4aba66898e01d43ce878a)`(const int32 & NewValue)` | Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true.
`public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__Loot_1a92de7541ad7f5f1270a39708ca0a8eb2)`(int32 && NewValue)` | Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true using move semantics.
`public inline void `[`ClearSortOrder`](#structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955)`()` | Clears the value of SortOrder_Optional and sets SortOrder_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_SortOrder`](#structFRHAPI__Loot_1ad606afcaab9b4a5d57f9ce932beac89e)`()` | Returns the default value of SortOrder.
`public inline FORCEINLINE int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1ac9be54d1f2ba7b49c9fe218c0372e814)`()` | Gets the value of DropWeight_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a82592c741cd3c4726ee8f4583cc9756b)`() const` | Gets the value of DropWeight_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a95d82b835557bc420f99355a411d1bb6)`(const int32 & DefaultValue) const` | Gets the value of DropWeight_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDropWeight`](#structFRHAPI__Loot_1a2890b4140c8ae14fc2b85e6cd8adfaff)`(int32 & OutValue) const` | Fills OutValue with the value of DropWeight_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1af42d79cd95fc4aa0a8b7db04f7f251db)`()` | Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1a90db64110c10333da0514d3657a5ebc8)`() const` | Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDropWeight`](#structFRHAPI__Loot_1a78fb4d2205765d699b6d8d0947e9ed4e)`(const int32 & NewValue)` | Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true.
`public inline FORCEINLINE void `[`SetDropWeight`](#structFRHAPI__Loot_1a0b420cec510c465c8bc56bcda4c2e2bf)`(int32 && NewValue)` | Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true using move semantics.
`public inline void `[`ClearDropWeight`](#structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412)`()` | Clears the value of DropWeight_Optional and sets DropWeight_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DropWeight`](#structFRHAPI__Loot_1a06abdba47623d5e909698490aa3ac6e3)`()` | Returns the default value of DropWeight.
`public inline FORCEINLINE bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1ae931cdcfdb85174426a1c93f70f317a8)`()` | Gets the value of FillInNewOrder_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1ad120b7a36484f2af79f10781e79404ec)`() const` | Gets the value of FillInNewOrder_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1af597ca4a26f61206104b14cf7be66214)`(const bool & DefaultValue) const` | Gets the value of FillInNewOrder_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a30afda87ba60e3fad43785f53c706bc3)`(bool & OutValue) const` | Fills OutValue with the value of FillInNewOrder_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a523182f8cb27bb167c4f0e6667041c0c)`()` | Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1af1ac96a26b92512ef9d7c444c8f7bf91)`() const` | Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a1c7a7050349d9c7543e5fcfb8467e1ea)`(const bool & NewValue)` | Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true.
`public inline FORCEINLINE void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a5f86c2e47c18de8f2d1f7cc8223b85b0)`(bool && NewValue)` | Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true using move semantics.
`public inline void `[`ClearFillInNewOrder`](#structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb)`()` | Clears the value of FillInNewOrder_Optional and sets FillInNewOrder_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_FillInNewOrder`](#structFRHAPI__Loot_1a5c45a81746b7819183921ed7368a8465)`()` | Returns the default value of FillInNewOrder.
`public inline FORCEINLINE bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1afc36abd2816d87f90abb6afaa79277de)`()` | Gets the value of AllowPartialBundles_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a07778097887526afa8f22ddafc61c721)`() const` | Gets the value of AllowPartialBundles_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a953cbb5f72337eadd40d876851d9067c)`(const bool & DefaultValue) const` | Gets the value of AllowPartialBundles_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a62e5cccc83ad55ac30ef083cbe9f5afb)`(bool & OutValue) const` | Fills OutValue with the value of AllowPartialBundles_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a21a9836c1a73b768d052c733be357377)`()` | Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a49e50dcfa1fca690287e0958e97e3ffc)`() const` | Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1a61dbdd12cdf0ac68be0dfab7369108c6)`(const bool & NewValue)` | Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true.
`public inline FORCEINLINE void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1a1bf281c20bd85292162dee7613a17641)`(bool && NewValue)` | Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true using move semantics.
`public inline void `[`ClearAllowPartialBundles`](#structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95)`()` | Clears the value of AllowPartialBundles_Optional and sets AllowPartialBundles_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AllowPartialBundles`](#structFRHAPI__Loot_1aa1d6a84f49d6021ddc67fc4773b56cd6)`()` | Returns the default value of AllowPartialBundles.
`public inline FORCEINLINE int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a3add563691f9fbcbabaa572e21be4e2a)`()` | Gets the value of RequiredItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1aac02a94607ccd4d99b5452b9392f5085)`() const` | Gets the value of RequiredItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a145d68a7303b451e4d7499c4dc3edf29)`(const int32 & DefaultValue) const` | Gets the value of RequiredItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRequiredItemId`](#structFRHAPI__Loot_1abaa83fc47a1927b7da43d930e8abebaf)`(int32 & OutValue) const` | Fills OutValue with the value of RequiredItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1a47d335578cc53fc45d30428bd9b03e89)`()` | Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1af68b432f701747a98f12be53e3a0a9ee)`() const` | Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRequiredItemId`](#structFRHAPI__Loot_1a130fade1bfd8d9e826f7f824167dee50)`(const int32 & NewValue)` | Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetRequiredItemId`](#structFRHAPI__Loot_1ab1f7e13346b389507587dfb1fa146ea7)`(int32 && NewValue)` | Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemId`](#structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181)`()` | Clears the value of RequiredItemId_Optional and sets RequiredItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RequiredItemId`](#structFRHAPI__Loot_1a2a068de17f2ffd65c0a415c07e8ef6a2)`()` | Returns the default value of RequiredItemId.
`public inline FORCEINLINE void `[`SetRequiredItemIdToNull`](#structFRHAPI__Loot_1afe19de16239ee0780159a15a0bc5545a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRequiredItemIdNull`](#structFRHAPI__Loot_1a332948a6c0d16e5a0cd7194e1f5e914f)`() const` | Checks whether RequiredItemId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1acb8a525346087121b0db575fbfed798b)`()` | Gets the value of RequiredItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1ace31180a0c6ba1be0bb59cb1ffe3f3d6)`() const` | Gets the value of RequiredItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a4cff4ae029ef69581874d8f634cfed19)`(const FGuid & DefaultValue) const` | Gets the value of RequiredItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a81f4ff7151681786a64ff531a06799cd)`(FGuid & OutValue) const` | Fills OutValue with the value of RequiredItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetRequiredItemUuidOrNull`](#structFRHAPI__Loot_1a1852dfd8127ea601fb59638c736f9721)`()` | Returns a pointer to RequiredItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetRequiredItemUuidOrNull`](#structFRHAPI__Loot_1a59d70c9125a403e02bb4fd58792c1ec8)`() const` | Returns a pointer to RequiredItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRequiredItemUuid`](#structFRHAPI__Loot_1ab777c05e243056cc75de51ce180c0169)`(const FGuid & NewValue)` | Sets the value of RequiredItemUuid_Optional and also sets RequiredItemUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetRequiredItemUuid`](#structFRHAPI__Loot_1abf8c713fb2e2d508465e8cb93f2b2acb)`(FGuid && NewValue)` | Sets the value of RequiredItemUuid_Optional and also sets RequiredItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemUuid`](#structFRHAPI__Loot_1aa41e02a9d9dd29c3497869a31d64b977)`()` | Clears the value of RequiredItemUuid_Optional and sets RequiredItemUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetRequiredItemUuidToNull`](#structFRHAPI__Loot_1a423d5d2b3429b686eb32b2d2063ccd56)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRequiredItemUuidNull`](#structFRHAPI__Loot_1a68c71289e5bc0f41bd5eddd22bb956e3)`() const` | Checks whether RequiredItemUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1affc263a8e3804fdc7d9dfc894007c7e1)`()` | Gets the value of RequiredItemCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a6954d5bd7ea06ee0d35a67619995b9d1)`() const` | Gets the value of RequiredItemCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1ade374b0c73c187e2bf3fa82c78021a65)`(const int32 & DefaultValue) const` | Gets the value of RequiredItemCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a23dde8ddea7991db0a5c920e034d7820)`(int32 & OutValue) const` | Fills OutValue with the value of RequiredItemCount_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a10bbbebffb851b7b5e042060481d999a)`()` | Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a85d5f93453b4e01ab90d50997fd318d8)`() const` | Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1ae83908f23d5366d8a2d354df92977e99)`(const int32 & NewValue)` | Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true.
`public inline FORCEINLINE void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1a89b4eaf3817cc11b3a95d0af7f8e7d2c)`(int32 && NewValue)` | Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemCount`](#structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd)`()` | Clears the value of RequiredItemCount_Optional and sets RequiredItemCount_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RequiredItemCount`](#structFRHAPI__Loot_1a166395286335cd043ae924b2fc2c73d4)`()` | Returns the default value of RequiredItemCount.
`public inline FORCEINLINE int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a564a46e055a3cc26163c228880429bff)`()` | Gets the value of StackLimit_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a00a5d73243530161e17cf69232e82c96)`() const` | Gets the value of StackLimit_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a52dbe433c3e589747d0245e4390eafe4)`(const int32 & DefaultValue) const` | Gets the value of StackLimit_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStackLimit`](#structFRHAPI__Loot_1af0e5090d1c1f32519b739545018baebb)`(int32 & OutValue) const` | Fills OutValue with the value of StackLimit_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1ab971fe74d0d5b51756b261b549d3bd8b)`()` | Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1a24b7eaa73850676ff2ec1c44b3317def)`() const` | Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStackLimit`](#structFRHAPI__Loot_1a5a06b999459a3d64a9b45dfaa893ec08)`(const int32 & NewValue)` | Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true.
`public inline FORCEINLINE void `[`SetStackLimit`](#structFRHAPI__Loot_1a6651df9081cc494c2091ed2065782ca1)`(int32 && NewValue)` | Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true using move semantics.
`public inline void `[`ClearStackLimit`](#structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68)`()` | Clears the value of StackLimit_Optional and sets StackLimit_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_StackLimit`](#structFRHAPI__Loot_1afdd078ea931ed895ace82c0175e0195f)`()` | Returns the default value of StackLimit.
`public inline FORCEINLINE int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a7cf3a787100cdc3abb11f8bb38e8d6f4)`()` | Gets the value of UiHint_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a0e90f7dd08ea86526460c85464ddfb60)`() const` | Gets the value of UiHint_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a14f9f52f1aab7438fabe59ffb77699e6)`(const int32 & DefaultValue) const` | Gets the value of UiHint_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUiHint`](#structFRHAPI__Loot_1a4d4efdf60074db0730e5d03bc49c1398)`(int32 & OutValue) const` | Fills OutValue with the value of UiHint_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1a6fd81666c0e54f01ef54aacaabde9df2)`()` | Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1ac2b00951c50dce490e4fc5f631556304)`() const` | Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUiHint`](#structFRHAPI__Loot_1a5396dcef1883d3b1252eb35b412e037b)`(const int32 & NewValue)` | Sets the value of UiHint_Optional and also sets UiHint_IsSet to true.
`public inline FORCEINLINE void `[`SetUiHint`](#structFRHAPI__Loot_1aac0fae36209afb69e8ef05cbb5bb8b55)`(int32 && NewValue)` | Sets the value of UiHint_Optional and also sets UiHint_IsSet to true using move semantics.
`public inline void `[`ClearUiHint`](#structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666)`()` | Clears the value of UiHint_Optional and sets UiHint_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_UiHint`](#structFRHAPI__Loot_1ac6214b9a5e4b61953085409cc2bf02c8)`()` | Returns the default value of UiHint.
`public inline FORCEINLINE FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1a96cc52da805c37c9725d1245448d5fba)`()` | Gets the value of EffectiveFrom_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1a7df5f4da124128d81916516c3be95273)`() const` | Gets the value of EffectiveFrom_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1aa082a88225c5d673ee11eec59549df7c)`(const FDateTime & DefaultValue) const` | Gets the value of EffectiveFrom_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEffectiveFrom`](#structFRHAPI__Loot_1a8a08a26724521cf65513ff778797221d)`(FDateTime & OutValue) const` | Fills OutValue with the value of EffectiveFrom_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a8ae174a7d0032acbb858420ee78c0616)`()` | Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a2c4f03b9671d61f94382d43aca2a73a9)`() const` | Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1af1697a00ab21fe51146ac95ee69c67d1)`(const FDateTime & NewValue)` | Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true.
`public inline FORCEINLINE void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1a9f1fe5bbf7601bde53f9e9e6a55bb07d)`(FDateTime && NewValue)` | Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true using move semantics.
`public inline void `[`ClearEffectiveFrom`](#structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008)`()` | Clears the value of EffectiveFrom_Optional and sets EffectiveFrom_IsSet to false.
`public inline FORCEINLINE void `[`SetEffectiveFromToNull`](#structFRHAPI__Loot_1a19f1f3d596627b8399e4078c229be36e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEffectiveFromNull`](#structFRHAPI__Loot_1aca0b3579952c9a41cebc8400900f4115)`() const` | Checks whether EffectiveFrom_Optional is set to null.
`public inline FORCEINLINE ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1ac870c64253e2a7bee01c9e1b98cc8282)`()` | Gets the value of QuantityType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a2c63b46f9d3bc6b88c3fe3cb7f4313be)`() const` | Gets the value of QuantityType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a135bc3b68d27f5643919b4f2beb1a503)`(const ERHAPI_QuantityType & DefaultValue) const` | Gets the value of QuantityType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantityType`](#structFRHAPI__Loot_1a73071ddb4cfeee2a0cce5b40b510be95)`(ERHAPI_QuantityType & OutValue) const` | Fills OutValue with the value of QuantityType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1a911008b857fe1eee21907b68dc2339b4)`()` | Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1af7b9de5c492d8612162b06d748b5b75d)`() const` | Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantityType`](#structFRHAPI__Loot_1a436d3c91719c2c52fa672b333e0edb24)`(const ERHAPI_QuantityType & NewValue)` | Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantityType`](#structFRHAPI__Loot_1acc5bc1c84128cd43519c024283bd9e29)`(ERHAPI_QuantityType && NewValue)` | Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true using move semantics.
`public inline void `[`ClearQuantityType`](#structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd)`()` | Clears the value of QuantityType_Optional and sets QuantityType_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1acb21a5048574eb50a6d874268063794f)`()` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a4fd2c72764a4e952402637a2533b4035)`() const` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ab74910988dc2d53b9d19512b7aac7f94)`(const int32 & DefaultValue) const` | Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ae940ad0bd18c8554c2323666b8f259ae)`(int32 & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1a1ef7d42897f433c1d5710211382524ad)`()` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1a4fdc68ea9fd95403e43e996be676c54c)`() const` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ae33c082f5afb48dc94661c429fb15af9)`(const int32 & NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a6d043a7fe0830920c0b190cebe53f4a8)`(int32 && NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.
`public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50)`()` | Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_QuantityMultInventoryItemId`](#structFRHAPI__Loot_1afd24614c85ed3173a377715b0781bf00)`()` | Returns the default value of QuantityMultInventoryItemId.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__Loot_1a1157852361807432b6ac6648f1a4cb0a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__Loot_1a6df2bdd35405fcab06420d4f946d3bea)`() const` | Checks whether QuantityMultInventoryItemId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a2d914fa2e3bf9b7f27120fc5cfc9b5f5)`()` | Gets the value of QuantityMultInventoryItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a78c5494ac37e061cbd6805cdba2d3d28)`() const` | Gets the value of QuantityMultInventoryItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a0c70daa2bfce9e38e6d8908c1d6264f6)`(const FGuid & DefaultValue) const` | Gets the value of QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1aca19212c9547b0045a19e6c1f380e810)`(FGuid & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetQuantityMultInventoryItemUuidOrNull`](#structFRHAPI__Loot_1aa2aadab35f903b389fe396a821187454)`()` | Returns a pointer to QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetQuantityMultInventoryItemUuidOrNull`](#structFRHAPI__Loot_1a5ba8998e9c136ad34c858d6d61065b09)`() const` | Returns a pointer to QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a4ef15fa8d00b404f9b7bdd97c2a69a4a)`(const FGuid & NewValue)` | Sets the value of QuantityMultInventoryItemUuid_Optional and also sets QuantityMultInventoryItemUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a23d186a96eec7fb26bd35278e1ac84b5)`(FGuid && NewValue)` | Sets the value of QuantityMultInventoryItemUuid_Optional and also sets QuantityMultInventoryItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a69be0a85188c51421539df8cf652912b)`()` | Clears the value of QuantityMultInventoryItemUuid_Optional and sets QuantityMultInventoryItemUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemUuidToNull`](#structFRHAPI__Loot_1abf00f916a46de649c50c6a1349458d8d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemUuidNull`](#structFRHAPI__Loot_1a810602095a1aa05d433dff972c438dc6)`() const` | Checks whether QuantityMultInventoryItemUuid_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a6cba12531c9c5c8b2ffe56a3c56387b8)`()` | Gets the value of IsClaimableByClient_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a8eb90a8a149cdbe980bc2649ca6cae43)`() const` | Gets the value of IsClaimableByClient_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1afa9a9ecdfa162d0e76bef0bd1a983027)`(const bool & DefaultValue) const` | Gets the value of IsClaimableByClient_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a42177bdf6c1f2eeaafbd914f70043c82)`(bool & OutValue) const` | Fills OutValue with the value of IsClaimableByClient_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1aadf567c336fcb7f4a42c4f43ea12485b)`()` | Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1abde9f6a565ff109a637eb6f51c05c0c5)`() const` | Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1afdc12debbd1ce8b1d3e4241c9c2f0874)`(const bool & NewValue)` | Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true.
`public inline FORCEINLINE void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1a3ebe28a700c731cc165dba21153ac67e)`(bool && NewValue)` | Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true using move semantics.
`public inline void `[`ClearIsClaimableByClient`](#structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6)`()` | Clears the value of IsClaimableByClient_Optional and sets IsClaimableByClient_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IsClaimableByClient`](#structFRHAPI__Loot_1a5aad5eba8abc9c73d3d0d518c32df176)`()` | Returns the default value of IsClaimableByClient.
`public inline FORCEINLINE int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a7b74ea4715454e64f5b833b918f00367)`()` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1ae1268e65f602c95cf8ccda3d7b08524f)`() const` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1aad5bd01ca71558976eed09b845e06bf9)`(const int32 & DefaultValue) const` | Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTimeFrameId`](#structFRHAPI__Loot_1a22d64481a61e53796bbab7b3f08c9715)`(int32 & OutValue) const` | Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1ac30a0479c7932bd7c8a15ef326a60baa)`()` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1ac3494199dd3e40125587cf787794b505)`() const` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__Loot_1a05b96a2175bdb06279f309e013a5aab6)`(const int32 & NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.
`public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__Loot_1a7a8d6137677c9f2982e4d2a3f5f8dd78)`(int32 && NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.
`public inline void `[`ClearTimeFrameId`](#structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0)`()` | Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TimeFrameId`](#structFRHAPI__Loot_1a8e5748c80cb246fbb83bd9b4618053c0)`()` | Returns the default value of TimeFrameId.
`public inline FORCEINLINE void `[`SetTimeFrameIdToNull`](#structFRHAPI__Loot_1a8588a43e71d9fd6852e04974d8c98750)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTimeFrameIdNull`](#structFRHAPI__Loot_1a125e07a8f5e5da9c964b1de099303c0b)`() const` | Checks whether TimeFrameId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a481caf3e4afa9c8bc23f7a23da6027bc)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1ad49859ff3279621da1ffc42459ee9169)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1ae1df07500f7aea92942771e6b387fe0c)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a4ba8837f65938e527e1cd7582271c87a)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1aecfbafcbd28e1cd3f71eb7a5a2ef09b5)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1a61c90092d50911823c3ee100991c568d)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1aec64f5c8d8da78fddf2215815624a30e)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1af189544f9f8dc19c0733eaa49ef3ee25)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline FORCEINLINE void `[`SetUseInventoryBucketToNull`](#structFRHAPI__Loot_1ac6536cb7af833664c923035ee8c4b941)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsUseInventoryBucketNull`](#structFRHAPI__Loot_1a4817392d7ab28aaf0eba126ccf547d07)`() const` | Checks whether UseInventoryBucket_Optional is set to null.
`public inline FORCEINLINE ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a5da977044d0bf500e02f48a8000c74cd)`()` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1aa04282f6fb275c51577dd13b93dcf476)`() const` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1af58469a75ebf8de75e84be46fccb4d72)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` | Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1ac9acec3fcf1792b2c4827b33bcef9920)`(ERHAPI_XpQuantityTransform & OutValue) const` | Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1a0fdac428ab2f5260d06d2e1f185a504a)`()` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1ab4734fa8000b886e9b11d0671d6fe906)`() const` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1a1a637838923f01f5cfcce45cea0e204a)`(const ERHAPI_XpQuantityTransform & NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.
`public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1a7a95bd3ee9fcd145fafef4cbcdc10f16)`(ERHAPI_XpQuantityTransform && NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.
`public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da)`()` | Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1acfb869f9569405ec705aeb795c3e8097)`()` | Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1af3b31769b64d533e1ed0a1029356cc91)`() const` | Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a595c0cdef85d788cd274cfb438e32146)`(const FString & DefaultValue) const` | Gets the value of CurrentPricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a0f957d9354617a8447dc8d7ed22ca556)`(FString & OutValue) const` | Fills OutValue with the value of CurrentPricePointGuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1ad7af76d5a521b12847afc067e6286504)`()` | Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1a9ef487de86856fcf722841d2acc5d1f7)`() const` | Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1a5ac8447b5e2a2d9b8bcabb7f309eb202)`(const FString & NewValue)` | Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true.
`public inline FORCEINLINE void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1a893cb7314fc81234efc277efadab4d48)`(FString && NewValue)` | Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true using move semantics.
`public inline void `[`ClearCurrentPricePointGuid`](#structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e)`()` | Clears the value of CurrentPricePointGuid_Optional and sets CurrentPricePointGuid_IsSet to false.
`public inline FORCEINLINE void `[`SetCurrentPricePointGuidToNull`](#structFRHAPI__Loot_1ac568baeafbfe0ff0e699a07ad2455cab)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCurrentPricePointGuidNull`](#structFRHAPI__Loot_1a7230a4b4cc1340bdfcfeb8df04aa9eb8)`() const` | Checks whether CurrentPricePointGuid_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a71408ad5746c7e3f6ea8347728adba94)`()` | Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a648df6d4ecf67f905f9ec6ce75448af6)`() const` | Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1af1c2fbba211e5b66ef5e802e103252c4)`(const FString & DefaultValue) const` | Gets the value of PreSalePricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1ab37a389362b51e379e48d168b269d177)`(FString & OutValue) const` | Fills OutValue with the value of PreSalePricePointGuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1a834bb56640c4d1848e789273d1dbbba3)`()` | Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1a2a78a2da655a7284dabc83b76da18786)`() const` | Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1a2f0150b53d19f82e00a3eaf961fedcdd)`(const FString & NewValue)` | Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1a6af2433abb8980ce5ee6cbb506fafbbb)`(FString && NewValue)` | Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true using move semantics.
`public inline void `[`ClearPreSalePricePointGuid`](#structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e)`()` | Clears the value of PreSalePricePointGuid_Optional and sets PreSalePricePointGuid_IsSet to false.
`public inline FORCEINLINE void `[`SetPreSalePricePointGuidToNull`](#structFRHAPI__Loot_1ab7d26b143a0a036b8eb857a75d146a4b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPreSalePricePointGuidNull`](#structFRHAPI__Loot_1aa1f29f27c436bcb58643c08e367b1a68)`() const` | Checks whether PreSalePricePointGuid_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a26d37a71501c8fdf169a520154fdb4b2)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a8830b102f1485b37d189e44a693a9213)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a8bf71e2f05fe2df15928d4d8b70237ef)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Loot_1af109e8531fce2e838578489944d4ea6b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1ab37b5449a80c4ed7a7e54ad0aa585bd4)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1ac6224add3010f87bcc448d74b032fbe5)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Loot_1a2cb189619e9c1d1ef7fbb55f91a19cec)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Loot_1aceb4338cf36feb358841233acae3bc3c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Loot_1a689e1c0c1eb1a6a0a1fb6369550722be)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Loot_1a915974708344a27962c2c7e8620f9e3a)`() const` | Checks whether CacheInfo_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a7a5b58e056c4c268a2e96ac5410acac3)`()` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1ac85e09ccf2194db060894b3cad3d4cd3)`() const` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a6bf839bb7e41e6dbbb66e3b584b9ee24)`(const int32 & DefaultValue) const` | Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a00e00516941c6c97c696824ba44173e4)`(int32 & OutValue) const` | Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1af5481ea26bc429bfe6de37328a93e49c)`()` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1a7a3e6f19d61561b4e74103766b45c507)`() const` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1a2f4992f83495801fe12298a3e992a8d7)`(const int32 & NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.
`public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1ad81d5cef14ba855ad328eb69e2413e52)`(int32 && NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.
`public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df)`()` | Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_HardQuantityMaximum`](#structFRHAPI__Loot_1a751ba6e5145898c16c5c2f79318e1d3c)`()` | Returns the default value of HardQuantityMaximum.
`public inline FORCEINLINE `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a747c28521fa2938740b677c318973400)`()` | Gets the value of Price_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a75a9a9f35840d1054759fff29838393f)`() const` | Gets the value of Price_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a266524fca4352bea0d3198060f581aa5)`(const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & DefaultValue) const` | Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPrice`](#structFRHAPI__Loot_1ab4903c4257fd81240589d4875eb80aa1)`(`[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & OutValue) const` | Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` * `[`GetPriceOrNull`](#structFRHAPI__Loot_1aee3443e63da5935e3b3c93c59e69b8fc)`()` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` * `[`GetPriceOrNull`](#structFRHAPI__Loot_1a8117cdb0456c3a4fb7d93dea8fc9cad3)`() const` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__Loot_1aed798bfd97343fe6dd69171ed351ac40)`(const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__Loot_1a21969f969aa31253a6fb02e7530df8be)`(`[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` && NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.
`public inline void `[`ClearPrice`](#structFRHAPI__Loot_1ab1aa3a168ad71a2d2f93b5a7253f93d5)`()` | Clears the value of Price_Optional and sets Price_IsSet to false.
`public inline FORCEINLINE void `[`SetPriceToNull`](#structFRHAPI__Loot_1a0eeea5972308f551de6d28da1bd27912)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPriceNull`](#structFRHAPI__Loot_1a0386cb0bef0d741e5ec3c898fd840643)`() const` | Checks whether Price_Optional is set to null.

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

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1ab363f0363654f63bec26b57272ba7e0a)`()` <a id="structFRHAPI__Loot_1ab363f0363654f63bec26b57272ba7e0a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a19b2a26a88bcf16503443baa0de9ad97)`() const` <a id="structFRHAPI__Loot_1a19b2a26a88bcf16503443baa0de9ad97"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Loot_1a995847c7afdbf0c0fb5fce238f196a75)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Loot_1a995847c7afdbf0c0fb5fce238f196a75"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Loot_1acb6a7ff99f4e0ac28c0e91340435988f)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Loot_1acb6a7ff99f4e0ac28c0e91340435988f"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1ab2016983b705a10e3001aa94f65ed0a8)`()` <a id="structFRHAPI__Loot_1ab2016983b705a10e3001aa94f65ed0a8"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Loot_1a91f8453b891044179a174546467504c9)`() const` <a id="structFRHAPI__Loot_1a91f8453b891044179a174546467504c9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Loot_1a72f7984eab0725584ae4e67d2de7a66f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Loot_1a72f7984eab0725584ae4e67d2de7a66f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Loot_1a9c556094629ea501cc1eb7ac277469df)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Loot_1a9c556094629ea501cc1eb7ac277469df"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7)`()` <a id="structFRHAPI__Loot_1aa0d5fdee11fa5753a1253b36ae688fe7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1aa35c74640b83211db97b7da3d243fc79)`()` <a id="structFRHAPI__Loot_1aa35c74640b83211db97b7da3d243fc79"></a>

Gets the value of LootUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1a7bfb0a9d1fc3ea45c24e6c3abc4ce8ff)`() const` <a id="structFRHAPI__Loot_1a7bfb0a9d1fc3ea45c24e6c3abc4ce8ff"></a>

Gets the value of LootUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetLootUuid`](#structFRHAPI__Loot_1a3a51496a4261f44b0910554d53887c19)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1a3a51496a4261f44b0910554d53887c19"></a>

Gets the value of LootUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLootUuid`](#structFRHAPI__Loot_1af38d690485eccf35d31ad4b06ba26d27)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1af38d690485eccf35d31ad4b06ba26d27"></a>

Fills OutValue with the value of LootUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetLootUuidOrNull`](#structFRHAPI__Loot_1a0176cfc288d1f77a35969df78d4493dd)`()` <a id="structFRHAPI__Loot_1a0176cfc288d1f77a35969df78d4493dd"></a>

Returns a pointer to LootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetLootUuidOrNull`](#structFRHAPI__Loot_1a825e647a2e7dad86b59e9b55d17871b1)`() const` <a id="structFRHAPI__Loot_1a825e647a2e7dad86b59e9b55d17871b1"></a>

Returns a pointer to LootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLootUuid`](#structFRHAPI__Loot_1a9d312365998c9d47326e7399be776108)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1a9d312365998c9d47326e7399be776108"></a>

Sets the value of LootUuid_Optional and also sets LootUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLootUuid`](#structFRHAPI__Loot_1a3da269309982ecfb4311033c879c9486)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1a3da269309982ecfb4311033c879c9486"></a>

Sets the value of LootUuid_Optional and also sets LootUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearLootUuid`](#structFRHAPI__Loot_1ad0eb5151359a29ff49a600e4e8faa236)`()` <a id="structFRHAPI__Loot_1ad0eb5151359a29ff49a600e4e8faa236"></a>

Clears the value of LootUuid_Optional and sets LootUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLootUuidToNull`](#structFRHAPI__Loot_1a34e2af0b2999cdc87388a080cda1d394)`()` <a id="structFRHAPI__Loot_1a34e2af0b2999cdc87388a080cda1d394"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLootUuidNull`](#structFRHAPI__Loot_1a4edb4179cd669d537123db53f345724c)`() const` <a id="structFRHAPI__Loot_1a4edb4179cd669d537123db53f345724c"></a>

Checks whether LootUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__Loot_1a4f6e173a68e4613f4678c8ef4a9d7a21)`()` <a id="structFRHAPI__Loot_1a4f6e173a68e4613f4678c8ef4a9d7a21"></a>

Gets the value of LootId.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__Loot_1a76a51f3bdc85353b5f04929cd62723b4)`() const` <a id="structFRHAPI__Loot_1a76a51f3bdc85353b5f04929cd62723b4"></a>

Gets the value of LootId.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__Loot_1a9f5cd75e2ffee64861734fb04c3e2ecf)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a9f5cd75e2ffee64861734fb04c3e2ecf"></a>

Sets the value of LootId.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__Loot_1a86b12695905ccd76e9bcf214f3852a74)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a86b12695905ccd76e9bcf214f3852a74"></a>

Sets the value of LootId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__Loot_1a8621485592fe60eba3a4538daa470804)`()` <a id="structFRHAPI__Loot_1a8621485592fe60eba3a4538daa470804"></a>

Returns the default value of LootId.

#### `public inline FORCEINLINE int32 & `[`GetVendorId`](#structFRHAPI__Loot_1ac890e622feca87afca17875ae901955c)`()` <a id="structFRHAPI__Loot_1ac890e622feca87afca17875ae901955c"></a>

Gets the value of VendorId.

#### `public inline FORCEINLINE const int32 & `[`GetVendorId`](#structFRHAPI__Loot_1adb0d46d2edbf89c888e441b9d7b7ff1a)`() const` <a id="structFRHAPI__Loot_1adb0d46d2edbf89c888e441b9d7b7ff1a"></a>

Gets the value of VendorId.

#### `public inline FORCEINLINE void `[`SetVendorId`](#structFRHAPI__Loot_1a295865d7ccf3483d6ccc39d1fac2b216)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a295865d7ccf3483d6ccc39d1fac2b216"></a>

Sets the value of VendorId.

#### `public inline FORCEINLINE void `[`SetVendorId`](#structFRHAPI__Loot_1a1e8116201bbc2e5f766b9d3c0fb199e5)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a1e8116201bbc2e5f766b9d3c0fb199e5"></a>

Sets the value of VendorId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_VendorId`](#structFRHAPI__Loot_1aa37943dcb5be8b7ed83102cad4e9e02f)`()` <a id="structFRHAPI__Loot_1aa37943dcb5be8b7ed83102cad4e9e02f"></a>

Returns the default value of VendorId.

#### `public inline FORCEINLINE FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1aefe1c983e386baafd832e13cd8627dff)`()` <a id="structFRHAPI__Loot_1aefe1c983e386baafd832e13cd8627dff"></a>

Gets the value of VendorUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1a5bf978ced6fd0a21838218299c00b602)`() const` <a id="structFRHAPI__Loot_1a5bf978ced6fd0a21838218299c00b602"></a>

Gets the value of VendorUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetVendorUuid`](#structFRHAPI__Loot_1a5e3b927d2838b34ea1746392bfbb4cb0)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1a5e3b927d2838b34ea1746392bfbb4cb0"></a>

Gets the value of VendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendorUuid`](#structFRHAPI__Loot_1a9b2cb7a7860bdcfdc00d1407e839ee07)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1a9b2cb7a7860bdcfdc00d1407e839ee07"></a>

Fills OutValue with the value of VendorUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Loot_1a26c8d4e8d054ed2143c6602a60bdb702)`()` <a id="structFRHAPI__Loot_1a26c8d4e8d054ed2143c6602a60bdb702"></a>

Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Loot_1ac771b5e34bd5891a22ac0fc206dc914e)`() const` <a id="structFRHAPI__Loot_1ac771b5e34bd5891a22ac0fc206dc914e"></a>

Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendorUuid`](#structFRHAPI__Loot_1adb97f4e1c7a8d17f8a05a867c3860a5a)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1adb97f4e1c7a8d17f8a05a867c3860a5a"></a>

Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendorUuid`](#structFRHAPI__Loot_1aea16ae05084d7af49fc4ca7cc6c14f26)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1aea16ae05084d7af49fc4ca7cc6c14f26"></a>

Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorUuid`](#structFRHAPI__Loot_1ab8eefa8d3e6b848d9ae649f62f42bc77)`()` <a id="structFRHAPI__Loot_1ab8eefa8d3e6b848d9ae649f62f42bc77"></a>

Clears the value of VendorUuid_Optional and sets VendorUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVendorUuidToNull`](#structFRHAPI__Loot_1a531bd6e637d92dd8452dfaff74852caa)`()` <a id="structFRHAPI__Loot_1a531bd6e637d92dd8452dfaff74852caa"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVendorUuidNull`](#structFRHAPI__Loot_1ae4db99dc26e421453877e74e1e75501f)`() const` <a id="structFRHAPI__Loot_1ae4db99dc26e421453877e74e1e75501f"></a>

Checks whether VendorUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__Loot_1ae58ab5773ee65270312935ecf15bd20f)`()` <a id="structFRHAPI__Loot_1ae58ab5773ee65270312935ecf15bd20f"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__Loot_1a947304bea2be3f77fc76e5871cd1a3f1)`() const` <a id="structFRHAPI__Loot_1a947304bea2be3f77fc76e5871cd1a3f1"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__Loot_1ad9c03b96f2afa644497ee4f4d571260d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ad9c03b96f2afa644497ee4f4d571260d"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__Loot_1a24c50e102c048edce3fd9764b6223878)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a24c50e102c048edce3fd9764b6223878"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1add8794403858951f6508fc2e8c23cb4e)`()` <a id="structFRHAPI__Loot_1add8794403858951f6508fc2e8c23cb4e"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__Loot_1ad7714a8f2fdd1b5d90ff6175d1940d25)`() const` <a id="structFRHAPI__Loot_1ad7714a8f2fdd1b5d90ff6175d1940d25"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__Loot_1a6ef8ba57f132f3050f221cd8750bf7e1)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a6ef8ba57f132f3050f221cd8750bf7e1"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__Loot_1a96390f3bcb2694421a31dcfd17b77bce)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a96390f3bcb2694421a31dcfd17b77bce"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac)`()` <a id="structFRHAPI__Loot_1ae7d18acc8c516d75d0698fe73b6514ac"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__Loot_1ace085f242ed73bf1c618d97f716e4efb)`()` <a id="structFRHAPI__Loot_1ace085f242ed73bf1c618d97f716e4efb"></a>

Returns the default value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__Loot_1aaf930be7fda2ebc13d0d8071ddb52524)`()` <a id="structFRHAPI__Loot_1aaf930be7fda2ebc13d0d8071ddb52524"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__Loot_1a34f0861fe4b3b4db54e83a1de0d03ef0)`() const` <a id="structFRHAPI__Loot_1a34f0861fe4b3b4db54e83a1de0d03ef0"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a66b36e8064aec7e26f12d082229893b3)`()` <a id="structFRHAPI__Loot_1a66b36e8064aec7e26f12d082229893b3"></a>

Gets the value of ItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a283db8c450c30c5a6704879479ed0b8e)`() const` <a id="structFRHAPI__Loot_1a283db8c450c30c5a6704879479ed0b8e"></a>

Gets the value of ItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__Loot_1a530136095182eaf5c952865b5de0b2a1)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1a530136095182eaf5c952865b5de0b2a1"></a>

Gets the value of ItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemUuid`](#structFRHAPI__Loot_1adb4a54f1f65fa6a000b449da221e900b)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1adb4a54f1f65fa6a000b449da221e900b"></a>

Fills OutValue with the value of ItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Loot_1ad73754a65bc5d2ce43d926f0ff662653)`()` <a id="structFRHAPI__Loot_1ad73754a65bc5d2ce43d926f0ff662653"></a>

Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Loot_1aed2fef7ab16b76cf49ac7220ef5f1a2e)`() const` <a id="structFRHAPI__Loot_1aed2fef7ab16b76cf49ac7220ef5f1a2e"></a>

Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__Loot_1a7fa6669775c11be7e175e2ed4e2bfe5f)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1a7fa6669775c11be7e175e2ed4e2bfe5f"></a>

Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__Loot_1ad83d4ea7729b53c1e732eb2470cd1384)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1ad83d4ea7729b53c1e732eb2470cd1384"></a>

Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearItemUuid`](#structFRHAPI__Loot_1a7d4d0b4d2020d60a73326ae1a436380e)`()` <a id="structFRHAPI__Loot_1a7d4d0b4d2020d60a73326ae1a436380e"></a>

Clears the value of ItemUuid_Optional and sets ItemUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetItemUuidToNull`](#structFRHAPI__Loot_1a7d9ddc4e11fd3f0ede70c07df6fe81f8)`()` <a id="structFRHAPI__Loot_1a7d9ddc4e11fd3f0ede70c07df6fe81f8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemUuidNull`](#structFRHAPI__Loot_1abc3d692231627dee36c3d35864d3a165)`() const` <a id="structFRHAPI__Loot_1abc3d692231627dee36c3d35864d3a165"></a>

Checks whether ItemUuid_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a72a37201efeda633d244fece5501daed)`()` <a id="structFRHAPI__Loot_1a72a37201efeda633d244fece5501daed"></a>

Gets the value of Item_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a3879778ae007ab7b47d5a67ac3da8683)`() const` <a id="structFRHAPI__Loot_1a3879778ae007ab7b47d5a67ac3da8683"></a>

Gets the value of Item_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & `[`GetItem`](#structFRHAPI__Loot_1a85e652aa120634c20ba156621b7bc56d)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & DefaultValue) const` <a id="structFRHAPI__Loot_1a85e652aa120634c20ba156621b7bc56d"></a>

Gets the value of Item_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItem`](#structFRHAPI__Loot_1aa8a9992ffb95f6b1848feea97bb59665)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & OutValue) const` <a id="structFRHAPI__Loot_1aa8a9992ffb95f6b1848feea97bb59665"></a>

Fills OutValue with the value of Item_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1a42eaf742526b86b73a9bdea0257de122)`()` <a id="structFRHAPI__Loot_1a42eaf742526b86b73a9bdea0257de122"></a>

Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` * `[`GetItemOrNull`](#structFRHAPI__Loot_1ae2a89c9b7a0cce28993f5a02cb2bd888)`() const` <a id="structFRHAPI__Loot_1ae2a89c9b7a0cce28993f5a02cb2bd888"></a>

Returns a pointer to Item_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItem`](#structFRHAPI__Loot_1a5eca5a833a15f05a5243ef438aca94ba)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & NewValue)` <a id="structFRHAPI__Loot_1a5eca5a833a15f05a5243ef438aca94ba"></a>

Sets the value of Item_Optional and also sets Item_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItem`](#structFRHAPI__Loot_1af5b6e4a15366e267614671a4635dadd4)`(`[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` && NewValue)` <a id="structFRHAPI__Loot_1af5b6e4a15366e267614671a4635dadd4"></a>

Sets the value of Item_Optional and also sets Item_IsSet to true using move semantics.

#### `public inline void `[`ClearItem`](#structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8)`()` <a id="structFRHAPI__Loot_1a287c3e4040dbb75274ad22300643d9d8"></a>

Clears the value of Item_Optional and sets Item_IsSet to false.

#### `public inline FORCEINLINE void `[`SetItemToNull`](#structFRHAPI__Loot_1ae03a86b3b771f4a7bfa81579c0468949)`()` <a id="structFRHAPI__Loot_1ae03a86b3b771f4a7bfa81579c0468949"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemNull`](#structFRHAPI__Loot_1af298b7ade7db41b1541a6c22725158cd)`() const` <a id="structFRHAPI__Loot_1af298b7ade7db41b1541a6c22725158cd"></a>

Checks whether Item_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1a61d75fd7f9431e14aa37f9c3014b135f)`()` <a id="structFRHAPI__Loot_1a61d75fd7f9431e14aa37f9c3014b135f"></a>

Gets the value of SubVendorId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1aa03b3f0318c283bcbb7509ad310a66f8)`() const` <a id="structFRHAPI__Loot_1aa03b3f0318c283bcbb7509ad310a66f8"></a>

Gets the value of SubVendorId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetSubVendorId`](#structFRHAPI__Loot_1ac20e0926a20c4a09513f23d24a18e6a1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ac20e0926a20c4a09513f23d24a18e6a1"></a>

Gets the value of SubVendorId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSubVendorId`](#structFRHAPI__Loot_1a44a2d72d5cb367028b5df31845ad5aac)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a44a2d72d5cb367028b5df31845ad5aac"></a>

Fills OutValue with the value of SubVendorId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1a413c43edca09f440ff5c0989f297e798)`()` <a id="structFRHAPI__Loot_1a413c43edca09f440ff5c0989f297e798"></a>

Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetSubVendorIdOrNull`](#structFRHAPI__Loot_1ad5d38ff94c53ebb6648ca333b61d44b6)`() const` <a id="structFRHAPI__Loot_1ad5d38ff94c53ebb6648ca333b61d44b6"></a>

Returns a pointer to SubVendorId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSubVendorId`](#structFRHAPI__Loot_1aa1b4a1cb04d92fdc7f7527d5535fc3a6)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1aa1b4a1cb04d92fdc7f7527d5535fc3a6"></a>

Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSubVendorId`](#structFRHAPI__Loot_1adda202b1f46551f7ab141bbafcd61b65)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1adda202b1f46551f7ab141bbafcd61b65"></a>

Sets the value of SubVendorId_Optional and also sets SubVendorId_IsSet to true using move semantics.

#### `public inline void `[`ClearSubVendorId`](#structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058)`()` <a id="structFRHAPI__Loot_1a79b5893a6149af047f8c0c59c7476058"></a>

Clears the value of SubVendorId_Optional and sets SubVendorId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_SubVendorId`](#structFRHAPI__Loot_1a09236bc5759bd9c37b411931f6e9ad9d)`()` <a id="structFRHAPI__Loot_1a09236bc5759bd9c37b411931f6e9ad9d"></a>

Returns the default value of SubVendorId.

#### `public inline FORCEINLINE void `[`SetSubVendorIdToNull`](#structFRHAPI__Loot_1a4737aad9aab4d6cefe62a105cb46e257)`()` <a id="structFRHAPI__Loot_1a4737aad9aab4d6cefe62a105cb46e257"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSubVendorIdNull`](#structFRHAPI__Loot_1adb1d772e641021a7a8de29c9a5069b85)`() const` <a id="structFRHAPI__Loot_1adb1d772e641021a7a8de29c9a5069b85"></a>

Checks whether SubVendorId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a30fae2528a5639d15964aec3197017fa)`()` <a id="structFRHAPI__Loot_1a30fae2528a5639d15964aec3197017fa"></a>

Gets the value of SubVendorUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a2b65411f1ebbd993591b4566df1a79c6)`() const` <a id="structFRHAPI__Loot_1a2b65411f1ebbd993591b4566df1a79c6"></a>

Gets the value of SubVendorUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetSubVendorUuid`](#structFRHAPI__Loot_1ab6a566b3d313b66e4597ffb252e341c6)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1ab6a566b3d313b66e4597ffb252e341c6"></a>

Gets the value of SubVendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSubVendorUuid`](#structFRHAPI__Loot_1a0ba0e04daf757787bd26f569a64ea7cf)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1a0ba0e04daf757787bd26f569a64ea7cf"></a>

Fills OutValue with the value of SubVendorUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetSubVendorUuidOrNull`](#structFRHAPI__Loot_1a76d96c7a0fd0bb77b7866873ba31c369)`()` <a id="structFRHAPI__Loot_1a76d96c7a0fd0bb77b7866873ba31c369"></a>

Returns a pointer to SubVendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetSubVendorUuidOrNull`](#structFRHAPI__Loot_1a6db579de02c36bdd0578e8b2e23ec191)`() const` <a id="structFRHAPI__Loot_1a6db579de02c36bdd0578e8b2e23ec191"></a>

Returns a pointer to SubVendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSubVendorUuid`](#structFRHAPI__Loot_1abe2f52a31a42e1126d76ef55fb92c450)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1abe2f52a31a42e1126d76ef55fb92c450"></a>

Sets the value of SubVendorUuid_Optional and also sets SubVendorUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSubVendorUuid`](#structFRHAPI__Loot_1a18b04a845a1b189dbf4f2256dc7d13f3)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1a18b04a845a1b189dbf4f2256dc7d13f3"></a>

Sets the value of SubVendorUuid_Optional and also sets SubVendorUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearSubVendorUuid`](#structFRHAPI__Loot_1ae750501163eb9a843eb23a6b1247b8e1)`()` <a id="structFRHAPI__Loot_1ae750501163eb9a843eb23a6b1247b8e1"></a>

Clears the value of SubVendorUuid_Optional and sets SubVendorUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSubVendorUuidToNull`](#structFRHAPI__Loot_1a6f586fa153845b0c440a701fa12e3926)`()` <a id="structFRHAPI__Loot_1a6f586fa153845b0c440a701fa12e3926"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSubVendorUuidNull`](#structFRHAPI__Loot_1a869c7c091125313a27f80d199cb3f605)`() const` <a id="structFRHAPI__Loot_1a869c7c091125313a27f80d199cb3f605"></a>

Checks whether SubVendorUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__Loot_1a2ce46c50457f10a8177072c0ec74bb7e)`()` <a id="structFRHAPI__Loot_1a2ce46c50457f10a8177072c0ec74bb7e"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1a0bd49e5d1e068454e63aa7908a6aee1e)`() const` <a id="structFRHAPI__Loot_1a0bd49e5d1e068454e63aa7908a6aee1e"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__Loot_1ad09359b08b60fe678bbac78c9d8ade8f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ad09359b08b60fe678bbac78c9d8ade8f"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__Loot_1ae1c679229056c1b21b08bd57e7df80fa)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1ae1c679229056c1b21b08bd57e7df80fa"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1ae5068a77b56e09ed74d32813723347df)`()` <a id="structFRHAPI__Loot_1ae5068a77b56e09ed74d32813723347df"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__Loot_1a2acf83082d0302ac618778ee6a222a8e)`() const` <a id="structFRHAPI__Loot_1a2acf83082d0302ac618778ee6a222a8e"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__Loot_1a255220f0aeb9b1afdf10d3196f1c4c37)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a255220f0aeb9b1afdf10d3196f1c4c37"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__Loot_1a4d931c4699f07cd7e37c6be9d9f549c7)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a4d931c4699f07cd7e37c6be9d9f549c7"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51)`()` <a id="structFRHAPI__Loot_1afb0108aec2ba965d46c21f9ff6c63a51"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__Loot_1ae7f3f795ba87603246e61db1e6286ca2)`()` <a id="structFRHAPI__Loot_1ae7f3f795ba87603246e61db1e6286ca2"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a9640cbfde76c0cad198a78b8818a0357)`()` <a id="structFRHAPI__Loot_1a9640cbfde76c0cad198a78b8818a0357"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a68ea6602154e5c1cc9bb912b46c40ee3)`() const` <a id="structFRHAPI__Loot_1a68ea6602154e5c1cc9bb912b46c40ee3"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__Loot_1a86470cbcf64e2e2280480672b6c12a15)`(const ERHAPI_InventorySelector & DefaultValue) const` <a id="structFRHAPI__Loot_1a86470cbcf64e2e2280480672b6c12a15"></a>

Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventorySelectorType`](#structFRHAPI__Loot_1af6a70e482bdd9d5c9d88e8610c5924cc)`(ERHAPI_InventorySelector & OutValue) const` <a id="structFRHAPI__Loot_1af6a70e482bdd9d5c9d88e8610c5924cc"></a>

Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1af62db898a019b0731ee053703fb3478f)`()` <a id="structFRHAPI__Loot_1af62db898a019b0731ee053703fb3478f"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__Loot_1a9a2286a1e9dd43454e099bbea387f1b1)`() const` <a id="structFRHAPI__Loot_1a9a2286a1e9dd43454e099bbea387f1b1"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1a85751845a88ef48119db5ba0e97d49a7)`(const ERHAPI_InventorySelector & NewValue)` <a id="structFRHAPI__Loot_1a85751845a88ef48119db5ba0e97d49a7"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__Loot_1a34dd35abbe65bd4f90439cab302667d1)`(ERHAPI_InventorySelector && NewValue)` <a id="structFRHAPI__Loot_1a34dd35abbe65bd4f90439cab302667d1"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.

#### `public inline void `[`ClearInventorySelectorType`](#structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b)`()` <a id="structFRHAPI__Loot_1a81f1462eb76952ddc9e19bcf35f8772b"></a>

Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a6340dda50f2883b90fb4d0e55541fd9f)`()` <a id="structFRHAPI__Loot_1a6340dda50f2883b90fb4d0e55541fd9f"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a78d0eb75a6b63553f8c59cebab152e48)`() const` <a id="structFRHAPI__Loot_1a78d0eb75a6b63553f8c59cebab152e48"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__Loot_1a326c4cb72a96971e5cba7802ad895912)`(const ERHAPI_InventoryOperation & DefaultValue) const` <a id="structFRHAPI__Loot_1a326c4cb72a96971e5cba7802ad895912"></a>

Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventoryOperation`](#structFRHAPI__Loot_1adadfa7097e55829e1ff5497c6a39776e)`(ERHAPI_InventoryOperation & OutValue) const` <a id="structFRHAPI__Loot_1adadfa7097e55829e1ff5497c6a39776e"></a>

Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1a2c2955cc471c886aafa86e240b778b71)`()` <a id="structFRHAPI__Loot_1a2c2955cc471c886aafa86e240b778b71"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__Loot_1aa0f662404fa6948c0424e3fb7a22e5a9)`() const` <a id="structFRHAPI__Loot_1aa0f662404fa6948c0424e3fb7a22e5a9"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__Loot_1aca127bc1ca202ecb139eadca7b62447d)`(const ERHAPI_InventoryOperation & NewValue)` <a id="structFRHAPI__Loot_1aca127bc1ca202ecb139eadca7b62447d"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__Loot_1ad7806fb11dcd14a60710e6c106f7e845)`(ERHAPI_InventoryOperation && NewValue)` <a id="structFRHAPI__Loot_1ad7806fb11dcd14a60710e6c106f7e845"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryOperation`](#structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68)`()` <a id="structFRHAPI__Loot_1a25c29dbb430d88ad868c1497ebe1fc68"></a>

Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetActive`](#structFRHAPI__Loot_1a04e339ecd404e25e557134747dc187a1)`()` <a id="structFRHAPI__Loot_1a04e339ecd404e25e557134747dc187a1"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__Loot_1a9d7360b992baae2f811c9654247d9c78)`() const` <a id="structFRHAPI__Loot_1a9d7360b992baae2f811c9654247d9c78"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__Loot_1a2f0a93e41e77c50ec55b4beebd9be1ad)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1a2f0a93e41e77c50ec55b4beebd9be1ad"></a>

Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActive`](#structFRHAPI__Loot_1a84fcc370bd851b2978dcb2716f29460a)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1a84fcc370bd851b2978dcb2716f29460a"></a>

Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1aa223a065b1a4e6f948380f08ed7693fe)`()` <a id="structFRHAPI__Loot_1aa223a065b1a4e6f948380f08ed7693fe"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetActiveOrNull`](#structFRHAPI__Loot_1a23447de4128bf5b2f1c89becbd2cad5e)`() const` <a id="structFRHAPI__Loot_1a23447de4128bf5b2f1c89becbd2cad5e"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__Loot_1a786aaf0500c6b200621e8768c65d6643)`(const bool & NewValue)` <a id="structFRHAPI__Loot_1a786aaf0500c6b200621e8768c65d6643"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__Loot_1a06186de8bb84f1498729811810f536ea)`(bool && NewValue)` <a id="structFRHAPI__Loot_1a06186de8bb84f1498729811810f536ea"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true using move semantics.

#### `public inline void `[`ClearActive`](#structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8)`()` <a id="structFRHAPI__Loot_1a0d398c5d970bba65e642c7c38db2e0b8"></a>

Clears the value of Active_Optional and sets Active_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Active`](#structFRHAPI__Loot_1a150eea4c959fa5272fdb3867b44f116e)`()` <a id="structFRHAPI__Loot_1a150eea4c959fa5272fdb3867b44f116e"></a>

Returns the default value of Active.

#### `public inline FORCEINLINE int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a12b35b7bb07313f4f39861d26e480a4e)`()` <a id="structFRHAPI__Loot_1a12b35b7bb07313f4f39861d26e480a4e"></a>

Gets the value of SortOrder_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1ae3793f5647e0c4c711aef6fd7416f2a8)`() const` <a id="structFRHAPI__Loot_1ae3793f5647e0c4c711aef6fd7416f2a8"></a>

Gets the value of SortOrder_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetSortOrder`](#structFRHAPI__Loot_1a05ad0761083d4ae6e47b682acde19838)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a05ad0761083d4ae6e47b682acde19838"></a>

Gets the value of SortOrder_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSortOrder`](#structFRHAPI__Loot_1aa5f5490a7a09d937e2491630ee8650be)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1aa5f5490a7a09d937e2491630ee8650be"></a>

Fills OutValue with the value of SortOrder_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1adf00bc0f96c8bb49e7c8df46034a4f7f)`()` <a id="structFRHAPI__Loot_1adf00bc0f96c8bb49e7c8df46034a4f7f"></a>

Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetSortOrderOrNull`](#structFRHAPI__Loot_1ab7f620a4dd476fd7b4674248c58bf13c)`() const` <a id="structFRHAPI__Loot_1ab7f620a4dd476fd7b4674248c58bf13c"></a>

Returns a pointer to SortOrder_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__Loot_1acfd5d8f8abf4aba66898e01d43ce878a)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1acfd5d8f8abf4aba66898e01d43ce878a"></a>

Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__Loot_1a92de7541ad7f5f1270a39708ca0a8eb2)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a92de7541ad7f5f1270a39708ca0a8eb2"></a>

Sets the value of SortOrder_Optional and also sets SortOrder_IsSet to true using move semantics.

#### `public inline void `[`ClearSortOrder`](#structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955)`()` <a id="structFRHAPI__Loot_1a41a21f428e130b7a7d021536ec455955"></a>

Clears the value of SortOrder_Optional and sets SortOrder_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_SortOrder`](#structFRHAPI__Loot_1ad606afcaab9b4a5d57f9ce932beac89e)`()` <a id="structFRHAPI__Loot_1ad606afcaab9b4a5d57f9ce932beac89e"></a>

Returns the default value of SortOrder.

#### `public inline FORCEINLINE int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1ac9be54d1f2ba7b49c9fe218c0372e814)`()` <a id="structFRHAPI__Loot_1ac9be54d1f2ba7b49c9fe218c0372e814"></a>

Gets the value of DropWeight_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a82592c741cd3c4726ee8f4583cc9756b)`() const` <a id="structFRHAPI__Loot_1a82592c741cd3c4726ee8f4583cc9756b"></a>

Gets the value of DropWeight_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDropWeight`](#structFRHAPI__Loot_1a95d82b835557bc420f99355a411d1bb6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a95d82b835557bc420f99355a411d1bb6"></a>

Gets the value of DropWeight_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDropWeight`](#structFRHAPI__Loot_1a2890b4140c8ae14fc2b85e6cd8adfaff)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a2890b4140c8ae14fc2b85e6cd8adfaff"></a>

Fills OutValue with the value of DropWeight_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1af42d79cd95fc4aa0a8b7db04f7f251db)`()` <a id="structFRHAPI__Loot_1af42d79cd95fc4aa0a8b7db04f7f251db"></a>

Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDropWeightOrNull`](#structFRHAPI__Loot_1a90db64110c10333da0514d3657a5ebc8)`() const` <a id="structFRHAPI__Loot_1a90db64110c10333da0514d3657a5ebc8"></a>

Returns a pointer to DropWeight_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDropWeight`](#structFRHAPI__Loot_1a78fb4d2205765d699b6d8d0947e9ed4e)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a78fb4d2205765d699b6d8d0947e9ed4e"></a>

Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDropWeight`](#structFRHAPI__Loot_1a0b420cec510c465c8bc56bcda4c2e2bf)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a0b420cec510c465c8bc56bcda4c2e2bf"></a>

Sets the value of DropWeight_Optional and also sets DropWeight_IsSet to true using move semantics.

#### `public inline void `[`ClearDropWeight`](#structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412)`()` <a id="structFRHAPI__Loot_1a56b9f2775876a68ac240381cd6646412"></a>

Clears the value of DropWeight_Optional and sets DropWeight_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DropWeight`](#structFRHAPI__Loot_1a06abdba47623d5e909698490aa3ac6e3)`()` <a id="structFRHAPI__Loot_1a06abdba47623d5e909698490aa3ac6e3"></a>

Returns the default value of DropWeight.

#### `public inline FORCEINLINE bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1ae931cdcfdb85174426a1c93f70f317a8)`()` <a id="structFRHAPI__Loot_1ae931cdcfdb85174426a1c93f70f317a8"></a>

Gets the value of FillInNewOrder_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1ad120b7a36484f2af79f10781e79404ec)`() const` <a id="structFRHAPI__Loot_1ad120b7a36484f2af79f10781e79404ec"></a>

Gets the value of FillInNewOrder_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetFillInNewOrder`](#structFRHAPI__Loot_1af597ca4a26f61206104b14cf7be66214)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1af597ca4a26f61206104b14cf7be66214"></a>

Gets the value of FillInNewOrder_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFillInNewOrder`](#structFRHAPI__Loot_1a30afda87ba60e3fad43785f53c706bc3)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1a30afda87ba60e3fad43785f53c706bc3"></a>

Fills OutValue with the value of FillInNewOrder_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1a523182f8cb27bb167c4f0e6667041c0c)`()` <a id="structFRHAPI__Loot_1a523182f8cb27bb167c4f0e6667041c0c"></a>

Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetFillInNewOrderOrNull`](#structFRHAPI__Loot_1af1ac96a26b92512ef9d7c444c8f7bf91)`() const` <a id="structFRHAPI__Loot_1af1ac96a26b92512ef9d7c444c8f7bf91"></a>

Returns a pointer to FillInNewOrder_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a1c7a7050349d9c7543e5fcfb8467e1ea)`(const bool & NewValue)` <a id="structFRHAPI__Loot_1a1c7a7050349d9c7543e5fcfb8467e1ea"></a>

Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFillInNewOrder`](#structFRHAPI__Loot_1a5f86c2e47c18de8f2d1f7cc8223b85b0)`(bool && NewValue)` <a id="structFRHAPI__Loot_1a5f86c2e47c18de8f2d1f7cc8223b85b0"></a>

Sets the value of FillInNewOrder_Optional and also sets FillInNewOrder_IsSet to true using move semantics.

#### `public inline void `[`ClearFillInNewOrder`](#structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb)`()` <a id="structFRHAPI__Loot_1a0041c640e6cb438e7a64c42e4a1aaabb"></a>

Clears the value of FillInNewOrder_Optional and sets FillInNewOrder_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_FillInNewOrder`](#structFRHAPI__Loot_1a5c45a81746b7819183921ed7368a8465)`()` <a id="structFRHAPI__Loot_1a5c45a81746b7819183921ed7368a8465"></a>

Returns the default value of FillInNewOrder.

#### `public inline FORCEINLINE bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1afc36abd2816d87f90abb6afaa79277de)`()` <a id="structFRHAPI__Loot_1afc36abd2816d87f90abb6afaa79277de"></a>

Gets the value of AllowPartialBundles_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a07778097887526afa8f22ddafc61c721)`() const` <a id="structFRHAPI__Loot_1a07778097887526afa8f22ddafc61c721"></a>

Gets the value of AllowPartialBundles_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a953cbb5f72337eadd40d876851d9067c)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1a953cbb5f72337eadd40d876851d9067c"></a>

Gets the value of AllowPartialBundles_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllowPartialBundles`](#structFRHAPI__Loot_1a62e5cccc83ad55ac30ef083cbe9f5afb)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1a62e5cccc83ad55ac30ef083cbe9f5afb"></a>

Fills OutValue with the value of AllowPartialBundles_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a21a9836c1a73b768d052c733be357377)`()` <a id="structFRHAPI__Loot_1a21a9836c1a73b768d052c733be357377"></a>

Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAllowPartialBundlesOrNull`](#structFRHAPI__Loot_1a49e50dcfa1fca690287e0958e97e3ffc)`() const` <a id="structFRHAPI__Loot_1a49e50dcfa1fca690287e0958e97e3ffc"></a>

Returns a pointer to AllowPartialBundles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1a61dbdd12cdf0ac68be0dfab7369108c6)`(const bool & NewValue)` <a id="structFRHAPI__Loot_1a61dbdd12cdf0ac68be0dfab7369108c6"></a>

Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllowPartialBundles`](#structFRHAPI__Loot_1a1bf281c20bd85292162dee7613a17641)`(bool && NewValue)` <a id="structFRHAPI__Loot_1a1bf281c20bd85292162dee7613a17641"></a>

Sets the value of AllowPartialBundles_Optional and also sets AllowPartialBundles_IsSet to true using move semantics.

#### `public inline void `[`ClearAllowPartialBundles`](#structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95)`()` <a id="structFRHAPI__Loot_1a343ba6e659d1bdddc71f62a2490e9f95"></a>

Clears the value of AllowPartialBundles_Optional and sets AllowPartialBundles_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AllowPartialBundles`](#structFRHAPI__Loot_1aa1d6a84f49d6021ddc67fc4773b56cd6)`()` <a id="structFRHAPI__Loot_1aa1d6a84f49d6021ddc67fc4773b56cd6"></a>

Returns the default value of AllowPartialBundles.

#### `public inline FORCEINLINE int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a3add563691f9fbcbabaa572e21be4e2a)`()` <a id="structFRHAPI__Loot_1a3add563691f9fbcbabaa572e21be4e2a"></a>

Gets the value of RequiredItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1aac02a94607ccd4d99b5452b9392f5085)`() const` <a id="structFRHAPI__Loot_1aac02a94607ccd4d99b5452b9392f5085"></a>

Gets the value of RequiredItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRequiredItemId`](#structFRHAPI__Loot_1a145d68a7303b451e4d7499c4dc3edf29)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a145d68a7303b451e4d7499c4dc3edf29"></a>

Gets the value of RequiredItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRequiredItemId`](#structFRHAPI__Loot_1abaa83fc47a1927b7da43d930e8abebaf)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1abaa83fc47a1927b7da43d930e8abebaf"></a>

Fills OutValue with the value of RequiredItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1a47d335578cc53fc45d30428bd9b03e89)`()` <a id="structFRHAPI__Loot_1a47d335578cc53fc45d30428bd9b03e89"></a>

Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetRequiredItemIdOrNull`](#structFRHAPI__Loot_1af68b432f701747a98f12be53e3a0a9ee)`() const` <a id="structFRHAPI__Loot_1af68b432f701747a98f12be53e3a0a9ee"></a>

Returns a pointer to RequiredItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRequiredItemId`](#structFRHAPI__Loot_1a130fade1bfd8d9e826f7f824167dee50)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a130fade1bfd8d9e826f7f824167dee50"></a>

Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRequiredItemId`](#structFRHAPI__Loot_1ab1f7e13346b389507587dfb1fa146ea7)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1ab1f7e13346b389507587dfb1fa146ea7"></a>

Sets the value of RequiredItemId_Optional and also sets RequiredItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemId`](#structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181)`()` <a id="structFRHAPI__Loot_1a488fcbe7cb1876ab47e2ded062c11181"></a>

Clears the value of RequiredItemId_Optional and sets RequiredItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RequiredItemId`](#structFRHAPI__Loot_1a2a068de17f2ffd65c0a415c07e8ef6a2)`()` <a id="structFRHAPI__Loot_1a2a068de17f2ffd65c0a415c07e8ef6a2"></a>

Returns the default value of RequiredItemId.

#### `public inline FORCEINLINE void `[`SetRequiredItemIdToNull`](#structFRHAPI__Loot_1afe19de16239ee0780159a15a0bc5545a)`()` <a id="structFRHAPI__Loot_1afe19de16239ee0780159a15a0bc5545a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRequiredItemIdNull`](#structFRHAPI__Loot_1a332948a6c0d16e5a0cd7194e1f5e914f)`() const` <a id="structFRHAPI__Loot_1a332948a6c0d16e5a0cd7194e1f5e914f"></a>

Checks whether RequiredItemId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1acb8a525346087121b0db575fbfed798b)`()` <a id="structFRHAPI__Loot_1acb8a525346087121b0db575fbfed798b"></a>

Gets the value of RequiredItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1ace31180a0c6ba1be0bb59cb1ffe3f3d6)`() const` <a id="structFRHAPI__Loot_1ace31180a0c6ba1be0bb59cb1ffe3f3d6"></a>

Gets the value of RequiredItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a4cff4ae029ef69581874d8f634cfed19)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1a4cff4ae029ef69581874d8f634cfed19"></a>

Gets the value of RequiredItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRequiredItemUuid`](#structFRHAPI__Loot_1a81f4ff7151681786a64ff531a06799cd)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1a81f4ff7151681786a64ff531a06799cd"></a>

Fills OutValue with the value of RequiredItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetRequiredItemUuidOrNull`](#structFRHAPI__Loot_1a1852dfd8127ea601fb59638c736f9721)`()` <a id="structFRHAPI__Loot_1a1852dfd8127ea601fb59638c736f9721"></a>

Returns a pointer to RequiredItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetRequiredItemUuidOrNull`](#structFRHAPI__Loot_1a59d70c9125a403e02bb4fd58792c1ec8)`() const` <a id="structFRHAPI__Loot_1a59d70c9125a403e02bb4fd58792c1ec8"></a>

Returns a pointer to RequiredItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRequiredItemUuid`](#structFRHAPI__Loot_1ab777c05e243056cc75de51ce180c0169)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1ab777c05e243056cc75de51ce180c0169"></a>

Sets the value of RequiredItemUuid_Optional and also sets RequiredItemUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRequiredItemUuid`](#structFRHAPI__Loot_1abf8c713fb2e2d508465e8cb93f2b2acb)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1abf8c713fb2e2d508465e8cb93f2b2acb"></a>

Sets the value of RequiredItemUuid_Optional and also sets RequiredItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemUuid`](#structFRHAPI__Loot_1aa41e02a9d9dd29c3497869a31d64b977)`()` <a id="structFRHAPI__Loot_1aa41e02a9d9dd29c3497869a31d64b977"></a>

Clears the value of RequiredItemUuid_Optional and sets RequiredItemUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRequiredItemUuidToNull`](#structFRHAPI__Loot_1a423d5d2b3429b686eb32b2d2063ccd56)`()` <a id="structFRHAPI__Loot_1a423d5d2b3429b686eb32b2d2063ccd56"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRequiredItemUuidNull`](#structFRHAPI__Loot_1a68c71289e5bc0f41bd5eddd22bb956e3)`() const` <a id="structFRHAPI__Loot_1a68c71289e5bc0f41bd5eddd22bb956e3"></a>

Checks whether RequiredItemUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1affc263a8e3804fdc7d9dfc894007c7e1)`()` <a id="structFRHAPI__Loot_1affc263a8e3804fdc7d9dfc894007c7e1"></a>

Gets the value of RequiredItemCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a6954d5bd7ea06ee0d35a67619995b9d1)`() const` <a id="structFRHAPI__Loot_1a6954d5bd7ea06ee0d35a67619995b9d1"></a>

Gets the value of RequiredItemCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRequiredItemCount`](#structFRHAPI__Loot_1ade374b0c73c187e2bf3fa82c78021a65)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ade374b0c73c187e2bf3fa82c78021a65"></a>

Gets the value of RequiredItemCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRequiredItemCount`](#structFRHAPI__Loot_1a23dde8ddea7991db0a5c920e034d7820)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a23dde8ddea7991db0a5c920e034d7820"></a>

Fills OutValue with the value of RequiredItemCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a10bbbebffb851b7b5e042060481d999a)`()` <a id="structFRHAPI__Loot_1a10bbbebffb851b7b5e042060481d999a"></a>

Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetRequiredItemCountOrNull`](#structFRHAPI__Loot_1a85d5f93453b4e01ab90d50997fd318d8)`() const` <a id="structFRHAPI__Loot_1a85d5f93453b4e01ab90d50997fd318d8"></a>

Returns a pointer to RequiredItemCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1ae83908f23d5366d8a2d354df92977e99)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1ae83908f23d5366d8a2d354df92977e99"></a>

Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRequiredItemCount`](#structFRHAPI__Loot_1a89b4eaf3817cc11b3a95d0af7f8e7d2c)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a89b4eaf3817cc11b3a95d0af7f8e7d2c"></a>

Sets the value of RequiredItemCount_Optional and also sets RequiredItemCount_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemCount`](#structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd)`()` <a id="structFRHAPI__Loot_1a1562a07810c78bd35faf79f6028a63fd"></a>

Clears the value of RequiredItemCount_Optional and sets RequiredItemCount_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RequiredItemCount`](#structFRHAPI__Loot_1a166395286335cd043ae924b2fc2c73d4)`()` <a id="structFRHAPI__Loot_1a166395286335cd043ae924b2fc2c73d4"></a>

Returns the default value of RequiredItemCount.

#### `public inline FORCEINLINE int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a564a46e055a3cc26163c228880429bff)`()` <a id="structFRHAPI__Loot_1a564a46e055a3cc26163c228880429bff"></a>

Gets the value of StackLimit_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a00a5d73243530161e17cf69232e82c96)`() const` <a id="structFRHAPI__Loot_1a00a5d73243530161e17cf69232e82c96"></a>

Gets the value of StackLimit_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStackLimit`](#structFRHAPI__Loot_1a52dbe433c3e589747d0245e4390eafe4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a52dbe433c3e589747d0245e4390eafe4"></a>

Gets the value of StackLimit_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStackLimit`](#structFRHAPI__Loot_1af0e5090d1c1f32519b739545018baebb)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1af0e5090d1c1f32519b739545018baebb"></a>

Fills OutValue with the value of StackLimit_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1ab971fe74d0d5b51756b261b549d3bd8b)`()` <a id="structFRHAPI__Loot_1ab971fe74d0d5b51756b261b549d3bd8b"></a>

Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStackLimitOrNull`](#structFRHAPI__Loot_1a24b7eaa73850676ff2ec1c44b3317def)`() const` <a id="structFRHAPI__Loot_1a24b7eaa73850676ff2ec1c44b3317def"></a>

Returns a pointer to StackLimit_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStackLimit`](#structFRHAPI__Loot_1a5a06b999459a3d64a9b45dfaa893ec08)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a5a06b999459a3d64a9b45dfaa893ec08"></a>

Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStackLimit`](#structFRHAPI__Loot_1a6651df9081cc494c2091ed2065782ca1)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a6651df9081cc494c2091ed2065782ca1"></a>

Sets the value of StackLimit_Optional and also sets StackLimit_IsSet to true using move semantics.

#### `public inline void `[`ClearStackLimit`](#structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68)`()` <a id="structFRHAPI__Loot_1a43dda814136109aadf6b5d9e7ae36a68"></a>

Clears the value of StackLimit_Optional and sets StackLimit_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_StackLimit`](#structFRHAPI__Loot_1afdd078ea931ed895ace82c0175e0195f)`()` <a id="structFRHAPI__Loot_1afdd078ea931ed895ace82c0175e0195f"></a>

Returns the default value of StackLimit.

#### `public inline FORCEINLINE int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a7cf3a787100cdc3abb11f8bb38e8d6f4)`()` <a id="structFRHAPI__Loot_1a7cf3a787100cdc3abb11f8bb38e8d6f4"></a>

Gets the value of UiHint_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a0e90f7dd08ea86526460c85464ddfb60)`() const` <a id="structFRHAPI__Loot_1a0e90f7dd08ea86526460c85464ddfb60"></a>

Gets the value of UiHint_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetUiHint`](#structFRHAPI__Loot_1a14f9f52f1aab7438fabe59ffb77699e6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a14f9f52f1aab7438fabe59ffb77699e6"></a>

Gets the value of UiHint_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUiHint`](#structFRHAPI__Loot_1a4d4efdf60074db0730e5d03bc49c1398)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a4d4efdf60074db0730e5d03bc49c1398"></a>

Fills OutValue with the value of UiHint_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1a6fd81666c0e54f01ef54aacaabde9df2)`()` <a id="structFRHAPI__Loot_1a6fd81666c0e54f01ef54aacaabde9df2"></a>

Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetUiHintOrNull`](#structFRHAPI__Loot_1ac2b00951c50dce490e4fc5f631556304)`() const` <a id="structFRHAPI__Loot_1ac2b00951c50dce490e4fc5f631556304"></a>

Returns a pointer to UiHint_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUiHint`](#structFRHAPI__Loot_1a5396dcef1883d3b1252eb35b412e037b)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a5396dcef1883d3b1252eb35b412e037b"></a>

Sets the value of UiHint_Optional and also sets UiHint_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUiHint`](#structFRHAPI__Loot_1aac0fae36209afb69e8ef05cbb5bb8b55)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1aac0fae36209afb69e8ef05cbb5bb8b55"></a>

Sets the value of UiHint_Optional and also sets UiHint_IsSet to true using move semantics.

#### `public inline void `[`ClearUiHint`](#structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666)`()` <a id="structFRHAPI__Loot_1adc42e15214e2fbcd3b9c2ee28153f666"></a>

Clears the value of UiHint_Optional and sets UiHint_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_UiHint`](#structFRHAPI__Loot_1ac6214b9a5e4b61953085409cc2bf02c8)`()` <a id="structFRHAPI__Loot_1ac6214b9a5e4b61953085409cc2bf02c8"></a>

Returns the default value of UiHint.

#### `public inline FORCEINLINE FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1a96cc52da805c37c9725d1245448d5fba)`()` <a id="structFRHAPI__Loot_1a96cc52da805c37c9725d1245448d5fba"></a>

Gets the value of EffectiveFrom_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1a7df5f4da124128d81916516c3be95273)`() const` <a id="structFRHAPI__Loot_1a7df5f4da124128d81916516c3be95273"></a>

Gets the value of EffectiveFrom_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEffectiveFrom`](#structFRHAPI__Loot_1aa082a88225c5d673ee11eec59549df7c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__Loot_1aa082a88225c5d673ee11eec59549df7c"></a>

Gets the value of EffectiveFrom_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEffectiveFrom`](#structFRHAPI__Loot_1a8a08a26724521cf65513ff778797221d)`(FDateTime & OutValue) const` <a id="structFRHAPI__Loot_1a8a08a26724521cf65513ff778797221d"></a>

Fills OutValue with the value of EffectiveFrom_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a8ae174a7d0032acbb858420ee78c0616)`()` <a id="structFRHAPI__Loot_1a8ae174a7d0032acbb858420ee78c0616"></a>

Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetEffectiveFromOrNull`](#structFRHAPI__Loot_1a2c4f03b9671d61f94382d43aca2a73a9)`() const` <a id="structFRHAPI__Loot_1a2c4f03b9671d61f94382d43aca2a73a9"></a>

Returns a pointer to EffectiveFrom_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1af1697a00ab21fe51146ac95ee69c67d1)`(const FDateTime & NewValue)` <a id="structFRHAPI__Loot_1af1697a00ab21fe51146ac95ee69c67d1"></a>

Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEffectiveFrom`](#structFRHAPI__Loot_1a9f1fe5bbf7601bde53f9e9e6a55bb07d)`(FDateTime && NewValue)` <a id="structFRHAPI__Loot_1a9f1fe5bbf7601bde53f9e9e6a55bb07d"></a>

Sets the value of EffectiveFrom_Optional and also sets EffectiveFrom_IsSet to true using move semantics.

#### `public inline void `[`ClearEffectiveFrom`](#structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008)`()` <a id="structFRHAPI__Loot_1a60c3ccc74ab75b57706c6a193fb97008"></a>

Clears the value of EffectiveFrom_Optional and sets EffectiveFrom_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEffectiveFromToNull`](#structFRHAPI__Loot_1a19f1f3d596627b8399e4078c229be36e)`()` <a id="structFRHAPI__Loot_1a19f1f3d596627b8399e4078c229be36e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEffectiveFromNull`](#structFRHAPI__Loot_1aca0b3579952c9a41cebc8400900f4115)`() const` <a id="structFRHAPI__Loot_1aca0b3579952c9a41cebc8400900f4115"></a>

Checks whether EffectiveFrom_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1ac870c64253e2a7bee01c9e1b98cc8282)`()` <a id="structFRHAPI__Loot_1ac870c64253e2a7bee01c9e1b98cc8282"></a>

Gets the value of QuantityType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a2c63b46f9d3bc6b88c3fe3cb7f4313be)`() const` <a id="structFRHAPI__Loot_1a2c63b46f9d3bc6b88c3fe3cb7f4313be"></a>

Gets the value of QuantityType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_QuantityType & `[`GetQuantityType`](#structFRHAPI__Loot_1a135bc3b68d27f5643919b4f2beb1a503)`(const ERHAPI_QuantityType & DefaultValue) const` <a id="structFRHAPI__Loot_1a135bc3b68d27f5643919b4f2beb1a503"></a>

Gets the value of QuantityType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantityType`](#structFRHAPI__Loot_1a73071ddb4cfeee2a0cce5b40b510be95)`(ERHAPI_QuantityType & OutValue) const` <a id="structFRHAPI__Loot_1a73071ddb4cfeee2a0cce5b40b510be95"></a>

Fills OutValue with the value of QuantityType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1a911008b857fe1eee21907b68dc2339b4)`()` <a id="structFRHAPI__Loot_1a911008b857fe1eee21907b68dc2339b4"></a>

Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_QuantityType * `[`GetQuantityTypeOrNull`](#structFRHAPI__Loot_1af7b9de5c492d8612162b06d748b5b75d)`() const` <a id="structFRHAPI__Loot_1af7b9de5c492d8612162b06d748b5b75d"></a>

Returns a pointer to QuantityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantityType`](#structFRHAPI__Loot_1a436d3c91719c2c52fa672b333e0edb24)`(const ERHAPI_QuantityType & NewValue)` <a id="structFRHAPI__Loot_1a436d3c91719c2c52fa672b333e0edb24"></a>

Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantityType`](#structFRHAPI__Loot_1acc5bc1c84128cd43519c024283bd9e29)`(ERHAPI_QuantityType && NewValue)` <a id="structFRHAPI__Loot_1acc5bc1c84128cd43519c024283bd9e29"></a>

Sets the value of QuantityType_Optional and also sets QuantityType_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityType`](#structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd)`()` <a id="structFRHAPI__Loot_1aaaa1b44c90a587da748f686ab192cedd"></a>

Clears the value of QuantityType_Optional and sets QuantityType_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1acb21a5048574eb50a6d874268063794f)`()` <a id="structFRHAPI__Loot_1acb21a5048574eb50a6d874268063794f"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a4fd2c72764a4e952402637a2533b4035)`() const` <a id="structFRHAPI__Loot_1a4fd2c72764a4e952402637a2533b4035"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ab74910988dc2d53b9d19512b7aac7f94)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1ab74910988dc2d53b9d19512b7aac7f94"></a>

Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ae940ad0bd18c8554c2323666b8f259ae)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1ae940ad0bd18c8554c2323666b8f259ae"></a>

Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1a1ef7d42897f433c1d5710211382524ad)`()` <a id="structFRHAPI__Loot_1a1ef7d42897f433c1d5710211382524ad"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__Loot_1a4fdc68ea9fd95403e43e996be676c54c)`() const` <a id="structFRHAPI__Loot_1a4fdc68ea9fd95403e43e996be676c54c"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ae33c082f5afb48dc94661c429fb15af9)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1ae33c082f5afb48dc94661c429fb15af9"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__Loot_1a6d043a7fe0830920c0b190cebe53f4a8)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a6d043a7fe0830920c0b190cebe53f4a8"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50)`()` <a id="structFRHAPI__Loot_1ab739ef0b153c66e713663ee8e4556f50"></a>

Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_QuantityMultInventoryItemId`](#structFRHAPI__Loot_1afd24614c85ed3173a377715b0781bf00)`()` <a id="structFRHAPI__Loot_1afd24614c85ed3173a377715b0781bf00"></a>

Returns the default value of QuantityMultInventoryItemId.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__Loot_1a1157852361807432b6ac6648f1a4cb0a)`()` <a id="structFRHAPI__Loot_1a1157852361807432b6ac6648f1a4cb0a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__Loot_1a6df2bdd35405fcab06420d4f946d3bea)`() const` <a id="structFRHAPI__Loot_1a6df2bdd35405fcab06420d4f946d3bea"></a>

Checks whether QuantityMultInventoryItemId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a2d914fa2e3bf9b7f27120fc5cfc9b5f5)`()` <a id="structFRHAPI__Loot_1a2d914fa2e3bf9b7f27120fc5cfc9b5f5"></a>

Gets the value of QuantityMultInventoryItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a78c5494ac37e061cbd6805cdba2d3d28)`() const` <a id="structFRHAPI__Loot_1a78c5494ac37e061cbd6805cdba2d3d28"></a>

Gets the value of QuantityMultInventoryItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a0c70daa2bfce9e38e6d8908c1d6264f6)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Loot_1a0c70daa2bfce9e38e6d8908c1d6264f6"></a>

Gets the value of QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1aca19212c9547b0045a19e6c1f380e810)`(FGuid & OutValue) const` <a id="structFRHAPI__Loot_1aca19212c9547b0045a19e6c1f380e810"></a>

Fills OutValue with the value of QuantityMultInventoryItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetQuantityMultInventoryItemUuidOrNull`](#structFRHAPI__Loot_1aa2aadab35f903b389fe396a821187454)`()` <a id="structFRHAPI__Loot_1aa2aadab35f903b389fe396a821187454"></a>

Returns a pointer to QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetQuantityMultInventoryItemUuidOrNull`](#structFRHAPI__Loot_1a5ba8998e9c136ad34c858d6d61065b09)`() const` <a id="structFRHAPI__Loot_1a5ba8998e9c136ad34c858d6d61065b09"></a>

Returns a pointer to QuantityMultInventoryItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a4ef15fa8d00b404f9b7bdd97c2a69a4a)`(const FGuid & NewValue)` <a id="structFRHAPI__Loot_1a4ef15fa8d00b404f9b7bdd97c2a69a4a"></a>

Sets the value of QuantityMultInventoryItemUuid_Optional and also sets QuantityMultInventoryItemUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a23d186a96eec7fb26bd35278e1ac84b5)`(FGuid && NewValue)` <a id="structFRHAPI__Loot_1a23d186a96eec7fb26bd35278e1ac84b5"></a>

Sets the value of QuantityMultInventoryItemUuid_Optional and also sets QuantityMultInventoryItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityMultInventoryItemUuid`](#structFRHAPI__Loot_1a69be0a85188c51421539df8cf652912b)`()` <a id="structFRHAPI__Loot_1a69be0a85188c51421539df8cf652912b"></a>

Clears the value of QuantityMultInventoryItemUuid_Optional and sets QuantityMultInventoryItemUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemUuidToNull`](#structFRHAPI__Loot_1abf00f916a46de649c50c6a1349458d8d)`()` <a id="structFRHAPI__Loot_1abf00f916a46de649c50c6a1349458d8d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemUuidNull`](#structFRHAPI__Loot_1a810602095a1aa05d433dff972c438dc6)`() const` <a id="structFRHAPI__Loot_1a810602095a1aa05d433dff972c438dc6"></a>

Checks whether QuantityMultInventoryItemUuid_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a6cba12531c9c5c8b2ffe56a3c56387b8)`()` <a id="structFRHAPI__Loot_1a6cba12531c9c5c8b2ffe56a3c56387b8"></a>

Gets the value of IsClaimableByClient_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a8eb90a8a149cdbe980bc2649ca6cae43)`() const` <a id="structFRHAPI__Loot_1a8eb90a8a149cdbe980bc2649ca6cae43"></a>

Gets the value of IsClaimableByClient_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1afa9a9ecdfa162d0e76bef0bd1a983027)`(const bool & DefaultValue) const` <a id="structFRHAPI__Loot_1afa9a9ecdfa162d0e76bef0bd1a983027"></a>

Gets the value of IsClaimableByClient_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIsClaimableByClient`](#structFRHAPI__Loot_1a42177bdf6c1f2eeaafbd914f70043c82)`(bool & OutValue) const` <a id="structFRHAPI__Loot_1a42177bdf6c1f2eeaafbd914f70043c82"></a>

Fills OutValue with the value of IsClaimableByClient_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1aadf567c336fcb7f4a42c4f43ea12485b)`()` <a id="structFRHAPI__Loot_1aadf567c336fcb7f4a42c4f43ea12485b"></a>

Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIsClaimableByClientOrNull`](#structFRHAPI__Loot_1abde9f6a565ff109a637eb6f51c05c0c5)`() const` <a id="structFRHAPI__Loot_1abde9f6a565ff109a637eb6f51c05c0c5"></a>

Returns a pointer to IsClaimableByClient_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1afdc12debbd1ce8b1d3e4241c9c2f0874)`(const bool & NewValue)` <a id="structFRHAPI__Loot_1afdc12debbd1ce8b1d3e4241c9c2f0874"></a>

Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIsClaimableByClient`](#structFRHAPI__Loot_1a3ebe28a700c731cc165dba21153ac67e)`(bool && NewValue)` <a id="structFRHAPI__Loot_1a3ebe28a700c731cc165dba21153ac67e"></a>

Sets the value of IsClaimableByClient_Optional and also sets IsClaimableByClient_IsSet to true using move semantics.

#### `public inline void `[`ClearIsClaimableByClient`](#structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6)`()` <a id="structFRHAPI__Loot_1a6ea498ee374a33944d629d4e884c13d6"></a>

Clears the value of IsClaimableByClient_Optional and sets IsClaimableByClient_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IsClaimableByClient`](#structFRHAPI__Loot_1a5aad5eba8abc9c73d3d0d518c32df176)`()` <a id="structFRHAPI__Loot_1a5aad5eba8abc9c73d3d0d518c32df176"></a>

Returns the default value of IsClaimableByClient.

#### `public inline FORCEINLINE int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1a7b74ea4715454e64f5b833b918f00367)`()` <a id="structFRHAPI__Loot_1a7b74ea4715454e64f5b833b918f00367"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1ae1268e65f602c95cf8ccda3d7b08524f)`() const` <a id="structFRHAPI__Loot_1ae1268e65f602c95cf8ccda3d7b08524f"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__Loot_1aad5bd01ca71558976eed09b845e06bf9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1aad5bd01ca71558976eed09b845e06bf9"></a>

Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTimeFrameId`](#structFRHAPI__Loot_1a22d64481a61e53796bbab7b3f08c9715)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a22d64481a61e53796bbab7b3f08c9715"></a>

Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1ac30a0479c7932bd7c8a15ef326a60baa)`()` <a id="structFRHAPI__Loot_1ac30a0479c7932bd7c8a15ef326a60baa"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__Loot_1ac3494199dd3e40125587cf787794b505)`() const` <a id="structFRHAPI__Loot_1ac3494199dd3e40125587cf787794b505"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__Loot_1a05b96a2175bdb06279f309e013a5aab6)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a05b96a2175bdb06279f309e013a5aab6"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__Loot_1a7a8d6137677c9f2982e4d2a3f5f8dd78)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1a7a8d6137677c9f2982e4d2a3f5f8dd78"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.

#### `public inline void `[`ClearTimeFrameId`](#structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0)`()` <a id="structFRHAPI__Loot_1a67f539e792c398b2faa6f80bafed2ad0"></a>

Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TimeFrameId`](#structFRHAPI__Loot_1a8e5748c80cb246fbb83bd9b4618053c0)`()` <a id="structFRHAPI__Loot_1a8e5748c80cb246fbb83bd9b4618053c0"></a>

Returns the default value of TimeFrameId.

#### `public inline FORCEINLINE void `[`SetTimeFrameIdToNull`](#structFRHAPI__Loot_1a8588a43e71d9fd6852e04974d8c98750)`()` <a id="structFRHAPI__Loot_1a8588a43e71d9fd6852e04974d8c98750"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTimeFrameIdNull`](#structFRHAPI__Loot_1a125e07a8f5e5da9c964b1de099303c0b)`() const` <a id="structFRHAPI__Loot_1a125e07a8f5e5da9c964b1de099303c0b"></a>

Checks whether TimeFrameId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a481caf3e4afa9c8bc23f7a23da6027bc)`()` <a id="structFRHAPI__Loot_1a481caf3e4afa9c8bc23f7a23da6027bc"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1ad49859ff3279621da1ffc42459ee9169)`() const` <a id="structFRHAPI__Loot_1ad49859ff3279621da1ffc42459ee9169"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1ae1df07500f7aea92942771e6b387fe0c)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__Loot_1ae1df07500f7aea92942771e6b387fe0c"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUseInventoryBucket`](#structFRHAPI__Loot_1a4ba8837f65938e527e1cd7582271c87a)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__Loot_1a4ba8837f65938e527e1cd7582271c87a"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1aecfbafcbd28e1cd3f71eb7a5a2ef09b5)`()` <a id="structFRHAPI__Loot_1aecfbafcbd28e1cd3f71eb7a5a2ef09b5"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__Loot_1a61c90092d50911823c3ee100991c568d)`() const` <a id="structFRHAPI__Loot_1a61c90092d50911823c3ee100991c568d"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1aec64f5c8d8da78fddf2215815624a30e)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__Loot_1aec64f5c8d8da78fddf2215815624a30e"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__Loot_1af189544f9f8dc19c0733eaa49ef3ee25)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__Loot_1af189544f9f8dc19c0733eaa49ef3ee25"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed)`()` <a id="structFRHAPI__Loot_1aa17ac8272fd46eb2841ba92836a4a1ed"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucketToNull`](#structFRHAPI__Loot_1ac6536cb7af833664c923035ee8c4b941)`()` <a id="structFRHAPI__Loot_1ac6536cb7af833664c923035ee8c4b941"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsUseInventoryBucketNull`](#structFRHAPI__Loot_1a4817392d7ab28aaf0eba126ccf547d07)`() const` <a id="structFRHAPI__Loot_1a4817392d7ab28aaf0eba126ccf547d07"></a>

Checks whether UseInventoryBucket_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1a5da977044d0bf500e02f48a8000c74cd)`()` <a id="structFRHAPI__Loot_1a5da977044d0bf500e02f48a8000c74cd"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1aa04282f6fb275c51577dd13b93dcf476)`() const` <a id="structFRHAPI__Loot_1aa04282f6fb275c51577dd13b93dcf476"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1af58469a75ebf8de75e84be46fccb4d72)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` <a id="structFRHAPI__Loot_1af58469a75ebf8de75e84be46fccb4d72"></a>

Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetXpQuantityTransformType`](#structFRHAPI__Loot_1ac9acec3fcf1792b2c4827b33bcef9920)`(ERHAPI_XpQuantityTransform & OutValue) const` <a id="structFRHAPI__Loot_1ac9acec3fcf1792b2c4827b33bcef9920"></a>

Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1a0fdac428ab2f5260d06d2e1f185a504a)`()` <a id="structFRHAPI__Loot_1a0fdac428ab2f5260d06d2e1f185a504a"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__Loot_1ab4734fa8000b886e9b11d0671d6fe906)`() const` <a id="structFRHAPI__Loot_1ab4734fa8000b886e9b11d0671d6fe906"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1a1a637838923f01f5cfcce45cea0e204a)`(const ERHAPI_XpQuantityTransform & NewValue)` <a id="structFRHAPI__Loot_1a1a637838923f01f5cfcce45cea0e204a"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__Loot_1a7a95bd3ee9fcd145fafef4cbcdc10f16)`(ERHAPI_XpQuantityTransform && NewValue)` <a id="structFRHAPI__Loot_1a7a95bd3ee9fcd145fafef4cbcdc10f16"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.

#### `public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da)`()` <a id="structFRHAPI__Loot_1a0bc58abfb350a0bbc8559a670bff36da"></a>

Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1acfb869f9569405ec705aeb795c3e8097)`()` <a id="structFRHAPI__Loot_1acfb869f9569405ec705aeb795c3e8097"></a>

Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1af3b31769b64d533e1ed0a1029356cc91)`() const` <a id="structFRHAPI__Loot_1af3b31769b64d533e1ed0a1029356cc91"></a>

Gets the value of CurrentPricePointGuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a595c0cdef85d788cd274cfb438e32146)`(const FString & DefaultValue) const` <a id="structFRHAPI__Loot_1a595c0cdef85d788cd274cfb438e32146"></a>

Gets the value of CurrentPricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCurrentPricePointGuid`](#structFRHAPI__Loot_1a0f957d9354617a8447dc8d7ed22ca556)`(FString & OutValue) const` <a id="structFRHAPI__Loot_1a0f957d9354617a8447dc8d7ed22ca556"></a>

Fills OutValue with the value of CurrentPricePointGuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1ad7af76d5a521b12847afc067e6286504)`()` <a id="structFRHAPI__Loot_1ad7af76d5a521b12847afc067e6286504"></a>

Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCurrentPricePointGuidOrNull`](#structFRHAPI__Loot_1a9ef487de86856fcf722841d2acc5d1f7)`() const` <a id="structFRHAPI__Loot_1a9ef487de86856fcf722841d2acc5d1f7"></a>

Returns a pointer to CurrentPricePointGuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1a5ac8447b5e2a2d9b8bcabb7f309eb202)`(const FString & NewValue)` <a id="structFRHAPI__Loot_1a5ac8447b5e2a2d9b8bcabb7f309eb202"></a>

Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCurrentPricePointGuid`](#structFRHAPI__Loot_1a893cb7314fc81234efc277efadab4d48)`(FString && NewValue)` <a id="structFRHAPI__Loot_1a893cb7314fc81234efc277efadab4d48"></a>

Sets the value of CurrentPricePointGuid_Optional and also sets CurrentPricePointGuid_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrentPricePointGuid`](#structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e)`()` <a id="structFRHAPI__Loot_1aff194f7ec2aac0bbc07e4ed16e9c560e"></a>

Clears the value of CurrentPricePointGuid_Optional and sets CurrentPricePointGuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCurrentPricePointGuidToNull`](#structFRHAPI__Loot_1ac568baeafbfe0ff0e699a07ad2455cab)`()` <a id="structFRHAPI__Loot_1ac568baeafbfe0ff0e699a07ad2455cab"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCurrentPricePointGuidNull`](#structFRHAPI__Loot_1a7230a4b4cc1340bdfcfeb8df04aa9eb8)`() const` <a id="structFRHAPI__Loot_1a7230a4b4cc1340bdfcfeb8df04aa9eb8"></a>

Checks whether CurrentPricePointGuid_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a71408ad5746c7e3f6ea8347728adba94)`()` <a id="structFRHAPI__Loot_1a71408ad5746c7e3f6ea8347728adba94"></a>

Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1a648df6d4ecf67f905f9ec6ce75448af6)`() const` <a id="structFRHAPI__Loot_1a648df6d4ecf67f905f9ec6ce75448af6"></a>

Gets the value of PreSalePricePointGuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1af1c2fbba211e5b66ef5e802e103252c4)`(const FString & DefaultValue) const` <a id="structFRHAPI__Loot_1af1c2fbba211e5b66ef5e802e103252c4"></a>

Gets the value of PreSalePricePointGuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPreSalePricePointGuid`](#structFRHAPI__Loot_1ab37a389362b51e379e48d168b269d177)`(FString & OutValue) const` <a id="structFRHAPI__Loot_1ab37a389362b51e379e48d168b269d177"></a>

Fills OutValue with the value of PreSalePricePointGuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1a834bb56640c4d1848e789273d1dbbba3)`()` <a id="structFRHAPI__Loot_1a834bb56640c4d1848e789273d1dbbba3"></a>

Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPreSalePricePointGuidOrNull`](#structFRHAPI__Loot_1a2a78a2da655a7284dabc83b76da18786)`() const` <a id="structFRHAPI__Loot_1a2a78a2da655a7284dabc83b76da18786"></a>

Returns a pointer to PreSalePricePointGuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1a2f0150b53d19f82e00a3eaf961fedcdd)`(const FString & NewValue)` <a id="structFRHAPI__Loot_1a2f0150b53d19f82e00a3eaf961fedcdd"></a>

Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPreSalePricePointGuid`](#structFRHAPI__Loot_1a6af2433abb8980ce5ee6cbb506fafbbb)`(FString && NewValue)` <a id="structFRHAPI__Loot_1a6af2433abb8980ce5ee6cbb506fafbbb"></a>

Sets the value of PreSalePricePointGuid_Optional and also sets PreSalePricePointGuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPreSalePricePointGuid`](#structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e)`()` <a id="structFRHAPI__Loot_1a1abdd3498369af9ef69be5b62f09ef0e"></a>

Clears the value of PreSalePricePointGuid_Optional and sets PreSalePricePointGuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPreSalePricePointGuidToNull`](#structFRHAPI__Loot_1ab7d26b143a0a036b8eb857a75d146a4b)`()` <a id="structFRHAPI__Loot_1ab7d26b143a0a036b8eb857a75d146a4b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPreSalePricePointGuidNull`](#structFRHAPI__Loot_1aa1f29f27c436bcb58643c08e367b1a68)`() const` <a id="structFRHAPI__Loot_1aa1f29f27c436bcb58643c08e367b1a68"></a>

Checks whether PreSalePricePointGuid_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a26d37a71501c8fdf169a520154fdb4b2)`()` <a id="structFRHAPI__Loot_1a26d37a71501c8fdf169a520154fdb4b2"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a8830b102f1485b37d189e44a693a9213)`() const` <a id="structFRHAPI__Loot_1a8830b102f1485b37d189e44a693a9213"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loot_1a8bf71e2f05fe2df15928d4d8b70237ef)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Loot_1a8bf71e2f05fe2df15928d4d8b70237ef"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Loot_1af109e8531fce2e838578489944d4ea6b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Loot_1af109e8531fce2e838578489944d4ea6b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1ab37b5449a80c4ed7a7e54ad0aa585bd4)`()` <a id="structFRHAPI__Loot_1ab37b5449a80c4ed7a7e54ad0aa585bd4"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loot_1ac6224add3010f87bcc448d74b032fbe5)`() const` <a id="structFRHAPI__Loot_1ac6224add3010f87bcc448d74b032fbe5"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Loot_1a2cb189619e9c1d1ef7fbb55f91a19cec)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Loot_1a2cb189619e9c1d1ef7fbb55f91a19cec"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Loot_1aceb4338cf36feb358841233acae3bc3c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Loot_1aceb4338cf36feb358841233acae3bc3c"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a)`()` <a id="structFRHAPI__Loot_1a25a34ca49677cf59c5f100985d372f8a"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Loot_1a689e1c0c1eb1a6a0a1fb6369550722be)`()` <a id="structFRHAPI__Loot_1a689e1c0c1eb1a6a0a1fb6369550722be"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Loot_1a915974708344a27962c2c7e8620f9e3a)`() const` <a id="structFRHAPI__Loot_1a915974708344a27962c2c7e8620f9e3a"></a>

Checks whether CacheInfo_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a7a5b58e056c4c268a2e96ac5410acac3)`()` <a id="structFRHAPI__Loot_1a7a5b58e056c4c268a2e96ac5410acac3"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1ac85e09ccf2194db060894b3cad3d4cd3)`() const` <a id="structFRHAPI__Loot_1ac85e09ccf2194db060894b3cad3d4cd3"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a6bf839bb7e41e6dbbb66e3b584b9ee24)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Loot_1a6bf839bb7e41e6dbbb66e3b584b9ee24"></a>

Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHardQuantityMaximum`](#structFRHAPI__Loot_1a00e00516941c6c97c696824ba44173e4)`(int32 & OutValue) const` <a id="structFRHAPI__Loot_1a00e00516941c6c97c696824ba44173e4"></a>

Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1af5481ea26bc429bfe6de37328a93e49c)`()` <a id="structFRHAPI__Loot_1af5481ea26bc429bfe6de37328a93e49c"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__Loot_1a7a3e6f19d61561b4e74103766b45c507)`() const` <a id="structFRHAPI__Loot_1a7a3e6f19d61561b4e74103766b45c507"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1a2f4992f83495801fe12298a3e992a8d7)`(const int32 & NewValue)` <a id="structFRHAPI__Loot_1a2f4992f83495801fe12298a3e992a8d7"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__Loot_1ad81d5cef14ba855ad328eb69e2413e52)`(int32 && NewValue)` <a id="structFRHAPI__Loot_1ad81d5cef14ba855ad328eb69e2413e52"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.

#### `public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df)`()` <a id="structFRHAPI__Loot_1a54dc1f52107b15b7ff50d282cc43d8df"></a>

Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_HardQuantityMaximum`](#structFRHAPI__Loot_1a751ba6e5145898c16c5c2f79318e1d3c)`()` <a id="structFRHAPI__Loot_1a751ba6e5145898c16c5c2f79318e1d3c"></a>

Returns the default value of HardQuantityMaximum.

#### `public inline FORCEINLINE `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a747c28521fa2938740b677c318973400)`()` <a id="structFRHAPI__Loot_1a747c28521fa2938740b677c318973400"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a75a9a9f35840d1054759fff29838393f)`() const` <a id="structFRHAPI__Loot_1a75a9a9f35840d1054759fff29838393f"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & `[`GetPrice`](#structFRHAPI__Loot_1a266524fca4352bea0d3198060f581aa5)`(const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & DefaultValue) const` <a id="structFRHAPI__Loot_1a266524fca4352bea0d3198060f581aa5"></a>

Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPrice`](#structFRHAPI__Loot_1ab4903c4257fd81240589d4875eb80aa1)`(`[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & OutValue) const` <a id="structFRHAPI__Loot_1ab4903c4257fd81240589d4875eb80aa1"></a>

Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` * `[`GetPriceOrNull`](#structFRHAPI__Loot_1aee3443e63da5935e3b3c93c59e69b8fc)`()` <a id="structFRHAPI__Loot_1aee3443e63da5935e3b3c93c59e69b8fc"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` * `[`GetPriceOrNull`](#structFRHAPI__Loot_1a8117cdb0456c3a4fb7d93dea8fc9cad3)`() const` <a id="structFRHAPI__Loot_1a8117cdb0456c3a4fb7d93dea8fc9cad3"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__Loot_1aed798bfd97343fe6dd69171ed351ac40)`(const `[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` & NewValue)` <a id="structFRHAPI__Loot_1aed798bfd97343fe6dd69171ed351ac40"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__Loot_1a21969f969aa31253a6fb02e7530df8be)`(`[`FRHAPI_LootPrice`](RHAPI_LootPrice.md#structFRHAPI__LootPrice)` && NewValue)` <a id="structFRHAPI__Loot_1a21969f969aa31253a6fb02e7530df8be"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.

#### `public inline void `[`ClearPrice`](#structFRHAPI__Loot_1ab1aa3a168ad71a2d2f93b5a7253f93d5)`()` <a id="structFRHAPI__Loot_1ab1aa3a168ad71a2d2f93b5a7253f93d5"></a>

Clears the value of Price_Optional and sets Price_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPriceToNull`](#structFRHAPI__Loot_1a0eeea5972308f551de6d28da1bd27912)`()` <a id="structFRHAPI__Loot_1a0eeea5972308f551de6d28da1bd27912"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPriceNull`](#structFRHAPI__Loot_1a0386cb0bef0d741e5ec3c898fd840643)`() const` <a id="structFRHAPI__Loot_1a0386cb0bef0d741e5ec3c898fd840643"></a>

Checks whether Price_Optional is set to null.

