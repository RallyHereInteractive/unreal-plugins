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
`public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af08ce07da7f0f5b4e824e806bf705345) | 
`public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1addf96bdca5542335d2edcd05807106d6) | true if XpQuantityTransformType_Optional has been set to a value
`public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a78bb74c18817589b7c53b9d5f4cd3f61) | 
`public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a33d8f978cb9e32e021da030d36e98362) | true if HardQuantityMaximum_Optional has been set to a value
`public bool `[`HardQuantityMaximum_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1af615726cedd63733ac9fb8e54664f7e1) | true if HardQuantityMaximum_Optional has been explicitly set to null
`public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0392b374019ae5dc6c208970a9ef8c3d) | 
`public bool `[`InventoryOperation_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa9797e7419934e1567ccd0a616417dd4) | true if InventoryOperation_Optional has been set to a value
`public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af656600b79dd1a9d7faadb56f5e581e6) | 
`public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a643f075294b741eb1f4d7bd3322b9b16) | true if InventorySelectorType_Optional has been set to a value
`public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a69d68ae057be07d674d3a5f7af9a1aeb) | 
`public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6bf6456592742a45495db898bf881152) | true if QuantityMultInventoryItemId_Optional has been set to a value
`public bool `[`QuantityMultInventoryItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a06fc0a35d9ac7823b7d435c1b888f602) | true if QuantityMultInventoryItemId_Optional has been explicitly set to null
`public int32 `[`TimeFrameId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae8fb742195e2066b16c6c5317dd5dced) | 
`public bool `[`TimeFrameId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab952072490e289f092e340488b08ab93) | true if TimeFrameId_Optional has been set to a value
`public bool `[`TimeFrameId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad9839b436ded204b999a902dc86c9e04) | true if TimeFrameId_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad44b91659bd5dceb8adb50e712fa4361) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a49f84ec14f9a8ed1f0167581b8b6a554) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5e6ab4eb59b19bd692b47160768072e7) | true if CustomData_Optional has been explicitly set to null
`public FString `[`EntryId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af86fdb44a8c8a2761d912893f52d514c) | 
`public bool `[`EntryId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a34631be1448f2411ed4bbe5c41a711a7) | true if EntryId_Optional has been set to a value
`public bool `[`EntryId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abfa4e3b5a78d2adf154f8560a62964ab) | true if EntryId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad9e7c773f775dc4014dba35b7c44b4e3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderEntryCreateInput_1a35c190ae0a3369542ee9bb3f88537370)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a40409f9b10bf1e66468d988d57565d6c)`()` | Gets the value of Type.
`public inline FORCEINLINE const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad1a17111ca8a55824812d93b74a81417)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a18c287866f0b7ddd3c3697ffe464195c)`(const ERHAPI_PlayerOrderEntryType & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1af88f276bd310baff869f132c67dffbae)`(ERHAPI_PlayerOrderEntryType && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1abafcdb2cc4d1b2a200d35cf065167428)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af480f13cf5c04b89320ca789fe3b7882)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a33feec51409c0f0ddc053049cc134a45)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad30c4d80af4c76fb9e9f4580a11532df)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a05bb31d41bf1eaf73a1db47bfb3123d7)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aad8957631e3d6089a0b62f4bb08f8231)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a14ff3c9c0c905040acf3db32c9128e2b)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae2224b2c72b1d7884b01fe3564cf4849)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2a7217d04881c614eca51093f23ce004)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a42838760ca384f5c117bc774a170c49d)`()` | Returns the default value of LootId.
`public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a717852c7759f663c413ddea08beeae8f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab4286fe49a8ec09a541b3f6ddca11897)`() const` | Checks whether LootId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a571d731db0f08d4bf6e70b8394349cd4)`()` | Gets the value of Quantity.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9236daf9fcd93ecdf305904830b54552)`() const` | Gets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1aed8025ea96712b321ecdcbbc7e0e7590)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1fc530678711e0ca7234fb21fbbc147f)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7bd19b02aade51e4f123ab92597c8306)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a868285b8921beb1057218bcb252a0643)`()` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e8e0c19213e900c957576aa97b429b7)`() const` | Gets the value of VendorVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8cd915f5bb518974c407d08f363452ba)`(const int32 & DefaultValue) const` | Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae92f729af4d5ae08e887349039b7bf9c)`(int32 & OutValue) const` | Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad717615522301a5f2b6eba487ebf3bd8)`()` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68177efbbc4196e41df1e0f065e49d00)`() const` | Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1af0bda9344e6d6c86eaf284bdea3c0e65)`(const int32 & NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.
`public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae819f5190f91d125d83a56edf1f10a79)`(int32 && NewValue)` | Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.
`public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac35349b8c94e8d0c1c750c6b322ff781)`()` | Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_VendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5ff50202b9900c4109bdb54cc464a766)`()` | Returns the default value of VendorVersion.
`public inline FORCEINLINE void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab5c7572005b9a9bbf36ea777be52da50)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae860b85cdbd0f594eb38b49e9bdfd81e)`() const` | Checks whether VendorVersion_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1add43bf859378d8bd65e97325b2620dd0)`()` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a577fc18766d3ec56dbb969b40149e54f)`() const` | Gets the value of VendorEtag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e35308e96d005a4bdbceae18d422426)`(const FString & DefaultValue) const` | Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1adb1fbcc9b2ef9ad89f114cf43f24f245)`(FString & OutValue) const` | Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4de901cd6906e37c732b277f9b342742)`()` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f3859097f173ddb4dae05680efe5374)`() const` | Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1acba815b1872d02fea6eeaa78ed0aa770)`(const FString & NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.
`public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8f83c4d475426f0f6c1342c3b2a54b27)`(FString && NewValue)` | Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.
`public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a82276ebe77a648f4fdbe0b6c38501c69)`()` | Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.
`public inline FORCEINLINE void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1adc18fb1895994e5758509e8b1ef007b0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6e56d6f3ac134afa3af868a898be7ba6)`() const` | Checks whether VendorEtag_Optional is set to null.
`public inline FORCEINLINE TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7bfde0996f49799a08de97935d9aacd2)`()` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5f30e836a2841cdec8f9a93f3d9cea26)`() const` | Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1ace002d8e74ed7aa34da5553a7bf56957)`(const TArray< int32 > & DefaultValue) const` | Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7a5b75ba3be2b6f6e0ab37cf7f5bdc21)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae0243bceb1e18f171854d10c7d892fdd)`()` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3964760f9fbe9cb3fe1fd652e5f5ed87)`() const` | Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1addb972270f047b3e84bf31d1153b294b)`(const TArray< int32 > & NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac202105472f51be75d0a8991cae00a65)`(TArray< int32 > && NewValue)` | Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.
`public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a65517c1a063331a07ac1b93ba2ea6641)`()` | Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.
`public inline FORCEINLINE void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa7e4de4c251af6ab0d4d552b8c1f31bd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afaf4711533f61346360b103a4559d8e1)`() const` | Checks whether DynamicBundleLootIds_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0adc40204a7246015009d54261a08e6d)`()` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a13234f76321a4de1166bcbe1ead254eb)`() const` | Gets the value of PurchasePrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1aecd42e07e06a8bb6c87b1cb4b3ff2233)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` | Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9398305a86b6eed945455fdd52813a1f)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` | Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6d0e4d8dc075e90653ef8f1078f93f17)`()` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaa86ab05c1a23cbc79218ba680132158)`() const` | Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68b18f6f1f643071bd01366ef6cc4501)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.
`public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a13528b8a6649152beaa6ab8f2e8e8538)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` | Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.
`public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae9581b5ca492a0661cd1c476c5106610)`()` | Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.
`public inline FORCEINLINE void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab78ad9b4ea2a6cd24ef4c64b31c41918)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2da22b8500a7b2a68faf4c23fd5c48f6)`() const` | Checks whether PurchasePrice_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab8f70715513a2a56a2358d5e35ed4168)`()` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aab7e1a782cbfe9afdaf48d42f10cd315)`() const` | Gets the value of ExternalTranId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad9540c3b0bc663cb834479f2a5b9f0b9)`(const FString & DefaultValue) const` | Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9a9fd94ccc2b6bad4de13fd8a1f7dcf3)`(FString & OutValue) const` | Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa28a7b348150aab374375dd88c0ee7a7)`()` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6639146d95e4f5275457ea1e0cacfccc)`() const` | Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac2dde339f84970bb54023e23ef38394f)`(const FString & NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a13ce8fe36d2f25820682ba8af0d53d26)`(FString && NewValue)` | Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.
`public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1adb3e4b6ce57dde430443efd74d30cece)`()` | Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac5500b7f08452ae5839cdcea067fbd49)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6a469bac5d23bfa1696abdcddc09294c)`() const` | Checks whether ExternalTranId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac64084a0d1d356006f834908356959f4)`()` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a15ed6c60271cf1e520edec9a89088f50)`() const` | Gets the value of ExternalItemSku_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a178736badfcc4ecef51d403dde3d975e)`(const FString & DefaultValue) const` | Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2e9750ade28dd2f24afbe3f3c6fd723b)`(FString & OutValue) const` | Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a94b60d7c0f45501ba7b74eb3b731a542)`()` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a354a27348ba4b0685cb74a098410ec39)`() const` | Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a89f0f1e64267f0fd69645c0bffd3b71f)`(const FString & NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6cd75452c0ef826d8e55d82d5a8bc749)`(FString && NewValue)` | Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.
`public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae1ea50dbba0f3d7e7a6303263143b4ea)`()` | Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a713427e57aed5819547af40b0965a4c4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac213f5458eb73370ae8af768a162a37b)`() const` | Checks whether ExternalItemSku_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a78735d322812a54e3e69e16c53a981d4)`()` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9b094dfc4dfc030ccbe4fcfb405b7ce4)`() const` | Gets the value of UseInventoryBucket_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad5a1d440e5ba384ed2a9b13bbd4c654c)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa11d1357781e9169667d50b9d20611bc)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa8cfd0e876b822d8c76afab8ac6f5a61)`()` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9a8bad0924e5239127ef2571d9ca8110)`() const` | Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a719d96b88fd15953e01aca37f07e7bad)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.
`public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad0906780592d636a5f1efb882e64ee8b)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.
`public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a432cd0fdcc0612e716ffa86da217ebd1)`()` | Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.
`public inline FORCEINLINE void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a412dfcab76aa0b3f8b139c42ec1ff0a7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a798ec3faf65eaebd6a00ddf5bbd891b6)`() const` | Checks whether UseInventoryBucket_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1afcaf873354f771894ceafa257e8bdc73)`()` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a80c7365c922c8a051bd7ca2baef9be20)`() const` | Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad68b98dc976515c2310eb1e806752f9b)`(const int32 & DefaultValue) const` | Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1c75d5f27ad4dab1373b0c889fa8f79b)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a18c3e1565df4d19865c6f7c59896a01c)`()` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4dd5ef4363874cb44dcf19b6d9e90766)`() const` | Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2dc2e1a865dbb02163edeafaa4f5bcbe)`(const int32 & NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9bff0ccf71d92e1932fc38487cfb42aa)`(int32 && NewValue)` | Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab6b9e95fc5c21e7136e315acbd4646a5)`()` | Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af7bb6b2de2f6cb45247300c22cf7ca5f)`()` | Returns the default value of PlayerPortalEventId.
`public inline FORCEINLINE void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a243e3c120b8b1959cad405c9b1957280)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ada7965e497db0b81d3c339fff3131948)`() const` | Checks whether PlayerPortalEventId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad68c908981e7a5611c584639796e52f0)`()` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad31873f23fc0ad90abbb430b9d99cee8)`() const` | Gets the value of InventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a63ea5f0c414511d4109aa748dedb1794)`(const FGuid & DefaultValue) const` | Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6722417dbbe50c2eafc6f859fc118532)`(FGuid & OutValue) const` | Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad2d237aee243310faa723307343ea9bf)`()` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae3b9b7a6adb7f63ced35e68e4f253890)`() const` | Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a48182a2d3087b885a658a9077de2242c)`(const FGuid & NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.
`public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7110fe2cb674e54e3db533f174b3f866)`(FGuid && NewValue)` | Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.
`public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af814146a12f563d937742fd62d813216)`()` | Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.
`public inline FORCEINLINE void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a293723a0d36a02c088a5ab9cb7501713)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abaf8d7f4209058fb90ac00f3f661e00b)`() const` | Checks whether InventoryId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac1232bdecaf0be65b2d87555b1bbb207)`()` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8deb86d2306f04344f5dede18d7fe960)`() const` | Gets the value of LegacyInventoryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a883e53fee25b64a6da484a8c602fa65a)`(const int32 & DefaultValue) const` | Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8850e1b9c9f4c06cd1f13809c168e788)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a543e93996a9b04765d25d4fa8174a181)`()` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a898cc437a4271e5b40187d32e3e64aca)`() const` | Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac6557a44ebc3d2f3c3847bc7107deeb1)`(const int32 & NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a952b82d5be48c105c835dc39d6fa65d4)`(int32 && NewValue)` | Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a53b70be543b45f630c650430e1dc8135)`()` | Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3b68cea6934978704d5714586518c16e)`()` | Returns the default value of LegacyInventoryId.
`public inline FORCEINLINE void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a238404e6a267c1885da6f03d9e483496)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a21b26527c747e0fb7378214159367698)`() const` | Checks whether LegacyInventoryId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a31ced44823d0add1bc65e716c99cd3db)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af8ad81ea9574e394b67dbc5cfbd81e68)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a63c592c156c9483a145d722b54bdf1da)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0780c96d707dd93232d8d978da2102f4)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abb10239cf722cd3e7d6854503fdbc200)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaa0d4b80e81a4b2b06a0e2ee2da8ac69)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a22862e855389174d2dd98b1996282582)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af7984637c72fdb5c1f2b20768086de83)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5d3e39a51a50f515d60dbd75dbde3083)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad37b94516a19ed10eb42300163806bb7)`()` | Returns the default value of ItemId.
`public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2ad850e424cee7ad8b1ca67594c45cce)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab43b827f438b24af461fa00aee799b97)`() const` | Checks whether ItemId_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1aebe2ad86568defbc4e0f7bbc9e61db82)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3c9b585e6d527503bda746f54b12a06b)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1adcdcb5c2ee6155703885b0b0d79b4638)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac7da88cd240bb38ee9b8357fa2e35f89)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1c9fd4e8dd1e0d116c0794d58c543502)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4b313d99c18b72a7f7419fa526e03e32)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a217caee3f127a46ef32ac22be8162b8f)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1acb7dd79ebad25becc9d17f6f91d9bb40)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a77361b73e5ed1bd3243fe402e9b0fb08)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a90de9054231aab05453a70493b3acad3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0c60b6f576a89800cf3e18ad6b640633)`() const` | Checks whether Expires_Optional is set to null.
`public inline FORCEINLINE ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0dd44f75c9d01a41972c444d65e77200)`()` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1ad6b2a02eaf955352b456fc949d567c)`() const` | Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1acf0016e71e8adf6fda31517d057056bb)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` | Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a29b15db44100ed6cd9763f15b9eebccb)`(ERHAPI_XpQuantityTransform & OutValue) const` | Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1c250e9cfa1a8fa3a1afa2c4082f9783)`()` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a913292baf86f37e997b4ba417782e38e)`() const` | Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0966b5d034ced3f5a7be0f43b9e08b48)`(const ERHAPI_XpQuantityTransform & NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.
`public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7d1623d0b795399f2ea55f6265b29f9e)`(ERHAPI_XpQuantityTransform && NewValue)` | Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.
`public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac9a60430e460e7ea7e141f5021aad321)`()` | Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1ecba4d2072573b73d07e9ab174642c7)`()` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad34c6ff71881668146df6163e4e36c0b)`() const` | Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad93d020954af534f44f3ba92a909d5ea)`(const int32 & DefaultValue) const` | Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1a16ba8e0ce3ca066467b1d3afaa32a1d0)`(int32 & OutValue) const` | Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8ff38c71039671810dd4cfb1bd43b414)`()` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1af84a5c6dbefc93598584f7c4c00cf543)`() const` | Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac33468df1572e82fd2d64f05d3b0da02)`(const int32 & NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.
`public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1a53a6561aa0f6e763f00f881c2447bbbc)`(int32 && NewValue)` | Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.
`public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1adef73705b2801c9b58b5caf618e3ddaa)`()` | Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_HardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1acae0a68d728298ee752c2ecefdea7060)`()` | Returns the default value of HardQuantityMaximum.
`public inline FORCEINLINE void `[`SetHardQuantityMaximumToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6947983ff844cc95a8950b26a5cdf712)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsHardQuantityMaximumNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9c9e0981b5588ae297eb98644889fd34)`() const` | Checks whether HardQuantityMaximum_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1aab4b6d385728af7cf7095cf241e4cf07)`()` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1aba9f957048b2ca6f430ba73cc38b0f13)`() const` | Gets the value of InventoryOperation_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0217e4c7540823213c221ea42e88197d)`(const ERHAPI_InventoryOperation & DefaultValue) const` | Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1acd04598c69491c85adb858910d2d0cc4)`(ERHAPI_InventoryOperation & OutValue) const` | Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aae5f987b416814305d10ed5dd28c2923)`()` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb62e5925a90ed7cd42e1b3832994aa2)`() const` | Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1aebd3303ad87d24c51f8b3ddf4797fd97)`(const ERHAPI_InventoryOperation & NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.
`public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4dd25a0e29b2e907af25a207dec1dace)`(ERHAPI_InventoryOperation && NewValue)` | Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.
`public inline void `[`ClearInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad7704bafd736908dd7e1994b78e82624)`()` | Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.
`public inline FORCEINLINE ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1abc540385847cc2119354ac68d01b7976)`()` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaf34f7a15cfd40e850582dd6b2848fe7)`() const` | Gets the value of InventorySelectorType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a33962e4e3c7abcd5017d1d1333b2ed86)`(const ERHAPI_InventorySelector & DefaultValue) const` | Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a973c747da45f42e46d882a429a1648fd)`(ERHAPI_InventorySelector & OutValue) const` | Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a16d36abd0031e4c393c4ae4861898800)`()` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a76f901190ed78e71cc479533f601d1da)`() const` | Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a50009767c9e35180f2404a3f68a5c5c1)`(const ERHAPI_InventorySelector & NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.
`public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a80efdfac7a00e002efc989108f784e03)`(ERHAPI_InventorySelector && NewValue)` | Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.
`public inline void `[`ClearInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a101508f805b5db90a36f477d24e3e311)`()` | Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4aaaba281570fa8c1bac460d78dd2494)`()` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae78eea907b21a690851301f347c75ee1)`() const` | Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a83447688997f18c10e87ea92c8d61108)`(const int32 & DefaultValue) const` | Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a83de5a00f7ddcf87328023caf5435f7d)`(int32 & OutValue) const` | Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1da3701855b9cddb98e0ef1c09138aaa)`()` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e711094469a87fa94307cb3cf24d3f6)`() const` | Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa3efa23e87992c5847ed185c5bebc826)`(const int32 & NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8b7db9fc1a184c5bee2827ee67e5ed13)`(int32 && NewValue)` | Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.
`public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aca508fdbb06576ed47e2596b057be981)`()` | Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_QuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af7dd96f7873a587b6620c524e77fdae8)`()` | Returns the default value of QuantityMultInventoryItemId.
`public inline FORCEINLINE void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa6d7295cef3c0962303ff606efd2b449)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb606eb33b42a4f0c545a7bf75551361)`() const` | Checks whether QuantityMultInventoryItemId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa97b155a46c4cd1bd7271469d40c304b)`()` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a734f4aa0c6d8bc4deb679b4ad956a2f2)`() const` | Gets the value of TimeFrameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a770a1af9ce63d7595aa8625ec9a75802)`(const int32 & DefaultValue) const` | Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1abff4a76b8c1d6b7aee527be23b52dffa)`(int32 & OutValue) const` | Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a345fb983f539a8416aa9240a30ea7f21)`()` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a588b28fd2904facf6fa2c0fd972b9783)`() const` | Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1abeeae2ae1eef0288ec401af812d19ff5)`(const int32 & NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.
`public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7805504c3bfb1af17312524e74104993)`(int32 && NewValue)` | Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.
`public inline void `[`ClearTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a19a81d472e003648eaa62b68160f5e60)`()` | Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7b00907271d3351ca397ffa665562c8d)`()` | Returns the default value of TimeFrameId.
`public inline FORCEINLINE void `[`SetTimeFrameIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aac4fa90f994fca983a47d721fe64d505)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTimeFrameIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab0a5e11e2fecc2a8c0cf4e4ba9bce1de)`() const` | Checks whether TimeFrameId_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2ca4067148cafe36e42444855adfece6)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1ade7db2ef7e3f2fda632ca279700985d8)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a05298a7624da017d6042f60db9e1281d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2e4b10491d4e46ac2bee5f0aec10c4c8)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad24db3c00b5b464623a86c0fce8923db)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aef45e6292c27d7778546992c8d3fa8fd)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a354b735ff1aad0ef2b82c7da3e7dd23b)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab1f9020c8cbed34c5f879d4794799b74)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a73666595cea34c4a520187cfce958f41)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5fefea45b28a5f042203731727e112bd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acaff87856433a24f47b448f61f0c24c4)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1afdfb1e3524bf2f4a79d0326bb60da3d6)`()` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a05127df4995993d2316d0bf9c2e21490)`() const` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad86adf171e7952f7d3b64a9b66243ea9)`(const FString & DefaultValue) const` | Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68880bc69bab5b7466f42e5f286ebfc1)`(FString & OutValue) const` | Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a43e80abd1592c31403f2491edfc05865)`()` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a816ac40eeb097f317b5560ae646e5e41)`() const` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3789b52f4c511d90d99dc16933a90a1b)`(const FString & NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.
`public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa742c7d2181dcedc8683b5366569d771)`(FString && NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.
`public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0d6feba179563e8e8516403cc4c8c599)`()` | Clears the value of EntryId_Optional and sets EntryId_IsSet to false.
`public inline FORCEINLINE void `[`SetEntryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4d206c7d17815b6e9be41736090d2c68)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEntryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a04fb8f513f05c54a3fe69f2fad0020cf)`() const` | Checks whether EntryId_Optional is set to null.

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

#### `public ERHAPI_XpQuantityTransform `[`XpQuantityTransformType_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af08ce07da7f0f5b4e824e806bf705345) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af08ce07da7f0f5b4e824e806bf705345"></a>

#### `public bool `[`XpQuantityTransformType_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1addf96bdca5542335d2edcd05807106d6) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1addf96bdca5542335d2edcd05807106d6"></a>

true if XpQuantityTransformType_Optional has been set to a value

#### `public int32 `[`HardQuantityMaximum_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a78bb74c18817589b7c53b9d5f4cd3f61) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a78bb74c18817589b7c53b9d5f4cd3f61"></a>

#### `public bool `[`HardQuantityMaximum_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a33d8f978cb9e32e021da030d36e98362) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a33d8f978cb9e32e021da030d36e98362"></a>

true if HardQuantityMaximum_Optional has been set to a value

#### `public bool `[`HardQuantityMaximum_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1af615726cedd63733ac9fb8e54664f7e1) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af615726cedd63733ac9fb8e54664f7e1"></a>

true if HardQuantityMaximum_Optional has been explicitly set to null

#### `public ERHAPI_InventoryOperation `[`InventoryOperation_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0392b374019ae5dc6c208970a9ef8c3d) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0392b374019ae5dc6c208970a9ef8c3d"></a>

#### `public bool `[`InventoryOperation_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa9797e7419934e1567ccd0a616417dd4) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa9797e7419934e1567ccd0a616417dd4"></a>

true if InventoryOperation_Optional has been set to a value

#### `public ERHAPI_InventorySelector `[`InventorySelectorType_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1af656600b79dd1a9d7faadb56f5e581e6) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af656600b79dd1a9d7faadb56f5e581e6"></a>

#### `public bool `[`InventorySelectorType_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a643f075294b741eb1f4d7bd3322b9b16) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a643f075294b741eb1f4d7bd3322b9b16"></a>

true if InventorySelectorType_Optional has been set to a value

#### `public int32 `[`QuantityMultInventoryItemId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1a69d68ae057be07d674d3a5f7af9a1aeb) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a69d68ae057be07d674d3a5f7af9a1aeb"></a>

#### `public bool `[`QuantityMultInventoryItemId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6bf6456592742a45495db898bf881152) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6bf6456592742a45495db898bf881152"></a>

true if QuantityMultInventoryItemId_Optional has been set to a value

#### `public bool `[`QuantityMultInventoryItemId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a06fc0a35d9ac7823b7d435c1b888f602) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a06fc0a35d9ac7823b7d435c1b888f602"></a>

true if QuantityMultInventoryItemId_Optional has been explicitly set to null

#### `public int32 `[`TimeFrameId_Optional`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae8fb742195e2066b16c6c5317dd5dced) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae8fb742195e2066b16c6c5317dd5dced"></a>

#### `public bool `[`TimeFrameId_IsSet`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab952072490e289f092e340488b08ab93) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab952072490e289f092e340488b08ab93"></a>

true if TimeFrameId_Optional has been set to a value

#### `public bool `[`TimeFrameId_IsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad9839b436ded204b999a902dc86c9e04) <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad9839b436ded204b999a902dc86c9e04"></a>

true if TimeFrameId_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a40409f9b10bf1e66468d988d57565d6c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a40409f9b10bf1e66468d988d57565d6c"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const ERHAPI_PlayerOrderEntryType & `[`GetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad1a17111ca8a55824812d93b74a81417)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad1a17111ca8a55824812d93b74a81417"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a18c287866f0b7ddd3c3697ffe464195c)`(const ERHAPI_PlayerOrderEntryType & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a18c287866f0b7ddd3c3697ffe464195c"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderEntryCreateInput_1af88f276bd310baff869f132c67dffbae)`(ERHAPI_PlayerOrderEntryType && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af88f276bd310baff869f132c67dffbae"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1abafcdb2cc4d1b2a200d35cf065167428)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abafcdb2cc4d1b2a200d35cf065167428"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af480f13cf5c04b89320ca789fe3b7882)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af480f13cf5c04b89320ca789fe3b7882"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a33feec51409c0f0ddc053049cc134a45)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a33feec51409c0f0ddc053049cc134a45"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad30c4d80af4c76fb9e9f4580a11532df)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad30c4d80af4c76fb9e9f4580a11532df"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a05bb31d41bf1eaf73a1db47bfb3123d7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a05bb31d41bf1eaf73a1db47bfb3123d7"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aad8957631e3d6089a0b62f4bb08f8231)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aad8957631e3d6089a0b62f4bb08f8231"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a14ff3c9c0c905040acf3db32c9128e2b)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a14ff3c9c0c905040acf3db32c9128e2b"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae2224b2c72b1d7884b01fe3564cf4849)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae2224b2c72b1d7884b01fe3564cf4849"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2a7217d04881c614eca51093f23ce004)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2a7217d04881c614eca51093f23ce004"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a42838760ca384f5c117bc774a170c49d)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a42838760ca384f5c117bc774a170c49d"></a>

