# RHAPI_InventoryContextResponse <a id="group__RHAPI__InventoryContextResponse"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` `[`Inventory_Optional`](#structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c) | 
`public bool `[`Inventory_IsSet`](#structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a) | true if Inventory_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryContextResponse_1ae834b0342287ef7e2daf8fb9ed47f70d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryContextResponse_1a66b6953f96b5caba364122a3328ee0db)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1af5475321db2829b4bad00d99efb69a4b)`()` | Gets the value of Inventory_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a973fbb972b1333e42340f83ef003defd)`() const` | Gets the value of Inventory_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a05a932a30a4523e5d12bf7a199103542)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & DefaultValue) const` | Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a9b4af4258c9a4fb458ddab83157d4e7f)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & OutValue) const` | Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1a799ccbd402f02d24f1172b38ad4469fa)`()` | Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1ac2709dcadd009f843c4c66000a969128)`() const` | Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1a55bde5b6a680c3b5985044755a31d1f3)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` NewValue)` | Sets the value of Inventory_Optional and also sets Inventory_IsSet to true.
`public inline void `[`ClearInventory`](#structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4)`()` | Clears the value of Inventory_Optional and sets Inventory_IsSet to false.

#### Members

#### `public `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` `[`Inventory_Optional`](#structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c) <a id="structFRHAPI__InventoryContextResponse_1adf1766726cd900f692cdab6e1816713c"></a>

<br>
#### `public bool `[`Inventory_IsSet`](#structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a) <a id="structFRHAPI__InventoryContextResponse_1a78e0c2b4d95885d45a22e322049fc23a"></a>

true if Inventory_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryContextResponse_1ae834b0342287ef7e2daf8fb9ed47f70d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryContextResponse_1ae834b0342287ef7e2daf8fb9ed47f70d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryContextResponse_1a66b6953f96b5caba364122a3328ee0db)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventoryContextResponse_1a66b6953f96b5caba364122a3328ee0db"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1af5475321db2829b4bad00d99efb69a4b)`()` <a id="structFRHAPI__InventoryContextResponse_1af5475321db2829b4bad00d99efb69a4b"></a>

Gets the value of Inventory_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a973fbb972b1333e42340f83ef003defd)`() const` <a id="structFRHAPI__InventoryContextResponse_1a973fbb972b1333e42340f83ef003defd"></a>

Gets the value of Inventory_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a05a932a30a4523e5d12bf7a199103542)`(const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & DefaultValue) const` <a id="structFRHAPI__InventoryContextResponse_1a05a932a30a4523e5d12bf7a199103542"></a>

Gets the value of Inventory_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInventory`](#structFRHAPI__InventoryContextResponse_1a9b4af4258c9a4fb458ddab83157d4e7f)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` & OutValue) const` <a id="structFRHAPI__InventoryContextResponse_1a9b4af4258c9a4fb458ddab83157d4e7f"></a>

Fills OutValue with the value of Inventory_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1a799ccbd402f02d24f1172b38ad4469fa)`()` <a id="structFRHAPI__InventoryContextResponse_1a799ccbd402f02d24f1172b38ad4469fa"></a>

Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` * `[`GetInventoryOrNull`](#structFRHAPI__InventoryContextResponse_1ac2709dcadd009f843c4c66000a969128)`() const` <a id="structFRHAPI__InventoryContextResponse_1ac2709dcadd009f843c4c66000a969128"></a>

Returns a pointer to Inventory_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInventory`](#structFRHAPI__InventoryContextResponse_1a55bde5b6a680c3b5985044755a31d1f3)`(`[`FRHAPI_Inventory`](RHAPI_Inventory.md#structFRHAPI__Inventory)` NewValue)` <a id="structFRHAPI__InventoryContextResponse_1a55bde5b6a680c3b5985044755a31d1f3"></a>

Sets the value of Inventory_Optional and also sets Inventory_IsSet to true.

<br>
#### `public inline void `[`ClearInventory`](#structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4)`()` <a id="structFRHAPI__InventoryContextResponse_1a41cea14fe48b16820fe86c112069ede4"></a>

Clears the value of Inventory_Optional and sets Inventory_IsSet to false.

<br>
