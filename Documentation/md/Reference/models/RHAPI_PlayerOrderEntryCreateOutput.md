---
title: RHAPI_PlayerOrderEntryCreateOutput
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderEntryCreateOutput`](#structFRHAPI__PlayerOrderEntryCreateOutput) | Request to create a Player Order Entry.

## struct `FRHAPI_PlayerOrderEntryCreateOutput` <a id="structFRHAPI__PlayerOrderEntryCreateOutput"></a>

```
struct FRHAPI_PlayerOrderEntryCreateOutput
  : public FRHAPI_Model
```

Request to create a Player Order Entry.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab788765b61f7a2bd920079db91c30c79) | 
`public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a24148c2e4a3e3ccfa039b58b4a75f625) | 
`public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3f5eba7c3d7c924eb36a8d08046721c7) | true if LootId_Optional has been set to a value
`public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a118d8395115d624e60f53fe61e561e8e) | true if LootId_Optional has been explicitly set to null
`public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1cb55dac39a53eb1db2875903f6b80af) | Quantity of Inventory.
`public int32 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a755f207b81f248553f0a0efc6265b315) | 
`public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae52f13ff7f3bbce011f45a9b84336444) | true if VendorVersion_Optional has been set to a value
`public bool `[`VendorVersion_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa5404981cc9279310c2c42557b328bca) | true if VendorVersion_Optional has been explicitly set to null
`public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a64a802fad764b71755cc9eb619f0d9a9) | 
`public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a85ff30bc49fc1324d67c62fe6746bb97) | true if VendorEtag_Optional has been set to a value
`public bool `[`VendorEtag_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a497e8e9017d0d2eae58a3aefb9b7e8e4) | true if VendorEtag_Optional has been explicitly set to null
`public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a107c56896b5b6b78425e0f0e0aa6f3eb) | 
`public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3979fe51a5bdbf449c0a411320392064) | true if DynamicBundleLootIds_Optional has been set to a value
`public bool `[`DynamicBundleLootIds_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac83291f35f65d278289a86aa2a4cdb9c) | true if DynamicBundleLootIds_Optional has been explicitly set to null
`public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aec28ce25ba7f09c7d06f27d0f4267670) | 
`public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac31378eee57750da21ebe1ebeb534049) | true if PurchasePrice_Optional has been set to a value
`public bool `[`PurchasePrice_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a76a444dad19cd73ce32e7dac89d4c3e8) | true if PurchasePrice_Optional has been explicitly set to null
`public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9982ed397a4f87ac3f545a32ae62e677) | 
`public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a357b66944da5dde027d8c677d03c10bd) | true if ExternalTranId_Optional has been set to a value
`public bool `[`ExternalTranId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a840fc9fb9ec4021d4e5850fe93815428) | true if ExternalTranId_Optional has been explicitly set to null
`public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d1e0a937dc0b460772ea33b654b8c26) | 
`public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a13126ac848a66bf39c43f75aa65b5996) | true if ExternalItemSku_Optional has been set to a value
`public bool `[`ExternalItemSku_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04f2eff00b4a4991259dc93f2caf7bf2) | true if ExternalItemSku_Optional has been explicitly set to null
`public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0dd9af63ab5994d97ddc860e7642ffb0) | 
`public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9e2bf6c329668ec7fe293d9b2555dba7) | true if UseInventoryBucket_Optional has been set to a value
`public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8c06d2aa9edba4073c1f42107eb4def) | true if UseInventoryBucket_Optional has been explicitly set to null
`public int32 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a55cbccd478fcb07bc246c69cea031199) | 
`public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3e19f59b78a0b92e98597a6a33ee137f) | true if PlayerPortalEventId_Optional has been set to a value
`public bool `[`PlayerPortalEventId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a207f0457c4693a0cf1cacd7cc7a40d41) | true if PlayerPortalEventId_Optional has been explicitly set to null
`public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3bdc04f1441435d1384b4bd6b4ca6210) | 
`public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8148881a0f5da46f1ef5542b46d97c91) | true if InventoryId_Optional has been set to a value
`public bool `[`InventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9e8c4348a0138c70d1e399f0ef6c2a49) | true if InventoryId_Optional has been explicitly set to null
`public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2bdd7c82bc7f2eaff8d13a29d3e5f799) | 
`public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0db9a42975712ece5920752a8ed701d8) | true if LegacyInventoryId_Optional has been set to a value
`public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aad1dbefc9682d5462184b7743d631b41) | true if LegacyInventoryId_Optional has been explicitly set to null
`public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af010439c31f65430418d158b8e3983f3) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac416e9d372cc00a6d5a56165151e2603) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a93fb67b66a5dcd36033cd431d672e976) | true if ItemId_Optional has been explicitly set to null
`public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a014c8b6173a251e39538f5a67ec2aca7) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abca9494fc03845ae9bfaf7481f9bf3cb) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae09f22404c85b4d94a39a1db84a9ba10) | true if Expires_Optional has been explicitly set to null
`public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a538d16ca160f5825c3631c2f83bdda2a) | 
`public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa0285ab29dc43599f7f17d96671efed2) | true if XpQuantityTransformType_Optional has been set to a value
`public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a75c5008309d2b09198306a67fa30bbce) | 
`public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9ed9a30c0122a212aa48e6d4fb2be475) | true if HardQuantityMaximum_Optional has been set to a value
`public bool `[`HardQuantityMaximum_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa7a178576e93c149b6d37166fd32fc83) | true if HardQuantityMaximum_Optional has been explicitly set to null
`public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aad5aa85ce45415c15e0e69f52e7ec518) | 
`public bool `[`InventoryOperation_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abc90aef965664ac9cd8efcd041eeefc3) | true if InventoryOperation_Optional has been set to a value
`public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4b7032e8dcce26e52f0a3d12ea7f054a) | 
`public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2e03007af5e98474073d315b5e7b3c40) | true if InventorySelectorType_Optional has been set to a value
`public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a67497e8afcaac20e7e4f5da5cddcbff5) | 
`public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a34867b0a95cf5645090105cc7f26ab0b) | true if QuantityMultInventoryItemId_Optional has been set to a value
`public bool `[`QuantityMultInventoryItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a61e5b0a11fbf0dac2f7905d7149a92c5) | true if QuantityMultInventoryItemId_Optional has been explicitly set to null
`public int32 `[`TimeFrameId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1acb2718700c6fd369dc51ecc14e8532f9) | 
`public bool `[`TimeFrameId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0a604c09c48bb55b4ed9c7ddd87c9188) | true if TimeFrameId_Optional has been set to a value
`public bool `[`TimeFrameId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9238b05dcbaf9e6a26015718f7c0a813) | true if TimeFrameId_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a60c6bb8e54be407aa4e6d7a2c091a1f6) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af2374a9f9e6bab06d7a4b5aa9ea3b838) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac78572f353e00b2d00f1c7f4ea10c81a) | true if CustomData_Optional has been explicitly set to null
`public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a79a93b8fb4a655fe7cd4540c5a806839) | 
`public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abe2eb1d0687281f0de5b45c4258787c0) | true if EntryId_Optional has been set to a value
`public bool `[`EntryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f5c098183d636edcbd090d3ca2ca5fc) | true if EntryId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab8597e29a16b420d1bd8f8e5c2b194f6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a411f3b4ce7109667bbb8760e35b578e1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa9cb48d91b942443ce0cdd86c89e6d03)`()` | Gets the value of Type.
`public inline FORCEINLINE const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8e80661e6e437772e8442ead141cc33f)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afba9ebb6f77703e32f0d16e6a9a821c2)`(const ERHAPI_PlayerOrderEntryType & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a132bb13f1b47bb8cffefd304d05762e5)`(ERHAPI_PlayerOrderEntryType && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad27f11bc5b4ac7bbb82d0a281341eb26)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2acbbfa0ade10363c9b964643b55973f)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a44c4e14175de329a3f5dcfe082458e54)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0a98c80c9d869201e6faddbdff8d0bdb)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a49a6df14cfe486b472875c3152ffc39e)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7074f6010a7061c90c14cae0e5a46d1b)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6dc198b90e1fdf29ace816ad77472fa6)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aed8905f24f2a763722469a04fe07673f)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab7af9a69745838d900eed9d7397b3ab4)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a225d09d06c1cae05997788a103a59a1d)`()` | Returns the default value of LootId.
`public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a21a3acae9d7fd49402c03bc31d7d16ce)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a939fe913071b9a8e6357bf0d68ffb871)`() const` | Checks whether LootId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4815cbe27853bb4d27db3275fe7beb78)`()` | Gets the value of Quantity.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a300f53f8be45d922693be6c47cd90f2b)`() const` | Gets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a852319633e92b2de440608151a6ccdb8)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a549b13e4def9554f8dca8a0f3f8d8088)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a70ea1e46ae133ec813fc73916bef15e9)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a657673645b1d197d41357363e6be0905)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af04af6809350f0cac5227d3e30c21b66)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9d7a87883682c1702992d986533afb8d)`(const int32 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adca3c33d810c7682c396bb6c9518623f)`(int32 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4dc3eae170eeb736e33a71e8333778a9)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab9bd2b8b152859425bb01f7f9986a062)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af0ec332f0123b43051fe514e6fbbb0cf)`(const int32 & NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad0c7fe3c7a9219c736a9aed50886cb07)`(int32 && NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a99fe2b496ead851f3fbb21d2f77e0f7a)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_VendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad8e5ec06daa9e142369c363de5bd5fb7)`()` | Returns the default value of VendorVersion.
`public inline FORCEINLINE void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afccb5c32f75384cb528dfb71b9eb814c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7bebf83c20a25df7522f26ef102e5f1e)`() const` | Checks whether VendorVersion_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4339358534a00968ef9845f28902d0eb)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a00b91aade30cf2e741c7508061f5f55e)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2baf3399d3df43ce20a8eec23f933bca)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a44ad01bfaf3bf458afbcdcf2b4d3affb)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2a205f0683b9dbd7f87274447cdfd479)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4a28f794a410dd00bd9867d2f8969ae3)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1acc0159dd4eb4aa9bd9206af4532f45c0)`(const FString & NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8e3667ce2269511764d703f06000bf3b)`(FString && NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9d2f925ddd396b4e0e472570907af62b)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline FORCEINLINE void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a140b2089e78fc8c73b355cb7e066c966)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a307275890e82dce612c853fc53a37c53)`() const` | Checks whether VendorEtag_Optional is set to null.
`public inline FORCEINLINE TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04647f0b835890b4ac5a79b1937cd8eb)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a85cee6422303563ba36d1834cd82c538)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa4c8b69059620c757d6d2e9c792e2ad3)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1f216669dbb933a9ebeb156257e59fbe)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1b6a9109bcbb05e0f4e595222a1030c9)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8716141fd71aa339603542120e0cf036)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2fd37b8b94c7aa50dca6b4552e0fce32)`(const TArray< int32 > & NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04f0ccf84c9fdf50bdbd0544ddb4994f)`(TArray< int32 > && NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8d2c0b2a02505d9829df31f5f2ceaa5)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a16f304056351c19f0695080a27d863ca)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a034ddc2fd18195495c9e14eb7d0c6c7b)`() const` | Checks whether DynamicBundleLootIds_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3da8b8be7c7cacd543e681a03207778c)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6e8ec37c8bb24db3a6322dfd5ca0b8e2)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2dd0339d3025968be75a6efb398f973b)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aee054dcd4e3ffd7e1f2bfa4bc48f389b)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a05a02f9575b5e8558220c21816ac1055)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa235e31644c0eb13ae88665f14b1bbd0)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a550f63c32111b12d2a60b62faacb6f6c)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a375df249dc00fb651e397937129fd00d)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aaba05cd5ffa2fd7ba53e52aa57fa2568)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline FORCEINLINE void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab596f1c0273d472593084d1643b371f7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a462ad42bf9eec7d34c93c84f6fc7516a)`() const` | Checks whether PurchasePrice_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a100b18610a75a8171f287fbb7deb0cf2)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af97bb5abbb425d49f9169dc4262d50e3)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad57523211b81817ace8883e786b6b5c0)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0cb30a28055d83a35ea14cdf1988d286)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad1c9836157526d78fa205d770de0186e)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a48fecec274202f939226fff3b462f7d0)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5c4e7e796c992239a3041f9efadc9100)`(const FString & NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a743ab3e0daf1430e1accdc3d938b980d)`(FString && NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a71b1cc14f8ffba45f332e7cd1ef60440)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a339f609909040bcb05c6d45a36c70043)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac89960d9f5cedb06362e72e44db27d96)`() const` | Checks whether ExternalTranId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5e570bb121c1ee5204a6173fed538e5f)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab702f59a76c0158c2149ec11e3dd8f3d)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a32f0dac475b29102bbe7094915b6c777)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a56b4a442bb0eef6a81f6e1d69cd1d0a7)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae37ba0e5fe1458ccaddcd995033d8536)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abda24e787bac45dc3eddd532f7c4b8cb)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa57e0c5cc5b29e2c0e9c800a3e43bc08)`(const FString & NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f97cbca4b512d479fa5d1735072cae3)`(FString && NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae496d73de191d06ce33d8e8c78743d06)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa86f128e0dcaa181da28f90d7d643768)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac782a9ffa84f4a1dc1b6cf4ffe67a210)`() const` | Checks whether ExternalItemSku_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3dd96a986e7addc687cc476252cfb92e)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a51ec76ad9f5e8fc3bcdf6487d26a9321)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a19532dfaeead62991424dc7f2c0deeea)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a85537dc2fc5f034a1613b1bd420eb53e)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7897480328d7b920d2b87f1088e5ee4c)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae2cfe2d9a970c1f07715156991242fec)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa19e167639b4cbd0bc7fbb6f2d8c768f)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8f91ce2716d69d2be806d7f7e0a71b7)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afd1f948313e415699d36bfd9ade9c4dd)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline FORCEINLINE void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a73f383d146cd345566b090ade85db964)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a132a6dad4dba274fb87c4cb139097664)`() const` | Checks whether UseInventoryBucket_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae88aa4f69a10f684accfb9ea58284ead)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a92e491a1eef6f30a6d1273ead5ad6340)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a12e6cd2b237746e327966875b0c99d28)`(const int32 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aaf4f38839ecc5ff801779f97aa51c5fc)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0ab19518a1458de17fea98c2a5efdb9a)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4f906653c556db306b6d4e9ba89489c7)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ace8e9980ab533beb2c27d66064963964)`(const int32 & NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9d954b3275ce6bef415c52dfed4e285e)`(int32 && NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a56363a6d6b7461f39708a7b55416ef55)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a513835e3f3013799bfd0468b3a9f1e54)`()` | Returns the default value of PlayerPortalEventId.
`public inline FORCEINLINE void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a50c01b4691fb167c96409d690fb31674)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a002eb527d9f586852db093d55a63a5c3)`() const` | Checks whether PlayerPortalEventId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aee620312afea17d79b98578466f8400a)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0d70037ccc9c7ad6a8de7c0c30013bcd)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a64365092d5ebbd9f519546783dc01521)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3e06682768c4ef9ac17f4fc4aa0cd9a6)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9340781108acc3994679a7e701d297c1)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac4bdc0807f926ea9b578855d78a66da8)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeed4a10b44d4d5598d80f7a5b7885001)`(const FGuid & NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a39ee106be2a98d378b05b8f1a3680ead)`(FGuid && NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a49dda4886adaacddc546c3377fdb0758)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline FORCEINLINE void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1addd3b00c03d3de76dead94dc4709b25e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abae91515eb4d4cab9c3c1228e23d187d)`() const` | Checks whether InventoryId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a45ff0a6b68542b1fe57191b2213824fc)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a28e655d626ce9c781f72343acdb47905)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8d2bd21ee18d87def98d163c2ebcd822)`(const int32 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa7b71a51a8ebc44328b972b277be768a)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a913000cf665532a403fcfdeb405e541b)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1d09acfc3c585a85fb8503ea7e47ae45)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aac84a2a89e27e06fad67296b282af706)`(const int32 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa5df28c68b1026cd8da02045e964628c)`(int32 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae6b325f3f8d2f280df487eadf405948e)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab4baf947939834ab7e331dea86e94bca)`()` | Returns the default value of LegacyInventoryId.
`public inline FORCEINLINE void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a332c90eaa02cac140eefa9af4e7c36e8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abf851de09bf532810c74e29541404e01)`() const` | Checks whether LegacyInventoryId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a06dbe78bf9cee920cc070cde1c94125f)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8515e0cf6cc58f5b741cdb01e3621b54)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aea43b187d568535fa5ad1f22bbe4084b)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1f24b7738203d897413a2455db5dfd82)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae1e7570691b1a3993728aad19075a66e)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afaa946f6671fdad503cfbc0a5bcc771e)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad72a334e30b817368fae3f0652231181)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a77936cc29b57a7a09caccb4a84c66a92)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae910eda3382428e86d6ccbdc1481b122)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a486e308445c8f982e3709c5dc81828ad)`()` | Returns the default value of ItemId.
`public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a021399ebc03adb56eae535595132c3b9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0afc369255470574482d1dba99d66ed6)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa892e48c0d202cef68fe3fd059e8e5ad)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a08f25953be1a7c6e3a8c2c821068353b)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04c03419387416be391d18e07c171057)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6ec6da81054e4802d917c34d6b81260c)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8d7aa41ad2079064df60eac4156495ec)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac07b5227da62f6fd420a50e3ad0e423f)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af6f289bf88f32dbf99d25fa15289e7a8)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a88ed485c2de52ddb122ef088d9c92a5b)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2d1dfbd1f39ec4940f36e281c09b1e22)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1add448cad24a4e94c58d511d6b65a72cf)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a714395ad0242e8d4507305204d8da754)`() const` | Checks whether Expires_Optional is set to null.
`public inline FORCEINLINE ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a99bd4d00d83097cfb9437164da71457b)`()` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a89028961d8c04eeddcba138cb0f19c74)`() const` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a94b2990010db1c32d41d00756d648e65)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` | Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a76d65b0521626c541ad1f072784e0062)`(ERHAPI_XpQuantityTransform & OutValue) const` | Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1ecfc772c02bd5aa1ab4b1dec01c2eb0)`()` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7ab9a41e463ab87b848fef48072e207c)`() const` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a896eefa585c64aa1ff9b447ff6b5f47a)`(const ERHAPI_XpQuantityTransform & NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.
`public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa717815e015d024cb0748329b71e50de)`(ERHAPI_XpQuantityTransform && NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.
`public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab78f59f867519b587aa365073f21fda9)`()` | Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4cc1005c09b733c8d1af94e2cec7b2eb)`()` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae28ce3841cc3915cff68dd1239ee9f35)`() const` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abded923f7a78cfafdd645a84afea4138)`(const int32 & DefaultValue) const` | Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a330fd2f2ddf43129983be84cf66bc0a4)`(int32 & OutValue) const` | Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a268107c52d80a2e65562c15f93070281)`()` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a59333a3cd7e673f7de83faab4f9ea306)`() const` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6b8601e3ff65aebd446fcc620cb53317)`(const int32 & NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.
`public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9777b8aea4534800d05ece2632da7faa)`(int32 && NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.
`public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2e76f88150ad2a456620a9f9bab4c3d5)`()` | Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_HardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3050b8d8ee9f5b9f22885860dd022f2a)`()` | Returns the default value of HardQuantityMaximum.
`public inline FORCEINLINE void `[`SetHardQuantityMaximumToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a08b45ef01f4a0796581d86ade30d0939)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsHardQuantityMaximumNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a77fd05cdd76dcf14f8c3af8557dc72d1)`() const` | Checks whether HardQuantityMaximum_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab9b52fd60fe814ad0e6c160ea23c5c2f)`()` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8dc22896add0e5237b390d0d9c6e91d5)`() const` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a323dfe69837ab73217e662d37a265314)`(const ERHAPI_InventoryOperation & DefaultValue) const` | Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae4822128d6b0d8289b927845875b0696)`(ERHAPI_InventoryOperation & OutValue) const` | Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aacd0d2b3c2cc5346371bb6e3985a4956)`()` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae54f857b76c214aff860cd1738891db3)`() const` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1acc76a07388dfac5e4548b911a14a1530)`(const ERHAPI_InventoryOperation & NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.
`public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb428168a9323f293f537ab1e24eded3)`(ERHAPI_InventoryOperation && NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.
`public inline void `[`ClearInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa3119b441b2d24cf25096ff155c174b1)`()` | Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.
`public inline FORCEINLINE ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5f58e1727e880a611aebee8eadf849b6)`()` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a32c9f1dc649eb97ba027bea316c22109)`() const` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a28270b23dabacc3a473224d3870ff3a3)`(const ERHAPI_InventorySelector & DefaultValue) const` | Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7e00e3a939cbf732aa064ec82ff72252)`(ERHAPI_InventorySelector & OutValue) const` | Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a70747e8ddce8d7cca323708d9e3e0d50)`()` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac21c842a1e0d14c589a4c6a43ace9e2b)`() const` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac3b21a19974e31b844cd94db49774dac)`(const ERHAPI_InventorySelector & NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.
`public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5de6df150ecf09976efa921055494db1)`(ERHAPI_InventorySelector && NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.
`public inline void `[`ClearInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a75aefa7e0b728d01206ff3f8c97acace)`()` | Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a382b66aee6ec12311b4fae38b7eb55ef)`()` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a250c36fba5a51a887a2225f00069e114)`() const` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a182ee014bc39a48e201de89236560a26)`(const int32 & DefaultValue) const` | Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a605cf0ee7c8dd4773357f8ffe6775fb3)`(int32 & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a21853a70de6780a79e8f75525ec13459)`()` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3c8bf55448b6c87cc530ba4a967a19fc)`() const` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7ea60970634a0b138728940641b2155b)`(const int32 & NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a75cdd4004b6f31c1cfd1d29fa5d3f62d)`(int32 && NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.
`public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1acc3a4df31a38d0136d5fa3cda2c2e8b2)`()` | Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_QuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeb4bb7e6fabf158b76d54903aa3f1aa3)`()` | Returns the default value of QuantityMultInventoryItemId.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afd988b7241c138b6c596c2c391118e7e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2c6b73fdf1e48c6fdc292bcd06d7fca1)`() const` | Checks whether QuantityMultInventoryItemId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a776f59316bc4386763d4551d8162e512)`()` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a104ba45a68b72d05905c5fc7f6e725ff)`() const` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a57cef69a79b26eea205f2e10ad1b734c)`(const int32 & DefaultValue) const` | Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad7da741e9f61160245f71417a3f90cb4)`(int32 & OutValue) const` | Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a524e14b7babf8fd2266507290046e085)`()` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a133a4f44162e4caced78243fd74175a6)`() const` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a15e926300f7d85f0b0f20f88678701f2)`(const int32 & NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.
`public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2bea4d775f7d8ac2b52aa35c6b30d6d3)`(int32 && NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.
`public inline void `[`ClearTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa974bc745b554af86e78d2aa1a202512)`()` | Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa909f28becd7a6135a6925abdfe6286e)`()` | Returns the default value of TimeFrameId.
`public inline FORCEINLINE void `[`SetTimeFrameIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae4267e09cd330b8c8500c636e69568b3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTimeFrameIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa155f3d5294cb0b66509c2b5b7261aa8)`() const` | Checks whether TimeFrameId_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0f4cc3ab09b275aaf48d87f9fbc36f30)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a24093b3ca6b84812da242627b353f5b0)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeeb56e9c836c05c2816dff419f6e2798)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae39e91d1989c9875e7737084d11510e4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4c14c9f9217c2b56d0b142a5ab8952be)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad051f0d8f524fc1fc3f40c1b4fe07079)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac657d5480ab078337195ea804f3ce36a)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afd24e7a54bc26cda862afbee59699ae6)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f650b6f47cea84f8ad1a3996a756915)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab000d55f17e63a4fccad6c493a048cd5)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a714f31a4a1635d2785a50f10f902a028)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0a2532fe02d048d98e7cffd34afcb30e)`()` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a65c0e5b4ed178146f3bd7074f1cd4b8e)`() const` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a00e3dd92c562c3e1b13db698b2a86122)`(const FString & DefaultValue) const` | Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab1df0695f4b7e88c17ad9979f04b8ce3)`(FString & OutValue) const` | Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a42990c15de277dc0104c83f32257aa0b)`()` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af5e72ff7756e66b4c507c751a7bc0304)`() const` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4b28cff8b17cfb36ece6663c895eb146)`(const FString & NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.
`public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a981e8eb00a2450d94b60bc7e17307e16)`(FString && NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.
`public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a42bee7218f7b474a1749f2cd449ab48e)`()` | Clears the value of EntryId_Optional and sets EntryId_IsSet to false.
`public inline FORCEINLINE void `[`SetEntryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a06fbc98db287d648eeda8811e6090303)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEntryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ace5f2ff8ad83f369f9521bb3085e3fdc)`() const` | Checks whether EntryId_Optional is set to null.

### Members

#### `public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab788765b61f7a2bd920079db91c30c79) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab788765b61f7a2bd920079db91c30c79"></a>

#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a24148c2e4a3e3ccfa039b58b4a75f625) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a24148c2e4a3e3ccfa039b58b4a75f625"></a>

#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3f5eba7c3d7c924eb36a8d08046721c7) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3f5eba7c3d7c924eb36a8d08046721c7"></a>

true if LootId_Optional has been set to a value

#### `public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a118d8395115d624e60f53fe61e561e8e) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a118d8395115d624e60f53fe61e561e8e"></a>

true if LootId_Optional has been explicitly set to null

#### `public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1cb55dac39a53eb1db2875903f6b80af) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1cb55dac39a53eb1db2875903f6b80af"></a>

Quantity of Inventory.

#### `public int32 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a755f207b81f248553f0a0efc6265b315) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a755f207b81f248553f0a0efc6265b315"></a>

#### `public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae52f13ff7f3bbce011f45a9b84336444) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae52f13ff7f3bbce011f45a9b84336444"></a>

true if VendorVersion_Optional has been set to a value

#### `public bool `[`VendorVersion_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa5404981cc9279310c2c42557b328bca) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa5404981cc9279310c2c42557b328bca"></a>

true if VendorVersion_Optional has been explicitly set to null

#### `public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a64a802fad764b71755cc9eb619f0d9a9) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a64a802fad764b71755cc9eb619f0d9a9"></a>

#### `public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a85ff30bc49fc1324d67c62fe6746bb97) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a85ff30bc49fc1324d67c62fe6746bb97"></a>

true if VendorEtag_Optional has been set to a value

#### `public bool `[`VendorEtag_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a497e8e9017d0d2eae58a3aefb9b7e8e4) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a497e8e9017d0d2eae58a3aefb9b7e8e4"></a>

true if VendorEtag_Optional has been explicitly set to null

#### `public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a107c56896b5b6b78425e0f0e0aa6f3eb) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a107c56896b5b6b78425e0f0e0aa6f3eb"></a>

#### `public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3979fe51a5bdbf449c0a411320392064) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3979fe51a5bdbf449c0a411320392064"></a>

true if DynamicBundleLootIds_Optional has been set to a value

#### `public bool `[`DynamicBundleLootIds_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac83291f35f65d278289a86aa2a4cdb9c) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac83291f35f65d278289a86aa2a4cdb9c"></a>

true if DynamicBundleLootIds_Optional has been explicitly set to null

#### `public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aec28ce25ba7f09c7d06f27d0f4267670) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aec28ce25ba7f09c7d06f27d0f4267670"></a>

#### `public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac31378eee57750da21ebe1ebeb534049) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac31378eee57750da21ebe1ebeb534049"></a>

true if PurchasePrice_Optional has been set to a value

#### `public bool `[`PurchasePrice_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a76a444dad19cd73ce32e7dac89d4c3e8) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a76a444dad19cd73ce32e7dac89d4c3e8"></a>

true if PurchasePrice_Optional has been explicitly set to null

#### `public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9982ed397a4f87ac3f545a32ae62e677) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9982ed397a4f87ac3f545a32ae62e677"></a>

#### `public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a357b66944da5dde027d8c677d03c10bd) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a357b66944da5dde027d8c677d03c10bd"></a>

true if ExternalTranId_Optional has been set to a value

#### `public bool `[`ExternalTranId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a840fc9fb9ec4021d4e5850fe93815428) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a840fc9fb9ec4021d4e5850fe93815428"></a>

true if ExternalTranId_Optional has been explicitly set to null

#### `public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d1e0a937dc0b460772ea33b654b8c26) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4d1e0a937dc0b460772ea33b654b8c26"></a>

#### `public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a13126ac848a66bf39c43f75aa65b5996) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a13126ac848a66bf39c43f75aa65b5996"></a>

true if ExternalItemSku_Optional has been set to a value

#### `public bool `[`ExternalItemSku_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04f2eff00b4a4991259dc93f2caf7bf2) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a04f2eff00b4a4991259dc93f2caf7bf2"></a>

true if ExternalItemSku_Optional has been explicitly set to null

#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0dd9af63ab5994d97ddc860e7642ffb0) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0dd9af63ab5994d97ddc860e7642ffb0"></a>

#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9e2bf6c329668ec7fe293d9b2555dba7) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9e2bf6c329668ec7fe293d9b2555dba7"></a>

true if UseInventoryBucket_Optional has been set to a value

#### `public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8c06d2aa9edba4073c1f42107eb4def) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af8c06d2aa9edba4073c1f42107eb4def"></a>

true if UseInventoryBucket_Optional has been explicitly set to null

#### `public int32 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a55cbccd478fcb07bc246c69cea031199) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a55cbccd478fcb07bc246c69cea031199"></a>

#### `public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3e19f59b78a0b92e98597a6a33ee137f) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3e19f59b78a0b92e98597a6a33ee137f"></a>

true if PlayerPortalEventId_Optional has been set to a value

#### `public bool `[`PlayerPortalEventId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a207f0457c4693a0cf1cacd7cc7a40d41) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a207f0457c4693a0cf1cacd7cc7a40d41"></a>

true if PlayerPortalEventId_Optional has been explicitly set to null

#### `public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3bdc04f1441435d1384b4bd6b4ca6210) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3bdc04f1441435d1384b4bd6b4ca6210"></a>

#### `public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8148881a0f5da46f1ef5542b46d97c91) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8148881a0f5da46f1ef5542b46d97c91"></a>

true if InventoryId_Optional has been set to a value

#### `public bool `[`InventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9e8c4348a0138c70d1e399f0ef6c2a49) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9e8c4348a0138c70d1e399f0ef6c2a49"></a>

true if InventoryId_Optional has been explicitly set to null

#### `public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2bdd7c82bc7f2eaff8d13a29d3e5f799) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2bdd7c82bc7f2eaff8d13a29d3e5f799"></a>

#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0db9a42975712ece5920752a8ed701d8) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0db9a42975712ece5920752a8ed701d8"></a>

true if LegacyInventoryId_Optional has been set to a value

#### `public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aad1dbefc9682d5462184b7743d631b41) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aad1dbefc9682d5462184b7743d631b41"></a>

true if LegacyInventoryId_Optional has been explicitly set to null

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af010439c31f65430418d158b8e3983f3) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af010439c31f65430418d158b8e3983f3"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac416e9d372cc00a6d5a56165151e2603) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac416e9d372cc00a6d5a56165151e2603"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a93fb67b66a5dcd36033cd431d672e976) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a93fb67b66a5dcd36033cd431d672e976"></a>

