---
title: RHAPI_PlayerOrderEntryCreateOutput
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderEntryCreateOutput`](#structFRHAPI__PlayerOrderEntryCreateOutput) | Request to create a Player Order Entry.

## struct `FRHAPI_PlayerOrderEntryCreateOutput` <a id="structFRHAPI__PlayerOrderEntryCreateOutput"></a>

```
struct FRHAPI_PlayerOrderEntryCreateOutput
  : public FRHAPI_Model
```

Request to create a Player Order Entry.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab788765b61f7a2bd920079db91c30c79) | 
`public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a24148c2e4a3e3ccfa039b58b4a75f625) | 
`public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3f5eba7c3d7c924eb36a8d08046721c7) | true if LootId_Optional has been set to a value
`public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a118d8395115d624e60f53fe61e561e8e) | true if LootId_Optional has been explicitly set to null
`public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1cb55dac39a53eb1db2875903f6b80af) | Quantity of Inventory.
`public int32 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a755f207b81f248553f0a0efc6265b315) | 
`public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae52f13ff7f3bbce011f45a9b84336444) | true if VendorVersion_Optional has been set to a value
`public bool `[`VendorVersion_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa5404981cc9279310c2c42557b328bca) | true if VendorVersion_Optional has been explicitly set to null
`public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a64a802fad764b71755cc9eb619f0d9a9) | 
`public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a85ff30bc49fc1324d67c62fe6746bb97) | true if VendorEtag_Optional has been set to a value
`public bool `[`VendorEtag_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a497e8e9017d0d2eae58a3aefb9b7e8e4) | true if VendorEtag_Optional has been explicitly set to null
`public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a107c56896b5b6b78425e0f0e0aa6f3eb) | 
`public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3979fe51a5bdbf449c0a411320392064) | true if DynamicBundleLootIds_Optional has been set to a value
`public bool `[`DynamicBundleLootIds_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac83291f35f65d278289a86aa2a4cdb9c) | true if DynamicBundleLootIds_Optional has been explicitly set to null
`public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aec28ce25ba7f09c7d06f27d0f4267670) | 
`public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac31378eee57750da21ebe1ebeb534049) | true if PurchasePrice_Optional has been set to a value
`public bool `[`PurchasePrice_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a76a444dad19cd73ce32e7dac89d4c3e8) | true if PurchasePrice_Optional has been explicitly set to null
`public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9982ed397a4f87ac3f545a32ae62e677) | 
`public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a357b66944da5dde027d8c677d03c10bd) | true if ExternalTranId_Optional has been set to a value
`public bool `[`ExternalTranId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a840fc9fb9ec4021d4e5850fe93815428) | true if ExternalTranId_Optional has been explicitly set to null
`public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d1e0a937dc0b460772ea33b654b8c26) | 
`public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a13126ac848a66bf39c43f75aa65b5996) | true if ExternalItemSku_Optional has been set to a value
`public bool `[`ExternalItemSku_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04f2eff00b4a4991259dc93f2caf7bf2) | true if ExternalItemSku_Optional has been explicitly set to null
`public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0dd9af63ab5994d97ddc860e7642ffb0) | 
`public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9e2bf6c329668ec7fe293d9b2555dba7) | true if UseInventoryBucket_Optional has been set to a value
`public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8c06d2aa9edba4073c1f42107eb4def) | true if UseInventoryBucket_Optional has been explicitly set to null
`public int32 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a55cbccd478fcb07bc246c69cea031199) | 
`public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3e19f59b78a0b92e98597a6a33ee137f) | true if PlayerPortalEventId_Optional has been set to a value
`public bool `[`PlayerPortalEventId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a207f0457c4693a0cf1cacd7cc7a40d41) | true if PlayerPortalEventId_Optional has been explicitly set to null
`public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3bdc04f1441435d1384b4bd6b4ca6210) | 
`public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8148881a0f5da46f1ef5542b46d97c91) | true if InventoryId_Optional has been set to a value
`public bool `[`InventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9e8c4348a0138c70d1e399f0ef6c2a49) | true if InventoryId_Optional has been explicitly set to null
`public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2bdd7c82bc7f2eaff8d13a29d3e5f799) | 
`public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0db9a42975712ece5920752a8ed701d8) | true if LegacyInventoryId_Optional has been set to a value
`public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aad1dbefc9682d5462184b7743d631b41) | true if LegacyInventoryId_Optional has been explicitly set to null
`public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af010439c31f65430418d158b8e3983f3) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac416e9d372cc00a6d5a56165151e2603) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a93fb67b66a5dcd36033cd431d672e976) | true if ItemId_Optional has been explicitly set to null
`public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a014c8b6173a251e39538f5a67ec2aca7) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abca9494fc03845ae9bfaf7481f9bf3cb) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae09f22404c85b4d94a39a1db84a9ba10) | true if Expires_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a60c6bb8e54be407aa4e6d7a2c091a1f6) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af2374a9f9e6bab06d7a4b5aa9ea3b838) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac78572f353e00b2d00f1c7f4ea10c81a) | true if CustomData_Optional has been explicitly set to null
`public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a79a93b8fb4a655fe7cd4540c5a806839) | 
`public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abe2eb1d0687281f0de5b45c4258787c0) | true if EntryId_Optional has been set to a value
`public bool `[`EntryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f5c098183d636edcbd090d3ca2ca5fc) | true if EntryId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab8597e29a16b420d1bd8f8e5c2b194f6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a411f3b4ce7109667bbb8760e35b578e1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a470b8aa8969d12052bce9cd8c5f9a202)`()` | Gets the value of Type.
`public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0e2d2844d24311858cf5e7ab51a72387)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae157b785f1716b7844be59c34c928400)`(const ERHAPI_PlayerOrderEntryType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4ea5334414229b886cf990417f9aee3e)`(ERHAPI_PlayerOrderEntryType && NewValue)` | Sets the value of Type using move semantics.
`public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a96be1eede4cf9e3926638823d17fdba2)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad6ee21abe8bb6d807cb37eaf6364e944)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0723661fe4cea0ebd32733cf729f3538)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a951d87260736735b2d6bf5a70f9479d4)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aacc00e3746213c3bb674ef0430f21055)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a19dd4db80341e83b47f3a8ff57a1f509)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d9739e45bcb45419df4565ef6bed243)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a809fc98d0b7f0a533f48eb1833ba0d46)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab7af9a69745838d900eed9d7397b3ab4)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a51c949657d9639071bfc4babe50b94b9)`() const` | Checks whether LootId_Optional has been set.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb6288df45a880a804777bb5d2615b8a)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab106c74dbc82bf579678fbb7590a7e95)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5abb5e825fe32100f8674baca58ec4e3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab0d4242f947a211f9bba2c45b1e58b68)`() const` | Checks whether LootId_Optional is set to null.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8c6387f7168c19df2b1ad6b8a85ee8be)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a28645e24cc32acb1edde736b78bcc066)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a52b25e0dbd49f80f5ffb3bfa32e6e707)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab18cf55f037b1735ad72073d115d2e77)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a963f33cfda1de9f451a69863172baa8e)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a62f8ac61ed606889d583c4f10c88f128)`()` | Sets the value of Quantity to its default
`public inline int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afde7b734963b08132fdfc2ce22dea4af)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af07a8ddf93de2a9879dc2e3117dbbe03)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a865242a916fb8aac7ad7c5a9dee12201)`(const int32 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a822a2a16c57660759b854274ebffb244)`(int32 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aec97f1a10f82b092abc78c9ace4d22fb)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa626b526fce4c2cb8484fd4f53a962c1)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a92e85df304350cfd9c90b3e30c36d2e3)`(const int32 & NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a457ee0e1f341f577680942c1accebd11)`(int32 && NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a99fe2b496ead851f3fbb21d2f77e0f7a)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline bool `[`IsVendorVersionSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6cb27b6519785dc9301d7ec8f97ba6ab)`() const` | Checks whether VendorVersion_Optional has been set.
`public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac05254fd1d5d2263b437c6f595d4a8e7)`() const` | Returns true if VendorVersion_Optional is set and matches the default value.
`public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad5e448ee0a0a84ae97a99a56976ae0bd)`()` | Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.
`public inline void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af61367d4f6ef462c96fb84a6efa34fe7)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3732171b1d7fb708ae4a34935b24c6b8)`() const` | Checks whether VendorVersion_Optional is set to null.
`public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af9086929933ac9a919fc3e0efe0f708e)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac33e397384a0c4a307aa4646dfc660ef)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5ab571588201dc4f6a33c581e1cfa31d)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af97fb93482bee7a0232dd30844644ca6)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad619f1319a7471d83da5e55c481d62d7)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4078683328c9784a38d7f84b67bf8c2f)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a78744f29e4bbd3aed5df41fb46484f21)`(const FString & NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0c591649d926658733f0653abd15db32)`(FString && NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9d2f925ddd396b4e0e472570907af62b)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline bool `[`IsVendorEtagSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af1f4b087701f99a08061a23cde78aef1)`() const` | Checks whether VendorEtag_Optional has been set.
`public inline void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7f92af1049ee7896d1b4a120ccfacb13)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a42eeb9f608ab804e00f748b300387e0c)`() const` | Checks whether VendorEtag_Optional is set to null.
`public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a80fa55b76b097e9b90471b562f3ff26f)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aabaa398dbc2b3b150f1087fc5ef3ea65)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1addb6d8a721ad4a635f1e7854b22cd1ea)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af512946bb03ce055823329d70c426faa)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f07d94285d75b763c27806ac30a6cee)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abf765f3c3651c777e2217a44420605d5)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7480fdc9d541abdb2a7ed87fb5c97dbe)`(const TArray< int32 > & NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a62190debe63a343fb317a188ea00e6fa)`(TArray< int32 > && NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8d2c0b2a02505d9829df31f5f2ceaa5)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline bool `[`IsDynamicBundleLootIdsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a29a8ad1307e72bcf08898e9e29e1ef45)`() const` | Checks whether DynamicBundleLootIds_Optional has been set.
`public inline void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac3f49f6fc7e6880c3f02b1e109eeb7d5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1add40bd4216c04c128f9ec0a0a7081fcf)`() const` | Checks whether DynamicBundleLootIds_Optional is set to null.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6fefb0d59baeab0fcae835ebe95119ef)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2e9efd2bdea3f87803d643b74766e346)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a28198e88c590856a4daab5c763580fce)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a29546d04ba7a68c4a1b5a47edeb8db8d)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7518310114064972aad4f1dfd19193a1)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac5cd89feeaa89a449e81cd774a67da80)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1addf2376617cd0307833bee42c4d0a498)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb11a62303e4c337d168335d6c991bbd)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aaba05cd5ffa2fd7ba53e52aa57fa2568)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline bool `[`IsPurchasePriceSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4e02211e5908a0c071e08da6604aa8bd)`() const` | Checks whether PurchasePrice_Optional has been set.
`public inline void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abbba447316f398681b6948315f3cb47c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1cabd271bcb13b1325068e552d200868)`() const` | Checks whether PurchasePrice_Optional is set to null.
`public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a15583dd490ec6a9b8fc452164cb8973e)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab1edc2563ebaf3b097769d2a65c4759c)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abeecb925a77ca797cd6156f3fdf4c38d)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad36a3e838765b5c9ac09c8013cfc6612)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac9fd71da1bcefa672d53d5187ab94fc0)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a58cf1b8b60ec2b59ff4d07c937a3e03f)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a884e4c51284888d7b836b0f489a03492)`(const FString & NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a166e2edc6fd72ddf921993fec279de0d)`(FString && NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a71b1cc14f8ffba45f332e7cd1ef60440)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline bool `[`IsExternalTranIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3410ac58ae0234400fc3cabcb17bf419)`() const` | Checks whether ExternalTranId_Optional has been set.
`public inline void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4aec7c9056eefc7826361ee83dd30e6a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac72f1eb2d224420666c149bbe51e5dfd)`() const` | Checks whether ExternalTranId_Optional is set to null.
`public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afeee9374df68dbd39b0f31a262c15a6d)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6d378b8c9cc9644e049eb0f84d16b333)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae227e66f6019b67883c1bc541c24f74c)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a584cdb10e0d8839a5c421ca0a97dd3c2)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a669e66f1e23b36001b5fb8554c76f66c)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6ba3461018ae220d931b344d7a1a3300)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad2f5bca164db7b007777b4fbc2e5cfd0)`(const FString & NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3fa1283ac03d709c69f30cb7ac4c93b5)`(FString && NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae496d73de191d06ce33d8e8c78743d06)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline bool `[`IsExternalItemSkuSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad36f151fd1de28c47c5d338fce9df69d)`() const` | Checks whether ExternalItemSku_Optional has been set.
`public inline void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1add4a40992e75989f52ce8a27fdb1d053)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af33b3ee62500e2d88036eb11a8253bc6)`() const` | Checks whether ExternalItemSku_Optional is set to null.
`public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afc1f97367d4b93ffafc60f33bba0e01f)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac4f19bc79b73231e431d47659f862998)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a70708cdb3ffbd21f958aff4210b9aa0c)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9ba9f2cf96c36c7f047b6ce78e4930ba)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a378ddd51c1308d7ed53edc303308f8f7)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af7ecc3536b9c4988f789609bbbe92882)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1f57ffe05b70d470add5f50a0e07ccce)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a84012b4278fbcbcf12b68445ed5a1750)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afd1f948313e415699d36bfd9ade9c4dd)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa5de7379036091c9e364668d317b8119)`() const` | Checks whether UseInventoryBucket_Optional has been set.
`public inline void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04e0333fcbe05613d056ee2c0390c4e8)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a285835fd22923ccd4d8deb23e5bfadee)`() const` | Checks whether UseInventoryBucket_Optional is set to null.
`public inline int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4f64dcc5a32062ee6981d15ab1f3b8f6)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a768a673d14f9705f78959879297f72bb)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a18f5ef109e62f4c10594428fdfa19e3c)`(const int32 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae8d87a0369fb98ee2cafb9fcfb229e98)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb34e279f515ed67f73f95139a7e039e)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeebbec786b1d571f7d84d4a124441ac1)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abe91e7307af5e6b610c24e43e60b44b6)`(const int32 & NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a816e711874c3cdddc29bbd38364bd671)`(int32 && NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a56363a6d6b7461f39708a7b55416ef55)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline bool `[`IsPlayerPortalEventIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5d158e41124dfb428e91309e0c556d56)`() const` | Checks whether PlayerPortalEventId_Optional has been set.
`public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a25d8694f4b0f20b200a78ff5493f551c)`() const` | Returns true if PlayerPortalEventId_Optional is set and matches the default value.
`public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a22212064e41d2566e68bdaffd2019c46)`()` | Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7537e06a91d48cf42065ed36df6f1d7b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac2abf810087a74d5d21281699adf4f87)`() const` | Checks whether PlayerPortalEventId_Optional is set to null.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a94ea0f2132b53d8e85b9760990745c8e)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0e268fb845dd2c80ebd26bc5e57c112c)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aac037e54255d6c55bfe03fdd3d45f3e0)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4fe944db546907cefc76c14d4735f08f)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac70abc7e61cd5f13b33a72f3b69ba099)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adfe179585afd3bf978552fcf011ae405)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7ef0729e0c0a4d9f29220fc27477501c)`(const FGuid & NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af55ec64467128f67535e8519aac978a8)`(FGuid && NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a49dda4886adaacddc546c3377fdb0758)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline bool `[`IsInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af50f575ad5e1eb2c7e04dbd8dcbcbae6)`() const` | Checks whether InventoryId_Optional has been set.
`public inline void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a364e523d8439761edfcda61fed96658a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a584085ebbac32e965bdc48847b69f466)`() const` | Checks whether InventoryId_Optional is set to null.
`public inline int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3307b71b6c5067b1690ea439b98ea430)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2460cbf26931f0eb82982bc78ecb24c8)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae75a5604ca5535f877625eb01bc4670d)`(const int32 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac6d45cf00af0954103d898de5fe9c955)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7283f24bb2fadeee9e48144841a3be50)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a58f421800ad2e40ccc6cdf0320c1c743)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac0d28a1c05c45424278a89749cf16b1f)`(const int32 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6420242bd73e10a735488bdf6a10612c)`(int32 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae6b325f3f8d2f280df487eadf405948e)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0b0b1bc327e4b6acbdea94c043c72e03)`() const` | Checks whether LegacyInventoryId_Optional has been set.
`public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a88f1be3e9988ecca32039d42ea17dc6a)`() const` | Returns true if LegacyInventoryId_Optional is set and matches the default value.
`public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a50262159296dc89b0cc0cb232d6966e8)`()` | Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb723acb20b91bfd0d964ad9afbb3dbd)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4660779c9bcf5ed008dc73193b614493)`() const` | Checks whether LegacyInventoryId_Optional is set to null.
`public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab9992011f5a5a8e26d3325b19f0ae880)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2379b90dc140eb269bd7592a9dda76d4)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9285dabfcdd5674c0bb84d34b80b781f)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa9999b2075969cad1ee0ac740f1f6ab5)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8f01c3c5962e8c5a0fdf105d52c48512)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a72beb046c1a254fac3c14cbf577d6bad)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a87962ef9133f34146ce274a3895de250)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d6e16bb862521bbcf3d085cc9d82ce5)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae910eda3382428e86d6ccbdc1481b122)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a015457af0a54a70f7fd9612290dedd14)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a355c33aa9764bd6cbc9afc617be8d3d0)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2b01f580a1a43e7edfc46a748ff446c8)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a544a46cb20da8b4e489131aee9e91c12)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afce2fe6f347a80d5a4c1d49687cdc4d7)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afcbdf3f2013c7d91d7ab0ed09771ea62)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac5a28124408913fe17cf891a53b47fc3)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a10270ffce7c3224d4c6a5a5169c6aa0d)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a45105ecacd737409a765eeefb3df62f7)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9689031f4b4c5957284db36888a89b68)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac27484d609aba94c63e874101aeab66a)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a78b6b23c9dbca217918af206e2d9242d)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d8a5e42d12ac755dc750eed60384dec)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2d1dfbd1f39ec4940f36e281c09b1e22)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline bool `[`IsExpiresSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5d1f19a624d4be49fa1c6d2e86e7c3b5)`() const` | Checks whether Expires_Optional has been set.
`public inline void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa6bf1b9b68547b1cb84bd5af259fb1a7)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab8a0fd65c72b3a3043fa172a71d14f68)`() const` | Checks whether Expires_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab4e230fdbff0fe048ae183225b5f9bec)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae6574438962b9754f6c37c70e09e3f0d)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1b7bc9380990e912670381674a2b926b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a662e6f093bc6d62476e0af2360f3ba78)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abb252b7b0442dfc3ed0cc5ed36467576)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa6dd88cc7902dbcd008f9f3a249f072c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a53a1e835bc34ab8e4dcc989a800bf573)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1980491ad5b269502e975149193e4dad)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f650b6f47cea84f8ad1a3996a756915)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeb811747a2958c55e11587f5f0620588)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af0e285ed364ad3b4236ac3cbe7dd2e76)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5aa6251782e76eb6e76f5ec54756c7cf)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac1cc091e93af4b8450da1bbfb2440d25)`()` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0a26ab5ff6653f2aeaea377669d2f188)`() const` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7d53cee22a2635e51f2f4083730ee357)`(const FString & DefaultValue) const` | Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abdb33600110fd13384aba35f415277c8)`(FString & OutValue) const` | Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aaed4d3e28c507fdf44f51c2a9521cd4d)`()` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af3b9ecefd6da61a461de022173fca627)`() const` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab19fe2e9d003c6d2b3603890460e6ad4)`(const FString & NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afa76a36054ed7c219abf8c360602d914)`(FString && NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.
`public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a42bee7218f7b474a1749f2cd449ab48e)`()` | Clears the value of EntryId_Optional and sets EntryId_IsSet to false.
`public inline bool `[`IsEntryIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac96c31362a81d718172d190b786775fc)`() const` | Checks whether EntryId_Optional has been set.
`public inline void `[`SetEntryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5375f7f6214bcd50a995aab2336301de)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEntryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac0b1de79b53d1a2e99c03cb7745b3f8c)`() const` | Checks whether EntryId_Optional is set to null.

