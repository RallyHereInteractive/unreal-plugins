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
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1ad1a548321790599a480d58eaabdf15aa)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a40636cc09ebe15a039e94f6dba077712)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a891dd202118271dda9b1c2857741328e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PricePoint_1accff3a9f412b5bc9ad89f16a6fbf748d)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1a36f502aa7a94ac0c8c0d9872458aea2a)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1aa28c1fc2e72072257ee2fa824e47cda0)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PricePoint_1a11b5678c46db48016f18cd5d385752c6)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PricePoint_1a960a3d03062dfc89fed9e9a6ddac9466)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__PricePoint_1af22e1b4759f6a4ef8925cbed0738f033)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__PricePoint_1aa73c5c31927b6e00def36d28ce443b02)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__PricePoint_1a51605e0633dcdcb03fb167f6f9b6b141)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetName`](#structFRHAPI__PricePoint_1a73b609314fcfa07ea629f4855d4def67)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1a297818dae75e9c083f34f23d400236cf)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1af177b83cb60310aea9e7b4771187f92e)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__PricePoint_1ad6b6469b6d81ae80fbe22fae9ec334d8)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__PricePoint_1a2eeaec10757ba52c3e807d5a544b826b)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline FORCEINLINE void `[`SetNameToNull`](#structFRHAPI__PricePoint_1a4ec51e35899c67d1d20a7af71753bd3d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsNameNull`](#structFRHAPI__PricePoint_1ad9e2b0c80012acc1c80dd0b5f0eb1166)`() const` | Checks whether Name_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a0b7795b5ff023848369eca9cb9bee94a)`()` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a94a42d3833d19fe42e384ca5ea4ffc2c)`() const` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a65235941cac401a71f0d9bcd61a26f74)`(const bool & DefaultValue) const` | Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStrictFlag`](#structFRHAPI__PricePoint_1ae2de3fdb5779e035ad601285cac3b538)`(bool & OutValue) const` | Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a0d2e4a33560bb6864b8fbd2a397819af)`()` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a086fa0078fd3fc0dcf2d64209405c5bd)`() const` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a603734560c764adff43efcecec86c78f)`(const bool & NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.
`public inline FORCEINLINE void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a222ddfefe35bdc0ffeb04f4e18f14f80)`(bool && NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true using move semantics.
`public inline void `[`ClearStrictFlag`](#structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1)`()` | Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_StrictFlag`](#structFRHAPI__PricePoint_1a34a95127d70929bb93223a5199524891)`()` | Returns the default value of StrictFlag.
`public inline FORCEINLINE bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1af49b75ffce127e2eed64d3c5b1289f70)`()` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a63c8827c8a1332576456dcf4741600bf)`() const` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a4ddaaec1347da23e44f2371320ea6832)`(const bool & DefaultValue) const` | Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCapFlag`](#structFRHAPI__PricePoint_1a87bbc1996562ee74dc26c3b15d6b321a)`(bool & OutValue) const` | Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a057dd4e0d5efefa7bdba20e8d920a502)`()` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a64a7767f56444a524c5319444a7b0cb8)`() const` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCapFlag`](#structFRHAPI__PricePoint_1a17eca26fa771a132cc425b0f686c11d4)`(const bool & NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.
`public inline FORCEINLINE void `[`SetCapFlag`](#structFRHAPI__PricePoint_1a89bb8ce577f92ac76eaf4bf4f20ba441)`(bool && NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true using move semantics.
`public inline void `[`ClearCapFlag`](#structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7)`()` | Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CapFlag`](#structFRHAPI__PricePoint_1aa1d1828d484f78383b24799a324efb94)`()` | Returns the default value of CapFlag.
`public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a3a7622b1a6bd5e7638a2b565662cc2a2)`()` | Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1af0c24d90be58a94674d12ca6e84a7b56)`() const` | Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a93032922aedad0dd61f135cbecd8924e)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` | Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a8aa3854768c1a541b225ab63524efbcd)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` | Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1a29a28628c948f4969e0390c19a38ed0f)`()` | Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1acabeb49f04144fba0485596d907d1a55)`() const` | Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1ac887fcbe526f615d958144322eaac94c)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & NewValue)` | Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true.
`public inline FORCEINLINE void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a6f8fcb9b92da1bba2e6314e4c0aaddc9)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > && NewValue)` | Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true using move semantics.
`public inline void `[`ClearCurrentBreakpoints`](#structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6)`()` | Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a0528586d3c612d3d92e8aefeff9daa23)`()` | Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a95d442e7e106ff063198c24727d98b27)`() const` | Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a56d2a3dcb7cd7c8fd1915c9cfa585dfc)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` | Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a62d057e8c590bd42b7495c6eb05c3620)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` | Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1ad25c1a8b659d536ea1bb2a7c36f8f930)`()` | Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1a0cd9003182fca313ea955baa274184d6)`() const` | Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ab98ede5046a7a0009e6f3ac0a2c32a51)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & NewValue)` | Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true.
`public inline FORCEINLINE void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a495600d5410facd3fc760dd872cf9e08)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > && NewValue)` | Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true using move semantics.
`public inline void `[`ClearPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731)`()` | Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1aba74a405d81db1f53945931f5e1dc2b9)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a76a6d7bf2fd3602ba27d0c6d6aeb117e)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1aa73d8c48d232a2835bb43dc0efbac747)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a0d326e619ef797cf76a2b70dd49345ef)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1a049c4b61c41ca998d7b40e92ed5ca172)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1adaf77472e36321eb86db9ba145b82a9a)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a74c127f3c93ad76acd736790a9ae953e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a27392462925f8424f0bcfe9b598a0971)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PricePoint_1ad23769d30990efd7c8f9700304c2421f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PricePoint_1ada72f931c5501d12d2dc178858879378)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1ad1a548321790599a480d58eaabdf15aa)`()` <a id="structFRHAPI__PricePoint_1ad1a548321790599a480d58eaabdf15aa"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a40636cc09ebe15a039e94f6dba077712)`() const` <a id="structFRHAPI__PricePoint_1a40636cc09ebe15a039e94f6dba077712"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a891dd202118271dda9b1c2857741328e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a891dd202118271dda9b1c2857741328e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PricePoint_1accff3a9f412b5bc9ad89f16a6fbf748d)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PricePoint_1accff3a9f412b5bc9ad89f16a6fbf748d"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1a36f502aa7a94ac0c8c0d9872458aea2a)`()` <a id="structFRHAPI__PricePoint_1a36f502aa7a94ac0c8c0d9872458aea2a"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1aa28c1fc2e72072257ee2fa824e47cda0)`() const` <a id="structFRHAPI__PricePoint_1aa28c1fc2e72072257ee2fa824e47cda0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PricePoint_1a11b5678c46db48016f18cd5d385752c6)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PricePoint_1a11b5678c46db48016f18cd5d385752c6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PricePoint_1a960a3d03062dfc89fed9e9a6ddac9466)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PricePoint_1a960a3d03062dfc89fed9e9a6ddac9466"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7)`()` <a id="structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__PricePoint_1af22e1b4759f6a4ef8925cbed0738f033)`()` <a id="structFRHAPI__PricePoint_1af22e1b4759f6a4ef8925cbed0738f033"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__PricePoint_1aa73c5c31927b6e00def36d28ce443b02)`() const` <a id="structFRHAPI__PricePoint_1aa73c5c31927b6e00def36d28ce443b02"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__PricePoint_1a51605e0633dcdcb03fb167f6f9b6b141)`(const FString & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a51605e0633dcdcb03fb167f6f9b6b141"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetName`](#structFRHAPI__PricePoint_1a73b609314fcfa07ea629f4855d4def67)`(FString & OutValue) const` <a id="structFRHAPI__PricePoint_1a73b609314fcfa07ea629f4855d4def67"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1a297818dae75e9c083f34f23d400236cf)`()` <a id="structFRHAPI__PricePoint_1a297818dae75e9c083f34f23d400236cf"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1af177b83cb60310aea9e7b4771187f92e)`() const` <a id="structFRHAPI__PricePoint_1af177b83cb60310aea9e7b4771187f92e"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__PricePoint_1ad6b6469b6d81ae80fbe22fae9ec334d8)`(const FString & NewValue)` <a id="structFRHAPI__PricePoint_1ad6b6469b6d81ae80fbe22fae9ec334d8"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__PricePoint_1a2eeaec10757ba52c3e807d5a544b826b)`(FString && NewValue)` <a id="structFRHAPI__PricePoint_1a2eeaec10757ba52c3e807d5a544b826b"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369)`()` <a id="structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline FORCEINLINE void `[`SetNameToNull`](#structFRHAPI__PricePoint_1a4ec51e35899c67d1d20a7af71753bd3d)`()` <a id="structFRHAPI__PricePoint_1a4ec51e35899c67d1d20a7af71753bd3d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsNameNull`](#structFRHAPI__PricePoint_1ad9e2b0c80012acc1c80dd0b5f0eb1166)`() const` <a id="structFRHAPI__PricePoint_1ad9e2b0c80012acc1c80dd0b5f0eb1166"></a>

Checks whether Name_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a0b7795b5ff023848369eca9cb9bee94a)`()` <a id="structFRHAPI__PricePoint_1a0b7795b5ff023848369eca9cb9bee94a"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a94a42d3833d19fe42e384ca5ea4ffc2c)`() const` <a id="structFRHAPI__PricePoint_1a94a42d3833d19fe42e384ca5ea4ffc2c"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a65235941cac401a71f0d9bcd61a26f74)`(const bool & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a65235941cac401a71f0d9bcd61a26f74"></a>

Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStrictFlag`](#structFRHAPI__PricePoint_1ae2de3fdb5779e035ad601285cac3b538)`(bool & OutValue) const` <a id="structFRHAPI__PricePoint_1ae2de3fdb5779e035ad601285cac3b538"></a>

Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a0d2e4a33560bb6864b8fbd2a397819af)`()` <a id="structFRHAPI__PricePoint_1a0d2e4a33560bb6864b8fbd2a397819af"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a086fa0078fd3fc0dcf2d64209405c5bd)`() const` <a id="structFRHAPI__PricePoint_1a086fa0078fd3fc0dcf2d64209405c5bd"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a603734560c764adff43efcecec86c78f)`(const bool & NewValue)` <a id="structFRHAPI__PricePoint_1a603734560c764adff43efcecec86c78f"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a222ddfefe35bdc0ffeb04f4e18f14f80)`(bool && NewValue)` <a id="structFRHAPI__PricePoint_1a222ddfefe35bdc0ffeb04f4e18f14f80"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true using move semantics.

