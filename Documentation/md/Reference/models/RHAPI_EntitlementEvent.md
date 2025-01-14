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
`public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEvent_1aee9a2fa3337f1df01bcf5c99e2a03f6f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEvent_1a4fa42c95a837a10063eda49a27eee363)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1a8fa05c298ce324cc159228ecff2e63b7)`()` | Gets the value of EventId.
`public inline const FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1aba305daa00ff7e2fa4c5b45eac551fde)`() const` | Gets the value of EventId.
`public inline void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ab2e7caf1a7a94d7d0f78b4c5147260a1)`(const FString & NewValue)` | Sets the value of EventId.
`public inline void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ad4b28571815cddc239b2d0a1c2659768)`(FString && NewValue)` | Sets the value of EventId using move semantics.
`public inline ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1a50b0931a49c2ea2eb3609dde1f9bf198)`()` | Gets the value of ActionType.
`public inline const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1af27f3e7869dfbffc2d4fbbbc730f8c3b)`() const` | Gets the value of ActionType.
`public inline void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1ae8c1691815e0962fa4b4f73e02d1e5ee)`(const ERHAPI_EntitlementActionType & NewValue)` | Sets the value of ActionType.
`public inline void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1ab6483c615db1ee7b394c0b910e0711a2)`(ERHAPI_EntitlementActionType && NewValue)` | Sets the value of ActionType using move semantics.
`public inline ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1ad10dabb03298ff17f4a602434e17e06e)`()` | Gets the value of EntitlementType_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a760b8fbba5372e8718d5a7c5b3b98023)`() const` | Gets the value of EntitlementType_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1aa53d82b1756928c2e601c6aacaaaa1c4)`(const ERHAPI_EntitlementType & DefaultValue) const` | Gets the value of EntitlementType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a60829820e6968a02f730fe32f453daf8)`(ERHAPI_EntitlementType & OutValue) const` | Fills OutValue with the value of EntitlementType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1a15628aae2cdf6380234793d0cfc8d682)`()` | Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1affeca70f1db15142be0e9e69e5cc608c)`() const` | Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a5ff9352e4d9b1bfeb2095274e4b3df99)`(const ERHAPI_EntitlementType & NewValue)` | Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true.
`public inline void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a01f938722a1c25698046a35cdddffd0b)`(ERHAPI_EntitlementType && NewValue)` | Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true using move semantics.
`public inline void `[`ClearEntitlementType`](#structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63)`()` | Clears the value of EntitlementType_Optional and sets EntitlementType_IsSet to false.
`public inline bool `[`IsEntitlementTypeSet`](#structFRHAPI__EntitlementEvent_1a2ceb88164d43a8957c653172568bfa86)`() const` | Checks whether EntitlementType_Optional has been set.
`public inline ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1ab7128a4c7012a8df7b2801372c2419e3)`()` | Gets the value of Status.
`public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1a46f05f45e94931cfa649d24d168d66ba)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a32bcdd2a566838299c20df134f2aafea)`(const ERHAPI_EntitlementEventStatus & NewValue)` | Sets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a9d27604fc4c683873a23d5da37c00d38)`(ERHAPI_EntitlementEventStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a9258e20efe8ab50dd2b23aa80f0bc4be)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1add5aee352f67caa2da2f61186291cda2)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a06c180302f7f61e5cd44b47b8b3fa6d8)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a481ffe075c7a977f9ff5a36a45ec5fa7)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a9e47deaf29e5ede77df647849263c9db)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1ad6eb3e3086ac72c65e4ec8273deca86c)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a575520102592cb795ec7036d5efa758b)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a7da68afdfa06811f1cc0073920449241)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1aa08d17e49964fbed4ab7e7658f539521)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1ab366ff3b50640ecb17295e50dd08c75e)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a034a93220a1be1ba15e87ae5e4c633ce)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a3c9344f27e29cf874fb7e0579d8119e7)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline bool `[`IsPlayerIdSet`](#structFRHAPI__EntitlementEvent_1aa20c0fba44c1b8f95e2ab51b3cc37c2a)`() const` | Checks whether PlayerId_Optional has been set.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__EntitlementEvent_1a3026ad7ecda02aa2c1b451bc9996f115)`() const` | Returns true if PlayerId_Optional is set and matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__EntitlementEvent_1ae741a5dd78801d9663c20f485968a08d)`()` | Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1ad136ea7c8a1f5609c807b56ed64b15b4)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a5f3d6675f8a0b577a38d2588cae16078)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a7df513bad966ecdc3076a745056b5fe1)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a3ff194bd82fcdba2dcd35094c937b9e9)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1ac5b7766d12b378e59784409e6531a2db)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1af33448b613cf1846b7507bbe307c78af)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aafe0fb182cc70300bc8f55d63725135c)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aba889cf4450aa959ae7ea48cc05d1916)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1ac64eebb40e571adef23064287c68ab8e)`()` | Gets the value of Sku.
`public inline const FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1ac219af2823f3e347ac0211c8825ba573)`() const` | Gets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__EntitlementEvent_1a6d9abf334d5639a9602bfdc164d69e70)`(const FString & NewValue)` | Sets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__EntitlementEvent_1ad8ea52866f9417b47f70be452070d7a7)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1aaec5d6e86469a2fcac18b98d68b325d9)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1ac4e5d6d64fccff62414485a0c9a2e460)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1a52507a0f0713e30caf8e1662e865f575)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1a1b727920a518f660061a03705726196e)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__EntitlementEvent_1a8f992e4fc07f33ee0da0a253d214a72c)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__EntitlementEvent_1a72c3ce100d0da50ad259598fb1fee0d1)`()` | Sets the value of Quantity to its default
`public inline FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a67d12102d20ac483c8265de337d7f359)`()` | Gets the value of PlatformTransactionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1ac68f5568867bb08d970dd1980aec1a8c)`() const` | Gets the value of PlatformTransactionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a7714529145fb1737a162cc97614fd704)`(const FString & DefaultValue) const` | Gets the value of PlatformTransactionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a2e6629b61a341581b10b994d11ac5221)`(FString & OutValue) const` | Fills OutValue with the value of PlatformTransactionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1a9fba0911289eb83ef6602b937a89e9d3)`()` | Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1aab5075ddf23f1442eed4b039db1bd77d)`() const` | Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a48a51b52a980be5bd9adf2cdd6d226ee)`(const FString & NewValue)` | Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true.
`public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a7ad1df8a745c6ac15a5c4027a5ebffb0)`(FString && NewValue)` | Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6)`()` | Clears the value of PlatformTransactionId_Optional and sets PlatformTransactionId_IsSet to false.
`public inline bool `[`IsPlatformTransactionIdSet`](#structFRHAPI__EntitlementEvent_1a4670d3f9c7ec4c5a17c33162d4423e70)`() const` | Checks whether PlatformTransactionId_Optional has been set.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a24f101bb722353446520ad9e7d2fdb37)`()` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1ac5dd4bfa74335272eb52b6f15684ca29)`() const` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a00a0f4a4307723c2a13dab370dac7b25)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a22c4188347e5b31e0daef9bfe192d4dc)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1abc10fecb8d547226e0458396ee1eff2e)`()` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a5ae3abd809c80aa49c2472b4612cf7a2)`() const` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1aa9ee212cdf87a1b33a40480242649379)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.
`public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1a01a5a034b70b5ae19264132ffa027f19)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.
`public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174)`()` | Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.
`public inline bool `[`IsPlatformDataSet`](#structFRHAPI__EntitlementEvent_1ab8c09e6238f1c12d46adb0343af803e0)`() const` | Checks whether PlatformData_Optional has been set.
`public inline FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a8e065ff0d983575759f958ac2e5dbc7e)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1aca33d8286a47a1408fdd067e2e328e46)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a6e8ef3cf88cd65403df112840c02304e)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a5acc6a2b31adbb163fd19fb3fe7bd3f7)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a7de35727a69a10efae161fdd3957c970)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a62e48d6763699a16c1dcbfca0a32426a)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a0fdab933915bec218e0eff6162b6922e)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a67409743db49868c65943f94e4599442)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline bool `[`IsOrderIdSet`](#structFRHAPI__EntitlementEvent_1a583d9eef27d285815fde2a61140aba5e)`() const` | Checks whether OrderId_Optional has been set.
`public inline int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a221e177682e8be287320b5d012a5bebf)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a10d764e83eaf8b6af47f653d6845f13a)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1ad0fae389c6096c36b57817b0042ee738)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a32ecb807d1e953da5476cdedae4c15b1)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1a00995de4a5d783192b7f1d4007999b5b)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1ad96ef018b43054ee365457f015f83d9d)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1ab38a5548a0a306293f24bfca9e487845)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1af066ffb610dc5d9be3ca1273990955ef)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdSet`](#structFRHAPI__EntitlementEvent_1a966c25f1ef05908e9c911bc859550faa)`() const` | Checks whether LootId_Optional has been set.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__EntitlementEvent_1a461b97f0966229b02571bd3b65445d0f)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__EntitlementEvent_1a352080fbd00ce9e45c9563f78e293e73)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a9a39dd5efd926d57dc94f2705b773e6c)`()` | Gets the value of KeyClaimUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a2c51789bbaedbb68cd7f1339b1472da5)`() const` | Gets the value of KeyClaimUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1ac7fe347acb6506c6736f0d247675f54b)`(const FGuid & DefaultValue) const` | Gets the value of KeyClaimUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1d0edade85b970c06630c3a29a80678d)`(FGuid & OutValue) const` | Fills OutValue with the value of KeyClaimUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1ab50a925679959f3b7601e7ff7fb253cb)`()` | Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1ab1c4554a54c3dd62c47e783a19f0795b)`() const` | Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a8ab6f303bbf02c26dbc42f8334d37cd5)`(const FGuid & NewValue)` | Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true.
`public inline void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1afea0e0a9c49b35bb3b169b064a6f561d)`(FGuid && NewValue)` | Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true using move semantics.
`public inline void `[`ClearKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631)`()` | Clears the value of KeyClaimUuid_Optional and sets KeyClaimUuid_IsSet to false.
`public inline bool `[`IsKeyClaimUuidSet`](#structFRHAPI__EntitlementEvent_1adc53dee99f20af1172a2a76ac9c24dba)`() const` | Checks whether KeyClaimUuid_Optional has been set.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1a2af8872eaaea5373bf7deb3a6ee1c8cf)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1ac1189d7bd844381eeff8140f8c8c89fe)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1a1c63dc9fbe262e47e80ebc34b2eaad62)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1adbab92856c57e5a0ecaa5d53b3d9961d)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a3530b09891c3149a8dabddf4c4600379)`()` | Gets the value of LastModified.
`public inline const FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a6fa30cb2d94b94ae4ecf36624ca3e6b8)`() const` | Gets the value of LastModified.
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

