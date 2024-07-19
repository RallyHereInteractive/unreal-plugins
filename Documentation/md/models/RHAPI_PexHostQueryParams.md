# group `RHAPI_PexHostQueryParams` <a id="group__RHAPI__PexHostQueryParams"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PexHostQueryParams`](#structFRHAPI__PexHostQueryParams) | 

## struct `FRHAPI_PexHostQueryParams` <a id="structFRHAPI__PexHostQueryParams"></a>

```
struct FRHAPI_PexHostQueryParams
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`ToDatetime_Optional`](#structFRHAPI__PexHostQueryParams_1a5ee068af2f09f6faca0082a2e5c56a46) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`ToDatetime_IsSet`](#structFRHAPI__PexHostQueryParams_1a9a9853703b33b982d49b6b0a2469facf) | true if ToDatetime_Optional has been set to a value
`public FDateTime `[`FromDatetime_Optional`](#structFRHAPI__PexHostQueryParams_1a32a2077d9b803f1e57d646e535aba3a1) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`FromDatetime_IsSet`](#structFRHAPI__PexHostQueryParams_1af40ad23ae896c922f9d76f06eecc5e3e) | true if FromDatetime_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__PexHostQueryParams_1af272c7ffd2ac4c480cd0aaa8af869e54) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PexHostQueryParams_1a1e9764d6d76e8661e8f4c8ecbf157f2d) | true if MatchId_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__PexHostQueryParams_1a32d1664ffb663adf176be34919ec6057) | 
`public bool `[`RegionId_IsSet`](#structFRHAPI__PexHostQueryParams_1ae80f0c38a5c600fa2f8bc42202bba619) | true if RegionId_Optional has been set to a value
`public FString `[`ServerId_Optional`](#structFRHAPI__PexHostQueryParams_1a09ba25cc2d6db453dfe6cc09f47038e9) | 
`public bool `[`ServerId_IsSet`](#structFRHAPI__PexHostQueryParams_1abacc12a27cfee00ab05687b7ec51fda6) | true if ServerId_Optional has been set to a value
`public FString `[`AllocationId_Optional`](#structFRHAPI__PexHostQueryParams_1aee619956e8359069f1ae75673963bdf2) | 
`public bool `[`AllocationId_IsSet`](#structFRHAPI__PexHostQueryParams_1a7631734ef70cada513641f63f5b5e5c7) | true if AllocationId_Optional has been set to a value
`public FString `[`DatacenterProvider_Optional`](#structFRHAPI__PexHostQueryParams_1a58e146e2c29ecf3d87e8ae90904c3abb) | 
`public bool `[`DatacenterProvider_IsSet`](#structFRHAPI__PexHostQueryParams_1a10eff0681ad32262c12cf790a0161c30) | true if DatacenterProvider_Optional has been set to a value
`public FString `[`DatacenterLocation_Optional`](#structFRHAPI__PexHostQueryParams_1a2090339b552d69891ccfead62cad8bdb) | 
`public bool `[`DatacenterLocation_IsSet`](#structFRHAPI__PexHostQueryParams_1adadc77880eb8b0d057fbdf8957901284) | true if DatacenterLocation_Optional has been set to a value
`public FString `[`AddressIp_Optional`](#structFRHAPI__PexHostQueryParams_1a6c3a087c161574693cb1d68aeb1680f7) | 
`public bool `[`AddressIp_IsSet`](#structFRHAPI__PexHostQueryParams_1ab83313fc80b021262a9b4fc4245ab21f) | true if AddressIp_Optional has been set to a value
`public FString `[`MapName_Optional`](#structFRHAPI__PexHostQueryParams_1ada9dfa34c5909184a703acc2040440f4) | 
`public bool `[`MapName_IsSet`](#structFRHAPI__PexHostQueryParams_1adfbaaeda82496b98f24a585756cdb55b) | true if MapName_Optional has been set to a value
`public FString `[`GameMode_Optional`](#structFRHAPI__PexHostQueryParams_1aa86de83bb37259177fbc2616f791be7c) | 
`public bool `[`GameMode_IsSet`](#structFRHAPI__PexHostQueryParams_1a1ac340bd61aee31f803c396ba8d34e4c) | true if GameMode_Optional has been set to a value
`public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__PexHostQueryParams_1ab557cd94a5f267dc68f13f4e489d4315) | 
`public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__PexHostQueryParams_1a3245104cffbd844a3912ea9d0a07710e) | true if MatchmakingProfileId_Optional has been set to a value
`public int32 `[`ExpectedTeamSize_Optional`](#structFRHAPI__PexHostQueryParams_1ab88fe7bd04015ed640b0390512beaa8c) | 
`public bool `[`ExpectedTeamSize_IsSet`](#structFRHAPI__PexHostQueryParams_1a84c97ca36f1e99cc8a11a517f2645594) | true if ExpectedTeamSize_Optional has been set to a value
`public int32 `[`ExpectedPlayerCount_Optional`](#structFRHAPI__PexHostQueryParams_1a05c8da0f446b4eac2137fc6cdbb066ca) | 
`public bool `[`ExpectedPlayerCount_IsSet`](#structFRHAPI__PexHostQueryParams_1a4d337972b76f0ec0d49c2901562ca449) | true if ExpectedPlayerCount_Optional has been set to a value
`public FString `[`HostPlayerUuid_Optional`](#structFRHAPI__PexHostQueryParams_1a3b41f171c697c15bca671bbdc054c190) | 
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__PexHostQueryParams_1a9d76f14df550ebef6c7672ef0c68614e) | true if HostPlayerUuid_Optional has been set to a value
`public FString `[`OwningPlayerUuid_Optional`](#structFRHAPI__PexHostQueryParams_1a588cdebf4663fc5feb713d12dd725257) | 
`public bool `[`OwningPlayerUuid_IsSet`](#structFRHAPI__PexHostQueryParams_1a5522ef8cb1297905a16ad8282cb26ce8) | true if OwningPlayerUuid_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__PexHostQueryParams_1a073b142ec71bf6afdb156beb3e251a6c) | 
`public bool `[`Version_IsSet`](#structFRHAPI__PexHostQueryParams_1ac6ebf49d34df90ca0cd106d98a9bea3f) | true if Version_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PexHostQueryParams_1ad3b02e493d1fff77b30bc7924652a4ac)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PexHostQueryParams_1af0f66b4ac99ee72a70e1ab842f5dc08d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetToDatetime`](#structFRHAPI__PexHostQueryParams_1a6844cca54749155a12df94eefec7336d)`()` | Gets the value of ToDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetToDatetime`](#structFRHAPI__PexHostQueryParams_1a5e8937a6cc16b9183a6c0f759e8d8cad)`() const` | Gets the value of ToDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetToDatetime`](#structFRHAPI__PexHostQueryParams_1a26e8de8409b2cca879ed1cedf6daf5f9)`(const FDateTime & DefaultValue) const` | Gets the value of ToDatetime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetToDatetime`](#structFRHAPI__PexHostQueryParams_1acd109aec6db8da56455c2b094f805ba4)`(FDateTime & OutValue) const` | Fills OutValue with the value of ToDatetime_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetToDatetimeOrNull`](#structFRHAPI__PexHostQueryParams_1a6e64b2f9c2f93fb3ef9833ff02037145)`()` | Returns a pointer to ToDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetToDatetimeOrNull`](#structFRHAPI__PexHostQueryParams_1af6cfe35531e65a5c8c235bde851fc3df)`() const` | Returns a pointer to ToDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetToDatetime`](#structFRHAPI__PexHostQueryParams_1ab7d82582921c2f525adb78afc1a2042c)`(const FDateTime & NewValue)` | Sets the value of ToDatetime_Optional and also sets ToDatetime_IsSet to true.
`public inline void `[`SetToDatetime`](#structFRHAPI__PexHostQueryParams_1abf371bf9530b8860e2df032c985d7eaa)`(FDateTime && NewValue)` | Sets the value of ToDatetime_Optional and also sets ToDatetime_IsSet to true using move semantics.
`public inline void `[`ClearToDatetime`](#structFRHAPI__PexHostQueryParams_1a2722d916c38685d610ba6383754ea620)`()` | Clears the value of ToDatetime_Optional and sets ToDatetime_IsSet to false.
`public inline FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexHostQueryParams_1a202d803f09c7261a12cf2f83ae6eaf95)`()` | Gets the value of FromDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexHostQueryParams_1a57b94134f871a0511d8fb58260dec6ba)`() const` | Gets the value of FromDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexHostQueryParams_1a6767441331a9615b5b2087cd9ceadef3)`(const FDateTime & DefaultValue) const` | Gets the value of FromDatetime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFromDatetime`](#structFRHAPI__PexHostQueryParams_1adb91b54d1d8ac90d3e95a67f254cbe8b)`(FDateTime & OutValue) const` | Fills OutValue with the value of FromDatetime_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetFromDatetimeOrNull`](#structFRHAPI__PexHostQueryParams_1aee3a2eb99ca8ff5d593347a86a5b86ca)`()` | Returns a pointer to FromDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetFromDatetimeOrNull`](#structFRHAPI__PexHostQueryParams_1a6fa35164ca7c4757814a81f64cf3f764)`() const` | Returns a pointer to FromDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFromDatetime`](#structFRHAPI__PexHostQueryParams_1adc6d2132523d16221b7a43934a10f8b8)`(const FDateTime & NewValue)` | Sets the value of FromDatetime_Optional and also sets FromDatetime_IsSet to true.
`public inline void `[`SetFromDatetime`](#structFRHAPI__PexHostQueryParams_1ab7400b870420672b44a9a58273d45cce)`(FDateTime && NewValue)` | Sets the value of FromDatetime_Optional and also sets FromDatetime_IsSet to true using move semantics.
`public inline void `[`ClearFromDatetime`](#structFRHAPI__PexHostQueryParams_1aaeb44c412d42aad37c204d83fb9f4e2b)`()` | Clears the value of FromDatetime_Optional and sets FromDatetime_IsSet to false.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PexHostQueryParams_1a34801dbf67ed4fe88f7c7686ce57ef26)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PexHostQueryParams_1a8e8204e5730514d200a51f2cf3a22a32)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PexHostQueryParams_1a60084b59adb4900f78ae17697c689baf)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PexHostQueryParams_1a245967a80edd25fa9d5d0fea2e1afc10)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PexHostQueryParams_1a8c2986ad96b2e6c8d9967bc90631dbe8)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PexHostQueryParams_1ad63b70fe1e1f94fd169879b53721fa0e)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PexHostQueryParams_1a715192dc4ec246fe89661a8a0d8e03a8)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PexHostQueryParams_1a49e3a8584332d6a8faa0577cc7ee1b64)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PexHostQueryParams_1af781f8e9c41b9b4c2ad9038c0790d101)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FString & `[`GetRegionId`](#structFRHAPI__PexHostQueryParams_1a3007d5743e7a8ff7de0b056d2d83beae)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__PexHostQueryParams_1ab99a46ec1991fc736299ac6fa6b40896)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__PexHostQueryParams_1abb5b50e0acf864cefa86a2c69832feae)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__PexHostQueryParams_1aed5679917e411f8d881de460e5cc140a)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__PexHostQueryParams_1a184748e66a2ffa72ab0b19b8ac11e913)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__PexHostQueryParams_1a8be3cb779b99cac4a699fff4e0ea5414)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__PexHostQueryParams_1a0fa04874978e577f9fb8238d66dc35ed)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__PexHostQueryParams_1a018a0cedb307cca5336336a65912edb3)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__PexHostQueryParams_1a611f165a138247bcab492cd78d427539)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FString & `[`GetServerId`](#structFRHAPI__PexHostQueryParams_1a568d428ddeadabca1226190c29464b9b)`()` | Gets the value of ServerId_Optional, regardless of it having been set.
`public inline const FString & `[`GetServerId`](#structFRHAPI__PexHostQueryParams_1ad167601d685701e0d86a178cf69d5b52)`() const` | Gets the value of ServerId_Optional, regardless of it having been set.
`public inline const FString & `[`GetServerId`](#structFRHAPI__PexHostQueryParams_1a005411f6cb50c669483c209e4283b399)`(const FString & DefaultValue) const` | Gets the value of ServerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetServerId`](#structFRHAPI__PexHostQueryParams_1abb0df336a5cf0f374738d0fde63363c3)`(FString & OutValue) const` | Fills OutValue with the value of ServerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetServerIdOrNull`](#structFRHAPI__PexHostQueryParams_1a221ca758a20977e193096fcbcac380b6)`()` | Returns a pointer to ServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetServerIdOrNull`](#structFRHAPI__PexHostQueryParams_1ab1aecb81451ce0fb5acb20987be7b441)`() const` | Returns a pointer to ServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetServerId`](#structFRHAPI__PexHostQueryParams_1ad26b05170fbf9a71f77c2d1a59d5c0fa)`(const FString & NewValue)` | Sets the value of ServerId_Optional and also sets ServerId_IsSet to true.
`public inline void `[`SetServerId`](#structFRHAPI__PexHostQueryParams_1a4f9d009b952357f821d73ad943a0ae15)`(FString && NewValue)` | Sets the value of ServerId_Optional and also sets ServerId_IsSet to true using move semantics.
`public inline void `[`ClearServerId`](#structFRHAPI__PexHostQueryParams_1a8390357ca9f3965864359a3c86f47f1d)`()` | Clears the value of ServerId_Optional and sets ServerId_IsSet to false.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__PexHostQueryParams_1af96d70f326eb8d0178d30e39148a20b7)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__PexHostQueryParams_1a0aa6785bb2c6dc2d69ef88a3172e9de5)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__PexHostQueryParams_1ae22e2bf5732e992986d6a631f1753bca)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__PexHostQueryParams_1a405999ef180f31926eca52c946ff2ab3)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__PexHostQueryParams_1a87e8a54a4628d800db0214fc95b92392)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__PexHostQueryParams_1a2fdf92e4a1edef584f290433ed6e1751)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__PexHostQueryParams_1a925a543c7c273df6738e484cd9b545a9)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`SetAllocationId`](#structFRHAPI__PexHostQueryParams_1a4ea9c98abb9f404fd7b3704c13e90942)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__PexHostQueryParams_1a8f12d35c6b17acc970b213dbbe226af9)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline FString & `[`GetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1af553e205869ff25f65ee3a4d7baed7c3)`()` | Gets the value of DatacenterProvider_Optional, regardless of it having been set.
`public inline const FString & `[`GetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1aa25d9aed84c4cd7902a36b0ea152b63d)`() const` | Gets the value of DatacenterProvider_Optional, regardless of it having been set.
`public inline const FString & `[`GetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1a35b5673057c50d4c71c0f54923422353)`(const FString & DefaultValue) const` | Gets the value of DatacenterProvider_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1aa8a3675ba438c97beed380c83cc41721)`(FString & OutValue) const` | Fills OutValue with the value of DatacenterProvider_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDatacenterProviderOrNull`](#structFRHAPI__PexHostQueryParams_1ab4ac415f86107993df03fb8096483af2)`()` | Returns a pointer to DatacenterProvider_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDatacenterProviderOrNull`](#structFRHAPI__PexHostQueryParams_1ae8090d85f93a17681a9bd1cfc335fac0)`() const` | Returns a pointer to DatacenterProvider_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1a6480da3660e68addece6ee3202baeeea)`(const FString & NewValue)` | Sets the value of DatacenterProvider_Optional and also sets DatacenterProvider_IsSet to true.
`public inline void `[`SetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1a8e14c7f3a337177c17fda908c288c814)`(FString && NewValue)` | Sets the value of DatacenterProvider_Optional and also sets DatacenterProvider_IsSet to true using move semantics.
`public inline void `[`ClearDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1ab457345be8ca34c8d313bb27d9cc320b)`()` | Clears the value of DatacenterProvider_Optional and sets DatacenterProvider_IsSet to false.
`public inline FString & `[`GetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a0472d4fff2e45b30cf460855498c9e87)`()` | Gets the value of DatacenterLocation_Optional, regardless of it having been set.
`public inline const FString & `[`GetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a1c281355f2a283b00747df733eb6aecf)`() const` | Gets the value of DatacenterLocation_Optional, regardless of it having been set.
`public inline const FString & `[`GetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1af9a5e75103bc5abe5c63b08964c07965)`(const FString & DefaultValue) const` | Gets the value of DatacenterLocation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a6be0fbb6212f5abe649e1dac481d7c4a)`(FString & OutValue) const` | Fills OutValue with the value of DatacenterLocation_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDatacenterLocationOrNull`](#structFRHAPI__PexHostQueryParams_1a7d0403e72b43cc62b1f7adfcc8c46202)`()` | Returns a pointer to DatacenterLocation_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDatacenterLocationOrNull`](#structFRHAPI__PexHostQueryParams_1affbc91f7d276ed2a28ab1dc5bb754dd1)`() const` | Returns a pointer to DatacenterLocation_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a548a14c6bef1681d8e3fd04fc864a7a4)`(const FString & NewValue)` | Sets the value of DatacenterLocation_Optional and also sets DatacenterLocation_IsSet to true.
`public inline void `[`SetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a4a663e9113a22e59fd238f7f2cd13870)`(FString && NewValue)` | Sets the value of DatacenterLocation_Optional and also sets DatacenterLocation_IsSet to true using move semantics.
`public inline void `[`ClearDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a3eadd63549baf4bad717e3dfda9329d1)`()` | Clears the value of DatacenterLocation_Optional and sets DatacenterLocation_IsSet to false.
`public inline FString & `[`GetAddressIp`](#structFRHAPI__PexHostQueryParams_1ae686d37563d67eccfe9cb59d3f8185fd)`()` | Gets the value of AddressIp_Optional, regardless of it having been set.
`public inline const FString & `[`GetAddressIp`](#structFRHAPI__PexHostQueryParams_1a85c1333f681bd2d5c176ddd53fdd4174)`() const` | Gets the value of AddressIp_Optional, regardless of it having been set.
`public inline const FString & `[`GetAddressIp`](#structFRHAPI__PexHostQueryParams_1a79407c1b8d92dec47c875d61053e6136)`(const FString & DefaultValue) const` | Gets the value of AddressIp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAddressIp`](#structFRHAPI__PexHostQueryParams_1a71450508f50a7b96d0f12c729ce449b2)`(FString & OutValue) const` | Fills OutValue with the value of AddressIp_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAddressIpOrNull`](#structFRHAPI__PexHostQueryParams_1a8dcae0743e60d63ac50f58694e96b3ff)`()` | Returns a pointer to AddressIp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAddressIpOrNull`](#structFRHAPI__PexHostQueryParams_1a6c6852786c69db192d3b9215920b3247)`() const` | Returns a pointer to AddressIp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAddressIp`](#structFRHAPI__PexHostQueryParams_1ad7636cf463c64cd7ee91b0071fd74037)`(const FString & NewValue)` | Sets the value of AddressIp_Optional and also sets AddressIp_IsSet to true.
`public inline void `[`SetAddressIp`](#structFRHAPI__PexHostQueryParams_1a20a1d1006d5a81801ff494617bd3f03a)`(FString && NewValue)` | Sets the value of AddressIp_Optional and also sets AddressIp_IsSet to true using move semantics.
`public inline void `[`ClearAddressIp`](#structFRHAPI__PexHostQueryParams_1a9bbe3dfc924005c0a1e3a404d91c80d9)`()` | Clears the value of AddressIp_Optional and sets AddressIp_IsSet to false.
`public inline FString & `[`GetMapName`](#structFRHAPI__PexHostQueryParams_1a601d5440c5cb1400f5c87ec1b23446b3)`()` | Gets the value of MapName_Optional, regardless of it having been set.
`public inline const FString & `[`GetMapName`](#structFRHAPI__PexHostQueryParams_1a2deaf85733a4a9113a6eda2f9ce6fd50)`() const` | Gets the value of MapName_Optional, regardless of it having been set.
`public inline const FString & `[`GetMapName`](#structFRHAPI__PexHostQueryParams_1a7438da100e60be03e568b5a358f75485)`(const FString & DefaultValue) const` | Gets the value of MapName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapName`](#structFRHAPI__PexHostQueryParams_1aec38fc74409d17220b4b9d9fe80c2994)`(FString & OutValue) const` | Fills OutValue with the value of MapName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapNameOrNull`](#structFRHAPI__PexHostQueryParams_1a5cd5665faaa5b4ee02274eb90fa26fc3)`()` | Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapNameOrNull`](#structFRHAPI__PexHostQueryParams_1aabf9e4b2ac21a00c63259b88bb473d5a)`() const` | Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapName`](#structFRHAPI__PexHostQueryParams_1a0ee0ca25f05f0dc847776ef64cb194d9)`(const FString & NewValue)` | Sets the value of MapName_Optional and also sets MapName_IsSet to true.
`public inline void `[`SetMapName`](#structFRHAPI__PexHostQueryParams_1ad03940a4b44d69e14a6094124992056a)`(FString && NewValue)` | Sets the value of MapName_Optional and also sets MapName_IsSet to true using move semantics.
`public inline void `[`ClearMapName`](#structFRHAPI__PexHostQueryParams_1a0cb02b785668a8758d0d69efcd96163a)`()` | Clears the value of MapName_Optional and sets MapName_IsSet to false.
`public inline FString & `[`GetGameMode`](#structFRHAPI__PexHostQueryParams_1a8bb4fb912fca2b9959f13f99714ab6fb)`()` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__PexHostQueryParams_1af49795d839adb07114c96255babbb63e)`() const` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__PexHostQueryParams_1a1d89c9391ea954a71747bdc7b041afd7)`(const FString & DefaultValue) const` | Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetGameMode`](#structFRHAPI__PexHostQueryParams_1aba8a43ab172b641000400acc3bdb247b)`(FString & OutValue) const` | Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__PexHostQueryParams_1ae7f1a406da08686f4b1f40691897bdb7)`()` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__PexHostQueryParams_1a302dc853f63700f88bbe8dc3ec77982e)`() const` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetGameMode`](#structFRHAPI__PexHostQueryParams_1a44fab77f58ac750787504aa6494edcbc)`(const FString & NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.
`public inline void `[`SetGameMode`](#structFRHAPI__PexHostQueryParams_1ac38aae591fae07e60dd277f04a5ccd4e)`(FString && NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.
`public inline void `[`ClearGameMode`](#structFRHAPI__PexHostQueryParams_1a6d5360baf3ca9486b6c2b393647a80c8)`()` | Clears the value of GameMode_Optional and sets GameMode_IsSet to false.
`public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1acb25d0bbea06a447d1c7fc1edecebf50)`()` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1a7bf2f9ea89c7f164f2130396c6b10032)`() const` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1ad06e6893a5702268d995aa1e7023d296)`(const FString & DefaultValue) const` | Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1a4e1e2b173e98556a5bea75e432053adb)`(FString & OutValue) const` | Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__PexHostQueryParams_1a54cd9174919d3e65c0e5dfe1a539b9ac)`()` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__PexHostQueryParams_1a5bf84682e2439832028330317abc015b)`() const` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1a02891687920684366b6ffed9743eb193)`(const FString & NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.
`public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1a552de2dfbf805cbd0805d52f5a0a7199)`(FString && NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1aaab0d4e1ad415da3a012acdf4af15b36)`()` | Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.
`public inline int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a580898232943818c2ac2e46f860da647)`()` | Gets the value of ExpectedTeamSize_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a211c61961d3008abfe70890e60e19e50)`() const` | Gets the value of ExpectedTeamSize_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a67e14704e6c3b3f82232a9d9a72e4be5)`(const int32 & DefaultValue) const` | Gets the value of ExpectedTeamSize_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a9e506a03da223d8b4a8eace1b3f57432)`(int32 & OutValue) const` | Fills OutValue with the value of ExpectedTeamSize_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetExpectedTeamSizeOrNull`](#structFRHAPI__PexHostQueryParams_1aa86a4832bf5ef0ebe968dcb6653ebb23)`()` | Returns a pointer to ExpectedTeamSize_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetExpectedTeamSizeOrNull`](#structFRHAPI__PexHostQueryParams_1a363acf610b683c077ec19945838ffd5d)`() const` | Returns a pointer to ExpectedTeamSize_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a5bfbbd69129ae00aa4a5b994df82ee33)`(const int32 & NewValue)` | Sets the value of ExpectedTeamSize_Optional and also sets ExpectedTeamSize_IsSet to true.
`public inline void `[`SetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a830b8b106de6d12b550ae0090b3aca39)`(int32 && NewValue)` | Sets the value of ExpectedTeamSize_Optional and also sets ExpectedTeamSize_IsSet to true using move semantics.
`public inline void `[`ClearExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a1e9f49c4d4dd9aa7c226ff0555ff973e)`()` | Clears the value of ExpectedTeamSize_Optional and sets ExpectedTeamSize_IsSet to false.
`public inline bool `[`IsExpectedTeamSizeDefaultValue`](#structFRHAPI__PexHostQueryParams_1ab0950afcf970a071e69dbcba67af45e5)`() const` | Returns true if ExpectedTeamSize_Optional is set and matches the default value.
`public inline void `[`SetExpectedTeamSizeToDefault`](#structFRHAPI__PexHostQueryParams_1adfb119817f01a00cc93a411d420c43fd)`()` | Sets the value of ExpectedTeamSize_Optional to its default and also sets ExpectedTeamSize_IsSet to true.
`public inline int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a43062b3b348eeff2b3cddd2dd6ba144b)`()` | Gets the value of ExpectedPlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a4e3f4a6f922704581951a447d65afebc)`() const` | Gets the value of ExpectedPlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a8f086a256535a3f9044968a8e5e92529)`(const int32 & DefaultValue) const` | Gets the value of ExpectedPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a9d629645b79595e8589233b5b03855ff)`(int32 & OutValue) const` | Fills OutValue with the value of ExpectedPlayerCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetExpectedPlayerCountOrNull`](#structFRHAPI__PexHostQueryParams_1adeea9ebf7c5a3a595da55aa256449ebe)`()` | Returns a pointer to ExpectedPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetExpectedPlayerCountOrNull`](#structFRHAPI__PexHostQueryParams_1aa3db3d4d2f8245b74da14c2672f4e812)`() const` | Returns a pointer to ExpectedPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1aa677662d8a0ec2510a3f367293abd037)`(const int32 & NewValue)` | Sets the value of ExpectedPlayerCount_Optional and also sets ExpectedPlayerCount_IsSet to true.
`public inline void `[`SetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1aa4487450d0f14a5c928833d44ccdf44e)`(int32 && NewValue)` | Sets the value of ExpectedPlayerCount_Optional and also sets ExpectedPlayerCount_IsSet to true using move semantics.
`public inline void `[`ClearExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a0356bb61f837754e4c1c418ef1c49fe4)`()` | Clears the value of ExpectedPlayerCount_Optional and sets ExpectedPlayerCount_IsSet to false.
`public inline bool `[`IsExpectedPlayerCountDefaultValue`](#structFRHAPI__PexHostQueryParams_1a66979ee64409d6b1ce043bccdab4101f)`() const` | Returns true if ExpectedPlayerCount_Optional is set and matches the default value.
`public inline void `[`SetExpectedPlayerCountToDefault`](#structFRHAPI__PexHostQueryParams_1a867055e9f0ac6daeed7660afa9b772b9)`()` | Sets the value of ExpectedPlayerCount_Optional to its default and also sets ExpectedPlayerCount_IsSet to true.
`public inline FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a4d50576875b82ca5dceeb6945690e691)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a5eec638949cb7fc74d4127c1bd2b139d)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a9997a37c10a9824e06328b96462a244b)`(const FString & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1ac6425e1fdf4f78fe51acbab50d1a8528)`(FString & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__PexHostQueryParams_1a42f6a39318ba6eb1eee4a25bf7a6707c)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__PexHostQueryParams_1aee54da26a4fc0e9c6c2d1f05a8f6c5eb)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a7e6613dc1dd559eac20ddc29f145a410)`(const FString & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1ada6ba5999c8c4572f6975a70de43c76a)`(FString && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a4bec0dd9c03889a0e0f9048faab8de56)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a6ef3cbde5e9da6453a391681a23ed766)`()` | Gets the value of OwningPlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a922299a3ff571a0552bcdfead42c6282)`() const` | Gets the value of OwningPlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a590805d5a5388c121d370148bdd9df88)`(const FString & DefaultValue) const` | Gets the value of OwningPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1aa3d197cadbb5dc08042430cf66be7d25)`(FString & OutValue) const` | Fills OutValue with the value of OwningPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOwningPlayerUuidOrNull`](#structFRHAPI__PexHostQueryParams_1a17b276d84a01663a5d871fdbd5520115)`()` | Returns a pointer to OwningPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOwningPlayerUuidOrNull`](#structFRHAPI__PexHostQueryParams_1ae158af5033a743a60f100c8b4c6f2c32)`() const` | Returns a pointer to OwningPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a55198e1197d03adced445682bedd42a2)`(const FString & NewValue)` | Sets the value of OwningPlayerUuid_Optional and also sets OwningPlayerUuid_IsSet to true.
`public inline void `[`SetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1aea1ba3b1419c0762c2d575d3d44f3abf)`(FString && NewValue)` | Sets the value of OwningPlayerUuid_Optional and also sets OwningPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a1c2ac741a2a4b458db2d4a80fda1890d)`()` | Clears the value of OwningPlayerUuid_Optional and sets OwningPlayerUuid_IsSet to false.
`public inline FString & `[`GetVersion`](#structFRHAPI__PexHostQueryParams_1a46cac291599ac4339964abeebfe93f41)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__PexHostQueryParams_1a341c2d2e84b6e4ff0f7b0e444aed1492)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__PexHostQueryParams_1ad066de70f33838aa63213cb899e75729)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__PexHostQueryParams_1aaae5dbe82969417c7c47354c8e3db164)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__PexHostQueryParams_1a5a9446cb502911767b4be8425c1737cb)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__PexHostQueryParams_1a646b4068820261796a2c36115ef4e30a)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__PexHostQueryParams_1a1fb3dcb5afbdcc29b16c341ae969c600)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`SetVersion`](#structFRHAPI__PexHostQueryParams_1afc85a5b62ff38d5f189b2eb18e099300)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__PexHostQueryParams_1aa33bd4cd85661652edf7a77052ed47d5)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.

### Members

#### `public FDateTime `[`ToDatetime_Optional`](#structFRHAPI__PexHostQueryParams_1a5ee068af2f09f6faca0082a2e5c56a46) <a id="structFRHAPI__PexHostQueryParams_1a5ee068af2f09f6faca0082a2e5c56a46"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`ToDatetime_IsSet`](#structFRHAPI__PexHostQueryParams_1a9a9853703b33b982d49b6b0a2469facf) <a id="structFRHAPI__PexHostQueryParams_1a9a9853703b33b982d49b6b0a2469facf"></a>

true if ToDatetime_Optional has been set to a value

#### `public FDateTime `[`FromDatetime_Optional`](#structFRHAPI__PexHostQueryParams_1a32a2077d9b803f1e57d646e535aba3a1) <a id="structFRHAPI__PexHostQueryParams_1a32a2077d9b803f1e57d646e535aba3a1"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`FromDatetime_IsSet`](#structFRHAPI__PexHostQueryParams_1af40ad23ae896c922f9d76f06eecc5e3e) <a id="structFRHAPI__PexHostQueryParams_1af40ad23ae896c922f9d76f06eecc5e3e"></a>

true if FromDatetime_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PexHostQueryParams_1af272c7ffd2ac4c480cd0aaa8af869e54) <a id="structFRHAPI__PexHostQueryParams_1af272c7ffd2ac4c480cd0aaa8af869e54"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PexHostQueryParams_1a1e9764d6d76e8661e8f4c8ecbf157f2d) <a id="structFRHAPI__PexHostQueryParams_1a1e9764d6d76e8661e8f4c8ecbf157f2d"></a>

true if MatchId_Optional has been set to a value

#### `public FString `[`RegionId_Optional`](#structFRHAPI__PexHostQueryParams_1a32d1664ffb663adf176be34919ec6057) <a id="structFRHAPI__PexHostQueryParams_1a32d1664ffb663adf176be34919ec6057"></a>

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__PexHostQueryParams_1ae80f0c38a5c600fa2f8bc42202bba619) <a id="structFRHAPI__PexHostQueryParams_1ae80f0c38a5c600fa2f8bc42202bba619"></a>

true if RegionId_Optional has been set to a value

#### `public FString `[`ServerId_Optional`](#structFRHAPI__PexHostQueryParams_1a09ba25cc2d6db453dfe6cc09f47038e9) <a id="structFRHAPI__PexHostQueryParams_1a09ba25cc2d6db453dfe6cc09f47038e9"></a>

#### `public bool `[`ServerId_IsSet`](#structFRHAPI__PexHostQueryParams_1abacc12a27cfee00ab05687b7ec51fda6) <a id="structFRHAPI__PexHostQueryParams_1abacc12a27cfee00ab05687b7ec51fda6"></a>

true if ServerId_Optional has been set to a value

#### `public FString `[`AllocationId_Optional`](#structFRHAPI__PexHostQueryParams_1aee619956e8359069f1ae75673963bdf2) <a id="structFRHAPI__PexHostQueryParams_1aee619956e8359069f1ae75673963bdf2"></a>

#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__PexHostQueryParams_1a7631734ef70cada513641f63f5b5e5c7) <a id="structFRHAPI__PexHostQueryParams_1a7631734ef70cada513641f63f5b5e5c7"></a>

true if AllocationId_Optional has been set to a value

#### `public FString `[`DatacenterProvider_Optional`](#structFRHAPI__PexHostQueryParams_1a58e146e2c29ecf3d87e8ae90904c3abb) <a id="structFRHAPI__PexHostQueryParams_1a58e146e2c29ecf3d87e8ae90904c3abb"></a>

#### `public bool `[`DatacenterProvider_IsSet`](#structFRHAPI__PexHostQueryParams_1a10eff0681ad32262c12cf790a0161c30) <a id="structFRHAPI__PexHostQueryParams_1a10eff0681ad32262c12cf790a0161c30"></a>

true if DatacenterProvider_Optional has been set to a value

#### `public FString `[`DatacenterLocation_Optional`](#structFRHAPI__PexHostQueryParams_1a2090339b552d69891ccfead62cad8bdb) <a id="structFRHAPI__PexHostQueryParams_1a2090339b552d69891ccfead62cad8bdb"></a>

#### `public bool `[`DatacenterLocation_IsSet`](#structFRHAPI__PexHostQueryParams_1adadc77880eb8b0d057fbdf8957901284) <a id="structFRHAPI__PexHostQueryParams_1adadc77880eb8b0d057fbdf8957901284"></a>

true if DatacenterLocation_Optional has been set to a value

#### `public FString `[`AddressIp_Optional`](#structFRHAPI__PexHostQueryParams_1a6c3a087c161574693cb1d68aeb1680f7) <a id="structFRHAPI__PexHostQueryParams_1a6c3a087c161574693cb1d68aeb1680f7"></a>

#### `public bool `[`AddressIp_IsSet`](#structFRHAPI__PexHostQueryParams_1ab83313fc80b021262a9b4fc4245ab21f) <a id="structFRHAPI__PexHostQueryParams_1ab83313fc80b021262a9b4fc4245ab21f"></a>

true if AddressIp_Optional has been set to a value

#### `public FString `[`MapName_Optional`](#structFRHAPI__PexHostQueryParams_1ada9dfa34c5909184a703acc2040440f4) <a id="structFRHAPI__PexHostQueryParams_1ada9dfa34c5909184a703acc2040440f4"></a>

#### `public bool `[`MapName_IsSet`](#structFRHAPI__PexHostQueryParams_1adfbaaeda82496b98f24a585756cdb55b) <a id="structFRHAPI__PexHostQueryParams_1adfbaaeda82496b98f24a585756cdb55b"></a>

true if MapName_Optional has been set to a value

#### `public FString `[`GameMode_Optional`](#structFRHAPI__PexHostQueryParams_1aa86de83bb37259177fbc2616f791be7c) <a id="structFRHAPI__PexHostQueryParams_1aa86de83bb37259177fbc2616f791be7c"></a>

#### `public bool `[`GameMode_IsSet`](#structFRHAPI__PexHostQueryParams_1a1ac340bd61aee31f803c396ba8d34e4c) <a id="structFRHAPI__PexHostQueryParams_1a1ac340bd61aee31f803c396ba8d34e4c"></a>

true if GameMode_Optional has been set to a value

#### `public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__PexHostQueryParams_1ab557cd94a5f267dc68f13f4e489d4315) <a id="structFRHAPI__PexHostQueryParams_1ab557cd94a5f267dc68f13f4e489d4315"></a>

#### `public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__PexHostQueryParams_1a3245104cffbd844a3912ea9d0a07710e) <a id="structFRHAPI__PexHostQueryParams_1a3245104cffbd844a3912ea9d0a07710e"></a>

true if MatchmakingProfileId_Optional has been set to a value

#### `public int32 `[`ExpectedTeamSize_Optional`](#structFRHAPI__PexHostQueryParams_1ab88fe7bd04015ed640b0390512beaa8c) <a id="structFRHAPI__PexHostQueryParams_1ab88fe7bd04015ed640b0390512beaa8c"></a>

#### `public bool `[`ExpectedTeamSize_IsSet`](#structFRHAPI__PexHostQueryParams_1a84c97ca36f1e99cc8a11a517f2645594) <a id="structFRHAPI__PexHostQueryParams_1a84c97ca36f1e99cc8a11a517f2645594"></a>

true if ExpectedTeamSize_Optional has been set to a value

#### `public int32 `[`ExpectedPlayerCount_Optional`](#structFRHAPI__PexHostQueryParams_1a05c8da0f446b4eac2137fc6cdbb066ca) <a id="structFRHAPI__PexHostQueryParams_1a05c8da0f446b4eac2137fc6cdbb066ca"></a>

#### `public bool `[`ExpectedPlayerCount_IsSet`](#structFRHAPI__PexHostQueryParams_1a4d337972b76f0ec0d49c2901562ca449) <a id="structFRHAPI__PexHostQueryParams_1a4d337972b76f0ec0d49c2901562ca449"></a>

true if ExpectedPlayerCount_Optional has been set to a value

#### `public FString `[`HostPlayerUuid_Optional`](#structFRHAPI__PexHostQueryParams_1a3b41f171c697c15bca671bbdc054c190) <a id="structFRHAPI__PexHostQueryParams_1a3b41f171c697c15bca671bbdc054c190"></a>

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__PexHostQueryParams_1a9d76f14df550ebef6c7672ef0c68614e) <a id="structFRHAPI__PexHostQueryParams_1a9d76f14df550ebef6c7672ef0c68614e"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public FString `[`OwningPlayerUuid_Optional`](#structFRHAPI__PexHostQueryParams_1a588cdebf4663fc5feb713d12dd725257) <a id="structFRHAPI__PexHostQueryParams_1a588cdebf4663fc5feb713d12dd725257"></a>

#### `public bool `[`OwningPlayerUuid_IsSet`](#structFRHAPI__PexHostQueryParams_1a5522ef8cb1297905a16ad8282cb26ce8) <a id="structFRHAPI__PexHostQueryParams_1a5522ef8cb1297905a16ad8282cb26ce8"></a>

true if OwningPlayerUuid_Optional has been set to a value

#### `public FString `[`Version_Optional`](#structFRHAPI__PexHostQueryParams_1a073b142ec71bf6afdb156beb3e251a6c) <a id="structFRHAPI__PexHostQueryParams_1a073b142ec71bf6afdb156beb3e251a6c"></a>

#### `public bool `[`Version_IsSet`](#structFRHAPI__PexHostQueryParams_1ac6ebf49d34df90ca0cd106d98a9bea3f) <a id="structFRHAPI__PexHostQueryParams_1ac6ebf49d34df90ca0cd106d98a9bea3f"></a>

true if Version_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PexHostQueryParams_1ad3b02e493d1fff77b30bc7924652a4ac)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PexHostQueryParams_1ad3b02e493d1fff77b30bc7924652a4ac"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PexHostQueryParams_1af0f66b4ac99ee72a70e1ab842f5dc08d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PexHostQueryParams_1af0f66b4ac99ee72a70e1ab842f5dc08d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetToDatetime`](#structFRHAPI__PexHostQueryParams_1a6844cca54749155a12df94eefec7336d)`()` <a id="structFRHAPI__PexHostQueryParams_1a6844cca54749155a12df94eefec7336d"></a>

Gets the value of ToDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetToDatetime`](#structFRHAPI__PexHostQueryParams_1a5e8937a6cc16b9183a6c0f759e8d8cad)`() const` <a id="structFRHAPI__PexHostQueryParams_1a5e8937a6cc16b9183a6c0f759e8d8cad"></a>

Gets the value of ToDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetToDatetime`](#structFRHAPI__PexHostQueryParams_1a26e8de8409b2cca879ed1cedf6daf5f9)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a26e8de8409b2cca879ed1cedf6daf5f9"></a>

Gets the value of ToDatetime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetToDatetime`](#structFRHAPI__PexHostQueryParams_1acd109aec6db8da56455c2b094f805ba4)`(FDateTime & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1acd109aec6db8da56455c2b094f805ba4"></a>

Fills OutValue with the value of ToDatetime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetToDatetimeOrNull`](#structFRHAPI__PexHostQueryParams_1a6e64b2f9c2f93fb3ef9833ff02037145)`()` <a id="structFRHAPI__PexHostQueryParams_1a6e64b2f9c2f93fb3ef9833ff02037145"></a>

Returns a pointer to ToDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetToDatetimeOrNull`](#structFRHAPI__PexHostQueryParams_1af6cfe35531e65a5c8c235bde851fc3df)`() const` <a id="structFRHAPI__PexHostQueryParams_1af6cfe35531e65a5c8c235bde851fc3df"></a>

Returns a pointer to ToDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetToDatetime`](#structFRHAPI__PexHostQueryParams_1ab7d82582921c2f525adb78afc1a2042c)`(const FDateTime & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1ab7d82582921c2f525adb78afc1a2042c"></a>

Sets the value of ToDatetime_Optional and also sets ToDatetime_IsSet to true.

#### `public inline void `[`SetToDatetime`](#structFRHAPI__PexHostQueryParams_1abf371bf9530b8860e2df032c985d7eaa)`(FDateTime && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1abf371bf9530b8860e2df032c985d7eaa"></a>

Sets the value of ToDatetime_Optional and also sets ToDatetime_IsSet to true using move semantics.

#### `public inline void `[`ClearToDatetime`](#structFRHAPI__PexHostQueryParams_1a2722d916c38685d610ba6383754ea620)`()` <a id="structFRHAPI__PexHostQueryParams_1a2722d916c38685d610ba6383754ea620"></a>

Clears the value of ToDatetime_Optional and sets ToDatetime_IsSet to false.

#### `public inline FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexHostQueryParams_1a202d803f09c7261a12cf2f83ae6eaf95)`()` <a id="structFRHAPI__PexHostQueryParams_1a202d803f09c7261a12cf2f83ae6eaf95"></a>

Gets the value of FromDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexHostQueryParams_1a57b94134f871a0511d8fb58260dec6ba)`() const` <a id="structFRHAPI__PexHostQueryParams_1a57b94134f871a0511d8fb58260dec6ba"></a>

Gets the value of FromDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexHostQueryParams_1a6767441331a9615b5b2087cd9ceadef3)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a6767441331a9615b5b2087cd9ceadef3"></a>

Gets the value of FromDatetime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFromDatetime`](#structFRHAPI__PexHostQueryParams_1adb91b54d1d8ac90d3e95a67f254cbe8b)`(FDateTime & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1adb91b54d1d8ac90d3e95a67f254cbe8b"></a>

Fills OutValue with the value of FromDatetime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetFromDatetimeOrNull`](#structFRHAPI__PexHostQueryParams_1aee3a2eb99ca8ff5d593347a86a5b86ca)`()` <a id="structFRHAPI__PexHostQueryParams_1aee3a2eb99ca8ff5d593347a86a5b86ca"></a>

Returns a pointer to FromDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetFromDatetimeOrNull`](#structFRHAPI__PexHostQueryParams_1a6fa35164ca7c4757814a81f64cf3f764)`() const` <a id="structFRHAPI__PexHostQueryParams_1a6fa35164ca7c4757814a81f64cf3f764"></a>

Returns a pointer to FromDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFromDatetime`](#structFRHAPI__PexHostQueryParams_1adc6d2132523d16221b7a43934a10f8b8)`(const FDateTime & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1adc6d2132523d16221b7a43934a10f8b8"></a>

Sets the value of FromDatetime_Optional and also sets FromDatetime_IsSet to true.

#### `public inline void `[`SetFromDatetime`](#structFRHAPI__PexHostQueryParams_1ab7400b870420672b44a9a58273d45cce)`(FDateTime && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1ab7400b870420672b44a9a58273d45cce"></a>

Sets the value of FromDatetime_Optional and also sets FromDatetime_IsSet to true using move semantics.

#### `public inline void `[`ClearFromDatetime`](#structFRHAPI__PexHostQueryParams_1aaeb44c412d42aad37c204d83fb9f4e2b)`()` <a id="structFRHAPI__PexHostQueryParams_1aaeb44c412d42aad37c204d83fb9f4e2b"></a>

Clears the value of FromDatetime_Optional and sets FromDatetime_IsSet to false.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PexHostQueryParams_1a34801dbf67ed4fe88f7c7686ce57ef26)`()` <a id="structFRHAPI__PexHostQueryParams_1a34801dbf67ed4fe88f7c7686ce57ef26"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PexHostQueryParams_1a8e8204e5730514d200a51f2cf3a22a32)`() const` <a id="structFRHAPI__PexHostQueryParams_1a8e8204e5730514d200a51f2cf3a22a32"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PexHostQueryParams_1a60084b59adb4900f78ae17697c689baf)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a60084b59adb4900f78ae17697c689baf"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PexHostQueryParams_1a245967a80edd25fa9d5d0fea2e1afc10)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1a245967a80edd25fa9d5d0fea2e1afc10"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PexHostQueryParams_1a8c2986ad96b2e6c8d9967bc90631dbe8)`()` <a id="structFRHAPI__PexHostQueryParams_1a8c2986ad96b2e6c8d9967bc90631dbe8"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PexHostQueryParams_1ad63b70fe1e1f94fd169879b53721fa0e)`() const` <a id="structFRHAPI__PexHostQueryParams_1ad63b70fe1e1f94fd169879b53721fa0e"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PexHostQueryParams_1a715192dc4ec246fe89661a8a0d8e03a8)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a715192dc4ec246fe89661a8a0d8e03a8"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PexHostQueryParams_1a49e3a8584332d6a8faa0577cc7ee1b64)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a49e3a8584332d6a8faa0577cc7ee1b64"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PexHostQueryParams_1af781f8e9c41b9b4c2ad9038c0790d101)`()` <a id="structFRHAPI__PexHostQueryParams_1af781f8e9c41b9b4c2ad9038c0790d101"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__PexHostQueryParams_1a3007d5743e7a8ff7de0b056d2d83beae)`()` <a id="structFRHAPI__PexHostQueryParams_1a3007d5743e7a8ff7de0b056d2d83beae"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__PexHostQueryParams_1ab99a46ec1991fc736299ac6fa6b40896)`() const` <a id="structFRHAPI__PexHostQueryParams_1ab99a46ec1991fc736299ac6fa6b40896"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__PexHostQueryParams_1abb5b50e0acf864cefa86a2c69832feae)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1abb5b50e0acf864cefa86a2c69832feae"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__PexHostQueryParams_1aed5679917e411f8d881de460e5cc140a)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1aed5679917e411f8d881de460e5cc140a"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__PexHostQueryParams_1a184748e66a2ffa72ab0b19b8ac11e913)`()` <a id="structFRHAPI__PexHostQueryParams_1a184748e66a2ffa72ab0b19b8ac11e913"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__PexHostQueryParams_1a8be3cb779b99cac4a699fff4e0ea5414)`() const` <a id="structFRHAPI__PexHostQueryParams_1a8be3cb779b99cac4a699fff4e0ea5414"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__PexHostQueryParams_1a0fa04874978e577f9fb8238d66dc35ed)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a0fa04874978e577f9fb8238d66dc35ed"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__PexHostQueryParams_1a018a0cedb307cca5336336a65912edb3)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a018a0cedb307cca5336336a65912edb3"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__PexHostQueryParams_1a611f165a138247bcab492cd78d427539)`()` <a id="structFRHAPI__PexHostQueryParams_1a611f165a138247bcab492cd78d427539"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline FString & `[`GetServerId`](#structFRHAPI__PexHostQueryParams_1a568d428ddeadabca1226190c29464b9b)`()` <a id="structFRHAPI__PexHostQueryParams_1a568d428ddeadabca1226190c29464b9b"></a>

Gets the value of ServerId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetServerId`](#structFRHAPI__PexHostQueryParams_1ad167601d685701e0d86a178cf69d5b52)`() const` <a id="structFRHAPI__PexHostQueryParams_1ad167601d685701e0d86a178cf69d5b52"></a>

Gets the value of ServerId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetServerId`](#structFRHAPI__PexHostQueryParams_1a005411f6cb50c669483c209e4283b399)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a005411f6cb50c669483c209e4283b399"></a>

Gets the value of ServerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetServerId`](#structFRHAPI__PexHostQueryParams_1abb0df336a5cf0f374738d0fde63363c3)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1abb0df336a5cf0f374738d0fde63363c3"></a>

Fills OutValue with the value of ServerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetServerIdOrNull`](#structFRHAPI__PexHostQueryParams_1a221ca758a20977e193096fcbcac380b6)`()` <a id="structFRHAPI__PexHostQueryParams_1a221ca758a20977e193096fcbcac380b6"></a>

Returns a pointer to ServerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetServerIdOrNull`](#structFRHAPI__PexHostQueryParams_1ab1aecb81451ce0fb5acb20987be7b441)`() const` <a id="structFRHAPI__PexHostQueryParams_1ab1aecb81451ce0fb5acb20987be7b441"></a>

Returns a pointer to ServerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetServerId`](#structFRHAPI__PexHostQueryParams_1ad26b05170fbf9a71f77c2d1a59d5c0fa)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1ad26b05170fbf9a71f77c2d1a59d5c0fa"></a>

Sets the value of ServerId_Optional and also sets ServerId_IsSet to true.

#### `public inline void `[`SetServerId`](#structFRHAPI__PexHostQueryParams_1a4f9d009b952357f821d73ad943a0ae15)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a4f9d009b952357f821d73ad943a0ae15"></a>

Sets the value of ServerId_Optional and also sets ServerId_IsSet to true using move semantics.

#### `public inline void `[`ClearServerId`](#structFRHAPI__PexHostQueryParams_1a8390357ca9f3965864359a3c86f47f1d)`()` <a id="structFRHAPI__PexHostQueryParams_1a8390357ca9f3965864359a3c86f47f1d"></a>

Clears the value of ServerId_Optional and sets ServerId_IsSet to false.

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__PexHostQueryParams_1af96d70f326eb8d0178d30e39148a20b7)`()` <a id="structFRHAPI__PexHostQueryParams_1af96d70f326eb8d0178d30e39148a20b7"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__PexHostQueryParams_1a0aa6785bb2c6dc2d69ef88a3172e9de5)`() const` <a id="structFRHAPI__PexHostQueryParams_1a0aa6785bb2c6dc2d69ef88a3172e9de5"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__PexHostQueryParams_1ae22e2bf5732e992986d6a631f1753bca)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1ae22e2bf5732e992986d6a631f1753bca"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocationId`](#structFRHAPI__PexHostQueryParams_1a405999ef180f31926eca52c946ff2ab3)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1a405999ef180f31926eca52c946ff2ab3"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__PexHostQueryParams_1a87e8a54a4628d800db0214fc95b92392)`()` <a id="structFRHAPI__PexHostQueryParams_1a87e8a54a4628d800db0214fc95b92392"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__PexHostQueryParams_1a2fdf92e4a1edef584f290433ed6e1751)`() const` <a id="structFRHAPI__PexHostQueryParams_1a2fdf92e4a1edef584f290433ed6e1751"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__PexHostQueryParams_1a925a543c7c273df6738e484cd9b545a9)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a925a543c7c273df6738e484cd9b545a9"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__PexHostQueryParams_1a4ea9c98abb9f404fd7b3704c13e90942)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a4ea9c98abb9f404fd7b3704c13e90942"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__PexHostQueryParams_1a8f12d35c6b17acc970b213dbbe226af9)`()` <a id="structFRHAPI__PexHostQueryParams_1a8f12d35c6b17acc970b213dbbe226af9"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline FString & `[`GetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1af553e205869ff25f65ee3a4d7baed7c3)`()` <a id="structFRHAPI__PexHostQueryParams_1af553e205869ff25f65ee3a4d7baed7c3"></a>

Gets the value of DatacenterProvider_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1aa25d9aed84c4cd7902a36b0ea152b63d)`() const` <a id="structFRHAPI__PexHostQueryParams_1aa25d9aed84c4cd7902a36b0ea152b63d"></a>

Gets the value of DatacenterProvider_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1a35b5673057c50d4c71c0f54923422353)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a35b5673057c50d4c71c0f54923422353"></a>

Gets the value of DatacenterProvider_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1aa8a3675ba438c97beed380c83cc41721)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1aa8a3675ba438c97beed380c83cc41721"></a>

Fills OutValue with the value of DatacenterProvider_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDatacenterProviderOrNull`](#structFRHAPI__PexHostQueryParams_1ab4ac415f86107993df03fb8096483af2)`()` <a id="structFRHAPI__PexHostQueryParams_1ab4ac415f86107993df03fb8096483af2"></a>

Returns a pointer to DatacenterProvider_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDatacenterProviderOrNull`](#structFRHAPI__PexHostQueryParams_1ae8090d85f93a17681a9bd1cfc335fac0)`() const` <a id="structFRHAPI__PexHostQueryParams_1ae8090d85f93a17681a9bd1cfc335fac0"></a>

Returns a pointer to DatacenterProvider_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1a6480da3660e68addece6ee3202baeeea)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a6480da3660e68addece6ee3202baeeea"></a>

Sets the value of DatacenterProvider_Optional and also sets DatacenterProvider_IsSet to true.

#### `public inline void `[`SetDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1a8e14c7f3a337177c17fda908c288c814)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a8e14c7f3a337177c17fda908c288c814"></a>

Sets the value of DatacenterProvider_Optional and also sets DatacenterProvider_IsSet to true using move semantics.

#### `public inline void `[`ClearDatacenterProvider`](#structFRHAPI__PexHostQueryParams_1ab457345be8ca34c8d313bb27d9cc320b)`()` <a id="structFRHAPI__PexHostQueryParams_1ab457345be8ca34c8d313bb27d9cc320b"></a>

Clears the value of DatacenterProvider_Optional and sets DatacenterProvider_IsSet to false.

#### `public inline FString & `[`GetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a0472d4fff2e45b30cf460855498c9e87)`()` <a id="structFRHAPI__PexHostQueryParams_1a0472d4fff2e45b30cf460855498c9e87"></a>

Gets the value of DatacenterLocation_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a1c281355f2a283b00747df733eb6aecf)`() const` <a id="structFRHAPI__PexHostQueryParams_1a1c281355f2a283b00747df733eb6aecf"></a>

Gets the value of DatacenterLocation_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1af9a5e75103bc5abe5c63b08964c07965)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1af9a5e75103bc5abe5c63b08964c07965"></a>

Gets the value of DatacenterLocation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a6be0fbb6212f5abe649e1dac481d7c4a)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1a6be0fbb6212f5abe649e1dac481d7c4a"></a>

Fills OutValue with the value of DatacenterLocation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDatacenterLocationOrNull`](#structFRHAPI__PexHostQueryParams_1a7d0403e72b43cc62b1f7adfcc8c46202)`()` <a id="structFRHAPI__PexHostQueryParams_1a7d0403e72b43cc62b1f7adfcc8c46202"></a>

Returns a pointer to DatacenterLocation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDatacenterLocationOrNull`](#structFRHAPI__PexHostQueryParams_1affbc91f7d276ed2a28ab1dc5bb754dd1)`() const` <a id="structFRHAPI__PexHostQueryParams_1affbc91f7d276ed2a28ab1dc5bb754dd1"></a>

Returns a pointer to DatacenterLocation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a548a14c6bef1681d8e3fd04fc864a7a4)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a548a14c6bef1681d8e3fd04fc864a7a4"></a>

Sets the value of DatacenterLocation_Optional and also sets DatacenterLocation_IsSet to true.

#### `public inline void `[`SetDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a4a663e9113a22e59fd238f7f2cd13870)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a4a663e9113a22e59fd238f7f2cd13870"></a>

Sets the value of DatacenterLocation_Optional and also sets DatacenterLocation_IsSet to true using move semantics.

#### `public inline void `[`ClearDatacenterLocation`](#structFRHAPI__PexHostQueryParams_1a3eadd63549baf4bad717e3dfda9329d1)`()` <a id="structFRHAPI__PexHostQueryParams_1a3eadd63549baf4bad717e3dfda9329d1"></a>

Clears the value of DatacenterLocation_Optional and sets DatacenterLocation_IsSet to false.

#### `public inline FString & `[`GetAddressIp`](#structFRHAPI__PexHostQueryParams_1ae686d37563d67eccfe9cb59d3f8185fd)`()` <a id="structFRHAPI__PexHostQueryParams_1ae686d37563d67eccfe9cb59d3f8185fd"></a>

Gets the value of AddressIp_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAddressIp`](#structFRHAPI__PexHostQueryParams_1a85c1333f681bd2d5c176ddd53fdd4174)`() const` <a id="structFRHAPI__PexHostQueryParams_1a85c1333f681bd2d5c176ddd53fdd4174"></a>

Gets the value of AddressIp_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAddressIp`](#structFRHAPI__PexHostQueryParams_1a79407c1b8d92dec47c875d61053e6136)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a79407c1b8d92dec47c875d61053e6136"></a>

Gets the value of AddressIp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAddressIp`](#structFRHAPI__PexHostQueryParams_1a71450508f50a7b96d0f12c729ce449b2)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1a71450508f50a7b96d0f12c729ce449b2"></a>

Fills OutValue with the value of AddressIp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAddressIpOrNull`](#structFRHAPI__PexHostQueryParams_1a8dcae0743e60d63ac50f58694e96b3ff)`()` <a id="structFRHAPI__PexHostQueryParams_1a8dcae0743e60d63ac50f58694e96b3ff"></a>

Returns a pointer to AddressIp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAddressIpOrNull`](#structFRHAPI__PexHostQueryParams_1a6c6852786c69db192d3b9215920b3247)`() const` <a id="structFRHAPI__PexHostQueryParams_1a6c6852786c69db192d3b9215920b3247"></a>

Returns a pointer to AddressIp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAddressIp`](#structFRHAPI__PexHostQueryParams_1ad7636cf463c64cd7ee91b0071fd74037)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1ad7636cf463c64cd7ee91b0071fd74037"></a>

Sets the value of AddressIp_Optional and also sets AddressIp_IsSet to true.

#### `public inline void `[`SetAddressIp`](#structFRHAPI__PexHostQueryParams_1a20a1d1006d5a81801ff494617bd3f03a)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a20a1d1006d5a81801ff494617bd3f03a"></a>

Sets the value of AddressIp_Optional and also sets AddressIp_IsSet to true using move semantics.

#### `public inline void `[`ClearAddressIp`](#structFRHAPI__PexHostQueryParams_1a9bbe3dfc924005c0a1e3a404d91c80d9)`()` <a id="structFRHAPI__PexHostQueryParams_1a9bbe3dfc924005c0a1e3a404d91c80d9"></a>

Clears the value of AddressIp_Optional and sets AddressIp_IsSet to false.

#### `public inline FString & `[`GetMapName`](#structFRHAPI__PexHostQueryParams_1a601d5440c5cb1400f5c87ec1b23446b3)`()` <a id="structFRHAPI__PexHostQueryParams_1a601d5440c5cb1400f5c87ec1b23446b3"></a>

Gets the value of MapName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMapName`](#structFRHAPI__PexHostQueryParams_1a2deaf85733a4a9113a6eda2f9ce6fd50)`() const` <a id="structFRHAPI__PexHostQueryParams_1a2deaf85733a4a9113a6eda2f9ce6fd50"></a>

Gets the value of MapName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMapName`](#structFRHAPI__PexHostQueryParams_1a7438da100e60be03e568b5a358f75485)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a7438da100e60be03e568b5a358f75485"></a>

Gets the value of MapName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMapName`](#structFRHAPI__PexHostQueryParams_1aec38fc74409d17220b4b9d9fe80c2994)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1aec38fc74409d17220b4b9d9fe80c2994"></a>

Fills OutValue with the value of MapName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMapNameOrNull`](#structFRHAPI__PexHostQueryParams_1a5cd5665faaa5b4ee02274eb90fa26fc3)`()` <a id="structFRHAPI__PexHostQueryParams_1a5cd5665faaa5b4ee02274eb90fa26fc3"></a>

Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMapNameOrNull`](#structFRHAPI__PexHostQueryParams_1aabf9e4b2ac21a00c63259b88bb473d5a)`() const` <a id="structFRHAPI__PexHostQueryParams_1aabf9e4b2ac21a00c63259b88bb473d5a"></a>

Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMapName`](#structFRHAPI__PexHostQueryParams_1a0ee0ca25f05f0dc847776ef64cb194d9)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a0ee0ca25f05f0dc847776ef64cb194d9"></a>

Sets the value of MapName_Optional and also sets MapName_IsSet to true.

#### `public inline void `[`SetMapName`](#structFRHAPI__PexHostQueryParams_1ad03940a4b44d69e14a6094124992056a)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1ad03940a4b44d69e14a6094124992056a"></a>

Sets the value of MapName_Optional and also sets MapName_IsSet to true using move semantics.

#### `public inline void `[`ClearMapName`](#structFRHAPI__PexHostQueryParams_1a0cb02b785668a8758d0d69efcd96163a)`()` <a id="structFRHAPI__PexHostQueryParams_1a0cb02b785668a8758d0d69efcd96163a"></a>

Clears the value of MapName_Optional and sets MapName_IsSet to false.

#### `public inline FString & `[`GetGameMode`](#structFRHAPI__PexHostQueryParams_1a8bb4fb912fca2b9959f13f99714ab6fb)`()` <a id="structFRHAPI__PexHostQueryParams_1a8bb4fb912fca2b9959f13f99714ab6fb"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__PexHostQueryParams_1af49795d839adb07114c96255babbb63e)`() const` <a id="structFRHAPI__PexHostQueryParams_1af49795d839adb07114c96255babbb63e"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__PexHostQueryParams_1a1d89c9391ea954a71747bdc7b041afd7)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a1d89c9391ea954a71747bdc7b041afd7"></a>

Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetGameMode`](#structFRHAPI__PexHostQueryParams_1aba8a43ab172b641000400acc3bdb247b)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1aba8a43ab172b641000400acc3bdb247b"></a>

Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__PexHostQueryParams_1ae7f1a406da08686f4b1f40691897bdb7)`()` <a id="structFRHAPI__PexHostQueryParams_1ae7f1a406da08686f4b1f40691897bdb7"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__PexHostQueryParams_1a302dc853f63700f88bbe8dc3ec77982e)`() const` <a id="structFRHAPI__PexHostQueryParams_1a302dc853f63700f88bbe8dc3ec77982e"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetGameMode`](#structFRHAPI__PexHostQueryParams_1a44fab77f58ac750787504aa6494edcbc)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a44fab77f58ac750787504aa6494edcbc"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.

#### `public inline void `[`SetGameMode`](#structFRHAPI__PexHostQueryParams_1ac38aae591fae07e60dd277f04a5ccd4e)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1ac38aae591fae07e60dd277f04a5ccd4e"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.

#### `public inline void `[`ClearGameMode`](#structFRHAPI__PexHostQueryParams_1a6d5360baf3ca9486b6c2b393647a80c8)`()` <a id="structFRHAPI__PexHostQueryParams_1a6d5360baf3ca9486b6c2b393647a80c8"></a>

Clears the value of GameMode_Optional and sets GameMode_IsSet to false.

#### `public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1acb25d0bbea06a447d1c7fc1edecebf50)`()` <a id="structFRHAPI__PexHostQueryParams_1acb25d0bbea06a447d1c7fc1edecebf50"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1a7bf2f9ea89c7f164f2130396c6b10032)`() const` <a id="structFRHAPI__PexHostQueryParams_1a7bf2f9ea89c7f164f2130396c6b10032"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1ad06e6893a5702268d995aa1e7023d296)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1ad06e6893a5702268d995aa1e7023d296"></a>

Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1a4e1e2b173e98556a5bea75e432053adb)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1a4e1e2b173e98556a5bea75e432053adb"></a>

Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__PexHostQueryParams_1a54cd9174919d3e65c0e5dfe1a539b9ac)`()` <a id="structFRHAPI__PexHostQueryParams_1a54cd9174919d3e65c0e5dfe1a539b9ac"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__PexHostQueryParams_1a5bf84682e2439832028330317abc015b)`() const` <a id="structFRHAPI__PexHostQueryParams_1a5bf84682e2439832028330317abc015b"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1a02891687920684366b6ffed9743eb193)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a02891687920684366b6ffed9743eb193"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.

#### `public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1a552de2dfbf805cbd0805d52f5a0a7199)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a552de2dfbf805cbd0805d52f5a0a7199"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__PexHostQueryParams_1aaab0d4e1ad415da3a012acdf4af15b36)`()` <a id="structFRHAPI__PexHostQueryParams_1aaab0d4e1ad415da3a012acdf4af15b36"></a>

Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.

#### `public inline int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a580898232943818c2ac2e46f860da647)`()` <a id="structFRHAPI__PexHostQueryParams_1a580898232943818c2ac2e46f860da647"></a>

Gets the value of ExpectedTeamSize_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a211c61961d3008abfe70890e60e19e50)`() const` <a id="structFRHAPI__PexHostQueryParams_1a211c61961d3008abfe70890e60e19e50"></a>

Gets the value of ExpectedTeamSize_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a67e14704e6c3b3f82232a9d9a72e4be5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a67e14704e6c3b3f82232a9d9a72e4be5"></a>

Gets the value of ExpectedTeamSize_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a9e506a03da223d8b4a8eace1b3f57432)`(int32 & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1a9e506a03da223d8b4a8eace1b3f57432"></a>

Fills OutValue with the value of ExpectedTeamSize_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetExpectedTeamSizeOrNull`](#structFRHAPI__PexHostQueryParams_1aa86a4832bf5ef0ebe968dcb6653ebb23)`()` <a id="structFRHAPI__PexHostQueryParams_1aa86a4832bf5ef0ebe968dcb6653ebb23"></a>

Returns a pointer to ExpectedTeamSize_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetExpectedTeamSizeOrNull`](#structFRHAPI__PexHostQueryParams_1a363acf610b683c077ec19945838ffd5d)`() const` <a id="structFRHAPI__PexHostQueryParams_1a363acf610b683c077ec19945838ffd5d"></a>

Returns a pointer to ExpectedTeamSize_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a5bfbbd69129ae00aa4a5b994df82ee33)`(const int32 & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a5bfbbd69129ae00aa4a5b994df82ee33"></a>

Sets the value of ExpectedTeamSize_Optional and also sets ExpectedTeamSize_IsSet to true.

#### `public inline void `[`SetExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a830b8b106de6d12b550ae0090b3aca39)`(int32 && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a830b8b106de6d12b550ae0090b3aca39"></a>

Sets the value of ExpectedTeamSize_Optional and also sets ExpectedTeamSize_IsSet to true using move semantics.

#### `public inline void `[`ClearExpectedTeamSize`](#structFRHAPI__PexHostQueryParams_1a1e9f49c4d4dd9aa7c226ff0555ff973e)`()` <a id="structFRHAPI__PexHostQueryParams_1a1e9f49c4d4dd9aa7c226ff0555ff973e"></a>

Clears the value of ExpectedTeamSize_Optional and sets ExpectedTeamSize_IsSet to false.

#### `public inline bool `[`IsExpectedTeamSizeDefaultValue`](#structFRHAPI__PexHostQueryParams_1ab0950afcf970a071e69dbcba67af45e5)`() const` <a id="structFRHAPI__PexHostQueryParams_1ab0950afcf970a071e69dbcba67af45e5"></a>

Returns true if ExpectedTeamSize_Optional is set and matches the default value.

#### `public inline void `[`SetExpectedTeamSizeToDefault`](#structFRHAPI__PexHostQueryParams_1adfb119817f01a00cc93a411d420c43fd)`()` <a id="structFRHAPI__PexHostQueryParams_1adfb119817f01a00cc93a411d420c43fd"></a>

Sets the value of ExpectedTeamSize_Optional to its default and also sets ExpectedTeamSize_IsSet to true.

#### `public inline int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a43062b3b348eeff2b3cddd2dd6ba144b)`()` <a id="structFRHAPI__PexHostQueryParams_1a43062b3b348eeff2b3cddd2dd6ba144b"></a>

Gets the value of ExpectedPlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a4e3f4a6f922704581951a447d65afebc)`() const` <a id="structFRHAPI__PexHostQueryParams_1a4e3f4a6f922704581951a447d65afebc"></a>

Gets the value of ExpectedPlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a8f086a256535a3f9044968a8e5e92529)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a8f086a256535a3f9044968a8e5e92529"></a>

