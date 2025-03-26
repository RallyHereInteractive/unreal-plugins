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
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`PlatformMetadata_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1a8e80befdab135e2caa395d87292b276a) | Platform-specific metadata about this entitlement.
`public bool `[`PlatformMetadata_IsSet`](#structFRHAPI__PlatformEntitlementPrepared_1ad55cedd8f64496eb17b6f006630a94fe) | true if PlatformMetadata_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementPrepared_1a7cdf10f4eedc5d48c1d2ed64ba586b8e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementPrepared_1a87067131691548d486c60cc6958ecd33)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ad08b393b691fee72d84dbd4ff3e9243c)`()` | Gets the value of PlatformEntitlementId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a2b7607c09fef8808efbc09003b907b39)`() const` | Gets the value of PlatformEntitlementId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a58a537b7a39bffecb643b620c800ab84)`(const FString & DefaultValue) const` | Gets the value of PlatformEntitlementId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ab03b0b738bba062207139dd6b12aaeb7)`(FString & OutValue) const` | Fills OutValue with the value of PlatformEntitlementId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformEntitlementIdOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a59dadcde1b4f4e04202399321f16da91)`()` | Returns a pointer to PlatformEntitlementId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformEntitlementIdOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a81caa038e398701b384579ca3d16aa52)`() const` | Returns a pointer to PlatformEntitlementId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ac0668040ccb6ae61040d1b66fbe56a37)`(const FString & NewValue)` | Sets the value of PlatformEntitlementId_Optional and also sets PlatformEntitlementId_IsSet to true.
`public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ad037a65b14df7f3f27886c8d88a542db)`(FString && NewValue)` | Sets the value of PlatformEntitlementId_Optional and also sets PlatformEntitlementId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a423c2b3df79cd7e4ddf81f9d66b2f2b2)`()` | Clears the value of PlatformEntitlementId_Optional and sets PlatformEntitlementId_IsSet to false.
`public inline bool `[`IsPlatformEntitlementIdSet`](#structFRHAPI__PlatformEntitlementPrepared_1a88bd669288c2b6f23f02216131f6b8db)`() const` | Checks whether PlatformEntitlementId_Optional has been set.
`public inline void `[`SetPlatformEntitlementIdToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a23a0dcc4675ec734b73f884dd3873983)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlatformEntitlementIdNull`](#structFRHAPI__PlatformEntitlementPrepared_1aefab343eff73f9876a938ebbe35f31ee)`() const` | Checks whether PlatformEntitlementId_Optional is set to null.
`public inline FString & `[`GetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a05a288961d75e1220cd3926c08443b61)`()` | Gets the value of Sku.
`public inline const FString & `[`GetSku`](#structFRHAPI__PlatformEntitlementPrepared_1aa9d5044b2ab9f9cafac0260ed2f17258)`() const` | Gets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a77645f4ed67574fa506688f97239ea7a)`(const FString & NewValue)` | Sets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a48ec5d40beb4cbfb656cc6c8ab689ca6)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a4232a3b6376debdb4856a4e830934aec)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1aec742a20184bdd5dfc2c9be500f8c1cb)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a35467f06780323d6b5a413dcae2ce045)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a57f62c12f751a0497919a85f2b3f2ea3)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a02339c831d0e5397fde594ca784861c5)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a125b64d1052efc75c63b22495a86a93b)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a739393958ee21193e78eced625a64f00)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1ae610145514fef4820616710ff09052ac)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1af05975b1b1b456dc9ad8b3ef72d950ab)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline bool `[`IsQuantitySet`](#structFRHAPI__PlatformEntitlementPrepared_1a5cf94e7b8e0bd1a00e4ff56fa99fb5c9)`() const` | Checks whether Quantity_Optional has been set.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlatformEntitlementPrepared_1a77f9e83bd6c094a9f9a211a9cb8504d8)`() const` | Returns true if Quantity_Optional is set and matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlatformEntitlementPrepared_1abee303b619f8364c097cd65362b13c39)`()` | Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.
`public inline ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1ae5648e8e7163a23a1206ebab8d9a9a73)`()` | Gets the value of ReceivedType_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a34bc0ddd8b3b06bba98fd676d0b0636e)`() const` | Gets the value of ReceivedType_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a9cf611b828809007310338b7c52c923f)`(const ERHAPI_EntitlementType & DefaultValue) const` | Gets the value of ReceivedType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a7310bb4956f312aa297a82748515911c)`(ERHAPI_EntitlementType & OutValue) const` | Fills OutValue with the value of ReceivedType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementType * `[`GetReceivedTypeOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a7499315e8d2bff8726b03ee9310fafc7)`()` | Returns a pointer to ReceivedType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementType * `[`GetReceivedTypeOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ac8ae257d0331c05d26865f7b0d738dfe)`() const` | Returns a pointer to ReceivedType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1ae23822ea83660b7279fcdc3387b8b3aa)`(const ERHAPI_EntitlementType & NewValue)` | Sets the value of ReceivedType_Optional and also sets ReceivedType_IsSet to true.
`public inline void `[`SetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a3331c0e818932eea8fc88f0753e9e20a)`(ERHAPI_EntitlementType && NewValue)` | Sets the value of ReceivedType_Optional and also sets ReceivedType_IsSet to true using move semantics.
`public inline void `[`ClearReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1aff09757410ea5c48aba17d127433e463)`()` | Clears the value of ReceivedType_Optional and sets ReceivedType_IsSet to false.
`public inline bool `[`IsReceivedTypeSet`](#structFRHAPI__PlatformEntitlementPrepared_1ab445a83f105a4ad81c02a74d3b333cfd)`() const` | Checks whether ReceivedType_Optional has been set.
`public inline void `[`SetReceivedTypeToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a6a6d4410995cb90b10ee0f7fe0bec634)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsReceivedTypeNull`](#structFRHAPI__PlatformEntitlementPrepared_1a03ce7a9657fd18c89c5bfbea41699cd1)`() const` | Checks whether ReceivedType_Optional is set to null.
`public inline FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a58d772ced08af061400313e6cfddb1b7)`()` | Gets the value of PlatformLabel_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a9463cc1d34146ccb8665dcedf68648d7)`() const` | Gets the value of PlatformLabel_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a0588bdbf0c221ade13a46a7831681091)`(const FString & DefaultValue) const` | Gets the value of PlatformLabel_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1ab9a804e10dde8e3107f26ed807223c2c)`(FString & OutValue) const` | Fills OutValue with the value of PlatformLabel_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformLabelOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a9da864d48237f9393ba36a85601ad7c6)`()` | Returns a pointer to PlatformLabel_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformLabelOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ac1565d704960248000fa1e1c290c9e76)`() const` | Returns a pointer to PlatformLabel_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1ad4af6fa2c58e055f57007807b2f8fc99)`(const FString & NewValue)` | Sets the value of PlatformLabel_Optional and also sets PlatformLabel_IsSet to true.
`public inline void `[`SetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a22e2943d34eee23d4bed31b6f887f013)`(FString && NewValue)` | Sets the value of PlatformLabel_Optional and also sets PlatformLabel_IsSet to true using move semantics.
`public inline void `[`ClearPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1aec3b44ca13276531035ca3ed859cbfe5)`()` | Clears the value of PlatformLabel_Optional and sets PlatformLabel_IsSet to false.
`public inline bool `[`IsPlatformLabelSet`](#structFRHAPI__PlatformEntitlementPrepared_1a361bdda3451cc7947fd377342e573877)`() const` | Checks whether PlatformLabel_Optional has been set.
`public inline void `[`SetPlatformLabelToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a41d68891befea73096f4e45e20e08350)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlatformLabelNull`](#structFRHAPI__PlatformEntitlementPrepared_1a782c7f92469622b912caf69cda9f17fa)`() const` | Checks whether PlatformLabel_Optional is set to null.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a4f67545999cac76816798bfa244ca811)`()` | Gets the value of PlatformMetadata_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a4f13689e96a369e411cc08663eff31b5)`() const` | Gets the value of PlatformMetadata_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a1990d71b36f902a37ac3c022564e62d1)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of PlatformMetadata_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a8d202cf6507803b44b4a0eaede4c8b04)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of PlatformMetadata_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformMetadataOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a80b131e77e6498a51eaa9384da397c17)`()` | Returns a pointer to PlatformMetadata_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformMetadataOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ac129b77c174eacfa7038be5f58fb01c5)`() const` | Returns a pointer to PlatformMetadata_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a0d1597159030f4b99d38428fe0da24e7)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of PlatformMetadata_Optional and also sets PlatformMetadata_IsSet to true.
`public inline void `[`SetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1acfec1b4171fd84fb572b9326b18d9005)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of PlatformMetadata_Optional and also sets PlatformMetadata_IsSet to true using move semantics.
`public inline void `[`ClearPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1aeaff5aaa1f7ae66def0b62db4e269947)`()` | Clears the value of PlatformMetadata_Optional and sets PlatformMetadata_IsSet to false.
`public inline bool `[`IsPlatformMetadataSet`](#structFRHAPI__PlatformEntitlementPrepared_1a06601120e403387ea422b55769ba14d8)`() const` | Checks whether PlatformMetadata_Optional has been set.

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

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`PlatformMetadata_Optional`](#structFRHAPI__PlatformEntitlementPrepared_1a8e80befdab135e2caa395d87292b276a) <a id="structFRHAPI__PlatformEntitlementPrepared_1a8e80befdab135e2caa395d87292b276a"></a>

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

#### `public inline FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ad08b393b691fee72d84dbd4ff3e9243c)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1ad08b393b691fee72d84dbd4ff3e9243c"></a>

Gets the value of PlatformEntitlementId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a2b7607c09fef8808efbc09003b907b39)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a2b7607c09fef8808efbc09003b907b39"></a>

Gets the value of PlatformEntitlementId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a58a537b7a39bffecb643b620c800ab84)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a58a537b7a39bffecb643b620c800ab84"></a>

Gets the value of PlatformEntitlementId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ab03b0b738bba062207139dd6b12aaeb7)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ab03b0b738bba062207139dd6b12aaeb7"></a>

