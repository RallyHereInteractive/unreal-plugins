---
title: RHAPI_Item
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16) | true if CustomData_Optional has been set to a value
`public FGuid `[`ItemUuid_Optional`](#structFRHAPI__Item_1a80b591249bcf6a162cea03625859730b) | The Item UUID.
`public bool `[`ItemUuid_IsSet`](#structFRHAPI__Item_1ac78db9c246fdea6afcec61519e3bae79) | true if ItemUuid_Optional has been set to a value
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
`public FGuid `[`EntitledLootUuid_Optional`](#structFRHAPI__Item_1a55a6d7ad83368dc6d41cb20842ca11c3) | This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot that will be fulfilled.
`public bool `[`EntitledLootUuid_IsSet`](#structFRHAPI__Item_1a7b278bd51c30e2aa654e801bf8b778bd) | true if EntitledLootUuid_Optional has been set to a value
`public int32 `[`EntitledLootId_Optional`](#structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf) | This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled.
`public bool `[`EntitledLootId_IsSet`](#structFRHAPI__Item_1af42c3dae98945b853dd863c498951980) | true if EntitledLootId_Optional has been set to a value
`public FGuid `[`LevelXpTableUuid_Optional`](#structFRHAPI__Item_1a797b9427d09a024a7e262926ea9c5f18) | The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.
`public bool `[`LevelXpTableUuid_IsSet`](#structFRHAPI__Item_1ad36b1735e32314959dbc6e6a44957833) | true if LevelXpTableUuid_Optional has been set to a value
`public int32 `[`LevelXpTableId_Optional`](#structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471) | The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.
`public bool `[`LevelXpTableId_IsSet`](#structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544) | true if LevelXpTableId_Optional has been set to a value
`public FGuid `[`LevelVendorUuid_Optional`](#structFRHAPI__Item_1a54af64f2166321a3d54bfd49eb33d126) | The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.
`public bool `[`LevelVendorUuid_IsSet`](#structFRHAPI__Item_1a2b83904f2221e90ebc9d8da3c9020ba2) | true if LevelVendorUuid_Optional has been set to a value
`public int32 `[`LevelVendorId_Optional`](#structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e) | The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.
`public bool `[`LevelVendorId_IsSet`](#structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387) | true if LevelVendorId_Optional has been set to a value
`public int32 `[`CouponDiscountCurrencyItemUuid_Optional`](#structFRHAPI__Item_1a5b085eb28301de72e1fcb58de98f0880) | The item of the currency used by this coupon. This is only valid for an unit Item.
`public bool `[`CouponDiscountCurrencyItemUuid_IsSet`](#structFRHAPI__Item_1a1e52daf9baa1a3f8e08e674d61d057f2) | true if CouponDiscountCurrencyItemUuid_Optional has been set to a value
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
`public TArray< FGuid > `[`CouponDiscountLootUuid_Optional`](#structFRHAPI__Item_1a5784ccafb6f7909f659810f797202a84) | List of Loot this item can discount.
`public bool `[`CouponDiscountLootUuid_IsSet`](#structFRHAPI__Item_1aa70b15d223288176fcaced0e7622087e) | true if CouponDiscountLootUuid_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527) | Cache information for this item.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Item_1a5e75ef0aa4b1af5286da65c549597c73)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Item_1a3c1c00737b0901dacb018f8ec687a315)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a9877423eeda4551d0bcce4e413010756)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5ebebbc4accead78b04905b5c948c8b4)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5e66fa669417adc7f827c588bac9173d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Item_1a3925a150ee30d43bf0234cf1127104c3)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a389c7829835ae2f827bce3502727c3bc)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a5cc497718caf078f6dd085bb4d559bea)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Item_1a015c53d3908e56ffb9c77b746133ea97)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__Item_1a704b6df3915791b80a6e8a880aa57f77)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__Item_1abe6c005fbaa770ed6fbee5be3920f1cc)`() const` | Checks whether CustomData_Optional has been set.
`public inline FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1ae788a06d822bc1057f66fa86c8df7476)`()` | Gets the value of ItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1a6e8b9d039005f978ac2eeafd1ee02799)`() const` | Gets the value of ItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1a1f4d7d99afd96fc61e80b3e814ccb6b7)`(const FGuid & DefaultValue) const` | Gets the value of ItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemUuid`](#structFRHAPI__Item_1a0355f157155593bf7ad0341f6e8213ad)`(FGuid & OutValue) const` | Fills OutValue with the value of ItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Item_1a76baf045169f9a1e0c1c3b88e30484a4)`()` | Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Item_1a0ea8c59d0f69b358c6d5e1e4a47229ac)`() const` | Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemUuid`](#structFRHAPI__Item_1a6f75624e5e10d13177207ce4db3f1b45)`(const FGuid & NewValue)` | Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true.
`public inline void `[`SetItemUuid`](#structFRHAPI__Item_1afa8eda7ecbd1c8cc0e299a2c2f9fdf0e)`(FGuid && NewValue)` | Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearItemUuid`](#structFRHAPI__Item_1ae117f4643d50d55557c3472cbf5839c1)`()` | Clears the value of ItemUuid_Optional and sets ItemUuid_IsSet to false.
`public inline bool `[`IsItemUuidSet`](#structFRHAPI__Item_1a32232968f40beb8608b89bea1f71195a)`() const` | Checks whether ItemUuid_Optional has been set.
`public inline ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a49d7d21797f5c8b07132e77c2ea1d923)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1aa9476bcc0de419b823716064af6f58f4)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a726e036301d0b7fe5e66ffd83fa6616b)`(const ERHAPI_ItemType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__Item_1a00930eaab0b51d2209fff3d0f9c92548)`(ERHAPI_ItemType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a1eade82e2d073a97f111ef5d41d61a97)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a9302c15c16ac8cb34173cc62146928a7)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__Item_1a82309b5edc4557a16563a65a13204108)`(const ERHAPI_ItemType & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__Item_1a10f023eb32d4a77fb36e7cba53683bdc)`(ERHAPI_ItemType && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__Item_1ab3b1ab78f0108df20c008523bbfed86a)`() const` | Checks whether Type_Optional has been set.
`public inline int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a04ac5a2377e920488d956e648a597581)`()` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a0249b4278450493e0bf5c5a17b3990d4)`() const` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1ada591e1567140b0dff56d3e6f7ee894e)`(const int32 & DefaultValue) const` | Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyType`](#structFRHAPI__Item_1a248418aa5571ba2b2f2adb9c42949403)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a4966c021583a1ebc75e1d046810af089)`()` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a5273cfcb41b37911075cd4f42f8bf4d0)`() const` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyType`](#structFRHAPI__Item_1af62176137a2de1ce9a009a2c49b414ce)`(const int32 & NewValue)` | Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.
`public inline void `[`SetLegacyType`](#structFRHAPI__Item_1a60e5fe4bae50df0518f6f33708384b17)`(int32 && NewValue)` | Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true using move semantics.
`public inline void `[`ClearLegacyType`](#structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef)`()` | Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.
`public inline bool `[`IsLegacyTypeSet`](#structFRHAPI__Item_1a689f46c32454425484e52f6b06cacc29)`() const` | Checks whether LegacyType_Optional has been set.
`public inline bool `[`IsLegacyTypeDefaultValue`](#structFRHAPI__Item_1a5ee3a8b2559b1163c4f14bbba5f2fba4)`() const` | Returns true if LegacyType_Optional is set and matches the default value.
`public inline void `[`SetLegacyTypeToDefault`](#structFRHAPI__Item_1a720984f8c98db38b0d40bc8e5682cba5)`()` | Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.
`public inline int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1aac7331e9aa9739c56a5658299e143b48)`()` | Gets the value of LegacySubtype_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1af147dfa3a518ac3993216f8335554ce4)`() const` | Gets the value of LegacySubtype_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1a0536a243a417f203a28e0ce3ace60e34)`(const int32 & DefaultValue) const` | Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacySubtype`](#structFRHAPI__Item_1ab311f92e98d5238fe1fd5ed58a18eed4)`(int32 & OutValue) const` | Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a9ed845d4d0e60ad1e7304c3307ceee27)`()` | Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a33fbbb353c4dd6122543386c2215c0a2)`() const` | Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacySubtype`](#structFRHAPI__Item_1a025515fcfc514f0297534e5346fd9578)`(const int32 & NewValue)` | Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true.
`public inline void `[`SetLegacySubtype`](#structFRHAPI__Item_1a30e943d3f917eb26cc0e00fcf0ed854e)`(int32 && NewValue)` | Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true using move semantics.
`public inline void `[`ClearLegacySubtype`](#structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976)`()` | Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false.
`public inline bool `[`IsLegacySubtypeSet`](#structFRHAPI__Item_1afd43847f1e904c769d777aa73a124ec9)`() const` | Checks whether LegacySubtype_Optional has been set.
`public inline bool `[`IsLegacySubtypeDefaultValue`](#structFRHAPI__Item_1a1066b8828dab67a895e13d0140679562)`() const` | Returns true if LegacySubtype_Optional is set and matches the default value.
`public inline void `[`SetLegacySubtypeToDefault`](#structFRHAPI__Item_1a26a6a394bb57a448f1feb37c175011f2)`()` | Sets the value of LegacySubtype_Optional to its default and also sets LegacySubtype_IsSet to true.
`public inline int32 & `[`GetRefItemId`](#structFRHAPI__Item_1aa32c02a492dda2691acb404843752aa3)`()` | Gets the value of RefItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1add1c1d7019f59acd9c88ba3f701f755c)`() const` | Gets the value of RefItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1ae43911780e299c9673e093aed4df2d9f)`(const int32 & DefaultValue) const` | Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefItemId`](#structFRHAPI__Item_1ae883e7828a3c06fd368959887ef2d88d)`(int32 & OutValue) const` | Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a3a158858c397392c94e5cc5dcca15c88)`()` | Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a76c7e93bd03a29a4e516972a399a5ed1)`() const` | Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefItemId`](#structFRHAPI__Item_1ab23eb90e592503296cd5033a9dcf58b1)`(const int32 & NewValue)` | Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true.
`public inline void `[`SetRefItemId`](#structFRHAPI__Item_1a5d4bf03570c2f591d5119515570d6bc1)`(int32 && NewValue)` | Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true using move semantics.
`public inline void `[`ClearRefItemId`](#structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754)`()` | Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false.
`public inline bool `[`IsRefItemIdSet`](#structFRHAPI__Item_1a6154d1197c0e93ccc270edaf5b300d7b)`() const` | Checks whether RefItemId_Optional has been set.
`public inline bool `[`IsRefItemIdDefaultValue`](#structFRHAPI__Item_1a1af549c0e4ae73ae1e2a21cc8db4f2f5)`() const` | Returns true if RefItemId_Optional is set and matches the default value.
`public inline void `[`SetRefItemIdToDefault`](#structFRHAPI__Item_1a5ffafc7f7977147c1304e6b2d9a0c57d)`()` | Sets the value of RefItemId_Optional to its default and also sets RefItemId_IsSet to true.
`public inline int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1ace06eaef976957049107ac7d7bc7f1ea)`()` | Gets the value of AvailabilityFlags_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1ad2687831575df1161609773684a1af4a)`() const` | Gets the value of AvailabilityFlags_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1aabb2d536459b2cf5fd5372975b526583)`(const int32 & DefaultValue) const` | Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAvailabilityFlags`](#structFRHAPI__Item_1a9a7ae008c53e0a3fa3c44ee868c1d057)`(int32 & OutValue) const` | Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1ad5157c44c115d3b028d2df26acc8aeee)`()` | Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1a60ca2804ebcfa5d5abaec6558f2b4f53)`() const` | Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1a787ded3092c3a4515c990b4f42b4d697)`(const int32 & NewValue)` | Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true.
`public inline void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1afbeb845e860d93d68994cd64d6df27cb)`(int32 && NewValue)` | Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true using move semantics.
`public inline void `[`ClearAvailabilityFlags`](#structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8)`()` | Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false.
`public inline bool `[`IsAvailabilityFlagsSet`](#structFRHAPI__Item_1a7635dda467e04cbd47351dc4862cb4c8)`() const` | Checks whether AvailabilityFlags_Optional has been set.
`public inline bool `[`IsAvailabilityFlagsDefaultValue`](#structFRHAPI__Item_1a23be4efbe75354ed2cc0aa5188c827fb)`() const` | Returns true if AvailabilityFlags_Optional is set and matches the default value.
`public inline void `[`SetAvailabilityFlagsToDefault`](#structFRHAPI__Item_1aef8c5832626e314d6a91b041d1014bc9)`()` | Sets the value of AvailabilityFlags_Optional to its default and also sets AvailabilityFlags_IsSet to true.
`public inline FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a72495b5da6bd4d7045ac0e85071a4a7b)`()` | Gets the value of EntitledLootUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a223810ecab928411853539d3cefcf619)`() const` | Gets the value of EntitledLootUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a269a162c2d0b87b65c179e84724018c2)`(const FGuid & DefaultValue) const` | Gets the value of EntitledLootUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a42eeaf6b6692598add6973b2796dffd0)`(FGuid & OutValue) const` | Fills OutValue with the value of EntitledLootUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetEntitledLootUuidOrNull`](#structFRHAPI__Item_1a8af49ca9d058e2d492e25cbb32db58ef)`()` | Returns a pointer to EntitledLootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetEntitledLootUuidOrNull`](#structFRHAPI__Item_1acec81400479962ad8530919ab0522091)`() const` | Returns a pointer to EntitledLootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntitledLootUuid`](#structFRHAPI__Item_1aee8811848eac772eb9b5ff228765675d)`(const FGuid & NewValue)` | Sets the value of EntitledLootUuid_Optional and also sets EntitledLootUuid_IsSet to true.
`public inline void `[`SetEntitledLootUuid`](#structFRHAPI__Item_1a56ba00061fb3c807ae5f1a7a34e7555e)`(FGuid && NewValue)` | Sets the value of EntitledLootUuid_Optional and also sets EntitledLootUuid_IsSet to true using move semantics.
`public inline void `[`ClearEntitledLootUuid`](#structFRHAPI__Item_1a80b307d98d2d4dfd01c5f180d8afb707)`()` | Clears the value of EntitledLootUuid_Optional and sets EntitledLootUuid_IsSet to false.
`public inline bool `[`IsEntitledLootUuidSet`](#structFRHAPI__Item_1a5d3d67041b84635a8c2d641ff1f26e0a)`() const` | Checks whether EntitledLootUuid_Optional has been set.
`public inline int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1aa663a42295c435eee5a53d3abe079784)`()` | Gets the value of EntitledLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1ae3ee53922ccc4d4ffe3d569a6c8a0e26)`() const` | Gets the value of EntitledLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1a0c7124adafa090e465992506d4ed2635)`(const int32 & DefaultValue) const` | Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntitledLootId`](#structFRHAPI__Item_1a3b5abfb93e819a326cb9df5a5d172cac)`(int32 & OutValue) const` | Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1a7bd57a25619dbe4969f27e8e702baf37)`()` | Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1af16a86fe61c601d2a6e9d33dc04ed94e)`() const` | Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntitledLootId`](#structFRHAPI__Item_1aa94cde1b0428d56fc20beaee1fd0c4d7)`(const int32 & NewValue)` | Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true.
`public inline void `[`SetEntitledLootId`](#structFRHAPI__Item_1adef78784a94266ff134fe98173e771b0)`(int32 && NewValue)` | Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true using move semantics.
`public inline void `[`ClearEntitledLootId`](#structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda)`()` | Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false.
`public inline bool `[`IsEntitledLootIdSet`](#structFRHAPI__Item_1ab09f0bd3d6856035af3e141b4723c066)`() const` | Checks whether EntitledLootId_Optional has been set.
`public inline bool `[`IsEntitledLootIdDefaultValue`](#structFRHAPI__Item_1a89de44af3b2baea1dcf09c5297058dfb)`() const` | Returns true if EntitledLootId_Optional is set and matches the default value.
`public inline void `[`SetEntitledLootIdToDefault`](#structFRHAPI__Item_1aa92bb7b9880364b596cca22b0833546b)`()` | Sets the value of EntitledLootId_Optional to its default and also sets EntitledLootId_IsSet to true.
`public inline FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1ad608c95535d8ec2cebb22d7cc393b37e)`()` | Gets the value of LevelXpTableUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a9dba17692308d91369391066c2c64dd0)`() const` | Gets the value of LevelXpTableUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a9e5da86d3c6afa80130fcdba586e34e3)`(const FGuid & DefaultValue) const` | Gets the value of LevelXpTableUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1aad99d1104aa4c7c69cdd7e96287f9860)`(FGuid & OutValue) const` | Fills OutValue with the value of LevelXpTableUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetLevelXpTableUuidOrNull`](#structFRHAPI__Item_1a95caead419363a9e2b8acd2f6428414a)`()` | Returns a pointer to LevelXpTableUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetLevelXpTableUuidOrNull`](#structFRHAPI__Item_1acf248e37f41452ca82b17b85062fcd53)`() const` | Returns a pointer to LevelXpTableUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLevelXpTableUuid`](#structFRHAPI__Item_1a49dc70a310aaec33fc1dfddf780a773f)`(const FGuid & NewValue)` | Sets the value of LevelXpTableUuid_Optional and also sets LevelXpTableUuid_IsSet to true.
`public inline void `[`SetLevelXpTableUuid`](#structFRHAPI__Item_1ae2d873fe4792b0657cd0d9c0a7cd905b)`(FGuid && NewValue)` | Sets the value of LevelXpTableUuid_Optional and also sets LevelXpTableUuid_IsSet to true using move semantics.
`public inline void `[`ClearLevelXpTableUuid`](#structFRHAPI__Item_1aa045a9bebae787bfd2ca849c041b3a4f)`()` | Clears the value of LevelXpTableUuid_Optional and sets LevelXpTableUuid_IsSet to false.
`public inline bool `[`IsLevelXpTableUuidSet`](#structFRHAPI__Item_1a4a011653b815f41974b88e5bc21df0ce)`() const` | Checks whether LevelXpTableUuid_Optional has been set.
`public inline int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a44e61fc34bbfea9afea0e3c4055ce6be)`()` | Gets the value of LevelXpTableId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a2b469bf022b1752972b45d91204a04cd)`() const` | Gets the value of LevelXpTableId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a0d3910b394c00b4d1cc284653ee611b1)`(const int32 & DefaultValue) const` | Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLevelXpTableId`](#structFRHAPI__Item_1a9ea97eb49e4e90964abce5ab17f270b5)`(int32 & OutValue) const` | Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1a1199be5a1b0e601285cf2b73ffeb8d4f)`()` | Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1af10405d5fafaf567a5e6d42b5a13b228)`() const` | Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLevelXpTableId`](#structFRHAPI__Item_1affac8e552e618cd3646d020b8c572acf)`(const int32 & NewValue)` | Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true.
`public inline void `[`SetLevelXpTableId`](#structFRHAPI__Item_1aaec876c264a786f5e47edd03e07a9774)`(int32 && NewValue)` | Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true using move semantics.
`public inline void `[`ClearLevelXpTableId`](#structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463)`()` | Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false.
`public inline bool `[`IsLevelXpTableIdSet`](#structFRHAPI__Item_1aa4dddc6efc3bbe6013aced0593cb55d3)`() const` | Checks whether LevelXpTableId_Optional has been set.
`public inline bool `[`IsLevelXpTableIdDefaultValue`](#structFRHAPI__Item_1aa20e8f9abb29c6b87f5f47e4c3b54ba9)`() const` | Returns true if LevelXpTableId_Optional is set and matches the default value.
`public inline void `[`SetLevelXpTableIdToDefault`](#structFRHAPI__Item_1ac6f63b9312de41a44c7c3c49f4e17fde)`()` | Sets the value of LevelXpTableId_Optional to its default and also sets LevelXpTableId_IsSet to true.
`public inline FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a010cd8a2155ba73e95d5b7d473641391)`()` | Gets the value of LevelVendorUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a5ff415460b4f86fe38c4f0ddb117f349)`() const` | Gets the value of LevelVendorUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1afa9eb2fd9a03ae0392393d139bc0788c)`(const FGuid & DefaultValue) const` | Gets the value of LevelVendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a106505efa4e84e24c23780bcb5f3c826)`(FGuid & OutValue) const` | Fills OutValue with the value of LevelVendorUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetLevelVendorUuidOrNull`](#structFRHAPI__Item_1a124a063912e4597844612b16a2d924d4)`()` | Returns a pointer to LevelVendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetLevelVendorUuidOrNull`](#structFRHAPI__Item_1ae3bdf85bb51f3540c8bc9bf807e595e3)`() const` | Returns a pointer to LevelVendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLevelVendorUuid`](#structFRHAPI__Item_1aae04871c0242965b67a9eb74a4d3e553)`(const FGuid & NewValue)` | Sets the value of LevelVendorUuid_Optional and also sets LevelVendorUuid_IsSet to true.
`public inline void `[`SetLevelVendorUuid`](#structFRHAPI__Item_1a5e15a80ca954fc6ae976fba37878cdf6)`(FGuid && NewValue)` | Sets the value of LevelVendorUuid_Optional and also sets LevelVendorUuid_IsSet to true using move semantics.
`public inline void `[`ClearLevelVendorUuid`](#structFRHAPI__Item_1a5e63c9d337ee6543483319fa12b01c6d)`()` | Clears the value of LevelVendorUuid_Optional and sets LevelVendorUuid_IsSet to false.
`public inline bool `[`IsLevelVendorUuidSet`](#structFRHAPI__Item_1a1eb134198a801e945e40c861208a30a5)`() const` | Checks whether LevelVendorUuid_Optional has been set.
`public inline int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1aa6f49533c15b8a509d17e62a8c34c01f)`()` | Gets the value of LevelVendorId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a760bdc790c71299d23ae7ef9ca1079f6)`() const` | Gets the value of LevelVendorId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a9afd8152f91ba3169a8e289872144577)`(const int32 & DefaultValue) const` | Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLevelVendorId`](#structFRHAPI__Item_1a3cb4c5ed96cfea63a1a0b270d53c0016)`(int32 & OutValue) const` | Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1a433fb76caf7ffc80ef4ed2a3b3a8c931)`()` | Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1ab3c28975c164af1aefa070818df8de9a)`() const` | Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLevelVendorId`](#structFRHAPI__Item_1a6206e135389392cf3a8b9ab2dd73aa64)`(const int32 & NewValue)` | Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true.
`public inline void `[`SetLevelVendorId`](#structFRHAPI__Item_1a091a8aa94eb7e8ac8522498fc4a48d2e)`(int32 && NewValue)` | Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true using move semantics.
`public inline void `[`ClearLevelVendorId`](#structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2)`()` | Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false.
`public inline bool `[`IsLevelVendorIdSet`](#structFRHAPI__Item_1a70dd0dabebfb683fb9b450808b5e6606)`() const` | Checks whether LevelVendorId_Optional has been set.
`public inline bool `[`IsLevelVendorIdDefaultValue`](#structFRHAPI__Item_1a6142502c0d3ecc38bc20254af3cffc22)`() const` | Returns true if LevelVendorId_Optional is set and matches the default value.
`public inline void `[`SetLevelVendorIdToDefault`](#structFRHAPI__Item_1ad31d4c1ae0420e87716468dccbc6cb44)`()` | Sets the value of LevelVendorId_Optional to its default and also sets LevelVendorId_IsSet to true.
`public inline int32 & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a21d177502f2693c43b07ea21472e1bc4)`()` | Gets the value of CouponDiscountCurrencyItemUuid_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1aef4c21885e73412e415747d20fa3113d)`() const` | Gets the value of CouponDiscountCurrencyItemUuid_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a5776bca152d0b005fa2b3ed9c32400aa)`(const int32 & DefaultValue) const` | Gets the value of CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a0bae44ba24eced7bea897feb2bbb3ce4)`(int32 & OutValue) const` | Fills OutValue with the value of CouponDiscountCurrencyItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCouponDiscountCurrencyItemUuidOrNull`](#structFRHAPI__Item_1a04d7e0c434f7e3e7800742b7e96fe93a)`()` | Returns a pointer to CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCouponDiscountCurrencyItemUuidOrNull`](#structFRHAPI__Item_1aeb9ee7e13d6e598095a46c31e572ba21)`() const` | Returns a pointer to CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a617afd30ace10ae605d0cb2639e626d0)`(const int32 & NewValue)` | Sets the value of CouponDiscountCurrencyItemUuid_Optional and also sets CouponDiscountCurrencyItemUuid_IsSet to true.
`public inline void `[`SetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a34877b25a43951c0e442c6ebc03e6d0b)`(int32 && NewValue)` | Sets the value of CouponDiscountCurrencyItemUuid_Optional and also sets CouponDiscountCurrencyItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1aad2f0040ddc2e9e4f217aed5358cd17b)`()` | Clears the value of CouponDiscountCurrencyItemUuid_Optional and sets CouponDiscountCurrencyItemUuid_IsSet to false.
`public inline bool `[`IsCouponDiscountCurrencyItemUuidSet`](#structFRHAPI__Item_1af9580809322a553ee79f764eaff8b15b)`() const` | Checks whether CouponDiscountCurrencyItemUuid_Optional has been set.
`public inline bool `[`IsCouponDiscountCurrencyItemUuidDefaultValue`](#structFRHAPI__Item_1a6a225b37958e3f2df003cae32fa27492)`() const` | Returns true if CouponDiscountCurrencyItemUuid_Optional is set and matches the default value.
`public inline void `[`SetCouponDiscountCurrencyItemUuidToDefault`](#structFRHAPI__Item_1a10137e11a87a4618acf04cf57b051dd0)`()` | Sets the value of CouponDiscountCurrencyItemUuid_Optional to its default and also sets CouponDiscountCurrencyItemUuid_IsSet to true.
`public inline int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1abe691e103c37e8ea19820f713eb37bc5)`()` | Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ad395eb7249ce6232d7655bebbf96321c)`() const` | Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1aa8af0136a73257d951a2518bfd139e66)`(const int32 & DefaultValue) const` | Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ae288be3af3f201bb47f7b1593804ec81)`(int32 & OutValue) const` | Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a142d1193619939bd0e65aac44cf17c8e)`()` | Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a458af7661f1215e8d61709ef84e57b13)`() const` | Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a637dbd62fcdc71be9cd2535a9576d9f8)`(const int32 & NewValue)` | Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true.
`public inline void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ad09ba063591a147765edbf8be84953a4)`(int32 && NewValue)` | Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675)`()` | Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false.
`public inline bool `[`IsCouponDiscountCurrencyItemIdSet`](#structFRHAPI__Item_1ae37f62a54627f0c8c6b799776df51d3a)`() const` | Checks whether CouponDiscountCurrencyItemId_Optional has been set.
`public inline bool `[`IsCouponDiscountCurrencyItemIdDefaultValue`](#structFRHAPI__Item_1ad2a4ae4c698ce16d4da22a01ebabff5c)`() const` | Returns true if CouponDiscountCurrencyItemId_Optional is set and matches the default value.
`public inline void `[`SetCouponDiscountCurrencyItemIdToDefault`](#structFRHAPI__Item_1a96e413cc85c150d5304c819aa99fc188)`()` | Sets the value of CouponDiscountCurrencyItemId_Optional to its default and also sets CouponDiscountCurrencyItemId_IsSet to true.
`public inline float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1ae14bab7c0189f8aebebda30323b9eedd)`()` | Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.
`public inline const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a408d793116e0d7b84481c11b50d71b14)`() const` | Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.
`public inline const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a843bbcfe5a04068e9118868a5e082a2b)`(const float & DefaultValue) const` | Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1ab4edbf9af9acbcab0d31e952fa3d1dcf)`(float & OutValue) const` | Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1a6f12938ad107192e2616ae82c09734f1)`()` | Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1a8ac0fe931259abf7b4f2eed6505c351b)`() const` | Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1a9c176a59ea3705b2aed3ce59580b2637)`(const float & NewValue)` | Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true.
`public inline void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1a902a987b0f0c44b65747e9a4adabbe25)`(float && NewValue)` | Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountPercentage`](#structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b)`()` | Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false.
`public inline bool `[`IsCouponDiscountPercentageSet`](#structFRHAPI__Item_1a3c776f49711660f9a6a8cb8442f232c8)`() const` | Checks whether CouponDiscountPercentage_Optional has been set.
`public inline bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1ad2e8f18426e341528612a403943965ec)`()` | Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.
`public inline const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1aaee1f063191491d7d50d9347f5c61ccf)`() const` | Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.
`public inline const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a0fca1718bcdec9078f84bbd70602396e)`(const bool & DefaultValue) const` | Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a26420a8731f2fc00a508a421e0c7f796)`(bool & OutValue) const` | Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1a5221677a2821ca61790dc3dd46712b8b)`()` | Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1af2e4ce0b6a8c90db90275bc71b06e407)`() const` | Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1a2906d3fcab28c1e68243e7d686b3d3fd)`(const bool & NewValue)` | Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true.
`public inline void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1a0fc7e9c8f2d9bc1cea02ab6bb3db636a)`(bool && NewValue)` | Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true using move semantics.
`public inline void `[`ClearCouponConsumeOnUse`](#structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480)`()` | Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false.
`public inline bool `[`IsCouponConsumeOnUseSet`](#structFRHAPI__Item_1a6f0e7fa2c8d0d0ef789ce713b25cd291)`() const` | Checks whether CouponConsumeOnUse_Optional has been set.
`public inline bool `[`IsCouponConsumeOnUseDefaultValue`](#structFRHAPI__Item_1a27ee21d9a1af8be2d1e0970fb9d122fa)`() const` | Returns true if CouponConsumeOnUse_Optional is set and matches the default value.
`public inline void `[`SetCouponConsumeOnUseToDefault`](#structFRHAPI__Item_1a002f4547e9b061e2792f368936a4e2a0)`()` | Sets the value of CouponConsumeOnUse_Optional to its default and also sets CouponConsumeOnUse_IsSet to true.
`public inline int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a8972dc76b212d972a2b518211add4f17)`()` | Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a6525e7a7b3a5260b9865e5cfc4b3ce6c)`() const` | Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a38dc8fff9eb52ab927aacb88d1f8d807)`(const int32 & DefaultValue) const` | Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1acc1530a5f5f45c01bfc15a770433e5a0)`(int32 & OutValue) const` | Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1afeea8bdbf8fe60bad93d0653e45acabe)`()` | Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1ad5fae52c9c04ed93bc99d43fa978b874)`() const` | Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1a24da1028351f3903a231c68b0f035f91)`(const int32 & NewValue)` | Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true.
`public inline void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1a9b8d5544fa4f30e0e2495f1bf733b1b2)`(int32 && NewValue)` | Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true using move semantics.
`public inline void `[`ClearItemPortalUseRulesetId`](#structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5)`()` | Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false.
`public inline bool `[`IsItemPortalUseRulesetIdSet`](#structFRHAPI__Item_1a88872ad1535b5d4928bc80aeda9f962b)`() const` | Checks whether ItemPortalUseRulesetId_Optional has been set.
`public inline bool `[`IsItemPortalUseRulesetIdDefaultValue`](#structFRHAPI__Item_1a855c742cd4f2f1dbf1c7de69a353927e)`() const` | Returns true if ItemPortalUseRulesetId_Optional is set and matches the default value.
`public inline void `[`SetItemPortalUseRulesetIdToDefault`](#structFRHAPI__Item_1a0585c33836f0635d3b4722f7bfbf4f3c)`()` | Sets the value of ItemPortalUseRulesetId_Optional to its default and also sets ItemPortalUseRulesetId_IsSet to true.
`public inline FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1adc865be0e57d90f11d3336f90d58e37b)`()` | Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a00e38d4622520fb4d44a6c1888affa49)`() const` | Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1ac83d1dd2d3d5f48c4c2e9e1e2f4d69a4)`(const FString & DefaultValue) const` | Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1af4b6b107c6f4ff2ea9e3f2c084e8e72a)`(FString & OutValue) const` | Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1a51a6dff502fb6049b4da1d5503621184)`()` | Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1aa1ce2c494619d89b26673412bd3ffe72)`() const` | Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a73b40b8ae9c42addec4d0ced6b3db8ef)`(const FString & NewValue)` | Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true.
`public inline void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a765a19c21abc7b6f2510220b303759c6)`(FString && NewValue)` | Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0)`()` | Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false.
`public inline bool `[`IsInventoryBucketUseRuleSetIdSet`](#structFRHAPI__Item_1a3bc734432134f82dd3c3222f4c783a4b)`() const` | Checks whether InventoryBucketUseRuleSetId_Optional has been set.
`public inline TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a7adb63a40f2f2b7f6541d5b55d2807bd)`()` | Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1ab877e45b8915a49289b107e6f02f3361)`() const` | Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1afaf36c430134ec34d4715b67603ed34d)`(const TArray< int32 > & DefaultValue) const` | Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a647967de5190c2eae1cc4cc305545a50)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1af66046a0af411934999cb28bda91e77f)`()` | Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1abe675a41f0f1ef5f7f9bdaf3e833c400)`() const` | Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1a4f8a6c38ddf7a95c6c3ca4039c85b52d)`(const TArray< int32 > & NewValue)` | Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true.
`public inline void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1a5788557190d4cb6a98368c9b5cd26d2d)`(TArray< int32 > && NewValue)` | Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountLoot`](#structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b)`()` | Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false.
`public inline bool `[`IsCouponDiscountLootSet`](#structFRHAPI__Item_1aaa9e6982882230ed1f423e33f3e03484)`() const` | Checks whether CouponDiscountLoot_Optional has been set.
`public inline TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a9cbc4101f64eba5adc892009c71dbba9)`()` | Gets the value of CouponDiscountLootUuid_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1aaeb2012cfcaecbb49ba1c2e7e8543e86)`() const` | Gets the value of CouponDiscountLootUuid_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a08d86b869d38f052071e38c62109294c)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of CouponDiscountLootUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a9e14a7d704d977345988ba528d5479d5)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of CouponDiscountLootUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FGuid > * `[`GetCouponDiscountLootUuidOrNull`](#structFRHAPI__Item_1a103cf706fc2dee4a4fab64a98c428e33)`()` | Returns a pointer to CouponDiscountLootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FGuid > * `[`GetCouponDiscountLootUuidOrNull`](#structFRHAPI__Item_1a89259931823fb9faf6aaccf171db1d59)`() const` | Returns a pointer to CouponDiscountLootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCouponDiscountLootUuid`](#structFRHAPI__Item_1a7d39c17dfb06a2e8bdfa38861d72b4d9)`(const TArray< FGuid > & NewValue)` | Sets the value of CouponDiscountLootUuid_Optional and also sets CouponDiscountLootUuid_IsSet to true.
`public inline void `[`SetCouponDiscountLootUuid`](#structFRHAPI__Item_1a859cda7ddeb427e90852e98f31742872)`(TArray< FGuid > && NewValue)` | Sets the value of CouponDiscountLootUuid_Optional and also sets CouponDiscountLootUuid_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountLootUuid`](#structFRHAPI__Item_1ae15a27df3513971d3a1a02ba5107b357)`()` | Clears the value of CouponDiscountLootUuid_Optional and sets CouponDiscountLootUuid_IsSet to false.
`public inline bool `[`IsCouponDiscountLootUuidSet`](#structFRHAPI__Item_1ad28fdd2b1a0a63810eced58bea9bd96c)`() const` | Checks whether CouponDiscountLootUuid_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1a8f388d37b6e6b80682ae5ee8b0c5ed02)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1aa17b33e1a9258a96ba0d54c2177ea1fe)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1aadd57ea24afcf3893b31c9c1dae78f28)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Item_1a74a10cf52863208f9cfb9e26484a1b6f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1ac97664c780c86ddd5ca17ba51a821bab)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1a55b6dfdc9bce487875a616eb1dd5dd38)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Item_1a2af066addfb875c3a081297e00626263)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Item_1a4deaa7b49f5c2a74e6c9623265a07d66)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Item_1a9e9f1fe041fe7d0913950d86191a00b8)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47) <a id="structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16) <a id="structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16"></a>

true if CustomData_Optional has been set to a value

#### `public FGuid `[`ItemUuid_Optional`](#structFRHAPI__Item_1a80b591249bcf6a162cea03625859730b) <a id="structFRHAPI__Item_1a80b591249bcf6a162cea03625859730b"></a>

The Item UUID.

#### `public bool `[`ItemUuid_IsSet`](#structFRHAPI__Item_1ac78db9c246fdea6afcec61519e3bae79) <a id="structFRHAPI__Item_1ac78db9c246fdea6afcec61519e3bae79"></a>

true if ItemUuid_Optional has been set to a value

#### `public ERHAPI_ItemType `[`Type_Optional`](#structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe) <a id="structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe"></a>

The type of item.

#### `public bool `[`Type_IsSet`](#structFRHAPI__Item_1a0cc1c2c5e9833d046535ee67c6044d5b) <a id="structFRHAPI__Item_1a0cc1c2c5e9833d046535ee67c6044d5b"></a>

true if Type_Optional has been set to a value

#### `public int32 `[`LegacyType_Optional`](#structFRHAPI__Item_1a9105c322f788b420009e19957dc9ef3f) <a id="structFRHAPI__Item_1a9105c322f788b420009e19957dc9ef3f"></a>

#### `public bool `[`LegacyType_IsSet`](#structFRHAPI__Item_1a351cad97d7e9511c49556f52d97779a5) <a id="structFRHAPI__Item_1a351cad97d7e9511c49556f52d97779a5"></a>

true if LegacyType_Optional has been set to a value

#### `public int32 `[`LegacySubtype_Optional`](#structFRHAPI__Item_1ab36aeeabb1bfc49aef612af5412ba4dc) <a id="structFRHAPI__Item_1ab36aeeabb1bfc49aef612af5412ba4dc"></a>

#### `public bool `[`LegacySubtype_IsSet`](#structFRHAPI__Item_1a44394066ad672903ea7f73102064936f) <a id="structFRHAPI__Item_1a44394066ad672903ea7f73102064936f"></a>

true if LegacySubtype_Optional has been set to a value

#### `public int32 `[`RefItemId_Optional`](#structFRHAPI__Item_1a1fbf7b95a5761100f9ce8c2ce59afcd0) <a id="structFRHAPI__Item_1a1fbf7b95a5761100f9ce8c2ce59afcd0"></a>

#### `public bool `[`RefItemId_IsSet`](#structFRHAPI__Item_1aaeecdeed1bedbf5b25576e28ccd2c2b1) <a id="structFRHAPI__Item_1aaeecdeed1bedbf5b25576e28ccd2c2b1"></a>

true if RefItemId_Optional has been set to a value

#### `public int32 `[`AvailabilityFlags_Optional`](#structFRHAPI__Item_1ac0bdf0c75ad5b86f6032270151f4ad0e) <a id="structFRHAPI__Item_1ac0bdf0c75ad5b86f6032270151f4ad0e"></a>

#### `public bool `[`AvailabilityFlags_IsSet`](#structFRHAPI__Item_1a67bf7d179a5204d5ca2386582f437248) <a id="structFRHAPI__Item_1a67bf7d179a5204d5ca2386582f437248"></a>

true if AvailabilityFlags_Optional has been set to a value

#### `public FGuid `[`EntitledLootUuid_Optional`](#structFRHAPI__Item_1a55a6d7ad83368dc6d41cb20842ca11c3) <a id="structFRHAPI__Item_1a55a6d7ad83368dc6d41cb20842ca11c3"></a>

This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot that will be fulfilled.

#### `public bool `[`EntitledLootUuid_IsSet`](#structFRHAPI__Item_1a7b278bd51c30e2aa654e801bf8b778bd) <a id="structFRHAPI__Item_1a7b278bd51c30e2aa654e801bf8b778bd"></a>

true if EntitledLootUuid_Optional has been set to a value

#### `public int32 `[`EntitledLootId_Optional`](#structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf) <a id="structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf"></a>

This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled.

#### `public bool `[`EntitledLootId_IsSet`](#structFRHAPI__Item_1af42c3dae98945b853dd863c498951980) <a id="structFRHAPI__Item_1af42c3dae98945b853dd863c498951980"></a>

true if EntitledLootId_Optional has been set to a value

#### `public FGuid `[`LevelXpTableUuid_Optional`](#structFRHAPI__Item_1a797b9427d09a024a7e262926ea9c5f18) <a id="structFRHAPI__Item_1a797b9427d09a024a7e262926ea9c5f18"></a>

The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.

#### `public bool `[`LevelXpTableUuid_IsSet`](#structFRHAPI__Item_1ad36b1735e32314959dbc6e6a44957833) <a id="structFRHAPI__Item_1ad36b1735e32314959dbc6e6a44957833"></a>

true if LevelXpTableUuid_Optional has been set to a value

#### `public int32 `[`LevelXpTableId_Optional`](#structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471) <a id="structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471"></a>

The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.

#### `public bool `[`LevelXpTableId_IsSet`](#structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544) <a id="structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544"></a>

true if LevelXpTableId_Optional has been set to a value

#### `public FGuid `[`LevelVendorUuid_Optional`](#structFRHAPI__Item_1a54af64f2166321a3d54bfd49eb33d126) <a id="structFRHAPI__Item_1a54af64f2166321a3d54bfd49eb33d126"></a>

The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.

#### `public bool `[`LevelVendorUuid_IsSet`](#structFRHAPI__Item_1a2b83904f2221e90ebc9d8da3c9020ba2) <a id="structFRHAPI__Item_1a2b83904f2221e90ebc9d8da3c9020ba2"></a>

true if LevelVendorUuid_Optional has been set to a value

#### `public int32 `[`LevelVendorId_Optional`](#structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e) <a id="structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e"></a>

The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.

#### `public bool `[`LevelVendorId_IsSet`](#structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387) <a id="structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387"></a>

true if LevelVendorId_Optional has been set to a value

#### `public int32 `[`CouponDiscountCurrencyItemUuid_Optional`](#structFRHAPI__Item_1a5b085eb28301de72e1fcb58de98f0880) <a id="structFRHAPI__Item_1a5b085eb28301de72e1fcb58de98f0880"></a>

The item of the currency used by this coupon. This is only valid for an unit Item.

#### `public bool `[`CouponDiscountCurrencyItemUuid_IsSet`](#structFRHAPI__Item_1a1e52daf9baa1a3f8e08e674d61d057f2) <a id="structFRHAPI__Item_1a1e52daf9baa1a3f8e08e674d61d057f2"></a>

true if CouponDiscountCurrencyItemUuid_Optional has been set to a value

#### `public int32 `[`CouponDiscountCurrencyItemId_Optional`](#structFRHAPI__Item_1aac9de3a09ab34aa9feabf22202daae80) <a id="structFRHAPI__Item_1aac9de3a09ab34aa9feabf22202daae80"></a>

The item of the currency used by this coupon. This is only valid for an unit Item.

#### `public bool `[`CouponDiscountCurrencyItemId_IsSet`](#structFRHAPI__Item_1a0809de18d707f4af24019793672bbd25) <a id="structFRHAPI__Item_1a0809de18d707f4af24019793672bbd25"></a>

true if CouponDiscountCurrencyItemId_Optional has been set to a value

#### `public float `[`CouponDiscountPercentage_Optional`](#structFRHAPI__Item_1a809a2484d750588a4c62337e2b47ead5) <a id="structFRHAPI__Item_1a809a2484d750588a4c62337e2b47ead5"></a>

The percentage of the discount. This is only valid for an unit Item.

#### `public bool `[`CouponDiscountPercentage_IsSet`](#structFRHAPI__Item_1a4ebe06f6d6bc6a533dfdcecc4808ca13) <a id="structFRHAPI__Item_1a4ebe06f6d6bc6a533dfdcecc4808ca13"></a>

true if CouponDiscountPercentage_Optional has been set to a value

#### `public bool `[`CouponConsumeOnUse_Optional`](#structFRHAPI__Item_1ab8a0663be30e0c950774761d1ce2d296) <a id="structFRHAPI__Item_1ab8a0663be30e0c950774761d1ce2d296"></a>

If true, the coupon will be consumed when used; reducing the Player's Inventory quantity by 1. This is only valid for an unit Item.

#### `public bool `[`CouponConsumeOnUse_IsSet`](#structFRHAPI__Item_1a6901af6f3e9c28935f44f0a479391d27) <a id="structFRHAPI__Item_1a6901af6f3e9c28935f44f0a479391d27"></a>

true if CouponConsumeOnUse_Optional has been set to a value

#### `public int32 `[`ItemPortalUseRulesetId_Optional`](#structFRHAPI__Item_1ae1b19e8759742961745126c8858ce167) <a id="structFRHAPI__Item_1ae1b19e8759742961745126c8858ce167"></a>

#### `public bool `[`ItemPortalUseRulesetId_IsSet`](#structFRHAPI__Item_1ad179470bc0eac912b9de30cec699f45d) <a id="structFRHAPI__Item_1ad179470bc0eac912b9de30cec699f45d"></a>

true if ItemPortalUseRulesetId_Optional has been set to a value

#### `public FString `[`InventoryBucketUseRuleSetId_Optional`](#structFRHAPI__Item_1a0e0d5505b14a2ac60dbadfd639eda910) <a id="structFRHAPI__Item_1a0e0d5505b14a2ac60dbadfd639eda910"></a>

The Inventory Bucket Use Rule Set ID that determines how this item can be used across buckets.

#### `public bool `[`InventoryBucketUseRuleSetId_IsSet`](#structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a) <a id="structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a"></a>

true if InventoryBucketUseRuleSetId_Optional has been set to a value

#### `public TArray< int32 > `[`CouponDiscountLoot_Optional`](#structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd) <a id="structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd"></a>

List of Loot IDs this item can discount.

#### `public bool `[`CouponDiscountLoot_IsSet`](#structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09) <a id="structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09"></a>

true if CouponDiscountLoot_Optional has been set to a value

#### `public TArray< FGuid > `[`CouponDiscountLootUuid_Optional`](#structFRHAPI__Item_1a5784ccafb6f7909f659810f797202a84) <a id="structFRHAPI__Item_1a5784ccafb6f7909f659810f797202a84"></a>

List of Loot this item can discount.

#### `public bool `[`CouponDiscountLootUuid_IsSet`](#structFRHAPI__Item_1aa70b15d223288176fcaced0e7622087e) <a id="structFRHAPI__Item_1aa70b15d223288176fcaced0e7622087e"></a>

true if CouponDiscountLootUuid_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527) <a id="structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527"></a>

Cache information for this item.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084) <a id="structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Item_1a5e75ef0aa4b1af5286da65c549597c73)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Item_1a5e75ef0aa4b1af5286da65c549597c73"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Item_1a3c1c00737b0901dacb018f8ec687a315)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Item_1a3c1c00737b0901dacb018f8ec687a315"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a9877423eeda4551d0bcce4e413010756)`()` <a id="structFRHAPI__Item_1a9877423eeda4551d0bcce4e413010756"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5ebebbc4accead78b04905b5c948c8b4)`() const` <a id="structFRHAPI__Item_1a5ebebbc4accead78b04905b5c948c8b4"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5e66fa669417adc7f827c588bac9173d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Item_1a5e66fa669417adc7f827c588bac9173d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__Item_1a3925a150ee30d43bf0234cf1127104c3)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Item_1a3925a150ee30d43bf0234cf1127104c3"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a389c7829835ae2f827bce3502727c3bc)`()` <a id="structFRHAPI__Item_1a389c7829835ae2f827bce3502727c3bc"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a5cc497718caf078f6dd085bb4d559bea)`() const` <a id="structFRHAPI__Item_1a5cc497718caf078f6dd085bb4d559bea"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Item_1a015c53d3908e56ffb9c77b746133ea97)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Item_1a015c53d3908e56ffb9c77b746133ea97"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Item_1a704b6df3915791b80a6e8a880aa57f77)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Item_1a704b6df3915791b80a6e8a880aa57f77"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3)`()` <a id="structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__Item_1abe6c005fbaa770ed6fbee5be3920f1cc)`() const` <a id="structFRHAPI__Item_1abe6c005fbaa770ed6fbee5be3920f1cc"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1ae788a06d822bc1057f66fa86c8df7476)`()` <a id="structFRHAPI__Item_1ae788a06d822bc1057f66fa86c8df7476"></a>

Gets the value of ItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1a6e8b9d039005f978ac2eeafd1ee02799)`() const` <a id="structFRHAPI__Item_1a6e8b9d039005f978ac2eeafd1ee02799"></a>

Gets the value of ItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1a1f4d7d99afd96fc61e80b3e814ccb6b7)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1a1f4d7d99afd96fc61e80b3e814ccb6b7"></a>

Gets the value of ItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemUuid`](#structFRHAPI__Item_1a0355f157155593bf7ad0341f6e8213ad)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1a0355f157155593bf7ad0341f6e8213ad"></a>

Fills OutValue with the value of ItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Item_1a76baf045169f9a1e0c1c3b88e30484a4)`()` <a id="structFRHAPI__Item_1a76baf045169f9a1e0c1c3b88e30484a4"></a>

Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Item_1a0ea8c59d0f69b358c6d5e1e4a47229ac)`() const` <a id="structFRHAPI__Item_1a0ea8c59d0f69b358c6d5e1e4a47229ac"></a>

Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemUuid`](#structFRHAPI__Item_1a6f75624e5e10d13177207ce4db3f1b45)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1a6f75624e5e10d13177207ce4db3f1b45"></a>

Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true.

#### `public inline void `[`SetItemUuid`](#structFRHAPI__Item_1afa8eda7ecbd1c8cc0e299a2c2f9fdf0e)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1afa8eda7ecbd1c8cc0e299a2c2f9fdf0e"></a>

Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearItemUuid`](#structFRHAPI__Item_1ae117f4643d50d55557c3472cbf5839c1)`()` <a id="structFRHAPI__Item_1ae117f4643d50d55557c3472cbf5839c1"></a>

Clears the value of ItemUuid_Optional and sets ItemUuid_IsSet to false.

#### `public inline bool `[`IsItemUuidSet`](#structFRHAPI__Item_1a32232968f40beb8608b89bea1f71195a)`() const` <a id="structFRHAPI__Item_1a32232968f40beb8608b89bea1f71195a"></a>

Checks whether ItemUuid_Optional has been set.

#### `public inline ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a49d7d21797f5c8b07132e77c2ea1d923)`()` <a id="structFRHAPI__Item_1a49d7d21797f5c8b07132e77c2ea1d923"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1aa9476bcc0de419b823716064af6f58f4)`() const` <a id="structFRHAPI__Item_1aa9476bcc0de419b823716064af6f58f4"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a726e036301d0b7fe5e66ffd83fa6616b)`(const ERHAPI_ItemType & DefaultValue) const` <a id="structFRHAPI__Item_1a726e036301d0b7fe5e66ffd83fa6616b"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__Item_1a00930eaab0b51d2209fff3d0f9c92548)`(ERHAPI_ItemType & OutValue) const` <a id="structFRHAPI__Item_1a00930eaab0b51d2209fff3d0f9c92548"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a1eade82e2d073a97f111ef5d41d61a97)`()` <a id="structFRHAPI__Item_1a1eade82e2d073a97f111ef5d41d61a97"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a9302c15c16ac8cb34173cc62146928a7)`() const` <a id="structFRHAPI__Item_1a9302c15c16ac8cb34173cc62146928a7"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__Item_1a82309b5edc4557a16563a65a13204108)`(const ERHAPI_ItemType & NewValue)` <a id="structFRHAPI__Item_1a82309b5edc4557a16563a65a13204108"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__Item_1a10f023eb32d4a77fb36e7cba53683bdc)`(ERHAPI_ItemType && NewValue)` <a id="structFRHAPI__Item_1a10f023eb32d4a77fb36e7cba53683bdc"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84)`()` <a id="structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__Item_1ab3b1ab78f0108df20c008523bbfed86a)`() const` <a id="structFRHAPI__Item_1ab3b1ab78f0108df20c008523bbfed86a"></a>

Checks whether Type_Optional has been set.

#### `public inline int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a04ac5a2377e920488d956e648a597581)`()` <a id="structFRHAPI__Item_1a04ac5a2377e920488d956e648a597581"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a0249b4278450493e0bf5c5a17b3990d4)`() const` <a id="structFRHAPI__Item_1a0249b4278450493e0bf5c5a17b3990d4"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1ada591e1567140b0dff56d3e6f7ee894e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1ada591e1567140b0dff56d3e6f7ee894e"></a>

Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyType`](#structFRHAPI__Item_1a248418aa5571ba2b2f2adb9c42949403)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a248418aa5571ba2b2f2adb9c42949403"></a>

Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a4966c021583a1ebc75e1d046810af089)`()` <a id="structFRHAPI__Item_1a4966c021583a1ebc75e1d046810af089"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a5273cfcb41b37911075cd4f42f8bf4d0)`() const` <a id="structFRHAPI__Item_1a5273cfcb41b37911075cd4f42f8bf4d0"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyType`](#structFRHAPI__Item_1af62176137a2de1ce9a009a2c49b414ce)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1af62176137a2de1ce9a009a2c49b414ce"></a>

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.

#### `public inline void `[`SetLegacyType`](#structFRHAPI__Item_1a60e5fe4bae50df0518f6f33708384b17)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a60e5fe4bae50df0518f6f33708384b17"></a>

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyType`](#structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef)`()` <a id="structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef"></a>

Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.

#### `public inline bool `[`IsLegacyTypeSet`](#structFRHAPI__Item_1a689f46c32454425484e52f6b06cacc29)`() const` <a id="structFRHAPI__Item_1a689f46c32454425484e52f6b06cacc29"></a>

Checks whether LegacyType_Optional has been set.

#### `public inline bool `[`IsLegacyTypeDefaultValue`](#structFRHAPI__Item_1a5ee3a8b2559b1163c4f14bbba5f2fba4)`() const` <a id="structFRHAPI__Item_1a5ee3a8b2559b1163c4f14bbba5f2fba4"></a>

Returns true if LegacyType_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyTypeToDefault`](#structFRHAPI__Item_1a720984f8c98db38b0d40bc8e5682cba5)`()` <a id="structFRHAPI__Item_1a720984f8c98db38b0d40bc8e5682cba5"></a>

Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true.

#### `public inline int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1aac7331e9aa9739c56a5658299e143b48)`()` <a id="structFRHAPI__Item_1aac7331e9aa9739c56a5658299e143b48"></a>

Gets the value of LegacySubtype_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1af147dfa3a518ac3993216f8335554ce4)`() const` <a id="structFRHAPI__Item_1af147dfa3a518ac3993216f8335554ce4"></a>

Gets the value of LegacySubtype_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1a0536a243a417f203a28e0ce3ace60e34)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a0536a243a417f203a28e0ce3ace60e34"></a>

Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacySubtype`](#structFRHAPI__Item_1ab311f92e98d5238fe1fd5ed58a18eed4)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1ab311f92e98d5238fe1fd5ed58a18eed4"></a>

Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a9ed845d4d0e60ad1e7304c3307ceee27)`()` <a id="structFRHAPI__Item_1a9ed845d4d0e60ad1e7304c3307ceee27"></a>

Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a33fbbb353c4dd6122543386c2215c0a2)`() const` <a id="structFRHAPI__Item_1a33fbbb353c4dd6122543386c2215c0a2"></a>

Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacySubtype`](#structFRHAPI__Item_1a025515fcfc514f0297534e5346fd9578)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a025515fcfc514f0297534e5346fd9578"></a>

Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true.

#### `public inline void `[`SetLegacySubtype`](#structFRHAPI__Item_1a30e943d3f917eb26cc0e00fcf0ed854e)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a30e943d3f917eb26cc0e00fcf0ed854e"></a>

Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacySubtype`](#structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976)`()` <a id="structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976"></a>

Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false.

#### `public inline bool `[`IsLegacySubtypeSet`](#structFRHAPI__Item_1afd43847f1e904c769d777aa73a124ec9)`() const` <a id="structFRHAPI__Item_1afd43847f1e904c769d777aa73a124ec9"></a>

Checks whether LegacySubtype_Optional has been set.

#### `public inline bool `[`IsLegacySubtypeDefaultValue`](#structFRHAPI__Item_1a1066b8828dab67a895e13d0140679562)`() const` <a id="structFRHAPI__Item_1a1066b8828dab67a895e13d0140679562"></a>

Returns true if LegacySubtype_Optional is set and matches the default value.

#### `public inline void `[`SetLegacySubtypeToDefault`](#structFRHAPI__Item_1a26a6a394bb57a448f1feb37c175011f2)`()` <a id="structFRHAPI__Item_1a26a6a394bb57a448f1feb37c175011f2"></a>

Sets the value of LegacySubtype_Optional to its default and also sets LegacySubtype_IsSet to true.

#### `public inline int32 & `[`GetRefItemId`](#structFRHAPI__Item_1aa32c02a492dda2691acb404843752aa3)`()` <a id="structFRHAPI__Item_1aa32c02a492dda2691acb404843752aa3"></a>

Gets the value of RefItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1add1c1d7019f59acd9c88ba3f701f755c)`() const` <a id="structFRHAPI__Item_1add1c1d7019f59acd9c88ba3f701f755c"></a>

Gets the value of RefItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1ae43911780e299c9673e093aed4df2d9f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1ae43911780e299c9673e093aed4df2d9f"></a>

Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRefItemId`](#structFRHAPI__Item_1ae883e7828a3c06fd368959887ef2d88d)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1ae883e7828a3c06fd368959887ef2d88d"></a>

Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a3a158858c397392c94e5cc5dcca15c88)`()` <a id="structFRHAPI__Item_1a3a158858c397392c94e5cc5dcca15c88"></a>

Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a76c7e93bd03a29a4e516972a399a5ed1)`() const` <a id="structFRHAPI__Item_1a76c7e93bd03a29a4e516972a399a5ed1"></a>

Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRefItemId`](#structFRHAPI__Item_1ab23eb90e592503296cd5033a9dcf58b1)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1ab23eb90e592503296cd5033a9dcf58b1"></a>

Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true.

#### `public inline void `[`SetRefItemId`](#structFRHAPI__Item_1a5d4bf03570c2f591d5119515570d6bc1)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a5d4bf03570c2f591d5119515570d6bc1"></a>

Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearRefItemId`](#structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754)`()` <a id="structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754"></a>

Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false.

#### `public inline bool `[`IsRefItemIdSet`](#structFRHAPI__Item_1a6154d1197c0e93ccc270edaf5b300d7b)`() const` <a id="structFRHAPI__Item_1a6154d1197c0e93ccc270edaf5b300d7b"></a>

Checks whether RefItemId_Optional has been set.

#### `public inline bool `[`IsRefItemIdDefaultValue`](#structFRHAPI__Item_1a1af549c0e4ae73ae1e2a21cc8db4f2f5)`() const` <a id="structFRHAPI__Item_1a1af549c0e4ae73ae1e2a21cc8db4f2f5"></a>

Returns true if RefItemId_Optional is set and matches the default value.

#### `public inline void `[`SetRefItemIdToDefault`](#structFRHAPI__Item_1a5ffafc7f7977147c1304e6b2d9a0c57d)`()` <a id="structFRHAPI__Item_1a5ffafc7f7977147c1304e6b2d9a0c57d"></a>

Sets the value of RefItemId_Optional to its default and also sets RefItemId_IsSet to true.

#### `public inline int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1ace06eaef976957049107ac7d7bc7f1ea)`()` <a id="structFRHAPI__Item_1ace06eaef976957049107ac7d7bc7f1ea"></a>

Gets the value of AvailabilityFlags_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1ad2687831575df1161609773684a1af4a)`() const` <a id="structFRHAPI__Item_1ad2687831575df1161609773684a1af4a"></a>

Gets the value of AvailabilityFlags_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1aabb2d536459b2cf5fd5372975b526583)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1aabb2d536459b2cf5fd5372975b526583"></a>

Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAvailabilityFlags`](#structFRHAPI__Item_1a9a7ae008c53e0a3fa3c44ee868c1d057)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a9a7ae008c53e0a3fa3c44ee868c1d057"></a>

Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1ad5157c44c115d3b028d2df26acc8aeee)`()` <a id="structFRHAPI__Item_1ad5157c44c115d3b028d2df26acc8aeee"></a>

Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1a60ca2804ebcfa5d5abaec6558f2b4f53)`() const` <a id="structFRHAPI__Item_1a60ca2804ebcfa5d5abaec6558f2b4f53"></a>

Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1a787ded3092c3a4515c990b4f42b4d697)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a787ded3092c3a4515c990b4f42b4d697"></a>

Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true.

#### `public inline void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1afbeb845e860d93d68994cd64d6df27cb)`(int32 && NewValue)` <a id="structFRHAPI__Item_1afbeb845e860d93d68994cd64d6df27cb"></a>

Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true using move semantics.

#### `public inline void `[`ClearAvailabilityFlags`](#structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8)`()` <a id="structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8"></a>

Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false.

#### `public inline bool `[`IsAvailabilityFlagsSet`](#structFRHAPI__Item_1a7635dda467e04cbd47351dc4862cb4c8)`() const` <a id="structFRHAPI__Item_1a7635dda467e04cbd47351dc4862cb4c8"></a>

Checks whether AvailabilityFlags_Optional has been set.

#### `public inline bool `[`IsAvailabilityFlagsDefaultValue`](#structFRHAPI__Item_1a23be4efbe75354ed2cc0aa5188c827fb)`() const` <a id="structFRHAPI__Item_1a23be4efbe75354ed2cc0aa5188c827fb"></a>

Returns true if AvailabilityFlags_Optional is set and matches the default value.

#### `public inline void `[`SetAvailabilityFlagsToDefault`](#structFRHAPI__Item_1aef8c5832626e314d6a91b041d1014bc9)`()` <a id="structFRHAPI__Item_1aef8c5832626e314d6a91b041d1014bc9"></a>

Sets the value of AvailabilityFlags_Optional to its default and also sets AvailabilityFlags_IsSet to true.

#### `public inline FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a72495b5da6bd4d7045ac0e85071a4a7b)`()` <a id="structFRHAPI__Item_1a72495b5da6bd4d7045ac0e85071a4a7b"></a>

Gets the value of EntitledLootUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a223810ecab928411853539d3cefcf619)`() const` <a id="structFRHAPI__Item_1a223810ecab928411853539d3cefcf619"></a>

Gets the value of EntitledLootUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a269a162c2d0b87b65c179e84724018c2)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1a269a162c2d0b87b65c179e84724018c2"></a>

Gets the value of EntitledLootUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a42eeaf6b6692598add6973b2796dffd0)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1a42eeaf6b6692598add6973b2796dffd0"></a>

Fills OutValue with the value of EntitledLootUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetEntitledLootUuidOrNull`](#structFRHAPI__Item_1a8af49ca9d058e2d492e25cbb32db58ef)`()` <a id="structFRHAPI__Item_1a8af49ca9d058e2d492e25cbb32db58ef"></a>

Returns a pointer to EntitledLootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetEntitledLootUuidOrNull`](#structFRHAPI__Item_1acec81400479962ad8530919ab0522091)`() const` <a id="structFRHAPI__Item_1acec81400479962ad8530919ab0522091"></a>

Returns a pointer to EntitledLootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntitledLootUuid`](#structFRHAPI__Item_1aee8811848eac772eb9b5ff228765675d)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1aee8811848eac772eb9b5ff228765675d"></a>

Sets the value of EntitledLootUuid_Optional and also sets EntitledLootUuid_IsSet to true.

#### `public inline void `[`SetEntitledLootUuid`](#structFRHAPI__Item_1a56ba00061fb3c807ae5f1a7a34e7555e)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1a56ba00061fb3c807ae5f1a7a34e7555e"></a>

Sets the value of EntitledLootUuid_Optional and also sets EntitledLootUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitledLootUuid`](#structFRHAPI__Item_1a80b307d98d2d4dfd01c5f180d8afb707)`()` <a id="structFRHAPI__Item_1a80b307d98d2d4dfd01c5f180d8afb707"></a>

Clears the value of EntitledLootUuid_Optional and sets EntitledLootUuid_IsSet to false.

#### `public inline bool `[`IsEntitledLootUuidSet`](#structFRHAPI__Item_1a5d3d67041b84635a8c2d641ff1f26e0a)`() const` <a id="structFRHAPI__Item_1a5d3d67041b84635a8c2d641ff1f26e0a"></a>

Checks whether EntitledLootUuid_Optional has been set.

#### `public inline int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1aa663a42295c435eee5a53d3abe079784)`()` <a id="structFRHAPI__Item_1aa663a42295c435eee5a53d3abe079784"></a>

Gets the value of EntitledLootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1ae3ee53922ccc4d4ffe3d569a6c8a0e26)`() const` <a id="structFRHAPI__Item_1ae3ee53922ccc4d4ffe3d569a6c8a0e26"></a>

Gets the value of EntitledLootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1a0c7124adafa090e465992506d4ed2635)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a0c7124adafa090e465992506d4ed2635"></a>

Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntitledLootId`](#structFRHAPI__Item_1a3b5abfb93e819a326cb9df5a5d172cac)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a3b5abfb93e819a326cb9df5a5d172cac"></a>

Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1a7bd57a25619dbe4969f27e8e702baf37)`()` <a id="structFRHAPI__Item_1a7bd57a25619dbe4969f27e8e702baf37"></a>

Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1af16a86fe61c601d2a6e9d33dc04ed94e)`() const` <a id="structFRHAPI__Item_1af16a86fe61c601d2a6e9d33dc04ed94e"></a>

Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntitledLootId`](#structFRHAPI__Item_1aa94cde1b0428d56fc20beaee1fd0c4d7)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1aa94cde1b0428d56fc20beaee1fd0c4d7"></a>

Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true.

#### `public inline void `[`SetEntitledLootId`](#structFRHAPI__Item_1adef78784a94266ff134fe98173e771b0)`(int32 && NewValue)` <a id="structFRHAPI__Item_1adef78784a94266ff134fe98173e771b0"></a>

Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitledLootId`](#structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda)`()` <a id="structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda"></a>

Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false.

#### `public inline bool `[`IsEntitledLootIdSet`](#structFRHAPI__Item_1ab09f0bd3d6856035af3e141b4723c066)`() const` <a id="structFRHAPI__Item_1ab09f0bd3d6856035af3e141b4723c066"></a>

Checks whether EntitledLootId_Optional has been set.

#### `public inline bool `[`IsEntitledLootIdDefaultValue`](#structFRHAPI__Item_1a89de44af3b2baea1dcf09c5297058dfb)`() const` <a id="structFRHAPI__Item_1a89de44af3b2baea1dcf09c5297058dfb"></a>

Returns true if EntitledLootId_Optional is set and matches the default value.

#### `public inline void `[`SetEntitledLootIdToDefault`](#structFRHAPI__Item_1aa92bb7b9880364b596cca22b0833546b)`()` <a id="structFRHAPI__Item_1aa92bb7b9880364b596cca22b0833546b"></a>

Sets the value of EntitledLootId_Optional to its default and also sets EntitledLootId_IsSet to true.

#### `public inline FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1ad608c95535d8ec2cebb22d7cc393b37e)`()` <a id="structFRHAPI__Item_1ad608c95535d8ec2cebb22d7cc393b37e"></a>

Gets the value of LevelXpTableUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a9dba17692308d91369391066c2c64dd0)`() const` <a id="structFRHAPI__Item_1a9dba17692308d91369391066c2c64dd0"></a>

Gets the value of LevelXpTableUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a9e5da86d3c6afa80130fcdba586e34e3)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1a9e5da86d3c6afa80130fcdba586e34e3"></a>

Gets the value of LevelXpTableUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1aad99d1104aa4c7c69cdd7e96287f9860)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1aad99d1104aa4c7c69cdd7e96287f9860"></a>

Fills OutValue with the value of LevelXpTableUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetLevelXpTableUuidOrNull`](#structFRHAPI__Item_1a95caead419363a9e2b8acd2f6428414a)`()` <a id="structFRHAPI__Item_1a95caead419363a9e2b8acd2f6428414a"></a>

Returns a pointer to LevelXpTableUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetLevelXpTableUuidOrNull`](#structFRHAPI__Item_1acf248e37f41452ca82b17b85062fcd53)`() const` <a id="structFRHAPI__Item_1acf248e37f41452ca82b17b85062fcd53"></a>

Returns a pointer to LevelXpTableUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLevelXpTableUuid`](#structFRHAPI__Item_1a49dc70a310aaec33fc1dfddf780a773f)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1a49dc70a310aaec33fc1dfddf780a773f"></a>

Sets the value of LevelXpTableUuid_Optional and also sets LevelXpTableUuid_IsSet to true.

#### `public inline void `[`SetLevelXpTableUuid`](#structFRHAPI__Item_1ae2d873fe4792b0657cd0d9c0a7cd905b)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1ae2d873fe4792b0657cd0d9c0a7cd905b"></a>

Sets the value of LevelXpTableUuid_Optional and also sets LevelXpTableUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearLevelXpTableUuid`](#structFRHAPI__Item_1aa045a9bebae787bfd2ca849c041b3a4f)`()` <a id="structFRHAPI__Item_1aa045a9bebae787bfd2ca849c041b3a4f"></a>

Clears the value of LevelXpTableUuid_Optional and sets LevelXpTableUuid_IsSet to false.

#### `public inline bool `[`IsLevelXpTableUuidSet`](#structFRHAPI__Item_1a4a011653b815f41974b88e5bc21df0ce)`() const` <a id="structFRHAPI__Item_1a4a011653b815f41974b88e5bc21df0ce"></a>

Checks whether LevelXpTableUuid_Optional has been set.

#### `public inline int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a44e61fc34bbfea9afea0e3c4055ce6be)`()` <a id="structFRHAPI__Item_1a44e61fc34bbfea9afea0e3c4055ce6be"></a>

Gets the value of LevelXpTableId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a2b469bf022b1752972b45d91204a04cd)`() const` <a id="structFRHAPI__Item_1a2b469bf022b1752972b45d91204a04cd"></a>

Gets the value of LevelXpTableId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a0d3910b394c00b4d1cc284653ee611b1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a0d3910b394c00b4d1cc284653ee611b1"></a>

Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLevelXpTableId`](#structFRHAPI__Item_1a9ea97eb49e4e90964abce5ab17f270b5)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a9ea97eb49e4e90964abce5ab17f270b5"></a>

Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1a1199be5a1b0e601285cf2b73ffeb8d4f)`()` <a id="structFRHAPI__Item_1a1199be5a1b0e601285cf2b73ffeb8d4f"></a>

Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1af10405d5fafaf567a5e6d42b5a13b228)`() const` <a id="structFRHAPI__Item_1af10405d5fafaf567a5e6d42b5a13b228"></a>

Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLevelXpTableId`](#structFRHAPI__Item_1affac8e552e618cd3646d020b8c572acf)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1affac8e552e618cd3646d020b8c572acf"></a>

Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true.

#### `public inline void `[`SetLevelXpTableId`](#structFRHAPI__Item_1aaec876c264a786f5e47edd03e07a9774)`(int32 && NewValue)` <a id="structFRHAPI__Item_1aaec876c264a786f5e47edd03e07a9774"></a>

Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true using move semantics.

#### `public inline void `[`ClearLevelXpTableId`](#structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463)`()` <a id="structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463"></a>

Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false.

#### `public inline bool `[`IsLevelXpTableIdSet`](#structFRHAPI__Item_1aa4dddc6efc3bbe6013aced0593cb55d3)`() const` <a id="structFRHAPI__Item_1aa4dddc6efc3bbe6013aced0593cb55d3"></a>

Checks whether LevelXpTableId_Optional has been set.

#### `public inline bool `[`IsLevelXpTableIdDefaultValue`](#structFRHAPI__Item_1aa20e8f9abb29c6b87f5f47e4c3b54ba9)`() const` <a id="structFRHAPI__Item_1aa20e8f9abb29c6b87f5f47e4c3b54ba9"></a>

Returns true if LevelXpTableId_Optional is set and matches the default value.

#### `public inline void `[`SetLevelXpTableIdToDefault`](#structFRHAPI__Item_1ac6f63b9312de41a44c7c3c49f4e17fde)`()` <a id="structFRHAPI__Item_1ac6f63b9312de41a44c7c3c49f4e17fde"></a>

Sets the value of LevelXpTableId_Optional to its default and also sets LevelXpTableId_IsSet to true.

#### `public inline FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a010cd8a2155ba73e95d5b7d473641391)`()` <a id="structFRHAPI__Item_1a010cd8a2155ba73e95d5b7d473641391"></a>

Gets the value of LevelVendorUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a5ff415460b4f86fe38c4f0ddb117f349)`() const` <a id="structFRHAPI__Item_1a5ff415460b4f86fe38c4f0ddb117f349"></a>

Gets the value of LevelVendorUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1afa9eb2fd9a03ae0392393d139bc0788c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1afa9eb2fd9a03ae0392393d139bc0788c"></a>

Gets the value of LevelVendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a106505efa4e84e24c23780bcb5f3c826)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1a106505efa4e84e24c23780bcb5f3c826"></a>

Fills OutValue with the value of LevelVendorUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetLevelVendorUuidOrNull`](#structFRHAPI__Item_1a124a063912e4597844612b16a2d924d4)`()` <a id="structFRHAPI__Item_1a124a063912e4597844612b16a2d924d4"></a>

Returns a pointer to LevelVendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetLevelVendorUuidOrNull`](#structFRHAPI__Item_1ae3bdf85bb51f3540c8bc9bf807e595e3)`() const` <a id="structFRHAPI__Item_1ae3bdf85bb51f3540c8bc9bf807e595e3"></a>

Returns a pointer to LevelVendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLevelVendorUuid`](#structFRHAPI__Item_1aae04871c0242965b67a9eb74a4d3e553)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1aae04871c0242965b67a9eb74a4d3e553"></a>

Sets the value of LevelVendorUuid_Optional and also sets LevelVendorUuid_IsSet to true.

#### `public inline void `[`SetLevelVendorUuid`](#structFRHAPI__Item_1a5e15a80ca954fc6ae976fba37878cdf6)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1a5e15a80ca954fc6ae976fba37878cdf6"></a>

Sets the value of LevelVendorUuid_Optional and also sets LevelVendorUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearLevelVendorUuid`](#structFRHAPI__Item_1a5e63c9d337ee6543483319fa12b01c6d)`()` <a id="structFRHAPI__Item_1a5e63c9d337ee6543483319fa12b01c6d"></a>

Clears the value of LevelVendorUuid_Optional and sets LevelVendorUuid_IsSet to false.

#### `public inline bool `[`IsLevelVendorUuidSet`](#structFRHAPI__Item_1a1eb134198a801e945e40c861208a30a5)`() const` <a id="structFRHAPI__Item_1a1eb134198a801e945e40c861208a30a5"></a>

Checks whether LevelVendorUuid_Optional has been set.

#### `public inline int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1aa6f49533c15b8a509d17e62a8c34c01f)`()` <a id="structFRHAPI__Item_1aa6f49533c15b8a509d17e62a8c34c01f"></a>

Gets the value of LevelVendorId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a760bdc790c71299d23ae7ef9ca1079f6)`() const` <a id="structFRHAPI__Item_1a760bdc790c71299d23ae7ef9ca1079f6"></a>

Gets the value of LevelVendorId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a9afd8152f91ba3169a8e289872144577)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a9afd8152f91ba3169a8e289872144577"></a>

Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLevelVendorId`](#structFRHAPI__Item_1a3cb4c5ed96cfea63a1a0b270d53c0016)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a3cb4c5ed96cfea63a1a0b270d53c0016"></a>

Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1a433fb76caf7ffc80ef4ed2a3b3a8c931)`()` <a id="structFRHAPI__Item_1a433fb76caf7ffc80ef4ed2a3b3a8c931"></a>

Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1ab3c28975c164af1aefa070818df8de9a)`() const` <a id="structFRHAPI__Item_1ab3c28975c164af1aefa070818df8de9a"></a>

Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLevelVendorId`](#structFRHAPI__Item_1a6206e135389392cf3a8b9ab2dd73aa64)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a6206e135389392cf3a8b9ab2dd73aa64"></a>

Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true.

#### `public inline void `[`SetLevelVendorId`](#structFRHAPI__Item_1a091a8aa94eb7e8ac8522498fc4a48d2e)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a091a8aa94eb7e8ac8522498fc4a48d2e"></a>

Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true using move semantics.

#### `public inline void `[`ClearLevelVendorId`](#structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2)`()` <a id="structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2"></a>

Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false.

#### `public inline bool `[`IsLevelVendorIdSet`](#structFRHAPI__Item_1a70dd0dabebfb683fb9b450808b5e6606)`() const` <a id="structFRHAPI__Item_1a70dd0dabebfb683fb9b450808b5e6606"></a>

Checks whether LevelVendorId_Optional has been set.

#### `public inline bool `[`IsLevelVendorIdDefaultValue`](#structFRHAPI__Item_1a6142502c0d3ecc38bc20254af3cffc22)`() const` <a id="structFRHAPI__Item_1a6142502c0d3ecc38bc20254af3cffc22"></a>

Returns true if LevelVendorId_Optional is set and matches the default value.

#### `public inline void `[`SetLevelVendorIdToDefault`](#structFRHAPI__Item_1ad31d4c1ae0420e87716468dccbc6cb44)`()` <a id="structFRHAPI__Item_1ad31d4c1ae0420e87716468dccbc6cb44"></a>

Sets the value of LevelVendorId_Optional to its default and also sets LevelVendorId_IsSet to true.

#### `public inline int32 & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a21d177502f2693c43b07ea21472e1bc4)`()` <a id="structFRHAPI__Item_1a21d177502f2693c43b07ea21472e1bc4"></a>

Gets the value of CouponDiscountCurrencyItemUuid_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1aef4c21885e73412e415747d20fa3113d)`() const` <a id="structFRHAPI__Item_1aef4c21885e73412e415747d20fa3113d"></a>

Gets the value of CouponDiscountCurrencyItemUuid_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a5776bca152d0b005fa2b3ed9c32400aa)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a5776bca152d0b005fa2b3ed9c32400aa"></a>

Gets the value of CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a0bae44ba24eced7bea897feb2bbb3ce4)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a0bae44ba24eced7bea897feb2bbb3ce4"></a>

Fills OutValue with the value of CouponDiscountCurrencyItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetCouponDiscountCurrencyItemUuidOrNull`](#structFRHAPI__Item_1a04d7e0c434f7e3e7800742b7e96fe93a)`()` <a id="structFRHAPI__Item_1a04d7e0c434f7e3e7800742b7e96fe93a"></a>

Returns a pointer to CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetCouponDiscountCurrencyItemUuidOrNull`](#structFRHAPI__Item_1aeb9ee7e13d6e598095a46c31e572ba21)`() const` <a id="structFRHAPI__Item_1aeb9ee7e13d6e598095a46c31e572ba21"></a>

Returns a pointer to CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a617afd30ace10ae605d0cb2639e626d0)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a617afd30ace10ae605d0cb2639e626d0"></a>

Sets the value of CouponDiscountCurrencyItemUuid_Optional and also sets CouponDiscountCurrencyItemUuid_IsSet to true.

#### `public inline void `[`SetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a34877b25a43951c0e442c6ebc03e6d0b)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a34877b25a43951c0e442c6ebc03e6d0b"></a>

Sets the value of CouponDiscountCurrencyItemUuid_Optional and also sets CouponDiscountCurrencyItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1aad2f0040ddc2e9e4f217aed5358cd17b)`()` <a id="structFRHAPI__Item_1aad2f0040ddc2e9e4f217aed5358cd17b"></a>

