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
`public inline FORCEINLINE ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1af7d4325530ec054a5b3f9d62f2b6e6ca)`()` | Gets the value of Type.
`public inline FORCEINLINE const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1a430f8fcb0fe9b50ed6da48d465e2900b)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1a45b93ba87a92d381beee7178f2f4695a)`(const ERHAPI_PlayerOrderEntryType & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1ac5574d6c254a823218a66f7a8537e429)`(ERHAPI_PlayerOrderEntryType && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a2c2731d474db5763ebe53ff92f186460)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a24c34898831f144cca0896b42ab6f605)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1ab6ce7221e00b5d392ee5cdc92dfe868d)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1ab6f5a74baef6f05db3f809a51e4c85c5)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ab6e3adcfbb1fb57cba3242d115a08cfb)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a3192c16f2b49bc882cd51e6e06ec0841)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1a301576aafd9bc3fabd8d0702d5f365f5)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1ad7c701c2882498536de9f52c89160369)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__PlayerOrderEntry_1af9a0e73ba39e58cfadf2ee82f0bfbf3c)`()` | Returns the default value of LootId.
`public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntry_1ad7be54ad154fbedf87e9d0bf129e1210)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntry_1a9a4f9c166e06f25a89752891a0f12d53)`() const` | Checks whether LootId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a50155bf1e2b0711eafb66aefb4e40943)`()` | Gets the value of Quantity.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a2ab36a40ff40df88acb813d7e5e2b2d2)`() const` | Gets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a89820be523faeac64b5d22a9007da59c)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a7f3cff15e34f5bcaa12304204fd8e611)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlayerOrderEntry_1a7e4d9d66571f8ddad0e52fc8cda1f7e6)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ae5bc81b89696c9fd91b413b0ffa91b39)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a6129ca835f1740deeb553d1235bc6ad5)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a705c58c990f7bacce8def8020f91a256)`(const int32 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ad4d4a0af814b596378f30705318bbe03)`(int32 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1a9c63dfef9e33c650d6150b906739249b)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1a8ce787e3131c18dc2b3e76a9f4035beb)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1aac71be8db71d39b9bd9c528c84be28f6)`(const int32 & NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ac58de775cdaf5fdbb30d7da3b653481e)`(int32 && NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_VendorVersion`](#structFRHAPI__PlayerOrderEntry_1ab788b47ca59cd9726d8963b06f032695)`()` | Returns the default value of VendorVersion.
`public inline FORCEINLINE void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntry_1a53ee037b0595fbaecff78be806b4b228)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntry_1aa968e1f7ef6521c97e150861e75ce96d)`() const` | Checks whether VendorVersion_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1aefb6fc137056ab50ebe8d65f3e4d1ec8)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a50dda3ac117cc89f06d51000f9d35343)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a54824760fc57eb131637adfc48ace6cd)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a03e21c0fdd0e8913acda18d81fcd8fc3)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1a42afc61b64badaa4155d23fab7ed3da8)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1af78224de672500fa51e8fee2a8919fc7)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1ad05c5b6532facd99f8f831c39c2a1e33)`(const FString & NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1ab437bf927cce5dd22da03023b667044c)`(FString && NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline FORCEINLINE void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntry_1a75b75b52212f9f5d877621ceef4dc5b6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntry_1ad8d2dad7e312141967258cc73bc598f3)`() const` | Checks whether VendorEtag_Optional is set to null.
`public inline FORCEINLINE TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a391e21d87558d4e086abdc7a1ca95acf)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a047095ca26477f635f788b40b50dc9c1)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a1cc8d6b4c9c5a7b051df90d4a2c654aa)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a282d4d49a630f9c69a9519f4ad9e755f)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a56daa892d45352927a6587c067d57818)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a3ee7dac2e72110419c0ea09bf2ca8d2f)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a598cdb06acb6967c16ab5957a53cd16d)`(const TArray< int32 > & NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a41abbebcaabe70a4d87d3133c4c8b232)`(TArray< int32 > && NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntry_1af90cfcd1c5a2092592dd74c999459dff)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntry_1ad357e0e5ce40eac9b138d1d4ad16a435)`() const` | Checks whether DynamicBundleLootIds_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a35e1434493452bca23b6019f6c84b1bf)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a85d716fc0843e47ba419416200137ad7)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1af26640985afbc0e88378e50a870b5db3)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1ae77f116f1267ee6791e8aeaa013ea9a5)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1a5fdae486b14b0a4b4f7c3a7eb437e410)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1ada49f0a213af15bc94fabe72a86c446c)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a4ac34b57dfacfa8a4b73e495d0c03421)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a3c3a8b4aa77cfd32d80fc17525d58261)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline FORCEINLINE void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntry_1a924851756d34acd87989b5671f1604f4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntry_1ac5cdbe04f4c506d7d53f8e0ccef45c29)`() const` | Checks whether PurchasePrice_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a692e0322dde842263ce48c45144c5c41)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a63fa2cc0cf11db6eb0542926b9459be6)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a4b321f7217a2395a422854b501a00a57)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1af594b614f7f0ec9c1580f5600a906a6f)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aa2b3047e064ca3aebe23b887d1e4b642)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a36e6786d1831f6269452e1cc1e8ab576)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1ab614c4defdc83c62517a31f50d647a66)`(const FString & NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1af6d137b546f3709b33d4ea1e8f130dae)`(FString && NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntry_1ad0f1f2aafc9e4cb53546442765b0e857)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntry_1a906798714165c06add0ba3102ef189a5)`() const` | Checks whether ExternalTranId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1ac283ed3f79c07bcc1807577818e1e640)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a13e9fff39ae8675e05554fa368e3e7a4)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a34bb159e0eeff978b0db6f2b5338682a)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1ac24667b2255307ae8f1ad1b4b98f4955)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1a41696c15ea0371f0747ea1ebb9891942)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1ade9b25b2fb788dd1d779aacc45d0fa52)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a51a4d9940f78ed0448506dd527b56454)`(const FString & NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a5ed57245bc5f83437b7362fc1c03de86)`(FString && NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntry_1a67573e39841198fc0a3b296bf18632ae)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntry_1a842ff9b2e43949f97d72c6eaa8171cec)`() const` | Checks whether ExternalItemSku_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a7434f595861a9f9e7565f4b3aa88a2a4)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1abbd49a590879995d0f66c76bbfec29a1)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a13fedca0e66476294755f8c05a3f6187)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1ad48150146d7b1efc88a1f726ef183f87)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1a9a8e8be5f9ea2053ca510c1aa40bb629)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1a3b4ccd747f0166325f2b655a5e913327)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1aa9893e87c82a70d90aaf1b83e21cea6c)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a216e471997a2cbc74be70ca76fc9b4eb)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline FORCEINLINE void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntry_1a7aedd99c05b569cc6fb608f5fbb1dff6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntry_1a54d74c41943f8e273e61ea217dec0470)`() const` | Checks whether UseInventoryBucket_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a776e52d2bdd6773af4da98d33449f41b)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1ad020d47d6336736277d76311ea4d86f1)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a8c1b43aab53789d6a8bea8b7c859ec2d)`(const int32 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a632b9cdb24142ff0b9defabfba3a1582)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a7fd434ec93f2aef81576f23a691f8b3d)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ad4dd7a1dde2354ccbf27731aba1ff29d)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a71a2a682e4056138dfebb5de25921b53)`(const int32 & NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a03518c47a18621c113b32e6372d50c4f)`(int32 && NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a757ba2fadfb83c456fc3bf063e684ced)`()` | Returns the default value of PlayerPortalEventId.
`public inline FORCEINLINE void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntry_1acc741d77176c7da381c2546a96ca150e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntry_1a1407107fd2a8a65444c8cdc164b0294f)`() const` | Checks whether PlayerPortalEventId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a648fb3f7a2ed8da1e0cea97899f941a2)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a40f5f70e3f0fea4c4edf67a88096dc63)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a18d48d2bfed69c4d8e65207ab24c90d3)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad5af7b4f9ec6d34282cfeb9f095e2058)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a647fb865339dd44376e8b7badaab8370)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ac2d46493f5a57b58fa62be874106fd11)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a3748b5a79a8f0d3e4db0a57324557312)`(const FGuid & NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a91f36a6615693d5431d1b29928f49e98)`(FGuid && NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline FORCEINLINE void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntry_1a27c874dc2855cfe1558f6bab2d2ca464)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntry_1ac7be94ae584135379efc71c373acd054)`() const` | Checks whether InventoryId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ab196ee398cf5089d6f783fe8d6812038)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a39d52835043e34d17e205497bdda767f)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a8b34354f14794cd672b639de06ca0dc8)`(const int32 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1af814dd436cda3adaf837c941232d6919)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a24b896ca5a96f7c8cb438578472ab0be)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1af1c1d9eff157f8729673fb538b59e64b)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a449db8879a489d44420ca291124e131b)`(const int32 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a23de1ffa2792833d61928e55cb654060)`(int32 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1aa899a2821fc056ef0dc27eb82459bed4)`()` | Returns the default value of LegacyInventoryId.
`public inline FORCEINLINE void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntry_1a00a0124404cac185e610907f2989ce41)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntry_1a445f1389eb210197e427ffdab02efe57)`() const` | Checks whether LegacyInventoryId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1aec6f34f962f905fc769b841512b20a80)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1adda69638e4ae5d8fdba0af56952be932)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1ae7ead28b8c185e1afcd8e81b249831dd)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a19086e18c51dfa52ab6231b90cb01419)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aa0c5d09f7150b4b03a9c18f210a22bcb)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a13040283c1a8eb6cb7edb04f5e8fdb03)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1a16c1240c145f5da0516cc541f0621a38)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1a786cc5850915ad7979f970e1b25178da)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__PlayerOrderEntry_1a76557ac92fe9d68066ee145a68198c64)`()` | Returns the default value of ItemId.
`public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntry_1adfc8510c8cbf376eb483ae22c50c02e5)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntry_1aff4dd329b0ce0136bc74b44443ff1341)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a20d49962305792df6ef785a0a7d749fe)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1ad2a0b5050147b283e328e8c8dbd73d0b)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a391eb928b3cd5fc02d852e60158247f5)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a5976d3029e2eda98e1cc4de6426584b4)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1aa0295983ac3687ebff2651b54c8bb91f)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1a6d877ef7f797601df5227310216df617)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1a20fd77a70b437360ba1ddef7a30ab447)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1a88ee4ef2c59911baf3019a763acd6b92)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntry_1ad9f0779a6639eda021598a9fcc41df18)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntry_1a3e8e8f9495f8fc195f99ef27324dd591)`() const` | Checks whether Expires_Optional is set to null.
`public inline FORCEINLINE ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a3f2b6d846017b7962b7c08283a391898)`()` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a7d6bef5a76980d828568f003d5b95b1b)`() const` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a2506812b1eeb5c6cb7c34beee897f60e)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` | Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1ac19e551c6cef892690900dfdc55e3b38)`(ERHAPI_XpQuantityTransform & OutValue) const` | Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a983328778edea4e4d54b49a0b8c90826)`()` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a169c58d7b0f3e675a7456a5125559b75)`() const` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a88ed342ec59ca924054f304f187c3c6a)`(const ERHAPI_XpQuantityTransform & NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.
`public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1ab6cf9e02fc26acf59a79219a5d987151)`(ERHAPI_XpQuantityTransform && NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.
`public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1af1a363b72f25bd7239155293f4f9ec68)`()` | Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a857e8add7b98713c0e3d903ae9b63367)`()` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a8fb07e7d65bb7ede715a07f30552a4ee)`() const` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a73a8af74e6ca082fb9387499986c8207)`(const int32 & DefaultValue) const` | Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1ae8cc0883aa397c6f19c061cf6e12f88a)`(int32 & OutValue) const` | Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntry_1a3a8b4c872051513057728bc4b740eade)`()` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntry_1a420368d507999fb54958b3bcd131152d)`() const` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a9f670849422e0e11c5018b89b0bde384)`(const int32 & NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.
`public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a1634aa028cb87e1c17730f4a62d0d0be)`(int32 && NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.
`public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a0d4e1c10a15b858b5386caa07c2e96fb)`()` | Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_HardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1afe2f2b207b6724fae1b03b3d3f4abc4f)`()` | Returns the default value of HardQuantityMaximum.
`public inline FORCEINLINE void `[`SetHardQuantityMaximumToNull`](#structFRHAPI__PlayerOrderEntry_1a824d7bec8ead3e72351800fdb9124070)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsHardQuantityMaximumNull`](#structFRHAPI__PlayerOrderEntry_1aa12da575f0cfa5c4d1506e9de606ed1a)`() const` | Checks whether HardQuantityMaximum_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a8716b0f9cd8ad1cbffffebf486034982)`()` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a9d01648113d837ec93cb540f1a2876af)`() const` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1aaf103574abf7eeae043ea65d62f9d03e)`(const ERHAPI_InventoryOperation & DefaultValue) const` | Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1aa05878a1def9c68a2bed01d4df760fc8)`(ERHAPI_InventoryOperation & OutValue) const` | Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntry_1a49e5512672d19e9d7bae48ab09dfd4d9)`()` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntry_1aa92b217e77ef825930f03c6ad30b898e)`() const` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a4796dca144e67036f84f75cec41eef7d)`(const ERHAPI_InventoryOperation & NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.
`public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1aede3319f2d403ad084c01b76925e7d66)`(ERHAPI_InventoryOperation && NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.
`public inline void `[`ClearInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1ab92bdc18ce1497d9a56cacab6131ef72)`()` | Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.
`public inline FORCEINLINE ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1ab83d083133b5ea49656dcf35aa8c11fd)`()` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a5dbb0d50f97f899669badcf78222cd0a)`() const` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a22f4ea05a53a5ef7df6025dfc246025d)`(const ERHAPI_InventorySelector & DefaultValue) const` | Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1ac8f022dc1c99524343f00a89f27e50c9)`(ERHAPI_InventorySelector & OutValue) const` | Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a5396687c69ff0fc994d452ddaebc66c8)`()` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a333c9d2784f3a4625b33c1dc4e74b8a8)`() const` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a9740f370e14e52cc7ecd1f77e7598d52)`(const ERHAPI_InventorySelector & NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.
`public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a7de3678ab8a0abc94ec629835e78198a)`(ERHAPI_InventorySelector && NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.
`public inline void `[`ClearInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a912922f8eaf5e5f00dec944b4d4ea90c)`()` | Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a7f83656edfbec7b3b92477e98777820f)`()` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a4b62873014a827e3205dfcea3bd1d530)`() const` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aca4ca2fd56fbe9ec7228a7b2a2ec1227)`(const int32 & DefaultValue) const` | Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a67d215dbccbf221e3e2bd0b5cb7a4bfe)`(int32 & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a7811975e43e50af7b3e91b5c6ea37344)`()` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a16522f4182c1e91c5c0e279c49f38d87)`() const` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a977f5d4e34ae136cce1e356796d4928d)`(const int32 & NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aa5d3b11ddb5ee530c948b333e6b0ff82)`(int32 && NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.
`public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aae6fbea37c628082f2dd3b9f3c7773c8)`()` | Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_QuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a7c1a18f5f1e14f5391c826146ae7ebcc)`()` | Returns the default value of QuantityMultInventoryItemId.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__PlayerOrderEntry_1a21bd2643718b031aadf8609b61ed58d7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__PlayerOrderEntry_1aa40a9ffc000c6b7b9369acb04971aa41)`() const` | Checks whether QuantityMultInventoryItemId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a447c218633cdfdbb21d65518b5887a8b)`()` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1ae3a2624b181f9d6255d6a40be9b85664)`() const` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a714393e0059526ef20b046637bc5cdc9)`(const int32 & DefaultValue) const` | Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a45f0f157a9cc39862675b5b4186c8191)`(int32 & OutValue) const` | Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a9e2b8c30e40540cc2b3b6eb1166925a5)`()` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntry_1adf22b5c4f6410b2e2d4ce1610d7c606f)`() const` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a8f1505761a008813895d0e46049e89e5)`(const int32 & NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.
`public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1acf3265253baf81b24d4513685a925acc)`(int32 && NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.
`public inline void `[`ClearTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1afb8bbf3489bbb636bf8a22d22edfacb4)`()` | Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a031b287f9abbd97b12d2ad66890723ea)`()` | Returns the default value of TimeFrameId.
`public inline FORCEINLINE void `[`SetTimeFrameIdToNull`](#structFRHAPI__PlayerOrderEntry_1a6f532ebf49365a4045b32497f888ea44)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTimeFrameIdNull`](#structFRHAPI__PlayerOrderEntry_1acfb62f34e090ebf4b612a59af6907eea)`() const` | Checks whether TimeFrameId_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1afb98807fe307baeeb2c234ba4759c6b5)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a919250cd386f452b24d5ab1659913dd1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a94bfdbb56a64a6c4e56fc24f296c0892)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a221b751b3404fdf5c101bfed0af1a60a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1adc3391e457dd2e633fb4e2b66a5686fa)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1a2c05651c7b822061519cd3de560728b9)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1a91cca3e87861922972b7505e9e1bafa5)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1aa7c07bb8d6f0a7cf880ad00df24fc0a0)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntry_1a83a643f7a9306151c8600123e2b09da3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntry_1ade94900ce388c0d54e20b7def2e41bdd)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1af879b240024d45ff9d54c23c5aa42238)`()` | Gets the value of EntryId.
`public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1a416b81270e196a22ca77c42cd483d246)`() const` | Gets the value of EntryId.
`public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1a820ee3b694d63d583e9e9f988b7e85b4)`(const FString & NewValue)` | Sets the value of EntryId.
`public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1a52ce06180b189130c27bb8a0b37cbeb4)`(FString && NewValue)` | Sets the value of EntryId using move semantics.
`public inline FORCEINLINE ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a92e20677f3caeab023495fffbb12ebdd)`()` | Gets the value of Result_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a837c1960c7e917d2584e9bab96a90268)`() const` | Gets the value of Result_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1abde4bc72e040dcd14b7db1917860d8c9)`(const ERHAPI_PlayerOrderEntryResult & DefaultValue) const` | Gets the value of Result_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a4598d9886e7105cf693f4bab7751537a)`(ERHAPI_PlayerOrderEntryResult & OutValue) const` | Fills OutValue with the value of Result_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a0beec35ec2737e38d0ab3912f718ccb6)`()` | Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a747bc71dc066b735d0e2743ec5c75999)`() const` | Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1a1d238b38f731b4e639ebdc6d387ddaea)`(const ERHAPI_PlayerOrderEntryResult & NewValue)` | Sets the value of Result_Optional and also sets Result_IsSet to true.
`public inline FORCEINLINE void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1a1b05f180771a40af4e31e6f9d352da3b)`(ERHAPI_PlayerOrderEntryResult && NewValue)` | Sets the value of Result_Optional and also sets Result_IsSet to true using move semantics.
`public inline void `[`ClearResult`](#structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f)`()` | Clears the value of Result_Optional and sets Result_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1aa4116277522e2a53cf9f376fb7c5c7a5)`()` | Gets the value of Details_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1aae65b13f1733e22fed5e1b55ff3f6f7e)`() const` | Gets the value of Details_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1ab7146c01cbabcc2989e5e38494726100)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & DefaultValue) const` | Gets the value of Details_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1a0c1037ab6edc35804a2521452ef68da9)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & OutValue) const` | Fills OutValue with the value of Details_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a5d0edd9b7ba72a929e1a1f500e1fa2e5)`()` | Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a59b20ed29aeecbb8aa55c3627b50402a)`() const` | Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1a800369d9157070293e76b1db23d0b641)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & NewValue)` | Sets the value of Details_Optional and also sets Details_IsSet to true.
`public inline FORCEINLINE void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1a4ddddc803a1ab1ea94558cbccd40d919)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > && NewValue)` | Sets the value of Details_Optional and also sets Details_IsSet to true using move semantics.
`public inline void `[`ClearDetails`](#structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38)`()` | Clears the value of Details_Optional and sets Details_IsSet to false.

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

#### `public inline FORCEINLINE ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1af7d4325530ec054a5b3f9d62f2b6e6ca)`()` <a id="structFRHAPI__PlayerOrderEntry_1af7d4325530ec054a5b3f9d62f2b6e6ca"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1a430f8fcb0fe9b50ed6da48d465e2900b)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a430f8fcb0fe9b50ed6da48d465e2900b"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1a45b93ba87a92d381beee7178f2f4695a)`(const ERHAPI_PlayerOrderEntryType & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a45b93ba87a92d381beee7178f2f4695a"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1ac5574d6c254a823218a66f7a8537e429)`(ERHAPI_PlayerOrderEntryType && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ac5574d6c254a823218a66f7a8537e429"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a2c2731d474db5763ebe53ff92f186460)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2c2731d474db5763ebe53ff92f186460"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a24c34898831f144cca0896b42ab6f605)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a24c34898831f144cca0896b42ab6f605"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1ab6ce7221e00b5d392ee5cdc92dfe868d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ab6ce7221e00b5d392ee5cdc92dfe868d"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1ab6f5a74baef6f05db3f809a51e4c85c5)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ab6f5a74baef6f05db3f809a51e4c85c5"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ab6e3adcfbb1fb57cba3242d115a08cfb)`()` <a id="structFRHAPI__PlayerOrderEntry_1ab6e3adcfbb1fb57cba3242d115a08cfb"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a3192c16f2b49bc882cd51e6e06ec0841)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a3192c16f2b49bc882cd51e6e06ec0841"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1a301576aafd9bc3fabd8d0702d5f365f5)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a301576aafd9bc3fabd8d0702d5f365f5"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1ad7c701c2882498536de9f52c89160369)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ad7c701c2882498536de9f52c89160369"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced)`()` <a id="structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__PlayerOrderEntry_1af9a0e73ba39e58cfadf2ee82f0bfbf3c)`()` <a id="structFRHAPI__PlayerOrderEntry_1af9a0e73ba39e58cfadf2ee82f0bfbf3c"></a>

Returns the default value of LootId.

#### `public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntry_1ad7be54ad154fbedf87e9d0bf129e1210)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad7be54ad154fbedf87e9d0bf129e1210"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntry_1a9a4f9c166e06f25a89752891a0f12d53)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a9a4f9c166e06f25a89752891a0f12d53"></a>

Checks whether LootId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a50155bf1e2b0711eafb66aefb4e40943)`()` <a id="structFRHAPI__PlayerOrderEntry_1a50155bf1e2b0711eafb66aefb4e40943"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a2ab36a40ff40df88acb813d7e5e2b2d2)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a2ab36a40ff40df88acb813d7e5e2b2d2"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a89820be523faeac64b5d22a9007da59c)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a89820be523faeac64b5d22a9007da59c"></a>

