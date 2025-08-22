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
`public FGuid `[`ItemUuid_Optional`](#structFRHAPI__Item_1a80b591249bcf6a162cea03625859730b) | 
`public bool `[`ItemUuid_IsSet`](#structFRHAPI__Item_1ac78db9c246fdea6afcec61519e3bae79) | true if ItemUuid_Optional has been set to a value
`public bool `[`ItemUuid_IsNull`](#structFRHAPI__Item_1a41a57f8ca3f0575ed2909f80b779a10a) | true if ItemUuid_Optional has been explicitly set to null
`public ERHAPI_ItemType `[`Type_Optional`](#structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe) | 
`public bool `[`Type_IsSet`](#structFRHAPI__Item_1a0cc1c2c5e9833d046535ee67c6044d5b) | true if Type_Optional has been set to a value
`public int32 `[`LegacyType_Optional`](#structFRHAPI__Item_1a9105c322f788b420009e19957dc9ef3f) | 
`public bool `[`LegacyType_IsSet`](#structFRHAPI__Item_1a351cad97d7e9511c49556f52d97779a5) | true if LegacyType_Optional has been set to a value
`public int32 `[`LegacySubtype_Optional`](#structFRHAPI__Item_1ab36aeeabb1bfc49aef612af5412ba4dc) | 
`public bool `[`LegacySubtype_IsSet`](#structFRHAPI__Item_1a44394066ad672903ea7f73102064936f) | true if LegacySubtype_Optional has been set to a value
`public int32 `[`RefItemId_Optional`](#structFRHAPI__Item_1a1fbf7b95a5761100f9ce8c2ce59afcd0) | 
`public bool `[`RefItemId_IsSet`](#structFRHAPI__Item_1aaeecdeed1bedbf5b25576e28ccd2c2b1) | true if RefItemId_Optional has been set to a value
`public int32 `[`AvailabilityFlags_Optional`](#structFRHAPI__Item_1ac0bdf0c75ad5b86f6032270151f4ad0e) | 
`public bool `[`AvailabilityFlags_IsSet`](#structFRHAPI__Item_1a67bf7d179a5204d5ca2386582f437248) | true if AvailabilityFlags_Optional has been set to a value
`public FGuid `[`EntitledLootUuid_Optional`](#structFRHAPI__Item_1a55a6d7ad83368dc6d41cb20842ca11c3) | 
`public bool `[`EntitledLootUuid_IsSet`](#structFRHAPI__Item_1a7b278bd51c30e2aa654e801bf8b778bd) | true if EntitledLootUuid_Optional has been set to a value
`public bool `[`EntitledLootUuid_IsNull`](#structFRHAPI__Item_1a61e93b42ac1107188bc9234168667f12) | true if EntitledLootUuid_Optional has been explicitly set to null
`public int32 `[`EntitledLootId_Optional`](#structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf) | This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled.
`public bool `[`EntitledLootId_IsSet`](#structFRHAPI__Item_1af42c3dae98945b853dd863c498951980) | true if EntitledLootId_Optional has been set to a value
`public FGuid `[`LevelXpTableUuid_Optional`](#structFRHAPI__Item_1a797b9427d09a024a7e262926ea9c5f18) | 
`public bool `[`LevelXpTableUuid_IsSet`](#structFRHAPI__Item_1ad36b1735e32314959dbc6e6a44957833) | true if LevelXpTableUuid_Optional has been set to a value
`public bool `[`LevelXpTableUuid_IsNull`](#structFRHAPI__Item_1a7a2a2c9d8bd0d598dc5c746bbb272a32) | true if LevelXpTableUuid_Optional has been explicitly set to null
`public int32 `[`LevelXpTableId_Optional`](#structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471) | The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.
`public bool `[`LevelXpTableId_IsSet`](#structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544) | true if LevelXpTableId_Optional has been set to a value
`public FGuid `[`LevelVendorUuid_Optional`](#structFRHAPI__Item_1a54af64f2166321a3d54bfd49eb33d126) | 
`public bool `[`LevelVendorUuid_IsSet`](#structFRHAPI__Item_1a2b83904f2221e90ebc9d8da3c9020ba2) | true if LevelVendorUuid_Optional has been set to a value
`public bool `[`LevelVendorUuid_IsNull`](#structFRHAPI__Item_1ac8411fd42c89fb739a4227815afa0ae3) | true if LevelVendorUuid_Optional has been explicitly set to null
`public int32 `[`LevelVendorId_Optional`](#structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e) | The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.
`public bool `[`LevelVendorId_IsSet`](#structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387) | true if LevelVendorId_Optional has been set to a value
`public FGuid `[`CouponDiscountCurrencyItemUuid_Optional`](#structFRHAPI__Item_1aeff374c8804054ba04ab0eba08ea990b) | 
`public bool `[`CouponDiscountCurrencyItemUuid_IsSet`](#structFRHAPI__Item_1a1e52daf9baa1a3f8e08e674d61d057f2) | true if CouponDiscountCurrencyItemUuid_Optional has been set to a value
`public bool `[`CouponDiscountCurrencyItemUuid_IsNull`](#structFRHAPI__Item_1a6e30b9c5762a9f58a1b9c87326349726) | true if CouponDiscountCurrencyItemUuid_Optional has been explicitly set to null
`public int32 `[`CouponDiscountCurrencyItemId_Optional`](#structFRHAPI__Item_1aac9de3a09ab34aa9feabf22202daae80) | The item of the currency used by this coupon. This is only valid for an unit Item.
`public bool `[`CouponDiscountCurrencyItemId_IsSet`](#structFRHAPI__Item_1a0809de18d707f4af24019793672bbd25) | true if CouponDiscountCurrencyItemId_Optional has been set to a value
`public float `[`CouponDiscountPercentage_Optional`](#structFRHAPI__Item_1a809a2484d750588a4c62337e2b47ead5) | The percentage of the discount. This is only valid for an unit Item.
`public bool `[`CouponDiscountPercentage_IsSet`](#structFRHAPI__Item_1a4ebe06f6d6bc6a533dfdcecc4808ca13) | true if CouponDiscountPercentage_Optional has been set to a value
`public bool `[`CouponConsumeOnUse_Optional`](#structFRHAPI__Item_1ab8a0663be30e0c950774761d1ce2d296) | If true, the coupon will be consumed when used; reducing the Player's Inventory quantity by 1. This is only valid for an unit Item.
`public bool `[`CouponConsumeOnUse_IsSet`](#structFRHAPI__Item_1a6901af6f3e9c28935f44f0a479391d27) | true if CouponConsumeOnUse_Optional has been set to a value
`public int32 `[`ItemPortalUseRulesetId_Optional`](#structFRHAPI__Item_1ae1b19e8759742961745126c8858ce167) | 
`public bool `[`ItemPortalUseRulesetId_IsSet`](#structFRHAPI__Item_1ad179470bc0eac912b9de30cec699f45d) | true if ItemPortalUseRulesetId_Optional has been set to a value
`public FString `[`InventoryBucketUseRuleSetId_Optional`](#structFRHAPI__Item_1a0e0d5505b14a2ac60dbadfd639eda910) | 
`public bool `[`InventoryBucketUseRuleSetId_IsSet`](#structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a) | true if InventoryBucketUseRuleSetId_Optional has been set to a value
`public bool `[`InventoryBucketUseRuleSetId_IsNull`](#structFRHAPI__Item_1a8f466f9549bf32101e624dfb63b1f4b1) | true if InventoryBucketUseRuleSetId_Optional has been explicitly set to null
`public int32 `[`TotalOwnershipMax_Optional`](#structFRHAPI__Item_1af4fb8962295c375ba8fbc31b8df5689b) | Maximum ownership (permanent+rental) allowed for this item. 0 means no limit.
`public bool `[`TotalOwnershipMax_IsSet`](#structFRHAPI__Item_1adc6d1409971af43a666c5bb3cfab4970) | true if TotalOwnershipMax_Optional has been set to a value
`public TArray< int32 > `[`CouponDiscountLoot_Optional`](#structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd) | List of Loot IDs this item can discount.
`public bool `[`CouponDiscountLoot_IsSet`](#structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09) | true if CouponDiscountLoot_Optional has been set to a value
`public TArray< FGuid > `[`CouponDiscountLootUuid_Optional`](#structFRHAPI__Item_1a5784ccafb6f7909f659810f797202a84) | List of Loot this item can discount.
`public bool `[`CouponDiscountLootUuid_IsSet`](#structFRHAPI__Item_1aa70b15d223288176fcaced0e7622087e) | true if CouponDiscountLootUuid_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__Item_1aba48c9d3eb60b570bba2b1855f67f3bb) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__Item_1a5e75ef0aa4b1af5286da65c549597c73)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Item_1af420192ca00e833b25ecebe48ea0408a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5f81adc39246382df4426eced37f7d93)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5c7bc29c43dbc4194b31ca57f09a9a7b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a128038db69fe7c8fefdded404e0edeaa)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Item_1acd380f8408d198f428d4ba8931fc66c7)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a46fe1df6b27c75b7bb078551a0f23256)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a9f28123635b4cd90b15cc6cc68a1f286)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Item_1a483cb295493465dac095708f2a6ff082)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Item_1a30848c8c3ab243691f1d8cb84b430d05)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1a0fb5b72e741b7c1560849a2c6363ca11)`()` | Gets the value of ItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1a4d17fe7c641a56fea21259a54088af40)`() const` | Gets the value of ItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1aecc008206ece12ee05fc0e871dcb6f82)`(const FGuid & DefaultValue) const` | Gets the value of ItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemUuid`](#structFRHAPI__Item_1aee511d356985aed25628243d9a0295b4)`(FGuid & OutValue) const` | Fills OutValue with the value of ItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Item_1a94adce19bc3b9683ba79c38885eadf22)`()` | Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Item_1a9c8a2a0c28cd4e2abe867b8e33a4f5e5)`() const` | Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__Item_1acc7f50c978acd208ed768c00e5fd2afd)`(const FGuid & NewValue)` | Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__Item_1af839987b42d507ad278984f7ad9f81f0)`(FGuid && NewValue)` | Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearItemUuid`](#structFRHAPI__Item_1ae117f4643d50d55557c3472cbf5839c1)`()` | Clears the value of ItemUuid_Optional and sets ItemUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetItemUuidToNull`](#structFRHAPI__Item_1aea4ae0b5a39524fbf791260a2d7bf9fd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemUuidNull`](#structFRHAPI__Item_1a2111616c6579678df57b3d5837bc4e4f)`() const` | Checks whether ItemUuid_Optional is set to null.
`public inline FORCEINLINE ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a6bfa555cd908fff45f1cf7ab7132aeef)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a2b7774a95ad1d47f4010cee23e5877d9)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a4e734b80cb38baa3b12bc9496cce148f)`(const ERHAPI_ItemType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__Item_1abf621b0829dc4d1a4bc4f2d78effcdd1)`(ERHAPI_ItemType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a233957110f50a1cb7f2493186fa36e59)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1ada1f3058199e60c8094eec69f06e2424)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Item_1a0220dfbfcc1a3a51dce5f830322b023e)`(const ERHAPI_ItemType & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Item_1a64b4993ef8fb037b47c379ecc1c37229)`(ERHAPI_ItemType && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a1b52532e4365d1fe545047b8943eaed2)`()` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1ae0ca211dc950fec54b14606aad32979c)`() const` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a13d789f67c72529575af61df15c45834)`(const int32 & DefaultValue) const` | Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyType`](#structFRHAPI__Item_1ab42affb06769605967573bbd40617cdb)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a8f5b0ddc58e47e8ac97ead0051b43577)`()` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a29e5b31539214f4b9332aeb91ce89699)`() const` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyType`](#structFRHAPI__Item_1a8f6631b845a8af254d6a4e45ad9a3fef)`(const int32 & NewValue)` | Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyType`](#structFRHAPI__Item_1aa4d07d6f78a9ef74914ac73357f2d057)`(int32 && NewValue)` | Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true using move semantics.
`public inline void `[`ClearLegacyType`](#structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef)`()` | Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyType`](#structFRHAPI__Item_1a6680fb545cb03d89e91c37d8b65c5fca)`()` | Returns the default value of LegacyType.
`public inline FORCEINLINE int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1af2d9b3f5c879e4bbd8a9eb1df9ba493f)`()` | Gets the value of LegacySubtype_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1a6a65a583fb014d311e0aac973dae0d75)`() const` | Gets the value of LegacySubtype_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1acaeba8ebc22c914b82237625462808f3)`(const int32 & DefaultValue) const` | Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacySubtype`](#structFRHAPI__Item_1a8294dfd16e62919ab966f5311786093e)`(int32 & OutValue) const` | Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a2c52ae6223f386a463907772b9beb817)`()` | Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1af52e9aba74872b97dab9ed92c16b62a9)`() const` | Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacySubtype`](#structFRHAPI__Item_1a0f572aa059be5226180bb9042f530c51)`(const int32 & NewValue)` | Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacySubtype`](#structFRHAPI__Item_1a01dbee6e2b76d1952216afaf35b58deb)`(int32 && NewValue)` | Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true using move semantics.
`public inline void `[`ClearLegacySubtype`](#structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976)`()` | Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacySubtype`](#structFRHAPI__Item_1ac486576891119cea067ecc5f3a3e18df)`()` | Returns the default value of LegacySubtype.
`public inline FORCEINLINE int32 & `[`GetRefItemId`](#structFRHAPI__Item_1aba88404d8cfee9d8de83e8ce69121c4d)`()` | Gets the value of RefItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1a3f54e8a298988e1b9b67e1479af801cc)`() const` | Gets the value of RefItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1a0b0b19210c5c6099992ac8fbfc6c6c06)`(const int32 & DefaultValue) const` | Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRefItemId`](#structFRHAPI__Item_1aa527838da2082714a6c748c67b4bc601)`(int32 & OutValue) const` | Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a8f2d754ea2258470b3b946a37277a80e)`()` | Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a9066075ae9c2d29a5d5a6f542fd0d506)`() const` | Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRefItemId`](#structFRHAPI__Item_1a6059eeb5f94e20a1b28d1691abf5cb84)`(const int32 & NewValue)` | Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetRefItemId`](#structFRHAPI__Item_1adf96b77975c85c15f4e65556bf9173ff)`(int32 && NewValue)` | Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true using move semantics.
`public inline void `[`ClearRefItemId`](#structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754)`()` | Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RefItemId`](#structFRHAPI__Item_1affea15654e8c1a556bbeda5686e702b8)`()` | Returns the default value of RefItemId.
`public inline FORCEINLINE int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1a7a91a6cab74be4fa9d3b95f470a10e95)`()` | Gets the value of AvailabilityFlags_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1af75829e52e457a8c28b36e003593c4f6)`() const` | Gets the value of AvailabilityFlags_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1a9913d0a620e7d1dc968cf71a0178618a)`(const int32 & DefaultValue) const` | Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAvailabilityFlags`](#structFRHAPI__Item_1aa29da69b84779d99a1dd207f909a77c7)`(int32 & OutValue) const` | Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1aac344fb365ab5ffd805a2260b25c3d83)`()` | Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1a2260cbfd0870810116e49f3ade2950e5)`() const` | Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1a10086a737765226e6c07ba5814520e0b)`(const int32 & NewValue)` | Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true.
`public inline FORCEINLINE void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1a13b9a7a868d7aef7b6f9b1d7f14ac8d7)`(int32 && NewValue)` | Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true using move semantics.
`public inline void `[`ClearAvailabilityFlags`](#structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8)`()` | Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_AvailabilityFlags`](#structFRHAPI__Item_1ae1b1dcf6443d294a648ed376f5d392db)`()` | Returns the default value of AvailabilityFlags.
`public inline FORCEINLINE FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a986213b1ee62f9ff7d03e2a00116c942)`()` | Gets the value of EntitledLootUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a2eb3ad536b0a704f6933cdd08f283123)`() const` | Gets the value of EntitledLootUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1ae6c92ac45b7e1b366969a0af226cba32)`(const FGuid & DefaultValue) const` | Gets the value of EntitledLootUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a7a053f56309e67328a23ac50d3c2df94)`(FGuid & OutValue) const` | Fills OutValue with the value of EntitledLootUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetEntitledLootUuidOrNull`](#structFRHAPI__Item_1aae4e85d26d964a7e9d6b1996f8d9522f)`()` | Returns a pointer to EntitledLootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetEntitledLootUuidOrNull`](#structFRHAPI__Item_1ae828ed1cb95c8b6116efebfb2173c932)`() const` | Returns a pointer to EntitledLootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntitledLootUuid`](#structFRHAPI__Item_1aeffec62c21560367413471f376353537)`(const FGuid & NewValue)` | Sets the value of EntitledLootUuid_Optional and also sets EntitledLootUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetEntitledLootUuid`](#structFRHAPI__Item_1ab83d07cbb9ece3ee488db9cb151d6228)`(FGuid && NewValue)` | Sets the value of EntitledLootUuid_Optional and also sets EntitledLootUuid_IsSet to true using move semantics.
`public inline void `[`ClearEntitledLootUuid`](#structFRHAPI__Item_1a80b307d98d2d4dfd01c5f180d8afb707)`()` | Clears the value of EntitledLootUuid_Optional and sets EntitledLootUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetEntitledLootUuidToNull`](#structFRHAPI__Item_1ad29ac8d21f2949ef9d0c97eb7cd1cdb9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEntitledLootUuidNull`](#structFRHAPI__Item_1a5e203f61fa1ee53bad382e2514022e97)`() const` | Checks whether EntitledLootUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1a742791c4e607afc5506dfc193a2e891d)`()` | Gets the value of EntitledLootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1a67c6de375a0a9ce983e96e7d663f7f12)`() const` | Gets the value of EntitledLootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1ab2d09fc85c7c5dd3310d01a2f14c94cb)`(const int32 & DefaultValue) const` | Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntitledLootId`](#structFRHAPI__Item_1abcd4333a337a6201fd159b3fd80c097d)`(int32 & OutValue) const` | Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1a775fc0fa15734b0cd283746a8d6879ab)`()` | Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1abce12ab27fe0ffecf58ede4ea1858075)`() const` | Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntitledLootId`](#structFRHAPI__Item_1ab66036ee605b51fb3aca34f0a167c8de)`(const int32 & NewValue)` | Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true.
`public inline FORCEINLINE void `[`SetEntitledLootId`](#structFRHAPI__Item_1a2abd341f69aceaad0e7a7109401d9742)`(int32 && NewValue)` | Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true using move semantics.
`public inline void `[`ClearEntitledLootId`](#structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda)`()` | Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_EntitledLootId`](#structFRHAPI__Item_1ae3d1e1efae68b016f65a2b38007b2f77)`()` | Returns the default value of EntitledLootId.
`public inline FORCEINLINE FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a2c71defaace2733281736977b4e76a48)`()` | Gets the value of LevelXpTableUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a53c8c9956709b6f70772e209813f33bc)`() const` | Gets the value of LevelXpTableUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1aada4400ca3d7464c83b0b048d70277c6)`(const FGuid & DefaultValue) const` | Gets the value of LevelXpTableUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a4620d615af2e120a893c998f6f11198b)`(FGuid & OutValue) const` | Fills OutValue with the value of LevelXpTableUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetLevelXpTableUuidOrNull`](#structFRHAPI__Item_1a1e1a3223165a5132e85766abfab055f4)`()` | Returns a pointer to LevelXpTableUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetLevelXpTableUuidOrNull`](#structFRHAPI__Item_1a69512c781cf1511eb5f54d7108afb268)`() const` | Returns a pointer to LevelXpTableUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLevelXpTableUuid`](#structFRHAPI__Item_1adfa59e40e28828ff6fc8a616c71955c2)`(const FGuid & NewValue)` | Sets the value of LevelXpTableUuid_Optional and also sets LevelXpTableUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetLevelXpTableUuid`](#structFRHAPI__Item_1a47ab7b33f58b6c2f6af36a524d9f3cde)`(FGuid && NewValue)` | Sets the value of LevelXpTableUuid_Optional and also sets LevelXpTableUuid_IsSet to true using move semantics.
`public inline void `[`ClearLevelXpTableUuid`](#structFRHAPI__Item_1aa045a9bebae787bfd2ca849c041b3a4f)`()` | Clears the value of LevelXpTableUuid_Optional and sets LevelXpTableUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetLevelXpTableUuidToNull`](#structFRHAPI__Item_1ae4e735f0d1561b627424cea781e0dd04)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLevelXpTableUuidNull`](#structFRHAPI__Item_1a67569818c40f09221afabd1433a9e26f)`() const` | Checks whether LevelXpTableUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1aebab51c0784e638eed2a325cc414c531)`()` | Gets the value of LevelXpTableId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a07bae5eff7bb612bfc246925a0d70bbb)`() const` | Gets the value of LevelXpTableId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a4dd2efcac5235f13473dd53cf92e6de5)`(const int32 & DefaultValue) const` | Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLevelXpTableId`](#structFRHAPI__Item_1a8733dc10396cd5cc4c12df526b4f68e5)`(int32 & OutValue) const` | Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1af087625a77abd472b7df6d213c24b0e7)`()` | Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1a17a0cee3ab4b997edfd69d4792043845)`() const` | Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLevelXpTableId`](#structFRHAPI__Item_1ab4f91ab7677f2a2f14dc6d414c69e6ce)`(const int32 & NewValue)` | Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true.
`public inline FORCEINLINE void `[`SetLevelXpTableId`](#structFRHAPI__Item_1ae0e0a0eb8f5c67f058330836e481e040)`(int32 && NewValue)` | Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true using move semantics.
`public inline void `[`ClearLevelXpTableId`](#structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463)`()` | Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LevelXpTableId`](#structFRHAPI__Item_1a94841fd6fb1d5ac326b125a4d765ca0c)`()` | Returns the default value of LevelXpTableId.
`public inline FORCEINLINE FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a099a8f3bbad98e0ebd52a930c1297738)`()` | Gets the value of LevelVendorUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a5a3337e58cb58a2e460d56f45e77999e)`() const` | Gets the value of LevelVendorUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1afccc923c2c628e0bdda2a7521bc39c0a)`(const FGuid & DefaultValue) const` | Gets the value of LevelVendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLevelVendorUuid`](#structFRHAPI__Item_1aa086413b36057b7bf5d0e25a1620f16d)`(FGuid & OutValue) const` | Fills OutValue with the value of LevelVendorUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetLevelVendorUuidOrNull`](#structFRHAPI__Item_1a5edba27e9b89c8672daa91b6a57f68f5)`()` | Returns a pointer to LevelVendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetLevelVendorUuidOrNull`](#structFRHAPI__Item_1a5b357658ce1b3f89a07f06e203ca6a68)`() const` | Returns a pointer to LevelVendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLevelVendorUuid`](#structFRHAPI__Item_1af42605c5d9ee7d49f048f081b74ed0b8)`(const FGuid & NewValue)` | Sets the value of LevelVendorUuid_Optional and also sets LevelVendorUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetLevelVendorUuid`](#structFRHAPI__Item_1a357d22757a02200e53f3bf4c68f759cd)`(FGuid && NewValue)` | Sets the value of LevelVendorUuid_Optional and also sets LevelVendorUuid_IsSet to true using move semantics.
`public inline void `[`ClearLevelVendorUuid`](#structFRHAPI__Item_1a5e63c9d337ee6543483319fa12b01c6d)`()` | Clears the value of LevelVendorUuid_Optional and sets LevelVendorUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetLevelVendorUuidToNull`](#structFRHAPI__Item_1ad45ff1ce5e42675f8963da7d38268c57)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLevelVendorUuidNull`](#structFRHAPI__Item_1a8eed1a4813aba930caaefc00dd4b7766)`() const` | Checks whether LevelVendorUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1af2ae153e9f018fc153cd491cfd787bf5)`()` | Gets the value of LevelVendorId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1afd5fe90f67bee175ae670398be670dff)`() const` | Gets the value of LevelVendorId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a6acd2159fe1decb904d9e9d509d06630)`(const int32 & DefaultValue) const` | Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLevelVendorId`](#structFRHAPI__Item_1a9607965c31c727ebc884ff4cb4871533)`(int32 & OutValue) const` | Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1a6e54deee3996741acf0aa30df7ae9683)`()` | Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1aac3a14877bdd7f23a1b7fd4a643f6b32)`() const` | Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLevelVendorId`](#structFRHAPI__Item_1af458fdbee236e66c400cc145db4fe6dd)`(const int32 & NewValue)` | Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true.
`public inline FORCEINLINE void `[`SetLevelVendorId`](#structFRHAPI__Item_1ac0686303a50ca9660a3b4f00f6740df3)`(int32 && NewValue)` | Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true using move semantics.
`public inline void `[`ClearLevelVendorId`](#structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2)`()` | Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LevelVendorId`](#structFRHAPI__Item_1af4372196edaacf0962d5416ee5d00562)`()` | Returns the default value of LevelVendorId.
`public inline FORCEINLINE FGuid & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a3716f22c577baadf52b0d34dfa908be7)`()` | Gets the value of CouponDiscountCurrencyItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a373d318a2005c62dbdda06bb0248efc5)`() const` | Gets the value of CouponDiscountCurrencyItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a800ca266534e9d06f62f846615e5d79b)`(const FGuid & DefaultValue) const` | Gets the value of CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1afd6e094a7f6bf76c18a11bdd29bd35d3)`(FGuid & OutValue) const` | Fills OutValue with the value of CouponDiscountCurrencyItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetCouponDiscountCurrencyItemUuidOrNull`](#structFRHAPI__Item_1ab932c279269e8495582694d5def9722c)`()` | Returns a pointer to CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetCouponDiscountCurrencyItemUuidOrNull`](#structFRHAPI__Item_1a8e794a1b7de926e5d27a5f0ad8c41c73)`() const` | Returns a pointer to CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a0f40592b16ad57f3cb9cc2803421081b)`(const FGuid & NewValue)` | Sets the value of CouponDiscountCurrencyItemUuid_Optional and also sets CouponDiscountCurrencyItemUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a58221a61a7e3cde026d333474dfb9ab1)`(FGuid && NewValue)` | Sets the value of CouponDiscountCurrencyItemUuid_Optional and also sets CouponDiscountCurrencyItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1aad2f0040ddc2e9e4f217aed5358cd17b)`()` | Clears the value of CouponDiscountCurrencyItemUuid_Optional and sets CouponDiscountCurrencyItemUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemUuidToNull`](#structFRHAPI__Item_1a260f2e500de65ee8a7b48061565a311b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCouponDiscountCurrencyItemUuidNull`](#structFRHAPI__Item_1a5c89c31952d0533365592e3a56aae5ea)`() const` | Checks whether CouponDiscountCurrencyItemUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a9abf1d20914df7a91dd0fdec23bc0564)`()` | Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a3016e1b5f3bf9c2380eb2b92fc120ff5)`() const` | Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1aaa4028e3e2414db8d093fb663a444798)`(const int32 & DefaultValue) const` | Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ac44816706a2b9d8f8ce4053321228d92)`(int32 & OutValue) const` | Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1af1d1385cef5b0751b0c8984d2b8d8790)`()` | Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a87066315249830cb860b8847260406a6)`() const` | Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a3b542e30989c273b1ef080199931df75)`(const int32 & NewValue)` | Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a09a8e70ae612412c478032780354c640)`(int32 && NewValue)` | Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675)`()` | Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_CouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a5dcf71d904c0f52aac799101a4809a3b)`()` | Returns the default value of CouponDiscountCurrencyItemId.
`public inline FORCEINLINE float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1aeb8735b18eb4de95a071abaa6a5910fe)`()` | Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1af394a19187a0334ba83c3787f934ebdc)`() const` | Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a8b59c229baf1eda357063ec8e3aaf4ce)`(const float & DefaultValue) const` | Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a5e874ba3ad14cdd022aa81ab0f4761bb)`(float & OutValue) const` | Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1adc211520929d90d02dc627883e6ad88c)`()` | Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1ac07586560421a076aceca5718d635359)`() const` | Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1abc8841f1426c6bddb5fef1cf1b4d2a25)`(const float & NewValue)` | Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true.
`public inline FORCEINLINE void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1a9c1d4c98e73820c4415405f79fe0a0e0)`(float && NewValue)` | Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountPercentage`](#structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b)`()` | Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false.
`public inline FORCEINLINE bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a330bbf4dca354a2572b61c99e39a7288)`()` | Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a2c831f066933238b87448d3983d2f63c)`() const` | Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a6f8e7fc51e0b01f104cbd92a0695c782)`(const bool & DefaultValue) const` | Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a731fc4b2db28ab414a3139df26fc57ef)`(bool & OutValue) const` | Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1a153c588a3c174c9da88bae5cd03d82e2)`()` | Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1a9064bcb41e18d8761e5d09b5c1dcb8af)`() const` | Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1a387b70fa9e430c652e731e28042cfc65)`(const bool & NewValue)` | Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true.
`public inline FORCEINLINE void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1a3a0d7970012296d77f1820614ebf2f5c)`(bool && NewValue)` | Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true using move semantics.
`public inline void `[`ClearCouponConsumeOnUse`](#structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480)`()` | Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CouponConsumeOnUse`](#structFRHAPI__Item_1aa4cdcabc346c53a248129ae82961cd23)`()` | Returns the default value of CouponConsumeOnUse.
`public inline FORCEINLINE int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1ae5c22bea2c8e87cfc1b0f6b334fc3690)`()` | Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1ad8bdc7e273b9f9bccaabc28d45b217f7)`() const` | Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1ac00c0faadf7b824d5910ccb91447cd3f)`(const int32 & DefaultValue) const` | Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a9de4f7030fd2557d398c6488f2f3776f)`(int32 & OutValue) const` | Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1a1f6e047f3633d94ae3de16014bfe9e77)`()` | Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1aad99f8b63572f2ef6901b53835976b10)`() const` | Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1a89c17f395ca211674c690c3efe69423e)`(const int32 & NewValue)` | Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1a19fa060b4ee85edb16d84264569c0818)`(int32 && NewValue)` | Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true using move semantics.
`public inline void `[`ClearItemPortalUseRulesetId`](#structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5)`()` | Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemPortalUseRulesetId`](#structFRHAPI__Item_1aa774f1cb6fb2fb7c9011707221c1b44b)`()` | Returns the default value of ItemPortalUseRulesetId.
`public inline FORCEINLINE FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1aa1a3f5703deac3a54ae96aa6ffe4c541)`()` | Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a4393a9a743d17483e25a7b256ca52394)`() const` | Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a2bd07c7f8e3c4a4b71434ddc2b39ac1d)`(const FString & DefaultValue) const` | Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1ac6b5880cbc772d300efb9cd9bf0116d1)`(FString & OutValue) const` | Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1adac33f116a1659b5c040b9b4da42665e)`()` | Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1a19d2a733b65a7fe5ed6f1f4f40b17ef3)`() const` | Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a509b1f8e1ad890f8ce7ca6971123bfaf)`(const FString & NewValue)` | Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true.
`public inline FORCEINLINE void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a98287ef0633f2b1e49c31aae5715fbbb)`(FString && NewValue)` | Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0)`()` | Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false.
`public inline FORCEINLINE void `[`SetInventoryBucketUseRuleSetIdToNull`](#structFRHAPI__Item_1adfdab6b89c52388f80120953a249936a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInventoryBucketUseRuleSetIdNull`](#structFRHAPI__Item_1a2bcc8d877639562320cfea7d4c33289f)`() const` | Checks whether InventoryBucketUseRuleSetId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetTotalOwnershipMax`](#structFRHAPI__Item_1a04556bc289f3f1df85f40fc669f3f64e)`()` | Gets the value of TotalOwnershipMax_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalOwnershipMax`](#structFRHAPI__Item_1aa0a6a5c02ffc3ad600f74b05611e248c)`() const` | Gets the value of TotalOwnershipMax_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTotalOwnershipMax`](#structFRHAPI__Item_1a1b61f750fcca67d84ab1e9a69110d7b6)`(const int32 & DefaultValue) const` | Gets the value of TotalOwnershipMax_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTotalOwnershipMax`](#structFRHAPI__Item_1a6ce34a9e76f14eaf7eab08a43b425798)`(int32 & OutValue) const` | Fills OutValue with the value of TotalOwnershipMax_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTotalOwnershipMaxOrNull`](#structFRHAPI__Item_1a16c4d23b922ad48f88c7426d6520c920)`()` | Returns a pointer to TotalOwnershipMax_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTotalOwnershipMaxOrNull`](#structFRHAPI__Item_1ae87ed48e3f1c7787ec378b848247664a)`() const` | Returns a pointer to TotalOwnershipMax_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTotalOwnershipMax`](#structFRHAPI__Item_1aa4314d97fbe65b5f7829cda2e8fa14d4)`(const int32 & NewValue)` | Sets the value of TotalOwnershipMax_Optional and also sets TotalOwnershipMax_IsSet to true.
`public inline FORCEINLINE void `[`SetTotalOwnershipMax`](#structFRHAPI__Item_1a74c12fbc6d5b1c7c3bc24d51f7834ae1)`(int32 && NewValue)` | Sets the value of TotalOwnershipMax_Optional and also sets TotalOwnershipMax_IsSet to true using move semantics.
`public inline void `[`ClearTotalOwnershipMax`](#structFRHAPI__Item_1a252e461b463a6cf1b229bb55a79b8259)`()` | Clears the value of TotalOwnershipMax_Optional and sets TotalOwnershipMax_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TotalOwnershipMax`](#structFRHAPI__Item_1a83c60841693f8de1b3ca8a79a782efc1)`()` | Returns the default value of TotalOwnershipMax.
`public inline FORCEINLINE TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1aaed819220157a3080253fe5a5c06495f)`()` | Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1ab2d580462eea1e2cf9e06bcc2300e8b1)`() const` | Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a658f01c8ea7295ac5f090e823b421d90)`(const TArray< int32 > & DefaultValue) const` | Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a6db2a4d2002636eb55d50555572f8f01)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1a17f51e29c064f75035574daca32521df)`()` | Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1a0cdcce77eef8582cba5a113557d37ced)`() const` | Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1a154b0067558f3572562092b46738d566)`(const TArray< int32 > & NewValue)` | Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true.
`public inline FORCEINLINE void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1acfa2809b73752129d0798a17e600b923)`(TArray< int32 > && NewValue)` | Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountLoot`](#structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b)`()` | Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false.
`public inline FORCEINLINE TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1ab02a6add51a33e3d9d5486e87f1d77e1)`()` | Gets the value of CouponDiscountLootUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a6026a8bb4e3ba4c40bd867744a99bcfb)`() const` | Gets the value of CouponDiscountLootUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a2ed880cf9691b8395939226f83c91457)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of CouponDiscountLootUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a3c928df5dd22abaf67976a401bc10509)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of CouponDiscountLootUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FGuid > * `[`GetCouponDiscountLootUuidOrNull`](#structFRHAPI__Item_1a20902a1a0efcee760de1b647a2108812)`()` | Returns a pointer to CouponDiscountLootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FGuid > * `[`GetCouponDiscountLootUuidOrNull`](#structFRHAPI__Item_1a55e7d534ec5ba39771127009d21e21a5)`() const` | Returns a pointer to CouponDiscountLootUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCouponDiscountLootUuid`](#structFRHAPI__Item_1ade99a8aca0ee563e1d8f30cf8cbfe33d)`(const TArray< FGuid > & NewValue)` | Sets the value of CouponDiscountLootUuid_Optional and also sets CouponDiscountLootUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetCouponDiscountLootUuid`](#structFRHAPI__Item_1a0fdf26b1452a7ed148e4d5b2bcd18a7b)`(TArray< FGuid > && NewValue)` | Sets the value of CouponDiscountLootUuid_Optional and also sets CouponDiscountLootUuid_IsSet to true using move semantics.
`public inline void `[`ClearCouponDiscountLootUuid`](#structFRHAPI__Item_1ae15a27df3513971d3a1a02ba5107b357)`()` | Clears the value of CouponDiscountLootUuid_Optional and sets CouponDiscountLootUuid_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1a39cb264b8c423ba64e4ef5b8a1b932e3)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1a697dfa94e60b5c2c858afef84dd26fee)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1af3ca4d418b72834217993f2aecdc637b)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Item_1a4f4e99091fecfe5cf08f1c17ee5a166b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1ab12bdb4bea90e3b6b7398fe75ed62c03)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1a45c6eaef118c6ad2df8c97113f10ddf9)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Item_1a5d9e89d2f3ba57a64a9ee1f0efe3d21e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Item_1a2f8c863b8c49db2075a300d8576fc560)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Item_1aab7107a53938050b75bdf37a2a3f2a12)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Item_1a73e78c20b74a02c9d3fddae00d19e0f6)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47) <a id="structFRHAPI__Item_1ab4471f233af6d1c7692344d7dc338a47"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16) <a id="structFRHAPI__Item_1a9672eb702f349f9b39e8de502b307f16"></a>

true if CustomData_Optional has been set to a value

#### `public FGuid `[`ItemUuid_Optional`](#structFRHAPI__Item_1a80b591249bcf6a162cea03625859730b) <a id="structFRHAPI__Item_1a80b591249bcf6a162cea03625859730b"></a>

#### `public bool `[`ItemUuid_IsSet`](#structFRHAPI__Item_1ac78db9c246fdea6afcec61519e3bae79) <a id="structFRHAPI__Item_1ac78db9c246fdea6afcec61519e3bae79"></a>

true if ItemUuid_Optional has been set to a value

#### `public bool `[`ItemUuid_IsNull`](#structFRHAPI__Item_1a41a57f8ca3f0575ed2909f80b779a10a) <a id="structFRHAPI__Item_1a41a57f8ca3f0575ed2909f80b779a10a"></a>

true if ItemUuid_Optional has been explicitly set to null

#### `public ERHAPI_ItemType `[`Type_Optional`](#structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe) <a id="structFRHAPI__Item_1afe34e2073c58c7e118c14e292e75b4fe"></a>

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

#### `public bool `[`EntitledLootUuid_IsSet`](#structFRHAPI__Item_1a7b278bd51c30e2aa654e801bf8b778bd) <a id="structFRHAPI__Item_1a7b278bd51c30e2aa654e801bf8b778bd"></a>

true if EntitledLootUuid_Optional has been set to a value

#### `public bool `[`EntitledLootUuid_IsNull`](#structFRHAPI__Item_1a61e93b42ac1107188bc9234168667f12) <a id="structFRHAPI__Item_1a61e93b42ac1107188bc9234168667f12"></a>

true if EntitledLootUuid_Optional has been explicitly set to null

#### `public int32 `[`EntitledLootId_Optional`](#structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf) <a id="structFRHAPI__Item_1aaa68f0eea3db70f908d899ecf68bc9bf"></a>

This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled.

#### `public bool `[`EntitledLootId_IsSet`](#structFRHAPI__Item_1af42c3dae98945b853dd863c498951980) <a id="structFRHAPI__Item_1af42c3dae98945b853dd863c498951980"></a>

true if EntitledLootId_Optional has been set to a value

#### `public FGuid `[`LevelXpTableUuid_Optional`](#structFRHAPI__Item_1a797b9427d09a024a7e262926ea9c5f18) <a id="structFRHAPI__Item_1a797b9427d09a024a7e262926ea9c5f18"></a>

#### `public bool `[`LevelXpTableUuid_IsSet`](#structFRHAPI__Item_1ad36b1735e32314959dbc6e6a44957833) <a id="structFRHAPI__Item_1ad36b1735e32314959dbc6e6a44957833"></a>

true if LevelXpTableUuid_Optional has been set to a value

#### `public bool `[`LevelXpTableUuid_IsNull`](#structFRHAPI__Item_1a7a2a2c9d8bd0d598dc5c746bbb272a32) <a id="structFRHAPI__Item_1a7a2a2c9d8bd0d598dc5c746bbb272a32"></a>

true if LevelXpTableUuid_Optional has been explicitly set to null

#### `public int32 `[`LevelXpTableId_Optional`](#structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471) <a id="structFRHAPI__Item_1a4cfe4b49ca4f2f5c014d4d86b3486471"></a>

The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item.

#### `public bool `[`LevelXpTableId_IsSet`](#structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544) <a id="structFRHAPI__Item_1add1db69a09d1d80305df5206c0424544"></a>

true if LevelXpTableId_Optional has been set to a value

#### `public FGuid `[`LevelVendorUuid_Optional`](#structFRHAPI__Item_1a54af64f2166321a3d54bfd49eb33d126) <a id="structFRHAPI__Item_1a54af64f2166321a3d54bfd49eb33d126"></a>

#### `public bool `[`LevelVendorUuid_IsSet`](#structFRHAPI__Item_1a2b83904f2221e90ebc9d8da3c9020ba2) <a id="structFRHAPI__Item_1a2b83904f2221e90ebc9d8da3c9020ba2"></a>

true if LevelVendorUuid_Optional has been set to a value

#### `public bool `[`LevelVendorUuid_IsNull`](#structFRHAPI__Item_1ac8411fd42c89fb739a4227815afa0ae3) <a id="structFRHAPI__Item_1ac8411fd42c89fb739a4227815afa0ae3"></a>

true if LevelVendorUuid_Optional has been explicitly set to null

#### `public int32 `[`LevelVendorId_Optional`](#structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e) <a id="structFRHAPI__Item_1a76aba527b53bb5846856feb9303acf9e"></a>

The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item.

#### `public bool `[`LevelVendorId_IsSet`](#structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387) <a id="structFRHAPI__Item_1a8e31f620f2509aa5edb703e7bf2f7387"></a>

true if LevelVendorId_Optional has been set to a value

#### `public FGuid `[`CouponDiscountCurrencyItemUuid_Optional`](#structFRHAPI__Item_1aeff374c8804054ba04ab0eba08ea990b) <a id="structFRHAPI__Item_1aeff374c8804054ba04ab0eba08ea990b"></a>

#### `public bool `[`CouponDiscountCurrencyItemUuid_IsSet`](#structFRHAPI__Item_1a1e52daf9baa1a3f8e08e674d61d057f2) <a id="structFRHAPI__Item_1a1e52daf9baa1a3f8e08e674d61d057f2"></a>

true if CouponDiscountCurrencyItemUuid_Optional has been set to a value

#### `public bool `[`CouponDiscountCurrencyItemUuid_IsNull`](#structFRHAPI__Item_1a6e30b9c5762a9f58a1b9c87326349726) <a id="structFRHAPI__Item_1a6e30b9c5762a9f58a1b9c87326349726"></a>

true if CouponDiscountCurrencyItemUuid_Optional has been explicitly set to null

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

#### `public bool `[`InventoryBucketUseRuleSetId_IsSet`](#structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a) <a id="structFRHAPI__Item_1a3a38815ad3856cc8269d105b833cd90a"></a>

true if InventoryBucketUseRuleSetId_Optional has been set to a value

#### `public bool `[`InventoryBucketUseRuleSetId_IsNull`](#structFRHAPI__Item_1a8f466f9549bf32101e624dfb63b1f4b1) <a id="structFRHAPI__Item_1a8f466f9549bf32101e624dfb63b1f4b1"></a>

true if InventoryBucketUseRuleSetId_Optional has been explicitly set to null

#### `public int32 `[`TotalOwnershipMax_Optional`](#structFRHAPI__Item_1af4fb8962295c375ba8fbc31b8df5689b) <a id="structFRHAPI__Item_1af4fb8962295c375ba8fbc31b8df5689b"></a>

Maximum ownership (permanent+rental) allowed for this item. 0 means no limit.

#### `public bool `[`TotalOwnershipMax_IsSet`](#structFRHAPI__Item_1adc6d1409971af43a666c5bb3cfab4970) <a id="structFRHAPI__Item_1adc6d1409971af43a666c5bb3cfab4970"></a>

true if TotalOwnershipMax_Optional has been set to a value

#### `public TArray< int32 > `[`CouponDiscountLoot_Optional`](#structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd) <a id="structFRHAPI__Item_1a24aa5f6c74bb93cf565ea8d89f5f73bd"></a>

List of Loot IDs this item can discount.

#### `public bool `[`CouponDiscountLoot_IsSet`](#structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09) <a id="structFRHAPI__Item_1ad2d14cf5b7a5f19a37b8e25eee4d6e09"></a>

true if CouponDiscountLoot_Optional has been set to a value

#### `public TArray< FGuid > `[`CouponDiscountLootUuid_Optional`](#structFRHAPI__Item_1a5784ccafb6f7909f659810f797202a84) <a id="structFRHAPI__Item_1a5784ccafb6f7909f659810f797202a84"></a>

List of Loot this item can discount.

#### `public bool `[`CouponDiscountLootUuid_IsSet`](#structFRHAPI__Item_1aa70b15d223288176fcaced0e7622087e) <a id="structFRHAPI__Item_1aa70b15d223288176fcaced0e7622087e"></a>

true if CouponDiscountLootUuid_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527) <a id="structFRHAPI__Item_1ac645ac2ba254ea2e37fa6d701704f527"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084) <a id="structFRHAPI__Item_1a0d52a68ad73bca520721e74545ee2084"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__Item_1aba48c9d3eb60b570bba2b1855f67f3bb) <a id="structFRHAPI__Item_1aba48c9d3eb60b570bba2b1855f67f3bb"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__Item_1a5e75ef0aa4b1af5286da65c549597c73)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Item_1a5e75ef0aa4b1af5286da65c549597c73"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Item_1af420192ca00e833b25ecebe48ea0408a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Item_1af420192ca00e833b25ecebe48ea0408a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5f81adc39246382df4426eced37f7d93)`()` <a id="structFRHAPI__Item_1a5f81adc39246382df4426eced37f7d93"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a5c7bc29c43dbc4194b31ca57f09a9a7b)`() const` <a id="structFRHAPI__Item_1a5c7bc29c43dbc4194b31ca57f09a9a7b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Item_1a128038db69fe7c8fefdded404e0edeaa)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Item_1a128038db69fe7c8fefdded404e0edeaa"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Item_1acd380f8408d198f428d4ba8931fc66c7)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Item_1acd380f8408d198f428d4ba8931fc66c7"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a46fe1df6b27c75b7bb078551a0f23256)`()` <a id="structFRHAPI__Item_1a46fe1df6b27c75b7bb078551a0f23256"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Item_1a9f28123635b4cd90b15cc6cc68a1f286)`() const` <a id="structFRHAPI__Item_1a9f28123635b4cd90b15cc6cc68a1f286"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Item_1a483cb295493465dac095708f2a6ff082)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Item_1a483cb295493465dac095708f2a6ff082"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Item_1a30848c8c3ab243691f1d8cb84b430d05)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Item_1a30848c8c3ab243691f1d8cb84b430d05"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3)`()` <a id="structFRHAPI__Item_1a48d100ed90f7baca2adbf58f396992f3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1a0fb5b72e741b7c1560849a2c6363ca11)`()` <a id="structFRHAPI__Item_1a0fb5b72e741b7c1560849a2c6363ca11"></a>

Gets the value of ItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1a4d17fe7c641a56fea21259a54088af40)`() const` <a id="structFRHAPI__Item_1a4d17fe7c641a56fea21259a54088af40"></a>

Gets the value of ItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetItemUuid`](#structFRHAPI__Item_1aecc008206ece12ee05fc0e871dcb6f82)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1aecc008206ece12ee05fc0e871dcb6f82"></a>

Gets the value of ItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemUuid`](#structFRHAPI__Item_1aee511d356985aed25628243d9a0295b4)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1aee511d356985aed25628243d9a0295b4"></a>

Fills OutValue with the value of ItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Item_1a94adce19bc3b9683ba79c38885eadf22)`()` <a id="structFRHAPI__Item_1a94adce19bc3b9683ba79c38885eadf22"></a>

Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetItemUuidOrNull`](#structFRHAPI__Item_1a9c8a2a0c28cd4e2abe867b8e33a4f5e5)`() const` <a id="structFRHAPI__Item_1a9c8a2a0c28cd4e2abe867b8e33a4f5e5"></a>

Returns a pointer to ItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__Item_1acc7f50c978acd208ed768c00e5fd2afd)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1acc7f50c978acd208ed768c00e5fd2afd"></a>

Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemUuid`](#structFRHAPI__Item_1af839987b42d507ad278984f7ad9f81f0)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1af839987b42d507ad278984f7ad9f81f0"></a>

Sets the value of ItemUuid_Optional and also sets ItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearItemUuid`](#structFRHAPI__Item_1ae117f4643d50d55557c3472cbf5839c1)`()` <a id="structFRHAPI__Item_1ae117f4643d50d55557c3472cbf5839c1"></a>

Clears the value of ItemUuid_Optional and sets ItemUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetItemUuidToNull`](#structFRHAPI__Item_1aea4ae0b5a39524fbf791260a2d7bf9fd)`()` <a id="structFRHAPI__Item_1aea4ae0b5a39524fbf791260a2d7bf9fd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemUuidNull`](#structFRHAPI__Item_1a2111616c6579678df57b3d5837bc4e4f)`() const` <a id="structFRHAPI__Item_1a2111616c6579678df57b3d5837bc4e4f"></a>

Checks whether ItemUuid_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a6bfa555cd908fff45f1cf7ab7132aeef)`()` <a id="structFRHAPI__Item_1a6bfa555cd908fff45f1cf7ab7132aeef"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a2b7774a95ad1d47f4010cee23e5877d9)`() const` <a id="structFRHAPI__Item_1a2b7774a95ad1d47f4010cee23e5877d9"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_ItemType & `[`GetType`](#structFRHAPI__Item_1a4e734b80cb38baa3b12bc9496cce148f)`(const ERHAPI_ItemType & DefaultValue) const` <a id="structFRHAPI__Item_1a4e734b80cb38baa3b12bc9496cce148f"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__Item_1abf621b0829dc4d1a4bc4f2d78effcdd1)`(ERHAPI_ItemType & OutValue) const` <a id="structFRHAPI__Item_1abf621b0829dc4d1a4bc4f2d78effcdd1"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1a233957110f50a1cb7f2493186fa36e59)`()` <a id="structFRHAPI__Item_1a233957110f50a1cb7f2493186fa36e59"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_ItemType * `[`GetTypeOrNull`](#structFRHAPI__Item_1ada1f3058199e60c8094eec69f06e2424)`() const` <a id="structFRHAPI__Item_1ada1f3058199e60c8094eec69f06e2424"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Item_1a0220dfbfcc1a3a51dce5f830322b023e)`(const ERHAPI_ItemType & NewValue)` <a id="structFRHAPI__Item_1a0220dfbfcc1a3a51dce5f830322b023e"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Item_1a64b4993ef8fb037b47c379ecc1c37229)`(ERHAPI_ItemType && NewValue)` <a id="structFRHAPI__Item_1a64b4993ef8fb037b47c379ecc1c37229"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84)`()` <a id="structFRHAPI__Item_1a362cf257461d3f93b83ecf5145fe6f84"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a1b52532e4365d1fe545047b8943eaed2)`()` <a id="structFRHAPI__Item_1a1b52532e4365d1fe545047b8943eaed2"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1ae0ca211dc950fec54b14606aad32979c)`() const` <a id="structFRHAPI__Item_1ae0ca211dc950fec54b14606aad32979c"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyType`](#structFRHAPI__Item_1a13d789f67c72529575af61df15c45834)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a13d789f67c72529575af61df15c45834"></a>

Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyType`](#structFRHAPI__Item_1ab42affb06769605967573bbd40617cdb)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1ab42affb06769605967573bbd40617cdb"></a>

Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a8f5b0ddc58e47e8ac97ead0051b43577)`()` <a id="structFRHAPI__Item_1a8f5b0ddc58e47e8ac97ead0051b43577"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Item_1a29e5b31539214f4b9332aeb91ce89699)`() const` <a id="structFRHAPI__Item_1a29e5b31539214f4b9332aeb91ce89699"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyType`](#structFRHAPI__Item_1a8f6631b845a8af254d6a4e45ad9a3fef)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a8f6631b845a8af254d6a4e45ad9a3fef"></a>

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyType`](#structFRHAPI__Item_1aa4d07d6f78a9ef74914ac73357f2d057)`(int32 && NewValue)` <a id="structFRHAPI__Item_1aa4d07d6f78a9ef74914ac73357f2d057"></a>

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyType`](#structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef)`()` <a id="structFRHAPI__Item_1a3b348d7a2b201cfd7a226ff2357d13ef"></a>

Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyType`](#structFRHAPI__Item_1a6680fb545cb03d89e91c37d8b65c5fca)`()` <a id="structFRHAPI__Item_1a6680fb545cb03d89e91c37d8b65c5fca"></a>

Returns the default value of LegacyType.

#### `public inline FORCEINLINE int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1af2d9b3f5c879e4bbd8a9eb1df9ba493f)`()` <a id="structFRHAPI__Item_1af2d9b3f5c879e4bbd8a9eb1df9ba493f"></a>

Gets the value of LegacySubtype_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1a6a65a583fb014d311e0aac973dae0d75)`() const` <a id="structFRHAPI__Item_1a6a65a583fb014d311e0aac973dae0d75"></a>

Gets the value of LegacySubtype_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacySubtype`](#structFRHAPI__Item_1acaeba8ebc22c914b82237625462808f3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1acaeba8ebc22c914b82237625462808f3"></a>

Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacySubtype`](#structFRHAPI__Item_1a8294dfd16e62919ab966f5311786093e)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a8294dfd16e62919ab966f5311786093e"></a>

Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1a2c52ae6223f386a463907772b9beb817)`()` <a id="structFRHAPI__Item_1a2c52ae6223f386a463907772b9beb817"></a>

Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacySubtypeOrNull`](#structFRHAPI__Item_1af52e9aba74872b97dab9ed92c16b62a9)`() const` <a id="structFRHAPI__Item_1af52e9aba74872b97dab9ed92c16b62a9"></a>

Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacySubtype`](#structFRHAPI__Item_1a0f572aa059be5226180bb9042f530c51)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a0f572aa059be5226180bb9042f530c51"></a>

Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacySubtype`](#structFRHAPI__Item_1a01dbee6e2b76d1952216afaf35b58deb)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a01dbee6e2b76d1952216afaf35b58deb"></a>

Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacySubtype`](#structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976)`()` <a id="structFRHAPI__Item_1a0a39fa9d8be15b57818fffadbc315976"></a>

Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacySubtype`](#structFRHAPI__Item_1ac486576891119cea067ecc5f3a3e18df)`()` <a id="structFRHAPI__Item_1ac486576891119cea067ecc5f3a3e18df"></a>

Returns the default value of LegacySubtype.

#### `public inline FORCEINLINE int32 & `[`GetRefItemId`](#structFRHAPI__Item_1aba88404d8cfee9d8de83e8ce69121c4d)`()` <a id="structFRHAPI__Item_1aba88404d8cfee9d8de83e8ce69121c4d"></a>

Gets the value of RefItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1a3f54e8a298988e1b9b67e1479af801cc)`() const` <a id="structFRHAPI__Item_1a3f54e8a298988e1b9b67e1479af801cc"></a>

Gets the value of RefItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRefItemId`](#structFRHAPI__Item_1a0b0b19210c5c6099992ac8fbfc6c6c06)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a0b0b19210c5c6099992ac8fbfc6c6c06"></a>

Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRefItemId`](#structFRHAPI__Item_1aa527838da2082714a6c748c67b4bc601)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1aa527838da2082714a6c748c67b4bc601"></a>

Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a8f2d754ea2258470b3b946a37277a80e)`()` <a id="structFRHAPI__Item_1a8f2d754ea2258470b3b946a37277a80e"></a>

Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetRefItemIdOrNull`](#structFRHAPI__Item_1a9066075ae9c2d29a5d5a6f542fd0d506)`() const` <a id="structFRHAPI__Item_1a9066075ae9c2d29a5d5a6f542fd0d506"></a>

Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRefItemId`](#structFRHAPI__Item_1a6059eeb5f94e20a1b28d1691abf5cb84)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a6059eeb5f94e20a1b28d1691abf5cb84"></a>

Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRefItemId`](#structFRHAPI__Item_1adf96b77975c85c15f4e65556bf9173ff)`(int32 && NewValue)` <a id="structFRHAPI__Item_1adf96b77975c85c15f4e65556bf9173ff"></a>

Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearRefItemId`](#structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754)`()` <a id="structFRHAPI__Item_1a627bd51ce7a252982a40502f90731754"></a>

Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RefItemId`](#structFRHAPI__Item_1affea15654e8c1a556bbeda5686e702b8)`()` <a id="structFRHAPI__Item_1affea15654e8c1a556bbeda5686e702b8"></a>

Returns the default value of RefItemId.

#### `public inline FORCEINLINE int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1a7a91a6cab74be4fa9d3b95f470a10e95)`()` <a id="structFRHAPI__Item_1a7a91a6cab74be4fa9d3b95f470a10e95"></a>

Gets the value of AvailabilityFlags_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1af75829e52e457a8c28b36e003593c4f6)`() const` <a id="structFRHAPI__Item_1af75829e52e457a8c28b36e003593c4f6"></a>

Gets the value of AvailabilityFlags_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetAvailabilityFlags`](#structFRHAPI__Item_1a9913d0a620e7d1dc968cf71a0178618a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a9913d0a620e7d1dc968cf71a0178618a"></a>

Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAvailabilityFlags`](#structFRHAPI__Item_1aa29da69b84779d99a1dd207f909a77c7)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1aa29da69b84779d99a1dd207f909a77c7"></a>

Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1aac344fb365ab5ffd805a2260b25c3d83)`()` <a id="structFRHAPI__Item_1aac344fb365ab5ffd805a2260b25c3d83"></a>

Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetAvailabilityFlagsOrNull`](#structFRHAPI__Item_1a2260cbfd0870810116e49f3ade2950e5)`() const` <a id="structFRHAPI__Item_1a2260cbfd0870810116e49f3ade2950e5"></a>

Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1a10086a737765226e6c07ba5814520e0b)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a10086a737765226e6c07ba5814520e0b"></a>

Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAvailabilityFlags`](#structFRHAPI__Item_1a13b9a7a868d7aef7b6f9b1d7f14ac8d7)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a13b9a7a868d7aef7b6f9b1d7f14ac8d7"></a>

Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true using move semantics.

#### `public inline void `[`ClearAvailabilityFlags`](#structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8)`()` <a id="structFRHAPI__Item_1ab6431ed841c08437bde7da3f64d759a8"></a>

Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_AvailabilityFlags`](#structFRHAPI__Item_1ae1b1dcf6443d294a648ed376f5d392db)`()` <a id="structFRHAPI__Item_1ae1b1dcf6443d294a648ed376f5d392db"></a>

Returns the default value of AvailabilityFlags.

#### `public inline FORCEINLINE FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a986213b1ee62f9ff7d03e2a00116c942)`()` <a id="structFRHAPI__Item_1a986213b1ee62f9ff7d03e2a00116c942"></a>

Gets the value of EntitledLootUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a2eb3ad536b0a704f6933cdd08f283123)`() const` <a id="structFRHAPI__Item_1a2eb3ad536b0a704f6933cdd08f283123"></a>

Gets the value of EntitledLootUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetEntitledLootUuid`](#structFRHAPI__Item_1ae6c92ac45b7e1b366969a0af226cba32)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1ae6c92ac45b7e1b366969a0af226cba32"></a>

Gets the value of EntitledLootUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntitledLootUuid`](#structFRHAPI__Item_1a7a053f56309e67328a23ac50d3c2df94)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1a7a053f56309e67328a23ac50d3c2df94"></a>

Fills OutValue with the value of EntitledLootUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetEntitledLootUuidOrNull`](#structFRHAPI__Item_1aae4e85d26d964a7e9d6b1996f8d9522f)`()` <a id="structFRHAPI__Item_1aae4e85d26d964a7e9d6b1996f8d9522f"></a>

Returns a pointer to EntitledLootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetEntitledLootUuidOrNull`](#structFRHAPI__Item_1ae828ed1cb95c8b6116efebfb2173c932)`() const` <a id="structFRHAPI__Item_1ae828ed1cb95c8b6116efebfb2173c932"></a>

Returns a pointer to EntitledLootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntitledLootUuid`](#structFRHAPI__Item_1aeffec62c21560367413471f376353537)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1aeffec62c21560367413471f376353537"></a>

Sets the value of EntitledLootUuid_Optional and also sets EntitledLootUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntitledLootUuid`](#structFRHAPI__Item_1ab83d07cbb9ece3ee488db9cb151d6228)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1ab83d07cbb9ece3ee488db9cb151d6228"></a>

Sets the value of EntitledLootUuid_Optional and also sets EntitledLootUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitledLootUuid`](#structFRHAPI__Item_1a80b307d98d2d4dfd01c5f180d8afb707)`()` <a id="structFRHAPI__Item_1a80b307d98d2d4dfd01c5f180d8afb707"></a>

Clears the value of EntitledLootUuid_Optional and sets EntitledLootUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEntitledLootUuidToNull`](#structFRHAPI__Item_1ad29ac8d21f2949ef9d0c97eb7cd1cdb9)`()` <a id="structFRHAPI__Item_1ad29ac8d21f2949ef9d0c97eb7cd1cdb9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEntitledLootUuidNull`](#structFRHAPI__Item_1a5e203f61fa1ee53bad382e2514022e97)`() const` <a id="structFRHAPI__Item_1a5e203f61fa1ee53bad382e2514022e97"></a>

Checks whether EntitledLootUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1a742791c4e607afc5506dfc193a2e891d)`()` <a id="structFRHAPI__Item_1a742791c4e607afc5506dfc193a2e891d"></a>

Gets the value of EntitledLootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1a67c6de375a0a9ce983e96e7d663f7f12)`() const` <a id="structFRHAPI__Item_1a67c6de375a0a9ce983e96e7d663f7f12"></a>

Gets the value of EntitledLootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetEntitledLootId`](#structFRHAPI__Item_1ab2d09fc85c7c5dd3310d01a2f14c94cb)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1ab2d09fc85c7c5dd3310d01a2f14c94cb"></a>

Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntitledLootId`](#structFRHAPI__Item_1abcd4333a337a6201fd159b3fd80c097d)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1abcd4333a337a6201fd159b3fd80c097d"></a>

Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1a775fc0fa15734b0cd283746a8d6879ab)`()` <a id="structFRHAPI__Item_1a775fc0fa15734b0cd283746a8d6879ab"></a>

Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetEntitledLootIdOrNull`](#structFRHAPI__Item_1abce12ab27fe0ffecf58ede4ea1858075)`() const` <a id="structFRHAPI__Item_1abce12ab27fe0ffecf58ede4ea1858075"></a>

Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntitledLootId`](#structFRHAPI__Item_1ab66036ee605b51fb3aca34f0a167c8de)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1ab66036ee605b51fb3aca34f0a167c8de"></a>

Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntitledLootId`](#structFRHAPI__Item_1a2abd341f69aceaad0e7a7109401d9742)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a2abd341f69aceaad0e7a7109401d9742"></a>

Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitledLootId`](#structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda)`()` <a id="structFRHAPI__Item_1af391494a5410e3f80f61a9e5e25dccda"></a>

Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_EntitledLootId`](#structFRHAPI__Item_1ae3d1e1efae68b016f65a2b38007b2f77)`()` <a id="structFRHAPI__Item_1ae3d1e1efae68b016f65a2b38007b2f77"></a>

Returns the default value of EntitledLootId.

#### `public inline FORCEINLINE FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a2c71defaace2733281736977b4e76a48)`()` <a id="structFRHAPI__Item_1a2c71defaace2733281736977b4e76a48"></a>

Gets the value of LevelXpTableUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a53c8c9956709b6f70772e209813f33bc)`() const` <a id="structFRHAPI__Item_1a53c8c9956709b6f70772e209813f33bc"></a>

Gets the value of LevelXpTableUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1aada4400ca3d7464c83b0b048d70277c6)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1aada4400ca3d7464c83b0b048d70277c6"></a>

Gets the value of LevelXpTableUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLevelXpTableUuid`](#structFRHAPI__Item_1a4620d615af2e120a893c998f6f11198b)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1a4620d615af2e120a893c998f6f11198b"></a>

Fills OutValue with the value of LevelXpTableUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetLevelXpTableUuidOrNull`](#structFRHAPI__Item_1a1e1a3223165a5132e85766abfab055f4)`()` <a id="structFRHAPI__Item_1a1e1a3223165a5132e85766abfab055f4"></a>

Returns a pointer to LevelXpTableUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetLevelXpTableUuidOrNull`](#structFRHAPI__Item_1a69512c781cf1511eb5f54d7108afb268)`() const` <a id="structFRHAPI__Item_1a69512c781cf1511eb5f54d7108afb268"></a>

Returns a pointer to LevelXpTableUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLevelXpTableUuid`](#structFRHAPI__Item_1adfa59e40e28828ff6fc8a616c71955c2)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1adfa59e40e28828ff6fc8a616c71955c2"></a>

Sets the value of LevelXpTableUuid_Optional and also sets LevelXpTableUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLevelXpTableUuid`](#structFRHAPI__Item_1a47ab7b33f58b6c2f6af36a524d9f3cde)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1a47ab7b33f58b6c2f6af36a524d9f3cde"></a>

Sets the value of LevelXpTableUuid_Optional and also sets LevelXpTableUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearLevelXpTableUuid`](#structFRHAPI__Item_1aa045a9bebae787bfd2ca849c041b3a4f)`()` <a id="structFRHAPI__Item_1aa045a9bebae787bfd2ca849c041b3a4f"></a>

Clears the value of LevelXpTableUuid_Optional and sets LevelXpTableUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLevelXpTableUuidToNull`](#structFRHAPI__Item_1ae4e735f0d1561b627424cea781e0dd04)`()` <a id="structFRHAPI__Item_1ae4e735f0d1561b627424cea781e0dd04"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLevelXpTableUuidNull`](#structFRHAPI__Item_1a67569818c40f09221afabd1433a9e26f)`() const` <a id="structFRHAPI__Item_1a67569818c40f09221afabd1433a9e26f"></a>

Checks whether LevelXpTableUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1aebab51c0784e638eed2a325cc414c531)`()` <a id="structFRHAPI__Item_1aebab51c0784e638eed2a325cc414c531"></a>

Gets the value of LevelXpTableId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a07bae5eff7bb612bfc246925a0d70bbb)`() const` <a id="structFRHAPI__Item_1a07bae5eff7bb612bfc246925a0d70bbb"></a>

Gets the value of LevelXpTableId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLevelXpTableId`](#structFRHAPI__Item_1a4dd2efcac5235f13473dd53cf92e6de5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a4dd2efcac5235f13473dd53cf92e6de5"></a>

Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLevelXpTableId`](#structFRHAPI__Item_1a8733dc10396cd5cc4c12df526b4f68e5)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a8733dc10396cd5cc4c12df526b4f68e5"></a>

Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1af087625a77abd472b7df6d213c24b0e7)`()` <a id="structFRHAPI__Item_1af087625a77abd472b7df6d213c24b0e7"></a>

Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLevelXpTableIdOrNull`](#structFRHAPI__Item_1a17a0cee3ab4b997edfd69d4792043845)`() const` <a id="structFRHAPI__Item_1a17a0cee3ab4b997edfd69d4792043845"></a>

Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLevelXpTableId`](#structFRHAPI__Item_1ab4f91ab7677f2a2f14dc6d414c69e6ce)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1ab4f91ab7677f2a2f14dc6d414c69e6ce"></a>

Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLevelXpTableId`](#structFRHAPI__Item_1ae0e0a0eb8f5c67f058330836e481e040)`(int32 && NewValue)` <a id="structFRHAPI__Item_1ae0e0a0eb8f5c67f058330836e481e040"></a>

Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true using move semantics.

#### `public inline void `[`ClearLevelXpTableId`](#structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463)`()` <a id="structFRHAPI__Item_1a1c89518a19b75fc04c9a6bef06610463"></a>

Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LevelXpTableId`](#structFRHAPI__Item_1a94841fd6fb1d5ac326b125a4d765ca0c)`()` <a id="structFRHAPI__Item_1a94841fd6fb1d5ac326b125a4d765ca0c"></a>

Returns the default value of LevelXpTableId.

#### `public inline FORCEINLINE FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a099a8f3bbad98e0ebd52a930c1297738)`()` <a id="structFRHAPI__Item_1a099a8f3bbad98e0ebd52a930c1297738"></a>

Gets the value of LevelVendorUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1a5a3337e58cb58a2e460d56f45e77999e)`() const` <a id="structFRHAPI__Item_1a5a3337e58cb58a2e460d56f45e77999e"></a>

Gets the value of LevelVendorUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetLevelVendorUuid`](#structFRHAPI__Item_1afccc923c2c628e0bdda2a7521bc39c0a)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1afccc923c2c628e0bdda2a7521bc39c0a"></a>

Gets the value of LevelVendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLevelVendorUuid`](#structFRHAPI__Item_1aa086413b36057b7bf5d0e25a1620f16d)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1aa086413b36057b7bf5d0e25a1620f16d"></a>

Fills OutValue with the value of LevelVendorUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetLevelVendorUuidOrNull`](#structFRHAPI__Item_1a5edba27e9b89c8672daa91b6a57f68f5)`()` <a id="structFRHAPI__Item_1a5edba27e9b89c8672daa91b6a57f68f5"></a>

Returns a pointer to LevelVendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetLevelVendorUuidOrNull`](#structFRHAPI__Item_1a5b357658ce1b3f89a07f06e203ca6a68)`() const` <a id="structFRHAPI__Item_1a5b357658ce1b3f89a07f06e203ca6a68"></a>

Returns a pointer to LevelVendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLevelVendorUuid`](#structFRHAPI__Item_1af42605c5d9ee7d49f048f081b74ed0b8)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1af42605c5d9ee7d49f048f081b74ed0b8"></a>

Sets the value of LevelVendorUuid_Optional and also sets LevelVendorUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLevelVendorUuid`](#structFRHAPI__Item_1a357d22757a02200e53f3bf4c68f759cd)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1a357d22757a02200e53f3bf4c68f759cd"></a>

Sets the value of LevelVendorUuid_Optional and also sets LevelVendorUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearLevelVendorUuid`](#structFRHAPI__Item_1a5e63c9d337ee6543483319fa12b01c6d)`()` <a id="structFRHAPI__Item_1a5e63c9d337ee6543483319fa12b01c6d"></a>

Clears the value of LevelVendorUuid_Optional and sets LevelVendorUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLevelVendorUuidToNull`](#structFRHAPI__Item_1ad45ff1ce5e42675f8963da7d38268c57)`()` <a id="structFRHAPI__Item_1ad45ff1ce5e42675f8963da7d38268c57"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLevelVendorUuidNull`](#structFRHAPI__Item_1a8eed1a4813aba930caaefc00dd4b7766)`() const` <a id="structFRHAPI__Item_1a8eed1a4813aba930caaefc00dd4b7766"></a>

Checks whether LevelVendorUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1af2ae153e9f018fc153cd491cfd787bf5)`()` <a id="structFRHAPI__Item_1af2ae153e9f018fc153cd491cfd787bf5"></a>

Gets the value of LevelVendorId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1afd5fe90f67bee175ae670398be670dff)`() const` <a id="structFRHAPI__Item_1afd5fe90f67bee175ae670398be670dff"></a>

Gets the value of LevelVendorId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLevelVendorId`](#structFRHAPI__Item_1a6acd2159fe1decb904d9e9d509d06630)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a6acd2159fe1decb904d9e9d509d06630"></a>

Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLevelVendorId`](#structFRHAPI__Item_1a9607965c31c727ebc884ff4cb4871533)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a9607965c31c727ebc884ff4cb4871533"></a>

Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1a6e54deee3996741acf0aa30df7ae9683)`()` <a id="structFRHAPI__Item_1a6e54deee3996741acf0aa30df7ae9683"></a>

Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLevelVendorIdOrNull`](#structFRHAPI__Item_1aac3a14877bdd7f23a1b7fd4a643f6b32)`() const` <a id="structFRHAPI__Item_1aac3a14877bdd7f23a1b7fd4a643f6b32"></a>

Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLevelVendorId`](#structFRHAPI__Item_1af458fdbee236e66c400cc145db4fe6dd)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1af458fdbee236e66c400cc145db4fe6dd"></a>

Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLevelVendorId`](#structFRHAPI__Item_1ac0686303a50ca9660a3b4f00f6740df3)`(int32 && NewValue)` <a id="structFRHAPI__Item_1ac0686303a50ca9660a3b4f00f6740df3"></a>

Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true using move semantics.

#### `public inline void `[`ClearLevelVendorId`](#structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2)`()` <a id="structFRHAPI__Item_1a355b5f7551ed3105dd68b45e2393aee2"></a>

Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LevelVendorId`](#structFRHAPI__Item_1af4372196edaacf0962d5416ee5d00562)`()` <a id="structFRHAPI__Item_1af4372196edaacf0962d5416ee5d00562"></a>

Returns the default value of LevelVendorId.

#### `public inline FORCEINLINE FGuid & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a3716f22c577baadf52b0d34dfa908be7)`()` <a id="structFRHAPI__Item_1a3716f22c577baadf52b0d34dfa908be7"></a>

Gets the value of CouponDiscountCurrencyItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a373d318a2005c62dbdda06bb0248efc5)`() const` <a id="structFRHAPI__Item_1a373d318a2005c62dbdda06bb0248efc5"></a>

Gets the value of CouponDiscountCurrencyItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a800ca266534e9d06f62f846615e5d79b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Item_1a800ca266534e9d06f62f846615e5d79b"></a>

Gets the value of CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1afd6e094a7f6bf76c18a11bdd29bd35d3)`(FGuid & OutValue) const` <a id="structFRHAPI__Item_1afd6e094a7f6bf76c18a11bdd29bd35d3"></a>

Fills OutValue with the value of CouponDiscountCurrencyItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetCouponDiscountCurrencyItemUuidOrNull`](#structFRHAPI__Item_1ab932c279269e8495582694d5def9722c)`()` <a id="structFRHAPI__Item_1ab932c279269e8495582694d5def9722c"></a>

Returns a pointer to CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetCouponDiscountCurrencyItemUuidOrNull`](#structFRHAPI__Item_1a8e794a1b7de926e5d27a5f0ad8c41c73)`() const` <a id="structFRHAPI__Item_1a8e794a1b7de926e5d27a5f0ad8c41c73"></a>

Returns a pointer to CouponDiscountCurrencyItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a0f40592b16ad57f3cb9cc2803421081b)`(const FGuid & NewValue)` <a id="structFRHAPI__Item_1a0f40592b16ad57f3cb9cc2803421081b"></a>

Sets the value of CouponDiscountCurrencyItemUuid_Optional and also sets CouponDiscountCurrencyItemUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1a58221a61a7e3cde026d333474dfb9ab1)`(FGuid && NewValue)` <a id="structFRHAPI__Item_1a58221a61a7e3cde026d333474dfb9ab1"></a>

Sets the value of CouponDiscountCurrencyItemUuid_Optional and also sets CouponDiscountCurrencyItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountCurrencyItemUuid`](#structFRHAPI__Item_1aad2f0040ddc2e9e4f217aed5358cd17b)`()` <a id="structFRHAPI__Item_1aad2f0040ddc2e9e4f217aed5358cd17b"></a>

Clears the value of CouponDiscountCurrencyItemUuid_Optional and sets CouponDiscountCurrencyItemUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemUuidToNull`](#structFRHAPI__Item_1a260f2e500de65ee8a7b48061565a311b)`()` <a id="structFRHAPI__Item_1a260f2e500de65ee8a7b48061565a311b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCouponDiscountCurrencyItemUuidNull`](#structFRHAPI__Item_1a5c89c31952d0533365592e3a56aae5ea)`() const` <a id="structFRHAPI__Item_1a5c89c31952d0533365592e3a56aae5ea"></a>

Checks whether CouponDiscountCurrencyItemUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a9abf1d20914df7a91dd0fdec23bc0564)`()` <a id="structFRHAPI__Item_1a9abf1d20914df7a91dd0fdec23bc0564"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a3016e1b5f3bf9c2380eb2b92fc120ff5)`() const` <a id="structFRHAPI__Item_1a3016e1b5f3bf9c2380eb2b92fc120ff5"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1aaa4028e3e2414db8d093fb663a444798)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1aaa4028e3e2414db8d093fb663a444798"></a>

Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1ac44816706a2b9d8f8ce4053321228d92)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1ac44816706a2b9d8f8ce4053321228d92"></a>

Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1af1d1385cef5b0751b0c8984d2b8d8790)`()` <a id="structFRHAPI__Item_1af1d1385cef5b0751b0c8984d2b8d8790"></a>

Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetCouponDiscountCurrencyItemIdOrNull`](#structFRHAPI__Item_1a87066315249830cb860b8847260406a6)`() const` <a id="structFRHAPI__Item_1a87066315249830cb860b8847260406a6"></a>

Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a3b542e30989c273b1ef080199931df75)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a3b542e30989c273b1ef080199931df75"></a>

Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a09a8e70ae612412c478032780354c640)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a09a8e70ae612412c478032780354c640"></a>

Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675)`()` <a id="structFRHAPI__Item_1a21c2c0a800b54b6af060b83257912675"></a>

Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_CouponDiscountCurrencyItemId`](#structFRHAPI__Item_1a5dcf71d904c0f52aac799101a4809a3b)`()` <a id="structFRHAPI__Item_1a5dcf71d904c0f52aac799101a4809a3b"></a>

Returns the default value of CouponDiscountCurrencyItemId.

#### `public inline FORCEINLINE float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1aeb8735b18eb4de95a071abaa6a5910fe)`()` <a id="structFRHAPI__Item_1aeb8735b18eb4de95a071abaa6a5910fe"></a>

Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1af394a19187a0334ba83c3787f934ebdc)`() const` <a id="structFRHAPI__Item_1af394a19187a0334ba83c3787f934ebdc"></a>

Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a8b59c229baf1eda357063ec8e3aaf4ce)`(const float & DefaultValue) const` <a id="structFRHAPI__Item_1a8b59c229baf1eda357063ec8e3aaf4ce"></a>

Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCouponDiscountPercentage`](#structFRHAPI__Item_1a5e874ba3ad14cdd022aa81ab0f4761bb)`(float & OutValue) const` <a id="structFRHAPI__Item_1a5e874ba3ad14cdd022aa81ab0f4761bb"></a>

Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1adc211520929d90d02dc627883e6ad88c)`()` <a id="structFRHAPI__Item_1adc211520929d90d02dc627883e6ad88c"></a>

Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetCouponDiscountPercentageOrNull`](#structFRHAPI__Item_1ac07586560421a076aceca5718d635359)`() const` <a id="structFRHAPI__Item_1ac07586560421a076aceca5718d635359"></a>

Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1abc8841f1426c6bddb5fef1cf1b4d2a25)`(const float & NewValue)` <a id="structFRHAPI__Item_1abc8841f1426c6bddb5fef1cf1b4d2a25"></a>

Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCouponDiscountPercentage`](#structFRHAPI__Item_1a9c1d4c98e73820c4415405f79fe0a0e0)`(float && NewValue)` <a id="structFRHAPI__Item_1a9c1d4c98e73820c4415405f79fe0a0e0"></a>

Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountPercentage`](#structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b)`()` <a id="structFRHAPI__Item_1abe260223c46cd98da72b17d3c6ca6f2b"></a>

Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a330bbf4dca354a2572b61c99e39a7288)`()` <a id="structFRHAPI__Item_1a330bbf4dca354a2572b61c99e39a7288"></a>

Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a2c831f066933238b87448d3983d2f63c)`() const` <a id="structFRHAPI__Item_1a2c831f066933238b87448d3983d2f63c"></a>

Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a6f8e7fc51e0b01f104cbd92a0695c782)`(const bool & DefaultValue) const` <a id="structFRHAPI__Item_1a6f8e7fc51e0b01f104cbd92a0695c782"></a>

Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCouponConsumeOnUse`](#structFRHAPI__Item_1a731fc4b2db28ab414a3139df26fc57ef)`(bool & OutValue) const` <a id="structFRHAPI__Item_1a731fc4b2db28ab414a3139df26fc57ef"></a>

Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1a153c588a3c174c9da88bae5cd03d82e2)`()` <a id="structFRHAPI__Item_1a153c588a3c174c9da88bae5cd03d82e2"></a>

Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCouponConsumeOnUseOrNull`](#structFRHAPI__Item_1a9064bcb41e18d8761e5d09b5c1dcb8af)`() const` <a id="structFRHAPI__Item_1a9064bcb41e18d8761e5d09b5c1dcb8af"></a>

Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1a387b70fa9e430c652e731e28042cfc65)`(const bool & NewValue)` <a id="structFRHAPI__Item_1a387b70fa9e430c652e731e28042cfc65"></a>

Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCouponConsumeOnUse`](#structFRHAPI__Item_1a3a0d7970012296d77f1820614ebf2f5c)`(bool && NewValue)` <a id="structFRHAPI__Item_1a3a0d7970012296d77f1820614ebf2f5c"></a>

Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponConsumeOnUse`](#structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480)`()` <a id="structFRHAPI__Item_1a2683fa55d3ee92ef0d96de6f31e34480"></a>

Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CouponConsumeOnUse`](#structFRHAPI__Item_1aa4cdcabc346c53a248129ae82961cd23)`()` <a id="structFRHAPI__Item_1aa4cdcabc346c53a248129ae82961cd23"></a>

Returns the default value of CouponConsumeOnUse.

#### `public inline FORCEINLINE int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1ae5c22bea2c8e87cfc1b0f6b334fc3690)`()` <a id="structFRHAPI__Item_1ae5c22bea2c8e87cfc1b0f6b334fc3690"></a>

Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1ad8bdc7e273b9f9bccaabc28d45b217f7)`() const` <a id="structFRHAPI__Item_1ad8bdc7e273b9f9bccaabc28d45b217f7"></a>

Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1ac00c0faadf7b824d5910ccb91447cd3f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1ac00c0faadf7b824d5910ccb91447cd3f"></a>

Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemPortalUseRulesetId`](#structFRHAPI__Item_1a9de4f7030fd2557d398c6488f2f3776f)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a9de4f7030fd2557d398c6488f2f3776f"></a>

Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1a1f6e047f3633d94ae3de16014bfe9e77)`()` <a id="structFRHAPI__Item_1a1f6e047f3633d94ae3de16014bfe9e77"></a>

Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemPortalUseRulesetIdOrNull`](#structFRHAPI__Item_1aad99f8b63572f2ef6901b53835976b10)`() const` <a id="structFRHAPI__Item_1aad99f8b63572f2ef6901b53835976b10"></a>

Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1a89c17f395ca211674c690c3efe69423e)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1a89c17f395ca211674c690c3efe69423e"></a>

Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemPortalUseRulesetId`](#structFRHAPI__Item_1a19fa060b4ee85edb16d84264569c0818)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a19fa060b4ee85edb16d84264569c0818"></a>

Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemPortalUseRulesetId`](#structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5)`()` <a id="structFRHAPI__Item_1ab20636f41b4e4f24a9d47808623758d5"></a>

Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemPortalUseRulesetId`](#structFRHAPI__Item_1aa774f1cb6fb2fb7c9011707221c1b44b)`()` <a id="structFRHAPI__Item_1aa774f1cb6fb2fb7c9011707221c1b44b"></a>

Returns the default value of ItemPortalUseRulesetId.

#### `public inline FORCEINLINE FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1aa1a3f5703deac3a54ae96aa6ffe4c541)`()` <a id="structFRHAPI__Item_1aa1a3f5703deac3a54ae96aa6ffe4c541"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a4393a9a743d17483e25a7b256ca52394)`() const` <a id="structFRHAPI__Item_1a4393a9a743d17483e25a7b256ca52394"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a2bd07c7f8e3c4a4b71434ddc2b39ac1d)`(const FString & DefaultValue) const` <a id="structFRHAPI__Item_1a2bd07c7f8e3c4a4b71434ddc2b39ac1d"></a>

Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1ac6b5880cbc772d300efb9cd9bf0116d1)`(FString & OutValue) const` <a id="structFRHAPI__Item_1ac6b5880cbc772d300efb9cd9bf0116d1"></a>

Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1adac33f116a1659b5c040b9b4da42665e)`()` <a id="structFRHAPI__Item_1adac33f116a1659b5c040b9b4da42665e"></a>

Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInventoryBucketUseRuleSetIdOrNull`](#structFRHAPI__Item_1a19d2a733b65a7fe5ed6f1f4f40b17ef3)`() const` <a id="structFRHAPI__Item_1a19d2a733b65a7fe5ed6f1f4f40b17ef3"></a>

Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a509b1f8e1ad890f8ce7ca6971123bfaf)`(const FString & NewValue)` <a id="structFRHAPI__Item_1a509b1f8e1ad890f8ce7ca6971123bfaf"></a>

Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1a98287ef0633f2b1e49c31aae5715fbbb)`(FString && NewValue)` <a id="structFRHAPI__Item_1a98287ef0633f2b1e49c31aae5715fbbb"></a>

Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryBucketUseRuleSetId`](#structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0)`()` <a id="structFRHAPI__Item_1afd23945b8a24b88e3f1bea74901cb8c0"></a>

Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInventoryBucketUseRuleSetIdToNull`](#structFRHAPI__Item_1adfdab6b89c52388f80120953a249936a)`()` <a id="structFRHAPI__Item_1adfdab6b89c52388f80120953a249936a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInventoryBucketUseRuleSetIdNull`](#structFRHAPI__Item_1a2bcc8d877639562320cfea7d4c33289f)`() const` <a id="structFRHAPI__Item_1a2bcc8d877639562320cfea7d4c33289f"></a>

Checks whether InventoryBucketUseRuleSetId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetTotalOwnershipMax`](#structFRHAPI__Item_1a04556bc289f3f1df85f40fc669f3f64e)`()` <a id="structFRHAPI__Item_1a04556bc289f3f1df85f40fc669f3f64e"></a>

Gets the value of TotalOwnershipMax_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalOwnershipMax`](#structFRHAPI__Item_1aa0a6a5c02ffc3ad600f74b05611e248c)`() const` <a id="structFRHAPI__Item_1aa0a6a5c02ffc3ad600f74b05611e248c"></a>

Gets the value of TotalOwnershipMax_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTotalOwnershipMax`](#structFRHAPI__Item_1a1b61f750fcca67d84ab1e9a69110d7b6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Item_1a1b61f750fcca67d84ab1e9a69110d7b6"></a>

Gets the value of TotalOwnershipMax_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTotalOwnershipMax`](#structFRHAPI__Item_1a6ce34a9e76f14eaf7eab08a43b425798)`(int32 & OutValue) const` <a id="structFRHAPI__Item_1a6ce34a9e76f14eaf7eab08a43b425798"></a>

Fills OutValue with the value of TotalOwnershipMax_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTotalOwnershipMaxOrNull`](#structFRHAPI__Item_1a16c4d23b922ad48f88c7426d6520c920)`()` <a id="structFRHAPI__Item_1a16c4d23b922ad48f88c7426d6520c920"></a>

Returns a pointer to TotalOwnershipMax_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTotalOwnershipMaxOrNull`](#structFRHAPI__Item_1ae87ed48e3f1c7787ec378b848247664a)`() const` <a id="structFRHAPI__Item_1ae87ed48e3f1c7787ec378b848247664a"></a>

Returns a pointer to TotalOwnershipMax_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTotalOwnershipMax`](#structFRHAPI__Item_1aa4314d97fbe65b5f7829cda2e8fa14d4)`(const int32 & NewValue)` <a id="structFRHAPI__Item_1aa4314d97fbe65b5f7829cda2e8fa14d4"></a>

Sets the value of TotalOwnershipMax_Optional and also sets TotalOwnershipMax_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTotalOwnershipMax`](#structFRHAPI__Item_1a74c12fbc6d5b1c7c3bc24d51f7834ae1)`(int32 && NewValue)` <a id="structFRHAPI__Item_1a74c12fbc6d5b1c7c3bc24d51f7834ae1"></a>

Sets the value of TotalOwnershipMax_Optional and also sets TotalOwnershipMax_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalOwnershipMax`](#structFRHAPI__Item_1a252e461b463a6cf1b229bb55a79b8259)`()` <a id="structFRHAPI__Item_1a252e461b463a6cf1b229bb55a79b8259"></a>

Clears the value of TotalOwnershipMax_Optional and sets TotalOwnershipMax_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TotalOwnershipMax`](#structFRHAPI__Item_1a83c60841693f8de1b3ca8a79a782efc1)`()` <a id="structFRHAPI__Item_1a83c60841693f8de1b3ca8a79a782efc1"></a>

Returns the default value of TotalOwnershipMax.

#### `public inline FORCEINLINE TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1aaed819220157a3080253fe5a5c06495f)`()` <a id="structFRHAPI__Item_1aaed819220157a3080253fe5a5c06495f"></a>

Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1ab2d580462eea1e2cf9e06bcc2300e8b1)`() const` <a id="structFRHAPI__Item_1ab2d580462eea1e2cf9e06bcc2300e8b1"></a>

