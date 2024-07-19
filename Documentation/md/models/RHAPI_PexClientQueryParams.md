# group `RHAPI_PexClientQueryParams` <a id="group__RHAPI__PexClientQueryParams"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PexClientQueryParams`](#structFRHAPI__PexClientQueryParams) | 

## struct `FRHAPI_PexClientQueryParams` <a id="structFRHAPI__PexClientQueryParams"></a>

```
struct FRHAPI_PexClientQueryParams
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`ToDatetime_Optional`](#structFRHAPI__PexClientQueryParams_1ae93fd3985a6ab2527eac52adcf487988) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`ToDatetime_IsSet`](#structFRHAPI__PexClientQueryParams_1ad0bce9e4874e75c23c70720b732e7bc5) | true if ToDatetime_Optional has been set to a value
`public FDateTime `[`FromDatetime_Optional`](#structFRHAPI__PexClientQueryParams_1ab5cf5e5819bfb4562b02f48068effcc1) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`FromDatetime_IsSet`](#structFRHAPI__PexClientQueryParams_1a539ee84273722e93e89d5409e2e41d8a) | true if FromDatetime_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__PexClientQueryParams_1a59b2be638a903e1832b6db57f0a31f32) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PexClientQueryParams_1aa42368891f051670194d1f6b3b7c09e6) | true if MatchId_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__PexClientQueryParams_1a982d4529c73140d9e65698a5429bb48a) | 
`public bool `[`RegionId_IsSet`](#structFRHAPI__PexClientQueryParams_1ad632efc1f4f2cc7be0cdb930a8cc3a05) | true if RegionId_Optional has been set to a value
`public FString `[`ServerId_Optional`](#structFRHAPI__PexClientQueryParams_1afcccdf9280d454852f4839b2f538521c) | 
`public bool `[`ServerId_IsSet`](#structFRHAPI__PexClientQueryParams_1a392de61706522d8d64595aa60557793e) | true if ServerId_Optional has been set to a value
`public FString `[`AllocationId_Optional`](#structFRHAPI__PexClientQueryParams_1ac3faf08dcad5c1e8cc87b11244ff1613) | 
`public bool `[`AllocationId_IsSet`](#structFRHAPI__PexClientQueryParams_1a20cbdd4c40c909ecc3497bc65a7ca877) | true if AllocationId_Optional has been set to a value
`public FString `[`DatacenterProvider_Optional`](#structFRHAPI__PexClientQueryParams_1a7e85f7a298682687f6b84b45f7f864a0) | 
`public bool `[`DatacenterProvider_IsSet`](#structFRHAPI__PexClientQueryParams_1a4ed50342f6453fcc1b85f2805ca15970) | true if DatacenterProvider_Optional has been set to a value
`public FString `[`DatacenterLocation_Optional`](#structFRHAPI__PexClientQueryParams_1a1bf27c7b75a68e8398ab8b2abce00a25) | 
`public bool `[`DatacenterLocation_IsSet`](#structFRHAPI__PexClientQueryParams_1aac42139af65ad9aa18538d5312daac4d) | true if DatacenterLocation_Optional has been set to a value
`public FString `[`AddressIp_Optional`](#structFRHAPI__PexClientQueryParams_1ae5bf689b0181a7e6d1f30ba7720edd8e) | 
`public bool `[`AddressIp_IsSet`](#structFRHAPI__PexClientQueryParams_1a302e906b3dc17f46c226b4f6eed66472) | true if AddressIp_Optional has been set to a value
`public FString `[`MapName_Optional`](#structFRHAPI__PexClientQueryParams_1af2c0d74b96837cdfb714d18ed5079443) | 
`public bool `[`MapName_IsSet`](#structFRHAPI__PexClientQueryParams_1a6108cf4266acdca6b92248df807080fb) | true if MapName_Optional has been set to a value
`public FString `[`GameMode_Optional`](#structFRHAPI__PexClientQueryParams_1af343251eb3a434725f04ff50b0f61a1b) | 
`public bool `[`GameMode_IsSet`](#structFRHAPI__PexClientQueryParams_1a3804e190ceb4ba43689222239103ed6e) | true if GameMode_Optional has been set to a value
`public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__PexClientQueryParams_1aed968b5ea0c0f1a0bfa3eed36a1e3f6a) | 
`public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__PexClientQueryParams_1a41155b00787465891a8f9e502f9fd59c) | true if MatchmakingProfileId_Optional has been set to a value
`public int32 `[`ExpectedTeamSize_Optional`](#structFRHAPI__PexClientQueryParams_1af92fa274daa59aa841bb90760d6420a9) | 
`public bool `[`ExpectedTeamSize_IsSet`](#structFRHAPI__PexClientQueryParams_1ad6bfff2e71d5a1afaba00bb205aa44d1) | true if ExpectedTeamSize_Optional has been set to a value
`public int32 `[`ExpectedPlayerCount_Optional`](#structFRHAPI__PexClientQueryParams_1ab781c8ed13a8a36b5c5a0e8d1a079f8f) | 
`public bool `[`ExpectedPlayerCount_IsSet`](#structFRHAPI__PexClientQueryParams_1a9116630cca6c3873c8d8a3a1b7f8d263) | true if ExpectedPlayerCount_Optional has been set to a value
`public FString `[`HostPlayerUuid_Optional`](#structFRHAPI__PexClientQueryParams_1a5fa841a760f33caba7f97604064d716f) | 
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__PexClientQueryParams_1a70bc244c9704dbc764c51a2d4715f6c7) | true if HostPlayerUuid_Optional has been set to a value
`public FString `[`OwningPlayerUuid_Optional`](#structFRHAPI__PexClientQueryParams_1ae29abdaa153c19fdc68ec4d0e46e20e3) | 
`public bool `[`OwningPlayerUuid_IsSet`](#structFRHAPI__PexClientQueryParams_1a297e579c25457ff71b760adef5c57473) | true if OwningPlayerUuid_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__PexClientQueryParams_1ac1b596120e96be08ac492bb32caf8441) | 
`public bool `[`Version_IsSet`](#structFRHAPI__PexClientQueryParams_1ab0c2b722b05d07e358c733943a583b56) | true if Version_Optional has been set to a value
`public FString `[`PlayerUuid_Optional`](#structFRHAPI__PexClientQueryParams_1a7674d9224dde5d6d896a4bc1b0759cf2) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__PexClientQueryParams_1a84cb645c8163a5356d28171dca0b338a) | true if PlayerUuid_Optional has been set to a value
`public FString `[`DeviceInfo_Optional`](#structFRHAPI__PexClientQueryParams_1a89e0adef304f35ef1534455fb9f7cc8f) | 
`public bool `[`DeviceInfo_IsSet`](#structFRHAPI__PexClientQueryParams_1a0f8d58b8456af7fc7975a42d1f55fffb) | true if DeviceInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PexClientQueryParams_1a1016a7bd8f161bff1c5fcf98d5bd825f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PexClientQueryParams_1abfcb0137cf3f32333c4bda8000e5f971)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetToDatetime`](#structFRHAPI__PexClientQueryParams_1a43bb89d61890290b7b5c18031a87b146)`()` | Gets the value of ToDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetToDatetime`](#structFRHAPI__PexClientQueryParams_1a7e6596dc2d01ae07ef9fc719b78c2b33)`() const` | Gets the value of ToDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetToDatetime`](#structFRHAPI__PexClientQueryParams_1a86d25b14b49a5a1e2b635c4fa95ffad1)`(const FDateTime & DefaultValue) const` | Gets the value of ToDatetime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetToDatetime`](#structFRHAPI__PexClientQueryParams_1aa57d0efbbce25125d6c6555ff8cb4f34)`(FDateTime & OutValue) const` | Fills OutValue with the value of ToDatetime_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetToDatetimeOrNull`](#structFRHAPI__PexClientQueryParams_1a86d982ad9fb662602d66b26f299dcff5)`()` | Returns a pointer to ToDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetToDatetimeOrNull`](#structFRHAPI__PexClientQueryParams_1a830db975d645da47ef19e62a3fc0b46d)`() const` | Returns a pointer to ToDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetToDatetime`](#structFRHAPI__PexClientQueryParams_1a00926d0596e343a57f5810d664abf60a)`(const FDateTime & NewValue)` | Sets the value of ToDatetime_Optional and also sets ToDatetime_IsSet to true.
`public inline void `[`SetToDatetime`](#structFRHAPI__PexClientQueryParams_1a347be4b73ca9a80b3f3915773901a178)`(FDateTime && NewValue)` | Sets the value of ToDatetime_Optional and also sets ToDatetime_IsSet to true using move semantics.
`public inline void `[`ClearToDatetime`](#structFRHAPI__PexClientQueryParams_1ade5e7319d757c20ea3f72846ed1d6140)`()` | Clears the value of ToDatetime_Optional and sets ToDatetime_IsSet to false.
`public inline FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a021421e4b059c14c31f4a45327e1a95d)`()` | Gets the value of FromDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a44ae11bf896e45f9eed3c2f7556d5b6d)`() const` | Gets the value of FromDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a82c35a2612950ec3673400ef4e8e4326)`(const FDateTime & DefaultValue) const` | Gets the value of FromDatetime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a27e059ada736c6b77af5c1e6e588e441)`(FDateTime & OutValue) const` | Fills OutValue with the value of FromDatetime_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetFromDatetimeOrNull`](#structFRHAPI__PexClientQueryParams_1ac46e63c85de1f244b013b33d9fa61053)`()` | Returns a pointer to FromDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetFromDatetimeOrNull`](#structFRHAPI__PexClientQueryParams_1a18670ae2748eaeef3bb64a42ecdd3d81)`() const` | Returns a pointer to FromDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a37b97e9bfaadd9e8e21f889741395d26)`(const FDateTime & NewValue)` | Sets the value of FromDatetime_Optional and also sets FromDatetime_IsSet to true.
`public inline void `[`SetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a83fdc01c1c84042c741fdb47fad6b2e2)`(FDateTime && NewValue)` | Sets the value of FromDatetime_Optional and also sets FromDatetime_IsSet to true using move semantics.
`public inline void `[`ClearFromDatetime`](#structFRHAPI__PexClientQueryParams_1af819e2478edc7a8abbc17c8aabeb9c33)`()` | Clears the value of FromDatetime_Optional and sets FromDatetime_IsSet to false.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PexClientQueryParams_1a919235c3b3e2b0ccb60f69746d4f53f2)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PexClientQueryParams_1a6ac61960b6537af301fa288a13d864f6)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PexClientQueryParams_1a4aa943131a7d30921d4e4cebe8b1d4fa)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PexClientQueryParams_1a8f294b6cd6a095e9dc70a20dba8ba76d)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PexClientQueryParams_1a9aedfb55b9c06a100e98d1d1f6e7cc11)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PexClientQueryParams_1a0138b268b5e66e877e0b032289bc7945)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PexClientQueryParams_1a8c6a3fa3f8a7bbab9fa77f4d85550be8)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PexClientQueryParams_1a61a812d54359ad4f926f3fdb67adf4de)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PexClientQueryParams_1a2df51bf7dc6008bdbc9b3210ef466cd7)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FString & `[`GetRegionId`](#structFRHAPI__PexClientQueryParams_1aa36d10dbd9456ba6dea53c4c1f0080d9)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__PexClientQueryParams_1a46dae54feeff32d76cfe7f38d3498386)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__PexClientQueryParams_1a65191b9598c502c318df36e4e4fe1a33)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__PexClientQueryParams_1a4a7e4b61e2c0c88c7c6fd242ef491725)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__PexClientQueryParams_1a1f8838052da651109c3b9ed17e11e1f1)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__PexClientQueryParams_1aeaf36100df9affa6cd6cd6b3d3224b81)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__PexClientQueryParams_1a4778b5e415a579dd444563f423d77d26)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__PexClientQueryParams_1a21dbaa8ed1ab149a7ad567ef5507ab3b)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__PexClientQueryParams_1aaecae8d85c2afd21cfb95a4f03ebc46d)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FString & `[`GetServerId`](#structFRHAPI__PexClientQueryParams_1afc6ba3504b0330d0e6ef32dffe1ece65)`()` | Gets the value of ServerId_Optional, regardless of it having been set.
`public inline const FString & `[`GetServerId`](#structFRHAPI__PexClientQueryParams_1a56497dbb9152160e3660f2bb6ebddce3)`() const` | Gets the value of ServerId_Optional, regardless of it having been set.
`public inline const FString & `[`GetServerId`](#structFRHAPI__PexClientQueryParams_1a415d6477b9d7af17e2adfd14a68b1592)`(const FString & DefaultValue) const` | Gets the value of ServerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetServerId`](#structFRHAPI__PexClientQueryParams_1afbd284aa4ba4486a258db848649811df)`(FString & OutValue) const` | Fills OutValue with the value of ServerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetServerIdOrNull`](#structFRHAPI__PexClientQueryParams_1ac3f6a0ac0e1597e51fad9fed3293595d)`()` | Returns a pointer to ServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetServerIdOrNull`](#structFRHAPI__PexClientQueryParams_1ae9d5422d18ad0db78c699a06205c98f6)`() const` | Returns a pointer to ServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetServerId`](#structFRHAPI__PexClientQueryParams_1a8e5bc1cfcb84df52f9df13964b356e42)`(const FString & NewValue)` | Sets the value of ServerId_Optional and also sets ServerId_IsSet to true.
`public inline void `[`SetServerId`](#structFRHAPI__PexClientQueryParams_1af9f856f7c127f536837b41974739d5e1)`(FString && NewValue)` | Sets the value of ServerId_Optional and also sets ServerId_IsSet to true using move semantics.
`public inline void `[`ClearServerId`](#structFRHAPI__PexClientQueryParams_1aeea233df1d8a8ca7f718fb40762eb7f9)`()` | Clears the value of ServerId_Optional and sets ServerId_IsSet to false.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__PexClientQueryParams_1a8fe79c750a855845805cb16059b7027b)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__PexClientQueryParams_1a4ca57a4f2e4b03d2c2c174ec0a259945)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__PexClientQueryParams_1aa0d47d626593a15bd72be9175bb8fdd4)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__PexClientQueryParams_1a6d0e5ed04b515c49e4254ae859330376)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__PexClientQueryParams_1adea5087682afcc0fd89a5801e12ca6de)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__PexClientQueryParams_1aedf5e3b82cf00e87141b9819f51b7453)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__PexClientQueryParams_1aa5df7258f9b24b9406c6af105016055f)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`SetAllocationId`](#structFRHAPI__PexClientQueryParams_1ac91c4ac0b8b35af7ae5855599c0e15ae)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__PexClientQueryParams_1a15efc2e29fdcb02dfe0927792965c1a9)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline FString & `[`GetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1a7cc9ff9a5c8b34b9ca010c3bbc536882)`()` | Gets the value of DatacenterProvider_Optional, regardless of it having been set.
`public inline const FString & `[`GetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1a6a8311693604fa7304dcf39154bb3755)`() const` | Gets the value of DatacenterProvider_Optional, regardless of it having been set.
`public inline const FString & `[`GetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1af6bde17fb6685eb5888a2c21769f52f6)`(const FString & DefaultValue) const` | Gets the value of DatacenterProvider_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1a20101a3b47339571d013b36c8158e1db)`(FString & OutValue) const` | Fills OutValue with the value of DatacenterProvider_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDatacenterProviderOrNull`](#structFRHAPI__PexClientQueryParams_1a54465615b4627708010bb4d0560b6657)`()` | Returns a pointer to DatacenterProvider_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDatacenterProviderOrNull`](#structFRHAPI__PexClientQueryParams_1a2e6652ce898d19ec4c9a3129c8265701)`() const` | Returns a pointer to DatacenterProvider_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1ab1fd7ca46623b4062f604b8e1773c945)`(const FString & NewValue)` | Sets the value of DatacenterProvider_Optional and also sets DatacenterProvider_IsSet to true.
`public inline void `[`SetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1a1bfc3b82febb05f94e0867664cd20183)`(FString && NewValue)` | Sets the value of DatacenterProvider_Optional and also sets DatacenterProvider_IsSet to true using move semantics.
`public inline void `[`ClearDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1aea57d2acbf2acb36091148f2e2ba5fd0)`()` | Clears the value of DatacenterProvider_Optional and sets DatacenterProvider_IsSet to false.
`public inline FString & `[`GetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1abcc3815e3f9297636df22869ccca57e2)`()` | Gets the value of DatacenterLocation_Optional, regardless of it having been set.
`public inline const FString & `[`GetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1a7bdcb708a6da08b37c577bc5fb0e0942)`() const` | Gets the value of DatacenterLocation_Optional, regardless of it having been set.
`public inline const FString & `[`GetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1af347c026d9ecb5d11c3fcdc2b9c052cf)`(const FString & DefaultValue) const` | Gets the value of DatacenterLocation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1a26e8e8db67775ba37a79b13aa74e6a8c)`(FString & OutValue) const` | Fills OutValue with the value of DatacenterLocation_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDatacenterLocationOrNull`](#structFRHAPI__PexClientQueryParams_1a6ee5ac898955866882a249c5b0a2aa0f)`()` | Returns a pointer to DatacenterLocation_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDatacenterLocationOrNull`](#structFRHAPI__PexClientQueryParams_1a01036c49566587fe31863a0fab4ac67a)`() const` | Returns a pointer to DatacenterLocation_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1a16dfe17c8f3fb01154751bbd1ce53185)`(const FString & NewValue)` | Sets the value of DatacenterLocation_Optional and also sets DatacenterLocation_IsSet to true.
`public inline void `[`SetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1abac53bba0efb36eb26d2871b93a25449)`(FString && NewValue)` | Sets the value of DatacenterLocation_Optional and also sets DatacenterLocation_IsSet to true using move semantics.
`public inline void `[`ClearDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1a8cb1d3eb4af7e07d831b86b25538d5df)`()` | Clears the value of DatacenterLocation_Optional and sets DatacenterLocation_IsSet to false.
`public inline FString & `[`GetAddressIp`](#structFRHAPI__PexClientQueryParams_1a4b0589bf4ab76f1a22769a0a83b3dbec)`()` | Gets the value of AddressIp_Optional, regardless of it having been set.
`public inline const FString & `[`GetAddressIp`](#structFRHAPI__PexClientQueryParams_1a90ee72111a66ad37d19a065fe166d175)`() const` | Gets the value of AddressIp_Optional, regardless of it having been set.
`public inline const FString & `[`GetAddressIp`](#structFRHAPI__PexClientQueryParams_1aee11c19421d7ab40a42fbd97efa03127)`(const FString & DefaultValue) const` | Gets the value of AddressIp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAddressIp`](#structFRHAPI__PexClientQueryParams_1aba5c50fd4b770d1560fe9f321096ee8a)`(FString & OutValue) const` | Fills OutValue with the value of AddressIp_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAddressIpOrNull`](#structFRHAPI__PexClientQueryParams_1a17d1cb6e92ea0b2f6a0e15c0c1d93919)`()` | Returns a pointer to AddressIp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAddressIpOrNull`](#structFRHAPI__PexClientQueryParams_1a71ad302217c248c539ec7b5675c42962)`() const` | Returns a pointer to AddressIp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAddressIp`](#structFRHAPI__PexClientQueryParams_1ae051ce4f785c3b50e9a2f529efdad382)`(const FString & NewValue)` | Sets the value of AddressIp_Optional and also sets AddressIp_IsSet to true.
`public inline void `[`SetAddressIp`](#structFRHAPI__PexClientQueryParams_1aa26890ff127e1ae6880e74d304131093)`(FString && NewValue)` | Sets the value of AddressIp_Optional and also sets AddressIp_IsSet to true using move semantics.
`public inline void `[`ClearAddressIp`](#structFRHAPI__PexClientQueryParams_1a7967ea31cc000f6743e8c0f75ec14598)`()` | Clears the value of AddressIp_Optional and sets AddressIp_IsSet to false.
`public inline FString & `[`GetMapName`](#structFRHAPI__PexClientQueryParams_1a920b89147c2716df123e27ae687d3f40)`()` | Gets the value of MapName_Optional, regardless of it having been set.
`public inline const FString & `[`GetMapName`](#structFRHAPI__PexClientQueryParams_1a35d885c13ad66a4cf3a2aacbdfdc3363)`() const` | Gets the value of MapName_Optional, regardless of it having been set.
`public inline const FString & `[`GetMapName`](#structFRHAPI__PexClientQueryParams_1ad8204078b9278bd7f2fb4afb4ba107b4)`(const FString & DefaultValue) const` | Gets the value of MapName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapName`](#structFRHAPI__PexClientQueryParams_1abb3cf4014b3b3477cdc5d686151f11b6)`(FString & OutValue) const` | Fills OutValue with the value of MapName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapNameOrNull`](#structFRHAPI__PexClientQueryParams_1a607cc0e260d6c9119dc16feffc442b40)`()` | Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapNameOrNull`](#structFRHAPI__PexClientQueryParams_1a1292a66eb468c4dc7698d3c97aea7b34)`() const` | Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapName`](#structFRHAPI__PexClientQueryParams_1a3f1f541c2d1711e4e2992972bca87996)`(const FString & NewValue)` | Sets the value of MapName_Optional and also sets MapName_IsSet to true.
`public inline void `[`SetMapName`](#structFRHAPI__PexClientQueryParams_1aa31f12f9ad7f52192d2a7c8f7093fc0a)`(FString && NewValue)` | Sets the value of MapName_Optional and also sets MapName_IsSet to true using move semantics.
`public inline void `[`ClearMapName`](#structFRHAPI__PexClientQueryParams_1a23af631f0db2490d84606e5b16044306)`()` | Clears the value of MapName_Optional and sets MapName_IsSet to false.
`public inline FString & `[`GetGameMode`](#structFRHAPI__PexClientQueryParams_1a18ef7ad613f9ca94a2639388fe9efe8a)`()` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__PexClientQueryParams_1a78edeec52b0cb84f55db5629206d57ef)`() const` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__PexClientQueryParams_1a2bb83268802b28cf75f21a8db8deede9)`(const FString & DefaultValue) const` | Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetGameMode`](#structFRHAPI__PexClientQueryParams_1ac458e327aeb9463fc84ccda537e34b4c)`(FString & OutValue) const` | Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__PexClientQueryParams_1a5bf5a7db38cbec737a8e80828a673c9c)`()` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__PexClientQueryParams_1a40787cd38cab546e4561a63a7cb95036)`() const` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetGameMode`](#structFRHAPI__PexClientQueryParams_1a6e54d2243b812e40a43f1fcf0f496eb3)`(const FString & NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.
`public inline void `[`SetGameMode`](#structFRHAPI__PexClientQueryParams_1a155587bb293a0a81ad96db2a3c06c18b)`(FString && NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.
`public inline void `[`ClearGameMode`](#structFRHAPI__PexClientQueryParams_1aac1a8c635dd82e38e4c609a0fbe86f25)`()` | Clears the value of GameMode_Optional and sets GameMode_IsSet to false.
`public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1aa329448ed9a9648652ad4897eb152bec)`()` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a03cadf817d111660fa5760213e7dbd86)`() const` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a3d3c2f76d84544a26849d52673162d23)`(const FString & DefaultValue) const` | Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a26d3554bf796ba47f37a04033ec4ea75)`(FString & OutValue) const` | Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__PexClientQueryParams_1a1028ce9bfd4e8d8d329ee7a9bbb996ee)`()` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__PexClientQueryParams_1a833efe9ffa2b5dea92af1a6512596da5)`() const` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a7c8707b9e18217caabdfeeec3ade91e8)`(const FString & NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.
`public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a7a485d654820c11f3cf7370a32648a13)`(FString && NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1adaa1656ea77438c969d130c573a1daa4)`()` | Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.
`public inline int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a87e8263dd0d494a8b724b22e0d5d0c0b)`()` | Gets the value of ExpectedTeamSize_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a2f7db0725a64fba57dce4955f97d71fc)`() const` | Gets the value of ExpectedTeamSize_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a29ec1f520a1f71e604bcfc2dd5eef79b)`(const int32 & DefaultValue) const` | Gets the value of ExpectedTeamSize_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a0c03da8c2610298dad6ef7803bc1bf1a)`(int32 & OutValue) const` | Fills OutValue with the value of ExpectedTeamSize_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetExpectedTeamSizeOrNull`](#structFRHAPI__PexClientQueryParams_1a5ab362126ecdd266375da751597ca981)`()` | Returns a pointer to ExpectedTeamSize_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetExpectedTeamSizeOrNull`](#structFRHAPI__PexClientQueryParams_1a5e704d869112da14a2b42effac96ae72)`() const` | Returns a pointer to ExpectedTeamSize_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a216ddf084e8bff9d9dc291671f621caf)`(const int32 & NewValue)` | Sets the value of ExpectedTeamSize_Optional and also sets ExpectedTeamSize_IsSet to true.
`public inline void `[`SetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1ae4f7c85303cbae3224503fbb06afcfa8)`(int32 && NewValue)` | Sets the value of ExpectedTeamSize_Optional and also sets ExpectedTeamSize_IsSet to true using move semantics.
`public inline void `[`ClearExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1ad3448b16064500614de3cd37bac272f0)`()` | Clears the value of ExpectedTeamSize_Optional and sets ExpectedTeamSize_IsSet to false.
`public inline bool `[`IsExpectedTeamSizeDefaultValue`](#structFRHAPI__PexClientQueryParams_1a2bacbc7bee2eca6821da91b8e6c498ed)`() const` | Returns true if ExpectedTeamSize_Optional is set and matches the default value.
`public inline void `[`SetExpectedTeamSizeToDefault`](#structFRHAPI__PexClientQueryParams_1a0db7303bf79a7d0a5028d75b3a7a2b07)`()` | Sets the value of ExpectedTeamSize_Optional to its default and also sets ExpectedTeamSize_IsSet to true.
`public inline int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1af413b540e790e9acf8466cdacadde52a)`()` | Gets the value of ExpectedPlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1ad03bb531b9647c62a8df7c5685ba581f)`() const` | Gets the value of ExpectedPlayerCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1a3cc4c439645f1d14d1750124fee25b66)`(const int32 & DefaultValue) const` | Gets the value of ExpectedPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1a2addd9b62be4ac8017dea1d6675c7421)`(int32 & OutValue) const` | Fills OutValue with the value of ExpectedPlayerCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetExpectedPlayerCountOrNull`](#structFRHAPI__PexClientQueryParams_1ae0bd32a564e81916e9d930fa63897bd2)`()` | Returns a pointer to ExpectedPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetExpectedPlayerCountOrNull`](#structFRHAPI__PexClientQueryParams_1ad87835d7d6f7a748fc3d31d4230f0db0)`() const` | Returns a pointer to ExpectedPlayerCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1a9e54a4ed3e68b21c580fbb997c951dd4)`(const int32 & NewValue)` | Sets the value of ExpectedPlayerCount_Optional and also sets ExpectedPlayerCount_IsSet to true.
`public inline void `[`SetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1ae2dc797957da5f46310c3c57eb72254f)`(int32 && NewValue)` | Sets the value of ExpectedPlayerCount_Optional and also sets ExpectedPlayerCount_IsSet to true using move semantics.
`public inline void `[`ClearExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1a8dd7aaa5f48afc8d17ed98faa676365a)`()` | Clears the value of ExpectedPlayerCount_Optional and sets ExpectedPlayerCount_IsSet to false.
`public inline bool `[`IsExpectedPlayerCountDefaultValue`](#structFRHAPI__PexClientQueryParams_1a52731f83fd1aa20954cb9041f3eecf01)`() const` | Returns true if ExpectedPlayerCount_Optional is set and matches the default value.
`public inline void `[`SetExpectedPlayerCountToDefault`](#structFRHAPI__PexClientQueryParams_1a00ffbbcb58b4d0ff901e066a8ec684ac)`()` | Sets the value of ExpectedPlayerCount_Optional to its default and also sets ExpectedPlayerCount_IsSet to true.
`public inline FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a554f56726aed29927d3e4bf87404c6de)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a676789ad49b2069fff2908e5e053dd20)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a338f528ba0163564c0e6ef7084752151)`(const FString & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1af197f798c225c9a3e6ed470e855603c9)`(FString & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a2f5b3dc6148c5af4cda7b93a3c230f71)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1afec089c384c20845c1942a396e8b94b0)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a9e5e44f15cc88cba6e9950a1ed823267)`(const FString & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a612d00e9bc980fe96d190018dec921d8)`(FString && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a2ae935485f8b04d17c2e481d8dee855e)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a7ebf68922c7845cd645f5696ceaf1fc5)`()` | Gets the value of OwningPlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1afd9f930dfecae96b28b2e7b813a4fdab)`() const` | Gets the value of OwningPlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ae9d701aaf580660357e818e71b159735)`(const FString & DefaultValue) const` | Gets the value of OwningPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a023d63beeb71ee960d9dfa7b086a25eb)`(FString & OutValue) const` | Fills OutValue with the value of OwningPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOwningPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a4eeed62aee467abbc1f6868a36f5fb3e)`()` | Returns a pointer to OwningPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOwningPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a4b565c826c19421fd974f85bbadd0ddc)`() const` | Returns a pointer to OwningPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ae0970b3b01b0ae9e940404b8971a1207)`(const FString & NewValue)` | Sets the value of OwningPlayerUuid_Optional and also sets OwningPlayerUuid_IsSet to true.
`public inline void `[`SetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ac60994596132ef74cf32e6604f966bdf)`(FString && NewValue)` | Sets the value of OwningPlayerUuid_Optional and also sets OwningPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ac9919ee9b1d245855b7a650f187001a0)`()` | Clears the value of OwningPlayerUuid_Optional and sets OwningPlayerUuid_IsSet to false.
`public inline FString & `[`GetVersion`](#structFRHAPI__PexClientQueryParams_1a7dfb54792b4de05930568ac9f74c853a)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__PexClientQueryParams_1ae4e9a62478fa8fff6c5cbf599648bad2)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__PexClientQueryParams_1afd1c2ba4c28e2b69e585b63ce0881ddc)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__PexClientQueryParams_1accb8941cbadb88dfa0a2fb2da1255559)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__PexClientQueryParams_1af3d3dab3d822d884a613c84f1f1ebd9b)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__PexClientQueryParams_1a987c82a3f340e8001cb41d7fd1a93263)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__PexClientQueryParams_1a5553ad2dfdb92e4b53f7315f178749cd)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`SetVersion`](#structFRHAPI__PexClientQueryParams_1a8f887cf64dbfd600b8c2e292a587d9ff)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__PexClientQueryParams_1af06a75d4f43f3f6081d566b5093b9e4c)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline FString & `[`GetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a7bd2a13b0e2bbb1ea1baa53f0eae373f)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a18d81ccaa92d53c6005f4f926520c599)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a791fb65f65dee9a38614962781fdc956)`(const FString & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ac0456ca25497756a8d40777181c1ac22)`(FString & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a80846a0719b57328c30b20ec3c9141ee)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a1746179228affb77dbb510cffe7dcc8d)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a9266df65cb049cee4ab24097a5b15b53)`(const FString & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1aa458af47163afa31c56404d3273b8d7c)`(FString && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a7df837ea53f885c5404762794b265632)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FString & `[`GetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1ad94faae678709eb9fdb16d850b58179a)`()` | Gets the value of DeviceInfo_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1ae3c2d64f35487accf165144f9f6a8256)`() const` | Gets the value of DeviceInfo_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1aaeb27824a1c1ab9b7e9dd4c99c875dac)`(const FString & DefaultValue) const` | Gets the value of DeviceInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1a4a0d46e711990bc8ed54fba8d87992a2)`(FString & OutValue) const` | Fills OutValue with the value of DeviceInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDeviceInfoOrNull`](#structFRHAPI__PexClientQueryParams_1ad1c4af5d0d5eb710ea602347f6b7d29e)`()` | Returns a pointer to DeviceInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDeviceInfoOrNull`](#structFRHAPI__PexClientQueryParams_1af7c65adf3a1f169ed2069f73a726e4d5)`() const` | Returns a pointer to DeviceInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1ae2971a2166f0837e2ad36a82653cfd3b)`(const FString & NewValue)` | Sets the value of DeviceInfo_Optional and also sets DeviceInfo_IsSet to true.
`public inline void `[`SetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1a09532ec29994779d2eb8f43f62e3cf94)`(FString && NewValue)` | Sets the value of DeviceInfo_Optional and also sets DeviceInfo_IsSet to true using move semantics.
`public inline void `[`ClearDeviceInfo`](#structFRHAPI__PexClientQueryParams_1a315242b848bc70d8cbdf1520ccb73429)`()` | Clears the value of DeviceInfo_Optional and sets DeviceInfo_IsSet to false.

### Members

#### `public FDateTime `[`ToDatetime_Optional`](#structFRHAPI__PexClientQueryParams_1ae93fd3985a6ab2527eac52adcf487988) <a id="structFRHAPI__PexClientQueryParams_1ae93fd3985a6ab2527eac52adcf487988"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`ToDatetime_IsSet`](#structFRHAPI__PexClientQueryParams_1ad0bce9e4874e75c23c70720b732e7bc5) <a id="structFRHAPI__PexClientQueryParams_1ad0bce9e4874e75c23c70720b732e7bc5"></a>

true if ToDatetime_Optional has been set to a value

#### `public FDateTime `[`FromDatetime_Optional`](#structFRHAPI__PexClientQueryParams_1ab5cf5e5819bfb4562b02f48068effcc1) <a id="structFRHAPI__PexClientQueryParams_1ab5cf5e5819bfb4562b02f48068effcc1"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`FromDatetime_IsSet`](#structFRHAPI__PexClientQueryParams_1a539ee84273722e93e89d5409e2e41d8a) <a id="structFRHAPI__PexClientQueryParams_1a539ee84273722e93e89d5409e2e41d8a"></a>

true if FromDatetime_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PexClientQueryParams_1a59b2be638a903e1832b6db57f0a31f32) <a id="structFRHAPI__PexClientQueryParams_1a59b2be638a903e1832b6db57f0a31f32"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PexClientQueryParams_1aa42368891f051670194d1f6b3b7c09e6) <a id="structFRHAPI__PexClientQueryParams_1aa42368891f051670194d1f6b3b7c09e6"></a>

true if MatchId_Optional has been set to a value

#### `public FString `[`RegionId_Optional`](#structFRHAPI__PexClientQueryParams_1a982d4529c73140d9e65698a5429bb48a) <a id="structFRHAPI__PexClientQueryParams_1a982d4529c73140d9e65698a5429bb48a"></a>

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__PexClientQueryParams_1ad632efc1f4f2cc7be0cdb930a8cc3a05) <a id="structFRHAPI__PexClientQueryParams_1ad632efc1f4f2cc7be0cdb930a8cc3a05"></a>

true if RegionId_Optional has been set to a value

#### `public FString `[`ServerId_Optional`](#structFRHAPI__PexClientQueryParams_1afcccdf9280d454852f4839b2f538521c) <a id="structFRHAPI__PexClientQueryParams_1afcccdf9280d454852f4839b2f538521c"></a>

#### `public bool `[`ServerId_IsSet`](#structFRHAPI__PexClientQueryParams_1a392de61706522d8d64595aa60557793e) <a id="structFRHAPI__PexClientQueryParams_1a392de61706522d8d64595aa60557793e"></a>

true if ServerId_Optional has been set to a value

#### `public FString `[`AllocationId_Optional`](#structFRHAPI__PexClientQueryParams_1ac3faf08dcad5c1e8cc87b11244ff1613) <a id="structFRHAPI__PexClientQueryParams_1ac3faf08dcad5c1e8cc87b11244ff1613"></a>

#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__PexClientQueryParams_1a20cbdd4c40c909ecc3497bc65a7ca877) <a id="structFRHAPI__PexClientQueryParams_1a20cbdd4c40c909ecc3497bc65a7ca877"></a>

true if AllocationId_Optional has been set to a value

#### `public FString `[`DatacenterProvider_Optional`](#structFRHAPI__PexClientQueryParams_1a7e85f7a298682687f6b84b45f7f864a0) <a id="structFRHAPI__PexClientQueryParams_1a7e85f7a298682687f6b84b45f7f864a0"></a>

#### `public bool `[`DatacenterProvider_IsSet`](#structFRHAPI__PexClientQueryParams_1a4ed50342f6453fcc1b85f2805ca15970) <a id="structFRHAPI__PexClientQueryParams_1a4ed50342f6453fcc1b85f2805ca15970"></a>

true if DatacenterProvider_Optional has been set to a value

#### `public FString `[`DatacenterLocation_Optional`](#structFRHAPI__PexClientQueryParams_1a1bf27c7b75a68e8398ab8b2abce00a25) <a id="structFRHAPI__PexClientQueryParams_1a1bf27c7b75a68e8398ab8b2abce00a25"></a>

#### `public bool `[`DatacenterLocation_IsSet`](#structFRHAPI__PexClientQueryParams_1aac42139af65ad9aa18538d5312daac4d) <a id="structFRHAPI__PexClientQueryParams_1aac42139af65ad9aa18538d5312daac4d"></a>

true if DatacenterLocation_Optional has been set to a value

#### `public FString `[`AddressIp_Optional`](#structFRHAPI__PexClientQueryParams_1ae5bf689b0181a7e6d1f30ba7720edd8e) <a id="structFRHAPI__PexClientQueryParams_1ae5bf689b0181a7e6d1f30ba7720edd8e"></a>

#### `public bool `[`AddressIp_IsSet`](#structFRHAPI__PexClientQueryParams_1a302e906b3dc17f46c226b4f6eed66472) <a id="structFRHAPI__PexClientQueryParams_1a302e906b3dc17f46c226b4f6eed66472"></a>

true if AddressIp_Optional has been set to a value

#### `public FString `[`MapName_Optional`](#structFRHAPI__PexClientQueryParams_1af2c0d74b96837cdfb714d18ed5079443) <a id="structFRHAPI__PexClientQueryParams_1af2c0d74b96837cdfb714d18ed5079443"></a>

#### `public bool `[`MapName_IsSet`](#structFRHAPI__PexClientQueryParams_1a6108cf4266acdca6b92248df807080fb) <a id="structFRHAPI__PexClientQueryParams_1a6108cf4266acdca6b92248df807080fb"></a>

true if MapName_Optional has been set to a value

#### `public FString `[`GameMode_Optional`](#structFRHAPI__PexClientQueryParams_1af343251eb3a434725f04ff50b0f61a1b) <a id="structFRHAPI__PexClientQueryParams_1af343251eb3a434725f04ff50b0f61a1b"></a>

#### `public bool `[`GameMode_IsSet`](#structFRHAPI__PexClientQueryParams_1a3804e190ceb4ba43689222239103ed6e) <a id="structFRHAPI__PexClientQueryParams_1a3804e190ceb4ba43689222239103ed6e"></a>

true if GameMode_Optional has been set to a value

#### `public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__PexClientQueryParams_1aed968b5ea0c0f1a0bfa3eed36a1e3f6a) <a id="structFRHAPI__PexClientQueryParams_1aed968b5ea0c0f1a0bfa3eed36a1e3f6a"></a>

#### `public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__PexClientQueryParams_1a41155b00787465891a8f9e502f9fd59c) <a id="structFRHAPI__PexClientQueryParams_1a41155b00787465891a8f9e502f9fd59c"></a>

true if MatchmakingProfileId_Optional has been set to a value

#### `public int32 `[`ExpectedTeamSize_Optional`](#structFRHAPI__PexClientQueryParams_1af92fa274daa59aa841bb90760d6420a9) <a id="structFRHAPI__PexClientQueryParams_1af92fa274daa59aa841bb90760d6420a9"></a>

#### `public bool `[`ExpectedTeamSize_IsSet`](#structFRHAPI__PexClientQueryParams_1ad6bfff2e71d5a1afaba00bb205aa44d1) <a id="structFRHAPI__PexClientQueryParams_1ad6bfff2e71d5a1afaba00bb205aa44d1"></a>

true if ExpectedTeamSize_Optional has been set to a value

#### `public int32 `[`ExpectedPlayerCount_Optional`](#structFRHAPI__PexClientQueryParams_1ab781c8ed13a8a36b5c5a0e8d1a079f8f) <a id="structFRHAPI__PexClientQueryParams_1ab781c8ed13a8a36b5c5a0e8d1a079f8f"></a>

#### `public bool `[`ExpectedPlayerCount_IsSet`](#structFRHAPI__PexClientQueryParams_1a9116630cca6c3873c8d8a3a1b7f8d263) <a id="structFRHAPI__PexClientQueryParams_1a9116630cca6c3873c8d8a3a1b7f8d263"></a>

true if ExpectedPlayerCount_Optional has been set to a value

#### `public FString `[`HostPlayerUuid_Optional`](#structFRHAPI__PexClientQueryParams_1a5fa841a760f33caba7f97604064d716f) <a id="structFRHAPI__PexClientQueryParams_1a5fa841a760f33caba7f97604064d716f"></a>

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__PexClientQueryParams_1a70bc244c9704dbc764c51a2d4715f6c7) <a id="structFRHAPI__PexClientQueryParams_1a70bc244c9704dbc764c51a2d4715f6c7"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public FString `[`OwningPlayerUuid_Optional`](#structFRHAPI__PexClientQueryParams_1ae29abdaa153c19fdc68ec4d0e46e20e3) <a id="structFRHAPI__PexClientQueryParams_1ae29abdaa153c19fdc68ec4d0e46e20e3"></a>

#### `public bool `[`OwningPlayerUuid_IsSet`](#structFRHAPI__PexClientQueryParams_1a297e579c25457ff71b760adef5c57473) <a id="structFRHAPI__PexClientQueryParams_1a297e579c25457ff71b760adef5c57473"></a>

true if OwningPlayerUuid_Optional has been set to a value

#### `public FString `[`Version_Optional`](#structFRHAPI__PexClientQueryParams_1ac1b596120e96be08ac492bb32caf8441) <a id="structFRHAPI__PexClientQueryParams_1ac1b596120e96be08ac492bb32caf8441"></a>

#### `public bool `[`Version_IsSet`](#structFRHAPI__PexClientQueryParams_1ab0c2b722b05d07e358c733943a583b56) <a id="structFRHAPI__PexClientQueryParams_1ab0c2b722b05d07e358c733943a583b56"></a>

true if Version_Optional has been set to a value

#### `public FString `[`PlayerUuid_Optional`](#structFRHAPI__PexClientQueryParams_1a7674d9224dde5d6d896a4bc1b0759cf2) <a id="structFRHAPI__PexClientQueryParams_1a7674d9224dde5d6d896a4bc1b0759cf2"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__PexClientQueryParams_1a84cb645c8163a5356d28171dca0b338a) <a id="structFRHAPI__PexClientQueryParams_1a84cb645c8163a5356d28171dca0b338a"></a>

true if PlayerUuid_Optional has been set to a value

#### `public FString `[`DeviceInfo_Optional`](#structFRHAPI__PexClientQueryParams_1a89e0adef304f35ef1534455fb9f7cc8f) <a id="structFRHAPI__PexClientQueryParams_1a89e0adef304f35ef1534455fb9f7cc8f"></a>

#### `public bool `[`DeviceInfo_IsSet`](#structFRHAPI__PexClientQueryParams_1a0f8d58b8456af7fc7975a42d1f55fffb) <a id="structFRHAPI__PexClientQueryParams_1a0f8d58b8456af7fc7975a42d1f55fffb"></a>

true if DeviceInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PexClientQueryParams_1a1016a7bd8f161bff1c5fcf98d5bd825f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PexClientQueryParams_1a1016a7bd8f161bff1c5fcf98d5bd825f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PexClientQueryParams_1abfcb0137cf3f32333c4bda8000e5f971)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PexClientQueryParams_1abfcb0137cf3f32333c4bda8000e5f971"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetToDatetime`](#structFRHAPI__PexClientQueryParams_1a43bb89d61890290b7b5c18031a87b146)`()` <a id="structFRHAPI__PexClientQueryParams_1a43bb89d61890290b7b5c18031a87b146"></a>

Gets the value of ToDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetToDatetime`](#structFRHAPI__PexClientQueryParams_1a7e6596dc2d01ae07ef9fc719b78c2b33)`() const` <a id="structFRHAPI__PexClientQueryParams_1a7e6596dc2d01ae07ef9fc719b78c2b33"></a>

Gets the value of ToDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetToDatetime`](#structFRHAPI__PexClientQueryParams_1a86d25b14b49a5a1e2b635c4fa95ffad1)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a86d25b14b49a5a1e2b635c4fa95ffad1"></a>

Gets the value of ToDatetime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetToDatetime`](#structFRHAPI__PexClientQueryParams_1aa57d0efbbce25125d6c6555ff8cb4f34)`(FDateTime & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1aa57d0efbbce25125d6c6555ff8cb4f34"></a>

Fills OutValue with the value of ToDatetime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetToDatetimeOrNull`](#structFRHAPI__PexClientQueryParams_1a86d982ad9fb662602d66b26f299dcff5)`()` <a id="structFRHAPI__PexClientQueryParams_1a86d982ad9fb662602d66b26f299dcff5"></a>

Returns a pointer to ToDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetToDatetimeOrNull`](#structFRHAPI__PexClientQueryParams_1a830db975d645da47ef19e62a3fc0b46d)`() const` <a id="structFRHAPI__PexClientQueryParams_1a830db975d645da47ef19e62a3fc0b46d"></a>

Returns a pointer to ToDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetToDatetime`](#structFRHAPI__PexClientQueryParams_1a00926d0596e343a57f5810d664abf60a)`(const FDateTime & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a00926d0596e343a57f5810d664abf60a"></a>

Sets the value of ToDatetime_Optional and also sets ToDatetime_IsSet to true.

#### `public inline void `[`SetToDatetime`](#structFRHAPI__PexClientQueryParams_1a347be4b73ca9a80b3f3915773901a178)`(FDateTime && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a347be4b73ca9a80b3f3915773901a178"></a>

Sets the value of ToDatetime_Optional and also sets ToDatetime_IsSet to true using move semantics.

#### `public inline void `[`ClearToDatetime`](#structFRHAPI__PexClientQueryParams_1ade5e7319d757c20ea3f72846ed1d6140)`()` <a id="structFRHAPI__PexClientQueryParams_1ade5e7319d757c20ea3f72846ed1d6140"></a>

Clears the value of ToDatetime_Optional and sets ToDatetime_IsSet to false.

#### `public inline FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a021421e4b059c14c31f4a45327e1a95d)`()` <a id="structFRHAPI__PexClientQueryParams_1a021421e4b059c14c31f4a45327e1a95d"></a>

Gets the value of FromDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a44ae11bf896e45f9eed3c2f7556d5b6d)`() const` <a id="structFRHAPI__PexClientQueryParams_1a44ae11bf896e45f9eed3c2f7556d5b6d"></a>

Gets the value of FromDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a82c35a2612950ec3673400ef4e8e4326)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a82c35a2612950ec3673400ef4e8e4326"></a>

Gets the value of FromDatetime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a27e059ada736c6b77af5c1e6e588e441)`(FDateTime & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a27e059ada736c6b77af5c1e6e588e441"></a>

Fills OutValue with the value of FromDatetime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetFromDatetimeOrNull`](#structFRHAPI__PexClientQueryParams_1ac46e63c85de1f244b013b33d9fa61053)`()` <a id="structFRHAPI__PexClientQueryParams_1ac46e63c85de1f244b013b33d9fa61053"></a>

Returns a pointer to FromDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetFromDatetimeOrNull`](#structFRHAPI__PexClientQueryParams_1a18670ae2748eaeef3bb64a42ecdd3d81)`() const` <a id="structFRHAPI__PexClientQueryParams_1a18670ae2748eaeef3bb64a42ecdd3d81"></a>

Returns a pointer to FromDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a37b97e9bfaadd9e8e21f889741395d26)`(const FDateTime & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a37b97e9bfaadd9e8e21f889741395d26"></a>

Sets the value of FromDatetime_Optional and also sets FromDatetime_IsSet to true.

#### `public inline void `[`SetFromDatetime`](#structFRHAPI__PexClientQueryParams_1a83fdc01c1c84042c741fdb47fad6b2e2)`(FDateTime && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a83fdc01c1c84042c741fdb47fad6b2e2"></a>

Sets the value of FromDatetime_Optional and also sets FromDatetime_IsSet to true using move semantics.

#### `public inline void `[`ClearFromDatetime`](#structFRHAPI__PexClientQueryParams_1af819e2478edc7a8abbc17c8aabeb9c33)`()` <a id="structFRHAPI__PexClientQueryParams_1af819e2478edc7a8abbc17c8aabeb9c33"></a>

Clears the value of FromDatetime_Optional and sets FromDatetime_IsSet to false.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PexClientQueryParams_1a919235c3b3e2b0ccb60f69746d4f53f2)`()` <a id="structFRHAPI__PexClientQueryParams_1a919235c3b3e2b0ccb60f69746d4f53f2"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PexClientQueryParams_1a6ac61960b6537af301fa288a13d864f6)`() const` <a id="structFRHAPI__PexClientQueryParams_1a6ac61960b6537af301fa288a13d864f6"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PexClientQueryParams_1a4aa943131a7d30921d4e4cebe8b1d4fa)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a4aa943131a7d30921d4e4cebe8b1d4fa"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PexClientQueryParams_1a8f294b6cd6a095e9dc70a20dba8ba76d)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a8f294b6cd6a095e9dc70a20dba8ba76d"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PexClientQueryParams_1a9aedfb55b9c06a100e98d1d1f6e7cc11)`()` <a id="structFRHAPI__PexClientQueryParams_1a9aedfb55b9c06a100e98d1d1f6e7cc11"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PexClientQueryParams_1a0138b268b5e66e877e0b032289bc7945)`() const` <a id="structFRHAPI__PexClientQueryParams_1a0138b268b5e66e877e0b032289bc7945"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PexClientQueryParams_1a8c6a3fa3f8a7bbab9fa77f4d85550be8)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a8c6a3fa3f8a7bbab9fa77f4d85550be8"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PexClientQueryParams_1a61a812d54359ad4f926f3fdb67adf4de)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a61a812d54359ad4f926f3fdb67adf4de"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PexClientQueryParams_1a2df51bf7dc6008bdbc9b3210ef466cd7)`()` <a id="structFRHAPI__PexClientQueryParams_1a2df51bf7dc6008bdbc9b3210ef466cd7"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__PexClientQueryParams_1aa36d10dbd9456ba6dea53c4c1f0080d9)`()` <a id="structFRHAPI__PexClientQueryParams_1aa36d10dbd9456ba6dea53c4c1f0080d9"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__PexClientQueryParams_1a46dae54feeff32d76cfe7f38d3498386)`() const` <a id="structFRHAPI__PexClientQueryParams_1a46dae54feeff32d76cfe7f38d3498386"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__PexClientQueryParams_1a65191b9598c502c318df36e4e4fe1a33)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a65191b9598c502c318df36e4e4fe1a33"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__PexClientQueryParams_1a4a7e4b61e2c0c88c7c6fd242ef491725)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a4a7e4b61e2c0c88c7c6fd242ef491725"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__PexClientQueryParams_1a1f8838052da651109c3b9ed17e11e1f1)`()` <a id="structFRHAPI__PexClientQueryParams_1a1f8838052da651109c3b9ed17e11e1f1"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__PexClientQueryParams_1aeaf36100df9affa6cd6cd6b3d3224b81)`() const` <a id="structFRHAPI__PexClientQueryParams_1aeaf36100df9affa6cd6cd6b3d3224b81"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__PexClientQueryParams_1a4778b5e415a579dd444563f423d77d26)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a4778b5e415a579dd444563f423d77d26"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__PexClientQueryParams_1a21dbaa8ed1ab149a7ad567ef5507ab3b)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a21dbaa8ed1ab149a7ad567ef5507ab3b"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__PexClientQueryParams_1aaecae8d85c2afd21cfb95a4f03ebc46d)`()` <a id="structFRHAPI__PexClientQueryParams_1aaecae8d85c2afd21cfb95a4f03ebc46d"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline FString & `[`GetServerId`](#structFRHAPI__PexClientQueryParams_1afc6ba3504b0330d0e6ef32dffe1ece65)`()` <a id="structFRHAPI__PexClientQueryParams_1afc6ba3504b0330d0e6ef32dffe1ece65"></a>

Gets the value of ServerId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetServerId`](#structFRHAPI__PexClientQueryParams_1a56497dbb9152160e3660f2bb6ebddce3)`() const` <a id="structFRHAPI__PexClientQueryParams_1a56497dbb9152160e3660f2bb6ebddce3"></a>

Gets the value of ServerId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetServerId`](#structFRHAPI__PexClientQueryParams_1a415d6477b9d7af17e2adfd14a68b1592)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a415d6477b9d7af17e2adfd14a68b1592"></a>

Gets the value of ServerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetServerId`](#structFRHAPI__PexClientQueryParams_1afbd284aa4ba4486a258db848649811df)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1afbd284aa4ba4486a258db848649811df"></a>

Fills OutValue with the value of ServerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetServerIdOrNull`](#structFRHAPI__PexClientQueryParams_1ac3f6a0ac0e1597e51fad9fed3293595d)`()` <a id="structFRHAPI__PexClientQueryParams_1ac3f6a0ac0e1597e51fad9fed3293595d"></a>

Returns a pointer to ServerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetServerIdOrNull`](#structFRHAPI__PexClientQueryParams_1ae9d5422d18ad0db78c699a06205c98f6)`() const` <a id="structFRHAPI__PexClientQueryParams_1ae9d5422d18ad0db78c699a06205c98f6"></a>

Returns a pointer to ServerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetServerId`](#structFRHAPI__PexClientQueryParams_1a8e5bc1cfcb84df52f9df13964b356e42)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a8e5bc1cfcb84df52f9df13964b356e42"></a>

Sets the value of ServerId_Optional and also sets ServerId_IsSet to true.

#### `public inline void `[`SetServerId`](#structFRHAPI__PexClientQueryParams_1af9f856f7c127f536837b41974739d5e1)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1af9f856f7c127f536837b41974739d5e1"></a>

Sets the value of ServerId_Optional and also sets ServerId_IsSet to true using move semantics.

#### `public inline void `[`ClearServerId`](#structFRHAPI__PexClientQueryParams_1aeea233df1d8a8ca7f718fb40762eb7f9)`()` <a id="structFRHAPI__PexClientQueryParams_1aeea233df1d8a8ca7f718fb40762eb7f9"></a>

Clears the value of ServerId_Optional and sets ServerId_IsSet to false.

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__PexClientQueryParams_1a8fe79c750a855845805cb16059b7027b)`()` <a id="structFRHAPI__PexClientQueryParams_1a8fe79c750a855845805cb16059b7027b"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__PexClientQueryParams_1a4ca57a4f2e4b03d2c2c174ec0a259945)`() const` <a id="structFRHAPI__PexClientQueryParams_1a4ca57a4f2e4b03d2c2c174ec0a259945"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__PexClientQueryParams_1aa0d47d626593a15bd72be9175bb8fdd4)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1aa0d47d626593a15bd72be9175bb8fdd4"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocationId`](#structFRHAPI__PexClientQueryParams_1a6d0e5ed04b515c49e4254ae859330376)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a6d0e5ed04b515c49e4254ae859330376"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__PexClientQueryParams_1adea5087682afcc0fd89a5801e12ca6de)`()` <a id="structFRHAPI__PexClientQueryParams_1adea5087682afcc0fd89a5801e12ca6de"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__PexClientQueryParams_1aedf5e3b82cf00e87141b9819f51b7453)`() const` <a id="structFRHAPI__PexClientQueryParams_1aedf5e3b82cf00e87141b9819f51b7453"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__PexClientQueryParams_1aa5df7258f9b24b9406c6af105016055f)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1aa5df7258f9b24b9406c6af105016055f"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__PexClientQueryParams_1ac91c4ac0b8b35af7ae5855599c0e15ae)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1ac91c4ac0b8b35af7ae5855599c0e15ae"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__PexClientQueryParams_1a15efc2e29fdcb02dfe0927792965c1a9)`()` <a id="structFRHAPI__PexClientQueryParams_1a15efc2e29fdcb02dfe0927792965c1a9"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline FString & `[`GetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1a7cc9ff9a5c8b34b9ca010c3bbc536882)`()` <a id="structFRHAPI__PexClientQueryParams_1a7cc9ff9a5c8b34b9ca010c3bbc536882"></a>

Gets the value of DatacenterProvider_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1a6a8311693604fa7304dcf39154bb3755)`() const` <a id="structFRHAPI__PexClientQueryParams_1a6a8311693604fa7304dcf39154bb3755"></a>

Gets the value of DatacenterProvider_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1af6bde17fb6685eb5888a2c21769f52f6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1af6bde17fb6685eb5888a2c21769f52f6"></a>

Gets the value of DatacenterProvider_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1a20101a3b47339571d013b36c8158e1db)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a20101a3b47339571d013b36c8158e1db"></a>

Fills OutValue with the value of DatacenterProvider_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDatacenterProviderOrNull`](#structFRHAPI__PexClientQueryParams_1a54465615b4627708010bb4d0560b6657)`()` <a id="structFRHAPI__PexClientQueryParams_1a54465615b4627708010bb4d0560b6657"></a>

Returns a pointer to DatacenterProvider_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDatacenterProviderOrNull`](#structFRHAPI__PexClientQueryParams_1a2e6652ce898d19ec4c9a3129c8265701)`() const` <a id="structFRHAPI__PexClientQueryParams_1a2e6652ce898d19ec4c9a3129c8265701"></a>

Returns a pointer to DatacenterProvider_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1ab1fd7ca46623b4062f604b8e1773c945)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1ab1fd7ca46623b4062f604b8e1773c945"></a>

Sets the value of DatacenterProvider_Optional and also sets DatacenterProvider_IsSet to true.

#### `public inline void `[`SetDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1a1bfc3b82febb05f94e0867664cd20183)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a1bfc3b82febb05f94e0867664cd20183"></a>

Sets the value of DatacenterProvider_Optional and also sets DatacenterProvider_IsSet to true using move semantics.

#### `public inline void `[`ClearDatacenterProvider`](#structFRHAPI__PexClientQueryParams_1aea57d2acbf2acb36091148f2e2ba5fd0)`()` <a id="structFRHAPI__PexClientQueryParams_1aea57d2acbf2acb36091148f2e2ba5fd0"></a>

Clears the value of DatacenterProvider_Optional and sets DatacenterProvider_IsSet to false.

#### `public inline FString & `[`GetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1abcc3815e3f9297636df22869ccca57e2)`()` <a id="structFRHAPI__PexClientQueryParams_1abcc3815e3f9297636df22869ccca57e2"></a>

Gets the value of DatacenterLocation_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1a7bdcb708a6da08b37c577bc5fb0e0942)`() const` <a id="structFRHAPI__PexClientQueryParams_1a7bdcb708a6da08b37c577bc5fb0e0942"></a>

Gets the value of DatacenterLocation_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1af347c026d9ecb5d11c3fcdc2b9c052cf)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1af347c026d9ecb5d11c3fcdc2b9c052cf"></a>

Gets the value of DatacenterLocation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1a26e8e8db67775ba37a79b13aa74e6a8c)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a26e8e8db67775ba37a79b13aa74e6a8c"></a>

Fills OutValue with the value of DatacenterLocation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDatacenterLocationOrNull`](#structFRHAPI__PexClientQueryParams_1a6ee5ac898955866882a249c5b0a2aa0f)`()` <a id="structFRHAPI__PexClientQueryParams_1a6ee5ac898955866882a249c5b0a2aa0f"></a>

Returns a pointer to DatacenterLocation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDatacenterLocationOrNull`](#structFRHAPI__PexClientQueryParams_1a01036c49566587fe31863a0fab4ac67a)`() const` <a id="structFRHAPI__PexClientQueryParams_1a01036c49566587fe31863a0fab4ac67a"></a>

Returns a pointer to DatacenterLocation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1a16dfe17c8f3fb01154751bbd1ce53185)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a16dfe17c8f3fb01154751bbd1ce53185"></a>

Sets the value of DatacenterLocation_Optional and also sets DatacenterLocation_IsSet to true.

#### `public inline void `[`SetDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1abac53bba0efb36eb26d2871b93a25449)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1abac53bba0efb36eb26d2871b93a25449"></a>

Sets the value of DatacenterLocation_Optional and also sets DatacenterLocation_IsSet to true using move semantics.

#### `public inline void `[`ClearDatacenterLocation`](#structFRHAPI__PexClientQueryParams_1a8cb1d3eb4af7e07d831b86b25538d5df)`()` <a id="structFRHAPI__PexClientQueryParams_1a8cb1d3eb4af7e07d831b86b25538d5df"></a>

Clears the value of DatacenterLocation_Optional and sets DatacenterLocation_IsSet to false.

#### `public inline FString & `[`GetAddressIp`](#structFRHAPI__PexClientQueryParams_1a4b0589bf4ab76f1a22769a0a83b3dbec)`()` <a id="structFRHAPI__PexClientQueryParams_1a4b0589bf4ab76f1a22769a0a83b3dbec"></a>

Gets the value of AddressIp_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAddressIp`](#structFRHAPI__PexClientQueryParams_1a90ee72111a66ad37d19a065fe166d175)`() const` <a id="structFRHAPI__PexClientQueryParams_1a90ee72111a66ad37d19a065fe166d175"></a>

Gets the value of AddressIp_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAddressIp`](#structFRHAPI__PexClientQueryParams_1aee11c19421d7ab40a42fbd97efa03127)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1aee11c19421d7ab40a42fbd97efa03127"></a>

Gets the value of AddressIp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAddressIp`](#structFRHAPI__PexClientQueryParams_1aba5c50fd4b770d1560fe9f321096ee8a)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1aba5c50fd4b770d1560fe9f321096ee8a"></a>

Fills OutValue with the value of AddressIp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAddressIpOrNull`](#structFRHAPI__PexClientQueryParams_1a17d1cb6e92ea0b2f6a0e15c0c1d93919)`()` <a id="structFRHAPI__PexClientQueryParams_1a17d1cb6e92ea0b2f6a0e15c0c1d93919"></a>

Returns a pointer to AddressIp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAddressIpOrNull`](#structFRHAPI__PexClientQueryParams_1a71ad302217c248c539ec7b5675c42962)`() const` <a id="structFRHAPI__PexClientQueryParams_1a71ad302217c248c539ec7b5675c42962"></a>

Returns a pointer to AddressIp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAddressIp`](#structFRHAPI__PexClientQueryParams_1ae051ce4f785c3b50e9a2f529efdad382)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1ae051ce4f785c3b50e9a2f529efdad382"></a>

Sets the value of AddressIp_Optional and also sets AddressIp_IsSet to true.

#### `public inline void `[`SetAddressIp`](#structFRHAPI__PexClientQueryParams_1aa26890ff127e1ae6880e74d304131093)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1aa26890ff127e1ae6880e74d304131093"></a>

Sets the value of AddressIp_Optional and also sets AddressIp_IsSet to true using move semantics.

#### `public inline void `[`ClearAddressIp`](#structFRHAPI__PexClientQueryParams_1a7967ea31cc000f6743e8c0f75ec14598)`()` <a id="structFRHAPI__PexClientQueryParams_1a7967ea31cc000f6743e8c0f75ec14598"></a>

Clears the value of AddressIp_Optional and sets AddressIp_IsSet to false.

#### `public inline FString & `[`GetMapName`](#structFRHAPI__PexClientQueryParams_1a920b89147c2716df123e27ae687d3f40)`()` <a id="structFRHAPI__PexClientQueryParams_1a920b89147c2716df123e27ae687d3f40"></a>

Gets the value of MapName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMapName`](#structFRHAPI__PexClientQueryParams_1a35d885c13ad66a4cf3a2aacbdfdc3363)`() const` <a id="structFRHAPI__PexClientQueryParams_1a35d885c13ad66a4cf3a2aacbdfdc3363"></a>

Gets the value of MapName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMapName`](#structFRHAPI__PexClientQueryParams_1ad8204078b9278bd7f2fb4afb4ba107b4)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1ad8204078b9278bd7f2fb4afb4ba107b4"></a>

Gets the value of MapName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMapName`](#structFRHAPI__PexClientQueryParams_1abb3cf4014b3b3477cdc5d686151f11b6)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1abb3cf4014b3b3477cdc5d686151f11b6"></a>

Fills OutValue with the value of MapName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMapNameOrNull`](#structFRHAPI__PexClientQueryParams_1a607cc0e260d6c9119dc16feffc442b40)`()` <a id="structFRHAPI__PexClientQueryParams_1a607cc0e260d6c9119dc16feffc442b40"></a>

Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMapNameOrNull`](#structFRHAPI__PexClientQueryParams_1a1292a66eb468c4dc7698d3c97aea7b34)`() const` <a id="structFRHAPI__PexClientQueryParams_1a1292a66eb468c4dc7698d3c97aea7b34"></a>

Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMapName`](#structFRHAPI__PexClientQueryParams_1a3f1f541c2d1711e4e2992972bca87996)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a3f1f541c2d1711e4e2992972bca87996"></a>

Sets the value of MapName_Optional and also sets MapName_IsSet to true.

#### `public inline void `[`SetMapName`](#structFRHAPI__PexClientQueryParams_1aa31f12f9ad7f52192d2a7c8f7093fc0a)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1aa31f12f9ad7f52192d2a7c8f7093fc0a"></a>

Sets the value of MapName_Optional and also sets MapName_IsSet to true using move semantics.

#### `public inline void `[`ClearMapName`](#structFRHAPI__PexClientQueryParams_1a23af631f0db2490d84606e5b16044306)`()` <a id="structFRHAPI__PexClientQueryParams_1a23af631f0db2490d84606e5b16044306"></a>

Clears the value of MapName_Optional and sets MapName_IsSet to false.

#### `public inline FString & `[`GetGameMode`](#structFRHAPI__PexClientQueryParams_1a18ef7ad613f9ca94a2639388fe9efe8a)`()` <a id="structFRHAPI__PexClientQueryParams_1a18ef7ad613f9ca94a2639388fe9efe8a"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__PexClientQueryParams_1a78edeec52b0cb84f55db5629206d57ef)`() const` <a id="structFRHAPI__PexClientQueryParams_1a78edeec52b0cb84f55db5629206d57ef"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__PexClientQueryParams_1a2bb83268802b28cf75f21a8db8deede9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a2bb83268802b28cf75f21a8db8deede9"></a>

Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetGameMode`](#structFRHAPI__PexClientQueryParams_1ac458e327aeb9463fc84ccda537e34b4c)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1ac458e327aeb9463fc84ccda537e34b4c"></a>

Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__PexClientQueryParams_1a5bf5a7db38cbec737a8e80828a673c9c)`()` <a id="structFRHAPI__PexClientQueryParams_1a5bf5a7db38cbec737a8e80828a673c9c"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__PexClientQueryParams_1a40787cd38cab546e4561a63a7cb95036)`() const` <a id="structFRHAPI__PexClientQueryParams_1a40787cd38cab546e4561a63a7cb95036"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetGameMode`](#structFRHAPI__PexClientQueryParams_1a6e54d2243b812e40a43f1fcf0f496eb3)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a6e54d2243b812e40a43f1fcf0f496eb3"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.

#### `public inline void `[`SetGameMode`](#structFRHAPI__PexClientQueryParams_1a155587bb293a0a81ad96db2a3c06c18b)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a155587bb293a0a81ad96db2a3c06c18b"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.

#### `public inline void `[`ClearGameMode`](#structFRHAPI__PexClientQueryParams_1aac1a8c635dd82e38e4c609a0fbe86f25)`()` <a id="structFRHAPI__PexClientQueryParams_1aac1a8c635dd82e38e4c609a0fbe86f25"></a>

Clears the value of GameMode_Optional and sets GameMode_IsSet to false.

#### `public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1aa329448ed9a9648652ad4897eb152bec)`()` <a id="structFRHAPI__PexClientQueryParams_1aa329448ed9a9648652ad4897eb152bec"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a03cadf817d111660fa5760213e7dbd86)`() const` <a id="structFRHAPI__PexClientQueryParams_1a03cadf817d111660fa5760213e7dbd86"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a3d3c2f76d84544a26849d52673162d23)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a3d3c2f76d84544a26849d52673162d23"></a>

Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a26d3554bf796ba47f37a04033ec4ea75)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a26d3554bf796ba47f37a04033ec4ea75"></a>

Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__PexClientQueryParams_1a1028ce9bfd4e8d8d329ee7a9bbb996ee)`()` <a id="structFRHAPI__PexClientQueryParams_1a1028ce9bfd4e8d8d329ee7a9bbb996ee"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__PexClientQueryParams_1a833efe9ffa2b5dea92af1a6512596da5)`() const` <a id="structFRHAPI__PexClientQueryParams_1a833efe9ffa2b5dea92af1a6512596da5"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a7c8707b9e18217caabdfeeec3ade91e8)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a7c8707b9e18217caabdfeeec3ade91e8"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.

