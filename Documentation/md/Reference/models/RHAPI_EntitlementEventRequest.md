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
`public ERHAPI_EntitlementActionType `[`ActionType`](#structFRHAPI__EntitlementEventRequest_1abe0be0d3e0fdf772ade0349a74a6785e) | The type of the event.
`public ERHAPI_EntitlementEventStatus `[`Status_Optional`](#structFRHAPI__EntitlementEventRequest_1a48844781765c2611c39b56877072aab7) | The status of the event.
`public bool `[`Status_IsSet`](#structFRHAPI__EntitlementEventRequest_1ac50221f309d1d658a81386f77a4a3b4b) | true if Status_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__EntitlementEventRequest_1a168d959085f1eb574ed17f20090eda7c) | Override the player UUID for the event. If not provided, the active player for the platform user will be used.
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__EntitlementEventRequest_1ac1905a66d877603e7df7f4cae4d17711) | true if PlayerUuid_Optional has been set to a value
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__EntitlementEventRequest_1ac279e5e1afff2fabbbc7ff97023e263e) | The platform for the event.
`public FString `[`PlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a016bb155bfcdc5a0df22863910ca3bb1) | The platform user ID for the event.
`public FString `[`Sku`](#structFRHAPI__EntitlementEventRequest_1a03e83a37f9558bf19b40b4cbe372abfb) | The SKU for the event.
`public int32 `[`Quantity_Optional`](#structFRHAPI__EntitlementEventRequest_1a427988aae863278137d510b0d02c6d51) | The quantity for the event.
`public bool `[`Quantity_IsSet`](#structFRHAPI__EntitlementEventRequest_1aaa8e6337d345e8257aaa555393c1f949) | true if Quantity_Optional has been set to a value
`public FString `[`PlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a6d6b511b12d274e9984896e564e399c8) | The external transaction ID for the event.
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`PlatformData_Optional`](#structFRHAPI__EntitlementEventRequest_1a3d80b9f3869cceb4771c137413cd7d30) | The platform specific data for the event.
`public bool `[`PlatformData_IsSet`](#structFRHAPI__EntitlementEventRequest_1a68e89c8d276068e108bb5055544533e2) | true if PlatformData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__EntitlementEventRequest_1a4309e72a57783240427ec034fa3e0f88)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventRequest_1ac9c7b582a85be7231954a4ea20fbe4c7)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a1ece53afeecee134f2d1f067fbd2296a)`()` | Gets the value of ActionType.
`public inline const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a6158c5767a61a46a1d6782389dff500e)`() const` | Gets the value of ActionType.
`public inline void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1a76c04db8ad62a981c9f6151feecb52f9)`(const ERHAPI_EntitlementActionType & NewValue)` | Sets the value of ActionType.
`public inline void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1ac327f8faeef996f04a6d5f2581742ba8)`(ERHAPI_EntitlementActionType && NewValue)` | Sets the value of ActionType using move semantics.
`public inline ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a82059388512b5e3113f1c8aaaab2c3aa)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1ae6c9506a488c77d889d959e82f431a3c)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a1b822cd4703f101cd167ac7339b44615)`(const ERHAPI_EntitlementEventStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1aa2d18153085179610d7033737212b3fa)`(ERHAPI_EntitlementEventStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1abe9091e841e39a9a42f22c405857bbf7)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1ab69e9672d2ef2c2cdc3f44b515a7f9c0)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1aed268faea0f993ac8d38c85a6b825ab6)`(const ERHAPI_EntitlementEventStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1a808b668f99fd16782c5568434086cbb6)`(ERHAPI_EntitlementEventStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusSet`](#structFRHAPI__EntitlementEventRequest_1ab008904c38d48a00f9b24f725c71e6db)`() const` | Checks whether Status_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a24aa4c7e09adb82140a37de58837c50c)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1af522b188904df578ae9eb65b8403f092)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ab88c72b494830023025258930f180695)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae981f213eff4f0fd01d50370c4177f6d)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1aa4070bc172a8411f41c34b2b3723cd32)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1a074557e7e053762b72ef5fa81bffc711)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ac3deed01e1e592b190974c14a6f23809)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a1bc60d68dab151c393911d0602aa167e)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__EntitlementEventRequest_1adcc103d194a2a2aaf1221e596f15bce7)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1acd78512e1e93b5fe048d1e3488ff4f02)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1aadef712bc204f500e2395a808f8f7630)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1aede2aad23bc4a8052b92db7fcb96bd4e)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1ae28168afca7ea0e3476c716fefd47515)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a547b6df4de6e2f0cbafaa32da8cfc2e6)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1af3794f68651da99d57ff9942050eb88a)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9bc2fff3f87c6c2f5476b57669c58d37)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1af89c01c218a6bb39cb52887056d7916d)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1adae1277516cf22fe5d0d009dc08139c9)`()` | Gets the value of Sku.
`public inline const FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1acc8afb564cad3b8406c3801f7fa50658)`() const` | Gets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1a4240e99c0870dd31e7e676447c4716b4)`(const FString & NewValue)` | Sets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1af6d485afe6b4f599cbcfdf4a49511888)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1ab57848007de87fdd9603c524fb2586ca)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a6305b7e72a35ede94b57c51e1bad95bb)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a2d7efac479a86e7d32dc235b02efd1eb)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a7fe66b4cc8558c19204428e317c7e892)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1a561eebfe26ab7fd93bff672237e1c506)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1a715cc7d2795a4db023f7fc5830e7c755)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1a2fee929eb965bbbe0aa113b4659f0327)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1adf4f3e914fcf4d3b0fb66a7907bec2e3)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__EntitlementEventRequest_1a7924992634731fd4ee2c337d9e599f32)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline bool `[`IsQuantitySet`](#structFRHAPI__EntitlementEventRequest_1a2820127d52728a99578e77f30b5a8696)`() const` | Checks whether Quantity_Optional has been set.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__EntitlementEventRequest_1a44e5ebf923f07d1956d9da7e269aaafc)`() const` | Returns true if Quantity_Optional is set and matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__EntitlementEventRequest_1a832166d85b06686c89c1ffc4b6f1b4bd)`()` | Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.
`public inline FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a2672c7605d650d53315f341a226cf863)`()` | Gets the value of PlatformTransactionId.
`public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1aa174dac4dbfe825101c9ff20d21d61b1)`() const` | Gets the value of PlatformTransactionId.
`public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1ad9599ee8b29356b39511d934f7699504)`(const FString & NewValue)` | Sets the value of PlatformTransactionId.
`public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a06c9810b3e1a776e1045ac5163e70c4c)`(FString && NewValue)` | Sets the value of PlatformTransactionId using move semantics.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1ac71802057c53cfde9953128ab59f91f1)`()` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a29c58ee187528a11765b0245dde82693)`() const` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a098b91ed6810a63789794689d8a83f46)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1ab71d9699e0fa6e6a498393c5c839df70)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a7d22953606000b53c9b4aa79dbcc1da4)`()` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a7824f35f9436684e3964dbe409fe1dbf)`() const` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a8ac5f400eec82df73bfc0d75f8feca8c)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.
`public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a5b3b1b5e13e86776bd69e3cf158c2bf7)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.
`public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEventRequest_1a2c87d43e88c16674be4f11149059b822)`()` | Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.
`public inline bool `[`IsPlatformDataSet`](#structFRHAPI__EntitlementEventRequest_1ab6494854717dbfc942ec101d182283c5)`() const` | Checks whether PlatformData_Optional has been set.

### Members

#### `public ERHAPI_EntitlementActionType `[`ActionType`](#structFRHAPI__EntitlementEventRequest_1abe0be0d3e0fdf772ade0349a74a6785e) <a id="structFRHAPI__EntitlementEventRequest_1abe0be0d3e0fdf772ade0349a74a6785e"></a>

The type of the event.

#### `public ERHAPI_EntitlementEventStatus `[`Status_Optional`](#structFRHAPI__EntitlementEventRequest_1a48844781765c2611c39b56877072aab7) <a id="structFRHAPI__EntitlementEventRequest_1a48844781765c2611c39b56877072aab7"></a>

The status of the event.

#### `public bool `[`Status_IsSet`](#structFRHAPI__EntitlementEventRequest_1ac50221f309d1d658a81386f77a4a3b4b) <a id="structFRHAPI__EntitlementEventRequest_1ac50221f309d1d658a81386f77a4a3b4b"></a>

true if Status_Optional has been set to a value

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__EntitlementEventRequest_1a168d959085f1eb574ed17f20090eda7c) <a id="structFRHAPI__EntitlementEventRequest_1a168d959085f1eb574ed17f20090eda7c"></a>

Override the player UUID for the event. If not provided, the active player for the platform user will be used.

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__EntitlementEventRequest_1ac1905a66d877603e7df7f4cae4d17711) <a id="structFRHAPI__EntitlementEventRequest_1ac1905a66d877603e7df7f4cae4d17711"></a>

true if PlayerUuid_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__EntitlementEventRequest_1ac279e5e1afff2fabbbc7ff97023e263e) <a id="structFRHAPI__EntitlementEventRequest_1ac279e5e1afff2fabbbc7ff97023e263e"></a>

The platform for the event.

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

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`PlatformData_Optional`](#structFRHAPI__EntitlementEventRequest_1a3d80b9f3869cceb4771c137413cd7d30) <a id="structFRHAPI__EntitlementEventRequest_1a3d80b9f3869cceb4771c137413cd7d30"></a>

The platform specific data for the event.

#### `public bool `[`PlatformData_IsSet`](#structFRHAPI__EntitlementEventRequest_1a68e89c8d276068e108bb5055544533e2) <a id="structFRHAPI__EntitlementEventRequest_1a68e89c8d276068e108bb5055544533e2"></a>

true if PlatformData_Optional has been set to a value

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

#### `public inline ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a1ece53afeecee134f2d1f067fbd2296a)`()` <a id="structFRHAPI__EntitlementEventRequest_1a1ece53afeecee134f2d1f067fbd2296a"></a>

