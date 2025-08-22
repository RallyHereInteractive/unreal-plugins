---
title: RHAPI_PurchasePriceCurrency
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PurchasePriceCurrency`](#structFRHAPI__PurchasePriceCurrency) | The purchase price currencies of an Item.

## struct `FRHAPI_PurchasePriceCurrency` <a id="structFRHAPI__PurchasePriceCurrency"></a>

```
struct FRHAPI_PurchasePriceCurrency
  : public FRHAPI_Model
```

The purchase price currencies of an Item.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a8fdc45fe01eee1c2324a3b0679c235da) | The Item used as the currency for the purchase.
`public int32 `[`Price`](#structFRHAPI__PurchasePriceCurrency_1a1d3d4f732662736ec75506e9463fd5ac) | The price of the Item.
`public virtual bool `[`FromJson`](#structFRHAPI__PurchasePriceCurrency_1addcbb4c203e2e0fee540dfc2d31dd9b2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurchasePriceCurrency_1a0f8463c563417720d17046401c133cf8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1aa642e2017a7c68a09197184c5cc4933a)`()` | Gets the value of PriceItemId.
`public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a55199a7a7d279724f445b299ba26dbb8)`() const` | Gets the value of PriceItemId.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1aeb6e87b2055452be94f229df071178ab)`(const int32 & NewValue)` | Sets the value of PriceItemId.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1af2ab0af2ea9e78b0aefe31878627ef6f)`(int32 && NewValue)` | Sets the value of PriceItemId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a6e8b12f5c39309a22704ddb57f84d2e7)`()` | Returns the default value of PriceItemId.
`public inline FORCEINLINE int32 & `[`GetPrice`](#structFRHAPI__PurchasePriceCurrency_1acd10a46ab8fc6d12f6bc7fbc072a6411)`()` | Gets the value of Price.
`public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PurchasePriceCurrency_1a95cccbfdfcc2d6a087b0f458897e8add)`() const` | Gets the value of Price.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PurchasePriceCurrency_1a0aa7028cf0461cc08777a64c0a938727)`(const int32 & NewValue)` | Sets the value of Price.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PurchasePriceCurrency_1a593ee6698c8772e831ba5085812cfff7)`(int32 && NewValue)` | Sets the value of Price using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Price`](#structFRHAPI__PurchasePriceCurrency_1ac2a976bd6665b930cddcb4855dc29592)`()` | Returns the default value of Price.

### Members

#### `public int32 `[`PriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a8fdc45fe01eee1c2324a3b0679c235da) <a id="structFRHAPI__PurchasePriceCurrency_1a8fdc45fe01eee1c2324a3b0679c235da"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`Price`](#structFRHAPI__PurchasePriceCurrency_1a1d3d4f732662736ec75506e9463fd5ac) <a id="structFRHAPI__PurchasePriceCurrency_1a1d3d4f732662736ec75506e9463fd5ac"></a>

The price of the Item.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PurchasePriceCurrency_1addcbb4c203e2e0fee540dfc2d31dd9b2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PurchasePriceCurrency_1addcbb4c203e2e0fee540dfc2d31dd9b2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PurchasePriceCurrency_1a0f8463c563417720d17046401c133cf8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PurchasePriceCurrency_1a0f8463c563417720d17046401c133cf8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1aa642e2017a7c68a09197184c5cc4933a)`()` <a id="structFRHAPI__PurchasePriceCurrency_1aa642e2017a7c68a09197184c5cc4933a"></a>

Gets the value of PriceItemId.

#### `public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a55199a7a7d279724f445b299ba26dbb8)`() const` <a id="structFRHAPI__PurchasePriceCurrency_1a55199a7a7d279724f445b299ba26dbb8"></a>

Gets the value of PriceItemId.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1aeb6e87b2055452be94f229df071178ab)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePriceCurrency_1aeb6e87b2055452be94f229df071178ab"></a>

Sets the value of PriceItemId.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1af2ab0af2ea9e78b0aefe31878627ef6f)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePriceCurrency_1af2ab0af2ea9e78b0aefe31878627ef6f"></a>

Sets the value of PriceItemId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a6e8b12f5c39309a22704ddb57f84d2e7)`()` <a id="structFRHAPI__PurchasePriceCurrency_1a6e8b12f5c39309a22704ddb57f84d2e7"></a>

Returns the default value of PriceItemId.

#### `public inline FORCEINLINE int32 & `[`GetPrice`](#structFRHAPI__PurchasePriceCurrency_1acd10a46ab8fc6d12f6bc7fbc072a6411)`()` <a id="structFRHAPI__PurchasePriceCurrency_1acd10a46ab8fc6d12f6bc7fbc072a6411"></a>

Gets the value of Price.

#### `public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PurchasePriceCurrency_1a95cccbfdfcc2d6a087b0f458897e8add)`() const` <a id="structFRHAPI__PurchasePriceCurrency_1a95cccbfdfcc2d6a087b0f458897e8add"></a>

Gets the value of Price.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PurchasePriceCurrency_1a0aa7028cf0461cc08777a64c0a938727)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePriceCurrency_1a0aa7028cf0461cc08777a64c0a938727"></a>

Sets the value of Price.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PurchasePriceCurrency_1a593ee6698c8772e831ba5085812cfff7)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePriceCurrency_1a593ee6698c8772e831ba5085812cfff7"></a>

Sets the value of Price using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Price`](#structFRHAPI__PurchasePriceCurrency_1ac2a976bd6665b930cddcb4855dc29592)`()` <a id="structFRHAPI__PurchasePriceCurrency_1ac2a976bd6665b930cddcb4855dc29592"></a>

Returns the default value of Price.

