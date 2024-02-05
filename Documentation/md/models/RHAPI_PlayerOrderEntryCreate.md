# RHAPI_PlayerOrderEntryCreate <a id="group__RHAPI__PlayerOrderEntryCreate"></a>

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

#### Summary

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
`public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a854b4c83ae188774cadc268527a6d000) | The purchase price of the Loot.
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
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreate_1a00dbaab9eb9ab562c5e67300d09e43e9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreate_1afa6c78ecbb0eeab423a13355154fd88f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreate_1a127ccd28750ad7dd2f24c3d0d76f00f6)`()` | Gets the value of Type.
`public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreate_1a18237e870be1381ba03757534a1a0b90)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreate_1a8ca5f336e3dc7cecd47a588e503bebd0)`(ERHAPI_PlayerOrderEntryType NewValue)` | Sets the value of Type.
`public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a48d3fa1adaeb5cf305e6b0a7549612db)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1aa5585fb9a47750f43dbfc04b52453543)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a0ba4fc62d076ac4ee550f8fd1983dc1f)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1ada475c588128f1d26ef60ae4590215aa)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1acfc1cb2afc99c2bd5fc500cabca81bbb)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ab788f49c582f88fc142aa9ce9cd4b19c)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a32e6033ac3ec6cc50f2095e6fae9718c)`(int32 NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a1316f75e782c1af640b5acedae36e78f)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a2796b72ab69a831945889f3171385acc)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1aea4bd2f1244364c06e0ded78b910da26)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1ae6184450dc211af7ec1817e523fab6ad)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1a1c038ad4ac6ebe0bb401af549eda76f3)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1a04deed2516a669b32bc1fcc009bc3f92)`(int32 NewValue)` | Sets the value of Quantity.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a26f645a9cdf00f6d4b9a2d58da483573)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1acbb436affceb38f41d1e45f12b83c4ed)`()` | Sets the value of Quantity to its default
`public inline int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a93408f37011baead5532e7df527f2038)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a088b45859ecfd2a784c07cb0300f6af0)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a306fce902975290ce6adee4373300945)`(const int64 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aa84099528c357987f9f2177c2035f440)`(int64 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a276e5f61d1c33ab73d3aa98b220d2d4c)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1aee191c2bbc292ebf1efef5ba8f23a3a8)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aae9f0d8cb9303c4da4a36c6cfad17aed)`(int64 NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a58d48bd5f2290d66a3a1a82d87e53e50)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a5605702d2d9d39ae0ca420bd1c90dd57)`() const` | Returns true if VendorVersion_Optional is set and matches the default value.
`public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1aa01d6d198e5854dd6eab4fe1c96978e0)`()` | Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.
`public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a2b2a1c4ad3835b0207bcdde88e5e82ef)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a78ed965195fa7ececc6b8ba18b1eb6b0)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a29012cde083724f9445813e4e7897bbc)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a3c213e6fcd3cc6161d934901d4ec8fac)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ade2452c69bf525d6a9425d780807984b)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ad33ef849dc2ef7f7bfff8bf2e1baf97f)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1ac967ccee979ec2c8f662acf03588d1a5)`(FString NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1ac3bbecf820a7fb98ad3e7b63e7e47078)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1aeda4d6724fdf806f9965c1d1ebb66c19)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a400ec3ffd43c746db3f992d0794ad91e)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a432c636181927a316baf132c2edf169a)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a0ac9512ef9d7722837e661a539096cf4)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a3323dc33e1f7e658fe9551d52b9fbfa5)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a4bf58c90cc4fc40db945113c5bac6ec8)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a5da0ec869e88147acf972fb3e7287c69)`(TArray< int32 > NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a5b4fb9367e78317c6d476a8793c697a8)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a4c543171795452090ef37ca7143f9f94)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a69f538d58d0b4dd48d3bd36b7a1f900d)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a915fcebc95d9705b597d9b63eb84893d)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1aa60a5f996078c46769c23cfcee8e5312)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a1d354fe7997b71eaabf0804119764f65)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a830c2529f121e4f67d66ecec3c66352e)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a6a1eabcd3046757e032da5e0b4d94cb7)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a3306e94366864b4dc20e685a9f547ee5)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1af392c78682d50af0447cfae2280ede40)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a5976dd3a0b6329c4a3e462eac4a8396b)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a99f90e56e003e0d766ede92777cc8261)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1ae7710b165b67366c7ee8fbce8e352c45)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1acc6abc2bf34fea862bcfa22947643d61)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a5abf7a0ba78cd57f48750cdb32d8f629)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a3d005cf39139d7c5a55097daf4fd8bfe)`(FString NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a3399d3dfc9acc7e167967e661ca59a40)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a7127c9f601f355ae4a8a00d12198d4c0)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a9d3b8c82e009945dd44ba88af268e984)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a96032163bea3b4bddd100c9748930191)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a740ce1be032cf16d3fae07bbc4f6c092)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ae36da7d278799ea2d72cdf58c0ddb26c)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a6bc42672ea2f5968ea3d7b1a0a7313ed)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a457aa2b45d30c0229eca45739789021c)`(FString NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a5777501bb5bae1077558336b6aa2248a)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a26dd53779f85fe24b67f0ae9ffbf18e3)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a0d16503a78546e4d2317ec5172ec4900)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a54000b30efeea21f8e50b7c7420baf3b)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1ad07e84b42ddd6f5117ee278f2903e60a)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a11d8b619bdb6da2ff43b96467728aae5)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ad475a6304c995f18eb9e3ba2856f1851)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a561502bffde3ba2077f8700631825e8c)`(ERHAPI_InventoryBucket NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1ac45335b3ac886b81c0cc4d1b32be60fb)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a5fe25dcff0cb3813133cef87d9400ea7)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1ac77e02bb6f0d2f2b551cabae0a6ba07e)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a7ad3b8f4a37a9bc0d8c34b86a32c950d)`(const int64 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a09d384d8e8d22359bf3328cc986160eb)`(int64 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a027d520837167698ef736dc9c68853ac)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a1c37163b4fa04d2a11eb199d07a77644)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a3bf96c6162f0e192740c0b3ba9faac4b)`(int64 NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a0763f3ac5d2d09f7a9a7fe3a8acb88db)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1aa9120f9f0c44edf69151d9507a45071d)`() const` | Returns true if PlayerPortalEventId_Optional is set and matches the default value.
`public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1a41473035133b34896b36d91b4cef3e67)`()` | Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a58bda8763eb8aecbb5bf64e258f06f37)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a1ae84ed913068008dfb4d5e78b8bbc79)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a3050288b91a1a9428724a64e52dbb099)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab72fbe621a2bb397008d271914e082f2)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a234757b5733e1385a1a18acfe9aac8a3)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ae3ca37eb19d06f652124e7967c09e455)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1af4f7dbbb9a9be3e91e177ba28fab1b43)`(FGuid NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab30e5ba8b651566c581c51ed468cf2ba)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a7caf9e81107b894f8a83d042cb8ab040)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1aa605082f6a88a5eb28cc3ab74e18519b)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1af1881f98fd0c36c408acac9ce99fc7c7)`(const int64 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a869d0f21687d4702970182594441e22d)`(int64 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a555401f5eb39f6c4859196a09fc005fb)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a1100677e671952545896cd1f8b639a69)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a90976762ce5344ae759b069bd2a2e580)`(int64 NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ad4f06f85a523ff7a0cbdc3ffdc416ca7)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a1aa5c4549311a4d9ef4ae95f911477c3)`() const` | Returns true if LegacyInventoryId_Optional is set and matches the default value.
`public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1a80f0444d1ec40a1fce488b7605ed480d)`()` | Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.
`public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a3b7f1eb57c5b02594dca96af39b31daf)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a3aa4988192d71bd449ab70579e507e5b)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a490347eef068b820aa09ac0a850f8692)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1aec03b9e680b7a8ccc3078b3f3990a416)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1afc5586ffe1d87066dc7529503afb2cdd)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a7f37045aa5c0d9ba9d8715423a2c19fe)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a4f53128046c59ecf306b5ed96f37c93a)`(int32 NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a68d82aa82e3b6da7e552d889c6f5f5fa)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a35554c03c8c0d6fea6444eeb2cc16ef0)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1ac41a23fa5d60aeb1cdc6d3717414b444)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a58eb06bd84eb4575dd8c5703f018c9fd)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1aef235df0528507fa6ce46a4f58c60a77)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a69a8618de9a6a0ad648c49cdb6bbfdc6)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a6ccf9c26c1a5e3b9df56b35fd21246d6)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a54b8ebe1354bf121ff31dff579d0cf5f)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a6a8a899e5fa93ae2773e370bacaccf28)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1acbd250f7e5402add9d7d624d01ca16ac)`(FDateTime NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreate_1adf4834a96e84876971d4218b6dc4b1bb)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a95ac703ba6f6b9530e8da2384cc243f3)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1acd2070c949036e6da492ee194815dfb6)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a48badc0e1d347a8a5ca5a53a2a613d4f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1ad24bc9adcec9eea8ba01dae468244876)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1af126307bf6c151509428042ed284d4b0)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1af024594436a2a1a5f7d996bede0f704b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a1f7120142401c814c85cadf65571a01d)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a0f1e6f6b229dccea43c03a8673e1da66)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1aecf9008657b3d37469ec383b34d919e0)`()` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1acc47106f1a8a1512ad73b4df23ce9221)`() const` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1acb2d3ac776a97875d18ed3405319b480)`(const FString & DefaultValue) const` | Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1a72ecaf752823f224609c10d1ea621bb2)`(FString & OutValue) const` | Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a12ff4be29fd0acb3557caaec94ee7d85)`()` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a00deecc007aa981ea2ac38bd548314e3)`() const` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1ac0c8c9c6ca6eb0111b17b889ee6c773d)`(FString NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.
`public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1a77c1568093d12436f97287085abaf82e)`()` | Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

#### Members

#### `public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreate_1a1fa012706bd2946dcde63c1fa2977c47) <a id="structFRHAPI__PlayerOrderEntryCreate_1a1fa012706bd2946dcde63c1fa2977c47"></a>

