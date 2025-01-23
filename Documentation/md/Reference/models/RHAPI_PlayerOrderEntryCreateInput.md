---
title: RHAPI_PlayerOrderEntryCreateInput
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderEntryCreateInput`](#structFRHAPI__PlayerOrderEntryCreateInput) | Request to create a Player Order Entry.

## struct `FRHAPI_PlayerOrderEntryCreateInput` <a id="structFRHAPI__PlayerOrderEntryCreateInput"></a>

```
struct FRHAPI_PlayerOrderEntryCreateInput
  : public FRHAPI_Model
```

Request to create a Player Order Entry.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7f9a7d2f8c8ff9667d7715db3218e35e) | 
`public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af970d69ca2166b98a872eb2e714903ab) | 
`public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a36cbff5a6a6c2fe0d776040faa07282c) | true if LootId_Optional has been set to a value
`public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a492d4c8d00cdfb97de1a500409a97129) | true if LootId_Optional has been explicitly set to null
`public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8bdaeb1caf17d7f4a859526e976a7272) | Quantity of Inventory.
`public int32 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a31ed236560b651d7a0ed05ffc529a634) | 
`public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9ba8bf03ffbf488b1e5b1fc965a718c5) | true if VendorVersion_Optional has been set to a value
`public bool `[`VendorVersion_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4beba7ed6f3bdd3b2de1f2f25d9985df) | true if VendorVersion_Optional has been explicitly set to null
`public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1aab0c3e3e5b36f5c5b33e4211322a5941) | 
`public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a57fd08c69197670160fbe9dcb163e3bc) | true if VendorEtag_Optional has been set to a value
`public bool `[`VendorEtag_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3edd2a0088ec49c83520aec8457998c0) | true if VendorEtag_Optional has been explicitly set to null
`public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f120dee684a976f7f832dc3e95d61bc) | 
`public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a257fd734e81f8a08a863882e662e5bea) | true if DynamicBundleLootIds_Optional has been set to a value
`public bool `[`DynamicBundleLootIds_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8cace39181ef5fd501fb4465e3191a19) | true if DynamicBundleLootIds_Optional has been explicitly set to null
`public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa2510206697ece77b6a7f5347d107077) | 
`public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad51da12b4ced381b4478bb2c7308285e) | true if PurchasePrice_Optional has been set to a value
`public bool `[`PurchasePrice_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3058369daa032e828d9b103275172eb1) | true if PurchasePrice_Optional has been explicitly set to null
`public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0efe037b4e95bc0ded53c43306d3a2e1) | 
`public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a69ea67d4af315508ec7fcb3cb24d40ec) | true if ExternalTranId_Optional has been set to a value
`public bool `[`ExternalTranId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab58cd36e15aa0c1ddcf471f6851a26a9) | true if ExternalTranId_Optional has been explicitly set to null
`public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1a5c6685cb8cb4b4f973b18cbd528c73) | 
`public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9e96e4d8fb7c8bf81ab5d1d3b65d6038) | true if ExternalItemSku_Optional has been set to a value
`public bool `[`ExternalItemSku_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4a383f372c5d71bb6b7659b3cd09dde2) | true if ExternalItemSku_Optional has been explicitly set to null
`public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac708cc5b9e6ff382f095056506a95319) | 
`public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1c2e14fb68c07a7feccac76f27939883) | true if UseInventoryBucket_Optional has been set to a value
`public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7951adf5b3a146e6f8b4024086ca3467) | true if UseInventoryBucket_Optional has been explicitly set to null
`public int32 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3a3608b8ecb0f631eff0386d8331b02d) | 
`public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a62238aa4d870c4ff55a9e397ae9dfb52) | true if PlayerPortalEventId_Optional has been set to a value
`public bool `[`PlayerPortalEventId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1af87410951e25ba016c2a582df334298d) | true if PlayerPortalEventId_Optional has been explicitly set to null
`public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f9c09a053ece2bd2d3edc310e38562b) | 
`public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a20a2f8c1986ea67139779328c4a22549) | true if InventoryId_Optional has been set to a value
`public bool `[`InventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8127b9ff19292a5f0caea9bb8d7c63c2) | true if InventoryId_Optional has been explicitly set to null
`public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a058a9918fc97f111cd696427ca93e476) | 
`public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa1385add83520e86262b9f43070db8d0) | true if LegacyInventoryId_Optional has been set to a value
`public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a42c4f6087244ee4913a645425497fc15) | true if LegacyInventoryId_Optional has been explicitly set to null
`public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6e7c7cad1771944c6d27bea36601ed28) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a12e8ccc9a2f6507a1679fcfbdde8953f) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a837221e26c04db9ee97c2c02afb9a0e6) | true if ItemId_Optional has been explicitly set to null
`public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a018c7ab834b952f84e95363802a489c3) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a437cd9a08ca38e7c1ed14eb7cf42cd9d) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2247b74e4faa1e58413c98363cc9e913) | true if Expires_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad44b91659bd5dceb8adb50e712fa4361) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a49f84ec14f9a8ed1f0167581b8b6a554) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5e6ab4eb59b19bd692b47160768072e7) | true if CustomData_Optional has been explicitly set to null
`public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af86fdb44a8c8a2761d912893f52d514c) | 
`public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a34631be1448f2411ed4bbe5c41a711a7) | true if EntryId_Optional has been set to a value
`public bool `[`EntryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abfa4e3b5a78d2adf154f8560a62964ab) | true if EntryId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad9e7c773f775dc4014dba35b7c44b4e3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreateInput_1a35c190ae0a3369542ee9bb3f88537370)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1abfdd45d1a59385b0eda2f1e0e35fa194)`()` | Gets the value of Type.
`public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaa15ccc96d182145298fc832184bea4e)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a282e2b4c2757a2b2b255ec8582a66415)`(const ERHAPI_PlayerOrderEntryType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa91b71091f2b576a09c7df2d6d95d1cf)`(ERHAPI_PlayerOrderEntryType && NewValue)` | Sets the value of Type using move semantics.
`public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1d46c5245eb07f9cb5de18b0af17955c)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a617881c985ca3262d2a33077752aa95c)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8bd197e92500d76c5dfea722142511cf)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a232186e22a1c55c110580632f2d92096)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab9d46ad8ff9c88a64208a4d4df1ba244)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8ca79d4e454f8898b46b1b259599b103)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a837a4731dce376eeab4e6a30877a69c1)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f567b067bebd636801d1ee26841b510)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2a7217d04881c614eca51093f23ce004)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae92a604ba61a3a5c85ca67d5f4f8c6e7)`() const` | Checks whether LootId_Optional has been set.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa65d130154a92b70d0acf529ce09a9a1)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0cbb1abc8d56ca3b6329822c25bf51b9)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abc62035dc5e6e7c51c73850844dc5c75)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1155238b5b65bd6c7bd81324c22a55b3)`() const` | Checks whether LootId_Optional is set to null.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1afbe24dee4cef8c3df71fca795e576b9a)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68a15a86a18367c8ddbd94527b57c9a9)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a106099d1b149f607db75350a4dcb29fe)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3c0e223510e70e721142efe3698615d4)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3a9cdf5c99b3feaf9a07e2b024573682)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9055214f7fd42a2d7f9b39ecdc80498d)`()` | Sets the value of Quantity to its default
`public inline int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6992aaf7614407b6573c4ac8071825c4)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa436138836dcb31065f1ee2fec2c1b94)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8fa790a867e04efbe812dec247bc5361)`(const int32 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a621fe06de3088975994d3c84ebc6fcc4)`(int32 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a394801647cde85cb881a58c550f6d58d)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aafe099180e3ee831946006dbf8b58374)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a446aae2bf2e1d6f1cf131d1b7b276ddf)`(const int32 & NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1aad08be63f5044426426790a85dc5af05)`(int32 && NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac35349b8c94e8d0c1c750c6b322ff781)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline bool `[`IsVendorVersionSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab4872761bbae9f81e60002208b2d2a63)`() const` | Checks whether VendorVersion_Optional has been set.
`public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1af6cff7346ca949438ac24b4d02d20cfb)`() const` | Returns true if VendorVersion_Optional is set and matches the default value.
`public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1aee7c9365648809500b4df74eba5219f2)`()` | Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.
`public inline void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4f779b1d1faf60ffe772909fb9ebc1f0)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a22553e24d5298e9ebc4d604706b0909a)`() const` | Checks whether VendorVersion_Optional is set to null.
`public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa4194465c3dd354f5fa9f7808e26951c)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1acf92a1cb6b27507feaa326d9954b4d36)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a417b507f87005ab5933b8e7f8c3affdf)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a19527e917273380f3a133246168ff460)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a03b6b8e8b349f5ee819ec1abaf221929)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7e76ca3e352056ff26059134a3868bac)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a73b1cb68ad2f2ffcf69829d59dd997d4)`(const FString & NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a987260c05e2e1e4739a718c4cecea777)`(FString && NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a82276ebe77a648f4fdbe0b6c38501c69)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline bool `[`IsVendorEtagSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3892188015e7245225305368a3c32665)`() const` | Checks whether VendorEtag_Optional has been set.
`public inline void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a67363e49220242bc64d37f7ba579ae51)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb98bb9d6a7bba815d45a8ec21b2dd8f)`() const` | Checks whether VendorEtag_Optional is set to null.
`public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1aeb9bcd2e887e0453c1b4373c98ff7b38)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9e61599e8d87a3879a4dac9913379de4)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a97c64788df4154f5c526d086bf2fa2e8)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a663cf3123452e01b0cf7a109192c112a)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4a42cd940e45828eb2706f1d665554d6)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a543472d815aec2b2c45d71f1eae857ea)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a35187d1d1a5c9f0670ed99a725103195)`(const TArray< int32 > & NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac33c5863361b1d8d2ef3f3390f959f10)`(TArray< int32 > && NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a65517c1a063331a07ac1b93ba2ea6641)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline bool `[`IsDynamicBundleLootIdsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a75aa7bcddbfb6f91261655221c03e24a)`() const` | Checks whether DynamicBundleLootIds_Optional has been set.
`public inline void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0aaf4f4d253fb4c2cfda6248e9558470)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a60a6696c3f0dbc6ea9530a1b1c4f1939)`() const` | Checks whether DynamicBundleLootIds_Optional is set to null.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3349e99bc2c49b9d694f56b14abec3f9)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f7f840e5c6baf4f15d36700b8a4a4c7)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a60af5f5677a06ff328611dbbb8d9ae41)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a04f5994626a12d788bf58372e8514256)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9a3e9f63436109cb8105f15047f039fa)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a103351665a9ecddb61cc8a4f7c49b353)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa1a15c2705467f066527caf19559f523)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e95fe9fa23ccf2950ed0b493ccb410a)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae9581b5ca492a0661cd1c476c5106610)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline bool `[`IsPurchasePriceSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2461480edcdbbfc7c1bf9f365727f57a)`() const` | Checks whether PurchasePrice_Optional has been set.
`public inline void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0eb9675b97a40274412d779cfee11342)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae72d8dfc4a4dcea6043ff88ffc2e80a2)`() const` | Checks whether PurchasePrice_Optional is set to null.
`public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8e912bc0772c2cce4f6eadf0879215a3)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab211d623ac2eca04e8531bc5d3be2832)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ade2a67079a5e37c848339621ee8e1fe6)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1adaeffb0e3d614c466792963d9a90d61f)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8673d82d31822c88f4b29264b90aec91)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad8a10373f347f145eed28c0fa63ac029)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8b36f835d7b6eb8bfee616bdc0900e5c)`(const FString & NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa887fd6b859ca6248631ee3bfa8d9a07)`(FString && NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1adb3e4b6ce57dde430443efd74d30cece)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline bool `[`IsExternalTranIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa932a0db9adb18f32bbddad6311e4a08)`() const` | Checks whether ExternalTranId_Optional has been set.
`public inline void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6c1a5db907d97c5e76bf2cea860c6e5a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6450a3189673d4197fc8c4f72f0488d8)`() const` | Checks whether ExternalTranId_Optional is set to null.
`public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a37cbea0cb7cbf2c84dc2294eb2c28526)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a99fbcddc127033d7e74aa9f0a680aa37)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a211daa69c11155412887c9adec46ffa6)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a32c2f95d2cd9453b9a9db22c61bd0b28)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a426b9b8f8258dfbc26eb57c12436a23a)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5cbfcfcb218f9060b89bf6396ec00183)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a31bc826519ba62c94cd25a1eb9c976c8)`(const FString & NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a96d1d123cdfd26dfc13d9543e3c073df)`(FString && NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae1ea50dbba0f3d7e7a6303263143b4ea)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline bool `[`IsExternalItemSkuSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1abdfad76af1471cdb7bb56336eeb3e1ed)`() const` | Checks whether ExternalItemSku_Optional has been set.
`public inline void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb06dbd56e3cee4e0741b9adcbc01bce)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a188f4572ff14c01817d0015201d715a1)`() const` | Checks whether ExternalItemSku_Optional is set to null.
`public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae566c293db3a09a975783a6803a2ba8e)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a44f293432e17081c3fab1eb7c9466cbf)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1adfc2044731d02bd8e4b524b21c4aedce)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4c7d7b7301f1ff0d1c54f944d995436f)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a82b6abfa6ba7f8cfb010778515889bcf)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a28948073c6a37ac2b76cf7aec13f3baa)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4839794a3038ed231ee23525c5d05990)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a133e765db63821ecefce438a822ce944)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a432cd0fdcc0612e716ffa86da217ebd1)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a48d78a9685cb24a7e0e0dcc04716e7d5)`() const` | Checks whether UseInventoryBucket_Optional has been set.
`public inline void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4dcac8da7802f84c725aaf967c0bfd7b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6deb90a6927cb4be23bb2ed023f6150c)`() const` | Checks whether UseInventoryBucket_Optional is set to null.
`public inline int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6a01a5b4986f1930dce86be6a07bb30a)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a387dae2f53980e979d581b6b36d7bd9d)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a974f38c8676f6ea74967356f260b8405)`(const int32 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2ebf5ea8662f8d26f4cd1626eab8afb8)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a047cf0eef5715fb1fdb922fa5f62966f)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad7b13996116be5d21dc6a35d318ecd1c)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0937bfa0c5cd72aa05a24359778d7a0a)`(const int32 & NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a96e3d3dc45c2599af64c2b16c917638a)`(int32 && NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab6b9e95fc5c21e7136e315acbd4646a5)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline bool `[`IsPlayerPortalEventIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad43cea89fdffc04d8e3777ce5aa9fb81)`() const` | Checks whether PlayerPortalEventId_Optional has been set.
`public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab8180147275c38786e01cea184a4a337)`() const` | Returns true if PlayerPortalEventId_Optional is set and matches the default value.
`public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9363e8587b7906977c31f727069591f1)`()` | Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.
`public inline void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb6655d6e8d8106cfd33210e0c2b7f75)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac7bfadd92eb8390c03700f5e38cf3eba)`() const` | Checks whether PlayerPortalEventId_Optional is set to null.
`public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab5321aa8a4437f3904e65c4b601d63d9)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae5882d7b1b803126b28d39b79e21e058)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1acaecc5d5906395775edffec0d997c624)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9374f1c8ee0be43a47596f50bdcc5fb5)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae03e4ba08ab56359d241b95b694c3f97)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acdc115a12f3ac292fe779ba5e6d29369)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e02f38ae94772d55fc9c93c72955142)`(const FGuid & NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5eb36c4e05c4d4dd90dcab8b63007618)`(FGuid && NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af814146a12f563d937742fd62d813216)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline bool `[`IsInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6fba48af93984802959d61cf1b99851e)`() const` | Checks whether InventoryId_Optional has been set.
`public inline void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa56e057b11d1c6c05b1edea12e05eaab)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a67d177e7c9526a0e4aab6cd300cd977e)`() const` | Checks whether InventoryId_Optional is set to null.
`public inline int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac5391a264d75312fb99f032c6851cd9b)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a05ce18c15ff72e82c936d079489a1944)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0df3292702ecb078060ddbaf2ce52031)`(const int32 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a14d2ea67d6a5b8ebb6b470258f163eaa)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae32e3c33431de2fbf2665b70bed6f4b9)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a00a486440c65c19ce244d040641f2650)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8e297cc5f20241362e9f2fa1000c2da5)`(const int32 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a370a16e71091449df5a9b326a5f204a2)`(int32 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a53b70be543b45f630c650430e1dc8135)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a964fd980ce6eb55eb15da9509d27a3f4)`() const` | Checks whether LegacyInventoryId_Optional has been set.
`public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1a561e7c3af44e66b88e0bc916f9ae4c28)`() const` | Returns true if LegacyInventoryId_Optional is set and matches the default value.
`public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3224d909619c29b7fc7ecb23ca8b3757)`()` | Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.
`public inline void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab82f22fa460e8778926b9ee8a7fe2743)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acf828aedf6039b725e1f39f0e46b07e8)`() const` | Checks whether LegacyInventoryId_Optional is set to null.
`public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa5abb4224bfffd661c20c4e31a2eb1d1)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af6b026fede34336eefc86497e5c85dc8)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9ca528bb65418b5eb2f2ef2727be791b)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2035e33d241e683bfd9ace72c0e522f1)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acd87456018cbbc150f61807a7100139c)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a63c1bf1746799cc863c2998d98dc76b1)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac31ba4c7d27e84dc350f334a9f6dffc3)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa2ba4baeba31226fc78d0bc0e18e5464)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5d3e39a51a50f515d60dbd75dbde3083)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2a855b8b6b29b7b004adde15b1cef878)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2a695b4598ebaa40ee13b8826ef355a8)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1af911312c86baeb7507f4758bb8a37823)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9e81da72b4800f7b02f7def4ca483862)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a95aac90bd9ae6ad87930853cf4e63cfb)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1aff32a8bff562ead0ae48fd665d5e4458)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a931d07b023d8429bd01ac920150a2189)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a413709da3c8276fbc0d3bc0bb48b076d)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad0e24172c91d4c6e7c7c0890f49c9f5d)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68406f4bb6919ef03cba233c3d2618e9)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3828c895ffb8f189744eed56c2311c00)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac3195449ab289ec834f22ea1af026258)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1aed2814209233e687b5a6a678b74478cd)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a77361b73e5ed1bd3243fe402e9b0fb08)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline bool `[`IsExpiresSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae7b1ec6a705544000ba6c65e081d87a2)`() const` | Checks whether Expires_Optional has been set.
`public inline void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8af284847441f52af06d10a13f2aee09)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6755d1db0c2471b12a5d0153fd834cae)`() const` | Checks whether Expires_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6aae2d7855029fb849a42854fa9854ec)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a710bb0494e6007c7163e2488f7a37882)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a115e94b2b45a2f85227641199fc6977a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4d79183a2adc515656f4a84cf83b35f4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa4797c39ca0b8156ce1e3093fc5bc1e0)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9d7a3ae8c6fe121727aeb7d980a7e35b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1aadcb9fdc753c2846a09df8f072b4ac6a)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9cb85114d1de19481883ec473a1f1906)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a73666595cea34c4a520187cfce958f41)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5cf3a5bf13a2ba455f237248cb544664)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1218a54c1e47a1ced8b4cd2a37856596)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa1ffa845fa35de13ff03458d40bd370c)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8e8386dbd02d2d962f086cd7c1e191d7)`()` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5fc5a8f80989b346b1776f0e89dd860b)`() const` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae496d6b35af217cddf85ac591d3432e7)`(const FString & DefaultValue) const` | Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a49239ebce1f97fa1497be57227a836d0)`(FString & OutValue) const` | Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a34dee983dfa0f6905adcb86bebd63c79)`()` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acd74e2a176cdd6c41d819c42fe88116f)`() const` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaa5051ce0ccc3460a5b86d83c20c7194)`(const FString & NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.
`public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af6a7d9cf2f021087a95c63221042b6db)`(FString && NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.
`public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0d6feba179563e8e8516403cc4c8c599)`()` | Clears the value of EntryId_Optional and sets EntryId_IsSet to false.
`public inline bool `[`IsEntryIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1aeedf46519ca77b3efb37445190c44f8e)`() const` | Checks whether EntryId_Optional has been set.
`public inline void `[`SetEntryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad380abfa142adae50793cbe7a2762057)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEntryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab1de69596ab84443c7de24a13ed0adc6)`() const` | Checks whether EntryId_Optional is set to null.

