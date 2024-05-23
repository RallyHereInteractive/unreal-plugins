# group `RHAPI_EntitlementEvent` <a id="group__RHAPI__EntitlementEvent"></a>

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
`public ERHAPI_EntitlementActionType `[`ActionType`](#structFRHAPI__EntitlementEvent_1a3b069ba088a95a7e01b479842202e4f6) | The type of the event.
`public ERHAPI_EntitlementType `[`EntitlementType_Optional`](#structFRHAPI__EntitlementEvent_1aa57e3d48b5e1ed89fe90c9dd4afd0d56) | The type of entitlement when the event occurred.
`public bool `[`EntitlementType_IsSet`](#structFRHAPI__EntitlementEvent_1a4222c62208e233f156f1dc0424342644) | true if EntitlementType_Optional has been set to a value
`public ERHAPI_EntitlementEventStatus `[`Status`](#structFRHAPI__EntitlementEvent_1a62067f4d47fce1607e9952f8075657c5) | The status of the event.
`public FGuid `[`PlayerUuid`](#structFRHAPI__EntitlementEvent_1a5e5b1c580c3e19b2a6047c20a9081e5f) | The player UUID for the event.
`public int32 `[`PlayerId_Optional`](#structFRHAPI__EntitlementEvent_1ab279e936992c73e8872300d987f60e75) | The player ID for the event.
`public bool `[`PlayerId_IsSet`](#structFRHAPI__EntitlementEvent_1abab49be470cc6d29a36c31c32fe604a7) | true if PlayerId_Optional has been set to a value
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__EntitlementEvent_1aaff94b833012bd90ea8d2400ac1b9334) | The platform for the event.
`public FString `[`PlatformUserId`](#structFRHAPI__EntitlementEvent_1a20cbd9e0d77ca45f3de1840aa522a3db) | The platform user ID for the event.
`public FString `[`Sku`](#structFRHAPI__EntitlementEvent_1a8b37fa2e9dc312607f5f4ad614e45086) | The SKU for the event.
`public int32 `[`Quantity`](#structFRHAPI__EntitlementEvent_1a4d01e5ec9a02d11b2924c6aec66f6b69) | The quantity for the event.
`public FString `[`PlatformTransactionId_Optional`](#structFRHAPI__EntitlementEvent_1afbb38f99c495ff143a16818225abc649) | The external transaction ID for the event.
`public bool `[`PlatformTransactionId_IsSet`](#structFRHAPI__EntitlementEvent_1aeb9f58a76b37632820e304c7b2a3ab87) | true if PlatformTransactionId_Optional has been set to a value
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`PlatformData_Optional`](#structFRHAPI__EntitlementEvent_1af5fefeebbb3bb176e8f29a842ae4fa56) | The platform specific data for the event.
`public bool `[`PlatformData_IsSet`](#structFRHAPI__EntitlementEvent_1a8ccb61b2119ab94dea8b1797afc8ceab) | true if PlatformData_Optional has been set to a value
`public FString `[`OrderId_Optional`](#structFRHAPI__EntitlementEvent_1a811c8aaf9f74dec92cd92ab01b95b4b9) | The order ID for the event.
`public bool `[`OrderId_IsSet`](#structFRHAPI__EntitlementEvent_1acafb2cafddc76a89749f667e9a0e0cef) | true if OrderId_Optional has been set to a value
`public int32 `[`LootId_Optional`](#structFRHAPI__EntitlementEvent_1ae8b454937c42d47109bb779a0d9dc6e3) | The loot ID for the event.
`public bool `[`LootId_IsSet`](#structFRHAPI__EntitlementEvent_1a8c8ac2bf6760d1d2688fb3691b905f8a) | true if LootId_Optional has been set to a value
`public FGuid `[`KeyClaimUuid_Optional`](#structFRHAPI__EntitlementEvent_1a3200bc8d1d1bb705ade94d9d9c37afa6) | The portal user key claim id.
`public bool `[`KeyClaimUuid_IsSet`](#structFRHAPI__EntitlementEvent_1a35d90febd4311f54398ec082ef2bfb8f) | true if KeyClaimUuid_Optional has been set to a value
`public FDateTime `[`Created`](#structFRHAPI__EntitlementEvent_1a8997413503230e1433fd1d3c3f406b35) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FDateTime `[`LastModified`](#structFRHAPI__EntitlementEvent_1a15cd3231a388e346c03bc3cdd78f8e0b) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEvent_1acd138073007df4327ecf3d0731ffd417)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEvent_1a48c51ef26812226738977e18236e0435)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1a52b22f4d98df9bebd7d909c5c980af3a)`()` | Gets the value of EventId.
`public inline const FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1ac48dafd583079e95750424f793ff818b)`() const` | Gets the value of EventId.
`public inline void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ab2e7caf1a7a94d7d0f78b4c5147260a1)`(const FString & NewValue)` | Sets the value of EventId.
`public inline void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ad4b28571815cddc239b2d0a1c2659768)`(FString && NewValue)` | Sets the value of EventId using move semantics.
`public inline ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1af0eca50ccfde0d7b749f0eb21f63c0d8)`()` | Gets the value of ActionType.
`public inline const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1ab4e17ab87da8a0fce99705d9eb323d01)`() const` | Gets the value of ActionType.
`public inline void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1ae8c1691815e0962fa4b4f73e02d1e5ee)`(const ERHAPI_EntitlementActionType & NewValue)` | Sets the value of ActionType.
`public inline void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1ab6483c615db1ee7b394c0b910e0711a2)`(ERHAPI_EntitlementActionType && NewValue)` | Sets the value of ActionType using move semantics.
`public inline ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a0707fee704c58ea91c8cdc768fbfcb92)`()` | Gets the value of EntitlementType_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1ab5ea0ce68f2a6022e02954934dafbac7)`() const` | Gets the value of EntitlementType_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1ab4b9d1f55aa8e54f8f9bb2055ae29db4)`(const ERHAPI_EntitlementType & DefaultValue) const` | Gets the value of EntitlementType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a60829820e6968a02f730fe32f453daf8)`(ERHAPI_EntitlementType & OutValue) const` | Fills OutValue with the value of EntitlementType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1af0162050b5fe97d113fb467d4fbca3a8)`()` | Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1af4cead59304817a95b328e18a19b88cd)`() const` | Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a5ff9352e4d9b1bfeb2095274e4b3df99)`(const ERHAPI_EntitlementType & NewValue)` | Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true.
`public inline void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a01f938722a1c25698046a35cdddffd0b)`(ERHAPI_EntitlementType && NewValue)` | Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true using move semantics.
`public inline void `[`ClearEntitlementType`](#structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63)`()` | Clears the value of EntitlementType_Optional and sets EntitlementType_IsSet to false.
`public inline ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1ab2c40d46cdca6d4c0a0ad84081b1c3b9)`()` | Gets the value of Status.
`public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1a3404a80e8442a9be926417e0d42509cd)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a32bcdd2a566838299c20df134f2aafea)`(const ERHAPI_EntitlementEventStatus & NewValue)` | Sets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a9d27604fc4c683873a23d5da37c00d38)`(ERHAPI_EntitlementEventStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1aa8df4d27083db0017f1355f0fdaf2598)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a0925f513ccd61462bf9a2cec78ac25f2)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a06c180302f7f61e5cd44b47b8b3fa6d8)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a481ffe075c7a977f9ff5a36a45ec5fa7)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a374dcf80ac1eee2fdd0732cd4f0fdbd4)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a7b6e8633ba7d3695fe5693132db88169)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a2a61ea9715fad659d5958704b68922c3)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a7da68afdfa06811f1cc0073920449241)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1ae4da3a483c7a333d974ef82a4816428a)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1aacec2aff59b39ce09a0ea023cdce3d8d)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a034a93220a1be1ba15e87ae5e4c633ce)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a3c9344f27e29cf874fb7e0579d8119e7)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__EntitlementEvent_1a3026ad7ecda02aa2c1b451bc9996f115)`() const` | Returns true if PlayerId_Optional is set and matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__EntitlementEvent_1ae741a5dd78801d9663c20f485968a08d)`()` | Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a7f3123486a2adfe5da00a683f34708d9)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a70653d33816f53ac512d53e36a0d7150)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a7df513bad966ecdc3076a745056b5fe1)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a3ff194bd82fcdba2dcd35094c937b9e9)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aa4695db78339af49fe14f48d6511e40b)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1a9315e3f7e5ddd04d2137d0bc06f4236d)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aafe0fb182cc70300bc8f55d63725135c)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aba889cf4450aa959ae7ea48cc05d1916)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1a8fa02acf3341a8fddb48baacf22fface)`()` | Gets the value of Sku.
`public inline const FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1a9bd8f27a9af373e7f39e58dca9da9683)`() const` | Gets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__EntitlementEvent_1a6d9abf334d5639a9602bfdc164d69e70)`(const FString & NewValue)` | Sets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__EntitlementEvent_1ad8ea52866f9417b47f70be452070d7a7)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1a35de6107e96657f605b2bc8139c4afc3)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1adfc529891406b1ce73af493312c34d07)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1a52507a0f0713e30caf8e1662e865f575)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1a1b727920a518f660061a03705726196e)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__EntitlementEvent_1a8f992e4fc07f33ee0da0a253d214a72c)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__EntitlementEvent_1a72c3ce100d0da50ad259598fb1fee0d1)`()` | Sets the value of Quantity to its default
`public inline FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a346fc3fb279002db593ee148d803d577)`()` | Gets the value of PlatformTransactionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a5e2c0f8fd43db098ae876cd700bd8377)`() const` | Gets the value of PlatformTransactionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1adcead4bca418e44c1fe22901642f642c)`(const FString & DefaultValue) const` | Gets the value of PlatformTransactionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a2e6629b61a341581b10b994d11ac5221)`(FString & OutValue) const` | Fills OutValue with the value of PlatformTransactionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1a4c6357ee4b1d6eb654a9be924ab1ba90)`()` | Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1ae7ab66955406bd63dc386de1e1f02e4a)`() const` | Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a48a51b52a980be5bd9adf2cdd6d226ee)`(const FString & NewValue)` | Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true.
`public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a7ad1df8a745c6ac15a5c4027a5ebffb0)`(FString && NewValue)` | Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6)`()` | Clears the value of PlatformTransactionId_Optional and sets PlatformTransactionId_IsSet to false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1af4826913ab038ccdea8e355b5ca487a7)`()` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1adc641ca6377c183f9f3a77177e7adc77)`() const` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a727751aa606f81f9d1536dc55a32c8a4)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a22c4188347e5b31e0daef9bfe192d4dc)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a123899938f4680c3c8461563bcaefc15)`()` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a2fea0c8ebbd2e73c7086e7cf0371712e)`() const` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1aa9ee212cdf87a1b33a40480242649379)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.
`public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1a01a5a034b70b5ae19264132ffa027f19)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.
`public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174)`()` | Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.
`public inline FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1ab261914bb676d5d2348463bcc4d5efb7)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1ae711b8dff88d6a8a3a3326b83e81a9ee)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1af4a23cbf7251c443d3b2e34c2eca7499)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a5acc6a2b31adbb163fd19fb3fe7bd3f7)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a476e6f4a3cac518df1ab93a9785b0bdd)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a8368da8ff02e34a2c529165ca743fac4)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a0fdab933915bec218e0eff6162b6922e)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a67409743db49868c65943f94e4599442)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a906cb09c494c571efa680568980f614f)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1af36961dcb21037a4ec15af47563d1416)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a03b9dec1781b92534c271c7454824ea8)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a32ecb807d1e953da5476cdedae4c15b1)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1af55f4b2a6515c7ca0069ffdf8b954d13)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1af119702b21818e1feb23f98f3aab1eab)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1ab38a5548a0a306293f24bfca9e487845)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1af066ffb610dc5d9be3ca1273990955ef)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__EntitlementEvent_1a461b97f0966229b02571bd3b65445d0f)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__EntitlementEvent_1a352080fbd00ce9e45c9563f78e293e73)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a01c95f648689c893c8df055b4de268d7)`()` | Gets the value of KeyClaimUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a93a60f2d278736997b60eb1a993ccd49)`() const` | Gets the value of KeyClaimUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a250b8781bfbd15e984c3a8460ec2fd00)`(const FGuid & DefaultValue) const` | Gets the value of KeyClaimUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1d0edade85b970c06630c3a29a80678d)`(FGuid & OutValue) const` | Fills OutValue with the value of KeyClaimUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1a245fb7a0d0ae1507ac41689b43416e19)`()` | Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1a06a288bd0434f9a10b10236947aba54c)`() const` | Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a8ab6f303bbf02c26dbc42f8334d37cd5)`(const FGuid & NewValue)` | Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true.
`public inline void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1afea0e0a9c49b35bb3b169b064a6f561d)`(FGuid && NewValue)` | Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true using move semantics.
`public inline void `[`ClearKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631)`()` | Clears the value of KeyClaimUuid_Optional and sets KeyClaimUuid_IsSet to false.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1a4919985ff2ae20b28c95917fe54f455a)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1ac4b38128674fcb86c3dcc16981991457)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1a1c63dc9fbe262e47e80ebc34b2eaad62)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1adbab92856c57e5a0ecaa5d53b3d9961d)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a735bd93f2d7a8e705b29d317ee7c64d7)`()` | Gets the value of LastModified.
`public inline const FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a057ae60105f8c9224a6eb5234006aac7)`() const` | Gets the value of LastModified.
`public inline void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1ab8f4ff02df207045d00257de6397c6b4)`(const FDateTime & NewValue)` | Sets the value of LastModified.
`public inline void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1a5d15252ee09b6117e3f310fecf96966d)`(FDateTime && NewValue)` | Sets the value of LastModified using move semantics.

### Members

#### `public FString `[`EventId`](#structFRHAPI__EntitlementEvent_1a50b0008a25315847be0862b33a201872) <a id="structFRHAPI__EntitlementEvent_1a50b0008a25315847be0862b33a201872"></a>

The unique identifier for the event.

#### `public ERHAPI_EntitlementActionType `[`ActionType`](#structFRHAPI__EntitlementEvent_1a3b069ba088a95a7e01b479842202e4f6) <a id="structFRHAPI__EntitlementEvent_1a3b069ba088a95a7e01b479842202e4f6"></a>

The type of the event.

#### `public ERHAPI_EntitlementType `[`EntitlementType_Optional`](#structFRHAPI__EntitlementEvent_1aa57e3d48b5e1ed89fe90c9dd4afd0d56) <a id="structFRHAPI__EntitlementEvent_1aa57e3d48b5e1ed89fe90c9dd4afd0d56"></a>

The type of entitlement when the event occurred.

#### `public bool `[`EntitlementType_IsSet`](#structFRHAPI__EntitlementEvent_1a4222c62208e233f156f1dc0424342644) <a id="structFRHAPI__EntitlementEvent_1a4222c62208e233f156f1dc0424342644"></a>

true if EntitlementType_Optional has been set to a value

#### `public ERHAPI_EntitlementEventStatus `[`Status`](#structFRHAPI__EntitlementEvent_1a62067f4d47fce1607e9952f8075657c5) <a id="structFRHAPI__EntitlementEvent_1a62067f4d47fce1607e9952f8075657c5"></a>

The status of the event.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__EntitlementEvent_1a5e5b1c580c3e19b2a6047c20a9081e5f) <a id="structFRHAPI__EntitlementEvent_1a5e5b1c580c3e19b2a6047c20a9081e5f"></a>

The player UUID for the event.

#### `public int32 `[`PlayerId_Optional`](#structFRHAPI__EntitlementEvent_1ab279e936992c73e8872300d987f60e75) <a id="structFRHAPI__EntitlementEvent_1ab279e936992c73e8872300d987f60e75"></a>

The player ID for the event.

#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__EntitlementEvent_1abab49be470cc6d29a36c31c32fe604a7) <a id="structFRHAPI__EntitlementEvent_1abab49be470cc6d29a36c31c32fe604a7"></a>

true if PlayerId_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__EntitlementEvent_1aaff94b833012bd90ea8d2400ac1b9334) <a id="structFRHAPI__EntitlementEvent_1aaff94b833012bd90ea8d2400ac1b9334"></a>

The platform for the event.

#### `public FString `[`PlatformUserId`](#structFRHAPI__EntitlementEvent_1a20cbd9e0d77ca45f3de1840aa522a3db) <a id="structFRHAPI__EntitlementEvent_1a20cbd9e0d77ca45f3de1840aa522a3db"></a>

The platform user ID for the event.

#### `public FString `[`Sku`](#structFRHAPI__EntitlementEvent_1a8b37fa2e9dc312607f5f4ad614e45086) <a id="structFRHAPI__EntitlementEvent_1a8b37fa2e9dc312607f5f4ad614e45086"></a>

The SKU for the event.

#### `public int32 `[`Quantity`](#structFRHAPI__EntitlementEvent_1a4d01e5ec9a02d11b2924c6aec66f6b69) <a id="structFRHAPI__EntitlementEvent_1a4d01e5ec9a02d11b2924c6aec66f6b69"></a>

The quantity for the event.

#### `public FString `[`PlatformTransactionId_Optional`](#structFRHAPI__EntitlementEvent_1afbb38f99c495ff143a16818225abc649) <a id="structFRHAPI__EntitlementEvent_1afbb38f99c495ff143a16818225abc649"></a>

The external transaction ID for the event.

#### `public bool `[`PlatformTransactionId_IsSet`](#structFRHAPI__EntitlementEvent_1aeb9f58a76b37632820e304c7b2a3ab87) <a id="structFRHAPI__EntitlementEvent_1aeb9f58a76b37632820e304c7b2a3ab87"></a>

true if PlatformTransactionId_Optional has been set to a value

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`PlatformData_Optional`](#structFRHAPI__EntitlementEvent_1af5fefeebbb3bb176e8f29a842ae4fa56) <a id="structFRHAPI__EntitlementEvent_1af5fefeebbb3bb176e8f29a842ae4fa56"></a>

The platform specific data for the event.

#### `public bool `[`PlatformData_IsSet`](#structFRHAPI__EntitlementEvent_1a8ccb61b2119ab94dea8b1797afc8ceab) <a id="structFRHAPI__EntitlementEvent_1a8ccb61b2119ab94dea8b1797afc8ceab"></a>

true if PlatformData_Optional has been set to a value

#### `public FString `[`OrderId_Optional`](#structFRHAPI__EntitlementEvent_1a811c8aaf9f74dec92cd92ab01b95b4b9) <a id="structFRHAPI__EntitlementEvent_1a811c8aaf9f74dec92cd92ab01b95b4b9"></a>

The order ID for the event.

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__EntitlementEvent_1acafb2cafddc76a89749f667e9a0e0cef) <a id="structFRHAPI__EntitlementEvent_1acafb2cafddc76a89749f667e9a0e0cef"></a>

true if OrderId_Optional has been set to a value

#### `public int32 `[`LootId_Optional`](#structFRHAPI__EntitlementEvent_1ae8b454937c42d47109bb779a0d9dc6e3) <a id="structFRHAPI__EntitlementEvent_1ae8b454937c42d47109bb779a0d9dc6e3"></a>

The loot ID for the event.

#### `public bool `[`LootId_IsSet`](#structFRHAPI__EntitlementEvent_1a8c8ac2bf6760d1d2688fb3691b905f8a) <a id="structFRHAPI__EntitlementEvent_1a8c8ac2bf6760d1d2688fb3691b905f8a"></a>

true if LootId_Optional has been set to a value

#### `public FGuid `[`KeyClaimUuid_Optional`](#structFRHAPI__EntitlementEvent_1a3200bc8d1d1bb705ade94d9d9c37afa6) <a id="structFRHAPI__EntitlementEvent_1a3200bc8d1d1bb705ade94d9d9c37afa6"></a>

The portal user key claim id.

#### `public bool `[`KeyClaimUuid_IsSet`](#structFRHAPI__EntitlementEvent_1a35d90febd4311f54398ec082ef2bfb8f) <a id="structFRHAPI__EntitlementEvent_1a35d90febd4311f54398ec082ef2bfb8f"></a>

true if KeyClaimUuid_Optional has been set to a value

#### `public FDateTime `[`Created`](#structFRHAPI__EntitlementEvent_1a8997413503230e1433fd1d3c3f406b35) <a id="structFRHAPI__EntitlementEvent_1a8997413503230e1433fd1d3c3f406b35"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FDateTime `[`LastModified`](#structFRHAPI__EntitlementEvent_1a15cd3231a388e346c03bc3cdd78f8e0b) <a id="structFRHAPI__EntitlementEvent_1a15cd3231a388e346c03bc3cdd78f8e0b"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEvent_1acd138073007df4327ecf3d0731ffd417)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EntitlementEvent_1acd138073007df4327ecf3d0731ffd417"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEvent_1a48c51ef26812226738977e18236e0435)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__EntitlementEvent_1a48c51ef26812226738977e18236e0435"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1a52b22f4d98df9bebd7d909c5c980af3a)`()` <a id="structFRHAPI__EntitlementEvent_1a52b22f4d98df9bebd7d909c5c980af3a"></a>

Gets the value of EventId.

#### `public inline const FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1ac48dafd583079e95750424f793ff818b)`() const` <a id="structFRHAPI__EntitlementEvent_1ac48dafd583079e95750424f793ff818b"></a>

Gets the value of EventId.

#### `public inline void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ab2e7caf1a7a94d7d0f78b4c5147260a1)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab2e7caf1a7a94d7d0f78b4c5147260a1"></a>

Sets the value of EventId.

#### `public inline void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ad4b28571815cddc239b2d0a1c2659768)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1ad4b28571815cddc239b2d0a1c2659768"></a>

Sets the value of EventId using move semantics.

#### `public inline ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1af0eca50ccfde0d7b749f0eb21f63c0d8)`()` <a id="structFRHAPI__EntitlementEvent_1af0eca50ccfde0d7b749f0eb21f63c0d8"></a>

Gets the value of ActionType.

#### `public inline const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1ab4e17ab87da8a0fce99705d9eb323d01)`() const` <a id="structFRHAPI__EntitlementEvent_1ab4e17ab87da8a0fce99705d9eb323d01"></a>

Gets the value of ActionType.

#### `public inline void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1ae8c1691815e0962fa4b4f73e02d1e5ee)`(const ERHAPI_EntitlementActionType & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ae8c1691815e0962fa4b4f73e02d1e5ee"></a>

Sets the value of ActionType.

#### `public inline void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1ab6483c615db1ee7b394c0b910e0711a2)`(ERHAPI_EntitlementActionType && NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab6483c615db1ee7b394c0b910e0711a2"></a>

Sets the value of ActionType using move semantics.

#### `public inline ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a0707fee704c58ea91c8cdc768fbfcb92)`()` <a id="structFRHAPI__EntitlementEvent_1a0707fee704c58ea91c8cdc768fbfcb92"></a>

Gets the value of EntitlementType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1ab5ea0ce68f2a6022e02954934dafbac7)`() const` <a id="structFRHAPI__EntitlementEvent_1ab5ea0ce68f2a6022e02954934dafbac7"></a>