Fills OutValue with the value of PlatformEntitlementId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformEntitlementIdOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a59dadcde1b4f4e04202399321f16da91)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a59dadcde1b4f4e04202399321f16da91"></a>

Returns a pointer to PlatformEntitlementId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformEntitlementIdOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a81caa038e398701b384579ca3d16aa52)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a81caa038e398701b384579ca3d16aa52"></a>

Returns a pointer to PlatformEntitlementId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ac0668040ccb6ae61040d1b66fbe56a37)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ac0668040ccb6ae61040d1b66fbe56a37"></a>

Sets the value of PlatformEntitlementId_Optional and also sets PlatformEntitlementId_IsSet to true.

#### `public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1ad037a65b14df7f3f27886c8d88a542db)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ad037a65b14df7f3f27886c8d88a542db"></a>

Sets the value of PlatformEntitlementId_Optional and also sets PlatformEntitlementId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformEntitlementId`](#structFRHAPI__PlatformEntitlementPrepared_1a423c2b3df79cd7e4ddf81f9d66b2f2b2)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a423c2b3df79cd7e4ddf81f9d66b2f2b2"></a>

Clears the value of PlatformEntitlementId_Optional and sets PlatformEntitlementId_IsSet to false.

#### `public inline bool `[`IsPlatformEntitlementIdSet`](#structFRHAPI__PlatformEntitlementPrepared_1a88bd669288c2b6f23f02216131f6b8db)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a88bd669288c2b6f23f02216131f6b8db"></a>

Checks whether PlatformEntitlementId_Optional has been set.

#### `public inline void `[`SetPlatformEntitlementIdToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a23a0dcc4675ec734b73f884dd3873983)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a23a0dcc4675ec734b73f884dd3873983"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlatformEntitlementIdNull`](#structFRHAPI__PlatformEntitlementPrepared_1aefab343eff73f9876a938ebbe35f31ee)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1aefab343eff73f9876a938ebbe35f31ee"></a>