Clears the value of CouponDiscountCurrencyItemUuid_Optional and sets CouponDiscountCurrencyItemUuid_IsSet to false.

#### `public inline bool `[`IsCouponDiscountCurrencyItemUuidSet`](#structFRHAPI__Item_1af9580809322a553ee79f764eaff8b15b)`() const` <a id="structFRHAPI__Item_1af9580809322a553ee79f764eaff8b15b"></a>

Checks whether CouponDiscountCurrencyItemUuid_Optional has been set.

#### `public inline bool `[`IsCouponDiscountCurrencyItemUuidDefaultValue`](#structFRHAPI__Item_1a6a225b37958e3f2df003cae32fa27492)`() const` <a id="structFRHAPI__Item_1a6a225b37958e3f2df003cae32fa27492"></a>

Returns true if CouponDiscountCurrencyItemUuid_Optional is set and matches the default value.

#### `public inline void `[`SetCouponDiscountCurrencyItemUuidToDefault`](#structFRHAPI__Item_1a10137e11a87a4618acf04cf57b051dd0)`()` <a id="structFRHAPI__Item_1a10137e11a87a4618acf04cf57b051dd0"></a>

Sets the value of CouponDiscountCurrencyItemUuid_Optional to its default and also sets CouponDiscountCurrencyItemUuid_IsSet to true.

