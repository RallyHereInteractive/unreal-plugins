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
`public virtual void `[`WriteJson`](#structFRHAPI__LootPrice_1a7507ad1cc0134dfa69b25ac71ba755b6)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1a873e40823dd5741dc195c951ea7551c4)`()` | Gets the value of Breakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1a9d98053edb6f6826188810b3f927af9d)`() const` | Gets the value of Breakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1ac9a4c11bd7b5500dfba30f03cb2ed68a)`(const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & DefaultValue) const` | Gets the value of Breakpoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBreakpoints`](#structFRHAPI__LootPrice_1ab1eb2beeda6065e7d2dca600b93ead07)`(TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & OutValue) const` | Fills OutValue with the value of Breakpoints_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > * `[`GetBreakpointsOrNull`](#structFRHAPI__LootPrice_1a4b419ec195c11da9d93eb745e9cc3732)`()` | Returns a pointer to Breakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > * `[`GetBreakpointsOrNull`](#structFRHAPI__LootPrice_1a55382e094c5814a5076374cf18202f9b)`() const` | Returns a pointer to Breakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBreakpoints`](#structFRHAPI__LootPrice_1aaf793e5de31f845764fc48c43d3f3e9f)`(const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & NewValue)` | Sets the value of Breakpoints_Optional and also sets Breakpoints_IsSet to true.
`public inline void `[`SetBreakpoints`](#structFRHAPI__LootPrice_1a8771323d9c4055725bfe9129c4c40b00)`(TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > && NewValue)` | Sets the value of Breakpoints_Optional and also sets Breakpoints_IsSet to true using move semantics.
`public inline void `[`ClearBreakpoints`](#structFRHAPI__LootPrice_1a262f8481b4ab47d5d5123df931b64887)`()` | Clears the value of Breakpoints_Optional and sets Breakpoints_IsSet to false.
`public inline bool `[`IsBreakpointsSet`](#structFRHAPI__LootPrice_1abbd4174afbd5fe5bfbd27d8905ca300b)`() const` | Checks whether Breakpoints_Optional has been set.
`public inline bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1af37b0df2ddc01a49e9ca2b59b3042357)`()` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a9334ea88c44c631ea505b9762433e17a)`() const` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a5c9586f4c76e5759e3d64174560529a2)`(const bool & DefaultValue) const` | Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a2c8b4212155bc0fc0d2f565c56182e6d)`(bool & OutValue) const` | Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetStrictFlagOrNull`](#structFRHAPI__LootPrice_1a195678187b924d5a204a2794ff485090)`()` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__LootPrice_1ac533dcfa09dd4d3c928472a536e84cda)`() const` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStrictFlag`](#structFRHAPI__LootPrice_1a1e591658aadadc48dad31e94014e947f)`(const bool & NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.
`public inline void `[`SetStrictFlag`](#structFRHAPI__LootPrice_1a4539ff9e2f57f9fc1447b35063dc854d)`(bool && NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true using move semantics.
`public inline void `[`ClearStrictFlag`](#structFRHAPI__LootPrice_1a317d6f0e24b31d6024613ad8ed0e5ca3)`()` | Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.
`public inline bool `[`IsStrictFlagSet`](#structFRHAPI__LootPrice_1a1ad95cb8319d9841d1a6df3df95d1789)`() const` | Checks whether StrictFlag_Optional has been set.
`public inline bool `[`IsStrictFlagDefaultValue`](#structFRHAPI__LootPrice_1aee2002b9f17f256ab2138cde179b04f5)`() const` | Returns true if StrictFlag_Optional is set and matches the default value.
`public inline void `[`SetStrictFlagToDefault`](#structFRHAPI__LootPrice_1a03aa971a0cdaaee1cd040ff52818d47f)`()` | Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true.
`public inline bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1aedb1700a3a40ea741a4ec86137530d2a)`()` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1a08359bd1730868905ea757684a703b5c)`() const` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1aa8eeaf4b91df5ad2aec907450ad90767)`(const bool & DefaultValue) const` | Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCapFlag`](#structFRHAPI__LootPrice_1a2f308b7b585fa671d6eebd381b7d1101)`(bool & OutValue) const` | Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCapFlagOrNull`](#structFRHAPI__LootPrice_1ab536e07e10488d7ba868cab348b5b07c)`()` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCapFlagOrNull`](#structFRHAPI__LootPrice_1a9593f432e7d67a626adc5336fb600035)`() const` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCapFlag`](#structFRHAPI__LootPrice_1a1403e3dbe8e376f1fcaea5758b4fabaf)`(const bool & NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.
`public inline void `[`SetCapFlag`](#structFRHAPI__LootPrice_1a1880a4cb94be1766dc804b4d77b39314)`(bool && NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true using move semantics.
`public inline void `[`ClearCapFlag`](#structFRHAPI__LootPrice_1ad45487ee866d3538e21ad2f07c9a0f12)`()` | Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.
`public inline bool `[`IsCapFlagSet`](#structFRHAPI__LootPrice_1a6ef4e08ee490fd3cb630677657245786)`() const` | Checks whether CapFlag_Optional has been set.
`public inline bool `[`IsCapFlagDefaultValue`](#structFRHAPI__LootPrice_1a2e372ca7d9ea5925bd6ff16288ccf94a)`() const` | Returns true if CapFlag_Optional is set and matches the default value.
`public inline void `[`SetCapFlagToDefault`](#structFRHAPI__LootPrice_1a745b514fb12443662bb069ecc10eb1ab)`()` | Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootPrice_1a7507ad1cc0134dfa69b25ac71ba755b6)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LootPrice_1a7507ad1cc0134dfa69b25ac71ba755b6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1a873e40823dd5741dc195c951ea7551c4)`()` <a id="structFRHAPI__LootPrice_1a873e40823dd5741dc195c951ea7551c4"></a>

Gets the value of Breakpoints_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1a9d98053edb6f6826188810b3f927af9d)`() const` <a id="structFRHAPI__LootPrice_1a9d98053edb6f6826188810b3f927af9d"></a>

Gets the value of Breakpoints_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & `[`GetBreakpoints`](#structFRHAPI__LootPrice_1ac9a4c11bd7b5500dfba30f03cb2ed68a)`(const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & DefaultValue) const` <a id="structFRHAPI__LootPrice_1ac9a4c11bd7b5500dfba30f03cb2ed68a"></a>

Gets the value of Breakpoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBreakpoints`](#structFRHAPI__LootPrice_1ab1eb2beeda6065e7d2dca600b93ead07)`(TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & OutValue) const` <a id="structFRHAPI__LootPrice_1ab1eb2beeda6065e7d2dca600b93ead07"></a>

Fills OutValue with the value of Breakpoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > * `[`GetBreakpointsOrNull`](#structFRHAPI__LootPrice_1a4b419ec195c11da9d93eb745e9cc3732)`()` <a id="structFRHAPI__LootPrice_1a4b419ec195c11da9d93eb745e9cc3732"></a>

Returns a pointer to Breakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > * `[`GetBreakpointsOrNull`](#structFRHAPI__LootPrice_1a55382e094c5814a5076374cf18202f9b)`() const` <a id="structFRHAPI__LootPrice_1a55382e094c5814a5076374cf18202f9b"></a>

Returns a pointer to Breakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBreakpoints`](#structFRHAPI__LootPrice_1aaf793e5de31f845764fc48c43d3f3e9f)`(const TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > & NewValue)` <a id="structFRHAPI__LootPrice_1aaf793e5de31f845764fc48c43d3f3e9f"></a>

Sets the value of Breakpoints_Optional and also sets Breakpoints_IsSet to true.

#### `public inline void `[`SetBreakpoints`](#structFRHAPI__LootPrice_1a8771323d9c4055725bfe9129c4c40b00)`(TArray< `[`FRHAPI_LootPriceBreakpoint`](RHAPI_LootPriceBreakpoint.md#structFRHAPI__LootPriceBreakpoint)` > && NewValue)` <a id="structFRHAPI__LootPrice_1a8771323d9c4055725bfe9129c4c40b00"></a>

Sets the value of Breakpoints_Optional and also sets Breakpoints_IsSet to true using move semantics.

#### `public inline void `[`ClearBreakpoints`](#structFRHAPI__LootPrice_1a262f8481b4ab47d5d5123df931b64887)`()` <a id="structFRHAPI__LootPrice_1a262f8481b4ab47d5d5123df931b64887"></a>

Clears the value of Breakpoints_Optional and sets Breakpoints_IsSet to false.

#### `public inline bool `[`IsBreakpointsSet`](#structFRHAPI__LootPrice_1abbd4174afbd5fe5bfbd27d8905ca300b)`() const` <a id="structFRHAPI__LootPrice_1abbd4174afbd5fe5bfbd27d8905ca300b"></a>

Checks whether Breakpoints_Optional has been set.

#### `public inline bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1af37b0df2ddc01a49e9ca2b59b3042357)`()` <a id="structFRHAPI__LootPrice_1af37b0df2ddc01a49e9ca2b59b3042357"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a9334ea88c44c631ea505b9762433e17a)`() const` <a id="structFRHAPI__LootPrice_1a9334ea88c44c631ea505b9762433e17a"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a5c9586f4c76e5759e3d64174560529a2)`(const bool & DefaultValue) const` <a id="structFRHAPI__LootPrice_1a5c9586f4c76e5759e3d64174560529a2"></a>

Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStrictFlag`](#structFRHAPI__LootPrice_1a2c8b4212155bc0fc0d2f565c56182e6d)`(bool & OutValue) const` <a id="structFRHAPI__LootPrice_1a2c8b4212155bc0fc0d2f565c56182e6d"></a>

Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetStrictFlagOrNull`](#structFRHAPI__LootPrice_1a195678187b924d5a204a2794ff485090)`()` <a id="structFRHAPI__LootPrice_1a195678187b924d5a204a2794ff485090"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__LootPrice_1ac533dcfa09dd4d3c928472a536e84cda)`() const` <a id="structFRHAPI__LootPrice_1ac533dcfa09dd4d3c928472a536e84cda"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStrictFlag`](#structFRHAPI__LootPrice_1a1e591658aadadc48dad31e94014e947f)`(const bool & NewValue)` <a id="structFRHAPI__LootPrice_1a1e591658aadadc48dad31e94014e947f"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.

#### `public inline void `[`SetStrictFlag`](#structFRHAPI__LootPrice_1a4539ff9e2f57f9fc1447b35063dc854d)`(bool && NewValue)` <a id="structFRHAPI__LootPrice_1a4539ff9e2f57f9fc1447b35063dc854d"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true using move semantics.

#### `public inline void `[`ClearStrictFlag`](#structFRHAPI__LootPrice_1a317d6f0e24b31d6024613ad8ed0e5ca3)`()` <a id="structFRHAPI__LootPrice_1a317d6f0e24b31d6024613ad8ed0e5ca3"></a>

Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.

#### `public inline bool `[`IsStrictFlagSet`](#structFRHAPI__LootPrice_1a1ad95cb8319d9841d1a6df3df95d1789)`() const` <a id="structFRHAPI__LootPrice_1a1ad95cb8319d9841d1a6df3df95d1789"></a>

Checks whether StrictFlag_Optional has been set.

#### `public inline bool `[`IsStrictFlagDefaultValue`](#structFRHAPI__LootPrice_1aee2002b9f17f256ab2138cde179b04f5)`() const` <a id="structFRHAPI__LootPrice_1aee2002b9f17f256ab2138cde179b04f5"></a>

Returns true if StrictFlag_Optional is set and matches the default value.

#### `public inline void `[`SetStrictFlagToDefault`](#structFRHAPI__LootPrice_1a03aa971a0cdaaee1cd040ff52818d47f)`()` <a id="structFRHAPI__LootPrice_1a03aa971a0cdaaee1cd040ff52818d47f"></a>

Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true.

#### `public inline bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1aedb1700a3a40ea741a4ec86137530d2a)`()` <a id="structFRHAPI__LootPrice_1aedb1700a3a40ea741a4ec86137530d2a"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1a08359bd1730868905ea757684a703b5c)`() const` <a id="structFRHAPI__LootPrice_1a08359bd1730868905ea757684a703b5c"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCapFlag`](#structFRHAPI__LootPrice_1aa8eeaf4b91df5ad2aec907450ad90767)`(const bool & DefaultValue) const` <a id="structFRHAPI__LootPrice_1aa8eeaf4b91df5ad2aec907450ad90767"></a>

Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCapFlag`](#structFRHAPI__LootPrice_1a2f308b7b585fa671d6eebd381b7d1101)`(bool & OutValue) const` <a id="structFRHAPI__LootPrice_1a2f308b7b585fa671d6eebd381b7d1101"></a>

Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCapFlagOrNull`](#structFRHAPI__LootPrice_1ab536e07e10488d7ba868cab348b5b07c)`()` <a id="structFRHAPI__LootPrice_1ab536e07e10488d7ba868cab348b5b07c"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCapFlagOrNull`](#structFRHAPI__LootPrice_1a9593f432e7d67a626adc5336fb600035)`() const` <a id="structFRHAPI__LootPrice_1a9593f432e7d67a626adc5336fb600035"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCapFlag`](#structFRHAPI__LootPrice_1a1403e3dbe8e376f1fcaea5758b4fabaf)`(const bool & NewValue)` <a id="structFRHAPI__LootPrice_1a1403e3dbe8e376f1fcaea5758b4fabaf"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.

#### `public inline void `[`SetCapFlag`](#structFRHAPI__LootPrice_1a1880a4cb94be1766dc804b4d77b39314)`(bool && NewValue)` <a id="structFRHAPI__LootPrice_1a1880a4cb94be1766dc804b4d77b39314"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true using move semantics.

#### `public inline void `[`ClearCapFlag`](#structFRHAPI__LootPrice_1ad45487ee866d3538e21ad2f07c9a0f12)`()` <a id="structFRHAPI__LootPrice_1ad45487ee866d3538e21ad2f07c9a0f12"></a>

Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.

#### `public inline bool `[`IsCapFlagSet`](#structFRHAPI__LootPrice_1a6ef4e08ee490fd3cb630677657245786)`() const` <a id="structFRHAPI__LootPrice_1a6ef4e08ee490fd3cb630677657245786"></a>

Checks whether CapFlag_Optional has been set.

#### `public inline bool `[`IsCapFlagDefaultValue`](#structFRHAPI__LootPrice_1a2e372ca7d9ea5925bd6ff16288ccf94a)`() const` <a id="structFRHAPI__LootPrice_1a2e372ca7d9ea5925bd6ff16288ccf94a"></a>

Returns true if CapFlag_Optional is set and matches the default value.

#### `public inline void `[`SetCapFlagToDefault`](#structFRHAPI__LootPrice_1a745b514fb12443662bb069ecc10eb1ab)`()` <a id="structFRHAPI__LootPrice_1a745b514fb12443662bb069ecc10eb1ab"></a>

Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true.

