# group `RHAPI_Catalog` <a id="group__RHAPI__Catalog"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Catalog`](#structFRHAPI__Catalog) | Full list of all loaded objects for the catalog. Organized in a normalized model.

## struct `FRHAPI_Catalog` <a id="structFRHAPI__Catalog"></a>

```
struct FRHAPI_Catalog
  : public FRHAPI_Model
```

Full list of all loaded objects for the catalog. Organized in a normalized model.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` `[`XpTables_Optional`](#structFRHAPI__Catalog_1af4f0cd76a893a7e28a5434d8bcd18d23) | The XP Tables.
`public bool `[`XpTables_IsSet`](#structFRHAPI__Catalog_1af90b7e5ba57c9a0494cebca385d57554) | true if XpTables_Optional has been set to a value
`public `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` `[`PortalUseRulesets_Optional`](#structFRHAPI__Catalog_1a5c1bc6fb261f498f6a9cb2b53678ada7) | The Portal Use Rulesets. Use Inventory Bucket Use Rule Sets instead.
`public bool `[`PortalUseRulesets_IsSet`](#structFRHAPI__Catalog_1aa2b91b29308df30644270d464ed59c1a) | true if PortalUseRulesets_Optional has been set to a value
`public `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` `[`InventoryBucketUseRuleSets_Optional`](#structFRHAPI__Catalog_1a9b851c0b6519aede6992d0d9bba421fe) | The rules on how to use Inventory Buckets.
`public bool `[`InventoryBucketUseRuleSets_IsSet`](#structFRHAPI__Catalog_1a0586281245ad51f50f42b97a66226541) | true if InventoryBucketUseRuleSets_Optional has been set to a value
`public `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` `[`Vendors_Optional`](#structFRHAPI__Catalog_1a1f4638b8bf02a2bf9dcd96d8371b184b) | The Vendors.
`public bool `[`Vendors_IsSet`](#structFRHAPI__Catalog_1a7825696f94603a9c682c871ea2ffdf48) | true if Vendors_Optional has been set to a value
`public `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` `[`Loot_Optional`](#structFRHAPI__Catalog_1a1de575ff599e2024bad49cc64f3c85c1) | The Loots.
`public bool `[`Loot_IsSet`](#structFRHAPI__Catalog_1aff1762bd9da5b9e4b538134c4f274458) | true if Loot_Optional has been set to a value
`public `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` `[`Items_Optional`](#structFRHAPI__Catalog_1aadceaa0da05b125011e20fff72327a47) | The Items.
`public bool `[`Items_IsSet`](#structFRHAPI__Catalog_1add54c8f6b30746e9e2fc5589e1670020) | true if Items_Optional has been set to a value
`public `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` `[`PricePoints_Optional`](#structFRHAPI__Catalog_1a509fa6f65b75105aa8d3e7abed6f22c4) | The Price Points.
`public bool `[`PricePoints_IsSet`](#structFRHAPI__Catalog_1a374717ee3e59783724b9f7626bf107b0) | true if PricePoints_Optional has been set to a value
`public `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` `[`TimeFrames_Optional`](#structFRHAPI__Catalog_1abaaeb0cae5fcc66283a5a88005569a25) | The Time Frames.
`public bool `[`TimeFrames_IsSet`](#structFRHAPI__Catalog_1a0152d227f29fbba74e728eba75f2a4b9) | true if TimeFrames_Optional has been set to a value
`public `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` `[`Skus_Optional`](#structFRHAPI__Catalog_1ad0b904c73c45e324ed314ca93dc213fb) | The Platform SKUs.
`public bool `[`Skus_IsSet`](#structFRHAPI__Catalog_1ab7c1c1bb089e8e7d18bd75da56bbc462) | true if Skus_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Catalog_1a44d0ba982a4d410b0b93ccaca10970ae) | Cache info for the Catalog.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Catalog_1af1aa2319fa555fe776de228ccaafc079) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Catalog_1a8aa802eebad07291e54446219d17ff42)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Catalog_1ae1e9ed1e399d572a268c605ade660c55)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & `[`GetXpTables`](#structFRHAPI__Catalog_1ac635831282e496fe3acfaf1ab8d1f9e2)`()` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & `[`GetXpTables`](#structFRHAPI__Catalog_1a60e04ea7190e71f1296c08cd311c4df2)`() const` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & `[`GetXpTables`](#structFRHAPI__Catalog_1ae4caeefa77d66696a058a2664d5787cf)`(const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & DefaultValue) const` | Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpTables`](#structFRHAPI__Catalog_1afd660dbad74255621245cfb47ff7547e)`(`[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & OutValue) const` | Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` * `[`GetXpTablesOrNull`](#structFRHAPI__Catalog_1acfd2589d19438af0424e3713c34439a9)`()` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` * `[`GetXpTablesOrNull`](#structFRHAPI__Catalog_1a660b4d1cda8e1f55947b8fda44676cdc)`() const` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpTables`](#structFRHAPI__Catalog_1a80bbc28788e2473c4e4f472dba8c7cb6)`(`[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` NewValue)` | Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.
`public inline void `[`ClearXpTables`](#structFRHAPI__Catalog_1a312a992dab0e537045c9cedbffdb4058)`()` | Clears the value of XpTables_Optional and sets XpTables_IsSet to false.
`public inline `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & `[`GetPortalUseRulesets`](#structFRHAPI__Catalog_1a8929eef72c02162b1088f9e1efae1aea)`()` | Gets the value of PortalUseRulesets_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & `[`GetPortalUseRulesets`](#structFRHAPI__Catalog_1a6bee3029bc9d5e1e41b0462223d93702)`() const` | Gets the value of PortalUseRulesets_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & `[`GetPortalUseRulesets`](#structFRHAPI__Catalog_1a8176e5ae0b4dfa1e3c7cadcac12c4208)`(const `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & DefaultValue) const` | Gets the value of PortalUseRulesets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUseRulesets`](#structFRHAPI__Catalog_1abe4c3f349ccf71cd92d071e711c5e3cb)`(`[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & OutValue) const` | Fills OutValue with the value of PortalUseRulesets_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` * `[`GetPortalUseRulesetsOrNull`](#structFRHAPI__Catalog_1a39474764042ef58a0055601cd8f57c27)`()` | Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` * `[`GetPortalUseRulesetsOrNull`](#structFRHAPI__Catalog_1afd9bd4263f0bfd6d45866fd0bb0a823f)`() const` | Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUseRulesets`](#structFRHAPI__Catalog_1a24ee004dabe2699f4dd789b7ee04d007)`(`[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` NewValue)` | Sets the value of PortalUseRulesets_Optional and also sets PortalUseRulesets_IsSet to true.
`public inline void `[`ClearPortalUseRulesets`](#structFRHAPI__Catalog_1a019fbe65af45baa13186e4e1f87ea585)`()` | Clears the value of PortalUseRulesets_Optional and sets PortalUseRulesets_IsSet to false.
`public inline `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & `[`GetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1a4f8c6e3a4aa03ad8e476a827bbdf80c3)`()` | Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & `[`GetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1a454b18762ee63e07051e2614905ae78a)`() const` | Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & `[`GetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1a2728ff6eba13174fd65ed76d8122ff7f)`(const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & DefaultValue) const` | Gets the value of InventoryBucketUseRuleSets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1aa62b2c49f3236e005ebf07859b607000)`(`[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & OutValue) const` | Fills OutValue with the value of InventoryBucketUseRuleSets_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` * `[`GetInventoryBucketUseRuleSetsOrNull`](#structFRHAPI__Catalog_1a698efd5d57d3ce3cad2d90c210f142d9)`()` | Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` * `[`GetInventoryBucketUseRuleSetsOrNull`](#structFRHAPI__Catalog_1aece6ee5342daf100ed3773bbfcbd5620)`() const` | Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1adb3241bd1c4e21c6dd076dcea793a764)`(`[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` NewValue)` | Sets the value of InventoryBucketUseRuleSets_Optional and also sets InventoryBucketUseRuleSets_IsSet to true.
`public inline void `[`ClearInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1a2ce7f945184d3e78b03c850dcac1d6e7)`()` | Clears the value of InventoryBucketUseRuleSets_Optional and sets InventoryBucketUseRuleSets_IsSet to false.
`public inline `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & `[`GetVendors`](#structFRHAPI__Catalog_1adfaebc84183c9989096a71f5ab5e9506)`()` | Gets the value of Vendors_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & `[`GetVendors`](#structFRHAPI__Catalog_1addb75c932c919d143c98d54a1fb357c1)`() const` | Gets the value of Vendors_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & `[`GetVendors`](#structFRHAPI__Catalog_1a996f5ebf75b7595c402726b3eda577c6)`(const `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & DefaultValue) const` | Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendors`](#structFRHAPI__Catalog_1a3207e715c63930b2dbcda2aab6cb6fbb)`(`[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & OutValue) const` | Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` * `[`GetVendorsOrNull`](#structFRHAPI__Catalog_1aceebc9b220159aa3886d34d43fc56306)`()` | Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` * `[`GetVendorsOrNull`](#structFRHAPI__Catalog_1a3203bce1de9990365a346a6072eb5fff)`() const` | Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendors`](#structFRHAPI__Catalog_1abd25107288f3a3c72277be8717ef16a8)`(`[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` NewValue)` | Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.
`public inline void `[`ClearVendors`](#structFRHAPI__Catalog_1af2e2f21c8d75068e489bac4925c03e8b)`()` | Clears the value of Vendors_Optional and sets Vendors_IsSet to false.
`public inline `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & `[`GetLoot`](#structFRHAPI__Catalog_1aacca746059cc2f775ad80731a8037e2c)`()` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & `[`GetLoot`](#structFRHAPI__Catalog_1ac4a9cc014a82f7026832671c31f52b0b)`() const` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & `[`GetLoot`](#structFRHAPI__Catalog_1a184367d546587daeda8f9865e41a7967)`(const `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & DefaultValue) const` | Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLoot`](#structFRHAPI__Catalog_1aa293cb9e3d3866c379b0e0d1493dd2b7)`(`[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & OutValue) const` | Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` * `[`GetLootOrNull`](#structFRHAPI__Catalog_1a4340c8c0e19c20efe84cffe56d996f51)`()` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` * `[`GetLootOrNull`](#structFRHAPI__Catalog_1a830ba43d6552b19b79302c7a054e497b)`() const` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLoot`](#structFRHAPI__Catalog_1afb445a15a8966c81b72c854d77bf5fc8)`(`[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true.
`public inline void `[`ClearLoot`](#structFRHAPI__Catalog_1ace1be3d5346d254d6761503a7830e988)`()` | Clears the value of Loot_Optional and sets Loot_IsSet to false.
`public inline `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & `[`GetItems`](#structFRHAPI__Catalog_1acf55ff2706872c8178267f5e7df3b131)`()` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & `[`GetItems`](#structFRHAPI__Catalog_1a9eabcc9cd56c8a39ab5490f105adf28c)`() const` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & `[`GetItems`](#structFRHAPI__Catalog_1adb287186bf4b8cd3545da0c8342e4348)`(const `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & DefaultValue) const` | Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItems`](#structFRHAPI__Catalog_1aedbde4096eb3151c6b614400b17ddadd)`(`[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & OutValue) const` | Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` * `[`GetItemsOrNull`](#structFRHAPI__Catalog_1a110054c2ba7e3c51c80572eb84ac7fad)`()` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` * `[`GetItemsOrNull`](#structFRHAPI__Catalog_1a9a9a3651a9223d73b2d89468a533d19e)`() const` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItems`](#structFRHAPI__Catalog_1a2ac5bb81f3d68d8c237e829730821bb0)`(`[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true.
`public inline void `[`ClearItems`](#structFRHAPI__Catalog_1a4113d168029b287a1f20959aebdec398)`()` | Clears the value of Items_Optional and sets Items_IsSet to false.
`public inline `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & `[`GetPricePoints`](#structFRHAPI__Catalog_1a175500e9cb7dfa7debccff4e912d5a67)`()` | Gets the value of PricePoints_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & `[`GetPricePoints`](#structFRHAPI__Catalog_1aedb2131d1fcaaf33df5d24b5f44180d6)`() const` | Gets the value of PricePoints_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & `[`GetPricePoints`](#structFRHAPI__Catalog_1a2b3448fce66d20b10b56f08f4fbc5769)`(const `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & DefaultValue) const` | Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPricePoints`](#structFRHAPI__Catalog_1ab8b870836b1bab5341c09bcaf27767fb)`(`[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & OutValue) const` | Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` * `[`GetPricePointsOrNull`](#structFRHAPI__Catalog_1a63ccc91cc51efc6cff53bc9eb58f67fa)`()` | Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` * `[`GetPricePointsOrNull`](#structFRHAPI__Catalog_1a54844133736016c2ebe9d84432b6b98e)`() const` | Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPricePoints`](#structFRHAPI__Catalog_1a0f2bd0d4e4da0e62ca240a2492b2b590)`(`[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` NewValue)` | Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.
`public inline void `[`ClearPricePoints`](#structFRHAPI__Catalog_1ab66a478aca1f7c7e14fa71ed0fe198a5)`()` | Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.
`public inline `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & `[`GetTimeFrames`](#structFRHAPI__Catalog_1a8072dd84810e1f6939b7e80accf26f91)`()` | Gets the value of TimeFrames_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & `[`GetTimeFrames`](#structFRHAPI__Catalog_1a033b3218e6f5f1d470e6d65cce14766e)`() const` | Gets the value of TimeFrames_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & `[`GetTimeFrames`](#structFRHAPI__Catalog_1a4f31c06cc9adb2319c64ff6e1ea0cdcb)`(const `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & DefaultValue) const` | Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTimeFrames`](#structFRHAPI__Catalog_1a6ed03fc9fd51968883f0cdd1507f752a)`(`[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & OutValue) const` | Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` * `[`GetTimeFramesOrNull`](#structFRHAPI__Catalog_1a92d7aac23a6c9023487c40e1bc3ebfb8)`()` | Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` * `[`GetTimeFramesOrNull`](#structFRHAPI__Catalog_1a091f3b84759ff8222a18440bb27a1ae7)`() const` | Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTimeFrames`](#structFRHAPI__Catalog_1ad437e7449a235919572299f83508c535)`(`[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` NewValue)` | Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.
`public inline void `[`ClearTimeFrames`](#structFRHAPI__Catalog_1ac3f2252f7dd6be43359b67c6a264cde5)`()` | Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.
`public inline `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & `[`GetSkus`](#structFRHAPI__Catalog_1aecd3e567a3e8505612cff0a6060ded3c)`()` | Gets the value of Skus_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & `[`GetSkus`](#structFRHAPI__Catalog_1a2ec9a13449858fe7b30ca8da6a18da71)`() const` | Gets the value of Skus_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & `[`GetSkus`](#structFRHAPI__Catalog_1a7778d38213342b764ba32de27877a87e)`(const `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & DefaultValue) const` | Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSkus`](#structFRHAPI__Catalog_1a949ae87736f8b02e0dc8b210f5872b7f)`(`[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & OutValue) const` | Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` * `[`GetSkusOrNull`](#structFRHAPI__Catalog_1a60b66383a155cce30ad54b6eb92e00f8)`()` | Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` * `[`GetSkusOrNull`](#structFRHAPI__Catalog_1a20ecb5baaedad96eff367f1605dfa2f8)`() const` | Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSkus`](#structFRHAPI__Catalog_1a8a5f9240698b22a40bb014468d74fff9)`(`[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` NewValue)` | Sets the value of Skus_Optional and also sets Skus_IsSet to true.
`public inline void `[`ClearSkus`](#structFRHAPI__Catalog_1a765461b15f5b17e1425f262afc0940a2)`()` | Clears the value of Skus_Optional and sets Skus_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Catalog_1a3bcfc74eef1b5ed8c468aa203d73505a)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Catalog_1a3767f024df63790d04bfaba39add23a6)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Catalog_1a44b14981d1b3157b786d07adbc36fb73)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Catalog_1a2e4536ef1c64c02e1f52e83e75af8f3d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Catalog_1a79154ae3e9fe9fb81a3994f93448ee43)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Catalog_1a5f40badba0c9c3e6aa0dc5cd5bacd5f8)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Catalog_1a7a3e2d4c14d4c2c99f7b0ed5c71ceef0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Catalog_1a06e23285bc21a8cbee8b3e247cfbf7a9)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

### Members

#### `public `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` `[`XpTables_Optional`](#structFRHAPI__Catalog_1af4f0cd76a893a7e28a5434d8bcd18d23) <a id="structFRHAPI__Catalog_1af4f0cd76a893a7e28a5434d8bcd18d23"></a>

The XP Tables.

#### `public bool `[`XpTables_IsSet`](#structFRHAPI__Catalog_1af90b7e5ba57c9a0494cebca385d57554) <a id="structFRHAPI__Catalog_1af90b7e5ba57c9a0494cebca385d57554"></a>

true if XpTables_Optional has been set to a value

#### `public `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` `[`PortalUseRulesets_Optional`](#structFRHAPI__Catalog_1a5c1bc6fb261f498f6a9cb2b53678ada7) <a id="structFRHAPI__Catalog_1a5c1bc6fb261f498f6a9cb2b53678ada7"></a>

The Portal Use Rulesets. Use Inventory Bucket Use Rule Sets instead.

#### `public bool `[`PortalUseRulesets_IsSet`](#structFRHAPI__Catalog_1aa2b91b29308df30644270d464ed59c1a) <a id="structFRHAPI__Catalog_1aa2b91b29308df30644270d464ed59c1a"></a>

true if PortalUseRulesets_Optional has been set to a value

#### `public `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` `[`InventoryBucketUseRuleSets_Optional`](#structFRHAPI__Catalog_1a9b851c0b6519aede6992d0d9bba421fe) <a id="structFRHAPI__Catalog_1a9b851c0b6519aede6992d0d9bba421fe"></a>

The rules on how to use Inventory Buckets.

#### `public bool `[`InventoryBucketUseRuleSets_IsSet`](#structFRHAPI__Catalog_1a0586281245ad51f50f42b97a66226541) <a id="structFRHAPI__Catalog_1a0586281245ad51f50f42b97a66226541"></a>

true if InventoryBucketUseRuleSets_Optional has been set to a value

#### `public `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` `[`Vendors_Optional`](#structFRHAPI__Catalog_1a1f4638b8bf02a2bf9dcd96d8371b184b) <a id="structFRHAPI__Catalog_1a1f4638b8bf02a2bf9dcd96d8371b184b"></a>

The Vendors.

#### `public bool `[`Vendors_IsSet`](#structFRHAPI__Catalog_1a7825696f94603a9c682c871ea2ffdf48) <a id="structFRHAPI__Catalog_1a7825696f94603a9c682c871ea2ffdf48"></a>

true if Vendors_Optional has been set to a value

#### `public `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` `[`Loot_Optional`](#structFRHAPI__Catalog_1a1de575ff599e2024bad49cc64f3c85c1) <a id="structFRHAPI__Catalog_1a1de575ff599e2024bad49cc64f3c85c1"></a>

The Loots.

#### `public bool `[`Loot_IsSet`](#structFRHAPI__Catalog_1aff1762bd9da5b9e4b538134c4f274458) <a id="structFRHAPI__Catalog_1aff1762bd9da5b9e4b538134c4f274458"></a>

true if Loot_Optional has been set to a value

#### `public `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` `[`Items_Optional`](#structFRHAPI__Catalog_1aadceaa0da05b125011e20fff72327a47) <a id="structFRHAPI__Catalog_1aadceaa0da05b125011e20fff72327a47"></a>

The Items.

#### `public bool `[`Items_IsSet`](#structFRHAPI__Catalog_1add54c8f6b30746e9e2fc5589e1670020) <a id="structFRHAPI__Catalog_1add54c8f6b30746e9e2fc5589e1670020"></a>

true if Items_Optional has been set to a value

#### `public `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` `[`PricePoints_Optional`](#structFRHAPI__Catalog_1a509fa6f65b75105aa8d3e7abed6f22c4) <a id="structFRHAPI__Catalog_1a509fa6f65b75105aa8d3e7abed6f22c4"></a>

The Price Points.

#### `public bool `[`PricePoints_IsSet`](#structFRHAPI__Catalog_1a374717ee3e59783724b9f7626bf107b0) <a id="structFRHAPI__Catalog_1a374717ee3e59783724b9f7626bf107b0"></a>

true if PricePoints_Optional has been set to a value

#### `public `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` `[`TimeFrames_Optional`](#structFRHAPI__Catalog_1abaaeb0cae5fcc66283a5a88005569a25) <a id="structFRHAPI__Catalog_1abaaeb0cae5fcc66283a5a88005569a25"></a>

The Time Frames.

#### `public bool `[`TimeFrames_IsSet`](#structFRHAPI__Catalog_1a0152d227f29fbba74e728eba75f2a4b9) <a id="structFRHAPI__Catalog_1a0152d227f29fbba74e728eba75f2a4b9"></a>

true if TimeFrames_Optional has been set to a value

#### `public `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` `[`Skus_Optional`](#structFRHAPI__Catalog_1ad0b904c73c45e324ed314ca93dc213fb) <a id="structFRHAPI__Catalog_1ad0b904c73c45e324ed314ca93dc213fb"></a>

The Platform SKUs.

#### `public bool `[`Skus_IsSet`](#structFRHAPI__Catalog_1ab7c1c1bb089e8e7d18bd75da56bbc462) <a id="structFRHAPI__Catalog_1ab7c1c1bb089e8e7d18bd75da56bbc462"></a>

true if Skus_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Catalog_1a44d0ba982a4d410b0b93ccaca10970ae) <a id="structFRHAPI__Catalog_1a44d0ba982a4d410b0b93ccaca10970ae"></a>

Cache info for the Catalog.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Catalog_1af1aa2319fa555fe776de228ccaafc079) <a id="structFRHAPI__Catalog_1af1aa2319fa555fe776de228ccaafc079"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Catalog_1a8aa802eebad07291e54446219d17ff42)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Catalog_1a8aa802eebad07291e54446219d17ff42"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Catalog_1ae1e9ed1e399d572a268c605ade660c55)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Catalog_1ae1e9ed1e399d572a268c605ade660c55"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & `[`GetXpTables`](#structFRHAPI__Catalog_1ac635831282e496fe3acfaf1ab8d1f9e2)`()` <a id="structFRHAPI__Catalog_1ac635831282e496fe3acfaf1ab8d1f9e2"></a>

Gets the value of XpTables_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & `[`GetXpTables`](#structFRHAPI__Catalog_1a60e04ea7190e71f1296c08cd311c4df2)`() const` <a id="structFRHAPI__Catalog_1a60e04ea7190e71f1296c08cd311c4df2"></a>

Gets the value of XpTables_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & `[`GetXpTables`](#structFRHAPI__Catalog_1ae4caeefa77d66696a058a2664d5787cf)`(const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1ae4caeefa77d66696a058a2664d5787cf"></a>

Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpTables`](#structFRHAPI__Catalog_1afd660dbad74255621245cfb47ff7547e)`(`[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & OutValue) const` <a id="structFRHAPI__Catalog_1afd660dbad74255621245cfb47ff7547e"></a>

Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` * `[`GetXpTablesOrNull`](#structFRHAPI__Catalog_1acfd2589d19438af0424e3713c34439a9)`()` <a id="structFRHAPI__Catalog_1acfd2589d19438af0424e3713c34439a9"></a>

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` * `[`GetXpTablesOrNull`](#structFRHAPI__Catalog_1a660b4d1cda8e1f55947b8fda44676cdc)`() const` <a id="structFRHAPI__Catalog_1a660b4d1cda8e1f55947b8fda44676cdc"></a>

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpTables`](#structFRHAPI__Catalog_1a80bbc28788e2473c4e4f472dba8c7cb6)`(`[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` NewValue)` <a id="structFRHAPI__Catalog_1a80bbc28788e2473c4e4f472dba8c7cb6"></a>

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.

#### `public inline void `[`ClearXpTables`](#structFRHAPI__Catalog_1a312a992dab0e537045c9cedbffdb4058)`()` <a id="structFRHAPI__Catalog_1a312a992dab0e537045c9cedbffdb4058"></a>

Clears the value of XpTables_Optional and sets XpTables_IsSet to false.

#### `public inline `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & `[`GetPortalUseRulesets`](#structFRHAPI__Catalog_1a8929eef72c02162b1088f9e1efae1aea)`()` <a id="structFRHAPI__Catalog_1a8929eef72c02162b1088f9e1efae1aea"></a>

Gets the value of PortalUseRulesets_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & `[`GetPortalUseRulesets`](#structFRHAPI__Catalog_1a6bee3029bc9d5e1e41b0462223d93702)`() const` <a id="structFRHAPI__Catalog_1a6bee3029bc9d5e1e41b0462223d93702"></a>

Gets the value of PortalUseRulesets_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & `[`GetPortalUseRulesets`](#structFRHAPI__Catalog_1a8176e5ae0b4dfa1e3c7cadcac12c4208)`(const `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1a8176e5ae0b4dfa1e3c7cadcac12c4208"></a>

Gets the value of PortalUseRulesets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUseRulesets`](#structFRHAPI__Catalog_1abe4c3f349ccf71cd92d071e711c5e3cb)`(`[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` & OutValue) const` <a id="structFRHAPI__Catalog_1abe4c3f349ccf71cd92d071e711c5e3cb"></a>

Fills OutValue with the value of PortalUseRulesets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` * `[`GetPortalUseRulesetsOrNull`](#structFRHAPI__Catalog_1a39474764042ef58a0055601cd8f57c27)`()` <a id="structFRHAPI__Catalog_1a39474764042ef58a0055601cd8f57c27"></a>

Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` * `[`GetPortalUseRulesetsOrNull`](#structFRHAPI__Catalog_1afd9bd4263f0bfd6d45866fd0bb0a823f)`() const` <a id="structFRHAPI__Catalog_1afd9bd4263f0bfd6d45866fd0bb0a823f"></a>

Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUseRulesets`](#structFRHAPI__Catalog_1a24ee004dabe2699f4dd789b7ee04d007)`(`[`FRHAPI_PortalUseRulesets`](RHAPI_PortalUseRulesets.md#structFRHAPI__PortalUseRulesets)` NewValue)` <a id="structFRHAPI__Catalog_1a24ee004dabe2699f4dd789b7ee04d007"></a>

Sets the value of PortalUseRulesets_Optional and also sets PortalUseRulesets_IsSet to true.

#### `public inline void `[`ClearPortalUseRulesets`](#structFRHAPI__Catalog_1a019fbe65af45baa13186e4e1f87ea585)`()` <a id="structFRHAPI__Catalog_1a019fbe65af45baa13186e4e1f87ea585"></a>

Clears the value of PortalUseRulesets_Optional and sets PortalUseRulesets_IsSet to false.

#### `public inline `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & `[`GetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1a4f8c6e3a4aa03ad8e476a827bbdf80c3)`()` <a id="structFRHAPI__Catalog_1a4f8c6e3a4aa03ad8e476a827bbdf80c3"></a>

Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & `[`GetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1a454b18762ee63e07051e2614905ae78a)`() const` <a id="structFRHAPI__Catalog_1a454b18762ee63e07051e2614905ae78a"></a>

Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & `[`GetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1a2728ff6eba13174fd65ed76d8122ff7f)`(const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1a2728ff6eba13174fd65ed76d8122ff7f"></a>

Gets the value of InventoryBucketUseRuleSets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1aa62b2c49f3236e005ebf07859b607000)`(`[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & OutValue) const` <a id="structFRHAPI__Catalog_1aa62b2c49f3236e005ebf07859b607000"></a>

Fills OutValue with the value of InventoryBucketUseRuleSets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` * `[`GetInventoryBucketUseRuleSetsOrNull`](#structFRHAPI__Catalog_1a698efd5d57d3ce3cad2d90c210f142d9)`()` <a id="structFRHAPI__Catalog_1a698efd5d57d3ce3cad2d90c210f142d9"></a>

Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` * `[`GetInventoryBucketUseRuleSetsOrNull`](#structFRHAPI__Catalog_1aece6ee5342daf100ed3773bbfcbd5620)`() const` <a id="structFRHAPI__Catalog_1aece6ee5342daf100ed3773bbfcbd5620"></a>

Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1adb3241bd1c4e21c6dd076dcea793a764)`(`[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` NewValue)` <a id="structFRHAPI__Catalog_1adb3241bd1c4e21c6dd076dcea793a764"></a>

Sets the value of InventoryBucketUseRuleSets_Optional and also sets InventoryBucketUseRuleSets_IsSet to true.

#### `public inline void `[`ClearInventoryBucketUseRuleSets`](#structFRHAPI__Catalog_1a2ce7f945184d3e78b03c850dcac1d6e7)`()` <a id="structFRHAPI__Catalog_1a2ce7f945184d3e78b03c850dcac1d6e7"></a>

Clears the value of InventoryBucketUseRuleSets_Optional and sets InventoryBucketUseRuleSets_IsSet to false.

#### `public inline `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & `[`GetVendors`](#structFRHAPI__Catalog_1adfaebc84183c9989096a71f5ab5e9506)`()` <a id="structFRHAPI__Catalog_1adfaebc84183c9989096a71f5ab5e9506"></a>

Gets the value of Vendors_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & `[`GetVendors`](#structFRHAPI__Catalog_1addb75c932c919d143c98d54a1fb357c1)`() const` <a id="structFRHAPI__Catalog_1addb75c932c919d143c98d54a1fb357c1"></a>

Gets the value of Vendors_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & `[`GetVendors`](#structFRHAPI__Catalog_1a996f5ebf75b7595c402726b3eda577c6)`(const `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1a996f5ebf75b7595c402726b3eda577c6"></a>

Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendors`](#structFRHAPI__Catalog_1a3207e715c63930b2dbcda2aab6cb6fbb)`(`[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` & OutValue) const` <a id="structFRHAPI__Catalog_1a3207e715c63930b2dbcda2aab6cb6fbb"></a>

Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` * `[`GetVendorsOrNull`](#structFRHAPI__Catalog_1aceebc9b220159aa3886d34d43fc56306)`()` <a id="structFRHAPI__Catalog_1aceebc9b220159aa3886d34d43fc56306"></a>

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` * `[`GetVendorsOrNull`](#structFRHAPI__Catalog_1a3203bce1de9990365a346a6072eb5fff)`() const` <a id="structFRHAPI__Catalog_1a3203bce1de9990365a346a6072eb5fff"></a>

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendors`](#structFRHAPI__Catalog_1abd25107288f3a3c72277be8717ef16a8)`(`[`FRHAPI_Vendors`](RHAPI_Vendors.md#structFRHAPI__Vendors)` NewValue)` <a id="structFRHAPI__Catalog_1abd25107288f3a3c72277be8717ef16a8"></a>

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.

#### `public inline void `[`ClearVendors`](#structFRHAPI__Catalog_1af2e2f21c8d75068e489bac4925c03e8b)`()` <a id="structFRHAPI__Catalog_1af2e2f21c8d75068e489bac4925c03e8b"></a>

Clears the value of Vendors_Optional and sets Vendors_IsSet to false.

#### `public inline `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & `[`GetLoot`](#structFRHAPI__Catalog_1aacca746059cc2f775ad80731a8037e2c)`()` <a id="structFRHAPI__Catalog_1aacca746059cc2f775ad80731a8037e2c"></a>

Gets the value of Loot_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & `[`GetLoot`](#structFRHAPI__Catalog_1ac4a9cc014a82f7026832671c31f52b0b)`() const` <a id="structFRHAPI__Catalog_1ac4a9cc014a82f7026832671c31f52b0b"></a>

Gets the value of Loot_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & `[`GetLoot`](#structFRHAPI__Catalog_1a184367d546587daeda8f9865e41a7967)`(const `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1a184367d546587daeda8f9865e41a7967"></a>

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLoot`](#structFRHAPI__Catalog_1aa293cb9e3d3866c379b0e0d1493dd2b7)`(`[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` & OutValue) const` <a id="structFRHAPI__Catalog_1aa293cb9e3d3866c379b0e0d1493dd2b7"></a>

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` * `[`GetLootOrNull`](#structFRHAPI__Catalog_1a4340c8c0e19c20efe84cffe56d996f51)`()` <a id="structFRHAPI__Catalog_1a4340c8c0e19c20efe84cffe56d996f51"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` * `[`GetLootOrNull`](#structFRHAPI__Catalog_1a830ba43d6552b19b79302c7a054e497b)`() const` <a id="structFRHAPI__Catalog_1a830ba43d6552b19b79302c7a054e497b"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLoot`](#structFRHAPI__Catalog_1afb445a15a8966c81b72c854d77bf5fc8)`(`[`FRHAPI_Loots`](RHAPI_Loots.md#structFRHAPI__Loots)` NewValue)` <a id="structFRHAPI__Catalog_1afb445a15a8966c81b72c854d77bf5fc8"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true.

#### `public inline void `[`ClearLoot`](#structFRHAPI__Catalog_1ace1be3d5346d254d6761503a7830e988)`()` <a id="structFRHAPI__Catalog_1ace1be3d5346d254d6761503a7830e988"></a>

Clears the value of Loot_Optional and sets Loot_IsSet to false.

#### `public inline `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & `[`GetItems`](#structFRHAPI__Catalog_1acf55ff2706872c8178267f5e7df3b131)`()` <a id="structFRHAPI__Catalog_1acf55ff2706872c8178267f5e7df3b131"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & `[`GetItems`](#structFRHAPI__Catalog_1a9eabcc9cd56c8a39ab5490f105adf28c)`() const` <a id="structFRHAPI__Catalog_1a9eabcc9cd56c8a39ab5490f105adf28c"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & `[`GetItems`](#structFRHAPI__Catalog_1adb287186bf4b8cd3545da0c8342e4348)`(const `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1adb287186bf4b8cd3545da0c8342e4348"></a>

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItems`](#structFRHAPI__Catalog_1aedbde4096eb3151c6b614400b17ddadd)`(`[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` & OutValue) const` <a id="structFRHAPI__Catalog_1aedbde4096eb3151c6b614400b17ddadd"></a>

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` * `[`GetItemsOrNull`](#structFRHAPI__Catalog_1a110054c2ba7e3c51c80572eb84ac7fad)`()` <a id="structFRHAPI__Catalog_1a110054c2ba7e3c51c80572eb84ac7fad"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` * `[`GetItemsOrNull`](#structFRHAPI__Catalog_1a9a9a3651a9223d73b2d89468a533d19e)`() const` <a id="structFRHAPI__Catalog_1a9a9a3651a9223d73b2d89468a533d19e"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItems`](#structFRHAPI__Catalog_1a2ac5bb81f3d68d8c237e829730821bb0)`(`[`FRHAPI_Items`](RHAPI_Items.md#structFRHAPI__Items)` NewValue)` <a id="structFRHAPI__Catalog_1a2ac5bb81f3d68d8c237e829730821bb0"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true.

#### `public inline void `[`ClearItems`](#structFRHAPI__Catalog_1a4113d168029b287a1f20959aebdec398)`()` <a id="structFRHAPI__Catalog_1a4113d168029b287a1f20959aebdec398"></a>

Clears the value of Items_Optional and sets Items_IsSet to false.

#### `public inline `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & `[`GetPricePoints`](#structFRHAPI__Catalog_1a175500e9cb7dfa7debccff4e912d5a67)`()` <a id="structFRHAPI__Catalog_1a175500e9cb7dfa7debccff4e912d5a67"></a>

Gets the value of PricePoints_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & `[`GetPricePoints`](#structFRHAPI__Catalog_1aedb2131d1fcaaf33df5d24b5f44180d6)`() const` <a id="structFRHAPI__Catalog_1aedb2131d1fcaaf33df5d24b5f44180d6"></a>

Gets the value of PricePoints_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & `[`GetPricePoints`](#structFRHAPI__Catalog_1a2b3448fce66d20b10b56f08f4fbc5769)`(const `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1a2b3448fce66d20b10b56f08f4fbc5769"></a>

Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPricePoints`](#structFRHAPI__Catalog_1ab8b870836b1bab5341c09bcaf27767fb)`(`[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` & OutValue) const` <a id="structFRHAPI__Catalog_1ab8b870836b1bab5341c09bcaf27767fb"></a>

Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` * `[`GetPricePointsOrNull`](#structFRHAPI__Catalog_1a63ccc91cc51efc6cff53bc9eb58f67fa)`()` <a id="structFRHAPI__Catalog_1a63ccc91cc51efc6cff53bc9eb58f67fa"></a>

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` * `[`GetPricePointsOrNull`](#structFRHAPI__Catalog_1a54844133736016c2ebe9d84432b6b98e)`() const` <a id="structFRHAPI__Catalog_1a54844133736016c2ebe9d84432b6b98e"></a>

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPricePoints`](#structFRHAPI__Catalog_1a0f2bd0d4e4da0e62ca240a2492b2b590)`(`[`FRHAPI_PricePoints`](RHAPI_PricePoints.md#structFRHAPI__PricePoints)` NewValue)` <a id="structFRHAPI__Catalog_1a0f2bd0d4e4da0e62ca240a2492b2b590"></a>

Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.

#### `public inline void `[`ClearPricePoints`](#structFRHAPI__Catalog_1ab66a478aca1f7c7e14fa71ed0fe198a5)`()` <a id="structFRHAPI__Catalog_1ab66a478aca1f7c7e14fa71ed0fe198a5"></a>

Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.

#### `public inline `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & `[`GetTimeFrames`](#structFRHAPI__Catalog_1a8072dd84810e1f6939b7e80accf26f91)`()` <a id="structFRHAPI__Catalog_1a8072dd84810e1f6939b7e80accf26f91"></a>

Gets the value of TimeFrames_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & `[`GetTimeFrames`](#structFRHAPI__Catalog_1a033b3218e6f5f1d470e6d65cce14766e)`() const` <a id="structFRHAPI__Catalog_1a033b3218e6f5f1d470e6d65cce14766e"></a>

Gets the value of TimeFrames_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & `[`GetTimeFrames`](#structFRHAPI__Catalog_1a4f31c06cc9adb2319c64ff6e1ea0cdcb)`(const `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1a4f31c06cc9adb2319c64ff6e1ea0cdcb"></a>

Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTimeFrames`](#structFRHAPI__Catalog_1a6ed03fc9fd51968883f0cdd1507f752a)`(`[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` & OutValue) const` <a id="structFRHAPI__Catalog_1a6ed03fc9fd51968883f0cdd1507f752a"></a>

Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` * `[`GetTimeFramesOrNull`](#structFRHAPI__Catalog_1a92d7aac23a6c9023487c40e1bc3ebfb8)`()` <a id="structFRHAPI__Catalog_1a92d7aac23a6c9023487c40e1bc3ebfb8"></a>

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` * `[`GetTimeFramesOrNull`](#structFRHAPI__Catalog_1a091f3b84759ff8222a18440bb27a1ae7)`() const` <a id="structFRHAPI__Catalog_1a091f3b84759ff8222a18440bb27a1ae7"></a>

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTimeFrames`](#structFRHAPI__Catalog_1ad437e7449a235919572299f83508c535)`(`[`FRHAPI_TimeFrames`](RHAPI_TimeFrames.md#structFRHAPI__TimeFrames)` NewValue)` <a id="structFRHAPI__Catalog_1ad437e7449a235919572299f83508c535"></a>

Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.

#### `public inline void `[`ClearTimeFrames`](#structFRHAPI__Catalog_1ac3f2252f7dd6be43359b67c6a264cde5)`()` <a id="structFRHAPI__Catalog_1ac3f2252f7dd6be43359b67c6a264cde5"></a>

Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.

#### `public inline `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & `[`GetSkus`](#structFRHAPI__Catalog_1aecd3e567a3e8505612cff0a6060ded3c)`()` <a id="structFRHAPI__Catalog_1aecd3e567a3e8505612cff0a6060ded3c"></a>

Gets the value of Skus_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & `[`GetSkus`](#structFRHAPI__Catalog_1a2ec9a13449858fe7b30ca8da6a18da71)`() const` <a id="structFRHAPI__Catalog_1a2ec9a13449858fe7b30ca8da6a18da71"></a>

Gets the value of Skus_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & `[`GetSkus`](#structFRHAPI__Catalog_1a7778d38213342b764ba32de27877a87e)`(const `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1a7778d38213342b764ba32de27877a87e"></a>

Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSkus`](#structFRHAPI__Catalog_1a949ae87736f8b02e0dc8b210f5872b7f)`(`[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` & OutValue) const` <a id="structFRHAPI__Catalog_1a949ae87736f8b02e0dc8b210f5872b7f"></a>

Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` * `[`GetSkusOrNull`](#structFRHAPI__Catalog_1a60b66383a155cce30ad54b6eb92e00f8)`()` <a id="structFRHAPI__Catalog_1a60b66383a155cce30ad54b6eb92e00f8"></a>

Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` * `[`GetSkusOrNull`](#structFRHAPI__Catalog_1a20ecb5baaedad96eff367f1605dfa2f8)`() const` <a id="structFRHAPI__Catalog_1a20ecb5baaedad96eff367f1605dfa2f8"></a>

Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSkus`](#structFRHAPI__Catalog_1a8a5f9240698b22a40bb014468d74fff9)`(`[`FRHAPI_PlatformSKUs`](RHAPI_PlatformSKUs.md#structFRHAPI__PlatformSKUs)` NewValue)` <a id="structFRHAPI__Catalog_1a8a5f9240698b22a40bb014468d74fff9"></a>

Sets the value of Skus_Optional and also sets Skus_IsSet to true.

#### `public inline void `[`ClearSkus`](#structFRHAPI__Catalog_1a765461b15f5b17e1425f262afc0940a2)`()` <a id="structFRHAPI__Catalog_1a765461b15f5b17e1425f262afc0940a2"></a>

Clears the value of Skus_Optional and sets Skus_IsSet to false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Catalog_1a3bcfc74eef1b5ed8c468aa203d73505a)`()` <a id="structFRHAPI__Catalog_1a3bcfc74eef1b5ed8c468aa203d73505a"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Catalog_1a3767f024df63790d04bfaba39add23a6)`() const` <a id="structFRHAPI__Catalog_1a3767f024df63790d04bfaba39add23a6"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Catalog_1a44b14981d1b3157b786d07adbc36fb73)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Catalog_1a44b14981d1b3157b786d07adbc36fb73"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Catalog_1a2e4536ef1c64c02e1f52e83e75af8f3d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Catalog_1a2e4536ef1c64c02e1f52e83e75af8f3d"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Catalog_1a79154ae3e9fe9fb81a3994f93448ee43)`()` <a id="structFRHAPI__Catalog_1a79154ae3e9fe9fb81a3994f93448ee43"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Catalog_1a5f40badba0c9c3e6aa0dc5cd5bacd5f8)`() const` <a id="structFRHAPI__Catalog_1a5f40badba0c9c3e6aa0dc5cd5bacd5f8"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Catalog_1a7a3e2d4c14d4c2c99f7b0ed5c71ceef0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__Catalog_1a7a3e2d4c14d4c2c99f7b0ed5c71ceef0"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Catalog_1a06e23285bc21a8cbee8b3e247cfbf7a9)`()` <a id="structFRHAPI__Catalog_1a06e23285bc21a8cbee8b3e247cfbf7a9"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

