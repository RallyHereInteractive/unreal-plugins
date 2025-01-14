---
title: RHAPI_PlayerOrderEntryCreate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderEntryCreate`](#structFRHAPI__PlayerOrderEntryCreate) | Request to create a Player Order Entry.

## struct `FRHAPI_PlayerOrderEntryCreate` <a id="structFRHAPI__PlayerOrderEntryCreate"></a>

```
struct FRHAPI_PlayerOrderEntryCreate
  : public FRHAPI_Model
```

Request to create a Player Order Entry.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreate_1a1fa012706bd2946dcde63c1fa2977c47) | The type of entry.
`public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ac2463f6b1e0d6a92b110a9cf4e91e201) | Unique Identifier for the Loot.
`public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1aca5a3724ab1f9e4729704de2301334b1) | true if LootId_Optional has been set to a value
`public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreate_1ac5c8a918403b0fb7a186f23f09e5275f) | Quantity of Inventory.
`public int64 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a2dd7448422af895253651727cab1cd72) | Legacy version for the vendor owning the loot_id. Use `vendor_etag` instead.
`public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a2d7bc5619f3d5103d265112747910e21) | true if VendorVersion_Optional has been set to a value
`public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a8b6e8b09203f35236c5090e740aae21c) | etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match
`public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a53115760d6f8b22ad6c638aeb6641574) | true if VendorEtag_Optional has been set to a value
`public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a5ea4c5bec99ffd7ce5c5554318dd8def) | List of Loot IDs for the dynamic bundle.
`public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a58ced26c97e05c07687e89ef6136232c) | true if DynamicBundleLootIds_Optional has been set to a value
`public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a854b4c83ae188774cadc268527a6d000) | The purchase price of the Loot. Deprecated. Use the purchase_prices field instead.
`public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a11544486b2cbee880bec997881ed153a) | true if PurchasePrice_Optional has been set to a value
`public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ad50ae95f36b01d863df9ffecf9aa8813) | External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.
`public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a0c65b3dc5ab68ce50108d2278fa738c1) | true if ExternalTranId_Optional has been set to a value
`public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a628abfaf16250631ed8ca17bfdacf4d5) | External item SKU for the Order Entry.
`public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a52c353b419d313026cc98bdfa4bf73ce) | true if ExternalItemSku_Optional has been set to a value
`public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ad17b3ece98aa9a3cbeae05801baeb9a4) | Inventory Bucket to use for the Order Entry.
`public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ae4ed855d09350c568de079dbe4501fc8) | true if UseInventoryBucket_Optional has been set to a value
`public int64 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ab62a785558b7de02eba79ec3c5c28326) | Player Portal Event Id for the Order Entry.
`public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ad42e0e3a74b85d227e24f8e392f1f4da) | true if PlayerPortalEventId_Optional has been set to a value
`public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1abffd4007588eba4d0bb386665c1b0e0e) | Unique Identifier for the Inventory.
`public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1afa2e5d18d4ef18e30ecf34615c6b0715) | true if InventoryId_Optional has been set to a value
`public int64 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ae8c7bba30205a2835a01e6007f9384f2) | Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].
`public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a51a6d18e2f705583ec1f1c89e32ac05c) | true if LegacyInventoryId_Optional has been set to a value
`public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ab55f4ff8e86a6c9806c5340ed2fb6a84) | Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].
`public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ae5a79822d9b138ed7d1261534314aa44) | true if ItemId_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a020075590d344ccee3befe568f934611) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a0363a10ac062ff116dc8b8519df4e401) | true if Expires_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a8cf7cee2a5dd6adf0dd52933d80816fc) | Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a5ff907d37f47bc25c1c34e84c7df1beb) | true if CustomData_Optional has been set to a value
`public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a66b78e5d60374c72a582e7fbc0e43c39) | Unique Identifier for the Order Entry.
`public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1aa9fe95702360c5b4b535093e153cd595) | true if EntryId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreate_1aa0224ad2fae6cc0b1cabb18343bf3ffd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreate_1adf2741a8ded805e30df4540e9d4a1204)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreate_1ac57edaa17b5b6ac099b782b198c30ef4)`()` | Gets the value of Type.
`public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreate_1a016d59af368fe2c32f8e1fc86ec7d081)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreate_1aeda75af07fa9bcfaf9ebe22b16d1b8a0)`(const ERHAPI_PlayerOrderEntryType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreate_1ab7e7de3c2797c4fd43acce9a517d1a1e)`(ERHAPI_PlayerOrderEntryType && NewValue)` | Sets the value of Type using move semantics.
`public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a21b7a21d631ab7aafe52a973f3a0a3c9)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a67f785d15c55ffeb9e0d7cf6be947c8b)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1ad6227a414469d7b191441210127417c7)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1ada475c588128f1d26ef60ae4590215aa)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ab6f47d950e99ebbfe4708b06db126fdd)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ac683275f685209a8bfa88b0b784fe763)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a74b1e552b9e3d08bff3c4b96f5c8227f)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a85d01b054e40bb9f6b6a323e2474ca00)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a1316f75e782c1af640b5acedae36e78f)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a8211a83a8fd57de42a7e7ec776782f92)`() const` | Checks whether LootId_Optional has been set.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a2796b72ab69a831945889f3171385acc)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1aea4bd2f1244364c06e0ded78b910da26)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1adf32675ae4da7131c585e1bfc5526f29)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1a2ff6adf72153ad1f182ad3af95b7cdee)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1afcc39f3be286f93daab65e5fa17d73af)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1adc30a0fc4b31a416d779434dbe23ec92)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a26f645a9cdf00f6d4b9a2d58da483573)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1acbb436affceb38f41d1e45f12b83c4ed)`()` | Sets the value of Quantity to its default
`public inline int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aa6ffee914636ddea01b35ffe904e935c)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a6dac3e8cf2c787a23ed1804db609fe6c)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a548e23f592dab9ff147e9f981733d606)`(const int64 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aa84099528c357987f9f2177c2035f440)`(int64 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ab3be448c3a269c1e2f81dc2f0aaf17bd)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a266a0ef76b03222eb45c7de19744cc6f)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aa778874c1df941d8d66dc8ab093c7c27)`(const int64 & NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a4bf663455bf3398a6b30ca5684157585)`(int64 && NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a58d48bd5f2290d66a3a1a82d87e53e50)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline bool `[`IsVendorVersionSet`](#structFRHAPI__PlayerOrderEntryCreate_1a45680c0b2aad5b62d2d6c37e24654142)`() const` | Checks whether VendorVersion_Optional has been set.
`public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a5605702d2d9d39ae0ca420bd1c90dd57)`() const` | Returns true if VendorVersion_Optional is set and matches the default value.
`public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1aa01d6d198e5854dd6eab4fe1c96978e0)`()` | Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.
`public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a0556d7c587655010cf828956910f57ca)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a44b3e27a713119f42d63fdec65330555)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1aab8f8dd5fce9836a7d2a08146f7bf5b6)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a3c213e6fcd3cc6161d934901d4ec8fac)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a190bedac197c3cee5c5551b0ca46415f)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a918bb3a7825c014408c7c11f1e318864)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a8eb0d4809036866898f47405e15da3af)`(const FString & NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a6f79a732230fb7df8cdbebf5b85bdd90)`(FString && NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1ac3bbecf820a7fb98ad3e7b63e7e47078)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline bool `[`IsVendorEtagSet`](#structFRHAPI__PlayerOrderEntryCreate_1ab5582407c1fb497a79932c82cd93ea6f)`() const` | Checks whether VendorEtag_Optional has been set.
`public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a452760519a47672599a15be8d5ebbfcf)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a682c1572393e3c674f125294083aa5e2)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a8d6cd63f232944f3d96f5c991c5dae21)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a0ac9512ef9d7722837e661a539096cf4)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1aec05835129cb41c32d476933bbf7dd5b)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ab04dae58166f749fe48c0b801775191f)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a80efa008f73d9566c67e8f9edef4aef3)`(const TArray< int32 > & NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a4ccdb7aa660f193d59fc8b7e27f4dc89)`(TArray< int32 > && NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a5b4fb9367e78317c6d476a8793c697a8)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline bool `[`IsDynamicBundleLootIdsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a08f5f6449a42a2f61066edd175f4ec0c)`() const` | Checks whether DynamicBundleLootIds_Optional has been set.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a250a6259d9f16f2f91245f643166b32b)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a96cd98824c2f07b0618048a7fe8db969)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a6d5c7d509e19b655c67c90d197497425)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1aa60a5f996078c46769c23cfcee8e5312)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a57cb997b4a1112429851660599560f81)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a141c6279b1039116452984db08a1dab1)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a3196fc7eedbabd6e921d7fada0c318c6)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a1a761989fd328e904816521062d48af5)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a3306e94366864b4dc20e685a9f547ee5)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline bool `[`IsPurchasePriceSet`](#structFRHAPI__PlayerOrderEntryCreate_1ae911cc30d44582c0bb62f523a12e2d0e)`() const` | Checks whether PurchasePrice_Optional has been set.
`public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1aa85d97579078cbc89e88c9aeeb3764fb)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1aaeb66ff25b9f31755cf7547948de60b5)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a6fa1d09ca8da2c60fb5a2c335edf32c2)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1ae7710b165b67366c7ee8fbce8e352c45)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1af4abbb15546a4c97ac6bcd06a6f537d9)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a65b9b070b5e8cb865ae475a22218287e)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1aecddae854ad174a000d251f34280266a)`(const FString & NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a18cada3d45d185487477e50f7f460304)`(FString && NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a3399d3dfc9acc7e167967e661ca59a40)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline bool `[`IsExternalTranIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a5adc12ff3ad795e88c4d5d3572c9c762)`() const` | Checks whether ExternalTranId_Optional has been set.
`public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a0c07f1a8197a070c491d4c6c5778b770)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a9e7d3c5cea415e3dd6ad5cef4bf2abfb)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a2aefdb2b5d1601513f84c7d342f5dea7)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a740ce1be032cf16d3fae07bbc4f6c092)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a988cf5d32ae261f6741d6826c179c86f)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ac377c0e22548e243fa8b84dcf909c4dd)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a75a84d0f3b687639e139f7dd9a2a7dc7)`(const FString & NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a2f8f17ee0485d55d4f82683d873123a7)`(FString && NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a5777501bb5bae1077558336b6aa2248a)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline bool `[`IsExternalItemSkuSet`](#structFRHAPI__PlayerOrderEntryCreate_1a6530da5c433edcca636757b7f83b3e9d)`() const` | Checks whether ExternalItemSku_Optional has been set.
`public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a47609fbd6b5700766ed4fa01b7f4ee0f)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a3b9564541d6b739669daf38ccfe065e7)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a5c126032b49c94a9a278ff59de6085f1)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1ad07e84b42ddd6f5117ee278f2903e60a)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a887bb7038e1922fb458829a3190744d5)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a793d2c31211d3486ee69f8e8f94155cb)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a404a3283500fd7c21ed0c9def0f7a321)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a6c3309c89592a2399a3f62849b1465b6)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1ac45335b3ac886b81c0cc4d1b32be60fb)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__PlayerOrderEntryCreate_1adbcce2b3ab94ea6e1dcf5003f08fb1d9)`() const` | Checks whether UseInventoryBucket_Optional has been set.
`public inline int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a7a16c78335b1bb230734c723080908f7)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a458c3974cc86dfb250e624af8ba6d862)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a6e129d97c863c041fa35510803764f6a)`(const int64 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a09d384d8e8d22359bf3328cc986160eb)`(int64 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1aa250b9d29d94e34d04b1ef683b45cb8f)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1af4faa974410de23986e6e88bce31efe5)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1abb4e8573421a024f8a0e22121386409d)`(const int64 & NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1adece98da5206a1cf98a257b1262731ec)`(int64 && NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a0763f3ac5d2d09f7a9a7fe3a8acb88db)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline bool `[`IsPlayerPortalEventIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a19ed75e88dfc17d3e9e56677dbdf15b6)`() const` | Checks whether PlayerPortalEventId_Optional has been set.
`public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1aa9120f9f0c44edf69151d9507a45071d)`() const` | Returns true if PlayerPortalEventId_Optional is set and matches the default value.
`public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1a41473035133b34896b36d91b4cef3e67)`()` | Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a6c4d47e6d19e294c374c7e3d66587f89)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a07825664be1bb1a4c9065e36e25f0460)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a598808d258298bf55c13109474ebce51)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab72fbe621a2bb397008d271914e082f2)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a770afef2eaf5105de38c6967a2c1178e)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a31ed95240d0ff4a30d6cbb701addc5c6)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ae791a6b346e22eb9e5811be14b5b8869)`(const FGuid & NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1aa866dcc7ece4caed89120a797e5c0ad9)`(FGuid && NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab30e5ba8b651566c581c51ed468cf2ba)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline bool `[`IsInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a81d6e3394cc778e240102c00d3661a08)`() const` | Checks whether InventoryId_Optional has been set.
`public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab055dd9ce253a60ca0a119dbebf29651)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a5cb64d472cec50b7e56d39986c35f3d1)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a3eaccf9296bc42be81917314fd81ebba)`(const int64 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a869d0f21687d4702970182594441e22d)`(int64 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a7412343256dd2a25b58ce09beb09531f)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a65e83d7207cd424b21bcb8f002419378)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a71dbe3601cc61a4a9b520241c6477988)`(const int64 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1af8cb5cb966908baf213008915cf2bfbe)`(int64 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ad4f06f85a523ff7a0cbdc3ffdc416ca7)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a5c9f1c261069f529765dc15a400317a6)`() const` | Checks whether LegacyInventoryId_Optional has been set.
`public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a1aa5c4549311a4d9ef4ae95f911477c3)`() const` | Returns true if LegacyInventoryId_Optional is set and matches the default value.
`public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1a80f0444d1ec40a1fce488b7605ed480d)`()` | Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.
`public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a92ac7c275f006f68a562b899ed89053e)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a4c29ac63f3d8663d490e12954ac2f3a5)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1ab074ccf8601a4789af5677efd6a0bf66)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1aec03b9e680b7a8ccc3078b3f3990a416)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a88bf135bb6741a3414256615786a31ae)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1abdb38a7497c15d1691990d80791170e3)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1acde55e78663bed5edd2ff60f0fe8e680)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1ab4d91b52d205d06c3f7e8277c58acea1)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a68d82aa82e3b6da7e552d889c6f5f5fa)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a427100027e440f9d83b058b66c5ef1ca)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a35554c03c8c0d6fea6444eeb2cc16ef0)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1ac41a23fa5d60aeb1cdc6d3717414b444)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a49a22bede1784febfacb182b90262a55)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a5011f9f84f0178cb2c9576bb44ff15ea)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a86d5ab1b5c61de6396b5b7ce2c1e6f08)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a6ccf9c26c1a5e3b9df56b35fd21246d6)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a9d6bf78e4649af4f83c18f5a8eabe99c)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1aa50a3f88fd76e8e34dd5ce03329381f0)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a4396df64af2b3e034b2bd2349e05c024)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a6dd29584399cf351ea8f6c1e3e142fb8)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreate_1adf4834a96e84876971d4218b6dc4b1bb)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline bool `[`IsExpiresSet`](#structFRHAPI__PlayerOrderEntryCreate_1a9938a708975f152a5f4d1f28c57194c9)`() const` | Checks whether Expires_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a50d54c352702e4b1acade404c1a766bf)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a640e2b6d93e2312b261fd0a2e0cd1f1f)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a9f10159a5535f1a158c803928fb764a5)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1ad24bc9adcec9eea8ba01dae468244876)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a08cfb12300030d64f63162e46c69d017)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ac0f5d900d20f9d351665914074d43432)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1ab2742a26fdd5a5d4f12367ecbbdb0738)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a305c2c449b9af12bb3ecd2ef07cff277)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a0f1e6f6b229dccea43c03a8673e1da66)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerOrderEntryCreate_1abd4551560db4c9d758e457527ab0ef67)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1afce47760faac7644bf147b830335575e)`()` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1ac45a97a63e497f91a9e3bf0a3d567905)`() const` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1af67bc923bd77b30a035c0df868765c84)`(const FString & DefaultValue) const` | Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1a72ecaf752823f224609c10d1ea621bb2)`(FString & OutValue) const` | Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a6872a8218cc3aafd1a98d2d6f021e56f)`()` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a3f07a5db4ebf86c7bcf6e53548656619)`() const` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1aa73211d9d6a7ee42006974096abcfd6c)`(const FString & NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab318bc06c10af6cd526bb75a024f38ed)`(FString && NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.
`public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1a77c1568093d12436f97287085abaf82e)`()` | Clears the value of EntryId_Optional and sets EntryId_IsSet to false.
`public inline bool `[`IsEntryIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a2e482cc157986664f258ded094a0bc83)`() const` | Checks whether EntryId_Optional has been set.

### Members

#### `public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreate_1a1fa012706bd2946dcde63c1fa2977c47) <a id="structFRHAPI__PlayerOrderEntryCreate_1a1fa012706bd2946dcde63c1fa2977c47"></a>