### Members

#### `public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab788765b61f7a2bd920079db91c30c79) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab788765b61f7a2bd920079db91c30c79"></a>

#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a24148c2e4a3e3ccfa039b58b4a75f625) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a24148c2e4a3e3ccfa039b58b4a75f625"></a>

#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3f5eba7c3d7c924eb36a8d08046721c7) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3f5eba7c3d7c924eb36a8d08046721c7"></a>

true if LootId_Optional has been set to a value

#### `public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a118d8395115d624e60f53fe61e561e8e) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a118d8395115d624e60f53fe61e561e8e"></a>

true if LootId_Optional has been explicitly set to null

#### `public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1cb55dac39a53eb1db2875903f6b80af) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1cb55dac39a53eb1db2875903f6b80af"></a>

Quantity of Inventory.

#### `public int32 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a755f207b81f248553f0a0efc6265b315) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a755f207b81f248553f0a0efc6265b315"></a>

#### `public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae52f13ff7f3bbce011f45a9b84336444) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae52f13ff7f3bbce011f45a9b84336444"></a>

true if VendorVersion_Optional has been set to a value

#### `public bool `[`VendorVersion_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa5404981cc9279310c2c42557b328bca) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa5404981cc9279310c2c42557b328bca"></a>

true if VendorVersion_Optional has been explicitly set to null

