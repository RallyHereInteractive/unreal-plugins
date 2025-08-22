---
title: RHAPI_LootPriceCurrency
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LootPriceCurrency`](#structFRHAPI__LootPriceCurrency) | One currency (of potentially multiple) that can be used for a purchase, and how much of that currency is required for the purchase.

## struct `FRHAPI_LootPriceCurrency` <a id="structFRHAPI__LootPriceCurrency"></a>

```
struct FRHAPI_LootPriceCurrency
  : public FRHAPI_Model
```

One currency (of potentially multiple) that can be used for a purchase, and how much of that currency is required for the purchase.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PriceItemId`](#structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c) | The Item used as the currency for the purchase.
`public int32 `[`PriceLegacyItemId_Optional`](#structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf) | 
`public bool `[`PriceLegacyItemId_IsSet`](#structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9) | true if PriceLegacyItemId_Optional has been set to a value
`public bool `[`PriceLegacyItemId_IsNull`](#structFRHAPI__LootPriceCurrency_1a0591c08253dfc6da241dc74b8c6caa6c) | true if PriceLegacyItemId_Optional has been explicitly set to null
`public int32 `[`CurrentPrice`](#structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689) | The current amount of the item needed to use this price currency.
`public int32 `[`OriginalPrice_Optional`](#structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615) | 
`public bool `[`OriginalPrice_IsSet`](#structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9) | true if OriginalPrice_Optional has been set to a value
`public bool `[`OriginalPrice_IsNull`](#structFRHAPI__LootPriceCurrency_1ab63a60fa98f23d2d6a9300a8c407ef80) | true if OriginalPrice_Optional has been explicitly set to null
`public int32 `[`MinReducedPrice_Optional`](#structFRHAPI__LootPriceCurrency_1a2e962d0bda6abfcb8441021e39193db4) | 
`public bool `[`MinReducedPrice_IsSet`](#structFRHAPI__LootPriceCurrency_1a4033cc1a3c33e73cd3cf3b974522ca07) | true if MinReducedPrice_Optional has been set to a value
`public bool `[`MinReducedPrice_IsNull`](#structFRHAPI__LootPriceCurrency_1a00575f2a97ec9c00ba201882d8d525e6) | true if MinReducedPrice_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrency_1a3cbff339690df570db49702606c2ff9d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a680ef0d725b74a7e27a59c414bb57718)`()` | Gets the value of PriceItemId.
`public inline FORCEINLINE const FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1ae64d3cedaad7efe88de69d35f675cbb1)`() const` | Gets the value of PriceItemId.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a4ce8687825f6069a6c5bbf32aa0417ce)`(const FGuid & NewValue)` | Sets the value of PriceItemId.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a38c4aa462d6c927b54ff55a988a82bd5)`(FGuid && NewValue)` | Sets the value of PriceItemId using move semantics.
`public inline FORCEINLINE int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1aac4d099094ec4f47b071c411118b7577)`()` | Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a6c2fff1b5b198b6d03b2e9c766dc2e71)`() const` | Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a17db2781df518ee2f7ed69687012d44c)`(const int32 & DefaultValue) const` | Gets the value of PriceLegacyItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a78bd9b7cf6bfd337386874daa9b7b61f)`(int32 & OutValue) const` | Fills OutValue with the value of PriceLegacyItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1ad32645c85819e4dd11844d1ffe40eba7)`()` | Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a9758c96c5fcd2e2737146ab346a18fcd)`() const` | Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a836e79333ac8d4f0e6119b3b96460e34)`(const int32 & NewValue)` | Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a5f5703a63f7de85be777ed3cdca85a89)`(int32 && NewValue)` | Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a14aed06cd68fd028113cad861a230b00)`()` | Clears the value of PriceLegacyItemId_Optional and sets PriceLegacyItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1af50f8e0e29a6c168669591840cc3453c)`()` | Returns the default value of PriceLegacyItemId.
`public inline FORCEINLINE void `[`SetPriceLegacyItemIdToNull`](#structFRHAPI__LootPriceCurrency_1af9f9e6446a085a3d3510c9195a031af6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPriceLegacyItemIdNull`](#structFRHAPI__LootPriceCurrency_1a5ad64f545c66297f5983557d8e10c406)`() const` | Checks whether PriceLegacyItemId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a2092e21fcce0739d91b662105344b6a3)`()` | Gets the value of CurrentPrice.
`public inline FORCEINLINE const int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a2ecf1528fda1f0080ae6e239e1b3c8b9)`() const` | Gets the value of CurrentPrice.
`public inline FORCEINLINE void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a640b691836526626be710d4bb66b8d07)`(const int32 & NewValue)` | Sets the value of CurrentPrice.
`public inline FORCEINLINE void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a7554a94104811533a07f9fa85171058f)`(int32 && NewValue)` | Sets the value of CurrentPrice using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_CurrentPrice`](#structFRHAPI__LootPriceCurrency_1abc4a63492a54fab9692ebc9d2377379a)`()` | Returns the default value of CurrentPrice.
`public inline FORCEINLINE int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1af626b5fe043573c5186047f4e9a33c90)`()` | Gets the value of OriginalPrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1ae15bf3440493806958515d1736aea062)`() const` | Gets the value of OriginalPrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1af57013288dfe6b5cee8552885adffed9)`(const int32 & DefaultValue) const` | Gets the value of OriginalPrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1acc7991f6e8f3d9346a8967f94b3322fd)`(int32 & OutValue) const` | Fills OutValue with the value of OriginalPrice_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a12bad875e685509476f0bb25cfab7a5f)`()` | Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1ad7df2fe075468b5b408cdec929c9d1f4)`() const` | Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a2892f171c68247508782e6da8995d2dd)`(const int32 & NewValue)` | Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true.
`public inline FORCEINLINE void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a40d2d593c63c082461541d52e72b3e9c)`(int32 && NewValue)` | Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true using move semantics.
`public inline void `[`ClearOriginalPrice`](#structFRHAPI__LootPriceCurrency_1adb9e99e39f12ab4a59c4dda3e2d6152c)`()` | Clears the value of OriginalPrice_Optional and sets OriginalPrice_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_OriginalPrice`](#structFRHAPI__LootPriceCurrency_1a6fdc75d558a94aa81e4a4345e4ddffdd)`()` | Returns the default value of OriginalPrice.
`public inline FORCEINLINE void `[`SetOriginalPriceToNull`](#structFRHAPI__LootPriceCurrency_1a2dfe7ca6e50fc11392c01a539a085f75)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOriginalPriceNull`](#structFRHAPI__LootPriceCurrency_1a7bbc7321f48fac7754430a017ab93e5b)`() const` | Checks whether OriginalPrice_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1a2079a39db7fe9f44bb17742fcafd81f2)`()` | Gets the value of MinReducedPrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1a41b2068e83a7ba91a7ccfec3fe68a06c)`() const` | Gets the value of MinReducedPrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1aebeee199febec36b4b57692cc5bb19c2)`(const int32 & DefaultValue) const` | Gets the value of MinReducedPrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1ade095eda57dce0c5fa1ca581adabe6e2)`(int32 & OutValue) const` | Fills OutValue with the value of MinReducedPrice_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__LootPriceCurrency_1af9cc0a94affa7ff8d3d47724dcef4fff)`()` | Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a8c3e64b4a3fa44d75d8c1419adfb4f22)`() const` | Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1aeb9d49c195188cc415d2caaa01dae1f0)`(const int32 & NewValue)` | Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true.
`public inline FORCEINLINE void `[`SetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1a803bb054481cda4e0736334c371ba5ae)`(int32 && NewValue)` | Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true using move semantics.
`public inline void `[`ClearMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1a28e9db42e4b252aefdd206c2b20a7a29)`()` | Clears the value of MinReducedPrice_Optional and sets MinReducedPrice_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MinReducedPrice`](#structFRHAPI__LootPriceCurrency_1af035cf641c53d75961fe8544bba711e1)`()` | Returns the default value of MinReducedPrice.
`public inline FORCEINLINE void `[`SetMinReducedPriceToNull`](#structFRHAPI__LootPriceCurrency_1a0863bfce8c2167930a385d48c2deb1bb)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMinReducedPriceNull`](#structFRHAPI__LootPriceCurrency_1a3336dd16b2b58b297a02a4ddfef2197b)`() const` | Checks whether MinReducedPrice_Optional is set to null.

### Members

#### `public FGuid `[`PriceItemId`](#structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c) <a id="structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`PriceLegacyItemId_Optional`](#structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf) <a id="structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf"></a>

#### `public bool `[`PriceLegacyItemId_IsSet`](#structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9) <a id="structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9"></a>

true if PriceLegacyItemId_Optional has been set to a value

#### `public bool `[`PriceLegacyItemId_IsNull`](#structFRHAPI__LootPriceCurrency_1a0591c08253dfc6da241dc74b8c6caa6c) <a id="structFRHAPI__LootPriceCurrency_1a0591c08253dfc6da241dc74b8c6caa6c"></a>

true if PriceLegacyItemId_Optional has been explicitly set to null

#### `public int32 `[`CurrentPrice`](#structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689) <a id="structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689"></a>

The current amount of the item needed to use this price currency.

#### `public int32 `[`OriginalPrice_Optional`](#structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615) <a id="structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615"></a>

#### `public bool `[`OriginalPrice_IsSet`](#structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9) <a id="structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9"></a>

true if OriginalPrice_Optional has been set to a value

#### `public bool `[`OriginalPrice_IsNull`](#structFRHAPI__LootPriceCurrency_1ab63a60fa98f23d2d6a9300a8c407ef80) <a id="structFRHAPI__LootPriceCurrency_1ab63a60fa98f23d2d6a9300a8c407ef80"></a>

true if OriginalPrice_Optional has been explicitly set to null

#### `public int32 `[`MinReducedPrice_Optional`](#structFRHAPI__LootPriceCurrency_1a2e962d0bda6abfcb8441021e39193db4) <a id="structFRHAPI__LootPriceCurrency_1a2e962d0bda6abfcb8441021e39193db4"></a>

#### `public bool `[`MinReducedPrice_IsSet`](#structFRHAPI__LootPriceCurrency_1a4033cc1a3c33e73cd3cf3b974522ca07) <a id="structFRHAPI__LootPriceCurrency_1a4033cc1a3c33e73cd3cf3b974522ca07"></a>

true if MinReducedPrice_Optional has been set to a value

#### `public bool `[`MinReducedPrice_IsNull`](#structFRHAPI__LootPriceCurrency_1a00575f2a97ec9c00ba201882d8d525e6) <a id="structFRHAPI__LootPriceCurrency_1a00575f2a97ec9c00ba201882d8d525e6"></a>

true if MinReducedPrice_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrency_1a3cbff339690df570db49702606c2ff9d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LootPriceCurrency_1a3cbff339690df570db49702606c2ff9d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a680ef0d725b74a7e27a59c414bb57718)`()` <a id="structFRHAPI__LootPriceCurrency_1a680ef0d725b74a7e27a59c414bb57718"></a>

Gets the value of PriceItemId.

#### `public inline FORCEINLINE const FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1ae64d3cedaad7efe88de69d35f675cbb1)`() const` <a id="structFRHAPI__LootPriceCurrency_1ae64d3cedaad7efe88de69d35f675cbb1"></a>

Gets the value of PriceItemId.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a4ce8687825f6069a6c5bbf32aa0417ce)`(const FGuid & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a4ce8687825f6069a6c5bbf32aa0417ce"></a>

Sets the value of PriceItemId.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a38c4aa462d6c927b54ff55a988a82bd5)`(FGuid && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a38c4aa462d6c927b54ff55a988a82bd5"></a>

Sets the value of PriceItemId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1aac4d099094ec4f47b071c411118b7577)`()` <a id="structFRHAPI__LootPriceCurrency_1aac4d099094ec4f47b071c411118b7577"></a>

Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a6c2fff1b5b198b6d03b2e9c766dc2e71)`() const` <a id="structFRHAPI__LootPriceCurrency_1a6c2fff1b5b198b6d03b2e9c766dc2e71"></a>

Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a17db2781df518ee2f7ed69687012d44c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrency_1a17db2781df518ee2f7ed69687012d44c"></a>