Returns the default value of LootId.

#### `public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a717852c7759f663c413ddea08beeae8f)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a717852c7759f663c413ddea08beeae8f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab4286fe49a8ec09a541b3f6ddca11897)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab4286fe49a8ec09a541b3f6ddca11897"></a>

Checks whether LootId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a571d731db0f08d4bf6e70b8394349cd4)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a571d731db0f08d4bf6e70b8394349cd4"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9236daf9fcd93ecdf305904830b54552)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9236daf9fcd93ecdf305904830b54552"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1aed8025ea96712b321ecdcbbc7e0e7590)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aed8025ea96712b321ecdcbbc7e0e7590"></a>

Sets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1fc530678711e0ca7234fb21fbbc147f)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1fc530678711e0ca7234fb21fbbc147f"></a>

Sets the value of Quantity using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7bd19b02aade51e4f123ab92597c8306)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7bd19b02aade51e4f123ab92597c8306"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a868285b8921beb1057218bcb252a0643)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a868285b8921beb1057218bcb252a0643"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e8e0c19213e900c957576aa97b429b7)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4e8e0c19213e900c957576aa97b429b7"></a>

Gets the value of VendorVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8cd915f5bb518974c407d08f363452ba)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8cd915f5bb518974c407d08f363452ba"></a>

Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae92f729af4d5ae08e887349039b7bf9c)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae92f729af4d5ae08e887349039b7bf9c"></a>

Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad717615522301a5f2b6eba487ebf3bd8)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad717615522301a5f2b6eba487ebf3bd8"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetVendorVersionOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68177efbbc4196e41df1e0f065e49d00)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a68177efbbc4196e41df1e0f065e49d00"></a>

Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1af0bda9344e6d6c86eaf284bdea3c0e65)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af0bda9344e6d6c86eaf284bdea3c0e65"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae819f5190f91d125d83a56edf1f10a79)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae819f5190f91d125d83a56edf1f10a79"></a>

Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac35349b8c94e8d0c1c750c6b322ff781)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac35349b8c94e8d0c1c750c6b322ff781"></a>

Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_VendorVersion`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5ff50202b9900c4109bdb54cc464a766)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5ff50202b9900c4109bdb54cc464a766"></a>

Returns the default value of VendorVersion.

#### `public inline FORCEINLINE void `[`SetVendorVersionToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab5c7572005b9a9bbf36ea777be52da50)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab5c7572005b9a9bbf36ea777be52da50"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVendorVersionNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae860b85cdbd0f594eb38b49e9bdfd81e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae860b85cdbd0f594eb38b49e9bdfd81e"></a>

