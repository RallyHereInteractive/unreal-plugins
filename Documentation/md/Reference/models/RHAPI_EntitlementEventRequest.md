---
title: RHAPI_EntitlementEventRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EntitlementEventRequest`](#structFRHAPI__EntitlementEventRequest) | 

## struct `FRHAPI_EntitlementEventRequest` <a id="structFRHAPI__EntitlementEventRequest"></a>

```
struct FRHAPI_EntitlementEventRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_EntitlementActionType `[`ActionType`](#structFRHAPI__EntitlementEventRequest_1abe0be0d3e0fdf772ade0349a74a6785e) | 
`public ERHAPI_EntitlementEventStatus `[`Status_Optional`](#structFRHAPI__EntitlementEventRequest_1a48844781765c2611c39b56877072aab7) | 
`public bool `[`Status_IsSet`](#structFRHAPI__EntitlementEventRequest_1ac50221f309d1d658a81386f77a4a3b4b) | true if Status_Optional has been set to a value
`public bool `[`Status_IsNull`](#structFRHAPI__EntitlementEventRequest_1ac403b9a68a046dd835a92953d129a104) | true if Status_Optional has been explicitly set to null
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__EntitlementEventRequest_1a168d959085f1eb574ed17f20090eda7c) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__EntitlementEventRequest_1ac1905a66d877603e7df7f4cae4d17711) | true if PlayerUuid_Optional has been set to a value
`public bool `[`PlayerUuid_IsNull`](#structFRHAPI__EntitlementEventRequest_1aba24131f858455e3265e97f58a29d201) | true if PlayerUuid_Optional has been explicitly set to null
`public ERHAPI_InventoryPlatform `[`Platform`](#structFRHAPI__EntitlementEventRequest_1a0d8b7b006130cb91ac77590da56dd7df) | 
`public FString `[`PlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a016bb155bfcdc5a0df22863910ca3bb1) | The platform user ID for the event.
`public FString `[`Sku`](#structFRHAPI__EntitlementEventRequest_1a03e83a37f9558bf19b40b4cbe372abfb) | The SKU for the event.
`public int32 `[`Quantity_Optional`](#structFRHAPI__EntitlementEventRequest_1a427988aae863278137d510b0d02c6d51) | The quantity for the event.
`public bool `[`Quantity_IsSet`](#structFRHAPI__EntitlementEventRequest_1aaa8e6337d345e8257aaa555393c1f949) | true if Quantity_Optional has been set to a value
`public FString `[`PlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a6d6b511b12d274e9984896e564e399c8) | The external transaction ID for the event.
`public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`PlatformData_Optional`](#structFRHAPI__EntitlementEventRequest_1acb7ef633e8bbc66fb39e431d447025b9) | 
`public bool `[`PlatformData_IsSet`](#structFRHAPI__EntitlementEventRequest_1a68e89c8d276068e108bb5055544533e2) | true if PlatformData_Optional has been set to a value
`public bool `[`PlatformData_IsNull`](#structFRHAPI__EntitlementEventRequest_1a5b8464098bb80588fcefd07846d94775) | true if PlatformData_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEventRequest_1a4309e72a57783240427ec034fa3e0f88)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventRequest_1ac9c7b582a85be7231954a4ea20fbe4c7)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a93bdc99482b7aa6a3805c634b45957cb)`()` | Gets the value of ActionType.
`public inline FORCEINLINE const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1aec5c300dd3b48e174e5a86857ddcc7f5)`() const` | Gets the value of ActionType.
`public inline FORCEINLINE void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1a0f3e7b917899e6b311bdb0fbeb54ac0b)`(const ERHAPI_EntitlementActionType & NewValue)` | Sets the value of ActionType.
`public inline FORCEINLINE void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1a0ebcb5f6d7c56d27fa88cd0d23041fe3)`(ERHAPI_EntitlementActionType && NewValue)` | Sets the value of ActionType using move semantics.
`public inline FORCEINLINE ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1ad5847b90a93996fdab318ed61c3002e6)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1adc0980497131653a3a17864f55cd33ed)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a34fe23247f94df5b8dd44059bd86f2d2)`(const ERHAPI_EntitlementEventStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a74ea2508bd8b10c448aa64e6738b2342)`(ERHAPI_EntitlementEventStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1a3b2c7afbd58bc9e4b7f037435c8dc14d)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1a8c436cb63e967d74152809352f47863b)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1accbd3bfa183c6bcd8f26978011bb1f0c)`(const ERHAPI_EntitlementEventStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1ad2d822a6be2ed788ce4dac47cca06fe5)`(ERHAPI_EntitlementEventStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FORCEINLINE void `[`SetStatusToNull`](#structFRHAPI__EntitlementEventRequest_1a7efab65e9fd6249294d26e26586668fe)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStatusNull`](#structFRHAPI__EntitlementEventRequest_1a49ea9140cf79a0d97fdf4ab5c2bc70b1)`() const` | Checks whether Status_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a470785acd3281949e035c646a62e55af)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ac8598598ce2ffc088352f94b52ac3555)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1af26c13db360e606a614b9fc88c6f1a2b)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a8765fdb5f6b8d98a7d43729122ec7101)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1ab8aebad0d63439ab635d672d16f0d24e)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1acaa6b05fcda170f9a97b7eda0c639f2b)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a501f1eb7eb1ed01465f436a5e5e132be)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a1893fb22bd5a4a8dc832b17ba96ec452)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetPlayerUuidToNull`](#structFRHAPI__EntitlementEventRequest_1a06665932ce841cf30825b541ad1174a1)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerUuidNull`](#structFRHAPI__EntitlementEventRequest_1a45b085211a23f0c447d7c03ee9f1caf0)`() const` | Checks whether PlayerUuid_Optional is set to null.
`public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1ac1897fec421736c47628127ad354009e)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1a62ebee53c326c879d336ccf2ec4c4dc0)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1a279a1ae70aafd20ea2b2db08a2b08bd3)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1a205bf95a6e4e457453ce45aa27a6ca14)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9d4a8f35f74d25e3f4ddcd0be86959c6)`()` | Gets the value of PlatformUserId.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9ed1a7444daca09ce1057ad7a34b3eed)`() const` | Gets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a3ab3d8c00097d20d7299b78f7a9ec8bc)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a06958f159844365f331056a820bcbf16)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FORCEINLINE FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1a903e33b792f713e8a1ba1ffea0b601d0)`()` | Gets the value of Sku.
`public inline FORCEINLINE const FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1ac60bf8568a42161d17beb3ef566f6882)`() const` | Gets the value of Sku.
`public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1a9f692f6d9b662501332d0682f711f455)`(const FString & NewValue)` | Sets the value of Sku.
`public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1a28c5553f493200d949380222f0d39d7b)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a5e07868e0723351e0d9ddd14365860a6)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a05e0b0336ba427b7277c3744089f1c1e)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1aa3d99ba89204f523cec31c53b7c23ca3)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a346faae9831dd19778a6f23bfefc7103)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1af92d44bf1f0d1dcb0f292760fa3c6abe)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1ac3c4e473b3400cf5803d9f89a260d11f)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1a95eb0a3629d8944c2fc8aad60b60d114)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1abf887641df9841ec140b5c80bb4db886)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__EntitlementEventRequest_1a7924992634731fd4ee2c337d9e599f32)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__EntitlementEventRequest_1a38cd3151f5a6158b75e20ae8038dc44b)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1abe13244c3faea8c9bbbb21a161641eeb)`()` | Gets the value of PlatformTransactionId.
`public inline FORCEINLINE const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1af71ba0c7644b9fbb5c0235b310d02b43)`() const` | Gets the value of PlatformTransactionId.
`public inline FORCEINLINE void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1abfb413f29938bdb2d21b4047c3af962c)`(const FString & NewValue)` | Sets the value of PlatformTransactionId.
`public inline FORCEINLINE void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1aa9fe204e31693f484a49c26ed5e656a3)`(FString && NewValue)` | Sets the value of PlatformTransactionId using move semantics.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a71af37a0f7ad41c7dff1909fb6d8e7a1)`()` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1aee5c0652193a7552e22da6701766177e)`() const` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a99a067c84a92ba9c1b2ebe681e2c924c)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` | Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a37b65d6fbb28535cc69d6d837988c89e)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` | Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a7f9a84392b8156d63ba4bf40d1994b2c)`()` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a0d94e1906e3abc255127fa086b975203)`() const` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a65ecf3d542778db9b0b6cc9ca4b974b8)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a59ff44ba144ee99683de8967536d1ab5)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.
`public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEventRequest_1a2c87d43e88c16674be4f11149059b822)`()` | Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.
`public inline FORCEINLINE void `[`SetPlatformDataToNull`](#structFRHAPI__EntitlementEventRequest_1a314e135c4013d298b8ff399ec8301bb7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlatformDataNull`](#structFRHAPI__EntitlementEventRequest_1a6fb6da28cfd32639f77961353542e9a9)`() const` | Checks whether PlatformData_Optional is set to null.

### Members

#### `public ERHAPI_EntitlementActionType `[`ActionType`](#structFRHAPI__EntitlementEventRequest_1abe0be0d3e0fdf772ade0349a74a6785e) <a id="structFRHAPI__EntitlementEventRequest_1abe0be0d3e0fdf772ade0349a74a6785e"></a>

#### `public ERHAPI_EntitlementEventStatus `[`Status_Optional`](#structFRHAPI__EntitlementEventRequest_1a48844781765c2611c39b56877072aab7) <a id="structFRHAPI__EntitlementEventRequest_1a48844781765c2611c39b56877072aab7"></a>

#### `public bool `[`Status_IsSet`](#structFRHAPI__EntitlementEventRequest_1ac50221f309d1d658a81386f77a4a3b4b) <a id="structFRHAPI__EntitlementEventRequest_1ac50221f309d1d658a81386f77a4a3b4b"></a>

true if Status_Optional has been set to a value

#### `public bool `[`Status_IsNull`](#structFRHAPI__EntitlementEventRequest_1ac403b9a68a046dd835a92953d129a104) <a id="structFRHAPI__EntitlementEventRequest_1ac403b9a68a046dd835a92953d129a104"></a>

true if Status_Optional has been explicitly set to null

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__EntitlementEventRequest_1a168d959085f1eb574ed17f20090eda7c) <a id="structFRHAPI__EntitlementEventRequest_1a168d959085f1eb574ed17f20090eda7c"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__EntitlementEventRequest_1ac1905a66d877603e7df7f4cae4d17711) <a id="structFRHAPI__EntitlementEventRequest_1ac1905a66d877603e7df7f4cae4d17711"></a>

