---
title: FRHAPI_Catalog Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Full list of all loaded objects for the catalog. Organized in a normalized model.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables)|[XpTables_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1af4f0cd76a893a7e28a5434d8bcd18d23)||
|bool|[XpTables_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1af90b7e5ba57c9a0494cebca385d57554)|true if XpTables_Optional has been set to a value|
|[FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets)|[PortalUseRulesets_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a5c1bc6fb261f498f6a9cb2b53678ada7)||
|bool|[PortalUseRulesets_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aa2b91b29308df30644270d464ed59c1a)|true if PortalUseRulesets_Optional has been set to a value|
|[FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets)|[InventoryBucketUseRuleSets_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a9b851c0b6519aede6992d0d9bba421fe)||
|bool|[InventoryBucketUseRuleSets_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a0586281245ad51f50f42b97a66226541)|true if InventoryBucketUseRuleSets_Optional has been set to a value|
|[FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors)|[Vendors_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a1f4638b8bf02a2bf9dcd96d8371b184b)||
|bool|[Vendors_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a7825696f94603a9c682c871ea2ffdf48)|true if Vendors_Optional has been set to a value|
|[FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots)|[Loot_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a1de575ff599e2024bad49cc64f3c85c1)||
|bool|[Loot_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aff1762bd9da5b9e4b538134c4f274458)|true if Loot_Optional has been set to a value|
|[FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items)|[Items_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aadceaa0da05b125011e20fff72327a47)||
|bool|[Items_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1add54c8f6b30746e9e2fc5589e1670020)|true if Items_Optional has been set to a value|
|[FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints)|[PricePoints_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a509fa6f65b75105aa8d3e7abed6f22c4)||
|bool|[PricePoints_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a374717ee3e59783724b9f7626bf107b0)|true if PricePoints_Optional has been set to a value|
|[FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames)|[TimeFrames_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1abaaeb0cae5fcc66283a5a88005569a25)||
|bool|[TimeFrames_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a0152d227f29fbba74e728eba75f2a4b9)|true if TimeFrames_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a44d0ba982a4d410b0b93ccaca10970ae)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1af1aa2319fa555fe776de228ccaafc079)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a8aa802eebad07291e54446219d17ff42)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ae1e9ed1e399d572a268c605ade660c55)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|[FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) &|[GetXpTables](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ac635831282e496fe3acfaf1ab8d1f9e2)()|Gets the value of XpTables_Optional, regardless of it having been set.|
|const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) &|[GetXpTables](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a60e04ea7190e71f1296c08cd311c4df2)()|Gets the value of XpTables_Optional, regardless of it having been set.|
|const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) &|[GetXpTables](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ae4caeefa77d66696a058a2664d5787cf)(const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & DefaultValue)|Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetXpTables](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1afd660dbad74255621245cfb47ff7547e)([FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & OutValue)|Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) *|[GetXpTablesOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1acfd2589d19438af0424e3713c34439a9)()|Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) *|[GetXpTablesOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a660b4d1cda8e1f55947b8fda44676cdc)()|Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetXpTables](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a80bbc28788e2473c4e4f472dba8c7cb6)([FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) NewValue)|Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.|
|void|[ClearXpTables](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a312a992dab0e537045c9cedbffdb4058)()|Clears the value of XpTables_Optional and sets XpTables_IsSet to false.|
|[FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) &|[GetPortalUseRulesets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a8929eef72c02162b1088f9e1efae1aea)()|Gets the value of PortalUseRulesets_Optional, regardless of it having been set.|
|const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) &|[GetPortalUseRulesets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a6bee3029bc9d5e1e41b0462223d93702)()|Gets the value of PortalUseRulesets_Optional, regardless of it having been set.|
|const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) &|[GetPortalUseRulesets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a8176e5ae0b4dfa1e3c7cadcac12c4208)(const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) & DefaultValue)|Gets the value of PortalUseRulesets_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalUseRulesets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1abe4c3f349ccf71cd92d071e711c5e3cb)([FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) & OutValue)|Fills OutValue with the value of PortalUseRulesets_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) *|[GetPortalUseRulesetsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a39474764042ef58a0055601cd8f57c27)()|Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) *|[GetPortalUseRulesetsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1afd9bd4263f0bfd6d45866fd0bb0a823f)()|Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalUseRulesets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a24ee004dabe2699f4dd789b7ee04d007)([FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) NewValue)|Sets the value of PortalUseRulesets_Optional and also sets PortalUseRulesets_IsSet to true.|
|void|[ClearPortalUseRulesets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a019fbe65af45baa13186e4e1f87ea585)()|Clears the value of PortalUseRulesets_Optional and sets PortalUseRulesets_IsSet to false.|
|[FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) &|[GetInventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a4f8c6e3a4aa03ad8e476a827bbdf80c3)()|Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set.|
|const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) &|[GetInventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a454b18762ee63e07051e2614905ae78a)()|Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set.|
|const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) &|[GetInventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a2728ff6eba13174fd65ed76d8122ff7f)(const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & DefaultValue)|Gets the value of InventoryBucketUseRuleSets_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aa62b2c49f3236e005ebf07859b607000)([FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & OutValue)|Fills OutValue with the value of InventoryBucketUseRuleSets_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) *|[GetInventoryBucketUseRuleSetsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a698efd5d57d3ce3cad2d90c210f142d9)()|Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) *|[GetInventoryBucketUseRuleSetsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aece6ee5342daf100ed3773bbfcbd5620)()|Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1adb3241bd1c4e21c6dd076dcea793a764)([FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) NewValue)|Sets the value of InventoryBucketUseRuleSets_Optional and also sets InventoryBucketUseRuleSets_IsSet to true.|
|void|[ClearInventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a2ce7f945184d3e78b03c850dcac1d6e7)()|Clears the value of InventoryBucketUseRuleSets_Optional and sets InventoryBucketUseRuleSets_IsSet to false.|
|[FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) &|[GetVendors](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1adfaebc84183c9989096a71f5ab5e9506)()|Gets the value of Vendors_Optional, regardless of it having been set.|
|const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) &|[GetVendors](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1addb75c932c919d143c98d54a1fb357c1)()|Gets the value of Vendors_Optional, regardless of it having been set.|
|const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) &|[GetVendors](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a996f5ebf75b7595c402726b3eda577c6)(const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) & DefaultValue)|Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVendors](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a3207e715c63930b2dbcda2aab6cb6fbb)([FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) & OutValue)|Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) *|[GetVendorsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aceebc9b220159aa3886d34d43fc56306)()|Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) *|[GetVendorsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a3203bce1de9990365a346a6072eb5fff)()|Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVendors](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1abd25107288f3a3c72277be8717ef16a8)([FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) NewValue)|Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.|
|void|[ClearVendors](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1af2e2f21c8d75068e489bac4925c03e8b)()|Clears the value of Vendors_Optional and sets Vendors_IsSet to false.|
|[FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) &|[GetLoot](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aacca746059cc2f775ad80731a8037e2c)()|Gets the value of Loot_Optional, regardless of it having been set.|
|const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) &|[GetLoot](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ac4a9cc014a82f7026832671c31f52b0b)()|Gets the value of Loot_Optional, regardless of it having been set.|
|const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) &|[GetLoot](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a184367d546587daeda8f9865e41a7967)(const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) & DefaultValue)|Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLoot](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aa293cb9e3d3866c379b0e0d1493dd2b7)([FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) & OutValue)|Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) *|[GetLootOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a4340c8c0e19c20efe84cffe56d996f51)()|Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) *|[GetLootOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a830ba43d6552b19b79302c7a054e497b)()|Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLoot](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1afb445a15a8966c81b72c854d77bf5fc8)([FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) NewValue)|Sets the value of Loot_Optional and also sets Loot_IsSet to true.|
|void|[ClearLoot](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ace1be3d5346d254d6761503a7830e988)()|Clears the value of Loot_Optional and sets Loot_IsSet to false.|
|[FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) &|[GetItems](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1acf55ff2706872c8178267f5e7df3b131)()|Gets the value of Items_Optional, regardless of it having been set.|
|const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) &|[GetItems](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a9eabcc9cd56c8a39ab5490f105adf28c)()|Gets the value of Items_Optional, regardless of it having been set.|
|const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) &|[GetItems](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1adb287186bf4b8cd3545da0c8342e4348)(const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) & DefaultValue)|Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItems](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aedbde4096eb3151c6b614400b17ddadd)([FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) & OutValue)|Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) *|[GetItemsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a110054c2ba7e3c51c80572eb84ac7fad)()|Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) *|[GetItemsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a9a9a3651a9223d73b2d89468a533d19e)()|Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItems](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a2ac5bb81f3d68d8c237e829730821bb0)([FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) NewValue)|Sets the value of Items_Optional and also sets Items_IsSet to true.|
|void|[ClearItems](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a4113d168029b287a1f20959aebdec398)()|Clears the value of Items_Optional and sets Items_IsSet to false.|
|[FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) &|[GetPricePoints](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a175500e9cb7dfa7debccff4e912d5a67)()|Gets the value of PricePoints_Optional, regardless of it having been set.|
|const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) &|[GetPricePoints](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1aedb2131d1fcaaf33df5d24b5f44180d6)()|Gets the value of PricePoints_Optional, regardless of it having been set.|
|const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) &|[GetPricePoints](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a2b3448fce66d20b10b56f08f4fbc5769)(const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) & DefaultValue)|Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPricePoints](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ab8b870836b1bab5341c09bcaf27767fb)([FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) & OutValue)|Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) *|[GetPricePointsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a63ccc91cc51efc6cff53bc9eb58f67fa)()|Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) *|[GetPricePointsOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a54844133736016c2ebe9d84432b6b98e)()|Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPricePoints](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a0f2bd0d4e4da0e62ca240a2492b2b590)([FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) NewValue)|Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.|
|void|[ClearPricePoints](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ab66a478aca1f7c7e14fa71ed0fe198a5)()|Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.|
|[FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) &|[GetTimeFrames](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a8072dd84810e1f6939b7e80accf26f91)()|Gets the value of TimeFrames_Optional, regardless of it having been set.|
|const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) &|[GetTimeFrames](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a033b3218e6f5f1d470e6d65cce14766e)()|Gets the value of TimeFrames_Optional, regardless of it having been set.|
|const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) &|[GetTimeFrames](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a4f31c06cc9adb2319c64ff6e1ea0cdcb)(const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) & DefaultValue)|Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTimeFrames](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a6ed03fc9fd51968883f0cdd1507f752a)([FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) & OutValue)|Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) *|[GetTimeFramesOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a92d7aac23a6c9023487c40e1bc3ebfb8)()|Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) *|[GetTimeFramesOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a091f3b84759ff8222a18440bb27a1ae7)()|Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTimeFrames](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ad437e7449a235919572299f83508c535)([FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) NewValue)|Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.|
|void|[ClearTimeFrames](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1ac3f2252f7dd6be43359b67c6a264cde5)()|Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a3bcfc74eef1b5ed8c468aa203d73505a)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a3767f024df63790d04bfaba39add23a6)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a44b14981d1b3157b786d07adbc36fb73)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a2e4536ef1c64c02e1f52e83e75af8f3d)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a79154ae3e9fe9fb81a3994f93448ee43)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a5f40badba0c9c3e6aa0dc5cd5bacd5f8)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a7a3e2d4c14d4c2c99f7b0ed5c71ceef0)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__catalog/#structFRHAPI__Catalog_1a06e23285bc21a8cbee8b3e247cfbf7a9)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `XpTables_Optional` <a id="structFRHAPI__Catalog_1af4f0cd76a893a7e28a5434d8bcd18d23"></a>