Checks whether VendorVersion_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1add43bf859378d8bd65e97325b2620dd0)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1add43bf859378d8bd65e97325b2620dd0"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a577fc18766d3ec56dbb969b40149e54f)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a577fc18766d3ec56dbb969b40149e54f"></a>

Gets the value of VendorEtag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e35308e96d005a4bdbceae18d422426)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4e35308e96d005a4bdbceae18d422426"></a>

Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1adb1fbcc9b2ef9ad89f114cf43f24f245)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1adb1fbcc9b2ef9ad89f114cf43f24f245"></a>

Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4de901cd6906e37c732b277f9b342742)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4de901cd6906e37c732b277f9b342742"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVendorEtagOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2f3859097f173ddb4dae05680efe5374)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2f3859097f173ddb4dae05680efe5374"></a>

Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1acba815b1872d02fea6eeaa78ed0aa770)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acba815b1872d02fea6eeaa78ed0aa770"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8f83c4d475426f0f6c1342c3b2a54b27)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8f83c4d475426f0f6c1342c3b2a54b27"></a>

Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorEtag`](#structFRHAPI__PlayerOrderEntryCreateInput_1a82276ebe77a648f4fdbe0b6c38501c69)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a82276ebe77a648f4fdbe0b6c38501c69"></a>

Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVendorEtagToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1adc18fb1895994e5758509e8b1ef007b0)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1adc18fb1895994e5758509e8b1ef007b0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVendorEtagNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6e56d6f3ac134afa3af868a898be7ba6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6e56d6f3ac134afa3af868a898be7ba6"></a>

Checks whether VendorEtag_Optional is set to null.

#### `public inline FORCEINLINE TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7bfde0996f49799a08de97935d9aacd2)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7bfde0996f49799a08de97935d9aacd2"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5f30e836a2841cdec8f9a93f3d9cea26)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5f30e836a2841cdec8f9a93f3d9cea26"></a>

Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1ace002d8e74ed7aa34da5553a7bf56957)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ace002d8e74ed7aa34da5553a7bf56957"></a>

Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7a5b75ba3be2b6f6e0ab37cf7f5bdc21)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7a5b75ba3be2b6f6e0ab37cf7f5bdc21"></a>

Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae0243bceb1e18f171854d10c7d892fdd)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae0243bceb1e18f171854d10c7d892fdd"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< int32 > * `[`GetDynamicBundleLootIdsOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3964760f9fbe9cb3fe1fd652e5f5ed87)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3964760f9fbe9cb3fe1fd652e5f5ed87"></a>

Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1addb972270f047b3e84bf31d1153b294b)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1addb972270f047b3e84bf31d1153b294b"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac202105472f51be75d0a8991cae00a65)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac202105472f51be75d0a8991cae00a65"></a>

Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true using move semantics.

