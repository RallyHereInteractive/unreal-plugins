---
title: RHAPI_PlatformEntitlementProcessRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformEntitlementProcessRequest`](#structFRHAPI__PlatformEntitlementProcessRequest) | Request to process a platform entitlement.

## struct `FRHAPI_PlatformEntitlementProcessRequest` <a id="structFRHAPI__PlatformEntitlementProcessRequest"></a>

```
struct FRHAPI_PlatformEntitlementProcessRequest
  : public FRHAPI_Model
```

Request to process a platform entitlement.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`TransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4100419f0f52a6eb4762beac516b783d) | unique id for this transaction on the platform
`public FString `[`PlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32) | Platform token that can be used to verify the identity of the user.
`public FString `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6) | Platform this entitlement was purchased was made on.
`public FString `[`PlatformEnvironment_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3c908cfdcfc20c6149e0638dc20f7ab9) | 
`public bool `[`PlatformEnvironment_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1aac30e8bb07dd7d7eaf40d95238b1db32) | true if PlatformEnvironment_Optional has been set to a value
`public bool `[`PlatformEnvironment_IsNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1adb5891ba82f6ac9d1a66411a4ac6293d) | true if PlatformEnvironment_Optional has been explicitly set to null
`public ERHAPI_PlatformRegion `[`PlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a72ee6aadcdaa3a4c8bf1e482694d14db) | 
`public ERHAPI_ClientType `[`ClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9674cba794d55a042afd6040cbf260a7) | 
`public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426) | Platform entitlements to process.
`public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755) | true if Entitlements_Optional has been set to a value
`public bool `[`CheckDurables_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5b989026c4fd5bda40f7ddc27097316b) | Should the system process durables during this request?
`public bool `[`CheckDurables_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8fa232636b27ba51f18a0e3a99e88c34) | true if CheckDurables_Optional has been set to a value
`public bool `[`CheckConsumables_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5629d0b260350e948d74a31ce7aabde1) | Should the system process consumables during this request?
`public bool `[`CheckConsumables_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a07c931992a7402b518ea1f46e8100d10) | true if CheckConsumables_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9e7f9a55d5149972e8d855bc22610868)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1a25af8f210e9fc7d343ef4fd75fb4dcd0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a992a7252d8e3b2751bec87dcfa9a2475)`()` | Gets the value of TransactionId.
`public inline const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1afdf670d3828aa77c27554f3d235d07f2)`() const` | Gets the value of TransactionId.
`public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a42684c88f2421073ff3aa5c93a4d92f4)`(const FString & NewValue)` | Sets the value of TransactionId.
`public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae120b13e354eb92730661031c08ed9d5)`(FString && NewValue)` | Sets the value of TransactionId using move semantics.
`public inline FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8afef5efd58e5f0225a515b39ae616ba)`()` | Gets the value of PlatformToken.
`public inline const FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a56a30c95db6545aa2d68bbec3c5cf108)`() const` | Gets the value of PlatformToken.
`public inline void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a46a0856d880e6cb5940294e9723cd39c)`(const FString & NewValue)` | Sets the value of PlatformToken.
`public inline void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8e290e471b1cea6865e1fb43ffc445e5)`(FString && NewValue)` | Sets the value of PlatformToken using move semantics.
`public inline FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad48dfc7a18be585b959a417780a8949b)`()` | Gets the value of PlatformId.
`public inline const FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3000e479ffe2553f2063117daf384c0e)`() const` | Gets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3884b12d6f59454a08a4453991c7faec)`(const FString & NewValue)` | Sets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1af3279ab1e4cfd73fe390d096073e8cff)`(FString && NewValue)` | Sets the value of PlatformId using move semantics.
`public inline FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a65fcb4692cc41fb3323551dc3a0e53ff)`()` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1adc888a41162ae681595f04914caa4611)`() const` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a114e36dddd11d735ba25b034fb3fe7e6)`(const FString & DefaultValue) const` | Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1af61f37636cae7734b856c1911fd7bbad)`(FString & OutValue) const` | Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa273858d6add87c8508d07bce82f91ef)`()` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a58a3f22bc8a4762b7a51e0d8b89e0442)`() const` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3ca764061dd4d41a38c11b7824f32a0b)`(const FString & NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.
`public inline void `[`SetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac5207e714891e218d1664b904e9348c0)`(FString && NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.
`public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1abd417c939ef64b1ab26305b96912842c)`()` | Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.
`public inline bool `[`IsPlatformEnvironmentSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a901c50ce60c8b9bfda93fd8d478f6319)`() const` | Checks whether PlatformEnvironment_Optional has been set.
`public inline void `[`SetPlatformEnvironmentToNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a6f059a8027556a44d5fef6beb6573f69)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlatformEnvironmentNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a89fe5a8b0ccbcc76cc54dacdf5f979cd)`() const` | Checks whether PlatformEnvironment_Optional is set to null.
`public inline ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1aad5f28e2e1c77eeab695c1e9cf91cdd8)`()` | Gets the value of PlatformRegion.
`public inline const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab4c6bc8b7d5f753cb08e6ebcd2bdc236)`() const` | Gets the value of PlatformRegion.
`public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3b7c18aeb506667a110f623f4c635d9c)`(const ERHAPI_PlatformRegion & NewValue)` | Sets the value of PlatformRegion.
`public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad5f6b69be825a8ec7f0b1ab9b37d767f)`(ERHAPI_PlatformRegion && NewValue)` | Sets the value of PlatformRegion using move semantics.
`public inline ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5c13b4e8b2ecc3d2ad4e6c53d1dc6e84)`()` | Gets the value of ClientType.
`public inline const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a35ce6efa5ac1dd2bbe6f829dd97c3d81)`() const` | Gets the value of ClientType.
`public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2498ca3832ba4e9f44caff3b537a0f17)`(const ERHAPI_ClientType & NewValue)` | Sets the value of ClientType.
`public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a06ead50b187f385895d173b50a3692a6)`(ERHAPI_ClientType && NewValue)` | Sets the value of ClientType using move semantics.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae8ac89c14eccda2158df52a730a0a812)`()` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a10c1ba14ccd6f05f735d99a4fc0cc8ef)`() const` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a7d14c9935de5a6d9d6297494fafe6831)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac72ca2c63c2fc3f571fb4475cbd96f82)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1acceebd37fc9629b77f5d07256cf3c874)`()` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1af043afc2a44080afbaf389ff16a64a38)`() const` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a707f605277c2a1e3ad3b1ac4841dc16f)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.
`public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad39bf35d93c1f427798647fba3aed0d8)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.
`public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344)`()` | Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.
`public inline bool `[`IsEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a36806eac5075f88434404615ad626627)`() const` | Checks whether Entitlements_Optional has been set.
`public inline bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1aafde8f5b1dae1e5214559f50405648fb)`()` | Gets the value of CheckDurables_Optional, regardless of it having been set.
`public inline const bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1af5a26953f10711d45f5d64f71243eec4)`() const` | Gets the value of CheckDurables_Optional, regardless of it having been set.
`public inline const bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1aad67654dcc258c5828fa6c1c81867f63)`(const bool & DefaultValue) const` | Gets the value of CheckDurables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1adb2a3b124930b5e3df33d9f4e3ce7e47)`(bool & OutValue) const` | Fills OutValue with the value of CheckDurables_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCheckDurablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1aedd31c1c0db8aa4e7ea84002d8e52485)`()` | Returns a pointer to CheckDurables_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCheckDurablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a7a0ba8fdd889dcc9cebc9bdbea716418)`() const` | Returns a pointer to CheckDurables_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a01f2a90d954cd2230687dd80220ce877)`(const bool & NewValue)` | Sets the value of CheckDurables_Optional and also sets CheckDurables_IsSet to true.
`public inline void `[`SetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a0da895b8dab1034a53323cacc6532698)`(bool && NewValue)` | Sets the value of CheckDurables_Optional and also sets CheckDurables_IsSet to true using move semantics.
`public inline void `[`ClearCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2dc6ea605c6f4e1f3f9ee4f5b190ef23)`()` | Clears the value of CheckDurables_Optional and sets CheckDurables_IsSet to false.
`public inline bool `[`IsCheckDurablesSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1cba3f1267a03719d10dc40f8b443275)`() const` | Checks whether CheckDurables_Optional has been set.
`public inline bool `[`IsCheckDurablesDefaultValue`](#structFRHAPI__PlatformEntitlementProcessRequest_1a674875b84a633fe0338336482da09533)`() const` | Returns true if CheckDurables_Optional is set and matches the default value.
`public inline void `[`SetCheckDurablesToDefault`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab05e4df7bfac9c81aea2d3e42e7e0b33)`()` | Sets the value of CheckDurables_Optional to its default and also sets CheckDurables_IsSet to true.
`public inline bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1afc48f54fbc69fad2ed1a721d80e7ae66)`()` | Gets the value of CheckConsumables_Optional, regardless of it having been set.
`public inline const bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a814bdfb787ea1e17641045f533de9374)`() const` | Gets the value of CheckConsumables_Optional, regardless of it having been set.
`public inline const bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1faf87007ddf2677cb95f311af575960)`(const bool & DefaultValue) const` | Gets the value of CheckConsumables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5c8dc1056775b2f5083e10f34e476b04)`(bool & OutValue) const` | Fills OutValue with the value of CheckConsumables_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCheckConsumablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a18f183f9b0fb5c7e2648b204d0291f49)`()` | Returns a pointer to CheckConsumables_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCheckConsumablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a01284e72e30fa633bbae0a16c8ac31f9)`() const` | Returns a pointer to CheckConsumables_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2742b02be4ab5854a36e1f025ffd9ec9)`(const bool & NewValue)` | Sets the value of CheckConsumables_Optional and also sets CheckConsumables_IsSet to true.
`public inline void `[`SetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a41cd3dc442269622c259a9ecb49bb963)`(bool && NewValue)` | Sets the value of CheckConsumables_Optional and also sets CheckConsumables_IsSet to true using move semantics.
`public inline void `[`ClearCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a004e3e6247808c305a6a66a3b609ff1c)`()` | Clears the value of CheckConsumables_Optional and sets CheckConsumables_IsSet to false.
`public inline bool `[`IsCheckConsumablesSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1aab7bfb26a202458aabdae51461a98e26)`() const` | Checks whether CheckConsumables_Optional has been set.
`public inline bool `[`IsCheckConsumablesDefaultValue`](#structFRHAPI__PlatformEntitlementProcessRequest_1a24eaa1538b0f9b86a5d1d15345dee6cd)`() const` | Returns true if CheckConsumables_Optional is set and matches the default value.
`public inline void `[`SetCheckConsumablesToDefault`](#structFRHAPI__PlatformEntitlementProcessRequest_1a772280c4c0b6170a29c70c9df541702e)`()` | Sets the value of CheckConsumables_Optional to its default and also sets CheckConsumables_IsSet to true.

### Members

#### `public FString `[`TransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4100419f0f52a6eb4762beac516b783d) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a4100419f0f52a6eb4762beac516b783d"></a>

