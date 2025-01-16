---
title: RHAPI_PriceBreakpoint
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PriceItemUuid_Optional`](#structFRHAPI__PriceBreakpoint_1af184285e7dff0bd568aca23ea7161b57) | 
`public bool `[`PriceItemUuid_IsSet`](#structFRHAPI__PriceBreakpoint_1a9574a93f4436a160448bf3990cb6511e) | true if PriceItemUuid_Optional has been set to a value
`public bool `[`PriceItemUuid_IsNull`](#structFRHAPI__PriceBreakpoint_1a686e6ae044dd6f4b99340d55555084a1) | true if PriceItemUuid_Optional has been explicitly set to null
`public int32 `[`PriceItemId_Optional`](#structFRHAPI__PriceBreakpoint_1a1131fdc8e383058f5333759ad52d4de0) | 
`public bool `[`PriceItemId_IsSet`](#structFRHAPI__PriceBreakpoint_1a49eebd3358ca2ced281ee0082871901c) | true if PriceItemId_Optional has been set to a value
`public bool `[`PriceItemId_IsNull`](#structFRHAPI__PriceBreakpoint_1afb851f9486e00bdaf305300f2ff10267) | true if PriceItemId_Optional has been explicitly set to null
`public int32 `[`Quantity`](#structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f) | 
`public int32 `[`Price_Optional`](#structFRHAPI__PriceBreakpoint_1acfbcfae17dc2a1f04a4defb1fc52e990) | 
`public bool `[`Price_IsSet`](#structFRHAPI__PriceBreakpoint_1a3e7cb86883ae1771c3e2e0ec3b1075ba) | true if Price_Optional has been set to a value
`public bool `[`Price_IsNull`](#structFRHAPI__PriceBreakpoint_1af13b0591c1d7d987cafbff49571c5df4) | true if Price_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > `[`Currencies_Optional`](#structFRHAPI__PriceBreakpoint_1ac7b40c9a96584dd7745fa8d8d74608fe) | 
`public bool `[`Currencies_IsSet`](#structFRHAPI__PriceBreakpoint_1a2113865e65946b4189b922f9ca63dcdd) | true if Currencies_Optional has been set to a value
`public bool `[`Currencies_IsNull`](#structFRHAPI__PriceBreakpoint_1ab8bab20352e6cf8b12829008bdfae72c) | true if Currencies_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakpoint_1add9350ff002ae19fedd40fbeff689547)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakpoint_1aceaf793170d3b98d1915d54e002bab4e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a3859ff717e9672a1273a3be6aeffd063)`()` | Gets the value of PriceItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a38de6f4ec6d0c3b9200af310ef639b7d)`() const` | Gets the value of PriceItemUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a851f2dce84c3ae392624cd777f2f3c0b)`(const FGuid & DefaultValue) const` | Gets the value of PriceItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a3c1390ed226fbcf7c14f2dd16028fdf3)`(FGuid & OutValue) const` | Fills OutValue with the value of PriceItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPriceItemUuidOrNull`](#structFRHAPI__PriceBreakpoint_1ae4c97e3539819dabd37223a6260187c1)`()` | Returns a pointer to PriceItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPriceItemUuidOrNull`](#structFRHAPI__PriceBreakpoint_1aba99ba7a419a1a10fec09cec027fed0a)`() const` | Returns a pointer to PriceItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a8122877bd9e5e87b197bb784de7f0479)`(const FGuid & NewValue)` | Sets the value of PriceItemUuid_Optional and also sets PriceItemUuid_IsSet to true.
`public inline void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1af7869b8368db1edf57cf4f15caddeb37)`(FGuid && NewValue)` | Sets the value of PriceItemUuid_Optional and also sets PriceItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1aa1c7e04814b665d4582f18f6c01ea39f)`()` | Clears the value of PriceItemUuid_Optional and sets PriceItemUuid_IsSet to false.
`public inline bool `[`IsPriceItemUuidSet`](#structFRHAPI__PriceBreakpoint_1a89c2c5cef7d26c119994850ba2d4194d)`() const` | Checks whether PriceItemUuid_Optional has been set.
`public inline void `[`SetPriceItemUuidToNull`](#structFRHAPI__PriceBreakpoint_1add15cdc6909e6cf9b7c6744e11d06e32)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPriceItemUuidNull`](#structFRHAPI__PriceBreakpoint_1a6066adfcd7f317f21ec745481f473087)`() const` | Checks whether PriceItemUuid_Optional is set to null.
`public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a4b67fd9bde9c2d666103ad2846065885)`()` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1adce6bba60d3ea608cb7216060e89fd7f)`() const` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ab4cac3098b4e128c4cabc4712b1387c9)`(const int32 & DefaultValue) const` | Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac06d5946e28223eda73690b593eb82b0)`(int32 & OutValue) const` | Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1ad637c7295c48e8e2c696bb04ea9e85cd)`()` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1a76816e951f5cc5713b4d0e08850dd1f2)`() const` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1af66cd60cdb974581286c61d675d867a8)`(const int32 & NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a3ef30435939dcd91c41a272c727e788d)`(int32 && NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac1be94aeeecb6b02ccf0f3780824c763)`()` | Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.
`public inline bool `[`IsPriceItemIdSet`](#structFRHAPI__PriceBreakpoint_1a06d2bde48924f41a12f62b4c3c93518e)`() const` | Checks whether PriceItemId_Optional has been set.
`public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986)`() const` | Returns true if PriceItemId_Optional is set and matches the default value.
`public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010)`()` | Sets the value of PriceItemId_Optional to its default and also sets PriceItemId_IsSet to true.
`public inline void `[`SetPriceItemIdToNull`](#structFRHAPI__PriceBreakpoint_1a5a523a064bd7ac48b2f54857bdf7bb1b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPriceItemIdNull`](#structFRHAPI__PriceBreakpoint_1a9f7b934d67ee10cb217e2bd90e5811ec)`() const` | Checks whether PriceItemId_Optional is set to null.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1af44da53adb9739f40c4cbfda50ac6693)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1ae4efc34bdb537727e96db734851d8507)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a2330b562765eb45545fa6915999ddfb4)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a7915929b34c0c1cf9726e19bfa90a0ee)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd)`()` | Sets the value of Quantity to its default
`public inline int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1af5ac006e4ed78beebb8c028ecf2f3f6e)`()` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a898aa67986c12635bf3a752e7beeb2e4)`() const` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a78d985fe2ff814a116bf3ee575fea705)`(const int32 & DefaultValue) const` | Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1acd83052c5d75e193cafc30efecd4eb60)`(int32 & OutValue) const` | Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1ace64ed859826035afe6ed32567379c7d)`()` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1a48b38c86f0093d4f1b913fa4ad14e96f)`() const` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1a149d6166a7d3333ee9f5ac23b3fc69be)`(const int32 & NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true.
`public inline void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1a61427b7f23bd6d0ace5865c322685a31)`(int32 && NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.
`public inline void `[`ClearPrice`](#structFRHAPI__PriceBreakpoint_1abc34aec70696358e5630a92a23b66828)`()` | Clears the value of Price_Optional and sets Price_IsSet to false.
`public inline bool `[`IsPriceSet`](#structFRHAPI__PriceBreakpoint_1ab4906572a8a326bcfc030a84dedc1f4a)`() const` | Checks whether Price_Optional has been set.
`public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2)`() const` | Returns true if Price_Optional is set and matches the default value.
`public inline void `[`SetPriceToDefault`](#structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162)`()` | Sets the value of Price_Optional to its default and also sets Price_IsSet to true.
`public inline void `[`SetPriceToNull`](#structFRHAPI__PriceBreakpoint_1a49bb5efb8d6c0067695a1a2d5bf62ac6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPriceNull`](#structFRHAPI__PriceBreakpoint_1aa033dd31b0da94576384bc2805e6a9a0)`() const` | Checks whether Price_Optional is set to null.
`public inline TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1ac31447e17496d3298f73843a30dc2964)`()` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a49e273e3c3e4d4aa73b0184dd712b61c)`() const` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a3d86e794d2de86ec83e7502f30458bef)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & DefaultValue) const` | Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a8b0bb39882ad0ace8c0816f50f6fd079)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & OutValue) const` | Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a3ba322f670ac0a06acbbc270593e6f0b)`()` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1adcd009bea125af4696a26c7cb5658460)`() const` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a659b9f524ac8d733242bda499c410ef7)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.
`public inline void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a4fad0c86a0a1b38f1ec25f2eb20093ad)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > && NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.
`public inline void `[`ClearCurrencies`](#structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a)`()` | Clears the value of Currencies_Optional and sets Currencies_IsSet to false.
`public inline bool `[`IsCurrenciesSet`](#structFRHAPI__PriceBreakpoint_1a405db29905d22165c71adcefb1740f01)`() const` | Checks whether Currencies_Optional has been set.
`public inline void `[`SetCurrenciesToNull`](#structFRHAPI__PriceBreakpoint_1aa79a955143b7d0ae40667f4f326c971e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCurrenciesNull`](#structFRHAPI__PriceBreakpoint_1ab2695929373d95b24fbce0091434a508)`() const` | Checks whether Currencies_Optional is set to null.

### Members

#### `public FGuid `[`PriceItemUuid_Optional`](#structFRHAPI__PriceBreakpoint_1af184285e7dff0bd568aca23ea7161b57) <a id="structFRHAPI__PriceBreakpoint_1af184285e7dff0bd568aca23ea7161b57"></a>

#### `public bool `[`PriceItemUuid_IsSet`](#structFRHAPI__PriceBreakpoint_1a9574a93f4436a160448bf3990cb6511e) <a id="structFRHAPI__PriceBreakpoint_1a9574a93f4436a160448bf3990cb6511e"></a>

true if PriceItemUuid_Optional has been set to a value

#### `public bool `[`PriceItemUuid_IsNull`](#structFRHAPI__PriceBreakpoint_1a686e6ae044dd6f4b99340d55555084a1) <a id="structFRHAPI__PriceBreakpoint_1a686e6ae044dd6f4b99340d55555084a1"></a>

true if PriceItemUuid_Optional has been explicitly set to null

#### `public int32 `[`PriceItemId_Optional`](#structFRHAPI__PriceBreakpoint_1a1131fdc8e383058f5333759ad52d4de0) <a id="structFRHAPI__PriceBreakpoint_1a1131fdc8e383058f5333759ad52d4de0"></a>

#### `public bool `[`PriceItemId_IsSet`](#structFRHAPI__PriceBreakpoint_1a49eebd3358ca2ced281ee0082871901c) <a id="structFRHAPI__PriceBreakpoint_1a49eebd3358ca2ced281ee0082871901c"></a>

true if PriceItemId_Optional has been set to a value

#### `public bool `[`PriceItemId_IsNull`](#structFRHAPI__PriceBreakpoint_1afb851f9486e00bdaf305300f2ff10267) <a id="structFRHAPI__PriceBreakpoint_1afb851f9486e00bdaf305300f2ff10267"></a>

true if PriceItemId_Optional has been explicitly set to null

#### `public int32 `[`Quantity`](#structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f) <a id="structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f"></a>

#### `public int32 `[`Price_Optional`](#structFRHAPI__PriceBreakpoint_1acfbcfae17dc2a1f04a4defb1fc52e990) <a id="structFRHAPI__PriceBreakpoint_1acfbcfae17dc2a1f04a4defb1fc52e990"></a>

#### `public bool `[`Price_IsSet`](#structFRHAPI__PriceBreakpoint_1a3e7cb86883ae1771c3e2e0ec3b1075ba) <a id="structFRHAPI__PriceBreakpoint_1a3e7cb86883ae1771c3e2e0ec3b1075ba"></a>

true if Price_Optional has been set to a value

#### `public bool `[`Price_IsNull`](#structFRHAPI__PriceBreakpoint_1af13b0591c1d7d987cafbff49571c5df4) <a id="structFRHAPI__PriceBreakpoint_1af13b0591c1d7d987cafbff49571c5df4"></a>

true if Price_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > `[`Currencies_Optional`](#structFRHAPI__PriceBreakpoint_1ac7b40c9a96584dd7745fa8d8d74608fe) <a id="structFRHAPI__PriceBreakpoint_1ac7b40c9a96584dd7745fa8d8d74608fe"></a>

#### `public bool `[`Currencies_IsSet`](#structFRHAPI__PriceBreakpoint_1a2113865e65946b4189b922f9ca63dcdd) <a id="structFRHAPI__PriceBreakpoint_1a2113865e65946b4189b922f9ca63dcdd"></a>

true if Currencies_Optional has been set to a value

#### `public bool `[`Currencies_IsNull`](#structFRHAPI__PriceBreakpoint_1ab8bab20352e6cf8b12829008bdfae72c) <a id="structFRHAPI__PriceBreakpoint_1ab8bab20352e6cf8b12829008bdfae72c"></a>

true if Currencies_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakpoint_1add9350ff002ae19fedd40fbeff689547)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PriceBreakpoint_1add9350ff002ae19fedd40fbeff689547"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakpoint_1aceaf793170d3b98d1915d54e002bab4e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PriceBreakpoint_1aceaf793170d3b98d1915d54e002bab4e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a3859ff717e9672a1273a3be6aeffd063)`()` <a id="structFRHAPI__PriceBreakpoint_1a3859ff717e9672a1273a3be6aeffd063"></a>

Gets the value of PriceItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a38de6f4ec6d0c3b9200af310ef639b7d)`() const` <a id="structFRHAPI__PriceBreakpoint_1a38de6f4ec6d0c3b9200af310ef639b7d"></a>

Gets the value of PriceItemUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a851f2dce84c3ae392624cd777f2f3c0b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1a851f2dce84c3ae392624cd777f2f3c0b"></a>

Gets the value of PriceItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a3c1390ed226fbcf7c14f2dd16028fdf3)`(FGuid & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1a3c1390ed226fbcf7c14f2dd16028fdf3"></a>

Fills OutValue with the value of PriceItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPriceItemUuidOrNull`](#structFRHAPI__PriceBreakpoint_1ae4c97e3539819dabd37223a6260187c1)`()` <a id="structFRHAPI__PriceBreakpoint_1ae4c97e3539819dabd37223a6260187c1"></a>

Returns a pointer to PriceItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPriceItemUuidOrNull`](#structFRHAPI__PriceBreakpoint_1aba99ba7a419a1a10fec09cec027fed0a)`() const` <a id="structFRHAPI__PriceBreakpoint_1aba99ba7a419a1a10fec09cec027fed0a"></a>

Returns a pointer to PriceItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a8122877bd9e5e87b197bb784de7f0479)`(const FGuid & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a8122877bd9e5e87b197bb784de7f0479"></a>

Sets the value of PriceItemUuid_Optional and also sets PriceItemUuid_IsSet to true.

#### `public inline void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1af7869b8368db1edf57cf4f15caddeb37)`(FGuid && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1af7869b8368db1edf57cf4f15caddeb37"></a>

Sets the value of PriceItemUuid_Optional and also sets PriceItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1aa1c7e04814b665d4582f18f6c01ea39f)`()` <a id="structFRHAPI__PriceBreakpoint_1aa1c7e04814b665d4582f18f6c01ea39f"></a>

Clears the value of PriceItemUuid_Optional and sets PriceItemUuid_IsSet to false.

#### `public inline bool `[`IsPriceItemUuidSet`](#structFRHAPI__PriceBreakpoint_1a89c2c5cef7d26c119994850ba2d4194d)`() const` <a id="structFRHAPI__PriceBreakpoint_1a89c2c5cef7d26c119994850ba2d4194d"></a>

Checks whether PriceItemUuid_Optional has been set.

#### `public inline void `[`SetPriceItemUuidToNull`](#structFRHAPI__PriceBreakpoint_1add15cdc6909e6cf9b7c6744e11d06e32)`()` <a id="structFRHAPI__PriceBreakpoint_1add15cdc6909e6cf9b7c6744e11d06e32"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPriceItemUuidNull`](#structFRHAPI__PriceBreakpoint_1a6066adfcd7f317f21ec745481f473087)`() const` <a id="structFRHAPI__PriceBreakpoint_1a6066adfcd7f317f21ec745481f473087"></a>

Checks whether PriceItemUuid_Optional is set to null.

#### `public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a4b67fd9bde9c2d666103ad2846065885)`()` <a id="structFRHAPI__PriceBreakpoint_1a4b67fd9bde9c2d666103ad2846065885"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1adce6bba60d3ea608cb7216060e89fd7f)`() const` <a id="structFRHAPI__PriceBreakpoint_1adce6bba60d3ea608cb7216060e89fd7f"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ab4cac3098b4e128c4cabc4712b1387c9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1ab4cac3098b4e128c4cabc4712b1387c9"></a>

Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac06d5946e28223eda73690b593eb82b0)`(int32 & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1ac06d5946e28223eda73690b593eb82b0"></a>

Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1ad637c7295c48e8e2c696bb04ea9e85cd)`()` <a id="structFRHAPI__PriceBreakpoint_1ad637c7295c48e8e2c696bb04ea9e85cd"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1a76816e951f5cc5713b4d0e08850dd1f2)`() const` <a id="structFRHAPI__PriceBreakpoint_1a76816e951f5cc5713b4d0e08850dd1f2"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1af66cd60cdb974581286c61d675d867a8)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1af66cd60cdb974581286c61d675d867a8"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a3ef30435939dcd91c41a272c727e788d)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a3ef30435939dcd91c41a272c727e788d"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac1be94aeeecb6b02ccf0f3780824c763)`()` <a id="structFRHAPI__PriceBreakpoint_1ac1be94aeeecb6b02ccf0f3780824c763"></a>

Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.

#### `public inline bool `[`IsPriceItemIdSet`](#structFRHAPI__PriceBreakpoint_1a06d2bde48924f41a12f62b4c3c93518e)`() const` <a id="structFRHAPI__PriceBreakpoint_1a06d2bde48924f41a12f62b4c3c93518e"></a>

Checks whether PriceItemId_Optional has been set.

#### `public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986)`() const` <a id="structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986"></a>

Returns true if PriceItemId_Optional is set and matches the default value.

#### `public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010)`()` <a id="structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010"></a>

Sets the value of PriceItemId_Optional to its default and also sets PriceItemId_IsSet to true.

#### `public inline void `[`SetPriceItemIdToNull`](#structFRHAPI__PriceBreakpoint_1a5a523a064bd7ac48b2f54857bdf7bb1b)`()` <a id="structFRHAPI__PriceBreakpoint_1a5a523a064bd7ac48b2f54857bdf7bb1b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPriceItemIdNull`](#structFRHAPI__PriceBreakpoint_1a9f7b934d67ee10cb217e2bd90e5811ec)`() const` <a id="structFRHAPI__PriceBreakpoint_1a9f7b934d67ee10cb217e2bd90e5811ec"></a>

Checks whether PriceItemId_Optional is set to null.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1af44da53adb9739f40c4cbfda50ac6693)`()` <a id="structFRHAPI__PriceBreakpoint_1af44da53adb9739f40c4cbfda50ac6693"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1ae4efc34bdb537727e96db734851d8507)`() const` <a id="structFRHAPI__PriceBreakpoint_1ae4efc34bdb537727e96db734851d8507"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a2330b562765eb45545fa6915999ddfb4)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a2330b562765eb45545fa6915999ddfb4"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a7915929b34c0c1cf9726e19bfa90a0ee)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a7915929b34c0c1cf9726e19bfa90a0ee"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d)`() const` <a id="structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd)`()` <a id="structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd"></a>

