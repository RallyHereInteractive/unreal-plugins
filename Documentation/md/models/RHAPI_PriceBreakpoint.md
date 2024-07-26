# group `RHAPI_PriceBreakpoint` <a id="group__RHAPI__PriceBreakpoint"></a>

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
`public int32 `[`PriceItemId_Optional`](#structFRHAPI__PriceBreakpoint_1a1131fdc8e383058f5333759ad52d4de0) | Deprecated. Use the currencies field instead.
`public bool `[`PriceItemId_IsSet`](#structFRHAPI__PriceBreakpoint_1a49eebd3358ca2ced281ee0082871901c) | true if PriceItemId_Optional has been set to a value
`public int32 `[`Quantity`](#structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f) | 
`public int32 `[`Price_Optional`](#structFRHAPI__PriceBreakpoint_1acfbcfae17dc2a1f04a4defb1fc52e990) | Deprecated. Use the currencies field instead.
`public bool `[`Price_IsSet`](#structFRHAPI__PriceBreakpoint_1a3e7cb86883ae1771c3e2e0ec3b1075ba) | true if Price_Optional has been set to a value
`public TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > `[`Currencies_Optional`](#structFRHAPI__PriceBreakpoint_1ac7b40c9a96584dd7745fa8d8d74608fe) | List of currencies for this break point.
`public bool `[`Currencies_IsSet`](#structFRHAPI__PriceBreakpoint_1a2113865e65946b4189b922f9ca63dcdd) | true if Currencies_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakpoint_1add9350ff002ae19fedd40fbeff689547)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakpoint_1a96246188147be8371d814334240552fb)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a6b13611738a078d0c65c7b54a06ff407)`()` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1af54e7868d8cab16e798d938f8a0ed102)`() const` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a92dee548e2ec2dfffde2bbd249782f01)`(const int32 & DefaultValue) const` | Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac06d5946e28223eda73690b593eb82b0)`(int32 & OutValue) const` | Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1a82563e97abfc170aebf83a64f0b6789a)`()` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1a98ea53c1d164757f5f0a2a50c302eca5)`() const` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1af66cd60cdb974581286c61d675d867a8)`(const int32 & NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a3ef30435939dcd91c41a272c727e788d)`(int32 && NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac1be94aeeecb6b02ccf0f3780824c763)`()` | Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.
`public inline bool `[`IsPriceItemIdSet`](#structFRHAPI__PriceBreakpoint_1a06d2bde48924f41a12f62b4c3c93518e)`() const` | Checks whether PriceItemId_Optional has been set.
`public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986)`() const` | Returns true if PriceItemId_Optional is set and matches the default value.
`public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010)`()` | Sets the value of PriceItemId_Optional to its default and also sets PriceItemId_IsSet to true.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1af05d9fe1f283434b76882e5a6d698b77)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1a5f75a5a6b0236a678de1e8927018cbf9)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a2330b562765eb45545fa6915999ddfb4)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a7915929b34c0c1cf9726e19bfa90a0ee)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd)`()` | Sets the value of Quantity to its default
`public inline int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1aa5a67208d3a0e33523dd92cefd8562e0)`()` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a9b8b223c98c38cd680a24c72652b1a43)`() const` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1ad90def5ceb1eeac214805c7004760093)`(const int32 & DefaultValue) const` | Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1acd83052c5d75e193cafc30efecd4eb60)`(int32 & OutValue) const` | Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1ac2dd200423eae3ae2a72c2d50f5da856)`()` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1a7e61c3cfb361f8d7220f08db0ba0707e)`() const` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1a149d6166a7d3333ee9f5ac23b3fc69be)`(const int32 & NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true.
`public inline void `[`SetPrice`](#structFRHAPI__PriceBreakpoint_1a61427b7f23bd6d0ace5865c322685a31)`(int32 && NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.
`public inline void `[`ClearPrice`](#structFRHAPI__PriceBreakpoint_1abc34aec70696358e5630a92a23b66828)`()` | Clears the value of Price_Optional and sets Price_IsSet to false.
`public inline bool `[`IsPriceSet`](#structFRHAPI__PriceBreakpoint_1ab4906572a8a326bcfc030a84dedc1f4a)`() const` | Checks whether Price_Optional has been set.
`public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2)`() const` | Returns true if Price_Optional is set and matches the default value.
`public inline void `[`SetPriceToDefault`](#structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162)`()` | Sets the value of Price_Optional to its default and also sets Price_IsSet to true.
`public inline TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1afcda03e0785ab1b1ca7a95bcf628a728)`()` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a6aadc429fece5e8d605fac8a8ac755db)`() const` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1af374db7eb4ed6bf0d946e8420d1fe3a2)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & DefaultValue) const` | Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a8b0bb39882ad0ace8c0816f50f6fd079)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & OutValue) const` | Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a89270b67ec00efb654e6ce297b55a893)`()` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a1ac8c81b218259ab123f4cefe8487fb6)`() const` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a659b9f524ac8d733242bda499c410ef7)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.
`public inline void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a4fad0c86a0a1b38f1ec25f2eb20093ad)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > && NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.
`public inline void `[`ClearCurrencies`](#structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a)`()` | Clears the value of Currencies_Optional and sets Currencies_IsSet to false.
`public inline bool `[`IsCurrenciesSet`](#structFRHAPI__PriceBreakpoint_1a405db29905d22165c71adcefb1740f01)`() const` | Checks whether Currencies_Optional has been set.

### Members

#### `public int32 `[`PriceItemId_Optional`](#structFRHAPI__PriceBreakpoint_1a1131fdc8e383058f5333759ad52d4de0) <a id="structFRHAPI__PriceBreakpoint_1a1131fdc8e383058f5333759ad52d4de0"></a>

Deprecated. Use the currencies field instead.

#### `public bool `[`PriceItemId_IsSet`](#structFRHAPI__PriceBreakpoint_1a49eebd3358ca2ced281ee0082871901c) <a id="structFRHAPI__PriceBreakpoint_1a49eebd3358ca2ced281ee0082871901c"></a>

true if PriceItemId_Optional has been set to a value

#### `public int32 `[`Quantity`](#structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f) <a id="structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f"></a>

#### `public int32 `[`Price_Optional`](#structFRHAPI__PriceBreakpoint_1acfbcfae17dc2a1f04a4defb1fc52e990) <a id="structFRHAPI__PriceBreakpoint_1acfbcfae17dc2a1f04a4defb1fc52e990"></a>

Deprecated. Use the currencies field instead.

#### `public bool `[`Price_IsSet`](#structFRHAPI__PriceBreakpoint_1a3e7cb86883ae1771c3e2e0ec3b1075ba) <a id="structFRHAPI__PriceBreakpoint_1a3e7cb86883ae1771c3e2e0ec3b1075ba"></a>

true if Price_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > `[`Currencies_Optional`](#structFRHAPI__PriceBreakpoint_1ac7b40c9a96584dd7745fa8d8d74608fe) <a id="structFRHAPI__PriceBreakpoint_1ac7b40c9a96584dd7745fa8d8d74608fe"></a>

List of currencies for this break point.

#### `public bool `[`Currencies_IsSet`](#structFRHAPI__PriceBreakpoint_1a2113865e65946b4189b922f9ca63dcdd) <a id="structFRHAPI__PriceBreakpoint_1a2113865e65946b4189b922f9ca63dcdd"></a>

true if Currencies_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakpoint_1add9350ff002ae19fedd40fbeff689547)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PriceBreakpoint_1add9350ff002ae19fedd40fbeff689547"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakpoint_1a96246188147be8371d814334240552fb)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PriceBreakpoint_1a96246188147be8371d814334240552fb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a6b13611738a078d0c65c7b54a06ff407)`()` <a id="structFRHAPI__PriceBreakpoint_1a6b13611738a078d0c65c7b54a06ff407"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1af54e7868d8cab16e798d938f8a0ed102)`() const` <a id="structFRHAPI__PriceBreakpoint_1af54e7868d8cab16e798d938f8a0ed102"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1a92dee548e2ec2dfffde2bbd249782f01)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1a92dee548e2ec2dfffde2bbd249782f01"></a>

Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceItemId`](#structFRHAPI__PriceBreakpoint_1ac06d5946e28223eda73690b593eb82b0)`(int32 & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1ac06d5946e28223eda73690b593eb82b0"></a>

Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1a82563e97abfc170aebf83a64f0b6789a)`()` <a id="structFRHAPI__PriceBreakpoint_1a82563e97abfc170aebf83a64f0b6789a"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PriceBreakpoint_1a98ea53c1d164757f5f0a2a50c302eca5)`() const` <a id="structFRHAPI__PriceBreakpoint_1a98ea53c1d164757f5f0a2a50c302eca5"></a>

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

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1af05d9fe1f283434b76882e5a6d698b77)`()` <a id="structFRHAPI__PriceBreakpoint_1af05d9fe1f283434b76882e5a6d698b77"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PriceBreakpoint_1a5f75a5a6b0236a678de1e8927018cbf9)`() const` <a id="structFRHAPI__PriceBreakpoint_1a5f75a5a6b0236a678de1e8927018cbf9"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a2330b562765eb45545fa6915999ddfb4)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a2330b562765eb45545fa6915999ddfb4"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PriceBreakpoint_1a7915929b34c0c1cf9726e19bfa90a0ee)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a7915929b34c0c1cf9726e19bfa90a0ee"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d)`() const` <a id="structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd)`()` <a id="structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd"></a>

