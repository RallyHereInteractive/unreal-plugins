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
`public int32 `[`MinReducedPrice_Optional`](#structFRHAPI__PriceBreakPointCurrency_1a0ac0645921ade0588488d2686477d78a) | 
`public bool `[`MinReducedPrice_IsSet`](#structFRHAPI__PriceBreakPointCurrency_1a9f447bb6e25cc2c12aef143d07d5aeff) | true if MinReducedPrice_Optional has been set to a value
`public bool `[`MinReducedPrice_IsNull`](#structFRHAPI__PriceBreakPointCurrency_1ad03da28c1045d1a07dd31c23a6c1b67d) | true if MinReducedPrice_Optional has been explicitly set to null
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
`public inline int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a4365322aaee8d0cdc393eabc4dbb8545)`()` | Gets the value of MinReducedPrice_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1ade698dc02f475a21000772cd479b3840)`() const` | Gets the value of MinReducedPrice_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a2e7d2f21d32a916150ac8e96a6a4e382)`(const int32 & DefaultValue) const` | Gets the value of MinReducedPrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a36c818e93c18a149a0792178f898980f)`(int32 & OutValue) const` | Fills OutValue with the value of MinReducedPrice_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__PriceBreakPointCurrency_1abf0f2e9147af8e4b42f5d9ec85ccf981)`()` | Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__PriceBreakPointCurrency_1a565ba21fe9bd88d77fc8f9c852467169)`() const` | Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a96e19ffceff35e68c40c56228413878a)`(const int32 & NewValue)` | Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true.
`public inline void `[`SetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1acfa379675c8cac131d2f551ca0c932a9)`(int32 && NewValue)` | Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true using move semantics.
`public inline void `[`ClearMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a92c5e8210e4de9957632082bd76d0a76)`()` | Clears the value of MinReducedPrice_Optional and sets MinReducedPrice_IsSet to false.
`public inline bool `[`IsMinReducedPriceSet`](#structFRHAPI__PriceBreakPointCurrency_1ad9d1aff88698f8e87dfb36dcf7931f7f)`() const` | Checks whether MinReducedPrice_Optional has been set.
`public inline bool `[`IsMinReducedPriceDefaultValue`](#structFRHAPI__PriceBreakPointCurrency_1acc6d374b30880074044321b5ee90d721)`() const` | Returns true if MinReducedPrice_Optional is set and matches the default value.
`public inline void `[`SetMinReducedPriceToDefault`](#structFRHAPI__PriceBreakPointCurrency_1a24b4b946154fe4a23b80c0eea199ad20)`()` | Sets the value of MinReducedPrice_Optional to its default and also sets MinReducedPrice_IsSet to true.
`public inline void `[`SetMinReducedPriceToNull`](#structFRHAPI__PriceBreakPointCurrency_1af9798e8920d1994e470838b2761d6a9e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMinReducedPriceNull`](#structFRHAPI__PriceBreakPointCurrency_1a18689898754eacbaa4080c09e4beb4ad)`() const` | Checks whether MinReducedPrice_Optional is set to null.

### Members

#### `public FGuid `[`PriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a6825eadd6f35d093e2f946a920e56b5e) <a id="structFRHAPI__PriceBreakPointCurrency_1a6825eadd6f35d093e2f946a920e56b5e"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`PriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1aab4fef02c40243609a2fd4bb04e7e0b3) <a id="structFRHAPI__PriceBreakPointCurrency_1aab4fef02c40243609a2fd4bb04e7e0b3"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`Price`](#structFRHAPI__PriceBreakPointCurrency_1a0fbeeaafec354c1df791be5b8b7d9a83) <a id="structFRHAPI__PriceBreakPointCurrency_1a0fbeeaafec354c1df791be5b8b7d9a83"></a>

The price of the Item.

#### `public int32 `[`MinReducedPrice_Optional`](#structFRHAPI__PriceBreakPointCurrency_1a0ac0645921ade0588488d2686477d78a) <a id="structFRHAPI__PriceBreakPointCurrency_1a0ac0645921ade0588488d2686477d78a"></a>

#### `public bool `[`MinReducedPrice_IsSet`](#structFRHAPI__PriceBreakPointCurrency_1a9f447bb6e25cc2c12aef143d07d5aeff) <a id="structFRHAPI__PriceBreakPointCurrency_1a9f447bb6e25cc2c12aef143d07d5aeff"></a>

true if MinReducedPrice_Optional has been set to a value

#### `public bool `[`MinReducedPrice_IsNull`](#structFRHAPI__PriceBreakPointCurrency_1ad03da28c1045d1a07dd31c23a6c1b67d) <a id="structFRHAPI__PriceBreakPointCurrency_1ad03da28c1045d1a07dd31c23a6c1b67d"></a>

true if MinReducedPrice_Optional has been explicitly set to null

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

#### `public inline int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a4365322aaee8d0cdc393eabc4dbb8545)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a4365322aaee8d0cdc393eabc4dbb8545"></a>

Gets the value of MinReducedPrice_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1ade698dc02f475a21000772cd479b3840)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1ade698dc02f475a21000772cd479b3840"></a>

Gets the value of MinReducedPrice_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a2e7d2f21d32a916150ac8e96a6a4e382)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PriceBreakPointCurrency_1a2e7d2f21d32a916150ac8e96a6a4e382"></a>

Gets the value of MinReducedPrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a36c818e93c18a149a0792178f898980f)`(int32 & OutValue) const` <a id="structFRHAPI__PriceBreakPointCurrency_1a36c818e93c18a149a0792178f898980f"></a>