#### `public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1a7a485d654820c11f3cf7370a32648a13)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a7a485d654820c11f3cf7370a32648a13"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__PexClientQueryParams_1adaa1656ea77438c969d130c573a1daa4)`()` <a id="structFRHAPI__PexClientQueryParams_1adaa1656ea77438c969d130c573a1daa4"></a>

Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.

#### `public inline int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a87e8263dd0d494a8b724b22e0d5d0c0b)`()` <a id="structFRHAPI__PexClientQueryParams_1a87e8263dd0d494a8b724b22e0d5d0c0b"></a>

Gets the value of ExpectedTeamSize_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a2f7db0725a64fba57dce4955f97d71fc)`() const` <a id="structFRHAPI__PexClientQueryParams_1a2f7db0725a64fba57dce4955f97d71fc"></a>

Gets the value of ExpectedTeamSize_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a29ec1f520a1f71e604bcfc2dd5eef79b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a29ec1f520a1f71e604bcfc2dd5eef79b"></a>

Gets the value of ExpectedTeamSize_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a0c03da8c2610298dad6ef7803bc1bf1a)`(int32 & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a0c03da8c2610298dad6ef7803bc1bf1a"></a>

Fills OutValue with the value of ExpectedTeamSize_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetExpectedTeamSizeOrNull`](#structFRHAPI__PexClientQueryParams_1a5ab362126ecdd266375da751597ca981)`()` <a id="structFRHAPI__PexClientQueryParams_1a5ab362126ecdd266375da751597ca981"></a>

Returns a pointer to ExpectedTeamSize_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetExpectedTeamSizeOrNull`](#structFRHAPI__PexClientQueryParams_1a5e704d869112da14a2b42effac96ae72)`() const` <a id="structFRHAPI__PexClientQueryParams_1a5e704d869112da14a2b42effac96ae72"></a>

Returns a pointer to ExpectedTeamSize_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1a216ddf084e8bff9d9dc291671f621caf)`(const int32 & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a216ddf084e8bff9d9dc291671f621caf"></a>

Sets the value of ExpectedTeamSize_Optional and also sets ExpectedTeamSize_IsSet to true.

#### `public inline void `[`SetExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1ae4f7c85303cbae3224503fbb06afcfa8)`(int32 && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1ae4f7c85303cbae3224503fbb06afcfa8"></a>

Sets the value of ExpectedTeamSize_Optional and also sets ExpectedTeamSize_IsSet to true using move semantics.

#### `public inline void `[`ClearExpectedTeamSize`](#structFRHAPI__PexClientQueryParams_1ad3448b16064500614de3cd37bac272f0)`()` <a id="structFRHAPI__PexClientQueryParams_1ad3448b16064500614de3cd37bac272f0"></a>

Clears the value of ExpectedTeamSize_Optional and sets ExpectedTeamSize_IsSet to false.

#### `public inline bool `[`IsExpectedTeamSizeDefaultValue`](#structFRHAPI__PexClientQueryParams_1a2bacbc7bee2eca6821da91b8e6c498ed)`() const` <a id="structFRHAPI__PexClientQueryParams_1a2bacbc7bee2eca6821da91b8e6c498ed"></a>

Returns true if ExpectedTeamSize_Optional is set and matches the default value.

#### `public inline void `[`SetExpectedTeamSizeToDefault`](#structFRHAPI__PexClientQueryParams_1a0db7303bf79a7d0a5028d75b3a7a2b07)`()` <a id="structFRHAPI__PexClientQueryParams_1a0db7303bf79a7d0a5028d75b3a7a2b07"></a>

Sets the value of ExpectedTeamSize_Optional to its default and also sets ExpectedTeamSize_IsSet to true.

#### `public inline int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1af413b540e790e9acf8466cdacadde52a)`()` <a id="structFRHAPI__PexClientQueryParams_1af413b540e790e9acf8466cdacadde52a"></a>

Gets the value of ExpectedPlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1ad03bb531b9647c62a8df7c5685ba581f)`() const` <a id="structFRHAPI__PexClientQueryParams_1ad03bb531b9647c62a8df7c5685ba581f"></a>

Gets the value of ExpectedPlayerCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1a3cc4c439645f1d14d1750124fee25b66)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a3cc4c439645f1d14d1750124fee25b66"></a>