Gets the value of ActionType.

#### `public inline const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a6158c5767a61a46a1d6782389dff500e)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a6158c5767a61a46a1d6782389dff500e"></a>

Gets the value of ActionType.

#### `public inline void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1a76c04db8ad62a981c9f6151feecb52f9)`(const ERHAPI_EntitlementActionType & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a76c04db8ad62a981c9f6151feecb52f9"></a>

Sets the value of ActionType.

#### `public inline void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1ac327f8faeef996f04a6d5f2581742ba8)`(ERHAPI_EntitlementActionType && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ac327f8faeef996f04a6d5f2581742ba8"></a>

Sets the value of ActionType using move semantics.

#### `public inline ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a82059388512b5e3113f1c8aaaab2c3aa)`()` <a id="structFRHAPI__EntitlementEventRequest_1a82059388512b5e3113f1c8aaaab2c3aa"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1ae6c9506a488c77d889d959e82f431a3c)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ae6c9506a488c77d889d959e82f431a3c"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a1b822cd4703f101cd167ac7339b44615)`(const ERHAPI_EntitlementEventStatus & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a1b822cd4703f101cd167ac7339b44615"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1aa2d18153085179610d7033737212b3fa)`(ERHAPI_EntitlementEventStatus & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1aa2d18153085179610d7033737212b3fa"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1abe9091e841e39a9a42f22c405857bbf7)`()` <a id="structFRHAPI__EntitlementEventRequest_1abe9091e841e39a9a42f22c405857bbf7"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1ab69e9672d2ef2c2cdc3f44b515a7f9c0)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ab69e9672d2ef2c2cdc3f44b515a7f9c0"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1aed268faea0f993ac8d38c85a6b825ab6)`(const ERHAPI_EntitlementEventStatus & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1aed268faea0f993ac8d38c85a6b825ab6"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1a808b668f99fd16782c5568434086cbb6)`(ERHAPI_EntitlementEventStatus && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a808b668f99fd16782c5568434086cbb6"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164)`()` <a id="structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusSet`](#structFRHAPI__EntitlementEventRequest_1ab008904c38d48a00f9b24f725c71e6db)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ab008904c38d48a00f9b24f725c71e6db"></a>