The type of entry.

#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ac2463f6b1e0d6a92b110a9cf4e91e201) <a id="structFRHAPI__PlayerOrderEntryCreate_1ac2463f6b1e0d6a92b110a9cf4e91e201"></a>

Unique Identifier for the Loot.

#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1aca5a3724ab1f9e4729704de2301334b1) <a id="structFRHAPI__PlayerOrderEntryCreate_1aca5a3724ab1f9e4729704de2301334b1"></a>

true if LootId_Optional has been set to a value

#### `public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreate_1ac5c8a918403b0fb7a186f23f09e5275f) <a id="structFRHAPI__PlayerOrderEntryCreate_1ac5c8a918403b0fb7a186f23f09e5275f"></a>

Quantity of Inventory.

#### `public int64 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a2dd7448422af895253651727cab1cd72) <a id="structFRHAPI__PlayerOrderEntryCreate_1a2dd7448422af895253651727cab1cd72"></a>

Legacy version for the vendor owning the loot_id. Use `vendor_etag` instead.

#### `public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a2d7bc5619f3d5103d265112747910e21) <a id="structFRHAPI__PlayerOrderEntryCreate_1a2d7bc5619f3d5103d265112747910e21"></a>

true if VendorVersion_Optional has been set to a value

#### `public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a8b6e8b09203f35236c5090e740aae21c) <a id="structFRHAPI__PlayerOrderEntryCreate_1a8b6e8b09203f35236c5090e740aae21c"></a>

etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match

#### `public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a53115760d6f8b22ad6c638aeb6641574) <a id="structFRHAPI__PlayerOrderEntryCreate_1a53115760d6f8b22ad6c638aeb6641574"></a>

true if VendorEtag_Optional has been set to a value

#### `public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a5ea4c5bec99ffd7ce5c5554318dd8def) <a id="structFRHAPI__PlayerOrderEntryCreate_1a5ea4c5bec99ffd7ce5c5554318dd8def"></a>

List of Loot IDs for the dynamic bundle.

#### `public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a58ced26c97e05c07687e89ef6136232c) <a id="structFRHAPI__PlayerOrderEntryCreate_1a58ced26c97e05c07687e89ef6136232c"></a>

true if DynamicBundleLootIds_Optional has been set to a value

#### `public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a854b4c83ae188774cadc268527a6d000) <a id="structFRHAPI__PlayerOrderEntryCreate_1a854b4c83ae188774cadc268527a6d000"></a>

The purchase price of the Loot. Deprecated. Use the purchase_prices field instead.

#### `public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a11544486b2cbee880bec997881ed153a) <a id="structFRHAPI__PlayerOrderEntryCreate_1a11544486b2cbee880bec997881ed153a"></a>

true if PurchasePrice_Optional has been set to a value