The type of entry.

<br>
#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ac2463f6b1e0d6a92b110a9cf4e91e201) <a id="structFRHAPI__PlayerOrderEntryCreate_1ac2463f6b1e0d6a92b110a9cf4e91e201"></a>

Unique Identifier for the Loot.

<br>
#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1aca5a3724ab1f9e4729704de2301334b1) <a id="structFRHAPI__PlayerOrderEntryCreate_1aca5a3724ab1f9e4729704de2301334b1"></a>

true if LootId_Optional has been set to a value

<br>
#### `public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreate_1ac5c8a918403b0fb7a186f23f09e5275f) <a id="structFRHAPI__PlayerOrderEntryCreate_1ac5c8a918403b0fb7a186f23f09e5275f"></a>

Quantity of Inventory.

<br>
#### `public int64 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a2dd7448422af895253651727cab1cd72) <a id="structFRHAPI__PlayerOrderEntryCreate_1a2dd7448422af895253651727cab1cd72"></a>

Legacy version for the vendor owning the loot_id. Use `vendor_etag` instead.

<br>
#### `public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a2d7bc5619f3d5103d265112747910e21) <a id="structFRHAPI__PlayerOrderEntryCreate_1a2d7bc5619f3d5103d265112747910e21"></a>

true if VendorVersion_Optional has been set to a value

