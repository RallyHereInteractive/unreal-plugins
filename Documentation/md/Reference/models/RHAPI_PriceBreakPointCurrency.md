---
title: RHAPI_PriceBreakPointCurrency
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PriceBreakPointCurrency`](#structFRHAPI__PriceBreakPointCurrency) | The currencies of a Price Breakpoint.

## struct `FRHAPI_PriceBreakPointCurrency` <a id="structFRHAPI__PriceBreakPointCurrency"></a>

```
struct FRHAPI_PriceBreakPointCurrency
  : public FRHAPI_Model
```

The currencies of a Price Breakpoint.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a6825eadd6f35d093e2f946a920e56b5e) | The Item used as the currency for the purchase.
`public int32 `[`PriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1aab4fef02c40243609a2fd4bb04e7e0b3) | The Item used as the currency for the purchase.
`public int32 `[`Price`](#structFRHAPI__PriceBreakPointCurrency_1a0fbeeaafec354c1df791be5b8b7d9a83) | The price of the Item.
`public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakPointCurrency_1a38b39a44fd1bae117ba63e1600323843)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakPointCurrency_1acc2a9f0bcbf761ac28f72dbec33036c6)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a84def262ad151efaf84a85ef83c8c4e1)`()` | Gets the value of PriceItemUuid.
`public inline const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1aef87ed3e12b86b9e33bdce90cb5e34d1)`() const` | Gets the value of PriceItemUuid.
`public inline void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a8aba90f373601cf290a7ad4c497604fa)`(const FGuid & NewValue)` | Sets the value of PriceItemUuid.
`public inline void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a2df2da4998d4d43c6546aafa0dc17ccd)`(FGuid && NewValue)` | Sets the value of PriceItemUuid using move semantics.
`public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a9a7ccc14c2d3cd089b6f961c08587549)`()` | Gets the value of PriceItemId.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1ac5ce26340bdadbc7d68a224588fc825e)`() const` | Gets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a4c32f427fd1a34146735b5e25cf5b7a8)`(const int32 & NewValue)` | Sets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1adee55d4262e267879deccf1346671bfc)`(int32 && NewValue)` | Sets the value of PriceItemId using move semantics.
`public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PriceBreakPointCurrency_1ac2e90c50c94de4f0366f965267d94755)`() const` | Returns true if PriceItemId matches the default value.
`public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PriceBreakPointCurrency_1af16d3af705d6e44aa6fc0bf8ea763873)`()` | Sets the value of PriceItemId to its default
`public inline int32 & `[`GetPrice`](#structFRHAPI__PriceBreakPointCurrency_1ac6d75ef6afcc418ff02d95801920ecce)`()` | Gets the value of Price.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a1f3ef328ca614a26458c2b2958d804ba)`() const` | Gets the value of Price.
`public inline void `[`SetPrice`](#structFRHAPI__PriceBreakPointCurrency_1ac631554943d37765136f4e554b2cde2d)`(const int32 & NewValue)` | Sets the value of Price.
`public inline void `[`SetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a4573389211659ecc6dc5a920a5d0b884)`(int32 && NewValue)` | Sets the value of Price using move semantics.
`public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PriceBreakPointCurrency_1a9a1537b11431e1c8253bbe95f15e7c16)`() const` | Returns true if Price matches the default value.
`public inline void `[`SetPriceToDefault`](#structFRHAPI__PriceBreakPointCurrency_1a3ff3ff898ac78e428be02c407a1c847e)`()` | Sets the value of Price to its default

### Members

#### `public FGuid `[`PriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a6825eadd6f35d093e2f946a920e56b5e) <a id="structFRHAPI__PriceBreakPointCurrency_1a6825eadd6f35d093e2f946a920e56b5e"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`PriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1aab4fef02c40243609a2fd4bb04e7e0b3) <a id="structFRHAPI__PriceBreakPointCurrency_1aab4fef02c40243609a2fd4bb04e7e0b3"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`Price`](#structFRHAPI__PriceBreakPointCurrency_1a0fbeeaafec354c1df791be5b8b7d9a83) <a id="structFRHAPI__PriceBreakPointCurrency_1a0fbeeaafec354c1df791be5b8b7d9a83"></a>

The price of the Item.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakPointCurrency_1a38b39a44fd1bae117ba63e1600323843)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a38b39a44fd1bae117ba63e1600323843"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakPointCurrency_1acc2a9f0bcbf761ac28f72dbec33036c6)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PriceBreakPointCurrency_1acc2a9f0bcbf761ac28f72dbec33036c6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a84def262ad151efaf84a85ef83c8c4e1)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a84def262ad151efaf84a85ef83c8c4e1"></a>

Gets the value of PriceItemUuid.

#### `public inline const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1aef87ed3e12b86b9e33bdce90cb5e34d1)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1aef87ed3e12b86b9e33bdce90cb5e34d1"></a>