Sets the value of Quantity to its default

#### `public inline int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1aa5a67208d3a0e33523dd92cefd8562e0)`()` <a id="structFRHAPI__PriceBreakpoint_1aa5a67208d3a0e33523dd92cefd8562e0"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1a9b8b223c98c38cd680a24c72652b1a43)`() const` <a id="structFRHAPI__PriceBreakpoint_1a9b8b223c98c38cd680a24c72652b1a43"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1ad90def5ceb1eeac214805c7004760093)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1ad90def5ceb1eeac214805c7004760093"></a>

Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPrice`](#structFRHAPI__PriceBreakpoint_1acd83052c5d75e193cafc30efecd4eb60)`(int32 & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1acd83052c5d75e193cafc30efecd4eb60"></a>

Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1ac2dd200423eae3ae2a72c2d50f5da856)`()` <a id="structFRHAPI__PriceBreakpoint_1ac2dd200423eae3ae2a72c2d50f5da856"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceOrNull`](#structFRHAPI__PriceBreakpoint_1a7e61c3cfb361f8d7220f08db0ba0707e)`() const` <a id="structFRHAPI__PriceBreakpoint_1a7e61c3cfb361f8d7220f08db0ba0707e"></a>

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

#### `public inline TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1afcda03e0785ab1b1ca7a95bcf628a728)`()` <a id="structFRHAPI__PriceBreakpoint_1afcda03e0785ab1b1ca7a95bcf628a728"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a6aadc429fece5e8d605fac8a8ac755db)`() const` <a id="structFRHAPI__PriceBreakpoint_1a6aadc429fece5e8d605fac8a8ac755db"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1af374db7eb4ed6bf0d946e8420d1fe3a2)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & DefaultValue) const` <a id="structFRHAPI__PriceBreakpoint_1af374db7eb4ed6bf0d946e8420d1fe3a2"></a>

Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCurrencies`](#structFRHAPI__PriceBreakpoint_1a8b0bb39882ad0ace8c0816f50f6fd079)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & OutValue) const` <a id="structFRHAPI__PriceBreakpoint_1a8b0bb39882ad0ace8c0816f50f6fd079"></a>

Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a89270b67ec00efb654e6ce297b55a893)`()` <a id="structFRHAPI__PriceBreakpoint_1a89270b67ec00efb654e6ce297b55a893"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PriceBreakpoint_1a1ac8c81b218259ab123f4cefe8487fb6)`() const` <a id="structFRHAPI__PriceBreakpoint_1a1ac8c81b218259ab123f4cefe8487fb6"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a659b9f524ac8d733242bda499c410ef7)`(const TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > & NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a659b9f524ac8d733242bda499c410ef7"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__PriceBreakpoint_1a4fad0c86a0a1b38f1ec25f2eb20093ad)`(TArray< `[`FRHAPI_PriceBreakPointCurrency`](RHAPI_PriceBreakPointCurrency.md#structFRHAPI__PriceBreakPointCurrency)` > && NewValue)` <a id="structFRHAPI__PriceBreakpoint_1a4fad0c86a0a1b38f1ec25f2eb20093ad"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrencies`](#structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a)`()` <a id="structFRHAPI__PriceBreakpoint_1a5a56f870cfce517783d608a845db4b3a"></a>

Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

#### `public inline bool `[`IsCurrenciesSet`](#structFRHAPI__PriceBreakpoint_1a405db29905d22165c71adcefb1740f01)`() const` <a id="structFRHAPI__PriceBreakpoint_1a405db29905d22165c71adcefb1740f01"></a>

Checks whether Currencies_Optional has been set.