#### `public inline int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1abe691e103c37e8ea19820f713eb37bc5)`()` <a id="structFRHAPI__Item_1abe691e103c37e8ea19820f713eb37bc5"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ad395eb7249ce6232d7655bebbf96321c)`() const` <a id="structFRHAPI__Item_1ad395eb7249ce6232d7655bebbf96321c"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1aa8af0136a73257d951a2518bfd139e66)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1aa8af0136a73257d951a2518bfd139e66"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ae288be3af3f201bb47f7b1593804ec81)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1ae288be3af3f201bb47f7b1593804ec81"></a>

Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a142d1193619939bd0e65aac44cf17c8e)`()` <a id="structFRHAPI__Item_1a142d1193619939bd0e65aac44cf17c8e"></a>

Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a458af7661f1215e8d61709ef84e57b13)`() const` <a id="structFRHAPI__Item_1a458af7661f1215e8d61709ef84e57b13"></a>

Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a637dbd62fcdc71be9cd2535a9576d9f8)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a637dbd62fcdc71be9cd2535a9576d9f8"></a>

Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true.

#### `public inline void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ad09ba063591a147765edbf8be84953a4)`(int32 && NewValue)` <a id="structFRHAPI__Item_1ad09ba063591a147765edbf8be84953a4"></a>

Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675)`()` <a id="structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675"></a>

Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false.

