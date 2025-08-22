---
title: RHAPI_PlatformEntitlementPrepared
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformEntitlementPrepared`](#structFRHAPI__PlatformEntitlementPrepared) | Platform Entitlement that is prepared to be processed by RallyHere, and includes platform-specific metadata necessary for processing.

## struct `FRHAPI_PlatformEntitlementPrepared` <a id="structFRHAPI__PlatformEntitlementPrepared"></a>

```
struct FRHAPI_PlatformEntitlementPrepared
  : public FRHAPI_Model
```

Platform Entitlement that is prepared to be processed by RallyHere, and includes platform-specific metadata necessary for processing.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PlatformEntitlementId_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1a5a9ee49a6eb5673795118d37c4afbcb9) | 
`public bool `[`PlatformEntitlementId_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1aee6b9049ec7342ac84077cae6a5f6135) | true if PlatformEntitlementId_Optional has been set to a value
`public bool `[`PlatformEntitlementId_IsNull`](#structFRHAPI__PlatformEntitlementPrepared_1ae7aa61cf28efb75ff7af33e3147cc0ef) | true if PlatformEntitlementId_Optional has been explicitly set to null
`public FString `[`Sku`](#structFRHAPI__PlatformEntitlementPrepared_1aabe372a6f9dce9f76c98216ca8d26cac) | Unique SKU from the platform.
`public int32 `[`Quantity_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1ad2abcbcf558150254a353dbf617e0392) | Quantity available to be used from the platform.
`public bool `[`Quantity_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1aef59e73b485720fc6231ed30cc3da84c) | true if Quantity_Optional has been set to a value
`public ERHAPI_EntitlementType `[`ReceivedType_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1aa9617bc6fc740cefc37610af8419f7c7) | 
`public bool `[`ReceivedType_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1aafda8cb053e538802721be67f1f1df95) | true if ReceivedType_Optional has been set to a value
`public bool `[`ReceivedType_IsNull`](#structFRHAPI__PlatformEntitlementPrepared_1a38e0258be29f13d1fae7770424d3ab71) | true if ReceivedType_Optional has been explicitly set to null
`public FString `[`PlatformLabel_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1aac190080d6f31c359a7b848aba15e611) | 
`public bool `[`PlatformLabel_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1a5e060085fee56dc8c7459a89808aaf74) | true if PlatformLabel_Optional has been set to a value
`public bool `[`PlatformLabel_IsNull`](#structFRHAPI__PlatformEntitlementPrepared_1a8ad0212b0d1d8b9b672907f436e557e2) | true if PlatformLabel_Optional has been explicitly set to null
`public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`PlatformMetadata_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1a59bbd4f6bbf17652d11ad0d48f7dd365) | Platform-specific metadata about this entitlement.
`public bool `[`PlatformMetadata_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1ad55cedd8f64496eb17b6f006630a94fe) | true if PlatformMetadata_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementPrepared_1a7cdf10f4eedc5d48c1d2ed64ba586b8e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementPrepared_1a87067131691548d486c60cc6958ecd33)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a66e39ed62dc637bbb3b4c13f2ccc4604)`()` | Gets the value of PlatformEntitlementId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1adb6e0e57e2e1933e249441f56b1d7175)`() const` | Gets the value of PlatformEntitlementId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ac228c822361080557096a69898331082)`(const FString & DefaultValue) const` | Gets the value of PlatformEntitlementId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1aefcab4d76cccfc2a2004de641055575a)`(FString & OutValue) const` | Fills OutValue with the value of PlatformEntitlementId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformEntitlementIdOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a3e41e4886d2cc8d1de7c07fa219e5372)`()` | Returns a pointer to PlatformEntitlementId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformEntitlementIdOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a5ee5a564251fbf686018131ced8c784e)`() const` | Returns a pointer to PlatformEntitlementId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a3f16e3675284fc9e9a7c5e0b6dfe07b9)`(const FString & NewValue)` | Sets the value of PlatformEntitlementId_Optional and also sets PlatformEntitlementId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ac9efe21ed12d8d51508513447f530726)`(FString && NewValue)` | Sets the value of PlatformEntitlementId_Optional and also sets PlatformEntitlementId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a423c2b3df79cd7e4ddf81f9d66b2f2b2)`()` | Clears the value of PlatformEntitlementId_Optional and sets PlatformEntitlementId_IsSet to false.
`public inline FORCEINLINE void `[`SetPlatformEntitlementIdToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a8bd8a6ae47ae5ff61099b06903923698)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlatformEntitlementIdNull`](#structFRHAPI__PlatformEntitlementPrepared_1a540082015030ba68dd818394e250bd86)`() const` | Checks whether PlatformEntitlementId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a93bd0e625ca93796e428f36bac283a90)`()` | Gets the value of Sku.
`public inline FORCEINLINE const FString & `[`GetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a629f6aea758a188275b6e11644d1c025)`() const` | Gets the value of Sku.
`public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a8ff9de8a9a3801d6a80d28582dbe820b)`(const FString & NewValue)` | Sets the value of Sku.
`public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__PlatformEntitlementPrepared_1ae9e39c757199163c8089720fb890d58b)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a2fe9592448966be799ab9c4ce46efacc)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a5a6f3cf77f6f392f7e3d93583a72d80f)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1af5217e280de05906678a0e5508d97594)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1af17fd744500ce76f4fad1109f7f5e3e6)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a9ee59f130cf82f5b68aff70e99b3022f)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ac0e7b9f401addd78757cfe29565f3942)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1ab05dc6f785a43bec51e83d5a3ca50d86)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1ac196d78d9a2c89f9c55d06a46472e68d)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1af05975b1b1b456dc9ad8b3ef72d950ab)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlatformEntitlementPrepared_1acabd0828ac8e41719c5ad11708860451)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a0f32fb0958e5b2378420f462281b03d9)`()` | Gets the value of ReceivedType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a7a2c206e212717cb9efc2de1fc5ba6cb)`() const` | Gets the value of ReceivedType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a456824addf362b0d0876b31b406fbdd0)`(const ERHAPI_EntitlementType & DefaultValue) const` | Gets the value of ReceivedType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a215397f4dd6fdb0759ea6543e272f353)`(ERHAPI_EntitlementType & OutValue) const` | Fills OutValue with the value of ReceivedType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_EntitlementType * `[`GetReceivedTypeOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a45501f7c9af1b7a6a3fbe4e1696bf30e)`()` | Returns a pointer to ReceivedType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_EntitlementType * `[`GetReceivedTypeOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ade701aee3069268be13ddabeca2a4a8d)`() const` | Returns a pointer to ReceivedType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a5a17aaf84a7ada099ebef8e8108e20f2)`(const ERHAPI_EntitlementType & NewValue)` | Sets the value of ReceivedType_Optional and also sets ReceivedType_IsSet to true.
`public inline FORCEINLINE void `[`SetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1ae775a4ecbdd9c77ff2d26ca364f45736)`(ERHAPI_EntitlementType && NewValue)` | Sets the value of ReceivedType_Optional and also sets ReceivedType_IsSet to true using move semantics.
`public inline void `[`ClearReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1aff09757410ea5c48aba17d127433e463)`()` | Clears the value of ReceivedType_Optional and sets ReceivedType_IsSet to false.
`public inline FORCEINLINE void `[`SetReceivedTypeToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a782c0e96c09ea6d37c641aea5564db21)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsReceivedTypeNull`](#structFRHAPI__PlatformEntitlementPrepared_1a376ca3df174e3b7a1348149dbcfb4808)`() const` | Checks whether ReceivedType_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a4ffdd48fe1d90fba87f0a2cdf9278001)`()` | Gets the value of PlatformLabel_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a84fa15f78540a67a911dd2d697e31c7b)`() const` | Gets the value of PlatformLabel_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a2da5eaa64c01fa982bb3ae33fbc2246c)`(const FString & DefaultValue) const` | Gets the value of PlatformLabel_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a8c25b95712710adef240cfda962b4089)`(FString & OutValue) const` | Fills OutValue with the value of PlatformLabel_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformLabelOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a411bd96cf6e0a9cf4f21d58083124b3c)`()` | Returns a pointer to PlatformLabel_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformLabelOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a30a50b1a0c776ae3b0b01ba85e68e697)`() const` | Returns a pointer to PlatformLabel_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a5b1d634d5d463bdd0159b04e2ddafb22)`(const FString & NewValue)` | Sets the value of PlatformLabel_Optional and also sets PlatformLabel_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1aa6c7d19ecb985c9c6780bd3b73d6b8d5)`(FString && NewValue)` | Sets the value of PlatformLabel_Optional and also sets PlatformLabel_IsSet to true using move semantics.
`public inline void `[`ClearPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1aec3b44ca13276531035ca3ed859cbfe5)`()` | Clears the value of PlatformLabel_Optional and sets PlatformLabel_IsSet to false.
`public inline FORCEINLINE void `[`SetPlatformLabelToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a774e065d78b47d9e05ff77eb3846ce87)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlatformLabelNull`](#structFRHAPI__PlatformEntitlementPrepared_1ad69d13d2dfd9aef10eaf732aa4a6804c)`() const` | Checks whether PlatformLabel_Optional is set to null.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1aaa2ff32d3782bca61dec1c404244d783)`()` | Gets the value of PlatformMetadata_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1ade4ec33697a87442eaf3d3c8e82b4404)`() const` | Gets the value of PlatformMetadata_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1af953898ff640f0400c9f4c444359572e)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` | Gets the value of PlatformMetadata_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1acecb0de68cbe2b34d734c068397e0ef2)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` | Fills OutValue with the value of PlatformMetadata_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformMetadataOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1aef91d4e6662c29659496a10d317a35fb)`()` | Returns a pointer to PlatformMetadata_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformMetadataOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a36d5ac0dd9eca29be35e10b181c7d6c4)`() const` | Returns a pointer to PlatformMetadata_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a679e2ee4a86326659fd41222d98ac393)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of PlatformMetadata_Optional and also sets PlatformMetadata_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a9597c1280ef026a0fa1cf7439417aeef)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of PlatformMetadata_Optional and also sets PlatformMetadata_IsSet to true using move semantics.
`public inline void `[`ClearPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1aeaff5aaa1f7ae66def0b62db4e269947)`()` | Clears the value of PlatformMetadata_Optional and sets PlatformMetadata_IsSet to false.