Sets the value of Quantity to its default

#### `public inline int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1af5ac006e4ed78beebb8c028ecf2f3f6e)`()` <a id="structFRHAPI__PriceBreakpoint_1af5ac006e4ed78beebb8c028ecf2f3f6e"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a898aa67986c12635bf3a752e7beeb2e4)`() const` <a id="structFRHAPI__PriceBreakpoint_1a898aa67986c12635bf3a752e7beeb2e4"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a78d985fe2ff814a116bf3ee575fea705)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1a78d985fe2ff814a116bf3ee575fea705"></a>

Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1acd83052c5d75e193cafc30efecd4eb60)`(int32 & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1acd83052c5d75e193cafc30efecd4eb60"></a>

Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1ace64ed859826035afe6ed32567379c7d)`()` <a id="structFRHAPI__PriceBreakpoint_1ace64ed859826035afe6ed32567379c7d"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1a48b38c86f0093d4f1b913fa4ad14e96f)`() const` <a id="structFRHAPI__PriceBreakpoint_1a48b38c86f0093d4f1b913fa4ad14e96f"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1a149d6166a7d3333ee9f5ac23b3fc69be)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a149d6166a7d3333ee9f5ac23b3fc69be"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true.

#### `public inline void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1a61427b7f23bd6d0ace5865c322685a31)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a61427b7f23bd6d0ace5865c322685a31"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.

