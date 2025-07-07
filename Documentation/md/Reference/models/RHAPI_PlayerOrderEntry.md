---
title: RHAPI_PlayerOrderEntry
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderEntry`](#structFRHAPI__PlayerOrderEntry) | Represents a line item in the Player Order and the results of the line item.

## struct `FRHAPI_PlayerOrderEntry` <a id="structFRHAPI__PlayerOrderEntry"></a>

```
struct FRHAPI_PlayerOrderEntry
  : public FRHAPI_Model
```

Represents a line item in the Player Order and the results of the line item.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntry_1a37c9f172a892e0dd233755e8ab8f2890) | 
`public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntry_1af27144492afcdc51a5b5f075c956dffa) | 
`public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntry_1afd00418312db369b85cb3a86ff9509f7) | true if LootId_Optional has been set to a value
`public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a386f1c8c327c0966d0eb759a41a14ec5) | true if LootId_Optional has been explicitly set to null
`public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntry_1a73687f8fab41a507f0ef73e76175f9dd) | Quantity of Inventory.
`public int32 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntry_1a802c1341a21d9fd030e234d2cef82ad9) | 
`public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntry_1a879fc70c3d14a1db5d882e6f1e68a307) | true if VendorVersion_Optional has been set to a value
`public bool `[`VendorVersion_IsNull`](#structFRHAPI__PlayerOrderEntry_1af1fe73ace8c0bbda05329e215372335c) | true if VendorVersion_Optional has been explicitly set to null
`public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntry_1a96404d2f2eac0f6467459d8aa7b4460c) | 
`public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntry_1ab4257754c991af2dd4040bf0009cbc97) | true if VendorEtag_Optional has been set to a value
`public bool `[`VendorEtag_IsNull`](#structFRHAPI__PlayerOrderEntry_1a09d85d5f1e4dff9519947dddae59b6a0) | true if VendorEtag_Optional has been explicitly set to null
`public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntry_1ac9d962191f53b6ccb641b318adb9f5cb) | 
`public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntry_1ac3c5d9b9ae603866b22219786fddcb7f) | true if DynamicBundleLootIds_Optional has been set to a value
`public bool `[`DynamicBundleLootIds_IsNull`](#structFRHAPI__PlayerOrderEntry_1a9939eae5070542cbda248cf8a07918ad) | true if DynamicBundleLootIds_Optional has been explicitly set to null
`public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntry_1ae0d142dad5970d2a31368fc3a8a42175) | 
`public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntry_1ad3a9263f522644db2c88f24ee13bef1c) | true if PurchasePrice_Optional has been set to a value
`public bool `[`PurchasePrice_IsNull`](#structFRHAPI__PlayerOrderEntry_1a54834499ae63c93ff39d8d3248c39e4e) | true if PurchasePrice_Optional has been explicitly set to null
`public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntry_1a7790f9a333b141c80e9e834f3182288f) | 
`public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a74e920f1fb01339b03e60891fe58430f) | true if ExternalTranId_Optional has been set to a value
`public bool `[`ExternalTranId_IsNull`](#structFRHAPI__PlayerOrderEntry_1ae711e02cb8089914b2568c51f4ad058f) | true if ExternalTranId_Optional has been explicitly set to null
`public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntry_1a938707e52b38bc755b29d2978883ba9c) | 
`public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntry_1a799a799b1b2b1409d57cd8c892c3b1d0) | true if ExternalItemSku_Optional has been set to a value
`public bool `[`ExternalItemSku_IsNull`](#structFRHAPI__PlayerOrderEntry_1a958462be1e89b2eec6558270b028f0b0) | true if ExternalItemSku_Optional has been explicitly set to null
`public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntry_1a20b811bd0d3523aa6f061f337098c6e1) | 
`public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntry_1ac6dab78b7e31604795d902955e00118e) | true if UseInventoryBucket_Optional has been set to a value
`public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__PlayerOrderEntry_1a203d8cdce19349a9cf49642f8547aa88) | true if UseInventoryBucket_Optional has been explicitly set to null
`public int32 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntry_1aca8eb066046d5cc21f63db1a9b21a4ea) | 
`public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntry_1ae3c442ea95674cee11512f34c42ce26d) | true if PlayerPortalEventId_Optional has been set to a value
`public bool `[`PlayerPortalEventId_IsNull`](#structFRHAPI__PlayerOrderEntry_1acefb86b0675fc1d3c9351d78e273b7ed) | true if PlayerPortalEventId_Optional has been explicitly set to null
`public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntry_1a52a01e1684a9c541cb83610703f2f766) | 
`public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a4344068a1931c9fd603a3004bb4f9937) | true if InventoryId_Optional has been set to a value
`public bool `[`InventoryId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a58e74c9723b3f2a69f1a3cb7d573ae8f) | true if InventoryId_Optional has been explicitly set to null
`public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntry_1a69934f80a9591a6f827d57bd1ff6146a) | 
`public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a6456d273ba8846113370ede135cd2331) | true if LegacyInventoryId_Optional has been set to a value
`public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a8c5408da36c6096e07c04ef548e589ad) | true if LegacyInventoryId_Optional has been explicitly set to null
`public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntry_1a52e414fe5e1451921ef42719a44d187a) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a0a02f71e6df85cdabb41b27c0eb485a7) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a0acb43f22ee6257a383d998a886b5e14) | true if ItemId_Optional has been explicitly set to null
`public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntry_1ac2055e06ef244cfbdf933fe60c4ce5cd) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntry_1abe6698f68b08033e04e2de0b278b9de6) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__PlayerOrderEntry_1a545fe7fc3db1dfdafdede78e9a3a0d8c) | true if Expires_Optional has been explicitly set to null
`public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__PlayerOrderEntry_1a472383e4b1e249f3c2d815449bbe537c) | 
`public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__PlayerOrderEntry_1a81a5f020214604b56beba1c3e89c6145) | true if XpQuantityTransformType_Optional has been set to a value
`public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__PlayerOrderEntry_1a1ff8ea36e6636b9a1565bf7b06fee8f8) | 
`public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__PlayerOrderEntry_1a751ae4972ca6da118892862298f7b9ef) | true if HardQuantityMaximum_Optional has been set to a value
`public bool `[`HardQuantityMaximum_IsNull`](#structFRHAPI__PlayerOrderEntry_1a920555fb0da8051b20e7cc88ae14c412) | true if HardQuantityMaximum_Optional has been explicitly set to null
`public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__PlayerOrderEntry_1a5ebe9c64ac3a0e52c504eb0d494af301) | 
`public bool `[`InventoryOperation_IsSet`](#structFRHAPI__PlayerOrderEntry_1a84c29f1df8fb228a2edfd95f7698464b) | true if InventoryOperation_Optional has been set to a value
`public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__PlayerOrderEntry_1afdadef5c66eb0e2dce6d848c7dcd6be5) | 
`public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__PlayerOrderEntry_1aabbe6fcd96bf2c937340f522dac5d290) | true if InventorySelectorType_Optional has been set to a value
`public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__PlayerOrderEntry_1a074f68e6bd9b0208de352963a8cf0224) | 
`public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a848a6c3ee1d4ca3064ae2bfb98e2b008) | true if QuantityMultInventoryItemId_Optional has been set to a value
`public bool `[`QuantityMultInventoryItemId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a27e1c9b62a164ce531e21e600f90db01) | true if QuantityMultInventoryItemId_Optional has been explicitly set to null
`public int32 `[`TimeFrameId_Optional`](#structFRHAPI__PlayerOrderEntry_1a528f1c54872cdd52787eef8830de15e0) | 
`public bool `[`TimeFrameId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a7805739b46288065bf7e2b937e7ffe22) | true if TimeFrameId_Optional has been set to a value
`public bool `[`TimeFrameId_IsNull`](#structFRHAPI__PlayerOrderEntry_1aa09eac7e396b1af5384617d97a350261) | true if TimeFrameId_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntry_1a5860da51422cd06767a9fc8ed702b7fd) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntry_1a3f081309b1a19358505ccef4784d4a29) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntry_1af3651c58c550b5d2c1f81b6ed686dec8) | true if CustomData_Optional has been explicitly set to null
`public FString `[`EntryId`](#structFRHAPI__PlayerOrderEntry_1abb0b94aa1f1fc24b5ee67639f0c2fdd0) | Unique Identifier for the Order Entry.
`public ERHAPI_PlayerOrderEntryResult `[`Result_Optional`](#structFRHAPI__PlayerOrderEntry_1ae544f7a3ee9b3a5717ffe148d06335fd) | 
`public bool `[`Result_IsSet`](#structFRHAPI__PlayerOrderEntry_1a51f1b8ab3ddfe711d3b5ce3baba4f11a) | true if Result_Optional has been set to a value
`public TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > `[`Details_Optional`](#structFRHAPI__PlayerOrderEntry_1ad0d38a797491aefcf72ebc1f69fd527d) | Details for the Order Entry.
`public bool `[`Details_IsSet`](#structFRHAPI__PlayerOrderEntry_1ab3ea719e706961aee4c9f2f4ecffb99b) | true if Details_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntry_1a116103f1a97d7348fb509658f41bbfe4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntry_1aff47bcfbb6ad4d14718e7aac9012f26f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1a97a139532e0288095dab483ebc013925)`()` | Gets the value of Type.
`public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1a9fd467d8f336889f5af7c6a3245bbb24)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1a47c9903ef38409e1e1b345d73d86babc)`(const ERHAPI_PlayerOrderEntryType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1a73b50a71fdd5826997c139523dc50ca9)`(ERHAPI_PlayerOrderEntryType && NewValue)` | Sets the value of Type using move semantics.
`public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a38eae41d3401b9aff70667c2f577029d)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a05a72fee4846e1102ff3de8994b97a7e)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1afcc0610b8080246da58d1a879e08079d)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a96c4186b6cec8faefe54a7fafccf82e0)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ab61675039166b9a9e77dcf21a2c01c6c)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ace512fdcbe48cd83e6cd766f9931c8b6)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1acf706a344641f4777b052951ef6e3919)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1a3c4777caf03d81ec32fa6e0a9bd8fc93)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderEntry_1a117edf4021c7e4f02144ce70bc752f54)`() const` | Checks whether LootId_Optional has been set.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a1b3f431ef690f0d4399199f5966af906)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a0af86c8bd92731bdf04328285d1c3ef9)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntry_1ac88a35e2fcefa4f7f1a455bcf82449fd)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntry_1aa03341cacd75d00e169fc5b8c9c0aba7)`() const` | Checks whether LootId_Optional is set to null.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a6d3bb03a39a65c087c6b8cfec2b2c852)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1aefef7945ed5e12d6b4c70a074cea0de9)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a269813d3e3068f9a08285920fac51cc6)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a126de510ca14ecb96d31364c1fbcc686)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a86ab71c59766344cf3314dc24f32255b)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntry_1af8c751930348d16219dfbdcd44468d86)`()` | Sets the value of Quantity to its default
`public inline int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1aab176636c1fdbab707cfdd649b3413e5)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a2831e241ff9ced0fb19b36e44f7de1f2)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ad4edf50cefd11923081fb9fb222645b1)`(const int32 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a5ef79b8ada8ac70d8ca68d2738fa3c9a)`(int32 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1a72014c47834292e932d72cecf552dae3)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1a505976f0f11202a7b1a1ba5e0390e593)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1afc321e581684916e456cb80da1d49501)`(const int32 & NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a71ac509c396ee8b845b9154d03fda4f5)`(int32 && NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline bool `[`IsVendorVersionSet`](#structFRHAPI__PlayerOrderEntry_1a686f158ba0966791da7e7ebe0573e604)`() const` | Checks whether VendorVersion_Optional has been set.
`public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntry_1ab9b080bbb6201eeab73e64ca219c825e)`() const` | Returns true if VendorVersion_Optional is set and matches the default value.
`public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntry_1af18c13a79f10c83cf8cf909037a40d13)`()` | Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.
`public inline void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntry_1a4811a1a3a7999888bc09d5d5013a2a69)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntry_1a0707d0f99f6c9a5d98469ddcac197e7f)`() const` | Checks whether VendorVersion_Optional is set to null.
`public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a8b3c63f0b51b529b44679ec39f6a7ee9)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1ab72821a31197469bd430b85c13383b9a)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1af747864a2b3d8eae901cc48489612409)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a58864651f695d1c391a069f931d04fc7)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1a78a0f2f683ab6f2fccc64144bfd44a5e)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1a2df064e520e44b23c2285c1bc91014df)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a5e3405cbb97be6d385acea9e5107fa51)`(const FString & NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a7eb80b05630d6f9aabea66df0fe84ceb)`(FString && NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline bool `[`IsVendorEtagSet`](#structFRHAPI__PlayerOrderEntry_1a132055ea3df7088ca4dc34cfae604831)`() const` | Checks whether VendorEtag_Optional has been set.
`public inline void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntry_1a2cf9e50718461244f8da4ccaa28a4923)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntry_1ac2c4d3c831500153b13b8bb8b67b5db6)`() const` | Checks whether VendorEtag_Optional is set to null.
`public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1aaf8e01d475aed4432b8fb04badfa9f7d)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a890f17423d95aad1ef821dd2a2ce7e2c)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1aad316ec6693b4967b4d763d9e877a02b)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2ec0c2bc642c1470c8a6e01fa5c929f5)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a2b9817c2481516142820cbd8d0bc45c9)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a0e35369814e3d3c22409815edec6bac7)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a3614d6e0d677c9b71f39e95e81625199)`(const TArray< int32 > & NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1ab88ef1c129858e9d4c2bf45aa61116e8)`(TArray< int32 > && NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline bool `[`IsDynamicBundleLootIdsSet`](#structFRHAPI__PlayerOrderEntry_1a36b6134d7a4c423c3ab1ccfaca3a678e)`() const` | Checks whether DynamicBundleLootIds_Optional has been set.
`public inline void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntry_1a3a137a9d4fb10baaea127ec73209f939)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntry_1a558fe5914f96ec9d68ef46545f69b486)`() const` | Checks whether DynamicBundleLootIds_Optional is set to null.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1aab98096fbc1216be15020c5d46f84ad8)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1aad590b184f3bfedda5d96d6952a0c976)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a3539327d509b9a9b7b8cb16314262658)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a660c5b9eadbcf3bface57ff655dcaa63)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1ad764c3e4db9708a7ce656d47cd5011fd)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1a4e581bc7bf0ba0dbdb5a1a81ef7650f8)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a610cb5bd67a8937e545799d5af186f1f)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a315656795176c9032fc2e89218050106)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline bool `[`IsPurchasePriceSet`](#structFRHAPI__PlayerOrderEntry_1a3bb2173ae43283abf288a45bd35a6b2f)`() const` | Checks whether PurchasePrice_Optional has been set.
`public inline void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntry_1a3f72a317982b7cc1a794d9b1904bcdfa)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntry_1a76435ec08bc1cb51ba5b286fc418ce24)`() const` | Checks whether PurchasePrice_Optional is set to null.
`public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1ae992d9e998ea1f2435c0732e118377b8)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1afde91d137b08bd4d72fb470c877d1aef)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a60db235df611f42cd8999c85f2b2ac06)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a256df8b376732391c16565393083c1f3)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a34e89d56d538ab20d144310f622a81e6)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a0e9d33881fe17939b7bb81b6517747c5)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a8b7385f81264b5e882780527dabee03c)`(const FString & NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1aaa2213677fe7a197edbe646d81629fa0)`(FString && NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline bool `[`IsExternalTranIdSet`](#structFRHAPI__PlayerOrderEntry_1ab583e7265a32b194ff1f150556a17d27)`() const` | Checks whether ExternalTranId_Optional has been set.
`public inline void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntry_1a082e64ee527938e1fdb44ec555aade5a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntry_1adf0524c1e8a447dba52ad99ba8c06be3)`() const` | Checks whether ExternalTranId_Optional is set to null.
`public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a44317cd480a2a5537ac1e7eb2da11537)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1af0af2ec99c93898f5423cc2054eedfd6)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a2e88f0abd86547555ba5e27c996b3213)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1adbc73633887c8f5beb4d5fd415be4b19)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1a2d6512b28debba583322d448d52f4e19)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1acf6afbb7314afc95ca6f2204f5b99694)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1ac5259d6a126f001a30d79a326e23c52f)`(const FString & NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a073f157e38422f06c3e6ff3e4a27e3ec)`(FString && NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline bool `[`IsExternalItemSkuSet`](#structFRHAPI__PlayerOrderEntry_1a36b0375093d864e192c85b629e71e148)`() const` | Checks whether ExternalItemSku_Optional has been set.
`public inline void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntry_1ada8c6305dbb5641671da160fec15135f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntry_1a92a4e958ce7a4291931a6134459b1031)`() const` | Checks whether ExternalItemSku_Optional is set to null.
`public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1aeba532b8c1e00b0868608bd88d2e48fe)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a4e715a000932a31eb343561a55921905)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1ac79b7c4ca338604d92cbb17797c4fc5f)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a1551a4d915e88701c893193c51928e14)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1a067aa36feca998a77a3783aac88751ea)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1afd667b4812a3555f414a9a81f589a2f3)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a1d042f196406331b6adb48519801e9ee)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a8ac7d9a23b65c8fe97f570823c0b4535)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__PlayerOrderEntry_1a84101d9aee4d121b4fe319b958fff0f5)`() const` | Checks whether UseInventoryBucket_Optional has been set.
`public inline void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntry_1a9c20d3047e5692b83e13038ca56debb8)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntry_1af3f9f3a7707bb215ed4752ce422c6dba)`() const` | Checks whether UseInventoryBucket_Optional is set to null.
`public inline int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a9824d514e1188b55ae2588d7cc96a084)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1af6682b35474ef077e857585f3f2890b0)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a7ed7042379f9e8bd0230958814139787)`(const int32 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1af3d982f26b119949cacbcd487eb4662b)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1adb1c34a0f64a693a36c930fe5b931ee5)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a653a5b374346e3bb70d2ffd675d30406)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a9e1a71dac67b2a93efd42813fcfdbeab)`(const int32 & NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1afeec42bc5948f3c4a41fbce7029e3439)`(int32 && NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline bool `[`IsPlayerPortalEventIdSet`](#structFRHAPI__PlayerOrderEntry_1ae509fcc39ccbffd0dc8144208cfb6505)`() const` | Checks whether PlayerPortalEventId_Optional has been set.
`public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a0ef83ed4fb13f902e26bb4efce9c4303)`() const` | Returns true if PlayerPortalEventId_Optional is set and matches the default value.
`public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a47c41382298220a7528123b8fc6742b9)`()` | Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntry_1aea64041faf1c302827e31520a7c413da)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntry_1abd25a994bf8fa8b72488cb1552588aef)`() const` | Checks whether PlayerPortalEventId_Optional is set to null.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a64241f5392a436ef3cd9ddd916a6131f)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a415ec1d0962291160efe932a528d76a4)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad19b3c2bef861e60d898349f45467112)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a73772840636cbe0c7363934f69c9e502)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a78ad32dc093e190061691381834bcfdd)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a8ced15bea8e922094a23f3f061508e1e)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a1e1b5643bf447d5b6dd811b3ba6abf1f)`(const FGuid & NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad1e1fc2194398a2e253a6097138c6113)`(FGuid && NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline bool `[`IsInventoryIdSet`](#structFRHAPI__PlayerOrderEntry_1ae9bcf79c909bd337a92a52d7b116e594)`() const` | Checks whether InventoryId_Optional has been set.
`public inline void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntry_1aff773a659fd1b51449df8d879f7872b6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntry_1a60b45670d644f652ecde26b814f7bf2c)`() const` | Checks whether InventoryId_Optional is set to null.
`public inline int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad9c3757b906a9cb8b8a1f3cc531f6567)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a8a16ad6e334db4c78b35f3a5908a1904)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ab3111162ab4ca86302cbe2b4f19c195e)`(const int32 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a165112ee0ea0aa1e2d5504613359913f)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a85232829e440a419916603709a5b5318)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a870cdee3c58d9745ff47974b77c81be7)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a39fcf42f52422e1002d9a28f3ef8621f)`(const int32 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad9c36c203811e3f1d240f23d2cb45c1c)`(int32 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__PlayerOrderEntry_1a5830ea3ebd612fcf65c0ac2df6c7fb3c)`() const` | Checks whether LegacyInventoryId_Optional has been set.
`public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1ac808088c9eeeee7894c5c0cade3c9ff6)`() const` | Returns true if LegacyInventoryId_Optional is set and matches the default value.
`public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a80846e6e79fb29128c25cd5b62713a8d)`()` | Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntry_1a302b323ebb2b0195df4e3f8a2828448d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntry_1ac7ae41929d773b459e78542bdc9d4150)`() const` | Checks whether LegacyInventoryId_Optional is set to null.
`public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a7d5c3cd91a4814bb69b25693fb3a018b)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a188d7d5aab4a0284e302399e53415d63)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a81c43858eddc973d46b35c8496c5a55e)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a28a395b17d5811c27c708263e2a8dc68)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a4fad4df9f4d4bd661d860abc1fdaa9d6)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1abbca6b77488f23155be78d9c57862bdb)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1aad255d356685fadaccca6828bed855cf)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1aede1dcbb51f07f8d8962b22e491d3190)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__PlayerOrderEntry_1a8ad46fefd5ae607d3730e74f9629677c)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1afafe7941ee4f8c1ba75913e7bccacd90)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntry_1ad5816fde2e23de11f7264dcfe1d6316e)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntry_1af54a7c8aa94667e32f280c02042a9401)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntry_1a1af1c276b20bc42cbd184f752e47ee35)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a9ee0284efa42cdda902f3e7bd1c1ce9d)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1aa6e2375bfd1227dd45aaea26a49608bc)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a8a56781f58fe48de36bbc8263eb4367f)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a637ab431c4103401d2b7340e4f7c6cf8)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1a63d7efec9d1dd19e1e1eebbdba049cf6)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1a1a2c2c0f487597865f28c0cd3a3af498)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1add413b325d1d89aabdb8a630daf2a7a5)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1a7c2cec28f2e81186a0d9dcdfbe1bcd18)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline bool `[`IsExpiresSet`](#structFRHAPI__PlayerOrderEntry_1aa3eda82349b4c470e49de59d3f91aeee)`() const` | Checks whether Expires_Optional has been set.
`public inline void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntry_1ad4d70743dfbb03ef6008c317b28ca72e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntry_1aafc0739d18897bed4acb7e49b0dc4e01)`() const` | Checks whether Expires_Optional is set to null.
`public inline ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1ad293b009967e00aaa2c43c1543552f36)`()` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1aa39fdfeef8ad558f55d83f18d609d3a3)`() const` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1af6f880f557c0a56a40dccae9412ac2b5)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` | Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1abdad81b6aa12cb72ddfb5726e0eaca99)`(ERHAPI_XpQuantityTransform & OutValue) const` | Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a91a7fadcda3606114161fcf84d38c103)`()` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a1f8ea24669daaaca46a6b7b20bca5dbd)`() const` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a43def06166f402955d9b2103b5660b3c)`(const ERHAPI_XpQuantityTransform & NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.
`public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1aed2e4249d46947414fe622102ba35edb)`(ERHAPI_XpQuantityTransform && NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.
`public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1af1a363b72f25bd7239155293f4f9ec68)`()` | Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.
`public inline bool `[`IsXpQuantityTransformTypeSet`](#structFRHAPI__PlayerOrderEntry_1a2d0e68544bf5d8534347eb11c28ebdee)`() const` | Checks whether XpQuantityTransformType_Optional has been set.
`public inline int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a084949fcc29bab14afb39ce834450deb)`()` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a39185dbbc2aa0017286d00066c4ecb9d)`() const` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1aa9634160f04e93ed5a4b8ebf348d2866)`(const int32 & DefaultValue) const` | Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a0eb683913f19188e78397af1aef0c8bc)`(int32 & OutValue) const` | Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntry_1ad864fca60e21bf6e1b699a74226fa6b4)`()` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntry_1aae88ce272d2554d7bf1b942fbe0562d3)`() const` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1ad840800cd1a4e0bacaff203c25974276)`(const int32 & NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.
`public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1abf9806cefd43303f22b6e3a9ba717512)`(int32 && NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.
`public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a0d4e1c10a15b858b5386caa07c2e96fb)`()` | Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.
`public inline bool `[`IsHardQuantityMaximumSet`](#structFRHAPI__PlayerOrderEntry_1af8c756c8671b3e29d1b4e27f58873d21)`() const` | Checks whether HardQuantityMaximum_Optional has been set.
`public inline bool `[`IsHardQuantityMaximumDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a1c6c34160ccb10f744da0706b3a7ca70)`() const` | Returns true if HardQuantityMaximum_Optional is set and matches the default value.
`public inline void `[`SetHardQuantityMaximumToDefault`](#structFRHAPI__PlayerOrderEntry_1a3e5d19d676791a3a88136edc44cf81f2)`()` | Sets the value of HardQuantityMaximum_Optional to its default and also sets HardQuantityMaximum_IsSet to true.
`public inline void `[`SetHardQuantityMaximumToNull`](#structFRHAPI__PlayerOrderEntry_1a999f9daa1153d6335570be4c6e3a4524)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsHardQuantityMaximumNull`](#structFRHAPI__PlayerOrderEntry_1ac6148e951fdd4abbfcfe1b5be80dd020)`() const` | Checks whether HardQuantityMaximum_Optional is set to null.
`public inline ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a636b1a8710ca3619b4c5df5a9c4339f5)`()` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a560c761854bc79517efa42d39da53711)`() const` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a8faf892f1a1d2187dcf7f3418c5c6353)`(const ERHAPI_InventoryOperation & DefaultValue) const` | Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a2404cb8ab54a522001138e773fe5bbb6)`(ERHAPI_InventoryOperation & OutValue) const` | Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntry_1a7feaa9800f72100807605e97fef6e96f)`()` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntry_1ad3ca864ddbdf7a1c44d53d019c270121)`() const` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a475500cc0a062597b6139967cf6b3c52)`(const ERHAPI_InventoryOperation & NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.
`public inline void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1ac94a5b14f9c3bc95176cacf588825f96)`(ERHAPI_InventoryOperation && NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.
`public inline void `[`ClearInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1ab92bdc18ce1497d9a56cacab6131ef72)`()` | Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.
`public inline bool `[`IsInventoryOperationSet`](#structFRHAPI__PlayerOrderEntry_1a7abc8e3118aab885841c4bca7f532dd8)`() const` | Checks whether InventoryOperation_Optional has been set.
`public inline ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a9985301ac636d22ad9eec6dd56703e9d)`()` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a0be238687c7ccd5b6233aa4f56eac0fc)`() const` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1abdd6b8431e879443bf9d2ce2e5f2c823)`(const ERHAPI_InventorySelector & DefaultValue) const` | Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1ade1466e6373373ccd250a9cd70b7e8b4)`(ERHAPI_InventorySelector & OutValue) const` | Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1afcd0efefd26b31edda8fea9fdc254b37)`()` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1af4be4e0ab21e692bedd7ea661b1c5bf7)`() const` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a99de8e341d145a311e884dd379e8d6e9)`(const ERHAPI_InventorySelector & NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.
`public inline void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a6048f0775a41fd381d50e8cc7f584457)`(ERHAPI_InventorySelector && NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.
`public inline void `[`ClearInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a912922f8eaf5e5f00dec944b4d4ea90c)`()` | Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.
`public inline bool `[`IsInventorySelectorTypeSet`](#structFRHAPI__PlayerOrderEntry_1a81d8afc17514da929e6143299a149e56)`() const` | Checks whether InventorySelectorType_Optional has been set.
`public inline int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1ad3ea5f811d095745dbbe3c489ab2d591)`()` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1adf25b501748f72eedc087cb4cb2861e3)`() const` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a94f6b361e16cdecaa628db677d24689d)`(const int32 & DefaultValue) const` | Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a5305e6d40ebf3a93ad90f97967ca20e8)`(int32 & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a3774ff96c32f337becbdc9b4e825a125)`()` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a79f451893a3a2831493fc415d36ce9ec)`() const` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aca0184113393c62d3488cb493e4bc85c)`(const int32 & NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1ae86098b46352599e9d7395871e22dc56)`(int32 && NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.
`public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aae6fbea37c628082f2dd3b9f3c7773c8)`()` | Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.
`public inline bool `[`IsQuantityMultInventoryItemIdSet`](#structFRHAPI__PlayerOrderEntry_1a662aad1adf43640415292ee20235c46f)`() const` | Checks whether QuantityMultInventoryItemId_Optional has been set.
`public inline bool `[`IsQuantityMultInventoryItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a870c51e2ac2ec930c8624e1da0dc8e58)`() const` | Returns true if QuantityMultInventoryItemId_Optional is set and matches the default value.
`public inline void `[`SetQuantityMultInventoryItemIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a43cc1d25e7a9483c3e6f8dfeb04c433d)`()` | Sets the value of QuantityMultInventoryItemId_Optional to its default and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__PlayerOrderEntry_1a49e1f65be7f809b78417b5ade39dc8ab)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__PlayerOrderEntry_1a92eed86c1696435460b3220e92d2a07d)`() const` | Checks whether QuantityMultInventoryItemId_Optional is set to null.
`public inline int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1aed96141f95266a22b4da5307cc643833)`()` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1afdcde850d4e62f0359673bc26d3dd865)`() const` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a87aba85adff8586f1bbf35dba6fb3753)`(const int32 & DefaultValue) const` | Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a79dd71c0a2b6f9b7095190172846910a)`(int32 & OutValue) const` | Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a10a532e64b8b55b456303614532a46f5)`()` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aefd38654b2eaa5450e5d36c282df8f6b)`() const` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1ae8b54d4f40f745e318a85aeef0b83fce)`(const int32 & NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.
`public inline void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a08984bd95b9eb75236e98bf13442cc89)`(int32 && NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.
`public inline void `[`ClearTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1afb8bbf3489bbb636bf8a22d22edfacb4)`()` | Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.
`public inline bool `[`IsTimeFrameIdSet`](#structFRHAPI__PlayerOrderEntry_1adfb3a88c0474a59e4f971e33e76c70a7)`() const` | Checks whether TimeFrameId_Optional has been set.
`public inline bool `[`IsTimeFrameIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1aaea604a119d99f86a9cc3713d8432747)`() const` | Returns true if TimeFrameId_Optional is set and matches the default value.
`public inline void `[`SetTimeFrameIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a0f4813ddac40ec781995ce625c660a50)`()` | Sets the value of TimeFrameId_Optional to its default and also sets TimeFrameId_IsSet to true.
`public inline void `[`SetTimeFrameIdToNull`](#structFRHAPI__PlayerOrderEntry_1af2de89f04baced0157aa5509d6fdfa18)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTimeFrameIdNull`](#structFRHAPI__PlayerOrderEntry_1a5f197189d6f9947218bc3f2ebfc5e8c3)`() const` | Checks whether TimeFrameId_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a7fd2601080efdb424cd88c664fe35471)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1ad9815ad54fe34e226744d25cd35af6b0)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1aa1bc1485293c85af4d29812fa0a60759)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a38c1fed0ba760bffc5cd8c90f50759b7)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1a60744be36eeb0d8c870172be520ef568)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1afb6635d2b2f45f67c15095c7b4cc633b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1a17b9d6e1387c856ed31882d7bc61880c)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1ac11f0a79327d6362220f8ab3f4d0393b)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerOrderEntry_1a6d5c99d527de7d9c1dfd0bb777d81a34)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntry_1a1ed2791ec8d268fca68ab8e93b78ffaf)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntry_1a0f60c2ed90914cd378ae36128485e765)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1a82f058ea5de80123a64f33b8f157fb22)`()` | Gets the value of EntryId.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1a577aa871875450821066d890962966e8)`() const` | Gets the value of EntryId.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1ae55affd8c250183e4596e3cce0284a2b)`(const FString & NewValue)` | Sets the value of EntryId.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1aa0d3a9527909745af100b6ee5dd4f989)`(FString && NewValue)` | Sets the value of EntryId using move semantics.
`public inline ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a2d15b4fb272a260f1b4af6a697cf4091)`()` | Gets the value of Result_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a7e49013b47283d376562c319ce1d00e4)`() const` | Gets the value of Result_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1ae70042feb43faee34255d828ac30971f)`(const ERHAPI_PlayerOrderEntryResult & DefaultValue) const` | Gets the value of Result_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1aab0ff9878d55188c46aeb50951e7743f)`(ERHAPI_PlayerOrderEntryResult & OutValue) const` | Fills OutValue with the value of Result_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a184e7f38331c108f34b74f506a18d039)`()` | Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a568ff508719d57c81412f1e42cbca789)`() const` | Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1a8a12a6dbe37b3b584ee95b21f8f67eef)`(const ERHAPI_PlayerOrderEntryResult & NewValue)` | Sets the value of Result_Optional and also sets Result_IsSet to true.
`public inline void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1a222c90006bfff2cc834ceb3e4fcc0b36)`(ERHAPI_PlayerOrderEntryResult && NewValue)` | Sets the value of Result_Optional and also sets Result_IsSet to true using move semantics.
`public inline void `[`ClearResult`](#structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f)`()` | Clears the value of Result_Optional and sets Result_IsSet to false.
`public inline bool `[`IsResultSet`](#structFRHAPI__PlayerOrderEntry_1aa4c21e507277ff92ba824cfce7f61014)`() const` | Checks whether Result_Optional has been set.
`public inline TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1ae2415a9af815f9ba58973737ccd4cd9e)`()` | Gets the value of Details_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1aec5a9c7d4d0a8cac324a54058cfc5b20)`() const` | Gets the value of Details_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1ae210b349de7ab97b14b8b8e993c5abe1)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & DefaultValue) const` | Gets the value of Details_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1acd22460bab7ca52aa6609b54384a74b2)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & OutValue) const` | Fills OutValue with the value of Details_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1ad4263f8e7aa5c642782fc79ab165b72a)`()` | Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a161b43909c6d0d0add4b66627b36c91a)`() const` | Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1a3cf7913984469918bdc4791bfacf0cae)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & NewValue)` | Sets the value of Details_Optional and also sets Details_IsSet to true.
`public inline void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1a5aab1a08f98143caa5bd53fb0be6614e)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > && NewValue)` | Sets the value of Details_Optional and also sets Details_IsSet to true using move semantics.
`public inline void `[`ClearDetails`](#structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38)`()` | Clears the value of Details_Optional and sets Details_IsSet to false.
`public inline bool `[`IsDetailsSet`](#structFRHAPI__PlayerOrderEntry_1a4cdeb12c2bcec60d7fbe24fbe99d8664)`() const` | Checks whether Details_Optional has been set.

### Members

#### `public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntry_1a37c9f172a892e0dd233755e8ab8f2890) <a id="structFRHAPI__PlayerOrderEntry_1a37c9f172a892e0dd233755e8ab8f2890"></a>

#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntry_1af27144492afcdc51a5b5f075c956dffa) <a id="structFRHAPI__PlayerOrderEntry_1af27144492afcdc51a5b5f075c956dffa"></a>

#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntry_1afd00418312db369b85cb3a86ff9509f7) <a id="structFRHAPI__PlayerOrderEntry_1afd00418312db369b85cb3a86ff9509f7"></a>

true if LootId_Optional has been set to a value

#### `public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a386f1c8c327c0966d0eb759a41a14ec5) <a id="structFRHAPI__PlayerOrderEntry_1a386f1c8c327c0966d0eb759a41a14ec5"></a>

true if LootId_Optional has been explicitly set to null

#### `public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntry_1a73687f8fab41a507f0ef73e76175f9dd) <a id="structFRHAPI__PlayerOrderEntry_1a73687f8fab41a507f0ef73e76175f9dd"></a>

Quantity of Inventory.

#### `public int32 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntry_1a802c1341a21d9fd030e234d2cef82ad9) <a id="structFRHAPI__PlayerOrderEntry_1a802c1341a21d9fd030e234d2cef82ad9"></a>

#### `public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntry_1a879fc70c3d14a1db5d882e6f1e68a307) <a id="structFRHAPI__PlayerOrderEntry_1a879fc70c3d14a1db5d882e6f1e68a307"></a>

true if VendorVersion_Optional has been set to a value

#### `public bool `[`VendorVersion_IsNull`](#structFRHAPI__PlayerOrderEntry_1af1fe73ace8c0bbda05329e215372335c) <a id="structFRHAPI__PlayerOrderEntry_1af1fe73ace8c0bbda05329e215372335c"></a>

true if VendorVersion_Optional has been explicitly set to null

#### `public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntry_1a96404d2f2eac0f6467459d8aa7b4460c) <a id="structFRHAPI__PlayerOrderEntry_1a96404d2f2eac0f6467459d8aa7b4460c"></a>

#### `public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntry_1ab4257754c991af2dd4040bf0009cbc97) <a id="structFRHAPI__PlayerOrderEntry_1ab4257754c991af2dd4040bf0009cbc97"></a>

true if VendorEtag_Optional has been set to a value

#### `public bool `[`VendorEtag_IsNull`](#structFRHAPI__PlayerOrderEntry_1a09d85d5f1e4dff9519947dddae59b6a0) <a id="structFRHAPI__PlayerOrderEntry_1a09d85d5f1e4dff9519947dddae59b6a0"></a>

true if VendorEtag_Optional has been explicitly set to null

#### `public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntry_1ac9d962191f53b6ccb641b318adb9f5cb) <a id="structFRHAPI__PlayerOrderEntry_1ac9d962191f53b6ccb641b318adb9f5cb"></a>

#### `public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntry_1ac3c5d9b9ae603866b22219786fddcb7f) <a id="structFRHAPI__PlayerOrderEntry_1ac3c5d9b9ae603866b22219786fddcb7f"></a>

true if DynamicBundleLootIds_Optional has been set to a value

#### `public bool `[`DynamicBundleLootIds_IsNull`](#structFRHAPI__PlayerOrderEntry_1a9939eae5070542cbda248cf8a07918ad) <a id="structFRHAPI__PlayerOrderEntry_1a9939eae5070542cbda248cf8a07918ad"></a>

true if DynamicBundleLootIds_Optional has been explicitly set to null

#### `public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntry_1ae0d142dad5970d2a31368fc3a8a42175) <a id="structFRHAPI__PlayerOrderEntry_1ae0d142dad5970d2a31368fc3a8a42175"></a>

#### `public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntry_1ad3a9263f522644db2c88f24ee13bef1c) <a id="structFRHAPI__PlayerOrderEntry_1ad3a9263f522644db2c88f24ee13bef1c"></a>

true if PurchasePrice_Optional has been set to a value

#### `public bool `[`PurchasePrice_IsNull`](#structFRHAPI__PlayerOrderEntry_1a54834499ae63c93ff39d8d3248c39e4e) <a id="structFRHAPI__PlayerOrderEntry_1a54834499ae63c93ff39d8d3248c39e4e"></a>

true if PurchasePrice_Optional has been explicitly set to null

#### `public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntry_1a7790f9a333b141c80e9e834f3182288f) <a id="structFRHAPI__PlayerOrderEntry_1a7790f9a333b141c80e9e834f3182288f"></a>

#### `public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a74e920f1fb01339b03e60891fe58430f) <a id="structFRHAPI__PlayerOrderEntry_1a74e920f1fb01339b03e60891fe58430f"></a>

true if ExternalTranId_Optional has been set to a value

#### `public bool `[`ExternalTranId_IsNull`](#structFRHAPI__PlayerOrderEntry_1ae711e02cb8089914b2568c51f4ad058f) <a id="structFRHAPI__PlayerOrderEntry_1ae711e02cb8089914b2568c51f4ad058f"></a>

true if ExternalTranId_Optional has been explicitly set to null

#### `public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntry_1a938707e52b38bc755b29d2978883ba9c) <a id="structFRHAPI__PlayerOrderEntry_1a938707e52b38bc755b29d2978883ba9c"></a>

#### `public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntry_1a799a799b1b2b1409d57cd8c892c3b1d0) <a id="structFRHAPI__PlayerOrderEntry_1a799a799b1b2b1409d57cd8c892c3b1d0"></a>

true if ExternalItemSku_Optional has been set to a value

#### `public bool `[`ExternalItemSku_IsNull`](#structFRHAPI__PlayerOrderEntry_1a958462be1e89b2eec6558270b028f0b0) <a id="structFRHAPI__PlayerOrderEntry_1a958462be1e89b2eec6558270b028f0b0"></a>

true if ExternalItemSku_Optional has been explicitly set to null

#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntry_1a20b811bd0d3523aa6f061f337098c6e1) <a id="structFRHAPI__PlayerOrderEntry_1a20b811bd0d3523aa6f061f337098c6e1"></a>

#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntry_1ac6dab78b7e31604795d902955e00118e) <a id="structFRHAPI__PlayerOrderEntry_1ac6dab78b7e31604795d902955e00118e"></a>

true if UseInventoryBucket_Optional has been set to a value

#### `public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__PlayerOrderEntry_1a203d8cdce19349a9cf49642f8547aa88) <a id="structFRHAPI__PlayerOrderEntry_1a203d8cdce19349a9cf49642f8547aa88"></a>

true if UseInventoryBucket_Optional has been explicitly set to null

#### `public int32 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntry_1aca8eb066046d5cc21f63db1a9b21a4ea) <a id="structFRHAPI__PlayerOrderEntry_1aca8eb066046d5cc21f63db1a9b21a4ea"></a>

#### `public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntry_1ae3c442ea95674cee11512f34c42ce26d) <a id="structFRHAPI__PlayerOrderEntry_1ae3c442ea95674cee11512f34c42ce26d"></a>

true if PlayerPortalEventId_Optional has been set to a value

#### `public bool `[`PlayerPortalEventId_IsNull`](#structFRHAPI__PlayerOrderEntry_1acefb86b0675fc1d3c9351d78e273b7ed) <a id="structFRHAPI__PlayerOrderEntry_1acefb86b0675fc1d3c9351d78e273b7ed"></a>

true if PlayerPortalEventId_Optional has been explicitly set to null

#### `public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntry_1a52a01e1684a9c541cb83610703f2f766) <a id="structFRHAPI__PlayerOrderEntry_1a52a01e1684a9c541cb83610703f2f766"></a>

#### `public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a4344068a1931c9fd603a3004bb4f9937) <a id="structFRHAPI__PlayerOrderEntry_1a4344068a1931c9fd603a3004bb4f9937"></a>

true if InventoryId_Optional has been set to a value

#### `public bool `[`InventoryId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a58e74c9723b3f2a69f1a3cb7d573ae8f) <a id="structFRHAPI__PlayerOrderEntry_1a58e74c9723b3f2a69f1a3cb7d573ae8f"></a>

true if InventoryId_Optional has been explicitly set to null

#### `public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntry_1a69934f80a9591a6f827d57bd1ff6146a) <a id="structFRHAPI__PlayerOrderEntry_1a69934f80a9591a6f827d57bd1ff6146a"></a>

#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a6456d273ba8846113370ede135cd2331) <a id="structFRHAPI__PlayerOrderEntry_1a6456d273ba8846113370ede135cd2331"></a>

true if LegacyInventoryId_Optional has been set to a value

#### `public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a8c5408da36c6096e07c04ef548e589ad) <a id="structFRHAPI__PlayerOrderEntry_1a8c5408da36c6096e07c04ef548e589ad"></a>

true if LegacyInventoryId_Optional has been explicitly set to null

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntry_1a52e414fe5e1451921ef42719a44d187a) <a id="structFRHAPI__PlayerOrderEntry_1a52e414fe5e1451921ef42719a44d187a"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a0a02f71e6df85cdabb41b27c0eb485a7) <a id="structFRHAPI__PlayerOrderEntry_1a0a02f71e6df85cdabb41b27c0eb485a7"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a0acb43f22ee6257a383d998a886b5e14) <a id="structFRHAPI__PlayerOrderEntry_1a0acb43f22ee6257a383d998a886b5e14"></a>