Gets the value of PriceLegacyItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a78bd9b7cf6bfd337386874daa9b7b61f)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceCurrency_1a78bd9b7cf6bfd337386874daa9b7b61f"></a>

Fills OutValue with the value of PriceLegacyItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1ad32645c85819e4dd11844d1ffe40eba7)`()` <a id="structFRHAPI__LootPriceCurrency_1ad32645c85819e4dd11844d1ffe40eba7"></a>

Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a9758c96c5fcd2e2737146ab346a18fcd)`() const` <a id="structFRHAPI__LootPriceCurrency_1a9758c96c5fcd2e2737146ab346a18fcd"></a>

Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a836e79333ac8d4f0e6119b3b96460e34)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a836e79333ac8d4f0e6119b3b96460e34"></a>

Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a5f5703a63f7de85be777ed3cdca85a89)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a5f5703a63f7de85be777ed3cdca85a89"></a>

Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a14aed06cd68fd028113cad861a230b00)`()` <a id="structFRHAPI__LootPriceCurrency_1a14aed06cd68fd028113cad861a230b00"></a>

Clears the value of PriceLegacyItemId_Optional and sets PriceLegacyItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1af50f8e0e29a6c168669591840cc3453c)`()` <a id="structFRHAPI__LootPriceCurrency_1af50f8e0e29a6c168669591840cc3453c"></a>