### Members

#### `public ERHAPI_PlayerOrderEntryType `[`Type`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7f9a7d2f8c8ff9667d7715db3218e35e) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7f9a7d2f8c8ff9667d7715db3218e35e"></a>

#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af970d69ca2166b98a872eb2e714903ab) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af970d69ca2166b98a872eb2e714903ab"></a>

#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a36cbff5a6a6c2fe0d776040faa07282c) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a36cbff5a6a6c2fe0d776040faa07282c"></a>

true if LootId_Optional has been set to a value

#### `public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a492d4c8d00cdfb97de1a500409a97129) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a492d4c8d00cdfb97de1a500409a97129"></a>

true if LootId_Optional has been explicitly set to null

#### `public int32 `[`Quantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8bdaeb1caf17d7f4a859526e976a7272) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8bdaeb1caf17d7f4a859526e976a7272"></a>

Quantity of Inventory.

#### `public int32 `[`VendorVersion_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a31ed236560b651d7a0ed05ffc529a634) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a31ed236560b651d7a0ed05ffc529a634"></a>

#### `public bool `[`VendorVersion_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9ba8bf03ffbf488b1e5b1fc965a718c5) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9ba8bf03ffbf488b1e5b1fc965a718c5"></a>

true if VendorVersion_Optional has been set to a value