true if ItemId_Optional has been explicitly set to null

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntry_1ac2055e06ef244cfbdf933fe60c4ce5cd) <a id="structFRHAPI__PlayerOrderEntry_1ac2055e06ef244cfbdf933fe60c4ce5cd"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntry_1abe6698f68b08033e04e2de0b278b9de6) <a id="structFRHAPI__PlayerOrderEntry_1abe6698f68b08033e04e2de0b278b9de6"></a>

true if Expires_Optional has been set to a value

#### `public bool `[`Expires_IsNull`](#structFRHAPI__PlayerOrderEntry_1a545fe7fc3db1dfdafdede78e9a3a0d8c) <a id="structFRHAPI__PlayerOrderEntry_1a545fe7fc3db1dfdafdede78e9a3a0d8c"></a>

true if Expires_Optional has been explicitly set to null

#### `public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__PlayerOrderEntry_1a472383e4b1e249f3c2d815449bbe537c) <a id="structFRHAPI__PlayerOrderEntry_1a472383e4b1e249f3c2d815449bbe537c"></a>

#### `public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__PlayerOrderEntry_1a81a5f020214604b56beba1c3e89c6145) <a id="structFRHAPI__PlayerOrderEntry_1a81a5f020214604b56beba1c3e89c6145"></a>