#### `public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ad50ae95f36b01d863df9ffecf9aa8813) <a id="structFRHAPI__PlayerOrderEntryCreate_1ad50ae95f36b01d863df9ffecf9aa8813"></a>

External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.

#### `public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a0c65b3dc5ab68ce50108d2278fa738c1) <a id="structFRHAPI__PlayerOrderEntryCreate_1a0c65b3dc5ab68ce50108d2278fa738c1"></a>

true if ExternalTranId_Optional has been set to a value

#### `public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a628abfaf16250631ed8ca17bfdacf4d5) <a id="structFRHAPI__PlayerOrderEntryCreate_1a628abfaf16250631ed8ca17bfdacf4d5"></a>

External item SKU for the Order Entry.

#### `public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a52c353b419d313026cc98bdfa4bf73ce) <a id="structFRHAPI__PlayerOrderEntryCreate_1a52c353b419d313026cc98bdfa4bf73ce"></a>

true if ExternalItemSku_Optional has been set to a value

#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ad17b3ece98aa9a3cbeae05801baeb9a4) <a id="structFRHAPI__PlayerOrderEntryCreate_1ad17b3ece98aa9a3cbeae05801baeb9a4"></a>

Inventory Bucket to use for the Order Entry.

#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ae4ed855d09350c568de079dbe4501fc8) <a id="structFRHAPI__PlayerOrderEntryCreate_1ae4ed855d09350c568de079dbe4501fc8"></a>

true if UseInventoryBucket_Optional has been set to a value

#### `public int64 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ab62a785558b7de02eba79ec3c5c28326) <a id="structFRHAPI__PlayerOrderEntryCreate_1ab62a785558b7de02eba79ec3c5c28326"></a>

Player Portal Event Id for the Order Entry.

#### `public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ad42e0e3a74b85d227e24f8e392f1f4da) <a id="structFRHAPI__PlayerOrderEntryCreate_1ad42e0e3a74b85d227e24f8e392f1f4da"></a>

true if PlayerPortalEventId_Optional has been set to a value

#### `public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1abffd4007588eba4d0bb386665c1b0e0e) <a id="structFRHAPI__PlayerOrderEntryCreate_1abffd4007588eba4d0bb386665c1b0e0e"></a>

Unique Identifier for the Inventory.

#### `public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1afa2e5d18d4ef18e30ecf34615c6b0715) <a id="structFRHAPI__PlayerOrderEntryCreate_1afa2e5d18d4ef18e30ecf34615c6b0715"></a>

true if InventoryId_Optional has been set to a value

#### `public int64 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ae8c7bba30205a2835a01e6007f9384f2) <a id="structFRHAPI__PlayerOrderEntryCreate_1ae8c7bba30205a2835a01e6007f9384f2"></a>

Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].

#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a51a6d18e2f705583ec1f1c89e32ac05c) <a id="structFRHAPI__PlayerOrderEntryCreate_1a51a6d18e2f705583ec1f1c89e32ac05c"></a>

true if LegacyInventoryId_Optional has been set to a value

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ab55f4ff8e86a6c9806c5340ed2fb6a84) <a id="structFRHAPI__PlayerOrderEntryCreate_1ab55f4ff8e86a6c9806c5340ed2fb6a84"></a>

Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ae5a79822d9b138ed7d1261534314aa44) <a id="structFRHAPI__PlayerOrderEntryCreate_1ae5a79822d9b138ed7d1261534314aa44"></a>

true if ItemId_Optional has been set to a value

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a020075590d344ccee3befe568f934611) <a id="structFRHAPI__PlayerOrderEntryCreate_1a020075590d344ccee3befe568f934611"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a0363a10ac062ff116dc8b8519df4e401) <a id="structFRHAPI__PlayerOrderEntryCreate_1a0363a10ac062ff116dc8b8519df4e401"></a>