### Members

#### `public FString `[`PlatformEntitlementId_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1a5a9ee49a6eb5673795118d37c4afbcb9) <a id="structFRHAPI__PlatformEntitlementPrepared_1a5a9ee49a6eb5673795118d37c4afbcb9"></a>

#### `public bool `[`PlatformEntitlementId_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1aee6b9049ec7342ac84077cae6a5f6135) <a id="structFRHAPI__PlatformEntitlementPrepared_1aee6b9049ec7342ac84077cae6a5f6135"></a>

true if PlatformEntitlementId_Optional has been set to a value

#### `public bool `[`PlatformEntitlementId_IsNull`](#structFRHAPI__PlatformEntitlementPrepared_1ae7aa61cf28efb75ff7af33e3147cc0ef) <a id="structFRHAPI__PlatformEntitlementPrepared_1ae7aa61cf28efb75ff7af33e3147cc0ef"></a>

true if PlatformEntitlementId_Optional has been explicitly set to null

#### `public FString `[`Sku`](#structFRHAPI__PlatformEntitlementPrepared_1aabe372a6f9dce9f76c98216ca8d26cac) <a id="structFRHAPI__PlatformEntitlementPrepared_1aabe372a6f9dce9f76c98216ca8d26cac"></a>

Unique SKU from the platform.

