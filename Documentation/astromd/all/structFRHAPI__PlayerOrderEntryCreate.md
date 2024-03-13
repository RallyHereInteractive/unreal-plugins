---
title: FRHAPI_PlayerOrderEntryCreate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request to create a Player Order Entry.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_PlayerOrderEntryType|[Type](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1fa012706bd2946dcde63c1fa2977c47)|The type of entry.|
|int32|[LootId_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ac2463f6b1e0d6a92b110a9cf4e91e201)|Unique Identifier for the Loot.|
|bool|[LootId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aca5a3724ab1f9e4729704de2301334b1)|true if LootId_Optional has been set to a value|
|int32|[Quantity](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ac5c8a918403b0fb7a186f23f09e5275f)|Quantity of Inventory.|
|int64|[VendorVersion_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a2dd7448422af895253651727cab1cd72)|Legacy version for the vendor owning the loot_id. Use vendor_etag instead.|
|bool|[VendorVersion_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a2d7bc5619f3d5103d265112747910e21)|true if VendorVersion_Optional has been set to a value|
|FString|[VendorEtag_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a8b6e8b09203f35236c5090e740aae21c)|etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match|
|bool|[VendorEtag_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a53115760d6f8b22ad6c638aeb6641574)|true if VendorEtag_Optional has been set to a value|
|TArray< int32 >|[DynamicBundleLootIds_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5ea4c5bec99ffd7ce5c5554318dd8def)|List of Loot IDs for the dynamic bundle.|
|bool|[DynamicBundleLootIds_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a58ced26c97e05c07687e89ef6136232c)|true if DynamicBundleLootIds_Optional has been set to a value|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice)|[PurchasePrice_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a854b4c83ae188774cadc268527a6d000)||
|bool|[PurchasePrice_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a11544486b2cbee880bec997881ed153a)|true if PurchasePrice_Optional has been set to a value|
|FString|[ExternalTranId_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ad50ae95f36b01d863df9ffecf9aa8813)|External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.|
|bool|[ExternalTranId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a0c65b3dc5ab68ce50108d2278fa738c1)|true if ExternalTranId_Optional has been set to a value|
|FString|[ExternalItemSku_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a628abfaf16250631ed8ca17bfdacf4d5)|External item SKU for the Order Entry.|
|bool|[ExternalItemSku_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a52c353b419d313026cc98bdfa4bf73ce)|true if ExternalItemSku_Optional has been set to a value|
|ERHAPI_InventoryBucket|[UseInventoryBucket_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ad17b3ece98aa9a3cbeae05801baeb9a4)|Inventory Bucket to use for the Order Entry.|
|bool|[UseInventoryBucket_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ae4ed855d09350c568de079dbe4501fc8)|true if UseInventoryBucket_Optional has been set to a value|
|int64|[PlayerPortalEventId_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ab62a785558b7de02eba79ec3c5c28326)|Player Portal Event Id for the Order Entry.|
|bool|[PlayerPortalEventId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ad42e0e3a74b85d227e24f8e392f1f4da)|true if PlayerPortalEventId_Optional has been set to a value|
|FGuid|[InventoryId_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1abffd4007588eba4d0bb386665c1b0e0e)|Unique Identifier for the Inventory.|
|bool|[InventoryId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1afa2e5d18d4ef18e30ecf34615c6b0715)|true if InventoryId_Optional has been set to a value|
|int64|[LegacyInventoryId_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ae8c7bba30205a2835a01e6007f9384f2)|Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].|
|bool|[LegacyInventoryId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a51a6d18e2f705583ec1f1c89e32ac05c)|true if LegacyInventoryId_Optional has been set to a value|
|int32|[ItemId_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ab55f4ff8e86a6c9806c5340ed2fb6a84)|Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].|
|bool|[ItemId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ae5a79822d9b138ed7d1261534314aa44)|true if ItemId_Optional has been set to a value|
|FDateTime|[Expires_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a020075590d344ccee3befe568f934611)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[Expires_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a0363a10ac062ff116dc8b8519df4e401)|true if Expires_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a8cf7cee2a5dd6adf0dd52933d80816fc)|Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5ff907d37f47bc25c1c34e84c7df1beb)|true if CustomData_Optional has been set to a value|
|FString|[EntryId_Optional](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a66b78e5d60374c72a582e7fbc0e43c39)|Unique Identifier for the Order Entry.|
|bool|[EntryId_IsSet](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aa9fe95702360c5b4b535093e153cd595)|true if EntryId_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a00dbaab9eb9ab562c5e67300d09e43e9)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1afa6c78ecbb0eeab423a13355154fd88f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_PlayerOrderEntryType &|[GetType](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a127ccd28750ad7dd2f24c3d0d76f00f6)()|Gets the value of Type.|
|const ERHAPI_PlayerOrderEntryType &|[GetType](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a18237e870be1381ba03757534a1a0b90)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a8ca5f336e3dc7cecd47a588e503bebd0)(ERHAPI_PlayerOrderEntryType NewValue)|Sets the value of Type.|
|int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a48d3fa1adaeb5cf305e6b0a7549612db)()|Gets the value of LootId_Optional, regardless of it having been set.|
|const int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aa5585fb9a47750f43dbfc04b52453543)()|Gets the value of LootId_Optional, regardless of it having been set.|
|const int32 &|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a0ba4fc62d076ac4ee550f8fd1983dc1f)(const int32 & DefaultValue)|Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLootId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ada475c588128f1d26ef60ae4590215aa)(int32 & OutValue)|Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLootIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1acfc1cb2afc99c2bd5fc500cabca81bbb)()|Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLootIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ab788f49c582f88fc142aa9ce9cd4b19c)()|Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLootId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a32e6033ac3ec6cc50f2095e6fae9718c)(int32 NewValue)|Sets the value of LootId_Optional and also sets LootId_IsSet to true.|
|void|[ClearLootId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1316f75e782c1af640b5acedae36e78f)()|Clears the value of LootId_Optional and sets LootId_IsSet to false.|
|bool|[IsLootIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a2796b72ab69a831945889f3171385acc)()|Returns true if LootId_Optional is set and matches the default value.|
|void|[SetLootIdToDefault](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aea4bd2f1244364c06e0ded78b910da26)()|Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.|
|int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ae6184450dc211af7ec1817e523fab6ad)()|Gets the value of Quantity.|
|const int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1c038ad4ac6ebe0bb401af549eda76f3)()|Gets the value of Quantity.|
|void|[SetQuantity](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a04deed2516a669b32bc1fcc009bc3f92)(int32 NewValue)|Sets the value of Quantity.|
|bool|[IsQuantityDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a26f645a9cdf00f6d4b9a2d58da483573)()|Returns true if Quantity matches the default value.|
|void|[SetQuantityToDefault](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1acbb436affceb38f41d1e45f12b83c4ed)()|Sets the value of Quantity to its default|
|int64 &|[GetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a93408f37011baead5532e7df527f2038)()|Gets the value of VendorVersion_Optional, regardless of it having been set.|
|const int64 &|[GetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a088b45859ecfd2a784c07cb0300f6af0)()|Gets the value of VendorVersion_Optional, regardless of it having been set.|
|const int64 &|[GetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a306fce902975290ce6adee4373300945)(const int64 & DefaultValue)|Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aa84099528c357987f9f2177c2035f440)(int64 & OutValue)|Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.|
|int64 *|[GetVendorVersionOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a276e5f61d1c33ab73d3aa98b220d2d4c)()|Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.|
|const int64 *|[GetVendorVersionOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aee191c2bbc292ebf1efef5ba8f23a3a8)()|Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aae9f0d8cb9303c4da4a36c6cfad17aed)(int64 NewValue)|Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.|
|void|[ClearVendorVersion](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a58d48bd5f2290d66a3a1a82d87e53e50)()|Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.|
|bool|[IsVendorVersionDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5605702d2d9d39ae0ca420bd1c90dd57)()|Returns true if VendorVersion_Optional is set and matches the default value.|
|void|[SetVendorVersionToDefault](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aa01d6d198e5854dd6eab4fe1c96978e0)()|Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.|
|FString &|[GetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a2b2a1c4ad3835b0207bcdde88e5e82ef)()|Gets the value of VendorEtag_Optional, regardless of it having been set.|
|const FString &|[GetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a78ed965195fa7ececc6b8ba18b1eb6b0)()|Gets the value of VendorEtag_Optional, regardless of it having been set.|
|const FString &|[GetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a29012cde083724f9445813e4e7897bbc)(const FString & DefaultValue)|Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3c213e6fcd3cc6161d934901d4ec8fac)(FString & OutValue)|Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetVendorEtagOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ade2452c69bf525d6a9425d780807984b)()|Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetVendorEtagOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ad33ef849dc2ef7f7bfff8bf2e1baf97f)()|Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ac967ccee979ec2c8f662acf03588d1a5)(FString NewValue)|Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.|
|void|[ClearVendorEtag](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ac3bbecf820a7fb98ad3e7b63e7e47078)()|Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.|
|TArray< int32 > &|[GetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aeda4d6724fdf806f9965c1d1ebb66c19)()|Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a400ec3ffd43c746db3f992d0794ad91e)()|Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a432c636181927a316baf132c2edf169a)(const TArray< int32 > & DefaultValue)|Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a0ac9512ef9d7722837e661a539096cf4)(TArray< int32 > & OutValue)|Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.|
|TArray< int32 > *|[GetDynamicBundleLootIdsOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3323dc33e1f7e658fe9551d52b9fbfa5)()|Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< int32 > *|[GetDynamicBundleLootIdsOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a4bf58c90cc4fc40db945113c5bac6ec8)()|Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5da0ec869e88147acf972fb3e7287c69)(TArray< int32 > NewValue)|Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.|
|void|[ClearDynamicBundleLootIds](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5b4fb9367e78317c6d476a8793c697a8)()|Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|[GetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a4c543171795452090ef37ca7143f9f94)()|Gets the value of PurchasePrice_Optional, regardless of it having been set.|
|const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|[GetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a69f538d58d0b4dd48d3bd36b7a1f900d)()|Gets the value of PurchasePrice_Optional, regardless of it having been set.|
|const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|[GetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a915fcebc95d9705b597d9b63eb84893d)(const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & DefaultValue)|Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aa60a5f996078c46769c23cfcee8e5312)([FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & OutValue)|Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) *|[GetPurchasePriceOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1d354fe7997b71eaabf0804119764f65)()|Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) *|[GetPurchasePriceOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a830c2529f121e4f67d66ecec3c66352e)()|Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a6a1eabcd3046757e032da5e0b4d94cb7)([FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) NewValue)|Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.|
|void|[ClearPurchasePrice](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3306e94366864b4dc20e685a9f547ee5)()|Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.|
|FString &|[GetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1af392c78682d50af0447cfae2280ede40)()|Gets the value of ExternalTranId_Optional, regardless of it having been set.|
|const FString &|[GetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5976dd3a0b6329c4a3e462eac4a8396b)()|Gets the value of ExternalTranId_Optional, regardless of it having been set.|
|const FString &|[GetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a99f90e56e003e0d766ede92777cc8261)(const FString & DefaultValue)|Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ae7710b165b67366c7ee8fbce8e352c45)(FString & OutValue)|Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetExternalTranIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1acc6abc2bf34fea862bcfa22947643d61)()|Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetExternalTranIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5abf7a0ba78cd57f48750cdb32d8f629)()|Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3d005cf39139d7c5a55097daf4fd8bfe)(FString NewValue)|Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.|
|void|[ClearExternalTranId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3399d3dfc9acc7e167967e661ca59a40)()|Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.|
|FString &|[GetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a7127c9f601f355ae4a8a00d12198d4c0)()|Gets the value of ExternalItemSku_Optional, regardless of it having been set.|
|const FString &|[GetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a9d3b8c82e009945dd44ba88af268e984)()|Gets the value of ExternalItemSku_Optional, regardless of it having been set.|
|const FString &|[GetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a96032163bea3b4bddd100c9748930191)(const FString & DefaultValue)|Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a740ce1be032cf16d3fae07bbc4f6c092)(FString & OutValue)|Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetExternalItemSkuOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ae36da7d278799ea2d72cdf58c0ddb26c)()|Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetExternalItemSkuOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a6bc42672ea2f5968ea3d7b1a0a7313ed)()|Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a457aa2b45d30c0229eca45739789021c)(FString NewValue)|Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.|
|void|[ClearExternalItemSku](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5777501bb5bae1077558336b6aa2248a)()|Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.|
|ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a26dd53779f85fe24b67f0ae9ffbf18e3)()|Gets the value of UseInventoryBucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a0d16503a78546e4d2317ec5172ec4900)()|Gets the value of UseInventoryBucket_Optional, regardless of it having been set.|
|const ERHAPI_InventoryBucket &|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a54000b30efeea21f8e50b7c7420baf3b)(const ERHAPI_InventoryBucket & DefaultValue)|Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ad07e84b42ddd6f5117ee278f2903e60a)(ERHAPI_InventoryBucket & OutValue)|Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InventoryBucket *|[GetUseInventoryBucketOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a11d8b619bdb6da2ff43b96467728aae5)()|Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InventoryBucket *|[GetUseInventoryBucketOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ad475a6304c995f18eb9e3ba2856f1851)()|Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a561502bffde3ba2077f8700631825e8c)(ERHAPI_InventoryBucket NewValue)|Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.|
|void|[ClearUseInventoryBucket](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ac45335b3ac886b81c0cc4d1b32be60fb)()|Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.|
|int64 &|[GetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a5fe25dcff0cb3813133cef87d9400ea7)()|Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.|
|const int64 &|[GetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ac77e02bb6f0d2f2b551cabae0a6ba07e)()|Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.|
|const int64 &|[GetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a7ad3b8f4a37a9bc0d8c34b86a32c950d)(const int64 & DefaultValue)|Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a09d384d8e8d22359bf3328cc986160eb)(int64 & OutValue)|Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.|
|int64 *|[GetPlayerPortalEventIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a027d520837167698ef736dc9c68853ac)()|Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.|
|const int64 *|[GetPlayerPortalEventIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1c37163b4fa04d2a11eb199d07a77644)()|Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3bf96c6162f0e192740c0b3ba9faac4b)(int64 NewValue)|Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.|
|void|[ClearPlayerPortalEventId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a0763f3ac5d2d09f7a9a7fe3a8acb88db)()|Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.|
|bool|[IsPlayerPortalEventIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aa9120f9f0c44edf69151d9507a45071d)()|Returns true if PlayerPortalEventId_Optional is set and matches the default value.|
|void|[SetPlayerPortalEventIdToDefault](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a41473035133b34896b36d91b4cef3e67)()|Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.|
|FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a58bda8763eb8aecbb5bf64e258f06f37)()|Gets the value of InventoryId_Optional, regardless of it having been set.|
|const FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1ae84ed913068008dfb4d5e78b8bbc79)()|Gets the value of InventoryId_Optional, regardless of it having been set.|
|const FGuid &|[GetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3050288b91a1a9428724a64e52dbb099)(const FGuid & DefaultValue)|Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ab72fbe621a2bb397008d271914e082f2)(FGuid & OutValue)|Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetInventoryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a234757b5733e1385a1a18acfe9aac8a3)()|Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetInventoryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ae3ca37eb19d06f652124e7967c09e455)()|Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1af4f7dbbb9a9be3e91e177ba28fab1b43)(FGuid NewValue)|Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.|
|void|[ClearInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ab30e5ba8b651566c581c51ed468cf2ba)()|Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.|
|int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a7caf9e81107b894f8a83d042cb8ab040)()|Gets the value of LegacyInventoryId_Optional, regardless of it having been set.|
|const int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aa605082f6a88a5eb28cc3ab74e18519b)()|Gets the value of LegacyInventoryId_Optional, regardless of it having been set.|
|const int64 &|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1af1881f98fd0c36c408acac9ce99fc7c7)(const int64 & DefaultValue)|Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a869d0f21687d4702970182594441e22d)(int64 & OutValue)|Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.|
|int64 *|[GetLegacyInventoryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a555401f5eb39f6c4859196a09fc005fb)()|Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.|
|const int64 *|[GetLegacyInventoryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1100677e671952545896cd1f8b639a69)()|Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a90976762ce5344ae759b069bd2a2e580)(int64 NewValue)|Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.|
|void|[ClearLegacyInventoryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ad4f06f85a523ff7a0cbdc3ffdc416ca7)()|Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.|
|bool|[IsLegacyInventoryIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1aa5c4549311a4d9ef4ae95f911477c3)()|Returns true if LegacyInventoryId_Optional is set and matches the default value.|
|void|[SetLegacyInventoryIdToDefault](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a80f0444d1ec40a1fce488b7605ed480d)()|Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.|
|int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3b7f1eb57c5b02594dca96af39b31daf)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a3aa4988192d71bd449ab70579e507e5b)()|Gets the value of ItemId_Optional, regardless of it having been set.|
|const int32 &|[GetItemId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a490347eef068b820aa09ac0a850f8692)(const int32 & DefaultValue)|Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItemId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aec03b9e680b7a8ccc3078b3f3990a416)(int32 & OutValue)|Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1afc5586ffe1d87066dc7529503afb2cdd)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetItemIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a7f37045aa5c0d9ba9d8715423a2c19fe)()|Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItemId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a4f53128046c59ecf306b5ed96f37c93a)(int32 NewValue)|Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.|
|void|[ClearItemId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a68d82aa82e3b6da7e552d889c6f5f5fa)()|Clears the value of ItemId_Optional and sets ItemId_IsSet to false.|
|bool|[IsItemIdDefaultValue](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a35554c03c8c0d6fea6444eeb2cc16ef0)()|Returns true if ItemId_Optional is set and matches the default value.|
|void|[SetItemIdToDefault](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ac41a23fa5d60aeb1cdc6d3717414b444)()|Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.|
|FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a58eb06bd84eb4575dd8c5703f018c9fd)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aef235df0528507fa6ce46a4f58c60a77)()|Gets the value of Expires_Optional, regardless of it having been set.|
|const FDateTime &|[GetExpires](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a69a8618de9a6a0ad648c49cdb6bbfdc6)(const FDateTime & DefaultValue)|Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExpires](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a6ccf9c26c1a5e3b9df56b35fd21246d6)(FDateTime & OutValue)|Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a54b8ebe1354bf121ff31dff579d0cf5f)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetExpiresOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a6a8a899e5fa93ae2773e370bacaccf28)()|Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExpires](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1acbd250f7e5402add9d7d624d01ca16ac)(FDateTime NewValue)|Sets the value of Expires_Optional and also sets Expires_IsSet to true.|
|void|[ClearExpires](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1adf4834a96e84876971d4218b6dc4b1bb)()|Clears the value of Expires_Optional and sets Expires_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a95ac703ba6f6b9530e8da2384cc243f3)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1acd2070c949036e6da492ee194815dfb6)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a48badc0e1d347a8a5ca5a53a2a613d4f)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ad24bc9adcec9eea8ba01dae468244876)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1af126307bf6c151509428042ed284d4b0)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1af024594436a2a1a5f7d996bede0f704b)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a1f7120142401c814c85cadf65571a01d)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a0f1e6f6b229dccea43c03a8673e1da66)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FString &|[GetEntryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1aecf9008657b3d37469ec383b34d919e0)()|Gets the value of EntryId_Optional, regardless of it having been set.|
|const FString &|[GetEntryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1acc47106f1a8a1512ad73b4df23ce9221)()|Gets the value of EntryId_Optional, regardless of it having been set.|
|const FString &|[GetEntryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1acb2d3ac776a97875d18ed3405319b480)(const FString & DefaultValue)|Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEntryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a72ecaf752823f224609c10d1ea621bb2)(FString & OutValue)|Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetEntryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a12ff4be29fd0acb3557caaec94ee7d85)()|Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetEntryIdOrNull](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a00deecc007aa981ea2ac38bd548314e3)()|Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEntryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1ac0c8c9c6ca6eb0111b17b889ee6c773d)(FString NewValue)|Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.|
|void|[ClearEntryId](/unreal-plugins/all/structfrhapi__playerorderentrycreate/#structFRHAPI__PlayerOrderEntryCreate_1a77c1568093d12436f97287085abaf82e)()|Clears the value of EntryId_Optional and sets EntryId_IsSet to false.|
## Public Attributes



### `Type` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1fa012706bd2946dcde63c1fa2977c47"></a>

`ERHAPI_PlayerOrderEntryType FRHAPI_PlayerOrderEntryCreate::Type`

The type of entry.




### `LootId_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac2463f6b1e0d6a92b110a9cf4e91e201"></a>

`int32 FRHAPI_PlayerOrderEntryCreate::LootId_Optional`

Unique Identifier for the Loot.




### `LootId_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1aca5a3724ab1f9e4729704de2301334b1"></a>

`bool FRHAPI_PlayerOrderEntryCreate::LootId_IsSet`

true if LootId_Optional has been set to a value




### `Quantity` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac5c8a918403b0fb7a186f23f09e5275f"></a>

`int32 FRHAPI_PlayerOrderEntryCreate::Quantity`

Quantity of Inventory.




### `VendorVersion_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2dd7448422af895253651727cab1cd72"></a>

`int64 FRHAPI_PlayerOrderEntryCreate::VendorVersion_Optional`

Legacy version for the vendor owning the loot_id. Use vendor_etag instead.




### `VendorVersion_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2d7bc5619f3d5103d265112747910e21"></a>

`bool FRHAPI_PlayerOrderEntryCreate::VendorVersion_IsSet`

true if VendorVersion_Optional has been set to a value




### `VendorEtag_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1a8b6e8b09203f35236c5090e740aae21c"></a>

`FString FRHAPI_PlayerOrderEntryCreate::VendorEtag_Optional`

etag for the vendor owning the loot_id. Will fail the fulfillment if they do not match




### `VendorEtag_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a53115760d6f8b22ad6c638aeb6641574"></a>

`bool FRHAPI_PlayerOrderEntryCreate::VendorEtag_IsSet`

true if VendorEtag_Optional has been set to a value




### `DynamicBundleLootIds_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5ea4c5bec99ffd7ce5c5554318dd8def"></a>

`TArray<int32> FRHAPI_PlayerOrderEntryCreate::DynamicBundleLootIds_Optional`

List of Loot IDs for the dynamic bundle.




### `DynamicBundleLootIds_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a58ced26c97e05c07687e89ef6136232c"></a>

`bool FRHAPI_PlayerOrderEntryCreate::DynamicBundleLootIds_IsSet`

true if DynamicBundleLootIds_Optional has been set to a value




### `PurchasePrice_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1a854b4c83ae188774cadc268527a6d000"></a>

`FRHAPI_PurchasePrice FRHAPI_PlayerOrderEntryCreate::PurchasePrice_Optional`






### `PurchasePrice_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a11544486b2cbee880bec997881ed153a"></a>

`bool FRHAPI_PlayerOrderEntryCreate::PurchasePrice_IsSet`

true if PurchasePrice_Optional has been set to a value




### `ExternalTranId_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad50ae95f36b01d863df9ffecf9aa8813"></a>

`FString FRHAPI_PlayerOrderEntryCreate::ExternalTranId_Optional`

External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types.




### `ExternalTranId_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0c65b3dc5ab68ce50108d2278fa738c1"></a>

`bool FRHAPI_PlayerOrderEntryCreate::ExternalTranId_IsSet`

true if ExternalTranId_Optional has been set to a value




### `ExternalItemSku_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1a628abfaf16250631ed8ca17bfdacf4d5"></a>

`FString FRHAPI_PlayerOrderEntryCreate::ExternalItemSku_Optional`

External item SKU for the Order Entry.




### `ExternalItemSku_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a52c353b419d313026cc98bdfa4bf73ce"></a>

`bool FRHAPI_PlayerOrderEntryCreate::ExternalItemSku_IsSet`

true if ExternalItemSku_Optional has been set to a value




### `UseInventoryBucket_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad17b3ece98aa9a3cbeae05801baeb9a4"></a>

`ERHAPI_InventoryBucket FRHAPI_PlayerOrderEntryCreate::UseInventoryBucket_Optional`

Inventory Bucket to use for the Order Entry.




### `UseInventoryBucket_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae4ed855d09350c568de079dbe4501fc8"></a>

`bool FRHAPI_PlayerOrderEntryCreate::UseInventoryBucket_IsSet`

true if UseInventoryBucket_Optional has been set to a value




### `PlayerPortalEventId_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab62a785558b7de02eba79ec3c5c28326"></a>

`int64 FRHAPI_PlayerOrderEntryCreate::PlayerPortalEventId_Optional`

Player Portal Event Id for the Order Entry.




### `PlayerPortalEventId_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad42e0e3a74b85d227e24f8e392f1f4da"></a>

`bool FRHAPI_PlayerOrderEntryCreate::PlayerPortalEventId_IsSet`

true if PlayerPortalEventId_Optional has been set to a value




### `InventoryId_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1abffd4007588eba4d0bb386665c1b0e0e"></a>

`FGuid FRHAPI_PlayerOrderEntryCreate::InventoryId_Optional`

Unique Identifier for the Inventory.




### `InventoryId_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1afa2e5d18d4ef18e30ecf34615c6b0715"></a>

`bool FRHAPI_PlayerOrderEntryCreate::InventoryId_IsSet`

true if InventoryId_Optional has been set to a value




### `LegacyInventoryId_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae8c7bba30205a2835a01e6007f9384f2"></a>

`int64 FRHAPI_PlayerOrderEntryCreate::LegacyInventoryId_Optional`

Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY].




