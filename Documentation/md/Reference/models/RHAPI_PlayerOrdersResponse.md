---
title: RHAPI_PlayerOrdersResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrdersResponse`](#structFRHAPI__PlayerOrdersResponse) | A collection of Player Orders.

## struct `FRHAPI_PlayerOrdersResponse` <a id="structFRHAPI__PlayerOrdersResponse"></a>

```
struct FRHAPI_PlayerOrdersResponse
  : public FRHAPI_Model
```

A collection of Player Orders.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > `[`Data_Optional`](#structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d) | A collection of Player Orders.
`public bool `[`Data_IsSet`](#structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac) | true if Data_Optional has been set to a value
`public `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` `[`Page`](#structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrdersResponse_1a9dc4eaa4b221602b7da012d3c5be0b30)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrdersResponse_1adb587156447ab4c9163ed9df3e4f7b22)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1ab045213483afe73d019b530808e3a356)`()` | Gets the value of Data_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1a71af1ce39ce924cdabfee9e61881892a)`() const` | Gets the value of Data_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1a7d859c3a7660280f34d83157cc66fa8c)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & DefaultValue) const` | Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1ae189906187b2ec28bd3a1477edefd9b8)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & OutValue) const` | Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1aafe3c4a857674cdf478ff0ce564bcd89)`()` | Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1a64b7532f4dfd64f8d41bdcea2f4db157)`() const` | Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1ae8577bc6652a1160378e17583a39ca19)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & NewValue)` | Sets the value of Data_Optional and also sets Data_IsSet to true.
`public inline FORCEINLINE void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1a0a303294b3e0d67b1c111ae7c7436e9a)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > && NewValue)` | Sets the value of Data_Optional and also sets Data_IsSet to true using move semantics.
`public inline void `[`ClearData`](#structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be)`()` | Clears the value of Data_Optional and sets Data_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1ab1362e402edb52f4b86ca5786f49ee86)`()` | Gets the value of Page.
`public inline FORCEINLINE const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a6be3f635c446a9be03264065ab9ad956)`() const` | Gets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1a25e43ccfe9b8d1378bb9eee92225c181)`(const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & NewValue)` | Sets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1aa825f5011398e61418e897e5f61a277d)`(`[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` && NewValue)` | Sets the value of Page using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > `[`Data_Optional`](#structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d) <a id="structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d"></a>

A collection of Player Orders.

#### `public bool `[`Data_IsSet`](#structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac) <a id="structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac"></a>

true if Data_Optional has been set to a value

#### `public `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` `[`Page`](#structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a) <a id="structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrdersResponse_1a9dc4eaa4b221602b7da012d3c5be0b30)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a9dc4eaa4b221602b7da012d3c5be0b30"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrdersResponse_1adb587156447ab4c9163ed9df3e4f7b22)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrdersResponse_1adb587156447ab4c9163ed9df3e4f7b22"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1ab045213483afe73d019b530808e3a356)`()` <a id="structFRHAPI__PlayerOrdersResponse_1ab045213483afe73d019b530808e3a356"></a>

Gets the value of Data_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1a71af1ce39ce924cdabfee9e61881892a)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1a71af1ce39ce924cdabfee9e61881892a"></a>

Gets the value of Data_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1a7d859c3a7660280f34d83157cc66fa8c)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & DefaultValue) const` <a id="structFRHAPI__PlayerOrdersResponse_1a7d859c3a7660280f34d83157cc66fa8c"></a>

Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1ae189906187b2ec28bd3a1477edefd9b8)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & OutValue) const` <a id="structFRHAPI__PlayerOrdersResponse_1ae189906187b2ec28bd3a1477edefd9b8"></a>

Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1aafe3c4a857674cdf478ff0ce564bcd89)`()` <a id="structFRHAPI__PlayerOrdersResponse_1aafe3c4a857674cdf478ff0ce564bcd89"></a>

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1a64b7532f4dfd64f8d41bdcea2f4db157)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1a64b7532f4dfd64f8d41bdcea2f4db157"></a>

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1ae8577bc6652a1160378e17583a39ca19)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1ae8577bc6652a1160378e17583a39ca19"></a>

Sets the value of Data_Optional and also sets Data_IsSet to true.

#### `public inline FORCEINLINE void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1a0a303294b3e0d67b1c111ae7c7436e9a)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > && NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a0a303294b3e0d67b1c111ae7c7436e9a"></a>

Sets the value of Data_Optional and also sets Data_IsSet to true using move semantics.

#### `public inline void `[`ClearData`](#structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be)`()` <a id="structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be"></a>

Clears the value of Data_Optional and sets Data_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1ab1362e402edb52f4b86ca5786f49ee86)`()` <a id="structFRHAPI__PlayerOrdersResponse_1ab1362e402edb52f4b86ca5786f49ee86"></a>

Gets the value of Page.

#### `public inline FORCEINLINE const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a6be3f635c446a9be03264065ab9ad956)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1a6be3f635c446a9be03264065ab9ad956"></a>

Gets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1a25e43ccfe9b8d1378bb9eee92225c181)`(const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a25e43ccfe9b8d1378bb9eee92225c181"></a>

Sets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1aa825f5011398e61418e897e5f61a277d)`(`[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` && NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1aa825f5011398e61418e897e5f61a277d"></a>

Sets the value of Page using move semantics.