true if ItemId_Optional has been explicitly set to null

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a014c8b6173a251e39538f5a67ec2aca7) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a014c8b6173a251e39538f5a67ec2aca7"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abca9494fc03845ae9bfaf7481f9bf3cb) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abca9494fc03845ae9bfaf7481f9bf3cb"></a>

true if Expires_Optional has been set to a value

#### `public bool `[`Expires_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae09f22404c85b4d94a39a1db84a9ba10) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae09f22404c85b4d94a39a1db84a9ba10"></a>

true if Expires_Optional has been explicitly set to null

#### `public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a538d16ca160f5825c3631c2f83bdda2a) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a538d16ca160f5825c3631c2f83bdda2a"></a>

#### `public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa0285ab29dc43599f7f17d96671efed2) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa0285ab29dc43599f7f17d96671efed2"></a>

true if XpQuantityTransformType_Optional has been set to a value

#### `public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a75c5008309d2b09198306a67fa30bbce) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a75c5008309d2b09198306a67fa30bbce"></a>

#### `public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9ed9a30c0122a212aa48e6d4fb2be475) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9ed9a30c0122a212aa48e6d4fb2be475"></a>

true if HardQuantityMaximum_Optional has been set to a value

#### `public bool `[`HardQuantityMaximum_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa7a178576e93c149b6d37166fd32fc83) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa7a178576e93c149b6d37166fd32fc83"></a>