#### `public inline FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1a8fa05c298ce324cc159228ecff2e63b7)`()` <a id="structFRHAPI__EntitlementEvent_1a8fa05c298ce324cc159228ecff2e63b7"></a>

Gets the value of EventId.

#### `public inline const FString & `[`GetEventId`](#structFRHAPI__EntitlementEvent_1aba305daa00ff7e2fa4c5b45eac551fde)`() const` <a id="structFRHAPI__EntitlementEvent_1aba305daa00ff7e2fa4c5b45eac551fde"></a>

Gets the value of EventId.

#### `public inline void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ab2e7caf1a7a94d7d0f78b4c5147260a1)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab2e7caf1a7a94d7d0f78b4c5147260a1"></a>

Sets the value of EventId.

#### `public inline void `[`SetEventId`](#structFRHAPI__EntitlementEvent_1ad4b28571815cddc239b2d0a1c2659768)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1ad4b28571815cddc239b2d0a1c2659768"></a>

Sets the value of EventId using move semantics.

#### `public inline ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1a50b0931a49c2ea2eb3609dde1f9bf198)`()` <a id="structFRHAPI__EntitlementEvent_1a50b0931a49c2ea2eb3609dde1f9bf198"></a>

Gets the value of ActionType.

#### `public inline const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEvent_1af27f3e7869dfbffc2d4fbbbc730f8c3b)`() const` <a id="structFRHAPI__EntitlementEvent_1af27f3e7869dfbffc2d4fbbbc730f8c3b"></a>