Gets the value of EntitlementType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1ab4b9d1f55aa8e54f8f9bb2055ae29db4)`(const ERHAPI_EntitlementType & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1ab4b9d1f55aa8e54f8f9bb2055ae29db4"></a>

Gets the value of EntitlementType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a60829820e6968a02f730fe32f453daf8)`(ERHAPI_EntitlementType & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a60829820e6968a02f730fe32f453daf8"></a>

Fills OutValue with the value of EntitlementType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1af0162050b5fe97d113fb467d4fbca3a8)`()` <a id="structFRHAPI__EntitlementEvent_1af0162050b5fe97d113fb467d4fbca3a8"></a>

Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1af4cead59304817a95b328e18a19b88cd)`() const` <a id="structFRHAPI__EntitlementEvent_1af4cead59304817a95b328e18a19b88cd"></a>

Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a5ff9352e4d9b1bfeb2095274e4b3df99)`(const ERHAPI_EntitlementType & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a5ff9352e4d9b1bfeb2095274e4b3df99"></a>

Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true.

#### `public inline void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a01f938722a1c25698046a35cdddffd0b)`(ERHAPI_EntitlementType && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a01f938722a1c25698046a35cdddffd0b"></a>

Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitlementType`](#structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63)`()` <a id="structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63"></a>

Clears the value of EntitlementType_Optional and sets EntitlementType_IsSet to false.

#### `public inline ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1ab2c40d46cdca6d4c0a0ad84081b1c3b9)`()` <a id="structFRHAPI__EntitlementEvent_1ab2c40d46cdca6d4c0a0ad84081b1c3b9"></a>

Gets the value of Status.

#### `public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1a3404a80e8442a9be926417e0d42509cd)`() const` <a id="structFRHAPI__EntitlementEvent_1a3404a80e8442a9be926417e0d42509cd"></a>

Gets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a32bcdd2a566838299c20df134f2aafea)`(const ERHAPI_EntitlementEventStatus & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a32bcdd2a566838299c20df134f2aafea"></a>

Sets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a9d27604fc4c683873a23d5da37c00d38)`(ERHAPI_EntitlementEventStatus && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a9d27604fc4c683873a23d5da37c00d38"></a>

Sets the value of Status using move semantics.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1aa8df4d27083db0017f1355f0fdaf2598)`()` <a id="structFRHAPI__EntitlementEvent_1aa8df4d27083db0017f1355f0fdaf2598"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a0925f513ccd61462bf9a2cec78ac25f2)`() const` <a id="structFRHAPI__EntitlementEvent_1a0925f513ccd61462bf9a2cec78ac25f2"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a06c180302f7f61e5cd44b47b8b3fa6d8)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a06c180302f7f61e5cd44b47b8b3fa6d8"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a481ffe075c7a977f9ff5a36a45ec5fa7)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a481ffe075c7a977f9ff5a36a45ec5fa7"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a374dcf80ac1eee2fdd0732cd4f0fdbd4)`()` <a id="structFRHAPI__EntitlementEvent_1a374dcf80ac1eee2fdd0732cd4f0fdbd4"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a7b6e8633ba7d3695fe5693132db88169)`() const` <a id="structFRHAPI__EntitlementEvent_1a7b6e8633ba7d3695fe5693132db88169"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a2a61ea9715fad659d5958704b68922c3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a2a61ea9715fad659d5958704b68922c3"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a7da68afdfa06811f1cc0073920449241)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a7da68afdfa06811f1cc0073920449241"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1ae4da3a483c7a333d974ef82a4816428a)`()` <a id="structFRHAPI__EntitlementEvent_1ae4da3a483c7a333d974ef82a4816428a"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1aacec2aff59b39ce09a0ea023cdce3d8d)`() const` <a id="structFRHAPI__EntitlementEvent_1aacec2aff59b39ce09a0ea023cdce3d8d"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a034a93220a1be1ba15e87ae5e4c633ce)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a034a93220a1be1ba15e87ae5e4c633ce"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a3c9344f27e29cf874fb7e0579d8119e7)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a3c9344f27e29cf874fb7e0579d8119e7"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4)`()` <a id="structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__EntitlementEvent_1a3026ad7ecda02aa2c1b451bc9996f115)`() const` <a id="structFRHAPI__EntitlementEvent_1a3026ad7ecda02aa2c1b451bc9996f115"></a>

