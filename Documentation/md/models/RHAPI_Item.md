# RHAPI_Item <a id="group__RHAPI__Item"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Item`](#structFRHAPI__Item) | An Item. Item come in a couple of different flavors; determined by the &#x60;type&#x60; field. &#x60;Unit&#x60; items are stored in a player&#39;s inventory. &#x60;Recipe&#x60; items are not stored in a player&#39;s inventory and are used to fulfill SubVendor Loot. &#x60;RecipeWithPriceReduction&#x60; items are not stored in a player&#39;s inventory and are used to fulfill SubVendor Loot but at a reduced cost if the Player owns some of the Loot. &#x60;Entitlement&#x60; items are stored in a player&#39;s inventory and are fulfilled to the player each time an Inventory Session is created and when the Entitlement is fulfilled to the Player.

## struct `FRHAPI_Item` <a id="structFRHAPI__Item"></a>

```
struct FRHAPI_Item
  : public FRHAPI_Model
```

An Item. Item come in a couple of different flavors; determined by the &#x60;type&#x60; field. &#x60;Unit&#x60; items are stored in a player&#39;s inventory. &#x60;Recipe&#x60; items are not stored in a player&#39;s inventory and are used to fulfill SubVendor Loot. &#x60;RecipeWithPriceReduction&#x60; items are not stored in a player&#39;s inventory and are used to fulfill SubVendor Loot but at a reduced cost if the Player owns some of the Loot. &#x60;Entitlement&#x60; items are stored in a player&#39;s inventory and are fulfilled to the player each time an Inventory Session is created and when the Entitlement is fulfilled to the Player.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16) | true if CustomData_Optional has been set to a value
`public ERHAPI_ItemType `[`Type_Optional`](#structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe) | The type of item.
`public bool `[`Type_IsSet`](#structFRHAPI__Item_1a0cc1c2c5e9833d046535ee67c6044d5b) | true if Type_Optional has been set to a value
`public int32 `[`LegacyType_Optional`](#structFRHAPI__Item_1a9105c322f788b420009e19957dc9ef3f) | 
`public bool `[`LegacyType_IsSet`](#structFRHAPI__Item_1a351cad97d7e9511c49556f52d97779a5) | true if LegacyType_Optional has been set to a value
`public int32 `[`LegacySubtype_Optional`](#structFRHAPI__Item_1ab36aeeabb1bfc49aef612af5412ba4dc) | 
`public bool `[`LegacySubtype_IsSet`](#structFRHAPI__Item_1a44394066ad672903ea7f73102064936f) | true if LegacySubtype_Optional has been set to a value
`public int32 `[`RefItemId_Optional`](#structFRHAPI__Item_1a1fbf7b95a5761100f9ce8c2ce59afcd0) | 
`public bool `[`RefItemId_IsSet`](#structFRHAPI__Item_1aaeecdeed1bedbf5b25576e28ccd2c2b1) | true if RefItemId_Optional has been set to a value
`public int32 `[`AvailabilityFlags_Optional`](#structFRHAPI__Item_1ac0bdf0c75ad5b86f6032270151f4ad0e) | 
`public bool `[`AvailabilityFlags_IsSet`](#structFRHAPI__Item_1a67bf7d179a5204d5ca2386582f437248) | true if AvailabilityFlags_Optional has been set to a value
`public int32 `[`EntitledLootId_Optional`](#structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf) | This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled.
`public bool `[`EntitledLootId_IsSet`](#structFRHAPI__Item_1af42c3dae98945b853dd863c498951980) | true if EntitledLootId_Optional has been set to a value
`public int32 `[`LevelXpTableId_Optional`](#structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471) | The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.
`public bool `[`LevelXpTableId_IsSet`](#structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544) | true if LevelXpTableId_Optional has been set to a value
`public int32 `[`LevelVendorId_Optional`](#structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e) | The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.
`public bool `[`LevelVendorId_IsSet`](#structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387) | true if LevelVendorId_Optional has been set to a value
`public int32 `[`CouponDiscountCurrencyItemId_Optional`](#structFRHAPI__Item_1aac9de3a09ab34aa9feabf22202daae80) | The item of the currency used by this coupon. This is only valid for an unit Item.
`public bool `[`CouponDiscountCurrencyItemId_IsSet`](#structFRHAPI__Item_1a0809de18d707f4af24019793672bbd25) | true if CouponDiscountCurrencyItemId_Optional has been set to a value
`public float `[`CouponDiscountPercentage_Optional`](#structFRHAPI__Item_1a809a2484d750588a4c62337e2b47ead5) | The percentage of the discount. This is only valid for an unit Item.
`public bool `[`CouponDiscountPercentage_IsSet`](#structFRHAPI__Item_1a4ebe06f6d6bc6a533dfdcecc4808ca13) | true if CouponDiscountPercentage_Optional has been set to a value
`public bool `[`CouponConsumeOnUse_Optional`](#structFRHAPI__Item_1ab8a0663be30e0c950774761d1ce2d296) | If true, the coupon will be consumed when used; reducing the Player's Inventory quantity by 1. This is only valid for an unit Item.
`public bool `[`CouponConsumeOnUse_IsSet`](#structFRHAPI__Item_1a6901af6f3e9c28935f44f0a479391d27) | true if CouponConsumeOnUse_Optional has been set to a value
`public int32 `[`ItemPortalUseRulesetId_Optional`](#structFRHAPI__Item_1ae1b19e8759742961745126c8858ce167) | 
`public bool `[`ItemPortalUseRulesetId_IsSet`](#structFRHAPI__Item_1ad179470bc0eac912b9de30cec699f45d) | true if ItemPortalUseRulesetId_Optional has been set to a value
`public FString `[`InventoryBucketUseRuleSetId_Optional`](#structFRHAPI__Item_1a0e0d5505b14a2ac60dbadfd639eda910) | The Inventory Bucket Use Rule Set ID that determines how this item can be used across buckets.
`public bool `[`InventoryBucketUseRuleSetId_IsSet`](#structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a) | true if InventoryBucketUseRuleSetId_Optional has been set to a value
`public TArray< int32 > `[`CouponDiscountLoot_Optional`](#structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd) | List of Loot IDs this item can discount.
`public bool `[`CouponDiscountLoot_IsSet`](#structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09) | true if CouponDiscountLoot_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Item_1a687dd73fd3d8a4ac35d1f9e632b3460d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Item_1a23d9459ebb2ebc9a8fc3781de9621ac9)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a9877423eeda4551d0bcce4e413010756)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5ebebbc4accead78b04905b5c948c8b4)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5e66fa669417adc7f827c588bac9173d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Item_1a3925a150ee30d43bf0234cf1127104c3)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a389c7829835ae2f827bce3502727c3bc)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a5cc497718caf078f6dd085bb4d559bea)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Item_1a49ff21f8fec4d08ee632f8b80e4b8bf0)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a49d7d21797f5c8b07132e77c2ea1d923)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1aa9476bcc0de419b823716064af6f58f4)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a726e036301d0b7fe5e66ffd83fa6616b)`(const ERHAPI_ItemType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__Item_1a00930eaab0b51d2209fff3d0f9c92548)`(ERHAPI_ItemType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a1eade82e2d073a97f111ef5d41d61a97)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a9302c15c16ac8cb34173cc62146928a7)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__Item_1a7b1d736294a70487685d68997edd4733)`(ERHAPI_ItemType NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`ClearType`](#structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a04ac5a2377e920488d956e648a597581)`()` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a0249b4278450493e0bf5c5a17b3990d4)`() const` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1ada591e1567140b0dff56d3e6f7ee894e)`(const int32 & DefaultValue) const` | Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyType`](#structFRHAPI__Item_1a248418aa5571ba2b2f2adb9c42949403)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a4966c021583a1ebc75e1d046810af089)`()` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a5273cfcb41b37911075cd4f42f8bf4d0)`() const` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyType`](#structFRHAPI__Item_1ae9d498c47e565bc417c8dbbbfd8d4a51)`(int32 NewValue)` | Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.
`public inline void `[`ClearLegacyType`](#structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef)`()` | Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.
`public inline bool `[`IsLegacyTypeDefaultValue`](#structFRHAPI__Item_1a5ee3a8b2559b1163c4f14bbba5f2fba4)`() const` | Returns true if LegacyType_Optional is set and matches the default value.
`public inline void `[`SetLegacyTypeToDefault`](#structFRHAPI__Item_1a720984f8c98db38b0d40bc8e5682cba5)`()` | Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.
`public inline int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1aac7331e9aa9739c56a5658299e143b48)`()` | Gets the value of LegacySubtype_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1af147dfa3a518ac3993216f8335554ce4)`() const` | Gets the value of LegacySubtype_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1a0536a243a417f203a28e0ce3ace60e34)`(const int32 & DefaultValue) const` | Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacySubtype`](#structFRHAPI__Item_1ab311f92e98d5238fe1fd5ed58a18eed4)`(int32 & OutValue) const` | Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a9ed845d4d0e60ad1e7304c3307ceee27)`()` | Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a33fbbb353c4dd6122543386c2215c0a2)`() const` | Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacySubtype`](#structFRHAPI__Item_1afb3136cf1c2b32531c8001fe35d05eca)`(int32 NewValue)` | Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true.
`public inline void `[`ClearLegacySubtype`](#structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976)`()` | Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false.
`public inline bool `[`IsLegacySubtypeDefaultValue`](#structFRHAPI__Item_1a1066b8828dab67a895e13d0140679562)`() const` | Returns true if LegacySubtype_Optional is set and matches the default value.
`public inline void `[`SetLegacySubtypeToDefault`](#structFRHAPI__Item_1a26a6a394bb57a448f1feb37c175011f2)`()` | Sets the value of LegacySubtype_Optional to its default and also sets LegacySubtype_IsSet to true.
`public inline int32 & `[`GetRefItemId`](#structFRHAPI__Item_1aa32c02a492dda2691acb404843752aa3)`()` | Gets the value of RefItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1add1c1d7019f59acd9c88ba3f701f755c)`() const` | Gets the value of RefItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1ae43911780e299c9673e093aed4df2d9f)`(const int32 & DefaultValue) const` | Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefItemId`](#structFRHAPI__Item_1ae883e7828a3c06fd368959887ef2d88d)`(int32 & OutValue) const` | Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a3a158858c397392c94e5cc5dcca15c88)`()` | Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a76c7e93bd03a29a4e516972a399a5ed1)`() const` | Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefItemId`](#structFRHAPI__Item_1acbc9c7df2738425ce43a4deec17a94ba)`(int32 NewValue)` | Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true.
`public inline void `[`ClearRefItemId`](#structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754)`()` | Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false.
`public inline bool `[`IsRefItemIdDefaultValue`](#structFRHAPI__Item_1a1af549c0e4ae73ae1e2a21cc8db4f2f5)`() const` | Returns true if RefItemId_Optional is set and matches the default value.
`public inline void `[`SetRefItemIdToDefault`](#structFRHAPI__Item_1a5ffafc7f7977147c1304e6b2d9a0c57d)`()` | Sets the value of RefItemId_Optional to its default and also sets RefItemId_IsSet to true.
`public inline int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1ace06eaef976957049107ac7d7bc7f1ea)`()` | Gets the value of AvailabilityFlags_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1ad2687831575df1161609773684a1af4a)`() const` | Gets the value of AvailabilityFlags_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1aabb2d536459b2cf5fd5372975b526583)`(const int32 & DefaultValue) const` | Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAvailabilityFlags`](#structFRHAPI__Item_1a9a7ae008c53e0a3fa3c44ee868c1d057)`(int32 & OutValue) const` | Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1ad5157c44c115d3b028d2df26acc8aeee)`()` | Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1a60ca2804ebcfa5d5abaec6558f2b4f53)`() const` | Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1a803e61d32457cc419cdcd887924b2e9b)`(int32 NewValue)` | Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true.
`public inline void `[`ClearAvailabilityFlags`](#structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8)`()` | Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false.
`public inline bool `[`IsAvailabilityFlagsDefaultValue`](#structFRHAPI__Item_1a23be4efbe75354ed2cc0aa5188c827fb)`() const` | Returns true if AvailabilityFlags_Optional is set and matches the default value.
`public inline void `[`SetAvailabilityFlagsToDefault`](#structFRHAPI__Item_1aef8c5832626e314d6a91b041d1014bc9)`()` | Sets the value of AvailabilityFlags_Optional to its default and also sets AvailabilityFlags_IsSet to true.
`public inline int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1aa663a42295c435eee5a53d3abe079784)`()` | Gets the value of EntitledLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1ae3ee53922ccc4d4ffe3d569a6c8a0e26)`() const` | Gets the value of EntitledLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1a0c7124adafa090e465992506d4ed2635)`(const int32 & DefaultValue) const` | Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntitledLootId`](#structFRHAPI__Item_1a3b5abfb93e819a326cb9df5a5d172cac)`(int32 & OutValue) const` | Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1a7bd57a25619dbe4969f27e8e702baf37)`()` | Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1af16a86fe61c601d2a6e9d33dc04ed94e)`() const` | Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntitledLootId`](#structFRHAPI__Item_1a6d59e2dfe98874ac4fa3ab71d1ce5831)`(int32 NewValue)` | Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true.
`public inline void `[`ClearEntitledLootId`](#structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda)`()` | Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false.
`public inline bool `[`IsEntitledLootIdDefaultValue`](#structFRHAPI__Item_1a89de44af3b2baea1dcf09c5297058dfb)`() const` | Returns true if EntitledLootId_Optional is set and matches the default value.
`public inline void `[`SetEntitledLootIdToDefault`](#structFRHAPI__Item_1aa92bb7b9880364b596cca22b0833546b)`()` | Sets the value of EntitledLootId_Optional to its default and also sets EntitledLootId_IsSet to true.
`public inline int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a44e61fc34bbfea9afea0e3c4055ce6be)`()` | Gets the value of LevelXpTableId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a2b469bf022b1752972b45d91204a04cd)`() const` | Gets the value of LevelXpTableId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a0d3910b394c00b4d1cc284653ee611b1)`(const int32 & DefaultValue) const` | Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLevelXpTableId`](#structFRHAPI__Item_1a9ea97eb49e4e90964abce5ab17f270b5)`(int32 & OutValue) const` | Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1a1199be5a1b0e601285cf2b73ffeb8d4f)`()` | Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1af10405d5fafaf567a5e6d42b5a13b228)`() const` | Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLevelXpTableId`](#structFRHAPI__Item_1a2cd6ef77eaeb33f7ddb376e2483f01a8)`(int32 NewValue)` | Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true.
`public inline void `[`ClearLevelXpTableId`](#structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463)`()` | Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false.
`public inline bool `[`IsLevelXpTableIdDefaultValue`](#structFRHAPI__Item_1aa20e8f9abb29c6b87f5f47e4c3b54ba9)`() const` | Returns true if LevelXpTableId_Optional is set and matches the default value.
`public inline void `[`SetLevelXpTableIdToDefault`](#structFRHAPI__Item_1ac6f63b9312de41a44c7c3c49f4e17fde)`()` | Sets the value of LevelXpTableId_Optional to its default and also sets LevelXpTableId_IsSet to true.
`public inline int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1aa6f49533c15b8a509d17e62a8c34c01f)`()` | Gets the value of LevelVendorId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a760bdc790c71299d23ae7ef9ca1079f6)`() const` | Gets the value of LevelVendorId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a9afd8152f91ba3169a8e289872144577)`(const int32 & DefaultValue) const` | Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLevelVendorId`](#structFRHAPI__Item_1a3cb4c5ed96cfea63a1a0b270d53c0016)`(int32 & OutValue) const` | Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1a433fb76caf7ffc80ef4ed2a3b3a8c931)`()` | Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1ab3c28975c164af1aefa070818df8de9a)`() const` | Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLevelVendorId`](#structFRHAPI__Item_1ae2ecf97c77a90be08af5a893f6a2df5d)`(int32 NewValue)` | Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true.
`public inline void `[`ClearLevelVendorId`](#structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2)`()` | Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false.
`public inline bool `[`IsLevelVendorIdDefaultValue`](#structFRHAPI__Item_1a6142502c0d3ecc38bc20254af3cffc22)`() const` | Returns true if LevelVendorId_Optional is set and matches the default value.
`public inline void `[`SetLevelVendorIdToDefault`](#structFRHAPI__Item_1ad31d4c1ae0420e87716468dccbc6cb44)`()` | Sets the value of LevelVendorId_Optional to its default and also sets LevelVendorId_IsSet to true.
`public inline int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1abe691e103c37e8ea19820f713eb37bc5)`()` | Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ad395eb7249ce6232d7655bebbf96321c)`() const` | Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1aa8af0136a73257d951a2518bfd139e66)`(const int32 & DefaultValue) const` | Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ae288be3af3f201bb47f7b1593804ec81)`(int32 & OutValue) const` | Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a142d1193619939bd0e65aac44cf17c8e)`()` | Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a458af7661f1215e8d61709ef84e57b13)`() const` | Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1af7d32d57725687b43f6840667dcc7091)`(int32 NewValue)` | Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true.
`public inline void `[`ClearCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675)`()` | Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false.
`public inline bool `[`IsCouponDiscountCurrencyItemIdDefaultValue`](#structFRHAPI__Item_1ad2a4ae4c698ce16d4da22a01ebabff5c)`() const` | Returns true if CouponDiscountCurrencyItemId_Optional is set and matches the default value.
`public inline void `[`SetCouponDiscountCurrencyItemIdToDefault`](#structFRHAPI__Item_1a96e413cc85c150d5304c819aa99fc188)`()` | Sets the value of CouponDiscountCurrencyItemId_Optional to its default and also sets CouponDiscountCurrencyItemId_IsSet to true.
`public inline float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1ae14bab7c0189f8aebebda30323b9eedd)`()` | Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.
`public inline const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a408d793116e0d7b84481c11b50d71b14)`() const` | Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.
`public inline const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a843bbcfe5a04068e9118868a5e082a2b)`(const float & DefaultValue) const` | Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1ab4edbf9af9acbcab0d31e952fa3d1dcf)`(float & OutValue) const` | Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1a6f12938ad107192e2616ae82c09734f1)`()` | Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1a8ac0fe931259abf7b4f2eed6505c351b)`() const` | Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1a3c42bde8c8fe2559becf1596c59964cc)`(float NewValue)` | Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true.
`public inline void `[`ClearCouponDiscountPercentage`](#structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b)`()` | Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false.
`public inline bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1ad2e8f18426e341528612a403943965ec)`()` | Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.
`public inline const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1aaee1f063191491d7d50d9347f5c61ccf)`() const` | Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.
`public inline const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a0fca1718bcdec9078f84bbd70602396e)`(const bool & DefaultValue) const` | Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a26420a8731f2fc00a508a421e0c7f796)`(bool & OutValue) const` | Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1a5221677a2821ca61790dc3dd46712b8b)`()` | Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1af2e4ce0b6a8c90db90275bc71b06e407)`() const` | Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1aa8611f54defe5fd58cd15599ce5572af)`(bool NewValue)` | Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true.
`public inline void `[`ClearCouponConsumeOnUse`](#structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480)`()` | Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false.
`public inline bool `[`IsCouponConsumeOnUseDefaultValue`](#structFRHAPI__Item_1a27ee21d9a1af8be2d1e0970fb9d122fa)`() const` | Returns true if CouponConsumeOnUse_Optional is set and matches the default value.
`public inline void `[`SetCouponConsumeOnUseToDefault`](#structFRHAPI__Item_1a002f4547e9b061e2792f368936a4e2a0)`()` | Sets the value of CouponConsumeOnUse_Optional to its default and also sets CouponConsumeOnUse_IsSet to true.
`public inline int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a8972dc76b212d972a2b518211add4f17)`()` | Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a6525e7a7b3a5260b9865e5cfc4b3ce6c)`() const` | Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a38dc8fff9eb52ab927aacb88d1f8d807)`(const int32 & DefaultValue) const` | Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1acc1530a5f5f45c01bfc15a770433e5a0)`(int32 & OutValue) const` | Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1afeea8bdbf8fe60bad93d0653e45acabe)`()` | Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1ad5fae52c9c04ed93bc99d43fa978b874)`() const` | Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1af2a51d3059748feb92fb592024745c81)`(int32 NewValue)` | Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true.
`public inline void `[`ClearItemPortalUseRulesetId`](#structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5)`()` | Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false.
`public inline bool `[`IsItemPortalUseRulesetIdDefaultValue`](#structFRHAPI__Item_1a855c742cd4f2f1dbf1c7de69a353927e)`() const` | Returns true if ItemPortalUseRulesetId_Optional is set and matches the default value.
`public inline void `[`SetItemPortalUseRulesetIdToDefault`](#structFRHAPI__Item_1a0585c33836f0635d3b4722f7bfbf4f3c)`()` | Sets the value of ItemPortalUseRulesetId_Optional to its default and also sets ItemPortalUseRulesetId_IsSet to true.
`public inline FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1adc865be0e57d90f11d3336f90d58e37b)`()` | Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a00e38d4622520fb4d44a6c1888affa49)`() const` | Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1ac83d1dd2d3d5f48c4c2e9e1e2f4d69a4)`(const FString & DefaultValue) const` | Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1af4b6b107c6f4ff2ea9e3f2c084e8e72a)`(FString & OutValue) const` | Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1a51a6dff502fb6049b4da1d5503621184)`()` | Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1aa1ce2c494619d89b26673412bd3ffe72)`() const` | Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a4bbf283d0a50cdb0af0427382dad97f2)`(FString NewValue)` | Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true.
`public inline void `[`ClearInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0)`()` | Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false.
`public inline TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a7adb63a40f2f2b7f6541d5b55d2807bd)`()` | Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1ab877e45b8915a49289b107e6f02f3361)`() const` | Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1afaf36c430134ec34d4715b67603ed34d)`(const TArray< int32 > & DefaultValue) const` | Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a647967de5190c2eae1cc4cc305545a50)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1af66046a0af411934999cb28bda91e77f)`()` | Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1abe675a41f0f1ef5f7f9bdaf3e833c400)`() const` | Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1a8c4932ea15f56e6a886e13724c0c6649)`(TArray< int32 > NewValue)` | Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true.
`public inline void `[`ClearCouponDiscountLoot`](#structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b)`()` | Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1a8f388d37b6e6b80682ae5ee8b0c5ed02)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1aa17b33e1a9258a96ba0d54c2177ea1fe)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1aadd57ea24afcf3893b31c9c1dae78f28)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Item_1a74a10cf52863208f9cfb9e26484a1b6f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1ac97664c780c86ddd5ca17ba51a821bab)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1a55b6dfdc9bce487875a616eb1dd5dd38)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Item_1a4f32c751b5078fcd85eb039554773d8a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47) <a id="structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47"></a>

Custom data associated with the resource.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16) <a id="structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public ERHAPI_ItemType `[`Type_Optional`](#structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe) <a id="structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe"></a>

The type of item.

<br>
#### `public bool `[`Type_IsSet`](#structFRHAPI__Item_1a0cc1c2c5e9833d046535ee67c6044d5b) <a id="structFRHAPI__Item_1a0cc1c2c5e9833d046535ee67c6044d5b"></a>

true if Type_Optional has been set to a value

<br>
#### `public int32 `[`LegacyType_Optional`](#structFRHAPI__Item_1a9105c322f788b420009e19957dc9ef3f) <a id="structFRHAPI__Item_1a9105c322f788b420009e19957dc9ef3f"></a>

<br>
#### `public bool `[`LegacyType_IsSet`](#structFRHAPI__Item_1a351cad97d7e9511c49556f52d97779a5) <a id="structFRHAPI__Item_1a351cad97d7e9511c49556f52d97779a5"></a>

true if LegacyType_Optional has been set to a value

<br>
#### `public int32 `[`LegacySubtype_Optional`](#structFRHAPI__Item_1ab36aeeabb1bfc49aef612af5412ba4dc) <a id="structFRHAPI__Item_1ab36aeeabb1bfc49aef612af5412ba4dc"></a>

<br>
#### `public bool `[`LegacySubtype_IsSet`](#structFRHAPI__Item_1a44394066ad672903ea7f73102064936f) <a id="structFRHAPI__Item_1a44394066ad672903ea7f73102064936f"></a>

true if LegacySubtype_Optional has been set to a value

<br>
#### `public int32 `[`RefItemId_Optional`](#structFRHAPI__Item_1a1fbf7b95a5761100f9ce8c2ce59afcd0) <a id="structFRHAPI__Item_1a1fbf7b95a5761100f9ce8c2ce59afcd0"></a>

<br>
#### `public bool `[`RefItemId_IsSet`](#structFRHAPI__Item_1aaeecdeed1bedbf5b25576e28ccd2c2b1) <a id="structFRHAPI__Item_1aaeecdeed1bedbf5b25576e28ccd2c2b1"></a>

true if RefItemId_Optional has been set to a value

<br>
#### `public int32 `[`AvailabilityFlags_Optional`](#structFRHAPI__Item_1ac0bdf0c75ad5b86f6032270151f4ad0e) <a id="structFRHAPI__Item_1ac0bdf0c75ad5b86f6032270151f4ad0e"></a>

<br>
#### `public bool `[`AvailabilityFlags_IsSet`](#structFRHAPI__Item_1a67bf7d179a5204d5ca2386582f437248) <a id="structFRHAPI__Item_1a67bf7d179a5204d5ca2386582f437248"></a>

true if AvailabilityFlags_Optional has been set to a value

<br>
#### `public int32 `[`EntitledLootId_Optional`](#structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf) <a id="structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf"></a>

This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled.

<br>
#### `public bool `[`EntitledLootId_IsSet`](#structFRHAPI__Item_1af42c3dae98945b853dd863c498951980) <a id="structFRHAPI__Item_1af42c3dae98945b853dd863c498951980"></a>

true if EntitledLootId_Optional has been set to a value

<br>
#### `public int32 `[`LevelXpTableId_Optional`](#structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471) <a id="structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471"></a>

The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.

<br>
#### `public bool `[`LevelXpTableId_IsSet`](#structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544) <a id="structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544"></a>

true if LevelXpTableId_Optional has been set to a value

<br>
#### `public int32 `[`LevelVendorId_Optional`](#structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e) <a id="structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e"></a>

The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.

<br>
#### `public bool `[`LevelVendorId_IsSet`](#structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387) <a id="structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387"></a>

true if LevelVendorId_Optional has been set to a value

<br>
#### `public int32 `[`CouponDiscountCurrencyItemId_Optional`](#structFRHAPI__Item_1aac9de3a09ab34aa9feabf22202daae80) <a id="structFRHAPI__Item_1aac9de3a09ab34aa9feabf22202daae80"></a>

The item of the currency used by this coupon. This is only valid for an unit Item.

<br>
#### `public bool `[`CouponDiscountCurrencyItemId_IsSet`](#structFRHAPI__Item_1a0809de18d707f4af24019793672bbd25) <a id="structFRHAPI__Item_1a0809de18d707f4af24019793672bbd25"></a>

true if CouponDiscountCurrencyItemId_Optional has been set to a value

<br>
#### `public float `[`CouponDiscountPercentage_Optional`](#structFRHAPI__Item_1a809a2484d750588a4c62337e2b47ead5) <a id="structFRHAPI__Item_1a809a2484d750588a4c62337e2b47ead5"></a>

The percentage of the discount. This is only valid for an unit Item.

<br>
#### `public bool `[`CouponDiscountPercentage_IsSet`](#structFRHAPI__Item_1a4ebe06f6d6bc6a533dfdcecc4808ca13) <a id="structFRHAPI__Item_1a4ebe06f6d6bc6a533dfdcecc4808ca13"></a>

true if CouponDiscountPercentage_Optional has been set to a value

<br>
#### `public bool `[`CouponConsumeOnUse_Optional`](#structFRHAPI__Item_1ab8a0663be30e0c950774761d1ce2d296) <a id="structFRHAPI__Item_1ab8a0663be30e0c950774761d1ce2d296"></a>

If true, the coupon will be consumed when used; reducing the Player's Inventory quantity by 1. This is only valid for an unit Item.

<br>
#### `public bool `[`CouponConsumeOnUse_IsSet`](#structFRHAPI__Item_1a6901af6f3e9c28935f44f0a479391d27) <a id="structFRHAPI__Item_1a6901af6f3e9c28935f44f0a479391d27"></a>

true if CouponConsumeOnUse_Optional has been set to a value

<br>
#### `public int32 `[`ItemPortalUseRulesetId_Optional`](#structFRHAPI__Item_1ae1b19e8759742961745126c8858ce167) <a id="structFRHAPI__Item_1ae1b19e8759742961745126c8858ce167"></a>

<br>
#### `public bool `[`ItemPortalUseRulesetId_IsSet`](#structFRHAPI__Item_1ad179470bc0eac912b9de30cec699f45d) <a id="structFRHAPI__Item_1ad179470bc0eac912b9de30cec699f45d"></a>

true if ItemPortalUseRulesetId_Optional has been set to a value

<br>
#### `public FString `[`InventoryBucketUseRuleSetId_Optional`](#structFRHAPI__Item_1a0e0d5505b14a2ac60dbadfd639eda910) <a id="structFRHAPI__Item_1a0e0d5505b14a2ac60dbadfd639eda910"></a>

The Inventory Bucket Use Rule Set ID that determines how this item can be used across buckets.

<br>
#### `public bool `[`InventoryBucketUseRuleSetId_IsSet`](#structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a) <a id="structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a"></a>

true if InventoryBucketUseRuleSetId_Optional has been set to a value

<br>
#### `public TArray< int32 > `[`CouponDiscountLoot_Optional`](#structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd) <a id="structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd"></a>

List of Loot IDs this item can discount.

<br>
#### `public bool `[`CouponDiscountLoot_IsSet`](#structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09) <a id="structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09"></a>

true if CouponDiscountLoot_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527) <a id="structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084) <a id="structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Item_1a687dd73fd3d8a4ac35d1f9e632b3460d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Item_1a687dd73fd3d8a4ac35d1f9e632b3460d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Item_1a23d9459ebb2ebc9a8fc3781de9621ac9)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Item_1a23d9459ebb2ebc9a8fc3781de9621ac9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a9877423eeda4551d0bcce4e413010756)`()` <a id="structFRHAPI__Item_1a9877423eeda4551d0bcce4e413010756"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5ebebbc4accead78b04905b5c948c8b4)`() const` <a id="structFRHAPI__Item_1a5ebebbc4accead78b04905b5c948c8b4"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5e66fa669417adc7f827c588bac9173d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Item_1a5e66fa669417adc7f827c588bac9173d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__Item_1a3925a150ee30d43bf0234cf1127104c3)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Item_1a3925a150ee30d43bf0234cf1127104c3"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a389c7829835ae2f827bce3502727c3bc)`()` <a id="structFRHAPI__Item_1a389c7829835ae2f827bce3502727c3bc"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a5cc497718caf078f6dd085bb4d559bea)`() const` <a id="structFRHAPI__Item_1a5cc497718caf078f6dd085bb4d559bea"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__Item_1a49ff21f8fec4d08ee632f8b80e4b8bf0)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__Item_1a49ff21f8fec4d08ee632f8b80e4b8bf0"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3)`()` <a id="structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a49d7d21797f5c8b07132e77c2ea1d923)`()` <a id="structFRHAPI__Item_1a49d7d21797f5c8b07132e77c2ea1d923"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1aa9476bcc0de419b823716064af6f58f4)`() const` <a id="structFRHAPI__Item_1aa9476bcc0de419b823716064af6f58f4"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a726e036301d0b7fe5e66ffd83fa6616b)`(const ERHAPI_ItemType & DefaultValue) const` <a id="structFRHAPI__Item_1a726e036301d0b7fe5e66ffd83fa6616b"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetType`](#structFRHAPI__Item_1a00930eaab0b51d2209fff3d0f9c92548)`(ERHAPI_ItemType & OutValue) const` <a id="structFRHAPI__Item_1a00930eaab0b51d2209fff3d0f9c92548"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a1eade82e2d073a97f111ef5d41d61a97)`()` <a id="structFRHAPI__Item_1a1eade82e2d073a97f111ef5d41d61a97"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a9302c15c16ac8cb34173cc62146928a7)`() const` <a id="structFRHAPI__Item_1a9302c15c16ac8cb34173cc62146928a7"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__Item_1a7b1d736294a70487685d68997edd4733)`(ERHAPI_ItemType NewValue)` <a id="structFRHAPI__Item_1a7b1d736294a70487685d68997edd4733"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

<br>
#### `public inline void `[`ClearType`](#structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84)`()` <a id="structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

<br>
#### `public inline int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a04ac5a2377e920488d956e648a597581)`()` <a id="structFRHAPI__Item_1a04ac5a2377e920488d956e648a597581"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a0249b4278450493e0bf5c5a17b3990d4)`() const` <a id="structFRHAPI__Item_1a0249b4278450493e0bf5c5a17b3990d4"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1ada591e1567140b0dff56d3e6f7ee894e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1ada591e1567140b0dff56d3e6f7ee894e"></a>

Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLegacyType`](#structFRHAPI__Item_1a248418aa5571ba2b2f2adb9c42949403)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a248418aa5571ba2b2f2adb9c42949403"></a>

Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a4966c021583a1ebc75e1d046810af089)`()` <a id="structFRHAPI__Item_1a4966c021583a1ebc75e1d046810af089"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a5273cfcb41b37911075cd4f42f8bf4d0)`() const` <a id="structFRHAPI__Item_1a5273cfcb41b37911075cd4f42f8bf4d0"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLegacyType`](#structFRHAPI__Item_1ae9d498c47e565bc417c8dbbbfd8d4a51)`(int32 NewValue)` <a id="structFRHAPI__Item_1ae9d498c47e565bc417c8dbbbfd8d4a51"></a>

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.

<br>
#### `public inline void `[`ClearLegacyType`](#structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef)`()` <a id="structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef"></a>

Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.

<br>
#### `public inline bool `[`IsLegacyTypeDefaultValue`](#structFRHAPI__Item_1a5ee3a8b2559b1163c4f14bbba5f2fba4)`() const` <a id="structFRHAPI__Item_1a5ee3a8b2559b1163c4f14bbba5f2fba4"></a>

Returns true if LegacyType_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetLegacyTypeToDefault`](#structFRHAPI__Item_1a720984f8c98db38b0d40bc8e5682cba5)`()` <a id="structFRHAPI__Item_1a720984f8c98db38b0d40bc8e5682cba5"></a>

Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.

<br>
#### `public inline int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1aac7331e9aa9739c56a5658299e143b48)`()` <a id="structFRHAPI__Item_1aac7331e9aa9739c56a5658299e143b48"></a>

Gets the value of LegacySubtype_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1af147dfa3a518ac3993216f8335554ce4)`() const` <a id="structFRHAPI__Item_1af147dfa3a518ac3993216f8335554ce4"></a>

Gets the value of LegacySubtype_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1a0536a243a417f203a28e0ce3ace60e34)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a0536a243a417f203a28e0ce3ace60e34"></a>

Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLegacySubtype`](#structFRHAPI__Item_1ab311f92e98d5238fe1fd5ed58a18eed4)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1ab311f92e98d5238fe1fd5ed58a18eed4"></a>

Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a9ed845d4d0e60ad1e7304c3307ceee27)`()` <a id="structFRHAPI__Item_1a9ed845d4d0e60ad1e7304c3307ceee27"></a>

Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a33fbbb353c4dd6122543386c2215c0a2)`() const` <a id="structFRHAPI__Item_1a33fbbb353c4dd6122543386c2215c0a2"></a>

Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLegacySubtype`](#structFRHAPI__Item_1afb3136cf1c2b32531c8001fe35d05eca)`(int32 NewValue)` <a id="structFRHAPI__Item_1afb3136cf1c2b32531c8001fe35d05eca"></a>

Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true.

<br>
#### `public inline void `[`ClearLegacySubtype`](#structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976)`()` <a id="structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976"></a>

Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false.

<br>
#### `public inline bool `[`IsLegacySubtypeDefaultValue`](#structFRHAPI__Item_1a1066b8828dab67a895e13d0140679562)`() const` <a id="structFRHAPI__Item_1a1066b8828dab67a895e13d0140679562"></a>

Returns true if LegacySubtype_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetLegacySubtypeToDefault`](#structFRHAPI__Item_1a26a6a394bb57a448f1feb37c175011f2)`()` <a id="structFRHAPI__Item_1a26a6a394bb57a448f1feb37c175011f2"></a>

Sets the value of LegacySubtype_Optional to its default and also sets LegacySubtype_IsSet to true.

<br>
#### `public inline int32 & `[`GetRefItemId`](#structFRHAPI__Item_1aa32c02a492dda2691acb404843752aa3)`()` <a id="structFRHAPI__Item_1aa32c02a492dda2691acb404843752aa3"></a>

Gets the value of RefItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1add1c1d7019f59acd9c88ba3f701f755c)`() const` <a id="structFRHAPI__Item_1add1c1d7019f59acd9c88ba3f701f755c"></a>

Gets the value of RefItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1ae43911780e299c9673e093aed4df2d9f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1ae43911780e299c9673e093aed4df2d9f"></a>

Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRefItemId`](#structFRHAPI__Item_1ae883e7828a3c06fd368959887ef2d88d)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1ae883e7828a3c06fd368959887ef2d88d"></a>

Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a3a158858c397392c94e5cc5dcca15c88)`()` <a id="structFRHAPI__Item_1a3a158858c397392c94e5cc5dcca15c88"></a>

Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a76c7e93bd03a29a4e516972a399a5ed1)`() const` <a id="structFRHAPI__Item_1a76c7e93bd03a29a4e516972a399a5ed1"></a>

Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRefItemId`](#structFRHAPI__Item_1acbc9c7df2738425ce43a4deec17a94ba)`(int32 NewValue)` <a id="structFRHAPI__Item_1acbc9c7df2738425ce43a4deec17a94ba"></a>

Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true.

<br>
#### `public inline void `[`ClearRefItemId`](#structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754)`()` <a id="structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754"></a>

Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false.

<br>
#### `public inline bool `[`IsRefItemIdDefaultValue`](#structFRHAPI__Item_1a1af549c0e4ae73ae1e2a21cc8db4f2f5)`() const` <a id="structFRHAPI__Item_1a1af549c0e4ae73ae1e2a21cc8db4f2f5"></a>

Returns true if RefItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetRefItemIdToDefault`](#structFRHAPI__Item_1a5ffafc7f7977147c1304e6b2d9a0c57d)`()` <a id="structFRHAPI__Item_1a5ffafc7f7977147c1304e6b2d9a0c57d"></a>

Sets the value of RefItemId_Optional to its default and also sets RefItemId_IsSet to true.

<br>
#### `public inline int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1ace06eaef976957049107ac7d7bc7f1ea)`()` <a id="structFRHAPI__Item_1ace06eaef976957049107ac7d7bc7f1ea"></a>

Gets the value of AvailabilityFlags_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1ad2687831575df1161609773684a1af4a)`() const` <a id="structFRHAPI__Item_1ad2687831575df1161609773684a1af4a"></a>

Gets the value of AvailabilityFlags_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1aabb2d536459b2cf5fd5372975b526583)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1aabb2d536459b2cf5fd5372975b526583"></a>

Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAvailabilityFlags`](#structFRHAPI__Item_1a9a7ae008c53e0a3fa3c44ee868c1d057)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a9a7ae008c53e0a3fa3c44ee868c1d057"></a>

Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1ad5157c44c115d3b028d2df26acc8aeee)`()` <a id="structFRHAPI__Item_1ad5157c44c115d3b028d2df26acc8aeee"></a>

Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1a60ca2804ebcfa5d5abaec6558f2b4f53)`() const` <a id="structFRHAPI__Item_1a60ca2804ebcfa5d5abaec6558f2b4f53"></a>

Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1a803e61d32457cc419cdcd887924b2e9b)`(int32 NewValue)` <a id="structFRHAPI__Item_1a803e61d32457cc419cdcd887924b2e9b"></a>

Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true.

<br>
#### `public inline void `[`ClearAvailabilityFlags`](#structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8)`()` <a id="structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8"></a>

Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false.

<br>
#### `public inline bool `[`IsAvailabilityFlagsDefaultValue`](#structFRHAPI__Item_1a23be4efbe75354ed2cc0aa5188c827fb)`() const` <a id="structFRHAPI__Item_1a23be4efbe75354ed2cc0aa5188c827fb"></a>

Returns true if AvailabilityFlags_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetAvailabilityFlagsToDefault`](#structFRHAPI__Item_1aef8c5832626e314d6a91b041d1014bc9)`()` <a id="structFRHAPI__Item_1aef8c5832626e314d6a91b041d1014bc9"></a>

Sets the value of AvailabilityFlags_Optional to its default and also sets AvailabilityFlags_IsSet to true.

<br>
#### `public inline int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1aa663a42295c435eee5a53d3abe079784)`()` <a id="structFRHAPI__Item_1aa663a42295c435eee5a53d3abe079784"></a>

Gets the value of EntitledLootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1ae3ee53922ccc4d4ffe3d569a6c8a0e26)`() const` <a id="structFRHAPI__Item_1ae3ee53922ccc4d4ffe3d569a6c8a0e26"></a>

Gets the value of EntitledLootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1a0c7124adafa090e465992506d4ed2635)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a0c7124adafa090e465992506d4ed2635"></a>

Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEntitledLootId`](#structFRHAPI__Item_1a3b5abfb93e819a326cb9df5a5d172cac)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a3b5abfb93e819a326cb9df5a5d172cac"></a>

Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1a7bd57a25619dbe4969f27e8e702baf37)`()` <a id="structFRHAPI__Item_1a7bd57a25619dbe4969f27e8e702baf37"></a>

Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1af16a86fe61c601d2a6e9d33dc04ed94e)`() const` <a id="structFRHAPI__Item_1af16a86fe61c601d2a6e9d33dc04ed94e"></a>

Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEntitledLootId`](#structFRHAPI__Item_1a6d59e2dfe98874ac4fa3ab71d1ce5831)`(int32 NewValue)` <a id="structFRHAPI__Item_1a6d59e2dfe98874ac4fa3ab71d1ce5831"></a>

Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true.

<br>
#### `public inline void `[`ClearEntitledLootId`](#structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda)`()` <a id="structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda"></a>

Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false.

<br>
#### `public inline bool `[`IsEntitledLootIdDefaultValue`](#structFRHAPI__Item_1a89de44af3b2baea1dcf09c5297058dfb)`() const` <a id="structFRHAPI__Item_1a89de44af3b2baea1dcf09c5297058dfb"></a>

Returns true if EntitledLootId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetEntitledLootIdToDefault`](#structFRHAPI__Item_1aa92bb7b9880364b596cca22b0833546b)`()` <a id="structFRHAPI__Item_1aa92bb7b9880364b596cca22b0833546b"></a>

Sets the value of EntitledLootId_Optional to its default and also sets EntitledLootId_IsSet to true.

<br>
#### `public inline int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a44e61fc34bbfea9afea0e3c4055ce6be)`()` <a id="structFRHAPI__Item_1a44e61fc34bbfea9afea0e3c4055ce6be"></a>

Gets the value of LevelXpTableId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a2b469bf022b1752972b45d91204a04cd)`() const` <a id="structFRHAPI__Item_1a2b469bf022b1752972b45d91204a04cd"></a>

Gets the value of LevelXpTableId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a0d3910b394c00b4d1cc284653ee611b1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a0d3910b394c00b4d1cc284653ee611b1"></a>

Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLevelXpTableId`](#structFRHAPI__Item_1a9ea97eb49e4e90964abce5ab17f270b5)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a9ea97eb49e4e90964abce5ab17f270b5"></a>

Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1a1199be5a1b0e601285cf2b73ffeb8d4f)`()` <a id="structFRHAPI__Item_1a1199be5a1b0e601285cf2b73ffeb8d4f"></a>

Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1af10405d5fafaf567a5e6d42b5a13b228)`() const` <a id="structFRHAPI__Item_1af10405d5fafaf567a5e6d42b5a13b228"></a>

Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLevelXpTableId`](#structFRHAPI__Item_1a2cd6ef77eaeb33f7ddb376e2483f01a8)`(int32 NewValue)` <a id="structFRHAPI__Item_1a2cd6ef77eaeb33f7ddb376e2483f01a8"></a>

Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true.

<br>
#### `public inline void `[`ClearLevelXpTableId`](#structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463)`()` <a id="structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463"></a>

Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false.

<br>
#### `public inline bool `[`IsLevelXpTableIdDefaultValue`](#structFRHAPI__Item_1aa20e8f9abb29c6b87f5f47e4c3b54ba9)`() const` <a id="structFRHAPI__Item_1aa20e8f9abb29c6b87f5f47e4c3b54ba9"></a>

Returns true if LevelXpTableId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetLevelXpTableIdToDefault`](#structFRHAPI__Item_1ac6f63b9312de41a44c7c3c49f4e17fde)`()` <a id="structFRHAPI__Item_1ac6f63b9312de41a44c7c3c49f4e17fde"></a>

Sets the value of LevelXpTableId_Optional to its default and also sets LevelXpTableId_IsSet to true.

<br>
#### `public inline int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1aa6f49533c15b8a509d17e62a8c34c01f)`()` <a id="structFRHAPI__Item_1aa6f49533c15b8a509d17e62a8c34c01f"></a>

Gets the value of LevelVendorId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a760bdc790c71299d23ae7ef9ca1079f6)`() const` <a id="structFRHAPI__Item_1a760bdc790c71299d23ae7ef9ca1079f6"></a>

Gets the value of LevelVendorId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a9afd8152f91ba3169a8e289872144577)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a9afd8152f91ba3169a8e289872144577"></a>

Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLevelVendorId`](#structFRHAPI__Item_1a3cb4c5ed96cfea63a1a0b270d53c0016)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a3cb4c5ed96cfea63a1a0b270d53c0016"></a>

Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1a433fb76caf7ffc80ef4ed2a3b3a8c931)`()` <a id="structFRHAPI__Item_1a433fb76caf7ffc80ef4ed2a3b3a8c931"></a>

Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1ab3c28975c164af1aefa070818df8de9a)`() const` <a id="structFRHAPI__Item_1ab3c28975c164af1aefa070818df8de9a"></a>

Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLevelVendorId`](#structFRHAPI__Item_1ae2ecf97c77a90be08af5a893f6a2df5d)`(int32 NewValue)` <a id="structFRHAPI__Item_1ae2ecf97c77a90be08af5a893f6a2df5d"></a>

Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true.

<br>
#### `public inline void `[`ClearLevelVendorId`](#structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2)`()` <a id="structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2"></a>

Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false.

<br>
#### `public inline bool `[`IsLevelVendorIdDefaultValue`](#structFRHAPI__Item_1a6142502c0d3ecc38bc20254af3cffc22)`() const` <a id="structFRHAPI__Item_1a6142502c0d3ecc38bc20254af3cffc22"></a>

Returns true if LevelVendorId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetLevelVendorIdToDefault`](#structFRHAPI__Item_1ad31d4c1ae0420e87716468dccbc6cb44)`()` <a id="structFRHAPI__Item_1ad31d4c1ae0420e87716468dccbc6cb44"></a>

Sets the value of LevelVendorId_Optional to its default and also sets LevelVendorId_IsSet to true.

<br>
#### `public inline int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1abe691e103c37e8ea19820f713eb37bc5)`()` <a id="structFRHAPI__Item_1abe691e103c37e8ea19820f713eb37bc5"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ad395eb7249ce6232d7655bebbf96321c)`() const` <a id="structFRHAPI__Item_1ad395eb7249ce6232d7655bebbf96321c"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1aa8af0136a73257d951a2518bfd139e66)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1aa8af0136a73257d951a2518bfd139e66"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ae288be3af3f201bb47f7b1593804ec81)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1ae288be3af3f201bb47f7b1593804ec81"></a>

Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a142d1193619939bd0e65aac44cf17c8e)`()` <a id="structFRHAPI__Item_1a142d1193619939bd0e65aac44cf17c8e"></a>

Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a458af7661f1215e8d61709ef84e57b13)`() const` <a id="structFRHAPI__Item_1a458af7661f1215e8d61709ef84e57b13"></a>

Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1af7d32d57725687b43f6840667dcc7091)`(int32 NewValue)` <a id="structFRHAPI__Item_1af7d32d57725687b43f6840667dcc7091"></a>

Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true.

<br>
#### `public inline void `[`ClearCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675)`()` <a id="structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675"></a>

Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false.

<br>
#### `public inline bool `[`IsCouponDiscountCurrencyItemIdDefaultValue`](#structFRHAPI__Item_1ad2a4ae4c698ce16d4da22a01ebabff5c)`() const` <a id="structFRHAPI__Item_1ad2a4ae4c698ce16d4da22a01ebabff5c"></a>

Returns true if CouponDiscountCurrencyItemId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCouponDiscountCurrencyItemIdToDefault`](#structFRHAPI__Item_1a96e413cc85c150d5304c819aa99fc188)`()` <a id="structFRHAPI__Item_1a96e413cc85c150d5304c819aa99fc188"></a>

Sets the value of CouponDiscountCurrencyItemId_Optional to its default and also sets CouponDiscountCurrencyItemId_IsSet to true.

<br>
#### `public inline float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1ae14bab7c0189f8aebebda30323b9eedd)`()` <a id="structFRHAPI__Item_1ae14bab7c0189f8aebebda30323b9eedd"></a>

Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a408d793116e0d7b84481c11b50d71b14)`() const` <a id="structFRHAPI__Item_1a408d793116e0d7b84481c11b50d71b14"></a>

Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.

<br>
#### `public inline const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a843bbcfe5a04068e9118868a5e082a2b)`(const float & DefaultValue) const` <a id="structFRHAPI__Item_1a843bbcfe5a04068e9118868a5e082a2b"></a>

Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1ab4edbf9af9acbcab0d31e952fa3d1dcf)`(float & OutValue) const` <a id="structFRHAPI__Item_1ab4edbf9af9acbcab0d31e952fa3d1dcf"></a>

Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1a6f12938ad107192e2616ae82c09734f1)`()` <a id="structFRHAPI__Item_1a6f12938ad107192e2616ae82c09734f1"></a>

Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1a8ac0fe931259abf7b4f2eed6505c351b)`() const` <a id="structFRHAPI__Item_1a8ac0fe931259abf7b4f2eed6505c351b"></a>

Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1a3c42bde8c8fe2559becf1596c59964cc)`(float NewValue)` <a id="structFRHAPI__Item_1a3c42bde8c8fe2559becf1596c59964cc"></a>

Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true.

<br>
#### `public inline void `[`ClearCouponDiscountPercentage`](#structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b)`()` <a id="structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b"></a>

Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false.

<br>
#### `public inline bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1ad2e8f18426e341528612a403943965ec)`()` <a id="structFRHAPI__Item_1ad2e8f18426e341528612a403943965ec"></a>

Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1aaee1f063191491d7d50d9347f5c61ccf)`() const` <a id="structFRHAPI__Item_1aaee1f063191491d7d50d9347f5c61ccf"></a>

Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a0fca1718bcdec9078f84bbd70602396e)`(const bool & DefaultValue) const` <a id="structFRHAPI__Item_1a0fca1718bcdec9078f84bbd70602396e"></a>

Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a26420a8731f2fc00a508a421e0c7f796)`(bool & OutValue) const` <a id="structFRHAPI__Item_1a26420a8731f2fc00a508a421e0c7f796"></a>

Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1a5221677a2821ca61790dc3dd46712b8b)`()` <a id="structFRHAPI__Item_1a5221677a2821ca61790dc3dd46712b8b"></a>

Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1af2e4ce0b6a8c90db90275bc71b06e407)`() const` <a id="structFRHAPI__Item_1af2e4ce0b6a8c90db90275bc71b06e407"></a>

Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1aa8611f54defe5fd58cd15599ce5572af)`(bool NewValue)` <a id="structFRHAPI__Item_1aa8611f54defe5fd58cd15599ce5572af"></a>

Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true.