#### `public int32 `[`Quantity_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1ad2abcbcf558150254a353dbf617e0392) <a id="structFRHAPI__PlatformEntitlementPrepared_1ad2abcbcf558150254a353dbf617e0392"></a>

Quantity available to be used from the platform.

#### `public bool `[`Quantity_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1aef59e73b485720fc6231ed30cc3da84c) <a id="structFRHAPI__PlatformEntitlementPrepared_1aef59e73b485720fc6231ed30cc3da84c"></a>

true if Quantity_Optional has been set to a value

#### `public ERHAPI_EntitlementType `[`ReceivedType_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1aa9617bc6fc740cefc37610af8419f7c7) <a id="structFRHAPI__PlatformEntitlementPrepared_1aa9617bc6fc740cefc37610af8419f7c7"></a>

#### `public bool `[`ReceivedType_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1aafda8cb053e538802721be67f1f1df95) <a id="structFRHAPI__PlatformEntitlementPrepared_1aafda8cb053e538802721be67f1f1df95"></a>

true if ReceivedType_Optional has been set to a value

#### `public bool `[`ReceivedType_IsNull`](#structFRHAPI__PlatformEntitlementPrepared_1a38e0258be29f13d1fae7770424d3ab71) <a id="structFRHAPI__PlatformEntitlementPrepared_1a38e0258be29f13d1fae7770424d3ab71"></a>

