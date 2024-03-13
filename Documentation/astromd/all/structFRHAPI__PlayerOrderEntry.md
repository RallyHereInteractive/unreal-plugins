---
title: FRHAPI_PlayerOrderEntry Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Represents a line item in the Player Order and the results of the line item.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_PlayerOrderEntryType|[Type](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a37c9f172a892e0dd233755e8ab8f2890)|The type of entry.|
|int32|[LootId_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af27144492afcdc51a5b5f075c956dffa)|Unique Identifier for the Loot.|
|bool|[LootId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1afd00418312db369b85cb3a86ff9509f7)|true if LootId_Optional has been set to a value|
|int32|[Quantity](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a73687f8fab41a507f0ef73e76175f9dd)|Quantity of Inventory.|
|int64|[VendorVersion_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a2d2d4237781c71b34c6adb8f102677b5)|Legacy version for the vendor owning the loot_id. Use vendor_etag instead.|
|bool|[VendorVersion_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a879fc70c3d14a1db5d882e6f1e68a307)|true if VendorVersion_Optional has been set to a value|
|FString|[VendorEtag_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a96404d2f2eac0f6467459d8aa7b4460c)|etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match|
|bool|[VendorEtag_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ab4257754c991af2dd4040bf0009cbc97)|true if VendorEtag_Optional has been set to a value|
|TArray< int32 >|[DynamicBundleLootIds_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac9d962191f53b6ccb641b318adb9f5cb)|List of Loot IDs for the dynamic bundle.|
|bool|[DynamicBundleLootIds_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac3c5d9b9ae603866b22219786fddcb7f)|true if DynamicBundleLootIds_Optional has been set to a value|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice)|[PurchasePrice_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae0d142dad5970d2a31368fc3a8a42175)||
|bool|[PurchasePrice_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad3a9263f522644db2c88f24ee13bef1c)|true if PurchasePrice_Optional has been set to a value|
|FString|[ExternalTranId_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a7790f9a333b141c80e9e834f3182288f)|External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.|
|bool|[ExternalTranId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a74e920f1fb01339b03e60891fe58430f)|true if ExternalTranId_Optional has been set to a value|
|FString|[ExternalItemSku_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a938707e52b38bc755b29d2978883ba9c)|External item SKU for the Order Entry.|
|bool|[ExternalItemSku_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a799a799b1b2b1409d57cd8c892c3b1d0)|true if ExternalItemSku_Optional has been set to a value|
|ERHAPI_InventoryBucket|[UseInventoryBucket_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a20b811bd0d3523aa6f061f337098c6e1)|Inventory Bucket to use for the Order Entry.|
|bool|[UseInventoryBucket_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac6dab78b7e31604795d902955e00118e)|true if UseInventoryBucket_Optional has been set to a value|
|int64|[PlayerPortalEventId_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aefda5e6a2fb9599046513879d56a7600)|Player Portal Event Id for the Order Entry.|
|bool|[PlayerPortalEventId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae3c442ea95674cee11512f34c42ce26d)|true if PlayerPortalEventId_Optional has been set to a value|
|FGuid|[InventoryId_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a52a01e1684a9c541cb83610703f2f766)|Unique Identifier for the Inventory.|
|bool|[InventoryId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4344068a1931c9fd603a3004bb4f9937)|true if InventoryId_Optional has been set to a value|
|int64|[LegacyInventoryId_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1afff1c2f4055aa355da450cf3460d32b0)|Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].|
|bool|[LegacyInventoryId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a6456d273ba8846113370ede135cd2331)|true if LegacyInventoryId_Optional has been set to a value|
|int32|[ItemId_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a52e414fe5e1451921ef42719a44d187a)|Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].|
|bool|[ItemId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a0a02f71e6df85cdabb41b27c0eb485a7)|true if ItemId_Optional has been set to a value|
|FDateTime|[Expires_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac2055e06ef244cfbdf933fe60c4ce5cd)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[Expires_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1abe6698f68b08033e04e2de0b278b9de6)|true if Expires_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a5860da51422cd06767a9fc8ed702b7fd)|Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a3f081309b1a19358505ccef4784d4a29)|true if CustomData_Optional has been set to a value|
|FString|[EntryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1abb0b94aa1f1fc24b5ee67639f0c2fdd0)|Unique Identifier for the Order Entry.|
|ERHAPI_PlayerOrderEntryResult|[Result_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae544f7a3ee9b3a5717ffe148d06335fd)|Entry result type.|
|bool|[Result_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a51f1b8ab3ddfe711d3b5ce3baba4f11a)|true if Result_Optional has been set to a value|
|TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) >|[Details_Optional](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad0d38a797491aefcf72ebc1f69fd527d)|Details for the Order Entry.|
|bool|[Details_IsSet](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ab3ea719e706961aee4c9f2f4ecffb99b)|true if Details_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a1303a54655d608f3d47b801afdad25bc)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad7a63eb6e8abee5dafa2b840637ab086)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_PlayerOrderEntryType &|[GetType](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af93fb1ff20bb47be74253f884c60c177)()|Gets the value of Type.|
|const ERHAPI_PlayerOrderEntryType &|[GetType](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4ef7488da616dda67cd85e0f90dfa2c0)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a5f1e5871bd8d9cae5a99d03f190e28c6)(ERHAPI_PlayerOrderEntryType NewValue)|Sets the value of Type.|
|int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1adbeaa72f4149cdadc8aa3b0907835cbc)()|Gets the value of LootId_Optional, regardless of it having been set.|
|const int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a36583595a8240913fc3c142c869fbeee)()|Gets the value of LootId_Optional, regardless of it having been set.|
|const int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a59e4a4745a93fbe708346605b4e0cabd)(const int32 & DefaultValue)|Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a96c4186b6cec8faefe54a7fafccf82e0)(int32 & OutValue)|Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLootIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae143afbff2722f8fdee7895e6c089638)()|Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLootIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a13792859116c740f274650e8a846cf28)()|Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLootId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a0d3a1f9551fb6cd7f628193b30813c6e)(int32 NewValue)|Sets the value of LootId_Optional and also sets LootId_IsSet to true.|
|void|[ClearLootId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced)()|Clears the value of LootId_Optional and sets LootId_IsSet to false.|
|bool|[IsLootIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a1b3f431ef690f0d4399199f5966af906)()|Returns true if LootId_Optional is set and matches the default value.|
|void|[SetLootIdToDefault](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a0af86c8bd92731bdf04328285d1c3ef9)()|Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.|
|int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a93067ef95ed24540c2afe3cc55daa402)()|Gets the value of Quantity.|
|const int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a249fd64e9c1ed977cb71cb08acbbb63d)()|Gets the value of Quantity.|
|void|[SetQuantity](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a3ab4ea861417364aa6ddb27e905b9183)(int32 NewValue)|Sets the value of Quantity.|
|bool|[IsQuantityDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a86ab71c59766344cf3314dc24f32255b)()|Returns true if Quantity matches the default value.|
|void|[SetQuantityToDefault](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af8c751930348d16219dfbdcd44468d86)()|Sets the value of Quantity to its default|
|int64 &|[GetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1acbd1986e43876b61e53a91c0970ae174)()|Gets the value of VendorVersion_Optional, regardless of it having been set.|
|const int64 &|[GetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aead8297df60e0a315017bcb1e8bcef6c)()|Gets the value of VendorVersion_Optional, regardless of it having been set.|
|const int64 &|[GetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac22f1c8c988b25bbf769dc893a6b2ef7)(const int64 & DefaultValue)|Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac3ff18e0ed3d19b1593a41ba2f664e04)(int64 & OutValue)|Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.|
|int64 *|[GetVendorVersionOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad9f30b01a25782293689bda6697a3420)()|Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.|
|const int64 *|[GetVendorVersionOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aaf930a9d136cfa0ad6aa81dc5d807e24)()|Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ab58b92a753d4a2fdb659345425939d38)(int64 NewValue)|Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.|
|void|[ClearVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a)()|Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.|
|bool|[IsVendorVersionDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ab9b080bbb6201eeab73e64ca219c825e)()|Returns true if VendorVersion_Optional is set and matches the default value.|
|void|[SetVendorVersionToDefault](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af18c13a79f10c83cf8cf909037a40d13)()|Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.|
|FString &|[GetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a74caeac6aba2b540c0ca70e06e2f41cb)()|Gets the value of VendorEtag_Optional, regardless of it having been set.|
|const FString &|[GetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a400bbf6cb7f7eb314b04f4874dec1216)()|Gets the value of VendorEtag_Optional, regardless of it having been set.|
|const FString &|[GetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1abc0ddfe0a687a67d78425f8d87ee29aa)(const FString & DefaultValue)|Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a58864651f695d1c391a069f931d04fc7)(FString & OutValue)|Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetVendorEtagOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1acabeccd97bba268e812957eaedb1216e)()|Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetVendorEtagOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aeb0762c0216dc528ed2dc536909293c3)()|Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a08b0810ddd3cebd462cba26734f9b62f)(FString NewValue)|Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.|
|void|[ClearVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc)()|Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.|
|TArray< int32 > &|[GetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4dded4ff994c11e1c799c4b5ad140401)()|Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a9a0420165577c7b906e37b951bef7f22)()|Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae9dda53c4610b08fddb34f2cfe0de879)(const TArray< int32 > & DefaultValue)|Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a2ec0c2bc642c1470c8a6e01fa5c929f5)(TArray< int32 > & OutValue)|Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.|
|TArray< int32 > *|[GetDynamicBundleLootIdsOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a473dc58dc6587eca97d25d01b5a5e165)()|Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< int32 > *|[GetDynamicBundleLootIdsOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad495eb8b431836d109af62f1d1557734)()|Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4e52a870e2efba1571d503c406ffe4b9)(TArray< int32 > NewValue)|Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.|
|void|[ClearDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d)()|Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|[GetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1afe68f43c0ae9d31426e5236b2e3b73d6)()|Gets the value of PurchasePrice_Optional, regardless of it having been set.|
|const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|[GetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1afeb4efbbfaa9980618d303662803e325)()|Gets the value of PurchasePrice_Optional, regardless of it having been set.|
|const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|[GetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a58048a1b3e8e720e36e3dea5fd0bad67)(const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & DefaultValue)|Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a660c5b9eadbcf3bface57ff655dcaa63)([FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & OutValue)|Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) *|[GetPurchasePriceOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4115bc32934c1fe7db968f2f22f7fbd4)()|Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) *|[GetPurchasePriceOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a1e75af28c5166b5c130d96ea7d504342)()|Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a35e0122d012e925b85592aebc2a14eab)([FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) NewValue)|Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.|
|void|[ClearPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c)()|Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.|
|FString &|[GetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aed1c98477a72f70e6b39b0aea0d76483)()|Gets the value of ExternalTranId_Optional, regardless of it having been set.|
|const FString &|[GetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae4602d52d53cf34168a8bc61ff5d9361)()|Gets the value of ExternalTranId_Optional, regardless of it having been set.|
|const FString &|[GetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad710b8b43e64e563828949c46fd4b9ed)(const FString & DefaultValue)|Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a256df8b376732391c16565393083c1f3)(FString & OutValue)|Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetExternalTranIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a220576ac5b32d929df6dc194af508e87)()|Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetExternalTranIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aa97240bf3f3e8674b30ab4f024af8f5f)()|Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a7bcabd6e59cea91c164adb248ad29305)(FString NewValue)|Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.|
|void|[ClearExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a)()|Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.|
|FString &|[GetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a86c989a7caf74d70ecadbea64975954a)()|Gets the value of ExternalItemSku_Optional, regardless of it having been set.|
|const FString &|[GetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aac98283b14454dd958d9e00853f27fa0)()|Gets the value of ExternalItemSku_Optional, regardless of it having been set.|
|const FString &|[GetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a5caebf593033675ce76421114ebc7249)(const FString & DefaultValue)|Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1adbc73633887c8f5beb4d5fd415be4b19)(FString & OutValue)|Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetExternalItemSkuOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1abdb1b9bc98aeb8c25ca3e6c78f535563)()|Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetExternalItemSkuOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a3c86d6ae3529df0d08598166e12b3a01)()|Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af3e2edb68f3cdb8f9907e1715c0d6a3b)(FString NewValue)|Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.|
|void|[ClearExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255)()|Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.|
|ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af2d9b276c5cd45d45dfabf0ba3d3f52c)()|Gets the value of UseInventoryBucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a204feaa82bdd6c2b8dabc618da1b9a42)()|Gets the value of UseInventoryBucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a0f734beaf5c365e15a14b74ec82a0d88)(const ERHAPI_InventoryBucket & DefaultValue)|Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a1551a4d915e88701c893193c51928e14)(ERHAPI_InventoryBucket & OutValue)|Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryBucket *|[GetUseInventoryBucketOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac88e73a484482896276d91baca133479)()|Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryBucket *|[GetUseInventoryBucketOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae606b531d3ab19a0b3a02e662cc4a990)()|Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a5e27fa6a4aab12f527aa9c6276280691)(ERHAPI_InventoryBucket NewValue)|Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.|
|void|[ClearUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c)()|Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.|
|int64 &|[GetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aeffd6ea8125edecbb6a98c078bd00826)()|Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.|
|const int64 &|[GetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a414d764ae734d8538e8cf6301174bd9a)()|Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.|
|const int64 &|[GetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a70ffa756ae9e80287c00589c33ad60e1)(const int64 & DefaultValue)|Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a3ea6eb86b7773e876f61c0aa2f266fd7)(int64 & OutValue)|Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.|
|int64 *|[GetPlayerPortalEventIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aff75629decc9c9686f46ec4a7730e148)()|Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.|
|const int64 *|[GetPlayerPortalEventIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1adae84c8294eb2dc4cb752eab07dda012)()|Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4286b389329d54f2a0158161c2ad4593)(int64 NewValue)|Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.|
|void|[ClearPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20)()|Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.|
|bool|[IsPlayerPortalEventIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a0ef83ed4fb13f902e26bb4efce9c4303)()|Returns true if PlayerPortalEventId_Optional is set and matches the default value.|
|void|[SetPlayerPortalEventIdToDefault](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a47c41382298220a7528123b8fc6742b9)()|Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.|
|FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac9fede46fdd9035921d5d70ca310bbf7)()|Gets the value of InventoryId_Optional, regardless of it having been set.|
|const FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a6b930684c51c49061d9536ce0247cf3d)()|Gets the value of InventoryId_Optional, regardless of it having been set.|
|const FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a70406ca18976e21abda6e728aaf64df8)(const FGuid & DefaultValue)|Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a73772840636cbe0c7363934f69c9e502)(FGuid & OutValue)|Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetInventoryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a933e99c13d102b36c6004d034f799c13)()|Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetInventoryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1add6dcbd92d2c0454da1c852caed6baf4)()|Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af2e76dd3c6a7e1ff10dc97ca16fd1f61)(FGuid NewValue)|Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.|
|void|[ClearInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199)()|Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.|
|int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ab3b686fdc394ac7c6d3a7fe9b69872b8)()|Gets the value of LegacyInventoryId_Optional, regardless of it having been set.|
|const int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a6ccbba32959900780ffa18fa3d808433)()|Gets the value of LegacyInventoryId_Optional, regardless of it having been set.|
|const int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a57163093778dda9fb49743362746d032)(const int64 & DefaultValue)|Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a134c39a352e5d7bb15a50febf53e6f83)(int64 & OutValue)|Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.|
|int64 *|[GetLegacyInventoryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af9d72898672515adbbde1ac1f1f4d382)()|Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.|
|const int64 *|[GetLegacyInventoryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4bb2d2bfa208c9ae7ab341b7568b068a)()|Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad7da2b84ff24468c23427161330caacf)(int64 NewValue)|Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.|
|void|[ClearLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b)()|Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.|
|bool|[IsLegacyInventoryIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac808088c9eeeee7894c5c0cade3c9ff6)()|Returns true if LegacyInventoryId_Optional is set and matches the default value.|
|void|[SetLegacyInventoryIdToDefault](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a80846e6e79fb29128c25cd5b62713a8d)()|Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.|
|int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a3bdf3ebe220fefbd05b806520a788f05)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a13fe98ec07a1c073ecafe3a2614e6e65)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a5538e5ce666bd7015d8dc3155d3a0bf2)(const int32 & DefaultValue)|Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItemId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a28a395b17d5811c27c708263e2a8dc68)(int32 & OutValue)|Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae851d8e7e1c0d0908ac597e7cbcee26f)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a216c55487fb5c1407033291c3e94d4c8)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItemId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1abbe6a5d0f962a3437cbb7e3c0996deea)(int32 NewValue)|Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.|
|void|[ClearItemId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb)()|Clears the value of ItemId_Optional and sets ItemId_IsSet to false.|
|bool|[IsItemIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1afafe7941ee4f8c1ba75913e7bccacd90)()|Returns true if ItemId_Optional is set and matches the default value.|
|void|[SetItemIdToDefault](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad5816fde2e23de11f7264dcfe1d6316e)()|Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.|
|FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aa9e19607e3e73d44d8cb86d9334f7eac)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1affb6dee7edc0040490ada6aea28721e7)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a8acad92faf486983cba10ba09b918ee1)(const FDateTime & DefaultValue)|Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExpires](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a637ab431c4103401d2b7340e4f7c6cf8)(FDateTime & OutValue)|Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac49e5ef3019bdcaf471153572a354d28)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ab953e4392fc2937a1e663e035d1a5a77)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExpires](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a7d50918b0064f88421a4028901c8fdcf)(FDateTime NewValue)|Sets the value of Expires_Optional and also sets Expires_IsSet to true.|
|void|[ClearExpires](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498)()|Clears the value of Expires_Optional and sets Expires_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a1de473bae6f8bd843b5ef1ad1d5ccd3b)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a90ff4c7a9857e5805e7ac38fa206ede6)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a5bdf95e196bda80ec273eb5f2c9d499e)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a38c1fed0ba760bffc5cd8c90f50759b7)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4230342e92bb25fea6315dc9370a3f8f)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a108f177f47d9ee0d93baf6610a284707)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad9aeb43279d3f6a52880206e6c68b2bc)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FString &|[GetEntryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a1e5d5e7b825570afb662ee33ddaf8e9d)()|Gets the value of EntryId.|
|const FString &|[GetEntryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ad7439831e786838910a9c10002897969)()|Gets the value of EntryId.|
|void|[SetEntryId](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a8cdbff09316ba01eb8b3b4b0e9e8b38a)(FString NewValue)|Sets the value of EntryId.|
|ERHAPI_PlayerOrderEntryResult &|[GetResult](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a26624058af5e16fe1f312f8cdb5c4041)()|Gets the value of Result_Optional, regardless of it having been set.|
|const ERHAPI_PlayerOrderEntryResult &|[GetResult](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a48ca58444fc8eb4e363e8412c0735ec5)()|Gets the value of Result_Optional, regardless of it having been set.|
|const ERHAPI_PlayerOrderEntryResult &|[GetResult](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a0a7bb45ae2fbcb88c314ae3d72cb91a7)(const ERHAPI_PlayerOrderEntryResult & DefaultValue)|Gets the value of Result_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetResult](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aab0ff9878d55188c46aeb50951e7743f)(ERHAPI_PlayerOrderEntryResult & OutValue)|Fills OutValue with the value of Result_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_PlayerOrderEntryResult *|[GetResultOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a4d1ae30fab19768d1d9bca0d439c2f38)()|Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_PlayerOrderEntryResult *|[GetResultOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a220d6be84f9c73e91d696ee3b14090e8)()|Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetResult](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1aee883cf110523558039a9b3645817a81)(ERHAPI_PlayerOrderEntryResult NewValue)|Sets the value of Result_Optional and also sets Result_IsSet to true.|
|void|[ClearResult](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f)()|Clears the value of Result_Optional and sets Result_IsSet to false.|
|TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > &|[GetDetails](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a2c66f35c3ed2c558cc4d2e5394a8a793)()|Gets the value of Details_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > &|[GetDetails](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ac29d10780822dd2bab54b12716061f32)()|Gets the value of Details_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > &|[GetDetails](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1af726e71b7ad48ad94dc6ce16b2e398af)(const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & DefaultValue)|Gets the value of Details_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDetails](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1acd22460bab7ca52aa6609b54384a74b2)(TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & OutValue)|Fills OutValue with the value of Details_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > *|[GetDetailsOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a9f785a715382e0b2be7639a15e584613)()|Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > *|[GetDetailsOrNull](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a9332022056f0c03af9c8f38e5ced6417)()|Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDetails](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1ae66fd15d79f4c954382854d192b60d7e)(TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > NewValue)|Sets the value of Details_Optional and also sets Details_IsSet to true.|
|void|[ClearDetails](/unreal-plugins/all/structfrhapi__playerorderentry/#structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38)()|Clears the value of Details_Optional and sets Details_IsSet to false.|
## Public Attributes



### `Type` <a id="structFRHAPI__PlayerOrderEntry_1a37c9f172a892e0dd233755e8ab8f2890"></a>

`ERHAPI_PlayerOrderEntryType FRHAPI_PlayerOrderEntry::Type`

The type of entry.




### `LootId_Optional` <a id="structFRHAPI__PlayerOrderEntry_1af27144492afcdc51a5b5f075c956dffa"></a>

`int32 FRHAPI_PlayerOrderEntry::LootId_Optional`

Unique Identifier for the Loot.




### `LootId_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1afd00418312db369b85cb3a86ff9509f7"></a>

`bool FRHAPI_PlayerOrderEntry::LootId_IsSet`

true if LootId_Optional has been set to a value




### `Quantity` <a id="structFRHAPI__PlayerOrderEntry_1a73687f8fab41a507f0ef73e76175f9dd"></a>

`int32 FRHAPI_PlayerOrderEntry::Quantity`

Quantity of Inventory.




### `VendorVersion_Optional` <a id="structFRHAPI__PlayerOrderEntry_1a2d2d4237781c71b34c6adb8f102677b5"></a>

`int64 FRHAPI_PlayerOrderEntry::VendorVersion_Optional`

Legacy version for the vendor owning the loot_id. Use vendor_etag instead.




### `VendorVersion_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1a879fc70c3d14a1db5d882e6f1e68a307"></a>

`bool FRHAPI_PlayerOrderEntry::VendorVersion_IsSet`

true if VendorVersion_Optional has been set to a value




### `VendorEtag_Optional` <a id="structFRHAPI__PlayerOrderEntry_1a96404d2f2eac0f6467459d8aa7b4460c"></a>

`FString FRHAPI_PlayerOrderEntry::VendorEtag_Optional`

etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match




### `VendorEtag_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1ab4257754c991af2dd4040bf0009cbc97"></a>

`bool FRHAPI_PlayerOrderEntry::VendorEtag_IsSet`

true if VendorEtag_Optional has been set to a value




### `DynamicBundleLootIds_Optional` <a id="structFRHAPI__PlayerOrderEntry_1ac9d962191f53b6ccb641b318adb9f5cb"></a>

`TArray<int32> FRHAPI_PlayerOrderEntry::DynamicBundleLootIds_Optional`

List of Loot IDs for the dynamic bundle.




### `DynamicBundleLootIds_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1ac3c5d9b9ae603866b22219786fddcb7f"></a>

`bool FRHAPI_PlayerOrderEntry::DynamicBundleLootIds_IsSet`

true if DynamicBundleLootIds_Optional has been set to a value




### `PurchasePrice_Optional` <a id="structFRHAPI__PlayerOrderEntry_1ae0d142dad5970d2a31368fc3a8a42175"></a>

`FRHAPI_PurchasePrice FRHAPI_PlayerOrderEntry::PurchasePrice_Optional`






### `PurchasePrice_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1ad3a9263f522644db2c88f24ee13bef1c"></a>

`bool FRHAPI_PlayerOrderEntry::PurchasePrice_IsSet`

true if PurchasePrice_Optional has been set to a value




### `ExternalTranId_Optional` <a id="structFRHAPI__PlayerOrderEntry_1a7790f9a333b141c80e9e834f3182288f"></a>

`FString FRHAPI_PlayerOrderEntry::ExternalTranId_Optional`

External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.




### `ExternalTranId_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1a74e920f1fb01339b03e60891fe58430f"></a>

`bool FRHAPI_PlayerOrderEntry::ExternalTranId_IsSet`

true if ExternalTranId_Optional has been set to a value




### `ExternalItemSku_Optional` <a id="structFRHAPI__PlayerOrderEntry_1a938707e52b38bc755b29d2978883ba9c"></a>

`FString FRHAPI_PlayerOrderEntry::ExternalItemSku_Optional`

External item SKU for the Order Entry.




### `ExternalItemSku_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1a799a799b1b2b1409d57cd8c892c3b1d0"></a>

`bool FRHAPI_PlayerOrderEntry::ExternalItemSku_IsSet`

true if ExternalItemSku_Optional has been set to a value




### `UseInventoryBucket_Optional` <a id="structFRHAPI__PlayerOrderEntry_1a20b811bd0d3523aa6f061f337098c6e1"></a>

`ERHAPI_InventoryBucket FRHAPI_PlayerOrderEntry::UseInventoryBucket_Optional`

Inventory Bucket to use for the Order Entry.




### `UseInventoryBucket_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1ac6dab78b7e31604795d902955e00118e"></a>

`bool FRHAPI_PlayerOrderEntry::UseInventoryBucket_IsSet`

true if UseInventoryBucket_Optional has been set to a value




### `PlayerPortalEventId_Optional` <a id="structFRHAPI__PlayerOrderEntry_1aefda5e6a2fb9599046513879d56a7600"></a>

`int64 FRHAPI_PlayerOrderEntry::PlayerPortalEventId_Optional`

Player Portal Event Id for the Order Entry.




### `PlayerPortalEventId_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1ae3c442ea95674cee11512f34c42ce26d"></a>

`bool FRHAPI_PlayerOrderEntry::PlayerPortalEventId_IsSet`

true if PlayerPortalEventId_Optional has been set to a value




### `InventoryId_Optional` <a id="structFRHAPI__PlayerOrderEntry_1a52a01e1684a9c541cb83610703f2f766"></a>

`FGuid FRHAPI_PlayerOrderEntry::InventoryId_Optional`

Unique Identifier for the Inventory.




### `InventoryId_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1a4344068a1931c9fd603a3004bb4f9937"></a>

`bool FRHAPI_PlayerOrderEntry::InventoryId_IsSet`

true if InventoryId_Optional has been set to a value




### `LegacyInventoryId_Optional` <a id="structFRHAPI__PlayerOrderEntry_1afff1c2f4055aa355da450cf3460d32b0"></a>

`int64 FRHAPI_PlayerOrderEntry::LegacyInventoryId_Optional`

Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].




