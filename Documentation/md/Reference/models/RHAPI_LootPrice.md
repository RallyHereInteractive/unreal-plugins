---
title: RHAPI_LootPrice
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LootPrice`](#structFRHAPI__LootPrice) | Price with current and original (pre-sale) price breakpoints.

## struct `FRHAPI_LootPrice` <a id="structFRHAPI__LootPrice"></a>

```
struct FRHAPI_LootPrice
  : public FRHAPI_Model
```

Price with current and original (pre-sale) price breakpoints.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > `[`Breakpoints_Optional`](#structFRHAPI__LootPrice_1a066a5ffcc3d19ea661f04eeceda57679) | Breakpoints that the loot is available for purchase with.
`public bool `[`Breakpoints_IsSet`](#structFRHAPI__LootPrice_1a9a2681684e5342d9a18626353a715cb7) | true if Breakpoints_Optional has been set to a value
`public bool `[`StrictFlag_Optional`](#structFRHAPI__LootPrice_1a5a6cfb9bc691a5da7345207a03d89546) | Does the number of units being purchased need to be an exact match to the quantity on a Price Breakpoint?
`public bool `[`StrictFlag_IsSet`](#structFRHAPI__LootPrice_1ae5d3658da51d4987120dca720b5c0d0b) | true if StrictFlag_Optional has been set to a value
`public bool `[`CapFlag_Optional`](#structFRHAPI__LootPrice_1af013bfd252d0ec49ffaf2e7bf06c7ccb) | Can the number of units being purchased be higher than the highest quantity on the Price Breakpoints?
`public bool `[`CapFlag_IsSet`](#structFRHAPI__LootPrice_1a4c9a1af57a25c16713933bdfe7c3fbd5) | true if CapFlag_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LootPrice_1aeb6bf6377fba6d1ec7a560f647c2df57)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LootPrice_1a65698a0a55604ddb47d66b7e09e35286)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1afd003e0597b5a17391963c2e5ee48d65)`()` | Gets the value of Breakpoints_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1ad4cba0d6b9be20c4f35d39f468db274a)`() const` | Gets the value of Breakpoints_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1a03389c3bd8b68f77ae803a3184ce9880)`(const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & DefaultValue) const` | Gets the value of Breakpoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBreakpoints`](#structFRHAPI__LootPrice_1a10fb32972a3633013e1d79fe109c1d11)`(TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & OutValue) const` | Fills OutValue with the value of Breakpoints_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > * `[`GetBreakpointsOrNull`](#structFRHAPI__LootPrice_1a3b977f24cfe2806d84351d6588a815d2)`()` | Returns a pointer to Breakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > * `[`GetBreakpointsOrNull`](#structFRHAPI__LootPrice_1a9204d0f3eedc1354ac832fc02615959c)`() const` | Returns a pointer to Breakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBreakpoints`](#structFRHAPI__LootPrice_1a79eefa321a8ff24630d5417a194a74d8)`(const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & NewValue)` | Sets the value of Breakpoints_Optional and also sets Breakpoints_IsSet to true.
`public inline FORCEINLINE void `[`SetBreakpoints`](#structFRHAPI__LootPrice_1aca3008b2fe2104d0ecf5efeb248bee3c)`(TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > && NewValue)` | Sets the value of Breakpoints_Optional and also sets Breakpoints_IsSet to true using move semantics.
`public inline void `[`ClearBreakpoints`](#structFRHAPI__LootPrice_1a262f8481b4ab47d5d5123df931b64887)`()` | Clears the value of Breakpoints_Optional and sets Breakpoints_IsSet to false.
`public inline FORCEINLINE bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1ac53c1e43c6a73840370829491405569c)`()` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a2cb6e271ff3b594fa24f5ce99f980271)`() const` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1af425bff24e10a20285d8388c024231b2)`(const bool & DefaultValue) const` | Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a90e5afd61e08bb5061fd8cb1b5a612cf)`(bool & OutValue) const` | Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetStrictFlagOrNull`](#structFRHAPI__LootPrice_1a4ad8f40dd3b9ef96033256ad53609daf)`()` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__LootPrice_1adfc0d59838b507d6d416893c3a01b366)`() const` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStrictFlag`](#structFRHAPI__LootPrice_1a5eefbf4e4279df1e87d82c60399574f8)`(const bool & NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.
`public inline FORCEINLINE void `[`SetStrictFlag`](#structFRHAPI__LootPrice_1a4d0ab9bc111bfd14aa44eaa23fd58a0c)`(bool && NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true using move semantics.
`public inline void `[`ClearStrictFlag`](#structFRHAPI__LootPrice_1a317d6f0e24b31d6024613ad8ed0e5ca3)`()` | Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_StrictFlag`](#structFRHAPI__LootPrice_1af56137b5751f9744b5789ff2f385648d)`()` | Returns the default value of StrictFlag.
`public inline FORCEINLINE bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1af9f40c4bf53cca7fe88e2e3f7de054f8)`()` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1aa771f35af9466ee1e0e2b98af1347882)`() const` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1aa239013c54fb18da34eb1d3637173f13)`(const bool & DefaultValue) const` | Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCapFlag`](#structFRHAPI__LootPrice_1a3aba2dd833621d119c4f7b11c7ced12c)`(bool & OutValue) const` | Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCapFlagOrNull`](#structFRHAPI__LootPrice_1acca09ca2739ca478c6e09e0534e5f300)`()` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCapFlagOrNull`](#structFRHAPI__LootPrice_1a70d5a172bc0b677ccf264ed02833de00)`() const` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCapFlag`](#structFRHAPI__LootPrice_1ac81a93d24078bcb657bc642e640e869c)`(const bool & NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.
`public inline FORCEINLINE void `[`SetCapFlag`](#structFRHAPI__LootPrice_1a8bb8571e314890d7c9f8e5a0e06659ef)`(bool && NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true using move semantics.
`public inline void `[`ClearCapFlag`](#structFRHAPI__LootPrice_1ad45487ee866d3538e21ad2f07c9a0f12)`()` | Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CapFlag`](#structFRHAPI__LootPrice_1a95d5bd93f2feb3f5a9112c892ad5e8d0)`()` | Returns the default value of CapFlag.

### Members

#### `public TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > `[`Breakpoints_Optional`](#structFRHAPI__LootPrice_1a066a5ffcc3d19ea661f04eeceda57679) <a id="structFRHAPI__LootPrice_1a066a5ffcc3d19ea661f04eeceda57679"></a>

Breakpoints that the loot is available for purchase with.

#### `public bool `[`Breakpoints_IsSet`](#structFRHAPI__LootPrice_1a9a2681684e5342d9a18626353a715cb7) <a id="structFRHAPI__LootPrice_1a9a2681684e5342d9a18626353a715cb7"></a>

true if Breakpoints_Optional has been set to a value

#### `public bool `[`StrictFlag_Optional`](#structFRHAPI__LootPrice_1a5a6cfb9bc691a5da7345207a03d89546) <a id="structFRHAPI__LootPrice_1a5a6cfb9bc691a5da7345207a03d89546"></a>

Does the number of units being purchased need to be an exact match to the quantity on a Price Breakpoint?

#### `public bool `[`StrictFlag_IsSet`](#structFRHAPI__LootPrice_1ae5d3658da51d4987120dca720b5c0d0b) <a id="structFRHAPI__LootPrice_1ae5d3658da51d4987120dca720b5c0d0b"></a>

true if StrictFlag_Optional has been set to a value

#### `public bool `[`CapFlag_Optional`](#structFRHAPI__LootPrice_1af013bfd252d0ec49ffaf2e7bf06c7ccb) <a id="structFRHAPI__LootPrice_1af013bfd252d0ec49ffaf2e7bf06c7ccb"></a>

Can the number of units being purchased be higher than the highest quantity on the Price Breakpoints?

#### `public bool `[`CapFlag_IsSet`](#structFRHAPI__LootPrice_1a4c9a1af57a25c16713933bdfe7c3fbd5) <a id="structFRHAPI__LootPrice_1a4c9a1af57a25c16713933bdfe7c3fbd5"></a>

true if CapFlag_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LootPrice_1aeb6bf6377fba6d1ec7a560f647c2df57)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LootPrice_1aeb6bf6377fba6d1ec7a560f647c2df57"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootPrice_1a65698a0a55604ddb47d66b7e09e35286)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LootPrice_1a65698a0a55604ddb47d66b7e09e35286"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1afd003e0597b5a17391963c2e5ee48d65)`()` <a id="structFRHAPI__LootPrice_1afd003e0597b5a17391963c2e5ee48d65"></a>

Gets the value of Breakpoints_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1ad4cba0d6b9be20c4f35d39f468db274a)`() const` <a id="structFRHAPI__LootPrice_1ad4cba0d6b9be20c4f35d39f468db274a"></a>

Gets the value of Breakpoints_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1a03389c3bd8b68f77ae803a3184ce9880)`(const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & DefaultValue) const` <a id="structFRHAPI__LootPrice_1a03389c3bd8b68f77ae803a3184ce9880"></a>

Gets the value of Breakpoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBreakpoints`](#structFRHAPI__LootPrice_1a10fb32972a3633013e1d79fe109c1d11)`(TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & OutValue) const` <a id="structFRHAPI__LootPrice_1a10fb32972a3633013e1d79fe109c1d11"></a>

Fills OutValue with the value of Breakpoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > * `[`GetBreakpointsOrNull`](#structFRHAPI__LootPrice_1a3b977f24cfe2806d84351d6588a815d2)`()` <a id="structFRHAPI__LootPrice_1a3b977f24cfe2806d84351d6588a815d2"></a>

Returns a pointer to Breakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > * `[`GetBreakpointsOrNull`](#structFRHAPI__LootPrice_1a9204d0f3eedc1354ac832fc02615959c)`() const` <a id="structFRHAPI__LootPrice_1a9204d0f3eedc1354ac832fc02615959c"></a>

Returns a pointer to Breakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBreakpoints`](#structFRHAPI__LootPrice_1a79eefa321a8ff24630d5417a194a74d8)`(const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & NewValue)` <a id="structFRHAPI__LootPrice_1a79eefa321a8ff24630d5417a194a74d8"></a>

Sets the value of Breakpoints_Optional and also sets Breakpoints_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBreakpoints`](#structFRHAPI__LootPrice_1aca3008b2fe2104d0ecf5efeb248bee3c)`(TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > && NewValue)` <a id="structFRHAPI__LootPrice_1aca3008b2fe2104d0ecf5efeb248bee3c"></a>

Sets the value of Breakpoints_Optional and also sets Breakpoints_IsSet to true using move semantics.

#### `public inline void `[`ClearBreakpoints`](#structFRHAPI__LootPrice_1a262f8481b4ab47d5d5123df931b64887)`()` <a id="structFRHAPI__LootPrice_1a262f8481b4ab47d5d5123df931b64887"></a>

Clears the value of Breakpoints_Optional and sets Breakpoints_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1ac53c1e43c6a73840370829491405569c)`()` <a id="structFRHAPI__LootPrice_1ac53c1e43c6a73840370829491405569c"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a2cb6e271ff3b594fa24f5ce99f980271)`() const` <a id="structFRHAPI__LootPrice_1a2cb6e271ff3b594fa24f5ce99f980271"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1af425bff24e10a20285d8388c024231b2)`(const bool & DefaultValue) const` <a id="structFRHAPI__LootPrice_1af425bff24e10a20285d8388c024231b2"></a>

Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a90e5afd61e08bb5061fd8cb1b5a612cf)`(bool & OutValue) const` <a id="structFRHAPI__LootPrice_1a90e5afd61e08bb5061fd8cb1b5a612cf"></a>

Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetStrictFlagOrNull`](#structFRHAPI__LootPrice_1a4ad8f40dd3b9ef96033256ad53609daf)`()` <a id="structFRHAPI__LootPrice_1a4ad8f40dd3b9ef96033256ad53609daf"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__LootPrice_1adfc0d59838b507d6d416893c3a01b366)`() const` <a id="structFRHAPI__LootPrice_1adfc0d59838b507d6d416893c3a01b366"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStrictFlag`](#structFRHAPI__LootPrice_1a5eefbf4e4279df1e87d82c60399574f8)`(const bool & NewValue)` <a id="structFRHAPI__LootPrice_1a5eefbf4e4279df1e87d82c60399574f8"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStrictFlag`](#structFRHAPI__LootPrice_1a4d0ab9bc111bfd14aa44eaa23fd58a0c)`(bool && NewValue)` <a id="structFRHAPI__LootPrice_1a4d0ab9bc111bfd14aa44eaa23fd58a0c"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true using move semantics.

#### `public inline void `[`ClearStrictFlag`](#structFRHAPI__LootPrice_1a317d6f0e24b31d6024613ad8ed0e5ca3)`()` <a id="structFRHAPI__LootPrice_1a317d6f0e24b31d6024613ad8ed0e5ca3"></a>

Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_StrictFlag`](#structFRHAPI__LootPrice_1af56137b5751f9744b5789ff2f385648d)`()` <a id="structFRHAPI__LootPrice_1af56137b5751f9744b5789ff2f385648d"></a>

Returns the default value of StrictFlag.

#### `public inline FORCEINLINE bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1af9f40c4bf53cca7fe88e2e3f7de054f8)`()` <a id="structFRHAPI__LootPrice_1af9f40c4bf53cca7fe88e2e3f7de054f8"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1aa771f35af9466ee1e0e2b98af1347882)`() const` <a id="structFRHAPI__LootPrice_1aa771f35af9466ee1e0e2b98af1347882"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1aa239013c54fb18da34eb1d3637173f13)`(const bool & DefaultValue) const` <a id="structFRHAPI__LootPrice_1aa239013c54fb18da34eb1d3637173f13"></a>

Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCapFlag`](#structFRHAPI__LootPrice_1a3aba2dd833621d119c4f7b11c7ced12c)`(bool & OutValue) const` <a id="structFRHAPI__LootPrice_1a3aba2dd833621d119c4f7b11c7ced12c"></a>

Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCapFlagOrNull`](#structFRHAPI__LootPrice_1acca09ca2739ca478c6e09e0534e5f300)`()` <a id="structFRHAPI__LootPrice_1acca09ca2739ca478c6e09e0534e5f300"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCapFlagOrNull`](#structFRHAPI__LootPrice_1a70d5a172bc0b677ccf264ed02833de00)`() const` <a id="structFRHAPI__LootPrice_1a70d5a172bc0b677ccf264ed02833de00"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCapFlag`](#structFRHAPI__LootPrice_1ac81a93d24078bcb657bc642e640e869c)`(const bool & NewValue)` <a id="structFRHAPI__LootPrice_1ac81a93d24078bcb657bc642e640e869c"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCapFlag`](#structFRHAPI__LootPrice_1a8bb8571e314890d7c9f8e5a0e06659ef)`(bool && NewValue)` <a id="structFRHAPI__LootPrice_1a8bb8571e314890d7c9f8e5a0e06659ef"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true using move semantics.

#### `public inline void `[`ClearCapFlag`](#structFRHAPI__LootPrice_1ad45487ee866d3538e21ad2f07c9a0f12)`()` <a id="structFRHAPI__LootPrice_1ad45487ee866d3538e21ad2f07c9a0f12"></a>

Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CapFlag`](#structFRHAPI__LootPrice_1a95d5bd93f2feb3f5a9112c892ad5e8d0)`()` <a id="structFRHAPI__LootPrice_1a95d5bd93f2feb3f5a9112c892ad5e8d0"></a>

Returns the default value of CapFlag.

