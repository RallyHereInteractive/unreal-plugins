---
title: FRHAPI_PricePoint Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Price Breakpoints (volume pricing).

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1af4668c0cc57ade57a0b96abf535dc2f6)|Custom data associated with the resource.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a2b850e99080edc0e92d6000ccfbd0816)|true if CustomData_Optional has been set to a value|
|FString|[Name_Optional](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ab49ac3d98309ae8ab2fa3b8e1789d8c5)|The name of the Price Point.|
|bool|[Name_IsSet](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a8f623a172ea94a826a2ad281e7255c2e)|true if Name_Optional has been set to a value|
|bool|[StrictFlag_Optional](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ae85a32e0460cec90a08a138a39664d11)|Forces the quantity to be equal to a quantity on a Price Breakpoint.|
|bool|[StrictFlag_IsSet](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ad87ce4c59955dcabb4a78a7b89718693)|true if StrictFlag_Optional has been set to a value|
|bool|[CapFlag_Optional](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1aa48bdd6837545660392ae3e591057171)|Only allows quantity to be fulfilled up the highest quantity on the Price Breakpoints.|
|bool|[CapFlag_IsSet](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ae051d38aec0022d266dc663514c198b9)|true if CapFlag_Optional has been set to a value|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) >|[CurrentBreakpoints_Optional](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1afbd743b73afeefcd12fc50949fad0dbc)|Current Price Breakpoints.|
|bool|[CurrentBreakpoints_IsSet](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a51e38d73a12c442be18ac1f52e8c7f4c)|true if CurrentBreakpoints_Optional has been set to a value|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) >|[PreSaleBreakpoints_Optional](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1aa09992e99ddf5dd10cd5a9ffa9498f00)|Previous Price Breakpoints.|
|bool|[PreSaleBreakpoints_IsSet](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a92835400bdb09fefc9fcb9a1b514d2cf)|true if PreSaleBreakpoints_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a2c2cf9441fff3bd907421bc8ae6c541a)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a4ae46d4bcca1201ccecbfdde4254e7be)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1afad2c5f654c7ad117e24c72b75bb57a6)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a224e47ff6e378572ad960606a7c3fe0d)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a87ab45f4f394ac693bfb8176bc7a239f)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a2f2cf1ea9d4f84202af8feb0f81bb47b)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a75fac3e26f601de30a1bfb5e53d833b2)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ae551d3d477542e217d70381427125feb)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1af0bd33eabb2b5aa3e6d32516f6a61bfd)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a32b7726aa13eed431bcf08aeeb016773)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a3e113dd4976dbb1ac4f329aa1148b89d)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FString &|[GetName](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a9db967c7703918222c1027295fd5856a)()|Gets the value of Name_Optional, regardless of it having been set.|
|const FString &|[GetName](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1adcb2ae6afe38155283fb9362647e94e5)()|Gets the value of Name_Optional, regardless of it having been set.|
|const FString &|[GetName](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1abc701b11ceed079e796f8e4b655cc648)(const FString & DefaultValue)|Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetName](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a0ed342a46a8ab925698a97acc1ba509e)(FString & OutValue)|Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetNameOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a37d3193ab89794e62aa59ee052c42116)()|Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetNameOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a506cac06d94fd6a5c254ef0b2bca98d5)()|Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetName](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a0085af8253d117fe21275f4266b0eb1b)(FString NewValue)|Sets the value of Name_Optional and also sets Name_IsSet to true.|
|void|[ClearName](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369)()|Clears the value of Name_Optional and sets Name_IsSet to false.|
|bool &|[GetStrictFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a300a6014f050b98ddba1625395eea2b0)()|Gets the value of StrictFlag_Optional, regardless of it having been set.|
|const bool &|[GetStrictFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a2b82e2cb18ae4137cc1e7bd1896b5c0e)()|Gets the value of StrictFlag_Optional, regardless of it having been set.|
|const bool &|[GetStrictFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1acba9027e3b18d1274c2eea88893f3c0a)(const bool & DefaultValue)|Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStrictFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a74c06fb9c6a4f0b5e3638c14f35bb6bb)(bool & OutValue)|Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetStrictFlagOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1addeae056c10c3b04291b7f5599d17456)()|Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetStrictFlagOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a21f18de9878fee28933dea9d55982979)()|Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStrictFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a55c0d996a7114487f87aaec614dcbbf2)(bool NewValue)|Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.|
|void|[ClearStrictFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1)()|Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.|
|bool|[IsStrictFlagDefaultValue](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ae3b921dee70cd9e0e717953c5fd2fb1d)()|Returns true if StrictFlag_Optional is set and matches the default value.|
|void|[SetStrictFlagToDefault](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a37585831994f33ec8e9aa074a60c4a53)()|Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true.|
|bool &|[GetCapFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a60cd0290f02c4c6801a661d603202ce5)()|Gets the value of CapFlag_Optional, regardless of it having been set.|
|const bool &|[GetCapFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1af17ae8addf4551342a66af028c78affc)()|Gets the value of CapFlag_Optional, regardless of it having been set.|
|const bool &|[GetCapFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a8d3a9a05ebdcab3149c2c7a13aead2d6)(const bool & DefaultValue)|Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCapFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a9b06b65ad6c1755693fa636ce1d284e8)(bool & OutValue)|Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetCapFlagOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a8c45c05e16aaef95edd569bc37faf9aa)()|Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetCapFlagOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ab4b2952dc94ccfa5e254839853f44359)()|Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCapFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1aa40575e5b53a7836ef5eb7a681c7922f)(bool NewValue)|Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.|
|void|[ClearCapFlag](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7)()|Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.|
|bool|[IsCapFlagDefaultValue](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ac7bdd29493de65739abf520023380ced)()|Returns true if CapFlag_Optional is set and matches the default value.|
|void|[SetCapFlagToDefault](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a42d6cf3c6484b5845a21ce641736db09)()|Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true.|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|[GetCurrentBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a848c359f3d7c4b072466075aef42b3d1)()|Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|[GetCurrentBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a71fc88b22034cc46afc5b0394afbd6c3)()|Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|[GetCurrentBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1aa507aed8b9d9dad2fe9742e2d083f696)(const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & DefaultValue)|Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCurrentBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a3f8ef083f62a90d53c3a50f422c867ec)(TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & OutValue)|Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > *|[GetCurrentBreakpointsOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ab93a1ed21742ddf23f32ecb14ef3c7a3)()|Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > *|[GetCurrentBreakpointsOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1adb1b1d631ac4107f8fcf418724a03984)()|Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCurrentBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a5e9800eac3957d9480b076df76e3fe4e)(TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > NewValue)|Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true.|
|void|[ClearCurrentBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6)()|Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false.|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|[GetPreSaleBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a6860dab065ced79067e4921708f1b174)()|Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|[GetPreSaleBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a68751303abe6bf5625bc052b82e275f3)()|Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|[GetPreSaleBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1aa00675cc156a0732d52ab329b99dcd2a)(const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & DefaultValue)|Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPreSaleBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a9d06b5909e8e46bf9d44cc54e200e3d2)(TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & OutValue)|Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > *|[GetPreSaleBreakpointsOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ac41d42060cdbfd89b631e7f01b7705f4)()|Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > *|[GetPreSaleBreakpointsOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a03d8ca2cabbaf46bc1a4e8b3e64147db)()|Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPreSaleBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a067a1fd09e6479e5c70b612f636aeda7)(TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > NewValue)|Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true.|
|void|[ClearPreSaleBreakpoints](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731)()|Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ab9251bec3945f3ab38ab65fa3318a467)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1addb2de5e905ef9f0e96f34aa1ee5ef1b)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a70751ecc7adac244ddc77c3fd6707f1f)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a803317f9e1c420480ab226c8190bc7f7)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1ac181662aef5589ee23f93e3a23a2277b)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a6ad98a61ef7d51cdc961f24a61e72728)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a34e8844b89b54dc4abbf34a12fcb043f)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__pricepoint/#structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__PricePoint_1af4668c0cc57ade57a0b96abf535dc2f6"></a>