true if ReceivedType_Optional has been explicitly set to null

#### `public FString `[`PlatformLabel_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1aac190080d6f31c359a7b848aba15e611) <a id="structFRHAPI__PlatformEntitlementPrepared_1aac190080d6f31c359a7b848aba15e611"></a>

#### `public bool `[`PlatformLabel_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1a5e060085fee56dc8c7459a89808aaf74) <a id="structFRHAPI__PlatformEntitlementPrepared_1a5e060085fee56dc8c7459a89808aaf74"></a>

true if PlatformLabel_Optional has been set to a value

#### `public bool `[`PlatformLabel_IsNull`](#structFRHAPI__PlatformEntitlementPrepared_1a8ad0212b0d1d8b9b672907f436e557e2) <a id="structFRHAPI__PlatformEntitlementPrepared_1a8ad0212b0d1d8b9b672907f436e557e2"></a>

true if PlatformLabel_Optional has been explicitly set to null

#### `public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`PlatformMetadata_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1a59bbd4f6bbf17652d11ad0d48f7dd365) <a id="structFRHAPI__PlatformEntitlementPrepared_1a59bbd4f6bbf17652d11ad0d48f7dd365"></a>

Platform-specific metadata about this entitlement.

#### `public bool `[`PlatformMetadata_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1ad55cedd8f64496eb17b6f006630a94fe) <a id="structFRHAPI__PlatformEntitlementPrepared_1ad55cedd8f64496eb17b6f006630a94fe"></a>

true if PlatformMetadata_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementPrepared_1a7cdf10f4eedc5d48c1d2ed64ba586b8e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a7cdf10f4eedc5d48c1d2ed64ba586b8e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementPrepared_1a87067131691548d486c60cc6958ecd33)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a87067131691548d486c60cc6958ecd33"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a66e39ed62dc637bbb3b4c13f2ccc4604)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a66e39ed62dc637bbb3b4c13f2ccc4604"></a>

Gets the value of PlatformEntitlementId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1adb6e0e57e2e1933e249441f56b1d7175)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1adb6e0e57e2e1933e249441f56b1d7175"></a>

Gets the value of PlatformEntitlementId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ac228c822361080557096a69898331082)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ac228c822361080557096a69898331082"></a>

Gets the value of PlatformEntitlementId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1aefcab4d76cccfc2a2004de641055575a)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1aefcab4d76cccfc2a2004de641055575a"></a>

Fills OutValue with the value of PlatformEntitlementId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformEntitlementIdOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a3e41e4886d2cc8d1de7c07fa219e5372)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a3e41e4886d2cc8d1de7c07fa219e5372"></a>

Returns a pointer to PlatformEntitlementId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformEntitlementIdOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a5ee5a564251fbf686018131ced8c784e)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a5ee5a564251fbf686018131ced8c784e"></a>

Returns a pointer to PlatformEntitlementId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a3f16e3675284fc9e9a7c5e0b6dfe07b9)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a3f16e3675284fc9e9a7c5e0b6dfe07b9"></a>

Sets the value of PlatformEntitlementId_Optional and also sets PlatformEntitlementId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ac9efe21ed12d8d51508513447f530726)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ac9efe21ed12d8d51508513447f530726"></a>

Sets the value of PlatformEntitlementId_Optional and also sets PlatformEntitlementId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a423c2b3df79cd7e4ddf81f9d66b2f2b2)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a423c2b3df79cd7e4ddf81f9d66b2f2b2"></a>

Clears the value of PlatformEntitlementId_Optional and sets PlatformEntitlementId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlatformEntitlementIdToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a8bd8a6ae47ae5ff61099b06903923698)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a8bd8a6ae47ae5ff61099b06903923698"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlatformEntitlementIdNull`](#structFRHAPI__PlatformEntitlementPrepared_1a540082015030ba68dd818394e250bd86)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a540082015030ba68dd818394e250bd86"></a>