Returns true if PlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__EntitlementEvent_1ae741a5dd78801d9663c20f485968a08d)`()` <a id="structFRHAPI__EntitlementEvent_1ae741a5dd78801d9663c20f485968a08d"></a>

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a7f3123486a2adfe5da00a683f34708d9)`()` <a id="structFRHAPI__EntitlementEvent_1a7f3123486a2adfe5da00a683f34708d9"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a70653d33816f53ac512d53e36a0d7150)`() const` <a id="structFRHAPI__EntitlementEvent_1a70653d33816f53ac512d53e36a0d7150"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a7df513bad966ecdc3076a745056b5fe1)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a7df513bad966ecdc3076a745056b5fe1"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a3ff194bd82fcdba2dcd35094c937b9e9)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a3ff194bd82fcdba2dcd35094c937b9e9"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aa4695db78339af49fe14f48d6511e40b)`()` <a id="structFRHAPI__EntitlementEvent_1aa4695db78339af49fe14f48d6511e40b"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1a9315e3f7e5ddd04d2137d0bc06f4236d)`() const` <a id="structFRHAPI__EntitlementEvent_1a9315e3f7e5ddd04d2137d0bc06f4236d"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aafe0fb182cc70300bc8f55d63725135c)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1aafe0fb182cc70300bc8f55d63725135c"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aba889cf4450aa959ae7ea48cc05d1916)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1aba889cf4450aa959ae7ea48cc05d1916"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1a8fa02acf3341a8fddb48baacf22fface)`()` <a id="structFRHAPI__EntitlementEvent_1a8fa02acf3341a8fddb48baacf22fface"></a>