Gets the value of ExpectedPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a9d629645b79595e8589233b5b03855ff)`(int32 & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1a9d629645b79595e8589233b5b03855ff"></a>

Fills OutValue with the value of ExpectedPlayerCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetExpectedPlayerCountOrNull`](#structFRHAPI__PexHostQueryParams_1adeea9ebf7c5a3a595da55aa256449ebe)`()` <a id="structFRHAPI__PexHostQueryParams_1adeea9ebf7c5a3a595da55aa256449ebe"></a>

Returns a pointer to ExpectedPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetExpectedPlayerCountOrNull`](#structFRHAPI__PexHostQueryParams_1aa3db3d4d2f8245b74da14c2672f4e812)`() const` <a id="structFRHAPI__PexHostQueryParams_1aa3db3d4d2f8245b74da14c2672f4e812"></a>

Returns a pointer to ExpectedPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1aa677662d8a0ec2510a3f367293abd037)`(const int32 & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1aa677662d8a0ec2510a3f367293abd037"></a>

Sets the value of ExpectedPlayerCount_Optional and also sets ExpectedPlayerCount_IsSet to true.

#### `public inline void `[`SetExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1aa4487450d0f14a5c928833d44ccdf44e)`(int32 && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1aa4487450d0f14a5c928833d44ccdf44e"></a>

Sets the value of ExpectedPlayerCount_Optional and also sets ExpectedPlayerCount_IsSet to true using move semantics.

#### `public inline void `[`ClearExpectedPlayerCount`](#structFRHAPI__PexHostQueryParams_1a0356bb61f837754e4c1c418ef1c49fe4)`()` <a id="structFRHAPI__PexHostQueryParams_1a0356bb61f837754e4c1c418ef1c49fe4"></a>

Clears the value of ExpectedPlayerCount_Optional and sets ExpectedPlayerCount_IsSet to false.

#### `public inline bool `[`IsExpectedPlayerCountDefaultValue`](#structFRHAPI__PexHostQueryParams_1a66979ee64409d6b1ce043bccdab4101f)`() const` <a id="structFRHAPI__PexHostQueryParams_1a66979ee64409d6b1ce043bccdab4101f"></a>

Returns true if ExpectedPlayerCount_Optional is set and matches the default value.

#### `public inline void `[`SetExpectedPlayerCountToDefault`](#structFRHAPI__PexHostQueryParams_1a867055e9f0ac6daeed7660afa9b772b9)`()` <a id="structFRHAPI__PexHostQueryParams_1a867055e9f0ac6daeed7660afa9b772b9"></a>

Sets the value of ExpectedPlayerCount_Optional to its default and also sets ExpectedPlayerCount_IsSet to true.

#### `public inline FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a4d50576875b82ca5dceeb6945690e691)`()` <a id="structFRHAPI__PexHostQueryParams_1a4d50576875b82ca5dceeb6945690e691"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a5eec638949cb7fc74d4127c1bd2b139d)`() const` <a id="structFRHAPI__PexHostQueryParams_1a5eec638949cb7fc74d4127c1bd2b139d"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a9997a37c10a9824e06328b96462a244b)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a9997a37c10a9824e06328b96462a244b"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1ac6425e1fdf4f78fe51acbab50d1a8528)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1ac6425e1fdf4f78fe51acbab50d1a8528"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__PexHostQueryParams_1a42f6a39318ba6eb1eee4a25bf7a6707c)`()` <a id="structFRHAPI__PexHostQueryParams_1a42f6a39318ba6eb1eee4a25bf7a6707c"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__PexHostQueryParams_1aee54da26a4fc0e9c6c2d1f05a8f6c5eb)`() const` <a id="structFRHAPI__PexHostQueryParams_1aee54da26a4fc0e9c6c2d1f05a8f6c5eb"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a7e6613dc1dd559eac20ddc29f145a410)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a7e6613dc1dd559eac20ddc29f145a410"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1ada6ba5999c8c4572f6975a70de43c76a)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1ada6ba5999c8c4572f6975a70de43c76a"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a4bec0dd9c03889a0e0f9048faab8de56)`()` <a id="structFRHAPI__PexHostQueryParams_1a4bec0dd9c03889a0e0f9048faab8de56"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a6ef3cbde5e9da6453a391681a23ed766)`()` <a id="structFRHAPI__PexHostQueryParams_1a6ef3cbde5e9da6453a391681a23ed766"></a>

Gets the value of OwningPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a922299a3ff571a0552bcdfead42c6282)`() const` <a id="structFRHAPI__PexHostQueryParams_1a922299a3ff571a0552bcdfead42c6282"></a>

Gets the value of OwningPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a590805d5a5388c121d370148bdd9df88)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1a590805d5a5388c121d370148bdd9df88"></a>