#### `public bool `[`VendorVersion_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4beba7ed6f3bdd3b2de1f2f25d9985df) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4beba7ed6f3bdd3b2de1f2f25d9985df"></a>

true if VendorVersion_Optional has been explicitly set to null

#### `public FString `[`VendorEtag_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1aab0c3e3e5b36f5c5b33e4211322a5941) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aab0c3e3e5b36f5c5b33e4211322a5941"></a>

#### `public bool `[`VendorEtag_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a57fd08c69197670160fbe9dcb163e3bc) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a57fd08c69197670160fbe9dcb163e3bc"></a>

true if VendorEtag_Optional has been set to a value

#### `public bool `[`VendorEtag_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3edd2a0088ec49c83520aec8457998c0) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3edd2a0088ec49c83520aec8457998c0"></a>

true if VendorEtag_Optional has been explicitly set to null

#### `public TArray< int32 > `[`DynamicBundleLootIds_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f120dee684a976f7f832dc3e95d61bc) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2f120dee684a976f7f832dc3e95d61bc"></a>

#### `public bool `[`DynamicBundleLootIds_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a257fd734e81f8a08a863882e662e5bea) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a257fd734e81f8a08a863882e662e5bea"></a>

true if DynamicBundleLootIds_Optional has been set to a value

#### `public bool `[`DynamicBundleLootIds_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8cace39181ef5fd501fb4465e3191a19) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8cace39181ef5fd501fb4465e3191a19"></a>