#### `public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a64a802fad764b71755cc9eb619f0d9a9) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a64a802fad764b71755cc9eb619f0d9a9"></a>

#### `public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a85ff30bc49fc1324d67c62fe6746bb97) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a85ff30bc49fc1324d67c62fe6746bb97"></a>

true if VendorEtag_Optional has been set to a value

#### `public bool `[`VendorEtag_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a497e8e9017d0d2eae58a3aefb9b7e8e4) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a497e8e9017d0d2eae58a3aefb9b7e8e4"></a>

true if VendorEtag_Optional has been explicitly set to null

#### `public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a107c56896b5b6b78425e0f0e0aa6f3eb) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a107c56896b5b6b78425e0f0e0aa6f3eb"></a>

#### `public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3979fe51a5bdbf449c0a411320392064) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3979fe51a5bdbf449c0a411320392064"></a>

true if DynamicBundleLootIds_Optional has been set to a value

#### `public bool `[`DynamicBundleLootIds_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac83291f35f65d278289a86aa2a4cdb9c) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac83291f35f65d278289a86aa2a4cdb9c"></a>

true if DynamicBundleLootIds_Optional has been explicitly set to null

#### `public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aec28ce25ba7f09c7d06f27d0f4267670) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aec28ce25ba7f09c7d06f27d0f4267670"></a>