Gets the value of ActionType.

#### `public inline void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1ae8c1691815e0962fa4b4f73e02d1e5ee)`(const ERHAPI_EntitlementActionType & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ae8c1691815e0962fa4b4f73e02d1e5ee"></a>

Sets the value of ActionType.

#### `public inline void `[`SetActionType`](#structFRHAPI__EntitlementEvent_1ab6483c615db1ee7b394c0b910e0711a2)`(ERHAPI_EntitlementActionType && NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab6483c615db1ee7b394c0b910e0711a2"></a>

Sets the value of ActionType using move semantics.

#### `public inline ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1ad10dabb03298ff17f4a602434e17e06e)`()` <a id="structFRHAPI__EntitlementEvent_1ad10dabb03298ff17f4a602434e17e06e"></a>

Gets the value of EntitlementType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a760b8fbba5372e8718d5a7c5b3b98023)`() const` <a id="structFRHAPI__EntitlementEvent_1a760b8fbba5372e8718d5a7c5b3b98023"></a>

Gets the value of EntitlementType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementType & `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1aa53d82b1756928c2e601c6aacaaaa1c4)`(const ERHAPI_EntitlementType & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1aa53d82b1756928c2e601c6aacaaaa1c4"></a>

Gets the value of EntitlementType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntitlementType`](#structFRHAPI__EntitlementEvent_1a60829820e6968a02f730fe32f453daf8)`(ERHAPI_EntitlementType & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a60829820e6968a02f730fe32f453daf8"></a>

Fills OutValue with the value of EntitlementType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1a15628aae2cdf6380234793d0cfc8d682)`()` <a id="structFRHAPI__EntitlementEvent_1a15628aae2cdf6380234793d0cfc8d682"></a>

Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementType * `[`GetEntitlementTypeOrNull`](#structFRHAPI__EntitlementEvent_1affeca70f1db15142be0e9e69e5cc608c)`() const` <a id="structFRHAPI__EntitlementEvent_1affeca70f1db15142be0e9e69e5cc608c"></a>

Returns a pointer to EntitlementType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a5ff9352e4d9b1bfeb2095274e4b3df99)`(const ERHAPI_EntitlementType & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a5ff9352e4d9b1bfeb2095274e4b3df99"></a>

Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true.

#### `public inline void `[`SetEntitlementType`](#structFRHAPI__EntitlementEvent_1a01f938722a1c25698046a35cdddffd0b)`(ERHAPI_EntitlementType && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a01f938722a1c25698046a35cdddffd0b"></a>

Sets the value of EntitlementType_Optional and also sets EntitlementType_IsSet to true using move semantics.

#### `public inline void `[`ClearEntitlementType`](#structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63)`()` <a id="structFRHAPI__EntitlementEvent_1ab5fc55849a7f316c82f0d8c378663c63"></a>

Clears the value of EntitlementType_Optional and sets EntitlementType_IsSet to false.

#### `public inline bool `[`IsEntitlementTypeSet`](#structFRHAPI__EntitlementEvent_1a2ceb88164d43a8957c653172568bfa86)`() const` <a id="structFRHAPI__EntitlementEvent_1a2ceb88164d43a8957c653172568bfa86"></a>

Checks whether EntitlementType_Optional has been set.

#### `public inline ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1ab7128a4c7012a8df7b2801372c2419e3)`()` <a id="structFRHAPI__EntitlementEvent_1ab7128a4c7012a8df7b2801372c2419e3"></a>

Gets the value of Status.

#### `public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEvent_1a46f05f45e94931cfa649d24d168d66ba)`() const` <a id="structFRHAPI__EntitlementEvent_1a46f05f45e94931cfa649d24d168d66ba"></a>

Gets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a32bcdd2a566838299c20df134f2aafea)`(const ERHAPI_EntitlementEventStatus & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a32bcdd2a566838299c20df134f2aafea"></a>

Sets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__EntitlementEvent_1a9d27604fc4c683873a23d5da37c00d38)`(ERHAPI_EntitlementEventStatus && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a9d27604fc4c683873a23d5da37c00d38"></a>

Sets the value of Status using move semantics.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a9258e20efe8ab50dd2b23aa80f0bc4be)`()` <a id="structFRHAPI__EntitlementEvent_1a9258e20efe8ab50dd2b23aa80f0bc4be"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEvent_1add5aee352f67caa2da2f61186291cda2)`() const` <a id="structFRHAPI__EntitlementEvent_1add5aee352f67caa2da2f61186291cda2"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a06c180302f7f61e5cd44b47b8b3fa6d8)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a06c180302f7f61e5cd44b47b8b3fa6d8"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEvent_1a481ffe075c7a977f9ff5a36a45ec5fa7)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a481ffe075c7a977f9ff5a36a45ec5fa7"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a9e47deaf29e5ede77df647849263c9db)`()` <a id="structFRHAPI__EntitlementEvent_1a9e47deaf29e5ede77df647849263c9db"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1ad6eb3e3086ac72c65e4ec8273deca86c)`() const` <a id="structFRHAPI__EntitlementEvent_1ad6eb3e3086ac72c65e4ec8273deca86c"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a575520102592cb795ec7036d5efa758b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a575520102592cb795ec7036d5efa758b"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerId`](#structFRHAPI__EntitlementEvent_1a7da68afdfa06811f1cc0073920449241)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a7da68afdfa06811f1cc0073920449241"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1aa08d17e49964fbed4ab7e7658f539521)`()` <a id="structFRHAPI__EntitlementEvent_1aa08d17e49964fbed4ab7e7658f539521"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__EntitlementEvent_1ab366ff3b50640ecb17295e50dd08c75e)`() const` <a id="structFRHAPI__EntitlementEvent_1ab366ff3b50640ecb17295e50dd08c75e"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a034a93220a1be1ba15e87ae5e4c633ce)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a034a93220a1be1ba15e87ae5e4c633ce"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__EntitlementEvent_1a3c9344f27e29cf874fb7e0579d8119e7)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a3c9344f27e29cf874fb7e0579d8119e7"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4)`()` <a id="structFRHAPI__EntitlementEvent_1af5146abdacbb3ecff369e2b812e548b4"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline bool `[`IsPlayerIdSet`](#structFRHAPI__EntitlementEvent_1aa20c0fba44c1b8f95e2ab51b3cc37c2a)`() const` <a id="structFRHAPI__EntitlementEvent_1aa20c0fba44c1b8f95e2ab51b3cc37c2a"></a>

Checks whether PlayerId_Optional has been set.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__EntitlementEvent_1a3026ad7ecda02aa2c1b451bc9996f115)`() const` <a id="structFRHAPI__EntitlementEvent_1a3026ad7ecda02aa2c1b451bc9996f115"></a>

Returns true if PlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__EntitlementEvent_1ae741a5dd78801d9663c20f485968a08d)`()` <a id="structFRHAPI__EntitlementEvent_1ae741a5dd78801d9663c20f485968a08d"></a>

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1ad136ea7c8a1f5609c807b56ed64b15b4)`()` <a id="structFRHAPI__EntitlementEvent_1ad136ea7c8a1f5609c807b56ed64b15b4"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEvent_1a5f3d6675f8a0b577a38d2588cae16078)`() const` <a id="structFRHAPI__EntitlementEvent_1a5f3d6675f8a0b577a38d2588cae16078"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a7df513bad966ecdc3076a745056b5fe1)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a7df513bad966ecdc3076a745056b5fe1"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEvent_1a3ff194bd82fcdba2dcd35094c937b9e9)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a3ff194bd82fcdba2dcd35094c937b9e9"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1ac5b7766d12b378e59784409e6531a2db)`()` <a id="structFRHAPI__EntitlementEvent_1ac5b7766d12b378e59784409e6531a2db"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEvent_1af33448b613cf1846b7507bbe307c78af)`() const` <a id="structFRHAPI__EntitlementEvent_1af33448b613cf1846b7507bbe307c78af"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aafe0fb182cc70300bc8f55d63725135c)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1aafe0fb182cc70300bc8f55d63725135c"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEvent_1aba889cf4450aa959ae7ea48cc05d1916)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1aba889cf4450aa959ae7ea48cc05d1916"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1ac64eebb40e571adef23064287c68ab8e)`()` <a id="structFRHAPI__EntitlementEvent_1ac64eebb40e571adef23064287c68ab8e"></a>

Gets the value of Sku.

#### `public inline const FString & `[`GetSku`](#structFRHAPI__EntitlementEvent_1ac219af2823f3e347ac0211c8825ba573)`() const` <a id="structFRHAPI__EntitlementEvent_1ac219af2823f3e347ac0211c8825ba573"></a>

Gets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__EntitlementEvent_1a6d9abf334d5639a9602bfdc164d69e70)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a6d9abf334d5639a9602bfdc164d69e70"></a>

Sets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__EntitlementEvent_1ad8ea52866f9417b47f70be452070d7a7)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1ad8ea52866f9417b47f70be452070d7a7"></a>

Sets the value of Sku using move semantics.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1aaec5d6e86469a2fcac18b98d68b325d9)`()` <a id="structFRHAPI__EntitlementEvent_1aaec5d6e86469a2fcac18b98d68b325d9"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEvent_1ac4e5d6d64fccff62414485a0c9a2e460)`() const` <a id="structFRHAPI__EntitlementEvent_1ac4e5d6d64fccff62414485a0c9a2e460"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1a52507a0f0713e30caf8e1662e865f575)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a52507a0f0713e30caf8e1662e865f575"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEvent_1a1b727920a518f660061a03705726196e)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a1b727920a518f660061a03705726196e"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__EntitlementEvent_1a8f992e4fc07f33ee0da0a253d214a72c)`() const` <a id="structFRHAPI__EntitlementEvent_1a8f992e4fc07f33ee0da0a253d214a72c"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__EntitlementEvent_1a72c3ce100d0da50ad259598fb1fee0d1)`()` <a id="structFRHAPI__EntitlementEvent_1a72c3ce100d0da50ad259598fb1fee0d1"></a>

Sets the value of Quantity to its default

#### `public inline FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a67d12102d20ac483c8265de337d7f359)`()` <a id="structFRHAPI__EntitlementEvent_1a67d12102d20ac483c8265de337d7f359"></a>