Gets the value of ExpectedPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1a2addd9b62be4ac8017dea1d6675c7421)`(int32 & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a2addd9b62be4ac8017dea1d6675c7421"></a>

Fills OutValue with the value of ExpectedPlayerCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetExpectedPlayerCountOrNull`](#structFRHAPI__PexClientQueryParams_1ae0bd32a564e81916e9d930fa63897bd2)`()` <a id="structFRHAPI__PexClientQueryParams_1ae0bd32a564e81916e9d930fa63897bd2"></a>

Returns a pointer to ExpectedPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetExpectedPlayerCountOrNull`](#structFRHAPI__PexClientQueryParams_1ad87835d7d6f7a748fc3d31d4230f0db0)`() const` <a id="structFRHAPI__PexClientQueryParams_1ad87835d7d6f7a748fc3d31d4230f0db0"></a>

Returns a pointer to ExpectedPlayerCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1a9e54a4ed3e68b21c580fbb997c951dd4)`(const int32 & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a9e54a4ed3e68b21c580fbb997c951dd4"></a>

Sets the value of ExpectedPlayerCount_Optional and also sets ExpectedPlayerCount_IsSet to true.

#### `public inline void `[`SetExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1ae2dc797957da5f46310c3c57eb72254f)`(int32 && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1ae2dc797957da5f46310c3c57eb72254f"></a>

Sets the value of ExpectedPlayerCount_Optional and also sets ExpectedPlayerCount_IsSet to true using move semantics.

#### `public inline void `[`ClearExpectedPlayerCount`](#structFRHAPI__PexClientQueryParams_1a8dd7aaa5f48afc8d17ed98faa676365a)`()` <a id="structFRHAPI__PexClientQueryParams_1a8dd7aaa5f48afc8d17ed98faa676365a"></a>

Clears the value of ExpectedPlayerCount_Optional and sets ExpectedPlayerCount_IsSet to false.

#### `public inline bool `[`IsExpectedPlayerCountDefaultValue`](#structFRHAPI__PexClientQueryParams_1a52731f83fd1aa20954cb9041f3eecf01)`() const` <a id="structFRHAPI__PexClientQueryParams_1a52731f83fd1aa20954cb9041f3eecf01"></a>

Returns true if ExpectedPlayerCount_Optional is set and matches the default value.

#### `public inline void `[`SetExpectedPlayerCountToDefault`](#structFRHAPI__PexClientQueryParams_1a00ffbbcb58b4d0ff901e066a8ec684ac)`()` <a id="structFRHAPI__PexClientQueryParams_1a00ffbbcb58b4d0ff901e066a8ec684ac"></a>

Sets the value of ExpectedPlayerCount_Optional to its default and also sets ExpectedPlayerCount_IsSet to true.

#### `public inline FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a554f56726aed29927d3e4bf87404c6de)`()` <a id="structFRHAPI__PexClientQueryParams_1a554f56726aed29927d3e4bf87404c6de"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a676789ad49b2069fff2908e5e053dd20)`() const` <a id="structFRHAPI__PexClientQueryParams_1a676789ad49b2069fff2908e5e053dd20"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a338f528ba0163564c0e6ef7084752151)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a338f528ba0163564c0e6ef7084752151"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1af197f798c225c9a3e6ed470e855603c9)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1af197f798c225c9a3e6ed470e855603c9"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a2f5b3dc6148c5af4cda7b93a3c230f71)`()` <a id="structFRHAPI__PexClientQueryParams_1a2f5b3dc6148c5af4cda7b93a3c230f71"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1afec089c384c20845c1942a396e8b94b0)`() const` <a id="structFRHAPI__PexClientQueryParams_1afec089c384c20845c1942a396e8b94b0"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a9e5e44f15cc88cba6e9950a1ed823267)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a9e5e44f15cc88cba6e9950a1ed823267"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a612d00e9bc980fe96d190018dec921d8)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a612d00e9bc980fe96d190018dec921d8"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a2ae935485f8b04d17c2e481d8dee855e)`()` <a id="structFRHAPI__PexClientQueryParams_1a2ae935485f8b04d17c2e481d8dee855e"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a7ebf68922c7845cd645f5696ceaf1fc5)`()` <a id="structFRHAPI__PexClientQueryParams_1a7ebf68922c7845cd645f5696ceaf1fc5"></a>

Gets the value of OwningPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1afd9f930dfecae96b28b2e7b813a4fdab)`() const` <a id="structFRHAPI__PexClientQueryParams_1afd9f930dfecae96b28b2e7b813a4fdab"></a>

Gets the value of OwningPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ae9d701aaf580660357e818e71b159735)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1ae9d701aaf580660357e818e71b159735"></a>

