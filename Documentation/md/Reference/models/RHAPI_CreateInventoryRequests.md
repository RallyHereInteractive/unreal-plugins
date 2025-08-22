---
title: RHAPI_CreateInventoryRequests
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreateInventoryRequests`](#structFRHAPI__CreateInventoryRequests) | Collection of Create Inventory Requests. This will create new Inventory for each request. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

## struct `FRHAPI_CreateInventoryRequests` <a id="structFRHAPI__CreateInventoryRequests"></a>

```
struct FRHAPI_CreateInventoryRequests
  : public FRHAPI_Model
```

Collection of Create Inventory Requests. This will create new Inventory for each request. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738) | 
`public bool `[`Source_IsSet`](#structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__CreateInventoryRequests_1a28e3631f1b94bc9a4774091b83c8015b) | true if ClientOrderRefId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > `[`Inventory`](#structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a) | 
`public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequests_1a0df8d837ee113e5821c56ecf7a46374a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequests_1a93a5f85754d955ad4b15bcd9156cbe41)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a392286fab178a4ff430f85c3e86613e3)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a78980709646b04d14062d0551f8b6fdc)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1ad9fadaec4902bacfa4a09e19b36b1a4c)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1ae67edb909259062a3aef2a56cce36cba)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1ab4b150f3124c4d8f714b33948cd18452)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1aa4a5ca8f467a677b0fd821d3cb6a2853)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1ad365ebc2e143f6f53b894966025bf682)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1a82727fdc348e52bd60d5bb9907a6972a)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1abd7d5ecd6f4007595945c7b1584b0d21)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a994cc3f20bea89d0a96daa1518d321e8)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a4c81f5570a0dca2b031995cb6cbb92fd)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1aceec09bb6d91746c5f35a6392ec55aa6)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a829733397cfe2cc3c16c922c6dd61495)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a934c0e6dc3e73e9c9ff838093e00d24f)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a53f33c87a7b78fb409b96527181f9e8e)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a3dcfd9b1d659a07cd798191ba7d5f3f9)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__CreateInventoryRequests_1ac3fa2a8a19794dad2c98a813d9964622)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__CreateInventoryRequests_1a0d49fabc3d9b753a206640bf13e9a15e)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1aa53f515159e4ae125047492321b9d8b4)`()` | Gets the value of Inventory.
`public inline FORCEINLINE const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1a3449b379b0f619b35d040380054953b0)`() const` | Gets the value of Inventory.
`public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1a26bf61e9906565b2a0edde8a146b0160)`(const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & NewValue)` | Sets the value of Inventory.
`public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1a9b4ebaefb0926f3b387f5eb1d1d163f9)`(TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > && NewValue)` | Sets the value of Inventory using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738) <a id="structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb) <a id="structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da) <a id="structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562) <a id="structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__CreateInventoryRequests_1a28e3631f1b94bc9a4774091b83c8015b) <a id="structFRHAPI__CreateInventoryRequests_1a28e3631f1b94bc9a4774091b83c8015b"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > `[`Inventory`](#structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a) <a id="structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequests_1a0df8d837ee113e5821c56ecf7a46374a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateInventoryRequests_1a0df8d837ee113e5821c56ecf7a46374a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequests_1a93a5f85754d955ad4b15bcd9156cbe41)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CreateInventoryRequests_1a93a5f85754d955ad4b15bcd9156cbe41"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a392286fab178a4ff430f85c3e86613e3)`()` <a id="structFRHAPI__CreateInventoryRequests_1a392286fab178a4ff430f85c3e86613e3"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a78980709646b04d14062d0551f8b6fdc)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a78980709646b04d14062d0551f8b6fdc"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1ad9fadaec4902bacfa4a09e19b36b1a4c)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequests_1ad9fadaec4902bacfa4a09e19b36b1a4c"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1ae67edb909259062a3aef2a56cce36cba)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__CreateInventoryRequests_1ae67edb909259062a3aef2a56cce36cba"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1ab4b150f3124c4d8f714b33948cd18452)`()` <a id="structFRHAPI__CreateInventoryRequests_1ab4b150f3124c4d8f714b33948cd18452"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1aa4a5ca8f467a677b0fd821d3cb6a2853)`() const` <a id="structFRHAPI__CreateInventoryRequests_1aa4a5ca8f467a677b0fd821d3cb6a2853"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1ad365ebc2e143f6f53b894966025bf682)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1ad365ebc2e143f6f53b894966025bf682"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1a82727fdc348e52bd60d5bb9907a6972a)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a82727fdc348e52bd60d5bb9907a6972a"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348)`()` <a id="structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1abd7d5ecd6f4007595945c7b1584b0d21)`()` <a id="structFRHAPI__CreateInventoryRequests_1abd7d5ecd6f4007595945c7b1584b0d21"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a994cc3f20bea89d0a96daa1518d321e8)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a994cc3f20bea89d0a96daa1518d321e8"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a4c81f5570a0dca2b031995cb6cbb92fd)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequests_1a4c81f5570a0dca2b031995cb6cbb92fd"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1aceec09bb6d91746c5f35a6392ec55aa6)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateInventoryRequests_1aceec09bb6d91746c5f35a6392ec55aa6"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a829733397cfe2cc3c16c922c6dd61495)`()` <a id="structFRHAPI__CreateInventoryRequests_1a829733397cfe2cc3c16c922c6dd61495"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a934c0e6dc3e73e9c9ff838093e00d24f)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a934c0e6dc3e73e9c9ff838093e00d24f"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a53f33c87a7b78fb409b96527181f9e8e)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a53f33c87a7b78fb409b96527181f9e8e"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a3dcfd9b1d659a07cd798191ba7d5f3f9)`(FGuid && NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a3dcfd9b1d659a07cd798191ba7d5f3f9"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8)`()` <a id="structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__CreateInventoryRequests_1ac3fa2a8a19794dad2c98a813d9964622)`()` <a id="structFRHAPI__CreateInventoryRequests_1ac3fa2a8a19794dad2c98a813d9964622"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__CreateInventoryRequests_1a0d49fabc3d9b753a206640bf13e9a15e)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a0d49fabc3d9b753a206640bf13e9a15e"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1aa53f515159e4ae125047492321b9d8b4)`()` <a id="structFRHAPI__CreateInventoryRequests_1aa53f515159e4ae125047492321b9d8b4"></a>

Gets the value of Inventory.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1a3449b379b0f619b35d040380054953b0)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a3449b379b0f619b35d040380054953b0"></a>

Gets the value of Inventory.

#### `public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1a26bf61e9906565b2a0edde8a146b0160)`(const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a26bf61e9906565b2a0edde8a146b0160"></a>

Sets the value of Inventory.

#### `public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1a9b4ebaefb0926f3b387f5eb1d1d163f9)`(TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > && NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a9b4ebaefb0926f3b387f5eb1d1d163f9"></a>

Sets the value of Inventory using move semantics.