Gets the value of PlatformTransactionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1ac68f5568867bb08d970dd1980aec1a8c)`() const` <a id="structFRHAPI__EntitlementEvent_1ac68f5568867bb08d970dd1980aec1a8c"></a>

Gets the value of PlatformTransactionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a7714529145fb1737a162cc97614fd704)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a7714529145fb1737a162cc97614fd704"></a>

Gets the value of PlatformTransactionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a2e6629b61a341581b10b994d11ac5221)`(FString & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a2e6629b61a341581b10b994d11ac5221"></a>

Fills OutValue with the value of PlatformTransactionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1a9fba0911289eb83ef6602b937a89e9d3)`()` <a id="structFRHAPI__EntitlementEvent_1a9fba0911289eb83ef6602b937a89e9d3"></a>

Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformTransactionIdOrNull`](#structFRHAPI__EntitlementEvent_1aab5075ddf23f1442eed4b039db1bd77d)`() const` <a id="structFRHAPI__EntitlementEvent_1aab5075ddf23f1442eed4b039db1bd77d"></a>

Returns a pointer to PlatformTransactionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a48a51b52a980be5bd9adf2cdd6d226ee)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a48a51b52a980be5bd9adf2cdd6d226ee"></a>

Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true.

#### `public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1a7ad1df8a745c6ac15a5c4027a5ebffb0)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a7ad1df8a745c6ac15a5c4027a5ebffb0"></a>