true if XpQuantityTransformType_Optional has been set to a value

#### `public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__PlayerOrderEntry_1a1ff8ea36e6636b9a1565bf7b06fee8f8) <a id="structFRHAPI__PlayerOrderEntry_1a1ff8ea36e6636b9a1565bf7b06fee8f8"></a>

#### `public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__PlayerOrderEntry_1a751ae4972ca6da118892862298f7b9ef) <a id="structFRHAPI__PlayerOrderEntry_1a751ae4972ca6da118892862298f7b9ef"></a>

true if HardQuantityMaximum_Optional has been set to a value

#### `public bool `[`HardQuantityMaximum_IsNull`](#structFRHAPI__PlayerOrderEntry_1a920555fb0da8051b20e7cc88ae14c412) <a id="structFRHAPI__PlayerOrderEntry_1a920555fb0da8051b20e7cc88ae14c412"></a>

true if HardQuantityMaximum_Optional has been explicitly set to null

#### `public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__PlayerOrderEntry_1a5ebe9c64ac3a0e52c504eb0d494af301) <a id="structFRHAPI__PlayerOrderEntry_1a5ebe9c64ac3a0e52c504eb0d494af301"></a>

#### `public bool `[`InventoryOperation_IsSet`](#structFRHAPI__PlayerOrderEntry_1a84c29f1df8fb228a2edfd95f7698464b) <a id="structFRHAPI__PlayerOrderEntry_1a84c29f1df8fb228a2edfd95f7698464b"></a>

