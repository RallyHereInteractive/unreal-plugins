# group `RHAPI_EntitlementEventRequest` <a id="group__RHAPI__EntitlementEventRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EntitlementEventRequest`](#structFRHAPI__EntitlementEventRequest) | 

---
title: FRHAPI_EntitlementEventRequest
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventRequest_1a5acf5cb5020eb057a5a33f6a8f75336f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a86cf5bae6b1a1bee5c64077b98289084)`()` | Gets the value of ActionType.
`public inline const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a3108faaba0eab53e6fe5d925198781e1)`() const` | Gets the value of ActionType.
`public inline void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1a76c04db8ad62a981c9f6151feecb52f9)`(const ERHAPI_EntitlementActionType & NewValue)` | Sets the value of ActionType.
`public inline void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1ac327f8faeef996f04a6d5f2581742ba8)`(ERHAPI_EntitlementActionType && NewValue)` | Sets the value of ActionType using move semantics.
`public inline ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a0a9cd50943f4e93da6ee594dd2a70409)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a464b88856c405b76c96e40b9c69eb37c)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a8af46c0e127d7210218fd6963db80a67)`(const ERHAPI_EntitlementEventStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1aa2d18153085179610d7033737212b3fa)`(ERHAPI_EntitlementEventStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1a30f46958abaaaf70705b76d84668c2a2)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1a0d7cf7aae9f4f5034fa2203a6be8134e)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1aed268faea0f993ac8d38c85a6b825ab6)`(const ERHAPI_EntitlementEventStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1a808b668f99fd16782c5568434086cbb6)`(ERHAPI_EntitlementEventStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusSet`](#structFRHAPI__EntitlementEventRequest_1ab008904c38d48a00f9b24f725c71e6db)`() const` | Checks whether Status_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1af7d2fce6f0b7ffa345374cdc6cf9e58f)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a96683286a1d6289a97bbba42ba616d11)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae672c7d3666c9e99f446ad83a0ad9729)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae981f213eff4f0fd01d50370c4177f6d)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1a1f68cb46309e61dfde0f043124bf98d1)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1a406980ba81a3317b409c1cc503ef3771)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ac3deed01e1e592b190974c14a6f23809)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a1bc60d68dab151c393911d0602aa167e)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__EntitlementEventRequest_1adcc103d194a2a2aaf1221e596f15bce7)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1ab640227db0dfbd26e5a187262954a7e6)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1a833ee2e26c1462814f68adb9c35f56db)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1aede2aad23bc4a8052b92db7fcb96bd4e)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1ae28168afca7ea0e3476c716fefd47515)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9a5a3b760c236e357429f4cd2978692d)`()` | Gets the value of PlatformUserId.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a4b8a6b3f5a9307b91bd933bc9286f909)`() const` | Gets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9bc2fff3f87c6c2f5476b57669c58d37)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1af89c01c218a6bb39cb52887056d7916d)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1a32750908261278817bfe7dc39d2bdcfd)`()` | Gets the value of Sku.
`public inline const FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1a020de18f8f378a95e04855f542fe5d85)`() const` | Gets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1a4240e99c0870dd31e7e676447c4716b4)`(const FString & NewValue)` | Sets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1af6d485afe6b4f599cbcfdf4a49511888)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a979d53e8edee244984139cc1dc8055c9)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a0214edacecfccc743f861f4033105d09)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a26ff9c470bf1b84d8d0acfebc5a5340e)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a7fe66b4cc8558c19204428e317c7e892)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1a8fa2ddcbdb8bb4c37aaddc0a61a6ccc5)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1afd3fea2102f62dad8773f133fc6eddfe)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1a2fee929eb965bbbe0aa113b4659f0327)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline void `[`SetQuantity`](#structFRHAPI__EntitlementEventRequest_1adf4f3e914fcf4d3b0fb66a7907bec2e3)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__EntitlementEventRequest_1a7924992634731fd4ee2c337d9e599f32)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline bool `[`IsQuantitySet`](#structFRHAPI__EntitlementEventRequest_1a2820127d52728a99578e77f30b5a8696)`() const` | Checks whether Quantity_Optional has been set.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__EntitlementEventRequest_1a44e5ebf923f07d1956d9da7e269aaafc)`() const` | Returns true if Quantity_Optional is set and matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__EntitlementEventRequest_1a832166d85b06686c89c1ffc4b6f1b4bd)`()` | Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.
`public inline FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a5a6246cad36a41aa7fb056080a769989)`()` | Gets the value of PlatformTransactionId.
`public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a752d73deb088415c3cec2ed7ce573ad0)`() const` | Gets the value of PlatformTransactionId.
`public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1ad9599ee8b29356b39511d934f7699504)`(const FString & NewValue)` | Sets the value of PlatformTransactionId.
`public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a06c9810b3e1a776e1045ac5163e70c4c)`(FString && NewValue)` | Sets the value of PlatformTransactionId using move semantics.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1aa8b28302b86aa22c7abfad463cebc110)`()` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a535dbf021bf5b934748b3c2f4a5bea3c)`() const` | Gets the value of PlatformData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a9a3de6d2ca7e9e48f7101871d97b9893)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1ab71d9699e0fa6e6a498393c5c839df70)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a59f34de437c6c97f000f35fa78c35fdd)`()` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1abd878a9fc293d24d1109a62c879e6327)`() const` | Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntitlementEventRequest_1a5acf5cb5020eb057a5a33f6a8f75336f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__EntitlementEventRequest_1a5acf5cb5020eb057a5a33f6a8f75336f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a86cf5bae6b1a1bee5c64077b98289084)`()` <a id="structFRHAPI__EntitlementEventRequest_1a86cf5bae6b1a1bee5c64077b98289084"></a>

