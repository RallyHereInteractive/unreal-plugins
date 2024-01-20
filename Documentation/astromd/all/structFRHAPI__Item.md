---
title: FRHAPI_Item Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

An Item. Item come in a couple of different flavors; determined by the &#x60;type&#x60; field. &#x60;Unit&#x60; items are stored in a player&#39;s inventory. &#x60;Recipe&#x60; items are not stored in a player&#39;s inventory and are used to fulfill SubVendor Loot. &#x60;RecipeWithPriceReduction&#x60; items are not stored in a player&#39;s inventory and are used to fulfill SubVendor Loot but at a reduced cost if the Player owns some of the Loot. &#x60;Entitlement&#x60; items are stored in a player&#39;s inventory and are fulfilled to the player each time an Inventory Session is created and when the Entitlement is fulfilled to the Player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47)|Custom data associated with the resource.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16)|true if CustomData_Optional has been set to a value|
|ERHAPI_ItemType|[Type_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe)|The type of item.|
|bool|[Type_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0cc1c2c5e9833d046535ee67c6044d5b)|true if Type_Optional has been set to a value|
|int32|[LegacyType_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a9105c322f788b420009e19957dc9ef3f)||
|bool|[LegacyType_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a351cad97d7e9511c49556f52d97779a5)|true if LegacyType_Optional has been set to a value|
|int32|[LegacySubtype_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab36aeeabb1bfc49aef612af5412ba4dc)||
|bool|[LegacySubtype_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a44394066ad672903ea7f73102064936f)|true if LegacySubtype_Optional has been set to a value|
|int32|[RefItemId_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a1fbf7b95a5761100f9ce8c2ce59afcd0)||
|bool|[RefItemId_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aaeecdeed1bedbf5b25576e28ccd2c2b1)|true if RefItemId_Optional has been set to a value|
|int32|[AvailabilityFlags_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ac0bdf0c75ad5b86f6032270151f4ad0e)||
|bool|[AvailabilityFlags_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a67bf7d179a5204d5ca2386582f437248)|true if AvailabilityFlags_Optional has been set to a value|
|int32|[EntitledLootId_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf)|This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled.|
|bool|[EntitledLootId_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af42c3dae98945b853dd863c498951980)|true if EntitledLootId_Optional has been set to a value|
|int32|[LevelXpTableId_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471)|The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.|
|bool|[LevelXpTableId_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544)|true if LevelXpTableId_Optional has been set to a value|
|int32|[LevelVendorId_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e)|The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.|
|bool|[LevelVendorId_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387)|true if LevelVendorId_Optional has been set to a value|
|int32|[CouponDiscountCurrencyItemId_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aac9de3a09ab34aa9feabf22202daae80)|The item of the currency used by this coupon. This is only valid for an unit Item.|
|bool|[CouponDiscountCurrencyItemId_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0809de18d707f4af24019793672bbd25)|true if CouponDiscountCurrencyItemId_Optional has been set to a value|
|float|[CouponDiscountPercentage_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a809a2484d750588a4c62337e2b47ead5)|The percentage of the discount. This is only valid for an unit Item.|
|bool|[CouponDiscountPercentage_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a4ebe06f6d6bc6a533dfdcecc4808ca13)|true if CouponDiscountPercentage_Optional has been set to a value|
|bool|[CouponConsumeOnUse_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab8a0663be30e0c950774761d1ce2d296)|If true, the coupon will be consumed when used; reducing the Player's Inventory quantity by 1. This is only valid for an unit Item.|
|bool|[CouponConsumeOnUse_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a6901af6f3e9c28935f44f0a479391d27)|true if CouponConsumeOnUse_Optional has been set to a value|
|int32|[ItemPortalUseRulesetId_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ae1b19e8759742961745126c8858ce167)||
|bool|[ItemPortalUseRulesetId_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad179470bc0eac912b9de30cec699f45d)|true if ItemPortalUseRulesetId_Optional has been set to a value|
|FString|[InventoryBucketUseRuleSetId_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0e0d5505b14a2ac60dbadfd639eda910)|The Inventory Bucket Use Rule Set ID that determines how this item can be used across buckets.|
|bool|[InventoryBucketUseRuleSetId_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a)|true if InventoryBucketUseRuleSetId_Optional has been set to a value|
|TArray< int32 >|[CouponDiscountLoot_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd)|List of Loot IDs this item can discount.|
|bool|[CouponDiscountLoot_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09)|true if CouponDiscountLoot_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a687dd73fd3d8a4ac35d1f9e632b3460d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a23d9459ebb2ebc9a8fc3781de9621ac9)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a9877423eeda4551d0bcce4e413010756)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a5ebebbc4accead78b04905b5c948c8b4)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a5e66fa669417adc7f827c588bac9173d)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a3925a150ee30d43bf0234cf1127104c3)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a389c7829835ae2f827bce3502727c3bc)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a5cc497718caf078f6dd085bb4d559bea)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a49ff21f8fec4d08ee632f8b80e4b8bf0)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|ERHAPI_ItemType &|[GetType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a49d7d21797f5c8b07132e77c2ea1d923)()|Gets the value of Type_Optional, regardless of it having been set.|
|const ERHAPI_ItemType &|[GetType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa9476bcc0de419b823716064af6f58f4)()|Gets the value of Type_Optional, regardless of it having been set.|
|const ERHAPI_ItemType &|[GetType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a726e036301d0b7fe5e66ffd83fa6616b)(const ERHAPI_ItemType & DefaultValue)|Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a00930eaab0b51d2209fff3d0f9c92548)(ERHAPI_ItemType & OutValue)|Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_ItemType *|[GetTypeOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a1eade82e2d073a97f111ef5d41d61a97)()|Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_ItemType *|[GetTypeOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a9302c15c16ac8cb34173cc62146928a7)()|Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a7b1d736294a70487685d68997edd4733)(ERHAPI_ItemType NewValue)|Sets the value of Type_Optional and also sets Type_IsSet to true.|
|void|[ClearType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84)()|Clears the value of Type_Optional and sets Type_IsSet to false.|
|int32 &|[GetLegacyType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a04ac5a2377e920488d956e648a597581)()|Gets the value of LegacyType_Optional, regardless of it having been set.|
|const int32 &|[GetLegacyType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0249b4278450493e0bf5c5a17b3990d4)()|Gets the value of LegacyType_Optional, regardless of it having been set.|
|const int32 &|[GetLegacyType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ada591e1567140b0dff56d3e6f7ee894e)(const int32 & DefaultValue)|Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a248418aa5571ba2b2f2adb9c42949403)(int32 & OutValue)|Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLegacyTypeOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a4966c021583a1ebc75e1d046810af089)()|Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLegacyTypeOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a5273cfcb41b37911075cd4f42f8bf4d0)()|Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ae9d498c47e565bc417c8dbbbfd8d4a51)(int32 NewValue)|Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.|
|void|[ClearLegacyType](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef)()|Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.|
|bool|[IsLegacyTypeDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a5ee3a8b2559b1163c4f14bbba5f2fba4)()|Returns true if LegacyType_Optional is set and matches the default value.|
|void|[SetLegacyTypeToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a720984f8c98db38b0d40bc8e5682cba5)()|Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.|
|int32 &|[GetLegacySubtype](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aac7331e9aa9739c56a5658299e143b48)()|Gets the value of LegacySubtype_Optional, regardless of it having been set.|
|const int32 &|[GetLegacySubtype](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af147dfa3a518ac3993216f8335554ce4)()|Gets the value of LegacySubtype_Optional, regardless of it having been set.|
|const int32 &|[GetLegacySubtype](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0536a243a417f203a28e0ce3ace60e34)(const int32 & DefaultValue)|Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacySubtype](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab311f92e98d5238fe1fd5ed58a18eed4)(int32 & OutValue)|Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLegacySubtypeOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a9ed845d4d0e60ad1e7304c3307ceee27)()|Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLegacySubtypeOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a33fbbb353c4dd6122543386c2215c0a2)()|Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacySubtype](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1afb3136cf1c2b32531c8001fe35d05eca)(int32 NewValue)|Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true.|
|void|[ClearLegacySubtype](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976)()|Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false.|
|bool|[IsLegacySubtypeDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a1066b8828dab67a895e13d0140679562)()|Returns true if LegacySubtype_Optional is set and matches the default value.|
|void|[SetLegacySubtypeToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a26a6a394bb57a448f1feb37c175011f2)()|Sets the value of LegacySubtype_Optional to its default and also sets LegacySubtype_IsSet to true.|
|int32 &|[GetRefItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa32c02a492dda2691acb404843752aa3)()|Gets the value of RefItemId_Optional, regardless of it having been set.|
|const int32 &|[GetRefItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1add1c1d7019f59acd9c88ba3f701f755c)()|Gets the value of RefItemId_Optional, regardless of it having been set.|
|const int32 &|[GetRefItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ae43911780e299c9673e093aed4df2d9f)(const int32 & DefaultValue)|Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRefItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ae883e7828a3c06fd368959887ef2d88d)(int32 & OutValue)|Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetRefItemIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a3a158858c397392c94e5cc5dcca15c88)()|Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetRefItemIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a76c7e93bd03a29a4e516972a399a5ed1)()|Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRefItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1acbc9c7df2738425ce43a4deec17a94ba)(int32 NewValue)|Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true.|
|void|[ClearRefItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754)()|Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false.|
|bool|[IsRefItemIdDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a1af549c0e4ae73ae1e2a21cc8db4f2f5)()|Returns true if RefItemId_Optional is set and matches the default value.|
|void|[SetRefItemIdToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a5ffafc7f7977147c1304e6b2d9a0c57d)()|Sets the value of RefItemId_Optional to its default and also sets RefItemId_IsSet to true.|
|int32 &|[GetAvailabilityFlags](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ace06eaef976957049107ac7d7bc7f1ea)()|Gets the value of AvailabilityFlags_Optional, regardless of it having been set.|
|const int32 &|[GetAvailabilityFlags](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad2687831575df1161609773684a1af4a)()|Gets the value of AvailabilityFlags_Optional, regardless of it having been set.|
|const int32 &|[GetAvailabilityFlags](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aabb2d536459b2cf5fd5372975b526583)(const int32 & DefaultValue)|Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAvailabilityFlags](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a9a7ae008c53e0a3fa3c44ee868c1d057)(int32 & OutValue)|Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetAvailabilityFlagsOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad5157c44c115d3b028d2df26acc8aeee)()|Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetAvailabilityFlagsOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a60ca2804ebcfa5d5abaec6558f2b4f53)()|Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAvailabilityFlags](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a803e61d32457cc419cdcd887924b2e9b)(int32 NewValue)|Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true.|
|void|[ClearAvailabilityFlags](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8)()|Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false.|
|bool|[IsAvailabilityFlagsDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a23be4efbe75354ed2cc0aa5188c827fb)()|Returns true if AvailabilityFlags_Optional is set and matches the default value.|
|void|[SetAvailabilityFlagsToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aef8c5832626e314d6a91b041d1014bc9)()|Sets the value of AvailabilityFlags_Optional to its default and also sets AvailabilityFlags_IsSet to true.|
|int32 &|[GetEntitledLootId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa663a42295c435eee5a53d3abe079784)()|Gets the value of EntitledLootId_Optional, regardless of it having been set.|
|const int32 &|[GetEntitledLootId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ae3ee53922ccc4d4ffe3d569a6c8a0e26)()|Gets the value of EntitledLootId_Optional, regardless of it having been set.|
|const int32 &|[GetEntitledLootId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0c7124adafa090e465992506d4ed2635)(const int32 & DefaultValue)|Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEntitledLootId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a3b5abfb93e819a326cb9df5a5d172cac)(int32 & OutValue)|Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetEntitledLootIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a7bd57a25619dbe4969f27e8e702baf37)()|Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetEntitledLootIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af16a86fe61c601d2a6e9d33dc04ed94e)()|Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEntitledLootId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a6d59e2dfe98874ac4fa3ab71d1ce5831)(int32 NewValue)|Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true.|
|void|[ClearEntitledLootId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda)()|Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false.|
|bool|[IsEntitledLootIdDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a89de44af3b2baea1dcf09c5297058dfb)()|Returns true if EntitledLootId_Optional is set and matches the default value.|
|void|[SetEntitledLootIdToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa92bb7b9880364b596cca22b0833546b)()|Sets the value of EntitledLootId_Optional to its default and also sets EntitledLootId_IsSet to true.|
|int32 &|[GetLevelXpTableId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a44e61fc34bbfea9afea0e3c4055ce6be)()|Gets the value of LevelXpTableId_Optional, regardless of it having been set.|
|const int32 &|[GetLevelXpTableId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a2b469bf022b1752972b45d91204a04cd)()|Gets the value of LevelXpTableId_Optional, regardless of it having been set.|
|const int32 &|[GetLevelXpTableId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0d3910b394c00b4d1cc284653ee611b1)(const int32 & DefaultValue)|Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLevelXpTableId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a9ea97eb49e4e90964abce5ab17f270b5)(int32 & OutValue)|Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLevelXpTableIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a1199be5a1b0e601285cf2b73ffeb8d4f)()|Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLevelXpTableIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af10405d5fafaf567a5e6d42b5a13b228)()|Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLevelXpTableId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a2cd6ef77eaeb33f7ddb376e2483f01a8)(int32 NewValue)|Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true.|
|void|[ClearLevelXpTableId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463)()|Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false.|
|bool|[IsLevelXpTableIdDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa20e8f9abb29c6b87f5f47e4c3b54ba9)()|Returns true if LevelXpTableId_Optional is set and matches the default value.|
|void|[SetLevelXpTableIdToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ac6f63b9312de41a44c7c3c49f4e17fde)()|Sets the value of LevelXpTableId_Optional to its default and also sets LevelXpTableId_IsSet to true.|
|int32 &|[GetLevelVendorId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa6f49533c15b8a509d17e62a8c34c01f)()|Gets the value of LevelVendorId_Optional, regardless of it having been set.|
|const int32 &|[GetLevelVendorId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a760bdc790c71299d23ae7ef9ca1079f6)()|Gets the value of LevelVendorId_Optional, regardless of it having been set.|
|const int32 &|[GetLevelVendorId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a9afd8152f91ba3169a8e289872144577)(const int32 & DefaultValue)|Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLevelVendorId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a3cb4c5ed96cfea63a1a0b270d53c0016)(int32 & OutValue)|Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLevelVendorIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a433fb76caf7ffc80ef4ed2a3b3a8c931)()|Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLevelVendorIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab3c28975c164af1aefa070818df8de9a)()|Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLevelVendorId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ae2ecf97c77a90be08af5a893f6a2df5d)(int32 NewValue)|Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true.|
|void|[ClearLevelVendorId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2)()|Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false.|
|bool|[IsLevelVendorIdDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a6142502c0d3ecc38bc20254af3cffc22)()|Returns true if LevelVendorId_Optional is set and matches the default value.|
|void|[SetLevelVendorIdToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad31d4c1ae0420e87716468dccbc6cb44)()|Sets the value of LevelVendorId_Optional to its default and also sets LevelVendorId_IsSet to true.|
|int32 &|[GetCouponDiscountCurrencyItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1abe691e103c37e8ea19820f713eb37bc5)()|Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.|
|const int32 &|[GetCouponDiscountCurrencyItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad395eb7249ce6232d7655bebbf96321c)()|Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.|
|const int32 &|[GetCouponDiscountCurrencyItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa8af0136a73257d951a2518bfd139e66)(const int32 & DefaultValue)|Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCouponDiscountCurrencyItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ae288be3af3f201bb47f7b1593804ec81)(int32 & OutValue)|Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetCouponDiscountCurrencyItemIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a142d1193619939bd0e65aac44cf17c8e)()|Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetCouponDiscountCurrencyItemIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a458af7661f1215e8d61709ef84e57b13)()|Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCouponDiscountCurrencyItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af7d32d57725687b43f6840667dcc7091)(int32 NewValue)|Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true.|
|void|[ClearCouponDiscountCurrencyItemId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675)()|Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false.|
|bool|[IsCouponDiscountCurrencyItemIdDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad2a4ae4c698ce16d4da22a01ebabff5c)()|Returns true if CouponDiscountCurrencyItemId_Optional is set and matches the default value.|
|void|[SetCouponDiscountCurrencyItemIdToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a96e413cc85c150d5304c819aa99fc188)()|Sets the value of CouponDiscountCurrencyItemId_Optional to its default and also sets CouponDiscountCurrencyItemId_IsSet to true.|
|float &|[GetCouponDiscountPercentage](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ae14bab7c0189f8aebebda30323b9eedd)()|Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.|
|const float &|[GetCouponDiscountPercentage](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a408d793116e0d7b84481c11b50d71b14)()|Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.|
|const float &|[GetCouponDiscountPercentage](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a843bbcfe5a04068e9118868a5e082a2b)(const float & DefaultValue)|Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCouponDiscountPercentage](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab4edbf9af9acbcab0d31e952fa3d1dcf)(float & OutValue)|Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false.|
|float *|[GetCouponDiscountPercentageOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a6f12938ad107192e2616ae82c09734f1)()|Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.|
|const float *|[GetCouponDiscountPercentageOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a8ac0fe931259abf7b4f2eed6505c351b)()|Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCouponDiscountPercentage](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a3c42bde8c8fe2559becf1596c59964cc)(float NewValue)|Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true.|
|void|[ClearCouponDiscountPercentage](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b)()|Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false.|
|bool &|[GetCouponConsumeOnUse](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad2e8f18426e341528612a403943965ec)()|Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.|
|const bool &|[GetCouponConsumeOnUse](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aaee1f063191491d7d50d9347f5c61ccf)()|Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.|
|const bool &|[GetCouponConsumeOnUse](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0fca1718bcdec9078f84bbd70602396e)(const bool & DefaultValue)|Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCouponConsumeOnUse](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a26420a8731f2fc00a508a421e0c7f796)(bool & OutValue)|Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetCouponConsumeOnUseOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a5221677a2821ca61790dc3dd46712b8b)()|Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetCouponConsumeOnUseOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af2e4ce0b6a8c90db90275bc71b06e407)()|Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCouponConsumeOnUse](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa8611f54defe5fd58cd15599ce5572af)(bool NewValue)|Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true.|
|void|[ClearCouponConsumeOnUse](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480)()|Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false.|
|bool|[IsCouponConsumeOnUseDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a27ee21d9a1af8be2d1e0970fb9d122fa)()|Returns true if CouponConsumeOnUse_Optional is set and matches the default value.|
|void|[SetCouponConsumeOnUseToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a002f4547e9b061e2792f368936a4e2a0)()|Sets the value of CouponConsumeOnUse_Optional to its default and also sets CouponConsumeOnUse_IsSet to true.|
|int32 &|[GetItemPortalUseRulesetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a8972dc76b212d972a2b518211add4f17)()|Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.|
|const int32 &|[GetItemPortalUseRulesetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a6525e7a7b3a5260b9865e5cfc4b3ce6c)()|Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.|
|const int32 &|[GetItemPortalUseRulesetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a38dc8fff9eb52ab927aacb88d1f8d807)(const int32 & DefaultValue)|Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItemPortalUseRulesetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1acc1530a5f5f45c01bfc15a770433e5a0)(int32 & OutValue)|Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetItemPortalUseRulesetIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1afeea8bdbf8fe60bad93d0653e45acabe)()|Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetItemPortalUseRulesetIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ad5fae52c9c04ed93bc99d43fa978b874)()|Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItemPortalUseRulesetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af2a51d3059748feb92fb592024745c81)(int32 NewValue)|Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true.|
|void|[ClearItemPortalUseRulesetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5)()|Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false.|
|bool|[IsItemPortalUseRulesetIdDefaultValue](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a855c742cd4f2f1dbf1c7de69a353927e)()|Returns true if ItemPortalUseRulesetId_Optional is set and matches the default value.|
|void|[SetItemPortalUseRulesetIdToDefault](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a0585c33836f0635d3b4722f7bfbf4f3c)()|Sets the value of ItemPortalUseRulesetId_Optional to its default and also sets ItemPortalUseRulesetId_IsSet to true.|
|FString &|[GetInventoryBucketUseRuleSetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1adc865be0e57d90f11d3336f90d58e37b)()|Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.|
|const FString &|[GetInventoryBucketUseRuleSetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a00e38d4622520fb4d44a6c1888affa49)()|Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.|
|const FString &|[GetInventoryBucketUseRuleSetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ac83d1dd2d3d5f48c4c2e9e1e2f4d69a4)(const FString & DefaultValue)|Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInventoryBucketUseRuleSetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af4b6b107c6f4ff2ea9e3f2c084e8e72a)(FString & OutValue)|Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetInventoryBucketUseRuleSetIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a51a6dff502fb6049b4da1d5503621184)()|Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetInventoryBucketUseRuleSetIdOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa1ce2c494619d89b26673412bd3ffe72)()|Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInventoryBucketUseRuleSetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a4bbf283d0a50cdb0af0427382dad97f2)(FString NewValue)|Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true.|
|void|[ClearInventoryBucketUseRuleSetId](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0)()|Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false.|
|TArray< int32 > &|[GetCouponDiscountLoot](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a7adb63a40f2f2b7f6541d5b55d2807bd)()|Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetCouponDiscountLoot](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ab877e45b8915a49289b107e6f02f3361)()|Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetCouponDiscountLoot](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1afaf36c430134ec34d4715b67603ed34d)(const TArray< int32 > & DefaultValue)|Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCouponDiscountLoot](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a647967de5190c2eae1cc4cc305545a50)(TArray< int32 > & OutValue)|Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false.|
|TArray< int32 > *|[GetCouponDiscountLootOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1af66046a0af411934999cb28bda91e77f)()|Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< int32 > *|[GetCouponDiscountLootOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1abe675a41f0f1ef5f7f9bdaf3e833c400)()|Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCouponDiscountLoot](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a8c4932ea15f56e6a886e13724c0c6649)(TArray< int32 > NewValue)|Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true.|
|void|[ClearCouponDiscountLoot](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b)()|Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a8f388d37b6e6b80682ae5ee8b0c5ed02)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aa17b33e1a9258a96ba0d54c2177ea1fe)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1aadd57ea24afcf3893b31c9c1dae78f28)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a74a10cf52863208f9cfb9e26484a1b6f)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1ac97664c780c86ddd5ca17ba51a821bab)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a55b6dfdc9bce487875a616eb1dd5dd38)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a4f32c751b5078fcd85eb039554773d8a)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47"></a>