<br>
#### `public inline void `[`ClearCouponConsumeOnUse`](#structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480)`()` <a id="structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480"></a>

Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false.

<br>
#### `public inline bool `[`IsCouponConsumeOnUseDefaultValue`](#structFRHAPI__Item_1a27ee21d9a1af8be2d1e0970fb9d122fa)`() const` <a id="structFRHAPI__Item_1a27ee21d9a1af8be2d1e0970fb9d122fa"></a>

Returns true if CouponConsumeOnUse_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCouponConsumeOnUseToDefault`](#structFRHAPI__Item_1a002f4547e9b061e2792f368936a4e2a0)`()` <a id="structFRHAPI__Item_1a002f4547e9b061e2792f368936a4e2a0"></a>

Sets the value of CouponConsumeOnUse_Optional to its default and also sets CouponConsumeOnUse_IsSet to true.

<br>
#### `public inline int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a8972dc76b212d972a2b518211add4f17)`()` <a id="structFRHAPI__Item_1a8972dc76b212d972a2b518211add4f17"></a>

Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a6525e7a7b3a5260b9865e5cfc4b3ce6c)`() const` <a id="structFRHAPI__Item_1a6525e7a7b3a5260b9865e5cfc4b3ce6c"></a>

Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a38dc8fff9eb52ab927aacb88d1f8d807)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a38dc8fff9eb52ab927aacb88d1f8d807"></a>

Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1acc1530a5f5f45c01bfc15a770433e5a0)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1acc1530a5f5f45c01bfc15a770433e5a0"></a>

Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1afeea8bdbf8fe60bad93d0653e45acabe)`()` <a id="structFRHAPI__Item_1afeea8bdbf8fe60bad93d0653e45acabe"></a>

Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1ad5fae52c9c04ed93bc99d43fa978b874)`() const` <a id="structFRHAPI__Item_1ad5fae52c9c04ed93bc99d43fa978b874"></a>

Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1af2a51d3059748feb92fb592024745c81)`(int32 NewValue)` <a id="structFRHAPI__Item_1af2a51d3059748feb92fb592024745c81"></a>

Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true.