true if PlayerUuid_Optional has been set to a value

#### `public bool `[`PlayerUuid_IsNull`](#structFRHAPI__EntitlementEventRequest_1aba24131f858455e3265e97f58a29d201) <a id="structFRHAPI__EntitlementEventRequest_1aba24131f858455e3265e97f58a29d201"></a>

true if PlayerUuid_Optional has been explicitly set to null

#### `public ERHAPI_InventoryPlatform `[`Platform`](#structFRHAPI__EntitlementEventRequest_1a0d8b7b006130cb91ac77590da56dd7df) <a id="structFRHAPI__EntitlementEventRequest_1a0d8b7b006130cb91ac77590da56dd7df"></a>

#### `public FString `[`PlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a016bb155bfcdc5a0df22863910ca3bb1) <a id="structFRHAPI__EntitlementEventRequest_1a016bb155bfcdc5a0df22863910ca3bb1"></a>

The platform user ID for the event.

#### `public FString `[`Sku`](#structFRHAPI__EntitlementEventRequest_1a03e83a37f9558bf19b40b4cbe372abfb) <a id="structFRHAPI__EntitlementEventRequest_1a03e83a37f9558bf19b40b4cbe372abfb"></a>

The SKU for the event.

#### `public int32 `[`Quantity_Optional`](#structFRHAPI__EntitlementEventRequest_1a427988aae863278137d510b0d02c6d51) <a id="structFRHAPI__EntitlementEventRequest_1a427988aae863278137d510b0d02c6d51"></a>