#### `public inline void `[`ClearDynamicBundleLootIds`](#structFRHAPI__PlayerOrderEntryCreateInput_1a65517c1a063331a07ac1b93ba2ea6641)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a65517c1a063331a07ac1b93ba2ea6641"></a>

Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false.

#### `public inline FORCEINLINE void `[`SetDynamicBundleLootIdsToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa7e4de4c251af6ab0d4d552b8c1f31bd)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa7e4de4c251af6ab0d4d552b8c1f31bd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDynamicBundleLootIdsNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afaf4711533f61346360b103a4559d8e1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afaf4711533f61346360b103a4559d8e1"></a>

Checks whether DynamicBundleLootIds_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0adc40204a7246015009d54261a08e6d)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0adc40204a7246015009d54261a08e6d"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a13234f76321a4de1166bcbe1ead254eb)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a13234f76321a4de1166bcbe1ead254eb"></a>

Gets the value of PurchasePrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1aecd42e07e06a8bb6c87b1cb4b3ff2233)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aecd42e07e06a8bb6c87b1cb4b3ff2233"></a>

Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9398305a86b6eed945455fdd52813a1f)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9398305a86b6eed945455fdd52813a1f"></a>

Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6d0e4d8dc075e90653ef8f1078f93f17)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6d0e4d8dc075e90653ef8f1078f93f17"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` * `[`GetPurchasePriceOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaa86ab05c1a23cbc79218ba680132158)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aaa86ab05c1a23cbc79218ba680132158"></a>

Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68b18f6f1f643071bd01366ef6cc4501)`(const `[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a68b18f6f1f643071bd01366ef6cc4501"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1a13528b8a6649152beaa6ab8f2e8e8538)`(`[`FRHAPI_PurchasePrice`](RHAPI_PurchasePrice.md#structFRHAPI__PurchasePrice)` && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a13528b8a6649152beaa6ab8f2e8e8538"></a>

Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true using move semantics.

#### `public inline void `[`ClearPurchasePrice`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae9581b5ca492a0661cd1c476c5106610)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae9581b5ca492a0661cd1c476c5106610"></a>

Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPurchasePriceToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab78ad9b4ea2a6cd24ef4c64b31c41918)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab78ad9b4ea2a6cd24ef4c64b31c41918"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPurchasePriceNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2da22b8500a7b2a68faf4c23fd5c48f6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2da22b8500a7b2a68faf4c23fd5c48f6"></a>