### `LegacyInventoryId_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1a6456d273ba8846113370ede135cd2331"></a>

`bool FRHAPI_PlayerOrderEntry::LegacyInventoryId_IsSet`

true if LegacyInventoryId_Optional has been set to a value




### `ItemId_Optional` <a id="structFRHAPI__PlayerOrderEntry_1a52e414fe5e1451921ef42719a44d187a"></a>

`int32 FRHAPI_PlayerOrderEntry::ItemId_Optional`

Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].




### `ItemId_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1a0a02f71e6df85cdabb41b27c0eb485a7"></a>

`bool FRHAPI_PlayerOrderEntry::ItemId_IsSet`

true if ItemId_Optional has been set to a value




### `Expires_Optional` <a id="structFRHAPI__PlayerOrderEntry_1ac2055e06ef244cfbdf933fe60c4ce5cd"></a>

`FDateTime FRHAPI_PlayerOrderEntry::Expires_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Expires_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1abe6698f68b08033e04e2de0b278b9de6"></a>

`bool FRHAPI_PlayerOrderEntry::Expires_IsSet`

true if Expires_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__PlayerOrderEntry_1a5860da51422cd06767a9fc8ed702b7fd"></a>

`TMap<FString, FString> FRHAPI_PlayerOrderEntry::CustomData_Optional`

Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].




### `CustomData_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1a3f081309b1a19358505ccef4784d4a29"></a>

