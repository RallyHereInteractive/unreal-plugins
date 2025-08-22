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
`public inline FORCEINLINE FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1afe14bae18ff055aa1ece1738a01375c5)`()` | Gets the value of PriceItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1ae1ed79e78c8c107ac66463c1a05ec858)`() const` | Gets the value of PriceItemUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a6b227f721a837da2b8be33c81aedf71a)`(const FGuid & DefaultValue) const` | Gets the value of PriceItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a5be01b2db1268a71dcbbe7567e99a263)`(FGuid & OutValue) const` | Fills OutValue with the value of PriceItemUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPriceItemUuidOrNull`](#structFRHAPI__PriceBreakpoint_1a305599b42e6a6e326969aeb2a3a4e4ba)`()` | Returns a pointer to PriceItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPriceItemUuidOrNull`](#structFRHAPI__PriceBreakpoint_1a1d8e27edded5057abf17ef5ad8d92d25)`() const` | Returns a pointer to PriceItemUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a7406e6adb8c1df528a41fa76be5d656f)`(const FGuid & NewValue)` | Sets the value of PriceItemUuid_Optional and also sets PriceItemUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1aca20ab1c36ff2030129091cf5669499d)`(FGuid && NewValue)` | Sets the value of PriceItemUuid_Optional and also sets PriceItemUuid_IsSet to true using move semantics.
`public inline void `[`ClearPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1aa1c7e04814b665d4582f18f6c01ea39f)`()` | Clears the value of PriceItemUuid_Optional and sets PriceItemUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetPriceItemUuidToNull`](#structFRHAPI__PriceBreakpoint_1ab75bfe1bde9ca00a7f06aaef11b9b3dc)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPriceItemUuidNull`](#structFRHAPI__PriceBreakpoint_1aa636b6786aada805cc02acc00ce7e0ed)`() const` | Checks whether PriceItemUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a3569d26b7f9dca765b2115313deb248c)`()` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a39ed16e2b80af9be350287aa9903cfd2)`() const` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a4e90f591084fb642ea78bdd2a1d17ab6)`(const int32 & DefaultValue) const` | Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1aa0bb0ffbf783f1f3d1176acaac2639ba)`(int32 & OutValue) const` | Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1ab212db58345e0365565b0bb6ea9491b9)`()` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1ace575c17ad27f4979fd6a4fe5ec1f0b7)`() const` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a648baefbda9076a3be7b052bcaa2c286)`(const int32 & NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac80bb258b1a33be57494ec034094e9ed)`(int32 && NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac1be94aeeecb6b02ccf0f3780824c763)`()` | Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PriceItemId`](#structFRHAPI__PriceBreakpoint_1acbabfcc0f03e931072cd0a5534ed462a)`()` | Returns the default value of PriceItemId.
`public inline FORCEINLINE void `[`SetPriceItemIdToNull`](#structFRHAPI__PriceBreakpoint_1a3b5f9d77b5aa658ca2eb691e935db379)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPriceItemIdNull`](#structFRHAPI__PriceBreakpoint_1af27d5983155f1e3c7002ad395c531c46)`() const` | Checks whether PriceItemId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1a95a54d33610ebcfcedd5cced23ff6c45)`()` | Gets the value of Quantity.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1af83a950e44e4fc4fdd639041944be0d9)`() const` | Gets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a27c4fbedeb39cfb2706e2361c73426dd)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1ad2953bfec826385d1168fedeb77e3657)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PriceBreakpoint_1aa0e28cc2ad83c2c6e615e6be47c917c3)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1ad2093b4360b706b9a25add186e267949)`()` | Gets the value of Price_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1ae2b5a1a243c8cd5fa0c330499df49bf5)`() const` | Gets the value of Price_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a90989cbf019f996d62bb3a961f259e4f)`(const int32 & DefaultValue) const` | Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a4a519529195e58fa78e56220fcdd42ef)`(int32 & OutValue) const` | Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1a2b18132616aa3014382513155fc372f5)`()` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1a375fc8593bb71cb1e8853228430aaad7)`() const` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1a14d733a98134bbf9e5aa30a78ef81442)`(const int32 & NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1add9b4e91f66be3cb4a20dd44352fa113)`(int32 && NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.
`public inline void `[`ClearPrice`](#structFRHAPI__PriceBreakpoint_1abc34aec70696358e5630a92a23b66828)`()` | Clears the value of Price_Optional and sets Price_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Price`](#structFRHAPI__PriceBreakpoint_1af139b7ebaad7c0490827987eb1f16283)`()` | Returns the default value of Price.
`public inline FORCEINLINE void `[`SetPriceToNull`](#structFRHAPI__PriceBreakpoint_1a800ba98315ae91dbfb11e5a0605ea657)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPriceNull`](#structFRHAPI__PriceBreakpoint_1a9a055e96b05d3a29f44d758639af129e)`() const` | Checks whether Price_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a091db1bc955c941f5d82ce0c46cc8d06)`()` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a536780cd73cf1e99692507929bd5b2fd)`() const` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1aee629c5ace2560f028243d5276892e77)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & DefaultValue) const` | Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1ad4fe1b1979db3d59914f02d08c9866e3)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & OutValue) const` | Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a7baeefb96fefcb7837bad8694a5c550b)`()` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a7c9d1ffce3fd540f18855c869b9ad368)`() const` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a3b6f5c2d4518e4db0add9c365442a0c7)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.
`public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a8a9ba44fb3943f67fd43d4790af2252f)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > && NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.
`public inline void `[`ClearCurrencies`](#structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a)`()` | Clears the value of Currencies_Optional and sets Currencies_IsSet to false.
`public inline FORCEINLINE void `[`SetCurrenciesToNull`](#structFRHAPI__PriceBreakpoint_1a0808aeb0131731b8c09f4a6038282801)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCurrenciesNull`](#structFRHAPI__PriceBreakpoint_1a616effd3daea467c97dbac51a1b3d726)`() const` | Checks whether Currencies_Optional is set to null.

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

#### `public inline FORCEINLINE FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1afe14bae18ff055aa1ece1738a01375c5)`()` <a id="structFRHAPI__PriceBreakpoint_1afe14bae18ff055aa1ece1738a01375c5"></a>

Gets the value of PriceItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1ae1ed79e78c8c107ac66463c1a05ec858)`() const` <a id="structFRHAPI__PriceBreakpoint_1ae1ed79e78c8c107ac66463c1a05ec858"></a>

Gets the value of PriceItemUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a6b227f721a837da2b8be33c81aedf71a)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1a6b227f721a837da2b8be33c81aedf71a"></a>

Gets the value of PriceItemUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a5be01b2db1268a71dcbbe7567e99a263)`(FGuid & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1a5be01b2db1268a71dcbbe7567e99a263"></a>

Fills OutValue with the value of PriceItemUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPriceItemUuidOrNull`](#structFRHAPI__PriceBreakpoint_1a305599b42e6a6e326969aeb2a3a4e4ba)`()` <a id="structFRHAPI__PriceBreakpoint_1a305599b42e6a6e326969aeb2a3a4e4ba"></a>

Returns a pointer to PriceItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPriceItemUuidOrNull`](#structFRHAPI__PriceBreakpoint_1a1d8e27edded5057abf17ef5ad8d92d25)`() const` <a id="structFRHAPI__PriceBreakpoint_1a1d8e27edded5057abf17ef5ad8d92d25"></a>

Returns a pointer to PriceItemUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1a7406e6adb8c1df528a41fa76be5d656f)`(const FGuid & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a7406e6adb8c1df528a41fa76be5d656f"></a>

Sets the value of PriceItemUuid_Optional and also sets PriceItemUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1aca20ab1c36ff2030129091cf5669499d)`(FGuid && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1aca20ab1c36ff2030129091cf5669499d"></a>

Sets the value of PriceItemUuid_Optional and also sets PriceItemUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceItemUuid`](#structFRHAPI__PriceBreakpoint_1aa1c7e04814b665d4582f18f6c01ea39f)`()` <a id="structFRHAPI__PriceBreakpoint_1aa1c7e04814b665d4582f18f6c01ea39f"></a>

Clears the value of PriceItemUuid_Optional and sets PriceItemUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPriceItemUuidToNull`](#structFRHAPI__PriceBreakpoint_1ab75bfe1bde9ca00a7f06aaef11b9b3dc)`()` <a id="structFRHAPI__PriceBreakpoint_1ab75bfe1bde9ca00a7f06aaef11b9b3dc"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPriceItemUuidNull`](#structFRHAPI__PriceBreakpoint_1aa636b6786aada805cc02acc00ce7e0ed)`() const` <a id="structFRHAPI__PriceBreakpoint_1aa636b6786aada805cc02acc00ce7e0ed"></a>

Checks whether PriceItemUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a3569d26b7f9dca765b2115313deb248c)`()` <a id="structFRHAPI__PriceBreakpoint_1a3569d26b7f9dca765b2115313deb248c"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a39ed16e2b80af9be350287aa9903cfd2)`() const` <a id="structFRHAPI__PriceBreakpoint_1a39ed16e2b80af9be350287aa9903cfd2"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a4e90f591084fb642ea78bdd2a1d17ab6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1a4e90f591084fb642ea78bdd2a1d17ab6"></a>

Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1aa0bb0ffbf783f1f3d1176acaac2639ba)`(int32 & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1aa0bb0ffbf783f1f3d1176acaac2639ba"></a>

Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1ab212db58345e0365565b0bb6ea9491b9)`()` <a id="structFRHAPI__PriceBreakpoint_1ab212db58345e0365565b0bb6ea9491b9"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1ace575c17ad27f4979fd6a4fe5ec1f0b7)`() const` <a id="structFRHAPI__PriceBreakpoint_1ace575c17ad27f4979fd6a4fe5ec1f0b7"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a648baefbda9076a3be7b052bcaa2c286)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a648baefbda9076a3be7b052bcaa2c286"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac80bb258b1a33be57494ec034094e9ed)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1ac80bb258b1a33be57494ec034094e9ed"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac1be94aeeecb6b02ccf0f3780824c763)`()` <a id="structFRHAPI__PriceBreakpoint_1ac1be94aeeecb6b02ccf0f3780824c763"></a>

Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PriceItemId`](#structFRHAPI__PriceBreakpoint_1acbabfcc0f03e931072cd0a5534ed462a)`()` <a id="structFRHAPI__PriceBreakpoint_1acbabfcc0f03e931072cd0a5534ed462a"></a>

Returns the default value of PriceItemId.

#### `public inline FORCEINLINE void `[`SetPriceItemIdToNull`](#structFRHAPI__PriceBreakpoint_1a3b5f9d77b5aa658ca2eb691e935db379)`()` <a id="structFRHAPI__PriceBreakpoint_1a3b5f9d77b5aa658ca2eb691e935db379"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPriceItemIdNull`](#structFRHAPI__PriceBreakpoint_1af27d5983155f1e3c7002ad395c531c46)`() const` <a id="structFRHAPI__PriceBreakpoint_1af27d5983155f1e3c7002ad395c531c46"></a>

Checks whether PriceItemId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1a95a54d33610ebcfcedd5cced23ff6c45)`()` <a id="structFRHAPI__PriceBreakpoint_1a95a54d33610ebcfcedd5cced23ff6c45"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1af83a950e44e4fc4fdd639041944be0d9)`() const` <a id="structFRHAPI__PriceBreakpoint_1af83a950e44e4fc4fdd639041944be0d9"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a27c4fbedeb39cfb2706e2361c73426dd)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a27c4fbedeb39cfb2706e2361c73426dd"></a>

