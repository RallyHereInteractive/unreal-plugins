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
`public FString `[`TransactionId_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1af6f5cdd0619e3c6af05dde33fed66fd8) | unique id for this transaction on the platform
`public bool `[`TransactionId_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4082a84efa4e90fe22af4fa06a3fac73) | true if TransactionId_Optional has been set to a value
`public FString `[`PlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32) | Platform token that can be used to verify the identity of the user.
`public FString `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6) | Platform this entitlement was purchased was made on.
`public FString `[`PlatformEnvironment_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3c908cfdcfc20c6149e0638dc20f7ab9) | 
`public bool `[`PlatformEnvironment_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1aac30e8bb07dd7d7eaf40d95238b1db32) | true if PlatformEnvironment_Optional has been set to a value
`public bool `[`PlatformEnvironment_IsNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1adb5891ba82f6ac9d1a66411a4ac6293d) | true if PlatformEnvironment_Optional has been explicitly set to null
`public ERHAPI_PlatformRegion `[`PlatformRegion_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a15229c112b4318af21d6ea73eaee7e76) | 
`public bool `[`PlatformRegion_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1acc70c907a66f7064b62a7f5cde59c850) | true if PlatformRegion_Optional has been set to a value
`public ERHAPI_ClientType `[`ClientType_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae6f3c6673cc0a515a7165b1f241a43a2) | 
`public bool `[`ClientType_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a311570db37024ffbfffc0ca0278f02c5) | true if ClientType_Optional has been set to a value
`public TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > `[`Entitlements_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426) | Platform entitlements to process.
`public bool `[`Entitlements_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755) | true if Entitlements_Optional has been set to a value
`public bool `[`CheckDurables_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5b989026c4fd5bda40f7ddc27097316b) | Should the system process durables during this request?
`public bool `[`CheckDurables_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8fa232636b27ba51f18a0e3a99e88c34) | true if CheckDurables_Optional has been set to a value
`public bool `[`CheckConsumables_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5629d0b260350e948d74a31ce7aabde1) | Should the system process consumables during this request?
`public bool `[`CheckConsumables_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a07c931992a7402b518ea1f46e8100d10) | true if CheckConsumables_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9e7f9a55d5149972e8d855bc22610868)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlementProcessRequest_1a25af8f210e9fc7d343ef4fd75fb4dcd0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae7ea1c2074a7405cda2bfcfb185539f7)`()` | Gets the value of TransactionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aff4c70b6187a344958f3cfec1e543a0d)`() const` | Gets the value of TransactionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a476f464851365888f50eac46d672ac23)`(const FString & DefaultValue) const` | Gets the value of TransactionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a950c3453706e15beb59e561fb84ab984)`(FString & OutValue) const` | Fills OutValue with the value of TransactionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTransactionIdOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a817dc2173c9060144e5548169f71d649)`()` | Returns a pointer to TransactionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTransactionIdOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac06a148c821e5f601127ccb5f4935a61)`() const` | Returns a pointer to TransactionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1f501997623d5cae7695ac7da09df22b)`(const FString & NewValue)` | Sets the value of TransactionId_Optional and also sets TransactionId_IsSet to true.
`public inline FORCEINLINE void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a902d1e1529557a16f1e1bb87bfd9fbce)`(FString && NewValue)` | Sets the value of TransactionId_Optional and also sets TransactionId_IsSet to true using move semantics.
`public inline void `[`ClearTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae541c025fe3c526a025ec5de27e7a8b5)`()` | Clears the value of TransactionId_Optional and sets TransactionId_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_TransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aac1dc75efae87df9751bd3a0ed59438c)`()` | Returns the default value of TransactionId.
`public inline FORCEINLINE FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae5fa6ab5c52602099a1b05c97488354d)`()` | Gets the value of PlatformToken.
`public inline FORCEINLINE const FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9524f6be03a8b4dc748645dbda630a9a)`() const` | Gets the value of PlatformToken.
`public inline FORCEINLINE void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1afe76a6860d54c2611cb115e71171aead)`(const FString & NewValue)` | Sets the value of PlatformToken.
`public inline FORCEINLINE void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1af9845e9b56a73dc35b311f6f70b9a97c)`(FString && NewValue)` | Sets the value of PlatformToken using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ace81db8e0a656da6a39ce409c71d4de3)`()` | Gets the value of PlatformId.
`public inline FORCEINLINE const FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a0c85b40e8985c0dfbe35aabe96a8b7c6)`() const` | Gets the value of PlatformId.
`public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a0fd640089ee8ce4f62b8ca0252b6bdeb)`(const FString & NewValue)` | Sets the value of PlatformId.
`public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1af06afce59f9676d373b79bd2d5b80fe8)`(FString && NewValue)` | Sets the value of PlatformId using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a642f6684ba282a133cfb8c55d0ea7455)`()` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa876ecdae59410ef82719f0ada643dfa)`() const` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a33d3091883c7c26ca0d8c14a2985178d)`(const FString & DefaultValue) const` | Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a884499e1ac0fef64103c3891b5edb1b5)`(FString & OutValue) const` | Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2a9e82e585844a042fd779f36dc2efe8)`()` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a148164fb1c43112f3b8052ddb78f7ff9)`() const` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1aeaf4de3247b59744644967e25f14371f)`(const FString & NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a63413f7a505720dc05f82637b9027ddb)`(FString && NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.
`public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1abd417c939ef64b1ab26305b96912842c)`()` | Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.
`public inline FORCEINLINE void `[`SetPlatformEnvironmentToNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac3ba3beeb068dc87dc284abd3a72ff46)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlatformEnvironmentNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9d9543dec47132a843ef520600699106)`() const` | Checks whether PlatformEnvironment_Optional is set to null.
`public inline FORCEINLINE ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3ddac77d9202b93fa31a8712a62b6bd7)`()` | Gets the value of PlatformRegion_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2dd2fd1c37426beff1030dbfc43ce044)`() const` | Gets the value of PlatformRegion_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa07d5f93206f392157c608b8ca2c91f4)`(const ERHAPI_PlatformRegion & DefaultValue) const` | Gets the value of PlatformRegion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4e767e05e61331bc43ef2db4fc914db2)`(ERHAPI_PlatformRegion & OutValue) const` | Fills OutValue with the value of PlatformRegion_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_PlatformRegion * `[`GetPlatformRegionOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a63a2005dada88fe4a6e566944b2fee6a)`()` | Returns a pointer to PlatformRegion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_PlatformRegion * `[`GetPlatformRegionOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8767a9174485acb840300c6593e48506)`() const` | Returns a pointer to PlatformRegion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab45951e0ca9be5509784f77813988ab1)`(const ERHAPI_PlatformRegion & NewValue)` | Sets the value of PlatformRegion_Optional and also sets PlatformRegion_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a761dfcd268735f31be90cb4cd15b5a4f)`(ERHAPI_PlatformRegion && NewValue)` | Sets the value of PlatformRegion_Optional and also sets PlatformRegion_IsSet to true using move semantics.
`public inline void `[`ClearPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9d5d46e5a022ede16b6731974ccd64a0)`()` | Clears the value of PlatformRegion_Optional and sets PlatformRegion_IsSet to false.
`public inline FORCEINLINE ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a551c23be707ef4ee52da601e6db66e55)`()` | Gets the value of ClientType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8c54b03695651157104919a1c343d55e)`() const` | Gets the value of ClientType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4dce7f37485bfe8223eb668d45814944)`(const ERHAPI_ClientType & DefaultValue) const` | Gets the value of ClientType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac8229fc2d9b9ed1d8197acdffd19d019)`(ERHAPI_ClientType & OutValue) const` | Fills OutValue with the value of ClientType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_ClientType * `[`GetClientTypeOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5d2f1ce21d105455fb434b2dbc4cb9ac)`()` | Returns a pointer to ClientType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_ClientType * `[`GetClientTypeOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3e711db3f0232577691869812d04e4a7)`() const` | Returns a pointer to ClientType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab82af7ef31fea12baafaa9fa27334904)`(const ERHAPI_ClientType & NewValue)` | Sets the value of ClientType_Optional and also sets ClientType_IsSet to true.
`public inline FORCEINLINE void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1afb84afc1a1dd748880810c868c5a5171)`(ERHAPI_ClientType && NewValue)` | Sets the value of ClientType_Optional and also sets ClientType_IsSet to true using move semantics.
`public inline void `[`ClearClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a270d4606c85bbaad639211c471534d4d)`()` | Clears the value of ClientType_Optional and sets ClientType_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a316512547e54d335a79a0a6b7b88e64f)`()` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa1df0606a6074d3118fa1675fee5c66c)`() const` | Gets the value of Entitlements_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac0c73a2d8ce18c803327dbbb36c4e69a)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` | Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a0f5952a93c8c57dd5d208a52c1cd996d)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` | Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a098c13b14f58e487f879e8c1ee3b6810)`()` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a7fcb4aebe5c4095e692225526063978e)`() const` | Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1ecaafae650a895d9360831357b9946c)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.
`public inline FORCEINLINE void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a61c5d5cd50fb039ae45a91fc37cef095)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` | Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.
`public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344)`()` | Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.
`public inline FORCEINLINE bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5b18ca3f9f455d5613275137de3dab09)`()` | Gets the value of CheckDurables_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a27c5288dd8961e1be06113f7a2136ac4)`() const` | Gets the value of CheckDurables_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8ac982fa2c58e27efadb389e5675bcf1)`(const bool & DefaultValue) const` | Gets the value of CheckDurables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a25f6f40463ca39c647855e84f12d4d9b)`(bool & OutValue) const` | Fills OutValue with the value of CheckDurables_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCheckDurablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5c3253d7c02e008bfce749f4aed49730)`()` | Returns a pointer to CheckDurables_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCheckDurablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a581cd4f6cd438a0552433d301de9357b)`() const` | Returns a pointer to CheckDurables_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a07345e36bad01ed3587dd96e2c393657)`(const bool & NewValue)` | Sets the value of CheckDurables_Optional and also sets CheckDurables_IsSet to true.
`public inline FORCEINLINE void `[`SetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1adcc062ed867f6611d8fe9cf75ad9328d)`(bool && NewValue)` | Sets the value of CheckDurables_Optional and also sets CheckDurables_IsSet to true using move semantics.
`public inline void `[`ClearCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2dc6ea605c6f4e1f3f9ee4f5b190ef23)`()` | Clears the value of CheckDurables_Optional and sets CheckDurables_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1f6c395e8e781421bc6806d8e7b47733)`()` | Returns the default value of CheckDurables.
`public inline FORCEINLINE bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a98051289bdf2c09ba33ef8259b8fd935)`()` | Gets the value of CheckConsumables_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9115437eefa15feffd07094aa5262ca5)`() const` | Gets the value of CheckConsumables_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a874d0d54b892cff811bf707af1efad71)`(const bool & DefaultValue) const` | Gets the value of CheckConsumables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3cdc2cc8768abddb40ffb13f8ae00d63)`(bool & OutValue) const` | Fills OutValue with the value of CheckConsumables_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCheckConsumablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab8cd555173e73bc96d521d3a4c2d578c)`()` | Returns a pointer to CheckConsumables_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCheckConsumablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3db214e3f34e84ebeed2dc59f51e487f)`() const` | Returns a pointer to CheckConsumables_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa0502669e62dcd1034582b3e92cd68f5)`(const bool & NewValue)` | Sets the value of CheckConsumables_Optional and also sets CheckConsumables_IsSet to true.
`public inline FORCEINLINE void `[`SetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad2ff76da07b6cbc79a4159f8d481f3ee)`(bool && NewValue)` | Sets the value of CheckConsumables_Optional and also sets CheckConsumables_IsSet to true using move semantics.
`public inline void `[`ClearCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a004e3e6247808c305a6a66a3b609ff1c)`()` | Clears the value of CheckConsumables_Optional and sets CheckConsumables_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a97cf247a6a79d5cd7c0e31091b06e88c)`()` | Returns the default value of CheckConsumables.

### Members

#### `public FString `[`TransactionId_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1af6f5cdd0619e3c6af05dde33fed66fd8) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af6f5cdd0619e3c6af05dde33fed66fd8"></a>

