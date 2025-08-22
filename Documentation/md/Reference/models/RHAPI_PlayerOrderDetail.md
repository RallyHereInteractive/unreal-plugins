---
title: RHAPI_PlayerOrderDetail
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderDetail`](#structFRHAPI__PlayerOrderDetail) | Represents details of what occurred in a Player Order Entry.

## struct `FRHAPI_PlayerOrderDetail` <a id="structFRHAPI__PlayerOrderDetail"></a>

```
struct FRHAPI_PlayerOrderDetail
  : public FRHAPI_Model
```

Represents details of what occurred in a Player Order Entry.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlayerOrderDetailType `[`Type`](#structFRHAPI__PlayerOrderDetail_1a1451f9109957c478a472efc3dbbcb5c5) | 
`public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderDetail_1a08c4cad481c284ba8aaf53718a7bbd4f) | 
`public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderDetail_1ad476e78823720ee827aa399cf36f1118) | true if LootId_Optional has been set to a value
`public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderDetail_1ab763a48537aff101c44ea8f2e203edcf) | true if LootId_Optional has been explicitly set to null
`public `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` `[`InvChange_Optional`](#structFRHAPI__PlayerOrderDetail_1ad0e610fd1bd4d81f74499cccfe7b1a4d) | 
`public bool `[`InvChange_IsSet`](#structFRHAPI__PlayerOrderDetail_1aa8dc87095dfe419acb5acf090308c998) | true if InvChange_Optional has been set to a value
`public bool `[`InvChange_IsNull`](#structFRHAPI__PlayerOrderDetail_1a71bcd6c0556669c8bd8f0e6140075e07) | true if InvChange_Optional has been explicitly set to null
`public `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` `[`Order_Optional`](#structFRHAPI__PlayerOrderDetail_1a8d2443a902677b29958701da26c03f0a) | 
`public bool `[`Order_IsSet`](#structFRHAPI__PlayerOrderDetail_1a3921beba6e9b7a0608bc782c7c05aa22) | true if Order_Optional has been set to a value
`public bool `[`Order_IsNull`](#structFRHAPI__PlayerOrderDetail_1a78b0483873104db01db24dd655d1555b) | true if Order_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderDetail_1a9bf006065aa4be046d4efe6014056774)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderDetail_1a304d2a9a62a4f2c26e9da14f3d803432)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a714d8c220cfbcb66cde7a9829a2b5f49)`()` | Gets the value of Type.
`public inline FORCEINLINE const ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a56ced05b45ee99dadf9470d68443e49a)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1ae2d54438cce068c6e16cf853b43f4897)`(const ERHAPI_PlayerOrderDetailType & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1a2817b5a51796c02055653c18ca0da0b1)`(ERHAPI_PlayerOrderDetailType && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a2fa00a073328848635be8e783c412832)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a1ca3e5f8f59a600d9e0dc67c0da6fe6a)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a754482344235082d342b9791ec5e7c7c)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a42ba6e51c4392ce2dbd4c0bd9d3b2426)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1a52946c2e5e66058022f67024c23dd2bd)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1af84d9c42c056ae1f0b585ad190738835)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1aeb3990468b631e540170b0b5d782cbe5)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a85d3655777f062e81b01c335499d82a7)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__PlayerOrderDetail_1a7bc21d6f7a40ee5e8024f1d0316f47e6)`()` | Returns the default value of LootId.
`public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderDetail_1a177e001ab9d895834cfb249621f2626c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderDetail_1aa748ca4369843eb218d193db50b40af5)`() const` | Checks whether LootId_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ad7865ee6f2b7d3e1105e243ea9f4517a)`()` | Gets the value of InvChange_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a67250c8e2bcfd5efeded1c187a73f2b5)`() const` | Gets the value of InvChange_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a06b1dd1afb3c5b99e06220645120c5f5)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & DefaultValue) const` | Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a96928b6c0d812fb2982123d4b90b33fb)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & OutValue) const` | Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1ae52fdf19eeeb50bc74878863d09952bd)`()` | Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1a9b4c68890036859c3665471327ec2aeb)`() const` | Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1ac06b0475fb9d194e28b36029e7c6520e)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & NewValue)` | Sets the value of InvChange_Optional and also sets InvChange_IsSet to true.
`public inline FORCEINLINE void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a9cc845f2e5fff7e8c21cef3164496a9c)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` && NewValue)` | Sets the value of InvChange_Optional and also sets InvChange_IsSet to true using move semantics.
`public inline void `[`ClearInvChange`](#structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d)`()` | Clears the value of InvChange_Optional and sets InvChange_IsSet to false.
`public inline FORCEINLINE void `[`SetInvChangeToNull`](#structFRHAPI__PlayerOrderDetail_1a4e07ec38974eae69fecffbc7b1b798c6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInvChangeNull`](#structFRHAPI__PlayerOrderDetail_1a70111df93a8e0277fb654bb0e1ff882d)`() const` | Checks whether InvChange_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1ac4a624d71a433ec3b11fffcd24521892)`()` | Gets the value of Order_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1ab4c205f85db2238c55bc91da9dd210b9)`() const` | Gets the value of Order_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1ae371df25035237ee2b58bc26314adf88)`(const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & DefaultValue) const` | Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a3b660c48db1761e9cfe989ee8edd1322)`(`[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & OutValue) const` | Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1a2452411bb25bb4e5dc5d67453bb7ebf6)`()` | Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1a5c7da6bfd8fcd9f75fa0721799490b51)`() const` | Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1acb5acf3bd4630818a9819d213961a39c)`(const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & NewValue)` | Sets the value of Order_Optional and also sets Order_IsSet to true.
`public inline FORCEINLINE void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1abded5e5fa48247d6748b1abb3df03c55)`(`[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` && NewValue)` | Sets the value of Order_Optional and also sets Order_IsSet to true using move semantics.
`public inline void `[`ClearOrder`](#structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67)`()` | Clears the value of Order_Optional and sets Order_IsSet to false.
`public inline FORCEINLINE void `[`SetOrderToNull`](#structFRHAPI__PlayerOrderDetail_1a47d8538991e168c318b79acae2a41bcc)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOrderNull`](#structFRHAPI__PlayerOrderDetail_1af24f3f918e77cb6ba338486045e53bac)`() const` | Checks whether Order_Optional is set to null.

### Members

#### `public ERHAPI_PlayerOrderDetailType `[`Type`](#structFRHAPI__PlayerOrderDetail_1a1451f9109957c478a472efc3dbbcb5c5) <a id="structFRHAPI__PlayerOrderDetail_1a1451f9109957c478a472efc3dbbcb5c5"></a>

#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderDetail_1a08c4cad481c284ba8aaf53718a7bbd4f) <a id="structFRHAPI__PlayerOrderDetail_1a08c4cad481c284ba8aaf53718a7bbd4f"></a>

#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderDetail_1ad476e78823720ee827aa399cf36f1118) <a id="structFRHAPI__PlayerOrderDetail_1ad476e78823720ee827aa399cf36f1118"></a>

true if LootId_Optional has been set to a value

#### `public bool `[`LootId_IsNull`](#structFRHAPI__PlayerOrderDetail_1ab763a48537aff101c44ea8f2e203edcf) <a id="structFRHAPI__PlayerOrderDetail_1ab763a48537aff101c44ea8f2e203edcf"></a>

true if LootId_Optional has been explicitly set to null

#### `public `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` `[`InvChange_Optional`](#structFRHAPI__PlayerOrderDetail_1ad0e610fd1bd4d81f74499cccfe7b1a4d) <a id="structFRHAPI__PlayerOrderDetail_1ad0e610fd1bd4d81f74499cccfe7b1a4d"></a>

#### `public bool `[`InvChange_IsSet`](#structFRHAPI__PlayerOrderDetail_1aa8dc87095dfe419acb5acf090308c998) <a id="structFRHAPI__PlayerOrderDetail_1aa8dc87095dfe419acb5acf090308c998"></a>

true if InvChange_Optional has been set to a value

#### `public bool `[`InvChange_IsNull`](#structFRHAPI__PlayerOrderDetail_1a71bcd6c0556669c8bd8f0e6140075e07) <a id="structFRHAPI__PlayerOrderDetail_1a71bcd6c0556669c8bd8f0e6140075e07"></a>

true if InvChange_Optional has been explicitly set to null

#### `public `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` `[`Order_Optional`](#structFRHAPI__PlayerOrderDetail_1a8d2443a902677b29958701da26c03f0a) <a id="structFRHAPI__PlayerOrderDetail_1a8d2443a902677b29958701da26c03f0a"></a>

#### `public bool `[`Order_IsSet`](#structFRHAPI__PlayerOrderDetail_1a3921beba6e9b7a0608bc782c7c05aa22) <a id="structFRHAPI__PlayerOrderDetail_1a3921beba6e9b7a0608bc782c7c05aa22"></a>

true if Order_Optional has been set to a value

#### `public bool `[`Order_IsNull`](#structFRHAPI__PlayerOrderDetail_1a78b0483873104db01db24dd655d1555b) <a id="structFRHAPI__PlayerOrderDetail_1a78b0483873104db01db24dd655d1555b"></a>

true if Order_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderDetail_1a9bf006065aa4be046d4efe6014056774)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderDetail_1a9bf006065aa4be046d4efe6014056774"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderDetail_1a304d2a9a62a4f2c26e9da14f3d803432)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderDetail_1a304d2a9a62a4f2c26e9da14f3d803432"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a714d8c220cfbcb66cde7a9829a2b5f49)`()` <a id="structFRHAPI__PlayerOrderDetail_1a714d8c220cfbcb66cde7a9829a2b5f49"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a56ced05b45ee99dadf9470d68443e49a)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a56ced05b45ee99dadf9470d68443e49a"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1ae2d54438cce068c6e16cf853b43f4897)`(const ERHAPI_PlayerOrderDetailType & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1ae2d54438cce068c6e16cf853b43f4897"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1a2817b5a51796c02055653c18ca0da0b1)`(ERHAPI_PlayerOrderDetailType && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a2817b5a51796c02055653c18ca0da0b1"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a2fa00a073328848635be8e783c412832)`()` <a id="structFRHAPI__PlayerOrderDetail_1a2fa00a073328848635be8e783c412832"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a1ca3e5f8f59a600d9e0dc67c0da6fe6a)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a1ca3e5f8f59a600d9e0dc67c0da6fe6a"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a754482344235082d342b9791ec5e7c7c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a754482344235082d342b9791ec5e7c7c"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a42ba6e51c4392ce2dbd4c0bd9d3b2426)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a42ba6e51c4392ce2dbd4c0bd9d3b2426"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1a52946c2e5e66058022f67024c23dd2bd)`()` <a id="structFRHAPI__PlayerOrderDetail_1a52946c2e5e66058022f67024c23dd2bd"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1af84d9c42c056ae1f0b585ad190738835)`() const` <a id="structFRHAPI__PlayerOrderDetail_1af84d9c42c056ae1f0b585ad190738835"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1aeb3990468b631e540170b0b5d782cbe5)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1aeb3990468b631e540170b0b5d782cbe5"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a85d3655777f062e81b01c335499d82a7)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a85d3655777f062e81b01c335499d82a7"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7)`()` <a id="structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__PlayerOrderDetail_1a7bc21d6f7a40ee5e8024f1d0316f47e6)`()` <a id="structFRHAPI__PlayerOrderDetail_1a7bc21d6f7a40ee5e8024f1d0316f47e6"></a>

Returns the default value of LootId.

#### `public inline FORCEINLINE void `[`SetLootIdToNull`](#structFRHAPI__PlayerOrderDetail_1a177e001ab9d895834cfb249621f2626c)`()` <a id="structFRHAPI__PlayerOrderDetail_1a177e001ab9d895834cfb249621f2626c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLootIdNull`](#structFRHAPI__PlayerOrderDetail_1aa748ca4369843eb218d193db50b40af5)`() const` <a id="structFRHAPI__PlayerOrderDetail_1aa748ca4369843eb218d193db50b40af5"></a>

Checks whether LootId_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ad7865ee6f2b7d3e1105e243ea9f4517a)`()` <a id="structFRHAPI__PlayerOrderDetail_1ad7865ee6f2b7d3e1105e243ea9f4517a"></a>