<br>
#### `public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a8b6e8b09203f35236c5090e740aae21c) <a id="structFRHAPI__PlayerOrderEntryCreate_1a8b6e8b09203f35236c5090e740aae21c"></a>

etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match

<br>
#### `public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a53115760d6f8b22ad6c638aeb6641574) <a id="structFRHAPI__PlayerOrderEntryCreate_1a53115760d6f8b22ad6c638aeb6641574"></a>

true if VendorEtag_Optional has been set to a value

<br>
#### `public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a5ea4c5bec99ffd7ce5c5554318dd8def) <a id="structFRHAPI__PlayerOrderEntryCreate_1a5ea4c5bec99ffd7ce5c5554318dd8def"></a>

List of Loot IDs for the dynamic bundle.

<br>
#### `public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a58ced26c97e05c07687e89ef6136232c) <a id="structFRHAPI__PlayerOrderEntryCreate_1a58ced26c97e05c07687e89ef6136232c"></a>

true if DynamicBundleLootIds_Optional has been set to a value

<br>
#### `public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a854b4c83ae188774cadc268527a6d000) <a id="structFRHAPI__PlayerOrderEntryCreate_1a854b4c83ae188774cadc268527a6d000"></a>

The purchase price of the Loot.

<br>
#### `public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a11544486b2cbee880bec997881ed153a) <a id="structFRHAPI__PlayerOrderEntryCreate_1a11544486b2cbee880bec997881ed153a"></a>

true if PurchasePrice_Optional has been set to a value

<br>
#### `public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ad50ae95f36b01d863df9ffecf9aa8813) <a id="structFRHAPI__PlayerOrderEntryCreate_1ad50ae95f36b01d863df9ffecf9aa8813"></a>

External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.

<br>
#### `public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a0c65b3dc5ab68ce50108d2278fa738c1) <a id="structFRHAPI__PlayerOrderEntryCreate_1a0c65b3dc5ab68ce50108d2278fa738c1"></a>

true if ExternalTranId_Optional has been set to a value

<br>
#### `public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a628abfaf16250631ed8ca17bfdacf4d5) <a id="structFRHAPI__PlayerOrderEntryCreate_1a628abfaf16250631ed8ca17bfdacf4d5"></a>

External item SKU for the Order Entry.

<br>
#### `public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a52c353b419d313026cc98bdfa4bf73ce) <a id="structFRHAPI__PlayerOrderEntryCreate_1a52c353b419d313026cc98bdfa4bf73ce"></a>

