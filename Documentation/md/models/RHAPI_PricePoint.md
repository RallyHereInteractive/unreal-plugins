# RHAPI_PricePoint <a id="group__RHAPI__PricePoint"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PricePoint_1af4668c0cc57ade57a0b96abf535dc2f6) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PricePoint_1a2b850e99080edc0e92d6000ccfbd0816) | true if CustomData_Optional has been set to a value
`public FString `[`Name_Optional`](#structFRHAPI__PricePoint_1ab49ac3d98309ae8ab2fa3b8e1789d8c5) | The name of the Price Point.
`public bool `[`Name_IsSet`](#structFRHAPI__PricePoint_1a8f623a172ea94a826a2ad281e7255c2e) | true if Name_Optional has been set to a value
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
`public virtual bool `[`FromJson`](#structFRHAPI__PricePoint_1afad2c5f654c7ad117e24c72b75bb57a6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PricePoint_1a224e47ff6e378572ad960606a7c3fe0d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a87ab45f4f394ac693bfb8176bc7a239f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a2f2cf1ea9d4f84202af8feb0f81bb47b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a75fac3e26f601de30a1bfb5e53d833b2)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PricePoint_1ae551d3d477542e217d70381427125feb)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1af0bd33eabb2b5aa3e6d32516f6a61bfd)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1a32b7726aa13eed431bcf08aeeb016773)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PricePoint_1a3e113dd4976dbb1ac4f329aa1148b89d)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetName`](#structFRHAPI__PricePoint_1a9db967c7703918222c1027295fd5856a)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__PricePoint_1adcb2ae6afe38155283fb9362647e94e5)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__PricePoint_1abc701b11ceed079e796f8e4b655cc648)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetName`](#structFRHAPI__PricePoint_1a0ed342a46a8ab925698a97acc1ba509e)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1a37d3193ab89794e62aa59ee052c42116)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1a506cac06d94fd6a5c254ef0b2bca98d5)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetName`](#structFRHAPI__PricePoint_1a0085af8253d117fe21275f4266b0eb1b)`(FString NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline void `[`ClearName`](#structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a300a6014f050b98ddba1625395eea2b0)`()` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a2b82e2cb18ae4137cc1e7bd1896b5c0e)`() const` | Gets the value of StrictFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1acba9027e3b18d1274c2eea88893f3c0a)`(const bool & DefaultValue) const` | Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a74c06fb9c6a4f0b5e3638c14f35bb6bb)`(bool & OutValue) const` | Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1addeae056c10c3b04291b7f5599d17456)`()` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a21f18de9878fee28933dea9d55982979)`() const` | Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a55c0d996a7114487f87aaec614dcbbf2)`(bool NewValue)` | Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.
`public inline void `[`ClearStrictFlag`](#structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1)`()` | Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.
`public inline bool `[`IsStrictFlagDefaultValue`](#structFRHAPI__PricePoint_1ae3b921dee70cd9e0e717953c5fd2fb1d)`() const` | Returns true if StrictFlag_Optional is set and matches the default value.
`public inline void `[`SetStrictFlagToDefault`](#structFRHAPI__PricePoint_1a37585831994f33ec8e9aa074a60c4a53)`()` | Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true.
`public inline bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a60cd0290f02c4c6801a661d603202ce5)`()` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1af17ae8addf4551342a66af028c78affc)`() const` | Gets the value of CapFlag_Optional, regardless of it having been set.
`public inline const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a8d3a9a05ebdcab3149c2c7a13aead2d6)`(const bool & DefaultValue) const` | Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCapFlag`](#structFRHAPI__PricePoint_1a9b06b65ad6c1755693fa636ce1d284e8)`(bool & OutValue) const` | Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a8c45c05e16aaef95edd569bc37faf9aa)`()` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1ab4b2952dc94ccfa5e254839853f44359)`() const` | Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCapFlag`](#structFRHAPI__PricePoint_1aa40575e5b53a7836ef5eb7a681c7922f)`(bool NewValue)` | Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.
`public inline void `[`ClearCapFlag`](#structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7)`()` | Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.
`public inline bool `[`IsCapFlagDefaultValue`](#structFRHAPI__PricePoint_1ac7bdd29493de65739abf520023380ced)`() const` | Returns true if CapFlag_Optional is set and matches the default value.
`public inline void `[`SetCapFlagToDefault`](#structFRHAPI__PricePoint_1a42d6cf3c6484b5845a21ce641736db09)`()` | Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true.
`public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a848c359f3d7c4b072466075aef42b3d1)`()` | Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a71fc88b22034cc46afc5b0394afbd6c3)`() const` | Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1aa507aed8b9d9dad2fe9742e2d083f696)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` | Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a3f8ef083f62a90d53c3a50f422c867ec)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` | Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1ab93a1ed21742ddf23f32ecb14ef3c7a3)`()` | Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1adb1b1d631ac4107f8fcf418724a03984)`() const` | Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a5e9800eac3957d9480b076df76e3fe4e)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > NewValue)` | Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true.
`public inline void `[`ClearCurrentBreakpoints`](#structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6)`()` | Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false.
`public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a6860dab065ced79067e4921708f1b174)`()` | Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a68751303abe6bf5625bc052b82e275f3)`() const` | Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1aa00675cc156a0732d52ab329b99dcd2a)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` | Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a9d06b5909e8e46bf9d44cc54e200e3d2)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` | Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1ac41d42060cdbfd89b631e7f01b7705f4)`()` | Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1a03d8ca2cabbaf46bc1a4e8b3e64147db)`() const` | Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a067a1fd09e6479e5c70b612f636aeda7)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > NewValue)` | Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true.
`public inline void `[`ClearPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731)`()` | Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1ab9251bec3945f3ab38ab65fa3318a467)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1addb2de5e905ef9f0e96f34aa1ee5ef1b)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a70751ecc7adac244ddc77c3fd6707f1f)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a803317f9e1c420480ab226c8190bc7f7)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1ac181662aef5589ee23f93e3a23a2277b)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1a6ad98a61ef7d51cdc961f24a61e72728)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a34e8844b89b54dc4abbf34a12fcb043f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PricePoint_1af4668c0cc57ade57a0b96abf535dc2f6) <a id="structFRHAPI__PricePoint_1af4668c0cc57ade57a0b96abf535dc2f6"></a>

Custom data associated with the resource.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PricePoint_1a2b850e99080edc0e92d6000ccfbd0816) <a id="structFRHAPI__PricePoint_1a2b850e99080edc0e92d6000ccfbd0816"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`Name_Optional`](#structFRHAPI__PricePoint_1ab49ac3d98309ae8ab2fa3b8e1789d8c5) <a id="structFRHAPI__PricePoint_1ab49ac3d98309ae8ab2fa3b8e1789d8c5"></a>

The name of the Price Point.

<br>
#### `public bool `[`Name_IsSet`](#structFRHAPI__PricePoint_1a8f623a172ea94a826a2ad281e7255c2e) <a id="structFRHAPI__PricePoint_1a8f623a172ea94a826a2ad281e7255c2e"></a>

true if Name_Optional has been set to a value

<br>
#### `public bool `[`StrictFlag_Optional`](#structFRHAPI__PricePoint_1ae85a32e0460cec90a08a138a39664d11) <a id="structFRHAPI__PricePoint_1ae85a32e0460cec90a08a138a39664d11"></a>

Forces the quantity to be equal to a quantity on a Price Breakpoint.

<br>
#### `public bool `[`StrictFlag_IsSet`](#structFRHAPI__PricePoint_1ad87ce4c59955dcabb4a78a7b89718693) <a id="structFRHAPI__PricePoint_1ad87ce4c59955dcabb4a78a7b89718693"></a>

true if StrictFlag_Optional has been set to a value

<br>
#### `public bool `[`CapFlag_Optional`](#structFRHAPI__PricePoint_1aa48bdd6837545660392ae3e591057171) <a id="structFRHAPI__PricePoint_1aa48bdd6837545660392ae3e591057171"></a>

Only allows quantity to be fulfilled up the highest quantity on the Price Breakpoints.

<br>
#### `public bool `[`CapFlag_IsSet`](#structFRHAPI__PricePoint_1ae051d38aec0022d266dc663514c198b9) <a id="structFRHAPI__PricePoint_1ae051d38aec0022d266dc663514c198b9"></a>

true if CapFlag_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > `[`CurrentBreakpoints_Optional`](#structFRHAPI__PricePoint_1afbd743b73afeefcd12fc50949fad0dbc) <a id="structFRHAPI__PricePoint_1afbd743b73afeefcd12fc50949fad0dbc"></a>

Current Price Breakpoints.

<br>
#### `public bool `[`CurrentBreakpoints_IsSet`](#structFRHAPI__PricePoint_1a51e38d73a12c442be18ac1f52e8c7f4c) <a id="structFRHAPI__PricePoint_1a51e38d73a12c442be18ac1f52e8c7f4c"></a>

true if CurrentBreakpoints_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > `[`PreSaleBreakpoints_Optional`](#structFRHAPI__PricePoint_1aa09992e99ddf5dd10cd5a9ffa9498f00) <a id="structFRHAPI__PricePoint_1aa09992e99ddf5dd10cd5a9ffa9498f00"></a>

Previous Price Breakpoints.

<br>
#### `public bool `[`PreSaleBreakpoints_IsSet`](#structFRHAPI__PricePoint_1a92835400bdb09fefc9fcb9a1b514d2cf) <a id="structFRHAPI__PricePoint_1a92835400bdb09fefc9fcb9a1b514d2cf"></a>

true if PreSaleBreakpoints_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PricePoint_1a2c2cf9441fff3bd907421bc8ae6c541a) <a id="structFRHAPI__PricePoint_1a2c2cf9441fff3bd907421bc8ae6c541a"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PricePoint_1a4ae46d4bcca1201ccecbfdde4254e7be) <a id="structFRHAPI__PricePoint_1a4ae46d4bcca1201ccecbfdde4254e7be"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PricePoint_1afad2c5f654c7ad117e24c72b75bb57a6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PricePoint_1afad2c5f654c7ad117e24c72b75bb57a6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PricePoint_1a224e47ff6e378572ad960606a7c3fe0d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PricePoint_1a224e47ff6e378572ad960606a7c3fe0d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a87ab45f4f394ac693bfb8176bc7a239f)`()` <a id="structFRHAPI__PricePoint_1a87ab45f4f394ac693bfb8176bc7a239f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a2f2cf1ea9d4f84202af8feb0f81bb47b)`() const` <a id="structFRHAPI__PricePoint_1a2f2cf1ea9d4f84202af8feb0f81bb47b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PricePoint_1a75fac3e26f601de30a1bfb5e53d833b2)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a75fac3e26f601de30a1bfb5e53d833b2"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__PricePoint_1ae551d3d477542e217d70381427125feb)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PricePoint_1ae551d3d477542e217d70381427125feb"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1af0bd33eabb2b5aa3e6d32516f6a61bfd)`()` <a id="structFRHAPI__PricePoint_1af0bd33eabb2b5aa3e6d32516f6a61bfd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PricePoint_1a32b7726aa13eed431bcf08aeeb016773)`() const` <a id="structFRHAPI__PricePoint_1a32b7726aa13eed431bcf08aeeb016773"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__PricePoint_1a3e113dd4976dbb1ac4f329aa1148b89d)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__PricePoint_1a3e113dd4976dbb1ac4f329aa1148b89d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7)`()` <a id="structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetName`](#structFRHAPI__PricePoint_1a9db967c7703918222c1027295fd5856a)`()` <a id="structFRHAPI__PricePoint_1a9db967c7703918222c1027295fd5856a"></a>

Gets the value of Name_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetName`](#structFRHAPI__PricePoint_1adcb2ae6afe38155283fb9362647e94e5)`() const` <a id="structFRHAPI__PricePoint_1adcb2ae6afe38155283fb9362647e94e5"></a>

Gets the value of Name_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetName`](#structFRHAPI__PricePoint_1abc701b11ceed079e796f8e4b655cc648)`(const FString & DefaultValue) const` <a id="structFRHAPI__PricePoint_1abc701b11ceed079e796f8e4b655cc648"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetName`](#structFRHAPI__PricePoint_1a0ed342a46a8ab925698a97acc1ba509e)`(FString & OutValue) const` <a id="structFRHAPI__PricePoint_1a0ed342a46a8ab925698a97acc1ba509e"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1a37d3193ab89794e62aa59ee052c42116)`()` <a id="structFRHAPI__PricePoint_1a37d3193ab89794e62aa59ee052c42116"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetNameOrNull`](#structFRHAPI__PricePoint_1a506cac06d94fd6a5c254ef0b2bca98d5)`() const` <a id="structFRHAPI__PricePoint_1a506cac06d94fd6a5c254ef0b2bca98d5"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetName`](#structFRHAPI__PricePoint_1a0085af8253d117fe21275f4266b0eb1b)`(FString NewValue)` <a id="structFRHAPI__PricePoint_1a0085af8253d117fe21275f4266b0eb1b"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

<br>
#### `public inline void `[`ClearName`](#structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369)`()` <a id="structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

<br>
#### `public inline bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a300a6014f050b98ddba1625395eea2b0)`()` <a id="structFRHAPI__PricePoint_1a300a6014f050b98ddba1625395eea2b0"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a2b82e2cb18ae4137cc1e7bd1896b5c0e)`() const` <a id="structFRHAPI__PricePoint_1a2b82e2cb18ae4137cc1e7bd1896b5c0e"></a>

Gets the value of StrictFlag_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetStrictFlag`](#structFRHAPI__PricePoint_1acba9027e3b18d1274c2eea88893f3c0a)`(const bool & DefaultValue) const` <a id="structFRHAPI__PricePoint_1acba9027e3b18d1274c2eea88893f3c0a"></a>

Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetStrictFlag`](#structFRHAPI__PricePoint_1a74c06fb9c6a4f0b5e3638c14f35bb6bb)`(bool & OutValue) const` <a id="structFRHAPI__PricePoint_1a74c06fb9c6a4f0b5e3638c14f35bb6bb"></a>

Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1addeae056c10c3b04291b7f5599d17456)`()` <a id="structFRHAPI__PricePoint_1addeae056c10c3b04291b7f5599d17456"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetStrictFlagOrNull`](#structFRHAPI__PricePoint_1a21f18de9878fee28933dea9d55982979)`() const` <a id="structFRHAPI__PricePoint_1a21f18de9878fee28933dea9d55982979"></a>

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetStrictFlag`](#structFRHAPI__PricePoint_1a55c0d996a7114487f87aaec614dcbbf2)`(bool NewValue)` <a id="structFRHAPI__PricePoint_1a55c0d996a7114487f87aaec614dcbbf2"></a>

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.

<br>
#### `public inline void `[`ClearStrictFlag`](#structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1)`()` <a id="structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1"></a>

Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.

<br>
#### `public inline bool `[`IsStrictFlagDefaultValue`](#structFRHAPI__PricePoint_1ae3b921dee70cd9e0e717953c5fd2fb1d)`() const` <a id="structFRHAPI__PricePoint_1ae3b921dee70cd9e0e717953c5fd2fb1d"></a>

Returns true if StrictFlag_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetStrictFlagToDefault`](#structFRHAPI__PricePoint_1a37585831994f33ec8e9aa074a60c4a53)`()` <a id="structFRHAPI__PricePoint_1a37585831994f33ec8e9aa074a60c4a53"></a>

Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true.

<br>
#### `public inline bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a60cd0290f02c4c6801a661d603202ce5)`()` <a id="structFRHAPI__PricePoint_1a60cd0290f02c4c6801a661d603202ce5"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1af17ae8addf4551342a66af028c78affc)`() const` <a id="structFRHAPI__PricePoint_1af17ae8addf4551342a66af028c78affc"></a>

Gets the value of CapFlag_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCapFlag`](#structFRHAPI__PricePoint_1a8d3a9a05ebdcab3149c2c7a13aead2d6)`(const bool & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a8d3a9a05ebdcab3149c2c7a13aead2d6"></a>

Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCapFlag`](#structFRHAPI__PricePoint_1a9b06b65ad6c1755693fa636ce1d284e8)`(bool & OutValue) const` <a id="structFRHAPI__PricePoint_1a9b06b65ad6c1755693fa636ce1d284e8"></a>

Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1a8c45c05e16aaef95edd569bc37faf9aa)`()` <a id="structFRHAPI__PricePoint_1a8c45c05e16aaef95edd569bc37faf9aa"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetCapFlagOrNull`](#structFRHAPI__PricePoint_1ab4b2952dc94ccfa5e254839853f44359)`() const` <a id="structFRHAPI__PricePoint_1ab4b2952dc94ccfa5e254839853f44359"></a>

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCapFlag`](#structFRHAPI__PricePoint_1aa40575e5b53a7836ef5eb7a681c7922f)`(bool NewValue)` <a id="structFRHAPI__PricePoint_1aa40575e5b53a7836ef5eb7a681c7922f"></a>

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.

<br>
#### `public inline void `[`ClearCapFlag`](#structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7)`()` <a id="structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7"></a>

Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.

<br>
#### `public inline bool `[`IsCapFlagDefaultValue`](#structFRHAPI__PricePoint_1ac7bdd29493de65739abf520023380ced)`() const` <a id="structFRHAPI__PricePoint_1ac7bdd29493de65739abf520023380ced"></a>

Returns true if CapFlag_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCapFlagToDefault`](#structFRHAPI__PricePoint_1a42d6cf3c6484b5845a21ce641736db09)`()` <a id="structFRHAPI__PricePoint_1a42d6cf3c6484b5845a21ce641736db09"></a>

Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true.

<br>
#### `public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a848c359f3d7c4b072466075aef42b3d1)`()` <a id="structFRHAPI__PricePoint_1a848c359f3d7c4b072466075aef42b3d1"></a>

Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a71fc88b22034cc46afc5b0394afbd6c3)`() const` <a id="structFRHAPI__PricePoint_1a71fc88b22034cc46afc5b0394afbd6c3"></a>

Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1aa507aed8b9d9dad2fe9742e2d083f696)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1aa507aed8b9d9dad2fe9742e2d083f696"></a>

Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a3f8ef083f62a90d53c3a50f422c867ec)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` <a id="structFRHAPI__PricePoint_1a3f8ef083f62a90d53c3a50f422c867ec"></a>

Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1ab93a1ed21742ddf23f32ecb14ef3c7a3)`()` <a id="structFRHAPI__PricePoint_1ab93a1ed21742ddf23f32ecb14ef3c7a3"></a>

Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetCurrentBreakpointsOrNull`](#structFRHAPI__PricePoint_1adb1b1d631ac4107f8fcf418724a03984)`() const` <a id="structFRHAPI__PricePoint_1adb1b1d631ac4107f8fcf418724a03984"></a>

Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCurrentBreakpoints`](#structFRHAPI__PricePoint_1a5e9800eac3957d9480b076df76e3fe4e)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > NewValue)` <a id="structFRHAPI__PricePoint_1a5e9800eac3957d9480b076df76e3fe4e"></a>

Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true.

<br>
#### `public inline void `[`ClearCurrentBreakpoints`](#structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6)`()` <a id="structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6"></a>

Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a6860dab065ced79067e4921708f1b174)`()` <a id="structFRHAPI__PricePoint_1a6860dab065ced79067e4921708f1b174"></a>

Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a68751303abe6bf5625bc052b82e275f3)`() const` <a id="structFRHAPI__PricePoint_1a68751303abe6bf5625bc052b82e275f3"></a>

Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1aa00675cc156a0732d52ab329b99dcd2a)`(const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & DefaultValue) const` <a id="structFRHAPI__PricePoint_1aa00675cc156a0732d52ab329b99dcd2a"></a>

Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a9d06b5909e8e46bf9d44cc54e200e3d2)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > & OutValue) const` <a id="structFRHAPI__PricePoint_1a9d06b5909e8e46bf9d44cc54e200e3d2"></a>

Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1ac41d42060cdbfd89b631e7f01b7705f4)`()` <a id="structFRHAPI__PricePoint_1ac41d42060cdbfd89b631e7f01b7705f4"></a>

Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > * `[`GetPreSaleBreakpointsOrNull`](#structFRHAPI__PricePoint_1a03d8ca2cabbaf46bc1a4e8b3e64147db)`() const` <a id="structFRHAPI__PricePoint_1a03d8ca2cabbaf46bc1a4e8b3e64147db"></a>

Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPreSaleBreakpoints`](#structFRHAPI__PricePoint_1a067a1fd09e6479e5c70b612f636aeda7)`(TArray< `[`FRHAPI_PriceBreakpoint`](RHAPI_PriceBreakpoint.md#structFRHAPI__PriceBreakpoint)` > NewValue)` <a id="structFRHAPI__PricePoint_1a067a1fd09e6479e5c70b612f636aeda7"></a>

Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true.

<br>
#### `public inline void `[`ClearPreSaleBreakpoints`](#structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731)`()` <a id="structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731"></a>

Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1ab9251bec3945f3ab38ab65fa3318a467)`()` <a id="structFRHAPI__PricePoint_1ab9251bec3945f3ab38ab65fa3318a467"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1addb2de5e905ef9f0e96f34aa1ee5ef1b)`() const` <a id="structFRHAPI__PricePoint_1addb2de5e905ef9f0e96f34aa1ee5ef1b"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a70751ecc7adac244ddc77c3fd6707f1f)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PricePoint_1a70751ecc7adac244ddc77c3fd6707f1f"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PricePoint_1a803317f9e1c420480ab226c8190bc7f7)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PricePoint_1a803317f9e1c420480ab226c8190bc7f7"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1ac181662aef5589ee23f93e3a23a2277b)`()` <a id="structFRHAPI__PricePoint_1ac181662aef5589ee23f93e3a23a2277b"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PricePoint_1a6ad98a61ef7d51cdc961f24a61e72728)`() const` <a id="structFRHAPI__PricePoint_1a6ad98a61ef7d51cdc961f24a61e72728"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PricePoint_1a34e8844b89b54dc4abbf34a12fcb043f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__PricePoint_1a34e8844b89b54dc4abbf34a12fcb043f"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392)`()` <a id="structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