`bool FRHAPI_PlayerOrderEntry::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `EntryId` <a id="structFRHAPI__PlayerOrderEntry_1abb0b94aa1f1fc24b5ee67639f0c2fdd0"></a>

`FString FRHAPI_PlayerOrderEntry::EntryId`

Unique Identifier for the Order Entry.




### `Result_Optional` <a id="structFRHAPI__PlayerOrderEntry_1ae544f7a3ee9b3a5717ffe148d06335fd"></a>

`ERHAPI_PlayerOrderEntryResult FRHAPI_PlayerOrderEntry::Result_Optional`

Entry result type.




### `Result_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1a51f1b8ab3ddfe711d3b5ce3baba4f11a"></a>

`bool FRHAPI_PlayerOrderEntry::Result_IsSet`

true if Result_Optional has been set to a value




### `Details_Optional` <a id="structFRHAPI__PlayerOrderEntry_1ad0d38a797491aefcf72ebc1f69fd527d"></a>

`TArray<FRHAPI_PlayerOrderDetail> FRHAPI_PlayerOrderEntry::Details_Optional`

Details for the Order Entry.




### `Details_IsSet` <a id="structFRHAPI__PlayerOrderEntry_1ab3ea719e706961aee4c9f2f4ecffb99b"></a>

`bool FRHAPI_PlayerOrderEntry::Details_IsSet`