`FRHAPI_XpTables FRHAPI_Catalog::XpTables_Optional`






### `XpTables_IsSet` <a id="structFRHAPI__Catalog_1af90b7e5ba57c9a0494cebca385d57554"></a>

`bool FRHAPI_Catalog::XpTables_IsSet`

true if XpTables_Optional has been set to a value




### `PortalUseRulesets_Optional` <a id="structFRHAPI__Catalog_1a5c1bc6fb261f498f6a9cb2b53678ada7"></a>

`FRHAPI_PortalUseRulesets FRHAPI_Catalog::PortalUseRulesets_Optional`






### `PortalUseRulesets_IsSet` <a id="structFRHAPI__Catalog_1aa2b91b29308df30644270d464ed59c1a"></a>

`bool FRHAPI_Catalog::PortalUseRulesets_IsSet`

true if PortalUseRulesets_Optional has been set to a value




### `InventoryBucketUseRuleSets_Optional` <a id="structFRHAPI__Catalog_1a9b851c0b6519aede6992d0d9bba421fe"></a>

`FRHAPI_InventoryBucketUseRuleSets FRHAPI_Catalog::InventoryBucketUseRuleSets_Optional`






### `InventoryBucketUseRuleSets_IsSet` <a id="structFRHAPI__Catalog_1a0586281245ad51f50f42b97a66226541"></a>