Returns the default value of PriceLegacyItemId.

#### `public inline FORCEINLINE void `[`SetPriceLegacyItemIdToNull`](#structFRHAPI__LootPriceCurrency_1af9f9e6446a085a3d3510c9195a031af6)`()` <a id="structFRHAPI__LootPriceCurrency_1af9f9e6446a085a3d3510c9195a031af6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPriceLegacyItemIdNull`](#structFRHAPI__LootPriceCurrency_1a5ad64f545c66297f5983557d8e10c406)`() const` <a id="structFRHAPI__LootPriceCurrency_1a5ad64f545c66297f5983557d8e10c406"></a>

Checks whether PriceLegacyItemId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a2092e21fcce0739d91b662105344b6a3)`()` <a id="structFRHAPI__LootPriceCurrency_1a2092e21fcce0739d91b662105344b6a3"></a>

Gets the value of CurrentPrice.

#### `public inline FORCEINLINE const int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a2ecf1528fda1f0080ae6e239e1b3c8b9)`() const` <a id="structFRHAPI__LootPriceCurrency_1a2ecf1528fda1f0080ae6e239e1b3c8b9"></a>

Gets the value of CurrentPrice.

#### `public inline FORCEINLINE void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a640b691836526626be710d4bb66b8d07)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a640b691836526626be710d4bb66b8d07"></a>