`TMap<FString, FString> FRHAPI_Item::CustomData_Optional`

Custom data associated with the resource.




### `CustomData_IsSet` <a id="structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16"></a>

`bool FRHAPI_Item::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Type_Optional` <a id="structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe"></a>

`ERHAPI_ItemType FRHAPI_Item::Type_Optional`

The type of item.




### `Type_IsSet` <a id="structFRHAPI__Item_1a0cc1c2c5e9833d046535ee67c6044d5b"></a>

`bool FRHAPI_Item::Type_IsSet`

true if Type_Optional has been set to a value




### `LegacyType_Optional` <a id="structFRHAPI__Item_1a9105c322f788b420009e19957dc9ef3f"></a>

`int32 FRHAPI_Item::LegacyType_Optional`






### `LegacyType_IsSet` <a id="structFRHAPI__Item_1a351cad97d7e9511c49556f52d97779a5"></a>

`bool FRHAPI_Item::LegacyType_IsSet`

true if LegacyType_Optional has been set to a value




### `LegacySubtype_Optional` <a id="structFRHAPI__Item_1ab36aeeabb1bfc49aef612af5412ba4dc"></a>

`int32 FRHAPI_Item::LegacySubtype_Optional`






### `LegacySubtype_IsSet` <a id="structFRHAPI__Item_1a44394066ad672903ea7f73102064936f"></a>