The quantity for the event.

#### `public bool `[`Quantity_IsSet`](#structFRHAPI__EntitlementEventRequest_1aaa8e6337d345e8257aaa555393c1f949) <a id="structFRHAPI__EntitlementEventRequest_1aaa8e6337d345e8257aaa555393c1f949"></a>

true if Quantity_Optional has been set to a value

#### `public FString `[`PlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a6d6b511b12d274e9984896e564e399c8) <a id="structFRHAPI__EntitlementEventRequest_1a6d6b511b12d274e9984896e564e399c8"></a>

The external transaction ID for the event.

#### `public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`PlatformData_Optional`](#structFRHAPI__EntitlementEventRequest_1acb7ef633e8bbc66fb39e431d447025b9) <a id="structFRHAPI__EntitlementEventRequest_1acb7ef633e8bbc66fb39e431d447025b9"></a>

#### `public bool `[`PlatformData_IsSet`](#structFRHAPI__EntitlementEventRequest_1a68e89c8d276068e108bb5055544533e2) <a id="structFRHAPI__EntitlementEventRequest_1a68e89c8d276068e108bb5055544533e2"></a>

true if PlatformData_Optional has been set to a value

#### `public bool `[`PlatformData_IsNull`](#structFRHAPI__EntitlementEventRequest_1a5b8464098bb80588fcefd07846d94775) <a id="structFRHAPI__EntitlementEventRequest_1a5b8464098bb80588fcefd07846d94775"></a>