`TMap<FString, FString> FRHAPI_PricePoint::CustomData_Optional`

Custom data associated with the resource.




### `CustomData_IsSet` <a id="structFRHAPI__PricePoint_1a2b850e99080edc0e92d6000ccfbd0816"></a>

`bool FRHAPI_PricePoint::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Name_Optional` <a id="structFRHAPI__PricePoint_1ab49ac3d98309ae8ab2fa3b8e1789d8c5"></a>

`FString FRHAPI_PricePoint::Name_Optional`

The name of the Price Point.




### `Name_IsSet` <a id="structFRHAPI__PricePoint_1a8f623a172ea94a826a2ad281e7255c2e"></a>

`bool FRHAPI_PricePoint::Name_IsSet`

true if Name_Optional has been set to a value




### `StrictFlag_Optional` <a id="structFRHAPI__PricePoint_1ae85a32e0460cec90a08a138a39664d11"></a>

`bool FRHAPI_PricePoint::StrictFlag_Optional`

Forces the quantity to be equal to a quantity on a Price Breakpoint.




### `StrictFlag_IsSet` <a id="structFRHAPI__PricePoint_1ad87ce4c59955dcabb4a78a7b89718693"></a>

`bool FRHAPI_PricePoint::StrictFlag_IsSet`

true if StrictFlag_Optional has been set to a value




