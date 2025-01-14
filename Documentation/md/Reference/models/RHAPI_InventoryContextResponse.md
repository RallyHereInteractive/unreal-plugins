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
`public `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` `[`Inventory_Optional`](#structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c) | Inventory Context for a Player.
`public bool `[`Inventory_IsSet`](#structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a) | true if Inventory_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryContextResponse_1a4537312bdb09846842039fd6d2b5db00)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryContextResponse_1a3b1c1352d844744a5d4c68449d5ca246)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a94f07efc353fa21bd2f38c0cb77aeef5)`()` | Gets the value of Inventory_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a7b127c424170881e165617b48ddcf58f)`() const` | Gets the value of Inventory_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1ac444271e83de9719a1bc9169aa2a43ea)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & DefaultValue) const` | Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a9b4af4258c9a4fb458ddab83157d4e7f)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & OutValue) const` | Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1a8620f629be7620d4d22376a1105a41d6)`()` | Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1a81a5c52345964b5b06b484cac9852c14)`() const` | Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1af6025ac2e9e41aa65beb4bd20f8acf4d)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & NewValue)` | Sets the value of Inventory_Optional and also sets Inventory_IsSet to true.
`public inline void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1a5cbd5da73e757edd0dbe316079059272)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` && NewValue)` | Sets the value of Inventory_Optional and also sets Inventory_IsSet to true using move semantics.
`public inline void `[`ClearInventory`](#structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4)`()` | Clears the value of Inventory_Optional and sets Inventory_IsSet to false.
`public inline bool `[`IsInventorySet`](#structFRHAPI__InventoryContextResponse_1a827d8322538de97ebfc7d863859aaedb)`() const` | Checks whether Inventory_Optional has been set.

### Members

#### `public `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` `[`Inventory_Optional`](#structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c) <a id="structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c"></a>

Inventory Context for a Player.

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

#### `public inline `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a94f07efc353fa21bd2f38c0cb77aeef5)`()` <a id="structFRHAPI__InventoryContextResponse_1a94f07efc353fa21bd2f38c0cb77aeef5"></a>

Gets the value of Inventory_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a7b127c424170881e165617b48ddcf58f)`() const` <a id="structFRHAPI__InventoryContextResponse_1a7b127c424170881e165617b48ddcf58f"></a>

Gets the value of Inventory_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1ac444271e83de9719a1bc9169aa2a43ea)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & DefaultValue) const` <a id="structFRHAPI__InventoryContextResponse_1ac444271e83de9719a1bc9169aa2a43ea"></a>

Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a9b4af4258c9a4fb458ddab83157d4e7f)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & OutValue) const` <a id="structFRHAPI__InventoryContextResponse_1a9b4af4258c9a4fb458ddab83157d4e7f"></a>

Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1a8620f629be7620d4d22376a1105a41d6)`()` <a id="structFRHAPI__InventoryContextResponse_1a8620f629be7620d4d22376a1105a41d6"></a>

Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1a81a5c52345964b5b06b484cac9852c14)`() const` <a id="structFRHAPI__InventoryContextResponse_1a81a5c52345964b5b06b484cac9852c14"></a>

Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1af6025ac2e9e41aa65beb4bd20f8acf4d)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & NewValue)` <a id="structFRHAPI__InventoryContextResponse_1af6025ac2e9e41aa65beb4bd20f8acf4d"></a>

Sets the value of Inventory_Optional and also sets Inventory_IsSet to true.

#### `public inline void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1a5cbd5da73e757edd0dbe316079059272)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` && NewValue)` <a id="structFRHAPI__InventoryContextResponse_1a5cbd5da73e757edd0dbe316079059272"></a>

Sets the value of Inventory_Optional and also sets Inventory_IsSet to true using move semantics.

#### `public inline void `[`ClearInventory`](#structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4)`()` <a id="structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4"></a>

Clears the value of Inventory_Optional and sets Inventory_IsSet to false.

#### `public inline bool `[`IsInventorySet`](#structFRHAPI__InventoryContextResponse_1a827d8322538de97ebfc7d863859aaedb)`() const` <a id="structFRHAPI__InventoryContextResponse_1a827d8322538de97ebfc7d863859aaedb"></a>

Checks whether Inventory_Optional has been set.