true if HardQuantityMaximum_Optional has been explicitly set to null

#### `public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aad5aa85ce45415c15e0e69f52e7ec518) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aad5aa85ce45415c15e0e69f52e7ec518"></a>

#### `public bool `[`InventoryOperation_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abc90aef965664ac9cd8efcd041eeefc3) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abc90aef965664ac9cd8efcd041eeefc3"></a>

true if InventoryOperation_Optional has been set to a value

#### `public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4b7032e8dcce26e52f0a3d12ea7f054a) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4b7032e8dcce26e52f0a3d12ea7f054a"></a>

#### `public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2e03007af5e98474073d315b5e7b3c40) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2e03007af5e98474073d315b5e7b3c40"></a>

true if InventorySelectorType_Optional has been set to a value

#### `public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a67497e8afcaac20e7e4f5da5cddcbff5) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a67497e8afcaac20e7e4f5da5cddcbff5"></a>

#### `public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a34867b0a95cf5645090105cc7f26ab0b) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a34867b0a95cf5645090105cc7f26ab0b"></a>

true if QuantityMultInventoryItemId_Optional has been set to a value

#### `public bool `[`QuantityMultInventoryItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a61e5b0a11fbf0dac2f7905d7149a92c5) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a61e5b0a11fbf0dac2f7905d7149a92c5"></a>