unique id for this transaction on the platform

#### `public bool `[`TransactionId_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4082a84efa4e90fe22af4fa06a3fac73) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a4082a84efa4e90fe22af4fa06a3fac73"></a>

true if TransactionId_Optional has been set to a value

#### `public FString `[`PlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32"></a>

Platform token that can be used to verify the identity of the user.

#### `public FString `[`PlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6"></a>

Platform this entitlement was purchased was made on.

#### `public FString `[`PlatformEnvironment_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3c908cfdcfc20c6149e0638dc20f7ab9) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3c908cfdcfc20c6149e0638dc20f7ab9"></a>

#### `public bool `[`PlatformEnvironment_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1aac30e8bb07dd7d7eaf40d95238b1db32) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aac30e8bb07dd7d7eaf40d95238b1db32"></a>

true if PlatformEnvironment_Optional has been set to a value

#### `public bool `[`PlatformEnvironment_IsNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1adb5891ba82f6ac9d1a66411a4ac6293d) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adb5891ba82f6ac9d1a66411a4ac6293d"></a>

true if PlatformEnvironment_Optional has been explicitly set to null

#### `public ERHAPI_PlatformRegion `[`PlatformRegion_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1a15229c112b4318af21d6ea73eaee7e76) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a15229c112b4318af21d6ea73eaee7e76"></a>