### `LegacyInventoryId_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a51a6d18e2f705583ec1f1c89e32ac05c"></a>

`bool FRHAPI_PlayerOrderEntryCreate::LegacyInventoryId_IsSet`

true if LegacyInventoryId_Optional has been set to a value




### `ItemId_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab55f4ff8e86a6c9806c5340ed2fb6a84"></a>

`int32 FRHAPI_PlayerOrderEntryCreate::ItemId_Optional`

Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY].




### `ItemId_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae5a79822d9b138ed7d1261534314aa44"></a>

`bool FRHAPI_PlayerOrderEntryCreate::ItemId_IsSet`

true if ItemId_Optional has been set to a value




### `Expires_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1a020075590d344ccee3befe568f934611"></a>

`FDateTime FRHAPI_PlayerOrderEntryCreate::Expires_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Expires_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0363a10ac062ff116dc8b8519df4e401"></a>

`bool FRHAPI_PlayerOrderEntryCreate::Expires_IsSet`

true if Expires_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1a8cf7cee2a5dd6adf0dd52933d80816fc"></a>

`TMap<FString, FString> FRHAPI_PlayerOrderEntryCreate::CustomData_Optional`

Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY].




### `CustomData_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5ff907d37f47bc25c1c34e84c7df1beb"></a>

