# group `RHAPI_PlayerOrderEntry` <a id="group__RHAPI__PlayerOrderEntry"></a>

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
`public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntry_1a37c9f172a892e0dd233755e8ab8f2890) | The type of entry.
`public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntry_1af27144492afcdc51a5b5f075c956dffa) | Unique Identifier for the Loot.
`public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntry_1afd00418312db369b85cb3a86ff9509f7) | true if LootId_Optional has been set to a value
`public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntry_1a73687f8fab41a507f0ef73e76175f9dd) | Quantity of Inventory.
`public int64 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntry_1a2d2d4237781c71b34c6adb8f102677b5) | Legacy version for the vendor owning the loot_id. Use `vendor_etag` instead.
`public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntry_1a879fc70c3d14a1db5d882e6f1e68a307) | true if VendorVersion_Optional has been set to a value
`public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntry_1a96404d2f2eac0f6467459d8aa7b4460c) | etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match
`public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntry_1ab4257754c991af2dd4040bf0009cbc97) | true if VendorEtag_Optional has been set to a value
`public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntry_1ac9d962191f53b6ccb641b318adb9f5cb) | List of Loot IDs for the dynamic bundle.
`public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntry_1ac3c5d9b9ae603866b22219786fddcb7f) | true if DynamicBundleLootIds_Optional has been set to a value
`public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntry_1ae0d142dad5970d2a31368fc3a8a42175) | The purchase price of the Loot. Deprecated. Use the purchase_prices field instead.
`public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntry_1ad3a9263f522644db2c88f24ee13bef1c) | true if PurchasePrice_Optional has been set to a value
`public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntry_1a7790f9a333b141c80e9e834f3182288f) | External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.
`public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a74e920f1fb01339b03e60891fe58430f) | true if ExternalTranId_Optional has been set to a value
`public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntry_1a938707e52b38bc755b29d2978883ba9c) | External item SKU for the Order Entry.
`public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntry_1a799a799b1b2b1409d57cd8c892c3b1d0) | true if ExternalItemSku_Optional has been set to a value
`public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntry_1a20b811bd0d3523aa6f061f337098c6e1) | Inventory Bucket to use for the Order Entry.
`public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntry_1ac6dab78b7e31604795d902955e00118e) | true if UseInventoryBucket_Optional has been set to a value
`public int64 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntry_1aefda5e6a2fb9599046513879d56a7600) | Player Portal Event Id for the Order Entry.
`public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntry_1ae3c442ea95674cee11512f34c42ce26d) | true if PlayerPortalEventId_Optional has been set to a value
`public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntry_1a52a01e1684a9c541cb83610703f2f766) | Unique Identifier for the Inventory.
`public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a4344068a1931c9fd603a3004bb4f9937) | true if InventoryId_Optional has been set to a value
`public int64 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntry_1afff1c2f4055aa355da450cf3460d32b0) | Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].
`public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a6456d273ba8846113370ede135cd2331) | true if LegacyInventoryId_Optional has been set to a value
`public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntry_1a52e414fe5e1451921ef42719a44d187a) | Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].
`public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a0a02f71e6df85cdabb41b27c0eb485a7) | true if ItemId_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntry_1ac2055e06ef244cfbdf933fe60c4ce5cd) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntry_1abe6698f68b08033e04e2de0b278b9de6) | true if Expires_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntry_1a5860da51422cd06767a9fc8ed702b7fd) | Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntry_1a3f081309b1a19358505ccef4784d4a29) | true if CustomData_Optional has been set to a value
`public FString `[`EntryId`](#structFRHAPI__PlayerOrderEntry_1abb0b94aa1f1fc24b5ee67639f0c2fdd0) | Unique Identifier for the Order Entry.
`public ERHAPI_PlayerOrderEntryResult `[`Result_Optional`](#structFRHAPI__PlayerOrderEntry_1ae544f7a3ee9b3a5717ffe148d06335fd) | Entry result type.
`public bool `[`Result_IsSet`](#structFRHAPI__PlayerOrderEntry_1a51f1b8ab3ddfe711d3b5ce3baba4f11a) | true if Result_Optional has been set to a value
`public TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > `[`Details_Optional`](#structFRHAPI__PlayerOrderEntry_1ad0d38a797491aefcf72ebc1f69fd527d) | Details for the Order Entry.
`public bool `[`Details_IsSet`](#structFRHAPI__PlayerOrderEntry_1ab3ea719e706961aee4c9f2f4ecffb99b) | true if Details_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntry_1a1303a54655d608f3d47b801afdad25bc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntry_1ad7a63eb6e8abee5dafa2b840637ab086)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1af93fb1ff20bb47be74253f884c60c177)`()` | Gets the value of Type.
`public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1a4ef7488da616dda67cd85e0f90dfa2c0)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1a5f1e5871bd8d9cae5a99d03f190e28c6)`(ERHAPI_PlayerOrderEntryType NewValue)` | Sets the value of Type.
`public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1adbeaa72f4149cdadc8aa3b0907835cbc)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a36583595a8240913fc3c142c869fbeee)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a59e4a4745a93fbe708346605b4e0cabd)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a96c4186b6cec8faefe54a7fafccf82e0)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ae143afbff2722f8fdee7895e6c089638)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a13792859116c740f274650e8a846cf28)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1a0d3a1f9551fb6cd7f628193b30813c6e)`(int32 NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a1b3f431ef690f0d4399199f5966af906)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a0af86c8bd92731bdf04328285d1c3ef9)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a93067ef95ed24540c2afe3cc55daa402)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a249fd64e9c1ed977cb71cb08acbbb63d)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a3ab4ea861417364aa6ddb27e905b9183)`(int32 NewValue)` | Sets the value of Quantity.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a86ab71c59766344cf3314dc24f32255b)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntry_1af8c751930348d16219dfbdcd44468d86)`()` | Sets the value of Quantity to its default
`public inline int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1acbd1986e43876b61e53a91c0970ae174)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1aead8297df60e0a315017bcb1e8bcef6c)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ac22f1c8c988b25bbf769dc893a6b2ef7)`(const int64 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ac3ff18e0ed3d19b1593a41ba2f664e04)`(int64 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1ad9f30b01a25782293689bda6697a3420)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1aaf930a9d136cfa0ad6aa81dc5d807e24)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ab58b92a753d4a2fdb659345425939d38)`(int64 NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntry_1ab9b080bbb6201eeab73e64ca219c825e)`() const` | Returns true if VendorVersion_Optional is set and matches the default value.
`public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntry_1af18c13a79f10c83cf8cf909037a40d13)`()` | Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.
`public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a74caeac6aba2b540c0ca70e06e2f41cb)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a400bbf6cb7f7eb314b04f4874dec1216)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1abc0ddfe0a687a67d78425f8d87ee29aa)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a58864651f695d1c391a069f931d04fc7)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1acabeccd97bba268e812957eaedb1216e)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1aeb0762c0216dc528ed2dc536909293c3)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a08b0810ddd3cebd462cba26734f9b62f)`(FString NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a4dded4ff994c11e1c799c4b5ad140401)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a9a0420165577c7b906e37b951bef7f22)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1ae9dda53c4610b08fddb34f2cfe0de879)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2ec0c2bc642c1470c8a6e01fa5c929f5)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a473dc58dc6587eca97d25d01b5a5e165)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1ad495eb8b431836d109af62f1d1557734)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a4e52a870e2efba1571d503c406ffe4b9)`(TArray< int32 > NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1afe68f43c0ae9d31426e5236b2e3b73d6)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1afeb4efbbfaa9980618d303662803e325)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a58048a1b3e8e720e36e3dea5fd0bad67)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a660c5b9eadbcf3bface57ff655dcaa63)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1a4115bc32934c1fe7db968f2f22f7fbd4)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1a1e75af28c5166b5c130d96ea7d504342)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a35e0122d012e925b85592aebc2a14eab)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1aed1c98477a72f70e6b39b0aea0d76483)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1ae4602d52d53cf34168a8bc61ff5d9361)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1ad710b8b43e64e563828949c46fd4b9ed)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a256df8b376732391c16565393083c1f3)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a220576ac5b32d929df6dc194af508e87)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aa97240bf3f3e8674b30ab4f024af8f5f)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a7bcabd6e59cea91c164adb248ad29305)`(FString NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a86c989a7caf74d70ecadbea64975954a)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1aac98283b14454dd958d9e00853f27fa0)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a5caebf593033675ce76421114ebc7249)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1adbc73633887c8f5beb4d5fd415be4b19)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1abdb1b9bc98aeb8c25ca3e6c78f535563)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1a3c86d6ae3529df0d08598166e12b3a01)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1af3e2edb68f3cdb8f9907e1715c0d6a3b)`(FString NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1af2d9b276c5cd45d45dfabf0ba3d3f52c)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a204feaa82bdd6c2b8dabc618da1b9a42)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a0f734beaf5c365e15a14b74ec82a0d88)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a1551a4d915e88701c893193c51928e14)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1ac88e73a484482896276d91baca133479)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1ae606b531d3ab19a0b3a02e662cc4a990)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a5e27fa6a4aab12f527aa9c6276280691)`(ERHAPI_InventoryBucket NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1aeffd6ea8125edecbb6a98c078bd00826)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a414d764ae734d8538e8cf6301174bd9a)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a70ffa756ae9e80287c00589c33ad60e1)`(const int64 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a3ea6eb86b7773e876f61c0aa2f266fd7)`(int64 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aff75629decc9c9686f46ec4a7730e148)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1adae84c8294eb2dc4cb752eab07dda012)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a4286b389329d54f2a0158161c2ad4593)`(int64 NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a0ef83ed4fb13f902e26bb4efce9c4303)`() const` | Returns true if PlayerPortalEventId_Optional is set and matches the default value.
`public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a47c41382298220a7528123b8fc6742b9)`()` | Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1ac9fede46fdd9035921d5d70ca310bbf7)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a6b930684c51c49061d9536ce0247cf3d)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a70406ca18976e21abda6e728aaf64df8)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a73772840636cbe0c7363934f69c9e502)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a933e99c13d102b36c6004d034f799c13)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1add6dcbd92d2c0454da1c852caed6baf4)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1af2e76dd3c6a7e1ff10dc97ca16fd1f61)`(FGuid NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ab3b686fdc394ac7c6d3a7fe9b69872b8)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a6ccbba32959900780ffa18fa3d808433)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a57163093778dda9fb49743362746d032)`(const int64 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a134c39a352e5d7bb15a50febf53e6f83)`(int64 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1af9d72898672515adbbde1ac1f1f4d382)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a4bb2d2bfa208c9ae7ab341b7568b068a)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad7da2b84ff24468c23427161330caacf)`(int64 NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1ac808088c9eeeee7894c5c0cade3c9ff6)`() const` | Returns true if LegacyInventoryId_Optional is set and matches the default value.
`public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a80846e6e79fb29128c25cd5b62713a8d)`()` | Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.
`public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a3bdf3ebe220fefbd05b806520a788f05)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a13fe98ec07a1c073ecafe3a2614e6e65)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a5538e5ce666bd7015d8dc3155d3a0bf2)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a28a395b17d5811c27c708263e2a8dc68)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ae851d8e7e1c0d0908ac597e7cbcee26f)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a216c55487fb5c1407033291c3e94d4c8)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1abbe6a5d0f962a3437cbb7e3c0996deea)`(int32 NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1afafe7941ee4f8c1ba75913e7bccacd90)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntry_1ad5816fde2e23de11f7264dcfe1d6316e)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1aa9e19607e3e73d44d8cb86d9334f7eac)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1affb6dee7edc0040490ada6aea28721e7)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a8acad92faf486983cba10ba09b918ee1)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a637ab431c4103401d2b7340e4f7c6cf8)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1ac49e5ef3019bdcaf471153572a354d28)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1ab953e4392fc2937a1e663e035d1a5a77)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1a7d50918b0064f88421a4028901c8fdcf)`(FDateTime NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a1de473bae6f8bd843b5ef1ad1d5ccd3b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a90ff4c7a9857e5805e7ac38fa206ede6)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a5bdf95e196bda80ec273eb5f2c9d499e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a38c1fed0ba760bffc5cd8c90f50759b7)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1a4230342e92bb25fea6315dc9370a3f8f)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1a108f177f47d9ee0d93baf6610a284707)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1ad9aeb43279d3f6a52880206e6c68b2bc)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1a1e5d5e7b825570afb662ee33ddaf8e9d)`()` | Gets the value of EntryId.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1ad7439831e786838910a9c10002897969)`() const` | Gets the value of EntryId.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1a8cdbff09316ba01eb8b3b4b0e9e8b38a)`(FString NewValue)` | Sets the value of EntryId.
`public inline ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a26624058af5e16fe1f312f8cdb5c4041)`()` | Gets the value of Result_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a48ca58444fc8eb4e363e8412c0735ec5)`() const` | Gets the value of Result_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a0a7bb45ae2fbcb88c314ae3d72cb91a7)`(const ERHAPI_PlayerOrderEntryResult & DefaultValue) const` | Gets the value of Result_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1aab0ff9878d55188c46aeb50951e7743f)`(ERHAPI_PlayerOrderEntryResult & OutValue) const` | Fills OutValue with the value of Result_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a4d1ae30fab19768d1d9bca0d439c2f38)`()` | Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a220d6be84f9c73e91d696ee3b14090e8)`() const` | Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1aee883cf110523558039a9b3645817a81)`(ERHAPI_PlayerOrderEntryResult NewValue)` | Sets the value of Result_Optional and also sets Result_IsSet to true.
`public inline void `[`ClearResult`](#structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f)`()` | Clears the value of Result_Optional and sets Result_IsSet to false.
`public inline TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1a2c66f35c3ed2c558cc4d2e5394a8a793)`()` | Gets the value of Details_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1ac29d10780822dd2bab54b12716061f32)`() const` | Gets the value of Details_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1af726e71b7ad48ad94dc6ce16b2e398af)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & DefaultValue) const` | Gets the value of Details_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1acd22460bab7ca52aa6609b54384a74b2)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & OutValue) const` | Fills OutValue with the value of Details_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a9f785a715382e0b2be7639a15e584613)`()` | Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a9332022056f0c03af9c8f38e5ced6417)`() const` | Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1ae66fd15d79f4c954382854d192b60d7e)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > NewValue)` | Sets the value of Details_Optional and also sets Details_IsSet to true.
`public inline void `[`ClearDetails`](#structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38)`()` | Clears the value of Details_Optional and sets Details_IsSet to false.

### Members

#### `public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntry_1a37c9f172a892e0dd233755e8ab8f2890) <a id="structFRHAPI__PlayerOrderEntry_1a37c9f172a892e0dd233755e8ab8f2890"></a>

