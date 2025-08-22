---
title: RHAPI_EntitlementEvent
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EntitlementEvent`](#structFRHAPI__EntitlementEvent) | 

## struct `FRHAPI_EntitlementEvent` <a id="structFRHAPI__EntitlementEvent"></a>

```
struct FRHAPI_EntitlementEvent
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventId`](#structFRHAPI__EntitlementEvent_1a50b0008a25315847be0862b33a201872) | The unique identifier for the event.
`public ERHAPI_EntitlementActionType `[`ActionType`](#structFRHAPI__EntitlementEvent_1a3b069ba088a95a7e01b479842202e4f6) | 
`public ERHAPI_EntitlementType `[`EntitlementType_Optional`](#structFRHAPI__EntitlementEvent_1aa57e3d48b5e1ed89fe90c9dd4afd0d56) | 
`public bool `[`EntitlementType_IsSet`](#structFRHAPI__EntitlementEvent_1a4222c62208e233f156f1dc0424342644) | true if EntitlementType_Optional has been set to a value
`public bool `[`EntitlementType_IsNull`](#structFRHAPI__EntitlementEvent_1a91508ece72ba257a6f5bd66ad3202204) | true if EntitlementType_Optional has been explicitly set to null
`public ERHAPI_EntitlementEventStatus `[`Status`](#structFRHAPI__EntitlementEvent_1a62067f4d47fce1607e9952f8075657c5) | 
`public FGuid `[`PlayerUuid`](#structFRHAPI__EntitlementEvent_1a5e5b1c580c3e19b2a6047c20a9081e5f) | 
`public bool `[`PlayerUuid_IsNull`](#structFRHAPI__EntitlementEvent_1a22b0e2341b3638bf19dae30802192557) | true if PlayerUuid has been explicitly set to null
`public int32 `[`PlayerId_Optional`](#structFRHAPI__EntitlementEvent_1ab279e936992c73e8872300d987f60e75) | 
`public bool `[`PlayerId_IsSet`](#structFRHAPI__EntitlementEvent_1abab49be470cc6d29a36c31c32fe604a7) | true if PlayerId_Optional has been set to a value
`public bool `[`PlayerId_IsNull`](#structFRHAPI__EntitlementEvent_1a00c2b14d51a89039dca37c8bbf78492f) | true if PlayerId_Optional has been explicitly set to null
`public ERHAPI_InventoryPlatform `[`Platform`](#structFRHAPI__EntitlementEvent_1ade79510d45a6d43fefe574e7da9f35f5) | 
`public FString `[`PlatformUserId`](#structFRHAPI__EntitlementEvent_1a20cbd9e0d77ca45f3de1840aa522a3db) | The platform user ID for the event.
`public FString `[`Sku`](#structFRHAPI__EntitlementEvent_1a8b37fa2e9dc312607f5f4ad614e45086) | The SKU for the event.
`public int32 `[`Quantity`](#structFRHAPI__EntitlementEvent_1a4d01e5ec9a02d11b2924c6aec66f6b69) | The quantity for the event.
`public FString `[`PlatformTransactionId_Optional`](#structFRHAPI__EntitlementEvent_1afbb38f99c495ff143a16818225abc649) | 
`public bool `[`PlatformTransactionId_IsSet`](#structFRHAPI__EntitlementEvent_1aeb9f58a76b37632820e304c7b2a3ab87) | true if PlatformTransactionId_Optional has been set to a value
`public bool `[`PlatformTransactionId_IsNull`](#structFRHAPI__EntitlementEvent_1ac2b99a6c32405a39a0e850d4ec641607) | true if PlatformTransactionId_Optional has been explicitly set to null
`public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`PlatformData_Optional`](#structFRHAPI__EntitlementEvent_1a12c3d56e021a970ce24d27c319d5abc2) | 
`public bool `[`PlatformData_IsSet`](#structFRHAPI__EntitlementEvent_1a8ccb61b2119ab94dea8b1797afc8ceab) | true if PlatformData_Optional has been set to a value
`public bool `[`PlatformData_IsNull`](#structFRHAPI__EntitlementEvent_1a76ae8108c05620d0a049366b796b0211) | true if PlatformData_Optional has been explicitly set to null
`public FString `[`OrderId_Optional`](#structFRHAPI__EntitlementEvent_1a811c8aaf9f74dec92cd92ab01b95b4b9) | 
`public bool `[`OrderId_IsSet`](#structFRHAPI__EntitlementEvent_1acafb2cafddc76a89749f667e9a0e0cef) | true if OrderId_Optional has been set to a value
`public bool `[`OrderId_IsNull`](#structFRHAPI__EntitlementEvent_1a1a96dcb7348fff6fcee6f89284ed45e5) | true if OrderId_Optional has been explicitly set to null
`public int32 `[`LootId_Optional`](#structFRHAPI__EntitlementEvent_1ae8b454937c42d47109bb779a0d9dc6e3) | 
`public bool `[`LootId_IsSet`](#structFRHAPI__EntitlementEvent_1a8c8ac2bf6760d1d2688fb3691b905f8a) | true if LootId_Optional has been set to a value
`public bool `[`LootId_IsNull`](#structFRHAPI__EntitlementEvent_1acc6528a32028e5593cf09ec59f9ed2d7) | true if LootId_Optional has been explicitly set to null
`public FGuid `[`KeyClaimUuid_Optional`](#structFRHAPI__EntitlementEvent_1a3200bc8d1d1bb705ade94d9d9c37afa6) | 
`public bool `[`KeyClaimUuid_IsSet`](#structFRHAPI__EntitlementEvent_1a35d90febd4311f54398ec082ef2bfb8f) | true if KeyClaimUuid_Optional has been set to a value
`public bool `[`KeyClaimUuid_IsNull`](#structFRHAPI__EntitlementEvent_1a1d332bd321a8017faf4905dcedeb3307) | true if KeyClaimUuid_Optional has been explicitly set to null
`public FDateTime `[`Created`](#structFRHAPI__EntitlementEvent_1a8997413503230e1433fd1d3c3f406b35) | The timestamp for the event.
`public FDateTime `[`LastModified`](#structFRHAPI__EntitlementEvent_1a15cd3231a388e346c03bc3cdd78f8e0b) | The timestamp for the event.
`public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEvent_1aee9a2fa3337f1df01bcf5c99e2a03f6f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEvent_1a4fa42c95a837a10063eda49a27eee363)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1a45d9dd0927fb6bc31a53925af4fb4961)`()` | Gets the value of EventId.
`public inline FORCEINLINE const FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1a02fd843835249e0eb622efd099d6759d)`() const` | Gets the value of EventId.
`public inline FORCEINLINE void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1a4ae0c8a0a9bb0006df0a64620c8f5f92)`(const FString & NewValue)` | Sets the value of EventId.
`public inline FORCEINLINE void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ae417771f63f7c319c1f561aff9366bf7)`(FString && NewValue)` | Sets the value of EventId using move semantics.
`public inline FORCEINLINE ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1a091a72b941fb3ade193faaec6496d229)`()` | Gets the value of ActionType.
`public inline FORCEINLINE const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1a04b3b7bb631877601c071a905138bf88)`() const` | Gets the value of ActionType.
`public inline FORCEINLINE void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1a6efb1b6e588b443e6c01ce530e0cd77a)`(const ERHAPI_EntitlementActionType & NewValue)` | Sets the value of ActionType.
`public inline FORCEINLINE void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1aa98d244108e44a80424cc5734752b825)`(ERHAPI_EntitlementActionType && NewValue)` | Sets the value of ActionType using move semantics.
`public inline FORCEINLINE ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1ae9f250ddb213be2e08a102757c5d1d76)`()` | Gets the value of EntitlementType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a3db0d37f5d02ec2a568e7045a385e9b8)`() const` | Gets the value of EntitlementType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a153dfe0de15dd1ffaa86769d14b9d09e)`(const ERHAPI_EntitlementType & DefaultValue) const` | Gets the value of EntitlementType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a97f8143deaf1a2fcfdba8e54b82934e6)`(ERHAPI_EntitlementType & OutValue) const` | Fills OutValue with the value of EntitlementType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1a829017a6574d7c713f7f50ea6ac92405)`()` | Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1a557a162c9d4b2f67e8c74b67f8beec9d)`() const` | Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1aabbcd7d4d3dd083efb1a617c5481a97f)`(const ERHAPI_EntitlementType & NewValue)` | Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true.
`public inline FORCEINLINE void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a8c2d5cbd4c643fdd4841b0f6e7a2df2a)`(ERHAPI_EntitlementType && NewValue)` | Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true using move semantics.
`public inline void `[`ClearEntitlementType`](#structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63)`()` | Clears the value of EntitlementType_Optional and sets EntitlementType_IsSet to false.
`public inline FORCEINLINE void `[`SetEntitlementTypeToNull`](#structFRHAPI__EntitlementEvent_1a901e5d31129704026c2ccea4b58a28b1)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEntitlementTypeNull`](#structFRHAPI__EntitlementEvent_1a2e722d76a01a52f388d7da8769c19a28)`() const` | Checks whether EntitlementType_Optional is set to null.
`public inline FORCEINLINE ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1af18cb348db007985fa46c46c29c78762)`()` | Gets the value of Status.
`public inline FORCEINLINE const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1a3e3b4314da79cea910ba7a95fb90be1f)`() const` | Gets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1ae17c49b07cbb926425866b02b9f025b0)`(const ERHAPI_EntitlementEventStatus & NewValue)` | Sets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a7806ad3a145a3a711bae3048b8706b25)`(ERHAPI_EntitlementEventStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1abf556939a46546dd82e83951f81a0c0b)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a05eaba943f9187e129e6378f59468629)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1aada6629391a79b12919a8930b669e581)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1aba6244a7dd0b97f094b726f398444976)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE void `[`SetPlayerUuidToNull`](#structFRHAPI__EntitlementEvent_1ac2f77c65f8f0e7f8778771e54e032735)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerUuidNull`](#structFRHAPI__EntitlementEvent_1a01769aea362242c71e1c138e35e7c1b2)`() const` | Checks whether PlayerUuid is set to null.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a24e89600d376552370df9839dbb5974c)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a939af8926a11492e2f278012ca2b08b5)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a8fe084859fd69b0abed01034d2ab87fb)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1aa95f6128ef1acb77c53a6011fd264a79)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1acc274f977e66c78cd6f5e9ce19e2b881)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1a3a95551b0b30d179d28e953f6d7d8599)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a8aa9008529349b5338877ad9384c1316)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a69cfb779396d5d9b463392373cf60673)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__EntitlementEvent_1ae9ff693858aaf4f73c911fb795cd4590)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerIdToNull`](#structFRHAPI__EntitlementEvent_1ad08032f4cfae98c29cfc08b4ca0eea21)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerIdNull`](#structFRHAPI__EntitlementEvent_1a4e4d2b1c774b8b3116dcbda4a23193a2)`() const` | Checks whether PlayerId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a49592343bbc42ef1828b2790a81b4f1c)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a9376002f1813561f7c0e6361232729f2)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a1daaec3ca0afc9ade4c560df24603ecf)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a0d37409ddc711c00e3494e599bf909c3)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1a8ffd1503792e111ad8b0ba5ea810331a)`()` | Gets the value of PlatformUserId.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1a84cc370fac20b27a492a822b0830e6ab)`() const` | Gets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1ac242c97f69434a48dd56bd5e4c0a7a45)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1a342eddc1e26e28ff0a797b72fd94e589)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FORCEINLINE FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1a4787448c08a3ebe445222329d9478a5f)`()` | Gets the value of Sku.
`public inline FORCEINLINE const FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1a6391365546dd8d84c3be9c0423355af6)`() const` | Gets the value of Sku.
`public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__EntitlementEvent_1ac98b63a619f0117834bda14a98548c7d)`(const FString & NewValue)` | Sets the value of Sku.
`public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__EntitlementEvent_1a190e2225b735aa51c789a565ca435718)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1a230939fba95e9799ae954717d94547e5)`()` | Gets the value of Quantity.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1af08b7a48ffd0eeb9337b12be876a3058)`() const` | Gets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1aaec6a328f9b68a390dfeba6ab4556b00)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1aab23e4506f48e044f4ce98f58c442c1f)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__EntitlementEvent_1abc61818a983bb2f8471940b8e0cab984)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a0ebfff4b0fc29ecf03bd8d4bf71df693)`()` | Gets the value of PlatformTransactionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1af5787b16aa9ca9f444b2edc559f4119e)`() const` | Gets the value of PlatformTransactionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a153fbf492555b0df52b7ad49ace3f177)`(const FString & DefaultValue) const` | Gets the value of PlatformTransactionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a584e955b3e25d3e0f546ba2ad1701664)`(FString & OutValue) const` | Fills OutValue with the value of PlatformTransactionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1ab4ce5062e4aaa9a4625ce24754b63f1e)`()` | Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1a48af7a48baf7c7e1f712288ac5cda9e4)`() const` | Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1ab1fe43fad695144305d597a05b89ed04)`(const FString & NewValue)` | Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1adafdd4ac19447b540612cb15c8b2ad6d)`(FString && NewValue)` | Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6)`()` | Clears the value of PlatformTransactionId_Optional and sets PlatformTransactionId_IsSet to false.
`public inline FORCEINLINE void `[`SetPlatformTransactionIdToNull`](#structFRHAPI__EntitlementEvent_1afb9facbfd00ab8675a4a52da9ef483ea)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlatformTransactionIdNull`](#structFRHAPI__EntitlementEvent_1a8988e4c7f2797540c48eced280808da1)`() const` | Checks whether PlatformTransactionId_Optional is set to null.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a82d0ca85bbbb78e665066b444c22111c)`()` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a5c93cb9866d321f3e8ae389e5a0c09bd)`() const` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a34348cd9706866b8e86e5e0c725a07c0)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` | Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a1cb8dacfd0fcba0a96fc185326bb98cf)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` | Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a7e247c9133208df217c9f29cae8bdbcb)`()` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a1766cf425826be4341e761ea46eec22b)`() const` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1aa99bdeda27274fc997d74644df19457b)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1ab630765887ccb27e03bfd6359b114199)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.
`public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174)`()` | Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.
`public inline FORCEINLINE void `[`SetPlatformDataToNull`](#structFRHAPI__EntitlementEvent_1a132363a1f854e50e4177e63a36efc705)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlatformDataNull`](#structFRHAPI__EntitlementEvent_1a3a0fbe72fa1c211976116183e001af61)`() const` | Checks whether PlatformData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a267b0a531642abb13c162cdc4bb4bb71)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1aef217349fdeae0c671b3417f82a2d9a0)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1ab71a900b3d6e37ed8fed9b2a564dbd83)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1acd45729ee135f953716f7e56d9a807b2)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1af147db9fd72fd2a4b3b8d379ae9a04d4)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a61747a5e4e13140637588e309a66ace4)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a20a274f9eb5260eafb395388a4f828fe)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a14d16bed6e6060ef1e5aa7e415d336bd)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__EntitlementEvent_1a918a12a169b7fa51cfc9356b62f0dd21)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__EntitlementEvent_1ae5dc7281fb61daf57ee3b252a9018aaa)`() const` | Checks whether OrderId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a6d781c2af6c8ef22112ea349ec588ed2)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a7215104527350917e50fc1a42d002c71)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a898f1287eff7d42ca5fc552be8b1920b)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__EntitlementEvent_1aa70f2cd4ef4ed603dbbbe07f3cb0c663)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1a34243e3cce96ef6c0bbfc0d414b5ab5f)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1ac94d0a1b04c73ec028a194e707c41be6)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1af1b6075ab6cd0f79356e4205ddf2a026)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1a8c8e39da000737da6363f3e8ddac1004)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__EntitlementEvent_1aad2ef561dc95907ded060ce8281911ff)`()` | Returns the default value of LootId.
`public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__EntitlementEvent_1a077407fa803ba51d22523aa7a4126489)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__EntitlementEvent_1a91685fd8189eebb5fadeaffab8bbb3b8)`() const` | Checks whether LootId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a653ee34977867961f4487116f67d0267)`()` | Gets the value of KeyClaimUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a738a6b865d321f9223a14aab16e85931)`() const` | Gets the value of KeyClaimUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a038e40b888588916d48d8cdb3b25a572)`(const FGuid & DefaultValue) const` | Gets the value of KeyClaimUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1affd4bfe1e65fb03d40c4200b0a1701eb)`(FGuid & OutValue) const` | Fills OutValue with the value of KeyClaimUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1aeddfb83fbe960de66a9d8bb65e27faeb)`()` | Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1ae28146f195e5566177cc55e5a703669a)`() const` | Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a3f2965d90df3eee5bfe5510dd7b72055)`(const FGuid & NewValue)` | Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a8dc93ae93cc7c581207b6640d466941c)`(FGuid && NewValue)` | Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true using move semantics.
`public inline void `[`ClearKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631)`()` | Clears the value of KeyClaimUuid_Optional and sets KeyClaimUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetKeyClaimUuidToNull`](#structFRHAPI__EntitlementEvent_1a1411dbe0a0536f088069c06838fb8b20)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsKeyClaimUuidNull`](#structFRHAPI__EntitlementEvent_1a62f6facec164143bc70b7599b02e50ba)`() const` | Checks whether KeyClaimUuid_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1aeb2f68f986f37143c5f263826e400b25)`()` | Gets the value of Created.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1a7299ce99d2a80e66b2c8433f10e7374b)`() const` | Gets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1a7c275dd600baa46f421ffc5d8e6634c2)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1a768ce50a3266be237628dde9a263bad8)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a71801653df97dde014887aeef1c77270)`()` | Gets the value of LastModified.
`public inline FORCEINLINE const FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a56aace2f9dccdf67747184985a9d9317)`() const` | Gets the value of LastModified.
`public inline FORCEINLINE void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1a2b3873c34ef93570081b0769ed92a68d)`(const FDateTime & NewValue)` | Sets the value of LastModified.
`public inline FORCEINLINE void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1a9679b674b6ec82231bc108bdff4535b7)`(FDateTime && NewValue)` | Sets the value of LastModified using move semantics.

### Members

#### `public FString `[`EventId`](#structFRHAPI__EntitlementEvent_1a50b0008a25315847be0862b33a201872) <a id="structFRHAPI__EntitlementEvent_1a50b0008a25315847be0862b33a201872"></a>

The unique identifier for the event.

#### `public ERHAPI_EntitlementActionType `[`ActionType`](#structFRHAPI__EntitlementEvent_1a3b069ba088a95a7e01b479842202e4f6) <a id="structFRHAPI__EntitlementEvent_1a3b069ba088a95a7e01b479842202e4f6"></a>

#### `public ERHAPI_EntitlementType `[`EntitlementType_Optional`](#structFRHAPI__EntitlementEvent_1aa57e3d48b5e1ed89fe90c9dd4afd0d56) <a id="structFRHAPI__EntitlementEvent_1aa57e3d48b5e1ed89fe90c9dd4afd0d56"></a>

#### `public bool `[`EntitlementType_IsSet`](#structFRHAPI__EntitlementEvent_1a4222c62208e233f156f1dc0424342644) <a id="structFRHAPI__EntitlementEvent_1a4222c62208e233f156f1dc0424342644"></a>

true if EntitlementType_Optional has been set to a value

#### `public bool `[`EntitlementType_IsNull`](#structFRHAPI__EntitlementEvent_1a91508ece72ba257a6f5bd66ad3202204) <a id="structFRHAPI__EntitlementEvent_1a91508ece72ba257a6f5bd66ad3202204"></a>

true if EntitlementType_Optional has been explicitly set to null

#### `public ERHAPI_EntitlementEventStatus `[`Status`](#structFRHAPI__EntitlementEvent_1a62067f4d47fce1607e9952f8075657c5) <a id="structFRHAPI__EntitlementEvent_1a62067f4d47fce1607e9952f8075657c5"></a>

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__EntitlementEvent_1a5e5b1c580c3e19b2a6047c20a9081e5f) <a id="structFRHAPI__EntitlementEvent_1a5e5b1c580c3e19b2a6047c20a9081e5f"></a>

#### `public bool `[`PlayerUuid_IsNull`](#structFRHAPI__EntitlementEvent_1a22b0e2341b3638bf19dae30802192557) <a id="structFRHAPI__EntitlementEvent_1a22b0e2341b3638bf19dae30802192557"></a>

true if PlayerUuid has been explicitly set to null

#### `public int32 `[`PlayerId_Optional`](#structFRHAPI__EntitlementEvent_1ab279e936992c73e8872300d987f60e75) <a id="structFRHAPI__EntitlementEvent_1ab279e936992c73e8872300d987f60e75"></a>

#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__EntitlementEvent_1abab49be470cc6d29a36c31c32fe604a7) <a id="structFRHAPI__EntitlementEvent_1abab49be470cc6d29a36c31c32fe604a7"></a>

true if PlayerId_Optional has been set to a value

#### `public bool `[`PlayerId_IsNull`](#structFRHAPI__EntitlementEvent_1a00c2b14d51a89039dca37c8bbf78492f) <a id="structFRHAPI__EntitlementEvent_1a00c2b14d51a89039dca37c8bbf78492f"></a>

true if PlayerId_Optional has been explicitly set to null

#### `public ERHAPI_InventoryPlatform `[`Platform`](#structFRHAPI__EntitlementEvent_1ade79510d45a6d43fefe574e7da9f35f5) <a id="structFRHAPI__EntitlementEvent_1ade79510d45a6d43fefe574e7da9f35f5"></a>

#### `public FString `[`PlatformUserId`](#structFRHAPI__EntitlementEvent_1a20cbd9e0d77ca45f3de1840aa522a3db) <a id="structFRHAPI__EntitlementEvent_1a20cbd9e0d77ca45f3de1840aa522a3db"></a>

The platform user ID for the event.

#### `public FString `[`Sku`](#structFRHAPI__EntitlementEvent_1a8b37fa2e9dc312607f5f4ad614e45086) <a id="structFRHAPI__EntitlementEvent_1a8b37fa2e9dc312607f5f4ad614e45086"></a>

The SKU for the event.

#### `public int32 `[`Quantity`](#structFRHAPI__EntitlementEvent_1a4d01e5ec9a02d11b2924c6aec66f6b69) <a id="structFRHAPI__EntitlementEvent_1a4d01e5ec9a02d11b2924c6aec66f6b69"></a>

The quantity for the event.

#### `public FString `[`PlatformTransactionId_Optional`](#structFRHAPI__EntitlementEvent_1afbb38f99c495ff143a16818225abc649) <a id="structFRHAPI__EntitlementEvent_1afbb38f99c495ff143a16818225abc649"></a>

#### `public bool `[`PlatformTransactionId_IsSet`](#structFRHAPI__EntitlementEvent_1aeb9f58a76b37632820e304c7b2a3ab87) <a id="structFRHAPI__EntitlementEvent_1aeb9f58a76b37632820e304c7b2a3ab87"></a>

true if PlatformTransactionId_Optional has been set to a value

#### `public bool `[`PlatformTransactionId_IsNull`](#structFRHAPI__EntitlementEvent_1ac2b99a6c32405a39a0e850d4ec641607) <a id="structFRHAPI__EntitlementEvent_1ac2b99a6c32405a39a0e850d4ec641607"></a>

true if PlatformTransactionId_Optional has been explicitly set to null

#### `public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`PlatformData_Optional`](#structFRHAPI__EntitlementEvent_1a12c3d56e021a970ce24d27c319d5abc2) <a id="structFRHAPI__EntitlementEvent_1a12c3d56e021a970ce24d27c319d5abc2"></a>

#### `public bool `[`PlatformData_IsSet`](#structFRHAPI__EntitlementEvent_1a8ccb61b2119ab94dea8b1797afc8ceab) <a id="structFRHAPI__EntitlementEvent_1a8ccb61b2119ab94dea8b1797afc8ceab"></a>

true if PlatformData_Optional has been set to a value

#### `public bool `[`PlatformData_IsNull`](#structFRHAPI__EntitlementEvent_1a76ae8108c05620d0a049366b796b0211) <a id="structFRHAPI__EntitlementEvent_1a76ae8108c05620d0a049366b796b0211"></a>

true if PlatformData_Optional has been explicitly set to null

#### `public FString `[`OrderId_Optional`](#structFRHAPI__EntitlementEvent_1a811c8aaf9f74dec92cd92ab01b95b4b9) <a id="structFRHAPI__EntitlementEvent_1a811c8aaf9f74dec92cd92ab01b95b4b9"></a>

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__EntitlementEvent_1acafb2cafddc76a89749f667e9a0e0cef) <a id="structFRHAPI__EntitlementEvent_1acafb2cafddc76a89749f667e9a0e0cef"></a>

true if OrderId_Optional has been set to a value

#### `public bool `[`OrderId_IsNull`](#structFRHAPI__EntitlementEvent_1a1a96dcb7348fff6fcee6f89284ed45e5) <a id="structFRHAPI__EntitlementEvent_1a1a96dcb7348fff6fcee6f89284ed45e5"></a>

true if OrderId_Optional has been explicitly set to null

#### `public int32 `[`LootId_Optional`](#structFRHAPI__EntitlementEvent_1ae8b454937c42d47109bb779a0d9dc6e3) <a id="structFRHAPI__EntitlementEvent_1ae8b454937c42d47109bb779a0d9dc6e3"></a>

#### `public bool `[`LootId_IsSet`](#structFRHAPI__EntitlementEvent_1a8c8ac2bf6760d1d2688fb3691b905f8a) <a id="structFRHAPI__EntitlementEvent_1a8c8ac2bf6760d1d2688fb3691b905f8a"></a>

true if LootId_Optional has been set to a value

#### `public bool `[`LootId_IsNull`](#structFRHAPI__EntitlementEvent_1acc6528a32028e5593cf09ec59f9ed2d7) <a id="structFRHAPI__EntitlementEvent_1acc6528a32028e5593cf09ec59f9ed2d7"></a>

true if LootId_Optional has been explicitly set to null

#### `public FGuid `[`KeyClaimUuid_Optional`](#structFRHAPI__EntitlementEvent_1a3200bc8d1d1bb705ade94d9d9c37afa6) <a id="structFRHAPI__EntitlementEvent_1a3200bc8d1d1bb705ade94d9d9c37afa6"></a>

#### `public bool `[`KeyClaimUuid_IsSet`](#structFRHAPI__EntitlementEvent_1a35d90febd4311f54398ec082ef2bfb8f) <a id="structFRHAPI__EntitlementEvent_1a35d90febd4311f54398ec082ef2bfb8f"></a>

true if KeyClaimUuid_Optional has been set to a value

#### `public bool `[`KeyClaimUuid_IsNull`](#structFRHAPI__EntitlementEvent_1a1d332bd321a8017faf4905dcedeb3307) <a id="structFRHAPI__EntitlementEvent_1a1d332bd321a8017faf4905dcedeb3307"></a>

true if KeyClaimUuid_Optional has been explicitly set to null

#### `public FDateTime `[`Created`](#structFRHAPI__EntitlementEvent_1a8997413503230e1433fd1d3c3f406b35) <a id="structFRHAPI__EntitlementEvent_1a8997413503230e1433fd1d3c3f406b35"></a>

The timestamp for the event.

#### `public FDateTime `[`LastModified`](#structFRHAPI__EntitlementEvent_1a15cd3231a388e346c03bc3cdd78f8e0b) <a id="structFRHAPI__EntitlementEvent_1a15cd3231a388e346c03bc3cdd78f8e0b"></a>

The timestamp for the event.

#### `public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEvent_1aee9a2fa3337f1df01bcf5c99e2a03f6f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EntitlementEvent_1aee9a2fa3337f1df01bcf5c99e2a03f6f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEvent_1a4fa42c95a837a10063eda49a27eee363)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EntitlementEvent_1a4fa42c95a837a10063eda49a27eee363"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1a45d9dd0927fb6bc31a53925af4fb4961)`()` <a id="structFRHAPI__EntitlementEvent_1a45d9dd0927fb6bc31a53925af4fb4961"></a>

Gets the value of EventId.

#### `public inline FORCEINLINE const FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1a02fd843835249e0eb622efd099d6759d)`() const` <a id="structFRHAPI__EntitlementEvent_1a02fd843835249e0eb622efd099d6759d"></a>

Gets the value of EventId.

#### `public inline FORCEINLINE void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1a4ae0c8a0a9bb0006df0a64620c8f5f92)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a4ae0c8a0a9bb0006df0a64620c8f5f92"></a>

Sets the value of EventId.

#### `public inline FORCEINLINE void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ae417771f63f7c319c1f561aff9366bf7)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1ae417771f63f7c319c1f561aff9366bf7"></a>

Sets the value of EventId using move semantics.

#### `public inline FORCEINLINE ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1a091a72b941fb3ade193faaec6496d229)`()` <a id="structFRHAPI__EntitlementEvent_1a091a72b941fb3ade193faaec6496d229"></a>

Gets the value of ActionType.

#### `public inline FORCEINLINE const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1a04b3b7bb631877601c071a905138bf88)`() const` <a id="structFRHAPI__EntitlementEvent_1a04b3b7bb631877601c071a905138bf88"></a>

Gets the value of ActionType.

#### `public inline FORCEINLINE void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1a6efb1b6e588b443e6c01ce530e0cd77a)`(const ERHAPI_EntitlementActionType & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a6efb1b6e588b443e6c01ce530e0cd77a"></a>

Sets the value of ActionType.

#### `public inline FORCEINLINE void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1aa98d244108e44a80424cc5734752b825)`(ERHAPI_EntitlementActionType && NewValue)` <a id="structFRHAPI__EntitlementEvent_1aa98d244108e44a80424cc5734752b825"></a>

Sets the value of ActionType using move semantics.

#### `public inline FORCEINLINE ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1ae9f250ddb213be2e08a102757c5d1d76)`()` <a id="structFRHAPI__EntitlementEvent_1ae9f250ddb213be2e08a102757c5d1d76"></a>

Gets the value of EntitlementType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a3db0d37f5d02ec2a568e7045a385e9b8)`() const` <a id="structFRHAPI__EntitlementEvent_1a3db0d37f5d02ec2a568e7045a385e9b8"></a>

Gets the value of EntitlementType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a153dfe0de15dd1ffaa86769d14b9d09e)`(const ERHAPI_EntitlementType & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a153dfe0de15dd1ffaa86769d14b9d09e"></a>

Gets the value of EntitlementType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a97f8143deaf1a2fcfdba8e54b82934e6)`(ERHAPI_EntitlementType & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a97f8143deaf1a2fcfdba8e54b82934e6"></a>

Fills OutValue with the value of EntitlementType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1a829017a6574d7c713f7f50ea6ac92405)`()` <a id="structFRHAPI__EntitlementEvent_1a829017a6574d7c713f7f50ea6ac92405"></a>

Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1a557a162c9d4b2f67e8c74b67f8beec9d)`() const` <a id="structFRHAPI__EntitlementEvent_1a557a162c9d4b2f67e8c74b67f8beec9d"></a>

Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1aabbcd7d4d3dd083efb1a617c5481a97f)`(const ERHAPI_EntitlementType & NewValue)` <a id="structFRHAPI__EntitlementEvent_1aabbcd7d4d3dd083efb1a617c5481a97f"></a>

Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a8c2d5cbd4c643fdd4841b0f6e7a2df2a)`(ERHAPI_EntitlementType && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a8c2d5cbd4c643fdd4841b0f6e7a2df2a"></a>

Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitlementType`](#structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63)`()` <a id="structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63"></a>

Clears the value of EntitlementType_Optional and sets EntitlementType_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEntitlementTypeToNull`](#structFRHAPI__EntitlementEvent_1a901e5d31129704026c2ccea4b58a28b1)`()` <a id="structFRHAPI__EntitlementEvent_1a901e5d31129704026c2ccea4b58a28b1"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEntitlementTypeNull`](#structFRHAPI__EntitlementEvent_1a2e722d76a01a52f388d7da8769c19a28)`() const` <a id="structFRHAPI__EntitlementEvent_1a2e722d76a01a52f388d7da8769c19a28"></a>

Checks whether EntitlementType_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1af18cb348db007985fa46c46c29c78762)`()` <a id="structFRHAPI__EntitlementEvent_1af18cb348db007985fa46c46c29c78762"></a>