Fills OutValue with the value of MinReducedPrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__PriceBreakPointCurrency_1abf0f2e9147af8e4b42f5d9ec85ccf981)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1abf0f2e9147af8e4b42f5d9ec85ccf981"></a>

Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__PriceBreakPointCurrency_1a565ba21fe9bd88d77fc8f9c852467169)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1a565ba21fe9bd88d77fc8f9c852467169"></a>

Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a96e19ffceff35e68c40c56228413878a)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a96e19ffceff35e68c40c56228413878a"></a>

Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true.

#### `public inline void `[`SetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1acfa379675c8cac131d2f551ca0c932a9)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1acfa379675c8cac131d2f551ca0c932a9"></a>

Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true using move semantics.

#### `public inline void `[`ClearMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a92c5e8210e4de9957632082bd76d0a76)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a92c5e8210e4de9957632082bd76d0a76"></a>

Clears the value of MinReducedPrice_Optional and sets MinReducedPrice_IsSet to false.

#### `public inline bool `[`IsMinReducedPriceSet`](#structFRHAPI__PriceBreakPointCurrency_1ad9d1aff88698f8e87dfb36dcf7931f7f)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1ad9d1aff88698f8e87dfb36dcf7931f7f"></a>

Checks whether MinReducedPrice_Optional has been set.

#### `public inline bool `[`IsMinReducedPriceDefaultValue`](#structFRHAPI__PriceBreakPointCurrency_1acc6d374b30880074044321b5ee90d721)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1acc6d374b30880074044321b5ee90d721"></a>

Returns true if MinReducedPrice_Optional is set and matches the default value.

#### `public inline void `[`SetMinReducedPriceToDefault`](#structFRHAPI__PriceBreakPointCurrency_1a24b4b946154fe4a23b80c0eea199ad20)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a24b4b946154fe4a23b80c0eea199ad20"></a>

Sets the value of MinReducedPrice_Optional to its default and also sets MinReducedPrice_IsSet to true.

#### `public inline void `[`SetMinReducedPriceToNull`](#structFRHAPI__PriceBreakPointCurrency_1af9798e8920d1994e470838b2761d6a9e)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1af9798e8920d1994e470838b2761d6a9e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMinReducedPriceNull`](#structFRHAPI__PriceBreakPointCurrency_1a18689898754eacbaa4080c09e4beb4ad)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1a18689898754eacbaa4080c09e4beb4ad"></a>

Checks whether MinReducedPrice_Optional is set to null.