The type of entry.

#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntry_1af27144492afcdc51a5b5f075c956dffa) <a id="structFRHAPI__PlayerOrderEntry_1af27144492afcdc51a5b5f075c956dffa"></a>

Unique Identifier for the Loot.

#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntry_1afd00418312db369b85cb3a86ff9509f7) <a id="structFRHAPI__PlayerOrderEntry_1afd00418312db369b85cb3a86ff9509f7"></a>

true if LootId_Optional has been set to a value

#### `public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntry_1a73687f8fab41a507f0ef73e76175f9dd) <a id="structFRHAPI__PlayerOrderEntry_1a73687f8fab41a507f0ef73e76175f9dd"></a>

Quantity of Inventory.

#### `public int64 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntry_1a2d2d4237781c71b34c6adb8f102677b5) <a id="structFRHAPI__PlayerOrderEntry_1a2d2d4237781c71b34c6adb8f102677b5"></a>

Legacy version for the vendor owning the loot_id. Use `vendor_etag` instead.

#### `public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntry_1a879fc70c3d14a1db5d882e6f1e68a307) <a id="structFRHAPI__PlayerOrderEntry_1a879fc70c3d14a1db5d882e6f1e68a307"></a>

true if VendorVersion_Optional has been set to a value

#### `public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntry_1a96404d2f2eac0f6467459d8aa7b4460c) <a id="structFRHAPI__PlayerOrderEntry_1a96404d2f2eac0f6467459d8aa7b4460c"></a>

etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match

#### `public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntry_1ab4257754c991af2dd4040bf0009cbc97) <a id="structFRHAPI__PlayerOrderEntry_1ab4257754c991af2dd4040bf0009cbc97"></a>

true if VendorEtag_Optional has been set to a value

#### `public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntry_1ac9d962191f53b6ccb641b318adb9f5cb) <a id="structFRHAPI__PlayerOrderEntry_1ac9d962191f53b6ccb641b318adb9f5cb"></a>

List of Loot IDs for the dynamic bundle.

#### `public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntry_1ac3c5d9b9ae603866b22219786fddcb7f) <a id="structFRHAPI__PlayerOrderEntry_1ac3c5d9b9ae603866b22219786fddcb7f"></a>

true if DynamicBundleLootIds_Optional has been set to a value

#### `public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntry_1ae0d142dad5970d2a31368fc3a8a42175) <a id="structFRHAPI__PlayerOrderEntry_1ae0d142dad5970d2a31368fc3a8a42175"></a>

The purchase price of the Loot. Deprecated. Use the purchase_prices field instead.

#### `public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntry_1ad3a9263f522644db2c88f24ee13bef1c) <a id="structFRHAPI__PlayerOrderEntry_1ad3a9263f522644db2c88f24ee13bef1c"></a>