Sets the value of PlatformTransactionId_Optional and also sets PlatformTransactionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformTransactionId`](#structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6)`()` <a id="structFRHAPI__EntitlementEvent_1af39f853e7fe1b1a432b85a8fa41deba6"></a>

Clears the value of PlatformTransactionId_Optional and sets PlatformTransactionId_IsSet to false.

#### `public inline bool `[`IsPlatformTransactionIdSet`](#structFRHAPI__EntitlementEvent_1a4670d3f9c7ec4c5a17c33162d4423e70)`() const` <a id="structFRHAPI__EntitlementEvent_1a4670d3f9c7ec4c5a17c33162d4423e70"></a>

Checks whether PlatformTransactionId_Optional has been set.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a24f101bb722353446520ad9e7d2fdb37)`()` <a id="structFRHAPI__EntitlementEvent_1a24f101bb722353446520ad9e7d2fdb37"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1ac5dd4bfa74335272eb52b6f15684ca29)`() const` <a id="structFRHAPI__EntitlementEvent_1ac5dd4bfa74335272eb52b6f15684ca29"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a00a0f4a4307723c2a13dab370dac7b25)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a00a0f4a4307723c2a13dab370dac7b25"></a>

Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformData`](#structFRHAPI__EntitlementEvent_1a22c4188347e5b31e0daef9bfe192d4dc)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a22c4188347e5b31e0daef9bfe192d4dc"></a>

Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1abc10fecb8d547226e0458396ee1eff2e)`()` <a id="structFRHAPI__EntitlementEvent_1abc10fecb8d547226e0458396ee1eff2e"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEvent_1a5ae3abd809c80aa49c2472b4612cf7a2)`() const` <a id="structFRHAPI__EntitlementEvent_1a5ae3abd809c80aa49c2472b4612cf7a2"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1aa9ee212cdf87a1b33a40480242649379)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__EntitlementEvent_1aa9ee212cdf87a1b33a40480242649379"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.