unique id for this transaction on the platform

#### `public FString `[`PlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32"></a>

Platform token that can be used to verify the identity of the user.

#### `public FString `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6"></a>

Platform this entitlement was purchased was made on.

#### `public FString `[`PlatformEnvironment_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3c908cfdcfc20c6149e0638dc20f7ab9) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3c908cfdcfc20c6149e0638dc20f7ab9"></a>

#### `public bool `[`PlatformEnvironment_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1aac30e8bb07dd7d7eaf40d95238b1db32) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aac30e8bb07dd7d7eaf40d95238b1db32"></a>

true if PlatformEnvironment_Optional has been set to a value

#### `public bool `[`PlatformEnvironment_IsNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1adb5891ba82f6ac9d1a66411a4ac6293d) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adb5891ba82f6ac9d1a66411a4ac6293d"></a>

true if PlatformEnvironment_Optional has been explicitly set to null

#### `public ERHAPI_PlatformRegion `[`PlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a72ee6aadcdaa3a4c8bf1e482694d14db) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a72ee6aadcdaa3a4c8bf1e482694d14db"></a>

#### `public ERHAPI_ClientType `[`ClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9674cba794d55a042afd6040cbf260a7) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9674cba794d55a042afd6040cbf260a7"></a>

#### `public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426"></a>