true if PlatformData_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEventRequest_1a4309e72a57783240427ec034fa3e0f88)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EntitlementEventRequest_1a4309e72a57783240427ec034fa3e0f88"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventRequest_1ac9c7b582a85be7231954a4ea20fbe4c7)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EntitlementEventRequest_1ac9c7b582a85be7231954a4ea20fbe4c7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a93bdc99482b7aa6a3805c634b45957cb)`()` <a id="structFRHAPI__EntitlementEventRequest_1a93bdc99482b7aa6a3805c634b45957cb"></a>

Gets the value of ActionType.

#### `public inline FORCEINLINE const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1aec5c300dd3b48e174e5a86857ddcc7f5)`() const` <a id="structFRHAPI__EntitlementEventRequest_1aec5c300dd3b48e174e5a86857ddcc7f5"></a>

Gets the value of ActionType.

#### `public inline FORCEINLINE void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1a0f3e7b917899e6b311bdb0fbeb54ac0b)`(const ERHAPI_EntitlementActionType & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a0f3e7b917899e6b311bdb0fbeb54ac0b"></a>

Sets the value of ActionType.

#### `public inline FORCEINLINE void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1a0ebcb5f6d7c56d27fa88cd0d23041fe3)`(ERHAPI_EntitlementActionType && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a0ebcb5f6d7c56d27fa88cd0d23041fe3"></a>

Sets the value of ActionType using move semantics.

#### `public inline FORCEINLINE ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1ad5847b90a93996fdab318ed61c3002e6)`()` <a id="structFRHAPI__EntitlementEventRequest_1ad5847b90a93996fdab318ed61c3002e6"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1adc0980497131653a3a17864f55cd33ed)`() const` <a id="structFRHAPI__EntitlementEventRequest_1adc0980497131653a3a17864f55cd33ed"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a34fe23247f94df5b8dd44059bd86f2d2)`(const ERHAPI_EntitlementEventStatus & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a34fe23247f94df5b8dd44059bd86f2d2"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a74ea2508bd8b10c448aa64e6738b2342)`(ERHAPI_EntitlementEventStatus & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a74ea2508bd8b10c448aa64e6738b2342"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1a3b2c7afbd58bc9e4b7f037435c8dc14d)`()` <a id="structFRHAPI__EntitlementEventRequest_1a3b2c7afbd58bc9e4b7f037435c8dc14d"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1a8c436cb63e967d74152809352f47863b)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a8c436cb63e967d74152809352f47863b"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1accbd3bfa183c6bcd8f26978011bb1f0c)`(const ERHAPI_EntitlementEventStatus & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1accbd3bfa183c6bcd8f26978011bb1f0c"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1ad2d822a6be2ed788ce4dac47cca06fe5)`(ERHAPI_EntitlementEventStatus && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ad2d822a6be2ed788ce4dac47cca06fe5"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164)`()` <a id="structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStatusToNull`](#structFRHAPI__EntitlementEventRequest_1a7efab65e9fd6249294d26e26586668fe)`()` <a id="structFRHAPI__EntitlementEventRequest_1a7efab65e9fd6249294d26e26586668fe"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStatusNull`](#structFRHAPI__EntitlementEventRequest_1a49ea9140cf79a0d97fdf4ab5c2bc70b1)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a49ea9140cf79a0d97fdf4ab5c2bc70b1"></a>