Checks whether Status_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a24aa4c7e09adb82140a37de58837c50c)`()` <a id="structFRHAPI__EntitlementEventRequest_1a24aa4c7e09adb82140a37de58837c50c"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1af522b188904df578ae9eb65b8403f092)`() const` <a id="structFRHAPI__EntitlementEventRequest_1af522b188904df578ae9eb65b8403f092"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ab88c72b494830023025258930f180695)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1ab88c72b494830023025258930f180695"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae981f213eff4f0fd01d50370c4177f6d)`(FGuid & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1ae981f213eff4f0fd01d50370c4177f6d"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1aa4070bc172a8411f41c34b2b3723cd32)`()` <a id="structFRHAPI__EntitlementEventRequest_1aa4070bc172a8411f41c34b2b3723cd32"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1a074557e7e053762b72ef5fa81bffc711)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a074557e7e053762b72ef5fa81bffc711"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ac3deed01e1e592b190974c14a6f23809)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ac3deed01e1e592b190974c14a6f23809"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a1bc60d68dab151c393911d0602aa167e)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a1bc60d68dab151c393911d0602aa167e"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25)`()` <a id="structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__EntitlementEventRequest_1adcc103d194a2a2aaf1221e596f15bce7)`() const` <a id="structFRHAPI__EntitlementEventRequest_1adcc103d194a2a2aaf1221e596f15bce7"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1acd78512e1e93b5fe048d1e3488ff4f02)`()` <a id="structFRHAPI__EntitlementEventRequest_1acd78512e1e93b5fe048d1e3488ff4f02"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1aadef712bc204f500e2395a808f8f7630)`() const` <a id="structFRHAPI__EntitlementEventRequest_1aadef712bc204f500e2395a808f8f7630"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1aede2aad23bc4a8052b92db7fcb96bd4e)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1aede2aad23bc4a8052b92db7fcb96bd4e"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1ae28168afca7ea0e3476c716fefd47515)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ae28168afca7ea0e3476c716fefd47515"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a547b6df4de6e2f0cbafaa32da8cfc2e6)`()` <a id="structFRHAPI__EntitlementEventRequest_1a547b6df4de6e2f0cbafaa32da8cfc2e6"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1af3794f68651da99d57ff9942050eb88a)`() const` <a id="structFRHAPI__EntitlementEventRequest_1af3794f68651da99d57ff9942050eb88a"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9bc2fff3f87c6c2f5476b57669c58d37)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a9bc2fff3f87c6c2f5476b57669c58d37"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1af89c01c218a6bb39cb52887056d7916d)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1af89c01c218a6bb39cb52887056d7916d"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1adae1277516cf22fe5d0d009dc08139c9)`()` <a id="structFRHAPI__EntitlementEventRequest_1adae1277516cf22fe5d0d009dc08139c9"></a>