`bool FRHAPI_Item::LegacySubtype_IsSet`

true if LegacySubtype_Optional has been set to a value




### `RefItemId_Optional` <a id="structFRHAPI__Item_1a1fbf7b95a5761100f9ce8c2ce59afcd0"></a>

`int32 FRHAPI_Item::RefItemId_Optional`






### `RefItemId_IsSet` <a id="structFRHAPI__Item_1aaeecdeed1bedbf5b25576e28ccd2c2b1"></a>

`bool FRHAPI_Item::RefItemId_IsSet`

true if RefItemId_Optional has been set to a value




### `AvailabilityFlags_Optional` <a id="structFRHAPI__Item_1ac0bdf0c75ad5b86f6032270151f4ad0e"></a>

`int32 FRHAPI_Item::AvailabilityFlags_Optional`






### `AvailabilityFlags_IsSet` <a id="structFRHAPI__Item_1a67bf7d179a5204d5ca2386582f437248"></a>

`bool FRHAPI_Item::AvailabilityFlags_IsSet`

true if AvailabilityFlags_Optional has been set to a value




### `EntitledLootId_Optional` <a id="structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf"></a>

`int32 FRHAPI_Item::EntitledLootId_Optional`

This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled.




### `EntitledLootId_IsSet` <a id="structFRHAPI__Item_1af42c3dae98945b853dd863c498951980"></a>