Gets the value of CouponDiscountLoot_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a658f01c8ea7295ac5f090e823b421d90)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__Item_1a658f01c8ea7295ac5f090e823b421d90"></a>

Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCouponDiscountLoot`](#structFRHAPI__Item_1a6db2a4d2002636eb55d50555572f8f01)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__Item_1a6db2a4d2002636eb55d50555572f8f01"></a>

Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1a17f51e29c064f75035574daca32521df)`()` <a id="structFRHAPI__Item_1a17f51e29c064f75035574daca32521df"></a>

Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< int32 > * `[`GetCouponDiscountLootOrNull`](#structFRHAPI__Item_1a0cdcce77eef8582cba5a113557d37ced)`() const` <a id="structFRHAPI__Item_1a0cdcce77eef8582cba5a113557d37ced"></a>

Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1a154b0067558f3572562092b46738d566)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__Item_1a154b0067558f3572562092b46738d566"></a>

Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCouponDiscountLoot`](#structFRHAPI__Item_1acfa2809b73752129d0798a17e600b923)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__Item_1acfa2809b73752129d0798a17e600b923"></a>

Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountLoot`](#structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b)`()` <a id="structFRHAPI__Item_1aad4697dea3a8b5b4b0fc08abfb8abf1b"></a>

Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false.

#### `public inline FORCEINLINE TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1ab02a6add51a33e3d9d5486e87f1d77e1)`()` <a id="structFRHAPI__Item_1ab02a6add51a33e3d9d5486e87f1d77e1"></a>

Gets the value of CouponDiscountLootUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a6026a8bb4e3ba4c40bd867744a99bcfb)`() const` <a id="structFRHAPI__Item_1a6026a8bb4e3ba4c40bd867744a99bcfb"></a>