#### `public inline bool `[`IsCouponDiscountCurrencyItemIdSet`](#structFRHAPI__Item_1ae37f62a54627f0c8c6b799776df51d3a)`() const` <a id="structFRHAPI__Item_1ae37f62a54627f0c8c6b799776df51d3a"></a>

Checks whether CouponDiscountCurrencyItemId_Optional has been set.

#### `public inline bool `[`IsCouponDiscountCurrencyItemIdDefaultValue`](#structFRHAPI__Item_1ad2a4ae4c698ce16d4da22a01ebabff5c)`() const` <a id="structFRHAPI__Item_1ad2a4ae4c698ce16d4da22a01ebabff5c"></a>

Returns true if CouponDiscountCurrencyItemId_Optional is set and matches the default value.

#### `public inline void `[`SetCouponDiscountCurrencyItemIdToDefault`](#structFRHAPI__Item_1a96e413cc85c150d5304c819aa99fc188)`()` <a id="structFRHAPI__Item_1a96e413cc85c150d5304c819aa99fc188"></a>

Sets the value of CouponDiscountCurrencyItemId_Optional to its default and also sets CouponDiscountCurrencyItemId_IsSet to true.

#### `public inline float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1ae14bab7c0189f8aebebda30323b9eedd)`()` <a id="structFRHAPI__Item_1ae14bab7c0189f8aebebda30323b9eedd"></a>

Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.