true if ExternalItemSku_Optional has been set to a value

<br>
#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ad17b3ece98aa9a3cbeae05801baeb9a4) <a id="structFRHAPI__PlayerOrderEntryCreate_1ad17b3ece98aa9a3cbeae05801baeb9a4"></a>

Inventory Bucket to use for the Order Entry.

<br>
#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ae4ed855d09350c568de079dbe4501fc8) <a id="structFRHAPI__PlayerOrderEntryCreate_1ae4ed855d09350c568de079dbe4501fc8"></a>

true if UseInventoryBucket_Optional has been set to a value

<br>
#### `public int64 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ab62a785558b7de02eba79ec3c5c28326) <a id="structFRHAPI__PlayerOrderEntryCreate_1ab62a785558b7de02eba79ec3c5c28326"></a>

Player Portal Event Id for the Order Entry.

<br>
#### `public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ad42e0e3a74b85d227e24f8e392f1f4da) <a id="structFRHAPI__PlayerOrderEntryCreate_1ad42e0e3a74b85d227e24f8e392f1f4da"></a>

true if PlayerPortalEventId_Optional has been set to a value

<br>
#### `public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1abffd4007588eba4d0bb386665c1b0e0e) <a id="structFRHAPI__PlayerOrderEntryCreate_1abffd4007588eba4d0bb386665c1b0e0e"></a>

Unique Identifier for the Inventory.

<br>
#### `public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1afa2e5d18d4ef18e30ecf34615c6b0715) <a id="structFRHAPI__PlayerOrderEntryCreate_1afa2e5d18d4ef18e30ecf34615c6b0715"></a>

true if InventoryId_Optional has been set to a value

<br>
#### `public int64 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ae8c7bba30205a2835a01e6007f9384f2) <a id="structFRHAPI__PlayerOrderEntryCreate_1ae8c7bba30205a2835a01e6007f9384f2"></a>

Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].

<br>
#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a51a6d18e2f705583ec1f1c89e32ac05c) <a id="structFRHAPI__PlayerOrderEntryCreate_1a51a6d18e2f705583ec1f1c89e32ac05c"></a>

true if LegacyInventoryId_Optional has been set to a value

<br>
#### `public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1ab55f4ff8e86a6c9806c5340ed2fb6a84) <a id="structFRHAPI__PlayerOrderEntryCreate_1ab55f4ff8e86a6c9806c5340ed2fb6a84"></a>

Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].

<br>
#### `public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1ae5a79822d9b138ed7d1261534314aa44) <a id="structFRHAPI__PlayerOrderEntryCreate_1ae5a79822d9b138ed7d1261534314aa44"></a>

true if ItemId_Optional has been set to a value

<br>
#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a020075590d344ccee3befe568f934611) <a id="structFRHAPI__PlayerOrderEntryCreate_1a020075590d344ccee3befe568f934611"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a0363a10ac062ff116dc8b8519df4e401) <a id="structFRHAPI__PlayerOrderEntryCreate_1a0363a10ac062ff116dc8b8519df4e401"></a>

true if Expires_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a8cf7cee2a5dd6adf0dd52933d80816fc) <a id="structFRHAPI__PlayerOrderEntryCreate_1a8cf7cee2a5dd6adf0dd52933d80816fc"></a>

Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1a5ff907d37f47bc25c1c34e84c7df1beb) <a id="structFRHAPI__PlayerOrderEntryCreate_1a5ff907d37f47bc25c1c34e84c7df1beb"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreate_1a66b78e5d60374c72a582e7fbc0e43c39) <a id="structFRHAPI__PlayerOrderEntryCreate_1a66b78e5d60374c72a582e7fbc0e43c39"></a>

Unique Identifier for the Order Entry.

<br>
#### `public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreate_1aa9fe95702360c5b4b535093e153cd595) <a id="structFRHAPI__PlayerOrderEntryCreate_1aa9fe95702360c5b4b535093e153cd595"></a>

true if EntryId_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreate_1a00dbaab9eb9ab562c5e67300d09e43e9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a00dbaab9eb9ab562c5e67300d09e43e9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreate_1afa6c78ecbb0eeab423a13355154fd88f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1afa6c78ecbb0eeab423a13355154fd88f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreate_1a127ccd28750ad7dd2f24c3d0d76f00f6)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a127ccd28750ad7dd2f24c3d0d76f00f6"></a>

Gets the value of Type.

<br>
#### `public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreate_1a18237e870be1381ba03757534a1a0b90)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a18237e870be1381ba03757534a1a0b90"></a>