#### `public bool `[`PlatformRegion_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1acc70c907a66f7064b62a7f5cde59c850) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1acc70c907a66f7064b62a7f5cde59c850"></a>

true if PlatformRegion_Optional has been set to a value

#### `public ERHAPI_ClientType `[`ClientType_Optional`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae6f3c6673cc0a515a7165b1f241a43a2) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ae6f3c6673cc0a515a7165b1f241a43a2"></a>

#### `public bool `[`ClientType_IsSet`](#structFRHAPI__PlatformEntitlementProcessRequest_1a311570db37024ffbfffc0ca0278f02c5) <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a311570db37024ffbfffc0ca0278f02c5"></a>

true if ClientType_Optional has been set to a value

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

#### `public inline FORCEINLINE FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae7ea1c2074a7405cda2bfcfb185539f7)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ae7ea1c2074a7405cda2bfcfb185539f7"></a>

Gets the value of TransactionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aff4c70b6187a344958f3cfec1e543a0d)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aff4c70b6187a344958f3cfec1e543a0d"></a>

Gets the value of TransactionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a476f464851365888f50eac46d672ac23)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a476f464851365888f50eac46d672ac23"></a>

Gets the value of TransactionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a950c3453706e15beb59e561fb84ab984)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a950c3453706e15beb59e561fb84ab984"></a>