true if Details_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerOrderEntry_1a1303a54655d608f3d47b801afdad25bc"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerOrderEntry_1ad7a63eb6e8abee5dafa2b840637ab086"></a>

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



### `GetType` <a id="structFRHAPI__PlayerOrderEntry_1af93fb1ff20bb47be74253f884c60c177"></a>

ERHAPI_PlayerOrderEntryType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__PlayerOrderEntry_1a4ef7488da616dda67cd85e0f90dfa2c0"></a>

const ERHAPI_PlayerOrderEntryType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__PlayerOrderEntry_1a5f1e5871bd8d9cae5a99d03f190e28c6"></a>

void SetType(ERHAPI_PlayerOrderEntryType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlayerOrderEntryType|NewValue|

#### Description

Sets the value of Type.




### `GetLootId` <a id="structFRHAPI__PlayerOrderEntry_1adbeaa72f4149cdadc8aa3b0907835cbc"></a>

int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LootId_Optional, regardless of it having been set.




### `GetLootId` <a id="structFRHAPI__PlayerOrderEntry_1a36583595a8240913fc3c142c869fbeee"></a>

const int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LootId_Optional, regardless of it having been set.




### `GetLootId` <a id="structFRHAPI__PlayerOrderEntry_1a59e4a4745a93fbe708346605b4e0cabd"></a>

const int32 & GetLootId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLootId` <a id="structFRHAPI__PlayerOrderEntry_1a96c4186b6cec8faefe54a7fafccf82e0"></a>

bool GetLootId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.




### `GetLootIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1ae143afbff2722f8fdee7895e6c089638"></a>

int32 * GetLootIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.




### `GetLootIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a13792859116c740f274650e8a846cf28"></a>

const int32 * GetLootIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.




### `SetLootId` <a id="structFRHAPI__PlayerOrderEntry_1a0d3a1f9551fb6cd7f628193b30813c6e"></a>

void SetLootId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LootId_Optional and also sets LootId_IsSet to true.




### `ClearLootId` <a id="structFRHAPI__PlayerOrderEntry_1a43edd609c6f076ad538d4ed80c70eced"></a>

void ClearLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LootId_Optional and sets LootId_IsSet to false.




### `IsLootIdDefaultValue` <a id="structFRHAPI__PlayerOrderEntry_1a1b3f431ef690f0d4399199f5966af906"></a>

bool IsLootIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LootId_Optional is set and matches the default value.




### `SetLootIdToDefault` <a id="structFRHAPI__PlayerOrderEntry_1a0af86c8bd92731bdf04328285d1c3ef9"></a>

void SetLootIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.




### `GetQuantity` <a id="structFRHAPI__PlayerOrderEntry_1a93067ef95ed24540c2afe3cc55daa402"></a>

int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity.




### `GetQuantity` <a id="structFRHAPI__PlayerOrderEntry_1a249fd64e9c1ed977cb71cb08acbbb63d"></a>

const int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity.




### `SetQuantity` <a id="structFRHAPI__PlayerOrderEntry_1a3ab4ea861417364aa6ddb27e905b9183"></a>

void SetQuantity(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Quantity.




### `IsQuantityDefaultValue` <a id="structFRHAPI__PlayerOrderEntry_1a86ab71c59766344cf3314dc24f32255b"></a>

bool IsQuantityDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Quantity matches the default value.




### `SetQuantityToDefault` <a id="structFRHAPI__PlayerOrderEntry_1af8c751930348d16219dfbdcd44468d86"></a>

void SetQuantityToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Quantity to its default




### `GetVendorVersion` <a id="structFRHAPI__PlayerOrderEntry_1acbd1986e43876b61e53a91c0970ae174"></a>

int64 & GetVendorVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorVersion_Optional, regardless of it having been set.




### `GetVendorVersion` <a id="structFRHAPI__PlayerOrderEntry_1aead8297df60e0a315017bcb1e8bcef6c"></a>

const int64 & GetVendorVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorVersion_Optional, regardless of it having been set.




### `GetVendorVersion` <a id="structFRHAPI__PlayerOrderEntry_1ac22f1c8c988b25bbf769dc893a6b2ef7"></a>

const int64 & GetVendorVersion(const int64 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int64 &|DefaultValue|

#### Description

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVendorVersion` <a id="structFRHAPI__PlayerOrderEntry_1ac3ff18e0ed3d19b1593a41ba2f664e04"></a>

bool GetVendorVersion(int64 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int64 &|OutValue|

#### Description

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.




### `GetVendorVersionOrNull` <a id="structFRHAPI__PlayerOrderEntry_1ad9f30b01a25782293689bda6697a3420"></a>

int64 * GetVendorVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.




### `GetVendorVersionOrNull` <a id="structFRHAPI__PlayerOrderEntry_1aaf930a9d136cfa0ad6aa81dc5d807e24"></a>

const int64 * GetVendorVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.




### `SetVendorVersion` <a id="structFRHAPI__PlayerOrderEntry_1ab58b92a753d4a2fdb659345425939d38"></a>

void SetVendorVersion(int64 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int64|NewValue|

#### Description

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.




### `ClearVendorVersion` <a id="structFRHAPI__PlayerOrderEntry_1a403a9b0a05a1e5cbec419058b0384f0a"></a>

void ClearVendorVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.




### `IsVendorVersionDefaultValue` <a id="structFRHAPI__PlayerOrderEntry_1ab9b080bbb6201eeab73e64ca219c825e"></a>

bool IsVendorVersionDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if VendorVersion_Optional is set and matches the default value.




### `SetVendorVersionToDefault` <a id="structFRHAPI__PlayerOrderEntry_1af18c13a79f10c83cf8cf909037a40d13"></a>

void SetVendorVersionToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.




### `GetVendorEtag` <a id="structFRHAPI__PlayerOrderEntry_1a74caeac6aba2b540c0ca70e06e2f41cb"></a>

FString & GetVendorEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorEtag_Optional, regardless of it having been set.




### `GetVendorEtag` <a id="structFRHAPI__PlayerOrderEntry_1a400bbf6cb7f7eb314b04f4874dec1216"></a>

const FString & GetVendorEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorEtag_Optional, regardless of it having been set.




### `GetVendorEtag` <a id="structFRHAPI__PlayerOrderEntry_1abc0ddfe0a687a67d78425f8d87ee29aa"></a>

const FString & GetVendorEtag(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVendorEtag` <a id="structFRHAPI__PlayerOrderEntry_1a58864651f695d1c391a069f931d04fc7"></a>

bool GetVendorEtag(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.




### `GetVendorEtagOrNull` <a id="structFRHAPI__PlayerOrderEntry_1acabeccd97bba268e812957eaedb1216e"></a>

FString * GetVendorEtagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.




### `GetVendorEtagOrNull` <a id="structFRHAPI__PlayerOrderEntry_1aeb0762c0216dc528ed2dc536909293c3"></a>

const FString * GetVendorEtagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.




### `SetVendorEtag` <a id="structFRHAPI__PlayerOrderEntry_1a08b0810ddd3cebd462cba26734f9b62f"></a>

void SetVendorEtag(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.




### `ClearVendorEtag` <a id="structFRHAPI__PlayerOrderEntry_1a9d316d2e4dd22118de25e4a3f05028fc"></a>

void ClearVendorEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.




### `GetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntry_1a4dded4ff994c11e1c799c4b5ad140401"></a>

TArray< int32 > & GetDynamicBundleLootIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.




### `GetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntry_1a9a0420165577c7b906e37b951bef7f22"></a>

const TArray< int32 > & GetDynamicBundleLootIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.




### `GetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntry_1ae9dda53c4610b08fddb34f2cfe0de879"></a>

const TArray< int32 > & GetDynamicBundleLootIds(const TArray< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|DefaultValue|

#### Description

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntry_1a2ec0c2bc642c1470c8a6e01fa5c929f5"></a>

bool GetDynamicBundleLootIds(TArray< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 > &|OutValue|

#### Description

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.




### `GetDynamicBundleLootIdsOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a473dc58dc6587eca97d25d01b5a5e165"></a>

TArray< int32 > * GetDynamicBundleLootIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.




### `GetDynamicBundleLootIdsOrNull` <a id="structFRHAPI__PlayerOrderEntry_1ad495eb8b431836d109af62f1d1557734"></a>

const TArray< int32 > * GetDynamicBundleLootIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.




### `SetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntry_1a4e52a870e2efba1571d503c406ffe4b9"></a>

void SetDynamicBundleLootIds(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.




### `ClearDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntry_1a2efa892a1b02431414bfb5346897b27d"></a>

void ClearDynamicBundleLootIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.




### `GetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntry_1afe68f43c0ae9d31426e5236b2e3b73d6"></a>

[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & GetPurchasePrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PurchasePrice_Optional, regardless of it having been set.




### `GetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntry_1afeb4efbbfaa9980618d303662803e325"></a>

const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & GetPurchasePrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PurchasePrice_Optional, regardless of it having been set.




### `GetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntry_1a58048a1b3e8e720e36e3dea5fd0bad67"></a>

const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & GetPurchasePrice(const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|DefaultValue|

#### Description

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntry_1a660c5b9eadbcf3bface57ff655dcaa63"></a>

bool GetPurchasePrice([FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|OutValue|

#### Description

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.




### `GetPurchasePriceOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a4115bc32934c1fe7db968f2f22f7fbd4"></a>

[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) * GetPurchasePriceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.




### `GetPurchasePriceOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a1e75af28c5166b5c130d96ea7d504342"></a>

const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) * GetPurchasePriceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.




### `SetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntry_1a35e0122d012e925b85592aebc2a14eab"></a>

void SetPurchasePrice([FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice)|NewValue|

#### Description

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.




### `ClearPurchasePrice` <a id="structFRHAPI__PlayerOrderEntry_1a7bd6bcfd1273f7144bf1f6a4a2caea7c"></a>

void ClearPurchasePrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.




### `GetExternalTranId` <a id="structFRHAPI__PlayerOrderEntry_1aed1c98477a72f70e6b39b0aea0d76483"></a>

FString & GetExternalTranId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalTranId_Optional, regardless of it having been set.




### `GetExternalTranId` <a id="structFRHAPI__PlayerOrderEntry_1ae4602d52d53cf34168a8bc61ff5d9361"></a>

const FString & GetExternalTranId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalTranId_Optional, regardless of it having been set.




### `GetExternalTranId` <a id="structFRHAPI__PlayerOrderEntry_1ad710b8b43e64e563828949c46fd4b9ed"></a>

const FString & GetExternalTranId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExternalTranId` <a id="structFRHAPI__PlayerOrderEntry_1a256df8b376732391c16565393083c1f3"></a>

bool GetExternalTranId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.




### `GetExternalTranIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a220576ac5b32d929df6dc194af508e87"></a>

FString * GetExternalTranIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.




### `GetExternalTranIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1aa97240bf3f3e8674b30ab4f024af8f5f"></a>

const FString * GetExternalTranIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.




### `SetExternalTranId` <a id="structFRHAPI__PlayerOrderEntry_1a7bcabd6e59cea91c164adb248ad29305"></a>

void SetExternalTranId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.




### `ClearExternalTranId` <a id="structFRHAPI__PlayerOrderEntry_1a2d7305a8d95bafe240ccdd2e5c2e2a2a"></a>

void ClearExternalTranId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.




### `GetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntry_1a86c989a7caf74d70ecadbea64975954a"></a>

FString & GetExternalItemSku()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalItemSku_Optional, regardless of it having been set.




### `GetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntry_1aac98283b14454dd958d9e00853f27fa0"></a>

const FString & GetExternalItemSku()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalItemSku_Optional, regardless of it having been set.




### `GetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntry_1a5caebf593033675ce76421114ebc7249"></a>

const FString & GetExternalItemSku(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntry_1adbc73633887c8f5beb4d5fd415be4b19"></a>

bool GetExternalItemSku(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.




### `GetExternalItemSkuOrNull` <a id="structFRHAPI__PlayerOrderEntry_1abdb1b9bc98aeb8c25ca3e6c78f535563"></a>

FString * GetExternalItemSkuOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.




### `GetExternalItemSkuOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a3c86d6ae3529df0d08598166e12b3a01"></a>

const FString * GetExternalItemSkuOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.




### `SetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntry_1af3e2edb68f3cdb8f9907e1715c0d6a3b"></a>

void SetExternalItemSku(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.




### `ClearExternalItemSku` <a id="structFRHAPI__PlayerOrderEntry_1abbf77d83ae575ac42a59fd3d0047c255"></a>

void ClearExternalItemSku()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.




### `GetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntry_1af2d9b276c5cd45d45dfabf0ba3d3f52c"></a>

ERHAPI_InventoryBucket & GetUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.




### `GetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntry_1a204feaa82bdd6c2b8dabc618da1b9a42"></a>

const ERHAPI_InventoryBucket & GetUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.




### `GetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntry_1a0f734beaf5c365e15a14b74ec82a0d88"></a>

const ERHAPI_InventoryBucket & GetUseInventoryBucket(const ERHAPI_InventoryBucket & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|DefaultValue|

#### Description

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntry_1a1551a4d915e88701c893193c51928e14"></a>

bool GetUseInventoryBucket(ERHAPI_InventoryBucket & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket &|OutValue|

#### Description

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.




### `GetUseInventoryBucketOrNull` <a id="structFRHAPI__PlayerOrderEntry_1ac88e73a484482896276d91baca133479"></a>

ERHAPI_InventoryBucket * GetUseInventoryBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.




### `GetUseInventoryBucketOrNull` <a id="structFRHAPI__PlayerOrderEntry_1ae606b531d3ab19a0b3a02e662cc4a990"></a>

const ERHAPI_InventoryBucket * GetUseInventoryBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.




### `SetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntry_1a5e27fa6a4aab12f527aa9c6276280691"></a>

void SetUseInventoryBucket(ERHAPI_InventoryBucket NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket|NewValue|

#### Description

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.




### `ClearUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntry_1a29cba9f2e028270fa539a776a3102c2c"></a>

void ClearUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.




### `GetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntry_1aeffd6ea8125edecbb6a98c078bd00826"></a>

int64 & GetPlayerPortalEventId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.




### `GetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntry_1a414d764ae734d8538e8cf6301174bd9a"></a>

const int64 & GetPlayerPortalEventId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.




### `GetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntry_1a70ffa756ae9e80287c00589c33ad60e1"></a>

const int64 & GetPlayerPortalEventId(const int64 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int64 &|DefaultValue|

#### Description

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntry_1a3ea6eb86b7773e876f61c0aa2f266fd7"></a>

bool GetPlayerPortalEventId(int64 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int64 &|OutValue|

#### Description

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayerPortalEventIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1aff75629decc9c9686f46ec4a7730e148"></a>

int64 * GetPlayerPortalEventIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayerPortalEventIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1adae84c8294eb2dc4cb752eab07dda012"></a>

const int64 * GetPlayerPortalEventIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntry_1a4286b389329d54f2a0158161c2ad4593"></a>

void SetPlayerPortalEventId(int64 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int64|NewValue|

#### Description

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.




### `ClearPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntry_1aace3daeb6505ee7fc2a1a356a2cf8e20"></a>

void ClearPlayerPortalEventId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.




### `IsPlayerPortalEventIdDefaultValue` <a id="structFRHAPI__PlayerOrderEntry_1a0ef83ed4fb13f902e26bb4efce9c4303"></a>

bool IsPlayerPortalEventIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerPortalEventId_Optional is set and matches the default value.




### `SetPlayerPortalEventIdToDefault` <a id="structFRHAPI__PlayerOrderEntry_1a47c41382298220a7528123b8fc6742b9"></a>

void SetPlayerPortalEventIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.




### `GetInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1ac9fede46fdd9035921d5d70ca310bbf7"></a>

FGuid & GetInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryId_Optional, regardless of it having been set.




### `GetInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1a6b930684c51c49061d9536ce0247cf3d"></a>

const FGuid & GetInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryId_Optional, regardless of it having been set.




### `GetInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1a70406ca18976e21abda6e728aaf64df8"></a>

const FGuid & GetInventoryId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1a73772840636cbe0c7363934f69c9e502"></a>

bool GetInventoryId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.




### `GetInventoryIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a933e99c13d102b36c6004d034f799c13"></a>

FGuid * GetInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.




### `GetInventoryIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1add6dcbd92d2c0454da1c852caed6baf4"></a>

const FGuid * GetInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.




### `SetInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1af2e76dd3c6a7e1ff10dc97ca16fd1f61"></a>

void SetInventoryId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.




### `ClearInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1a3cf4daf625be6a978edf658722e6c199"></a>

void ClearInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.




### `GetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1ab3b686fdc394ac7c6d3a7fe9b69872b8"></a>

int64 & GetLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.




### `GetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1a6ccbba32959900780ffa18fa3d808433"></a>

const int64 & GetLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.




### `GetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1a57163093778dda9fb49743362746d032"></a>

const int64 & GetLegacyInventoryId(const int64 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int64 &|DefaultValue|

#### Description

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1a134c39a352e5d7bb15a50febf53e6f83"></a>

bool GetLegacyInventoryId(int64 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int64 &|OutValue|

#### Description

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyInventoryIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1af9d72898672515adbbde1ac1f1f4d382"></a>

int64 * GetLegacyInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyInventoryIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a4bb2d2bfa208c9ae7ab341b7568b068a"></a>

const int64 * GetLegacyInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1ad7da2b84ff24468c23427161330caacf"></a>

void SetLegacyInventoryId(int64 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int64|NewValue|

#### Description

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.




### `ClearLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntry_1a61f90b3486b4505540b87f0083dc453b"></a>

void ClearLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.




### `IsLegacyInventoryIdDefaultValue` <a id="structFRHAPI__PlayerOrderEntry_1ac808088c9eeeee7894c5c0cade3c9ff6"></a>

bool IsLegacyInventoryIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LegacyInventoryId_Optional is set and matches the default value.




### `SetLegacyInventoryIdToDefault` <a id="structFRHAPI__PlayerOrderEntry_1a80846e6e79fb29128c25cd5b62713a8d"></a>

void SetLegacyInventoryIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.




### `GetItemId` <a id="structFRHAPI__PlayerOrderEntry_1a3bdf3ebe220fefbd05b806520a788f05"></a>

int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__PlayerOrderEntry_1a13fe98ec07a1c073ecafe3a2614e6e65"></a>

const int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__PlayerOrderEntry_1a5538e5ce666bd7015d8dc3155d3a0bf2"></a>

const int32 & GetItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItemId` <a id="structFRHAPI__PlayerOrderEntry_1a28a395b17d5811c27c708263e2a8dc68"></a>

bool GetItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetItemIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1ae851d8e7e1c0d0908ac597e7cbcee26f"></a>

int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetItemIdOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a216c55487fb5c1407033291c3e94d4c8"></a>

const int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetItemId` <a id="structFRHAPI__PlayerOrderEntry_1abbe6a5d0f962a3437cbb7e3c0996deea"></a>

void SetItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.




### `ClearItemId` <a id="structFRHAPI__PlayerOrderEntry_1a14b63d7e0213d12108a714450a0c48bb"></a>

void ClearItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.




### `IsItemIdDefaultValue` <a id="structFRHAPI__PlayerOrderEntry_1afafe7941ee4f8c1ba75913e7bccacd90"></a>

bool IsItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ItemId_Optional is set and matches the default value.




### `SetItemIdToDefault` <a id="structFRHAPI__PlayerOrderEntry_1ad5816fde2e23de11f7264dcfe1d6316e"></a>

void SetItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.




### `GetExpires` <a id="structFRHAPI__PlayerOrderEntry_1aa9e19607e3e73d44d8cb86d9334f7eac"></a>

FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__PlayerOrderEntry_1affb6dee7edc0040490ada6aea28721e7"></a>

const FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__PlayerOrderEntry_1a8acad92faf486983cba10ba09b918ee1"></a>

const FDateTime & GetExpires(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExpires` <a id="structFRHAPI__PlayerOrderEntry_1a637ab431c4103401d2b7340e4f7c6cf8"></a>

bool GetExpires(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.




### `GetExpiresOrNull` <a id="structFRHAPI__PlayerOrderEntry_1ac49e5ef3019bdcaf471153572a354d28"></a>

FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `GetExpiresOrNull` <a id="structFRHAPI__PlayerOrderEntry_1ab953e4392fc2937a1e663e035d1a5a77"></a>

const FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `SetExpires` <a id="structFRHAPI__PlayerOrderEntry_1a7d50918b0064f88421a4028901c8fdcf"></a>

void SetExpires(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Expires_Optional and also sets Expires_IsSet to true.




### `ClearExpires` <a id="structFRHAPI__PlayerOrderEntry_1a5c4f2f4ec8b12c2aa8d4fa8a2f241498"></a>

void ClearExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Expires_Optional and sets Expires_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__PlayerOrderEntry_1a1de473bae6f8bd843b5ef1ad1d5ccd3b"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlayerOrderEntry_1a90ff4c7a9857e5805e7ac38fa206ede6"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlayerOrderEntry_1a5bdf95e196bda80ec273eb5f2c9d499e"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PlayerOrderEntry_1a38c1fed0ba760bffc5cd8c90f50759b7"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a4230342e92bb25fea6315dc9370a3f8f"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a108f177f47d9ee0d93baf6610a284707"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PlayerOrderEntry_1ad9aeb43279d3f6a52880206e6c68b2bc"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PlayerOrderEntry_1a101f851c2d33e1c2ea7bf66e9776456b"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetEntryId` <a id="structFRHAPI__PlayerOrderEntry_1a1e5d5e7b825570afb662ee33ddaf8e9d"></a>

FString & GetEntryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EntryId.




### `GetEntryId` <a id="structFRHAPI__PlayerOrderEntry_1ad7439831e786838910a9c10002897969"></a>

const FString & GetEntryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EntryId.




### `SetEntryId` <a id="structFRHAPI__PlayerOrderEntry_1a8cdbff09316ba01eb8b3b4b0e9e8b38a"></a>

void SetEntryId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of EntryId.




### `GetResult` <a id="structFRHAPI__PlayerOrderEntry_1a26624058af5e16fe1f312f8cdb5c4041"></a>

ERHAPI_PlayerOrderEntryResult & GetResult()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Result_Optional, regardless of it having been set.




### `GetResult` <a id="structFRHAPI__PlayerOrderEntry_1a48ca58444fc8eb4e363e8412c0735ec5"></a>

const ERHAPI_PlayerOrderEntryResult & GetResult()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Result_Optional, regardless of it having been set.




### `GetResult` <a id="structFRHAPI__PlayerOrderEntry_1a0a7bb45ae2fbcb88c314ae3d72cb91a7"></a>

const ERHAPI_PlayerOrderEntryResult & GetResult(const ERHAPI_PlayerOrderEntryResult & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlayerOrderEntryResult &|DefaultValue|

#### Description

Gets the value of Result_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetResult` <a id="structFRHAPI__PlayerOrderEntry_1aab0ff9878d55188c46aeb50951e7743f"></a>

bool GetResult(ERHAPI_PlayerOrderEntryResult & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlayerOrderEntryResult &|OutValue|

#### Description

Fills OutValue with the value of Result_Optional and returns true if it has been set, otherwise returns false.




### `GetResultOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a4d1ae30fab19768d1d9bca0d439c2f38"></a>

ERHAPI_PlayerOrderEntryResult * GetResultOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.




### `GetResultOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a220d6be84f9c73e91d696ee3b14090e8"></a>

const ERHAPI_PlayerOrderEntryResult * GetResultOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Result_Optional, if it has been set, otherwise returns nullptr.




### `SetResult` <a id="structFRHAPI__PlayerOrderEntry_1aee883cf110523558039a9b3645817a81"></a>

void SetResult(ERHAPI_PlayerOrderEntryResult NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlayerOrderEntryResult|NewValue|

#### Description

Sets the value of Result_Optional and also sets Result_IsSet to true.




### `ClearResult` <a id="structFRHAPI__PlayerOrderEntry_1a2cabb8a7bbcbf0b7d3a29e78778ca63f"></a>

void ClearResult()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Result_Optional and sets Result_IsSet to false.




### `GetDetails` <a id="structFRHAPI__PlayerOrderEntry_1a2c66f35c3ed2c558cc4d2e5394a8a793"></a>

TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & GetDetails()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Details_Optional, regardless of it having been set.




### `GetDetails` <a id="structFRHAPI__PlayerOrderEntry_1ac29d10780822dd2bab54b12716061f32"></a>

const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & GetDetails()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Details_Optional, regardless of it having been set.




### `GetDetails` <a id="structFRHAPI__PlayerOrderEntry_1af726e71b7ad48ad94dc6ce16b2e398af"></a>

const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & GetDetails(const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > &|DefaultValue|

#### Description

Gets the value of Details_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDetails` <a id="structFRHAPI__PlayerOrderEntry_1acd22460bab7ca52aa6609b54384a74b2"></a>

bool GetDetails(TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > &|OutValue|

#### Description

Fills OutValue with the value of Details_Optional and returns true if it has been set, otherwise returns false.




### `GetDetailsOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a9f785a715382e0b2be7639a15e584613"></a>

TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > * GetDetailsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.




### `GetDetailsOrNull` <a id="structFRHAPI__PlayerOrderEntry_1a9332022056f0c03af9c8f38e5ced6417"></a>

const TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > * GetDetailsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Details_Optional, if it has been set, otherwise returns nullptr.




### `SetDetails` <a id="structFRHAPI__PlayerOrderEntry_1ae66fd15d79f4c954382854d192b60d7e"></a>

void SetDetails(TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerOrderDetail](/unreal-plugins/all/structfrhapi__playerorderdetail/#structFRHAPI__PlayerOrderDetail) >|NewValue|

#### Description

Sets the value of Details_Optional and also sets Details_IsSet to true.




### `ClearDetails` <a id="structFRHAPI__PlayerOrderEntry_1a8a6459beef5e0f7622a768e8a880ee38"></a>

void ClearDetails()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Details_Optional and sets Details_IsSet to false.





