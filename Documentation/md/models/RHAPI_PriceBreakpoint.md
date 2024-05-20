# RHAPI_PriceBreakpoint <a id="group__RHAPI__PriceBreakpoint"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PriceBreakpoint`](#structFRHAPI__PriceBreakpoint) | Price based on quantity and the Item ID of the currency used.

## struct `FRHAPI_PriceBreakpoint` <a id="structFRHAPI__PriceBreakpoint"></a>

```
struct FRHAPI_PriceBreakpoint
  : public FRHAPI_Model
```

Price based on quantity and the Item ID of the currency used.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PriceItemId`](#structFRHAPI__PriceBreakpoint_1aea8d374cdca8847dad17d68ca00567c4) | 
`public int32 `[`Quantity`](#structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f) | 
`public int32 `[`Price`](#structFRHAPI__PriceBreakpoint_1a68ff2ebaf89ce930b46863d891021bf7) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakpoint_1a064dec90e8b5f050ae7648f08d2b2bc6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakpoint_1a990548c6c5b1c4bc400f136236b5ae48)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a6b13611738a078d0c65c7b54a06ff407)`()` | Gets the value of PriceItemId.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1af54e7868d8cab16e798d938f8a0ed102)`() const` | Gets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ab84fdb3594e5664ff0e7d9ae6ef8294a)`(int32 NewValue)` | Sets the value of PriceItemId.
`public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986)`() const` | Returns true if PriceItemId matches the default value.
`public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010)`()` | Sets the value of PriceItemId to its default
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1af05d9fe1f283434b76882e5a6d698b77)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1a5f75a5a6b0236a678de1e8927018cbf9)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a44a00ca3861e26114270338f7833c141)`(int32 NewValue)` | Sets the value of Quantity.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd)`()` | Sets the value of Quantity to its default
`public inline int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1aa5a67208d3a0e33523dd92cefd8562e0)`()` | Gets the value of Price.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a9b8b223c98c38cd680a24c72652b1a43)`() const` | Gets the value of Price.
`public inline void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1ae1d835d2cc095e9ed7fb918b8c0a2091)`(int32 NewValue)` | Sets the value of Price.
`public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2)`() const` | Returns true if Price matches the default value.
`public inline void `[`SetPriceToDefault`](#structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162)`()` | Sets the value of Price to its default

#### Members

#### `public int32 `[`PriceItemId`](#structFRHAPI__PriceBreakpoint_1aea8d374cdca8847dad17d68ca00567c4) <a id="structFRHAPI__PriceBreakpoint_1aea8d374cdca8847dad17d68ca00567c4"></a>

#### `public int32 `[`Quantity`](#structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f) <a id="structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f"></a>

#### `public int32 `[`Price`](#structFRHAPI__PriceBreakpoint_1a68ff2ebaf89ce930b46863d891021bf7) <a id="structFRHAPI__PriceBreakpoint_1a68ff2ebaf89ce930b46863d891021bf7"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakpoint_1a064dec90e8b5f050ae7648f08d2b2bc6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PriceBreakpoint_1a064dec90e8b5f050ae7648f08d2b2bc6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakpoint_1a990548c6c5b1c4bc400f136236b5ae48)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PriceBreakpoint_1a990548c6c5b1c4bc400f136236b5ae48"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a6b13611738a078d0c65c7b54a06ff407)`()` <a id="structFRHAPI__PriceBreakpoint_1a6b13611738a078d0c65c7b54a06ff407"></a>

Gets the value of PriceItemId.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1af54e7868d8cab16e798d938f8a0ed102)`() const` <a id="structFRHAPI__PriceBreakpoint_1af54e7868d8cab16e798d938f8a0ed102"></a>

Gets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ab84fdb3594e5664ff0e7d9ae6ef8294a)`(int32 NewValue)` <a id="structFRHAPI__PriceBreakpoint_1ab84fdb3594e5664ff0e7d9ae6ef8294a"></a>

Sets the value of PriceItemId.

#### `public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986)`() const` <a id="structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986"></a>

Returns true if PriceItemId matches the default value.

#### `public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010)`()` <a id="structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010"></a>

Sets the value of PriceItemId to its default

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1af05d9fe1f283434b76882e5a6d698b77)`()` <a id="structFRHAPI__PriceBreakpoint_1af05d9fe1f283434b76882e5a6d698b77"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1a5f75a5a6b0236a678de1e8927018cbf9)`() const` <a id="structFRHAPI__PriceBreakpoint_1a5f75a5a6b0236a678de1e8927018cbf9"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a44a00ca3861e26114270338f7833c141)`(int32 NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a44a00ca3861e26114270338f7833c141"></a>

Sets the value of Quantity.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d)`() const` <a id="structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd)`()` <a id="structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd"></a>

Sets the value of Quantity to its default

#### `public inline int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1aa5a67208d3a0e33523dd92cefd8562e0)`()` <a id="structFRHAPI__PriceBreakpoint_1aa5a67208d3a0e33523dd92cefd8562e0"></a>

Gets the value of Price.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a9b8b223c98c38cd680a24c72652b1a43)`() const` <a id="structFRHAPI__PriceBreakpoint_1a9b8b223c98c38cd680a24c72652b1a43"></a>

Gets the value of Price.

#### `public inline void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1ae1d835d2cc095e9ed7fb918b8c0a2091)`(int32 NewValue)` <a id="structFRHAPI__PriceBreakpoint_1ae1d835d2cc095e9ed7fb918b8c0a2091"></a>

Sets the value of Price.

#### `public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2)`() const` <a id="structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2"></a>

Returns true if Price matches the default value.

#### `public inline void `[`SetPriceToDefault`](#structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162)`()` <a id="structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162"></a>

Sets the value of Price to its default