#### `public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac31378eee57750da21ebe1ebeb534049) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac31378eee57750da21ebe1ebeb534049"></a>

true if PurchasePrice_Optional has been set to a value

#### `public bool `[`PurchasePrice_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a76a444dad19cd73ce32e7dac89d4c3e8) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a76a444dad19cd73ce32e7dac89d4c3e8"></a>

true if PurchasePrice_Optional has been explicitly set to null

#### `public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9982ed397a4f87ac3f545a32ae62e677) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9982ed397a4f87ac3f545a32ae62e677"></a>

#### `public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a357b66944da5dde027d8c677d03c10bd) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a357b66944da5dde027d8c677d03c10bd"></a>

true if ExternalTranId_Optional has been set to a value

#### `public bool `[`ExternalTranId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a840fc9fb9ec4021d4e5850fe93815428) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a840fc9fb9ec4021d4e5850fe93815428"></a>

true if ExternalTranId_Optional has been explicitly set to null

#### `public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d1e0a937dc0b460772ea33b654b8c26) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4d1e0a937dc0b460772ea33b654b8c26"></a>

#### `public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a13126ac848a66bf39c43f75aa65b5996) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a13126ac848a66bf39c43f75aa65b5996"></a>

true if ExternalItemSku_Optional has been set to a value

#### `public bool `[`ExternalItemSku_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04f2eff00b4a4991259dc93f2caf7bf2) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a04f2eff00b4a4991259dc93f2caf7bf2"></a>

true if ExternalItemSku_Optional has been explicitly set to null

#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0dd9af63ab5994d97ddc860e7642ffb0) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0dd9af63ab5994d97ddc860e7642ffb0"></a>

#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9e2bf6c329668ec7fe293d9b2555dba7) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9e2bf6c329668ec7fe293d9b2555dba7"></a>

true if UseInventoryBucket_Optional has been set to a value

#### `public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8c06d2aa9edba4073c1f42107eb4def) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af8c06d2aa9edba4073c1f42107eb4def"></a>

true if UseInventoryBucket_Optional has been explicitly set to null

#### `public int32 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a55cbccd478fcb07bc246c69cea031199) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a55cbccd478fcb07bc246c69cea031199"></a>

#### `public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3e19f59b78a0b92e98597a6a33ee137f) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3e19f59b78a0b92e98597a6a33ee137f"></a>

true if PlayerPortalEventId_Optional has been set to a value

#### `public bool `[`PlayerPortalEventId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a207f0457c4693a0cf1cacd7cc7a40d41) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a207f0457c4693a0cf1cacd7cc7a40d41"></a>

true if PlayerPortalEventId_Optional has been explicitly set to null

#### `public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3bdc04f1441435d1384b4bd6b4ca6210) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3bdc04f1441435d1384b4bd6b4ca6210"></a>

#### `public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8148881a0f5da46f1ef5542b46d97c91) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8148881a0f5da46f1ef5542b46d97c91"></a>

true if InventoryId_Optional has been set to a value

#### `public bool `[`InventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9e8c4348a0138c70d1e399f0ef6c2a49) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9e8c4348a0138c70d1e399f0ef6c2a49"></a>

true if InventoryId_Optional has been explicitly set to null

#### `public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2bdd7c82bc7f2eaff8d13a29d3e5f799) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2bdd7c82bc7f2eaff8d13a29d3e5f799"></a>

#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0db9a42975712ece5920752a8ed701d8) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0db9a42975712ece5920752a8ed701d8"></a>

true if LegacyInventoryId_Optional has been set to a value

#### `public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aad1dbefc9682d5462184b7743d631b41) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aad1dbefc9682d5462184b7743d631b41"></a>

true if LegacyInventoryId_Optional has been explicitly set to null

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af010439c31f65430418d158b8e3983f3) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af010439c31f65430418d158b8e3983f3"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac416e9d372cc00a6d5a56165151e2603) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac416e9d372cc00a6d5a56165151e2603"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a93fb67b66a5dcd36033cd431d672e976) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a93fb67b66a5dcd36033cd431d672e976"></a>

true if ItemId_Optional has been explicitly set to null

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a014c8b6173a251e39538f5a67ec2aca7) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a014c8b6173a251e39538f5a67ec2aca7"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abca9494fc03845ae9bfaf7481f9bf3cb) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abca9494fc03845ae9bfaf7481f9bf3cb"></a>

true if Expires_Optional has been set to a value

#### `public bool `[`Expires_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae09f22404c85b4d94a39a1db84a9ba10) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae09f22404c85b4d94a39a1db84a9ba10"></a>