Sets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a7f3cff15e34f5bcaa12304204fd8e611)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a7f3cff15e34f5bcaa12304204fd8e611"></a>

Sets the value of Quantity using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlayerOrderEntry_1a7e4d9d66571f8ddad0e52fc8cda1f7e6)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7e4d9d66571f8ddad0e52fc8cda1f7e6"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ae5bc81b89696c9fd91b413b0ffa91b39)`()` <a id="structFRHAPI__PlayerOrderEntry_1ae5bc81b89696c9fd91b413b0ffa91b39"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a6129ca835f1740deeb553d1235bc6ad5)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a6129ca835f1740deeb553d1235bc6ad5"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a705c58c990f7bacce8def8020f91a256)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a705c58c990f7bacce8def8020f91a256"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ad4d4a0af814b596378f30705318bbe03)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ad4d4a0af814b596378f30705318bbe03"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1a9c63dfef9e33c650d6150b906739249b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9c63dfef9e33c650d6150b906739249b"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1a8ce787e3131c18dc2b3e76a9f4035beb)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a8ce787e3131c18dc2b3e76a9f4035beb"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1aac71be8db71d39b9bd9c528c84be28f6)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aac71be8db71d39b9bd9c528c84be28f6"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ac58de775cdaf5fdbb30d7da3b653481e)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ac58de775cdaf5fdbb30d7da3b653481e"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a)`()` <a id="structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_VendorVersion`](#structFRHAPI__PlayerOrderEntry_1ab788b47ca59cd9726d8963b06f032695)`()` <a id="structFRHAPI__PlayerOrderEntry_1ab788b47ca59cd9726d8963b06f032695"></a>