Gets the value of InvChange_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a67250c8e2bcfd5efeded1c187a73f2b5)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a67250c8e2bcfd5efeded1c187a73f2b5"></a>

Gets the value of InvChange_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a06b1dd1afb3c5b99e06220645120c5f5)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a06b1dd1afb3c5b99e06220645120c5f5"></a>

Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a96928b6c0d812fb2982123d4b90b33fb)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a96928b6c0d812fb2982123d4b90b33fb"></a>

Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1ae52fdf19eeeb50bc74878863d09952bd)`()` <a id="structFRHAPI__PlayerOrderDetail_1ae52fdf19eeeb50bc74878863d09952bd"></a>

Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1a9b4c68890036859c3665471327ec2aeb)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a9b4c68890036859c3665471327ec2aeb"></a>

Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1ac06b0475fb9d194e28b36029e7c6520e)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1ac06b0475fb9d194e28b36029e7c6520e"></a>

Sets the value of InvChange_Optional and also sets InvChange_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a9cc845f2e5fff7e8c21cef3164496a9c)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a9cc845f2e5fff7e8c21cef3164496a9c"></a>

Sets the value of InvChange_Optional and also sets InvChange_IsSet to true using move semantics.

#### `public inline void `[`ClearInvChange`](#structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d)`()` <a id="structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d"></a>