Fills OutValue with the value of TransactionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTransactionIdOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a817dc2173c9060144e5548169f71d649)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a817dc2173c9060144e5548169f71d649"></a>

Returns a pointer to TransactionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTransactionIdOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac06a148c821e5f601127ccb5f4935a61)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac06a148c821e5f601127ccb5f4935a61"></a>

Returns a pointer to TransactionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1f501997623d5cae7695ac7da09df22b)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1f501997623d5cae7695ac7da09df22b"></a>

Sets the value of TransactionId_Optional and also sets TransactionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a902d1e1529557a16f1e1bb87bfd9fbce)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a902d1e1529557a16f1e1bb87bfd9fbce"></a>

Sets the value of TransactionId_Optional and also sets TransactionId_IsSet to true using move semantics.

#### `public inline void `[`ClearTransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae541c025fe3c526a025ec5de27e7a8b5)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ae541c025fe3c526a025ec5de27e7a8b5"></a>

Clears the value of TransactionId_Optional and sets TransactionId_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_TransactionId`](#structFRHAPI__PlatformEntitlementProcessRequest_1aac1dc75efae87df9751bd3a0ed59438c)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aac1dc75efae87df9751bd3a0ed59438c"></a>

Returns the default value of TransactionId.

#### `public inline FORCEINLINE FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1ae5fa6ab5c52602099a1b05c97488354d)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ae5fa6ab5c52602099a1b05c97488354d"></a>