true if PurchasePrice_Optional has been set to a value

#### `public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntry_1a7790f9a333b141c80e9e834f3182288f) <a id="structFRHAPI__PlayerOrderEntry_1a7790f9a333b141c80e9e834f3182288f"></a>

External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.

#### `public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a74e920f1fb01339b03e60891fe58430f) <a id="structFRHAPI__PlayerOrderEntry_1a74e920f1fb01339b03e60891fe58430f"></a>

true if ExternalTranId_Optional has been set to a value

#### `public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntry_1a938707e52b38bc755b29d2978883ba9c) <a id="structFRHAPI__PlayerOrderEntry_1a938707e52b38bc755b29d2978883ba9c"></a>

External item SKU for the Order Entry.

#### `public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntry_1a799a799b1b2b1409d57cd8c892c3b1d0) <a id="structFRHAPI__PlayerOrderEntry_1a799a799b1b2b1409d57cd8c892c3b1d0"></a>

true if ExternalItemSku_Optional has been set to a value

#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntry_1a20b811bd0d3523aa6f061f337098c6e1) <a id="structFRHAPI__PlayerOrderEntry_1a20b811bd0d3523aa6f061f337098c6e1"></a>

Inventory Bucket to use for the Order Entry.

#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntry_1ac6dab78b7e31604795d902955e00118e) <a id="structFRHAPI__PlayerOrderEntry_1ac6dab78b7e31604795d902955e00118e"></a>

true if UseInventoryBucket_Optional has been set to a value

#### `public int64 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntry_1aefda5e6a2fb9599046513879d56a7600) <a id="structFRHAPI__PlayerOrderEntry_1aefda5e6a2fb9599046513879d56a7600"></a>

Player Portal Event Id for the Order Entry.

#### `public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntry_1ae3c442ea95674cee11512f34c42ce26d) <a id="structFRHAPI__PlayerOrderEntry_1ae3c442ea95674cee11512f34c42ce26d"></a>

true if PlayerPortalEventId_Optional has been set to a value

#### `public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntry_1a52a01e1684a9c541cb83610703f2f766) <a id="structFRHAPI__PlayerOrderEntry_1a52a01e1684a9c541cb83610703f2f766"></a>

Unique Identifier for the Inventory.

#### `public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a4344068a1931c9fd603a3004bb4f9937) <a id="structFRHAPI__PlayerOrderEntry_1a4344068a1931c9fd603a3004bb4f9937"></a>

true if InventoryId_Optional has been set to a value

#### `public int64 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntry_1afff1c2f4055aa355da450cf3460d32b0) <a id="structFRHAPI__PlayerOrderEntry_1afff1c2f4055aa355da450cf3460d32b0"></a>

Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].

#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a6456d273ba8846113370ede135cd2331) <a id="structFRHAPI__PlayerOrderEntry_1a6456d273ba8846113370ede135cd2331"></a>

true if LegacyInventoryId_Optional has been set to a value

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntry_1a52e414fe5e1451921ef42719a44d187a) <a id="structFRHAPI__PlayerOrderEntry_1a52e414fe5e1451921ef42719a44d187a"></a>

Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntry_1a0a02f71e6df85cdabb41b27c0eb485a7) <a id="structFRHAPI__PlayerOrderEntry_1a0a02f71e6df85cdabb41b27c0eb485a7"></a>

true if ItemId_Optional has been set to a value

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntry_1ac2055e06ef244cfbdf933fe60c4ce5cd) <a id="structFRHAPI__PlayerOrderEntry_1ac2055e06ef244cfbdf933fe60c4ce5cd"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntry_1abe6698f68b08033e04e2de0b278b9de6) <a id="structFRHAPI__PlayerOrderEntry_1abe6698f68b08033e04e2de0b278b9de6"></a>

true if Expires_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntry_1a5860da51422cd06767a9fc8ed702b7fd) <a id="structFRHAPI__PlayerOrderEntry_1a5860da51422cd06767a9fc8ed702b7fd"></a>

Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntry_1a3f081309b1a19358505ccef4784d4a29) <a id="structFRHAPI__PlayerOrderEntry_1a3f081309b1a19358505ccef4784d4a29"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`EntryId`](#structFRHAPI__PlayerOrderEntry_1abb0b94aa1f1fc24b5ee67639f0c2fdd0) <a id="structFRHAPI__PlayerOrderEntry_1abb0b94aa1f1fc24b5ee67639f0c2fdd0"></a>

Unique Identifier for the Order Entry.

#### `public ERHAPI_PlayerOrderEntryResult `[`Result_Optional`](#structFRHAPI__PlayerOrderEntry_1ae544f7a3ee9b3a5717ffe148d06335fd) <a id="structFRHAPI__PlayerOrderEntry_1ae544f7a3ee9b3a5717ffe148d06335fd"></a>

Entry result type.

#### `public bool `[`Result_IsSet`](#structFRHAPI__PlayerOrderEntry_1a51f1b8ab3ddfe711d3b5ce3baba4f11a) <a id="structFRHAPI__PlayerOrderEntry_1a51f1b8ab3ddfe711d3b5ce3baba4f11a"></a>

true if Result_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > `[`Details_Optional`](#structFRHAPI__PlayerOrderEntry_1ad0d38a797491aefcf72ebc1f69fd527d) <a id="structFRHAPI__PlayerOrderEntry_1ad0d38a797491aefcf72ebc1f69fd527d"></a>

Details for the Order Entry.

#### `public bool `[`Details_IsSet`](#structFRHAPI__PlayerOrderEntry_1ab3ea719e706961aee4c9f2f4ecffb99b) <a id="structFRHAPI__PlayerOrderEntry_1ab3ea719e706961aee4c9f2f4ecffb99b"></a>

true if Details_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntry_1a1303a54655d608f3d47b801afdad25bc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderEntry_1a1303a54655d608f3d47b801afdad25bc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntry_1ad7a63eb6e8abee5dafa2b840637ab086)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerOrderEntry_1ad7a63eb6e8abee5dafa2b840637ab086"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1af93fb1ff20bb47be74253f884c60c177)`()` <a id="structFRHAPI__PlayerOrderEntry_1af93fb1ff20bb47be74253f884c60c177"></a>

Gets the value of Type.

#### `public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntry_1a4ef7488da616dda67cd85e0f90dfa2c0)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a4ef7488da616dda67cd85e0f90dfa2c0"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntry_1a5f1e5871bd8d9cae5a99d03f190e28c6)`(ERHAPI_PlayerOrderEntryType NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a5f1e5871bd8d9cae5a99d03f190e28c6"></a>