true if Expires_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a8cf7cee2a5dd6adf0dd52933d80816fc) <a id="structFRHAPI__PlayerOrderEntryCreate_1a8cf7cee2a5dd6adf0dd52933d80816fc"></a>

Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a5ff907d37f47bc25c1c34e84c7df1beb) <a id="structFRHAPI__PlayerOrderEntryCreate_1a5ff907d37f47bc25c1c34e84c7df1beb"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a66b78e5d60374c72a582e7fbc0e43c39) <a id="structFRHAPI__PlayerOrderEntryCreate_1a66b78e5d60374c72a582e7fbc0e43c39"></a>

Unique Identifier for the Order Entry.

#### `public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1aa9fe95702360c5b4b535093e153cd595) <a id="structFRHAPI__PlayerOrderEntryCreate_1aa9fe95702360c5b4b535093e153cd595"></a>

true if EntryId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreate_1aa0224ad2fae6cc0b1cabb18343bf3ffd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa0224ad2fae6cc0b1cabb18343bf3ffd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreate_1adf2741a8ded805e30df4540e9d4a1204)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1adf2741a8ded805e30df4540e9d4a1204"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreate_1ac57edaa17b5b6ac099b782b198c30ef4)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac57edaa17b5b6ac099b782b198c30ef4"></a>

Gets the value of Type.

#### `public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreate_1a016d59af368fe2c32f8e1fc86ec7d081)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a016d59af368fe2c32f8e1fc86ec7d081"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreate_1aeda75af07fa9bcfaf9ebe22b16d1b8a0)`(const ERHAPI_PlayerOrderEntryType & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1aeda75af07fa9bcfaf9ebe22b16d1b8a0"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreate_1ab7e7de3c2797c4fd43acce9a517d1a1e)`(ERHAPI_PlayerOrderEntryType && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab7e7de3c2797c4fd43acce9a517d1a1e"></a>

Sets the value of Type using move semantics.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a21b7a21d631ab7aafe52a973f3a0a3c9)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a21b7a21d631ab7aafe52a973f3a0a3c9"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a67f785d15c55ffeb9e0d7cf6be947c8b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a67f785d15c55ffeb9e0d7cf6be947c8b"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1ad6227a414469d7b191441210127417c7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad6227a414469d7b191441210127417c7"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1ada475c588128f1d26ef60ae4590215aa)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ada475c588128f1d26ef60ae4590215aa"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ab6f47d950e99ebbfe4708b06db126fdd)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab6f47d950e99ebbfe4708b06db126fdd"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ac683275f685209a8bfa88b0b784fe763)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac683275f685209a8bfa88b0b784fe763"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a74b1e552b9e3d08bff3c4b96f5c8227f)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a74b1e552b9e3d08bff3c4b96f5c8227f"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a85d01b054e40bb9f6b6a323e2474ca00)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a85d01b054e40bb9f6b6a323e2474ca00"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a1316f75e782c1af640b5acedae36e78f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1316f75e782c1af640b5acedae36e78f"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a8211a83a8fd57de42a7e7ec776782f92)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a8211a83a8fd57de42a7e7ec776782f92"></a>

Checks whether LootId_Optional has been set.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a2796b72ab69a831945889f3171385acc)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2796b72ab69a831945889f3171385acc"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1aea4bd2f1244364c06e0ded78b910da26)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aea4bd2f1244364c06e0ded78b910da26"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1adf32675ae4da7131c585e1bfc5526f29)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1adf32675ae4da7131c585e1bfc5526f29"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1a2ff6adf72153ad1f182ad3af95b7cdee)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2ff6adf72153ad1f182ad3af95b7cdee"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1afcc39f3be286f93daab65e5fa17d73af)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1afcc39f3be286f93daab65e5fa17d73af"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1adc30a0fc4b31a416d779434dbe23ec92)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1adc30a0fc4b31a416d779434dbe23ec92"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a26f645a9cdf00f6d4b9a2d58da483573)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a26f645a9cdf00f6d4b9a2d58da483573"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1acbb436affceb38f41d1e45f12b83c4ed)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1acbb436affceb38f41d1e45f12b83c4ed"></a>

Sets the value of Quantity to its default

#### `public inline int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aa6ffee914636ddea01b35ffe904e935c)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa6ffee914636ddea01b35ffe904e935c"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a6dac3e8cf2c787a23ed1804db609fe6c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6dac3e8cf2c787a23ed1804db609fe6c"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a548e23f592dab9ff147e9f981733d606)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a548e23f592dab9ff147e9f981733d606"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aa84099528c357987f9f2177c2035f440)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa84099528c357987f9f2177c2035f440"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ab3be448c3a269c1e2f81dc2f0aaf17bd)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab3be448c3a269c1e2f81dc2f0aaf17bd"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a266a0ef76b03222eb45c7de19744cc6f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a266a0ef76b03222eb45c7de19744cc6f"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aa778874c1df941d8d66dc8ab093c7c27)`(const int64 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa778874c1df941d8d66dc8ab093c7c27"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a4bf663455bf3398a6b30ca5684157585)`(int64 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4bf663455bf3398a6b30ca5684157585"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a58d48bd5f2290d66a3a1a82d87e53e50)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a58d48bd5f2290d66a3a1a82d87e53e50"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

#### `public inline bool `[`IsVendorVersionSet`](#structFRHAPI__PlayerOrderEntryCreate_1a45680c0b2aad5b62d2d6c37e24654142)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a45680c0b2aad5b62d2d6c37e24654142"></a>

Checks whether VendorVersion_Optional has been set.

#### `public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a5605702d2d9d39ae0ca420bd1c90dd57)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5605702d2d9d39ae0ca420bd1c90dd57"></a>

Returns true if VendorVersion_Optional is set and matches the default value.

#### `public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1aa01d6d198e5854dd6eab4fe1c96978e0)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa01d6d198e5854dd6eab4fe1c96978e0"></a>

Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.