`bool FRHAPI_PlayerOrderEntryCreate::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `EntryId_Optional` <a id="structFRHAPI__PlayerOrderEntryCreate_1a66b78e5d60374c72a582e7fbc0e43c39"></a>

`FString FRHAPI_PlayerOrderEntryCreate::EntryId_Optional`

Unique Identifier for the Order Entry.




### `EntryId_IsSet` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa9fe95702360c5b4b535093e153cd595"></a>

`bool FRHAPI_PlayerOrderEntryCreate::EntryId_IsSet`

true if EntryId_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerOrderEntryCreate_1a00dbaab9eb9ab562c5e67300d09e43e9"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerOrderEntryCreate_1afa6c78ecbb0eeab423a13355154fd88f"></a>

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



### `GetType` <a id="structFRHAPI__PlayerOrderEntryCreate_1a127ccd28750ad7dd2f24c3d0d76f00f6"></a>

ERHAPI_PlayerOrderEntryType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__PlayerOrderEntryCreate_1a18237e870be1381ba03757534a1a0b90"></a>

const ERHAPI_PlayerOrderEntryType & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__PlayerOrderEntryCreate_1a8ca5f336e3dc7cecd47a588e503bebd0"></a>

void SetType(ERHAPI_PlayerOrderEntryType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlayerOrderEntryType|NewValue|

#### Description

Sets the value of Type.




### `GetLootId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a48d3fa1adaeb5cf305e6b0a7549612db"></a>