Checks whether Status_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a470785acd3281949e035c646a62e55af)`()` <a id="structFRHAPI__EntitlementEventRequest_1a470785acd3281949e035c646a62e55af"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ac8598598ce2ffc088352f94b52ac3555)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ac8598598ce2ffc088352f94b52ac3555"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1af26c13db360e606a614b9fc88c6f1a2b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1af26c13db360e606a614b9fc88c6f1a2b"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a8765fdb5f6b8d98a7d43729122ec7101)`(FGuid & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a8765fdb5f6b8d98a7d43729122ec7101"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1ab8aebad0d63439ab635d672d16f0d24e)`()` <a id="structFRHAPI__EntitlementEventRequest_1ab8aebad0d63439ab635d672d16f0d24e"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1acaa6b05fcda170f9a97b7eda0c639f2b)`() const` <a id="structFRHAPI__EntitlementEventRequest_1acaa6b05fcda170f9a97b7eda0c639f2b"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a501f1eb7eb1ed01465f436a5e5e132be)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a501f1eb7eb1ed01465f436a5e5e132be"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a1893fb22bd5a4a8dc832b17ba96ec452)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a1893fb22bd5a4a8dc832b17ba96ec452"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25)`()` <a id="structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlayerUuidToNull`](#structFRHAPI__EntitlementEventRequest_1a06665932ce841cf30825b541ad1174a1)`()` <a id="structFRHAPI__EntitlementEventRequest_1a06665932ce841cf30825b541ad1174a1"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerUuidNull`](#structFRHAPI__EntitlementEventRequest_1a45b085211a23f0c447d7c03ee9f1caf0)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a45b085211a23f0c447d7c03ee9f1caf0"></a>

Checks whether PlayerUuid_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1ac1897fec421736c47628127ad354009e)`()` <a id="structFRHAPI__EntitlementEventRequest_1ac1897fec421736c47628127ad354009e"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1a62ebee53c326c879d336ccf2ec4c4dc0)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a62ebee53c326c879d336ccf2ec4c4dc0"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1a279a1ae70aafd20ea2b2db08a2b08bd3)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a279a1ae70aafd20ea2b2db08a2b08bd3"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1a205bf95a6e4e457453ce45aa27a6ca14)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a205bf95a6e4e457453ce45aa27a6ca14"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9d4a8f35f74d25e3f4ddcd0be86959c6)`()` <a id="structFRHAPI__EntitlementEventRequest_1a9d4a8f35f74d25e3f4ddcd0be86959c6"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9ed1a7444daca09ce1057ad7a34b3eed)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a9ed1a7444daca09ce1057ad7a34b3eed"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a3ab3d8c00097d20d7299b78f7a9ec8bc)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a3ab3d8c00097d20d7299b78f7a9ec8bc"></a>

Sets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a06958f159844365f331056a820bcbf16)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a06958f159844365f331056a820bcbf16"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1a903e33b792f713e8a1ba1ffea0b601d0)`()` <a id="structFRHAPI__EntitlementEventRequest_1a903e33b792f713e8a1ba1ffea0b601d0"></a>

Gets the value of Sku.

#### `public inline FORCEINLINE const FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1ac60bf8568a42161d17beb3ef566f6882)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ac60bf8568a42161d17beb3ef566f6882"></a>

Gets the value of Sku.

#### `public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1a9f692f6d9b662501332d0682f711f455)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a9f692f6d9b662501332d0682f711f455"></a>

Sets the value of Sku.

#### `public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1a28c5553f493200d949380222f0d39d7b)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a28c5553f493200d949380222f0d39d7b"></a>