### `CapFlag_Optional` <a id="structFRHAPI__PricePoint_1aa48bdd6837545660392ae3e591057171"></a>

`bool FRHAPI_PricePoint::CapFlag_Optional`

Only allows quantity to be fulfilled up the highest quantity on the Price Breakpoints.




### `CapFlag_IsSet` <a id="structFRHAPI__PricePoint_1ae051d38aec0022d266dc663514c198b9"></a>

`bool FRHAPI_PricePoint::CapFlag_IsSet`

true if CapFlag_Optional has been set to a value




### `CurrentBreakpoints_Optional` <a id="structFRHAPI__PricePoint_1afbd743b73afeefcd12fc50949fad0dbc"></a>

`TArray<FRHAPI_PriceBreakpoint> FRHAPI_PricePoint::CurrentBreakpoints_Optional`

Current Price Breakpoints.




### `CurrentBreakpoints_IsSet` <a id="structFRHAPI__PricePoint_1a51e38d73a12c442be18ac1f52e8c7f4c"></a>

`bool FRHAPI_PricePoint::CurrentBreakpoints_IsSet`

true if CurrentBreakpoints_Optional has been set to a value




### `PreSaleBreakpoints_Optional` <a id="structFRHAPI__PricePoint_1aa09992e99ddf5dd10cd5a9ffa9498f00"></a>

`TArray<FRHAPI_PriceBreakpoint> FRHAPI_PricePoint::PreSaleBreakpoints_Optional`

Previous Price Breakpoints.




### `PreSaleBreakpoints_IsSet` <a id="structFRHAPI__PricePoint_1a92835400bdb09fefc9fcb9a1b514d2cf"></a>

`bool FRHAPI_PricePoint::PreSaleBreakpoints_IsSet`

true if PreSaleBreakpoints_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__PricePoint_1a2c2cf9441fff3bd907421bc8ae6c541a"></a>

`FRHAPI_CacheInfo FRHAPI_PricePoint::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__PricePoint_1a4ae46d4bcca1201ccecbfdde4254e7be"></a>

`bool FRHAPI_PricePoint::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PricePoint_1afad2c5f654c7ad117e24c72b75bb57a6"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__PricePoint_1a224e47ff6e378572ad960606a7c3fe0d"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetCustomData` <a id="structFRHAPI__PricePoint_1a87ab45f4f394ac693bfb8176bc7a239f"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PricePoint_1a2f2cf1ea9d4f84202af8feb0f81bb47b"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PricePoint_1a75fac3e26f601de30a1bfb5e53d833b2"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PricePoint_1ae551d3d477542e217d70381427125feb"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PricePoint_1af0bd33eabb2b5aa3e6d32516f6a61bfd"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PricePoint_1a32b7726aa13eed431bcf08aeeb016773"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PricePoint_1a3e113dd4976dbb1ac4f329aa1148b89d"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PricePoint_1a3f7a4f2dcc067371645926043b0277f7"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetName` <a id="structFRHAPI__PricePoint_1a9db967c7703918222c1027295fd5856a"></a>

FString & GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Name_Optional, regardless of it having been set.




### `GetName` <a id="structFRHAPI__PricePoint_1adcb2ae6afe38155283fb9362647e94e5"></a>

const FString & GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Name_Optional, regardless of it having been set.




### `GetName` <a id="structFRHAPI__PricePoint_1abc701b11ceed079e796f8e4b655cc648"></a>