#### `public inline const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a408d793116e0d7b84481c11b50d71b14)`() const` <a id="structFRHAPI__Item_1a408d793116e0d7b84481c11b50d71b14"></a>

Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.

#### `public inline const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a843bbcfe5a04068e9118868a5e082a2b)`(const float & DefaultValue) const` <a id="structFRHAPI__Item_1a843bbcfe5a04068e9118868a5e082a2b"></a>

Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1ab4edbf9af9acbcab0d31e952fa3d1dcf)`(float & OutValue) const` <a id="structFRHAPI__Item_1ab4edbf9af9acbcab0d31e952fa3d1dcf"></a>

Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1a6f12938ad107192e2616ae82c09734f1)`()` <a id="structFRHAPI__Item_1a6f12938ad107192e2616ae82c09734f1"></a>

Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1a8ac0fe931259abf7b4f2eed6505c351b)`() const` <a id="structFRHAPI__Item_1a8ac0fe931259abf7b4f2eed6505c351b"></a>

Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1a9c176a59ea3705b2aed3ce59580b2637)`(const float & NewValue)` <a id="structFRHAPI__Item_1a9c176a59ea3705b2aed3ce59580b2637"></a>

Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true.

#### `public inline void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1a902a987b0f0c44b65747e9a4adabbe25)`(float && NewValue)` <a id="structFRHAPI__Item_1a902a987b0f0c44b65747e9a4adabbe25"></a>

Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountPercentage`](#structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b)`()` <a id="structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b"></a>

Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false.

#### `public inline bool `[`IsCouponDiscountPercentageSet`](#structFRHAPI__Item_1a3c776f49711660f9a6a8cb8442f232c8)`() const` <a id="structFRHAPI__Item_1a3c776f49711660f9a6a8cb8442f232c8"></a>

Checks whether CouponDiscountPercentage_Optional has been set.

#### `public inline bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1ad2e8f18426e341528612a403943965ec)`()` <a id="structFRHAPI__Item_1ad2e8f18426e341528612a403943965ec"></a>

Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1aaee1f063191491d7d50d9347f5c61ccf)`() const` <a id="structFRHAPI__Item_1aaee1f063191491d7d50d9347f5c61ccf"></a>

Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a0fca1718bcdec9078f84bbd70602396e)`(const bool & DefaultValue) const` <a id="structFRHAPI__Item_1a0fca1718bcdec9078f84bbd70602396e"></a>

Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a26420a8731f2fc00a508a421e0c7f796)`(bool & OutValue) const` <a id="structFRHAPI__Item_1a26420a8731f2fc00a508a421e0c7f796"></a>

Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1a5221677a2821ca61790dc3dd46712b8b)`()` <a id="structFRHAPI__Item_1a5221677a2821ca61790dc3dd46712b8b"></a>

Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1af2e4ce0b6a8c90db90275bc71b06e407)`() const` <a id="structFRHAPI__Item_1af2e4ce0b6a8c90db90275bc71b06e407"></a>

Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1a2906d3fcab28c1e68243e7d686b3d3fd)`(const bool & NewValue)` <a id="structFRHAPI__Item_1a2906d3fcab28c1e68243e7d686b3d3fd"></a>

Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true.