Checks whether PurchasePrice_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab8f70715513a2a56a2358d5e35ed4168)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab8f70715513a2a56a2358d5e35ed4168"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aab7e1a782cbfe9afdaf48d42f10cd315)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aab7e1a782cbfe9afdaf48d42f10cd315"></a>

Gets the value of ExternalTranId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad9540c3b0bc663cb834479f2a5b9f0b9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad9540c3b0bc663cb834479f2a5b9f0b9"></a>

Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9a9fd94ccc2b6bad4de13fd8a1f7dcf3)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9a9fd94ccc2b6bad4de13fd8a1f7dcf3"></a>

Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa28a7b348150aab374375dd88c0ee7a7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa28a7b348150aab374375dd88c0ee7a7"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalTranIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6639146d95e4f5275457ea1e0cacfccc)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6639146d95e4f5275457ea1e0cacfccc"></a>

Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac2dde339f84970bb54023e23ef38394f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac2dde339f84970bb54023e23ef38394f"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a13ce8fe36d2f25820682ba8af0d53d26)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a13ce8fe36d2f25820682ba8af0d53d26"></a>

Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalTranId`](#structFRHAPI__PlayerOrderEntryCreateInput_1adb3e4b6ce57dde430443efd74d30cece)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1adb3e4b6ce57dde430443efd74d30cece"></a>

Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalTranIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac5500b7f08452ae5839cdcea067fbd49)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac5500b7f08452ae5839cdcea067fbd49"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalTranIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6a469bac5d23bfa1696abdcddc09294c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6a469bac5d23bfa1696abdcddc09294c"></a>

Checks whether ExternalTranId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac64084a0d1d356006f834908356959f4)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac64084a0d1d356006f834908356959f4"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a15ed6c60271cf1e520edec9a89088f50)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a15ed6c60271cf1e520edec9a89088f50"></a>

Gets the value of ExternalItemSku_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a178736badfcc4ecef51d403dde3d975e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a178736badfcc4ecef51d403dde3d975e"></a>

Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2e9750ade28dd2f24afbe3f3c6fd723b)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2e9750ade28dd2f24afbe3f3c6fd723b"></a>

Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a94b60d7c0f45501ba7b74eb3b731a542)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a94b60d7c0f45501ba7b74eb3b731a542"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetExternalItemSkuOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a354a27348ba4b0685cb74a098410ec39)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a354a27348ba4b0685cb74a098410ec39"></a>

Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a89f0f1e64267f0fd69645c0bffd3b71f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a89f0f1e64267f0fd69645c0bffd3b71f"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6cd75452c0ef826d8e55d82d5a8bc749)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6cd75452c0ef826d8e55d82d5a8bc749"></a>

Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalItemSku`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae1ea50dbba0f3d7e7a6303263143b4ea)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae1ea50dbba0f3d7e7a6303263143b4ea"></a>

Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalItemSkuToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a713427e57aed5819547af40b0965a4c4)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a713427e57aed5819547af40b0965a4c4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalItemSkuNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac213f5458eb73370ae8af768a162a37b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac213f5458eb73370ae8af768a162a37b"></a>

Checks whether ExternalItemSku_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a78735d322812a54e3e69e16c53a981d4)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a78735d322812a54e3e69e16c53a981d4"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9b094dfc4dfc030ccbe4fcfb405b7ce4)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9b094dfc4dfc030ccbe4fcfb405b7ce4"></a>