true if QuantityMultInventoryItemId_Optional has been explicitly set to null

#### `public int32 `[`TimeFrameId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1acb2718700c6fd369dc51ecc14e8532f9) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1acb2718700c6fd369dc51ecc14e8532f9"></a>

#### `public bool `[`TimeFrameId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0a604c09c48bb55b4ed9c7ddd87c9188) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0a604c09c48bb55b4ed9c7ddd87c9188"></a>

true if TimeFrameId_Optional has been set to a value

#### `public bool `[`TimeFrameId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9238b05dcbaf9e6a26015718f7c0a813) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9238b05dcbaf9e6a26015718f7c0a813"></a>

true if TimeFrameId_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a60c6bb8e54be407aa4e6d7a2c091a1f6) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a60c6bb8e54be407aa4e6d7a2c091a1f6"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af2374a9f9e6bab06d7a4b5aa9ea3b838) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af2374a9f9e6bab06d7a4b5aa9ea3b838"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac78572f353e00b2d00f1c7f4ea10c81a) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac78572f353e00b2d00f1c7f4ea10c81a"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a79a93b8fb4a655fe7cd4540c5a806839) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a79a93b8fb4a655fe7cd4540c5a806839"></a>

#### `public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abe2eb1d0687281f0de5b45c4258787c0) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abe2eb1d0687281f0de5b45c4258787c0"></a>