Checks whether PlatformEntitlementId_Optional is set to null.

#### `public inline FString & `[`GetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a05a288961d75e1220cd3926c08443b61)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a05a288961d75e1220cd3926c08443b61"></a>

Gets the value of Sku.

#### `public inline const FString & `[`GetSku`](#structFRHAPI__PlatformEntitlementPrepared_1aa9d5044b2ab9f9cafac0260ed2f17258)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1aa9d5044b2ab9f9cafac0260ed2f17258"></a>

Gets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a77645f4ed67574fa506688f97239ea7a)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a77645f4ed67574fa506688f97239ea7a"></a>

Sets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__PlatformEntitlementPrepared_1a48ec5d40beb4cbfb656cc6c8ab689ca6)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a48ec5d40beb4cbfb656cc6c8ab689ca6"></a>

Sets the value of Sku using move semantics.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a4232a3b6376debdb4856a4e830934aec)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a4232a3b6376debdb4856a4e830934aec"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1aec742a20184bdd5dfc2c9be500f8c1cb)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1aec742a20184bdd5dfc2c9be500f8c1cb"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a35467f06780323d6b5a413dcae2ce045)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a35467f06780323d6b5a413dcae2ce045"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a57f62c12f751a0497919a85f2b3f2ea3)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a57f62c12f751a0497919a85f2b3f2ea3"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a02339c831d0e5397fde594ca784861c5)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a02339c831d0e5397fde594ca784861c5"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a125b64d1052efc75c63b22495a86a93b)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a125b64d1052efc75c63b22495a86a93b"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1a739393958ee21193e78eced625a64f00)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a739393958ee21193e78eced625a64f00"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1ae610145514fef4820616710ff09052ac)`(int32 && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ae610145514fef4820616710ff09052ac"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlementPrepared_1af05975b1b1b456dc9ad8b3ef72d950ab)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1af05975b1b1b456dc9ad8b3ef72d950ab"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline bool `[`IsQuantitySet`](#structFRHAPI__PlatformEntitlementPrepared_1a5cf94e7b8e0bd1a00e4ff56fa99fb5c9)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a5cf94e7b8e0bd1a00e4ff56fa99fb5c9"></a>