#### `public inline void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1a0fc7e9c8f2d9bc1cea02ab6bb3db636a)`(bool && NewValue)` <a id="structFRHAPI__Item_1a0fc7e9c8f2d9bc1cea02ab6bb3db636a"></a>

Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponConsumeOnUse`](#structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480)`()` <a id="structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480"></a>

Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false.

#### `public inline bool `[`IsCouponConsumeOnUseSet`](#structFRHAPI__Item_1a6f0e7fa2c8d0d0ef789ce713b25cd291)`() const` <a id="structFRHAPI__Item_1a6f0e7fa2c8d0d0ef789ce713b25cd291"></a>

Checks whether CouponConsumeOnUse_Optional has been set.

#### `public inline bool `[`IsCouponConsumeOnUseDefaultValue`](#structFRHAPI__Item_1a27ee21d9a1af8be2d1e0970fb9d122fa)`() const` <a id="structFRHAPI__Item_1a27ee21d9a1af8be2d1e0970fb9d122fa"></a>

Returns true if CouponConsumeOnUse_Optional is set and matches the default value.

#### `public inline void `[`SetCouponConsumeOnUseToDefault`](#structFRHAPI__Item_1a002f4547e9b061e2792f368936a4e2a0)`()` <a id="structFRHAPI__Item_1a002f4547e9b061e2792f368936a4e2a0"></a>

Sets the value of CouponConsumeOnUse_Optional to its default and also sets CouponConsumeOnUse_IsSet to true.

#### `public inline int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a8972dc76b212d972a2b518211add4f17)`()` <a id="structFRHAPI__Item_1a8972dc76b212d972a2b518211add4f17"></a>

Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a6525e7a7b3a5260b9865e5cfc4b3ce6c)`() const` <a id="structFRHAPI__Item_1a6525e7a7b3a5260b9865e5cfc4b3ce6c"></a>

Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a38dc8fff9eb52ab927aacb88d1f8d807)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a38dc8fff9eb52ab927aacb88d1f8d807"></a>

Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1acc1530a5f5f45c01bfc15a770433e5a0)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1acc1530a5f5f45c01bfc15a770433e5a0"></a>

Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1afeea8bdbf8fe60bad93d0653e45acabe)`()` <a id="structFRHAPI__Item_1afeea8bdbf8fe60bad93d0653e45acabe"></a>

Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1ad5fae52c9c04ed93bc99d43fa978b874)`() const` <a id="structFRHAPI__Item_1ad5fae52c9c04ed93bc99d43fa978b874"></a>

Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1a24da1028351f3903a231c68b0f035f91)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a24da1028351f3903a231c68b0f035f91"></a>

Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true.