Gets the value of Type.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreate_1a8ca5f336e3dc7cecd47a588e503bebd0)`(ERHAPI_PlayerOrderEntryType NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a8ca5f336e3dc7cecd47a588e503bebd0"></a>

Sets the value of Type.

<br>
#### `public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a48d3fa1adaeb5cf305e6b0a7549612db)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a48d3fa1adaeb5cf305e6b0a7549612db"></a>

Gets the value of LootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1aa5585fb9a47750f43dbfc04b52453543)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa5585fb9a47750f43dbfc04b52453543"></a>

Gets the value of LootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a0ba4fc62d076ac4ee550f8fd1983dc1f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0ba4fc62d076ac4ee550f8fd1983dc1f"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1ada475c588128f1d26ef60ae4590215aa)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ada475c588128f1d26ef60ae4590215aa"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1acfc1cb2afc99c2bd5fc500cabca81bbb)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1acfc1cb2afc99c2bd5fc500cabca81bbb"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ab788f49c582f88fc142aa9ce9cd4b19c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab788f49c582f88fc142aa9ce9cd4b19c"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a32e6033ac3ec6cc50f2095e6fae9718c)`(int32 NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a32e6033ac3ec6cc50f2095e6fae9718c"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

<br>
#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreate_1a1316f75e782c1af640b5acedae36e78f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1316f75e782c1af640b5acedae36e78f"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

<br>
#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a2796b72ab69a831945889f3171385acc)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2796b72ab69a831945889f3171385acc"></a>

Returns true if LootId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1aea4bd2f1244364c06e0ded78b910da26)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aea4bd2f1244364c06e0ded78b910da26"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

<br>
#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1ae6184450dc211af7ec1817e523fab6ad)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae6184450dc211af7ec1817e523fab6ad"></a>

Gets the value of Quantity.

<br>
#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1a1c038ad4ac6ebe0bb401af549eda76f3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1c038ad4ac6ebe0bb401af549eda76f3"></a>

Gets the value of Quantity.

<br>
#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreate_1a04deed2516a669b32bc1fcc009bc3f92)`(int32 NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a04deed2516a669b32bc1fcc009bc3f92"></a>

Sets the value of Quantity.

<br>
#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a26f645a9cdf00f6d4b9a2d58da483573)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a26f645a9cdf00f6d4b9a2d58da483573"></a>

Returns true if Quantity matches the default value.

<br>
#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1acbb436affceb38f41d1e45f12b83c4ed)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1acbb436affceb38f41d1e45f12b83c4ed"></a>

Sets the value of Quantity to its default

<br>
#### `public inline int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a93408f37011baead5532e7df527f2038)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a93408f37011baead5532e7df527f2038"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

<br>
#### `public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a088b45859ecfd2a784c07cb0300f6af0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a088b45859ecfd2a784c07cb0300f6af0"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

<br>
#### `public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a306fce902975290ce6adee4373300945)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a306fce902975290ce6adee4373300945"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aa84099528c357987f9f2177c2035f440)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa84099528c357987f9f2177c2035f440"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a276e5f61d1c33ab73d3aa98b220d2d4c)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a276e5f61d1c33ab73d3aa98b220d2d4c"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1aee191c2bbc292ebf1efef5ba8f23a3a8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aee191c2bbc292ebf1efef5ba8f23a3a8"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1aae9f0d8cb9303c4da4a36c6cfad17aed)`(int64 NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1aae9f0d8cb9303c4da4a36c6cfad17aed"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

<br>
#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreate_1a58d48bd5f2290d66a3a1a82d87e53e50)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a58d48bd5f2290d66a3a1a82d87e53e50"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

<br>
#### `public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a5605702d2d9d39ae0ca420bd1c90dd57)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5605702d2d9d39ae0ca420bd1c90dd57"></a>

Returns true if VendorVersion_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1aa01d6d198e5854dd6eab4fe1c96978e0)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa01d6d198e5854dd6eab4fe1c96978e0"></a>

Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.

<br>
#### `public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a2b2a1c4ad3835b0207bcdde88e5e82ef)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2b2a1c4ad3835b0207bcdde88e5e82ef"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a78ed965195fa7ececc6b8ba18b1eb6b0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a78ed965195fa7ececc6b8ba18b1eb6b0"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a29012cde083724f9445813e4e7897bbc)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a29012cde083724f9445813e4e7897bbc"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1a3c213e6fcd3cc6161d934901d4ec8fac)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3c213e6fcd3cc6161d934901d4ec8fac"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ade2452c69bf525d6a9425d780807984b)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ade2452c69bf525d6a9425d780807984b"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ad33ef849dc2ef7f7bfff8bf2e1baf97f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad33ef849dc2ef7f7bfff8bf2e1baf97f"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1ac967ccee979ec2c8f662acf03588d1a5)`(FString NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac967ccee979ec2c8f662acf03588d1a5"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