true if InventoryOperation_Optional has been set to a value

#### `public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__PlayerOrderEntry_1afdadef5c66eb0e2dce6d848c7dcd6be5) <a id="structFRHAPI__PlayerOrderEntry_1afdadef5c66eb0e2dce6d848c7dcd6be5"></a>

#### `public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__PlayerOrderEntry_1aabbe6fcd96bf2c937340f522dac5d290) <a id="structFRHAPI__PlayerOrderEntry_1aabbe6fcd96bf2c937340f522dac5d290"></a>

true if InventorySelectorType_Optional has been set to a value

#### `public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__PlayerOrderEntry_1a074f68e6bd9b0208de352963a8cf0224) <a id="structFRHAPI__PlayerOrderEntry_1a074f68e6bd9b0208de352963a8cf0224"></a>

#### `public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a848a6c3ee1d4ca3064ae2bfb98e2b008) <a id="structFRHAPI__PlayerOrderEntry_1a848a6c3ee1d4ca3064ae2bfb98e2b008"></a>

true if QuantityMultInventoryItemId_Optional has been set to a value

#### `public bool `[`QuantityMultInventoryItemId_IsNull`](#structFRHAPI__PlayerOrderEntry_1a27e1c9b62a164ce531e21e600f90db01) <a id="structFRHAPI__PlayerOrderEntry_1a27e1c9b62a164ce531e21e600f90db01"></a>

