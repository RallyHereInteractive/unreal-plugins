---
title: RHAPI_UpdateInventoryRequests
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdateInventoryRequests`](#structFRHAPI__UpdateInventoryRequests) | Collection of Update Inventory Requests. The Inventory referenced in the Update Inventory Requests must exist otherwise the request will fail. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

## struct `FRHAPI_UpdateInventoryRequests` <a id="structFRHAPI__UpdateInventoryRequests"></a>

```
struct FRHAPI_UpdateInventoryRequests
  : public FRHAPI_Model
```

Collection of Update Inventory Requests. The Inventory referenced in the Update Inventory Requests must exist otherwise the request will fail. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042) | Source of this Inventory Operation.
`public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46) | Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686) | true if ClientOrderRefId_Optional has been set to a value
`public TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > `[`Inventory`](#structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f) | Collection of Update Inventory Requests.
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequests_1a41f676c8b0a3c0312017ae1c5211812f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequests_1add35068252cf2a9034902f402c4be1e0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1ad730bfd2adcdea9294c9a00343c7b477)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a8cf298f961a6c1bfc18da2a140450f90)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a0ae156cf683e376391589e477541f546)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a79366bc7965bc537dfdafb254ee3975f)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1acbbb6f5ecbedc849a6a536b31fa03fbf)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1ad26d8c02e0d79cfb948e579b89a7469c)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a43acaea9b6e76d17b806cec337bc21fc)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a8a3246bc3a935ccf44616ce5ae85e359)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__UpdateInventoryRequests_1a26a2cea2a19a9c659f2cff80550131e8)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1abe94a4df00e3ebffcde99894c3388429)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a073d372d285e256adab06fee92db4e62)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a6d2ebb0f08cf42dbc6e127f74e5d3d28)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a954e1f64dd5becb1c49b3892bbadaf51)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1affe57352599108147f8b95834612f01c)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1aab2adfb903a2211d48d12ad46a506a91)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a0c9bc77ba61737db0fa0d94001212920)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a428225f0d11f648bf6138fa6a17afbf4)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__UpdateInventoryRequests_1a0fe0fe1b5abafd9b11cdb8885e30241e)`() const` | Checks whether ClientOrderRefId_Optional has been set.
`public inline TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1aad6707dde40259d0990ae5e7ae83df0d)`()` | Gets the value of Inventory.
`public inline const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1a9f963a7dae3454b949140e76a3269d37)`() const` | Gets the value of Inventory.
`public inline void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1a1aa66c687421317e059a578b981c7f25)`(const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & NewValue)` | Sets the value of Inventory.
`public inline void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1af49dd83a84b4d5c64c18f987755aa054)`(TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > && NewValue)` | Sets the value of Inventory using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042) <a id="structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042"></a>

Source of this Inventory Operation.

#### `public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14) <a id="structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46) <a id="structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46"></a>

Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686) <a id="structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > `[`Inventory`](#structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f) <a id="structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f"></a>

Collection of Update Inventory Requests.

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequests_1a41f676c8b0a3c0312017ae1c5211812f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a41f676c8b0a3c0312017ae1c5211812f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequests_1add35068252cf2a9034902f402c4be1e0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UpdateInventoryRequests_1add35068252cf2a9034902f402c4be1e0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1ad730bfd2adcdea9294c9a00343c7b477)`()` <a id="structFRHAPI__UpdateInventoryRequests_1ad730bfd2adcdea9294c9a00343c7b477"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a8cf298f961a6c1bfc18da2a140450f90)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a8cf298f961a6c1bfc18da2a140450f90"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a0ae156cf683e376391589e477541f546)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a0ae156cf683e376391589e477541f546"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a79366bc7965bc537dfdafb254ee3975f)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a79366bc7965bc537dfdafb254ee3975f"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1acbbb6f5ecbedc849a6a536b31fa03fbf)`()` <a id="structFRHAPI__UpdateInventoryRequests_1acbbb6f5ecbedc849a6a536b31fa03fbf"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1ad26d8c02e0d79cfb948e579b89a7469c)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1ad26d8c02e0d79cfb948e579b89a7469c"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a43acaea9b6e76d17b806cec337bc21fc)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a43acaea9b6e76d17b806cec337bc21fc"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a8a3246bc3a935ccf44616ce5ae85e359)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a8a3246bc3a935ccf44616ce5ae85e359"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__UpdateInventoryRequests_1a26a2cea2a19a9c659f2cff80550131e8)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a26a2cea2a19a9c659f2cff80550131e8"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1abe94a4df00e3ebffcde99894c3388429)`()` <a id="structFRHAPI__UpdateInventoryRequests_1abe94a4df00e3ebffcde99894c3388429"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a073d372d285e256adab06fee92db4e62)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a073d372d285e256adab06fee92db4e62"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a6d2ebb0f08cf42dbc6e127f74e5d3d28)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a6d2ebb0f08cf42dbc6e127f74e5d3d28"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a954e1f64dd5becb1c49b3892bbadaf51)`(FGuid & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a954e1f64dd5becb1c49b3892bbadaf51"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1affe57352599108147f8b95834612f01c)`()` <a id="structFRHAPI__UpdateInventoryRequests_1affe57352599108147f8b95834612f01c"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1aab2adfb903a2211d48d12ad46a506a91)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1aab2adfb903a2211d48d12ad46a506a91"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a0c9bc77ba61737db0fa0d94001212920)`(const FGuid & NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a0c9bc77ba61737db0fa0d94001212920"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a428225f0d11f648bf6138fa6a17afbf4)`(FGuid && NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a428225f0d11f648bf6138fa6a17afbf4"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__UpdateInventoryRequests_1a0fe0fe1b5abafd9b11cdb8885e30241e)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a0fe0fe1b5abafd9b11cdb8885e30241e"></a>

Checks whether ClientOrderRefId_Optional has been set.

#### `public inline TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1aad6707dde40259d0990ae5e7ae83df0d)`()` <a id="structFRHAPI__UpdateInventoryRequests_1aad6707dde40259d0990ae5e7ae83df0d"></a>

Gets the value of Inventory.

#### `public inline const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1a9f963a7dae3454b949140e76a3269d37)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a9f963a7dae3454b949140e76a3269d37"></a>

Gets the value of Inventory.

#### `public inline void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1a1aa66c687421317e059a578b981c7f25)`(const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a1aa66c687421317e059a578b981c7f25"></a>

Sets the value of Inventory.

#### `public inline void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1af49dd83a84b4d5c64c18f987755aa054)`(TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > && NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1af49dd83a84b4d5c64c18f987755aa054"></a>

Sets the value of Inventory using move semantics.