true if DynamicBundleLootIds_Optional has been explicitly set to null

#### `public `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` `[`PurchasePrice_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa2510206697ece77b6a7f5347d107077) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa2510206697ece77b6a7f5347d107077"></a>

#### `public bool `[`PurchasePrice_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad51da12b4ced381b4478bb2c7308285e) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad51da12b4ced381b4478bb2c7308285e"></a>

true if PurchasePrice_Optional has been set to a value

#### `public bool `[`PurchasePrice_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3058369daa032e828d9b103275172eb1) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3058369daa032e828d9b103275172eb1"></a>

true if PurchasePrice_Optional has been explicitly set to null

#### `public FString `[`ExternalTranId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0efe037b4e95bc0ded53c43306d3a2e1) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0efe037b4e95bc0ded53c43306d3a2e1"></a>

#### `public bool `[`ExternalTranId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a69ea67d4af315508ec7fcb3cb24d40ec) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a69ea67d4af315508ec7fcb3cb24d40ec"></a>

true if ExternalTranId_Optional has been set to a value

#### `public bool `[`ExternalTranId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab58cd36e15aa0c1ddcf471f6851a26a9) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab58cd36e15aa0c1ddcf471f6851a26a9"></a>

true if ExternalTranId_Optional has been explicitly set to null

#### `public FString `[`ExternalItemSku_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1a5c6685cb8cb4b4f973b18cbd528c73) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1a5c6685cb8cb4b4f973b18cbd528c73"></a>

#### `public bool `[`ExternalItemSku_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9e96e4d8fb7c8bf81ab5d1d3b65d6038) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9e96e4d8fb7c8bf81ab5d1d3b65d6038"></a>

true if ExternalItemSku_Optional has been set to a value

#### `public bool `[`ExternalItemSku_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4a383f372c5d71bb6b7659b3cd09dde2) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4a383f372c5d71bb6b7659b3cd09dde2"></a>

true if ExternalItemSku_Optional has been explicitly set to null

#### `public ERHAPI_InventoryBucket `[`UseInventoryBucket_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac708cc5b9e6ff382f095056506a95319) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac708cc5b9e6ff382f095056506a95319"></a>

#### `public bool `[`UseInventoryBucket_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1c2e14fb68c07a7feccac76f27939883) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1c2e14fb68c07a7feccac76f27939883"></a>

true if UseInventoryBucket_Optional has been set to a value

#### `public bool `[`UseInventoryBucket_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7951adf5b3a146e6f8b4024086ca3467) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7951adf5b3a146e6f8b4024086ca3467"></a>

true if UseInventoryBucket_Optional has been explicitly set to null

#### `public int32 `[`PlayerPortalEventId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3a3608b8ecb0f631eff0386d8331b02d) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3a3608b8ecb0f631eff0386d8331b02d"></a>

#### `public bool `[`PlayerPortalEventId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a62238aa4d870c4ff55a9e397ae9dfb52) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a62238aa4d870c4ff55a9e397ae9dfb52"></a>

true if PlayerPortalEventId_Optional has been set to a value

#### `public bool `[`PlayerPortalEventId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1af87410951e25ba016c2a582df334298d) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af87410951e25ba016c2a582df334298d"></a>

true if PlayerPortalEventId_Optional has been explicitly set to null

#### `public FGuid `[`InventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f9c09a053ece2bd2d3edc310e38562b) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2f9c09a053ece2bd2d3edc310e38562b"></a>

#### `public bool `[`InventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a20a2f8c1986ea67139779328c4a22549) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a20a2f8c1986ea67139779328c4a22549"></a>

true if InventoryId_Optional has been set to a value

#### `public bool `[`InventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8127b9ff19292a5f0caea9bb8d7c63c2) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8127b9ff19292a5f0caea9bb8d7c63c2"></a>

true if InventoryId_Optional has been explicitly set to null

#### `public int32 `[`LegacyInventoryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a058a9918fc97f111cd696427ca93e476) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a058a9918fc97f111cd696427ca93e476"></a>

#### `public bool `[`LegacyInventoryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa1385add83520e86262b9f43070db8d0) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa1385add83520e86262b9f43070db8d0"></a>

true if LegacyInventoryId_Optional has been set to a value

#### `public bool `[`LegacyInventoryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a42c4f6087244ee4913a645425497fc15) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a42c4f6087244ee4913a645425497fc15"></a>

true if LegacyInventoryId_Optional has been explicitly set to null

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6e7c7cad1771944c6d27bea36601ed28) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6e7c7cad1771944c6d27bea36601ed28"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a12e8ccc9a2f6507a1679fcfbdde8953f) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a12e8ccc9a2f6507a1679fcfbdde8953f"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a837221e26c04db9ee97c2c02afb9a0e6) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a837221e26c04db9ee97c2c02afb9a0e6"></a>

true if ItemId_Optional has been explicitly set to null

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a018c7ab834b952f84e95363802a489c3) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a018c7ab834b952f84e95363802a489c3"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a437cd9a08ca38e7c1ed14eb7cf42cd9d) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a437cd9a08ca38e7c1ed14eb7cf42cd9d"></a>