Gets the value of Status.

#### `public inline FORCEINLINE const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1a3e3b4314da79cea910ba7a95fb90be1f)`() const` <a id="structFRHAPI__EntitlementEvent_1a3e3b4314da79cea910ba7a95fb90be1f"></a>

Gets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1ae17c49b07cbb926425866b02b9f025b0)`(const ERHAPI_EntitlementEventStatus & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ae17c49b07cbb926425866b02b9f025b0"></a>

Sets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a7806ad3a145a3a711bae3048b8706b25)`(ERHAPI_EntitlementEventStatus && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a7806ad3a145a3a711bae3048b8706b25"></a>

Sets the value of Status using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1abf556939a46546dd82e83951f81a0c0b)`()` <a id="structFRHAPI__EntitlementEvent_1abf556939a46546dd82e83951f81a0c0b"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a05eaba943f9187e129e6378f59468629)`() const` <a id="structFRHAPI__EntitlementEvent_1a05eaba943f9187e129e6378f59468629"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1aada6629391a79b12919a8930b669e581)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEvent_1aada6629391a79b12919a8930b669e581"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1aba6244a7dd0b97f094b726f398444976)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEvent_1aba6244a7dd0b97f094b726f398444976"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE void `[`SetPlayerUuidToNull`](#structFRHAPI__EntitlementEvent_1ac2f77c65f8f0e7f8778771e54e032735)`()` <a id="structFRHAPI__EntitlementEvent_1ac2f77c65f8f0e7f8778771e54e032735"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerUuidNull`](#structFRHAPI__EntitlementEvent_1a01769aea362242c71e1c138e35e7c1b2)`() const` <a id="structFRHAPI__EntitlementEvent_1a01769aea362242c71e1c138e35e7c1b2"></a>

Checks whether PlayerUuid is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a24e89600d376552370df9839dbb5974c)`()` <a id="structFRHAPI__EntitlementEvent_1a24e89600d376552370df9839dbb5974c"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a939af8926a11492e2f278012ca2b08b5)`() const` <a id="structFRHAPI__EntitlementEvent_1a939af8926a11492e2f278012ca2b08b5"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a8fe084859fd69b0abed01034d2ab87fb)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a8fe084859fd69b0abed01034d2ab87fb"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1aa95f6128ef1acb77c53a6011fd264a79)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1aa95f6128ef1acb77c53a6011fd264a79"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1acc274f977e66c78cd6f5e9ce19e2b881)`()` <a id="structFRHAPI__EntitlementEvent_1acc274f977e66c78cd6f5e9ce19e2b881"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1a3a95551b0b30d179d28e953f6d7d8599)`() const` <a id="structFRHAPI__EntitlementEvent_1a3a95551b0b30d179d28e953f6d7d8599"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a8aa9008529349b5338877ad9384c1316)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a8aa9008529349b5338877ad9384c1316"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a69cfb779396d5d9b463392373cf60673)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a69cfb779396d5d9b463392373cf60673"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4)`()` <a id="structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__EntitlementEvent_1ae9ff693858aaf4f73c911fb795cd4590)`()` <a id="structFRHAPI__EntitlementEvent_1ae9ff693858aaf4f73c911fb795cd4590"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerIdToNull`](#structFRHAPI__EntitlementEvent_1ad08032f4cfae98c29cfc08b4ca0eea21)`()` <a id="structFRHAPI__EntitlementEvent_1ad08032f4cfae98c29cfc08b4ca0eea21"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerIdNull`](#structFRHAPI__EntitlementEvent_1a4e4d2b1c774b8b3116dcbda4a23193a2)`() const` <a id="structFRHAPI__EntitlementEvent_1a4e4d2b1c774b8b3116dcbda4a23193a2"></a>