Gets the value of PriceItemUuid.

#### `public inline void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a8aba90f373601cf290a7ad4c497604fa)`(const FGuid & NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a8aba90f373601cf290a7ad4c497604fa"></a>

Sets the value of PriceItemUuid.

#### `public inline void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a2df2da4998d4d43c6546aafa0dc17ccd)`(FGuid && NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a2df2da4998d4d43c6546aafa0dc17ccd"></a>

Sets the value of PriceItemUuid using move semantics.

#### `public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a9a7ccc14c2d3cd089b6f961c08587549)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a9a7ccc14c2d3cd089b6f961c08587549"></a>

Gets the value of PriceItemId.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1ac5ce26340bdadbc7d68a224588fc825e)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1ac5ce26340bdadbc7d68a224588fc825e"></a>

Gets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a4c32f427fd1a34146735b5e25cf5b7a8)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a4c32f427fd1a34146735b5e25cf5b7a8"></a>

Sets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1adee55d4262e267879deccf1346671bfc)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1adee55d4262e267879deccf1346671bfc"></a>

Sets the value of PriceItemId using move semantics.

#### `public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PriceBreakPointCurrency_1ac2e90c50c94de4f0366f965267d94755)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1ac2e90c50c94de4f0366f965267d94755"></a>

Returns true if PriceItemId matches the default value.

#### `public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PriceBreakPointCurrency_1af16d3af705d6e44aa6fc0bf8ea763873)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1af16d3af705d6e44aa6fc0bf8ea763873"></a>

Sets the value of PriceItemId to its default

#### `public inline int32 & `[`GetPrice`](#structFRHAPI__PriceBreakPointCurrency_1ac6d75ef6afcc418ff02d95801920ecce)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1ac6d75ef6afcc418ff02d95801920ecce"></a>

Gets the value of Price.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a1f3ef328ca614a26458c2b2958d804ba)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1a1f3ef328ca614a26458c2b2958d804ba"></a>

Gets the value of Price.

#### `public inline void `[`SetPrice`](#structFRHAPI__PriceBreakPointCurrency_1ac631554943d37765136f4e554b2cde2d)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1ac631554943d37765136f4e554b2cde2d"></a>

Sets the value of Price.

#### `public inline void `[`SetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a4573389211659ecc6dc5a920a5d0b884)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a4573389211659ecc6dc5a920a5d0b884"></a>

Sets the value of Price using move semantics.

#### `public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PriceBreakPointCurrency_1a9a1537b11431e1c8253bbe95f15e7c16)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1a9a1537b11431e1c8253bbe95f15e7c16"></a>

Returns true if Price matches the default value.

#### `public inline void `[`SetPriceToDefault`](#structFRHAPI__PriceBreakPointCurrency_1a3ff3ff898ac78e428be02c407a1c847e)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a3ff3ff898ac78e428be02c407a1c847e"></a>

Sets the value of Price to its default