Gets the value of PlatformToken.

#### `public inline FORCEINLINE const FString & `[`GetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9524f6be03a8b4dc748645dbda630a9a)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9524f6be03a8b4dc748645dbda630a9a"></a>

Gets the value of PlatformToken.

#### `public inline FORCEINLINE void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1afe76a6860d54c2611cb115e71171aead)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1afe76a6860d54c2611cb115e71171aead"></a>

Sets the value of PlatformToken.

#### `public inline FORCEINLINE void `[`SetPlatformToken`](#structFRHAPI__PlatformEntitlementProcessRequest_1af9845e9b56a73dc35b311f6f70b9a97c)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af9845e9b56a73dc35b311f6f70b9a97c"></a>

Sets the value of PlatformToken using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1ace81db8e0a656da6a39ce409c71d4de3)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ace81db8e0a656da6a39ce409c71d4de3"></a>

Gets the value of PlatformId.

#### `public inline FORCEINLINE const FString & `[`GetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a0c85b40e8985c0dfbe35aabe96a8b7c6)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a0c85b40e8985c0dfbe35aabe96a8b7c6"></a>

Gets the value of PlatformId.

#### `public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1a0fd640089ee8ce4f62b8ca0252b6bdeb)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a0fd640089ee8ce4f62b8ca0252b6bdeb"></a>

Sets the value of PlatformId.

#### `public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformEntitlementProcessRequest_1af06afce59f9676d373b79bd2d5b80fe8)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af06afce59f9676d373b79bd2d5b80fe8"></a>

Sets the value of PlatformId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a642f6684ba282a133cfb8c55d0ea7455)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a642f6684ba282a133cfb8c55d0ea7455"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa876ecdae59410ef82719f0ada643dfa)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aa876ecdae59410ef82719f0ada643dfa"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a33d3091883c7c26ca0d8c14a2985178d)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a33d3091883c7c26ca0d8c14a2985178d"></a>

Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a884499e1ac0fef64103c3891b5edb1b5)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a884499e1ac0fef64103c3891b5edb1b5"></a>

Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2a9e82e585844a042fd779f36dc2efe8)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a2a9e82e585844a042fd779f36dc2efe8"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a148164fb1c43112f3b8052ddb78f7ff9)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a148164fb1c43112f3b8052ddb78f7ff9"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1aeaf4de3247b59744644967e25f14371f)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aeaf4de3247b59744644967e25f14371f"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1a63413f7a505720dc05f82637b9027ddb)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a63413f7a505720dc05f82637b9027ddb"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__PlatformEntitlementProcessRequest_1abd417c939ef64b1ab26305b96912842c)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1abd417c939ef64b1ab26305b96912842c"></a>

Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlatformEnvironmentToNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac3ba3beeb068dc87dc284abd3a72ff46)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac3ba3beeb068dc87dc284abd3a72ff46"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlatformEnvironmentNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9d9543dec47132a843ef520600699106)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9d9543dec47132a843ef520600699106"></a>

Checks whether PlatformEnvironment_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3ddac77d9202b93fa31a8712a62b6bd7)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3ddac77d9202b93fa31a8712a62b6bd7"></a>

Gets the value of PlatformRegion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2dd2fd1c37426beff1030dbfc43ce044)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a2dd2fd1c37426beff1030dbfc43ce044"></a>