true if Expires_Optional has been set to a value

#### `public bool `[`Expires_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2247b74e4faa1e58413c98363cc9e913) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2247b74e4faa1e58413c98363cc9e913"></a>

true if Expires_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad44b91659bd5dceb8adb50e712fa4361) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad44b91659bd5dceb8adb50e712fa4361"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a49f84ec14f9a8ed1f0167581b8b6a554) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a49f84ec14f9a8ed1f0167581b8b6a554"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5e6ab4eb59b19bd692b47160768072e7) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5e6ab4eb59b19bd692b47160768072e7"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af86fdb44a8c8a2761d912893f52d514c) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af86fdb44a8c8a2761d912893f52d514c"></a>

#### `public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a34631be1448f2411ed4bbe5c41a711a7) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a34631be1448f2411ed4bbe5c41a711a7"></a>

true if EntryId_Optional has been set to a value

#### `public bool `[`EntryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abfa4e3b5a78d2adf154f8560a62964ab) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abfa4e3b5a78d2adf154f8560a62964ab"></a>

true if EntryId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad9e7c773f775dc4014dba35b7c44b4e3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad9e7c773f775dc4014dba35b7c44b4e3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreateInput_1a35c190ae0a3369542ee9bb3f88537370)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a35c190ae0a3369542ee9bb3f88537370"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1abfdd45d1a59385b0eda2f1e0e35fa194)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abfdd45d1a59385b0eda2f1e0e35fa194"></a>

Gets the value of Type.

#### `public inline const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaa15ccc96d182145298fc832184bea4e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aaa15ccc96d182145298fc832184bea4e"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a282e2b4c2757a2b2b255ec8582a66415)`(const ERHAPI_PlayerOrderEntryType & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a282e2b4c2757a2b2b255ec8582a66415"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa91b71091f2b576a09c7df2d6d95d1cf)`(ERHAPI_PlayerOrderEntryType && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa91b71091f2b576a09c7df2d6d95d1cf"></a>

Sets the value of Type using move semantics.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1d46c5245eb07f9cb5de18b0af17955c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1d46c5245eb07f9cb5de18b0af17955c"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a617881c985ca3262d2a33077752aa95c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a617881c985ca3262d2a33077752aa95c"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8bd197e92500d76c5dfea722142511cf)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8bd197e92500d76c5dfea722142511cf"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a232186e22a1c55c110580632f2d92096)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a232186e22a1c55c110580632f2d92096"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab9d46ad8ff9c88a64208a4d4df1ba244)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab9d46ad8ff9c88a64208a4d4df1ba244"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8ca79d4e454f8898b46b1b259599b103)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8ca79d4e454f8898b46b1b259599b103"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a837a4731dce376eeab4e6a30877a69c1)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a837a4731dce376eeab4e6a30877a69c1"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f567b067bebd636801d1ee26841b510)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2f567b067bebd636801d1ee26841b510"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2a7217d04881c614eca51093f23ce004)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2a7217d04881c614eca51093f23ce004"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae92a604ba61a3a5c85ca67d5f4f8c6e7)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae92a604ba61a3a5c85ca67d5f4f8c6e7"></a>

Checks whether LootId_Optional has been set.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa65d130154a92b70d0acf529ce09a9a1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa65d130154a92b70d0acf529ce09a9a1"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0cbb1abc8d56ca3b6329822c25bf51b9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0cbb1abc8d56ca3b6329822c25bf51b9"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abc62035dc5e6e7c51c73850844dc5c75)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abc62035dc5e6e7c51c73850844dc5c75"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1155238b5b65bd6c7bd81324c22a55b3)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1155238b5b65bd6c7bd81324c22a55b3"></a>

Checks whether LootId_Optional is set to null.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1afbe24dee4cef8c3df71fca795e576b9a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afbe24dee4cef8c3df71fca795e576b9a"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68a15a86a18367c8ddbd94527b57c9a9)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a68a15a86a18367c8ddbd94527b57c9a9"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a106099d1b149f607db75350a4dcb29fe)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a106099d1b149f607db75350a4dcb29fe"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3c0e223510e70e721142efe3698615d4)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3c0e223510e70e721142efe3698615d4"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3a9cdf5c99b3feaf9a07e2b024573682)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3a9cdf5c99b3feaf9a07e2b024573682"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9055214f7fd42a2d7f9b39ecdc80498d)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9055214f7fd42a2d7f9b39ecdc80498d"></a>

Sets the value of Quantity to its default

#### `public inline int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6992aaf7614407b6573c4ac8071825c4)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6992aaf7614407b6573c4ac8071825c4"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa436138836dcb31065f1ee2fec2c1b94)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa436138836dcb31065f1ee2fec2c1b94"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8fa790a867e04efbe812dec247bc5361)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8fa790a867e04efbe812dec247bc5361"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a621fe06de3088975994d3c84ebc6fcc4)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a621fe06de3088975994d3c84ebc6fcc4"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a394801647cde85cb881a58c550f6d58d)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a394801647cde85cb881a58c550f6d58d"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aafe099180e3ee831946006dbf8b58374)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aafe099180e3ee831946006dbf8b58374"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a446aae2bf2e1d6f1cf131d1b7b276ddf)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a446aae2bf2e1d6f1cf131d1b7b276ddf"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

#### `public inline void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1aad08be63f5044426426790a85dc5af05)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aad08be63f5044426426790a85dc5af05"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac35349b8c94e8d0c1c750c6b322ff781)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac35349b8c94e8d0c1c750c6b322ff781"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

#### `public inline bool `[`IsVendorVersionSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab4872761bbae9f81e60002208b2d2a63)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab4872761bbae9f81e60002208b2d2a63"></a>

Checks whether VendorVersion_Optional has been set.

#### `public inline bool `[`IsVendorVersionDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1af6cff7346ca949438ac24b4d02d20cfb)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af6cff7346ca949438ac24b4d02d20cfb"></a>

Returns true if VendorVersion_Optional is set and matches the default value.

#### `public inline void `[`SetVendorVersionToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1aee7c9365648809500b4df74eba5219f2)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aee7c9365648809500b4df74eba5219f2"></a>

Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true.

#### `public inline void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4f779b1d1faf60ffe772909fb9ebc1f0)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4f779b1d1faf60ffe772909fb9ebc1f0"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a22553e24d5298e9ebc4d604706b0909a)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a22553e24d5298e9ebc4d604706b0909a"></a>

Checks whether VendorVersion_Optional is set to null.

#### `public inline FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa4194465c3dd354f5fa9f7808e26951c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa4194465c3dd354f5fa9f7808e26951c"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1acf92a1cb6b27507feaa326d9954b4d36)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acf92a1cb6b27507feaa326d9954b4d36"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a417b507f87005ab5933b8e7f8c3affdf)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a417b507f87005ab5933b8e7f8c3affdf"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a19527e917273380f3a133246168ff460)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a19527e917273380f3a133246168ff460"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a03b6b8e8b349f5ee819ec1abaf221929)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a03b6b8e8b349f5ee819ec1abaf221929"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7e76ca3e352056ff26059134a3868bac)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7e76ca3e352056ff26059134a3868bac"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a73b1cb68ad2f2ffcf69829d59dd997d4)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a73b1cb68ad2f2ffcf69829d59dd997d4"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