Gets the value of ActionType.

#### `public inline const ERHAPI_EntitlementActionType & `[`GetActionType`](#structFRHAPI__EntitlementEventRequest_1a3108faaba0eab53e6fe5d925198781e1)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a3108faaba0eab53e6fe5d925198781e1"></a>

Gets the value of ActionType.

#### `public inline void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1a76c04db8ad62a981c9f6151feecb52f9)`(const ERHAPI_EntitlementActionType & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a76c04db8ad62a981c9f6151feecb52f9"></a>

Sets the value of ActionType.

#### `public inline void `[`SetActionType`](#structFRHAPI__EntitlementEventRequest_1ac327f8faeef996f04a6d5f2581742ba8)`(ERHAPI_EntitlementActionType && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ac327f8faeef996f04a6d5f2581742ba8"></a>

Sets the value of ActionType using move semantics.

#### `public inline ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a0a9cd50943f4e93da6ee594dd2a70409)`()` <a id="structFRHAPI__EntitlementEventRequest_1a0a9cd50943f4e93da6ee594dd2a70409"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a464b88856c405b76c96e40b9c69eb37c)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a464b88856c405b76c96e40b9c69eb37c"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementEventStatus & `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1a8af46c0e127d7210218fd6963db80a67)`(const ERHAPI_EntitlementEventStatus & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a8af46c0e127d7210218fd6963db80a67"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__EntitlementEventRequest_1aa2d18153085179610d7033737212b3fa)`(ERHAPI_EntitlementEventStatus & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1aa2d18153085179610d7033737212b3fa"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1a30f46958abaaaf70705b76d84668c2a2)`()` <a id="structFRHAPI__EntitlementEventRequest_1a30f46958abaaaf70705b76d84668c2a2"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementEventStatus * `[`GetStatusOrNull`](#structFRHAPI__EntitlementEventRequest_1a0d7cf7aae9f4f5034fa2203a6be8134e)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a0d7cf7aae9f4f5034fa2203a6be8134e"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1aed268faea0f993ac8d38c85a6b825ab6)`(const ERHAPI_EntitlementEventStatus & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1aed268faea0f993ac8d38c85a6b825ab6"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__EntitlementEventRequest_1a808b668f99fd16782c5568434086cbb6)`(ERHAPI_EntitlementEventStatus && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a808b668f99fd16782c5568434086cbb6"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164)`()` <a id="structFRHAPI__EntitlementEventRequest_1a8c043f933f610194233e21b5f20cf164"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusSet`](#structFRHAPI__EntitlementEventRequest_1ab008904c38d48a00f9b24f725c71e6db)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ab008904c38d48a00f9b24f725c71e6db"></a>

