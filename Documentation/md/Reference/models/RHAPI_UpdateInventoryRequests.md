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
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042) | 
`public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__UpdateInventoryRequests_1a73e89ff8fb68cf673eb449427a6c0eed) | true if ClientOrderRefId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > `[`Inventory`](#structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f) | Collection of Update Inventory Requests.
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequests_1a41f676c8b0a3c0312017ae1c5211812f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequests_1add35068252cf2a9034902f402c4be1e0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1ad69ceffb0d613d52e7df9f4b37b25a85)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a82f5f159e53c6c27173de74492ef2edb)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1acf2be0b6bb4dd0820d7e108fea8f5e96)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1adaaa2947403009fac0da197659ea24a6)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1a08bc5f92d461ca6b9e409ecfe5f5e755)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1a86672d558c3b7c6307d2bfc65e9d4c48)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a3fb41834f367986094bebd6fa75d5324)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a03f02ce7e5ffbdd2af90a51b88314bd0)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a2db30fae60935467b53f2bdb294a5768)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a1eb1b5985548480c1fde5ebda4711f82)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a20dbea48b680f186d8a5fd8e0fe27c9f)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a6d9aa6ee9254ecfb0b3bfe2d8f574f3a)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1a2228fc45775016d52955beb88db33929)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1a618266a38ea206949dc27011c48db107)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1add301476ccd0155fb6ea87367c17b0e8)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a35a4482954a795e50c63d46127afff67)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__UpdateInventoryRequests_1a50606db0638cba60d3356369dd2f45a3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__UpdateInventoryRequests_1afb7a57fac826eba706a65ef956b27c90)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1a7d1ebee4208b303ab6e76113247dfe1e)`()` | Gets the value of Inventory.
`public inline FORCEINLINE const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1aa8fb230b4428c63d08cd1f2350df13c6)`() const` | Gets the value of Inventory.
`public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1a1f1a92ab3e8951b5155629caf40b2627)`(const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & NewValue)` | Sets the value of Inventory.
`public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1a2dff4aee28a63362bca015f91f1037ab)`(TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > && NewValue)` | Sets the value of Inventory using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042) <a id="structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14) <a id="structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46) <a id="structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686) <a id="structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__UpdateInventoryRequests_1a73e89ff8fb68cf673eb449427a6c0eed) <a id="structFRHAPI__UpdateInventoryRequests_1a73e89ff8fb68cf673eb449427a6c0eed"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1ad69ceffb0d613d52e7df9f4b37b25a85)`()` <a id="structFRHAPI__UpdateInventoryRequests_1ad69ceffb0d613d52e7df9f4b37b25a85"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a82f5f159e53c6c27173de74492ef2edb)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a82f5f159e53c6c27173de74492ef2edb"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1acf2be0b6bb4dd0820d7e108fea8f5e96)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1acf2be0b6bb4dd0820d7e108fea8f5e96"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1adaaa2947403009fac0da197659ea24a6)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1adaaa2947403009fac0da197659ea24a6"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1a08bc5f92d461ca6b9e409ecfe5f5e755)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a08bc5f92d461ca6b9e409ecfe5f5e755"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1a86672d558c3b7c6307d2bfc65e9d4c48)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a86672d558c3b7c6307d2bfc65e9d4c48"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a3fb41834f367986094bebd6fa75d5324)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a3fb41834f367986094bebd6fa75d5324"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a03f02ce7e5ffbdd2af90a51b88314bd0)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a03f02ce7e5ffbdd2af90a51b88314bd0"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a2db30fae60935467b53f2bdb294a5768)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a2db30fae60935467b53f2bdb294a5768"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a1eb1b5985548480c1fde5ebda4711f82)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a1eb1b5985548480c1fde5ebda4711f82"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a20dbea48b680f186d8a5fd8e0fe27c9f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a20dbea48b680f186d8a5fd8e0fe27c9f"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a6d9aa6ee9254ecfb0b3bfe2d8f574f3a)`(FGuid & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a6d9aa6ee9254ecfb0b3bfe2d8f574f3a"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1a2228fc45775016d52955beb88db33929)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a2228fc45775016d52955beb88db33929"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1a618266a38ea206949dc27011c48db107)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a618266a38ea206949dc27011c48db107"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1add301476ccd0155fb6ea87367c17b0e8)`(const FGuid & NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1add301476ccd0155fb6ea87367c17b0e8"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a35a4482954a795e50c63d46127afff67)`(FGuid && NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a35a4482954a795e50c63d46127afff67"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__UpdateInventoryRequests_1a50606db0638cba60d3356369dd2f45a3)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a50606db0638cba60d3356369dd2f45a3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__UpdateInventoryRequests_1afb7a57fac826eba706a65ef956b27c90)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1afb7a57fac826eba706a65ef956b27c90"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1a7d1ebee4208b303ab6e76113247dfe1e)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a7d1ebee4208b303ab6e76113247dfe1e"></a>

Gets the value of Inventory.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1aa8fb230b4428c63d08cd1f2350df13c6)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1aa8fb230b4428c63d08cd1f2350df13c6"></a>

Gets the value of Inventory.

#### `public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1a1f1a92ab3e8951b5155629caf40b2627)`(const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a1f1a92ab3e8951b5155629caf40b2627"></a>

Sets the value of Inventory.

#### `public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1a2dff4aee28a63362bca015f91f1037ab)`(TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > && NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a2dff4aee28a63362bca015f91f1037ab"></a>

Sets the value of Inventory using move semantics.