#### `public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEvent_1a01a5a034b70b5ae19264132ffa027f19)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a01a5a034b70b5ae19264132ffa027f19"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174)`()` <a id="structFRHAPI__EntitlementEvent_1a05bd248c86e3a9deee67131f187a2174"></a>

Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.

#### `public inline bool `[`IsPlatformDataSet`](#structFRHAPI__EntitlementEvent_1ab8c09e6238f1c12d46adb0343af803e0)`() const` <a id="structFRHAPI__EntitlementEvent_1ab8c09e6238f1c12d46adb0343af803e0"></a>

Checks whether PlatformData_Optional has been set.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a8e065ff0d983575759f958ac2e5dbc7e)`()` <a id="structFRHAPI__EntitlementEvent_1a8e065ff0d983575759f958ac2e5dbc7e"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1aca33d8286a47a1408fdd067e2e328e46)`() const` <a id="structFRHAPI__EntitlementEvent_1aca33d8286a47a1408fdd067e2e328e46"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a6e8ef3cf88cd65403df112840c02304e)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1a6e8ef3cf88cd65403df112840c02304e"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__EntitlementEvent_1a5acc6a2b31adbb163fd19fb3fe7bd3f7)`(FString & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a5acc6a2b31adbb163fd19fb3fe7bd3f7"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a7de35727a69a10efae161fdd3957c970)`()` <a id="structFRHAPI__EntitlementEvent_1a7de35727a69a10efae161fdd3957c970"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__EntitlementEvent_1a62e48d6763699a16c1dcbfca0a32426a)`() const` <a id="structFRHAPI__EntitlementEvent_1a62e48d6763699a16c1dcbfca0a32426a"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a0fdab933915bec218e0eff6162b6922e)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a0fdab933915bec218e0eff6162b6922e"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__EntitlementEvent_1a67409743db49868c65943f94e4599442)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a67409743db49868c65943f94e4599442"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d)`()` <a id="structFRHAPI__EntitlementEvent_1a0c8208b28982b04f72aea22f8499ac8d"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline bool `[`IsOrderIdSet`](#structFRHAPI__EntitlementEvent_1a583d9eef27d285815fde2a61140aba5e)`() const` <a id="structFRHAPI__EntitlementEvent_1a583d9eef27d285815fde2a61140aba5e"></a>

Checks whether OrderId_Optional has been set.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a221e177682e8be287320b5d012a5bebf)`()` <a id="structFRHAPI__EntitlementEvent_1a221e177682e8be287320b5d012a5bebf"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a10d764e83eaf8b6af47f653d6845f13a)`() const` <a id="structFRHAPI__EntitlementEvent_1a10d764e83eaf8b6af47f653d6845f13a"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__EntitlementEvent_1ad0fae389c6096c36b57817b0042ee738)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1ad0fae389c6096c36b57817b0042ee738"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__EntitlementEvent_1a32ecb807d1e953da5476cdedae4c15b1)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a32ecb807d1e953da5476cdedae4c15b1"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1a00995de4a5d783192b7f1d4007999b5b)`()` <a id="structFRHAPI__EntitlementEvent_1a00995de4a5d783192b7f1d4007999b5b"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__EntitlementEvent_1ad96ef018b43054ee365457f015f83d9d)`() const` <a id="structFRHAPI__EntitlementEvent_1ad96ef018b43054ee365457f015f83d9d"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1ab38a5548a0a306293f24bfca9e487845)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab38a5548a0a306293f24bfca9e487845"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__EntitlementEvent_1af066ffb610dc5d9be3ca1273990955ef)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEvent_1af066ffb610dc5d9be3ca1273990955ef"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258)`()` <a id="structFRHAPI__EntitlementEvent_1a08856ada3f43071b642f45fafe05a258"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdSet`](#structFRHAPI__EntitlementEvent_1a966c25f1ef05908e9c911bc859550faa)`() const` <a id="structFRHAPI__EntitlementEvent_1a966c25f1ef05908e9c911bc859550faa"></a>

Checks whether LootId_Optional has been set.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__EntitlementEvent_1a461b97f0966229b02571bd3b65445d0f)`() const` <a id="structFRHAPI__EntitlementEvent_1a461b97f0966229b02571bd3b65445d0f"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__EntitlementEvent_1a352080fbd00ce9e45c9563f78e293e73)`()` <a id="structFRHAPI__EntitlementEvent_1a352080fbd00ce9e45c9563f78e293e73"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a9a39dd5efd926d57dc94f2705b773e6c)`()` <a id="structFRHAPI__EntitlementEvent_1a9a39dd5efd926d57dc94f2705b773e6c"></a>