#### `public inline void `[`ClearStrictFlag`](#structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1)`()` <a id="structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1"></a>

Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_StrictFlag`](#structFRHAPI__PricePoint_1a34a95127d70929bb93223a5199524891)`()` <a id="structFRHAPI__PricePoint_1a34a95127d70929bb93223a5199524891"></a>

Returns the default value of StrictFlag.

#### `public inline FORCEINLINE bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1af49b75ffce127e2eed64d3c5b1289f70)`()` <a id="structFRHAPI__PricePoint_1af49b75ffce127e2eed64d3c5b1289f70"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a63c8827c8a1332576456dcf4741600bf)`() const` <a id="structFRHAPI__PricePoint_1a63c8827c8a1332576456dcf4741600bf"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a4ddaaec1347da23e44f2371320ea6832)`(const bool & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a4ddaaec1347da23e44f2371320ea6832"></a>

Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCapFlag`](#structFRHAPI__PricePoint_1a87bbc1996562ee74dc26c3b15d6b321a)`(bool & OutValue) const` <a id="structFRHAPI__PricePoint_1a87bbc1996562ee74dc26c3b15d6b321a"></a>

Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a057dd4e0d5efefa7bdba20e8d920a502)`()` <a id="structFRHAPI__PricePoint_1a057dd4e0d5efefa7bdba20e8d920a502"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a64a7767f56444a524c5319444a7b0cb8)`() const` <a id="structFRHAPI__PricePoint_1a64a7767f56444a524c5319444a7b0cb8"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCapFlag`](#structFRHAPI__PricePoint_1a17eca26fa771a132cc425b0f686c11d4)`(const bool & NewValue)` <a id="structFRHAPI__PricePoint_1a17eca26fa771a132cc425b0f686c11d4"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCapFlag`](#structFRHAPI__PricePoint_1a89bb8ce577f92ac76eaf4bf4f20ba441)`(bool && NewValue)` <a id="structFRHAPI__PricePoint_1a89bb8ce577f92ac76eaf4bf4f20ba441"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true using move semantics.

#### `public inline void `[`ClearCapFlag`](#structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7)`()` <a id="structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7"></a>

Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CapFlag`](#structFRHAPI__PricePoint_1aa1d1828d484f78383b24799a324efb94)`()` <a id="structFRHAPI__PricePoint_1aa1d1828d484f78383b24799a324efb94"></a>

Returns the default value of CapFlag.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a3a7622b1a6bd5e7638a2b565662cc2a2)`()` <a id="structFRHAPI__PricePoint_1a3a7622b1a6bd5e7638a2b565662cc2a2"></a>

Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1af0c24d90be58a94674d12ca6e84a7b56)`() const` <a id="structFRHAPI__PricePoint_1af0c24d90be58a94674d12ca6e84a7b56"></a>

Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a93032922aedad0dd61f135cbecd8924e)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a93032922aedad0dd61f135cbecd8924e"></a>

Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a8aa3854768c1a541b225ab63524efbcd)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` <a id="structFRHAPI__PricePoint_1a8aa3854768c1a541b225ab63524efbcd"></a>

Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1a29a28628c948f4969e0390c19a38ed0f)`()` <a id="structFRHAPI__PricePoint_1a29a28628c948f4969e0390c19a38ed0f"></a>

Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1acabeb49f04144fba0485596d907d1a55)`() const` <a id="structFRHAPI__PricePoint_1acabeb49f04144fba0485596d907d1a55"></a>

Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1ac887fcbe526f615d958144322eaac94c)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & NewValue)` <a id="structFRHAPI__PricePoint_1ac887fcbe526f615d958144322eaac94c"></a>

Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a6f8fcb9b92da1bba2e6314e4c0aaddc9)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > && NewValue)` <a id="structFRHAPI__PricePoint_1a6f8fcb9b92da1bba2e6314e4c0aaddc9"></a>

Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrentBreakpoints`](#structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6)`()` <a id="structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6"></a>

Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a0528586d3c612d3d92e8aefeff9daa23)`()` <a id="structFRHAPI__PricePoint_1a0528586d3c612d3d92e8aefeff9daa23"></a>

Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a95d442e7e106ff063198c24727d98b27)`() const` <a id="structFRHAPI__PricePoint_1a95d442e7e106ff063198c24727d98b27"></a>

Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a56d2a3dcb7cd7c8fd1915c9cfa585dfc)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a56d2a3dcb7cd7c8fd1915c9cfa585dfc"></a>

Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a62d057e8c590bd42b7495c6eb05c3620)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` <a id="structFRHAPI__PricePoint_1a62d057e8c590bd42b7495c6eb05c3620"></a>

Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1ad25c1a8b659d536ea1bb2a7c36f8f930)`()` <a id="structFRHAPI__PricePoint_1ad25c1a8b659d536ea1bb2a7c36f8f930"></a>

Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1a0cd9003182fca313ea955baa274184d6)`() const` <a id="structFRHAPI__PricePoint_1a0cd9003182fca313ea955baa274184d6"></a>

Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ab98ede5046a7a0009e6f3ac0a2c32a51)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & NewValue)` <a id="structFRHAPI__PricePoint_1ab98ede5046a7a0009e6f3ac0a2c32a51"></a>

Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a495600d5410facd3fc760dd872cf9e08)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > && NewValue)` <a id="structFRHAPI__PricePoint_1a495600d5410facd3fc760dd872cf9e08"></a>

Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true using move semantics.