<br>
#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreate_1ac3bbecf820a7fb98ad3e7b63e7e47078)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac3bbecf820a7fb98ad3e7b63e7e47078"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

<br>
#### `public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1aeda4d6724fdf806f9965c1d1ebb66c19)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aeda4d6724fdf806f9965c1d1ebb66c19"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a400ec3ffd43c746db3f992d0794ad91e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a400ec3ffd43c746db3f992d0794ad91e"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a432c636181927a316baf132c2edf169a)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a432c636181927a316baf132c2edf169a"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a0ac9512ef9d7722837e661a539096cf4)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0ac9512ef9d7722837e661a539096cf4"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a3323dc33e1f7e658fe9551d52b9fbfa5)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3323dc33e1f7e658fe9551d52b9fbfa5"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a4bf58c90cc4fc40db945113c5bac6ec8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4bf58c90cc4fc40db945113c5bac6ec8"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a5da0ec869e88147acf972fb3e7287c69)`(TArray< int32 > NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5da0ec869e88147acf972fb3e7287c69"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

<br>
#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreate_1a5b4fb9367e78317c6d476a8793c697a8)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5b4fb9367e78317c6d476a8793c697a8"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

<br>
#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a4c543171795452090ef37ca7143f9f94)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4c543171795452090ef37ca7143f9f94"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a69f538d58d0b4dd48d3bd36b7a1f900d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a69f538d58d0b4dd48d3bd36b7a1f900d"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a915fcebc95d9705b597d9b63eb84893d)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a915fcebc95d9705b597d9b63eb84893d"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1aa60a5f996078c46769c23cfcee8e5312)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa60a5f996078c46769c23cfcee8e5312"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a1d354fe7997b71eaabf0804119764f65)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1d354fe7997b71eaabf0804119764f65"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a830c2529f121e4f67d66ecec3c66352e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a830c2529f121e4f67d66ecec3c66352e"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a6a1eabcd3046757e032da5e0b4d94cb7)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6a1eabcd3046757e032da5e0b4d94cb7"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

<br>
#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreate_1a3306e94366864b4dc20e685a9f547ee5)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3306e94366864b4dc20e685a9f547ee5"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

<br>
#### `public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1af392c78682d50af0447cfae2280ede40)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1af392c78682d50af0447cfae2280ede40"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a5976dd3a0b6329c4a3e462eac4a8396b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5976dd3a0b6329c4a3e462eac4a8396b"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a99f90e56e003e0d766ede92777cc8261)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a99f90e56e003e0d766ede92777cc8261"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1ae7710b165b67366c7ee8fbce8e352c45)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae7710b165b67366c7ee8fbce8e352c45"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1acc6abc2bf34fea862bcfa22947643d61)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1acc6abc2bf34fea862bcfa22947643d61"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a5abf7a0ba78cd57f48750cdb32d8f629)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5abf7a0ba78cd57f48750cdb32d8f629"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a3d005cf39139d7c5a55097daf4fd8bfe)`(FString NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3d005cf39139d7c5a55097daf4fd8bfe"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

<br>
#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreate_1a3399d3dfc9acc7e167967e661ca59a40)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3399d3dfc9acc7e167967e661ca59a40"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

<br>
#### `public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a7127c9f601f355ae4a8a00d12198d4c0)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7127c9f601f355ae4a8a00d12198d4c0"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a9d3b8c82e009945dd44ba88af268e984)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a9d3b8c82e009945dd44ba88af268e984"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a96032163bea3b4bddd100c9748930191)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a96032163bea3b4bddd100c9748930191"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a740ce1be032cf16d3fae07bbc4f6c092)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a740ce1be032cf16d3fae07bbc4f6c092"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ae36da7d278799ea2d72cdf58c0ddb26c)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae36da7d278799ea2d72cdf58c0ddb26c"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a6bc42672ea2f5968ea3d7b1a0a7313ed)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6bc42672ea2f5968ea3d7b1a0a7313ed"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a457aa2b45d30c0229eca45739789021c)`(FString NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a457aa2b45d30c0229eca45739789021c"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

<br>
#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreate_1a5777501bb5bae1077558336b6aa2248a)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5777501bb5bae1077558336b6aa2248a"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