Returns the default value of VendorVersion.

#### `public inline FORCEINLINE void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntry_1a53ee037b0595fbaecff78be806b4b228)`()` <a id="structFRHAPI__PlayerOrderEntry_1a53ee037b0595fbaecff78be806b4b228"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntry_1aa968e1f7ef6521c97e150861e75ce96d)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa968e1f7ef6521c97e150861e75ce96d"></a>

Checks whether VendorVersion_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1aefb6fc137056ab50ebe8d65f3e4d1ec8)`()` <a id="structFRHAPI__PlayerOrderEntry_1aefb6fc137056ab50ebe8d65f3e4d1ec8"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a50dda3ac117cc89f06d51000f9d35343)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a50dda3ac117cc89f06d51000f9d35343"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a54824760fc57eb131637adfc48ace6cd)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a54824760fc57eb131637adfc48ace6cd"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a03e21c0fdd0e8913acda18d81fcd8fc3)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a03e21c0fdd0e8913acda18d81fcd8fc3"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1a42afc61b64badaa4155d23fab7ed3da8)`()` <a id="structFRHAPI__PlayerOrderEntry_1a42afc61b64badaa4155d23fab7ed3da8"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1af78224de672500fa51e8fee2a8919fc7)`() const` <a id="structFRHAPI__PlayerOrderEntry_1af78224de672500fa51e8fee2a8919fc7"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1ad05c5b6532facd99f8f831c39c2a1e33)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ad05c5b6532facd99f8f831c39c2a1e33"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1ab437bf927cce5dd22da03023b667044c)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ab437bf927cce5dd22da03023b667044c"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntry_1a75b75b52212f9f5d877621ceef4dc5b6)`()` <a id="structFRHAPI__PlayerOrderEntry_1a75b75b52212f9f5d877621ceef4dc5b6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntry_1ad8d2dad7e312141967258cc73bc598f3)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad8d2dad7e312141967258cc73bc598f3"></a>