true if QuantityMultInventoryItemId_Optional has been explicitly set to null

#### `public int32 `[`TimeFrameId_Optional`](#structFRHAPI__PlayerOrderEntry_1a528f1c54872cdd52787eef8830de15e0) <a id="structFRHAPI__PlayerOrderEntry_1a528f1c54872cdd52787eef8830de15e0"></a>

#### `public bool `[`TimeFrameId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a7805739b46288065bf7e2b937e7ffe22) <a id="structFRHAPI__PlayerOrderEntry_1a7805739b46288065bf7e2b937e7ffe22"></a>

true if TimeFrameId_Optional has been set to a value

#### `public bool `[`TimeFrameId_IsNull`](#structFRHAPI__PlayerOrderEntry_1aa09eac7e396b1af5384617d97a350261) <a id="structFRHAPI__PlayerOrderEntry_1aa09eac7e396b1af5384617d97a350261"></a>

true if TimeFrameId_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntry_1a5860da51422cd06767a9fc8ed702b7fd) <a id="structFRHAPI__PlayerOrderEntry_1a5860da51422cd06767a9fc8ed702b7fd"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntry_1a3f081309b1a19358505ccef4784d4a29) <a id="structFRHAPI__PlayerOrderEntry_1a3f081309b1a19358505ccef4784d4a29"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntry_1af3651c58c550b5d2c1f81b6ed686dec8) <a id="structFRHAPI__PlayerOrderEntry_1af3651c58c550b5d2c1f81b6ed686dec8"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`EntryId`](#structFRHAPI__PlayerOrderEntry_1abb0b94aa1f1fc24b5ee67639f0c2fdd0) <a id="structFRHAPI__PlayerOrderEntry_1abb0b94aa1f1fc24b5ee67639f0c2fdd0"></a>

Unique Identifier for the Order Entry.

#### `public ERHAPI_PlayerOrderEntryResult `[`Result_Optional`](#structFRHAPI__PlayerOrderEntry_1ae544f7a3ee9b3a5717ffe148d06335fd) <a id="structFRHAPI__PlayerOrderEntry_1ae544f7a3ee9b3a5717ffe148d06335fd"></a>

#### `public bool `[`Result_IsSet`](#structFRHAPI__PlayerOrderEntry_1a51f1b8ab3ddfe711d3b5ce3baba4f11a) <a id="structFRHAPI__PlayerOrderEntry_1a51f1b8ab3ddfe711d3b5ce3baba4f11a"></a>

true if Result_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > `[`Details_Optional`](#structFRHAPI__PlayerOrderEntry_1ad0d38a797491aefcf72ebc1f69fd527d) <a id="structFRHAPI__PlayerOrderEntry_1ad0d38a797491aefcf72ebc1f69fd527d"></a>

Details for the Order Entry.

#### `public bool `[`Details_IsSet`](#structFRHAPI__PlayerOrderEntry_1ab3ea719e706961aee4c9f2f4ecffb99b) <a id="structFRHAPI__PlayerOrderEntry_1ab3ea719e706961aee4c9f2f4ecffb99b"></a>

true if Details_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntry_1a116103f1a97d7348fb509658f41bbfe4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderEntry_1a116103f1a97d7348fb509658f41bbfe4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntry_1aff47bcfbb6ad4d14718e7aac9012f26f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderEntry_1aff47bcfbb6ad4d14718e7aac9012f26f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1a97a139532e0288095dab483ebc013925)`()` <a id="structFRHAPI__PlayerOrderEntry_1a97a139532e0288095dab483ebc013925"></a>

Gets the value of Type.

#### `public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1a9fd467d8f336889f5af7c6a3245bbb24)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a9fd467d8f336889f5af7c6a3245bbb24"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1a47c9903ef38409e1e1b345d73d86babc)`(const ERHAPI_PlayerOrderEntryType & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a47c9903ef38409e1e1b345d73d86babc"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1a73b50a71fdd5826997c139523dc50ca9)`(ERHAPI_PlayerOrderEntryType && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a73b50a71fdd5826997c139523dc50ca9"></a>

Sets the value of Type using move semantics.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a38eae41d3401b9aff70667c2f577029d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a38eae41d3401b9aff70667c2f577029d"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a05a72fee4846e1102ff3de8994b97a7e)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a05a72fee4846e1102ff3de8994b97a7e"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1afcc0610b8080246da58d1a879e08079d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1afcc0610b8080246da58d1a879e08079d"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a96c4186b6cec8faefe54a7fafccf82e0)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a96c4186b6cec8faefe54a7fafccf82e0"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ab61675039166b9a9e77dcf21a2c01c6c)`()` <a id="structFRHAPI__PlayerOrderEntry_1ab61675039166b9a9e77dcf21a2c01c6c"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ace512fdcbe48cd83e6cd766f9931c8b6)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ace512fdcbe48cd83e6cd766f9931c8b6"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1acf706a344641f4777b052951ef6e3919)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1acf706a344641f4777b052951ef6e3919"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1a3c4777caf03d81ec32fa6e0a9bd8fc93)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a3c4777caf03d81ec32fa6e0a9bd8fc93"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced)`()` <a id="structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderEntry_1a117edf4021c7e4f02144ce70bc752f54)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a117edf4021c7e4f02144ce70bc752f54"></a>

Checks whether LootId_Optional has been set.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a1b3f431ef690f0d4399199f5966af906)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a1b3f431ef690f0d4399199f5966af906"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a0af86c8bd92731bdf04328285d1c3ef9)`()` <a id="structFRHAPI__PlayerOrderEntry_1a0af86c8bd92731bdf04328285d1c3ef9"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntry_1ac88a35e2fcefa4f7f1a455bcf82449fd)`()` <a id="structFRHAPI__PlayerOrderEntry_1ac88a35e2fcefa4f7f1a455bcf82449fd"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntry_1aa03341cacd75d00e169fc5b8c9c0aba7)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa03341cacd75d00e169fc5b8c9c0aba7"></a>

Checks whether LootId_Optional is set to null.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a6d3bb03a39a65c087c6b8cfec2b2c852)`()` <a id="structFRHAPI__PlayerOrderEntry_1a6d3bb03a39a65c087c6b8cfec2b2c852"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1aefef7945ed5e12d6b4c70a074cea0de9)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aefef7945ed5e12d6b4c70a074cea0de9"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a269813d3e3068f9a08285920fac51cc6)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a269813d3e3068f9a08285920fac51cc6"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a126de510ca14ecb96d31364c1fbcc686)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a126de510ca14ecb96d31364c1fbcc686"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a86ab71c59766344cf3314dc24f32255b)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a86ab71c59766344cf3314dc24f32255b"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntry_1af8c751930348d16219dfbdcd44468d86)`()` <a id="structFRHAPI__PlayerOrderEntry_1af8c751930348d16219dfbdcd44468d86"></a>

Sets the value of Quantity to its default

#### `public inline int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1aab176636c1fdbab707cfdd649b3413e5)`()` <a id="structFRHAPI__PlayerOrderEntry_1aab176636c1fdbab707cfdd649b3413e5"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a2831e241ff9ced0fb19b36e44f7de1f2)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a2831e241ff9ced0fb19b36e44f7de1f2"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ad4edf50cefd11923081fb9fb222645b1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ad4edf50cefd11923081fb9fb222645b1"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a5ef79b8ada8ac70d8ca68d2738fa3c9a)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a5ef79b8ada8ac70d8ca68d2738fa3c9a"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1a72014c47834292e932d72cecf552dae3)`()` <a id="structFRHAPI__PlayerOrderEntry_1a72014c47834292e932d72cecf552dae3"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1a505976f0f11202a7b1a1ba5e0390e593)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a505976f0f11202a7b1a1ba5e0390e593"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1afc321e581684916e456cb80da1d49501)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1afc321e581684916e456cb80da1d49501"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a71ac509c396ee8b845b9154d03fda4f5)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a71ac509c396ee8b845b9154d03fda4f5"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a)`()` <a id="structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

#### `public inline bool `[`IsVendorVersionSet`](#structFRHAPI__PlayerOrderEntry_1a686f158ba0966791da7e7ebe0573e604)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a686f158ba0966791da7e7ebe0573e604"></a>

Checks whether VendorVersion_Optional has been set.

#### `public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntry_1ab9b080bbb6201eeab73e64ca219c825e)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ab9b080bbb6201eeab73e64ca219c825e"></a>

Returns true if VendorVersion_Optional is set and matches the default value.

#### `public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntry_1af18c13a79f10c83cf8cf909037a40d13)`()` <a id="structFRHAPI__PlayerOrderEntry_1af18c13a79f10c83cf8cf909037a40d13"></a>

Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.

#### `public inline void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntry_1a4811a1a3a7999888bc09d5d5013a2a69)`()` <a id="structFRHAPI__PlayerOrderEntry_1a4811a1a3a7999888bc09d5d5013a2a69"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntry_1a0707d0f99f6c9a5d98469ddcac197e7f)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a0707d0f99f6c9a5d98469ddcac197e7f"></a>

Checks whether VendorVersion_Optional is set to null.

#### `public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a8b3c63f0b51b529b44679ec39f6a7ee9)`()` <a id="structFRHAPI__PlayerOrderEntry_1a8b3c63f0b51b529b44679ec39f6a7ee9"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1ab72821a31197469bd430b85c13383b9a)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ab72821a31197469bd430b85c13383b9a"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1af747864a2b3d8eae901cc48489612409)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1af747864a2b3d8eae901cc48489612409"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a58864651f695d1c391a069f931d04fc7)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a58864651f695d1c391a069f931d04fc7"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1a78a0f2f683ab6f2fccc64144bfd44a5e)`()` <a id="structFRHAPI__PlayerOrderEntry_1a78a0f2f683ab6f2fccc64144bfd44a5e"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1a2df064e520e44b23c2285c1bc91014df)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a2df064e520e44b23c2285c1bc91014df"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a5e3405cbb97be6d385acea9e5107fa51)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a5e3405cbb97be6d385acea9e5107fa51"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a7eb80b05630d6f9aabea66df0fe84ceb)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a7eb80b05630d6f9aabea66df0fe84ceb"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

#### `public inline bool `[`IsVendorEtagSet`](#structFRHAPI__PlayerOrderEntry_1a132055ea3df7088ca4dc34cfae604831)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a132055ea3df7088ca4dc34cfae604831"></a>

Checks whether VendorEtag_Optional has been set.

#### `public inline void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntry_1a2cf9e50718461244f8da4ccaa28a4923)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2cf9e50718461244f8da4ccaa28a4923"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntry_1ac2c4d3c831500153b13b8bb8b67b5db6)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac2c4d3c831500153b13b8bb8b67b5db6"></a>

Checks whether VendorEtag_Optional is set to null.

#### `public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1aaf8e01d475aed4432b8fb04badfa9f7d)`()` <a id="structFRHAPI__PlayerOrderEntry_1aaf8e01d475aed4432b8fb04badfa9f7d"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a890f17423d95aad1ef821dd2a2ce7e2c)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a890f17423d95aad1ef821dd2a2ce7e2c"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1aad316ec6693b4967b4d763d9e877a02b)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1aad316ec6693b4967b4d763d9e877a02b"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2ec0c2bc642c1470c8a6e01fa5c929f5)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a2ec0c2bc642c1470c8a6e01fa5c929f5"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a2b9817c2481516142820cbd8d0bc45c9)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2b9817c2481516142820cbd8d0bc45c9"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a0e35369814e3d3c22409815edec6bac7)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a0e35369814e3d3c22409815edec6bac7"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a3614d6e0d677c9b71f39e95e81625199)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a3614d6e0d677c9b71f39e95e81625199"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1ab88ef1c129858e9d4c2bf45aa61116e8)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ab88ef1c129858e9d4c2bf45aa61116e8"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.

#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

#### `public inline bool `[`IsDynamicBundleLootIdsSet`](#structFRHAPI__PlayerOrderEntry_1a36b6134d7a4c423c3ab1ccfaca3a678e)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a36b6134d7a4c423c3ab1ccfaca3a678e"></a>

Checks whether DynamicBundleLootIds_Optional has been set.