Gets the value of CouponDiscountLootUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a2ed880cf9691b8395939226f83c91457)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__Item_1a2ed880cf9691b8395939226f83c91457"></a>

Gets the value of CouponDiscountLootUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCouponDiscountLootUuid`](#structFRHAPI__Item_1a3c928df5dd22abaf67976a401bc10509)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__Item_1a3c928df5dd22abaf67976a401bc10509"></a>

Fills OutValue with the value of CouponDiscountLootUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FGuid > * `[`GetCouponDiscountLootUuidOrNull`](#structFRHAPI__Item_1a20902a1a0efcee760de1b647a2108812)`()` <a id="structFRHAPI__Item_1a20902a1a0efcee760de1b647a2108812"></a>

Returns a pointer to CouponDiscountLootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FGuid > * `[`GetCouponDiscountLootUuidOrNull`](#structFRHAPI__Item_1a55e7d534ec5ba39771127009d21e21a5)`() const` <a id="structFRHAPI__Item_1a55e7d534ec5ba39771127009d21e21a5"></a>

Returns a pointer to CouponDiscountLootUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCouponDiscountLootUuid`](#structFRHAPI__Item_1ade99a8aca0ee563e1d8f30cf8cbfe33d)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__Item_1ade99a8aca0ee563e1d8f30cf8cbfe33d"></a>

Sets the value of CouponDiscountLootUuid_Optional and also sets CouponDiscountLootUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCouponDiscountLootUuid`](#structFRHAPI__Item_1a0fdf26b1452a7ed148e4d5b2bcd18a7b)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__Item_1a0fdf26b1452a7ed148e4d5b2bcd18a7b"></a>

Sets the value of CouponDiscountLootUuid_Optional and also sets CouponDiscountLootUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearCouponDiscountLootUuid`](#structFRHAPI__Item_1ae15a27df3513971d3a1a02ba5107b357)`()` <a id="structFRHAPI__Item_1ae15a27df3513971d3a1a02ba5107b357"></a>

Clears the value of CouponDiscountLootUuid_Optional and sets CouponDiscountLootUuid_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1a39cb264b8c423ba64e4ef5b8a1b932e3)`()` <a id="structFRHAPI__Item_1a39cb264b8c423ba64e4ef5b8a1b932e3"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1a697dfa94e60b5c2c858afef84dd26fee)`() const` <a id="structFRHAPI__Item_1a697dfa94e60b5c2c858afef84dd26fee"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Item_1af3ca4d418b72834217993f2aecdc637b)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Item_1af3ca4d418b72834217993f2aecdc637b"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Item_1a4f4e99091fecfe5cf08f1c17ee5a166b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Item_1a4f4e99091fecfe5cf08f1c17ee5a166b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1ab12bdb4bea90e3b6b7398fe75ed62c03)`()` <a id="structFRHAPI__Item_1ab12bdb4bea90e3b6b7398fe75ed62c03"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Item_1a45c6eaef118c6ad2df8c97113f10ddf9)`() const` <a id="structFRHAPI__Item_1a45c6eaef118c6ad2df8c97113f10ddf9"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Item_1a5d9e89d2f3ba57a64a9ee1f0efe3d21e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Item_1a5d9e89d2f3ba57a64a9ee1f0efe3d21e"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Item_1a2f8c863b8c49db2075a300d8576fc560)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Item_1a2f8c863b8c49db2075a300d8576fc560"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0)`()` <a id="structFRHAPI__Item_1a8a81e5e596e24291c204b1a28c28a6d0"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Item_1aab7107a53938050b75bdf37a2a3f2a12)`()` <a id="structFRHAPI__Item_1aab7107a53938050b75bdf37a2a3f2a12"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Item_1a73e78c20b74a02c9d3fddae00d19e0f6)`() const` <a id="structFRHAPI__Item_1a73e78c20b74a02c9d3fddae00d19e0f6"></a>

Checks whether CacheInfo_Optional is set to null.