Gets the value of PlatformRegion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlatformRegion & `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa07d5f93206f392157c608b8ca2c91f4)`(const ERHAPI_PlatformRegion & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aa07d5f93206f392157c608b8ca2c91f4"></a>

Gets the value of PlatformRegion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4e767e05e61331bc43ef2db4fc914db2)`(ERHAPI_PlatformRegion & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a4e767e05e61331bc43ef2db4fc914db2"></a>

Fills OutValue with the value of PlatformRegion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_PlatformRegion * `[`GetPlatformRegionOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a63a2005dada88fe4a6e566944b2fee6a)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a63a2005dada88fe4a6e566944b2fee6a"></a>

Returns a pointer to PlatformRegion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_PlatformRegion * `[`GetPlatformRegionOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8767a9174485acb840300c6593e48506)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8767a9174485acb840300c6593e48506"></a>

Returns a pointer to PlatformRegion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab45951e0ca9be5509784f77813988ab1)`(const ERHAPI_PlatformRegion & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab45951e0ca9be5509784f77813988ab1"></a>

Sets the value of PlatformRegion_Optional and also sets PlatformRegion_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a761dfcd268735f31be90cb4cd15b5a4f)`(ERHAPI_PlatformRegion && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a761dfcd268735f31be90cb4cd15b5a4f"></a>

Sets the value of PlatformRegion_Optional and also sets PlatformRegion_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformRegion`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9d5d46e5a022ede16b6731974ccd64a0)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9d5d46e5a022ede16b6731974ccd64a0"></a>

Clears the value of PlatformRegion_Optional and sets PlatformRegion_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a551c23be707ef4ee52da601e6db66e55)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a551c23be707ef4ee52da601e6db66e55"></a>

Gets the value of ClientType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8c54b03695651157104919a1c343d55e)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8c54b03695651157104919a1c343d55e"></a>

Gets the value of ClientType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_ClientType & `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a4dce7f37485bfe8223eb668d45814944)`(const ERHAPI_ClientType & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a4dce7f37485bfe8223eb668d45814944"></a>

Gets the value of ClientType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac8229fc2d9b9ed1d8197acdffd19d019)`(ERHAPI_ClientType & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac8229fc2d9b9ed1d8197acdffd19d019"></a>

Fills OutValue with the value of ClientType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_ClientType * `[`GetClientTypeOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5d2f1ce21d105455fb434b2dbc4cb9ac)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5d2f1ce21d105455fb434b2dbc4cb9ac"></a>

Returns a pointer to ClientType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_ClientType * `[`GetClientTypeOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3e711db3f0232577691869812d04e4a7)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3e711db3f0232577691869812d04e4a7"></a>

Returns a pointer to ClientType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab82af7ef31fea12baafaa9fa27334904)`(const ERHAPI_ClientType & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab82af7ef31fea12baafaa9fa27334904"></a>

Sets the value of ClientType_Optional and also sets ClientType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1afb84afc1a1dd748880810c868c5a5171)`(ERHAPI_ClientType && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1afb84afc1a1dd748880810c868c5a5171"></a>

Sets the value of ClientType_Optional and also sets ClientType_IsSet to true using move semantics.

#### `public inline void `[`ClearClientType`](#structFRHAPI__PlatformEntitlementProcessRequest_1a270d4606c85bbaad639211c471534d4d)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a270d4606c85bbaad639211c471534d4d"></a>

Clears the value of ClientType_Optional and sets ClientType_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a316512547e54d335a79a0a6b7b88e64f)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a316512547e54d335a79a0a6b7b88e64f"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa1df0606a6074d3118fa1675fee5c66c)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aa1df0606a6074d3118fa1675fee5c66c"></a>

Gets the value of Entitlements_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1ac0c73a2d8ce18c803327dbbb36c4e69a)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac0c73a2d8ce18c803327dbbb36c4e69a"></a>

Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a0f5952a93c8c57dd5d208a52c1cd996d)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a0f5952a93c8c57dd5d208a52c1cd996d"></a>

Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a098c13b14f58e487f879e8c1ee3b6810)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a098c13b14f58e487f879e8c1ee3b6810"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > * `[`GetEntitlementsOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a7fcb4aebe5c4095e692225526063978e)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a7fcb4aebe5c4095e692225526063978e"></a>

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1ecaafae650a895d9360831357b9946c)`(const TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1ecaafae650a895d9360831357b9946c"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a61c5d5cd50fb039ae45a91fc37cef095)`(TArray< `[`FRHAPI_PlatformEntitlement`](RHAPI_PlatformEntitlement.md#structFRHAPI__PlatformEntitlement)` > && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a61c5d5cd50fb039ae45a91fc37cef095"></a>

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitlements`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344"></a>

Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5b18ca3f9f455d5613275137de3dab09)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5b18ca3f9f455d5613275137de3dab09"></a>

Gets the value of CheckDurables_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a27c5288dd8961e1be06113f7a2136ac4)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a27c5288dd8961e1be06113f7a2136ac4"></a>

Gets the value of CheckDurables_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a8ac982fa2c58e27efadb389e5675bcf1)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8ac982fa2c58e27efadb389e5675bcf1"></a>

Gets the value of CheckDurables_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a25f6f40463ca39c647855e84f12d4d9b)`(bool & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a25f6f40463ca39c647855e84f12d4d9b"></a>

Fills OutValue with the value of CheckDurables_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCheckDurablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a5c3253d7c02e008bfce749f4aed49730)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5c3253d7c02e008bfce749f4aed49730"></a>

Returns a pointer to CheckDurables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCheckDurablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a581cd4f6cd438a0552433d301de9357b)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a581cd4f6cd438a0552433d301de9357b"></a>

Returns a pointer to CheckDurables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a07345e36bad01ed3587dd96e2c393657)`(const bool & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a07345e36bad01ed3587dd96e2c393657"></a>

Sets the value of CheckDurables_Optional and also sets CheckDurables_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1adcc062ed867f6611d8fe9cf75ad9328d)`(bool && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adcc062ed867f6611d8fe9cf75ad9328d"></a>

Sets the value of CheckDurables_Optional and also sets CheckDurables_IsSet to true using move semantics.

#### `public inline void `[`ClearCheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a2dc6ea605c6f4e1f3f9ee4f5b190ef23)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a2dc6ea605c6f4e1f3f9ee4f5b190ef23"></a>

Clears the value of CheckDurables_Optional and sets CheckDurables_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CheckDurables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a1f6c395e8e781421bc6806d8e7b47733)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1f6c395e8e781421bc6806d8e7b47733"></a>

Returns the default value of CheckDurables.

#### `public inline FORCEINLINE bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a98051289bdf2c09ba33ef8259b8fd935)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a98051289bdf2c09ba33ef8259b8fd935"></a>

Gets the value of CheckConsumables_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a9115437eefa15feffd07094aa5262ca5)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9115437eefa15feffd07094aa5262ca5"></a>

Gets the value of CheckConsumables_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a874d0d54b892cff811bf707af1efad71)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a874d0d54b892cff811bf707af1efad71"></a>