`bool FRHAPI_Item::EntitledLootId_IsSet`

true if EntitledLootId_Optional has been set to a value




### `LevelXpTableId_Optional` <a id="structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471"></a>

`int32 FRHAPI_Item::LevelXpTableId_Optional`

The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.




### `LevelXpTableId_IsSet` <a id="structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544"></a>

`bool FRHAPI_Item::LevelXpTableId_IsSet`

true if LevelXpTableId_Optional has been set to a value




### `LevelVendorId_Optional` <a id="structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e"></a>

`int32 FRHAPI_Item::LevelVendorId_Optional`

The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.




### `LevelVendorId_IsSet` <a id="structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387"></a>

`bool FRHAPI_Item::LevelVendorId_IsSet`

true if LevelVendorId_Optional has been set to a value




### `CouponDiscountCurrencyItemId_Optional` <a id="structFRHAPI__Item_1aac9de3a09ab34aa9feabf22202daae80"></a>

`int32 FRHAPI_Item::CouponDiscountCurrencyItemId_Optional`

The item of the currency used by this coupon. This is only valid for an unit Item.




### `CouponDiscountCurrencyItemId_IsSet` <a id="structFRHAPI__Item_1a0809de18d707f4af24019793672bbd25"></a>

`bool FRHAPI_Item::CouponDiscountCurrencyItemId_IsSet`

true if CouponDiscountCurrencyItemId_Optional has been set to a value




### `CouponDiscountPercentage_Optional` <a id="structFRHAPI__Item_1a809a2484d750588a4c62337e2b47ead5"></a>

`float FRHAPI_Item::CouponDiscountPercentage_Optional`

The percentage of the discount. This is only valid for an unit Item.




### `CouponDiscountPercentage_IsSet` <a id="structFRHAPI__Item_1a4ebe06f6d6bc6a533dfdcecc4808ca13"></a>

`bool FRHAPI_Item::CouponDiscountPercentage_IsSet`

true if CouponDiscountPercentage_Optional has been set to a value




### `CouponConsumeOnUse_Optional` <a id="structFRHAPI__Item_1ab8a0663be30e0c950774761d1ce2d296"></a>

`bool FRHAPI_Item::CouponConsumeOnUse_Optional`

If true, the coupon will be consumed when used; reducing the Player's Inventory quantity by 1. This is only valid for an unit Item.




### `CouponConsumeOnUse_IsSet` <a id="structFRHAPI__Item_1a6901af6f3e9c28935f44f0a479391d27"></a>

`bool FRHAPI_Item::CouponConsumeOnUse_IsSet`

true if CouponConsumeOnUse_Optional has been set to a value




### `ItemPortalUseRulesetId_Optional` <a id="structFRHAPI__Item_1ae1b19e8759742961745126c8858ce167"></a>

`int32 FRHAPI_Item::ItemPortalUseRulesetId_Optional`






### `ItemPortalUseRulesetId_IsSet` <a id="structFRHAPI__Item_1ad179470bc0eac912b9de30cec699f45d"></a>

`bool FRHAPI_Item::ItemPortalUseRulesetId_IsSet`

true if ItemPortalUseRulesetId_Optional has been set to a value