Gets the value of Sku.

#### `public inline const FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1a9bd8f27a9af373e7f39e58dca9da9683)`() const` <a id="structFRHAPI__EntitlementEvent_1a9bd8f27a9af373e7f39e58dca9da9683"></a>

Gets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__EntitlementEvent_1a6d9abf334d5639a9602bfdc164d69e70)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a6d9abf334d5639a9602bfdc164d69e70"></a>

Sets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__EntitlementEvent_1ad8ea52866f9417b47f70be452070d7a7)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1ad8ea52866f9417b47f70be452070d7a7"></a>

Sets the value of Sku using move semantics.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1a35de6107e96657f605b2bc8139c4afc3)`()` <a id="structFRHAPI__EntitlementEvent_1a35de6107e96657f605b2bc8139c4afc3"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1adfc529891406b1ce73af493312c34d07)`() const` <a id="structFRHAPI__EntitlementEvent_1adfc529891406b1ce73af493312c34d07"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1a52507a0f0713e30caf8e1662e865f575)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a52507a0f0713e30caf8e1662e865f575"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1a1b727920a518f660061a03705726196e)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a1b727920a518f660061a03705726196e"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__EntitlementEvent_1a8f992e4fc07f33ee0da0a253d214a72c)`() const` <a id="structFRHAPI__EntitlementEvent_1a8f992e4fc07f33ee0da0a253d214a72c"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__EntitlementEvent_1a72c3ce100d0da50ad259598fb1fee0d1)`()` <a id="structFRHAPI__EntitlementEvent_1a72c3ce100d0da50ad259598fb1fee0d1"></a>