#### `public inline void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a987260c05e2e1e4739a718c4cecea777)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a987260c05e2e1e4739a718c4cecea777"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a82276ebe77a648f4fdbe0b6c38501c69)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a82276ebe77a648f4fdbe0b6c38501c69"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

#### `public inline bool `[`IsVendorEtagSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3892188015e7245225305368a3c32665)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3892188015e7245225305368a3c32665"></a>

Checks whether VendorEtag_Optional has been set.

#### `public inline void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a67363e49220242bc64d37f7ba579ae51)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a67363e49220242bc64d37f7ba579ae51"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb98bb9d6a7bba815d45a8ec21b2dd8f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afb98bb9d6a7bba815d45a8ec21b2dd8f"></a>

Checks whether VendorEtag_Optional is set to null.

#### `public inline TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1aeb9bcd2e887e0453c1b4373c98ff7b38)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aeb9bcd2e887e0453c1b4373c98ff7b38"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9e61599e8d87a3879a4dac9913379de4)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9e61599e8d87a3879a4dac9913379de4"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a97c64788df4154f5c526d086bf2fa2e8)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a97c64788df4154f5c526d086bf2fa2e8"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a663cf3123452e01b0cf7a109192c112a)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a663cf3123452e01b0cf7a109192c112a"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4a42cd940e45828eb2706f1d665554d6)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4a42cd940e45828eb2706f1d665554d6"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a543472d815aec2b2c45d71f1eae857ea)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a543472d815aec2b2c45d71f1eae857ea"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a35187d1d1a5c9f0670ed99a725103195)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a35187d1d1a5c9f0670ed99a725103195"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

#### `public inline void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac33c5863361b1d8d2ef3f3390f959f10)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac33c5863361b1d8d2ef3f3390f959f10"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.

#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a65517c1a063331a07ac1b93ba2ea6641)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a65517c1a063331a07ac1b93ba2ea6641"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

#### `public inline bool `[`IsDynamicBundleLootIdsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a75aa7bcddbfb6f91261655221c03e24a)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a75aa7bcddbfb6f91261655221c03e24a"></a>

Checks whether DynamicBundleLootIds_Optional has been set.

#### `public inline void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0aaf4f4d253fb4c2cfda6248e9558470)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0aaf4f4d253fb4c2cfda6248e9558470"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a60a6696c3f0dbc6ea9530a1b1c4f1939)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a60a6696c3f0dbc6ea9530a1b1c4f1939"></a>

Checks whether DynamicBundleLootIds_Optional is set to null.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3349e99bc2c49b9d694f56b14abec3f9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3349e99bc2c49b9d694f56b14abec3f9"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f7f840e5c6baf4f15d36700b8a4a4c7)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2f7f840e5c6baf4f15d36700b8a4a4c7"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a60af5f5677a06ff328611dbbb8d9ae41)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a60af5f5677a06ff328611dbbb8d9ae41"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a04f5994626a12d788bf58372e8514256)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a04f5994626a12d788bf58372e8514256"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9a3e9f63436109cb8105f15047f039fa)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9a3e9f63436109cb8105f15047f039fa"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a103351665a9ecddb61cc8a4f7c49b353)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a103351665a9ecddb61cc8a4f7c49b353"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa1a15c2705467f066527caf19559f523)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa1a15c2705467f066527caf19559f523"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

#### `public inline void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e95fe9fa23ccf2950ed0b493ccb410a)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4e95fe9fa23ccf2950ed0b493ccb410a"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.

#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae9581b5ca492a0661cd1c476c5106610)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae9581b5ca492a0661cd1c476c5106610"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

#### `public inline bool `[`IsPurchasePriceSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2461480edcdbbfc7c1bf9f365727f57a)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2461480edcdbbfc7c1bf9f365727f57a"></a>

Checks whether PurchasePrice_Optional has been set.

#### `public inline void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0eb9675b97a40274412d779cfee11342)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0eb9675b97a40274412d779cfee11342"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae72d8dfc4a4dcea6043ff88ffc2e80a2)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae72d8dfc4a4dcea6043ff88ffc2e80a2"></a>

Checks whether PurchasePrice_Optional is set to null.

#### `public inline FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8e912bc0772c2cce4f6eadf0879215a3)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8e912bc0772c2cce4f6eadf0879215a3"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab211d623ac2eca04e8531bc5d3be2832)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab211d623ac2eca04e8531bc5d3be2832"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ade2a67079a5e37c848339621ee8e1fe6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ade2a67079a5e37c848339621ee8e1fe6"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1adaeffb0e3d614c466792963d9a90d61f)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1adaeffb0e3d614c466792963d9a90d61f"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8673d82d31822c88f4b29264b90aec91)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8673d82d31822c88f4b29264b90aec91"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad8a10373f347f145eed28c0fa63ac029)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad8a10373f347f145eed28c0fa63ac029"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8b36f835d7b6eb8bfee616bdc0900e5c)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8b36f835d7b6eb8bfee616bdc0900e5c"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

#### `public inline void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa887fd6b859ca6248631ee3bfa8d9a07)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa887fd6b859ca6248631ee3bfa8d9a07"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1adb3e4b6ce57dde430443efd74d30cece)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1adb3e4b6ce57dde430443efd74d30cece"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

#### `public inline bool `[`IsExternalTranIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa932a0db9adb18f32bbddad6311e4a08)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa932a0db9adb18f32bbddad6311e4a08"></a>

Checks whether ExternalTranId_Optional has been set.

#### `public inline void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6c1a5db907d97c5e76bf2cea860c6e5a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6c1a5db907d97c5e76bf2cea860c6e5a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6450a3189673d4197fc8c4f72f0488d8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6450a3189673d4197fc8c4f72f0488d8"></a>

Checks whether ExternalTranId_Optional is set to null.

#### `public inline FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a37cbea0cb7cbf2c84dc2294eb2c28526)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a37cbea0cb7cbf2c84dc2294eb2c28526"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a99fbcddc127033d7e74aa9f0a680aa37)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a99fbcddc127033d7e74aa9f0a680aa37"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a211daa69c11155412887c9adec46ffa6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a211daa69c11155412887c9adec46ffa6"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a32c2f95d2cd9453b9a9db22c61bd0b28)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a32c2f95d2cd9453b9a9db22c61bd0b28"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a426b9b8f8258dfbc26eb57c12436a23a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a426b9b8f8258dfbc26eb57c12436a23a"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5cbfcfcb218f9060b89bf6396ec00183)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5cbfcfcb218f9060b89bf6396ec00183"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a31bc826519ba62c94cd25a1eb9c976c8)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a31bc826519ba62c94cd25a1eb9c976c8"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