<br>
#### `public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a26dd53779f85fe24b67f0ae9ffbf18e3)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a26dd53779f85fe24b67f0ae9ffbf18e3"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a0d16503a78546e4d2317ec5172ec4900)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0d16503a78546e4d2317ec5172ec4900"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a54000b30efeea21f8e50b7c7420baf3b)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a54000b30efeea21f8e50b7c7420baf3b"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1ad07e84b42ddd6f5117ee278f2903e60a)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad07e84b42ddd6f5117ee278f2903e60a"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a11d8b619bdb6da2ff43b96467728aae5)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a11d8b619bdb6da2ff43b96467728aae5"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ad475a6304c995f18eb9e3ba2856f1851)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad475a6304c995f18eb9e3ba2856f1851"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1a561502bffde3ba2077f8700631825e8c)`(ERHAPI_InventoryBucket NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a561502bffde3ba2077f8700631825e8c"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

<br>
#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreate_1ac45335b3ac886b81c0cc4d1b32be60fb)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac45335b3ac886b81c0cc4d1b32be60fb"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

<br>
#### `public inline int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a5fe25dcff0cb3813133cef87d9400ea7)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5fe25dcff0cb3813133cef87d9400ea7"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

<br>
#### `public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1ac77e02bb6f0d2f2b551cabae0a6ba07e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac77e02bb6f0d2f2b551cabae0a6ba07e"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

<br>
#### `public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a7ad3b8f4a37a9bc0d8c34b86a32c950d)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7ad3b8f4a37a9bc0d8c34b86a32c950d"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a09d384d8e8d22359bf3328cc986160eb)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a09d384d8e8d22359bf3328cc986160eb"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a027d520837167698ef736dc9c68853ac)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a027d520837167698ef736dc9c68853ac"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a1c37163b4fa04d2a11eb199d07a77644)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1c37163b4fa04d2a11eb199d07a77644"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a3bf96c6162f0e192740c0b3ba9faac4b)`(int64 NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3bf96c6162f0e192740c0b3ba9faac4b"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

<br>
#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreate_1a0763f3ac5d2d09f7a9a7fe3a8acb88db)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0763f3ac5d2d09f7a9a7fe3a8acb88db"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

<br>
#### `public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1aa9120f9f0c44edf69151d9507a45071d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa9120f9f0c44edf69151d9507a45071d"></a>

Returns true if PlayerPortalEventId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1a41473035133b34896b36d91b4cef3e67)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a41473035133b34896b36d91b4cef3e67"></a>

Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.

<br>
#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a58bda8763eb8aecbb5bf64e258f06f37)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a58bda8763eb8aecbb5bf64e258f06f37"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a1ae84ed913068008dfb4d5e78b8bbc79)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1ae84ed913068008dfb4d5e78b8bbc79"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a3050288b91a1a9428724a64e52dbb099)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3050288b91a1a9428724a64e52dbb099"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab72fbe621a2bb397008d271914e082f2)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab72fbe621a2bb397008d271914e082f2"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a234757b5733e1385a1a18acfe9aac8a3)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a234757b5733e1385a1a18acfe9aac8a3"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1ae3ca37eb19d06f652124e7967c09e455)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae3ca37eb19d06f652124e7967c09e455"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1af4f7dbbb9a9be3e91e177ba28fab1b43)`(FGuid NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1af4f7dbbb9a9be3e91e177ba28fab1b43"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

<br>
#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ab30e5ba8b651566c581c51ed468cf2ba)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab30e5ba8b651566c581c51ed468cf2ba"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

<br>
#### `public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a7caf9e81107b894f8a83d042cb8ab040)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7caf9e81107b894f8a83d042cb8ab040"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

<br>
#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1aa605082f6a88a5eb28cc3ab74e18519b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa605082f6a88a5eb28cc3ab74e18519b"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

<br>
#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1af1881f98fd0c36c408acac9ce99fc7c7)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1af1881f98fd0c36c408acac9ce99fc7c7"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a869d0f21687d4702970182594441e22d)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a869d0f21687d4702970182594441e22d"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a555401f5eb39f6c4859196a09fc005fb)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a555401f5eb39f6c4859196a09fc005fb"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a1100677e671952545896cd1f8b639a69)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1100677e671952545896cd1f8b639a69"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1a90976762ce5344ae759b069bd2a2e580)`(int64 NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a90976762ce5344ae759b069bd2a2e580"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

<br>
#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreate_1ad4f06f85a523ff7a0cbdc3ffdc416ca7)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad4f06f85a523ff7a0cbdc3ffdc416ca7"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

<br>
#### `public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a1aa5c4549311a4d9ef4ae95f911477c3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1aa5c4549311a4d9ef4ae95f911477c3"></a>

Returns true if LegacyInventoryId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1a80f0444d1ec40a1fce488b7605ed480d)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a80f0444d1ec40a1fce488b7605ed480d"></a>

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.