Platform entitlements to process.

#### `public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755"></a>

true if Entitlements_Optional has been set to a value

#### `public bool `[`CheckDurables_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5b989026c4fd5bda40f7ddc27097316b) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5b989026c4fd5bda40f7ddc27097316b"></a>

Should the system process durables during this request?

#### `public bool `[`CheckDurables_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8fa232636b27ba51f18a0e3a99e88c34) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8fa232636b27ba51f18a0e3a99e88c34"></a>

true if CheckDurables_Optional has been set to a value

#### `public bool `[`CheckConsumables_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5629d0b260350e948d74a31ce7aabde1) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5629d0b260350e948d74a31ce7aabde1"></a>

Should the system process consumables during this request?

#### `public bool `[`CheckConsumables_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a07c931992a7402b518ea1f46e8100d10) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a07c931992a7402b518ea1f46e8100d10"></a>

true if CheckConsumables_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9e7f9a55d5149972e8d855bc22610868)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9e7f9a55d5149972e8d855bc22610868"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1a25af8f210e9fc7d343ef4fd75fb4dcd0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a25af8f210e9fc7d343ef4fd75fb4dcd0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a992a7252d8e3b2751bec87dcfa9a2475)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a992a7252d8e3b2751bec87dcfa9a2475"></a>

Gets the value of TransactionId.

