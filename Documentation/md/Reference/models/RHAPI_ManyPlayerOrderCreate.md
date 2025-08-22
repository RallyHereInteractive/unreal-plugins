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
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & `[`GetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1ac811da6b0d7f3ed5eae440cf0a23dc93)`()` | Gets the value of Orders.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & `[`GetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1ab30a76b741259913fcc6e63bfe47a773)`() const` | Gets the value of Orders.
`public inline FORCEINLINE void `[`SetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a68d7c48246244e32feaca49a115500bf)`(const TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & NewValue)` | Sets the value of Orders.
`public inline FORCEINLINE void `[`SetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a39bbbe13823df25320befd8b1c422a83)`(TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > && NewValue)` | Sets the value of Orders using move semantics.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & `[`GetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1ac811da6b0d7f3ed5eae440cf0a23dc93)`()` <a id="structFRHAPI__ManyPlayerOrderCreate_1ac811da6b0d7f3ed5eae440cf0a23dc93"></a>

Gets the value of Orders.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & `[`GetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1ab30a76b741259913fcc6e63bfe47a773)`() const` <a id="structFRHAPI__ManyPlayerOrderCreate_1ab30a76b741259913fcc6e63bfe47a773"></a>

Gets the value of Orders.

#### `public inline FORCEINLINE void `[`SetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a68d7c48246244e32feaca49a115500bf)`(const TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > & NewValue)` <a id="structFRHAPI__ManyPlayerOrderCreate_1a68d7c48246244e32feaca49a115500bf"></a>

Sets the value of Orders.

#### `public inline FORCEINLINE void `[`SetOrders`](#structFRHAPI__ManyPlayerOrderCreate_1a39bbbe13823df25320befd8b1c422a83)`(TArray< `[`FRHAPI_PlayerOrderCreateSingle`](RHAPI_PlayerOrderCreateSingle.md#structFRHAPI__PlayerOrderCreateSingle)` > && NewValue)` <a id="structFRHAPI__ManyPlayerOrderCreate_1a39bbbe13823df25320befd8b1c422a83"></a>

Sets the value of Orders using move semantics.