true if Expires_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a60c6bb8e54be407aa4e6d7a2c091a1f6) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a60c6bb8e54be407aa4e6d7a2c091a1f6"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af2374a9f9e6bab06d7a4b5aa9ea3b838) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af2374a9f9e6bab06d7a4b5aa9ea3b838"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac78572f353e00b2d00f1c7f4ea10c81a) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac78572f353e00b2d00f1c7f4ea10c81a"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a79a93b8fb4a655fe7cd4540c5a806839) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a79a93b8fb4a655fe7cd4540c5a806839"></a>

#### `public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abe2eb1d0687281f0de5b45c4258787c0) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abe2eb1d0687281f0de5b45c4258787c0"></a>

true if EntryId_Optional has been set to a value

#### `public bool `[`EntryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f5c098183d636edcbd090d3ca2ca5fc) <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2f5c098183d636edcbd090d3ca2ca5fc"></a>

true if EntryId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab8597e29a16b420d1bd8f8e5c2b194f6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab8597e29a16b420d1bd8f8e5c2b194f6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a411f3b4ce7109667bbb8760e35b578e1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a411f3b4ce7109667bbb8760e35b578e1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a470b8aa8969d12052bce9cd8c5f9a202)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a470b8aa8969d12052bce9cd8c5f9a202"></a>

Gets the value of Type.

#### `public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0e2d2844d24311858cf5e7ab51a72387)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0e2d2844d24311858cf5e7ab51a72387"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae157b785f1716b7844be59c34c928400)`(const ERHAPI_PlayerOrderEntryType & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae157b785f1716b7844be59c34c928400"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4ea5334414229b886cf990417f9aee3e)`(ERHAPI_PlayerOrderEntryType && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4ea5334414229b886cf990417f9aee3e"></a>

Sets the value of Type using move semantics.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a96be1eede4cf9e3926638823d17fdba2)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a96be1eede4cf9e3926638823d17fdba2"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad6ee21abe8bb6d807cb37eaf6364e944)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad6ee21abe8bb6d807cb37eaf6364e944"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0723661fe4cea0ebd32733cf729f3538)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0723661fe4cea0ebd32733cf729f3538"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a951d87260736735b2d6bf5a70f9479d4)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a951d87260736735b2d6bf5a70f9479d4"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aacc00e3746213c3bb674ef0430f21055)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aacc00e3746213c3bb674ef0430f21055"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a19dd4db80341e83b47f3a8ff57a1f509)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a19dd4db80341e83b47f3a8ff57a1f509"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d9739e45bcb45419df4565ef6bed243)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4d9739e45bcb45419df4565ef6bed243"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a809fc98d0b7f0a533f48eb1833ba0d46)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a809fc98d0b7f0a533f48eb1833ba0d46"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab7af9a69745838d900eed9d7397b3ab4)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab7af9a69745838d900eed9d7397b3ab4"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a51c949657d9639071bfc4babe50b94b9)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a51c949657d9639071bfc4babe50b94b9"></a>

Checks whether LootId_Optional has been set.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb6288df45a880a804777bb5d2615b8a)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1adb6288df45a880a804777bb5d2615b8a"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab106c74dbc82bf579678fbb7590a7e95)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab106c74dbc82bf579678fbb7590a7e95"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5abb5e825fe32100f8674baca58ec4e3)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5abb5e825fe32100f8674baca58ec4e3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab0d4242f947a211f9bba2c45b1e58b68)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab0d4242f947a211f9bba2c45b1e58b68"></a>

Checks whether LootId_Optional is set to null.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8c6387f7168c19df2b1ad6b8a85ee8be)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8c6387f7168c19df2b1ad6b8a85ee8be"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a28645e24cc32acb1edde736b78bcc066)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a28645e24cc32acb1edde736b78bcc066"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a52b25e0dbd49f80f5ffb3bfa32e6e707)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a52b25e0dbd49f80f5ffb3bfa32e6e707"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab18cf55f037b1735ad72073d115d2e77)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab18cf55f037b1735ad72073d115d2e77"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a963f33cfda1de9f451a69863172baa8e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a963f33cfda1de9f451a69863172baa8e"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a62f8ac61ed606889d583c4f10c88f128)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a62f8ac61ed606889d583c4f10c88f128"></a>

Sets the value of Quantity to its default

#### `public inline int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afde7b734963b08132fdfc2ce22dea4af)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afde7b734963b08132fdfc2ce22dea4af"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af07a8ddf93de2a9879dc2e3117dbbe03)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af07a8ddf93de2a9879dc2e3117dbbe03"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a865242a916fb8aac7ad7c5a9dee12201)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a865242a916fb8aac7ad7c5a9dee12201"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a822a2a16c57660759b854274ebffb244)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a822a2a16c57660759b854274ebffb244"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aec97f1a10f82b092abc78c9ace4d22fb)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aec97f1a10f82b092abc78c9ace4d22fb"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa626b526fce4c2cb8484fd4f53a962c1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa626b526fce4c2cb8484fd4f53a962c1"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a92e85df304350cfd9c90b3e30c36d2e3)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a92e85df304350cfd9c90b3e30c36d2e3"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a457ee0e1f341f577680942c1accebd11)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a457ee0e1f341f577680942c1accebd11"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a99fe2b496ead851f3fbb21d2f77e0f7a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a99fe2b496ead851f3fbb21d2f77e0f7a"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

#### `public inline bool `[`IsVendorVersionSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6cb27b6519785dc9301d7ec8f97ba6ab)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6cb27b6519785dc9301d7ec8f97ba6ab"></a>

Checks whether VendorVersion_Optional has been set.

#### `public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac05254fd1d5d2263b437c6f595d4a8e7)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac05254fd1d5d2263b437c6f595d4a8e7"></a>

Returns true if VendorVersion_Optional is set and matches the default value.

#### `public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad5e448ee0a0a84ae97a99a56976ae0bd)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad5e448ee0a0a84ae97a99a56976ae0bd"></a>

Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.

#### `public inline void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af61367d4f6ef462c96fb84a6efa34fe7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af61367d4f6ef462c96fb84a6efa34fe7"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3732171b1d7fb708ae4a34935b24c6b8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3732171b1d7fb708ae4a34935b24c6b8"></a>

Checks whether VendorVersion_Optional is set to null.

#### `public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af9086929933ac9a919fc3e0efe0f708e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af9086929933ac9a919fc3e0efe0f708e"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac33e397384a0c4a307aa4646dfc660ef)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac33e397384a0c4a307aa4646dfc660ef"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5ab571588201dc4f6a33c581e1cfa31d)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5ab571588201dc4f6a33c581e1cfa31d"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af97fb93482bee7a0232dd30844644ca6)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af97fb93482bee7a0232dd30844644ca6"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad619f1319a7471d83da5e55c481d62d7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad619f1319a7471d83da5e55c481d62d7"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4078683328c9784a38d7f84b67bf8c2f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4078683328c9784a38d7f84b67bf8c2f"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a78744f29e4bbd3aed5df41fb46484f21)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a78744f29e4bbd3aed5df41fb46484f21"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0c591649d926658733f0653abd15db32)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0c591649d926658733f0653abd15db32"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9d2f925ddd396b4e0e472570907af62b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9d2f925ddd396b4e0e472570907af62b"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