Sets the value of CurrentPrice.

#### `public inline FORCEINLINE void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a7554a94104811533a07f9fa85171058f)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a7554a94104811533a07f9fa85171058f"></a>

Sets the value of CurrentPrice using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_CurrentPrice`](#structFRHAPI__LootPriceCurrency_1abc4a63492a54fab9692ebc9d2377379a)`()` <a id="structFRHAPI__LootPriceCurrency_1abc4a63492a54fab9692ebc9d2377379a"></a>

Returns the default value of CurrentPrice.

#### `public inline FORCEINLINE int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1af626b5fe043573c5186047f4e9a33c90)`()` <a id="structFRHAPI__LootPriceCurrency_1af626b5fe043573c5186047f4e9a33c90"></a>

Gets the value of OriginalPrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1ae15bf3440493806958515d1736aea062)`() const` <a id="structFRHAPI__LootPriceCurrency_1ae15bf3440493806958515d1736aea062"></a>

Gets the value of OriginalPrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1af57013288dfe6b5cee8552885adffed9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrency_1af57013288dfe6b5cee8552885adffed9"></a>

Gets the value of OriginalPrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1acc7991f6e8f3d9346a8967f94b3322fd)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceCurrency_1acc7991f6e8f3d9346a8967f94b3322fd"></a>

Fills OutValue with the value of OriginalPrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a12bad875e685509476f0bb25cfab7a5f)`()` <a id="structFRHAPI__LootPriceCurrency_1a12bad875e685509476f0bb25cfab7a5f"></a>

Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1ad7df2fe075468b5b408cdec929c9d1f4)`() const` <a id="structFRHAPI__LootPriceCurrency_1ad7df2fe075468b5b408cdec929c9d1f4"></a>

Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a2892f171c68247508782e6da8995d2dd)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a2892f171c68247508782e6da8995d2dd"></a>

Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a40d2d593c63c082461541d52e72b3e9c)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a40d2d593c63c082461541d52e72b3e9c"></a>

Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true using move semantics.