#### `public inline void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1a9b8d5544fa4f30e0e2495f1bf733b1b2)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a9b8d5544fa4f30e0e2495f1bf733b1b2"></a>

Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemPortalUseRulesetId`](#structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5)`()` <a id="structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5"></a>

Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false.

#### `public inline bool `[`IsItemPortalUseRulesetIdSet`](#structFRHAPI__Item_1a88872ad1535b5d4928bc80aeda9f962b)`() const` <a id="structFRHAPI__Item_1a88872ad1535b5d4928bc80aeda9f962b"></a>

Checks whether ItemPortalUseRulesetId_Optional has been set.

#### `public inline bool `[`IsItemPortalUseRulesetIdDefaultValue`](#structFRHAPI__Item_1a855c742cd4f2f1dbf1c7de69a353927e)`() const` <a id="structFRHAPI__Item_1a855c742cd4f2f1dbf1c7de69a353927e"></a>

Returns true if ItemPortalUseRulesetId_Optional is set and matches the default value.

#### `public inline void `[`SetItemPortalUseRulesetIdToDefault`](#structFRHAPI__Item_1a0585c33836f0635d3b4722f7bfbf4f3c)`()` <a id="structFRHAPI__Item_1a0585c33836f0635d3b4722f7bfbf4f3c"></a>

Sets the value of ItemPortalUseRulesetId_Optional to its default and also sets ItemPortalUseRulesetId_IsSet to true.

#### `public inline FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1adc865be0e57d90f11d3336f90d58e37b)`()` <a id="structFRHAPI__Item_1adc865be0e57d90f11d3336f90d58e37b"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a00e38d4622520fb4d44a6c1888affa49)`() const` <a id="structFRHAPI__Item_1a00e38d4622520fb4d44a6c1888affa49"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1ac83d1dd2d3d5f48c4c2e9e1e2f4d69a4)`(const FString & DefaultValue) const` <a id="structFRHAPI__Item_1ac83d1dd2d3d5f48c4c2e9e1e2f4d69a4"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1af4b6b107c6f4ff2ea9e3f2c084e8e72a)`(FString & OutValue) const` <a id="structFRHAPI__Item_1af4b6b107c6f4ff2ea9e3f2c084e8e72a"></a>

Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1a51a6dff502fb6049b4da1d5503621184)`()` <a id="structFRHAPI__Item_1a51a6dff502fb6049b4da1d5503621184"></a>

Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1aa1ce2c494619d89b26673412bd3ffe72)`() const` <a id="structFRHAPI__Item_1aa1ce2c494619d89b26673412bd3ffe72"></a>

Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a73b40b8ae9c42addec4d0ced6b3db8ef)`(const FString & NewValue)` <a id="structFRHAPI__Item_1a73b40b8ae9c42addec4d0ced6b3db8ef"></a>

Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true.