Checks whether PlayerId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a49592343bbc42ef1828b2790a81b4f1c)`()` <a id="structFRHAPI__EntitlementEvent_1a49592343bbc42ef1828b2790a81b4f1c"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a9376002f1813561f7c0e6361232729f2)`() const` <a id="structFRHAPI__EntitlementEvent_1a9376002f1813561f7c0e6361232729f2"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a1daaec3ca0afc9ade4c560df24603ecf)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a1daaec3ca0afc9ade4c560df24603ecf"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a0d37409ddc711c00e3494e599bf909c3)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a0d37409ddc711c00e3494e599bf909c3"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1a8ffd1503792e111ad8b0ba5ea810331a)`()` <a id="structFRHAPI__EntitlementEvent_1a8ffd1503792e111ad8b0ba5ea810331a"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1a84cc370fac20b27a492a822b0830e6ab)`() const` <a id="structFRHAPI__EntitlementEvent_1a84cc370fac20b27a492a822b0830e6ab"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1ac242c97f69434a48dd56bd5e4c0a7a45)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ac242c97f69434a48dd56bd5e4c0a7a45"></a>

Sets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1a342eddc1e26e28ff0a797b72fd94e589)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a342eddc1e26e28ff0a797b72fd94e589"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1a4787448c08a3ebe445222329d9478a5f)`()` <a id="structFRHAPI__EntitlementEvent_1a4787448c08a3ebe445222329d9478a5f"></a>