Checks whether VendorEtag_Optional is set to null.

#### `public inline FORCEINLINE TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a391e21d87558d4e086abdc7a1ca95acf)`()` <a id="structFRHAPI__PlayerOrderEntry_1a391e21d87558d4e086abdc7a1ca95acf"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a047095ca26477f635f788b40b50dc9c1)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a047095ca26477f635f788b40b50dc9c1"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a1cc8d6b4c9c5a7b051df90d4a2c654aa)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a1cc8d6b4c9c5a7b051df90d4a2c654aa"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a282d4d49a630f9c69a9519f4ad9e755f)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a282d4d49a630f9c69a9519f4ad9e755f"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a56daa892d45352927a6587c067d57818)`()` <a id="structFRHAPI__PlayerOrderEntry_1a56daa892d45352927a6587c067d57818"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a3ee7dac2e72110419c0ea09bf2ca8d2f)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a3ee7dac2e72110419c0ea09bf2ca8d2f"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a598cdb06acb6967c16ab5957a53cd16d)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a598cdb06acb6967c16ab5957a53cd16d"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a41abbebcaabe70a4d87d3133c4c8b232)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a41abbebcaabe70a4d87d3133c4c8b232"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.

#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntry_1af90cfcd1c5a2092592dd74c999459dff)`()` <a id="structFRHAPI__PlayerOrderEntry_1af90cfcd1c5a2092592dd74c999459dff"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntry_1ad357e0e5ce40eac9b138d1d4ad16a435)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad357e0e5ce40eac9b138d1d4ad16a435"></a>

Checks whether DynamicBundleLootIds_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a35e1434493452bca23b6019f6c84b1bf)`()` <a id="structFRHAPI__PlayerOrderEntry_1a35e1434493452bca23b6019f6c84b1bf"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a85d716fc0843e47ba419416200137ad7)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a85d716fc0843e47ba419416200137ad7"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1af26640985afbc0e88378e50a870b5db3)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1af26640985afbc0e88378e50a870b5db3"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1ae77f116f1267ee6791e8aeaa013ea9a5)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ae77f116f1267ee6791e8aeaa013ea9a5"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1a5fdae486b14b0a4b4f7c3a7eb437e410)`()` <a id="structFRHAPI__PlayerOrderEntry_1a5fdae486b14b0a4b4f7c3a7eb437e410"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1ada49f0a213af15bc94fabe72a86c446c)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ada49f0a213af15bc94fabe72a86c446c"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a4ac34b57dfacfa8a4b73e495d0c03421)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a4ac34b57dfacfa8a4b73e495d0c03421"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a3c3a8b4aa77cfd32d80fc17525d58261)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a3c3a8b4aa77cfd32d80fc17525d58261"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.