`bool FRHAPI_Catalog::InventoryBucketUseRuleSets_IsSet`

true if InventoryBucketUseRuleSets_Optional has been set to a value




### `Vendors_Optional` <a id="structFRHAPI__Catalog_1a1f4638b8bf02a2bf9dcd96d8371b184b"></a>

`FRHAPI_Vendors FRHAPI_Catalog::Vendors_Optional`






### `Vendors_IsSet` <a id="structFRHAPI__Catalog_1a7825696f94603a9c682c871ea2ffdf48"></a>

`bool FRHAPI_Catalog::Vendors_IsSet`

true if Vendors_Optional has been set to a value




### `Loot_Optional` <a id="structFRHAPI__Catalog_1a1de575ff599e2024bad49cc64f3c85c1"></a>

`FRHAPI_Loots FRHAPI_Catalog::Loot_Optional`






### `Loot_IsSet` <a id="structFRHAPI__Catalog_1aff1762bd9da5b9e4b538134c4f274458"></a>

`bool FRHAPI_Catalog::Loot_IsSet`

true if Loot_Optional has been set to a value




### `Items_Optional` <a id="structFRHAPI__Catalog_1aadceaa0da05b125011e20fff72327a47"></a>

`FRHAPI_Items FRHAPI_Catalog::Items_Optional`