Gets the value of Sku.

#### `public inline FORCEINLINE const FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1a6391365546dd8d84c3be9c0423355af6)`() const` <a id="structFRHAPI__EntitlementEvent_1a6391365546dd8d84c3be9c0423355af6"></a>

Gets the value of Sku.

#### `public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__EntitlementEvent_1ac98b63a619f0117834bda14a98548c7d)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ac98b63a619f0117834bda14a98548c7d"></a>

Sets the value of Sku.

#### `public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__EntitlementEvent_1a190e2225b735aa51c789a565ca435718)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a190e2225b735aa51c789a565ca435718"></a>

Sets the value of Sku using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1a230939fba95e9799ae954717d94547e5)`()` <a id="structFRHAPI__EntitlementEvent_1a230939fba95e9799ae954717d94547e5"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1af08b7a48ffd0eeb9337b12be876a3058)`() const` <a id="structFRHAPI__EntitlementEvent_1af08b7a48ffd0eeb9337b12be876a3058"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1aaec6a328f9b68a390dfeba6ab4556b00)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1aaec6a328f9b68a390dfeba6ab4556b00"></a>

Sets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1aab23e4506f48e044f4ce98f58c442c1f)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1aab23e4506f48e044f4ce98f58c442c1f"></a>

Sets the value of Quantity using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__EntitlementEvent_1abc61818a983bb2f8471940b8e0cab984)`()` <a id="structFRHAPI__EntitlementEvent_1abc61818a983bb2f8471940b8e0cab984"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a0ebfff4b0fc29ecf03bd8d4bf71df693)`()` <a id="structFRHAPI__EntitlementEvent_1a0ebfff4b0fc29ecf03bd8d4bf71df693"></a>