Gets the value of UseInventoryBucket_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket & `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad5a1d440e5ba384ed2a9b13bbd4c654c)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad5a1d440e5ba384ed2a9b13bbd4c654c"></a>

Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa11d1357781e9169667d50b9d20611bc)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa11d1357781e9169667d50b9d20611bc"></a>

Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa8cfd0e876b822d8c76afab8ac6f5a61)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa8cfd0e876b822d8c76afab8ac6f5a61"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryBucket * `[`GetUseInventoryBucketOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9a8bad0924e5239127ef2571d9ca8110)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9a8bad0924e5239127ef2571d9ca8110"></a>

Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a719d96b88fd15953e01aca37f07e7bad)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a719d96b88fd15953e01aca37f07e7bad"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad0906780592d636a5f1efb882e64ee8b)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad0906780592d636a5f1efb882e64ee8b"></a>

Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true using move semantics.

#### `public inline void `[`ClearUseInventoryBucket`](#structFRHAPI__PlayerOrderEntryCreateInput_1a432cd0fdcc0612e716ffa86da217ebd1)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a432cd0fdcc0612e716ffa86da217ebd1"></a>

Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false.

#### `public inline FORCEINLINE void `[`SetUseInventoryBucketToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a412dfcab76aa0b3f8b139c42ec1ff0a7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a412dfcab76aa0b3f8b139c42ec1ff0a7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsUseInventoryBucketNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a798ec3faf65eaebd6a00ddf5bbd891b6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a798ec3faf65eaebd6a00ddf5bbd891b6"></a>

Checks whether UseInventoryBucket_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1afcaf873354f771894ceafa257e8bdc73)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afcaf873354f771894ceafa257e8bdc73"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a80c7365c922c8a051bd7ca2baef9be20)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a80c7365c922c8a051bd7ca2baef9be20"></a>

Gets the value of PlayerPortalEventId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad68b98dc976515c2310eb1e806752f9b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad68b98dc976515c2310eb1e806752f9b"></a>

Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1c75d5f27ad4dab1373b0c889fa8f79b)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1c75d5f27ad4dab1373b0c889fa8f79b"></a>

Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a18c3e1565df4d19865c6f7c59896a01c)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a18c3e1565df4d19865c6f7c59896a01c"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerPortalEventIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4dd5ef4363874cb44dcf19b6d9e90766)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4dd5ef4363874cb44dcf19b6d9e90766"></a>

Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2dc2e1a865dbb02163edeafaa4f5bcbe)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2dc2e1a865dbb02163edeafaa4f5bcbe"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9bff0ccf71d92e1932fc38487cfb42aa)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9bff0ccf71d92e1932fc38487cfb42aa"></a>

Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab6b9e95fc5c21e7136e315acbd4646a5)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab6b9e95fc5c21e7136e315acbd4646a5"></a>

Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerPortalEventId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af7bb6b2de2f6cb45247300c22cf7ca5f)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af7bb6b2de2f6cb45247300c22cf7ca5f"></a>

Returns the default value of PlayerPortalEventId.

#### `public inline FORCEINLINE void `[`SetPlayerPortalEventIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a243e3c120b8b1959cad405c9b1957280)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a243e3c120b8b1959cad405c9b1957280"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerPortalEventIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ada7965e497db0b81d3c339fff3131948)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ada7965e497db0b81d3c339fff3131948"></a>

Checks whether PlayerPortalEventId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad68c908981e7a5611c584639796e52f0)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad68c908981e7a5611c584639796e52f0"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad31873f23fc0ad90abbb430b9d99cee8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad31873f23fc0ad90abbb430b9d99cee8"></a>

Gets the value of InventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a63ea5f0c414511d4109aa748dedb1794)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a63ea5f0c414511d4109aa748dedb1794"></a>

Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6722417dbbe50c2eafc6f859fc118532)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6722417dbbe50c2eafc6f859fc118532"></a>

Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad2d237aee243310faa723307343ea9bf)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad2d237aee243310faa723307343ea9bf"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae3b9b7a6adb7f63ced35e68e4f253890)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae3b9b7a6adb7f63ced35e68e4f253890"></a>

Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a48182a2d3087b885a658a9077de2242c)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a48182a2d3087b885a658a9077de2242c"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7110fe2cb674e54e3db533f174b3f866)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7110fe2cb674e54e3db533f174b3f866"></a>

Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af814146a12f563d937742fd62d813216)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af814146a12f563d937742fd62d813216"></a>

Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a293723a0d36a02c088a5ab9cb7501713)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a293723a0d36a02c088a5ab9cb7501713"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abaf8d7f4209058fb90ac00f3f661e00b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abaf8d7f4209058fb90ac00f3f661e00b"></a>

Checks whether InventoryId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac1232bdecaf0be65b2d87555b1bbb207)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac1232bdecaf0be65b2d87555b1bbb207"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8deb86d2306f04344f5dede18d7fe960)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8deb86d2306f04344f5dede18d7fe960"></a>

Gets the value of LegacyInventoryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a883e53fee25b64a6da484a8c602fa65a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a883e53fee25b64a6da484a8c602fa65a"></a>

Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8850e1b9c9f4c06cd1f13809c168e788)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8850e1b9c9f4c06cd1f13809c168e788"></a>

Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a543e93996a9b04765d25d4fa8174a181)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a543e93996a9b04765d25d4fa8174a181"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacyInventoryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a898cc437a4271e5b40187d32e3e64aca)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a898cc437a4271e5b40187d32e3e64aca"></a>

Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac6557a44ebc3d2f3c3847bc7107deeb1)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac6557a44ebc3d2f3c3847bc7107deeb1"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a952b82d5be48c105c835dc39d6fa65d4)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a952b82d5be48c105c835dc39d6fa65d4"></a>

Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a53b70be543b45f630c650430e1dc8135)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a53b70be543b45f630c650430e1dc8135"></a>

Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyInventoryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3b68cea6934978704d5714586518c16e)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3b68cea6934978704d5714586518c16e"></a>

Returns the default value of LegacyInventoryId.

#### `public inline FORCEINLINE void `[`SetLegacyInventoryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a238404e6a267c1885da6f03d9e483496)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a238404e6a267c1885da6f03d9e483496"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLegacyInventoryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a21b26527c747e0fb7378214159367698)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a21b26527c747e0fb7378214159367698"></a>

Checks whether LegacyInventoryId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a31ced44823d0add1bc65e716c99cd3db)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a31ced44823d0add1bc65e716c99cd3db"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af8ad81ea9574e394b67dbc5cfbd81e68)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af8ad81ea9574e394b67dbc5cfbd81e68"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a63c592c156c9483a145d722b54bdf1da)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a63c592c156c9483a145d722b54bdf1da"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0780c96d707dd93232d8d978da2102f4)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0780c96d707dd93232d8d978da2102f4"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1abb10239cf722cd3e7d6854503fdbc200)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abb10239cf722cd3e7d6854503fdbc200"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaa0d4b80e81a4b2b06a0e2ee2da8ac69)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aaa0d4b80e81a4b2b06a0e2ee2da8ac69"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a22862e855389174d2dd98b1996282582)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a22862e855389174d2dd98b1996282582"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af7984637c72fdb5c1f2b20768086de83)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af7984637c72fdb5c1f2b20768086de83"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5d3e39a51a50f515d60dbd75dbde3083)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5d3e39a51a50f515d60dbd75dbde3083"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad37b94516a19ed10eb42300163806bb7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad37b94516a19ed10eb42300163806bb7"></a>

Returns the default value of ItemId.

#### `public inline FORCEINLINE void `[`SetItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2ad850e424cee7ad8b1ca67594c45cce)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2ad850e424cee7ad8b1ca67594c45cce"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab43b827f438b24af461fa00aee799b97)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab43b827f438b24af461fa00aee799b97"></a>