#### `public inline const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1afdf670d3828aa77c27554f3d235d07f2)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1afdf670d3828aa77c27554f3d235d07f2"></a>

Gets the value of TransactionId.

#### `public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a42684c88f2421073ff3aa5c93a4d92f4)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a42684c88f2421073ff3aa5c93a4d92f4"></a>

Sets the value of TransactionId.

#### `public inline void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae120b13e354eb92730661031c08ed9d5)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ae120b13e354eb92730661031c08ed9d5"></a>

Sets the value of TransactionId using move semantics.

#### `public inline FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8afef5efd58e5f0225a515b39ae616ba)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8afef5efd58e5f0225a515b39ae616ba"></a>

Gets the value of PlatformToken.

#### `public inline const FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a56a30c95db6545aa2d68bbec3c5cf108)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a56a30c95db6545aa2d68bbec3c5cf108"></a>

Gets the value of PlatformToken.

#### `public inline void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a46a0856d880e6cb5940294e9723cd39c)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a46a0856d880e6cb5940294e9723cd39c"></a>

Sets the value of PlatformToken.

#### `public inline void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8e290e471b1cea6865e1fb43ffc445e5)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8e290e471b1cea6865e1fb43ffc445e5"></a>

Sets the value of PlatformToken using move semantics.

#### `public inline FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad48dfc7a18be585b959a417780a8949b)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ad48dfc7a18be585b959a417780a8949b"></a>

Gets the value of PlatformId.

#### `public inline const FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3000e479ffe2553f2063117daf384c0e)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3000e479ffe2553f2063117daf384c0e"></a>

Gets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3884b12d6f59454a08a4453991c7faec)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3884b12d6f59454a08a4453991c7faec"></a>

Sets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1af3279ab1e4cfd73fe390d096073e8cff)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af3279ab1e4cfd73fe390d096073e8cff"></a>

Sets the value of PlatformId using move semantics.

#### `public inline FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a65fcb4692cc41fb3323551dc3a0e53ff)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a65fcb4692cc41fb3323551dc3a0e53ff"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1adc888a41162ae681595f04914caa4611)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adc888a41162ae681595f04914caa4611"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a114e36dddd11d735ba25b034fb3fe7e6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a114e36dddd11d735ba25b034fb3fe7e6"></a>

Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1af61f37636cae7734b856c1911fd7bbad)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af61f37636cae7734b856c1911fd7bbad"></a>

Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa273858d6add87c8508d07bce82f91ef)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aa273858d6add87c8508d07bce82f91ef"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a58a3f22bc8a4762b7a51e0d8b89e0442)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a58a3f22bc8a4762b7a51e0d8b89e0442"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3ca764061dd4d41a38c11b7824f32a0b)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3ca764061dd4d41a38c11b7824f32a0b"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.

#### `public inline void `[`SetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac5207e714891e218d1664b904e9348c0)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac5207e714891e218d1664b904e9348c0"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1abd417c939ef64b1ab26305b96912842c)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1abd417c939ef64b1ab26305b96912842c"></a>

Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.

#### `public inline bool `[`IsPlatformEnvironmentSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a901c50ce60c8b9bfda93fd8d478f6319)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a901c50ce60c8b9bfda93fd8d478f6319"></a>

Checks whether PlatformEnvironment_Optional has been set.

#### `public inline void `[`SetPlatformEnvironmentToNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a6f059a8027556a44d5fef6beb6573f69)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a6f059a8027556a44d5fef6beb6573f69"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlatformEnvironmentNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a89fe5a8b0ccbcc76cc54dacdf5f979cd)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a89fe5a8b0ccbcc76cc54dacdf5f979cd"></a>