Checks whether Status_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1af7d2fce6f0b7ffa345374cdc6cf9e58f)`()` <a id="structFRHAPI__EntitlementEventRequest_1af7d2fce6f0b7ffa345374cdc6cf9e58f"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a96683286a1d6289a97bbba42ba616d11)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a96683286a1d6289a97bbba42ba616d11"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae672c7d3666c9e99f446ad83a0ad9729)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1ae672c7d3666c9e99f446ad83a0ad9729"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae981f213eff4f0fd01d50370c4177f6d)`(FGuid & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1ae981f213eff4f0fd01d50370c4177f6d"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1a1f68cb46309e61dfde0f043124bf98d1)`()` <a id="structFRHAPI__EntitlementEventRequest_1a1f68cb46309e61dfde0f043124bf98d1"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__EntitlementEventRequest_1a406980ba81a3317b409c1cc503ef3771)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a406980ba81a3317b409c1cc503ef3771"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ac3deed01e1e592b190974c14a6f23809)`(const FGuid & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ac3deed01e1e592b190974c14a6f23809"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1a1bc60d68dab151c393911d0602aa167e)`(FGuid && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a1bc60d68dab151c393911d0602aa167e"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25)`()` <a id="structFRHAPI__EntitlementEventRequest_1ae114e5580c0dd8424b0e19fd6062dd25"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__EntitlementEventRequest_1adcc103d194a2a2aaf1221e596f15bce7)`() const` <a id="structFRHAPI__EntitlementEventRequest_1adcc103d194a2a2aaf1221e596f15bce7"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1ab640227db0dfbd26e5a187262954a7e6)`()` <a id="structFRHAPI__EntitlementEventRequest_1ab640227db0dfbd26e5a187262954a7e6"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__EntitlementEventRequest_1a833ee2e26c1462814f68adb9c35f56db)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a833ee2e26c1462814f68adb9c35f56db"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1aede2aad23bc4a8052b92db7fcb96bd4e)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1aede2aad23bc4a8052b92db7fcb96bd4e"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__EntitlementEventRequest_1ae28168afca7ea0e3476c716fefd47515)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ae28168afca7ea0e3476c716fefd47515"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9a5a3b760c236e357429f4cd2978692d)`()` <a id="structFRHAPI__EntitlementEventRequest_1a9a5a3b760c236e357429f4cd2978692d"></a>

Gets the value of PlatformUserId.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a4b8a6b3f5a9307b91bd933bc9286f909)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a4b8a6b3f5a9307b91bd933bc9286f909"></a>

Gets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1a9bc2fff3f87c6c2f5476b57669c58d37)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a9bc2fff3f87c6c2f5476b57669c58d37"></a>

Sets the value of PlatformUserId.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__EntitlementEventRequest_1af89c01c218a6bb39cb52887056d7916d)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1af89c01c218a6bb39cb52887056d7916d"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1a32750908261278817bfe7dc39d2bdcfd)`()` <a id="structFRHAPI__EntitlementEventRequest_1a32750908261278817bfe7dc39d2bdcfd"></a>

Gets the value of Sku.

#### `public inline const FString & `[`GetSku`](#structFRHAPI__EntitlementEventRequest_1a020de18f8f378a95e04855f542fe5d85)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a020de18f8f378a95e04855f542fe5d85"></a>

Gets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1a4240e99c0870dd31e7e676447c4716b4)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a4240e99c0870dd31e7e676447c4716b4"></a>

Sets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__EntitlementEventRequest_1af6d485afe6b4f599cbcfdf4a49511888)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1af6d485afe6b4f599cbcfdf4a49511888"></a>