Sets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1ad2953bfec826385d1168fedeb77e3657)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1ad2953bfec826385d1168fedeb77e3657"></a>

Sets the value of Quantity using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PriceBreakpoint_1aa0e28cc2ad83c2c6e615e6be47c917c3)`()` <a id="structFRHAPI__PriceBreakpoint_1aa0e28cc2ad83c2c6e615e6be47c917c3"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1ad2093b4360b706b9a25add186e267949)`()` <a id="structFRHAPI__PriceBreakpoint_1ad2093b4360b706b9a25add186e267949"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1ae2b5a1a243c8cd5fa0c330499df49bf5)`() const` <a id="structFRHAPI__PriceBreakpoint_1ae2b5a1a243c8cd5fa0c330499df49bf5"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a90989cbf019f996d62bb3a961f259e4f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1a90989cbf019f996d62bb3a961f259e4f"></a>

Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a4a519529195e58fa78e56220fcdd42ef)`(int32 & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1a4a519529195e58fa78e56220fcdd42ef"></a>

Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1a2b18132616aa3014382513155fc372f5)`()` <a id="structFRHAPI__PriceBreakpoint_1a2b18132616aa3014382513155fc372f5"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1a375fc8593bb71cb1e8853228430aaad7)`() const` <a id="structFRHAPI__PriceBreakpoint_1a375fc8593bb71cb1e8853228430aaad7"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1a14d733a98134bbf9e5aa30a78ef81442)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a14d733a98134bbf9e5aa30a78ef81442"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1add9b4e91f66be3cb4a20dd44352fa113)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1add9b4e91f66be3cb4a20dd44352fa113"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.

#### `public inline void `[`ClearPrice`](#structFRHAPI__PriceBreakpoint_1abc34aec70696358e5630a92a23b66828)`()` <a id="structFRHAPI__PriceBreakpoint_1abc34aec70696358e5630a92a23b66828"></a>

Clears the value of Price_Optional and sets Price_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Price`](#structFRHAPI__PriceBreakpoint_1af139b7ebaad7c0490827987eb1f16283)`()` <a id="structFRHAPI__PriceBreakpoint_1af139b7ebaad7c0490827987eb1f16283"></a>

Returns the default value of Price.

#### `public inline FORCEINLINE void `[`SetPriceToNull`](#structFRHAPI__PriceBreakpoint_1a800ba98315ae91dbfb11e5a0605ea657)`()` <a id="structFRHAPI__PriceBreakpoint_1a800ba98315ae91dbfb11e5a0605ea657"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPriceNull`](#structFRHAPI__PriceBreakpoint_1a9a055e96b05d3a29f44d758639af129e)`() const` <a id="structFRHAPI__PriceBreakpoint_1a9a055e96b05d3a29f44d758639af129e"></a>

Checks whether Price_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a091db1bc955c941f5d82ce0c46cc8d06)`()` <a id="structFRHAPI__PriceBreakpoint_1a091db1bc955c941f5d82ce0c46cc8d06"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a536780cd73cf1e99692507929bd5b2fd)`() const` <a id="structFRHAPI__PriceBreakpoint_1a536780cd73cf1e99692507929bd5b2fd"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1aee629c5ace2560f028243d5276892e77)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1aee629c5ace2560f028243d5276892e77"></a>

Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1ad4fe1b1979db3d59914f02d08c9866e3)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1ad4fe1b1979db3d59914f02d08c9866e3"></a>

Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a7baeefb96fefcb7837bad8694a5c550b)`()` <a id="structFRHAPI__PriceBreakpoint_1a7baeefb96fefcb7837bad8694a5c550b"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a7c9d1ffce3fd540f18855c869b9ad368)`() const` <a id="structFRHAPI__PriceBreakpoint_1a7c9d1ffce3fd540f18855c869b9ad368"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a3b6f5c2d4518e4db0add9c365442a0c7)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a3b6f5c2d4518e4db0add9c365442a0c7"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a8a9ba44fb3943f67fd43d4790af2252f)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a8a9ba44fb3943f67fd43d4790af2252f"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrencies`](#structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a)`()` <a id="structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a"></a>

Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCurrenciesToNull`](#structFRHAPI__PriceBreakpoint_1a0808aeb0131731b8c09f4a6038282801)`()` <a id="structFRHAPI__PriceBreakpoint_1a0808aeb0131731b8c09f4a6038282801"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCurrenciesNull`](#structFRHAPI__PriceBreakpoint_1a616effd3daea467c97dbac51a1b3d726)`() const` <a id="structFRHAPI__PriceBreakpoint_1a616effd3daea467c97dbac51a1b3d726"></a>

Checks whether Currencies_Optional is set to null.