Sets the value of Type.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1adbeaa72f4149cdadc8aa3b0907835cbc)`()` <a id="structFRHAPI__PlayerOrderEntry_1adbeaa72f4149cdadc8aa3b0907835cbc"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a36583595a8240913fc3c142c869fbeee)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a36583595a8240913fc3c142c869fbeee"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a59e4a4745a93fbe708346605b4e0cabd)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a59e4a4745a93fbe708346605b4e0cabd"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntry_1a96c4186b6cec8faefe54a7fafccf82e0)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a96c4186b6cec8faefe54a7fafccf82e0"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ae143afbff2722f8fdee7895e6c089638)`()` <a id="structFRHAPI__PlayerOrderEntry_1ae143afbff2722f8fdee7895e6c089638"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a13792859116c740f274650e8a846cf28)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a13792859116c740f274650e8a846cf28"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntry_1a0d3a1f9551fb6cd7f628193b30813c6e)`(int32 NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a0d3a1f9551fb6cd7f628193b30813c6e"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced)`()` <a id="structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a1b3f431ef690f0d4399199f5966af906)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a1b3f431ef690f0d4399199f5966af906"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a0af86c8bd92731bdf04328285d1c3ef9)`()` <a id="structFRHAPI__PlayerOrderEntry_1a0af86c8bd92731bdf04328285d1c3ef9"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a93067ef95ed24540c2afe3cc55daa402)`()` <a id="structFRHAPI__PlayerOrderEntry_1a93067ef95ed24540c2afe3cc55daa402"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntry_1a249fd64e9c1ed977cb71cb08acbbb63d)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a249fd64e9c1ed977cb71cb08acbbb63d"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntry_1a3ab4ea861417364aa6ddb27e905b9183)`(int32 NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a3ab4ea861417364aa6ddb27e905b9183"></a>

Sets the value of Quantity.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a86ab71c59766344cf3314dc24f32255b)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a86ab71c59766344cf3314dc24f32255b"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntry_1af8c751930348d16219dfbdcd44468d86)`()` <a id="structFRHAPI__PlayerOrderEntry_1af8c751930348d16219dfbdcd44468d86"></a>

Sets the value of Quantity to its default

#### `public inline int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1acbd1986e43876b61e53a91c0970ae174)`()` <a id="structFRHAPI__PlayerOrderEntry_1acbd1986e43876b61e53a91c0970ae174"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1aead8297df60e0a315017bcb1e8bcef6c)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aead8297df60e0a315017bcb1e8bcef6c"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ac22f1c8c988b25bbf769dc893a6b2ef7)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ac22f1c8c988b25bbf769dc893a6b2ef7"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ac3ff18e0ed3d19b1593a41ba2f664e04)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ac3ff18e0ed3d19b1593a41ba2f664e04"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1ad9f30b01a25782293689bda6697a3420)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad9f30b01a25782293689bda6697a3420"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int64 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntry_1aaf930a9d136cfa0ad6aa81dc5d807e24)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aaf930a9d136cfa0ad6aa81dc5d807e24"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntry_1ab58b92a753d4a2fdb659345425939d38)`(int64 NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ab58b92a753d4a2fdb659345425939d38"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a)`()` <a id="structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

#### `public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntry_1ab9b080bbb6201eeab73e64ca219c825e)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ab9b080bbb6201eeab73e64ca219c825e"></a>

Returns true if VendorVersion_Optional is set and matches the default value.

#### `public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntry_1af18c13a79f10c83cf8cf909037a40d13)`()` <a id="structFRHAPI__PlayerOrderEntry_1af18c13a79f10c83cf8cf909037a40d13"></a>

Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.

#### `public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a74caeac6aba2b540c0ca70e06e2f41cb)`()` <a id="structFRHAPI__PlayerOrderEntry_1a74caeac6aba2b540c0ca70e06e2f41cb"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a400bbf6cb7f7eb314b04f4874dec1216)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a400bbf6cb7f7eb314b04f4874dec1216"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1abc0ddfe0a687a67d78425f8d87ee29aa)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1abc0ddfe0a687a67d78425f8d87ee29aa"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a58864651f695d1c391a069f931d04fc7)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a58864651f695d1c391a069f931d04fc7"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1acabeccd97bba268e812957eaedb1216e)`()` <a id="structFRHAPI__PlayerOrderEntry_1acabeccd97bba268e812957eaedb1216e"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntry_1aeb0762c0216dc528ed2dc536909293c3)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aeb0762c0216dc528ed2dc536909293c3"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a08b0810ddd3cebd462cba26734f9b62f)`(FString NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a08b0810ddd3cebd462cba26734f9b62f"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