#### `public inline bool `[`IsVendorEtagSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af1f4b087701f99a08061a23cde78aef1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af1f4b087701f99a08061a23cde78aef1"></a>

Checks whether VendorEtag_Optional has been set.

#### `public inline void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7f92af1049ee7896d1b4a120ccfacb13)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7f92af1049ee7896d1b4a120ccfacb13"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a42eeb9f608ab804e00f748b300387e0c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a42eeb9f608ab804e00f748b300387e0c"></a>

Checks whether VendorEtag_Optional is set to null.

#### `public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a80fa55b76b097e9b90471b562f3ff26f)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a80fa55b76b097e9b90471b562f3ff26f"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aabaa398dbc2b3b150f1087fc5ef3ea65)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aabaa398dbc2b3b150f1087fc5ef3ea65"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1addb6d8a721ad4a635f1e7854b22cd1ea)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1addb6d8a721ad4a635f1e7854b22cd1ea"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af512946bb03ce055823329d70c426faa)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af512946bb03ce055823329d70c426faa"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f07d94285d75b763c27806ac30a6cee)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2f07d94285d75b763c27806ac30a6cee"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abf765f3c3651c777e2217a44420605d5)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abf765f3c3651c777e2217a44420605d5"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7480fdc9d541abdb2a7ed87fb5c97dbe)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7480fdc9d541abdb2a7ed87fb5c97dbe"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a62190debe63a343fb317a188ea00e6fa)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a62190debe63a343fb317a188ea00e6fa"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.

#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af8d2c0b2a02505d9829df31f5f2ceaa5)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af8d2c0b2a02505d9829df31f5f2ceaa5"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

#### `public inline bool `[`IsDynamicBundleLootIdsSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a29a8ad1307e72bcf08898e9e29e1ef45)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a29a8ad1307e72bcf08898e9e29e1ef45"></a>

Checks whether DynamicBundleLootIds_Optional has been set.

#### `public inline void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac3f49f6fc7e6880c3f02b1e109eeb7d5)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac3f49f6fc7e6880c3f02b1e109eeb7d5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1add40bd4216c04c128f9ec0a0a7081fcf)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1add40bd4216c04c128f9ec0a0a7081fcf"></a>

Checks whether DynamicBundleLootIds_Optional is set to null.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6fefb0d59baeab0fcae835ebe95119ef)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6fefb0d59baeab0fcae835ebe95119ef"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2e9efd2bdea3f87803d643b74766e346)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2e9efd2bdea3f87803d643b74766e346"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a28198e88c590856a4daab5c763580fce)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a28198e88c590856a4daab5c763580fce"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a29546d04ba7a68c4a1b5a47edeb8db8d)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a29546d04ba7a68c4a1b5a47edeb8db8d"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7518310114064972aad4f1dfd19193a1)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7518310114064972aad4f1dfd19193a1"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac5cd89feeaa89a449e81cd774a67da80)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac5cd89feeaa89a449e81cd774a67da80"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1addf2376617cd0307833bee42c4d0a498)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1addf2376617cd0307833bee42c4d0a498"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb11a62303e4c337d168335d6c991bbd)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1adb11a62303e4c337d168335d6c991bbd"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.

#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aaba05cd5ffa2fd7ba53e52aa57fa2568)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aaba05cd5ffa2fd7ba53e52aa57fa2568"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

#### `public inline bool `[`IsPurchasePriceSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4e02211e5908a0c071e08da6604aa8bd)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4e02211e5908a0c071e08da6604aa8bd"></a>

Checks whether PurchasePrice_Optional has been set.

#### `public inline void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abbba447316f398681b6948315f3cb47c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abbba447316f398681b6948315f3cb47c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1cabd271bcb13b1325068e552d200868)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1cabd271bcb13b1325068e552d200868"></a>

Checks whether PurchasePrice_Optional is set to null.

#### `public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a15583dd490ec6a9b8fc452164cb8973e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a15583dd490ec6a9b8fc452164cb8973e"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab1edc2563ebaf3b097769d2a65c4759c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab1edc2563ebaf3b097769d2a65c4759c"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abeecb925a77ca797cd6156f3fdf4c38d)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abeecb925a77ca797cd6156f3fdf4c38d"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad36a3e838765b5c9ac09c8013cfc6612)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad36a3e838765b5c9ac09c8013cfc6612"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac9fd71da1bcefa672d53d5187ab94fc0)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac9fd71da1bcefa672d53d5187ab94fc0"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a58cf1b8b60ec2b59ff4d07c937a3e03f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a58cf1b8b60ec2b59ff4d07c937a3e03f"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a884e4c51284888d7b836b0f489a03492)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a884e4c51284888d7b836b0f489a03492"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a166e2edc6fd72ddf921993fec279de0d)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a166e2edc6fd72ddf921993fec279de0d"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a71b1cc14f8ffba45f332e7cd1ef60440)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a71b1cc14f8ffba45f332e7cd1ef60440"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

#### `public inline bool `[`IsExternalTranIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3410ac58ae0234400fc3cabcb17bf419)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3410ac58ae0234400fc3cabcb17bf419"></a>

Checks whether ExternalTranId_Optional has been set.

#### `public inline void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4aec7c9056eefc7826361ee83dd30e6a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4aec7c9056eefc7826361ee83dd30e6a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac72f1eb2d224420666c149bbe51e5dfd)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac72f1eb2d224420666c149bbe51e5dfd"></a>

Checks whether ExternalTranId_Optional is set to null.

#### `public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afeee9374df68dbd39b0f31a262c15a6d)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afeee9374df68dbd39b0f31a262c15a6d"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6d378b8c9cc9644e049eb0f84d16b333)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6d378b8c9cc9644e049eb0f84d16b333"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae227e66f6019b67883c1bc541c24f74c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae227e66f6019b67883c1bc541c24f74c"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a584cdb10e0d8839a5c421ca0a97dd3c2)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a584cdb10e0d8839a5c421ca0a97dd3c2"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a669e66f1e23b36001b5fb8554c76f66c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a669e66f1e23b36001b5fb8554c76f66c"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6ba3461018ae220d931b344d7a1a3300)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6ba3461018ae220d931b344d7a1a3300"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad2f5bca164db7b007777b4fbc2e5cfd0)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad2f5bca164db7b007777b4fbc2e5cfd0"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3fa1283ac03d709c69f30cb7ac4c93b5)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3fa1283ac03d709c69f30cb7ac4c93b5"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae496d73de191d06ce33d8e8c78743d06)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae496d73de191d06ce33d8e8c78743d06"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