### `InventoryBucketUseRuleSetId_Optional` <a id="structFRHAPI__Item_1a0e0d5505b14a2ac60dbadfd639eda910"></a>

`FString FRHAPI_Item::InventoryBucketUseRuleSetId_Optional`

The Inventory Bucket Use Rule Set ID that determines how this item can be used across buckets.




### `InventoryBucketUseRuleSetId_IsSet` <a id="structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a"></a>

`bool FRHAPI_Item::InventoryBucketUseRuleSetId_IsSet`

true if InventoryBucketUseRuleSetId_Optional has been set to a value




### `CouponDiscountLoot_Optional` <a id="structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd"></a>

`TArray<int32> FRHAPI_Item::CouponDiscountLoot_Optional`

List of Loot IDs this item can discount.




### `CouponDiscountLoot_IsSet` <a id="structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09"></a>

`bool FRHAPI_Item::CouponDiscountLoot_IsSet`

true if CouponDiscountLoot_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527"></a>

`FRHAPI_CacheInfo FRHAPI_Item::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084"></a>

`bool FRHAPI_Item::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Item_1a687dd73fd3d8a4ac35d1f9e632b3460d"></a>

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



### `WriteJson` <a id="structFRHAPI__Item_1a23d9459ebb2ebc9a8fc3781de9621ac9"></a>

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



### `GetCustomData` <a id="structFRHAPI__Item_1a9877423eeda4551d0bcce4e413010756"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Item_1a5ebebbc4accead78b04905b5c948c8b4"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Item_1a5e66fa669417adc7f827c588bac9173d"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__Item_1a3925a150ee30d43bf0234cf1127104c3"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__Item_1a389c7829835ae2f827bce3502727c3bc"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__Item_1a5cc497718caf078f6dd085bb4d559bea"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__Item_1a49ff21f8fec4d08ee632f8b80e4b8bf0"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetType` <a id="structFRHAPI__Item_1a49d7d21797f5c8b07132e77c2ea1d923"></a>

ERHAPI_ItemType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type_Optional, regardless of it having been set.




### `GetType` <a id="structFRHAPI__Item_1aa9476bcc0de419b823716064af6f58f4"></a>

const ERHAPI_ItemType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type_Optional, regardless of it having been set.




### `GetType` <a id="structFRHAPI__Item_1a726e036301d0b7fe5e66ffd83fa6616b"></a>