Gets the value of CheckConsumables_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3cdc2cc8768abddb40ffb13f8ae00d63)`(bool & OutValue) const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3cdc2cc8768abddb40ffb13f8ae00d63"></a>

Fills OutValue with the value of CheckConsumables_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCheckConsumablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1ab8cd555173e73bc96d521d3a4c2d578c)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab8cd555173e73bc96d521d3a4c2d578c"></a>

Returns a pointer to CheckConsumables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCheckConsumablesOrNull`](#structFRHAPI__PlatformEntitlementProcessRequest_1a3db214e3f34e84ebeed2dc59f51e487f)`() const` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a3db214e3f34e84ebeed2dc59f51e487f"></a>

Returns a pointer to CheckConsumables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1aa0502669e62dcd1034582b3e92cd68f5)`(const bool & NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aa0502669e62dcd1034582b3e92cd68f5"></a>

Sets the value of CheckConsumables_Optional and also sets CheckConsumables_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1ad2ff76da07b6cbc79a4159f8d481f3ee)`(bool && NewValue)` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ad2ff76da07b6cbc79a4159f8d481f3ee"></a>

Sets the value of CheckConsumables_Optional and also sets CheckConsumables_IsSet to true using move semantics.

#### `public inline void `[`ClearCheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a004e3e6247808c305a6a66a3b609ff1c)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a004e3e6247808c305a6a66a3b609ff1c"></a>

Clears the value of CheckConsumables_Optional and sets CheckConsumables_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CheckConsumables`](#structFRHAPI__PlatformEntitlementProcessRequest_1a97cf247a6a79d5cd7c0e31091b06e88c)`()` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a97cf247a6a79d5cd7c0e31091b06e88c"></a>

Returns the default value of CheckConsumables.