true if EntryId_Optional has been set to a value

#### `public bool `[`EntryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f5c098183d636edcbd090d3ca2ca5fc) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2f5c098183d636edcbd090d3ca2ca5fc"></a>

true if EntryId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab8597e29a16b420d1bd8f8e5c2b194f6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab8597e29a16b420d1bd8f8e5c2b194f6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a411f3b4ce7109667bbb8760e35b578e1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a411f3b4ce7109667bbb8760e35b578e1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa9cb48d91b942443ce0cdd86c89e6d03)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa9cb48d91b942443ce0cdd86c89e6d03"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8e80661e6e437772e8442ead141cc33f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8e80661e6e437772e8442ead141cc33f"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afba9ebb6f77703e32f0d16e6a9a821c2)`(const ERHAPI_PlayerOrderEntryType & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afba9ebb6f77703e32f0d16e6a9a821c2"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a132bb13f1b47bb8cffefd304d05762e5)`(ERHAPI_PlayerOrderEntryType && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a132bb13f1b47bb8cffefd304d05762e5"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad27f11bc5b4ac7bbb82d0a281341eb26)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad27f11bc5b4ac7bbb82d0a281341eb26"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2acbbfa0ade10363c9b964643b55973f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2acbbfa0ade10363c9b964643b55973f"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a44c4e14175de329a3f5dcfe082458e54)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a44c4e14175de329a3f5dcfe082458e54"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0a98c80c9d869201e6faddbdff8d0bdb)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0a98c80c9d869201e6faddbdff8d0bdb"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a49a6df14cfe486b472875c3152ffc39e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a49a6df14cfe486b472875c3152ffc39e"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7074f6010a7061c90c14cae0e5a46d1b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7074f6010a7061c90c14cae0e5a46d1b"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6dc198b90e1fdf29ace816ad77472fa6)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6dc198b90e1fdf29ace816ad77472fa6"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aed8905f24f2a763722469a04fe07673f)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aed8905f24f2a763722469a04fe07673f"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab7af9a69745838d900eed9d7397b3ab4)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab7af9a69745838d900eed9d7397b3ab4"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a225d09d06c1cae05997788a103a59a1d)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a225d09d06c1cae05997788a103a59a1d"></a>

Returns the default value of LootId.

#### `public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a21a3acae9d7fd49402c03bc31d7d16ce)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a21a3acae9d7fd49402c03bc31d7d16ce"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a939fe913071b9a8e6357bf0d68ffb871)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a939fe913071b9a8e6357bf0d68ffb871"></a>

Checks whether LootId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4815cbe27853bb4d27db3275fe7beb78)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4815cbe27853bb4d27db3275fe7beb78"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a300f53f8be45d922693be6c47cd90f2b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a300f53f8be45d922693be6c47cd90f2b"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a852319633e92b2de440608151a6ccdb8)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a852319633e92b2de440608151a6ccdb8"></a>

Sets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a549b13e4def9554f8dca8a0f3f8d8088)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a549b13e4def9554f8dca8a0f3f8d8088"></a>

Sets the value of Quantity using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a70ea1e46ae133ec813fc73916bef15e9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a70ea1e46ae133ec813fc73916bef15e9"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a657673645b1d197d41357363e6be0905)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a657673645b1d197d41357363e6be0905"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af04af6809350f0cac5227d3e30c21b66)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af04af6809350f0cac5227d3e30c21b66"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9d7a87883682c1702992d986533afb8d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9d7a87883682c1702992d986533afb8d"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adca3c33d810c7682c396bb6c9518623f)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1adca3c33d810c7682c396bb6c9518623f"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4dc3eae170eeb736e33a71e8333778a9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4dc3eae170eeb736e33a71e8333778a9"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab9bd2b8b152859425bb01f7f9986a062)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab9bd2b8b152859425bb01f7f9986a062"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af0ec332f0123b43051fe514e6fbbb0cf)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af0ec332f0123b43051fe514e6fbbb0cf"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad0c7fe3c7a9219c736a9aed50886cb07)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad0c7fe3c7a9219c736a9aed50886cb07"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a99fe2b496ead851f3fbb21d2f77e0f7a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a99fe2b496ead851f3fbb21d2f77e0f7a"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_VendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad8e5ec06daa9e142369c363de5bd5fb7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad8e5ec06daa9e142369c363de5bd5fb7"></a>

Returns the default value of VendorVersion.

#### `public inline FORCEINLINE void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afccb5c32f75384cb528dfb71b9eb814c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afccb5c32f75384cb528dfb71b9eb814c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7bebf83c20a25df7522f26ef102e5f1e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7bebf83c20a25df7522f26ef102e5f1e"></a>

Checks whether VendorVersion_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4339358534a00968ef9845f28902d0eb)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4339358534a00968ef9845f28902d0eb"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a00b91aade30cf2e741c7508061f5f55e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a00b91aade30cf2e741c7508061f5f55e"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2baf3399d3df43ce20a8eec23f933bca)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2baf3399d3df43ce20a8eec23f933bca"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a44ad01bfaf3bf458afbcdcf2b4d3affb)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a44ad01bfaf3bf458afbcdcf2b4d3affb"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2a205f0683b9dbd7f87274447cdfd479)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2a205f0683b9dbd7f87274447cdfd479"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4a28f794a410dd00bd9867d2f8969ae3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4a28f794a410dd00bd9867d2f8969ae3"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1acc0159dd4eb4aa9bd9206af4532f45c0)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1acc0159dd4eb4aa9bd9206af4532f45c0"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8e3667ce2269511764d703f06000bf3b)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8e3667ce2269511764d703f06000bf3b"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9d2f925ddd396b4e0e472570907af62b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9d2f925ddd396b4e0e472570907af62b"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a140b2089e78fc8c73b355cb7e066c966)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a140b2089e78fc8c73b355cb7e066c966"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a307275890e82dce612c853fc53a37c53)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a307275890e82dce612c853fc53a37c53"></a>