#### `public inline void `[`ClearOriginalPrice`](#structFRHAPI__LootPriceCurrency_1adb9e99e39f12ab4a59c4dda3e2d6152c)`()` <a id="structFRHAPI__LootPriceCurrency_1adb9e99e39f12ab4a59c4dda3e2d6152c"></a>

Clears the value of OriginalPrice_Optional and sets OriginalPrice_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_OriginalPrice`](#structFRHAPI__LootPriceCurrency_1a6fdc75d558a94aa81e4a4345e4ddffdd)`()` <a id="structFRHAPI__LootPriceCurrency_1a6fdc75d558a94aa81e4a4345e4ddffdd"></a>

Returns the default value of OriginalPrice.

#### `public inline FORCEINLINE void `[`SetOriginalPriceToNull`](#structFRHAPI__LootPriceCurrency_1a2dfe7ca6e50fc11392c01a539a085f75)`()` <a id="structFRHAPI__LootPriceCurrency_1a2dfe7ca6e50fc11392c01a539a085f75"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOriginalPriceNull`](#structFRHAPI__LootPriceCurrency_1a7bbc7321f48fac7754430a017ab93e5b)`() const` <a id="structFRHAPI__LootPriceCurrency_1a7bbc7321f48fac7754430a017ab93e5b"></a>

Checks whether OriginalPrice_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1a2079a39db7fe9f44bb17742fcafd81f2)`()` <a id="structFRHAPI__LootPriceCurrency_1a2079a39db7fe9f44bb17742fcafd81f2"></a>

Gets the value of MinReducedPrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1a41b2068e83a7ba91a7ccfec3fe68a06c)`() const` <a id="structFRHAPI__LootPriceCurrency_1a41b2068e83a7ba91a7ccfec3fe68a06c"></a>

Gets the value of MinReducedPrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1aebeee199febec36b4b57692cc5bb19c2)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrency_1aebeee199febec36b4b57692cc5bb19c2"></a>

Gets the value of MinReducedPrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1ade095eda57dce0c5fa1ca581adabe6e2)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceCurrency_1ade095eda57dce0c5fa1ca581adabe6e2"></a>

Fills OutValue with the value of MinReducedPrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__LootPriceCurrency_1af9cc0a94affa7ff8d3d47724dcef4fff)`()` <a id="structFRHAPI__LootPriceCurrency_1af9cc0a94affa7ff8d3d47724dcef4fff"></a>

Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a8c3e64b4a3fa44d75d8c1419adfb4f22)`() const` <a id="structFRHAPI__LootPriceCurrency_1a8c3e64b4a3fa44d75d8c1419adfb4f22"></a>

Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1aeb9d49c195188cc415d2caaa01dae1f0)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1aeb9d49c195188cc415d2caaa01dae1f0"></a>

Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1a803bb054481cda4e0736334c371ba5ae)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a803bb054481cda4e0736334c371ba5ae"></a>

Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true using move semantics.

#### `public inline void `[`ClearMinReducedPrice`](#structFRHAPI__LootPriceCurrency_1a28e9db42e4b252aefdd206c2b20a7a29)`()` <a id="structFRHAPI__LootPriceCurrency_1a28e9db42e4b252aefdd206c2b20a7a29"></a>

Clears the value of MinReducedPrice_Optional and sets MinReducedPrice_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MinReducedPrice`](#structFRHAPI__LootPriceCurrency_1af035cf641c53d75961fe8544bba711e1)`()` <a id="structFRHAPI__LootPriceCurrency_1af035cf641c53d75961fe8544bba711e1"></a>

Returns the default value of MinReducedPrice.

#### `public inline FORCEINLINE void `[`SetMinReducedPriceToNull`](#structFRHAPI__LootPriceCurrency_1a0863bfce8c2167930a385d48c2deb1bb)`()` <a id="structFRHAPI__LootPriceCurrency_1a0863bfce8c2167930a385d48c2deb1bb"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMinReducedPriceNull`](#structFRHAPI__LootPriceCurrency_1a3336dd16b2b58b297a02a4ddfef2197b)`() const` <a id="structFRHAPI__LootPriceCurrency_1a3336dd16b2b58b297a02a4ddfef2197b"></a>

Checks whether MinReducedPrice_Optional is set to null.