<br>
#### `public inline void `[`ClearItemPortalUseRulesetId`](#structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5)`()` <a id="structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5"></a>

Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false.

<br>
#### `public inline bool `[`IsItemPortalUseRulesetIdDefaultValue`](#structFRHAPI__Item_1a855c742cd4f2f1dbf1c7de69a353927e)`() const` <a id="structFRHAPI__Item_1a855c742cd4f2f1dbf1c7de69a353927e"></a>

Returns true if ItemPortalUseRulesetId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetItemPortalUseRulesetIdToDefault`](#structFRHAPI__Item_1a0585c33836f0635d3b4722f7bfbf4f3c)`()` <a id="structFRHAPI__Item_1a0585c33836f0635d3b4722f7bfbf4f3c"></a>

Sets the value of ItemPortalUseRulesetId_Optional to its default and also sets ItemPortalUseRulesetId_IsSet to true.

<br>
#### `public inline FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1adc865be0e57d90f11d3336f90d58e37b)`()` <a id="structFRHAPI__Item_1adc865be0e57d90f11d3336f90d58e37b"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a00e38d4622520fb4d44a6c1888affa49)`() const` <a id="structFRHAPI__Item_1a00e38d4622520fb4d44a6c1888affa49"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1ac83d1dd2d3d5f48c4c2e9e1e2f4d69a4)`(const FString & DefaultValue) const` <a id="structFRHAPI__Item_1ac83d1dd2d3d5f48c4c2e9e1e2f4d69a4"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1af4b6b107c6f4ff2ea9e3f2c084e8e72a)`(FString & OutValue) const` <a id="structFRHAPI__Item_1af4b6b107c6f4ff2ea9e3f2c084e8e72a"></a>

Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1a51a6dff502fb6049b4da1d5503621184)`()` <a id="structFRHAPI__Item_1a51a6dff502fb6049b4da1d5503621184"></a>

Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1aa1ce2c494619d89b26673412bd3ffe72)`() const` <a id="structFRHAPI__Item_1aa1ce2c494619d89b26673412bd3ffe72"></a>

Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a4bbf283d0a50cdb0af0427382dad97f2)`(FString NewValue)` <a id="structFRHAPI__Item_1a4bbf283d0a50cdb0af0427382dad97f2"></a>

Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true.