#### `public inline bool `[`IsExternalItemSkuSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ad36f151fd1de28c47c5d338fce9df69d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ad36f151fd1de28c47c5d338fce9df69d"></a>

Checks whether ExternalItemSku_Optional has been set.

#### `public inline void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1add4a40992e75989f52ce8a27fdb1d053)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1add4a40992e75989f52ce8a27fdb1d053"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af33b3ee62500e2d88036eb11a8253bc6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af33b3ee62500e2d88036eb11a8253bc6"></a>

Checks whether ExternalItemSku_Optional is set to null.

#### `public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afc1f97367d4b93ffafc60f33bba0e01f)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afc1f97367d4b93ffafc60f33bba0e01f"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac4f19bc79b73231e431d47659f862998)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac4f19bc79b73231e431d47659f862998"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a70708cdb3ffbd21f958aff4210b9aa0c)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a70708cdb3ffbd21f958aff4210b9aa0c"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9ba9f2cf96c36c7f047b6ce78e4930ba)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9ba9f2cf96c36c7f047b6ce78e4930ba"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a378ddd51c1308d7ed53edc303308f8f7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a378ddd51c1308d7ed53edc303308f8f7"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af7ecc3536b9c4988f789609bbbe92882)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af7ecc3536b9c4988f789609bbbe92882"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1f57ffe05b70d470add5f50a0e07ccce)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1f57ffe05b70d470add5f50a0e07ccce"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a84012b4278fbcbcf12b68445ed5a1750)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a84012b4278fbcbcf12b68445ed5a1750"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afd1f948313e415699d36bfd9ade9c4dd)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afd1f948313e415699d36bfd9ade9c4dd"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa5de7379036091c9e364668d317b8119)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa5de7379036091c9e364668d317b8119"></a>

Checks whether UseInventoryBucket_Optional has been set.

#### `public inline void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a04e0333fcbe05613d056ee2c0390c4e8)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a04e0333fcbe05613d056ee2c0390c4e8"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a285835fd22923ccd4d8deb23e5bfadee)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a285835fd22923ccd4d8deb23e5bfadee"></a>

Checks whether UseInventoryBucket_Optional is set to null.

#### `public inline int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4f64dcc5a32062ee6981d15ab1f3b8f6)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4f64dcc5a32062ee6981d15ab1f3b8f6"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a768a673d14f9705f78959879297f72bb)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a768a673d14f9705f78959879297f72bb"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a18f5ef109e62f4c10594428fdfa19e3c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a18f5ef109e62f4c10594428fdfa19e3c"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae8d87a0369fb98ee2cafb9fcfb229e98)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae8d87a0369fb98ee2cafb9fcfb229e98"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb34e279f515ed67f73f95139a7e039e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1adb34e279f515ed67f73f95139a7e039e"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeebbec786b1d571f7d84d4a124441ac1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aeebbec786b1d571f7d84d4a124441ac1"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abe91e7307af5e6b610c24e43e60b44b6)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abe91e7307af5e6b610c24e43e60b44b6"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a816e711874c3cdddc29bbd38364bd671)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a816e711874c3cdddc29bbd38364bd671"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a56363a6d6b7461f39708a7b55416ef55)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a56363a6d6b7461f39708a7b55416ef55"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

#### `public inline bool `[`IsPlayerPortalEventIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5d158e41124dfb428e91309e0c556d56)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5d158e41124dfb428e91309e0c556d56"></a>

Checks whether PlayerPortalEventId_Optional has been set.

#### `public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a25d8694f4b0f20b200a78ff5493f551c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a25d8694f4b0f20b200a78ff5493f551c"></a>

Returns true if PlayerPortalEventId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a22212064e41d2566e68bdaffd2019c46)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a22212064e41d2566e68bdaffd2019c46"></a>

Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.

#### `public inline void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7537e06a91d48cf42065ed36df6f1d7b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7537e06a91d48cf42065ed36df6f1d7b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac2abf810087a74d5d21281699adf4f87)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac2abf810087a74d5d21281699adf4f87"></a>

Checks whether PlayerPortalEventId_Optional is set to null.

#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a94ea0f2132b53d8e85b9760990745c8e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a94ea0f2132b53d8e85b9760990745c8e"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0e268fb845dd2c80ebd26bc5e57c112c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0e268fb845dd2c80ebd26bc5e57c112c"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aac037e54255d6c55bfe03fdd3d45f3e0)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aac037e54255d6c55bfe03fdd3d45f3e0"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4fe944db546907cefc76c14d4735f08f)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4fe944db546907cefc76c14d4735f08f"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac70abc7e61cd5f13b33a72f3b69ba099)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac70abc7e61cd5f13b33a72f3b69ba099"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adfe179585afd3bf978552fcf011ae405)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1adfe179585afd3bf978552fcf011ae405"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7ef0729e0c0a4d9f29220fc27477501c)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7ef0729e0c0a4d9f29220fc27477501c"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af55ec64467128f67535e8519aac978a8)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af55ec64467128f67535e8519aac978a8"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a49dda4886adaacddc546c3377fdb0758)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a49dda4886adaacddc546c3377fdb0758"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

#### `public inline bool `[`IsInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af50f575ad5e1eb2c7e04dbd8dcbcbae6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af50f575ad5e1eb2c7e04dbd8dcbcbae6"></a>

Checks whether InventoryId_Optional has been set.

#### `public inline void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a364e523d8439761edfcda61fed96658a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a364e523d8439761edfcda61fed96658a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a584085ebbac32e965bdc48847b69f466)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a584085ebbac32e965bdc48847b69f466"></a>

Checks whether InventoryId_Optional is set to null.

#### `public inline int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a3307b71b6c5067b1690ea439b98ea430)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a3307b71b6c5067b1690ea439b98ea430"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2460cbf26931f0eb82982bc78ecb24c8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2460cbf26931f0eb82982bc78ecb24c8"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae75a5604ca5535f877625eb01bc4670d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae75a5604ca5535f877625eb01bc4670d"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac6d45cf00af0954103d898de5fe9c955)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac6d45cf00af0954103d898de5fe9c955"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7283f24bb2fadeee9e48144841a3be50)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7283f24bb2fadeee9e48144841a3be50"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a58f421800ad2e40ccc6cdf0320c1c743)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a58f421800ad2e40ccc6cdf0320c1c743"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac0d28a1c05c45424278a89749cf16b1f)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac0d28a1c05c45424278a89749cf16b1f"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a6420242bd73e10a735488bdf6a10612c)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a6420242bd73e10a735488bdf6a10612c"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae6b325f3f8d2f280df487eadf405948e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae6b325f3f8d2f280df487eadf405948e"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0b0b1bc327e4b6acbdea94c043c72e03)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0b0b1bc327e4b6acbdea94c043c72e03"></a>

Checks whether LegacyInventoryId_Optional has been set.

#### `public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a88f1be3e9988ecca32039d42ea17dc6a)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a88f1be3e9988ecca32039d42ea17dc6a"></a>