Sets the value of Sku using move semantics.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a979d53e8edee244984139cc1dc8055c9)`()` <a id="structFRHAPI__EntitlementEventRequest_1a979d53e8edee244984139cc1dc8055c9"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a0214edacecfccc743f861f4033105d09)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a0214edacecfccc743f861f4033105d09"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a26ff9c470bf1b84d8d0acfebc5a5340e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a26ff9c470bf1b84d8d0acfebc5a5340e"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantity`](#structFRHAPI__EntitlementEventRequest_1a7fe66b4cc8558c19204428e317c7e892)`(int32 & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a7fe66b4cc8558c19204428e317c7e892"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1a8fa2ddcbdb8bb4c37aaddc0a61a6ccc5)`()` <a id="structFRHAPI__EntitlementEventRequest_1a8fa2ddcbdb8bb4c37aaddc0a61a6ccc5"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__EntitlementEventRequest_1afd3fea2102f62dad8773f133fc6eddfe)`() const` <a id="structFRHAPI__EntitlementEventRequest_1afd3fea2102f62dad8773f133fc6eddfe"></a>

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

#### `public inline FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a5a6246cad36a41aa7fb056080a769989)`()` <a id="structFRHAPI__EntitlementEventRequest_1a5a6246cad36a41aa7fb056080a769989"></a>

Gets the value of PlatformTransactionId.

#### `public inline const FString & `[`GetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a752d73deb088415c3cec2ed7ce573ad0)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a752d73deb088415c3cec2ed7ce573ad0"></a>

Gets the value of PlatformTransactionId.

#### `public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1ad9599ee8b29356b39511d934f7699504)`(const FString & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1ad9599ee8b29356b39511d934f7699504"></a>

Sets the value of PlatformTransactionId.

#### `public inline void `[`SetPlatformTransactionId`](#structFRHAPI__EntitlementEventRequest_1a06c9810b3e1a776e1045ac5163e70c4c)`(FString && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a06c9810b3e1a776e1045ac5163e70c4c"></a>

Sets the value of PlatformTransactionId using move semantics.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1aa8b28302b86aa22c7abfad463cebc110)`()` <a id="structFRHAPI__EntitlementEventRequest_1aa8b28302b86aa22c7abfad463cebc110"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a535dbf021bf5b934748b3c2f4a5bea3c)`() const` <a id="structFRHAPI__EntitlementEventRequest_1a535dbf021bf5b934748b3c2f4a5bea3c"></a>

Gets the value of PlatformData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a9a3de6d2ca7e9e48f7101871d97b9893)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__EntitlementEventRequest_1a9a3de6d2ca7e9e48f7101871d97b9893"></a>

Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformData`](#structFRHAPI__EntitlementEventRequest_1ab71d9699e0fa6e6a498393c5c839df70)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__EntitlementEventRequest_1ab71d9699e0fa6e6a498393c5c839df70"></a>

Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1a59f34de437c6c97f000f35fa78c35fdd)`()` <a id="structFRHAPI__EntitlementEventRequest_1a59f34de437c6c97f000f35fa78c35fdd"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetPlatformDataOrNull`](#structFRHAPI__EntitlementEventRequest_1abd878a9fc293d24d1109a62c879e6327)`() const` <a id="structFRHAPI__EntitlementEventRequest_1abd878a9fc293d24d1109a62c879e6327"></a>

Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a8ac5f400eec82df73bfc0d75f8feca8c)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a8ac5f400eec82df73bfc0d75f8feca8c"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true.

#### `public inline void `[`SetPlatformData`](#structFRHAPI__EntitlementEventRequest_1a5b3b1b5e13e86776bd69e3cf158c2bf7)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__EntitlementEventRequest_1a5b3b1b5e13e86776bd69e3cf158c2bf7"></a>

Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformData`](#structFRHAPI__EntitlementEventRequest_1a2c87d43e88c16674be4f11149059b822)`()` <a id="structFRHAPI__EntitlementEventRequest_1a2c87d43e88c16674be4f11149059b822"></a>

Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false.

#### `public inline bool `[`IsPlatformDataSet`](#structFRHAPI__EntitlementEventRequest_1ab6494854717dbfc942ec101d182283c5)`() const` <a id="structFRHAPI__EntitlementEventRequest_1ab6494854717dbfc942ec101d182283c5"></a>

Checks whether PlatformData_Optional has been set.