<br>
#### `public inline void `[`ClearInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0)`()` <a id="structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0"></a>

Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false.

<br>
#### `public inline TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a7adb63a40f2f2b7f6541d5b55d2807bd)`()` <a id="structFRHAPI__Item_1a7adb63a40f2f2b7f6541d5b55d2807bd"></a>

Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1ab877e45b8915a49289b107e6f02f3361)`() const` <a id="structFRHAPI__Item_1ab877e45b8915a49289b107e6f02f3361"></a>

Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1afaf36c430134ec34d4715b67603ed34d)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__Item_1afaf36c430134ec34d4715b67603ed34d"></a>

Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a647967de5190c2eae1cc4cc305545a50)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__Item_1a647967de5190c2eae1cc4cc305545a50"></a>

Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1af66046a0af411934999cb28bda91e77f)`()` <a id="structFRHAPI__Item_1af66046a0af411934999cb28bda91e77f"></a>

Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1abe675a41f0f1ef5f7f9bdaf3e833c400)`() const` <a id="structFRHAPI__Item_1abe675a41f0f1ef5f7f9bdaf3e833c400"></a>

Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1a8c4932ea15f56e6a886e13724c0c6649)`(TArray< int32 > NewValue)` <a id="structFRHAPI__Item_1a8c4932ea15f56e6a886e13724c0c6649"></a>

Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true.