Gets the value of KeyClaimUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a2c51789bbaedbb68cd7f1339b1472da5)`() const` <a id="structFRHAPI__EntitlementEvent_1a2c51789bbaedbb68cd7f1339b1472da5"></a>

Gets the value of KeyClaimUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1ac7fe347acb6506c6736f0d247675f54b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__EntitlementEvent_1ac7fe347acb6506c6736f0d247675f54b"></a>

Gets the value of KeyClaimUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1d0edade85b970c06630c3a29a80678d)`(FGuid & OutValue) const` <a id="structFRHAPI__EntitlementEvent_1a1d0edade85b970c06630c3a29a80678d"></a>

Fills OutValue with the value of KeyClaimUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1ab50a925679959f3b7601e7ff7fb253cb)`()` <a id="structFRHAPI__EntitlementEvent_1ab50a925679959f3b7601e7ff7fb253cb"></a>

Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetKeyClaimUuidOrNull`](#structFRHAPI__EntitlementEvent_1ab1c4554a54c3dd62c47e783a19f0795b)`() const` <a id="structFRHAPI__EntitlementEvent_1ab1c4554a54c3dd62c47e783a19f0795b"></a>

Returns a pointer to KeyClaimUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a8ab6f303bbf02c26dbc42f8334d37cd5)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a8ab6f303bbf02c26dbc42f8334d37cd5"></a>

Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true.

#### `public inline void `[`SetKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1afea0e0a9c49b35bb3b169b064a6f561d)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEvent_1afea0e0a9c49b35bb3b169b064a6f561d"></a>