Gets the value of PlatformTransactionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1af5787b16aa9ca9f444b2edc559f4119e)`() const` <a id="structFRHAPI__EntitlementEvent_1af5787b16aa9ca9f444b2edc559f4119e"></a>

Gets the value of PlatformTransactionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a153fbf492555b0df52b7ad49ace3f177)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a153fbf492555b0df52b7ad49ace3f177"></a>

Gets the value of PlatformTransactionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a584e955b3e25d3e0f546ba2ad1701664)`(FString & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a584e955b3e25d3e0f546ba2ad1701664"></a>

Fills OutValue with the value of PlatformTransactionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1ab4ce5062e4aaa9a4625ce24754b63f1e)`()` <a id="structFRHAPI__EntitlementEvent_1ab4ce5062e4aaa9a4625ce24754b63f1e"></a>

Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1a48af7a48baf7c7e1f712288ac5cda9e4)`() const` <a id="structFRHAPI__EntitlementEvent_1a48af7a48baf7c7e1f712288ac5cda9e4"></a>

Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1ab1fe43fad695144305d597a05b89ed04)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab1fe43fad695144305d597a05b89ed04"></a>

Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1adafdd4ac19447b540612cb15c8b2ad6d)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1adafdd4ac19447b540612cb15c8b2ad6d"></a>

Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6)`()` <a id="structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6"></a>

Clears the value of PlatformTransactionId_Optional and sets PlatformTransactionId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlatformTransactionIdToNull`](#structFRHAPI__EntitlementEvent_1afb9facbfd00ab8675a4a52da9ef483ea)`()` <a id="structFRHAPI__EntitlementEvent_1afb9facbfd00ab8675a4a52da9ef483ea"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlatformTransactionIdNull`](#structFRHAPI__EntitlementEvent_1a8988e4c7f2797540c48eced280808da1)`() const` <a id="structFRHAPI__EntitlementEvent_1a8988e4c7f2797540c48eced280808da1"></a>

Checks whether PlatformTransactionId_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a82d0ca85bbbb78e665066b444c22111c)`()` <a id="structFRHAPI__EntitlementEvent_1a82d0ca85bbbb78e665066b444c22111c"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a5c93cb9866d321f3e8ae389e5a0c09bd)`() const` <a id="structFRHAPI__EntitlementEvent_1a5c93cb9866d321f3e8ae389e5a0c09bd"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a34348cd9706866b8e86e5e0c725a07c0)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a34348cd9706866b8e86e5e0c725a07c0"></a>

Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a1cb8dacfd0fcba0a96fc185326bb98cf)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a1cb8dacfd0fcba0a96fc185326bb98cf"></a>

Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a7e247c9133208df217c9f29cae8bdbcb)`()` <a id="structFRHAPI__EntitlementEvent_1a7e247c9133208df217c9f29cae8bdbcb"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a1766cf425826be4341e761ea46eec22b)`() const` <a id="structFRHAPI__EntitlementEvent_1a1766cf425826be4341e761ea46eec22b"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1aa99bdeda27274fc997d74644df19457b)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__EntitlementEvent_1aa99bdeda27274fc997d74644df19457b"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1ab630765887ccb27e03bfd6359b114199)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab630765887ccb27e03bfd6359b114199"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174)`()` <a id="structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174"></a>

Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlatformDataToNull`](#structFRHAPI__EntitlementEvent_1a132363a1f854e50e4177e63a36efc705)`()` <a id="structFRHAPI__EntitlementEvent_1a132363a1f854e50e4177e63a36efc705"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlatformDataNull`](#structFRHAPI__EntitlementEvent_1a3a0fbe72fa1c211976116183e001af61)`() const` <a id="structFRHAPI__EntitlementEvent_1a3a0fbe72fa1c211976116183e001af61"></a>

Checks whether PlatformData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a267b0a531642abb13c162cdc4bb4bb71)`()` <a id="structFRHAPI__EntitlementEvent_1a267b0a531642abb13c162cdc4bb4bb71"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1aef217349fdeae0c671b3417f82a2d9a0)`() const` <a id="structFRHAPI__EntitlementEvent_1aef217349fdeae0c671b3417f82a2d9a0"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1ab71a900b3d6e37ed8fed9b2a564dbd83)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1ab71a900b3d6e37ed8fed9b2a564dbd83"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1acd45729ee135f953716f7e56d9a807b2)`(FString & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1acd45729ee135f953716f7e56d9a807b2"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1af147db9fd72fd2a4b3b8d379ae9a04d4)`()` <a id="structFRHAPI__EntitlementEvent_1af147db9fd72fd2a4b3b8d379ae9a04d4"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a61747a5e4e13140637588e309a66ace4)`() const` <a id="structFRHAPI__EntitlementEvent_1a61747a5e4e13140637588e309a66ace4"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a20a274f9eb5260eafb395388a4f828fe)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a20a274f9eb5260eafb395388a4f828fe"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a14d16bed6e6060ef1e5aa7e415d336bd)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a14d16bed6e6060ef1e5aa7e415d336bd"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d)`()` <a id="structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__EntitlementEvent_1a918a12a169b7fa51cfc9356b62f0dd21)`()` <a id="structFRHAPI__EntitlementEvent_1a918a12a169b7fa51cfc9356b62f0dd21"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__EntitlementEvent_1ae5dc7281fb61daf57ee3b252a9018aaa)`() const` <a id="structFRHAPI__EntitlementEvent_1ae5dc7281fb61daf57ee3b252a9018aaa"></a>