#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntry_1a924851756d34acd87989b5671f1604f4)`()` <a id="structFRHAPI__PlayerOrderEntry_1a924851756d34acd87989b5671f1604f4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntry_1ac5cdbe04f4c506d7d53f8e0ccef45c29)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac5cdbe04f4c506d7d53f8e0ccef45c29"></a>

Checks whether PurchasePrice_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a692e0322dde842263ce48c45144c5c41)`()` <a id="structFRHAPI__PlayerOrderEntry_1a692e0322dde842263ce48c45144c5c41"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a63fa2cc0cf11db6eb0542926b9459be6)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a63fa2cc0cf11db6eb0542926b9459be6"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a4b321f7217a2395a422854b501a00a57)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a4b321f7217a2395a422854b501a00a57"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1af594b614f7f0ec9c1580f5600a906a6f)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1af594b614f7f0ec9c1580f5600a906a6f"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aa2b3047e064ca3aebe23b887d1e4b642)`()` <a id="structFRHAPI__PlayerOrderEntry_1aa2b3047e064ca3aebe23b887d1e4b642"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a36e6786d1831f6269452e1cc1e8ab576)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a36e6786d1831f6269452e1cc1e8ab576"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1ab614c4defdc83c62517a31f50d647a66)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ab614c4defdc83c62517a31f50d647a66"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1af6d137b546f3709b33d4ea1e8f130dae)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1af6d137b546f3709b33d4ea1e8f130dae"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntry_1ad0f1f2aafc9e4cb53546442765b0e857)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad0f1f2aafc9e4cb53546442765b0e857"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntry_1a906798714165c06add0ba3102ef189a5)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a906798714165c06add0ba3102ef189a5"></a>

Checks whether ExternalTranId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1ac283ed3f79c07bcc1807577818e1e640)`()` <a id="structFRHAPI__PlayerOrderEntry_1ac283ed3f79c07bcc1807577818e1e640"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a13e9fff39ae8675e05554fa368e3e7a4)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a13e9fff39ae8675e05554fa368e3e7a4"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a34bb159e0eeff978b0db6f2b5338682a)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a34bb159e0eeff978b0db6f2b5338682a"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1ac24667b2255307ae8f1ad1b4b98f4955)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ac24667b2255307ae8f1ad1b4b98f4955"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1a41696c15ea0371f0747ea1ebb9891942)`()` <a id="structFRHAPI__PlayerOrderEntry_1a41696c15ea0371f0747ea1ebb9891942"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1ade9b25b2fb788dd1d779aacc45d0fa52)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ade9b25b2fb788dd1d779aacc45d0fa52"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a51a4d9940f78ed0448506dd527b56454)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a51a4d9940f78ed0448506dd527b56454"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a5ed57245bc5f83437b7362fc1c03de86)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a5ed57245bc5f83437b7362fc1c03de86"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255)`()` <a id="structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntry_1a67573e39841198fc0a3b296bf18632ae)`()` <a id="structFRHAPI__PlayerOrderEntry_1a67573e39841198fc0a3b296bf18632ae"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntry_1a842ff9b2e43949f97d72c6eaa8171cec)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a842ff9b2e43949f97d72c6eaa8171cec"></a>

Checks whether ExternalItemSku_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a7434f595861a9f9e7565f4b3aa88a2a4)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7434f595861a9f9e7565f4b3aa88a2a4"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1abbd49a590879995d0f66c76bbfec29a1)`() const` <a id="structFRHAPI__PlayerOrderEntry_1abbd49a590879995d0f66c76bbfec29a1"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a13fedca0e66476294755f8c05a3f6187)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a13fedca0e66476294755f8c05a3f6187"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1ad48150146d7b1efc88a1f726ef183f87)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ad48150146d7b1efc88a1f726ef183f87"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1a9a8e8be5f9ea2053ca510c1aa40bb629)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9a8e8be5f9ea2053ca510c1aa40bb629"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1a3b4ccd747f0166325f2b655a5e913327)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a3b4ccd747f0166325f2b655a5e913327"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1aa9893e87c82a70d90aaf1b83e21cea6c)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aa9893e87c82a70d90aaf1b83e21cea6c"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a216e471997a2cbc74be70ca76fc9b4eb)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a216e471997a2cbc74be70ca76fc9b4eb"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c)`()` <a id="structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntry_1a7aedd99c05b569cc6fb608f5fbb1dff6)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7aedd99c05b569cc6fb608f5fbb1dff6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntry_1a54d74c41943f8e273e61ea217dec0470)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a54d74c41943f8e273e61ea217dec0470"></a>

Checks whether UseInventoryBucket_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a776e52d2bdd6773af4da98d33449f41b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a776e52d2bdd6773af4da98d33449f41b"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1ad020d47d6336736277d76311ea4d86f1)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad020d47d6336736277d76311ea4d86f1"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a8c1b43aab53789d6a8bea8b7c859ec2d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a8c1b43aab53789d6a8bea8b7c859ec2d"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a632b9cdb24142ff0b9defabfba3a1582)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a632b9cdb24142ff0b9defabfba3a1582"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a7fd434ec93f2aef81576f23a691f8b3d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7fd434ec93f2aef81576f23a691f8b3d"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ad4dd7a1dde2354ccbf27731aba1ff29d)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad4dd7a1dde2354ccbf27731aba1ff29d"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a71a2a682e4056138dfebb5de25921b53)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a71a2a682e4056138dfebb5de25921b53"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a03518c47a18621c113b32e6372d50c4f)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a03518c47a18621c113b32e6372d50c4f"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20)`()` <a id="structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a757ba2fadfb83c456fc3bf063e684ced)`()` <a id="structFRHAPI__PlayerOrderEntry_1a757ba2fadfb83c456fc3bf063e684ced"></a>

Returns the default value of PlayerPortalEventId.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntry_1acc741d77176c7da381c2546a96ca150e)`()` <a id="structFRHAPI__PlayerOrderEntry_1acc741d77176c7da381c2546a96ca150e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntry_1a1407107fd2a8a65444c8cdc164b0294f)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a1407107fd2a8a65444c8cdc164b0294f"></a>

Checks whether PlayerPortalEventId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a648fb3f7a2ed8da1e0cea97899f941a2)`()` <a id="structFRHAPI__PlayerOrderEntry_1a648fb3f7a2ed8da1e0cea97899f941a2"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a40f5f70e3f0fea4c4edf67a88096dc63)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a40f5f70e3f0fea4c4edf67a88096dc63"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a18d48d2bfed69c4d8e65207ab24c90d3)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a18d48d2bfed69c4d8e65207ab24c90d3"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad5af7b4f9ec6d34282cfeb9f095e2058)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ad5af7b4f9ec6d34282cfeb9f095e2058"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a647fb865339dd44376e8b7badaab8370)`()` <a id="structFRHAPI__PlayerOrderEntry_1a647fb865339dd44376e8b7badaab8370"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ac2d46493f5a57b58fa62be874106fd11)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac2d46493f5a57b58fa62be874106fd11"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a3748b5a79a8f0d3e4db0a57324557312)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a3748b5a79a8f0d3e4db0a57324557312"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a91f36a6615693d5431d1b29928f49e98)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a91f36a6615693d5431d1b29928f49e98"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntry_1a27c874dc2855cfe1558f6bab2d2ca464)`()` <a id="structFRHAPI__PlayerOrderEntry_1a27c874dc2855cfe1558f6bab2d2ca464"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntry_1ac7be94ae584135379efc71c373acd054)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac7be94ae584135379efc71c373acd054"></a>