### `Items_IsSet` <a id="structFRHAPI__Catalog_1add54c8f6b30746e9e2fc5589e1670020"></a>

`bool FRHAPI_Catalog::Items_IsSet`

true if Items_Optional has been set to a value




### `PricePoints_Optional` <a id="structFRHAPI__Catalog_1a509fa6f65b75105aa8d3e7abed6f22c4"></a>

`FRHAPI_PricePoints FRHAPI_Catalog::PricePoints_Optional`






### `PricePoints_IsSet` <a id="structFRHAPI__Catalog_1a374717ee3e59783724b9f7626bf107b0"></a>

`bool FRHAPI_Catalog::PricePoints_IsSet`

true if PricePoints_Optional has been set to a value




### `TimeFrames_Optional` <a id="structFRHAPI__Catalog_1abaaeb0cae5fcc66283a5a88005569a25"></a>

`FRHAPI_TimeFrames FRHAPI_Catalog::TimeFrames_Optional`






### `TimeFrames_IsSet` <a id="structFRHAPI__Catalog_1a0152d227f29fbba74e728eba75f2a4b9"></a>

`bool FRHAPI_Catalog::TimeFrames_IsSet`

true if TimeFrames_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__Catalog_1a44d0ba982a4d410b0b93ccaca10970ae"></a>