int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LootId_Optional, regardless of it having been set.




### `GetLootId` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa5585fb9a47750f43dbfc04b52453543"></a>

const int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LootId_Optional, regardless of it having been set.




### `GetLootId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0ba4fc62d076ac4ee550f8fd1983dc1f"></a>

const int32 & GetLootId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLootId` <a id="structFRHAPI__PlayerOrderEntryCreate_1ada475c588128f1d26ef60ae4590215aa"></a>

bool GetLootId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.




### `GetLootIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1acfc1cb2afc99c2bd5fc500cabca81bbb"></a>

int32 * GetLootIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.




### `GetLootIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab788f49c582f88fc142aa9ce9cd4b19c"></a>

const int32 * GetLootIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.




### `SetLootId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a32e6033ac3ec6cc50f2095e6fae9718c"></a>

void SetLootId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LootId_Optional and also sets LootId_IsSet to true.




### `ClearLootId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1316f75e782c1af640b5acedae36e78f"></a>

void ClearLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LootId_Optional and sets LootId_IsSet to false.




### `IsLootIdDefaultValue` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2796b72ab69a831945889f3171385acc"></a>

bool IsLootIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LootId_Optional is set and matches the default value.




### `SetLootIdToDefault` <a id="structFRHAPI__PlayerOrderEntryCreate_1aea4bd2f1244364c06e0ded78b910da26"></a>

void SetLootIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.




### `GetQuantity` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae6184450dc211af7ec1817e523fab6ad"></a>

int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity.




### `GetQuantity` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1c038ad4ac6ebe0bb401af549eda76f3"></a>

const int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity.




### `SetQuantity` <a id="structFRHAPI__PlayerOrderEntryCreate_1a04deed2516a669b32bc1fcc009bc3f92"></a>

void SetQuantity(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Quantity.




### `IsQuantityDefaultValue` <a id="structFRHAPI__PlayerOrderEntryCreate_1a26f645a9cdf00f6d4b9a2d58da483573"></a>

bool IsQuantityDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Quantity matches the default value.




### `SetQuantityToDefault` <a id="structFRHAPI__PlayerOrderEntryCreate_1acbb436affceb38f41d1e45f12b83c4ed"></a>

void SetQuantityToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Quantity to its default




### `GetVendorVersion` <a id="structFRHAPI__PlayerOrderEntryCreate_1a93408f37011baead5532e7df527f2038"></a>

int64 & GetVendorVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorVersion_Optional, regardless of it having been set.




### `GetVendorVersion` <a id="structFRHAPI__PlayerOrderEntryCreate_1a088b45859ecfd2a784c07cb0300f6af0"></a>

const int64 & GetVendorVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorVersion_Optional, regardless of it having been set.




### `GetVendorVersion` <a id="structFRHAPI__PlayerOrderEntryCreate_1a306fce902975290ce6adee4373300945"></a>

const int64 & GetVendorVersion(const int64 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int64 &|DefaultValue|

#### Description

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVendorVersion` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa84099528c357987f9f2177c2035f440"></a>

bool GetVendorVersion(int64 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int64 &|OutValue|

#### Description

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.




### `GetVendorVersionOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a276e5f61d1c33ab73d3aa98b220d2d4c"></a>

int64 * GetVendorVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.




### `GetVendorVersionOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1aee191c2bbc292ebf1efef5ba8f23a3a8"></a>

const int64 * GetVendorVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.




### `SetVendorVersion` <a id="structFRHAPI__PlayerOrderEntryCreate_1aae9f0d8cb9303c4da4a36c6cfad17aed"></a>

void SetVendorVersion(int64 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int64|NewValue|

#### Description

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.




### `ClearVendorVersion` <a id="structFRHAPI__PlayerOrderEntryCreate_1a58d48bd5f2290d66a3a1a82d87e53e50"></a>

void ClearVendorVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.




### `IsVendorVersionDefaultValue` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5605702d2d9d39ae0ca420bd1c90dd57"></a>

bool IsVendorVersionDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if VendorVersion_Optional is set and matches the default value.




### `SetVendorVersionToDefault` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa01d6d198e5854dd6eab4fe1c96978e0"></a>

void SetVendorVersionToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.




### `GetVendorEtag` <a id="structFRHAPI__PlayerOrderEntryCreate_1a2b2a1c4ad3835b0207bcdde88e5e82ef"></a>

FString & GetVendorEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorEtag_Optional, regardless of it having been set.




### `GetVendorEtag` <a id="structFRHAPI__PlayerOrderEntryCreate_1a78ed965195fa7ececc6b8ba18b1eb6b0"></a>

const FString & GetVendorEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of VendorEtag_Optional, regardless of it having been set.




### `GetVendorEtag` <a id="structFRHAPI__PlayerOrderEntryCreate_1a29012cde083724f9445813e4e7897bbc"></a>

const FString & GetVendorEtag(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVendorEtag` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3c213e6fcd3cc6161d934901d4ec8fac"></a>

bool GetVendorEtag(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.




### `GetVendorEtagOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1ade2452c69bf525d6a9425d780807984b"></a>

FString * GetVendorEtagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.




### `GetVendorEtagOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad33ef849dc2ef7f7bfff8bf2e1baf97f"></a>

const FString * GetVendorEtagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.




### `SetVendorEtag` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac967ccee979ec2c8f662acf03588d1a5"></a>

void SetVendorEtag(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.




### `ClearVendorEtag` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac3bbecf820a7fb98ad3e7b63e7e47078"></a>

void ClearVendorEtag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.




### `GetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntryCreate_1aeda4d6724fdf806f9965c1d1ebb66c19"></a>

TArray< int32 > & GetDynamicBundleLootIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.




### `GetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntryCreate_1a400ec3ffd43c746db3f992d0794ad91e"></a>

const TArray< int32 > & GetDynamicBundleLootIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.




### `GetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntryCreate_1a432c636181927a316baf132c2edf169a"></a>

const TArray< int32 > & GetDynamicBundleLootIds(const TArray< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|DefaultValue|

#### Description

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0ac9512ef9d7722837e661a539096cf4"></a>

bool GetDynamicBundleLootIds(TArray< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 > &|OutValue|

#### Description

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.




### `GetDynamicBundleLootIdsOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3323dc33e1f7e658fe9551d52b9fbfa5"></a>

TArray< int32 > * GetDynamicBundleLootIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.




### `GetDynamicBundleLootIdsOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4bf58c90cc4fc40db945113c5bac6ec8"></a>

const TArray< int32 > * GetDynamicBundleLootIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.




### `SetDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5da0ec869e88147acf972fb3e7287c69"></a>

void SetDynamicBundleLootIds(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.




### `ClearDynamicBundleLootIds` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5b4fb9367e78317c6d476a8793c697a8"></a>

void ClearDynamicBundleLootIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.




### `GetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4c543171795452090ef37ca7143f9f94"></a>

[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & GetPurchasePrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PurchasePrice_Optional, regardless of it having been set.




### `GetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntryCreate_1a69f538d58d0b4dd48d3bd36b7a1f900d"></a>

const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & GetPurchasePrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PurchasePrice_Optional, regardless of it having been set.




### `GetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntryCreate_1a915fcebc95d9705b597d9b63eb84893d"></a>

const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & GetPurchasePrice(const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|DefaultValue|

#### Description

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa60a5f996078c46769c23cfcee8e5312"></a>

bool GetPurchasePrice([FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) &|OutValue|

#### Description

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.




### `GetPurchasePriceOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1d354fe7997b71eaabf0804119764f65"></a>

[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) * GetPurchasePriceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.




### `GetPurchasePriceOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a830c2529f121e4f67d66ecec3c66352e"></a>

const [FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) * GetPurchasePriceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.




### `SetPurchasePrice` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6a1eabcd3046757e032da5e0b4d94cb7"></a>

void SetPurchasePrice([FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_PurchasePrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice)|NewValue|

#### Description

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.




### `ClearPurchasePrice` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3306e94366864b4dc20e685a9f547ee5"></a>

void ClearPurchasePrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.




### `GetExternalTranId` <a id="structFRHAPI__PlayerOrderEntryCreate_1af392c78682d50af0447cfae2280ede40"></a>

FString & GetExternalTranId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalTranId_Optional, regardless of it having been set.




### `GetExternalTranId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5976dd3a0b6329c4a3e462eac4a8396b"></a>

const FString & GetExternalTranId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalTranId_Optional, regardless of it having been set.




### `GetExternalTranId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a99f90e56e003e0d766ede92777cc8261"></a>

const FString & GetExternalTranId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExternalTranId` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae7710b165b67366c7ee8fbce8e352c45"></a>

bool GetExternalTranId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.




### `GetExternalTranIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1acc6abc2bf34fea862bcfa22947643d61"></a>

FString * GetExternalTranIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.




### `GetExternalTranIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5abf7a0ba78cd57f48750cdb32d8f629"></a>

const FString * GetExternalTranIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.




### `SetExternalTranId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3d005cf39139d7c5a55097daf4fd8bfe"></a>

void SetExternalTranId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.




### `ClearExternalTranId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3399d3dfc9acc7e167967e661ca59a40"></a>

void ClearExternalTranId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.




### `GetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7127c9f601f355ae4a8a00d12198d4c0"></a>

FString & GetExternalItemSku()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalItemSku_Optional, regardless of it having been set.




### `GetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntryCreate_1a9d3b8c82e009945dd44ba88af268e984"></a>

const FString & GetExternalItemSku()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalItemSku_Optional, regardless of it having been set.




### `GetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntryCreate_1a96032163bea3b4bddd100c9748930191"></a>

const FString & GetExternalItemSku(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntryCreate_1a740ce1be032cf16d3fae07bbc4f6c092"></a>

bool GetExternalItemSku(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.




### `GetExternalItemSkuOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae36da7d278799ea2d72cdf58c0ddb26c"></a>

FString * GetExternalItemSkuOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.




### `GetExternalItemSkuOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6bc42672ea2f5968ea3d7b1a0a7313ed"></a>

const FString * GetExternalItemSkuOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.




### `SetExternalItemSku` <a id="structFRHAPI__PlayerOrderEntryCreate_1a457aa2b45d30c0229eca45739789021c"></a>

void SetExternalItemSku(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.




### `ClearExternalItemSku` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5777501bb5bae1077558336b6aa2248a"></a>

void ClearExternalItemSku()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.




### `GetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntryCreate_1a26dd53779f85fe24b67f0ae9ffbf18e3"></a>

ERHAPI_InventoryBucket & GetUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.




### `GetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0d16503a78546e4d2317ec5172ec4900"></a>

const ERHAPI_InventoryBucket & GetUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.




### `GetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntryCreate_1a54000b30efeea21f8e50b7c7420baf3b"></a>

const ERHAPI_InventoryBucket & GetUseInventoryBucket(const ERHAPI_InventoryBucket & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|DefaultValue|

#### Description

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad07e84b42ddd6f5117ee278f2903e60a"></a>

bool GetUseInventoryBucket(ERHAPI_InventoryBucket & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket &|OutValue|

#### Description

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.




### `GetUseInventoryBucketOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a11d8b619bdb6da2ff43b96467728aae5"></a>

ERHAPI_InventoryBucket * GetUseInventoryBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.




### `GetUseInventoryBucketOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad475a6304c995f18eb9e3ba2856f1851"></a>

const ERHAPI_InventoryBucket * GetUseInventoryBucketOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.




### `SetUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntryCreate_1a561502bffde3ba2077f8700631825e8c"></a>

void SetUseInventoryBucket(ERHAPI_InventoryBucket NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InventoryBucket|NewValue|

#### Description

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.




### `ClearUseInventoryBucket` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac45335b3ac886b81c0cc4d1b32be60fb"></a>

void ClearUseInventoryBucket()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.




### `GetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a5fe25dcff0cb3813133cef87d9400ea7"></a>

int64 & GetPlayerPortalEventId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.




### `GetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac77e02bb6f0d2f2b551cabae0a6ba07e"></a>

const int64 & GetPlayerPortalEventId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.




### `GetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7ad3b8f4a37a9bc0d8c34b86a32c950d"></a>

const int64 & GetPlayerPortalEventId(const int64 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int64 &|DefaultValue|

#### Description

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a09d384d8e8d22359bf3328cc986160eb"></a>

bool GetPlayerPortalEventId(int64 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int64 &|OutValue|

#### Description

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayerPortalEventIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a027d520837167698ef736dc9c68853ac"></a>

int64 * GetPlayerPortalEventIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayerPortalEventIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1c37163b4fa04d2a11eb199d07a77644"></a>

const int64 * GetPlayerPortalEventIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3bf96c6162f0e192740c0b3ba9faac4b"></a>

void SetPlayerPortalEventId(int64 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int64|NewValue|

#### Description

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.




### `ClearPlayerPortalEventId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0763f3ac5d2d09f7a9a7fe3a8acb88db"></a>

void ClearPlayerPortalEventId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.




### `IsPlayerPortalEventIdDefaultValue` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa9120f9f0c44edf69151d9507a45071d"></a>

bool IsPlayerPortalEventIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerPortalEventId_Optional is set and matches the default value.




### `SetPlayerPortalEventIdToDefault` <a id="structFRHAPI__PlayerOrderEntryCreate_1a41473035133b34896b36d91b4cef3e67"></a>

void SetPlayerPortalEventIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.




### `GetInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a58bda8763eb8aecbb5bf64e258f06f37"></a>

FGuid & GetInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryId_Optional, regardless of it having been set.




### `GetInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1ae84ed913068008dfb4d5e78b8bbc79"></a>

const FGuid & GetInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InventoryId_Optional, regardless of it having been set.




### `GetInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3050288b91a1a9428724a64e52dbb099"></a>

const FGuid & GetInventoryId(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab72fbe621a2bb397008d271914e082f2"></a>

bool GetInventoryId(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.




### `GetInventoryIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a234757b5733e1385a1a18acfe9aac8a3"></a>

FGuid * GetInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.




### `GetInventoryIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1ae3ca37eb19d06f652124e7967c09e455"></a>

const FGuid * GetInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.




### `SetInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1af4f7dbbb9a9be3e91e177ba28fab1b43"></a>

void SetInventoryId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.




### `ClearInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1ab30e5ba8b651566c581c51ed468cf2ba"></a>

void ClearInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.




### `GetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7caf9e81107b894f8a83d042cb8ab040"></a>

int64 & GetLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.




### `GetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1aa605082f6a88a5eb28cc3ab74e18519b"></a>

const int64 & GetLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.




### `GetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1af1881f98fd0c36c408acac9ce99fc7c7"></a>

const int64 & GetLegacyInventoryId(const int64 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int64 &|DefaultValue|

#### Description

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a869d0f21687d4702970182594441e22d"></a>

bool GetLegacyInventoryId(int64 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int64 &|OutValue|

#### Description

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyInventoryIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a555401f5eb39f6c4859196a09fc005fb"></a>

int64 * GetLegacyInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyInventoryIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1100677e671952545896cd1f8b639a69"></a>

const int64 * GetLegacyInventoryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a90976762ce5344ae759b069bd2a2e580"></a>

void SetLegacyInventoryId(int64 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int64|NewValue|

#### Description

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.




### `ClearLegacyInventoryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad4f06f85a523ff7a0cbdc3ffdc416ca7"></a>

void ClearLegacyInventoryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.




### `IsLegacyInventoryIdDefaultValue` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1aa5c4549311a4d9ef4ae95f911477c3"></a>

bool IsLegacyInventoryIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LegacyInventoryId_Optional is set and matches the default value.




### `SetLegacyInventoryIdToDefault` <a id="structFRHAPI__PlayerOrderEntryCreate_1a80f0444d1ec40a1fce488b7605ed480d"></a>

void SetLegacyInventoryIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.




### `GetItemId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3b7f1eb57c5b02594dca96af39b31daf"></a>

int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a3aa4988192d71bd449ab70579e507e5b"></a>

const int32 & GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ItemId_Optional, regardless of it having been set.




### `GetItemId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a490347eef068b820aa09ac0a850f8692"></a>

const int32 & GetItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItemId` <a id="structFRHAPI__PlayerOrderEntryCreate_1aec03b9e680b7a8ccc3078b3f3990a416"></a>

bool GetItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetItemIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1afc5586ffe1d87066dc7529503afb2cdd"></a>

int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetItemIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a7f37045aa5c0d9ba9d8715423a2c19fe"></a>

const int32 * GetItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetItemId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a4f53128046c59ecf306b5ed96f37c93a"></a>

void SetItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.




### `ClearItemId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a68d82aa82e3b6da7e552d889c6f5f5fa"></a>

void ClearItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.




### `IsItemIdDefaultValue` <a id="structFRHAPI__PlayerOrderEntryCreate_1a35554c03c8c0d6fea6444eeb2cc16ef0"></a>

bool IsItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ItemId_Optional is set and matches the default value.




### `SetItemIdToDefault` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac41a23fa5d60aeb1cdc6d3717414b444"></a>

void SetItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.




### `GetExpires` <a id="structFRHAPI__PlayerOrderEntryCreate_1a58eb06bd84eb4575dd8c5703f018c9fd"></a>

FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__PlayerOrderEntryCreate_1aef235df0528507fa6ce46a4f58c60a77"></a>

const FDateTime & GetExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Expires_Optional, regardless of it having been set.




### `GetExpires` <a id="structFRHAPI__PlayerOrderEntryCreate_1a69a8618de9a6a0ad648c49cdb6bbfdc6"></a>

const FDateTime & GetExpires(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExpires` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6ccf9c26c1a5e3b9df56b35fd21246d6"></a>

bool GetExpires(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.




### `GetExpiresOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a54b8ebe1354bf121ff31dff579d0cf5f"></a>

FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `GetExpiresOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a6a8a899e5fa93ae2773e370bacaccf28"></a>

const FDateTime * GetExpiresOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.




### `SetExpires` <a id="structFRHAPI__PlayerOrderEntryCreate_1acbd250f7e5402add9d7d624d01ca16ac"></a>

void SetExpires(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Expires_Optional and also sets Expires_IsSet to true.




### `ClearExpires` <a id="structFRHAPI__PlayerOrderEntryCreate_1adf4834a96e84876971d4218b6dc4b1bb"></a>

void ClearExpires()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Expires_Optional and sets Expires_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__PlayerOrderEntryCreate_1a95ac703ba6f6b9530e8da2384cc243f3"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlayerOrderEntryCreate_1acd2070c949036e6da492ee194815dfb6"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlayerOrderEntryCreate_1a48badc0e1d347a8a5ca5a53a2a613d4f"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PlayerOrderEntryCreate_1ad24bc9adcec9eea8ba01dae468244876"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1af126307bf6c151509428042ed284d4b0"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1af024594436a2a1a5f7d996bede0f704b"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PlayerOrderEntryCreate_1a1f7120142401c814c85cadf65571a01d"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PlayerOrderEntryCreate_1a0f1e6f6b229dccea43c03a8673e1da66"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetEntryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1aecf9008657b3d37469ec383b34d919e0"></a>

FString & GetEntryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EntryId_Optional, regardless of it having been set.




### `GetEntryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1acc47106f1a8a1512ad73b4df23ce9221"></a>

const FString & GetEntryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EntryId_Optional, regardless of it having been set.




### `GetEntryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1acb2d3ac776a97875d18ed3405319b480"></a>

const FString & GetEntryId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEntryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a72ecaf752823f224609c10d1ea621bb2"></a>

bool GetEntryId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.




### `GetEntryIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a12ff4be29fd0acb3557caaec94ee7d85"></a>

FString * GetEntryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.




### `GetEntryIdOrNull` <a id="structFRHAPI__PlayerOrderEntryCreate_1a00deecc007aa981ea2ac38bd548314e3"></a>

const FString * GetEntryIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.




### `SetEntryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1ac0c8c9c6ca6eb0111b17b889ee6c773d"></a>

void SetEntryId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.




### `ClearEntryId` <a id="structFRHAPI__PlayerOrderEntryCreate_1a77c1568093d12436f97287085abaf82e"></a>

void ClearEntryId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.