Checks whether OrderId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a6d781c2af6c8ef22112ea349ec588ed2)`()` <a id="structFRHAPI__EntitlementEvent_1a6d781c2af6c8ef22112ea349ec588ed2"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a7215104527350917e50fc1a42d002c71)`() const` <a id="structFRHAPI__EntitlementEvent_1a7215104527350917e50fc1a42d002c71"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a898f1287eff7d42ca5fc552be8b1920b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a898f1287eff7d42ca5fc552be8b1920b"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__EntitlementEvent_1aa70f2cd4ef4ed603dbbbe07f3cb0c663)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1aa70f2cd4ef4ed603dbbbe07f3cb0c663"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1a34243e3cce96ef6c0bbfc0d414b5ab5f)`()` <a id="structFRHAPI__EntitlementEvent_1a34243e3cce96ef6c0bbfc0d414b5ab5f"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1ac94d0a1b04c73ec028a194e707c41be6)`() const` <a id="structFRHAPI__EntitlementEvent_1ac94d0a1b04c73ec028a194e707c41be6"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1af1b6075ab6cd0f79356e4205ddf2a026)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1af1b6075ab6cd0f79356e4205ddf2a026"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1a8c8e39da000737da6363f3e8ddac1004)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a8c8e39da000737da6363f3e8ddac1004"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258)`()` <a id="structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__EntitlementEvent_1aad2ef561dc95907ded060ce8281911ff)`()` <a id="structFRHAPI__EntitlementEvent_1aad2ef561dc95907ded060ce8281911ff"></a>