Gets the value of OwningPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1aa3d197cadbb5dc08042430cf66be7d25)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1aa3d197cadbb5dc08042430cf66be7d25"></a>

Fills OutValue with the value of OwningPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOwningPlayerUuidOrNull`](#structFRHAPI__PexHostQueryParams_1a17b276d84a01663a5d871fdbd5520115)`()` <a id="structFRHAPI__PexHostQueryParams_1a17b276d84a01663a5d871fdbd5520115"></a>

Returns a pointer to OwningPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOwningPlayerUuidOrNull`](#structFRHAPI__PexHostQueryParams_1ae158af5033a743a60f100c8b4c6f2c32)`() const` <a id="structFRHAPI__PexHostQueryParams_1ae158af5033a743a60f100c8b4c6f2c32"></a>

Returns a pointer to OwningPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a55198e1197d03adced445682bedd42a2)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a55198e1197d03adced445682bedd42a2"></a>

Sets the value of OwningPlayerUuid_Optional and also sets OwningPlayerUuid_IsSet to true.

#### `public inline void `[`SetOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1aea1ba3b1419c0762c2d575d3d44f3abf)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1aea1ba3b1419c0762c2d575d3d44f3abf"></a>

Sets the value of OwningPlayerUuid_Optional and also sets OwningPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearOwningPlayerUuid`](#structFRHAPI__PexHostQueryParams_1a1c2ac741a2a4b458db2d4a80fda1890d)`()` <a id="structFRHAPI__PexHostQueryParams_1a1c2ac741a2a4b458db2d4a80fda1890d"></a>

Clears the value of OwningPlayerUuid_Optional and sets OwningPlayerUuid_IsSet to false.

#### `public inline FString & `[`GetVersion`](#structFRHAPI__PexHostQueryParams_1a46cac291599ac4339964abeebfe93f41)`()` <a id="structFRHAPI__PexHostQueryParams_1a46cac291599ac4339964abeebfe93f41"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__PexHostQueryParams_1a341c2d2e84b6e4ff0f7b0e444aed1492)`() const` <a id="structFRHAPI__PexHostQueryParams_1a341c2d2e84b6e4ff0f7b0e444aed1492"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__PexHostQueryParams_1ad066de70f33838aa63213cb899e75729)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexHostQueryParams_1ad066de70f33838aa63213cb899e75729"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVersion`](#structFRHAPI__PexHostQueryParams_1aaae5dbe82969417c7c47354c8e3db164)`(FString & OutValue) const` <a id="structFRHAPI__PexHostQueryParams_1aaae5dbe82969417c7c47354c8e3db164"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__PexHostQueryParams_1a5a9446cb502911767b4be8425c1737cb)`()` <a id="structFRHAPI__PexHostQueryParams_1a5a9446cb502911767b4be8425c1737cb"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__PexHostQueryParams_1a646b4068820261796a2c36115ef4e30a)`() const` <a id="structFRHAPI__PexHostQueryParams_1a646b4068820261796a2c36115ef4e30a"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVersion`](#structFRHAPI__PexHostQueryParams_1a1fb3dcb5afbdcc29b16c341ae969c600)`(const FString & NewValue)` <a id="structFRHAPI__PexHostQueryParams_1a1fb3dcb5afbdcc29b16c341ae969c600"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline void `[`SetVersion`](#structFRHAPI__PexHostQueryParams_1afc85a5b62ff38d5f189b2eb18e099300)`(FString && NewValue)` <a id="structFRHAPI__PexHostQueryParams_1afc85a5b62ff38d5f189b2eb18e099300"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__PexHostQueryParams_1aa33bd4cd85661652edf7a77052ed47d5)`()` <a id="structFRHAPI__PexHostQueryParams_1aa33bd4cd85661652edf7a77052ed47d5"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