#### `public inline void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a765a19c21abc7b6f2510220b303759c6)`(FString && NewValue)` <a id="structFRHAPI__Item_1a765a19c21abc7b6f2510220b303759c6"></a>

Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0)`()` <a id="structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0"></a>

Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false.

#### `public inline bool `[`IsInventoryBucketUseRuleSetIdSet`](#structFRHAPI__Item_1a3bc734432134f82dd3c3222f4c783a4b)`() const` <a id="structFRHAPI__Item_1a3bc734432134f82dd3c3222f4c783a4b"></a>

Checks whether InventoryBucketUseRuleSetId_Optional has been set.

#### `public inline TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a7adb63a40f2f2b7f6541d5b55d2807bd)`()` <a id="structFRHAPI__Item_1a7adb63a40f2f2b7f6541d5b55d2807bd"></a>

Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1ab877e45b8915a49289b107e6f02f3361)`() const` <a id="structFRHAPI__Item_1ab877e45b8915a49289b107e6f02f3361"></a>

Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1afaf36c430134ec34d4715b67603ed34d)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__Item_1afaf36c430134ec34d4715b67603ed34d"></a>

Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a647967de5190c2eae1cc4cc305545a50)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__Item_1a647967de5190c2eae1cc4cc305545a50"></a>

Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1af66046a0af411934999cb28bda91e77f)`()` <a id="structFRHAPI__Item_1af66046a0af411934999cb28bda91e77f"></a>

Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1abe675a41f0f1ef5f7f9bdaf3e833c400)`() const` <a id="structFRHAPI__Item_1abe675a41f0f1ef5f7f9bdaf3e833c400"></a>

Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1a4f8a6c38ddf7a95c6c3ca4039c85b52d)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__Item_1a4f8a6c38ddf7a95c6c3ca4039c85b52d"></a>

Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true.

#### `public inline void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1a5788557190d4cb6a98368c9b5cd26d2d)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__Item_1a5788557190d4cb6a98368c9b5cd26d2d"></a>

Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountLoot`](#structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b)`()` <a id="structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b"></a>

Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false.

#### `public inline bool `[`IsCouponDiscountLootSet`](#structFRHAPI__Item_1aaa9e6982882230ed1f423e33f3e03484)`() const` <a id="structFRHAPI__Item_1aaa9e6982882230ed1f423e33f3e03484"></a>

Checks whether CouponDiscountLoot_Optional has been set.

#### `public inline TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a9cbc4101f64eba5adc892009c71dbba9)`()` <a id="structFRHAPI__Item_1a9cbc4101f64eba5adc892009c71dbba9"></a>

Gets the value of CouponDiscountLootUuid_Optional, regardless of it having been set.

#### `public inline const TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1aaeb2012cfcaecbb49ba1c2e7e8543e86)`() const` <a id="structFRHAPI__Item_1aaeb2012cfcaecbb49ba1c2e7e8543e86"></a>

Gets the value of CouponDiscountLootUuid_Optional, regardless of it having been set.

#### `public inline const TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a08d86b869d38f052071e38c62109294c)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__Item_1a08d86b869d38f052071e38c62109294c"></a>

Gets the value of CouponDiscountLootUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a9e14a7d704d977345988ba528d5479d5)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__Item_1a9e14a7d704d977345988ba528d5479d5"></a>

Fills OutValue with the value of CouponDiscountLootUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FGuid > * `[`GetCouponDiscountLootUuidOrNull`](#structFRHAPI__Item_1a103cf706fc2dee4a4fab64a98c428e33)`()` <a id="structFRHAPI__Item_1a103cf706fc2dee4a4fab64a98c428e33"></a>

Returns a pointer to CouponDiscountLootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FGuid > * `[`GetCouponDiscountLootUuidOrNull`](#structFRHAPI__Item_1a89259931823fb9faf6aaccf171db1d59)`() const` <a id="structFRHAPI__Item_1a89259931823fb9faf6aaccf171db1d59"></a>

Returns a pointer to CouponDiscountLootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCouponDiscountLootUuid`](#structFRHAPI__Item_1a7d39c17dfb06a2e8bdfa38861d72b4d9)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__Item_1a7d39c17dfb06a2e8bdfa38861d72b4d9"></a>

Sets the value of CouponDiscountLootUuid_Optional and also sets CouponDiscountLootUuid_IsSet to true.

#### `public inline void `[`SetCouponDiscountLootUuid`](#structFRHAPI__Item_1a859cda7ddeb427e90852e98f31742872)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__Item_1a859cda7ddeb427e90852e98f31742872"></a>

Sets the value of CouponDiscountLootUuid_Optional and also sets CouponDiscountLootUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountLootUuid`](#structFRHAPI__Item_1ae15a27df3513971d3a1a02ba5107b357)`()` <a id="structFRHAPI__Item_1ae15a27df3513971d3a1a02ba5107b357"></a>

Clears the value of CouponDiscountLootUuid_Optional and sets CouponDiscountLootUuid_IsSet to false.

#### `public inline bool `[`IsCouponDiscountLootUuidSet`](#structFRHAPI__Item_1ad28fdd2b1a0a63810eced58bea9bd96c)`() const` <a id="structFRHAPI__Item_1ad28fdd2b1a0a63810eced58bea9bd96c"></a>

Checks whether CouponDiscountLootUuid_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1a8f388d37b6e6b80682ae5ee8b0c5ed02)`()` <a id="structFRHAPI__Item_1a8f388d37b6e6b80682ae5ee8b0c5ed02"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1aa17b33e1a9258a96ba0d54c2177ea1fe)`() const` <a id="structFRHAPI__Item_1aa17b33e1a9258a96ba0d54c2177ea1fe"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1aadd57ea24afcf3893b31c9c1dae78f28)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Item_1aadd57ea24afcf3893b31c9c1dae78f28"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Item_1a74a10cf52863208f9cfb9e26484a1b6f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Item_1a74a10cf52863208f9cfb9e26484a1b6f"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1ac97664c780c86ddd5ca17ba51a821bab)`()` <a id="structFRHAPI__Item_1ac97664c780c86ddd5ca17ba51a821bab"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1a55b6dfdc9bce487875a616eb1dd5dd38)`() const` <a id="structFRHAPI__Item_1a55b6dfdc9bce487875a616eb1dd5dd38"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Item_1a2af066addfb875c3a081297e00626263)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Item_1a2af066addfb875c3a081297e00626263"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Item_1a4deaa7b49f5c2a74e6c9623265a07d66)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Item_1a4deaa7b49f5c2a74e6c9623265a07d66"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0)`()` <a id="structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Item_1a9e9f1fe041fe7d0913950d86191a00b8)`() const` <a id="structFRHAPI__Item_1a9e9f1fe041fe7d0913950d86191a00b8"></a>

Checks whether CacheInfo_Optional has been set.