Checks whether PlatformEntitlementId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a93bd0e625ca93796e428f36bac283a90)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a93bd0e625ca93796e428f36bac283a90"></a>

Gets the value of Sku.

#### `public inline FORCEINLINE const FString & `[`GetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a629f6aea758a188275b6e11644d1c025)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a629f6aea758a188275b6e11644d1c025"></a>

Gets the value of Sku.

#### `public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a8ff9de8a9a3801d6a80d28582dbe820b)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a8ff9de8a9a3801d6a80d28582dbe820b"></a>

Sets the value of Sku.

#### `public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__PlatformEntitlementPrepared_1ae9e39c757199163c8089720fb890d58b)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ae9e39c757199163c8089720fb890d58b"></a>

Sets the value of Sku using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a2fe9592448966be799ab9c4ce46efacc)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a2fe9592448966be799ab9c4ce46efacc"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a5a6f3cf77f6f392f7e3d93583a72d80f)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a5a6f3cf77f6f392f7e3d93583a72d80f"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1af5217e280de05906678a0e5508d97594)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1af5217e280de05906678a0e5508d97594"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1af17fd744500ce76f4fad1109f7f5e3e6)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1af17fd744500ce76f4fad1109f7f5e3e6"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a9ee59f130cf82f5b68aff70e99b3022f)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a9ee59f130cf82f5b68aff70e99b3022f"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ac0e7b9f401addd78757cfe29565f3942)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ac0e7b9f401addd78757cfe29565f3942"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1ab05dc6f785a43bec51e83d5a3ca50d86)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ab05dc6f785a43bec51e83d5a3ca50d86"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1ac196d78d9a2c89f9c55d06a46472e68d)`(int32 && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ac196d78d9a2c89f9c55d06a46472e68d"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1af05975b1b1b456dc9ad8b3ef72d950ab)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1af05975b1b1b456dc9ad8b3ef72d950ab"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlatformEntitlementPrepared_1acabd0828ac8e41719c5ad11708860451)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1acabd0828ac8e41719c5ad11708860451"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a0f32fb0958e5b2378420f462281b03d9)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a0f32fb0958e5b2378420f462281b03d9"></a>

Gets the value of ReceivedType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a7a2c206e212717cb9efc2de1fc5ba6cb)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a7a2c206e212717cb9efc2de1fc5ba6cb"></a>

Gets the value of ReceivedType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a456824addf362b0d0876b31b406fbdd0)`(const ERHAPI_EntitlementType & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a456824addf362b0d0876b31b406fbdd0"></a>

Gets the value of ReceivedType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a215397f4dd6fdb0759ea6543e272f353)`(ERHAPI_EntitlementType & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a215397f4dd6fdb0759ea6543e272f353"></a>

Fills OutValue with the value of ReceivedType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_EntitlementType * `[`GetReceivedTypeOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a45501f7c9af1b7a6a3fbe4e1696bf30e)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a45501f7c9af1b7a6a3fbe4e1696bf30e"></a>

Returns a pointer to ReceivedType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_EntitlementType * `[`GetReceivedTypeOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ade701aee3069268be13ddabeca2a4a8d)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ade701aee3069268be13ddabeca2a4a8d"></a>

Returns a pointer to ReceivedType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a5a17aaf84a7ada099ebef8e8108e20f2)`(const ERHAPI_EntitlementType & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a5a17aaf84a7ada099ebef8e8108e20f2"></a>

Sets the value of ReceivedType_Optional and also sets ReceivedType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1ae775a4ecbdd9c77ff2d26ca364f45736)`(ERHAPI_EntitlementType && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ae775a4ecbdd9c77ff2d26ca364f45736"></a>

Sets the value of ReceivedType_Optional and also sets ReceivedType_IsSet to true using move semantics.

#### `public inline void `[`ClearReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1aff09757410ea5c48aba17d127433e463)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1aff09757410ea5c48aba17d127433e463"></a>

Clears the value of ReceivedType_Optional and sets ReceivedType_IsSet to false.

#### `public inline FORCEINLINE void `[`SetReceivedTypeToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a782c0e96c09ea6d37c641aea5564db21)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a782c0e96c09ea6d37c641aea5564db21"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsReceivedTypeNull`](#structFRHAPI__PlatformEntitlementPrepared_1a376ca3df174e3b7a1348149dbcfb4808)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a376ca3df174e3b7a1348149dbcfb4808"></a>

Checks whether ReceivedType_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a4ffdd48fe1d90fba87f0a2cdf9278001)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a4ffdd48fe1d90fba87f0a2cdf9278001"></a>

