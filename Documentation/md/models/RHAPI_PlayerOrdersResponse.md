# RHAPI_PlayerOrdersResponse <a id="group__RHAPI__PlayerOrdersResponse"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > `[`Data_Optional`](#structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d) | A collection of Player Orders.
`public bool `[`Data_IsSet`](#structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac) | true if Data_Optional has been set to a value
`public `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` `[`Page`](#structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrdersResponse_1a418f61fd5f024d525d0da70fc2d59a49)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrdersResponse_1a8555587cb327c4845ebd18ab880527e5)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1ad76e699d2da7462a33fe3366e3d6e6a6)`()` | Gets the value of Data_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1aa0ce4977b6a8afa0b638726a94dcd3b0)`() const` | Gets the value of Data_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1aaaee20124fe860f9661d8f2fe31f0727)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & DefaultValue) const` | Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1a90d4b437c35f15baf0d835b7cd43c4d5)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & OutValue) const` | Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1a02137244a73038499960c97d08e715dd)`()` | Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1aaa57c08fd59616f7d7f2a75d55f88436)`() const` | Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1a0bdc148248e6ff73e014b9ad2f6beec9)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > NewValue)` | Sets the value of Data_Optional and also sets Data_IsSet to true.
`public inline void `[`ClearData`](#structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be)`()` | Clears the value of Data_Optional and sets Data_IsSet to false.
`public inline `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a5bd79d7fe6f3248e6a235f109240bb05)`()` | Gets the value of Page.
`public inline const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a163356eaae70f3de59d40dfa53c6d282)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1ad6ebd309447418e0da39b0689bcc5116)`(`[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` NewValue)` | Sets the value of Page.

#### Members

#### `public TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > `[`Data_Optional`](#structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d) <a id="structFRHAPI__PlayerOrdersResponse_1a9b5ab0f08df600c223c5be96df84401d"></a>

A collection of Player Orders.

<br>
#### `public bool `[`Data_IsSet`](#structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac) <a id="structFRHAPI__PlayerOrdersResponse_1a53ee2928956e233c882bcc3352ae89ac"></a>

true if Data_Optional has been set to a value

<br>
#### `public `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` `[`Page`](#structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a) <a id="structFRHAPI__PlayerOrdersResponse_1a8a09919a81cb7fba37cf1166d9b60f2a"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrdersResponse_1a418f61fd5f024d525d0da70fc2d59a49)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a418f61fd5f024d525d0da70fc2d59a49"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrdersResponse_1a8555587cb327c4845ebd18ab880527e5)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerOrdersResponse_1a8555587cb327c4845ebd18ab880527e5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1ad76e699d2da7462a33fe3366e3d6e6a6)`()` <a id="structFRHAPI__PlayerOrdersResponse_1ad76e699d2da7462a33fe3366e3d6e6a6"></a>

Gets the value of Data_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1aa0ce4977b6a8afa0b638726a94dcd3b0)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1aa0ce4977b6a8afa0b638726a94dcd3b0"></a>

Gets the value of Data_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1aaaee20124fe860f9661d8f2fe31f0727)`(const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & DefaultValue) const` <a id="structFRHAPI__PlayerOrdersResponse_1aaaee20124fe860f9661d8f2fe31f0727"></a>

Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetData`](#structFRHAPI__PlayerOrdersResponse_1a90d4b437c35f15baf0d835b7cd43c4d5)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > & OutValue) const` <a id="structFRHAPI__PlayerOrdersResponse_1a90d4b437c35f15baf0d835b7cd43c4d5"></a>

Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1a02137244a73038499960c97d08e715dd)`()` <a id="structFRHAPI__PlayerOrdersResponse_1a02137244a73038499960c97d08e715dd"></a>

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > * `[`GetDataOrNull`](#structFRHAPI__PlayerOrdersResponse_1aaa57c08fd59616f7d7f2a75d55f88436)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1aaa57c08fd59616f7d7f2a75d55f88436"></a>

Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetData`](#structFRHAPI__PlayerOrdersResponse_1a0bdc148248e6ff73e014b9ad2f6beec9)`(TArray< `[`FRHAPI_PlayerOrder`](RHAPI_PlayerOrder.md#structFRHAPI__PlayerOrder)` > NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1a0bdc148248e6ff73e014b9ad2f6beec9"></a>

Sets the value of Data_Optional and also sets Data_IsSet to true.

<br>
#### `public inline void `[`ClearData`](#structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be)`()` <a id="structFRHAPI__PlayerOrdersResponse_1ad6f65b52067db43d4ee56fcd0c3154be"></a>

Clears the value of Data_Optional and sets Data_IsSet to false.

<br>
#### `public inline `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a5bd79d7fe6f3248e6a235f109240bb05)`()` <a id="structFRHAPI__PlayerOrdersResponse_1a5bd79d7fe6f3248e6a235f109240bb05"></a>

Gets the value of Page.

<br>
#### `public inline const `[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` & `[`GetPage`](#structFRHAPI__PlayerOrdersResponse_1a163356eaae70f3de59d40dfa53c6d282)`() const` <a id="structFRHAPI__PlayerOrdersResponse_1a163356eaae70f3de59d40dfa53c6d282"></a>

Gets the value of Page.

<br>
#### `public inline void `[`SetPage`](#structFRHAPI__PlayerOrdersResponse_1ad6ebd309447418e0da39b0689bcc5116)`(`[`FRHAPI_InventoryPageMeta`](RHAPI_InventoryPageMeta.md#structFRHAPI__InventoryPageMeta)` NewValue)` <a id="structFRHAPI__PlayerOrdersResponse_1ad6ebd309447418e0da39b0689bcc5116"></a>

Sets the value of Page.

<br>