Gets the value of OwningPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a023d63beeb71ee960d9dfa7b086a25eb)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a023d63beeb71ee960d9dfa7b086a25eb"></a>

Fills OutValue with the value of OwningPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOwningPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a4eeed62aee467abbc1f6868a36f5fb3e)`()` <a id="structFRHAPI__PexClientQueryParams_1a4eeed62aee467abbc1f6868a36f5fb3e"></a>

Returns a pointer to OwningPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOwningPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a4b565c826c19421fd974f85bbadd0ddc)`() const` <a id="structFRHAPI__PexClientQueryParams_1a4b565c826c19421fd974f85bbadd0ddc"></a>

Returns a pointer to OwningPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ae0970b3b01b0ae9e940404b8971a1207)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1ae0970b3b01b0ae9e940404b8971a1207"></a>

Sets the value of OwningPlayerUuid_Optional and also sets OwningPlayerUuid_IsSet to true.

#### `public inline void `[`SetOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ac60994596132ef74cf32e6604f966bdf)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1ac60994596132ef74cf32e6604f966bdf"></a>

Sets the value of OwningPlayerUuid_Optional and also sets OwningPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearOwningPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ac9919ee9b1d245855b7a650f187001a0)`()` <a id="structFRHAPI__PexClientQueryParams_1ac9919ee9b1d245855b7a650f187001a0"></a>