Checks whether InventoryId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ab196ee398cf5089d6f783fe8d6812038)`()` <a id="structFRHAPI__PlayerOrderEntry_1ab196ee398cf5089d6f783fe8d6812038"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a39d52835043e34d17e205497bdda767f)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a39d52835043e34d17e205497bdda767f"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a8b34354f14794cd672b639de06ca0dc8)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a8b34354f14794cd672b639de06ca0dc8"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1af814dd436cda3adaf837c941232d6919)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1af814dd436cda3adaf837c941232d6919"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a24b896ca5a96f7c8cb438578472ab0be)`()` <a id="structFRHAPI__PlayerOrderEntry_1a24b896ca5a96f7c8cb438578472ab0be"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1af1c1d9eff157f8729673fb538b59e64b)`() const` <a id="structFRHAPI__PlayerOrderEntry_1af1c1d9eff157f8729673fb538b59e64b"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a449db8879a489d44420ca291124e131b)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a449db8879a489d44420ca291124e131b"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a23de1ffa2792833d61928e55cb654060)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a23de1ffa2792833d61928e55cb654060"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1aa899a2821fc056ef0dc27eb82459bed4)`()` <a id="structFRHAPI__PlayerOrderEntry_1aa899a2821fc056ef0dc27eb82459bed4"></a>

Returns the default value of LegacyInventoryId.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntry_1a00a0124404cac185e610907f2989ce41)`()` <a id="structFRHAPI__PlayerOrderEntry_1a00a0124404cac185e610907f2989ce41"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntry_1a445f1389eb210197e427ffdab02efe57)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a445f1389eb210197e427ffdab02efe57"></a>

Checks whether LegacyInventoryId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1aec6f34f962f905fc769b841512b20a80)`()` <a id="structFRHAPI__PlayerOrderEntry_1aec6f34f962f905fc769b841512b20a80"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1adda69638e4ae5d8fdba0af56952be932)`() const` <a id="structFRHAPI__PlayerOrderEntry_1adda69638e4ae5d8fdba0af56952be932"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1ae7ead28b8c185e1afcd8e81b249831dd)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ae7ead28b8c185e1afcd8e81b249831dd"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a19086e18c51dfa52ab6231b90cb01419)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a19086e18c51dfa52ab6231b90cb01419"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aa0c5d09f7150b4b03a9c18f210a22bcb)`()` <a id="structFRHAPI__PlayerOrderEntry_1aa0c5d09f7150b4b03a9c18f210a22bcb"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a13040283c1a8eb6cb7edb04f5e8fdb03)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a13040283c1a8eb6cb7edb04f5e8fdb03"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1a16c1240c145f5da0516cc541f0621a38)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a16c1240c145f5da0516cc541f0621a38"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1a786cc5850915ad7979f970e1b25178da)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a786cc5850915ad7979f970e1b25178da"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb)`()` <a id="structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__PlayerOrderEntry_1a76557ac92fe9d68066ee145a68198c64)`()` <a id="structFRHAPI__PlayerOrderEntry_1a76557ac92fe9d68066ee145a68198c64"></a>

Returns the default value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntry_1adfc8510c8cbf376eb483ae22c50c02e5)`()` <a id="structFRHAPI__PlayerOrderEntry_1adfc8510c8cbf376eb483ae22c50c02e5"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntry_1aff4dd329b0ce0136bc74b44443ff1341)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aff4dd329b0ce0136bc74b44443ff1341"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a20d49962305792df6ef785a0a7d749fe)`()` <a id="structFRHAPI__PlayerOrderEntry_1a20d49962305792df6ef785a0a7d749fe"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1ad2a0b5050147b283e328e8c8dbd73d0b)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad2a0b5050147b283e328e8c8dbd73d0b"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a391eb928b3cd5fc02d852e60158247f5)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a391eb928b3cd5fc02d852e60158247f5"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a5976d3029e2eda98e1cc4de6426584b4)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a5976d3029e2eda98e1cc4de6426584b4"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1aa0295983ac3687ebff2651b54c8bb91f)`()` <a id="structFRHAPI__PlayerOrderEntry_1aa0295983ac3687ebff2651b54c8bb91f"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1a6d877ef7f797601df5227310216df617)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a6d877ef7f797601df5227310216df617"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1a20fd77a70b437360ba1ddef7a30ab447)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a20fd77a70b437360ba1ddef7a30ab447"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1a88ee4ef2c59911baf3019a763acd6b92)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a88ee4ef2c59911baf3019a763acd6b92"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498)`()` <a id="structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntry_1ad9f0779a6639eda021598a9fcc41df18)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad9f0779a6639eda021598a9fcc41df18"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntry_1a3e8e8f9495f8fc195f99ef27324dd591)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a3e8e8f9495f8fc195f99ef27324dd591"></a>

Checks whether Expires_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a3f2b6d846017b7962b7c08283a391898)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3f2b6d846017b7962b7c08283a391898"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a7d6bef5a76980d828568f003d5b95b1b)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a7d6bef5a76980d828568f003d5b95b1b"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a2506812b1eeb5c6cb7c34beee897f60e)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a2506812b1eeb5c6cb7c34beee897f60e"></a>

Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1ac19e551c6cef892690900dfdc55e3b38)`(ERHAPI_XpQuantityTransform & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ac19e551c6cef892690900dfdc55e3b38"></a>

Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a983328778edea4e4d54b49a0b8c90826)`()` <a id="structFRHAPI__PlayerOrderEntry_1a983328778edea4e4d54b49a0b8c90826"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a169c58d7b0f3e675a7456a5125559b75)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a169c58d7b0f3e675a7456a5125559b75"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1a88ed342ec59ca924054f304f187c3c6a)`(const ERHAPI_XpQuantityTransform & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a88ed342ec59ca924054f304f187c3c6a"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1ab6cf9e02fc26acf59a79219a5d987151)`(ERHAPI_XpQuantityTransform && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ab6cf9e02fc26acf59a79219a5d987151"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.

#### `public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntry_1af1a363b72f25bd7239155293f4f9ec68)`()` <a id="structFRHAPI__PlayerOrderEntry_1af1a363b72f25bd7239155293f4f9ec68"></a>

Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a857e8add7b98713c0e3d903ae9b63367)`()` <a id="structFRHAPI__PlayerOrderEntry_1a857e8add7b98713c0e3d903ae9b63367"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a8fb07e7d65bb7ede715a07f30552a4ee)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a8fb07e7d65bb7ede715a07f30552a4ee"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a73a8af74e6ca082fb9387499986c8207)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a73a8af74e6ca082fb9387499986c8207"></a>

Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1ae8cc0883aa397c6f19c061cf6e12f88a)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ae8cc0883aa397c6f19c061cf6e12f88a"></a>

Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntry_1a3a8b4c872051513057728bc4b740eade)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3a8b4c872051513057728bc4b740eade"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntry_1a420368d507999fb54958b3bcd131152d)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a420368d507999fb54958b3bcd131152d"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a9f670849422e0e11c5018b89b0bde384)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a9f670849422e0e11c5018b89b0bde384"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a1634aa028cb87e1c17730f4a62d0d0be)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a1634aa028cb87e1c17730f4a62d0d0be"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.