#### `public inline void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a96d1d123cdfd26dfc13d9543e3c073df)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a96d1d123cdfd26dfc13d9543e3c073df"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae1ea50dbba0f3d7e7a6303263143b4ea)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae1ea50dbba0f3d7e7a6303263143b4ea"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

#### `public inline bool `[`IsExternalItemSkuSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1abdfad76af1471cdb7bb56336eeb3e1ed)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abdfad76af1471cdb7bb56336eeb3e1ed"></a>

Checks whether ExternalItemSku_Optional has been set.

#### `public inline void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb06dbd56e3cee4e0741b9adcbc01bce)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afb06dbd56e3cee4e0741b9adcbc01bce"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a188f4572ff14c01817d0015201d715a1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a188f4572ff14c01817d0015201d715a1"></a>

Checks whether ExternalItemSku_Optional is set to null.

#### `public inline ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae566c293db3a09a975783a6803a2ba8e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae566c293db3a09a975783a6803a2ba8e"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a44f293432e17081c3fab1eb7c9466cbf)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a44f293432e17081c3fab1eb7c9466cbf"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1adfc2044731d02bd8e4b524b21c4aedce)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1adfc2044731d02bd8e4b524b21c4aedce"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4c7d7b7301f1ff0d1c54f944d995436f)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4c7d7b7301f1ff0d1c54f944d995436f"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a82b6abfa6ba7f8cfb010778515889bcf)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a82b6abfa6ba7f8cfb010778515889bcf"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a28948073c6a37ac2b76cf7aec13f3baa)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a28948073c6a37ac2b76cf7aec13f3baa"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4839794a3038ed231ee23525c5d05990)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4839794a3038ed231ee23525c5d05990"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a133e765db63821ecefce438a822ce944)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a133e765db63821ecefce438a822ce944"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a432cd0fdcc0612e716ffa86da217ebd1)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a432cd0fdcc0612e716ffa86da217ebd1"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline bool `[`IsUseInventoryBucketSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a48d78a9685cb24a7e0e0dcc04716e7d5)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a48d78a9685cb24a7e0e0dcc04716e7d5"></a>

Checks whether UseInventoryBucket_Optional has been set.

#### `public inline void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4dcac8da7802f84c725aaf967c0bfd7b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4dcac8da7802f84c725aaf967c0bfd7b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6deb90a6927cb4be23bb2ed023f6150c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6deb90a6927cb4be23bb2ed023f6150c"></a>

Checks whether UseInventoryBucket_Optional is set to null.

#### `public inline int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6a01a5b4986f1930dce86be6a07bb30a)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6a01a5b4986f1930dce86be6a07bb30a"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a387dae2f53980e979d581b6b36d7bd9d)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a387dae2f53980e979d581b6b36d7bd9d"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a974f38c8676f6ea74967356f260b8405)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a974f38c8676f6ea74967356f260b8405"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2ebf5ea8662f8d26f4cd1626eab8afb8)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2ebf5ea8662f8d26f4cd1626eab8afb8"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a047cf0eef5715fb1fdb922fa5f62966f)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a047cf0eef5715fb1fdb922fa5f62966f"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad7b13996116be5d21dc6a35d318ecd1c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad7b13996116be5d21dc6a35d318ecd1c"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0937bfa0c5cd72aa05a24359778d7a0a)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0937bfa0c5cd72aa05a24359778d7a0a"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

#### `public inline void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a96e3d3dc45c2599af64c2b16c917638a)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a96e3d3dc45c2599af64c2b16c917638a"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab6b9e95fc5c21e7136e315acbd4646a5)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab6b9e95fc5c21e7136e315acbd4646a5"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

#### `public inline bool `[`IsPlayerPortalEventIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad43cea89fdffc04d8e3777ce5aa9fb81)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad43cea89fdffc04d8e3777ce5aa9fb81"></a>

Checks whether PlayerPortalEventId_Optional has been set.

#### `public inline bool `[`IsPlayerPortalEventIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab8180147275c38786e01cea184a4a337)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab8180147275c38786e01cea184a4a337"></a>

Returns true if PlayerPortalEventId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerPortalEventIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9363e8587b7906977c31f727069591f1)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9363e8587b7906977c31f727069591f1"></a>

Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true.

#### `public inline void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb6655d6e8d8106cfd33210e0c2b7f75)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afb6655d6e8d8106cfd33210e0c2b7f75"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac7bfadd92eb8390c03700f5e38cf3eba)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac7bfadd92eb8390c03700f5e38cf3eba"></a>

Checks whether PlayerPortalEventId_Optional is set to null.

#### `public inline FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab5321aa8a4437f3904e65c4b601d63d9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab5321aa8a4437f3904e65c4b601d63d9"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae5882d7b1b803126b28d39b79e21e058)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae5882d7b1b803126b28d39b79e21e058"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1acaecc5d5906395775edffec0d997c624)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acaecc5d5906395775edffec0d997c624"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9374f1c8ee0be43a47596f50bdcc5fb5)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9374f1c8ee0be43a47596f50bdcc5fb5"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae03e4ba08ab56359d241b95b694c3f97)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae03e4ba08ab56359d241b95b694c3f97"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acdc115a12f3ac292fe779ba5e6d29369)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acdc115a12f3ac292fe779ba5e6d29369"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e02f38ae94772d55fc9c93c72955142)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4e02f38ae94772d55fc9c93c72955142"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

#### `public inline void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5eb36c4e05c4d4dd90dcab8b63007618)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5eb36c4e05c4d4dd90dcab8b63007618"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af814146a12f563d937742fd62d813216)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af814146a12f563d937742fd62d813216"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

#### `public inline bool `[`IsInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6fba48af93984802959d61cf1b99851e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6fba48af93984802959d61cf1b99851e"></a>

Checks whether InventoryId_Optional has been set.

#### `public inline void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa56e057b11d1c6c05b1edea12e05eaab)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa56e057b11d1c6c05b1edea12e05eaab"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a67d177e7c9526a0e4aab6cd300cd977e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a67d177e7c9526a0e4aab6cd300cd977e"></a>

Checks whether InventoryId_Optional is set to null.

#### `public inline int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac5391a264d75312fb99f032c6851cd9b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac5391a264d75312fb99f032c6851cd9b"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a05ce18c15ff72e82c936d079489a1944)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a05ce18c15ff72e82c936d079489a1944"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0df3292702ecb078060ddbaf2ce52031)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0df3292702ecb078060ddbaf2ce52031"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a14d2ea67d6a5b8ebb6b470258f163eaa)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a14d2ea67d6a5b8ebb6b470258f163eaa"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae32e3c33431de2fbf2665b70bed6f4b9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae32e3c33431de2fbf2665b70bed6f4b9"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a00a486440c65c19ce244d040641f2650)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a00a486440c65c19ce244d040641f2650"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8e297cc5f20241362e9f2fa1000c2da5)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8e297cc5f20241362e9f2fa1000c2da5"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a370a16e71091449df5a9b326a5f204a2)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a370a16e71091449df5a9b326a5f204a2"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a53b70be543b45f630c650430e1dc8135)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a53b70be543b45f630c650430e1dc8135"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline bool `[`IsLegacyInventoryIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a964fd980ce6eb55eb15da9509d27a3f4)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a964fd980ce6eb55eb15da9509d27a3f4"></a>