Clears the value of OwningPlayerUuid_Optional and sets OwningPlayerUuid_IsSet to false.

#### `public inline FString & `[`GetVersion`](#structFRHAPI__PexClientQueryParams_1a7dfb54792b4de05930568ac9f74c853a)`()` <a id="structFRHAPI__PexClientQueryParams_1a7dfb54792b4de05930568ac9f74c853a"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__PexClientQueryParams_1ae4e9a62478fa8fff6c5cbf599648bad2)`() const` <a id="structFRHAPI__PexClientQueryParams_1ae4e9a62478fa8fff6c5cbf599648bad2"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__PexClientQueryParams_1afd1c2ba4c28e2b69e585b63ce0881ddc)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1afd1c2ba4c28e2b69e585b63ce0881ddc"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVersion`](#structFRHAPI__PexClientQueryParams_1accb8941cbadb88dfa0a2fb2da1255559)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1accb8941cbadb88dfa0a2fb2da1255559"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__PexClientQueryParams_1af3d3dab3d822d884a613c84f1f1ebd9b)`()` <a id="structFRHAPI__PexClientQueryParams_1af3d3dab3d822d884a613c84f1f1ebd9b"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__PexClientQueryParams_1a987c82a3f340e8001cb41d7fd1a93263)`() const` <a id="structFRHAPI__PexClientQueryParams_1a987c82a3f340e8001cb41d7fd1a93263"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVersion`](#structFRHAPI__PexClientQueryParams_1a5553ad2dfdb92e4b53f7315f178749cd)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a5553ad2dfdb92e4b53f7315f178749cd"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline void `[`SetVersion`](#structFRHAPI__PexClientQueryParams_1a8f887cf64dbfd600b8c2e292a587d9ff)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a8f887cf64dbfd600b8c2e292a587d9ff"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__PexClientQueryParams_1af06a75d4f43f3f6081d566b5093b9e4c)`()` <a id="structFRHAPI__PexClientQueryParams_1af06a75d4f43f3f6081d566b5093b9e4c"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline FString & `[`GetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a7bd2a13b0e2bbb1ea1baa53f0eae373f)`()` <a id="structFRHAPI__PexClientQueryParams_1a7bd2a13b0e2bbb1ea1baa53f0eae373f"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a18d81ccaa92d53c6005f4f926520c599)`() const` <a id="structFRHAPI__PexClientQueryParams_1a18d81ccaa92d53c6005f4f926520c599"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a791fb65f65dee9a38614962781fdc956)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1a791fb65f65dee9a38614962781fdc956"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1ac0456ca25497756a8d40777181c1ac22)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1ac0456ca25497756a8d40777181c1ac22"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a80846a0719b57328c30b20ec3c9141ee)`()` <a id="structFRHAPI__PexClientQueryParams_1a80846a0719b57328c30b20ec3c9141ee"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlayerUuidOrNull`](#structFRHAPI__PexClientQueryParams_1a1746179228affb77dbb510cffe7dcc8d)`() const` <a id="structFRHAPI__PexClientQueryParams_1a1746179228affb77dbb510cffe7dcc8d"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a9266df65cb049cee4ab24097a5b15b53)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a9266df65cb049cee4ab24097a5b15b53"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PexClientQueryParams_1aa458af47163afa31c56404d3273b8d7c)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1aa458af47163afa31c56404d3273b8d7c"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__PexClientQueryParams_1a7df837ea53f885c5404762794b265632)`()` <a id="structFRHAPI__PexClientQueryParams_1a7df837ea53f885c5404762794b265632"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FString & `[`GetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1ad94faae678709eb9fdb16d850b58179a)`()` <a id="structFRHAPI__PexClientQueryParams_1ad94faae678709eb9fdb16d850b58179a"></a>