#### `public inline void `[`ClearPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731)`()` <a id="structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731"></a>

Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1aba74a405d81db1f53945931f5e1dc2b9)`()` <a id="structFRHAPI__PricePoint_1aba74a405d81db1f53945931f5e1dc2b9"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a76a6d7bf2fd3602ba27d0c6d6aeb117e)`() const` <a id="structFRHAPI__PricePoint_1a76a6d7bf2fd3602ba27d0c6d6aeb117e"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1aa73d8c48d232a2835bb43dc0efbac747)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PricePoint_1aa73d8c48d232a2835bb43dc0efbac747"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a0d326e619ef797cf76a2b70dd49345ef)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PricePoint_1a0d326e619ef797cf76a2b70dd49345ef"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1a049c4b61c41ca998d7b40e92ed5ca172)`()` <a id="structFRHAPI__PricePoint_1a049c4b61c41ca998d7b40e92ed5ca172"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1adaf77472e36321eb86db9ba145b82a9a)`() const` <a id="structFRHAPI__PricePoint_1adaf77472e36321eb86db9ba145b82a9a"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a74c127f3c93ad76acd736790a9ae953e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PricePoint_1a74c127f3c93ad76acd736790a9ae953e"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a27392462925f8424f0bcfe9b598a0971)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PricePoint_1a27392462925f8424f0bcfe9b598a0971"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392)`()` <a id="structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PricePoint_1ad23769d30990efd7c8f9700304c2421f)`()` <a id="structFRHAPI__PricePoint_1ad23769d30990efd7c8f9700304c2421f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PricePoint_1ada72f931c5501d12d2dc178858879378)`() const` <a id="structFRHAPI__PricePoint_1ada72f931c5501d12d2dc178858879378"></a>

Checks whether CacheInfo_Optional is set to null.