Checks whether PlatformEnvironment_Optional is set to null.

#### `public inline ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1aad5f28e2e1c77eeab695c1e9cf91cdd8)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aad5f28e2e1c77eeab695c1e9cf91cdd8"></a>

Gets the value of PlatformRegion.

#### `public inline const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab4c6bc8b7d5f753cb08e6ebcd2bdc236)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab4c6bc8b7d5f753cb08e6ebcd2bdc236"></a>

Gets the value of PlatformRegion.

#### `public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3b7c18aeb506667a110f623f4c635d9c)`(const ERHAPI_PlatformRegion & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3b7c18aeb506667a110f623f4c635d9c"></a>

Sets the value of PlatformRegion.

#### `public inline void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad5f6b69be825a8ec7f0b1ab9b37d767f)`(ERHAPI_PlatformRegion && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ad5f6b69be825a8ec7f0b1ab9b37d767f"></a>

Sets the value of PlatformRegion using move semantics.

#### `public inline ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5c13b4e8b2ecc3d2ad4e6c53d1dc6e84)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5c13b4e8b2ecc3d2ad4e6c53d1dc6e84"></a>

Gets the value of ClientType.

#### `public inline const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a35ce6efa5ac1dd2bbe6f829dd97c3d81)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a35ce6efa5ac1dd2bbe6f829dd97c3d81"></a>

Gets the value of ClientType.

#### `public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2498ca3832ba4e9f44caff3b537a0f17)`(const ERHAPI_ClientType & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a2498ca3832ba4e9f44caff3b537a0f17"></a>

Sets the value of ClientType.

#### `public inline void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a06ead50b187f385895d173b50a3692a6)`(ERHAPI_ClientType && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a06ead50b187f385895d173b50a3692a6"></a>

Sets the value of ClientType using move semantics.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae8ac89c14eccda2158df52a730a0a812)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ae8ac89c14eccda2158df52a730a0a812"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a10c1ba14ccd6f05f735d99a4fc0cc8ef)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a10c1ba14ccd6f05f735d99a4fc0cc8ef"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a7d14c9935de5a6d9d6297494fafe6831)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a7d14c9935de5a6d9d6297494fafe6831"></a>

Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac72ca2c63c2fc3f571fb4475cbd96f82)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac72ca2c63c2fc3f571fb4475cbd96f82"></a>

Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1acceebd37fc9629b77f5d07256cf3c874)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1acceebd37fc9629b77f5d07256cf3c874"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1af043afc2a44080afbaf389ff16a64a38)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af043afc2a44080afbaf389ff16a64a38"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a707f605277c2a1e3ad3b1ac4841dc16f)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a707f605277c2a1e3ad3b1ac4841dc16f"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.

#### `public inline void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad39bf35d93c1f427798647fba3aed0d8)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ad39bf35d93c1f427798647fba3aed0d8"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344"></a>

Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.

#### `public inline bool `[`IsEntitlementsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a36806eac5075f88434404615ad626627)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a36806eac5075f88434404615ad626627"></a>

Checks whether Entitlements_Optional has been set.

#### `public inline bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1aafde8f5b1dae1e5214559f50405648fb)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aafde8f5b1dae1e5214559f50405648fb"></a>

Gets the value of CheckDurables_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1af5a26953f10711d45f5d64f71243eec4)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af5a26953f10711d45f5d64f71243eec4"></a>

Gets the value of CheckDurables_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1aad67654dcc258c5828fa6c1c81867f63)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aad67654dcc258c5828fa6c1c81867f63"></a>