#### `public inline void `[`ClearPrice`](#structFRHAPI__PriceBreakpoint_1abc34aec70696358e5630a92a23b66828)`()` <a id="structFRHAPI__PriceBreakpoint_1abc34aec70696358e5630a92a23b66828"></a>

Clears the value of Price_Optional and sets Price_IsSet to false.

#### `public inline bool `[`IsPriceSet`](#structFRHAPI__PriceBreakpoint_1ab4906572a8a326bcfc030a84dedc1f4a)`() const` <a id="structFRHAPI__PriceBreakpoint_1ab4906572a8a326bcfc030a84dedc1f4a"></a>

Checks whether Price_Optional has been set.

#### `public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2)`() const` <a id="structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2"></a>

Returns true if Price_Optional is set and matches the default value.

#### `public inline void `[`SetPriceToDefault`](#structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162)`()` <a id="structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162"></a>

Sets the value of Price_Optional to its default and also sets Price_IsSet to true.

#### `public inline void `[`SetPriceToNull`](#structFRHAPI__PriceBreakpoint_1a49bb5efb8d6c0067695a1a2d5bf62ac6)`()` <a id="structFRHAPI__PriceBreakpoint_1a49bb5efb8d6c0067695a1a2d5bf62ac6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPriceNull`](#structFRHAPI__PriceBreakpoint_1aa033dd31b0da94576384bc2805e6a9a0)`() const` <a id="structFRHAPI__PriceBreakpoint_1aa033dd31b0da94576384bc2805e6a9a0"></a>