#### `public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a0556d7c587655010cf828956910f57ca)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0556d7c587655010cf828956910f57ca"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a44b3e27a713119f42d63fdec65330555)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a44b3e27a713119f42d63fdec65330555"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1aab8f8dd5fce9836a7d2a08146f7bf5b6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aab8f8dd5fce9836a7d2a08146f7bf5b6"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a3c213e6fcd3cc6161d934901d4ec8fac)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3c213e6fcd3cc6161d934901d4ec8fac"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a190bedac197c3cee5c5551b0ca46415f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a190bedac197c3cee5c5551b0ca46415f"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a918bb3a7825c014408c7c11f1e318864)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a918bb3a7825c014408c7c11f1e318864"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a8eb0d4809036866898f47405e15da3af)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a8eb0d4809036866898f47405e15da3af"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a6f79a732230fb7df8cdbebf5b85bdd90)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6f79a732230fb7df8cdbebf5b85bdd90"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1ac3bbecf820a7fb98ad3e7b63e7e47078)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac3bbecf820a7fb98ad3e7b63e7e47078"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

#### `public inline bool `[`IsVendorEtagSet`](#structFRHAPI__PlayerOrderEntryCreate_1ab5582407c1fb497a79932c82cd93ea6f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab5582407c1fb497a79932c82cd93ea6f"></a>

Checks whether VendorEtag_Optional has been set.

#### `public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a452760519a47672599a15be8d5ebbfcf)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a452760519a47672599a15be8d5ebbfcf"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a682c1572393e3c674f125294083aa5e2)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a682c1572393e3c674f125294083aa5e2"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a8d6cd63f232944f3d96f5c991c5dae21)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a8d6cd63f232944f3d96f5c991c5dae21"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a0ac9512ef9d7722837e661a539096cf4)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0ac9512ef9d7722837e661a539096cf4"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1aec05835129cb41c32d476933bbf7dd5b)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aec05835129cb41c32d476933bbf7dd5b"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ab04dae58166f749fe48c0b801775191f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab04dae58166f749fe48c0b801775191f"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a80efa008f73d9566c67e8f9edef4aef3)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a80efa008f73d9566c67e8f9edef4aef3"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a4ccdb7aa660f193d59fc8b7e27f4dc89)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4ccdb7aa660f193d59fc8b7e27f4dc89"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.

#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a5b4fb9367e78317c6d476a8793c697a8)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5b4fb9367e78317c6d476a8793c697a8"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

#### `public inline bool `[`IsDynamicBundleLootIdsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a08f5f6449a42a2f61066edd175f4ec0c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a08f5f6449a42a2f61066edd175f4ec0c"></a>

Checks whether DynamicBundleLootIds_Optional has been set.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a250a6259d9f16f2f91245f643166b32b)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a250a6259d9f16f2f91245f643166b32b"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a96cd98824c2f07b0618048a7fe8db969)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a96cd98824c2f07b0618048a7fe8db969"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a6d5c7d509e19b655c67c90d197497425)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6d5c7d509e19b655c67c90d197497425"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1aa60a5f996078c46769c23cfcee8e5312)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa60a5f996078c46769c23cfcee8e5312"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a57cb997b4a1112429851660599560f81)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a57cb997b4a1112429851660599560f81"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a141c6279b1039116452984db08a1dab1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a141c6279b1039116452984db08a1dab1"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a3196fc7eedbabd6e921d7fada0c318c6)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3196fc7eedbabd6e921d7fada0c318c6"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a1a761989fd328e904816521062d48af5)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1a761989fd328e904816521062d48af5"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.

#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a3306e94366864b4dc20e685a9f547ee5)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3306e94366864b4dc20e685a9f547ee5"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

#### `public inline bool `[`IsPurchasePriceSet`](#structFRHAPI__PlayerOrderEntryCreate_1ae911cc30d44582c0bb62f523a12e2d0e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae911cc30d44582c0bb62f523a12e2d0e"></a>

Checks whether PurchasePrice_Optional has been set.

#### `public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1aa85d97579078cbc89e88c9aeeb3764fb)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa85d97579078cbc89e88c9aeeb3764fb"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1aaeb66ff25b9f31755cf7547948de60b5)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aaeb66ff25b9f31755cf7547948de60b5"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a6fa1d09ca8da2c60fb5a2c335edf32c2)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6fa1d09ca8da2c60fb5a2c335edf32c2"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1ae7710b165b67366c7ee8fbce8e352c45)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae7710b165b67366c7ee8fbce8e352c45"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1af4abbb15546a4c97ac6bcd06a6f537d9)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1af4abbb15546a4c97ac6bcd06a6f537d9"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a65b9b070b5e8cb865ae475a22218287e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a65b9b070b5e8cb865ae475a22218287e"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1aecddae854ad174a000d251f34280266a)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1aecddae854ad174a000d251f34280266a"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a18cada3d45d185487477e50f7f460304)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a18cada3d45d185487477e50f7f460304"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a3399d3dfc9acc7e167967e661ca59a40)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3399d3dfc9acc7e167967e661ca59a40"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

#### `public inline bool `[`IsExternalTranIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a5adc12ff3ad795e88c4d5d3572c9c762)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5adc12ff3ad795e88c4d5d3572c9c762"></a>

Checks whether ExternalTranId_Optional has been set.

#### `public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a0c07f1a8197a070c491d4c6c5778b770)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0c07f1a8197a070c491d4c6c5778b770"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a9e7d3c5cea415e3dd6ad5cef4bf2abfb)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a9e7d3c5cea415e3dd6ad5cef4bf2abfb"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a2aefdb2b5d1601513f84c7d342f5dea7)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2aefdb2b5d1601513f84c7d342f5dea7"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a740ce1be032cf16d3fae07bbc4f6c092)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a740ce1be032cf16d3fae07bbc4f6c092"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a988cf5d32ae261f6741d6826c179c86f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a988cf5d32ae261f6741d6826c179c86f"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ac377c0e22548e243fa8b84dcf909c4dd)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac377c0e22548e243fa8b84dcf909c4dd"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a75a84d0f3b687639e139f7dd9a2a7dc7)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a75a84d0f3b687639e139f7dd9a2a7dc7"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a2f8f17ee0485d55d4f82683d873123a7)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2f8f17ee0485d55d4f82683d873123a7"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a5777501bb5bae1077558336b6aa2248a)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5777501bb5bae1077558336b6aa2248a"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