#### `public inline void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntry_1a3a137a9d4fb10baaea127ec73209f939)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3a137a9d4fb10baaea127ec73209f939"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntry_1a558fe5914f96ec9d68ef46545f69b486)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a558fe5914f96ec9d68ef46545f69b486"></a>

Checks whether DynamicBundleLootIds_Optional is set to null.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1aab98096fbc1216be15020c5d46f84ad8)`()` <a id="structFRHAPI__PlayerOrderEntry_1aab98096fbc1216be15020c5d46f84ad8"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1aad590b184f3bfedda5d96d6952a0c976)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aad590b184f3bfedda5d96d6952a0c976"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a3539327d509b9a9b7b8cb16314262658)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a3539327d509b9a9b7b8cb16314262658"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a660c5b9eadbcf3bface57ff655dcaa63)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a660c5b9eadbcf3bface57ff655dcaa63"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1ad764c3e4db9708a7ce656d47cd5011fd)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad764c3e4db9708a7ce656d47cd5011fd"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1a4e581bc7bf0ba0dbdb5a1a81ef7650f8)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a4e581bc7bf0ba0dbdb5a1a81ef7650f8"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a610cb5bd67a8937e545799d5af186f1f)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a610cb5bd67a8937e545799d5af186f1f"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a315656795176c9032fc2e89218050106)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a315656795176c9032fc2e89218050106"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.

#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

#### `public inline bool `[`IsPurchasePriceSet`](#structFRHAPI__PlayerOrderEntry_1a3bb2173ae43283abf288a45bd35a6b2f)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a3bb2173ae43283abf288a45bd35a6b2f"></a>

Checks whether PurchasePrice_Optional has been set.

#### `public inline void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntry_1a3f72a317982b7cc1a794d9b1904bcdfa)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3f72a317982b7cc1a794d9b1904bcdfa"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntry_1a76435ec08bc1cb51ba5b286fc418ce24)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a76435ec08bc1cb51ba5b286fc418ce24"></a>

Checks whether PurchasePrice_Optional is set to null.

#### `public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1ae992d9e998ea1f2435c0732e118377b8)`()` <a id="structFRHAPI__PlayerOrderEntry_1ae992d9e998ea1f2435c0732e118377b8"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1afde91d137b08bd4d72fb470c877d1aef)`() const` <a id="structFRHAPI__PlayerOrderEntry_1afde91d137b08bd4d72fb470c877d1aef"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a60db235df611f42cd8999c85f2b2ac06)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a60db235df611f42cd8999c85f2b2ac06"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a256df8b376732391c16565393083c1f3)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a256df8b376732391c16565393083c1f3"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a34e89d56d538ab20d144310f622a81e6)`()` <a id="structFRHAPI__PlayerOrderEntry_1a34e89d56d538ab20d144310f622a81e6"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a0e9d33881fe17939b7bb81b6517747c5)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a0e9d33881fe17939b7bb81b6517747c5"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a8b7385f81264b5e882780527dabee03c)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a8b7385f81264b5e882780527dabee03c"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1aaa2213677fe7a197edbe646d81629fa0)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aaa2213677fe7a197edbe646d81629fa0"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

#### `public inline bool `[`IsExternalTranIdSet`](#structFRHAPI__PlayerOrderEntry_1ab583e7265a32b194ff1f150556a17d27)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ab583e7265a32b194ff1f150556a17d27"></a>

Checks whether ExternalTranId_Optional has been set.

#### `public inline void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntry_1a082e64ee527938e1fdb44ec555aade5a)`()` <a id="structFRHAPI__PlayerOrderEntry_1a082e64ee527938e1fdb44ec555aade5a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntry_1adf0524c1e8a447dba52ad99ba8c06be3)`() const` <a id="structFRHAPI__PlayerOrderEntry_1adf0524c1e8a447dba52ad99ba8c06be3"></a>

Checks whether ExternalTranId_Optional is set to null.

#### `public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a44317cd480a2a5537ac1e7eb2da11537)`()` <a id="structFRHAPI__PlayerOrderEntry_1a44317cd480a2a5537ac1e7eb2da11537"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1af0af2ec99c93898f5423cc2054eedfd6)`() const` <a id="structFRHAPI__PlayerOrderEntry_1af0af2ec99c93898f5423cc2054eedfd6"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a2e88f0abd86547555ba5e27c996b3213)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a2e88f0abd86547555ba5e27c996b3213"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1adbc73633887c8f5beb4d5fd415be4b19)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1adbc73633887c8f5beb4d5fd415be4b19"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1a2d6512b28debba583322d448d52f4e19)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2d6512b28debba583322d448d52f4e19"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1acf6afbb7314afc95ca6f2204f5b99694)`() const` <a id="structFRHAPI__PlayerOrderEntry_1acf6afbb7314afc95ca6f2204f5b99694"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1ac5259d6a126f001a30d79a326e23c52f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ac5259d6a126f001a30d79a326e23c52f"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a073f157e38422f06c3e6ff3e4a27e3ec)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a073f157e38422f06c3e6ff3e4a27e3ec"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255)`()` <a id="structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

#### `public inline bool `[`IsExternalItemSkuSet`](#structFRHAPI__PlayerOrderEntry_1a36b0375093d864e192c85b629e71e148)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a36b0375093d864e192c85b629e71e148"></a>

Checks whether ExternalItemSku_Optional has been set.

#### `public inline void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntry_1ada8c6305dbb5641671da160fec15135f)`()` <a id="structFRHAPI__PlayerOrderEntry_1ada8c6305dbb5641671da160fec15135f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntry_1a92a4e958ce7a4291931a6134459b1031)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a92a4e958ce7a4291931a6134459b1031"></a>

Checks whether ExternalItemSku_Optional is set to null.

#### `public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1aeba532b8c1e00b0868608bd88d2e48fe)`()` <a id="structFRHAPI__PlayerOrderEntry_1aeba532b8c1e00b0868608bd88d2e48fe"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a4e715a000932a31eb343561a55921905)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a4e715a000932a31eb343561a55921905"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1ac79b7c4ca338604d92cbb17797c4fc5f)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ac79b7c4ca338604d92cbb17797c4fc5f"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a1551a4d915e88701c893193c51928e14)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a1551a4d915e88701c893193c51928e14"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1a067aa36feca998a77a3783aac88751ea)`()` <a id="structFRHAPI__PlayerOrderEntry_1a067aa36feca998a77a3783aac88751ea"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1afd667b4812a3555f414a9a81f589a2f3)`() const` <a id="structFRHAPI__PlayerOrderEntry_1afd667b4812a3555f414a9a81f589a2f3"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a1d042f196406331b6adb48519801e9ee)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a1d042f196406331b6adb48519801e9ee"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a8ac7d9a23b65c8fe97f570823c0b4535)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a8ac7d9a23b65c8fe97f570823c0b4535"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c)`()` <a id="structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__PlayerOrderEntry_1a84101d9aee4d121b4fe319b958fff0f5)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a84101d9aee4d121b4fe319b958fff0f5"></a>

Checks whether UseInventoryBucket_Optional has been set.

#### `public inline void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntry_1a9c20d3047e5692b83e13038ca56debb8)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9c20d3047e5692b83e13038ca56debb8"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntry_1af3f9f3a7707bb215ed4752ce422c6dba)`() const` <a id="structFRHAPI__PlayerOrderEntry_1af3f9f3a7707bb215ed4752ce422c6dba"></a>

Checks whether UseInventoryBucket_Optional is set to null.

#### `public inline int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a9824d514e1188b55ae2588d7cc96a084)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9824d514e1188b55ae2588d7cc96a084"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1af6682b35474ef077e857585f3f2890b0)`() const` <a id="structFRHAPI__PlayerOrderEntry_1af6682b35474ef077e857585f3f2890b0"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a7ed7042379f9e8bd0230958814139787)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a7ed7042379f9e8bd0230958814139787"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1af3d982f26b119949cacbcd487eb4662b)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1af3d982f26b119949cacbcd487eb4662b"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1adb1c34a0f64a693a36c930fe5b931ee5)`()` <a id="structFRHAPI__PlayerOrderEntry_1adb1c34a0f64a693a36c930fe5b931ee5"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a653a5b374346e3bb70d2ffd675d30406)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a653a5b374346e3bb70d2ffd675d30406"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a9e1a71dac67b2a93efd42813fcfdbeab)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a9e1a71dac67b2a93efd42813fcfdbeab"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1afeec42bc5948f3c4a41fbce7029e3439)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1afeec42bc5948f3c4a41fbce7029e3439"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20)`()` <a id="structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

#### `public inline bool `[`IsPlayerPortalEventIdSet`](#structFRHAPI__PlayerOrderEntry_1ae509fcc39ccbffd0dc8144208cfb6505)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ae509fcc39ccbffd0dc8144208cfb6505"></a>

Checks whether PlayerPortalEventId_Optional has been set.

#### `public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a0ef83ed4fb13f902e26bb4efce9c4303)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a0ef83ed4fb13f902e26bb4efce9c4303"></a>

Returns true if PlayerPortalEventId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a47c41382298220a7528123b8fc6742b9)`()` <a id="structFRHAPI__PlayerOrderEntry_1a47c41382298220a7528123b8fc6742b9"></a>

Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.

#### `public inline void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntry_1aea64041faf1c302827e31520a7c413da)`()` <a id="structFRHAPI__PlayerOrderEntry_1aea64041faf1c302827e31520a7c413da"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntry_1abd25a994bf8fa8b72488cb1552588aef)`() const` <a id="structFRHAPI__PlayerOrderEntry_1abd25a994bf8fa8b72488cb1552588aef"></a>

Checks whether PlayerPortalEventId_Optional is set to null.

#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a64241f5392a436ef3cd9ddd916a6131f)`()` <a id="structFRHAPI__PlayerOrderEntry_1a64241f5392a436ef3cd9ddd916a6131f"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a415ec1d0962291160efe932a528d76a4)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a415ec1d0962291160efe932a528d76a4"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad19b3c2bef861e60d898349f45467112)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ad19b3c2bef861e60d898349f45467112"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a73772840636cbe0c7363934f69c9e502)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a73772840636cbe0c7363934f69c9e502"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a78ad32dc093e190061691381834bcfdd)`()` <a id="structFRHAPI__PlayerOrderEntry_1a78ad32dc093e190061691381834bcfdd"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a8ced15bea8e922094a23f3f061508e1e)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a8ced15bea8e922094a23f3f061508e1e"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a1e1b5643bf447d5b6dd811b3ba6abf1f)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a1e1b5643bf447d5b6dd811b3ba6abf1f"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad1e1fc2194398a2e253a6097138c6113)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ad1e1fc2194398a2e253a6097138c6113"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

#### `public inline bool `[`IsInventoryIdSet`](#structFRHAPI__PlayerOrderEntry_1ae9bcf79c909bd337a92a52d7b116e594)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ae9bcf79c909bd337a92a52d7b116e594"></a>

Checks whether InventoryId_Optional has been set.

#### `public inline void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntry_1aff773a659fd1b51449df8d879f7872b6)`()` <a id="structFRHAPI__PlayerOrderEntry_1aff773a659fd1b51449df8d879f7872b6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntry_1a60b45670d644f652ecde26b814f7bf2c)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a60b45670d644f652ecde26b814f7bf2c"></a>

Checks whether InventoryId_Optional is set to null.

#### `public inline int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad9c3757b906a9cb8b8a1f3cc531f6567)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad9c3757b906a9cb8b8a1f3cc531f6567"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a8a16ad6e334db4c78b35f3a5908a1904)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a8a16ad6e334db4c78b35f3a5908a1904"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ab3111162ab4ca86302cbe2b4f19c195e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ab3111162ab4ca86302cbe2b4f19c195e"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a165112ee0ea0aa1e2d5504613359913f)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a165112ee0ea0aa1e2d5504613359913f"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a85232829e440a419916603709a5b5318)`()` <a id="structFRHAPI__PlayerOrderEntry_1a85232829e440a419916603709a5b5318"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a870cdee3c58d9745ff47974b77c81be7)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a870cdee3c58d9745ff47974b77c81be7"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a39fcf42f52422e1002d9a28f3ef8621f)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a39fcf42f52422e1002d9a28f3ef8621f"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad9c36c203811e3f1d240f23d2cb45c1c)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ad9c36c203811e3f1d240f23d2cb45c1c"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__PlayerOrderEntry_1a5830ea3ebd612fcf65c0ac2df6c7fb3c)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a5830ea3ebd612fcf65c0ac2df6c7fb3c"></a>