Returns the default value of LootId.

#### `public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__EntitlementEvent_1a077407fa803ba51d22523aa7a4126489)`()` <a id="structFRHAPI__EntitlementEvent_1a077407fa803ba51d22523aa7a4126489"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__EntitlementEvent_1a91685fd8189eebb5fadeaffab8bbb3b8)`() const` <a id="structFRHAPI__EntitlementEvent_1a91685fd8189eebb5fadeaffab8bbb3b8"></a>

Checks whether LootId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a653ee34977867961f4487116f67d0267)`()` <a id="structFRHAPI__EntitlementEvent_1a653ee34977867961f4487116f67d0267"></a>

Gets the value of KeyClaimUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a738a6b865d321f9223a14aab16e85931)`() const` <a id="structFRHAPI__EntitlementEvent_1a738a6b865d321f9223a14aab16e85931"></a>

Gets the value of KeyClaimUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a038e40b888588916d48d8cdb3b25a572)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a038e40b888588916d48d8cdb3b25a572"></a>

Gets the value of KeyClaimUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1affd4bfe1e65fb03d40c4200b0a1701eb)`(FGuid & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1affd4bfe1e65fb03d40c4200b0a1701eb"></a>

Fills OutValue with the value of KeyClaimUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1aeddfb83fbe960de66a9d8bb65e27faeb)`()` <a id="structFRHAPI__EntitlementEvent_1aeddfb83fbe960de66a9d8bb65e27faeb"></a>

Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1ae28146f195e5566177cc55e5a703669a)`() const` <a id="structFRHAPI__EntitlementEvent_1ae28146f195e5566177cc55e5a703669a"></a>

Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a3f2965d90df3eee5bfe5510dd7b72055)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a3f2965d90df3eee5bfe5510dd7b72055"></a>

Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a8dc93ae93cc7c581207b6640d466941c)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a8dc93ae93cc7c581207b6640d466941c"></a>

Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631)`()` <a id="structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631"></a>

Clears the value of KeyClaimUuid_Optional and sets KeyClaimUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetKeyClaimUuidToNull`](#structFRHAPI__EntitlementEvent_1a1411dbe0a0536f088069c06838fb8b20)`()` <a id="structFRHAPI__EntitlementEvent_1a1411dbe0a0536f088069c06838fb8b20"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsKeyClaimUuidNull`](#structFRHAPI__EntitlementEvent_1a62f6facec164143bc70b7599b02e50ba)`() const` <a id="structFRHAPI__EntitlementEvent_1a62f6facec164143bc70b7599b02e50ba"></a>

Checks whether KeyClaimUuid_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1aeb2f68f986f37143c5f263826e400b25)`()` <a id="structFRHAPI__EntitlementEvent_1aeb2f68f986f37143c5f263826e400b25"></a>