Checks whether ItemId_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1aebe2ad86568defbc4e0f7bbc9e61db82)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aebe2ad86568defbc4e0f7bbc9e61db82"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3c9b585e6d527503bda746f54b12a06b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3c9b585e6d527503bda746f54b12a06b"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1adcdcb5c2ee6155703885b0b0d79b4638)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1adcdcb5c2ee6155703885b0b0d79b4638"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac7da88cd240bb38ee9b8357fa2e35f89)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac7da88cd240bb38ee9b8357fa2e35f89"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1c9fd4e8dd1e0d116c0794d58c543502)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1c9fd4e8dd1e0d116c0794d58c543502"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4b313d99c18b72a7f7419fa526e03e32)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4b313d99c18b72a7f7419fa526e03e32"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a217caee3f127a46ef32ac22be8162b8f)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a217caee3f127a46ef32ac22be8162b8f"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1acb7dd79ebad25becc9d17f6f91d9bb40)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acb7dd79ebad25becc9d17f6f91d9bb40"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__PlayerOrderEntryCreateInput_1a77361b73e5ed1bd3243fe402e9b0fb08)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a77361b73e5ed1bd3243fe402e9b0fb08"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExpiresToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a90de9054231aab05453a70493b3acad3)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a90de9054231aab05453a70493b3acad3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExpiresNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0c60b6f576a89800cf3e18ad6b640633)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0c60b6f576a89800cf3e18ad6b640633"></a>

Checks whether Expires_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0dd44f75c9d01a41972c444d65e77200)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0dd44f75c9d01a41972c444d65e77200"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1ad6b2a02eaf955352b456fc949d567c)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1ad6b2a02eaf955352b456fc949d567c"></a>

Gets the value of XpQuantityTransformType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform & `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1acf0016e71e8adf6fda31517d057056bb)`(const ERHAPI_XpQuantityTransform & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acf0016e71e8adf6fda31517d057056bb"></a>

Gets the value of XpQuantityTransformType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a29b15db44100ed6cd9763f15b9eebccb)`(ERHAPI_XpQuantityTransform & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a29b15db44100ed6cd9763f15b9eebccb"></a>

Fills OutValue with the value of XpQuantityTransformType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1c250e9cfa1a8fa3a1afa2c4082f9783)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1c250e9cfa1a8fa3a1afa2c4082f9783"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_XpQuantityTransform * `[`GetXpQuantityTransformTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a913292baf86f37e997b4ba417782e38e)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a913292baf86f37e997b4ba417782e38e"></a>

Returns a pointer to XpQuantityTransformType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0966b5d034ced3f5a7be0f43b9e08b48)`(const ERHAPI_XpQuantityTransform & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0966b5d034ced3f5a7be0f43b9e08b48"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7d1623d0b795399f2ea55f6265b29f9e)`(ERHAPI_XpQuantityTransform && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7d1623d0b795399f2ea55f6265b29f9e"></a>

Sets the value of XpQuantityTransformType_Optional and also sets XpQuantityTransformType_IsSet to true using move semantics.

#### `public inline void `[`ClearXpQuantityTransformType`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac9a60430e460e7ea7e141f5021aad321)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac9a60430e460e7ea7e141f5021aad321"></a>

Clears the value of XpQuantityTransformType_Optional and sets XpQuantityTransformType_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1ecba4d2072573b73d07e9ab174642c7)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1ecba4d2072573b73d07e9ab174642c7"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad34c6ff71881668146df6163e4e36c0b)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad34c6ff71881668146df6163e4e36c0b"></a>

Gets the value of HardQuantityMaximum_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad93d020954af534f44f3ba92a909d5ea)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad93d020954af534f44f3ba92a909d5ea"></a>

Gets the value of HardQuantityMaximum_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1a16ba8e0ce3ca066467b1d3afaa32a1d0)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a16ba8e0ce3ca066467b1d3afaa32a1d0"></a>

Fills OutValue with the value of HardQuantityMaximum_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8ff38c71039671810dd4cfb1bd43b414)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8ff38c71039671810dd4cfb1bd43b414"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetHardQuantityMaximumOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1af84a5c6dbefc93598584f7c4c00cf543)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af84a5c6dbefc93598584f7c4c00cf543"></a>

Returns a pointer to HardQuantityMaximum_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1ac33468df1572e82fd2d64f05d3b0da02)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ac33468df1572e82fd2d64f05d3b0da02"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1a53a6561aa0f6e763f00f881c2447bbbc)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a53a6561aa0f6e763f00f881c2447bbbc"></a>

Sets the value of HardQuantityMaximum_Optional and also sets HardQuantityMaximum_IsSet to true using move semantics.

#### `public inline void `[`ClearHardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1adef73705b2801c9b58b5caf618e3ddaa)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1adef73705b2801c9b58b5caf618e3ddaa"></a>

Clears the value of HardQuantityMaximum_Optional and sets HardQuantityMaximum_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_HardQuantityMaximum`](#structFRHAPI__PlayerOrderEntryCreateInput_1acae0a68d728298ee752c2ecefdea7060)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acae0a68d728298ee752c2ecefdea7060"></a>

Returns the default value of HardQuantityMaximum.

#### `public inline FORCEINLINE void `[`SetHardQuantityMaximumToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a6947983ff844cc95a8950b26a5cdf712)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a6947983ff844cc95a8950b26a5cdf712"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsHardQuantityMaximumNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a9c9e0981b5588ae297eb98644889fd34)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a9c9e0981b5588ae297eb98644889fd34"></a>

Checks whether HardQuantityMaximum_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1aab4b6d385728af7cf7095cf241e4cf07)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aab4b6d385728af7cf7095cf241e4cf07"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1aba9f957048b2ca6f430ba73cc38b0f13)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aba9f957048b2ca6f430ba73cc38b0f13"></a>

Gets the value of InventoryOperation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation & `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0217e4c7540823213c221ea42e88197d)`(const ERHAPI_InventoryOperation & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0217e4c7540823213c221ea42e88197d"></a>

Gets the value of InventoryOperation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1acd04598c69491c85adb858910d2d0cc4)`(ERHAPI_InventoryOperation & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acd04598c69491c85adb858910d2d0cc4"></a>

Fills OutValue with the value of InventoryOperation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aae5f987b416814305d10ed5dd28c2923)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aae5f987b416814305d10ed5dd28c2923"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryOperation * `[`GetInventoryOperationOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb62e5925a90ed7cd42e1b3832994aa2)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afb62e5925a90ed7cd42e1b3832994aa2"></a>

Returns a pointer to InventoryOperation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1aebd3303ad87d24c51f8b3ddf4797fd97)`(const ERHAPI_InventoryOperation & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aebd3303ad87d24c51f8b3ddf4797fd97"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4dd25a0e29b2e907af25a207dec1dace)`(ERHAPI_InventoryOperation && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4dd25a0e29b2e907af25a207dec1dace"></a>

Sets the value of InventoryOperation_Optional and also sets InventoryOperation_IsSet to true using move semantics.

#### `public inline void `[`ClearInventoryOperation`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad7704bafd736908dd7e1994b78e82624)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad7704bafd736908dd7e1994b78e82624"></a>

Clears the value of InventoryOperation_Optional and sets InventoryOperation_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1abc540385847cc2119354ac68d01b7976)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abc540385847cc2119354ac68d01b7976"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1aaf34f7a15cfd40e850582dd6b2848fe7)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aaf34f7a15cfd40e850582dd6b2848fe7"></a>

Gets the value of InventorySelectorType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector & `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a33962e4e3c7abcd5017d1d1333b2ed86)`(const ERHAPI_InventorySelector & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a33962e4e3c7abcd5017d1d1333b2ed86"></a>

Gets the value of InventorySelectorType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a973c747da45f42e46d882a429a1648fd)`(ERHAPI_InventorySelector & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a973c747da45f42e46d882a429a1648fd"></a>

Fills OutValue with the value of InventorySelectorType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a16d36abd0031e4c393c4ae4861898800)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a16d36abd0031e4c393c4ae4861898800"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventorySelector * `[`GetInventorySelectorTypeOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a76f901190ed78e71cc479533f601d1da)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a76f901190ed78e71cc479533f601d1da"></a>

Returns a pointer to InventorySelectorType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a50009767c9e35180f2404a3f68a5c5c1)`(const ERHAPI_InventorySelector & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a50009767c9e35180f2404a3f68a5c5c1"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a80efdfac7a00e002efc989108f784e03)`(ERHAPI_InventorySelector && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a80efdfac7a00e002efc989108f784e03"></a>

Sets the value of InventorySelectorType_Optional and also sets InventorySelectorType_IsSet to true using move semantics.

#### `public inline void `[`ClearInventorySelectorType`](#structFRHAPI__PlayerOrderEntryCreateInput_1a101508f805b5db90a36f477d24e3e311)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a101508f805b5db90a36f477d24e3e311"></a>

Clears the value of InventorySelectorType_Optional and sets InventorySelectorType_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4aaaba281570fa8c1bac460d78dd2494)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4aaaba281570fa8c1bac460d78dd2494"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ae78eea907b21a690851301f347c75ee1)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ae78eea907b21a690851301f347c75ee1"></a>

Gets the value of QuantityMultInventoryItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a83447688997f18c10e87ea92c8d61108)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a83447688997f18c10e87ea92c8d61108"></a>

Gets the value of QuantityMultInventoryItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a83de5a00f7ddcf87328023caf5435f7d)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a83de5a00f7ddcf87328023caf5435f7d"></a>