Gets the value of CheckDurables_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1adb2a3b124930b5e3df33d9f4e3ce7e47)`(bool & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adb2a3b124930b5e3df33d9f4e3ce7e47"></a>

Fills OutValue with the value of CheckDurables_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCheckDurablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1aedd31c1c0db8aa4e7ea84002d8e52485)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aedd31c1c0db8aa4e7ea84002d8e52485"></a>

Returns a pointer to CheckDurables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCheckDurablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a7a0ba8fdd889dcc9cebc9bdbea716418)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a7a0ba8fdd889dcc9cebc9bdbea716418"></a>

Returns a pointer to CheckDurables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a01f2a90d954cd2230687dd80220ce877)`(const bool & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a01f2a90d954cd2230687dd80220ce877"></a>

Sets the value of CheckDurables_Optional and also sets CheckDurables_IsSet to true.

#### `public inline void `[`SetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a0da895b8dab1034a53323cacc6532698)`(bool && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a0da895b8dab1034a53323cacc6532698"></a>

Sets the value of CheckDurables_Optional and also sets CheckDurables_IsSet to true using move semantics.

#### `public inline void `[`ClearCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2dc6ea605c6f4e1f3f9ee4f5b190ef23)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a2dc6ea605c6f4e1f3f9ee4f5b190ef23"></a>

Clears the value of CheckDurables_Optional and sets CheckDurables_IsSet to false.

#### `public inline bool `[`IsCheckDurablesSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1cba3f1267a03719d10dc40f8b443275)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1cba3f1267a03719d10dc40f8b443275"></a>

Checks whether CheckDurables_Optional has been set.

#### `public inline bool `[`IsCheckDurablesDefaultValue`](#structFRHAPI__PlatformEntitlementProcessRequest_1a674875b84a633fe0338336482da09533)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a674875b84a633fe0338336482da09533"></a>

Returns true if CheckDurables_Optional is set and matches the default value.

#### `public inline void `[`SetCheckDurablesToDefault`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab05e4df7bfac9c81aea2d3e42e7e0b33)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab05e4df7bfac9c81aea2d3e42e7e0b33"></a>

Sets the value of CheckDurables_Optional to its default and also sets CheckDurables_IsSet to true.

#### `public inline bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1afc48f54fbc69fad2ed1a721d80e7ae66)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1afc48f54fbc69fad2ed1a721d80e7ae66"></a>

Gets the value of CheckConsumables_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a814bdfb787ea1e17641045f533de9374)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a814bdfb787ea1e17641045f533de9374"></a>

Gets the value of CheckConsumables_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1faf87007ddf2677cb95f311af575960)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1faf87007ddf2677cb95f311af575960"></a>

Gets the value of CheckConsumables_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5c8dc1056775b2f5083e10f34e476b04)`(bool & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5c8dc1056775b2f5083e10f34e476b04"></a>

Fills OutValue with the value of CheckConsumables_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCheckConsumablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a18f183f9b0fb5c7e2648b204d0291f49)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a18f183f9b0fb5c7e2648b204d0291f49"></a>

Returns a pointer to CheckConsumables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCheckConsumablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a01284e72e30fa633bbae0a16c8ac31f9)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a01284e72e30fa633bbae0a16c8ac31f9"></a>

Returns a pointer to CheckConsumables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2742b02be4ab5854a36e1f025ffd9ec9)`(const bool & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a2742b02be4ab5854a36e1f025ffd9ec9"></a>

Sets the value of CheckConsumables_Optional and also sets CheckConsumables_IsSet to true.

#### `public inline void `[`SetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a41cd3dc442269622c259a9ecb49bb963)`(bool && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a41cd3dc442269622c259a9ecb49bb963"></a>

Sets the value of CheckConsumables_Optional and also sets CheckConsumables_IsSet to true using move semantics.

#### `public inline void `[`ClearCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a004e3e6247808c305a6a66a3b609ff1c)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a004e3e6247808c305a6a66a3b609ff1c"></a>

Clears the value of CheckConsumables_Optional and sets CheckConsumables_IsSet to false.

#### `public inline bool `[`IsCheckConsumablesSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1aab7bfb26a202458aabdae51461a98e26)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aab7bfb26a202458aabdae51461a98e26"></a>

Checks whether CheckConsumables_Optional has been set.

#### `public inline bool `[`IsCheckConsumablesDefaultValue`](#structFRHAPI__PlatformEntitlementProcessRequest_1a24eaa1538b0f9b86a5d1d15345dee6cd)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a24eaa1538b0f9b86a5d1d15345dee6cd"></a>

Returns true if CheckConsumables_Optional is set and matches the default value.

#### `public inline void `[`SetCheckConsumablesToDefault`](#structFRHAPI__PlatformEntitlementProcessRequest_1a772280c4c0b6170a29c70c9df541702e)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a772280c4c0b6170a29c70c9df541702e"></a>

Sets the value of CheckConsumables_Optional to its default and also sets CheckConsumables_IsSet to true.