Sets the value of Quantity to its default

#### `public inline FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a346fc3fb279002db593ee148d803d577)`()` <a id="structFRHAPI__EntitlementEvent_1a346fc3fb279002db593ee148d803d577"></a>

Gets the value of PlatformTransactionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a5e2c0f8fd43db098ae876cd700bd8377)`() const` <a id="structFRHAPI__EntitlementEvent_1a5e2c0f8fd43db098ae876cd700bd8377"></a>

Gets the value of PlatformTransactionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1adcead4bca418e44c1fe22901642f642c)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1adcead4bca418e44c1fe22901642f642c"></a>

Gets the value of PlatformTransactionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a2e6629b61a341581b10b994d11ac5221)`(FString & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a2e6629b61a341581b10b994d11ac5221"></a>

Fills OutValue with the value of PlatformTransactionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1a4c6357ee4b1d6eb654a9be924ab1ba90)`()` <a id="structFRHAPI__EntitlementEvent_1a4c6357ee4b1d6eb654a9be924ab1ba90"></a>

Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1ae7ab66955406bd63dc386de1e1f02e4a)`() const` <a id="structFRHAPI__EntitlementEvent_1ae7ab66955406bd63dc386de1e1f02e4a"></a>

Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a48a51b52a980be5bd9adf2cdd6d226ee)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a48a51b52a980be5bd9adf2cdd6d226ee"></a>

Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true.

#### `public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a7ad1df8a745c6ac15a5c4027a5ebffb0)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a7ad1df8a745c6ac15a5c4027a5ebffb0"></a>

Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6)`()` <a id="structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6"></a>