Checks whether Quantity_Optional has been set.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlatformEntitlementPrepared_1a77f9e83bd6c094a9f9a211a9cb8504d8)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a77f9e83bd6c094a9f9a211a9cb8504d8"></a>

Returns true if Quantity_Optional is set and matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlatformEntitlementPrepared_1abee303b619f8364c097cd65362b13c39)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1abee303b619f8364c097cd65362b13c39"></a>

Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.

#### `public inline ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1ae5648e8e7163a23a1206ebab8d9a9a73)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1ae5648e8e7163a23a1206ebab8d9a9a73"></a>

Gets the value of ReceivedType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a34bc0ddd8b3b06bba98fd676d0b0636e)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a34bc0ddd8b3b06bba98fd676d0b0636e"></a>

Gets the value of ReceivedType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementType & `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a9cf611b828809007310338b7c52c923f)`(const ERHAPI_EntitlementType & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a9cf611b828809007310338b7c52c923f"></a>

Gets the value of ReceivedType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a7310bb4956f312aa297a82748515911c)`(ERHAPI_EntitlementType & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a7310bb4956f312aa297a82748515911c"></a>

Fills OutValue with the value of ReceivedType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementType * `[`GetReceivedTypeOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a7499315e8d2bff8726b03ee9310fafc7)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a7499315e8d2bff8726b03ee9310fafc7"></a>

Returns a pointer to ReceivedType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementType * `[`GetReceivedTypeOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ac8ae257d0331c05d26865f7b0d738dfe)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ac8ae257d0331c05d26865f7b0d738dfe"></a>

Returns a pointer to ReceivedType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1ae23822ea83660b7279fcdc3387b8b3aa)`(const ERHAPI_EntitlementType & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ae23822ea83660b7279fcdc3387b8b3aa"></a>

Sets the value of ReceivedType_Optional and also sets ReceivedType_IsSet to true.

#### `public inline void `[`SetReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1a3331c0e818932eea8fc88f0753e9e20a)`(ERHAPI_EntitlementType && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a3331c0e818932eea8fc88f0753e9e20a"></a>

Sets the value of ReceivedType_Optional and also sets ReceivedType_IsSet to true using move semantics.

#### `public inline void `[`ClearReceivedType`](#structFRHAPI__PlatformEntitlementPrepared_1aff09757410ea5c48aba17d127433e463)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1aff09757410ea5c48aba17d127433e463"></a>

Clears the value of ReceivedType_Optional and sets ReceivedType_IsSet to false.

#### `public inline bool `[`IsReceivedTypeSet`](#structFRHAPI__PlatformEntitlementPrepared_1ab445a83f105a4ad81c02a74d3b333cfd)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ab445a83f105a4ad81c02a74d3b333cfd"></a>

Checks whether ReceivedType_Optional has been set.

#### `public inline void `[`SetReceivedTypeToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a6a6d4410995cb90b10ee0f7fe0bec634)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a6a6d4410995cb90b10ee0f7fe0bec634"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsReceivedTypeNull`](#structFRHAPI__PlatformEntitlementPrepared_1a03ce7a9657fd18c89c5bfbea41699cd1)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a03ce7a9657fd18c89c5bfbea41699cd1"></a>

Checks whether ReceivedType_Optional is set to null.

#### `public inline FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a58d772ced08af061400313e6cfddb1b7)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a58d772ced08af061400313e6cfddb1b7"></a>

Gets the value of PlatformLabel_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a9463cc1d34146ccb8665dcedf68648d7)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a9463cc1d34146ccb8665dcedf68648d7"></a>

Gets the value of PlatformLabel_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a0588bdbf0c221ade13a46a7831681091)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a0588bdbf0c221ade13a46a7831681091"></a>

Gets the value of PlatformLabel_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1ab9a804e10dde8e3107f26ed807223c2c)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ab9a804e10dde8e3107f26ed807223c2c"></a>