const FString & GetName(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetName` <a id="structFRHAPI__PricePoint_1a0ed342a46a8ab925698a97acc1ba509e"></a>

bool GetName(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.




### `GetNameOrNull` <a id="structFRHAPI__PricePoint_1a37d3193ab89794e62aa59ee052c42116"></a>

FString * GetNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.




### `GetNameOrNull` <a id="structFRHAPI__PricePoint_1a506cac06d94fd6a5c254ef0b2bca98d5"></a>

const FString * GetNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.




### `SetName` <a id="structFRHAPI__PricePoint_1a0085af8253d117fe21275f4266b0eb1b"></a>

void SetName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Name_Optional and also sets Name_IsSet to true.




### `ClearName` <a id="structFRHAPI__PricePoint_1a4925121288f9d0ac7a71ba732997d369"></a>

void ClearName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Name_Optional and sets Name_IsSet to false.




### `GetStrictFlag` <a id="structFRHAPI__PricePoint_1a300a6014f050b98ddba1625395eea2b0"></a>

bool & GetStrictFlag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StrictFlag_Optional, regardless of it having been set.




### `GetStrictFlag` <a id="structFRHAPI__PricePoint_1a2b82e2cb18ae4137cc1e7bd1896b5c0e"></a>

const bool & GetStrictFlag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of StrictFlag_Optional, regardless of it having been set.




### `GetStrictFlag` <a id="structFRHAPI__PricePoint_1acba9027e3b18d1274c2eea88893f3c0a"></a>

const bool & GetStrictFlag(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStrictFlag` <a id="structFRHAPI__PricePoint_1a74c06fb9c6a4f0b5e3638c14f35bb6bb"></a>

bool GetStrictFlag(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false.




### `GetStrictFlagOrNull` <a id="structFRHAPI__PricePoint_1addeae056c10c3b04291b7f5599d17456"></a>

bool * GetStrictFlagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.




### `GetStrictFlagOrNull` <a id="structFRHAPI__PricePoint_1a21f18de9878fee28933dea9d55982979"></a>

const bool * GetStrictFlagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr.




### `SetStrictFlag` <a id="structFRHAPI__PricePoint_1a55c0d996a7114487f87aaec614dcbbf2"></a>

void SetStrictFlag(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true.




### `ClearStrictFlag` <a id="structFRHAPI__PricePoint_1a65649a3f6abbc0bd5d1779bb33938bd1"></a>

void ClearStrictFlag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false.




### `IsStrictFlagDefaultValue` <a id="structFRHAPI__PricePoint_1ae3b921dee70cd9e0e717953c5fd2fb1d"></a>

bool IsStrictFlagDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if StrictFlag_Optional is set and matches the default value.




### `SetStrictFlagToDefault` <a id="structFRHAPI__PricePoint_1a37585831994f33ec8e9aa074a60c4a53"></a>

void SetStrictFlagToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true.




### `GetCapFlag` <a id="structFRHAPI__PricePoint_1a60cd0290f02c4c6801a661d603202ce5"></a>

bool & GetCapFlag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CapFlag_Optional, regardless of it having been set.




### `GetCapFlag` <a id="structFRHAPI__PricePoint_1af17ae8addf4551342a66af028c78affc"></a>

const bool & GetCapFlag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CapFlag_Optional, regardless of it having been set.




### `GetCapFlag` <a id="structFRHAPI__PricePoint_1a8d3a9a05ebdcab3149c2c7a13aead2d6"></a>

const bool & GetCapFlag(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCapFlag` <a id="structFRHAPI__PricePoint_1a9b06b65ad6c1755693fa636ce1d284e8"></a>

bool GetCapFlag(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false.




### `GetCapFlagOrNull` <a id="structFRHAPI__PricePoint_1a8c45c05e16aaef95edd569bc37faf9aa"></a>

bool * GetCapFlagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.




### `GetCapFlagOrNull` <a id="structFRHAPI__PricePoint_1ab4b2952dc94ccfa5e254839853f44359"></a>

const bool * GetCapFlagOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr.




### `SetCapFlag` <a id="structFRHAPI__PricePoint_1aa40575e5b53a7836ef5eb7a681c7922f"></a>

void SetCapFlag(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true.




### `ClearCapFlag` <a id="structFRHAPI__PricePoint_1a974656326e5143fe9115c662312af6d7"></a>

void ClearCapFlag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false.




### `IsCapFlagDefaultValue` <a id="structFRHAPI__PricePoint_1ac7bdd29493de65739abf520023380ced"></a>

bool IsCapFlagDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CapFlag_Optional is set and matches the default value.




### `SetCapFlagToDefault` <a id="structFRHAPI__PricePoint_1a42d6cf3c6484b5845a21ce641736db09"></a>

void SetCapFlagToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true.




### `GetCurrentBreakpoints` <a id="structFRHAPI__PricePoint_1a848c359f3d7c4b072466075aef42b3d1"></a>

TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & GetCurrentBreakpoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.




### `GetCurrentBreakpoints` <a id="structFRHAPI__PricePoint_1a71fc88b22034cc46afc5b0394afbd6c3"></a>

const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & GetCurrentBreakpoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CurrentBreakpoints_Optional, regardless of it having been set.




### `GetCurrentBreakpoints` <a id="structFRHAPI__PricePoint_1aa507aed8b9d9dad2fe9742e2d083f696"></a>

const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & GetCurrentBreakpoints(const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|DefaultValue|

#### Description

Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCurrentBreakpoints` <a id="structFRHAPI__PricePoint_1a3f8ef083f62a90d53c3a50f422c867ec"></a>

bool GetCurrentBreakpoints(TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|OutValue|

#### Description

Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false.




### `GetCurrentBreakpointsOrNull` <a id="structFRHAPI__PricePoint_1ab93a1ed21742ddf23f32ecb14ef3c7a3"></a>

TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > * GetCurrentBreakpointsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.




### `GetCurrentBreakpointsOrNull` <a id="structFRHAPI__PricePoint_1adb1b1d631ac4107f8fcf418724a03984"></a>

const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > * GetCurrentBreakpointsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr.




### `SetCurrentBreakpoints` <a id="structFRHAPI__PricePoint_1a5e9800eac3957d9480b076df76e3fe4e"></a>

void SetCurrentBreakpoints(TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) >|NewValue|

#### Description

Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true.




### `ClearCurrentBreakpoints` <a id="structFRHAPI__PricePoint_1a918866dc41492d878259a899f8555ca6"></a>

void ClearCurrentBreakpoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false.




### `GetPreSaleBreakpoints` <a id="structFRHAPI__PricePoint_1a6860dab065ced79067e4921708f1b174"></a>

TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & GetPreSaleBreakpoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.




### `GetPreSaleBreakpoints` <a id="structFRHAPI__PricePoint_1a68751303abe6bf5625bc052b82e275f3"></a>

const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & GetPreSaleBreakpoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set.




### `GetPreSaleBreakpoints` <a id="structFRHAPI__PricePoint_1aa00675cc156a0732d52ab329b99dcd2a"></a>

const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & GetPreSaleBreakpoints(const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|DefaultValue|

#### Description

Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPreSaleBreakpoints` <a id="structFRHAPI__PricePoint_1a9d06b5909e8e46bf9d44cc54e200e3d2"></a>

bool GetPreSaleBreakpoints(TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|OutValue|

#### Description

Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false.




### `GetPreSaleBreakpointsOrNull` <a id="structFRHAPI__PricePoint_1ac41d42060cdbfd89b631e7f01b7705f4"></a>

TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > * GetPreSaleBreakpointsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.




### `GetPreSaleBreakpointsOrNull` <a id="structFRHAPI__PricePoint_1a03d8ca2cabbaf46bc1a4e8b3e64147db"></a>

const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > * GetPreSaleBreakpointsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr.




### `SetPreSaleBreakpoints` <a id="structFRHAPI__PricePoint_1a067a1fd09e6479e5c70b612f636aeda7"></a>

void SetPreSaleBreakpoints(TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) >|NewValue|

#### Description

Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true.




### `ClearPreSaleBreakpoints` <a id="structFRHAPI__PricePoint_1ab7efa847171a85308ae120274282d731"></a>

void ClearPreSaleBreakpoints()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__PricePoint_1ab9251bec3945f3ab38ab65fa3318a467"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__PricePoint_1addb2de5e905ef9f0e96f34aa1ee5ef1b"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__PricePoint_1a70751ecc7adac244ddc77c3fd6707f1f"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__PricePoint_1a803317f9e1c420480ab226c8190bc7f7"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__PricePoint_1ac181662aef5589ee23f93e3a23a2277b"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__PricePoint_1a6ad98a61ef7d51cdc961f24a61e72728"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__PricePoint_1a34e8844b89b54dc4abbf34a12fcb043f"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__PricePoint_1a086da727daacd12623284ffb073e7392"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





