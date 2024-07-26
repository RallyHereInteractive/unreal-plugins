# group `RHAPI_PlayerOrdersResponse` <a id="group__RHAPI__PlayerOrdersResponse"></a>

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
`public `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` `[`Page`](#structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a) | Page metadata for the Player Orders.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrdersResponse_1a9dc4eaa4b221602b7da012d3c5be0b30)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrdersResponse_1abbaffda8a83267915233f7b91a946f5a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1ad76e699d2da7462a33fe3366e3d6e6a6)`()` | Gets the value of Data_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1aa0ce4977b6a8afa0b638726a94dcd3b0)`() const` | Gets the value of Data_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1aaaee20124fe860f9661d8f2fe31f0727)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & DefaultValue) const` | Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1a90d4b437c35f15baf0d835b7cd43c4d5)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & OutValue) const` | Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1a02137244a73038499960c97d08e715dd)`()` | Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1aaa57c08fd59616f7d7f2a75d55f88436)`() const` | Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1a66a42d4a23c5cbde2299206558d33734)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & NewValue)` | Sets the value of Data_Optional and also sets Data_IsSet to true.
`public inline void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1a7302733f38c311b598919dc70c332312)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > && NewValue)` | Sets the value of Data_Optional and also sets Data_IsSet to true using move semantics.
`public inline void `[`ClearData`](#structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be)`()` | Clears the value of Data_Optional and sets Data_IsSet to false.
`public inline bool `[`IsDataSet`](#structFRHAPI__PlayerOrdersResponse_1a665002cd15adbca0a0d8c74237a534ff)`() const` | Checks whether Data_Optional has been set.
`public inline `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a5bd79d7fe6f3248e6a235f109240bb05)`()` | Gets the value of Page.
`public inline const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a163356eaae70f3de59d40dfa53c6d282)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1a7598e89fce3d10feee19c32f810f23d3)`(const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & NewValue)` | Sets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1ab7cac2374c84e2a7249e48a498831201)`(`[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` && NewValue)` | Sets the value of Page using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > `[`Data_Optional`](#structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d) <a id="structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d"></a>

A collection of Player Orders.

#### `public bool `[`Data_IsSet`](#structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac) <a id="structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac"></a>

true if Data_Optional has been set to a value

#### `public `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` `[`Page`](#structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a) <a id="structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a"></a>

Page metadata for the Player Orders.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrdersResponse_1a9dc4eaa4b221602b7da012d3c5be0b30)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a9dc4eaa4b221602b7da012d3c5be0b30"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrdersResponse_1abbaffda8a83267915233f7b91a946f5a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerOrdersResponse_1abbaffda8a83267915233f7b91a946f5a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1ad76e699d2da7462a33fe3366e3d6e6a6)`()` <a id="structFRHAPI__PlayerOrdersResponse_1ad76e699d2da7462a33fe3366e3d6e6a6"></a>

Gets the value of Data_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1aa0ce4977b6a8afa0b638726a94dcd3b0)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1aa0ce4977b6a8afa0b638726a94dcd3b0"></a>

Gets the value of Data_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1aaaee20124fe860f9661d8f2fe31f0727)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & DefaultValue) const` <a id="structFRHAPI__PlayerOrdersResponse_1aaaee20124fe860f9661d8f2fe31f0727"></a>

Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1a90d4b437c35f15baf0d835b7cd43c4d5)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & OutValue) const` <a id="structFRHAPI__PlayerOrdersResponse_1a90d4b437c35f15baf0d835b7cd43c4d5"></a>

Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1a02137244a73038499960c97d08e715dd)`()` <a id="structFRHAPI__PlayerOrdersResponse_1a02137244a73038499960c97d08e715dd"></a>

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1aaa57c08fd59616f7d7f2a75d55f88436)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1aaa57c08fd59616f7d7f2a75d55f88436"></a>

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1a66a42d4a23c5cbde2299206558d33734)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a66a42d4a23c5cbde2299206558d33734"></a>

Sets the value of Data_Optional and also sets Data_IsSet to true.

#### `public inline void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1a7302733f38c311b598919dc70c332312)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > && NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a7302733f38c311b598919dc70c332312"></a>

Sets the value of Data_Optional and also sets Data_IsSet to true using move semantics.

#### `public inline void `[`ClearData`](#structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be)`()` <a id="structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be"></a>

Clears the value of Data_Optional and sets Data_IsSet to false.

#### `public inline bool `[`IsDataSet`](#structFRHAPI__PlayerOrdersResponse_1a665002cd15adbca0a0d8c74237a534ff)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1a665002cd15adbca0a0d8c74237a534ff"></a>

Checks whether Data_Optional has been set.

#### `public inline `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a5bd79d7fe6f3248e6a235f109240bb05)`()` <a id="structFRHAPI__PlayerOrdersResponse_1a5bd79d7fe6f3248e6a235f109240bb05"></a>

Gets the value of Page.

#### `public inline const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a163356eaae70f3de59d40dfa53c6d282)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1a163356eaae70f3de59d40dfa53c6d282"></a>

Gets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1a7598e89fce3d10feee19c32f810f23d3)`(const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a7598e89fce3d10feee19c32f810f23d3"></a>

Sets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1ab7cac2374c84e2a7249e48a498831201)`(`[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` && NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1ab7cac2374c84e2a7249e48a498831201"></a>

Sets the value of Page using move semantics.