Fills OutValue with the value of QuantityMultInventoryItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a1da3701855b9cddb98e0ef1c09138aaa)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a1da3701855b9cddb98e0ef1c09138aaa"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityMultInventoryItemIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4e711094469a87fa94307cb3cf24d3f6)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4e711094469a87fa94307cb3cf24d3f6"></a>

Returns a pointer to QuantityMultInventoryItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa3efa23e87992c5847ed185c5bebc826)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa3efa23e87992c5847ed185c5bebc826"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a8b7db9fc1a184c5bee2827ee67e5ed13)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a8b7db9fc1a184c5bee2827ee67e5ed13"></a>

Sets the value of QuantityMultInventoryItemId_Optional and also sets QuantityMultInventoryItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aca508fdbb06576ed47e2596b057be981)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aca508fdbb06576ed47e2596b057be981"></a>

Clears the value of QuantityMultInventoryItemId_Optional and sets QuantityMultInventoryItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_QuantityMultInventoryItemId`](#structFRHAPI__PlayerOrderEntryCreateInput_1af7dd96f7873a587b6620c524e77fdae8)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1af7dd96f7873a587b6620c524e77fdae8"></a>

Returns the default value of QuantityMultInventoryItemId.

#### `public inline FORCEINLINE void `[`SetQuantityMultInventoryItemIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa6d7295cef3c0962303ff606efd2b449)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa6d7295cef3c0962303ff606efd2b449"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsQuantityMultInventoryItemIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1afb606eb33b42a4f0c545a7bf75551361)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afb606eb33b42a4f0c545a7bf75551361"></a>

Checks whether QuantityMultInventoryItemId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa97b155a46c4cd1bd7271469d40c304b)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa97b155a46c4cd1bd7271469d40c304b"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a734f4aa0c6d8bc4deb679b4ad956a2f2)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a734f4aa0c6d8bc4deb679b4ad956a2f2"></a>

Gets the value of TimeFrameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a770a1af9ce63d7595aa8625ec9a75802)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a770a1af9ce63d7595aa8625ec9a75802"></a>

Gets the value of TimeFrameId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1abff4a76b8c1d6b7aee527be23b52dffa)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abff4a76b8c1d6b7aee527be23b52dffa"></a>

Fills OutValue with the value of TimeFrameId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a345fb983f539a8416aa9240a30ea7f21)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a345fb983f539a8416aa9240a30ea7f21"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTimeFrameIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a588b28fd2904facf6fa2c0fd972b9783)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a588b28fd2904facf6fa2c0fd972b9783"></a>

Returns a pointer to TimeFrameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1abeeae2ae1eef0288ec401af812d19ff5)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1abeeae2ae1eef0288ec401af812d19ff5"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7805504c3bfb1af17312524e74104993)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7805504c3bfb1af17312524e74104993"></a>

Sets the value of TimeFrameId_Optional and also sets TimeFrameId_IsSet to true using move semantics.

#### `public inline void `[`ClearTimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a19a81d472e003648eaa62b68160f5e60)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a19a81d472e003648eaa62b68160f5e60"></a>

Clears the value of TimeFrameId_Optional and sets TimeFrameId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TimeFrameId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a7b00907271d3351ca397ffa665562c8d)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a7b00907271d3351ca397ffa665562c8d"></a>

Returns the default value of TimeFrameId.

#### `public inline FORCEINLINE void `[`SetTimeFrameIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aac4fa90f994fca983a47d721fe64d505)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aac4fa90f994fca983a47d721fe64d505"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTimeFrameIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab0a5e11e2fecc2a8c0cf4e4ba9bce1de)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab0a5e11e2fecc2a8c0cf4e4ba9bce1de"></a>

Checks whether TimeFrameId_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2ca4067148cafe36e42444855adfece6)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2ca4067148cafe36e42444855adfece6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1ade7db2ef7e3f2fda632ca279700985d8)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ade7db2ef7e3f2fda632ca279700985d8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a05298a7624da017d6042f60db9e1281d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a05298a7624da017d6042f60db9e1281d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a2e4b10491d4e46ac2bee5f0aec10c4c8)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a2e4b10491d4e46ac2bee5f0aec10c4c8"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad24db3c00b5b464623a86c0fce8923db)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad24db3c00b5b464623a86c0fce8923db"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1aef45e6292c27d7778546992c8d3fa8fd)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aef45e6292c27d7778546992c8d3fa8fd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a354b735ff1aad0ef2b82c7da3e7dd23b)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a354b735ff1aad0ef2b82c7da3e7dd23b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1ab1f9020c8cbed34c5f879d4794799b74)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ab1f9020c8cbed34c5f879d4794799b74"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerOrderEntryCreateInput_1a73666595cea34c4a520187cfce958f41)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a73666595cea34c4a520187cfce958f41"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a5fefea45b28a5f042203731727e112bd)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a5fefea45b28a5f042203731727e112bd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1acaff87856433a24f47b448f61f0c24c4)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1acaff87856433a24f47b448f61f0c24c4"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1afdfb1e3524bf2f4a79d0326bb60da3d6)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1afdfb1e3524bf2f4a79d0326bb60da3d6"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a05127df4995993d2316d0bf9c2e21490)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a05127df4995993d2316d0bf9c2e21490"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1ad86adf171e7952f7d3b64a9b66243ea9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1ad86adf171e7952f7d3b64a9b66243ea9"></a>

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a68880bc69bab5b7466f42e5f286ebfc1)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a68880bc69bab5b7466f42e5f286ebfc1"></a>

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a43e80abd1592c31403f2491edfc05865)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a43e80abd1592c31403f2491edfc05865"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEntryIdOrNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a816ac40eeb097f317b5560ae646e5e41)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a816ac40eeb097f317b5560ae646e5e41"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a3789b52f4c511d90d99dc16933a90a1b)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a3789b52f4c511d90d99dc16933a90a1b"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1aa742c7d2181dcedc8683b5366569d771)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1aa742c7d2181dcedc8683b5366569d771"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntryId`](#structFRHAPI__PlayerOrderEntryCreateInput_1a0d6feba179563e8e8516403cc4c8c599)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a0d6feba179563e8e8516403cc4c8c599"></a>

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEntryIdToNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a4d206c7d17815b6e9be41736090d2c68)`()` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a4d206c7d17815b6e9be41736090d2c68"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEntryIdNull`](#structFRHAPI__PlayerOrderEntryCreateInput_1a04fb8f513f05c54a3fe69f2fad0020cf)`() const` <a id="structFRHAPI__PlayerOrderEntryCreateInput_1a04fb8f513f05c54a3fe69f2fad0020cf"></a>

Checks whether EntryId_Optional is set to null.

