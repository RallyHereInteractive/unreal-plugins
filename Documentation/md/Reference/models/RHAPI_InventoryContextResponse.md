---
title: RHAPI_InventoryContextResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventoryContextResponse`](#structFRHAPI__InventoryContextResponse) | Inventory Context for a Player.

## struct `FRHAPI_InventoryContextResponse` <a id="structFRHAPI__InventoryContextResponse"></a>

```
struct FRHAPI_InventoryContextResponse
  : public FRHAPI_Model
```

Inventory Context for a Player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` `[`Inventory_Optional`](#structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c) | 
`public bool `[`Inventory_IsSet`](#structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a) | true if Inventory_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryContextResponse_1a4537312bdb09846842039fd6d2b5db00)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryContextResponse_1a3b1c1352d844744a5d4c68449d5ca246)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1abae1362e52fa358faa7beff4d80e281e)`()` | Gets the value of Inventory_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a918a9abbda2721f29220e104aca623a5)`() const` | Gets the value of Inventory_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1adb02515435b8a08dafda26020f1f98d5)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & DefaultValue) const` | Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1ae47ed06da50f2bd61aebd2beb0c6f87f)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & OutValue) const` | Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1aa7b62d073c1a0c9ef75620a42418584a)`()` | Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1a893012c47960bfe26b2f94435219d2f9)`() const` | Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1a368c5f7ed161d6392612c831d83e4f9b)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & NewValue)` | Sets the value of Inventory_Optional and also sets Inventory_IsSet to true.
`public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1a494463bc7e182d25e015c5474402c00d)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` && NewValue)` | Sets the value of Inventory_Optional and also sets Inventory_IsSet to true using move semantics.
`public inline void `[`ClearInventory`](#structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4)`()` | Clears the value of Inventory_Optional and sets Inventory_IsSet to false.

### Members

#### `public `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` `[`Inventory_Optional`](#structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c) <a id="structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c"></a>

#### `public bool `[`Inventory_IsSet`](#structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a) <a id="structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a"></a>

true if Inventory_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryContextResponse_1a4537312bdb09846842039fd6d2b5db00)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryContextResponse_1a4537312bdb09846842039fd6d2b5db00"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryContextResponse_1a3b1c1352d844744a5d4c68449d5ca246)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventoryContextResponse_1a3b1c1352d844744a5d4c68449d5ca246"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1abae1362e52fa358faa7beff4d80e281e)`()` <a id="structFRHAPI__InventoryContextResponse_1abae1362e52fa358faa7beff4d80e281e"></a>

Gets the value of Inventory_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a918a9abbda2721f29220e104aca623a5)`() const` <a id="structFRHAPI__InventoryContextResponse_1a918a9abbda2721f29220e104aca623a5"></a>

Gets the value of Inventory_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1adb02515435b8a08dafda26020f1f98d5)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & DefaultValue) const` <a id="structFRHAPI__InventoryContextResponse_1adb02515435b8a08dafda26020f1f98d5"></a>

Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1ae47ed06da50f2bd61aebd2beb0c6f87f)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & OutValue) const` <a id="structFRHAPI__InventoryContextResponse_1ae47ed06da50f2bd61aebd2beb0c6f87f"></a>

Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1aa7b62d073c1a0c9ef75620a42418584a)`()` <a id="structFRHAPI__InventoryContextResponse_1aa7b62d073c1a0c9ef75620a42418584a"></a>

Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1a893012c47960bfe26b2f94435219d2f9)`() const` <a id="structFRHAPI__InventoryContextResponse_1a893012c47960bfe26b2f94435219d2f9"></a>

Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1a368c5f7ed161d6392612c831d83e4f9b)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & NewValue)` <a id="structFRHAPI__InventoryContextResponse_1a368c5f7ed161d6392612c831d83e4f9b"></a>

Sets the value of Inventory_Optional and also sets Inventory_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1a494463bc7e182d25e015c5474402c00d)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` && NewValue)` <a id="structFRHAPI__InventoryContextResponse_1a494463bc7e182d25e015c5474402c00d"></a>

Sets the value of Inventory_Optional and also sets Inventory_IsSet to true using move semantics.

#### `public inline void `[`ClearInventory`](#structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4)`()` <a id="structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4"></a>

Clears the value of Inventory_Optional and sets Inventory_IsSet to false.