Clears the value of PlatformTransactionId_Optional and sets PlatformTransactionId_IsSet to false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1af4826913ab038ccdea8e355b5ca487a7)`()` <a id="structFRHAPI__EntitlementEvent_1af4826913ab038ccdea8e355b5ca487a7"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1adc641ca6377c183f9f3a77177e7adc77)`() const` <a id="structFRHAPI__EntitlementEvent_1adc641ca6377c183f9f3a77177e7adc77"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a727751aa606f81f9d1536dc55a32c8a4)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a727751aa606f81f9d1536dc55a32c8a4"></a>

Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a22c4188347e5b31e0daef9bfe192d4dc)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a22c4188347e5b31e0daef9bfe192d4dc"></a>

Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a123899938f4680c3c8461563bcaefc15)`()` <a id="structFRHAPI__EntitlementEvent_1a123899938f4680c3c8461563bcaefc15"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a2fea0c8ebbd2e73c7086e7cf0371712e)`() const` <a id="structFRHAPI__EntitlementEvent_1a2fea0c8ebbd2e73c7086e7cf0371712e"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1aa9ee212cdf87a1b33a40480242649379)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__EntitlementEvent_1aa9ee212cdf87a1b33a40480242649379"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.

#### `public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1a01a5a034b70b5ae19264132ffa027f19)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a01a5a034b70b5ae19264132ffa027f19"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174)`()` <a id="structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174"></a>

Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1ab261914bb676d5d2348463bcc4d5efb7)`()` <a id="structFRHAPI__EntitlementEvent_1ab261914bb676d5d2348463bcc4d5efb7"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1ae711b8dff88d6a8a3a3326b83e81a9ee)`() const` <a id="structFRHAPI__EntitlementEvent_1ae711b8dff88d6a8a3a3326b83e81a9ee"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1af4a23cbf7251c443d3b2e34c2eca7499)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1af4a23cbf7251c443d3b2e34c2eca7499"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a5acc6a2b31adbb163fd19fb3fe7bd3f7)`(FString & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a5acc6a2b31adbb163fd19fb3fe7bd3f7"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a476e6f4a3cac518df1ab93a9785b0bdd)`()` <a id="structFRHAPI__EntitlementEvent_1a476e6f4a3cac518df1ab93a9785b0bdd"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a8368da8ff02e34a2c529165ca743fac4)`() const` <a id="structFRHAPI__EntitlementEvent_1a8368da8ff02e34a2c529165ca743fac4"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a0fdab933915bec218e0eff6162b6922e)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a0fdab933915bec218e0eff6162b6922e"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a67409743db49868c65943f94e4599442)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a67409743db49868c65943f94e4599442"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d)`()` <a id="structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a906cb09c494c571efa680568980f614f)`()` <a id="structFRHAPI__EntitlementEvent_1a906cb09c494c571efa680568980f614f"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1af36961dcb21037a4ec15af47563d1416)`() const` <a id="structFRHAPI__EntitlementEvent_1af36961dcb21037a4ec15af47563d1416"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a03b9dec1781b92534c271c7454824ea8)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a03b9dec1781b92534c271c7454824ea8"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a32ecb807d1e953da5476cdedae4c15b1)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a32ecb807d1e953da5476cdedae4c15b1"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1af55f4b2a6515c7ca0069ffdf8b954d13)`()` <a id="structFRHAPI__EntitlementEvent_1af55f4b2a6515c7ca0069ffdf8b954d13"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1af119702b21818e1feb23f98f3aab1eab)`() const` <a id="structFRHAPI__EntitlementEvent_1af119702b21818e1feb23f98f3aab1eab"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1ab38a5548a0a306293f24bfca9e487845)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab38a5548a0a306293f24bfca9e487845"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1af066ffb610dc5d9be3ca1273990955ef)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1af066ffb610dc5d9be3ca1273990955ef"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258)`()` <a id="structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__EntitlementEvent_1a461b97f0966229b02571bd3b65445d0f)`() const` <a id="structFRHAPI__EntitlementEvent_1a461b97f0966229b02571bd3b65445d0f"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__EntitlementEvent_1a352080fbd00ce9e45c9563f78e293e73)`()` <a id="structFRHAPI__EntitlementEvent_1a352080fbd00ce9e45c9563f78e293e73"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a01c95f648689c893c8df055b4de268d7)`()` <a id="structFRHAPI__EntitlementEvent_1a01c95f648689c893c8df055b4de268d7"></a>