Checks whether LegacyInventoryId_Optional has been set.

#### `public inline bool `[`IsLegacyInventoryIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1a561e7c3af44e66b88e0bc916f9ae4c28)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a561e7c3af44e66b88e0bc916f9ae4c28"></a>

Returns true if LegacyInventoryId_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyInventoryIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3224d909619c29b7fc7ecb23ca8b3757)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3224d909619c29b7fc7ecb23ca8b3757"></a>

Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true.

#### `public inline void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab82f22fa460e8778926b9ee8a7fe2743)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab82f22fa460e8778926b9ee8a7fe2743"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acf828aedf6039b725e1f39f0e46b07e8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acf828aedf6039b725e1f39f0e46b07e8"></a>

Checks whether LegacyInventoryId_Optional is set to null.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa5abb4224bfffd661c20c4e31a2eb1d1)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa5abb4224bfffd661c20c4e31a2eb1d1"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af6b026fede34336eefc86497e5c85dc8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af6b026fede34336eefc86497e5c85dc8"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9ca528bb65418b5eb2f2ef2727be791b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9ca528bb65418b5eb2f2ef2727be791b"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2035e33d241e683bfd9ace72c0e522f1)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2035e33d241e683bfd9ace72c0e522f1"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acd87456018cbbc150f61807a7100139c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acd87456018cbbc150f61807a7100139c"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a63c1bf1746799cc863c2998d98dc76b1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a63c1bf1746799cc863c2998d98dc76b1"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac31ba4c7d27e84dc350f334a9f6dffc3)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac31ba4c7d27e84dc350f334a9f6dffc3"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa2ba4baeba31226fc78d0bc0e18e5464)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa2ba4baeba31226fc78d0bc0e18e5464"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5d3e39a51a50f515d60dbd75dbde3083)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5d3e39a51a50f515d60dbd75dbde3083"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2a855b8b6b29b7b004adde15b1cef878)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2a855b8b6b29b7b004adde15b1cef878"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2a695b4598ebaa40ee13b8826ef355a8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2a695b4598ebaa40ee13b8826ef355a8"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__PlayerOrderEntryCreateInput_1af911312c86baeb7507f4758bb8a37823)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af911312c86baeb7507f4758bb8a37823"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9e81da72b4800f7b02f7def4ca483862)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9e81da72b4800f7b02f7def4ca483862"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a95aac90bd9ae6ad87930853cf4e63cfb)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a95aac90bd9ae6ad87930853cf4e63cfb"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1aff32a8bff562ead0ae48fd665d5e4458)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aff32a8bff562ead0ae48fd665d5e4458"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a931d07b023d8429bd01ac920150a2189)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a931d07b023d8429bd01ac920150a2189"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a413709da3c8276fbc0d3bc0bb48b076d)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a413709da3c8276fbc0d3bc0bb48b076d"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad0e24172c91d4c6e7c7c0890f49c9f5d)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad0e24172c91d4c6e7c7c0890f49c9f5d"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68406f4bb6919ef03cba233c3d2618e9)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a68406f4bb6919ef03cba233c3d2618e9"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3828c895ffb8f189744eed56c2311c00)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3828c895ffb8f189744eed56c2311c00"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac3195449ab289ec834f22ea1af026258)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac3195449ab289ec834f22ea1af026258"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1aed2814209233e687b5a6a678b74478cd)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aed2814209233e687b5a6a678b74478cd"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a77361b73e5ed1bd3243fe402e9b0fb08)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a77361b73e5ed1bd3243fe402e9b0fb08"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline bool `[`IsExpiresSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae7b1ec6a705544000ba6c65e081d87a2)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae7b1ec6a705544000ba6c65e081d87a2"></a>

Checks whether Expires_Optional has been set.

#### `public inline void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8af284847441f52af06d10a13f2aee09)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8af284847441f52af06d10a13f2aee09"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6755d1db0c2471b12a5d0153fd834cae)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6755d1db0c2471b12a5d0153fd834cae"></a>

Checks whether Expires_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6aae2d7855029fb849a42854fa9854ec)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6aae2d7855029fb849a42854fa9854ec"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a710bb0494e6007c7163e2488f7a37882)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a710bb0494e6007c7163e2488f7a37882"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a115e94b2b45a2f85227641199fc6977a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a115e94b2b45a2f85227641199fc6977a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4d79183a2adc515656f4a84cf83b35f4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4d79183a2adc515656f4a84cf83b35f4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa4797c39ca0b8156ce1e3093fc5bc1e0)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa4797c39ca0b8156ce1e3093fc5bc1e0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9d7a3ae8c6fe121727aeb7d980a7e35b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9d7a3ae8c6fe121727aeb7d980a7e35b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1aadcb9fdc753c2846a09df8f072b4ac6a)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aadcb9fdc753c2846a09df8f072b4ac6a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9cb85114d1de19481883ec473a1f1906)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9cb85114d1de19481883ec473a1f1906"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a73666595cea34c4a520187cfce958f41)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a73666595cea34c4a520187cfce958f41"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5cf3a5bf13a2ba455f237248cb544664)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5cf3a5bf13a2ba455f237248cb544664"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1218a54c1e47a1ced8b4cd2a37856596)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1218a54c1e47a1ced8b4cd2a37856596"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa1ffa845fa35de13ff03458d40bd370c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa1ffa845fa35de13ff03458d40bd370c"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8e8386dbd02d2d962f086cd7c1e191d7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8e8386dbd02d2d962f086cd7c1e191d7"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5fc5a8f80989b346b1776f0e89dd860b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5fc5a8f80989b346b1776f0e89dd860b"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae496d6b35af217cddf85ac591d3432e7)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae496d6b35af217cddf85ac591d3432e7"></a>

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a49239ebce1f97fa1497be57227a836d0)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a49239ebce1f97fa1497be57227a836d0"></a>

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a34dee983dfa0f6905adcb86bebd63c79)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a34dee983dfa0f6905adcb86bebd63c79"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acd74e2a176cdd6c41d819c42fe88116f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acd74e2a176cdd6c41d819c42fe88116f"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaa5051ce0ccc3460a5b86d83c20c7194)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aaa5051ce0ccc3460a5b86d83c20c7194"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.

#### `public inline void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af6a7d9cf2f021087a95c63221042b6db)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af6a7d9cf2f021087a95c63221042b6db"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0d6feba179563e8e8516403cc4c8c599)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0d6feba179563e8e8516403cc4c8c599"></a>

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

#### `public inline bool `[`IsEntryIdSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1aeedf46519ca77b3efb37445190c44f8e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aeedf46519ca77b3efb37445190c44f8e"></a>

Checks whether EntryId_Optional has been set.

#### `public inline void `[`SetEntryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad380abfa142adae50793cbe7a2762057)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad380abfa142adae50793cbe7a2762057"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEntryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab1de69596ab84443c7de24a13ed0adc6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab1de69596ab84443c7de24a13ed0adc6"></a>

Checks whether EntryId_Optional is set to null.