Checks whether LegacyInventoryId_Optional has been set.

#### `public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1ac808088c9eeeee7894c5c0cade3c9ff6)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac808088c9eeeee7894c5c0cade3c9ff6"></a>

Returns true if LegacyInventoryId_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a80846e6e79fb29128c25cd5b62713a8d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a80846e6e79fb29128c25cd5b62713a8d"></a>

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntry_1a302b323ebb2b0195df4e3f8a2828448d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a302b323ebb2b0195df4e3f8a2828448d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntry_1ac7ae41929d773b459e78542bdc9d4150)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac7ae41929d773b459e78542bdc9d4150"></a>

Checks whether LegacyInventoryId_Optional is set to null.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a7d5c3cd91a4814bb69b25693fb3a018b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7d5c3cd91a4814bb69b25693fb3a018b"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a188d7d5aab4a0284e302399e53415d63)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a188d7d5aab4a0284e302399e53415d63"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a81c43858eddc973d46b35c8496c5a55e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a81c43858eddc973d46b35c8496c5a55e"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a28a395b17d5811c27c708263e2a8dc68)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a28a395b17d5811c27c708263e2a8dc68"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a4fad4df9f4d4bd661d860abc1fdaa9d6)`()` <a id="structFRHAPI__PlayerOrderEntry_1a4fad4df9f4d4bd661d860abc1fdaa9d6"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1abbca6b77488f23155be78d9c57862bdb)`() const` <a id="structFRHAPI__PlayerOrderEntry_1abbca6b77488f23155be78d9c57862bdb"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1aad255d356685fadaccca6828bed855cf)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aad255d356685fadaccca6828bed855cf"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1aede1dcbb51f07f8d8962b22e491d3190)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aede1dcbb51f07f8d8962b22e491d3190"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb)`()` <a id="structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__PlayerOrderEntry_1a8ad46fefd5ae607d3730e74f9629677c)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a8ad46fefd5ae607d3730e74f9629677c"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1afafe7941ee4f8c1ba75913e7bccacd90)`() const` <a id="structFRHAPI__PlayerOrderEntry_1afafe7941ee4f8c1ba75913e7bccacd90"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntry_1ad5816fde2e23de11f7264dcfe1d6316e)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad5816fde2e23de11f7264dcfe1d6316e"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntry_1af54a7c8aa94667e32f280c02042a9401)`()` <a id="structFRHAPI__PlayerOrderEntry_1af54a7c8aa94667e32f280c02042a9401"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntry_1a1af1c276b20bc42cbd184f752e47ee35)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a1af1c276b20bc42cbd184f752e47ee35"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a9ee0284efa42cdda902f3e7bd1c1ce9d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9ee0284efa42cdda902f3e7bd1c1ce9d"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1aa6e2375bfd1227dd45aaea26a49608bc)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa6e2375bfd1227dd45aaea26a49608bc"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a8a56781f58fe48de36bbc8263eb4367f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a8a56781f58fe48de36bbc8263eb4367f"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a637ab431c4103401d2b7340e4f7c6cf8)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a637ab431c4103401d2b7340e4f7c6cf8"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1a63d7efec9d1dd19e1e1eebbdba049cf6)`()` <a id="structFRHAPI__PlayerOrderEntry_1a63d7efec9d1dd19e1e1eebbdba049cf6"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1a1a2c2c0f487597865f28c0cd3a3af498)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a1a2c2c0f487597865f28c0cd3a3af498"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1add413b325d1d89aabdb8a630daf2a7a5)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1add413b325d1d89aabdb8a630daf2a7a5"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1a7c2cec28f2e81186a0d9dcdfbe1bcd18)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a7c2cec28f2e81186a0d9dcdfbe1bcd18"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498)`()` <a id="structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline bool `[`IsExpiresSet`](#structFRHAPI__PlayerOrderEntry_1aa3eda82349b4c470e49de59d3f91aeee)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa3eda82349b4c470e49de59d3f91aeee"></a>

Checks whether Expires_Optional has been set.

#### `public inline void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntry_1ad4d70743dfbb03ef6008c317b28ca72e)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad4d70743dfbb03ef6008c317b28ca72e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntry_1aafc0739d18897bed4acb7e49b0dc4e01)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aafc0739d18897bed4acb7e49b0dc4e01"></a>

Checks whether Expires_Optional is set to null.

#### `public inline ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1ad293b009967e00aaa2c43c1543552f36)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad293b009967e00aaa2c43c1543552f36"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1aa39fdfeef8ad558f55d83f18d609d3a3)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa39fdfeef8ad558f55d83f18d609d3a3"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1af6f880f557c0a56a40dccae9412ac2b5)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1af6f880f557c0a56a40dccae9412ac2b5"></a>

Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1abdad81b6aa12cb72ddfb5726e0eaca99)`(ERHAPI_XpQuantityTransform & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1abdad81b6aa12cb72ddfb5726e0eaca99"></a>

Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a91a7fadcda3606114161fcf84d38c103)`()` <a id="structFRHAPI__PlayerOrderEntry_1a91a7fadcda3606114161fcf84d38c103"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a1f8ea24669daaaca46a6b7b20bca5dbd)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a1f8ea24669daaaca46a6b7b20bca5dbd"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a43def06166f402955d9b2103b5660b3c)`(const ERHAPI_XpQuantityTransform & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a43def06166f402955d9b2103b5660b3c"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.

#### `public inline void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1aed2e4249d46947414fe622102ba35edb)`(ERHAPI_XpQuantityTransform && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aed2e4249d46947414fe622102ba35edb"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.

#### `public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1af1a363b72f25bd7239155293f4f9ec68)`()` <a id="structFRHAPI__PlayerOrderEntry_1af1a363b72f25bd7239155293f4f9ec68"></a>

Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.

#### `public inline bool `[`IsXpQuantityTransformTypeSet`](#structFRHAPI__PlayerOrderEntry_1a2d0e68544bf5d8534347eb11c28ebdee)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a2d0e68544bf5d8534347eb11c28ebdee"></a>

Checks whether XpQuantityTransformType_Optional has been set.

#### `public inline int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a084949fcc29bab14afb39ce834450deb)`()` <a id="structFRHAPI__PlayerOrderEntry_1a084949fcc29bab14afb39ce834450deb"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a39185dbbc2aa0017286d00066c4ecb9d)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a39185dbbc2aa0017286d00066c4ecb9d"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1aa9634160f04e93ed5a4b8ebf348d2866)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1aa9634160f04e93ed5a4b8ebf348d2866"></a>

Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a0eb683913f19188e78397af1aef0c8bc)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a0eb683913f19188e78397af1aef0c8bc"></a>

Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntry_1ad864fca60e21bf6e1b699a74226fa6b4)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad864fca60e21bf6e1b699a74226fa6b4"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntry_1aae88ce272d2554d7bf1b942fbe0562d3)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aae88ce272d2554d7bf1b942fbe0562d3"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1ad840800cd1a4e0bacaff203c25974276)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ad840800cd1a4e0bacaff203c25974276"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.

#### `public inline void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1abf9806cefd43303f22b6e3a9ba717512)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1abf9806cefd43303f22b6e3a9ba717512"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.

#### `public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a0d4e1c10a15b858b5386caa07c2e96fb)`()` <a id="structFRHAPI__PlayerOrderEntry_1a0d4e1c10a15b858b5386caa07c2e96fb"></a>

Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.

#### `public inline bool `[`IsHardQuantityMaximumSet`](#structFRHAPI__PlayerOrderEntry_1af8c756c8671b3e29d1b4e27f58873d21)`() const` <a id="structFRHAPI__PlayerOrderEntry_1af8c756c8671b3e29d1b4e27f58873d21"></a>

Checks whether HardQuantityMaximum_Optional has been set.

#### `public inline bool `[`IsHardQuantityMaximumDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a1c6c34160ccb10f744da0706b3a7ca70)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a1c6c34160ccb10f744da0706b3a7ca70"></a>

Returns true if HardQuantityMaximum_Optional is set and matches the default value.

#### `public inline void `[`SetHardQuantityMaximumToDefault`](#structFRHAPI__PlayerOrderEntry_1a3e5d19d676791a3a88136edc44cf81f2)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3e5d19d676791a3a88136edc44cf81f2"></a>

Sets the value of HardQuantityMaximum_Optional to its default and also sets HardQuantityMaximum_IsSet to true.

#### `public inline void `[`SetHardQuantityMaximumToNull`](#structFRHAPI__PlayerOrderEntry_1a999f9daa1153d6335570be4c6e3a4524)`()` <a id="structFRHAPI__PlayerOrderEntry_1a999f9daa1153d6335570be4c6e3a4524"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsHardQuantityMaximumNull`](#structFRHAPI__PlayerOrderEntry_1ac6148e951fdd4abbfcfe1b5be80dd020)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac6148e951fdd4abbfcfe1b5be80dd020"></a>

Checks whether HardQuantityMaximum_Optional is set to null.

#### `public inline ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a636b1a8710ca3619b4c5df5a9c4339f5)`()` <a id="structFRHAPI__PlayerOrderEntry_1a636b1a8710ca3619b4c5df5a9c4339f5"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a560c761854bc79517efa42d39da53711)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a560c761854bc79517efa42d39da53711"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a8faf892f1a1d2187dcf7f3418c5c6353)`(const ERHAPI_InventoryOperation & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a8faf892f1a1d2187dcf7f3418c5c6353"></a>

Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a2404cb8ab54a522001138e773fe5bbb6)`(ERHAPI_InventoryOperation & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a2404cb8ab54a522001138e773fe5bbb6"></a>

Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntry_1a7feaa9800f72100807605e97fef6e96f)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7feaa9800f72100807605e97fef6e96f"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntry_1ad3ca864ddbdf7a1c44d53d019c270121)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad3ca864ddbdf7a1c44d53d019c270121"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a475500cc0a062597b6139967cf6b3c52)`(const ERHAPI_InventoryOperation & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a475500cc0a062597b6139967cf6b3c52"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.

#### `public inline void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1ac94a5b14f9c3bc95176cacf588825f96)`(ERHAPI_InventoryOperation && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ac94a5b14f9c3bc95176cacf588825f96"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1ab92bdc18ce1497d9a56cacab6131ef72)`()` <a id="structFRHAPI__PlayerOrderEntry_1ab92bdc18ce1497d9a56cacab6131ef72"></a>

Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.

#### `public inline bool `[`IsInventoryOperationSet`](#structFRHAPI__PlayerOrderEntry_1a7abc8e3118aab885841c4bca7f532dd8)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a7abc8e3118aab885841c4bca7f532dd8"></a>

Checks whether InventoryOperation_Optional has been set.

#### `public inline ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a9985301ac636d22ad9eec6dd56703e9d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9985301ac636d22ad9eec6dd56703e9d"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a0be238687c7ccd5b6233aa4f56eac0fc)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a0be238687c7ccd5b6233aa4f56eac0fc"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1abdd6b8431e879443bf9d2ce2e5f2c823)`(const ERHAPI_InventorySelector & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1abdd6b8431e879443bf9d2ce2e5f2c823"></a>

Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1ade1466e6373373ccd250a9cd70b7e8b4)`(ERHAPI_InventorySelector & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ade1466e6373373ccd250a9cd70b7e8b4"></a>

Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1afcd0efefd26b31edda8fea9fdc254b37)`()` <a id="structFRHAPI__PlayerOrderEntry_1afcd0efefd26b31edda8fea9fdc254b37"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1af4be4e0ab21e692bedd7ea661b1c5bf7)`() const` <a id="structFRHAPI__PlayerOrderEntry_1af4be4e0ab21e692bedd7ea661b1c5bf7"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a99de8e341d145a311e884dd379e8d6e9)`(const ERHAPI_InventorySelector & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a99de8e341d145a311e884dd379e8d6e9"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.

#### `public inline void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a6048f0775a41fd381d50e8cc7f584457)`(ERHAPI_InventorySelector && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a6048f0775a41fd381d50e8cc7f584457"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.

#### `public inline void `[`ClearInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a912922f8eaf5e5f00dec944b4d4ea90c)`()` <a id="structFRHAPI__PlayerOrderEntry_1a912922f8eaf5e5f00dec944b4d4ea90c"></a>

Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.

#### `public inline bool `[`IsInventorySelectorTypeSet`](#structFRHAPI__PlayerOrderEntry_1a81d8afc17514da929e6143299a149e56)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a81d8afc17514da929e6143299a149e56"></a>

Checks whether InventorySelectorType_Optional has been set.

#### `public inline int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1ad3ea5f811d095745dbbe3c489ab2d591)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad3ea5f811d095745dbbe3c489ab2d591"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1adf25b501748f72eedc087cb4cb2861e3)`() const` <a id="structFRHAPI__PlayerOrderEntry_1adf25b501748f72eedc087cb4cb2861e3"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a94f6b361e16cdecaa628db677d24689d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a94f6b361e16cdecaa628db677d24689d"></a>

Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a5305e6d40ebf3a93ad90f97967ca20e8)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a5305e6d40ebf3a93ad90f97967ca20e8"></a>

Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a3774ff96c32f337becbdc9b4e825a125)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3774ff96c32f337becbdc9b4e825a125"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a79f451893a3a2831493fc415d36ce9ec)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a79f451893a3a2831493fc415d36ce9ec"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aca0184113393c62d3488cb493e4bc85c)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aca0184113393c62d3488cb493e4bc85c"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.