<br>
#### `public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a3b7f1eb57c5b02594dca96af39b31daf)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3b7f1eb57c5b02594dca96af39b31daf"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a3aa4988192d71bd449ab70579e507e5b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3aa4988192d71bd449ab70579e507e5b"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a490347eef068b820aa09ac0a850f8692)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a490347eef068b820aa09ac0a850f8692"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1aec03b9e680b7a8ccc3078b3f3990a416)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aec03b9e680b7a8ccc3078b3f3990a416"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1afc5586ffe1d87066dc7529503afb2cdd)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1afc5586ffe1d87066dc7529503afb2cdd"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a7f37045aa5c0d9ba9d8715423a2c19fe)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7f37045aa5c0d9ba9d8715423a2c19fe"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a4f53128046c59ecf306b5ed96f37c93a)`(int32 NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4f53128046c59ecf306b5ed96f37c93a"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

<br>
#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreate_1a68d82aa82e3b6da7e552d889c6f5f5fa)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a68d82aa82e3b6da7e552d889c6f5f5fa"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

<br>
#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreate_1a35554c03c8c0d6fea6444eeb2cc16ef0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a35554c03c8c0d6fea6444eeb2cc16ef0"></a>

Returns true if ItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntryCreate_1ac41a23fa5d60aeb1cdc6d3717414b444)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac41a23fa5d60aeb1cdc6d3717414b444"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

<br>
#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a58eb06bd84eb4575dd8c5703f018c9fd)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a58eb06bd84eb4575dd8c5703f018c9fd"></a>

Gets the value of Expires_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1aef235df0528507fa6ce46a4f58c60a77)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1aef235df0528507fa6ce46a4f58c60a77"></a>

Gets the value of Expires_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a69a8618de9a6a0ad648c49cdb6bbfdc6)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a69a8618de9a6a0ad648c49cdb6bbfdc6"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1a6ccf9c26c1a5e3b9df56b35fd21246d6)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6ccf9c26c1a5e3b9df56b35fd21246d6"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a54b8ebe1354bf121ff31dff579d0cf5f)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a54b8ebe1354bf121ff31dff579d0cf5f"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a6a8a899e5fa93ae2773e370bacaccf28)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6a8a899e5fa93ae2773e370bacaccf28"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreate_1acbd250f7e5402add9d7d624d01ca16ac)`(FDateTime NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1acbd250f7e5402add9d7d624d01ca16ac"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

<br>
#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreate_1adf4834a96e84876971d4218b6dc4b1bb)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1adf4834a96e84876971d4218b6dc4b1bb"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a95ac703ba6f6b9530e8da2384cc243f3)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a95ac703ba6f6b9530e8da2384cc243f3"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1acd2070c949036e6da492ee194815dfb6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1acd2070c949036e6da492ee194815dfb6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a48badc0e1d347a8a5ca5a53a2a613d4f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a48badc0e1d347a8a5ca5a53a2a613d4f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1ad24bc9adcec9eea8ba01dae468244876)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad24bc9adcec9eea8ba01dae468244876"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1af126307bf6c151509428042ed284d4b0)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1af126307bf6c151509428042ed284d4b0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1af024594436a2a1a5f7d996bede0f704b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1af024594436a2a1a5f7d996bede0f704b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a1f7120142401c814c85cadf65571a01d)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1f7120142401c814c85cadf65571a01d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreate_1a0f1e6f6b229dccea43c03a8673e1da66)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0f1e6f6b229dccea43c03a8673e1da66"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1aecf9008657b3d37469ec383b34d919e0)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1aecf9008657b3d37469ec383b34d919e0"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1acc47106f1a8a1512ad73b4df23ce9221)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1acc47106f1a8a1512ad73b4df23ce9221"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1acb2d3ac776a97875d18ed3405319b480)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1acb2d3ac776a97875d18ed3405319b480"></a>

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1a72ecaf752823f224609c10d1ea621bb2)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a72ecaf752823f224609c10d1ea621bb2"></a>

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a12ff4be29fd0acb3557caaec94ee7d85)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a12ff4be29fd0acb3557caaec94ee7d85"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreate_1a00deecc007aa981ea2ac38bd548314e3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreate_1a00deecc007aa981ea2ac38bd548314e3"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1ac0c8c9c6ca6eb0111b17b889ee6c773d)`(FString NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac0c8c9c6ca6eb0111b17b889ee6c773d"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.

<br>
#### `public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreate_1a77c1568093d12436f97287085abaf82e)`()` <a id="structFRHAPI__PlayerOrderEntryCreate_1a77c1568093d12436f97287085abaf82e"></a>

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

<br>