#### `public inline bool `[`IsExternalItemSkuSet`](#structFRHAPI__PlayerOrderEntryCreate_1a6530da5c433edcca636757b7f83b3e9d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6530da5c433edcca636757b7f83b3e9d"></a>

Checks whether ExternalItemSku_Optional has been set.

#### `public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a47609fbd6b5700766ed4fa01b7f4ee0f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a47609fbd6b5700766ed4fa01b7f4ee0f"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a3b9564541d6b739669daf38ccfe065e7)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3b9564541d6b739669daf38ccfe065e7"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a5c126032b49c94a9a278ff59de6085f1)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5c126032b49c94a9a278ff59de6085f1"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1ad07e84b42ddd6f5117ee278f2903e60a)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad07e84b42ddd6f5117ee278f2903e60a"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a887bb7038e1922fb458829a3190744d5)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a887bb7038e1922fb458829a3190744d5"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a793d2c31211d3486ee69f8e8f94155cb)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a793d2c31211d3486ee69f8e8f94155cb"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a404a3283500fd7c21ed0c9def0f7a321)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a404a3283500fd7c21ed0c9def0f7a321"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a6c3309c89592a2399a3f62849b1465b6)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6c3309c89592a2399a3f62849b1465b6"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1ac45335b3ac886b81c0cc4d1b32be60fb)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac45335b3ac886b81c0cc4d1b32be60fb"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__PlayerOrderEntryCreate_1adbcce2b3ab94ea6e1dcf5003f08fb1d9)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1adbcce2b3ab94ea6e1dcf5003f08fb1d9"></a>

Checks whether UseInventoryBucket_Optional has been set.

#### `public inline int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a7a16c78335b1bb230734c723080908f7)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7a16c78335b1bb230734c723080908f7"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a458c3974cc86dfb250e624af8ba6d862)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a458c3974cc86dfb250e624af8ba6d862"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a6e129d97c863c041fa35510803764f6a)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6e129d97c863c041fa35510803764f6a"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a09d384d8e8d22359bf3328cc986160eb)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a09d384d8e8d22359bf3328cc986160eb"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1aa250b9d29d94e34d04b1ef683b45cb8f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa250b9d29d94e34d04b1ef683b45cb8f"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1af4faa974410de23986e6e88bce31efe5)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1af4faa974410de23986e6e88bce31efe5"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1abb4e8573421a024f8a0e22121386409d)`(const int64 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1abb4e8573421a024f8a0e22121386409d"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1adece98da5206a1cf98a257b1262731ec)`(int64 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1adece98da5206a1cf98a257b1262731ec"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a0763f3ac5d2d09f7a9a7fe3a8acb88db)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0763f3ac5d2d09f7a9a7fe3a8acb88db"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

#### `public inline bool `[`IsPlayerPortalEventIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a19ed75e88dfc17d3e9e56677dbdf15b6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a19ed75e88dfc17d3e9e56677dbdf15b6"></a>

Checks whether PlayerPortalEventId_Optional has been set.

#### `public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1aa9120f9f0c44edf69151d9507a45071d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa9120f9f0c44edf69151d9507a45071d"></a>

Returns true if PlayerPortalEventId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1a41473035133b34896b36d91b4cef3e67)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a41473035133b34896b36d91b4cef3e67"></a>

Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.

#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a6c4d47e6d19e294c374c7e3d66587f89)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6c4d47e6d19e294c374c7e3d66587f89"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a07825664be1bb1a4c9065e36e25f0460)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a07825664be1bb1a4c9065e36e25f0460"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a598808d258298bf55c13109474ebce51)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a598808d258298bf55c13109474ebce51"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab72fbe621a2bb397008d271914e082f2)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab72fbe621a2bb397008d271914e082f2"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a770afef2eaf5105de38c6967a2c1178e)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a770afef2eaf5105de38c6967a2c1178e"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a31ed95240d0ff4a30d6cbb701addc5c6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a31ed95240d0ff4a30d6cbb701addc5c6"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ae791a6b346e22eb9e5811be14b5b8869)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae791a6b346e22eb9e5811be14b5b8869"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1aa866dcc7ece4caed89120a797e5c0ad9)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa866dcc7ece4caed89120a797e5c0ad9"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab30e5ba8b651566c581c51ed468cf2ba)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab30e5ba8b651566c581c51ed468cf2ba"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

#### `public inline bool `[`IsInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a81d6e3394cc778e240102c00d3661a08)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a81d6e3394cc778e240102c00d3661a08"></a>

Checks whether InventoryId_Optional has been set.

#### `public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab055dd9ce253a60ca0a119dbebf29651)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab055dd9ce253a60ca0a119dbebf29651"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a5cb64d472cec50b7e56d39986c35f3d1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5cb64d472cec50b7e56d39986c35f3d1"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a3eaccf9296bc42be81917314fd81ebba)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3eaccf9296bc42be81917314fd81ebba"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a869d0f21687d4702970182594441e22d)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a869d0f21687d4702970182594441e22d"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a7412343256dd2a25b58ce09beb09531f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7412343256dd2a25b58ce09beb09531f"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a65e83d7207cd424b21bcb8f002419378)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a65e83d7207cd424b21bcb8f002419378"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a71dbe3601cc61a4a9b520241c6477988)`(const int64 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a71dbe3601cc61a4a9b520241c6477988"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1af8cb5cb966908baf213008915cf2bfbe)`(int64 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1af8cb5cb966908baf213008915cf2bfbe"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ad4f06f85a523ff7a0cbdc3ffdc416ca7)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad4f06f85a523ff7a0cbdc3ffdc416ca7"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a5c9f1c261069f529765dc15a400317a6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5c9f1c261069f529765dc15a400317a6"></a>