#### `public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a4dded4ff994c11e1c799c4b5ad140401)`()` <a id="structFRHAPI__PlayerOrderEntry_1a4dded4ff994c11e1c799c4b5ad140401"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a9a0420165577c7b906e37b951bef7f22)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a9a0420165577c7b906e37b951bef7f22"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1ae9dda53c4610b08fddb34f2cfe0de879)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ae9dda53c4610b08fddb34f2cfe0de879"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2ec0c2bc642c1470c8a6e01fa5c929f5)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a2ec0c2bc642c1470c8a6e01fa5c929f5"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1a473dc58dc6587eca97d25d01b5a5e165)`()` <a id="structFRHAPI__PlayerOrderEntry_1a473dc58dc6587eca97d25d01b5a5e165"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntry_1ad495eb8b431836d109af62f1d1557734)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad495eb8b431836d109af62f1d1557734"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a4e52a870e2efba1571d503c406ffe4b9)`(TArray< int32 > NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a4e52a870e2efba1571d503c406ffe4b9"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1afe68f43c0ae9d31426e5236b2e3b73d6)`()` <a id="structFRHAPI__PlayerOrderEntry_1afe68f43c0ae9d31426e5236b2e3b73d6"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1afeb4efbbfaa9980618d303662803e325)`() const` <a id="structFRHAPI__PlayerOrderEntry_1afeb4efbbfaa9980618d303662803e325"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a58048a1b3e8e720e36e3dea5fd0bad67)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a58048a1b3e8e720e36e3dea5fd0bad67"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a660c5b9eadbcf3bface57ff655dcaa63)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a660c5b9eadbcf3bface57ff655dcaa63"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1a4115bc32934c1fe7db968f2f22f7fbd4)`()` <a id="structFRHAPI__PlayerOrderEntry_1a4115bc32934c1fe7db968f2f22f7fbd4"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntry_1a1e75af28c5166b5c130d96ea7d504342)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a1e75af28c5166b5c130d96ea7d504342"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a35e0122d012e925b85592aebc2a14eab)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a35e0122d012e925b85592aebc2a14eab"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c)`()` <a id="structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

#### `public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1aed1c98477a72f70e6b39b0aea0d76483)`()` <a id="structFRHAPI__PlayerOrderEntry_1aed1c98477a72f70e6b39b0aea0d76483"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1ae4602d52d53cf34168a8bc61ff5d9361)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ae4602d52d53cf34168a8bc61ff5d9361"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1ad710b8b43e64e563828949c46fd4b9ed)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1ad710b8b43e64e563828949c46fd4b9ed"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a256df8b376732391c16565393083c1f3)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a256df8b376732391c16565393083c1f3"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a220576ac5b32d929df6dc194af508e87)`()` <a id="structFRHAPI__PlayerOrderEntry_1a220576ac5b32d929df6dc194af508e87"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aa97240bf3f3e8674b30ab4f024af8f5f)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aa97240bf3f3e8674b30ab4f024af8f5f"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a7bcabd6e59cea91c164adb248ad29305)`(FString NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a7bcabd6e59cea91c164adb248ad29305"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

#### `public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a86c989a7caf74d70ecadbea64975954a)`()` <a id="structFRHAPI__PlayerOrderEntry_1a86c989a7caf74d70ecadbea64975954a"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1aac98283b14454dd958d9e00853f27fa0)`() const` <a id="structFRHAPI__PlayerOrderEntry_1aac98283b14454dd958d9e00853f27fa0"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1a5caebf593033675ce76421114ebc7249)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a5caebf593033675ce76421114ebc7249"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1adbc73633887c8f5beb4d5fd415be4b19)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1adbc73633887c8f5beb4d5fd415be4b19"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1abdb1b9bc98aeb8c25ca3e6c78f535563)`()` <a id="structFRHAPI__PlayerOrderEntry_1abdb1b9bc98aeb8c25ca3e6c78f535563"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntry_1a3c86d6ae3529df0d08598166e12b3a01)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a3c86d6ae3529df0d08598166e12b3a01"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1af3e2edb68f3cdb8f9907e1715c0d6a3b)`(FString NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1af3e2edb68f3cdb8f9907e1715c0d6a3b"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255)`()` <a id="structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

#### `public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1af2d9b276c5cd45d45dfabf0ba3d3f52c)`()` <a id="structFRHAPI__PlayerOrderEntry_1af2d9b276c5cd45d45dfabf0ba3d3f52c"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a204feaa82bdd6c2b8dabc618da1b9a42)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a204feaa82bdd6c2b8dabc618da1b9a42"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a0f734beaf5c365e15a14b74ec82a0d88)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a0f734beaf5c365e15a14b74ec82a0d88"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a1551a4d915e88701c893193c51928e14)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a1551a4d915e88701c893193c51928e14"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1ac88e73a484482896276d91baca133479)`()` <a id="structFRHAPI__PlayerOrderEntry_1ac88e73a484482896276d91baca133479"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntry_1ae606b531d3ab19a0b3a02e662cc4a990)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ae606b531d3ab19a0b3a02e662cc4a990"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a5e27fa6a4aab12f527aa9c6276280691)`(ERHAPI_InventoryBucket NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a5e27fa6a4aab12f527aa9c6276280691"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c)`()` <a id="structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1aeffd6ea8125edecbb6a98c078bd00826)`()` <a id="structFRHAPI__PlayerOrderEntry_1aeffd6ea8125edecbb6a98c078bd00826"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a414d764ae734d8538e8cf6301174bd9a)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a414d764ae734d8538e8cf6301174bd9a"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a70ffa756ae9e80287c00589c33ad60e1)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a70ffa756ae9e80287c00589c33ad60e1"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a3ea6eb86b7773e876f61c0aa2f266fd7)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a3ea6eb86b7773e876f61c0aa2f266fd7"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1aff75629decc9c9686f46ec4a7730e148)`()` <a id="structFRHAPI__PlayerOrderEntry_1aff75629decc9c9686f46ec4a7730e148"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int64 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntry_1adae84c8294eb2dc4cb752eab07dda012)`() const` <a id="structFRHAPI__PlayerOrderEntry_1adae84c8294eb2dc4cb752eab07dda012"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1a4286b389329d54f2a0158161c2ad4593)`(int64 NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a4286b389329d54f2a0158161c2ad4593"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20)`()` <a id="structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