Checks whether Price_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1ac31447e17496d3298f73843a30dc2964)`()` <a id="structFRHAPI__PriceBreakpoint_1ac31447e17496d3298f73843a30dc2964"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a49e273e3c3e4d4aa73b0184dd712b61c)`() const` <a id="structFRHAPI__PriceBreakpoint_1a49e273e3c3e4d4aa73b0184dd712b61c"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a3d86e794d2de86ec83e7502f30458bef)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1a3d86e794d2de86ec83e7502f30458bef"></a>

Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a8b0bb39882ad0ace8c0816f50f6fd079)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1a8b0bb39882ad0ace8c0816f50f6fd079"></a>

Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a3ba322f670ac0a06acbbc270593e6f0b)`()` <a id="structFRHAPI__PriceBreakpoint_1a3ba322f670ac0a06acbbc270593e6f0b"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1adcd009bea125af4696a26c7cb5658460)`() const` <a id="structFRHAPI__PriceBreakpoint_1adcd009bea125af4696a26c7cb5658460"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a659b9f524ac8d733242bda499c410ef7)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a659b9f524ac8d733242bda499c410ef7"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a4fad0c86a0a1b38f1ec25f2eb20093ad)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a4fad0c86a0a1b38f1ec25f2eb20093ad"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrencies`](#structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a)`()` <a id="structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a"></a>

Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

#### `public inline bool `[`IsCurrenciesSet`](#structFRHAPI__PriceBreakpoint_1a405db29905d22165c71adcefb1740f01)`() const` <a id="structFRHAPI__PriceBreakpoint_1a405db29905d22165c71adcefb1740f01"></a>

Checks whether Currencies_Optional has been set.

#### `public inline void `[`SetCurrenciesToNull`](#structFRHAPI__PriceBreakpoint_1aa79a955143b7d0ae40667f4f326c971e)`()` <a id="structFRHAPI__PriceBreakpoint_1aa79a955143b7d0ae40667f4f326c971e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCurrenciesNull`](#structFRHAPI__PriceBreakpoint_1ab2695929373d95b24fbce0091434a508)`() const` <a id="structFRHAPI__PriceBreakpoint_1ab2695929373d95b24fbce0091434a508"></a>

Checks whether Currencies_Optional is set to null.