Returns true if LegacyInventoryId_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a50262159296dc89b0cc0cb232d6966e8)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a50262159296dc89b0cc0cb232d6966e8"></a>

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1adb723acb20b91bfd0d964ad9afbb3dbd)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1adb723acb20b91bfd0d964ad9afbb3dbd"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4660779c9bcf5ed008dc73193b614493)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4660779c9bcf5ed008dc73193b614493"></a>

Checks whether LegacyInventoryId_Optional is set to null.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab9992011f5a5a8e26d3325b19f0ae880)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab9992011f5a5a8e26d3325b19f0ae880"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2379b90dc140eb269bd7592a9dda76d4)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2379b90dc140eb269bd7592a9dda76d4"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9285dabfcdd5674c0bb84d34b80b781f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9285dabfcdd5674c0bb84d34b80b781f"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa9999b2075969cad1ee0ac740f1f6ab5)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa9999b2075969cad1ee0ac740f1f6ab5"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a8f01c3c5962e8c5a0fdf105d52c48512)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a8f01c3c5962e8c5a0fdf105d52c48512"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a72beb046c1a254fac3c14cbf577d6bad)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a72beb046c1a254fac3c14cbf577d6bad"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a87962ef9133f34146ce274a3895de250)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a87962ef9133f34146ce274a3895de250"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d6e16bb862521bbcf3d085cc9d82ce5)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4d6e16bb862521bbcf3d085cc9d82ce5"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae910eda3382428e86d6ccbdc1481b122)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae910eda3382428e86d6ccbdc1481b122"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a015457af0a54a70f7fd9612290dedd14)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a015457af0a54a70f7fd9612290dedd14"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a355c33aa9764bd6cbc9afc617be8d3d0)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a355c33aa9764bd6cbc9afc617be8d3d0"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2b01f580a1a43e7edfc46a748ff446c8)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2b01f580a1a43e7edfc46a748ff446c8"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a544a46cb20da8b4e489131aee9e91c12)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a544a46cb20da8b4e489131aee9e91c12"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afce2fe6f347a80d5a4c1d49687cdc4d7)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afce2fe6f347a80d5a4c1d49687cdc4d7"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afcbdf3f2013c7d91d7ab0ed09771ea62)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afcbdf3f2013c7d91d7ab0ed09771ea62"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac5a28124408913fe17cf891a53b47fc3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac5a28124408913fe17cf891a53b47fc3"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a10270ffce7c3224d4c6a5a5169c6aa0d)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a10270ffce7c3224d4c6a5a5169c6aa0d"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a45105ecacd737409a765eeefb3df62f7)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a45105ecacd737409a765eeefb3df62f7"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a9689031f4b4c5957284db36888a89b68)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a9689031f4b4c5957284db36888a89b68"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac27484d609aba94c63e874101aeab66a)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac27484d609aba94c63e874101aeab66a"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a78b6b23c9dbca217918af206e2d9242d)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a78b6b23c9dbca217918af206e2d9242d"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a4d8a5e42d12ac755dc750eed60384dec)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a4d8a5e42d12ac755dc750eed60384dec"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2d1dfbd1f39ec4940f36e281c09b1e22)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2d1dfbd1f39ec4940f36e281c09b1e22"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline bool `[`IsExpiresSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5d1f19a624d4be49fa1c6d2e86e7c3b5)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5d1f19a624d4be49fa1c6d2e86e7c3b5"></a>

Checks whether Expires_Optional has been set.

#### `public inline void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa6bf1b9b68547b1cb84bd5af259fb1a7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa6bf1b9b68547b1cb84bd5af259fb1a7"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab8a0fd65c72b3a3043fa172a71d14f68)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab8a0fd65c72b3a3043fa172a71d14f68"></a>

Checks whether Expires_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab4e230fdbff0fe048ae183225b5f9bec)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab4e230fdbff0fe048ae183225b5f9bec"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ae6574438962b9754f6c37c70e09e3f0d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ae6574438962b9754f6c37c70e09e3f0d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1b7bc9380990e912670381674a2b926b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1b7bc9380990e912670381674a2b926b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a662e6f093bc6d62476e0af2360f3ba78)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a662e6f093bc6d62476e0af2360f3ba78"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abb252b7b0442dfc3ed0cc5ed36467576)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abb252b7b0442dfc3ed0cc5ed36467576"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aa6dd88cc7902dbcd008f9f3a249f072c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aa6dd88cc7902dbcd008f9f3a249f072c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a53a1e835bc34ab8e4dcc989a800bf573)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a53a1e835bc34ab8e4dcc989a800bf573"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a1980491ad5b269502e975149193e4dad)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a1980491ad5b269502e975149193e4dad"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a2f650b6f47cea84f8ad1a3996a756915)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a2f650b6f47cea84f8ad1a3996a756915"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aeb811747a2958c55e11587f5f0620588)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aeb811747a2958c55e11587f5f0620588"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af0e285ed364ad3b4236ac3cbe7dd2e76)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af0e285ed364ad3b4236ac3cbe7dd2e76"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5aa6251782e76eb6e76f5ec54756c7cf)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5aa6251782e76eb6e76f5ec54756c7cf"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac1cc091e93af4b8450da1bbfb2440d25)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac1cc091e93af4b8450da1bbfb2440d25"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a0a26ab5ff6653f2aeaea377669d2f188)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a0a26ab5ff6653f2aeaea377669d2f188"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a7d53cee22a2635e51f2f4083730ee357)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a7d53cee22a2635e51f2f4083730ee357"></a>

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1abdb33600110fd13384aba35f415277c8)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1abdb33600110fd13384aba35f415277c8"></a>

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1aaed4d3e28c507fdf44f51c2a9521cd4d)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1aaed4d3e28c507fdf44f51c2a9521cd4d"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1af3b9ecefd6da61a461de022173fca627)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1af3b9ecefd6da61a461de022173fca627"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ab19fe2e9d003c6d2b3603890460e6ad4)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ab19fe2e9d003c6d2b3603890460e6ad4"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1afa76a36054ed7c219abf8c360602d914)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1afa76a36054ed7c219abf8c360602d914"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a42bee7218f7b474a1749f2cd449ab48e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a42bee7218f7b474a1749f2cd449ab48e"></a>

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

#### `public inline bool `[`IsEntryIdSet`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac96c31362a81d718172d190b786775fc)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac96c31362a81d718172d190b786775fc"></a>

Checks whether EntryId_Optional has been set.

#### `public inline void `[`SetEntryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1a5375f7f6214bcd50a995aab2336301de)`()` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1a5375f7f6214bcd50a995aab2336301de"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEntryIdNull`](#structFRHAPI__PlayerOrderEntryCreateOutput_1ac0b1de79b53d1a2e99c03cb7745b3f8c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateOutput_1ac0b1de79b53d1a2e99c03cb7745b3f8c"></a>

Checks whether EntryId_Optional is set to null.