#### `public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1a0ef83ed4fb13f902e26bb4efce9c4303)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a0ef83ed4fb13f902e26bb4efce9c4303"></a>

Returns true if PlayerPortalEventId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a47c41382298220a7528123b8fc6742b9)`()` <a id="structFRHAPI__PlayerOrderEntry_1a47c41382298220a7528123b8fc6742b9"></a>

Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.

#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1ac9fede46fdd9035921d5d70ca310bbf7)`()` <a id="structFRHAPI__PlayerOrderEntry_1ac9fede46fdd9035921d5d70ca310bbf7"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a6b930684c51c49061d9536ce0247cf3d)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a6b930684c51c49061d9536ce0247cf3d"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a70406ca18976e21abda6e728aaf64df8)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a70406ca18976e21abda6e728aaf64df8"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntry_1a73772840636cbe0c7363934f69c9e502)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a73772840636cbe0c7363934f69c9e502"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a933e99c13d102b36c6004d034f799c13)`()` <a id="structFRHAPI__PlayerOrderEntry_1a933e99c13d102b36c6004d034f799c13"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1add6dcbd92d2c0454da1c852caed6baf4)`() const` <a id="structFRHAPI__PlayerOrderEntry_1add6dcbd92d2c0454da1c852caed6baf4"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntry_1af2e76dd3c6a7e1ff10dc97ca16fd1f61)`(FGuid NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1af2e76dd3c6a7e1ff10dc97ca16fd1f61"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

#### `public inline int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ab3b686fdc394ac7c6d3a7fe9b69872b8)`()` <a id="structFRHAPI__PlayerOrderEntry_1ab3b686fdc394ac7c6d3a7fe9b69872b8"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a6ccbba32959900780ffa18fa3d808433)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a6ccbba32959900780ffa18fa3d808433"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int64 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a57163093778dda9fb49743362746d032)`(const int64 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a57163093778dda9fb49743362746d032"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a134c39a352e5d7bb15a50febf53e6f83)`(int64 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a134c39a352e5d7bb15a50febf53e6f83"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1af9d72898672515adbbde1ac1f1f4d382)`()` <a id="structFRHAPI__PlayerOrderEntry_1af9d72898672515adbbde1ac1f1f4d382"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int64 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a4bb2d2bfa208c9ae7ab341b7568b068a)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a4bb2d2bfa208c9ae7ab341b7568b068a"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1ad7da2b84ff24468c23427161330caacf)`(int64 NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ad7da2b84ff24468c23427161330caacf"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1ac808088c9eeeee7894c5c0cade3c9ff6)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac808088c9eeeee7894c5c0cade3c9ff6"></a>

Returns true if LegacyInventoryId_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntry_1a80846e6e79fb29128c25cd5b62713a8d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a80846e6e79fb29128c25cd5b62713a8d"></a>

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a3bdf3ebe220fefbd05b806520a788f05)`()` <a id="structFRHAPI__PlayerOrderEntry_1a3bdf3ebe220fefbd05b806520a788f05"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a13fe98ec07a1c073ecafe3a2614e6e65)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a13fe98ec07a1c073ecafe3a2614e6e65"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a5538e5ce666bd7015d8dc3155d3a0bf2)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a5538e5ce666bd7015d8dc3155d3a0bf2"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntry_1a28a395b17d5811c27c708263e2a8dc68)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a28a395b17d5811c27c708263e2a8dc68"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1ae851d8e7e1c0d0908ac597e7cbcee26f)`()` <a id="structFRHAPI__PlayerOrderEntry_1ae851d8e7e1c0d0908ac597e7cbcee26f"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntry_1a216c55487fb5c1407033291c3e94d4c8)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a216c55487fb5c1407033291c3e94d4c8"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntry_1abbe6a5d0f962a3437cbb7e3c0996deea)`(int32 NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1abbe6a5d0f962a3437cbb7e3c0996deea"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb)`()` <a id="structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntry_1afafe7941ee4f8c1ba75913e7bccacd90)`() const` <a id="structFRHAPI__PlayerOrderEntry_1afafe7941ee4f8c1ba75913e7bccacd90"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntry_1ad5816fde2e23de11f7264dcfe1d6316e)`()` <a id="structFRHAPI__PlayerOrderEntry_1ad5816fde2e23de11f7264dcfe1d6316e"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1aa9e19607e3e73d44d8cb86d9334f7eac)`()` <a id="structFRHAPI__PlayerOrderEntry_1aa9e19607e3e73d44d8cb86d9334f7eac"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1affb6dee7edc0040490ada6aea28721e7)`() const` <a id="structFRHAPI__PlayerOrderEntry_1affb6dee7edc0040490ada6aea28721e7"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a8acad92faf486983cba10ba09b918ee1)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a8acad92faf486983cba10ba09b918ee1"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntry_1a637ab431c4103401d2b7340e4f7c6cf8)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a637ab431c4103401d2b7340e4f7c6cf8"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1ac49e5ef3019bdcaf471153572a354d28)`()` <a id="structFRHAPI__PlayerOrderEntry_1ac49e5ef3019bdcaf471153572a354d28"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntry_1ab953e4392fc2937a1e663e035d1a5a77)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ab953e4392fc2937a1e663e035d1a5a77"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntry_1a7d50918b0064f88421a4028901c8fdcf)`(FDateTime NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a7d50918b0064f88421a4028901c8fdcf"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498)`()` <a id="structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a1de473bae6f8bd843b5ef1ad1d5ccd3b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a1de473bae6f8bd843b5ef1ad1d5ccd3b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a90ff4c7a9857e5805e7ac38fa206ede6)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a90ff4c7a9857e5805e7ac38fa206ede6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a5bdf95e196bda80ec273eb5f2c9d499e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a5bdf95e196bda80ec273eb5f2c9d499e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntry_1a38c1fed0ba760bffc5cd8c90f50759b7)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a38c1fed0ba760bffc5cd8c90f50759b7"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1a4230342e92bb25fea6315dc9370a3f8f)`()` <a id="structFRHAPI__PlayerOrderEntry_1a4230342e92bb25fea6315dc9370a3f8f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntry_1a108f177f47d9ee0d93baf6610a284707)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a108f177f47d9ee0d93baf6610a284707"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntry_1ad9aeb43279d3f6a52880206e6c68b2bc)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ad9aeb43279d3f6a52880206e6c68b2bc"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b)`()` <a id="structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1a1e5d5e7b825570afb662ee33ddaf8e9d)`()` <a id="structFRHAPI__PlayerOrderEntry_1a1e5d5e7b825570afb662ee33ddaf8e9d"></a>