Gets the value of DeviceInfo_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1ae3c2d64f35487accf165144f9f6a8256)`() const` <a id="structFRHAPI__PexClientQueryParams_1ae3c2d64f35487accf165144f9f6a8256"></a>

Gets the value of DeviceInfo_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1aaeb27824a1c1ab9b7e9dd4c99c875dac)`(const FString & DefaultValue) const` <a id="structFRHAPI__PexClientQueryParams_1aaeb27824a1c1ab9b7e9dd4c99c875dac"></a>

Gets the value of DeviceInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1a4a0d46e711990bc8ed54fba8d87992a2)`(FString & OutValue) const` <a id="structFRHAPI__PexClientQueryParams_1a4a0d46e711990bc8ed54fba8d87992a2"></a>

Fills OutValue with the value of DeviceInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDeviceInfoOrNull`](#structFRHAPI__PexClientQueryParams_1ad1c4af5d0d5eb710ea602347f6b7d29e)`()` <a id="structFRHAPI__PexClientQueryParams_1ad1c4af5d0d5eb710ea602347f6b7d29e"></a>

Returns a pointer to DeviceInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDeviceInfoOrNull`](#structFRHAPI__PexClientQueryParams_1af7c65adf3a1f169ed2069f73a726e4d5)`() const` <a id="structFRHAPI__PexClientQueryParams_1af7c65adf3a1f169ed2069f73a726e4d5"></a>

Returns a pointer to DeviceInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1ae2971a2166f0837e2ad36a82653cfd3b)`(const FString & NewValue)` <a id="structFRHAPI__PexClientQueryParams_1ae2971a2166f0837e2ad36a82653cfd3b"></a>

Sets the value of DeviceInfo_Optional and also sets DeviceInfo_IsSet to true.

#### `public inline void `[`SetDeviceInfo`](#structFRHAPI__PexClientQueryParams_1a09532ec29994779d2eb8f43f62e3cf94)`(FString && NewValue)` <a id="structFRHAPI__PexClientQueryParams_1a09532ec29994779d2eb8f43f62e3cf94"></a>

Sets the value of DeviceInfo_Optional and also sets DeviceInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceInfo`](#structFRHAPI__PexClientQueryParams_1a315242b848bc70d8cbdf1520ccb73429)`()` <a id="structFRHAPI__PexClientQueryParams_1a315242b848bc70d8cbdf1520ccb73429"></a>

Clears the value of DeviceInfo_Optional and sets DeviceInfo_IsSet to false.