<br>
#### `public inline void `[`ClearCouponDiscountLoot`](#structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b)`()` <a id="structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b"></a>

Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1a8f388d37b6e6b80682ae5ee8b0c5ed02)`()` <a id="structFRHAPI__Item_1a8f388d37b6e6b80682ae5ee8b0c5ed02"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1aa17b33e1a9258a96ba0d54c2177ea1fe)`() const` <a id="structFRHAPI__Item_1aa17b33e1a9258a96ba0d54c2177ea1fe"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1aadd57ea24afcf3893b31c9c1dae78f28)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Item_1aadd57ea24afcf3893b31c9c1dae78f28"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Item_1a74a10cf52863208f9cfb9e26484a1b6f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Item_1a74a10cf52863208f9cfb9e26484a1b6f"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1ac97664c780c86ddd5ca17ba51a821bab)`()` <a id="structFRHAPI__Item_1ac97664c780c86ddd5ca17ba51a821bab"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1a55b6dfdc9bce487875a616eb1dd5dd38)`() const` <a id="structFRHAPI__Item_1a55b6dfdc9bce487875a616eb1dd5dd38"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Item_1a4f32c751b5078fcd85eb039554773d8a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__Item_1a4f32c751b5078fcd85eb039554773d8a"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0)`()` <a id="structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