Checks whether VendorEtag_Optional is set to null.

#### `public inline FORCEINLINE TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04647f0b835890b4ac5a79b1937cd8eb)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a04647f0b835890b4ac5a79b1937cd8eb"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a85cee6422303563ba36d1834cd82c538)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a85cee6422303563ba36d1834cd82c538"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa4c8b69059620c757d6d2e9c792e2ad3)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa4c8b69059620c757d6d2e9c792e2ad3"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1f216669dbb933a9ebeb156257e59fbe)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1f216669dbb933a9ebeb156257e59fbe"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1b6a9109bcbb05e0f4e595222a1030c9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1b6a9109bcbb05e0f4e595222a1030c9"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8716141fd71aa339603542120e0cf036)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8716141fd71aa339603542120e0cf036"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2fd37b8b94c7aa50dca6b4552e0fce32)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2fd37b8b94c7aa50dca6b4552e0fce32"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04f0ccf84c9fdf50bdbd0544ddb4994f)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a04f0ccf84c9fdf50bdbd0544ddb4994f"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.

#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8d2c0b2a02505d9829df31f5f2ceaa5)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af8d2c0b2a02505d9829df31f5f2ceaa5"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a16f304056351c19f0695080a27d863ca)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a16f304056351c19f0695080a27d863ca"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a034ddc2fd18195495c9e14eb7d0c6c7b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a034ddc2fd18195495c9e14eb7d0c6c7b"></a>

Checks whether DynamicBundleLootIds_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3da8b8be7c7cacd543e681a03207778c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3da8b8be7c7cacd543e681a03207778c"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6e8ec37c8bb24db3a6322dfd5ca0b8e2)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6e8ec37c8bb24db3a6322dfd5ca0b8e2"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2dd0339d3025968be75a6efb398f973b)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2dd0339d3025968be75a6efb398f973b"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aee054dcd4e3ffd7e1f2bfa4bc48f389b)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aee054dcd4e3ffd7e1f2bfa4bc48f389b"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a05a02f9575b5e8558220c21816ac1055)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a05a02f9575b5e8558220c21816ac1055"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa235e31644c0eb13ae88665f14b1bbd0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa235e31644c0eb13ae88665f14b1bbd0"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a550f63c32111b12d2a60b62faacb6f6c)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a550f63c32111b12d2a60b62faacb6f6c"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a375df249dc00fb651e397937129fd00d)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a375df249dc00fb651e397937129fd00d"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.

#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aaba05cd5ffa2fd7ba53e52aa57fa2568)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aaba05cd5ffa2fd7ba53e52aa57fa2568"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab596f1c0273d472593084d1643b371f7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab596f1c0273d472593084d1643b371f7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a462ad42bf9eec7d34c93c84f6fc7516a)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a462ad42bf9eec7d34c93c84f6fc7516a"></a>

Checks whether PurchasePrice_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a100b18610a75a8171f287fbb7deb0cf2)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a100b18610a75a8171f287fbb7deb0cf2"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af97bb5abbb425d49f9169dc4262d50e3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af97bb5abbb425d49f9169dc4262d50e3"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad57523211b81817ace8883e786b6b5c0)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad57523211b81817ace8883e786b6b5c0"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0cb30a28055d83a35ea14cdf1988d286)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0cb30a28055d83a35ea14cdf1988d286"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad1c9836157526d78fa205d770de0186e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad1c9836157526d78fa205d770de0186e"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a48fecec274202f939226fff3b462f7d0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a48fecec274202f939226fff3b462f7d0"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5c4e7e796c992239a3041f9efadc9100)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5c4e7e796c992239a3041f9efadc9100"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a743ab3e0daf1430e1accdc3d938b980d)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a743ab3e0daf1430e1accdc3d938b980d"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a71b1cc14f8ffba45f332e7cd1ef60440)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a71b1cc14f8ffba45f332e7cd1ef60440"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a339f609909040bcb05c6d45a36c70043)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a339f609909040bcb05c6d45a36c70043"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac89960d9f5cedb06362e72e44db27d96)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac89960d9f5cedb06362e72e44db27d96"></a>

Checks whether ExternalTranId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5e570bb121c1ee5204a6173fed538e5f)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5e570bb121c1ee5204a6173fed538e5f"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab702f59a76c0158c2149ec11e3dd8f3d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab702f59a76c0158c2149ec11e3dd8f3d"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a32f0dac475b29102bbe7094915b6c777)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a32f0dac475b29102bbe7094915b6c777"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a56b4a442bb0eef6a81f6e1d69cd1d0a7)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a56b4a442bb0eef6a81f6e1d69cd1d0a7"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae37ba0e5fe1458ccaddcd995033d8536)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae37ba0e5fe1458ccaddcd995033d8536"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abda24e787bac45dc3eddd532f7c4b8cb)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abda24e787bac45dc3eddd532f7c4b8cb"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa57e0c5cc5b29e2c0e9c800a3e43bc08)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa57e0c5cc5b29e2c0e9c800a3e43bc08"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f97cbca4b512d479fa5d1735072cae3)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2f97cbca4b512d479fa5d1735072cae3"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae496d73de191d06ce33d8e8c78743d06)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae496d73de191d06ce33d8e8c78743d06"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa86f128e0dcaa181da28f90d7d643768)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa86f128e0dcaa181da28f90d7d643768"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac782a9ffa84f4a1dc1b6cf4ffe67a210)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac782a9ffa84f4a1dc1b6cf4ffe67a210"></a>

Checks whether ExternalItemSku_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3dd96a986e7addc687cc476252cfb92e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3dd96a986e7addc687cc476252cfb92e"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a51ec76ad9f5e8fc3bcdf6487d26a9321)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a51ec76ad9f5e8fc3bcdf6487d26a9321"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a19532dfaeead62991424dc7f2c0deeea)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a19532dfaeead62991424dc7f2c0deeea"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a85537dc2fc5f034a1613b1bd420eb53e)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a85537dc2fc5f034a1613b1bd420eb53e"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7897480328d7b920d2b87f1088e5ee4c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7897480328d7b920d2b87f1088e5ee4c"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae2cfe2d9a970c1f07715156991242fec)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae2cfe2d9a970c1f07715156991242fec"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa19e167639b4cbd0bc7fbb6f2d8c768f)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa19e167639b4cbd0bc7fbb6f2d8c768f"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8f91ce2716d69d2be806d7f7e0a71b7)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af8f91ce2716d69d2be806d7f7e0a71b7"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afd1f948313e415699d36bfd9ade9c4dd)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afd1f948313e415699d36bfd9ade9c4dd"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a73f383d146cd345566b090ade85db964)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a73f383d146cd345566b090ade85db964"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a132a6dad4dba274fb87c4cb139097664)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a132a6dad4dba274fb87c4cb139097664"></a>

Checks whether UseInventoryBucket_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae88aa4f69a10f684accfb9ea58284ead)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae88aa4f69a10f684accfb9ea58284ead"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a92e491a1eef6f30a6d1273ead5ad6340)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a92e491a1eef6f30a6d1273ead5ad6340"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a12e6cd2b237746e327966875b0c99d28)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a12e6cd2b237746e327966875b0c99d28"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aaf4f38839ecc5ff801779f97aa51c5fc)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aaf4f38839ecc5ff801779f97aa51c5fc"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0ab19518a1458de17fea98c2a5efdb9a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0ab19518a1458de17fea98c2a5efdb9a"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4f906653c556db306b6d4e9ba89489c7)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4f906653c556db306b6d4e9ba89489c7"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ace8e9980ab533beb2c27d66064963964)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ace8e9980ab533beb2c27d66064963964"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9d954b3275ce6bef415c52dfed4e285e)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9d954b3275ce6bef415c52dfed4e285e"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a56363a6d6b7461f39708a7b55416ef55)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a56363a6d6b7461f39708a7b55416ef55"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a513835e3f3013799bfd0468b3a9f1e54)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a513835e3f3013799bfd0468b3a9f1e54"></a>

Returns the default value of PlayerPortalEventId.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a50c01b4691fb167c96409d690fb31674)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a50c01b4691fb167c96409d690fb31674"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a002eb527d9f586852db093d55a63a5c3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a002eb527d9f586852db093d55a63a5c3"></a>