`FRHAPI_CacheInfo FRHAPI_Catalog::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__Catalog_1af1aa2319fa555fe776de228ccaafc079"></a>

`bool FRHAPI_Catalog::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Catalog_1a8aa802eebad07291e54446219d17ff42"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__Catalog_1ae1e9ed1e399d572a268c605ade660c55"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetXpTables` <a id="structFRHAPI__Catalog_1ac635831282e496fe3acfaf1ab8d1f9e2"></a>

[FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & GetXpTables()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of XpTables_Optional, regardless of it having been set.




### `GetXpTables` <a id="structFRHAPI__Catalog_1a60e04ea7190e71f1296c08cd311c4df2"></a>

const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & GetXpTables()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of XpTables_Optional, regardless of it having been set.




### `GetXpTables` <a id="structFRHAPI__Catalog_1ae4caeefa77d66696a058a2664d5787cf"></a>

const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & GetXpTables(const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) &|DefaultValue|

#### Description

Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetXpTables` <a id="structFRHAPI__Catalog_1afd660dbad74255621245cfb47ff7547e"></a>

bool GetXpTables([FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) &|OutValue|

#### Description

Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.




### `GetXpTablesOrNull` <a id="structFRHAPI__Catalog_1acfd2589d19438af0424e3713c34439a9"></a>

[FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) * GetXpTablesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.




### `GetXpTablesOrNull` <a id="structFRHAPI__Catalog_1a660b4d1cda8e1f55947b8fda44676cdc"></a>

const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) * GetXpTablesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.




### `SetXpTables` <a id="structFRHAPI__Catalog_1a80bbc28788e2473c4e4f472dba8c7cb6"></a>

void SetXpTables([FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables)|NewValue|

#### Description

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.




### `ClearXpTables` <a id="structFRHAPI__Catalog_1a312a992dab0e537045c9cedbffdb4058"></a>

void ClearXpTables()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of XpTables_Optional and sets XpTables_IsSet to false.




### `GetPortalUseRulesets` <a id="structFRHAPI__Catalog_1a8929eef72c02162b1088f9e1efae1aea"></a>

[FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) & GetPortalUseRulesets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUseRulesets_Optional, regardless of it having been set.




### `GetPortalUseRulesets` <a id="structFRHAPI__Catalog_1a6bee3029bc9d5e1e41b0462223d93702"></a>

const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) & GetPortalUseRulesets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUseRulesets_Optional, regardless of it having been set.




### `GetPortalUseRulesets` <a id="structFRHAPI__Catalog_1a8176e5ae0b4dfa1e3c7cadcac12c4208"></a>

const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) & GetPortalUseRulesets(const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) &|DefaultValue|

#### Description

Gets the value of PortalUseRulesets_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalUseRulesets` <a id="structFRHAPI__Catalog_1abe4c3f349ccf71cd92d071e711c5e3cb"></a>

bool GetPortalUseRulesets([FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) &|OutValue|

#### Description

Fills OutValue with the value of PortalUseRulesets_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalUseRulesetsOrNull` <a id="structFRHAPI__Catalog_1a39474764042ef58a0055601cd8f57c27"></a>

[FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) * GetPortalUseRulesetsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalUseRulesetsOrNull` <a id="structFRHAPI__Catalog_1afd9bd4263f0bfd6d45866fd0bb0a823f"></a>

const [FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) * GetPortalUseRulesetsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalUseRulesets` <a id="structFRHAPI__Catalog_1a24ee004dabe2699f4dd789b7ee04d007"></a>