#### `public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1a0d4e1c10a15b858b5386caa07c2e96fb)`()` <a id="structFRHAPI__PlayerOrderEntry_1a0d4e1c10a15b858b5386caa07c2e96fb"></a>

Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_HardQuantityMaximum`](#structFRHAPI__PlayerOrderEntry_1afe2f2b207b6724fae1b03b3d3f4abc4f)`()` <a id="structFRHAPI__PlayerOrderEntry_1afe2f2b207b6724fae1b03b3d3f4abc4f"></a>

Returns the default value of HardQuantityMaximum.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximumToNull`](#structFRHAPI__PlayerOrderEntry_1a824d7bec8ead3e72351800fdb9124070)`()` <a id="structFRHAPI__PlayerOrderEntry_1a824d7bec8ead3e72351800fdb9124070"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsHardQuantityMaximumNull`](#structFRHAPI__PlayerOrderEntry_1aa12da575f0cfa5c4d1506e9de606ed1a)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa12da575f0cfa5c4d1506e9de606ed1a"></a>

Checks whether HardQuantityMaximum_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a8716b0f9cd8ad1cbffffebf486034982)`()` <a id="structFRHAPI__PlayerOrderEntry_1a8716b0f9cd8ad1cbffffebf486034982"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a9d01648113d837ec93cb540f1a2876af)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a9d01648113d837ec93cb540f1a2876af"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1aaf103574abf7eeae043ea65d62f9d03e)`(const ERHAPI_InventoryOperation & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1aaf103574abf7eeae043ea65d62f9d03e"></a>

Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1aa05878a1def9c68a2bed01d4df760fc8)`(ERHAPI_InventoryOperation & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1aa05878a1def9c68a2bed01d4df760fc8"></a>

Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntry_1a49e5512672d19e9d7bae48ab09dfd4d9)`()` <a id="structFRHAPI__PlayerOrderEntry_1a49e5512672d19e9d7bae48ab09dfd4d9"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntry_1aa92b217e77ef825930f03c6ad30b898e)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa92b217e77ef825930f03c6ad30b898e"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1a4796dca144e67036f84f75cec41eef7d)`(const ERHAPI_InventoryOperation & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a4796dca144e67036f84f75cec41eef7d"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1aede3319f2d403ad084c01b76925e7d66)`(ERHAPI_InventoryOperation && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aede3319f2d403ad084c01b76925e7d66"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryOperation`](#structFRHAPI__PlayerOrderEntry_1ab92bdc18ce1497d9a56cacab6131ef72)`()` <a id="structFRHAPI__PlayerOrderEntry_1ab92bdc18ce1497d9a56cacab6131ef72"></a>

Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1ab83d083133b5ea49656dcf35aa8c11fd)`()` <a id="structFRHAPI__PlayerOrderEntry_1ab83d083133b5ea49656dcf35aa8c11fd"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a5dbb0d50f97f899669badcf78222cd0a)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a5dbb0d50f97f899669badcf78222cd0a"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a22f4ea05a53a5ef7df6025dfc246025d)`(const ERHAPI_InventorySelector & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a22f4ea05a53a5ef7df6025dfc246025d"></a>

Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1ac8f022dc1c99524343f00a89f27e50c9)`(ERHAPI_InventorySelector & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ac8f022dc1c99524343f00a89f27e50c9"></a>

Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a5396687c69ff0fc994d452ddaebc66c8)`()` <a id="structFRHAPI__PlayerOrderEntry_1a5396687c69ff0fc994d452ddaebc66c8"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntry_1a333c9d2784f3a4625b33c1dc4e74b8a8)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a333c9d2784f3a4625b33c1dc4e74b8a8"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a9740f370e14e52cc7ecd1f77e7598d52)`(const ERHAPI_InventorySelector & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a9740f370e14e52cc7ecd1f77e7598d52"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a7de3678ab8a0abc94ec629835e78198a)`(ERHAPI_InventorySelector && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a7de3678ab8a0abc94ec629835e78198a"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.

#### `public inline void `[`ClearInventorySelectorType`](#structFRHAPI__PlayerOrderEntry_1a912922f8eaf5e5f00dec944b4d4ea90c)`()` <a id="structFRHAPI__PlayerOrderEntry_1a912922f8eaf5e5f00dec944b4d4ea90c"></a>

Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a7f83656edfbec7b3b92477e98777820f)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7f83656edfbec7b3b92477e98777820f"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a4b62873014a827e3205dfcea3bd1d530)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a4b62873014a827e3205dfcea3bd1d530"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aca4ca2fd56fbe9ec7228a7b2a2ec1227)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1aca4ca2fd56fbe9ec7228a7b2a2ec1227"></a>

Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a67d215dbccbf221e3e2bd0b5cb7a4bfe)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a67d215dbccbf221e3e2bd0b5cb7a4bfe"></a>

Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a7811975e43e50af7b3e91b5c6ea37344)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7811975e43e50af7b3e91b5c6ea37344"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a16522f4182c1e91c5c0e279c49f38d87)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a16522f4182c1e91c5c0e279c49f38d87"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a977f5d4e34ae136cce1e356796d4928d)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a977f5d4e34ae136cce1e356796d4928d"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aa5d3b11ddb5ee530c948b333e6b0ff82)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aa5d3b11ddb5ee530c948b333e6b0ff82"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1aae6fbea37c628082f2dd3b9f3c7773c8)`()` <a id="structFRHAPI__PlayerOrderEntry_1aae6fbea37c628082f2dd3b9f3c7773c8"></a>

Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_QuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntry_1a7c1a18f5f1e14f5391c826146ae7ebcc)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7c1a18f5f1e14f5391c826146ae7ebcc"></a>

Returns the default value of QuantityMultInventoryItemId.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__PlayerOrderEntry_1a21bd2643718b031aadf8609b61ed58d7)`()` <a id="structFRHAPI__PlayerOrderEntry_1a21bd2643718b031aadf8609b61ed58d7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__PlayerOrderEntry_1aa40a9ffc000c6b7b9369acb04971aa41)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa40a9ffc000c6b7b9369acb04971aa41"></a>

Checks whether QuantityMultInventoryItemId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a447c218633cdfdbb21d65518b5887a8b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a447c218633cdfdbb21d65518b5887a8b"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1ae3a2624b181f9d6255d6a40be9b85664)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ae3a2624b181f9d6255d6a40be9b85664"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a714393e0059526ef20b046637bc5cdc9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a714393e0059526ef20b046637bc5cdc9"></a>

Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a45f0f157a9cc39862675b5b4186c8191)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a45f0f157a9cc39862675b5b4186c8191"></a>

Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a9e2b8c30e40540cc2b3b6eb1166925a5)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9e2b8c30e40540cc2b3b6eb1166925a5"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntry_1adf22b5c4f6410b2e2d4ce1610d7c606f)`() const` <a id="structFRHAPI__PlayerOrderEntry_1adf22b5c4f6410b2e2d4ce1610d7c606f"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a8f1505761a008813895d0e46049e89e5)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a8f1505761a008813895d0e46049e89e5"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1acf3265253baf81b24d4513685a925acc)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1acf3265253baf81b24d4513685a925acc"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.