Gets the value of Sku.

#### `public inline const FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1acc8afb564cad3b8406c3801f7fa50658)`() const` <a id="structFRHAPI__EntitlementEventRequest_1acc8afb564cad3b8406c3801f7fa50658"></a>

Gets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1a4240e99c0870dd31e7e676447c4716b4)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a4240e99c0870dd31e7e676447c4716b4"></a>

Sets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1af6d485afe6b4f599cbcfdf4a49511888)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1af6d485afe6b4f599cbcfdf4a49511888"></a>

Sets the value of Sku using move semantics.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1ab57848007de87fdd9603c524fb2586ca)`()` <a id="structFRHAPI__EntitlementEventRequest_1ab57848007de87fdd9603c524fb2586ca"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a6305b7e72a35ede94b57c51e1bad95bb)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a6305b7e72a35ede94b57c51e1bad95bb"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a2d7efac479a86e7d32dc235b02efd1eb)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a2d7efac479a86e7d32dc235b02efd1eb"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a7fe66b4cc8558c19204428e317c7e892)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a7fe66b4cc8558c19204428e317c7e892"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1a561eebfe26ab7fd93bff672237e1c506)`()` <a id="structFRHAPI__EntitlementEventRequest_1a561eebfe26ab7fd93bff672237e1c506"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1a715cc7d2795a4db023f7fc5830e7c755)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a715cc7d2795a4db023f7fc5830e7c755"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1a2fee929eb965bbbe0aa113b4659f0327)`(const int32 & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a2fee929eb965bbbe0aa113b4659f0327"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1adf4f3e914fcf4d3b0fb66a7907bec2e3)`(int32 && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1adf4f3e914fcf4d3b0fb66a7907bec2e3"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__EntitlementEventRequest_1a7924992634731fd4ee2c337d9e599f32)`()` <a id="structFRHAPI__EntitlementEventRequest_1a7924992634731fd4ee2c337d9e599f32"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline bool `[`IsQuantitySet`](#structFRHAPI__EntitlementEventRequest_1a2820127d52728a99578e77f30b5a8696)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a2820127d52728a99578e77f30b5a8696"></a>

Checks whether Quantity_Optional has been set.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__EntitlementEventRequest_1a44e5ebf923f07d1956d9da7e269aaafc)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a44e5ebf923f07d1956d9da7e269aaafc"></a>