Gets the value of KeyClaimUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a93a60f2d278736997b60eb1a993ccd49)`() const` <a id="structFRHAPI__EntitlementEvent_1a93a60f2d278736997b60eb1a993ccd49"></a>

Gets the value of KeyClaimUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a250b8781bfbd15e984c3a8460ec2fd00)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a250b8781bfbd15e984c3a8460ec2fd00"></a>

Gets the value of KeyClaimUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1d0edade85b970c06630c3a29a80678d)`(FGuid & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a1d0edade85b970c06630c3a29a80678d"></a>

Fills OutValue with the value of KeyClaimUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1a245fb7a0d0ae1507ac41689b43416e19)`()` <a id="structFRHAPI__EntitlementEvent_1a245fb7a0d0ae1507ac41689b43416e19"></a>

Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1a06a288bd0434f9a10b10236947aba54c)`() const` <a id="structFRHAPI__EntitlementEvent_1a06a288bd0434f9a10b10236947aba54c"></a>

Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a8ab6f303bbf02c26dbc42f8334d37cd5)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a8ab6f303bbf02c26dbc42f8334d37cd5"></a>

Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true.

#### `public inline void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1afea0e0a9c49b35bb3b169b064a6f561d)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEvent_1afea0e0a9c49b35bb3b169b064a6f561d"></a>

Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631)`()` <a id="structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631"></a>