Gets the value of Created.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1a7299ce99d2a80e66b2c8433f10e7374b)`() const` <a id="structFRHAPI__EntitlementEvent_1a7299ce99d2a80e66b2c8433f10e7374b"></a>

Gets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1a7c275dd600baa46f421ffc5d8e6634c2)`(const FDateTime & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a7c275dd600baa46f421ffc5d8e6634c2"></a>

Sets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1a768ce50a3266be237628dde9a263bad8)`(FDateTime && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a768ce50a3266be237628dde9a263bad8"></a>

Sets the value of Created using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a71801653df97dde014887aeef1c77270)`()` <a id="structFRHAPI__EntitlementEvent_1a71801653df97dde014887aeef1c77270"></a>

Gets the value of LastModified.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a56aace2f9dccdf67747184985a9d9317)`() const` <a id="structFRHAPI__EntitlementEvent_1a56aace2f9dccdf67747184985a9d9317"></a>

Gets the value of LastModified.

#### `public inline FORCEINLINE void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1a2b3873c34ef93570081b0769ed92a68d)`(const FDateTime & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a2b3873c34ef93570081b0769ed92a68d"></a>

Sets the value of LastModified.

#### `public inline FORCEINLINE void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1a9679b674b6ec82231bc108bdff4535b7)`(FDateTime && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a9679b674b6ec82231bc108bdff4535b7"></a>

Sets the value of LastModified using move semantics.