Checks whether PlayerPortalEventId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aee620312afea17d79b98578466f8400a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aee620312afea17d79b98578466f8400a"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0d70037ccc9c7ad6a8de7c0c30013bcd)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0d70037ccc9c7ad6a8de7c0c30013bcd"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a64365092d5ebbd9f519546783dc01521)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a64365092d5ebbd9f519546783dc01521"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3e06682768c4ef9ac17f4fc4aa0cd9a6)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3e06682768c4ef9ac17f4fc4aa0cd9a6"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9340781108acc3994679a7e701d297c1)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9340781108acc3994679a7e701d297c1"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac4bdc0807f926ea9b578855d78a66da8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac4bdc0807f926ea9b578855d78a66da8"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeed4a10b44d4d5598d80f7a5b7885001)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aeed4a10b44d4d5598d80f7a5b7885001"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a39ee106be2a98d378b05b8f1a3680ead)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a39ee106be2a98d378b05b8f1a3680ead"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a49dda4886adaacddc546c3377fdb0758)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a49dda4886adaacddc546c3377fdb0758"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1addd3b00c03d3de76dead94dc4709b25e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1addd3b00c03d3de76dead94dc4709b25e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abae91515eb4d4cab9c3c1228e23d187d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abae91515eb4d4cab9c3c1228e23d187d"></a>

Checks whether InventoryId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a45ff0a6b68542b1fe57191b2213824fc)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a45ff0a6b68542b1fe57191b2213824fc"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a28e655d626ce9c781f72343acdb47905)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a28e655d626ce9c781f72343acdb47905"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8d2bd21ee18d87def98d163c2ebcd822)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8d2bd21ee18d87def98d163c2ebcd822"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa7b71a51a8ebc44328b972b277be768a)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa7b71a51a8ebc44328b972b277be768a"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a913000cf665532a403fcfdeb405e541b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a913000cf665532a403fcfdeb405e541b"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1d09acfc3c585a85fb8503ea7e47ae45)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1d09acfc3c585a85fb8503ea7e47ae45"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aac84a2a89e27e06fad67296b282af706)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aac84a2a89e27e06fad67296b282af706"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa5df28c68b1026cd8da02045e964628c)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa5df28c68b1026cd8da02045e964628c"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae6b325f3f8d2f280df487eadf405948e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae6b325f3f8d2f280df487eadf405948e"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab4baf947939834ab7e331dea86e94bca)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab4baf947939834ab7e331dea86e94bca"></a>

Returns the default value of LegacyInventoryId.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a332c90eaa02cac140eefa9af4e7c36e8)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a332c90eaa02cac140eefa9af4e7c36e8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abf851de09bf532810c74e29541404e01)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abf851de09bf532810c74e29541404e01"></a>

Checks whether LegacyInventoryId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a06dbe78bf9cee920cc070cde1c94125f)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a06dbe78bf9cee920cc070cde1c94125f"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8515e0cf6cc58f5b741cdb01e3621b54)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8515e0cf6cc58f5b741cdb01e3621b54"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aea43b187d568535fa5ad1f22bbe4084b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aea43b187d568535fa5ad1f22bbe4084b"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1f24b7738203d897413a2455db5dfd82)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1f24b7738203d897413a2455db5dfd82"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae1e7570691b1a3993728aad19075a66e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae1e7570691b1a3993728aad19075a66e"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afaa946f6671fdad503cfbc0a5bcc771e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afaa946f6671fdad503cfbc0a5bcc771e"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad72a334e30b817368fae3f0652231181)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad72a334e30b817368fae3f0652231181"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a77936cc29b57a7a09caccb4a84c66a92)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a77936cc29b57a7a09caccb4a84c66a92"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae910eda3382428e86d6ccbdc1481b122)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae910eda3382428e86d6ccbdc1481b122"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a486e308445c8f982e3709c5dc81828ad)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a486e308445c8f982e3709c5dc81828ad"></a>

Returns the default value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a021399ebc03adb56eae535595132c3b9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a021399ebc03adb56eae535595132c3b9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0afc369255470574482d1dba99d66ed6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0afc369255470574482d1dba99d66ed6"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa892e48c0d202cef68fe3fd059e8e5ad)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa892e48c0d202cef68fe3fd059e8e5ad"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a08f25953be1a7c6e3a8c2c821068353b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a08f25953be1a7c6e3a8c2c821068353b"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04c03419387416be391d18e07c171057)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a04c03419387416be391d18e07c171057"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6ec6da81054e4802d917c34d6b81260c)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6ec6da81054e4802d917c34d6b81260c"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8d7aa41ad2079064df60eac4156495ec)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8d7aa41ad2079064df60eac4156495ec"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac07b5227da62f6fd420a50e3ad0e423f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac07b5227da62f6fd420a50e3ad0e423f"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af6f289bf88f32dbf99d25fa15289e7a8)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af6f289bf88f32dbf99d25fa15289e7a8"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a88ed485c2de52ddb122ef088d9c92a5b)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a88ed485c2de52ddb122ef088d9c92a5b"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2d1dfbd1f39ec4940f36e281c09b1e22)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2d1dfbd1f39ec4940f36e281c09b1e22"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1add448cad24a4e94c58d511d6b65a72cf)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1add448cad24a4e94c58d511d6b65a72cf"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a714395ad0242e8d4507305204d8da754)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a714395ad0242e8d4507305204d8da754"></a>

Checks whether Expires_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a99bd4d00d83097cfb9437164da71457b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a99bd4d00d83097cfb9437164da71457b"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a89028961d8c04eeddcba138cb0f19c74)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a89028961d8c04eeddcba138cb0f19c74"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a94b2990010db1c32d41d00756d648e65)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a94b2990010db1c32d41d00756d648e65"></a>

Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a76d65b0521626c541ad1f072784e0062)`(ERHAPI_XpQuantityTransform & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a76d65b0521626c541ad1f072784e0062"></a>

Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1ecfc772c02bd5aa1ab4b1dec01c2eb0)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1ecfc772c02bd5aa1ab4b1dec01c2eb0"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7ab9a41e463ab87b848fef48072e207c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7ab9a41e463ab87b848fef48072e207c"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a896eefa585c64aa1ff9b447ff6b5f47a)`(const ERHAPI_XpQuantityTransform & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a896eefa585c64aa1ff9b447ff6b5f47a"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa717815e015d024cb0748329b71e50de)`(ERHAPI_XpQuantityTransform && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa717815e015d024cb0748329b71e50de"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.

#### `public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab78f59f867519b587aa365073f21fda9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab78f59f867519b587aa365073f21fda9"></a>

Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4cc1005c09b733c8d1af94e2cec7b2eb)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4cc1005c09b733c8d1af94e2cec7b2eb"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae28ce3841cc3915cff68dd1239ee9f35)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae28ce3841cc3915cff68dd1239ee9f35"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abded923f7a78cfafdd645a84afea4138)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abded923f7a78cfafdd645a84afea4138"></a>

Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a330fd2f2ddf43129983be84cf66bc0a4)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a330fd2f2ddf43129983be84cf66bc0a4"></a>

Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a268107c52d80a2e65562c15f93070281)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a268107c52d80a2e65562c15f93070281"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a59333a3cd7e673f7de83faab4f9ea306)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a59333a3cd7e673f7de83faab4f9ea306"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6b8601e3ff65aebd446fcc620cb53317)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6b8601e3ff65aebd446fcc620cb53317"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9777b8aea4534800d05ece2632da7faa)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9777b8aea4534800d05ece2632da7faa"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.

#### `public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2e76f88150ad2a456620a9f9bab4c3d5)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2e76f88150ad2a456620a9f9bab4c3d5"></a>

Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_HardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3050b8d8ee9f5b9f22885860dd022f2a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3050b8d8ee9f5b9f22885860dd022f2a"></a>

Returns the default value of HardQuantityMaximum.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximumToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a08b45ef01f4a0796581d86ade30d0939)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a08b45ef01f4a0796581d86ade30d0939"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsHardQuantityMaximumNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a77fd05cdd76dcf14f8c3af8557dc72d1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a77fd05cdd76dcf14f8c3af8557dc72d1"></a>