#### `public inline void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1ae86098b46352599e9d7395871e22dc56)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ae86098b46352599e9d7395871e22dc56"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aae6fbea37c628082f2dd3b9f3c7773c8)`()` <a id="structFRHAPI__PlayerOrderEntry_1aae6fbea37c628082f2dd3b9f3c7773c8"></a>

Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.

#### `public inline bool `[`IsQuantityMultInventoryItemIdSet`](#structFRHAPI__PlayerOrderEntry_1a662aad1adf43640415292ee20235c46f)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a662aad1adf43640415292ee20235c46f"></a>

Checks whether QuantityMultInventoryItemId_Optional has been set.

#### `public inline bool `[`IsQuantityMultInventoryItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a870c51e2ac2ec930c8624e1da0dc8e58)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a870c51e2ac2ec930c8624e1da0dc8e58"></a>

Returns true if QuantityMultInventoryItemId_Optional is set and matches the default value.

#### `public inline void `[`SetQuantityMultInventoryItemIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a43cc1d25e7a9483c3e6f8dfeb04c433d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a43cc1d25e7a9483c3e6f8dfeb04c433d"></a>

Sets the value of QuantityMultInventoryItemId_Optional to its default and also sets QuantityMultInventoryItemId_IsSet to true.

#### `public inline void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__PlayerOrderEntry_1a49e1f65be7f809b78417b5ade39dc8ab)`()` <a id="structFRHAPI__PlayerOrderEntry_1a49e1f65be7f809b78417b5ade39dc8ab"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__PlayerOrderEntry_1a92eed86c1696435460b3220e92d2a07d)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a92eed86c1696435460b3220e92d2a07d"></a>

Checks whether QuantityMultInventoryItemId_Optional is set to null.

#### `public inline int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1aed96141f95266a22b4da5307cc643833)`()` <a id="structFRHAPI__PlayerOrderEntry_1aed96141f95266a22b4da5307cc643833"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1afdcde850d4e62f0359673bc26d3dd865)`() const` <a id="structFRHAPI__PlayerOrderEntry_1afdcde850d4e62f0359673bc26d3dd865"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a87aba85adff8586f1bbf35dba6fb3753)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a87aba85adff8586f1bbf35dba6fb3753"></a>

Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a79dd71c0a2b6f9b7095190172846910a)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a79dd71c0a2b6f9b7095190172846910a"></a>

Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a10a532e64b8b55b456303614532a46f5)`()` <a id="structFRHAPI__PlayerOrderEntry_1a10a532e64b8b55b456303614532a46f5"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aefd38654b2eaa5450e5d36c282df8f6b)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aefd38654b2eaa5450e5d36c282df8f6b"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1ae8b54d4f40f745e318a85aeef0b83fce)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ae8b54d4f40f745e318a85aeef0b83fce"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.

#### `public inline void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a08984bd95b9eb75236e98bf13442cc89)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a08984bd95b9eb75236e98bf13442cc89"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.

#### `public inline void `[`ClearTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1afb8bbf3489bbb636bf8a22d22edfacb4)`()` <a id="structFRHAPI__PlayerOrderEntry_1afb8bbf3489bbb636bf8a22d22edfacb4"></a>

Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.

#### `public inline bool `[`IsTimeFrameIdSet`](#structFRHAPI__PlayerOrderEntry_1adfb3a88c0474a59e4f971e33e76c70a7)`() const` <a id="structFRHAPI__PlayerOrderEntry_1adfb3a88c0474a59e4f971e33e76c70a7"></a>

Checks whether TimeFrameId_Optional has been set.

#### `public inline bool `[`IsTimeFrameIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1aaea604a119d99f86a9cc3713d8432747)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aaea604a119d99f86a9cc3713d8432747"></a>

Returns true if TimeFrameId_Optional is set and matches the default value.

#### `public inline void `[`SetTimeFrameIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a0f4813ddac40ec781995ce625c660a50)`()` <a id="structFRHAPI__PlayerOrderEntry_1a0f4813ddac40ec781995ce625c660a50"></a>

Sets the value of TimeFrameId_Optional to its default and also sets TimeFrameId_IsSet to true.

#### `public inline void `[`SetTimeFrameIdToNull`](#structFRHAPI__PlayerOrderEntry_1af2de89f04baced0157aa5509d6fdfa18)`()` <a id="structFRHAPI__PlayerOrderEntry_1af2de89f04baced0157aa5509d6fdfa18"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTimeFrameIdNull`](#structFRHAPI__PlayerOrderEntry_1a5f197189d6f9947218bc3f2ebfc5e8c3)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a5f197189d6f9947218bc3f2ebfc5e8c3"></a>

Checks whether TimeFrameId_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a7fd2601080efdb424cd88c664fe35471)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7fd2601080efdb424cd88c664fe35471"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1ad9815ad54fe34e226744d25cd35af6b0)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad9815ad54fe34e226744d25cd35af6b0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1aa1bc1485293c85af4d29812fa0a60759)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1aa1bc1485293c85af4d29812fa0a60759"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a38c1fed0ba760bffc5cd8c90f50759b7)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a38c1fed0ba760bffc5cd8c90f50759b7"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1a60744be36eeb0d8c870172be520ef568)`()` <a id="structFRHAPI__PlayerOrderEntry_1a60744be36eeb0d8c870172be520ef568"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1afb6635d2b2f45f67c15095c7b4cc633b)`() const` <a id="structFRHAPI__PlayerOrderEntry_1afb6635d2b2f45f67c15095c7b4cc633b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1a17b9d6e1387c856ed31882d7bc61880c)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a17b9d6e1387c856ed31882d7bc61880c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1ac11f0a79327d6362220f8ab3f4d0393b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ac11f0a79327d6362220f8ab3f4d0393b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerOrderEntry_1a6d5c99d527de7d9c1dfd0bb777d81a34)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a6d5c99d527de7d9c1dfd0bb777d81a34"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntry_1a1ed2791ec8d268fca68ab8e93b78ffaf)`()` <a id="structFRHAPI__PlayerOrderEntry_1a1ed2791ec8d268fca68ab8e93b78ffaf"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntry_1a0f60c2ed90914cd378ae36128485e765)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a0f60c2ed90914cd378ae36128485e765"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1a82f058ea5de80123a64f33b8f157fb22)`()` <a id="structFRHAPI__PlayerOrderEntry_1a82f058ea5de80123a64f33b8f157fb22"></a>

Gets the value of EntryId.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1a577aa871875450821066d890962966e8)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a577aa871875450821066d890962966e8"></a>

Gets the value of EntryId.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1ae55affd8c250183e4596e3cce0284a2b)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ae55affd8c250183e4596e3cce0284a2b"></a>

Sets the value of EntryId.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1aa0d3a9527909745af100b6ee5dd4f989)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aa0d3a9527909745af100b6ee5dd4f989"></a>

Sets the value of EntryId using move semantics.

#### `public inline ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a2d15b4fb272a260f1b4af6a697cf4091)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2d15b4fb272a260f1b4af6a697cf4091"></a>

Gets the value of Result_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a7e49013b47283d376562c319ce1d00e4)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a7e49013b47283d376562c319ce1d00e4"></a>

Gets the value of Result_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1ae70042feb43faee34255d828ac30971f)`(const ERHAPI_PlayerOrderEntryResult & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ae70042feb43faee34255d828ac30971f"></a>

Gets the value of Result_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1aab0ff9878d55188c46aeb50951e7743f)`(ERHAPI_PlayerOrderEntryResult & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1aab0ff9878d55188c46aeb50951e7743f"></a>

Fills OutValue with the value of Result_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a184e7f38331c108f34b74f506a18d039)`()` <a id="structFRHAPI__PlayerOrderEntry_1a184e7f38331c108f34b74f506a18d039"></a>

Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a568ff508719d57c81412f1e42cbca789)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a568ff508719d57c81412f1e42cbca789"></a>

Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1a8a12a6dbe37b3b584ee95b21f8f67eef)`(const ERHAPI_PlayerOrderEntryResult & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a8a12a6dbe37b3b584ee95b21f8f67eef"></a>

Sets the value of Result_Optional and also sets Result_IsSet to true.

#### `public inline void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1a222c90006bfff2cc834ceb3e4fcc0b36)`(ERHAPI_PlayerOrderEntryResult && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a222c90006bfff2cc834ceb3e4fcc0b36"></a>

Sets the value of Result_Optional and also sets Result_IsSet to true using move semantics.

#### `public inline void `[`ClearResult`](#structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f"></a>

Clears the value of Result_Optional and sets Result_IsSet to false.

#### `public inline bool `[`IsResultSet`](#structFRHAPI__PlayerOrderEntry_1aa4c21e507277ff92ba824cfce7f61014)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa4c21e507277ff92ba824cfce7f61014"></a>

Checks whether Result_Optional has been set.

#### `public inline TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1ae2415a9af815f9ba58973737ccd4cd9e)`()` <a id="structFRHAPI__PlayerOrderEntry_1ae2415a9af815f9ba58973737ccd4cd9e"></a>

Gets the value of Details_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1aec5a9c7d4d0a8cac324a54058cfc5b20)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aec5a9c7d4d0a8cac324a54058cfc5b20"></a>

Gets the value of Details_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1ae210b349de7ab97b14b8b8e993c5abe1)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ae210b349de7ab97b14b8b8e993c5abe1"></a>

Gets the value of Details_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1acd22460bab7ca52aa6609b54384a74b2)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1acd22460bab7ca52aa6609b54384a74b2"></a>

Fills OutValue with the value of Details_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1ad4263f8e7aa5c642782fc79ab165b72a)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad4263f8e7aa5c642782fc79ab165b72a"></a>

Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a161b43909c6d0d0add4b66627b36c91a)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a161b43909c6d0d0add4b66627b36c91a"></a>

Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1a3cf7913984469918bdc4791bfacf0cae)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a3cf7913984469918bdc4791bfacf0cae"></a>

Sets the value of Details_Optional and also sets Details_IsSet to true.

#### `public inline void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1a5aab1a08f98143caa5bd53fb0be6614e)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a5aab1a08f98143caa5bd53fb0be6614e"></a>

Sets the value of Details_Optional and also sets Details_IsSet to true using move semantics.

#### `public inline void `[`ClearDetails`](#structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38)`()` <a id="structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38"></a>

Clears the value of Details_Optional and sets Details_IsSet to false.

#### `public inline bool `[`IsDetailsSet`](#structFRHAPI__PlayerOrderEntry_1a4cdeb12c2bcec60d7fbe24fbe99d8664)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a4cdeb12c2bcec60d7fbe24fbe99d8664"></a>

Checks whether Details_Optional has been set.

