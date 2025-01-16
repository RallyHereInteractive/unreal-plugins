---
title: RHAPI_PricePoint
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PricePoint`](#structFRHAPI__PricePoint) | A collection of Price Breakpoints (volume pricing).

## struct `FRHAPI_PricePoint` <a id="structFRHAPI__PricePoint"></a>

```
struct FRHAPI_PricePoint
  : public FRHAPI_Model
```

A collection of Price Breakpoints (volume pricing).

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PricePoint_1af4668c0cc57ade57a0b96abf535dc2f6) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PricePoint_1a2b850e99080edc0e92d6000ccfbd0816) | true if CustomData_Optional has been set to a value
`public FString `[`Name_Optional`](#structFRHAPI__PricePoint_1ab49ac3d98309ae8ab2fa3b8e1789d8c5) | 
`public bool `[`Name_IsSet`](#structFRHAPI__PricePoint_1a8f623a172ea94a826a2ad281e7255c2e) | true if Name_Optional has been set to a value
`public bool `[`Name_IsNull`](#structFRHAPI__PricePoint_1a0607bfef44e45db77cab190776ec6457) | true if Name_Optional has been explicitly set to null
`public bool `[`StrictFlag_Optional`](#structFRHAPI__PricePoint_1ae85a32e0460cec90a08a138a39664d11) | Forces the quantity to be equal to a quantity on a Price Breakpoint.
`public bool `[`StrictFlag_IsSet`](#structFRHAPI__PricePoint_1ad87ce4c59955dcabb4a78a7b89718693) | true if StrictFlag_Optional has been set to a value
`public bool `[`CapFlag_Optional`](#structFRHAPI__PricePoint_1aa48bdd6837545660392ae3e591057171) | Only allows quantity to be fulfilled up the highest quantity on the Price Breakpoints.
`public bool `[`CapFlag_IsSet`](#structFRHAPI__PricePoint_1ae051d38aec0022d266dc663514c198b9) | true if CapFlag_Optional has been set to a value
`public TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > `[`CurrentBreakpoints_Optional`](#structFRHAPI__PricePoint_1afbd743b73afeefcd12fc50949fad0dbc) | Current Price Breakpoints.
`public bool `[`CurrentBreakpoints_IsSet`](#structFRHAPI__PricePoint_1a51e38d73a12c442be18ac1f52e8c7f4c) | true if CurrentBreakpoints_Optional has been set to a value
`public TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > `[`PreSaleBreakpoints_Optional`](#structFRHAPI__PricePoint_1aa09992e99ddf5dd10cd5a9ffa9498f00) | Previous Price Breakpoints.
`public bool `[`PreSaleBreakpoints_IsSet`](#structFRHAPI__PricePoint_1a92835400bdb09fefc9fcb9a1b514d2cf) | true if PreSaleBreakpoints_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoint_1a2c2cf9441fff3bd907421bc8ae6c541a) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoint_1a4ae46d4bcca1201ccecbfdde4254e7be) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__PricePoint_1a1285b4fafe57467394b4a2370abf8a10) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PricePoint_1a7b935b9253c3e11318fb654eb6e7a761)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PricePoint_1a36ece9e5f6d8f2bbef5a245596f177c9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a569bc202cd8d1ce5e5e6b829cd9f93c3)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a6c32b84d548ca2d463969f4b625d5be0)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a92030447b7ad5af6f2498700d9069d3d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PricePoint_1ae551d3d477542e217d70381427125feb)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1a1563e6b753deaccbb3608bed1310e490)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1ad50595fa2a1bb77c1385e0507dc6504f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PricePoint_1aa9cfabf1849f694c9ee1b345df907bc7)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PricePoint_1afc73ce91956a5fd60e9766b7a2e0ba16)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PricePoint_1ab704b9dd5bd9c338f708cae4a6b93588)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetName`](#structFRHAPI__PricePoint_1a0dfdda61399861610371143a0d7b3967)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__PricePoint_1ab82fce5f3e8f2b98370ee187ea48517d)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__PricePoint_1a63b27cf4957e5aeca25fc2c46633809e)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetName`](#structFRHAPI__PricePoint_1a0ed342a46a8ab925698a97acc1ba509e)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1aaf241be1a6a0d19a9c1884841278ce43)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1a837968202040e3d74814d3f80c7c9aee)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetName`](#structFRHAPI__PricePoint_1ae6794b53da8ddcc78b1229b51a4afa3d)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline void `[`SetName`](#structFRHAPI__PricePoint_1af116f2ea5604952215dbde8cd17547fd)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline bool `[`IsNameSet`](#structFRHAPI__PricePoint_1a91ac1e720e4f3f61e6a50ced57996d75)`() const` | Checks whether Name_Optional has been set.
`public inline void `[`SetNameToNull`](#structFRHAPI__PricePoint_1a3c5ddda6fe7a59e9377e1e49a7059d50)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsNameNull`](#structFRHAPI__PricePoint_1a681de8d0ddcce852ae85ed84cac50553)`() const` | Checks whether Name_Optional is set to null.
`public inline bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a59be9e0badb065ac64d61f315c5a6207)`()` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1accc02759b46c7b5d45521c7c54fb891f)`() const` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a1705cec2662b34e43ff9e4b2b1467fe6)`(const bool & DefaultValue) const` | Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a74c06fb9c6a4f0b5e3638c14f35bb6bb)`(bool & OutValue) const` | Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a662349cdff087e1fdd50161f925fc13e)`()` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a347217ce16fa9b8c37ea442bb741037e)`() const` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a837f70cbbab3c27773999e8e38c0d595)`(const bool & NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.
`public inline void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a74bd5da0c978c35f4a95160fabf2fc5b)`(bool && NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true using move semantics.
`public inline void `[`ClearStrictFlag`](#structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1)`()` | Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.
`public inline bool `[`IsStrictFlagSet`](#structFRHAPI__PricePoint_1a160b9a2484dbfebd9f07285a8db4cffa)`() const` | Checks whether StrictFlag_Optional has been set.
`public inline bool `[`IsStrictFlagDefaultValue`](#structFRHAPI__PricePoint_1ae3b921dee70cd9e0e717953c5fd2fb1d)`() const` | Returns true if StrictFlag_Optional is set and matches the default value.
`public inline void `[`SetStrictFlagToDefault`](#structFRHAPI__PricePoint_1a37585831994f33ec8e9aa074a60c4a53)`()` | Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true.
`public inline bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1af9f4ac51fe00a4a229aad7017e02cce5)`()` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1ad61f64537a215822c1ce750851571a6b)`() const` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a22dd2e44e2dfb960c79d855384b4114b)`(const bool & DefaultValue) const` | Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCapFlag`](#structFRHAPI__PricePoint_1a9b06b65ad6c1755693fa636ce1d284e8)`(bool & OutValue) const` | Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a783283fbb59a161fe932bd34b529fb71)`()` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a3fc1948bab18a0035ba21c2dcf3ff0a5)`() const` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCapFlag`](#structFRHAPI__PricePoint_1a5b1057b9d4e94ea182d77008fea4b337)`(const bool & NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.
`public inline void `[`SetCapFlag`](#structFRHAPI__PricePoint_1a09f901d616bd8541dd27a496048d3cca)`(bool && NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true using move semantics.
`public inline void `[`ClearCapFlag`](#structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7)`()` | Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.
`public inline bool `[`IsCapFlagSet`](#structFRHAPI__PricePoint_1a3842cb4d0c7d2590dbfde9b4b96a858a)`() const` | Checks whether CapFlag_Optional has been set.
`public inline bool `[`IsCapFlagDefaultValue`](#structFRHAPI__PricePoint_1ac7bdd29493de65739abf520023380ced)`() const` | Returns true if CapFlag_Optional is set and matches the default value.
`public inline void `[`SetCapFlagToDefault`](#structFRHAPI__PricePoint_1a42d6cf3c6484b5845a21ce641736db09)`()` | Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true.
`public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a3fecafbbfca290ba0edeea986c3d12cf)`()` | Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a771607ec591a0f4b56656de086f1a64c)`() const` | Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1af366cb934b208fc789594f34faf7cc2f)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` | Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a3f8ef083f62a90d53c3a50f422c867ec)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` | Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1a8ef8a360f674112dc936e88b5239a960)`()` | Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1ade7bb8c875f28f4eaef2fb07924033ed)`() const` | Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a04ec10c3b9a69c932955bf094672f4f1)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & NewValue)` | Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true.
`public inline void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1aa63505a3687bb02702c2283051ade8bd)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > && NewValue)` | Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true using move semantics.
`public inline void `[`ClearCurrentBreakpoints`](#structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6)`()` | Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false.
`public inline bool `[`IsCurrentBreakpointsSet`](#structFRHAPI__PricePoint_1a00629650409823ed2b2ec4ace12626aa)`() const` | Checks whether CurrentBreakpoints_Optional has been set.
`public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1af47904ba11283bef78f4b7b696ccb763)`()` | Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a3565d32d65ced2f3427299de1978a5e8)`() const` | Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ae91cd55986be52f899b2553d0ee9efca)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` | Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a9d06b5909e8e46bf9d44cc54e200e3d2)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` | Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1aaf14b396a05e68e62d669bfbdf5ce2a7)`()` | Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1a50a837572639c31837b353a76feb9f46)`() const` | Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a9e7395f82d8853034f934c835c450455)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & NewValue)` | Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true.
`public inline void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a13319459276c23ea61836d8ef579a492)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > && NewValue)` | Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true using move semantics.
`public inline void `[`ClearPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731)`()` | Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false.
`public inline bool `[`IsPreSaleBreakpointsSet`](#structFRHAPI__PricePoint_1abd38741d34dd31250c2de3fd32a8feee)`() const` | Checks whether PreSaleBreakpoints_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1ac3c6010be6f11d5ad6b9abeb7c152c2f)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a8aee7aba8074f144eb4862af4656d763)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1ad39a732a79859b6b97faa23f617de8e7)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a803317f9e1c420480ab226c8190bc7f7)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1aa30be6bba264d24df80919e1c3f3d384)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1a7568ed27bb8158c1be8005e3461fb1b1)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a280020fc411e29c24fc2a082e5d8a646)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a6d7a40d99d9fa50adb79db8ad02625d3)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PricePoint_1aaefae3812f7aa691fde5df17365c06b4)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__PricePoint_1aafaeb7f3773260171be5ba2ffc160ab1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__PricePoint_1af66f74ba68d271ac4038a805fb6aa7a2)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PricePoint_1af4668c0cc57ade57a0b96abf535dc2f6) <a id="structFRHAPI__PricePoint_1af4668c0cc57ade57a0b96abf535dc2f6"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PricePoint_1a2b850e99080edc0e92d6000ccfbd0816) <a id="structFRHAPI__PricePoint_1a2b850e99080edc0e92d6000ccfbd0816"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`Name_Optional`](#structFRHAPI__PricePoint_1ab49ac3d98309ae8ab2fa3b8e1789d8c5) <a id="structFRHAPI__PricePoint_1ab49ac3d98309ae8ab2fa3b8e1789d8c5"></a>

#### `public bool `[`Name_IsSet`](#structFRHAPI__PricePoint_1a8f623a172ea94a826a2ad281e7255c2e) <a id="structFRHAPI__PricePoint_1a8f623a172ea94a826a2ad281e7255c2e"></a>

true if Name_Optional has been set to a value

#### `public bool `[`Name_IsNull`](#structFRHAPI__PricePoint_1a0607bfef44e45db77cab190776ec6457) <a id="structFRHAPI__PricePoint_1a0607bfef44e45db77cab190776ec6457"></a>

true if Name_Optional has been explicitly set to null

#### `public bool `[`StrictFlag_Optional`](#structFRHAPI__PricePoint_1ae85a32e0460cec90a08a138a39664d11) <a id="structFRHAPI__PricePoint_1ae85a32e0460cec90a08a138a39664d11"></a>

Forces the quantity to be equal to a quantity on a Price Breakpoint.

#### `public bool `[`StrictFlag_IsSet`](#structFRHAPI__PricePoint_1ad87ce4c59955dcabb4a78a7b89718693) <a id="structFRHAPI__PricePoint_1ad87ce4c59955dcabb4a78a7b89718693"></a>

true if StrictFlag_Optional has been set to a value

#### `public bool `[`CapFlag_Optional`](#structFRHAPI__PricePoint_1aa48bdd6837545660392ae3e591057171) <a id="structFRHAPI__PricePoint_1aa48bdd6837545660392ae3e591057171"></a>

Only allows quantity to be fulfilled up the highest quantity on the Price Breakpoints.

#### `public bool `[`CapFlag_IsSet`](#structFRHAPI__PricePoint_1ae051d38aec0022d266dc663514c198b9) <a id="structFRHAPI__PricePoint_1ae051d38aec0022d266dc663514c198b9"></a>

true if CapFlag_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > `[`CurrentBreakpoints_Optional`](#structFRHAPI__PricePoint_1afbd743b73afeefcd12fc50949fad0dbc) <a id="structFRHAPI__PricePoint_1afbd743b73afeefcd12fc50949fad0dbc"></a>

Current Price Breakpoints.

#### `public bool `[`CurrentBreakpoints_IsSet`](#structFRHAPI__PricePoint_1a51e38d73a12c442be18ac1f52e8c7f4c) <a id="structFRHAPI__PricePoint_1a51e38d73a12c442be18ac1f52e8c7f4c"></a>

true if CurrentBreakpoints_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > `[`PreSaleBreakpoints_Optional`](#structFRHAPI__PricePoint_1aa09992e99ddf5dd10cd5a9ffa9498f00) <a id="structFRHAPI__PricePoint_1aa09992e99ddf5dd10cd5a9ffa9498f00"></a>

Previous Price Breakpoints.

#### `public bool `[`PreSaleBreakpoints_IsSet`](#structFRHAPI__PricePoint_1a92835400bdb09fefc9fcb9a1b514d2cf) <a id="structFRHAPI__PricePoint_1a92835400bdb09fefc9fcb9a1b514d2cf"></a>

true if PreSaleBreakpoints_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoint_1a2c2cf9441fff3bd907421bc8ae6c541a) <a id="structFRHAPI__PricePoint_1a2c2cf9441fff3bd907421bc8ae6c541a"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoint_1a4ae46d4bcca1201ccecbfdde4254e7be) <a id="structFRHAPI__PricePoint_1a4ae46d4bcca1201ccecbfdde4254e7be"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__PricePoint_1a1285b4fafe57467394b4a2370abf8a10) <a id="structFRHAPI__PricePoint_1a1285b4fafe57467394b4a2370abf8a10"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PricePoint_1a7b935b9253c3e11318fb654eb6e7a761)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PricePoint_1a7b935b9253c3e11318fb654eb6e7a761"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PricePoint_1a36ece9e5f6d8f2bbef5a245596f177c9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PricePoint_1a36ece9e5f6d8f2bbef5a245596f177c9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a569bc202cd8d1ce5e5e6b829cd9f93c3)`()` <a id="structFRHAPI__PricePoint_1a569bc202cd8d1ce5e5e6b829cd9f93c3"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a6c32b84d548ca2d463969f4b625d5be0)`() const` <a id="structFRHAPI__PricePoint_1a6c32b84d548ca2d463969f4b625d5be0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a92030447b7ad5af6f2498700d9069d3d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a92030447b7ad5af6f2498700d9069d3d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PricePoint_1ae551d3d477542e217d70381427125feb)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PricePoint_1ae551d3d477542e217d70381427125feb"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1a1563e6b753deaccbb3608bed1310e490)`()` <a id="structFRHAPI__PricePoint_1a1563e6b753deaccbb3608bed1310e490"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1ad50595fa2a1bb77c1385e0507dc6504f)`() const` <a id="structFRHAPI__PricePoint_1ad50595fa2a1bb77c1385e0507dc6504f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PricePoint_1aa9cfabf1849f694c9ee1b345df907bc7)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PricePoint_1aa9cfabf1849f694c9ee1b345df907bc7"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PricePoint_1afc73ce91956a5fd60e9766b7a2e0ba16)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PricePoint_1afc73ce91956a5fd60e9766b7a2e0ba16"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7)`()` <a id="structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PricePoint_1ab704b9dd5bd9c338f708cae4a6b93588)`() const` <a id="structFRHAPI__PricePoint_1ab704b9dd5bd9c338f708cae4a6b93588"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetName`](#structFRHAPI__PricePoint_1a0dfdda61399861610371143a0d7b3967)`()` <a id="structFRHAPI__PricePoint_1a0dfdda61399861610371143a0d7b3967"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__PricePoint_1ab82fce5f3e8f2b98370ee187ea48517d)`() const` <a id="structFRHAPI__PricePoint_1ab82fce5f3e8f2b98370ee187ea48517d"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__PricePoint_1a63b27cf4957e5aeca25fc2c46633809e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a63b27cf4957e5aeca25fc2c46633809e"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetName`](#structFRHAPI__PricePoint_1a0ed342a46a8ab925698a97acc1ba509e)`(FString & OutValue) const` <a id="structFRHAPI__PricePoint_1a0ed342a46a8ab925698a97acc1ba509e"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1aaf241be1a6a0d19a9c1884841278ce43)`()` <a id="structFRHAPI__PricePoint_1aaf241be1a6a0d19a9c1884841278ce43"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1a837968202040e3d74814d3f80c7c9aee)`() const` <a id="structFRHAPI__PricePoint_1a837968202040e3d74814d3f80c7c9aee"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetName`](#structFRHAPI__PricePoint_1ae6794b53da8ddcc78b1229b51a4afa3d)`(const FString & NewValue)` <a id="structFRHAPI__PricePoint_1ae6794b53da8ddcc78b1229b51a4afa3d"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline void `[`SetName`](#structFRHAPI__PricePoint_1af116f2ea5604952215dbde8cd17547fd)`(FString && NewValue)` <a id="structFRHAPI__PricePoint_1af116f2ea5604952215dbde8cd17547fd"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369)`()` <a id="structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline bool `[`IsNameSet`](#structFRHAPI__PricePoint_1a91ac1e720e4f3f61e6a50ced57996d75)`() const` <a id="structFRHAPI__PricePoint_1a91ac1e720e4f3f61e6a50ced57996d75"></a>

Checks whether Name_Optional has been set.

#### `public inline void `[`SetNameToNull`](#structFRHAPI__PricePoint_1a3c5ddda6fe7a59e9377e1e49a7059d50)`()` <a id="structFRHAPI__PricePoint_1a3c5ddda6fe7a59e9377e1e49a7059d50"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsNameNull`](#structFRHAPI__PricePoint_1a681de8d0ddcce852ae85ed84cac50553)`() const` <a id="structFRHAPI__PricePoint_1a681de8d0ddcce852ae85ed84cac50553"></a>

Checks whether Name_Optional is set to null.

#### `public inline bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a59be9e0badb065ac64d61f315c5a6207)`()` <a id="structFRHAPI__PricePoint_1a59be9e0badb065ac64d61f315c5a6207"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1accc02759b46c7b5d45521c7c54fb891f)`() const` <a id="structFRHAPI__PricePoint_1accc02759b46c7b5d45521c7c54fb891f"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a1705cec2662b34e43ff9e4b2b1467fe6)`(const bool & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a1705cec2662b34e43ff9e4b2b1467fe6"></a>

Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a74c06fb9c6a4f0b5e3638c14f35bb6bb)`(bool & OutValue) const` <a id="structFRHAPI__PricePoint_1a74c06fb9c6a4f0b5e3638c14f35bb6bb"></a>

Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a662349cdff087e1fdd50161f925fc13e)`()` <a id="structFRHAPI__PricePoint_1a662349cdff087e1fdd50161f925fc13e"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a347217ce16fa9b8c37ea442bb741037e)`() const` <a id="structFRHAPI__PricePoint_1a347217ce16fa9b8c37ea442bb741037e"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a837f70cbbab3c27773999e8e38c0d595)`(const bool & NewValue)` <a id="structFRHAPI__PricePoint_1a837f70cbbab3c27773999e8e38c0d595"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.

#### `public inline void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a74bd5da0c978c35f4a95160fabf2fc5b)`(bool && NewValue)` <a id="structFRHAPI__PricePoint_1a74bd5da0c978c35f4a95160fabf2fc5b"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true using move semantics.

#### `public inline void `[`ClearStrictFlag`](#structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1)`()` <a id="structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1"></a>

Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.

#### `public inline bool `[`IsStrictFlagSet`](#structFRHAPI__PricePoint_1a160b9a2484dbfebd9f07285a8db4cffa)`() const` <a id="structFRHAPI__PricePoint_1a160b9a2484dbfebd9f07285a8db4cffa"></a>

Checks whether StrictFlag_Optional has been set.

#### `public inline bool `[`IsStrictFlagDefaultValue`](#structFRHAPI__PricePoint_1ae3b921dee70cd9e0e717953c5fd2fb1d)`() const` <a id="structFRHAPI__PricePoint_1ae3b921dee70cd9e0e717953c5fd2fb1d"></a>

Returns true if StrictFlag_Optional is set and matches the default value.

#### `public inline void `[`SetStrictFlagToDefault`](#structFRHAPI__PricePoint_1a37585831994f33ec8e9aa074a60c4a53)`()` <a id="structFRHAPI__PricePoint_1a37585831994f33ec8e9aa074a60c4a53"></a>

Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true.

#### `public inline bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1af9f4ac51fe00a4a229aad7017e02cce5)`()` <a id="structFRHAPI__PricePoint_1af9f4ac51fe00a4a229aad7017e02cce5"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1ad61f64537a215822c1ce750851571a6b)`() const` <a id="structFRHAPI__PricePoint_1ad61f64537a215822c1ce750851571a6b"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a22dd2e44e2dfb960c79d855384b4114b)`(const bool & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a22dd2e44e2dfb960c79d855384b4114b"></a>

Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCapFlag`](#structFRHAPI__PricePoint_1a9b06b65ad6c1755693fa636ce1d284e8)`(bool & OutValue) const` <a id="structFRHAPI__PricePoint_1a9b06b65ad6c1755693fa636ce1d284e8"></a>

Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a783283fbb59a161fe932bd34b529fb71)`()` <a id="structFRHAPI__PricePoint_1a783283fbb59a161fe932bd34b529fb71"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a3fc1948bab18a0035ba21c2dcf3ff0a5)`() const` <a id="structFRHAPI__PricePoint_1a3fc1948bab18a0035ba21c2dcf3ff0a5"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCapFlag`](#structFRHAPI__PricePoint_1a5b1057b9d4e94ea182d77008fea4b337)`(const bool & NewValue)` <a id="structFRHAPI__PricePoint_1a5b1057b9d4e94ea182d77008fea4b337"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.

#### `public inline void `[`SetCapFlag`](#structFRHAPI__PricePoint_1a09f901d616bd8541dd27a496048d3cca)`(bool && NewValue)` <a id="structFRHAPI__PricePoint_1a09f901d616bd8541dd27a496048d3cca"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true using move semantics.

#### `public inline void `[`ClearCapFlag`](#structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7)`()` <a id="structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7"></a>

Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.

#### `public inline bool `[`IsCapFlagSet`](#structFRHAPI__PricePoint_1a3842cb4d0c7d2590dbfde9b4b96a858a)`() const` <a id="structFRHAPI__PricePoint_1a3842cb4d0c7d2590dbfde9b4b96a858a"></a>

Checks whether CapFlag_Optional has been set.

#### `public inline bool `[`IsCapFlagDefaultValue`](#structFRHAPI__PricePoint_1ac7bdd29493de65739abf520023380ced)`() const` <a id="structFRHAPI__PricePoint_1ac7bdd29493de65739abf520023380ced"></a>

Returns true if CapFlag_Optional is set and matches the default value.

#### `public inline void `[`SetCapFlagToDefault`](#structFRHAPI__PricePoint_1a42d6cf3c6484b5845a21ce641736db09)`()` <a id="structFRHAPI__PricePoint_1a42d6cf3c6484b5845a21ce641736db09"></a>

Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true.

#### `public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a3fecafbbfca290ba0edeea986c3d12cf)`()` <a id="structFRHAPI__PricePoint_1a3fecafbbfca290ba0edeea986c3d12cf"></a>

Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a771607ec591a0f4b56656de086f1a64c)`() const` <a id="structFRHAPI__PricePoint_1a771607ec591a0f4b56656de086f1a64c"></a>

Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1af366cb934b208fc789594f34faf7cc2f)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1af366cb934b208fc789594f34faf7cc2f"></a>

Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a3f8ef083f62a90d53c3a50f422c867ec)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` <a id="structFRHAPI__PricePoint_1a3f8ef083f62a90d53c3a50f422c867ec"></a>

Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1a8ef8a360f674112dc936e88b5239a960)`()` <a id="structFRHAPI__PricePoint_1a8ef8a360f674112dc936e88b5239a960"></a>

Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1ade7bb8c875f28f4eaef2fb07924033ed)`() const` <a id="structFRHAPI__PricePoint_1ade7bb8c875f28f4eaef2fb07924033ed"></a>

Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a04ec10c3b9a69c932955bf094672f4f1)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & NewValue)` <a id="structFRHAPI__PricePoint_1a04ec10c3b9a69c932955bf094672f4f1"></a>

Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true.

#### `public inline void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1aa63505a3687bb02702c2283051ade8bd)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > && NewValue)` <a id="structFRHAPI__PricePoint_1aa63505a3687bb02702c2283051ade8bd"></a>

Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrentBreakpoints`](#structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6)`()` <a id="structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6"></a>

Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false.

#### `public inline bool `[`IsCurrentBreakpointsSet`](#structFRHAPI__PricePoint_1a00629650409823ed2b2ec4ace12626aa)`() const` <a id="structFRHAPI__PricePoint_1a00629650409823ed2b2ec4ace12626aa"></a>

Checks whether CurrentBreakpoints_Optional has been set.

#### `public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1af47904ba11283bef78f4b7b696ccb763)`()` <a id="structFRHAPI__PricePoint_1af47904ba11283bef78f4b7b696ccb763"></a>

Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a3565d32d65ced2f3427299de1978a5e8)`() const` <a id="structFRHAPI__PricePoint_1a3565d32d65ced2f3427299de1978a5e8"></a>

Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ae91cd55986be52f899b2553d0ee9efca)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1ae91cd55986be52f899b2553d0ee9efca"></a>

Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a9d06b5909e8e46bf9d44cc54e200e3d2)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` <a id="structFRHAPI__PricePoint_1a9d06b5909e8e46bf9d44cc54e200e3d2"></a>

Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1aaf14b396a05e68e62d669bfbdf5ce2a7)`()` <a id="structFRHAPI__PricePoint_1aaf14b396a05e68e62d669bfbdf5ce2a7"></a>

Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1a50a837572639c31837b353a76feb9f46)`() const` <a id="structFRHAPI__PricePoint_1a50a837572639c31837b353a76feb9f46"></a>

Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a9e7395f82d8853034f934c835c450455)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & NewValue)` <a id="structFRHAPI__PricePoint_1a9e7395f82d8853034f934c835c450455"></a>

Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true.

#### `public inline void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a13319459276c23ea61836d8ef579a492)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > && NewValue)` <a id="structFRHAPI__PricePoint_1a13319459276c23ea61836d8ef579a492"></a>

Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true using move semantics.

#### `public inline void `[`ClearPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731)`()` <a id="structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731"></a>

Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false.

#### `public inline bool `[`IsPreSaleBreakpointsSet`](#structFRHAPI__PricePoint_1abd38741d34dd31250c2de3fd32a8feee)`() const` <a id="structFRHAPI__PricePoint_1abd38741d34dd31250c2de3fd32a8feee"></a>

Checks whether PreSaleBreakpoints_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1ac3c6010be6f11d5ad6b9abeb7c152c2f)`()` <a id="structFRHAPI__PricePoint_1ac3c6010be6f11d5ad6b9abeb7c152c2f"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a8aee7aba8074f144eb4862af4656d763)`() const` <a id="structFRHAPI__PricePoint_1a8aee7aba8074f144eb4862af4656d763"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1ad39a732a79859b6b97faa23f617de8e7)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PricePoint_1ad39a732a79859b6b97faa23f617de8e7"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a803317f9e1c420480ab226c8190bc7f7)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PricePoint_1a803317f9e1c420480ab226c8190bc7f7"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1aa30be6bba264d24df80919e1c3f3d384)`()` <a id="structFRHAPI__PricePoint_1aa30be6bba264d24df80919e1c3f3d384"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1a7568ed27bb8158c1be8005e3461fb1b1)`() const` <a id="structFRHAPI__PricePoint_1a7568ed27bb8158c1be8005e3461fb1b1"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a280020fc411e29c24fc2a082e5d8a646)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PricePoint_1a280020fc411e29c24fc2a082e5d8a646"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a6d7a40d99d9fa50adb79db8ad02625d3)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PricePoint_1a6d7a40d99d9fa50adb79db8ad02625d3"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392)`()` <a id="structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PricePoint_1aaefae3812f7aa691fde5df17365c06b4)`() const` <a id="structFRHAPI__PricePoint_1aaefae3812f7aa691fde5df17365c06b4"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__PricePoint_1aafaeb7f3773260171be5ba2ffc160ab1)`()` <a id="structFRHAPI__PricePoint_1aafaeb7f3773260171be5ba2ffc160ab1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__PricePoint_1af66f74ba68d271ac4038a805fb6aa7a2)`() const` <a id="structFRHAPI__PricePoint_1af66f74ba68d271ac4038a805fb6aa7a2"></a>

Checks whether CacheInfo_Optional is set to null.