Sets the value of Sku using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a5e07868e0723351e0d9ddd14365860a6)`()` <a id="structFRHAPI__EntitlementEventRequest_1a5e07868e0723351e0d9ddd14365860a6"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a05e0b0336ba427b7277c3744089f1c1e)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a05e0b0336ba427b7277c3744089f1c1e"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1aa3d99ba89204f523cec31c53b7c23ca3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1aa3d99ba89204f523cec31c53b7c23ca3"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a346faae9831dd19778a6f23bfefc7103)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a346faae9831dd19778a6f23bfefc7103"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1af92d44bf1f0d1dcb0f292760fa3c6abe)`()` <a id="structFRHAPI__EntitlementEventRequest_1af92d44bf1f0d1dcb0f292760fa3c6abe"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1ac3c4e473b3400cf5803d9f89a260d11f)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ac3c4e473b3400cf5803d9f89a260d11f"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1a95eb0a3629d8944c2fc8aad60b60d114)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a95eb0a3629d8944c2fc8aad60b60d114"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1abf887641df9841ec140b5c80bb4db886)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1abf887641df9841ec140b5c80bb4db886"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__EntitlementEventRequest_1a7924992634731fd4ee2c337d9e599f32)`()` <a id="structFRHAPI__EntitlementEventRequest_1a7924992634731fd4ee2c337d9e599f32"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__EntitlementEventRequest_1a38cd3151f5a6158b75e20ae8038dc44b)`()` <a id="structFRHAPI__EntitlementEventRequest_1a38cd3151f5a6158b75e20ae8038dc44b"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1abe13244c3faea8c9bbbb21a161641eeb)`()` <a id="structFRHAPI__EntitlementEventRequest_1abe13244c3faea8c9bbbb21a161641eeb"></a>

Gets the value of PlatformTransactionId.

#### `public inline FORCEINLINE const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1af71ba0c7644b9fbb5c0235b310d02b43)`() const` <a id="structFRHAPI__EntitlementEventRequest_1af71ba0c7644b9fbb5c0235b310d02b43"></a>

Gets the value of PlatformTransactionId.

#### `public inline FORCEINLINE void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1abfb413f29938bdb2d21b4047c3af962c)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1abfb413f29938bdb2d21b4047c3af962c"></a>

Sets the value of PlatformTransactionId.

#### `public inline FORCEINLINE void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1aa9fe204e31693f484a49c26ed5e656a3)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1aa9fe204e31693f484a49c26ed5e656a3"></a>

Sets the value of PlatformTransactionId using move semantics.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a71af37a0f7ad41c7dff1909fb6d8e7a1)`()` <a id="structFRHAPI__EntitlementEventRequest_1a71af37a0f7ad41c7dff1909fb6d8e7a1"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1aee5c0652193a7552e22da6701766177e)`() const` <a id="structFRHAPI__EntitlementEventRequest_1aee5c0652193a7552e22da6701766177e"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a99a067c84a92ba9c1b2ebe681e2c924c)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a99a067c84a92ba9c1b2ebe681e2c924c"></a>

Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a37b65d6fbb28535cc69d6d837988c89e)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a37b65d6fbb28535cc69d6d837988c89e"></a>

Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a7f9a84392b8156d63ba4bf40d1994b2c)`()` <a id="structFRHAPI__EntitlementEventRequest_1a7f9a84392b8156d63ba4bf40d1994b2c"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a0d94e1906e3abc255127fa086b975203)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a0d94e1906e3abc255127fa086b975203"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a65ecf3d542778db9b0b6cc9ca4b974b8)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a65ecf3d542778db9b0b6cc9ca4b974b8"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a59ff44ba144ee99683de8967536d1ab5)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a59ff44ba144ee99683de8967536d1ab5"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEventRequest_1a2c87d43e88c16674be4f11149059b822)`()` <a id="structFRHAPI__EntitlementEventRequest_1a2c87d43e88c16674be4f11149059b822"></a>

Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlatformDataToNull`](#structFRHAPI__EntitlementEventRequest_1a314e135c4013d298b8ff399ec8301bb7)`()` <a id="structFRHAPI__EntitlementEventRequest_1a314e135c4013d298b8ff399ec8301bb7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlatformDataNull`](#structFRHAPI__EntitlementEventRequest_1a6fb6da28cfd32639f77961353542e9a9)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a6fb6da28cfd32639f77961353542e9a9"></a>

Checks whether PlatformData_Optional is set to null.