Checks whether HardQuantityMaximum_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab9b52fd60fe814ad0e6c160ea23c5c2f)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab9b52fd60fe814ad0e6c160ea23c5c2f"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8dc22896add0e5237b390d0d9c6e91d5)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8dc22896add0e5237b390d0d9c6e91d5"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a323dfe69837ab73217e662d37a265314)`(const ERHAPI_InventoryOperation & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a323dfe69837ab73217e662d37a265314"></a>

Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae4822128d6b0d8289b927845875b0696)`(ERHAPI_InventoryOperation & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae4822128d6b0d8289b927845875b0696"></a>

Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aacd0d2b3c2cc5346371bb6e3985a4956)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aacd0d2b3c2cc5346371bb6e3985a4956"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae54f857b76c214aff860cd1738891db3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae54f857b76c214aff860cd1738891db3"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1acc76a07388dfac5e4548b911a14a1530)`(const ERHAPI_InventoryOperation & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1acc76a07388dfac5e4548b911a14a1530"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb428168a9323f293f537ab1e24eded3)`(ERHAPI_InventoryOperation && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1adb428168a9323f293f537ab1e24eded3"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa3119b441b2d24cf25096ff155c174b1)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa3119b441b2d24cf25096ff155c174b1"></a>

Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5f58e1727e880a611aebee8eadf849b6)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5f58e1727e880a611aebee8eadf849b6"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a32c9f1dc649eb97ba027bea316c22109)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a32c9f1dc649eb97ba027bea316c22109"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a28270b23dabacc3a473224d3870ff3a3)`(const ERHAPI_InventorySelector & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a28270b23dabacc3a473224d3870ff3a3"></a>

Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7e00e3a939cbf732aa064ec82ff72252)`(ERHAPI_InventorySelector & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7e00e3a939cbf732aa064ec82ff72252"></a>

Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a70747e8ddce8d7cca323708d9e3e0d50)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a70747e8ddce8d7cca323708d9e3e0d50"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac21c842a1e0d14c589a4c6a43ace9e2b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac21c842a1e0d14c589a4c6a43ace9e2b"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac3b21a19974e31b844cd94db49774dac)`(const ERHAPI_InventorySelector & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac3b21a19974e31b844cd94db49774dac"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5de6df150ecf09976efa921055494db1)`(ERHAPI_InventorySelector && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5de6df150ecf09976efa921055494db1"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.

#### `public inline void `[`ClearInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a75aefa7e0b728d01206ff3f8c97acace)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a75aefa7e0b728d01206ff3f8c97acace"></a>

Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a382b66aee6ec12311b4fae38b7eb55ef)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a382b66aee6ec12311b4fae38b7eb55ef"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a250c36fba5a51a887a2225f00069e114)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a250c36fba5a51a887a2225f00069e114"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a182ee014bc39a48e201de89236560a26)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a182ee014bc39a48e201de89236560a26"></a>

Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a605cf0ee7c8dd4773357f8ffe6775fb3)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a605cf0ee7c8dd4773357f8ffe6775fb3"></a>

Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a21853a70de6780a79e8f75525ec13459)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a21853a70de6780a79e8f75525ec13459"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3c8bf55448b6c87cc530ba4a967a19fc)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3c8bf55448b6c87cc530ba4a967a19fc"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7ea60970634a0b138728940641b2155b)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7ea60970634a0b138728940641b2155b"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a75cdd4004b6f31c1cfd1d29fa5d3f62d)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a75cdd4004b6f31c1cfd1d29fa5d3f62d"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1acc3a4df31a38d0136d5fa3cda2c2e8b2)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1acc3a4df31a38d0136d5fa3cda2c2e8b2"></a>

Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_QuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeb4bb7e6fabf158b76d54903aa3f1aa3)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aeb4bb7e6fabf158b76d54903aa3f1aa3"></a>

Returns the default value of QuantityMultInventoryItemId.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afd988b7241c138b6c596c2c391118e7e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afd988b7241c138b6c596c2c391118e7e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2c6b73fdf1e48c6fdc292bcd06d7fca1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2c6b73fdf1e48c6fdc292bcd06d7fca1"></a>

Checks whether QuantityMultInventoryItemId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a776f59316bc4386763d4551d8162e512)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a776f59316bc4386763d4551d8162e512"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a104ba45a68b72d05905c5fc7f6e725ff)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a104ba45a68b72d05905c5fc7f6e725ff"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a57cef69a79b26eea205f2e10ad1b734c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a57cef69a79b26eea205f2e10ad1b734c"></a>

Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad7da741e9f61160245f71417a3f90cb4)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad7da741e9f61160245f71417a3f90cb4"></a>

Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a524e14b7babf8fd2266507290046e085)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a524e14b7babf8fd2266507290046e085"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a133a4f44162e4caced78243fd74175a6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a133a4f44162e4caced78243fd74175a6"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a15e926300f7d85f0b0f20f88678701f2)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a15e926300f7d85f0b0f20f88678701f2"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2bea4d775f7d8ac2b52aa35c6b30d6d3)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2bea4d775f7d8ac2b52aa35c6b30d6d3"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.

#### `public inline void `[`ClearTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa974bc745b554af86e78d2aa1a202512)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa974bc745b554af86e78d2aa1a202512"></a>

Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa909f28becd7a6135a6925abdfe6286e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa909f28becd7a6135a6925abdfe6286e"></a>

Returns the default value of TimeFrameId.

#### `public inline FORCEINLINE void `[`SetTimeFrameIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae4267e09cd330b8c8500c636e69568b3)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae4267e09cd330b8c8500c636e69568b3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTimeFrameIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa155f3d5294cb0b66509c2b5b7261aa8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa155f3d5294cb0b66509c2b5b7261aa8"></a>

Checks whether TimeFrameId_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0f4cc3ab09b275aaf48d87f9fbc36f30)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0f4cc3ab09b275aaf48d87f9fbc36f30"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a24093b3ca6b84812da242627b353f5b0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a24093b3ca6b84812da242627b353f5b0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeeb56e9c836c05c2816dff419f6e2798)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aeeb56e9c836c05c2816dff419f6e2798"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae39e91d1989c9875e7737084d11510e4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae39e91d1989c9875e7737084d11510e4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4c14c9f9217c2b56d0b142a5ab8952be)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4c14c9f9217c2b56d0b142a5ab8952be"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad051f0d8f524fc1fc3f40c1b4fe07079)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad051f0d8f524fc1fc3f40c1b4fe07079"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac657d5480ab078337195ea804f3ce36a)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac657d5480ab078337195ea804f3ce36a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afd24e7a54bc26cda862afbee59699ae6)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afd24e7a54bc26cda862afbee59699ae6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f650b6f47cea84f8ad1a3996a756915)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2f650b6f47cea84f8ad1a3996a756915"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab000d55f17e63a4fccad6c493a048cd5)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab000d55f17e63a4fccad6c493a048cd5"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a714f31a4a1635d2785a50f10f902a028)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a714f31a4a1635d2785a50f10f902a028"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0a2532fe02d048d98e7cffd34afcb30e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0a2532fe02d048d98e7cffd34afcb30e"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a65c0e5b4ed178146f3bd7074f1cd4b8e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a65c0e5b4ed178146f3bd7074f1cd4b8e"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a00e3dd92c562c3e1b13db698b2a86122)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a00e3dd92c562c3e1b13db698b2a86122"></a>

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab1df0695f4b7e88c17ad9979f04b8ce3)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab1df0695f4b7e88c17ad9979f04b8ce3"></a>

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a42990c15de277dc0104c83f32257aa0b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a42990c15de277dc0104c83f32257aa0b"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af5e72ff7756e66b4c507c751a7bc0304)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af5e72ff7756e66b4c507c751a7bc0304"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4b28cff8b17cfb36ece6663c895eb146)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4b28cff8b17cfb36ece6663c895eb146"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a981e8eb00a2450d94b60bc7e17307e16)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a981e8eb00a2450d94b60bc7e17307e16"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a42bee7218f7b474a1749f2cd449ab48e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a42bee7218f7b474a1749f2cd449ab48e"></a>

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEntryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a06fbc98db287d648eeda8811e6090303)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a06fbc98db287d648eeda8811e6090303"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEntryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ace5f2ff8ad83f369f9521bb3085e3fdc)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ace5f2ff8ad83f369f9521bb3085e3fdc"></a>

Checks whether EntryId_Optional is set to null.