void SetPortalUseRulesets([FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PortalUseRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets)|NewValue|

#### Description

Sets the value of PortalUseRulesets_Optional and also sets PortalUseRulesets_IsSet to true.




### `ClearPortalUseRulesets` <a id="structFRHAPI__Catalog_1a019fbe65af45baa13186e4e1f87ea585"></a>

void ClearPortalUseRulesets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalUseRulesets_Optional and sets PortalUseRulesets_IsSet to false.




### `GetInventoryBucketUseRuleSets` <a id="structFRHAPI__Catalog_1a4f8c6e3a4aa03ad8e476a827bbdf80c3"></a>

[FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & GetInventoryBucketUseRuleSets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set.




### `GetInventoryBucketUseRuleSets` <a id="structFRHAPI__Catalog_1a454b18762ee63e07051e2614905ae78a"></a>

const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & GetInventoryBucketUseRuleSets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set.




### `GetInventoryBucketUseRuleSets` <a id="structFRHAPI__Catalog_1a2728ff6eba13174fd65ed76d8122ff7f"></a>

const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & GetInventoryBucketUseRuleSets(const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) &|DefaultValue|

#### Description

Gets the value of InventoryBucketUseRuleSets_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInventoryBucketUseRuleSets` <a id="structFRHAPI__Catalog_1aa62b2c49f3236e005ebf07859b607000"></a>

bool GetInventoryBucketUseRuleSets([FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) &|OutValue|

#### Description

Fills OutValue with the value of InventoryBucketUseRuleSets_Optional and returns true if it has been set, otherwise returns false.




### `GetInventoryBucketUseRuleSetsOrNull` <a id="structFRHAPI__Catalog_1a698efd5d57d3ce3cad2d90c210f142d9"></a>

[FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) * GetInventoryBucketUseRuleSetsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr.




### `GetInventoryBucketUseRuleSetsOrNull` <a id="structFRHAPI__Catalog_1aece6ee5342daf100ed3773bbfcbd5620"></a>

const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) * GetInventoryBucketUseRuleSetsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr.




### `SetInventoryBucketUseRuleSets` <a id="structFRHAPI__Catalog_1adb3241bd1c4e21c6dd076dcea793a764"></a>

void SetInventoryBucketUseRuleSets([FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets)|NewValue|

#### Description

Sets the value of InventoryBucketUseRuleSets_Optional and also sets InventoryBucketUseRuleSets_IsSet to true.




### `ClearInventoryBucketUseRuleSets` <a id="structFRHAPI__Catalog_1a2ce7f945184d3e78b03c850dcac1d6e7"></a>

void ClearInventoryBucketUseRuleSets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InventoryBucketUseRuleSets_Optional and sets InventoryBucketUseRuleSets_IsSet to false.




### `GetVendors` <a id="structFRHAPI__Catalog_1adfaebc84183c9989096a71f5ab5e9506"></a>

[FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) & GetVendors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Vendors_Optional, regardless of it having been set.




### `GetVendors` <a id="structFRHAPI__Catalog_1addb75c932c919d143c98d54a1fb357c1"></a>

const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) & GetVendors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Vendors_Optional, regardless of it having been set.




### `GetVendors` <a id="structFRHAPI__Catalog_1a996f5ebf75b7595c402726b3eda577c6"></a>

const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) & GetVendors(const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) &|DefaultValue|

#### Description

Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVendors` <a id="structFRHAPI__Catalog_1a3207e715c63930b2dbcda2aab6cb6fbb"></a>

bool GetVendors([FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) &|OutValue|

#### Description

Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false.




### `GetVendorsOrNull` <a id="structFRHAPI__Catalog_1aceebc9b220159aa3886d34d43fc56306"></a>

[FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) * GetVendorsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.




### `GetVendorsOrNull` <a id="structFRHAPI__Catalog_1a3203bce1de9990365a346a6072eb5fff"></a>

const [FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) * GetVendorsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr.




### `SetVendors` <a id="structFRHAPI__Catalog_1abd25107288f3a3c72277be8717ef16a8"></a>

void SetVendors([FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Vendors](/unreal-plugins/all/structfrhapi__vendors/#structFRHAPI__Vendors)|NewValue|

#### Description

Sets the value of Vendors_Optional and also sets Vendors_IsSet to true.




### `ClearVendors` <a id="structFRHAPI__Catalog_1af2e2f21c8d75068e489bac4925c03e8b"></a>

void ClearVendors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Vendors_Optional and sets Vendors_IsSet to false.




### `GetLoot` <a id="structFRHAPI__Catalog_1aacca746059cc2f775ad80731a8037e2c"></a>

[FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) & GetLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Loot_Optional, regardless of it having been set.




### `GetLoot` <a id="structFRHAPI__Catalog_1ac4a9cc014a82f7026832671c31f52b0b"></a>

const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) & GetLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Loot_Optional, regardless of it having been set.




### `GetLoot` <a id="structFRHAPI__Catalog_1a184367d546587daeda8f9865e41a7967"></a>

const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) & GetLoot(const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) &|DefaultValue|

#### Description

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLoot` <a id="structFRHAPI__Catalog_1aa293cb9e3d3866c379b0e0d1493dd2b7"></a>

bool GetLoot([FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) &|OutValue|

#### Description

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.




### `GetLootOrNull` <a id="structFRHAPI__Catalog_1a4340c8c0e19c20efe84cffe56d996f51"></a>

[FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) * GetLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.




### `GetLootOrNull` <a id="structFRHAPI__Catalog_1a830ba43d6552b19b79302c7a054e497b"></a>

const [FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) * GetLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.




### `SetLoot` <a id="structFRHAPI__Catalog_1afb445a15a8966c81b72c854d77bf5fc8"></a>

void SetLoot([FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Loots](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots)|NewValue|

#### Description

Sets the value of Loot_Optional and also sets Loot_IsSet to true.




### `ClearLoot` <a id="structFRHAPI__Catalog_1ace1be3d5346d254d6761503a7830e988"></a>

void ClearLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Loot_Optional and sets Loot_IsSet to false.




### `GetItems` <a id="structFRHAPI__Catalog_1acf55ff2706872c8178267f5e7df3b131"></a>

[FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) & GetItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Items_Optional, regardless of it having been set.




### `GetItems` <a id="structFRHAPI__Catalog_1a9eabcc9cd56c8a39ab5490f105adf28c"></a>

const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) & GetItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Items_Optional, regardless of it having been set.




### `GetItems` <a id="structFRHAPI__Catalog_1adb287186bf4b8cd3545da0c8342e4348"></a>

const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) & GetItems(const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) &|DefaultValue|

#### Description

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItems` <a id="structFRHAPI__Catalog_1aedbde4096eb3151c6b614400b17ddadd"></a>

bool GetItems([FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) &|OutValue|

#### Description

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.




### `GetItemsOrNull` <a id="structFRHAPI__Catalog_1a110054c2ba7e3c51c80572eb84ac7fad"></a>

[FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) * GetItemsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.




### `GetItemsOrNull` <a id="structFRHAPI__Catalog_1a9a9a3651a9223d73b2d89468a533d19e"></a>

const [FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) * GetItemsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.




### `SetItems` <a id="structFRHAPI__Catalog_1a2ac5bb81f3d68d8c237e829730821bb0"></a>

void SetItems([FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_Items](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items)|NewValue|

#### Description

Sets the value of Items_Optional and also sets Items_IsSet to true.




### `ClearItems` <a id="structFRHAPI__Catalog_1a4113d168029b287a1f20959aebdec398"></a>

void ClearItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Items_Optional and sets Items_IsSet to false.




### `GetPricePoints` <a id="structFRHAPI__Catalog_1a175500e9cb7dfa7debccff4e912d5a67"></a>

[FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) & GetPricePoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PricePoints_Optional, regardless of it having been set.




### `GetPricePoints` <a id="structFRHAPI__Catalog_1aedb2131d1fcaaf33df5d24b5f44180d6"></a>

const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) & GetPricePoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PricePoints_Optional, regardless of it having been set.




### `GetPricePoints` <a id="structFRHAPI__Catalog_1a2b3448fce66d20b10b56f08f4fbc5769"></a>

const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) & GetPricePoints(const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) &|DefaultValue|

#### Description

Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPricePoints` <a id="structFRHAPI__Catalog_1ab8b870836b1bab5341c09bcaf27767fb"></a>

bool GetPricePoints([FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) &|OutValue|

#### Description

Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false.




### `GetPricePointsOrNull` <a id="structFRHAPI__Catalog_1a63ccc91cc51efc6cff53bc9eb58f67fa"></a>

[FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) * GetPricePointsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.




### `GetPricePointsOrNull` <a id="structFRHAPI__Catalog_1a54844133736016c2ebe9d84432b6b98e"></a>

const [FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) * GetPricePointsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr.




### `SetPricePoints` <a id="structFRHAPI__Catalog_1a0f2bd0d4e4da0e62ca240a2492b2b590"></a>

void SetPricePoints([FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PricePoints](/unreal-plugins/all/structfrhapi__pricepoints/#structFRHAPI__PricePoints)|NewValue|

#### Description

Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true.




### `ClearPricePoints` <a id="structFRHAPI__Catalog_1ab66a478aca1f7c7e14fa71ed0fe198a5"></a>

void ClearPricePoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false.




### `GetTimeFrames` <a id="structFRHAPI__Catalog_1a8072dd84810e1f6939b7e80accf26f91"></a>

[FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) & GetTimeFrames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TimeFrames_Optional, regardless of it having been set.




### `GetTimeFrames` <a id="structFRHAPI__Catalog_1a033b3218e6f5f1d470e6d65cce14766e"></a>

const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) & GetTimeFrames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TimeFrames_Optional, regardless of it having been set.




### `GetTimeFrames` <a id="structFRHAPI__Catalog_1a4f31c06cc9adb2319c64ff6e1ea0cdcb"></a>

const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) & GetTimeFrames(const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) &|DefaultValue|

#### Description

Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTimeFrames` <a id="structFRHAPI__Catalog_1a6ed03fc9fd51968883f0cdd1507f752a"></a>

bool GetTimeFrames([FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) &|OutValue|

#### Description

Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.




### `GetTimeFramesOrNull` <a id="structFRHAPI__Catalog_1a92d7aac23a6c9023487c40e1bc3ebfb8"></a>

[FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) * GetTimeFramesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.




### `GetTimeFramesOrNull` <a id="structFRHAPI__Catalog_1a091f3b84759ff8222a18440bb27a1ae7"></a>

const [FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) * GetTimeFramesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.




### `SetTimeFrames` <a id="structFRHAPI__Catalog_1ad437e7449a235919572299f83508c535"></a>

void SetTimeFrames([FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_TimeFrames](/unreal-plugins/all/structfrhapi__timeframes/#structFRHAPI__TimeFrames)|NewValue|

#### Description

Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.




### `ClearTimeFrames` <a id="structFRHAPI__Catalog_1ac3f2252f7dd6be43359b67c6a264cde5"></a>

void ClearTimeFrames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__Catalog_1a3bcfc74eef1b5ed8c468aa203d73505a"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Catalog_1a3767f024df63790d04bfaba39add23a6"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Catalog_1a44b14981d1b3157b786d07adbc36fb73"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__Catalog_1a2e4536ef1c64c02e1f52e83e75af8f3d"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Catalog_1a79154ae3e9fe9fb81a3994f93448ee43"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Catalog_1a5f40badba0c9c3e6aa0dc5cd5bacd5f8"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__Catalog_1a7a3e2d4c14d4c2c99f7b0ed5c71ceef0"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__Catalog_1a06e23285bc21a8cbee8b3e247cfbf7a9"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