Sets the value of KeyClaimUuid_Optional and also sets KeyClaimUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearKeyClaimUuid`](#structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631)`()` <a id="structFRHAPI__EntitlementEvent_1a1605339c11ff8db171f9fdc308220631"></a>

Clears the value of KeyClaimUuid_Optional and sets KeyClaimUuid_IsSet to false.

#### `public inline bool `[`IsKeyClaimUuidSet`](#structFRHAPI__EntitlementEvent_1adc53dee99f20af1172a2a76ac9c24dba)`() const` <a id="structFRHAPI__EntitlementEvent_1adc53dee99f20af1172a2a76ac9c24dba"></a>

Checks whether KeyClaimUuid_Optional has been set.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1a2af8872eaaea5373bf7deb3a6ee1c8cf)`()` <a id="structFRHAPI__EntitlementEvent_1a2af8872eaaea5373bf7deb3a6ee1c8cf"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__EntitlementEvent_1ac1189d7bd844381eeff8140f8c8c89fe)`() const` <a id="structFRHAPI__EntitlementEvent_1ac1189d7bd844381eeff8140f8c8c89fe"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1a1c63dc9fbe262e47e80ebc34b2eaad62)`(const FDateTime & NewValue)` <a id="structFRHAPI__EntitlementEvent_1a1c63dc9fbe262e47e80ebc34b2eaad62"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__EntitlementEvent_1adbab92856c57e5a0ecaa5d53b3d9961d)`(FDateTime && NewValue)` <a id="structFRHAPI__EntitlementEvent_1adbab92856c57e5a0ecaa5d53b3d9961d"></a>

Sets the value of Created using move semantics.

#### `public inline FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a3530b09891c3149a8dabddf4c4600379)`()` <a id="structFRHAPI__EntitlementEvent_1a3530b09891c3149a8dabddf4c4600379"></a>

Gets the value of LastModified.

#### `public inline const FDateTime & `[`GetLastModified`](#structFRHAPI__EntitlementEvent_1a6fa30cb2d94b94ae4ecf36624ca3e6b8)`() const` <a id="structFRHAPI__EntitlementEvent_1a6fa30cb2d94b94ae4ecf36624ca3e6b8"></a>

Gets the value of LastModified.

#### `public inline void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1ab8f4ff02df207045d00257de6397c6b4)`(const FDateTime & NewValue)` <a id="structFRHAPI__EntitlementEvent_1ab8f4ff02df207045d00257de6397c6b4"></a>

Sets the value of LastModified.

#### `public inline void `[`SetLastModified`](#structFRHAPI__EntitlementEvent_1a5d15252ee09b6117e3f310fecf96966d)`(FDateTime && NewValue)` <a id="structFRHAPI__EntitlementEvent_1a5d15252ee09b6117e3f310fecf96966d"></a>

Sets the value of LastModified using move semantics.