Clears the value of InvChange_Optional and sets InvChange_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInvChangeToNull`](#structFRHAPI__PlayerOrderDetail_1a4e07ec38974eae69fecffbc7b1b798c6)`()` <a id="structFRHAPI__PlayerOrderDetail_1a4e07ec38974eae69fecffbc7b1b798c6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInvChangeNull`](#structFRHAPI__PlayerOrderDetail_1a70111df93a8e0277fb654bb0e1ff882d)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a70111df93a8e0277fb654bb0e1ff882d"></a>

Checks whether InvChange_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1ac4a624d71a433ec3b11fffcd24521892)`()` <a id="structFRHAPI__PlayerOrderDetail_1ac4a624d71a433ec3b11fffcd24521892"></a>

Gets the value of Order_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1ab4c205f85db2238c55bc91da9dd210b9)`() const` <a id="structFRHAPI__PlayerOrderDetail_1ab4c205f85db2238c55bc91da9dd210b9"></a>

Gets the value of Order_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1ae371df25035237ee2b58bc26314adf88)`(const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1ae371df25035237ee2b58bc26314adf88"></a>

Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a3b660c48db1761e9cfe989ee8edd1322)`(`[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a3b660c48db1761e9cfe989ee8edd1322"></a>

Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1a2452411bb25bb4e5dc5d67453bb7ebf6)`()` <a id="structFRHAPI__PlayerOrderDetail_1a2452411bb25bb4e5dc5d67453bb7ebf6"></a>

Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1a5c7da6bfd8fcd9f75fa0721799490b51)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a5c7da6bfd8fcd9f75fa0721799490b51"></a>

Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1acb5acf3bd4630818a9819d213961a39c)`(const `[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1acb5acf3bd4630818a9819d213961a39c"></a>

Sets the value of Order_Optional and also sets Order_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1abded5e5fa48247d6748b1abb3df03c55)`(`[`FRHAPI_PlayerOrderCreateOutput`](RHAPI_PlayerOrderCreateOutput.md#structFRHAPI__PlayerOrderCreateOutput)` && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1abded5e5fa48247d6748b1abb3df03c55"></a>

Sets the value of Order_Optional and also sets Order_IsSet to true using move semantics.

#### `public inline void `[`ClearOrder`](#structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67)`()` <a id="structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67"></a>

Clears the value of Order_Optional and sets Order_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOrderToNull`](#structFRHAPI__PlayerOrderDetail_1a47d8538991e168c318b79acae2a41bcc)`()` <a id="structFRHAPI__PlayerOrderDetail_1a47d8538991e168c318b79acae2a41bcc"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOrderNull`](#structFRHAPI__PlayerOrderDetail_1af24f3f918e77cb6ba338486045e53bac)`() const` <a id="structFRHAPI__PlayerOrderDetail_1af24f3f918e77cb6ba338486045e53bac"></a>

Checks whether Order_Optional is set to null.