Gets the value of PlatformLabel_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a84fa15f78540a67a911dd2d697e31c7b)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a84fa15f78540a67a911dd2d697e31c7b"></a>

Gets the value of PlatformLabel_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a2da5eaa64c01fa982bb3ae33fbc2246c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a2da5eaa64c01fa982bb3ae33fbc2246c"></a>

Gets the value of PlatformLabel_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a8c25b95712710adef240cfda962b4089)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a8c25b95712710adef240cfda962b4089"></a>

Fills OutValue with the value of PlatformLabel_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformLabelOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a411bd96cf6e0a9cf4f21d58083124b3c)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a411bd96cf6e0a9cf4f21d58083124b3c"></a>

Returns a pointer to PlatformLabel_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformLabelOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a30a50b1a0c776ae3b0b01ba85e68e697)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a30a50b1a0c776ae3b0b01ba85e68e697"></a>

Returns a pointer to PlatformLabel_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a5b1d634d5d463bdd0159b04e2ddafb22)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a5b1d634d5d463bdd0159b04e2ddafb22"></a>

Sets the value of PlatformLabel_Optional and also sets PlatformLabel_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1aa6c7d19ecb985c9c6780bd3b73d6b8d5)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1aa6c7d19ecb985c9c6780bd3b73d6b8d5"></a>

Sets the value of PlatformLabel_Optional and also sets PlatformLabel_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1aec3b44ca13276531035ca3ed859cbfe5)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1aec3b44ca13276531035ca3ed859cbfe5"></a>

Clears the value of PlatformLabel_Optional and sets PlatformLabel_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlatformLabelToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a774e065d78b47d9e05ff77eb3846ce87)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a774e065d78b47d9e05ff77eb3846ce87"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlatformLabelNull`](#structFRHAPI__PlatformEntitlementPrepared_1ad69d13d2dfd9aef10eaf732aa4a6804c)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ad69d13d2dfd9aef10eaf732aa4a6804c"></a>

Checks whether PlatformLabel_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1aaa2ff32d3782bca61dec1c404244d783)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1aaa2ff32d3782bca61dec1c404244d783"></a>

Gets the value of PlatformMetadata_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1ade4ec33697a87442eaf3d3c8e82b4404)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ade4ec33697a87442eaf3d3c8e82b4404"></a>

Gets the value of PlatformMetadata_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1af953898ff640f0400c9f4c444359572e)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1af953898ff640f0400c9f4c444359572e"></a>

Gets the value of PlatformMetadata_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1acecb0de68cbe2b34d734c068397e0ef2)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1acecb0de68cbe2b34d734c068397e0ef2"></a>

Fills OutValue with the value of PlatformMetadata_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformMetadataOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1aef91d4e6662c29659496a10d317a35fb)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1aef91d4e6662c29659496a10d317a35fb"></a>

Returns a pointer to PlatformMetadata_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformMetadataOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a36d5ac0dd9eca29be35e10b181c7d6c4)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a36d5ac0dd9eca29be35e10b181c7d6c4"></a>

Returns a pointer to PlatformMetadata_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a679e2ee4a86326659fd41222d98ac393)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a679e2ee4a86326659fd41222d98ac393"></a>

Sets the value of PlatformMetadata_Optional and also sets PlatformMetadata_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a9597c1280ef026a0fa1cf7439417aeef)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a9597c1280ef026a0fa1cf7439417aeef"></a>

Sets the value of PlatformMetadata_Optional and also sets PlatformMetadata_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1aeaff5aaa1f7ae66def0b62db4e269947)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1aeaff5aaa1f7ae66def0b62db4e269947"></a>

Clears the value of PlatformMetadata_Optional and sets PlatformMetadata_IsSet to false.