Gets the value of EntryId.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntry_1ad7439831e786838910a9c10002897969)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ad7439831e786838910a9c10002897969"></a>

Gets the value of EntryId.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntry_1a8cdbff09316ba01eb8b3b4b0e9e8b38a)`(FString NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1a8cdbff09316ba01eb8b3b4b0e9e8b38a"></a>

Sets the value of EntryId.

#### `public inline ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a26624058af5e16fe1f312f8cdb5c4041)`()` <a id="structFRHAPI__PlayerOrderEntry_1a26624058af5e16fe1f312f8cdb5c4041"></a>

Gets the value of Result_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a48ca58444fc8eb4e363e8412c0735ec5)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a48ca58444fc8eb4e363e8412c0735ec5"></a>

Gets the value of Result_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerOrderEntryResult & `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1a0a7bb45ae2fbcb88c314ae3d72cb91a7)`(const ERHAPI_PlayerOrderEntryResult & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1a0a7bb45ae2fbcb88c314ae3d72cb91a7"></a>

Gets the value of Result_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetResult`](#structFRHAPI__PlayerOrderEntry_1aab0ff9878d55188c46aeb50951e7743f)`(ERHAPI_PlayerOrderEntryResult & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1aab0ff9878d55188c46aeb50951e7743f"></a>

Fills OutValue with the value of Result_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a4d1ae30fab19768d1d9bca0d439c2f38)`()` <a id="structFRHAPI__PlayerOrderEntry_1a4d1ae30fab19768d1d9bca0d439c2f38"></a>

Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlayerOrderEntryResult * `[`GetResultOrNull`](#structFRHAPI__PlayerOrderEntry_1a220d6be84f9c73e91d696ee3b14090e8)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a220d6be84f9c73e91d696ee3b14090e8"></a>

Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetResult`](#structFRHAPI__PlayerOrderEntry_1aee883cf110523558039a9b3645817a81)`(ERHAPI_PlayerOrderEntryResult NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1aee883cf110523558039a9b3645817a81"></a>

Sets the value of Result_Optional and also sets Result_IsSet to true.

#### `public inline void `[`ClearResult`](#structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f"></a>

Clears the value of Result_Optional and sets Result_IsSet to false.

#### `public inline TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1a2c66f35c3ed2c558cc4d2e5394a8a793)`()` <a id="structFRHAPI__PlayerOrderEntry_1a2c66f35c3ed2c558cc4d2e5394a8a793"></a>

Gets the value of Details_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1ac29d10780822dd2bab54b12716061f32)`() const` <a id="structFRHAPI__PlayerOrderEntry_1ac29d10780822dd2bab54b12716061f32"></a>

Gets the value of Details_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1af726e71b7ad48ad94dc6ce16b2e398af)`(const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntry_1af726e71b7ad48ad94dc6ce16b2e398af"></a>

Gets the value of Details_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDetails`](#structFRHAPI__PlayerOrderEntry_1acd22460bab7ca52aa6609b54384a74b2)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntry_1acd22460bab7ca52aa6609b54384a74b2"></a>

Fills OutValue with the value of Details_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a9f785a715382e0b2be7639a15e584613)`()` <a id="structFRHAPI__PlayerOrderEntry_1a9f785a715382e0b2be7639a15e584613"></a>

Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > * `[`GetDetailsOrNull`](#structFRHAPI__PlayerOrderEntry_1a9332022056f0c03af9c8f38e5ced6417)`() const` <a id="structFRHAPI__PlayerOrderEntry_1a9332022056f0c03af9c8f38e5ced6417"></a>

Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDetails`](#structFRHAPI__PlayerOrderEntry_1ae66fd15d79f4c954382854d192b60d7e)`(TArray< `[`FRHAPI_PlayerOrderDetail`](RHAPI_PlayerOrderDetail.md#structFRHAPI__PlayerOrderDetail)` > NewValue)` <a id="structFRHAPI__PlayerOrderEntry_1ae66fd15d79f4c954382854d192b60d7e"></a>

Sets the value of Details_Optional and also sets Details_IsSet to true.

#### `public inline void `[`ClearDetails`](#structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38)`()` <a id="structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38"></a>

Clears the value of Details_Optional and sets Details_IsSet to false.