Clears the value of KeyClaimUuid_Optional and sets KeyClaimUuid_IsSet to false.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1a4919985ff2ae20b28c95917fe54f455a)`()` <a id="structFRHAPI__EntitlementEvent_1a4919985ff2ae20b28c95917fe54f455a"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1ac4b38128674fcb86c3dcc16981991457)`() const` <a id="structFRHAPI__EntitlementEvent_1ac4b38128674fcb86c3dcc16981991457"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1a1c63dc9fbe262e47e80ebc34b2eaad62)`(const FDateTime & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a1c63dc9fbe262e47e80ebc34b2eaad62"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1adbab92856c57e5a0ecaa5d53b3d9961d)`(FDateTime && NewValue)` <a id="structFRHAPI__EntitlementEvent_1adbab92856c57e5a0ecaa5d53b3d9961d"></a>

Sets the value of Created using move semantics.

#### `public inline FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a735bd93f2d7a8e705b29d317ee7c64d7)`()` <a id="structFRHAPI__EntitlementEvent_1a735bd93f2d7a8e705b29d317ee7c64d7"></a>

Gets the value of LastModified.

#### `public inline const FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a057ae60105f8c9224a6eb5234006aac7)`() const` <a id="structFRHAPI__EntitlementEvent_1a057ae60105f8c9224a6eb5234006aac7"></a>

Gets the value of LastModified.

#### `public inline void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1ab8f4ff02df207045d00257de6397c6b4)`(const FDateTime & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab8f4ff02df207045d00257de6397c6b4"></a>

Sets the value of LastModified.

#### `public inline void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1a5d15252ee09b6117e3f310fecf96966d)`(FDateTime && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a5d15252ee09b6117e3f310fecf96966d"></a>

Sets the value of LastModified using move semantics.