Fills OutValue with the value of PlatformLabel_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformLabelOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a9da864d48237f9393ba36a85601ad7c6)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a9da864d48237f9393ba36a85601ad7c6"></a>

Returns a pointer to PlatformLabel_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformLabelOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ac1565d704960248000fa1e1c290c9e76)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ac1565d704960248000fa1e1c290c9e76"></a>

Returns a pointer to PlatformLabel_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1ad4af6fa2c58e055f57007807b2f8fc99)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1ad4af6fa2c58e055f57007807b2f8fc99"></a>

Sets the value of PlatformLabel_Optional and also sets PlatformLabel_IsSet to true.

#### `public inline void `[`SetPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1a22e2943d34eee23d4bed31b6f887f013)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a22e2943d34eee23d4bed31b6f887f013"></a>

Sets the value of PlatformLabel_Optional and also sets PlatformLabel_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformLabel`](#structFRHAPI__PlatformEntitlementPrepared_1aec3b44ca13276531035ca3ed859cbfe5)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1aec3b44ca13276531035ca3ed859cbfe5"></a>

Clears the value of PlatformLabel_Optional and sets PlatformLabel_IsSet to false.

#### `public inline bool `[`IsPlatformLabelSet`](#structFRHAPI__PlatformEntitlementPrepared_1a361bdda3451cc7947fd377342e573877)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a361bdda3451cc7947fd377342e573877"></a>

Checks whether PlatformLabel_Optional has been set.

#### `public inline void `[`SetPlatformLabelToNull`](#structFRHAPI__PlatformEntitlementPrepared_1a41d68891befea73096f4e45e20e08350)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a41d68891befea73096f4e45e20e08350"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlatformLabelNull`](#structFRHAPI__PlatformEntitlementPrepared_1a782c7f92469622b912caf69cda9f17fa)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a782c7f92469622b912caf69cda9f17fa"></a>

Checks whether PlatformLabel_Optional is set to null.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a4f67545999cac76816798bfa244ca811)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a4f67545999cac76816798bfa244ca811"></a>

Gets the value of PlatformMetadata_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a4f13689e96a369e411cc08663eff31b5)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a4f13689e96a369e411cc08663eff31b5"></a>

Gets the value of PlatformMetadata_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a1990d71b36f902a37ac3c022564e62d1)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a1990d71b36f902a37ac3c022564e62d1"></a>

Gets the value of PlatformMetadata_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a8d202cf6507803b44b4a0eaede4c8b04)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a8d202cf6507803b44b4a0eaede4c8b04"></a>

Fills OutValue with the value of PlatformMetadata_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformMetadataOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1a80b131e77e6498a51eaa9384da397c17)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1a80b131e77e6498a51eaa9384da397c17"></a>

Returns a pointer to PlatformMetadata_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformMetadataOrNull`](#structFRHAPI__PlatformEntitlementPrepared_1ac129b77c174eacfa7038be5f58fb01c5)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1ac129b77c174eacfa7038be5f58fb01c5"></a>

Returns a pointer to PlatformMetadata_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1a0d1597159030f4b99d38428fe0da24e7)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1a0d1597159030f4b99d38428fe0da24e7"></a>

Sets the value of PlatformMetadata_Optional and also sets PlatformMetadata_IsSet to true.

#### `public inline void `[`SetPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1acfec1b4171fd84fb572b9326b18d9005)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__PlatformEntitlementPrepared_1acfec1b4171fd84fb572b9326b18d9005"></a>

Sets the value of PlatformMetadata_Optional and also sets PlatformMetadata_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformMetadata`](#structFRHAPI__PlatformEntitlementPrepared_1aeaff5aaa1f7ae66def0b62db4e269947)`()` <a id="structFRHAPI__PlatformEntitlementPrepared_1aeaff5aaa1f7ae66def0b62db4e269947"></a>

Clears the value of PlatformMetadata_Optional and sets PlatformMetadata_IsSet to false.

#### `public inline bool `[`IsPlatformMetadataSet`](#structFRHAPI__PlatformEntitlementPrepared_1a06601120e403387ea422b55769ba14d8)`() const` <a id="structFRHAPI__PlatformEntitlementPrepared_1a06601120e403387ea422b55769ba14d8"></a>

Checks whether PlatformMetadata_Optional has been set.