#### `public inline void `[`ClearTimeFrameId`](#structFRHAPI__PlayerOrderEntry_1afb8bbf3489bbb636bf8a22d22edfacb4)`()` <a id="structFRHAPI__PlayerOrderEntry_1afb8bbf3489bbb636bf8a22d22edfacb4"></a>

Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TimeFrameId`](#structFRHAPI__PlayerOrderEntry_1a031b287f9abbd97b12d2ad66890723ea)`()` <a id="structFRHAPI__PlayerOrderEntry_1a031b287f9abbd97b12d2ad66890723ea"></a>

Returns the default value of TimeFrameId.

#### `public inline FORCEINLINE void `[`SetTimeFrameIdToNull`](#structFRHAPI__PlayerOrderEntry_1a6f532ebf49365a4045b32497f888ea44)`()` <a id="structFRHAPI__PlayerOrderEntry_1a6f532ebf49365a4045b32497f888ea44"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTimeFrameIdNull`](#structFRHAPI__PlayerOrderEntry_1acfb62f34e090ebf4b612a59af6907eea)`() const` <a id="structFRHAPI__PlayerOrderEntry_1acfb62f34e090ebf4b612a59af6907eea"></a>

Checks whether TimeFrameId_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1afb98807fe307baeeb2c234ba4759c6b5)`()` <a id="structFRHAPI__PlayerOrderEntry_1afb98807fe307baeeb2c234ba4759c6b5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a919250cd386f452b24d5ab1659913dd1)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a919250cd386f452b24d5ab1659913dd1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a94bfdbb56a64a6c4e56fc24f296c0892)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a94bfdbb56a64a6c4e56fc24f296c0892"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a221b751b3404fdf5c101bfed0af1a60a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a221b751b3404fdf5c101bfed0af1a60a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1adc3391e457dd2e633fb4e2b66a5686fa)`()` <a id="structFRHAPI__PlayerOrderEntry_1adc3391e457dd2e633fb4e2b66a5686fa"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1a2c05651c7b822061519cd3de560728b9)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a2c05651c7b822061519cd3de560728b9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1a91cca3e87861922972b7505e9e1bafa5)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a91cca3e87861922972b7505e9e1bafa5"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1aa7c07bb8d6f0a7cf880ad00df24fc0a0)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aa7c07bb8d6f0a7cf880ad00df24fc0a0"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntry_1a83a643f7a9306151c8600123e2b09da3)`()` <a id="structFRHAPI__PlayerOrderEntry_1a83a643f7a9306151c8600123e2b09da3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntry_1ade94900ce388c0d54e20b7def2e41bdd)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ade94900ce388c0d54e20b7def2e41bdd"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1af879b240024d45ff9d54c23c5aa42238)`()` <a id="structFRHAPI__PlayerOrderEntry_1af879b240024d45ff9d54c23c5aa42238"></a>

Gets the value of EntryId.

#### `public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1a416b81270e196a22ca77c42cd483d246)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a416b81270e196a22ca77c42cd483d246"></a>

Gets the value of EntryId.

#### `public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1a820ee3b694d63d583e9e9f988b7e85b4)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a820ee3b694d63d583e9e9f988b7e85b4"></a>

Sets the value of EntryId.

#### `public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1a52ce06180b189130c27bb8a0b37cbeb4)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a52ce06180b189130c27bb8a0b37cbeb4"></a>

Sets the value of EntryId using move semantics.

#### `public inline FORCEINLINE ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a92e20677f3caeab023495fffbb12ebdd)`()` <a id="structFRHAPI__PlayerOrderEntry_1a92e20677f3caeab023495fffbb12ebdd"></a>

Gets the value of Result_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a837c1960c7e917d2584e9bab96a90268)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a837c1960c7e917d2584e9bab96a90268"></a>

Gets the value of Result_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1abde4bc72e040dcd14b7db1917860d8c9)`(const ERHAPI_PlayerOrderEntryResult & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1abde4bc72e040dcd14b7db1917860d8c9"></a>

Gets the value of Result_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a4598d9886e7105cf693f4bab7751537a)`(ERHAPI_PlayerOrderEntryResult & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a4598d9886e7105cf693f4bab7751537a"></a>

Fills OutValue with the value of Result_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a0beec35ec2737e38d0ab3912f718ccb6)`()` <a id="structFRHAPI__PlayerOrderEntry_1a0beec35ec2737e38d0ab3912f718ccb6"></a>

Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a747bc71dc066b735d0e2743ec5c75999)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a747bc71dc066b735d0e2743ec5c75999"></a>

Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1a1d238b38f731b4e639ebdc6d387ddaea)`(const ERHAPI_PlayerOrderEntryResult & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a1d238b38f731b4e639ebdc6d387ddaea"></a>

Sets the value of Result_Optional and also sets Result_IsSet to true.

#### `public inline FORCEINLINE void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1a1b05f180771a40af4e31e6f9d352da3b)`(ERHAPI_PlayerOrderEntryResult && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a1b05f180771a40af4e31e6f9d352da3b"></a>

Sets the value of Result_Optional and also sets Result_IsSet to true using move semantics.

#### `public inline void `[`ClearResult`](#structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f"></a>

Clears the value of Result_Optional and sets Result_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1aa4116277522e2a53cf9f376fb7c5c7a5)`()` <a id="structFRHAPI__PlayerOrderEntry_1aa4116277522e2a53cf9f376fb7c5c7a5"></a>

Gets the value of Details_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1aae65b13f1733e22fed5e1b55ff3f6f7e)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aae65b13f1733e22fed5e1b55ff3f6f7e"></a>

Gets the value of Details_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1ab7146c01cbabcc2989e5e38494726100)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ab7146c01cbabcc2989e5e38494726100"></a>

Gets the value of Details_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1a0c1037ab6edc35804a2521452ef68da9)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a0c1037ab6edc35804a2521452ef68da9"></a>

Fills OutValue with the value of Details_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a5d0edd9b7ba72a929e1a1f500e1fa2e5)`()` <a id="structFRHAPI__PlayerOrderEntry_1a5d0edd9b7ba72a929e1a1f500e1fa2e5"></a>

Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a59b20ed29aeecbb8aa55c3627b50402a)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a59b20ed29aeecbb8aa55c3627b50402a"></a>

Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1a800369d9157070293e76b1db23d0b641)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a800369d9157070293e76b1db23d0b641"></a>

Sets the value of Details_Optional and also sets Details_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1a4ddddc803a1ab1ea94558cbccd40d919)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > && NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a4ddddc803a1ab1ea94558cbccd40d919"></a>

Sets the value of Details_Optional and also sets Details_IsSet to true using move semantics.

#### `public inline void `[`ClearDetails`](#structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38)`()` <a id="structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38"></a>

Clears the value of Details_Optional and sets Details_IsSet to false.

