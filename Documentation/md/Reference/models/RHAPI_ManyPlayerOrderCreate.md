---
title: RHAPI_ManyPlayerOrderCreate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ManyPlayerOrderCreate`](#structFRHAPI__ManyPlayerOrderCreate) | 

## struct `FRHAPI_ManyPlayerOrderCreate` <a id="structFRHAPI__ManyPlayerOrderCreate"></a>

```
struct FRHAPI_ManyPlayerOrderCreate
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > `[`Orders`](#structFRHAPI__ManyPlayerOrderCreate_1a00bc918f739eba03dbcaacfc4cad9fb3) | List of Player Order Entries for the Player Order.
`public virtual bool `[`FromJson`](#structFRHAPI__ManyPlayerOrderCreate_1a65a0e538f9e946976d1c390fc80fa042)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ManyPlayerOrderCreate_1a0625ec1f27f8e50abba72de0b0d71bec)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & `[`GetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a8d4ebffe0f90e80a1b6eadab2fa61b2d)`()` | Gets the value of Orders.
`public inline const TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & `[`GetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a9086ee313aaf8ecc249f68cc5e2558ed)`() const` | Gets the value of Orders.
`public inline void `[`SetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1abac65f717bc4dc6f231db6fc3fca6a5a)`(const TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & NewValue)` | Sets the value of Orders.
`public inline void `[`SetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a205fb125d14ac2240d7452ed194f02df)`(TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > && NewValue)` | Sets the value of Orders using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > `[`Orders`](#structFRHAPI__ManyPlayerOrderCreate_1a00bc918f739eba03dbcaacfc4cad9fb3) <a id="structFRHAPI__ManyPlayerOrderCreate_1a00bc918f739eba03dbcaacfc4cad9fb3"></a>

List of Player Order Entries for the Player Order.

#### `public virtual bool `[`FromJson`](#structFRHAPI__ManyPlayerOrderCreate_1a65a0e538f9e946976d1c390fc80fa042)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ManyPlayerOrderCreate_1a65a0e538f9e946976d1c390fc80fa042"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ManyPlayerOrderCreate_1a0625ec1f27f8e50abba72de0b0d71bec)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ManyPlayerOrderCreate_1a0625ec1f27f8e50abba72de0b0d71bec"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & `[`GetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a8d4ebffe0f90e80a1b6eadab2fa61b2d)`()` <a id="structFRHAPI__ManyPlayerOrderCreate_1a8d4ebffe0f90e80a1b6eadab2fa61b2d"></a>

Gets the value of Orders.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & `[`GetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a9086ee313aaf8ecc249f68cc5e2558ed)`() const` <a id="structFRHAPI__ManyPlayerOrderCreate_1a9086ee313aaf8ecc249f68cc5e2558ed"></a>

Gets the value of Orders.

#### `public inline void `[`SetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1abac65f717bc4dc6f231db6fc3fca6a5a)`(const TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & NewValue)` <a id="structFRHAPI__ManyPlayerOrderCreate_1abac65f717bc4dc6f231db6fc3fca6a5a"></a>

Sets the value of Orders.

#### `public inline void `[`SetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a205fb125d14ac2240d7452ed194f02df)`(TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > && NewValue)` <a id="structFRHAPI__ManyPlayerOrderCreate_1a205fb125d14ac2240d7452ed194f02df"></a>

Sets the value of Orders using move semantics.