const ERHAPI_ItemType & GetType(const ERHAPI_ItemType & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ItemType &|DefaultValue|

#### Description

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetType` <a id="structFRHAPI__Item_1a00930eaab0b51d2209fff3d0f9c92548"></a>

bool GetType(ERHAPI_ItemType & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_ItemType &|OutValue|

#### Description

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.




### `GetTypeOrNull` <a id="structFRHAPI__Item_1a1eade82e2d073a97f111ef5d41d61a97"></a>

ERHAPI_ItemType * GetTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.




### `GetTypeOrNull` <a id="structFRHAPI__Item_1a9302c15c16ac8cb34173cc62146928a7"></a>

const ERHAPI_ItemType * GetTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.




### `SetType` <a id="structFRHAPI__Item_1a7b1d736294a70487685d68997edd4733"></a>

void SetType(ERHAPI_ItemType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_ItemType|NewValue|

#### Description

Sets the value of Type_Optional and also sets Type_IsSet to true.




### `ClearType` <a id="structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84"></a>

void ClearType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Type_Optional and sets Type_IsSet to false.




### `GetLegacyType` <a id="structFRHAPI__Item_1a04ac5a2377e920488d956e648a597581"></a>

int32 & GetLegacyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyType_Optional, regardless of it having been set.




### `GetLegacyType` <a id="structFRHAPI__Item_1a0249b4278450493e0bf5c5a17b3990d4"></a>

const int32 & GetLegacyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyType_Optional, regardless of it having been set.




### `GetLegacyType` <a id="structFRHAPI__Item_1ada591e1567140b0dff56d3e6f7ee894e"></a>

const int32 & GetLegacyType(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyType` <a id="structFRHAPI__Item_1a248418aa5571ba2b2f2adb9c42949403"></a>

bool GetLegacyType(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyTypeOrNull` <a id="structFRHAPI__Item_1a4966c021583a1ebc75e1d046810af089"></a>

int32 * GetLegacyTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyTypeOrNull` <a id="structFRHAPI__Item_1a5273cfcb41b37911075cd4f42f8bf4d0"></a>

const int32 * GetLegacyTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyType` <a id="structFRHAPI__Item_1ae9d498c47e565bc417c8dbbbfd8d4a51"></a>

void SetLegacyType(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.




### `ClearLegacyType` <a id="structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef"></a>

void ClearLegacyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.




### `IsLegacyTypeDefaultValue` <a id="structFRHAPI__Item_1a5ee3a8b2559b1163c4f14bbba5f2fba4"></a>

bool IsLegacyTypeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LegacyType_Optional is set and matches the default value.




### `SetLegacyTypeToDefault` <a id="structFRHAPI__Item_1a720984f8c98db38b0d40bc8e5682cba5"></a>

void SetLegacyTypeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.




### `GetLegacySubtype` <a id="structFRHAPI__Item_1aac7331e9aa9739c56a5658299e143b48"></a>

int32 & GetLegacySubtype()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacySubtype_Optional, regardless of it having been set.




### `GetLegacySubtype` <a id="structFRHAPI__Item_1af147dfa3a518ac3993216f8335554ce4"></a>

const int32 & GetLegacySubtype()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacySubtype_Optional, regardless of it having been set.




### `GetLegacySubtype` <a id="structFRHAPI__Item_1a0536a243a417f203a28e0ce3ace60e34"></a>

const int32 & GetLegacySubtype(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacySubtype` <a id="structFRHAPI__Item_1ab311f92e98d5238fe1fd5ed58a18eed4"></a>

bool GetLegacySubtype(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacySubtypeOrNull` <a id="structFRHAPI__Item_1a9ed845d4d0e60ad1e7304c3307ceee27"></a>

int32 * GetLegacySubtypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacySubtypeOrNull` <a id="structFRHAPI__Item_1a33fbbb353c4dd6122543386c2215c0a2"></a>

const int32 * GetLegacySubtypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacySubtype` <a id="structFRHAPI__Item_1afb3136cf1c2b32531c8001fe35d05eca"></a>

void SetLegacySubtype(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true.




### `ClearLegacySubtype` <a id="structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976"></a>

void ClearLegacySubtype()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false.




### `IsLegacySubtypeDefaultValue` <a id="structFRHAPI__Item_1a1066b8828dab67a895e13d0140679562"></a>

bool IsLegacySubtypeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LegacySubtype_Optional is set and matches the default value.




### `SetLegacySubtypeToDefault` <a id="structFRHAPI__Item_1a26a6a394bb57a448f1feb37c175011f2"></a>

void SetLegacySubtypeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LegacySubtype_Optional to its default and also sets LegacySubtype_IsSet to true.




### `GetRefItemId` <a id="structFRHAPI__Item_1aa32c02a492dda2691acb404843752aa3"></a>

int32 & GetRefItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefItemId_Optional, regardless of it having been set.




### `GetRefItemId` <a id="structFRHAPI__Item_1add1c1d7019f59acd9c88ba3f701f755c"></a>

const int32 & GetRefItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefItemId_Optional, regardless of it having been set.




### `GetRefItemId` <a id="structFRHAPI__Item_1ae43911780e299c9673e093aed4df2d9f"></a>

const int32 & GetRefItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRefItemId` <a id="structFRHAPI__Item_1ae883e7828a3c06fd368959887ef2d88d"></a>

bool GetRefItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetRefItemIdOrNull` <a id="structFRHAPI__Item_1a3a158858c397392c94e5cc5dcca15c88"></a>

int32 * GetRefItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetRefItemIdOrNull` <a id="structFRHAPI__Item_1a76c7e93bd03a29a4e516972a399a5ed1"></a>

const int32 * GetRefItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetRefItemId` <a id="structFRHAPI__Item_1acbc9c7df2738425ce43a4deec17a94ba"></a>

void SetRefItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true.




### `ClearRefItemId` <a id="structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754"></a>

void ClearRefItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false.




### `IsRefItemIdDefaultValue` <a id="structFRHAPI__Item_1a1af549c0e4ae73ae1e2a21cc8db4f2f5"></a>

bool IsRefItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if RefItemId_Optional is set and matches the default value.




### `SetRefItemIdToDefault` <a id="structFRHAPI__Item_1a5ffafc7f7977147c1304e6b2d9a0c57d"></a>

void SetRefItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of RefItemId_Optional to its default and also sets RefItemId_IsSet to true.




### `GetAvailabilityFlags` <a id="structFRHAPI__Item_1ace06eaef976957049107ac7d7bc7f1ea"></a>

int32 & GetAvailabilityFlags()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AvailabilityFlags_Optional, regardless of it having been set.




### `GetAvailabilityFlags` <a id="structFRHAPI__Item_1ad2687831575df1161609773684a1af4a"></a>

const int32 & GetAvailabilityFlags()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AvailabilityFlags_Optional, regardless of it having been set.




### `GetAvailabilityFlags` <a id="structFRHAPI__Item_1aabb2d536459b2cf5fd5372975b526583"></a>

const int32 & GetAvailabilityFlags(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAvailabilityFlags` <a id="structFRHAPI__Item_1a9a7ae008c53e0a3fa3c44ee868c1d057"></a>

bool GetAvailabilityFlags(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false.




### `GetAvailabilityFlagsOrNull` <a id="structFRHAPI__Item_1ad5157c44c115d3b028d2df26acc8aeee"></a>

int32 * GetAvailabilityFlagsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.




### `GetAvailabilityFlagsOrNull` <a id="structFRHAPI__Item_1a60ca2804ebcfa5d5abaec6558f2b4f53"></a>

const int32 * GetAvailabilityFlagsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.




### `SetAvailabilityFlags` <a id="structFRHAPI__Item_1a803e61d32457cc419cdcd887924b2e9b"></a>

void SetAvailabilityFlags(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true.




### `ClearAvailabilityFlags` <a id="structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8"></a>

void ClearAvailabilityFlags()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false.




### `IsAvailabilityFlagsDefaultValue` <a id="structFRHAPI__Item_1a23be4efbe75354ed2cc0aa5188c827fb"></a>

bool IsAvailabilityFlagsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AvailabilityFlags_Optional is set and matches the default value.




### `SetAvailabilityFlagsToDefault` <a id="structFRHAPI__Item_1aef8c5832626e314d6a91b041d1014bc9"></a>

void SetAvailabilityFlagsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AvailabilityFlags_Optional to its default and also sets AvailabilityFlags_IsSet to true.




### `GetEntitledLootId` <a id="structFRHAPI__Item_1aa663a42295c435eee5a53d3abe079784"></a>

int32 & GetEntitledLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EntitledLootId_Optional, regardless of it having been set.




### `GetEntitledLootId` <a id="structFRHAPI__Item_1ae3ee53922ccc4d4ffe3d569a6c8a0e26"></a>

const int32 & GetEntitledLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EntitledLootId_Optional, regardless of it having been set.




### `GetEntitledLootId` <a id="structFRHAPI__Item_1a0c7124adafa090e465992506d4ed2635"></a>

const int32 & GetEntitledLootId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEntitledLootId` <a id="structFRHAPI__Item_1a3b5abfb93e819a326cb9df5a5d172cac"></a>

bool GetEntitledLootId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false.




### `GetEntitledLootIdOrNull` <a id="structFRHAPI__Item_1a7bd57a25619dbe4969f27e8e702baf37"></a>

int32 * GetEntitledLootIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.




### `GetEntitledLootIdOrNull` <a id="structFRHAPI__Item_1af16a86fe61c601d2a6e9d33dc04ed94e"></a>

const int32 * GetEntitledLootIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.




### `SetEntitledLootId` <a id="structFRHAPI__Item_1a6d59e2dfe98874ac4fa3ab71d1ce5831"></a>

void SetEntitledLootId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true.




### `ClearEntitledLootId` <a id="structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda"></a>

void ClearEntitledLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false.




### `IsEntitledLootIdDefaultValue` <a id="structFRHAPI__Item_1a89de44af3b2baea1dcf09c5297058dfb"></a>

bool IsEntitledLootIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if EntitledLootId_Optional is set and matches the default value.




### `SetEntitledLootIdToDefault` <a id="structFRHAPI__Item_1aa92bb7b9880364b596cca22b0833546b"></a>

void SetEntitledLootIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of EntitledLootId_Optional to its default and also sets EntitledLootId_IsSet to true.




### `GetLevelXpTableId` <a id="structFRHAPI__Item_1a44e61fc34bbfea9afea0e3c4055ce6be"></a>

int32 & GetLevelXpTableId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LevelXpTableId_Optional, regardless of it having been set.




### `GetLevelXpTableId` <a id="structFRHAPI__Item_1a2b469bf022b1752972b45d91204a04cd"></a>

const int32 & GetLevelXpTableId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LevelXpTableId_Optional, regardless of it having been set.




### `GetLevelXpTableId` <a id="structFRHAPI__Item_1a0d3910b394c00b4d1cc284653ee611b1"></a>

const int32 & GetLevelXpTableId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLevelXpTableId` <a id="structFRHAPI__Item_1a9ea97eb49e4e90964abce5ab17f270b5"></a>

bool GetLevelXpTableId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false.




### `GetLevelXpTableIdOrNull` <a id="structFRHAPI__Item_1a1199be5a1b0e601285cf2b73ffeb8d4f"></a>

int32 * GetLevelXpTableIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.




### `GetLevelXpTableIdOrNull` <a id="structFRHAPI__Item_1af10405d5fafaf567a5e6d42b5a13b228"></a>

const int32 * GetLevelXpTableIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.




### `SetLevelXpTableId` <a id="structFRHAPI__Item_1a2cd6ef77eaeb33f7ddb376e2483f01a8"></a>

void SetLevelXpTableId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true.




### `ClearLevelXpTableId` <a id="structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463"></a>

void ClearLevelXpTableId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false.




### `IsLevelXpTableIdDefaultValue` <a id="structFRHAPI__Item_1aa20e8f9abb29c6b87f5f47e4c3b54ba9"></a>

bool IsLevelXpTableIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LevelXpTableId_Optional is set and matches the default value.




### `SetLevelXpTableIdToDefault` <a id="structFRHAPI__Item_1ac6f63b9312de41a44c7c3c49f4e17fde"></a>

void SetLevelXpTableIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LevelXpTableId_Optional to its default and also sets LevelXpTableId_IsSet to true.




### `GetLevelVendorId` <a id="structFRHAPI__Item_1aa6f49533c15b8a509d17e62a8c34c01f"></a>

int32 & GetLevelVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LevelVendorId_Optional, regardless of it having been set.




### `GetLevelVendorId` <a id="structFRHAPI__Item_1a760bdc790c71299d23ae7ef9ca1079f6"></a>

const int32 & GetLevelVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LevelVendorId_Optional, regardless of it having been set.




### `GetLevelVendorId` <a id="structFRHAPI__Item_1a9afd8152f91ba3169a8e289872144577"></a>

const int32 & GetLevelVendorId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLevelVendorId` <a id="structFRHAPI__Item_1a3cb4c5ed96cfea63a1a0b270d53c0016"></a>

bool GetLevelVendorId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false.




### `GetLevelVendorIdOrNull` <a id="structFRHAPI__Item_1a433fb76caf7ffc80ef4ed2a3b3a8c931"></a>

int32 * GetLevelVendorIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.




### `GetLevelVendorIdOrNull` <a id="structFRHAPI__Item_1ab3c28975c164af1aefa070818df8de9a"></a>

const int32 * GetLevelVendorIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.




### `SetLevelVendorId` <a id="structFRHAPI__Item_1ae2ecf97c77a90be08af5a893f6a2df5d"></a>

void SetLevelVendorId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true.




### `ClearLevelVendorId` <a id="structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2"></a>

void ClearLevelVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false.




### `IsLevelVendorIdDefaultValue` <a id="structFRHAPI__Item_1a6142502c0d3ecc38bc20254af3cffc22"></a>

bool IsLevelVendorIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LevelVendorId_Optional is set and matches the default value.




### `SetLevelVendorIdToDefault` <a id="structFRHAPI__Item_1ad31d4c1ae0420e87716468dccbc6cb44"></a>

void SetLevelVendorIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LevelVendorId_Optional to its default and also sets LevelVendorId_IsSet to true.




### `GetCouponDiscountCurrencyItemId` <a id="structFRHAPI__Item_1abe691e103c37e8ea19820f713eb37bc5"></a>

int32 & GetCouponDiscountCurrencyItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.




### `GetCouponDiscountCurrencyItemId` <a id="structFRHAPI__Item_1ad395eb7249ce6232d7655bebbf96321c"></a>

const int32 & GetCouponDiscountCurrencyItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.




### `GetCouponDiscountCurrencyItemId` <a id="structFRHAPI__Item_1aa8af0136a73257d951a2518bfd139e66"></a>

const int32 & GetCouponDiscountCurrencyItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCouponDiscountCurrencyItemId` <a id="structFRHAPI__Item_1ae288be3af3f201bb47f7b1593804ec81"></a>

bool GetCouponDiscountCurrencyItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetCouponDiscountCurrencyItemIdOrNull` <a id="structFRHAPI__Item_1a142d1193619939bd0e65aac44cf17c8e"></a>

int32 * GetCouponDiscountCurrencyItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetCouponDiscountCurrencyItemIdOrNull` <a id="structFRHAPI__Item_1a458af7661f1215e8d61709ef84e57b13"></a>

const int32 * GetCouponDiscountCurrencyItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetCouponDiscountCurrencyItemId` <a id="structFRHAPI__Item_1af7d32d57725687b43f6840667dcc7091"></a>

void SetCouponDiscountCurrencyItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true.




### `ClearCouponDiscountCurrencyItemId` <a id="structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675"></a>

void ClearCouponDiscountCurrencyItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false.




### `IsCouponDiscountCurrencyItemIdDefaultValue` <a id="structFRHAPI__Item_1ad2a4ae4c698ce16d4da22a01ebabff5c"></a>

bool IsCouponDiscountCurrencyItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CouponDiscountCurrencyItemId_Optional is set and matches the default value.




### `SetCouponDiscountCurrencyItemIdToDefault` <a id="structFRHAPI__Item_1a96e413cc85c150d5304c819aa99fc188"></a>

void SetCouponDiscountCurrencyItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CouponDiscountCurrencyItemId_Optional to its default and also sets CouponDiscountCurrencyItemId_IsSet to true.




### `GetCouponDiscountPercentage` <a id="structFRHAPI__Item_1ae14bab7c0189f8aebebda30323b9eedd"></a>

float & GetCouponDiscountPercentage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.




### `GetCouponDiscountPercentage` <a id="structFRHAPI__Item_1a408d793116e0d7b84481c11b50d71b14"></a>

const float & GetCouponDiscountPercentage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.




### `GetCouponDiscountPercentage` <a id="structFRHAPI__Item_1a843bbcfe5a04068e9118868a5e082a2b"></a>

const float & GetCouponDiscountPercentage(const float & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const float &|DefaultValue|

#### Description

Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCouponDiscountPercentage` <a id="structFRHAPI__Item_1ab4edbf9af9acbcab0d31e952fa3d1dcf"></a>

bool GetCouponDiscountPercentage(float & OutValue)

#### Parameters

| Type | Name |
|------|------|
|float &|OutValue|

#### Description

Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false.




### `GetCouponDiscountPercentageOrNull` <a id="structFRHAPI__Item_1a6f12938ad107192e2616ae82c09734f1"></a>

float * GetCouponDiscountPercentageOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.




### `GetCouponDiscountPercentageOrNull` <a id="structFRHAPI__Item_1a8ac0fe931259abf7b4f2eed6505c351b"></a>

const float * GetCouponDiscountPercentageOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.




### `SetCouponDiscountPercentage` <a id="structFRHAPI__Item_1a3c42bde8c8fe2559becf1596c59964cc"></a>

void SetCouponDiscountPercentage(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true.




### `ClearCouponDiscountPercentage` <a id="structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b"></a>

void ClearCouponDiscountPercentage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false.




### `GetCouponConsumeOnUse` <a id="structFRHAPI__Item_1ad2e8f18426e341528612a403943965ec"></a>

bool & GetCouponConsumeOnUse()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.




### `GetCouponConsumeOnUse` <a id="structFRHAPI__Item_1aaee1f063191491d7d50d9347f5c61ccf"></a>

const bool & GetCouponConsumeOnUse()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.




### `GetCouponConsumeOnUse` <a id="structFRHAPI__Item_1a0fca1718bcdec9078f84bbd70602396e"></a>

const bool & GetCouponConsumeOnUse(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCouponConsumeOnUse` <a id="structFRHAPI__Item_1a26420a8731f2fc00a508a421e0c7f796"></a>

bool GetCouponConsumeOnUse(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false.




### `GetCouponConsumeOnUseOrNull` <a id="structFRHAPI__Item_1a5221677a2821ca61790dc3dd46712b8b"></a>

bool * GetCouponConsumeOnUseOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.




### `GetCouponConsumeOnUseOrNull` <a id="structFRHAPI__Item_1af2e4ce0b6a8c90db90275bc71b06e407"></a>

const bool * GetCouponConsumeOnUseOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.




### `SetCouponConsumeOnUse` <a id="structFRHAPI__Item_1aa8611f54defe5fd58cd15599ce5572af"></a>

void SetCouponConsumeOnUse(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true.




### `ClearCouponConsumeOnUse` <a id="structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480"></a>

void ClearCouponConsumeOnUse()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false.




### `IsCouponConsumeOnUseDefaultValue` <a id="structFRHAPI__Item_1a27ee21d9a1af8be2d1e0970fb9d122fa"></a>

bool IsCouponConsumeOnUseDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CouponConsumeOnUse_Optional is set and matches the default value.




### `SetCouponConsumeOnUseToDefault` <a id="structFRHAPI__Item_1a002f4547e9b061e2792f368936a4e2a0"></a>

void SetCouponConsumeOnUseToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CouponConsumeOnUse_Optional to its default and also sets CouponConsumeOnUse_IsSet to true.




### `GetItemPortalUseRulesetId` <a id="structFRHAPI__Item_1a8972dc76b212d972a2b518211add4f17"></a>

int32 & GetItemPortalUseRulesetId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.




### `GetItemPortalUseRulesetId` <a id="structFRHAPI__Item_1a6525e7a7b3a5260b9865e5cfc4b3ce6c"></a>

const int32 & GetItemPortalUseRulesetId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.




### `GetItemPortalUseRulesetId` <a id="structFRHAPI__Item_1a38dc8fff9eb52ab927aacb88d1f8d807"></a>

const int32 & GetItemPortalUseRulesetId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItemPortalUseRulesetId` <a id="structFRHAPI__Item_1acc1530a5f5f45c01bfc15a770433e5a0"></a>

bool GetItemPortalUseRulesetId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false.




### `GetItemPortalUseRulesetIdOrNull` <a id="structFRHAPI__Item_1afeea8bdbf8fe60bad93d0653e45acabe"></a>

int32 * GetItemPortalUseRulesetIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.




### `GetItemPortalUseRulesetIdOrNull` <a id="structFRHAPI__Item_1ad5fae52c9c04ed93bc99d43fa978b874"></a>

const int32 * GetItemPortalUseRulesetIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.




### `SetItemPortalUseRulesetId` <a id="structFRHAPI__Item_1af2a51d3059748feb92fb592024745c81"></a>

void SetItemPortalUseRulesetId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true.




### `ClearItemPortalUseRulesetId` <a id="structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5"></a>

void ClearItemPortalUseRulesetId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false.




### `IsItemPortalUseRulesetIdDefaultValue` <a id="structFRHAPI__Item_1a855c742cd4f2f1dbf1c7de69a353927e"></a>

bool IsItemPortalUseRulesetIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ItemPortalUseRulesetId_Optional is set and matches the default value.




### `SetItemPortalUseRulesetIdToDefault` <a id="structFRHAPI__Item_1a0585c33836f0635d3b4722f7bfbf4f3c"></a>

void SetItemPortalUseRulesetIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ItemPortalUseRulesetId_Optional to its default and also sets ItemPortalUseRulesetId_IsSet to true.




### `GetInventoryBucketUseRuleSetId` <a id="structFRHAPI__Item_1adc865be0e57d90f11d3336f90d58e37b"></a>

FString & GetInventoryBucketUseRuleSetId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.




### `GetInventoryBucketUseRuleSetId` <a id="structFRHAPI__Item_1a00e38d4622520fb4d44a6c1888affa49"></a>

const FString & GetInventoryBucketUseRuleSetId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.




### `GetInventoryBucketUseRuleSetId` <a id="structFRHAPI__Item_1ac83d1dd2d3d5f48c4c2e9e1e2f4d69a4"></a>

const FString & GetInventoryBucketUseRuleSetId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInventoryBucketUseRuleSetId` <a id="structFRHAPI__Item_1af4b6b107c6f4ff2ea9e3f2c084e8e72a"></a>

bool GetInventoryBucketUseRuleSetId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false.




### `GetInventoryBucketUseRuleSetIdOrNull` <a id="structFRHAPI__Item_1a51a6dff502fb6049b4da1d5503621184"></a>

FString * GetInventoryBucketUseRuleSetIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.




### `GetInventoryBucketUseRuleSetIdOrNull` <a id="structFRHAPI__Item_1aa1ce2c494619d89b26673412bd3ffe72"></a>

const FString * GetInventoryBucketUseRuleSetIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.




### `SetInventoryBucketUseRuleSetId` <a id="structFRHAPI__Item_1a4bbf283d0a50cdb0af0427382dad97f2"></a>

void SetInventoryBucketUseRuleSetId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true.




### `ClearInventoryBucketUseRuleSetId` <a id="structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0"></a>

void ClearInventoryBucketUseRuleSetId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false.




### `GetCouponDiscountLoot` <a id="structFRHAPI__Item_1a7adb63a40f2f2b7f6541d5b55d2807bd"></a>

TArray< int32 > & GetCouponDiscountLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.




### `GetCouponDiscountLoot` <a id="structFRHAPI__Item_1ab877e45b8915a49289b107e6f02f3361"></a>

const TArray< int32 > & GetCouponDiscountLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.




### `GetCouponDiscountLoot` <a id="structFRHAPI__Item_1afaf36c430134ec34d4715b67603ed34d"></a>

const TArray< int32 > & GetCouponDiscountLoot(const TArray< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|DefaultValue|

#### Description

Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCouponDiscountLoot` <a id="structFRHAPI__Item_1a647967de5190c2eae1cc4cc305545a50"></a>

bool GetCouponDiscountLoot(TArray< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 > &|OutValue|

#### Description

Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false.




### `GetCouponDiscountLootOrNull` <a id="structFRHAPI__Item_1af66046a0af411934999cb28bda91e77f"></a>

TArray< int32 > * GetCouponDiscountLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.




### `GetCouponDiscountLootOrNull` <a id="structFRHAPI__Item_1abe675a41f0f1ef5f7f9bdaf3e833c400"></a>

const TArray< int32 > * GetCouponDiscountLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.




### `SetCouponDiscountLoot` <a id="structFRHAPI__Item_1a8c4932ea15f56e6a886e13724c0c6649"></a>

void SetCouponDiscountLoot(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true.




### `ClearCouponDiscountLoot` <a id="structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b"></a>

void ClearCouponDiscountLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__Item_1a8f388d37b6e6b80682ae5ee8b0c5ed02"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Item_1aa17b33e1a9258a96ba0d54c2177ea1fe"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Item_1aadd57ea24afcf3893b31c9c1dae78f28"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__Item_1a74a10cf52863208f9cfb9e26484a1b6f"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Item_1ac97664c780c86ddd5ca17ba51a821bab"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Item_1a55b6dfdc9bce487875a616eb1dd5dd38"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__Item_1a4f32c751b5078fcd85eb039554773d8a"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