Checks whether LegacyInventoryId_Optional has been set.

#### `public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a1aa5c4549311a4d9ef4ae95f911477c3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1aa5c4549311a4d9ef4ae95f911477c3"></a>

Returns true if LegacyInventoryId_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1a80f0444d1ec40a1fce488b7605ed480d)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a80f0444d1ec40a1fce488b7605ed480d"></a>

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a92ac7c275f006f68a562b899ed89053e)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a92ac7c275f006f68a562b899ed89053e"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a4c29ac63f3d8663d490e12954ac2f3a5)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4c29ac63f3d8663d490e12954ac2f3a5"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1ab074ccf8601a4789af5677efd6a0bf66)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab074ccf8601a4789af5677efd6a0bf66"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1aec03b9e680b7a8ccc3078b3f3990a416)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aec03b9e680b7a8ccc3078b3f3990a416"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a88bf135bb6741a3414256615786a31ae)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a88bf135bb6741a3414256615786a31ae"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1abdb38a7497c15d1691990d80791170e3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1abdb38a7497c15d1691990d80791170e3"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1acde55e78663bed5edd2ff60f0fe8e680)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1acde55e78663bed5edd2ff60f0fe8e680"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1ab4d91b52d205d06c3f7e8277c58acea1)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab4d91b52d205d06c3f7e8277c58acea1"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a68d82aa82e3b6da7e552d889c6f5f5fa)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a68d82aa82e3b6da7e552d889c6f5f5fa"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a427100027e440f9d83b058b66c5ef1ca)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a427100027e440f9d83b058b66c5ef1ca"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a35554c03c8c0d6fea6444eeb2cc16ef0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a35554c03c8c0d6fea6444eeb2cc16ef0"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1ac41a23fa5d60aeb1cdc6d3717414b444)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac41a23fa5d60aeb1cdc6d3717414b444"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a49a22bede1784febfacb182b90262a55)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a49a22bede1784febfacb182b90262a55"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a5011f9f84f0178cb2c9576bb44ff15ea)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5011f9f84f0178cb2c9576bb44ff15ea"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a86d5ab1b5c61de6396b5b7ce2c1e6f08)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a86d5ab1b5c61de6396b5b7ce2c1e6f08"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a6ccf9c26c1a5e3b9df56b35fd21246d6)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6ccf9c26c1a5e3b9df56b35fd21246d6"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a9d6bf78e4649af4f83c18f5a8eabe99c)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a9d6bf78e4649af4f83c18f5a8eabe99c"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1aa50a3f88fd76e8e34dd5ce03329381f0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa50a3f88fd76e8e34dd5ce03329381f0"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a4396df64af2b3e034b2bd2349e05c024)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4396df64af2b3e034b2bd2349e05c024"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a6dd29584399cf351ea8f6c1e3e142fb8)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6dd29584399cf351ea8f6c1e3e142fb8"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreate_1adf4834a96e84876971d4218b6dc4b1bb)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1adf4834a96e84876971d4218b6dc4b1bb"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline bool `[`IsExpiresSet`](#structFRHAPI__PlayerOrderEntryCreate_1a9938a708975f152a5f4d1f28c57194c9)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a9938a708975f152a5f4d1f28c57194c9"></a>

Checks whether Expires_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a50d54c352702e4b1acade404c1a766bf)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a50d54c352702e4b1acade404c1a766bf"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a640e2b6d93e2312b261fd0a2e0cd1f1f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a640e2b6d93e2312b261fd0a2e0cd1f1f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a9f10159a5535f1a158c803928fb764a5)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a9f10159a5535f1a158c803928fb764a5"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1ad24bc9adcec9eea8ba01dae468244876)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad24bc9adcec9eea8ba01dae468244876"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a08cfb12300030d64f63162e46c69d017)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a08cfb12300030d64f63162e46c69d017"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ac0f5d900d20f9d351665914074d43432)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac0f5d900d20f9d351665914074d43432"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1ab2742a26fdd5a5d4f12367ecbbdb0738)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab2742a26fdd5a5d4f12367ecbbdb0738"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a305c2c449b9af12bb3ecd2ef07cff277)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a305c2c449b9af12bb3ecd2ef07cff277"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a0f1e6f6b229dccea43c03a8673e1da66)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0f1e6f6b229dccea43c03a8673e1da66"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerOrderEntryCreate_1abd4551560db4c9d758e457527ab0ef67)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1abd4551560db4c9d758e457527ab0ef67"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1afce47760faac7644bf147b830335575e)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1afce47760faac7644bf147b830335575e"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1ac45a97a63e497f91a9e3bf0a3d567905)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac45a97a63e497f91a9e3bf0a3d567905"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1af67bc923bd77b30a035c0df868765c84)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1af67bc923bd77b30a035c0df868765c84"></a>

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1a72ecaf752823f224609c10d1ea621bb2)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a72ecaf752823f224609c10d1ea621bb2"></a>

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a6872a8218cc3aafd1a98d2d6f021e56f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6872a8218cc3aafd1a98d2d6f021e56f"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a3f07a5db4ebf86c7bcf6e53548656619)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3f07a5db4ebf86c7bcf6e53548656619"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1aa73211d9d6a7ee42006974096abcfd6c)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa73211d9d6a7ee42006974096abcfd6c"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab318bc06c10af6cd526bb75a024f38ed)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab318bc06c10af6cd526bb75a024f38ed"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1a77c1568093d12436f97287085abaf82e)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a77c1568093d12436f97287085abaf82e"></a>

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

#### `public inline bool `[`IsEntryIdSet`](#structFRHAPI__PlayerOrderEntryCreate_1a2e482cc157986664f258ded094a0bc83)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2e482cc157986664f258ded094a0bc83"></a>

Checks whether EntryId_Optional has been set.

