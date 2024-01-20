---
title: URH_CatalogSubsystem Class
---Inherits from [URH_GameInstanceSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystemplugin/#classURH__GameInstanceSubsystemPlugin)

Inherits from FTickableGameObject

Class used to help track and interact with the catalog to get Items, Vendors, and their data.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[TGetCatalogAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a1cf3a5efca0964238be8bde13cdc27f2)|Type Define for Get Catalog calls.|
|typedef|[TGetCatalogXpAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a9f1bf618dbf35a16731771f43eb7b14d)|Type Define for Get Catalog Xp calls.|
|typedef|[TGetCatalogInventoryBucketUseRuleSetsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1aac9d74ede66689a3da316964f45d1cbd)|Type Define for Get Catalog Inventory Bucket Use Rule Set calls.|
|typedef|[TGetCatalogPricePointsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ac28fcb22f4619e06d5249cf8ff76f105)|Type Define for Get Catalog Price Point calls.|
|typedef|[TGetCatalogTimeFramesAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1aad12c4198dae13e2f6c8a8d76511d511)|Type Define for Get Catalog Time Frame calls.|
|typedef|[TGetCatalogVendor](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a80dd740594cfa64af2675aeb86bc87e8)|Type Define for Get Catalog Vendor calls.|
|typedef|[TGetCatalogVendorsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1aaf8a27ead9394b0bad26a875bef93a69)|Type Define for Get Catalog Vendor All calls.|
|typedef|[TGetCatalogItem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a81351c9b4871f7529a992d978cbc7f6d)|Type Define for Get Catalog Item calls.|
|FRH_CatalogItemUpdatedDelegate|[OnCatalogItemAdded](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a60e2593b662b6023fda6401228bea592)|Delegate that fires whenever a catalog item is added to the cashed catalog items.|
|TArray< [FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest) >|[VendorRequests](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1af7893f5433b745ff5b189b81167d71a9)|Array of active vendor requests that are in flight and not responded ot yet.|
|TMap< int32, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) >|[XpTables](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a659700dd6e8da2c852227489dce93c2a)|Xp Table Id to Xp Table Map.|
|TMap< int32, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) >|[CatalogVendors](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ac2c9e75cab5a2282cd7eabcb76d206d7)|Vendor Id to Vendor Map.|
|TMap< int32, [URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * >|[CatalogItems](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a4ef4e31b1427345e2d4cf252142eb7ce)|Item Id to Catalog Item Map.|
|TMap< int32, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) >|[CatalogLootItems](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a59522a6a14340b0183038eb9afeb32a4)|Loot Id to Catalog Vendor Item Map.|
|TMap< int32, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) >|[TimeFrames](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a7903aa3c86221227f123eb1243febf96)|Timeframe Id to Timeframe Map.|
|TMap< FGuid, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) >|[CatalogPricePoints](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a4121dd65bdf66c3d8bb1e0052f02e38c)|Price Point ID to Price Points.|
|TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) >|[InventoryBucketUseRuleSets](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a2a9ad401aa84679f58df5890a81a70ad)|Inventory Bucket to Inventory Bucket Use Ruleset Map.|
|FString|[GetCatalogAllETag](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1adeaefdfa290e6241c9fc1a8b3ac678db)|ETag of last GetCatalogAll call response.|
|FString|[GetCatalogXpAllETag](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a098fc792364c09ec0a7681dde7539065)|ETag of last GetCatalogXpAll call response.|
|FString|[GetCatalogPricePointsAllETag](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a5b51f5e3badbe2de517747ba1472bf71)|ETag of last GetCatalogPricePointsAll call response.|
|FString|[GetCatalogVendorsAllETag](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a6eeaffe101e1e88748eb11f22f972302)|ETag of last GetCatalogVendorsAll call response.|
|FString|[GetCatalogTimeFramesAllETag](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a71f792816adb9636fc226e70a98be22a)|ETag of last GetCatalogTimeFramesAll call response.|
|FString|[GetCatalogInventoryBucketUseRuleSetsAllETag](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a087cc903b21b5a25a45b030cb4dce33e)|ETag of last GetCatalogInventoryBucketUseRuleSetsAll call response.|
|TMap< int32, TArray< FRH_CatalogCallBlock > >|[PendingGetCatalogItemCalls](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a72a9e161cf234e6843e9b601e7bd925e)|Array of GetCatalogItemCalls yet to be sent to the API layer.|
|TMap< int32, TArray< FRH_CatalogCallBlock > >|[SubmittedGetCatalogItemCalls](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a661262ecd1024e523d6ab788f8e5ce22)|Array of GetCatalogItemCalls yet being executed by the API layer at this time.|
|void|[Initialize](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a4743c425eba445a9c55c5263b43605a9)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1afef8ec5b86a36a604805bf32a279773c)()|Safely tears down the subsystem.|
|void|[GetCatalogAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ae79063c7c03378e80d0e14f24688df3e)(const FRH_CatalogCallBlock & Delegate)|Gets the entire catalog at once.|
|void|[BLUEPRINT_GetCatalogAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1acbc947298516a5aa8f4676455cd0cb9a)(const FRH_CatalogCallDynamicDelegate & Delegate)||
|void|[GetCatalogXpAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a412ea83cfb2fb9aafcbefc2a49f6557d)(const FRH_CatalogCallBlock & Delegate)|Gets all of the xp tables in the catalog.|
|void|[BLUEPRINT_GetCatalogXpAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1aaeb50b6cf551d93c71a1a47cf5a48ab1)(const FRH_CatalogCallDynamicDelegate & Delegate)||
|void|[GetCatalogItem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a71028a2a6b3ea3eafddca54b677749e6)(int32 ItemId, const FRH_CatalogCallBlock & Delegate)|Gets a specific item from the catalog.|
|void|[BLUEPRINT_GetCatalogItem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ab515a213b247b86c208cc44a53a22b53)(int32 ItemId, const FRH_CatalogCallDynamicDelegate & Delegate)||
|void|[GetCatalogInventoryBucketUseRuleSetsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a7a231220866a163574c95c0191111608)(const FRH_CatalogCallBlock & Delegate)|Gets all of the inventory bucket rulesets from the catalog.|
|void|[BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a5a96fc774aa78d82e5cae3bfee4f79ca)(const FRH_CatalogCallDynamicDelegate & Delegate)||
|void|[GetCatalogPricePointsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a1d664d4dfd15ef90b7d5f9eb4dd03d84)(const FRH_CatalogCallBlock & Delegate)|Gets all of the price points from the catalog.|
|void|[BLUEPRINT_GetCatalogPricePointsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a7dc7c4eea69970ceb430a0885b3271fb)(const FRH_CatalogCallDynamicDelegate & Delegate)||
|void|[GetCatalogTimeFramesAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1acc8cbc32148f99f291d6942fc06ff420)(const FRH_CatalogCallBlock & Delegate)|Gets all of the time frames from the catalog.|
|void|[BLUEPRINT_GetCatalogTimeFramesAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a654341730ac3a1daba3d48f1e5fac485)(const FRH_CatalogCallDynamicDelegate & Delegate)||
|void|[GetCatalogVendor](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a1c391d9be422da9d41cd9139184d082a)(const [FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest) & VendorRequest)|Gets the vendors requested as well as their sub vendors.|
|void|[BLUEPRINT_GetCatalogVendor](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a0fe827d5e1ee7a9a1bd4c767fa5324b0)(const [FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest) & VendorRequest)||
|void|[GetCatalogVendorsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ab4903e2a1b6805d3e278b561882b09ad)(const FRH_CatalogCallBlock & Delegate)|Gets the all catalog vendors.|
|void|[BLUEPRINT_GetCatalogVendorsAll](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a27e271a1db43f7c5b0a8528fd43265c4)(const FRH_CatalogCallDynamicDelegate & Delegate)||
|bool|[GetXpTable](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ada2141a6424f5ac1b9260569040f107c)(int32 XpTableId, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) & XpTable)|Gets a cached Xp Table.|
|bool|[GetVendorItemByLootId](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a76b6de7e6855b091c7fb2c86c7b33739)(int32 LootId, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) & LootItem)|Gets a cached vendor item by its loot id.|
|[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) *|[GetCatalogItemByItemId](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a04efb2db20d80225684bee54173f365b)(int32 ItemId)|Gets a cached catalog item by its item id.|
|bool|[GetVendorById](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a17ffa20cdeea67b34ba968f9509ca3c3)(int32 VendorId, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) & Vendor)|Gets a cached vendor by its vendor id.|
|bool|[GetPricePointById](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ae055f143927ec26a0ada9072a1f609bd)(const FGuid & PricePointGuid, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) & PricePoint)|Gets a cached price point by its price point guid.|
|bool|[GetPricePointById](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a102f2ca24bc0de032bbadccc2748faf3)(int32 TimeFrameId, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) & TimeFrame)|Gets a cached time frame by its Time Frame Id.|
|bool|[CanRulesetUsePlatformForBucket](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1af7b597a0de2ea0386b81c5ae52eecb0e)(const FString & InventoryBucketRulesetId, ERHAPI_InventoryBucket TargetBucket, ERHAPI_InventoryBucket ItemInventoryBucket)|Checks if the ruleset can use the platform for the bucket.|
|const TMap< int32, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > &|[GetVendors](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a293846a858b5060aafe476fa87eb789e)()|Gets the cached vendors.|
|const TMap< int32, [URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * > &|[GetCatalogItems](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1af0b329e282e5ac99e915c85ad1359d25)()|Gets the cached catalog items.|
|const TMap< int32, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > &|[GetXpTables](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a990c701f7fd1004659e9cd0b15f29480)()|Gets the xp tables.|
|const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > &|[GetInventoryBucketUseRuleSets](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a2657824ade5d1b5c06292e83b62d15e5)()|Gets the cached inventory bucket rule sets.|
|const TMap< FGuid, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > &|[GetPricePoints](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a0d8b46a9bb4e03b550fb96919281fe0f)()|Gets the cached price points.|
|const TMap< int32, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > &|[GetTimeFrames](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a7742813d09d119e22df4a4d71aab73cc)()|Gets the cached time frames.|
|void|[GetCatalogVendorSingle](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ac215132f09ff28de858ccaa71867e379)(int32 VendorId)|Makes an API call for a single vendor Id.|
|void|[OnGetCatalogVendorResponse](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1aa5b03bf7da3d901bd72292a524522683)(const TGetCatalogVendor::Response & Resp, int32 VendorId)|Handles the response to a Get Catalog Vendor call.|
|void|[OnGetCatalogVendorsAllResponse](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ac3c4b548a43cfc37012c4d87f48d841a)(const TGetCatalogVendorsAll::Response & Resp, const FRH_CatalogCallBlock Delegate)|Handles the response to a Get Catalog Vendor All call.|
|void|[OnGetCatalogAllResponse](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a4b7fa3b1e25ad75fa9b5746358606d8f)(const TGetCatalogAll::Response & Resp, const FRH_CatalogCallBlock Delegate)|Handles the response to a Get Catalog All call.|
|void|[OnGetCatalogXpAllResponse](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1adb23a545351426a6803d6fbd9b21b6ef)(const TGetCatalogXpAll::Response & Resp, const FRH_CatalogCallBlock Delegate)|Handles the response to a Get Catalog Xp All call.|
|void|[OnGetCatalogItemResponse](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a203b5ee176ba1f147306b32706c93b66)(const TGetCatalogItem::Response & Resp, int32 ItemId)|Handles the response to a Get Catalog Item call.|
|void|[OnGetCatalogInventoryBucketUseRuleSetsAllResponse](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a4205a89be06622188225bfb72e3ff951)(const TGetCatalogInventoryBucketUseRuleSetsAll::Response & Resp, const FRH_CatalogCallBlock Delegate)|Handles the response to a Get Catalog Inventory Bucked Use Rule Sets All call.|
|void|[OnGetCatalogPricePointsAllResponse](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1aab6a2dbd4ce611b316b781c346b72e82)(const TGetCatalogPricePointsAll::Response & Resp, const FRH_CatalogCallBlock Delegate)|Handles the response to a Get Catalog Price Points All call.|
|void|[OnGetCatalogTimeFramesAllResponse](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ae6674c35a5c047efb22d2513a5a96a56)(const TGetCatalogTimeFramesAll::Response & Resp, const FRH_CatalogCallBlock Delegate)|Handles the response to a Get Catalog Time Frames All call.|
|void|[ParseAllXpTables](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a0da0440c219f11a65af436c93c6c7e76)(const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & Content)|Parses Xp Tables response into the Xp Table Map.|
|void|[ParseAllInventoryBucketUseRuleSets](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ad4785e6bfefa75c2d71e15e9050bbd2e)(const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & Content)|Parses Inventory Bucket Use Rule Sets response into the Inventory Bucket Use Ruleset Map.|
|[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) *|[ParseCatalogItem](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ad9e76898baaa83f72c99e100a276eebd)(const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & CatalogItem, int32 ItemId)|Parse a Catalog item into the class for it and stores it in the Catalog Items Map.|
|void|[InitPropertiesWithDefaultValues](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a381093c63e6e9c4ed6b66bfe04b7901d)()|Initializes the subsystem with defaults for its cached data.|
|void|[Tick](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1a3516a7d39bcbf01f5d2706ea9afc1f28)(float DeltaTime)|Kick off pending requests to the API layer.|
|bool|[IsTickable](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1af205f84045baf67b117220fec2015ca0)()|Determine if there are pending requests.|
|TStatId|[GetStatId](/unreal-plugins/all/classurh__catalogsubsystem/#classURH__CatalogSubsystem_1ac27e9ac9430094c764f9e68580a21f5e)()||
## Public Types



### `TGetCatalogAll` <a id="classURH__CatalogSubsystem_1a1cf3a5efca0964238be8bde13cdc27f2"></a>

typedef RallyHereAPI::Traits_GetCatalogAll TGetCatalogAllType Define for Get Catalog calls.




### `TGetCatalogXpAll` <a id="classURH__CatalogSubsystem_1a9f1bf618dbf35a16731771f43eb7b14d"></a>

typedef RallyHereAPI::Traits_GetCatalogXpAll TGetCatalogXpAllType Define for Get Catalog Xp calls.




### `TGetCatalogInventoryBucketUseRuleSetsAll` <a id="classURH__CatalogSubsystem_1aac9d74ede66689a3da316964f45d1cbd"></a>

typedef RallyHereAPI::Traits_GetCatalogInventoryBucketUseRuleSetsAll TGetCatalogInventoryBucketUseRuleSetsAllType Define for Get Catalog Inventory Bucket Use Rule Set calls.




### `TGetCatalogPricePointsAll` <a id="classURH__CatalogSubsystem_1ac28fcb22f4619e06d5249cf8ff76f105"></a>

typedef RallyHereAPI::Traits_GetCatalogPricePointsAll TGetCatalogPricePointsAllType Define for Get Catalog Price Point calls.




### `TGetCatalogTimeFramesAll` <a id="classURH__CatalogSubsystem_1aad12c4198dae13e2f6c8a8d76511d511"></a>

typedef RallyHereAPI::Traits_GetCatalogTimeFramesAll TGetCatalogTimeFramesAllType Define for Get Catalog Time Frame calls.




### `TGetCatalogVendor` <a id="classURH__CatalogSubsystem_1a80dd740594cfa64af2675aeb86bc87e8"></a>

typedef RallyHereAPI::Traits_GetCatalogVendor TGetCatalogVendorType Define for Get Catalog Vendor calls.




### `TGetCatalogVendorsAll` <a id="classURH__CatalogSubsystem_1aaf8a27ead9394b0bad26a875bef93a69"></a>

typedef RallyHereAPI::Traits_GetCatalogVendorsAll TGetCatalogVendorsAllType Define for Get Catalog Vendor All calls.




### `TGetCatalogItem` <a id="classURH__CatalogSubsystem_1a81351c9b4871f7529a992d978cbc7f6d"></a>

typedef RallyHereAPI::Traits_GetCatalogItem TGetCatalogItemType Define for Get Catalog Item calls.





## Public Attributes



### `OnCatalogItemAdded` <a id="classURH__CatalogSubsystem_1a60e2593b662b6023fda6401228bea592"></a>

`FRH_CatalogItemUpdatedDelegate URH_CatalogSubsystem::OnCatalogItemAdded`

Delegate that fires whenever a catalog item is added to the cashed catalog items.





## Protected Attributes



### `VendorRequests` <a id="classURH__CatalogSubsystem_1af7893f5433b745ff5b189b81167d71a9"></a>

`TArray<FRHVendorGetRequest> URH_CatalogSubsystem::VendorRequests`

Array of active vendor requests that are in flight and not responded ot yet.




### `XpTables` <a id="classURH__CatalogSubsystem_1a659700dd6e8da2c852227489dce93c2a"></a>

`TMap<int32, FRHAPI_XpTable> URH_CatalogSubsystem::XpTables`

Xp Table Id to Xp Table Map.




### `CatalogVendors` <a id="classURH__CatalogSubsystem_1ac2c9e75cab5a2282cd7eabcb76d206d7"></a>

`TMap<int32, FRHAPI_Vendor> URH_CatalogSubsystem::CatalogVendors`

Vendor Id to Vendor Map.




### `CatalogItems` <a id="classURH__CatalogSubsystem_1a4ef4e31b1427345e2d4cf252142eb7ce"></a>

`TMap<int32, URH_CatalogItem*> URH_CatalogSubsystem::CatalogItems`

Item Id to Catalog Item Map.




### `CatalogLootItems` <a id="classURH__CatalogSubsystem_1a59522a6a14340b0183038eb9afeb32a4"></a>

`TMap<int32, FRHAPI_Loot> URH_CatalogSubsystem::CatalogLootItems`

Loot Id to Catalog Vendor Item Map.




### `TimeFrames` <a id="classURH__CatalogSubsystem_1a7903aa3c86221227f123eb1243febf96"></a>

`TMap<int32, FRHAPI_TimeFrame> URH_CatalogSubsystem::TimeFrames`

Timeframe Id to Timeframe Map.




### `CatalogPricePoints` <a id="classURH__CatalogSubsystem_1a4121dd65bdf66c3d8bb1e0052f02e38c"></a>

`TMap<FGuid, FRHAPI_PricePoint> URH_CatalogSubsystem::CatalogPricePoints`

Price Point ID to Price Points.




### `InventoryBucketUseRuleSets` <a id="classURH__CatalogSubsystem_1a2a9ad401aa84679f58df5890a81a70ad"></a>

`TMap<FString, FRHAPI_InventoryBucketUseRuleSet> URH_CatalogSubsystem::InventoryBucketUseRuleSets`

Inventory Bucket to Inventory Bucket Use Ruleset Map.




### `GetCatalogAllETag` <a id="classURH__CatalogSubsystem_1adeaefdfa290e6241c9fc1a8b3ac678db"></a>

`FString URH_CatalogSubsystem::GetCatalogAllETag`

ETag of last GetCatalogAll call response.




### `GetCatalogXpAllETag` <a id="classURH__CatalogSubsystem_1a098fc792364c09ec0a7681dde7539065"></a>

`FString URH_CatalogSubsystem::GetCatalogXpAllETag`

ETag of last GetCatalogXpAll call response.




### `GetCatalogPricePointsAllETag` <a id="classURH__CatalogSubsystem_1a5b51f5e3badbe2de517747ba1472bf71"></a>

`FString URH_CatalogSubsystem::GetCatalogPricePointsAllETag`

ETag of last GetCatalogPricePointsAll call response.




### `GetCatalogVendorsAllETag` <a id="classURH__CatalogSubsystem_1a6eeaffe101e1e88748eb11f22f972302"></a>

`FString URH_CatalogSubsystem::GetCatalogVendorsAllETag`

ETag of last GetCatalogVendorsAll call response.




### `GetCatalogTimeFramesAllETag` <a id="classURH__CatalogSubsystem_1a71f792816adb9636fc226e70a98be22a"></a>

`FString URH_CatalogSubsystem::GetCatalogTimeFramesAllETag`

ETag of last GetCatalogTimeFramesAll call response.




### `GetCatalogInventoryBucketUseRuleSetsAllETag` <a id="classURH__CatalogSubsystem_1a087cc903b21b5a25a45b030cb4dce33e"></a>

`FString URH_CatalogSubsystem::GetCatalogInventoryBucketUseRuleSetsAllETag`

ETag of last GetCatalogInventoryBucketUseRuleSetsAll call response.




### `PendingGetCatalogItemCalls` <a id="classURH__CatalogSubsystem_1a72a9e161cf234e6843e9b601e7bd925e"></a>

`TMap<int32, TArray<FRH_CatalogCallBlock> > URH_CatalogSubsystem::PendingGetCatalogItemCalls`

Array of GetCatalogItemCalls yet to be sent to the API layer.




### `SubmittedGetCatalogItemCalls` <a id="classURH__CatalogSubsystem_1a661262ecd1024e523d6ab788f8e5ce22"></a>

`TMap<int32, TArray<FRH_CatalogCallBlock> > URH_CatalogSubsystem::SubmittedGetCatalogItemCalls`

Array of GetCatalogItemCalls yet being executed by the API layer at this time.





## Public Functions



### `Initialize` <a id="classURH__CatalogSubsystem_1a4743c425eba445a9c55c5263b43605a9"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__CatalogSubsystem_1afef8ec5b86a36a604805bf32a279773c"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `GetCatalogAll` <a id="classURH__CatalogSubsystem_1ae79063c7c03378e80d0e14f24688df3e"></a>

void GetCatalogAll(const FRH_CatalogCallBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallBlock &|Delegate|

#### Description

Gets the entire catalog at once.


#### Parameters

Delegate
: Callback when the API call is complete. 



### `BLUEPRINT_GetCatalogAll` <a id="classURH__CatalogSubsystem_1acbc947298516a5aa8f4676455cd0cb9a"></a>

void BLUEPRINT_GetCatalogAll(const FRH_CatalogCallDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallDynamicDelegate &|Delegate|

#### Description






### `GetCatalogXpAll` <a id="classURH__CatalogSubsystem_1a412ea83cfb2fb9aafcbefc2a49f6557d"></a>

void GetCatalogXpAll(const FRH_CatalogCallBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallBlock &|Delegate|

#### Description

Gets all of the xp tables in the catalog.


#### Parameters

Delegate
: Callback when the API call is complete. 



### `BLUEPRINT_GetCatalogXpAll` <a id="classURH__CatalogSubsystem_1aaeb50b6cf551d93c71a1a47cf5a48ab1"></a>

void BLUEPRINT_GetCatalogXpAll(const FRH_CatalogCallDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallDynamicDelegate &|Delegate|

#### Description






### `GetCatalogItem` <a id="classURH__CatalogSubsystem_1a71028a2a6b3ea3eafddca54b677749e6"></a>

void GetCatalogItem(int32 ItemId, const FRH_CatalogCallBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|int32|ItemId|
|const FRH_CatalogCallBlock &|Delegate|

#### Description

Gets a specific item from the catalog.


#### Parameters

ItemId
: The item id of the item to get. 
Delegate
: Callback when the API call is complete. 



### `BLUEPRINT_GetCatalogItem` <a id="classURH__CatalogSubsystem_1ab515a213b247b86c208cc44a53a22b53"></a>

void BLUEPRINT_GetCatalogItem(int32 ItemId, const FRH_CatalogCallDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|int32|ItemId|
|const FRH_CatalogCallDynamicDelegate &|Delegate|

#### Description






### `GetCatalogInventoryBucketUseRuleSetsAll` <a id="classURH__CatalogSubsystem_1a7a231220866a163574c95c0191111608"></a>

void GetCatalogInventoryBucketUseRuleSetsAll(const FRH_CatalogCallBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallBlock &|Delegate|

#### Description

Gets all of the inventory bucket rulesets from the catalog.


#### Parameters

Delegate
: Callback when the API call is complete. 



### `BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll` <a id="classURH__CatalogSubsystem_1a5a96fc774aa78d82e5cae3bfee4f79ca"></a>

void BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll(const FRH_CatalogCallDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallDynamicDelegate &|Delegate|

#### Description






### `GetCatalogPricePointsAll` <a id="classURH__CatalogSubsystem_1a1d664d4dfd15ef90b7d5f9eb4dd03d84"></a>

void GetCatalogPricePointsAll(const FRH_CatalogCallBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallBlock &|Delegate|

#### Description

Gets all of the price points from the catalog.


#### Parameters

Delegate
: Callback when the API call is complete. 



### `BLUEPRINT_GetCatalogPricePointsAll` <a id="classURH__CatalogSubsystem_1a7dc7c4eea69970ceb430a0885b3271fb"></a>

void BLUEPRINT_GetCatalogPricePointsAll(const FRH_CatalogCallDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallDynamicDelegate &|Delegate|

#### Description






### `GetCatalogTimeFramesAll` <a id="classURH__CatalogSubsystem_1acc8cbc32148f99f291d6942fc06ff420"></a>

void GetCatalogTimeFramesAll(const FRH_CatalogCallBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallBlock &|Delegate|

#### Description

Gets all of the time frames from the catalog.


#### Parameters

Delegate
: Callback when the API call is complete. 



### `BLUEPRINT_GetCatalogTimeFramesAll` <a id="classURH__CatalogSubsystem_1a654341730ac3a1daba3d48f1e5fac485"></a>

void BLUEPRINT_GetCatalogTimeFramesAll(const FRH_CatalogCallDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallDynamicDelegate &|Delegate|

#### Description






### `GetCatalogVendor` <a id="classURH__CatalogSubsystem_1a1c391d9be422da9d41cd9139184d082a"></a>

void GetCatalogVendor(const [FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest) & VendorRequest)

#### Parameters

| Type | Name |
|------|------|
|const [FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest) &|VendorRequest|

#### Description

Gets the vendors requested as well as their sub vendors.


#### Parameters

VendorRequest
: The vendor request data for the call with list of vendors and callback on complete. 



### `BLUEPRINT_GetCatalogVendor` <a id="classURH__CatalogSubsystem_1a0fe827d5e1ee7a9a1bd4c767fa5324b0"></a>

void BLUEPRINT_GetCatalogVendor(const [FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest) & VendorRequest)

#### Parameters

| Type | Name |
|------|------|
|const [FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest) &|VendorRequest|

#### Description






### `GetCatalogVendorsAll` <a id="classURH__CatalogSubsystem_1ab4903e2a1b6805d3e278b561882b09ad"></a>

void GetCatalogVendorsAll(const FRH_CatalogCallBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallBlock &|Delegate|

#### Description

Gets the all catalog vendors.


#### Parameters

Delegate
: Callback when the API call is complete. 



### `BLUEPRINT_GetCatalogVendorsAll` <a id="classURH__CatalogSubsystem_1a27e271a1db43f7c5b0a8528fd43265c4"></a>

void BLUEPRINT_GetCatalogVendorsAll(const FRH_CatalogCallDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallDynamicDelegate &|Delegate|

#### Description






### `GetXpTable` <a id="classURH__CatalogSubsystem_1ada2141a6424f5ac1b9260569040f107c"></a>

bool GetXpTable(int32 XpTableId, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) & XpTable)

#### Parameters

| Type | Name |
|------|------|
|int32|XpTableId|
|[FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) &|XpTable|

#### Description

Gets a cached Xp Table.


#### Parameters

XpTableId
: The xp table id of the xp table to get. 
XpTable
: The xp table to be returned. 

#### Returns
If true, the Xp Table was found. 



### `GetVendorItemByLootId` <a id="classURH__CatalogSubsystem_1a76b6de7e6855b091c7fb2c86c7b33739"></a>

bool GetVendorItemByLootId(int32 LootId, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) & LootItem)

#### Parameters

| Type | Name |
|------|------|
|int32|LootId|
|[FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) &|LootItem|

#### Description

Gets a cached vendor item by its loot id.


#### Parameters

LootId
: The Loot Id used to look up the vendor item. 
LootItem
: The loot item to be returned. 

#### Returns
If true, the loot item was found. 



### `GetCatalogItemByItemId` <a id="classURH__CatalogSubsystem_1a04efb2db20d80225684bee54173f365b"></a>

[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * GetCatalogItemByItemId(int32 ItemId)

#### Parameters

| Type | Name |
|------|------|
|int32|ItemId|

#### Description

Gets a cached catalog item by its item id.


#### Parameters

ItemId
: The Item Id used to look up the catalog item. 

#### Returns
The catalog item if found, otherwise nullptr. 



### `GetVendorById` <a id="classURH__CatalogSubsystem_1a17ffa20cdeea67b34ba968f9509ca3c3"></a>

bool GetVendorById(int32 VendorId, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) & Vendor)

#### Parameters

| Type | Name |
|------|------|
|int32|VendorId|
|[FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) &|Vendor|

#### Description

Gets a cached vendor by its vendor id.


#### Parameters

VendorId
: The Vendor Id used to look up the vendor. 
Vendor
: The vendor to be returned. 

#### Returns
If true, the vendor was found. 



### `GetPricePointById` <a id="classURH__CatalogSubsystem_1ae055f143927ec26a0ada9072a1f609bd"></a>

bool GetPricePointById(const FGuid & PricePointGuid, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) & PricePoint)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PricePointGuid|
|[FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) &|PricePoint|

#### Description

Gets a cached price point by its price point guid.


#### Parameters

PricePointGuid
: The price point guid used to look up the vendor. 
PricePoint
: The price point to be returned. 

#### Returns
If true, the price point was found. 



### `GetPricePointById` <a id="classURH__CatalogSubsystem_1a102f2ca24bc0de032bbadccc2748faf3"></a>

bool GetPricePointById(int32 TimeFrameId, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) & TimeFrame)

#### Parameters

| Type | Name |
|------|------|
|int32|TimeFrameId|
|[FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) &|TimeFrame|

#### Description

Gets a cached time frame by its Time Frame Id.


#### Parameters

TimeFrameId
: The id used to look up the time frame. 
TimeFrame
: The time frame to be returned. 

#### Returns
If true, the time frame was found. 



### `CanRulesetUsePlatformForBucket` <a id="classURH__CatalogSubsystem_1af7b597a0de2ea0386b81c5ae52eecb0e"></a>

bool CanRulesetUsePlatformForBucket(const FString & InventoryBucketRulesetId, ERHAPI_InventoryBucket TargetBucket, ERHAPI_InventoryBucket ItemInventoryBucket)

#### Parameters

| Type | Name |
|------|------|
|const FString &|InventoryBucketRulesetId|
|ERHAPI_InventoryBucket|TargetBucket|
|ERHAPI_InventoryBucket|ItemInventoryBucket|

#### Description

Checks if the ruleset can use the platform for the bucket.


#### Parameters

InventoryBucketRulesetId
: The ruleset bucket to be used to evaluate the usage. 
TargetBucket
: The bucket that should be used to evaluate the usage. 
ItemInventoryBucket
: The bucket the item is in that is being evaluated. 

#### Returns
If true, the item can be used for the specified bucket. 



### `GetVendors` <a id="classURH__CatalogSubsystem_1a293846a858b5060aafe476fa87eb789e"></a>

const TMap< int32, [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) > & GetVendors()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the cached vendors.




### `GetCatalogItems` <a id="classURH__CatalogSubsystem_1af0b329e282e5ac99e915c85ad1359d25"></a>

const TMap< int32, [URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * > & GetCatalogItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the cached catalog items.




### `GetXpTables` <a id="classURH__CatalogSubsystem_1a990c701f7fd1004659e9cd0b15f29480"></a>

const TMap< int32, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > & GetXpTables()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the xp tables.




### `GetInventoryBucketUseRuleSets` <a id="classURH__CatalogSubsystem_1a2657824ade5d1b5c06292e83b62d15e5"></a>

const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > & GetInventoryBucketUseRuleSets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the cached inventory bucket rule sets.




### `GetPricePoints` <a id="classURH__CatalogSubsystem_1a0d8b46a9bb4e03b550fb96919281fe0f"></a>

const TMap< FGuid, [FRHAPI_PricePoint](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint) > & GetPricePoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the cached price points.




### `GetTimeFrames` <a id="classURH__CatalogSubsystem_1a7742813d09d119e22df4a4d71aab73cc"></a>

const TMap< int32, [FRHAPI_TimeFrame](/unreal-plugins/all/structfrhapi__timeframe/#structFRHAPI__TimeFrame) > & GetTimeFrames()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the cached time frames.





## Protected Functions



### `GetCatalogVendorSingle` <a id="classURH__CatalogSubsystem_1ac215132f09ff28de858ccaa71867e379"></a>

void GetCatalogVendorSingle(int32 VendorId)

#### Parameters

| Type | Name |
|------|------|
|int32|VendorId|

#### Description

Makes an API call for a single vendor Id.


#### Parameters

VendorId
: The Vendor to request. 



### `OnGetCatalogVendorResponse` <a id="classURH__CatalogSubsystem_1aa5b03bf7da3d901bd72292a524522683"></a>

void OnGetCatalogVendorResponse(const TGetCatalogVendor::Response & Resp, int32 VendorId)

#### Parameters

| Type | Name |
|------|------|
|const TGetCatalogVendor::Response &|Resp|
|int32|VendorId|

#### Description

Handles the response to a Get Catalog Vendor call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 
VendorId
: The Vendor Id that was requested. 



### `OnGetCatalogVendorsAllResponse` <a id="classURH__CatalogSubsystem_1ac3c4b548a43cfc37012c4d87f48d841a"></a>

void OnGetCatalogVendorsAllResponse(const TGetCatalogVendorsAll::Response & Resp, const FRH_CatalogCallBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TGetCatalogVendorsAll::Response &|Resp|
|const FRH_CatalogCallBlock|Delegate|

#### Description

Handles the response to a Get Catalog Vendor All call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnGetCatalogAllResponse` <a id="classURH__CatalogSubsystem_1a4b7fa3b1e25ad75fa9b5746358606d8f"></a>

void OnGetCatalogAllResponse(const TGetCatalogAll::Response & Resp, const FRH_CatalogCallBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TGetCatalogAll::Response &|Resp|
|const FRH_CatalogCallBlock|Delegate|

#### Description

Handles the response to a Get Catalog All call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnGetCatalogXpAllResponse` <a id="classURH__CatalogSubsystem_1adb23a545351426a6803d6fbd9b21b6ef"></a>

void OnGetCatalogXpAllResponse(const TGetCatalogXpAll::Response & Resp, const FRH_CatalogCallBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TGetCatalogXpAll::Response &|Resp|
|const FRH_CatalogCallBlock|Delegate|

#### Description

Handles the response to a Get Catalog Xp All call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnGetCatalogItemResponse` <a id="classURH__CatalogSubsystem_1a203b5ee176ba1f147306b32706c93b66"></a>

void OnGetCatalogItemResponse(const TGetCatalogItem::Response & Resp, int32 ItemId)

#### Parameters

| Type | Name |
|------|------|
|const TGetCatalogItem::Response &|Resp|
|int32|ItemId|

#### Description

Handles the response to a Get Catalog Item call.


#### Parameters

Resp
: Response given for the call. 
ItemId
: The Item Id being requested. 



### `OnGetCatalogInventoryBucketUseRuleSetsAllResponse` <a id="classURH__CatalogSubsystem_1a4205a89be06622188225bfb72e3ff951"></a>

void OnGetCatalogInventoryBucketUseRuleSetsAllResponse(const TGetCatalogInventoryBucketUseRuleSetsAll::Response & Resp, const FRH_CatalogCallBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TGetCatalogInventoryBucketUseRuleSetsAll::Response &|Resp|
|const FRH_CatalogCallBlock|Delegate|

#### Description

Handles the response to a Get Catalog Inventory Bucked Use Rule Sets All call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnGetCatalogPricePointsAllResponse` <a id="classURH__CatalogSubsystem_1aab6a2dbd4ce611b316b781c346b72e82"></a>

void OnGetCatalogPricePointsAllResponse(const TGetCatalogPricePointsAll::Response & Resp, const FRH_CatalogCallBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TGetCatalogPricePointsAll::Response &|Resp|
|const FRH_CatalogCallBlock|Delegate|

#### Description

Handles the response to a Get Catalog Price Points All call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnGetCatalogTimeFramesAllResponse` <a id="classURH__CatalogSubsystem_1ae6674c35a5c047efb22d2513a5a96a56"></a>

void OnGetCatalogTimeFramesAllResponse(const TGetCatalogTimeFramesAll::Response & Resp, const FRH_CatalogCallBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const TGetCatalogTimeFramesAll::Response &|Resp|
|const FRH_CatalogCallBlock|Delegate|

#### Description

Handles the response to a Get Catalog Time Frames All call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `ParseAllXpTables` <a id="classURH__CatalogSubsystem_1a0da0440c219f11a65af436c93c6c7e76"></a>

void ParseAllXpTables(const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) & Content)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_XpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables) &|Content|

#### Description

Parses Xp Tables response into the Xp Table Map.


#### Parameters

Content
: Xp Tables to parse. 



### `ParseAllInventoryBucketUseRuleSets` <a id="classURH__CatalogSubsystem_1ad4785e6bfefa75c2d71e15e9050bbd2e"></a>

void ParseAllInventoryBucketUseRuleSets(const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) & Content)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InventoryBucketUseRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets) &|Content|

#### Description

Parses Inventory Bucket Use Rule Sets response into the Inventory Bucket Use Ruleset Map.


#### Parameters

Content
: Inventory Bucket Use Rule Sets to parse. 



### `ParseCatalogItem` <a id="classURH__CatalogSubsystem_1ad9e76898baaa83f72c99e100a276eebd"></a>

[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * ParseCatalogItem(const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & CatalogItem, int32 ItemId)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) &|CatalogItem|
|int32|ItemId|

#### Description

Parse a Catalog item into the class for it and stores it in the Catalog Items Map.


#### Parameters

CatalogItem
: Item to be parsed. 
ItemId
: Item Id of the item being parsed. 

#### Returns
The Catalog Item as its class. 



### `InitPropertiesWithDefaultValues` <a id="classURH__CatalogSubsystem_1a381093c63e6e9c4ed6b66bfe04b7901d"></a>

void InitPropertiesWithDefaultValues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initializes the subsystem with defaults for its cached data.




### `Tick` <a id="classURH__CatalogSubsystem_1a3516a7d39bcbf01f5d2706ea9afc1f28"></a>

void Tick(float DeltaTime)

#### Parameters

| Type | Name |
|------|------|
|float|DeltaTime|

#### Description

Kick off pending requests to the API layer.




### `IsTickable` <a id="classURH__CatalogSubsystem_1af205f84045baf67b117220fec2015ca0"></a>

bool IsTickable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Determine if there are pending requests.




### `GetStatId` <a id="classURH__CatalogSubsystem_1ac27e9ac9430094c764f9e68580a21f5e"></a>

TStatId GetStatId()

#### Parameters

| Type | Name |
|------|------|

#### Description



Gets the catalog subsystem stat Id. 