Returns true if Quantity_Optional is set and matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__EntitlementEventRequest_1a832166d85b06686c89c1ffc4b6f1b4bd)`()` <a id="structFRHAPI__EntitlementEventRequest_1a832166d85b06686c89c1ffc4b6f1b4bd"></a>

Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.

#### `public inline FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a2672c7605d650d53315f341a226cf863)`()` <a id="structFRHAPI__EntitlementEventRequest_1a2672c7605d650d53315f341a226cf863"></a>

Gets the value of PlatformTransactionId.

#### `public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1aa174dac4dbfe825101c9ff20d21d61b1)`() const` <a id="structFRHAPI__EntitlementEventRequest_1aa174dac4dbfe825101c9ff20d21d61b1"></a>

Gets the value of PlatformTransactionId.

#### `public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1ad9599ee8b29356b39511d934f7699504)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ad9599ee8b29356b39511d934f7699504"></a>

Sets the value of PlatformTransactionId.

#### `public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a06c9810b3e1a776e1045ac5163e70c4c)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a06c9810b3e1a776e1045ac5163e70c4c"></a>

Sets the value of PlatformTransactionId using move semantics.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1ac71802057c53cfde9953128ab59f91f1)`()` <a id="structFRHAPI__EntitlementEventRequest_1ac71802057c53cfde9953128ab59f91f1"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a29c58ee187528a11765b0245dde82693)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a29c58ee187528a11765b0245dde82693"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a098b91ed6810a63789794689d8a83f46)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a098b91ed6810a63789794689d8a83f46"></a>

Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1ab71d9699e0fa6e6a498393c5c839df70)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1ab71d9699e0fa6e6a498393c5c839df70"></a>

Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a7d22953606000b53c9b4aa79dbcc1da4)`()` <a id="structFRHAPI__EntitlementEventRequest_1a7d22953606000b53c9b4aa79dbcc1da4"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a7824f35f9436684e3964dbe409fe1dbf)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a7824f35f9436684e3964dbe409fe1dbf"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a8ac5f400eec82df73bfc0d75f8feca8c)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a8ac5f400eec82df73bfc0d75f8feca8c"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.

#### `public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a5b3b1b5e13e86776bd69e3cf158c2bf7)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a5b3b1b5e13e86776bd69e3cf158c2bf7"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEventRequest_1a2c87d43e88c16674be4f11149059b822)`()` <a id="structFRHAPI__EntitlementEventRequest_1a2c87d43e88c16674be4f11149059b822"></a>

Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.

#### `public inline bool `[`IsPlatformDataSet`](#structFRHAPI__EntitlementEventRequest_1ab6494854717dbfc942ec101d182283c5)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ab6494854717dbfc942ec101d182283c5"></a>

Checks whether PlatformData_Optional has been set.

