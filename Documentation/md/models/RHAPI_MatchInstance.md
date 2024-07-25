# group `RHAPI_MatchInstance` <a id="group__RHAPI__MatchInstance"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchInstance`](#structFRHAPI__MatchInstance) | 

## struct `FRHAPI_MatchInstance` <a id="structFRHAPI__MatchInstance"></a>

```
struct FRHAPI_MatchInstance
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__MatchInstance_1a377ab6c8dae9f8665a729d42723f1fb3) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__MatchInstance_1aa44b4f2c34a03a74b5d273384228ab86) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__MatchInstance_1a2bcec77b74782072bfab7e62917c09b1) | true if InstanceId_Optional has been explicitly set to null
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__MatchInstance_1a9258739c332368588ecad94e589f1e12) | 
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__MatchInstance_1a5c6aac7f5779fa2094378925f7a3ba5f) | true if HostPlayerUuid_Optional has been set to a value
`public bool `[`HostPlayerUuid_IsNull`](#structFRHAPI__MatchInstance_1a6cf39f9871bd8f56020df660efe22997) | true if HostPlayerUuid_Optional has been explicitly set to null
`public FString `[`RegionId_Optional`](#structFRHAPI__MatchInstance_1a8a99bc2535679bd24fcefe7a99550f96) | 
`public bool `[`RegionId_IsSet`](#structFRHAPI__MatchInstance_1a7324e5306ba04d195196d052faa0f721) | true if RegionId_Optional has been set to a value
`public bool `[`RegionId_IsNull`](#structFRHAPI__MatchInstance_1aace3c713792f127c021a8003848cceee) | true if RegionId_Optional has been explicitly set to null
`public FString `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchInstance_1a66c84f3ebe472658e561022b29f27275) | 
`public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchInstance_1afbd6d78f91bb0829aa9241691bee8dc0) | true if InstanceRequestTemplateId_Optional has been set to a value
`public bool `[`InstanceRequestTemplateId_IsNull`](#structFRHAPI__MatchInstance_1abfa1f48e0f0cb0ec1658801cb3a07e25) | true if InstanceRequestTemplateId_Optional has been explicitly set to null
`public FString `[`Map_Optional`](#structFRHAPI__MatchInstance_1a0256a8f11af4ac010bf5afdf24552491) | 
`public bool `[`Map_IsSet`](#structFRHAPI__MatchInstance_1a2f4f9e9b85e33991478a01b0bdbe9cb9) | true if Map_Optional has been set to a value
`public bool `[`Map_IsNull`](#structFRHAPI__MatchInstance_1afd5fc1e7247c7d8e22a49758174931d3) | true if Map_Optional has been explicitly set to null
`public FString `[`GameMode_Optional`](#structFRHAPI__MatchInstance_1af44c8341f60c166ac0f91716287d66d8) | 
`public bool `[`GameMode_IsSet`](#structFRHAPI__MatchInstance_1add80f953db4d979fb63449b4a6fc838e) | true if GameMode_Optional has been set to a value
`public bool `[`GameMode_IsNull`](#structFRHAPI__MatchInstance_1a181eaf598e26a7e09981fd3da39d2925) | true if GameMode_Optional has been explicitly set to null
`public ERHAPI_MatchHostType `[`HostType_Optional`](#structFRHAPI__MatchInstance_1a2270a95312a36d004eaca9717bb32163) | 
`public bool `[`HostType_IsSet`](#structFRHAPI__MatchInstance_1a4cb33fa28455711b779b821ca424b6a2) | true if HostType_Optional has been set to a value
`public bool `[`HostType_IsNull`](#structFRHAPI__MatchInstance_1a2985071b896bf4d1c2598ce2fe7591e1) | true if HostType_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__MatchInstance_1ad02f6609665b292c649c06305e493bb1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchInstance_1abef8b80ec1a5aed98908b8e671496dc7)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a84072238e951562d613fea4f132e8c04)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a3e2296368144ea55ed5829ccb4fdc909)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a429d4dac490610aa04a602bf9b7c3874)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a8e416e3ace8afc5386e9c56e138ab836)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__MatchInstance_1abcd2163d733a644851feeb44ce4335ed)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__MatchInstance_1aeed7702808462c4e70dcbdf38df9961b)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1a1e6f5239480f81856b1be9eed7417971)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1ad62c3b0aa84a2b000105c6498598d32e)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__MatchInstance_1aa75a1740116118e11efcaba067009ffd)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__MatchInstance_1a5f49b03acaa557b358da7a467e6e4799)`() const` | Checks whether InstanceId_Optional has been set.
`public inline void `[`SetInstanceIdToNull`](#structFRHAPI__MatchInstance_1ae57a80ce1e4642ac9bf3dc016ecf7b30)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInstanceIdNull`](#structFRHAPI__MatchInstance_1a5a8d1ef1d2668070a816e28e71d32192)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a7812185b9151fb35c7ea62938291b1d0)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1acdb1458c769686fe3d41c942af1c31da)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a67e28841c901856a5989cd008f8d5935)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a1bc0f137f30ec2ac7e2c900fd913df25)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a033649c878f31a424643486da0ca9add)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1ad1d842158916e1c08249d1fa9b2ae5c3)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1acc7f8658af83ecb6b20e3d9acc8b6dcf)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__MatchInstance_1ab63c9a193e6c3ed6b7eaafb6fb942806)`() const` | Checks whether HostPlayerUuid_Optional has been set.
`public inline void `[`SetHostPlayerUuidToNull`](#structFRHAPI__MatchInstance_1acbb3be41fb8d72a19f1cf216a5327d2c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsHostPlayerUuidNull`](#structFRHAPI__MatchInstance_1a877aa9d22818bfffe1cfce1a793883d0)`() const` | Checks whether HostPlayerUuid_Optional is set to null.
`public inline FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1cdabefb612f530298cbdb7b7fc78731)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a8aa60a7a41ca41ef83792f219b3dd23e)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a96b0297cb54e6638f073e748938b2da5)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a8b7e25186b380c9bb15f83067960ff8f)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a41431d8df64493b6770c49cc5d6f2a2c)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchInstance_1abd12d4dae2af378a0404337ec5026ed3)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a7d3f5c8df219004299e82e46eb848a91)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__MatchInstance_1a68a5b74628bfb554f341774815959cdf)`() const` | Checks whether RegionId_Optional has been set.
`public inline void `[`SetRegionIdToNull`](#structFRHAPI__MatchInstance_1a36e1d781a0fb94b20f004bd2c853d79a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsRegionIdNull`](#structFRHAPI__MatchInstance_1a3e433c1178c345db13cd412164f3b03c)`() const` | Checks whether RegionId_Optional is set to null.
`public inline FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a7900a5d6e2a74bc89c7062ebfc47df2d)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a47e02bed696ee79aeffa396127545dab)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a98b531f8780b58f4bf5067cb8f041e46)`(const FString & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b)`(FString & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a356d34f5bb24b6010a301ed7ac953795)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a1010c5aef4fa9409fdca99b64bed9a27)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a7a95594dfb12698f3f0f5358161bbb8a)`(const FString & NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a64edea9489d37e9654a42bdf9d938d7b)`(FString && NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline bool `[`IsInstanceRequestTemplateIdSet`](#structFRHAPI__MatchInstance_1a47d19351056888c754ad16ec952120b1)`() const` | Checks whether InstanceRequestTemplateId_Optional has been set.
`public inline void `[`SetInstanceRequestTemplateIdToNull`](#structFRHAPI__MatchInstance_1ab1a24a4106ad7a88ba832548ec765ee0)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInstanceRequestTemplateIdNull`](#structFRHAPI__MatchInstance_1ac255a01b14dbd85322a4b0844b3e689e)`() const` | Checks whether InstanceRequestTemplateId_Optional is set to null.
`public inline FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a571a190bcdf760a5e353db127010ba12)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a1fa1f11fedef4bb65ac354d3aec5e926)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a80d0a9278ca4a4ddb33d0fd518bce39b)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMap`](#structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1af19fc27636d5ab130ebe0d650b086e3c)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1ae9270ce2e1b4c4e6ac9fad264df05295)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMap`](#structFRHAPI__MatchInstance_1a1afda75deca0482eab9bf8ad041cce00)`(const FString & NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline void `[`SetMap`](#structFRHAPI__MatchInstance_1afc4da8d75e9c2f6d0e3fb5b5b989b62e)`(FString && NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.
`public inline void `[`ClearMap`](#structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline bool `[`IsMapSet`](#structFRHAPI__MatchInstance_1a18f62ac426fbc4d2341fe3b1e2536be6)`() const` | Checks whether Map_Optional has been set.
`public inline void `[`SetMapToNull`](#structFRHAPI__MatchInstance_1a255b6c325d350da281066db05347872b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMapNull`](#structFRHAPI__MatchInstance_1a7bac7c2b0a781d4193609a2b17850ddd)`() const` | Checks whether Map_Optional is set to null.
`public inline FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1aa5b8e824b479ea399c822b8daa878544)`()` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a0c2bc216b23b5cdd6b6b7efcd882c312)`() const` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1aaf6bb5246b2460bf567b60fbcae16a61)`(const FString & DefaultValue) const` | Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetGameMode`](#structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1)`(FString & OutValue) const` | Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a8c4f49987c8587c57061419b70438204)`()` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a1b0299ca07450e935492618288f5ae28)`() const` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetGameMode`](#structFRHAPI__MatchInstance_1adb52f4ef8ece3eb027f35886ed3004d5)`(const FString & NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.
`public inline void `[`SetGameMode`](#structFRHAPI__MatchInstance_1ae7d6a16ef0b2882dc291caf57650a62e)`(FString && NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.
`public inline void `[`ClearGameMode`](#structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4)`()` | Clears the value of GameMode_Optional and sets GameMode_IsSet to false.
`public inline bool `[`IsGameModeSet`](#structFRHAPI__MatchInstance_1a0cea39813be166d69518333a77914416)`() const` | Checks whether GameMode_Optional has been set.
`public inline void `[`SetGameModeToNull`](#structFRHAPI__MatchInstance_1ad3ef1f24b57bc99d57a905af4711c4ae)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsGameModeNull`](#structFRHAPI__MatchInstance_1a28635287413a8c491111c5df7b50cc54)`() const` | Checks whether GameMode_Optional is set to null.
`public inline ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a122d3eed6d08d9a9a117f23f05ec7c99)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1afd3d448d7308788e3102e4b9b8b99b77)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a10a9c56dae77b296cbfe83300878e95b)`(const ERHAPI_MatchHostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostType`](#structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38)`(ERHAPI_MatchHostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1aa660a00d3d2dc2dbacb200269d8912d6)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1a28f47a6c7821585dacf1b2fbc4704e96)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostType`](#structFRHAPI__MatchInstance_1a94207ffd70a4712d829645bf6365c46a)`(const ERHAPI_MatchHostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline void `[`SetHostType`](#structFRHAPI__MatchInstance_1afec0ec284c75d044049036c23f09c113)`(ERHAPI_MatchHostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline bool `[`IsHostTypeSet`](#structFRHAPI__MatchInstance_1a0f460abd7655eac8fbee33287ea2d96c)`() const` | Checks whether HostType_Optional has been set.
`public inline void `[`SetHostTypeToNull`](#structFRHAPI__MatchInstance_1acb044a2361227b11cd51c382da1a37b4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsHostTypeNull`](#structFRHAPI__MatchInstance_1a7610aaaf103e85e212c99c878d8b17ec)`() const` | Checks whether HostType_Optional is set to null.

### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__MatchInstance_1a377ab6c8dae9f8665a729d42723f1fb3) <a id="structFRHAPI__MatchInstance_1a377ab6c8dae9f8665a729d42723f1fb3"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__MatchInstance_1aa44b4f2c34a03a74b5d273384228ab86) <a id="structFRHAPI__MatchInstance_1aa44b4f2c34a03a74b5d273384228ab86"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__MatchInstance_1a2bcec77b74782072bfab7e62917c09b1) <a id="structFRHAPI__MatchInstance_1a2bcec77b74782072bfab7e62917c09b1"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__MatchInstance_1a9258739c332368588ecad94e589f1e12) <a id="structFRHAPI__MatchInstance_1a9258739c332368588ecad94e589f1e12"></a>

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__MatchInstance_1a5c6aac7f5779fa2094378925f7a3ba5f) <a id="structFRHAPI__MatchInstance_1a5c6aac7f5779fa2094378925f7a3ba5f"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public bool `[`HostPlayerUuid_IsNull`](#structFRHAPI__MatchInstance_1a6cf39f9871bd8f56020df660efe22997) <a id="structFRHAPI__MatchInstance_1a6cf39f9871bd8f56020df660efe22997"></a>

true if HostPlayerUuid_Optional has been explicitly set to null

#### `public FString `[`RegionId_Optional`](#structFRHAPI__MatchInstance_1a8a99bc2535679bd24fcefe7a99550f96) <a id="structFRHAPI__MatchInstance_1a8a99bc2535679bd24fcefe7a99550f96"></a>

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__MatchInstance_1a7324e5306ba04d195196d052faa0f721) <a id="structFRHAPI__MatchInstance_1a7324e5306ba04d195196d052faa0f721"></a>

true if RegionId_Optional has been set to a value

#### `public bool `[`RegionId_IsNull`](#structFRHAPI__MatchInstance_1aace3c713792f127c021a8003848cceee) <a id="structFRHAPI__MatchInstance_1aace3c713792f127c021a8003848cceee"></a>

true if RegionId_Optional has been explicitly set to null

#### `public FString `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchInstance_1a66c84f3ebe472658e561022b29f27275) <a id="structFRHAPI__MatchInstance_1a66c84f3ebe472658e561022b29f27275"></a>

#### `public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchInstance_1afbd6d78f91bb0829aa9241691bee8dc0) <a id="structFRHAPI__MatchInstance_1afbd6d78f91bb0829aa9241691bee8dc0"></a>

true if InstanceRequestTemplateId_Optional has been set to a value

#### `public bool `[`InstanceRequestTemplateId_IsNull`](#structFRHAPI__MatchInstance_1abfa1f48e0f0cb0ec1658801cb3a07e25) <a id="structFRHAPI__MatchInstance_1abfa1f48e0f0cb0ec1658801cb3a07e25"></a>

true if InstanceRequestTemplateId_Optional has been explicitly set to null

#### `public FString `[`Map_Optional`](#structFRHAPI__MatchInstance_1a0256a8f11af4ac010bf5afdf24552491) <a id="structFRHAPI__MatchInstance_1a0256a8f11af4ac010bf5afdf24552491"></a>

#### `public bool `[`Map_IsSet`](#structFRHAPI__MatchInstance_1a2f4f9e9b85e33991478a01b0bdbe9cb9) <a id="structFRHAPI__MatchInstance_1a2f4f9e9b85e33991478a01b0bdbe9cb9"></a>

true if Map_Optional has been set to a value

#### `public bool `[`Map_IsNull`](#structFRHAPI__MatchInstance_1afd5fc1e7247c7d8e22a49758174931d3) <a id="structFRHAPI__MatchInstance_1afd5fc1e7247c7d8e22a49758174931d3"></a>

true if Map_Optional has been explicitly set to null

#### `public FString `[`GameMode_Optional`](#structFRHAPI__MatchInstance_1af44c8341f60c166ac0f91716287d66d8) <a id="structFRHAPI__MatchInstance_1af44c8341f60c166ac0f91716287d66d8"></a>

#### `public bool `[`GameMode_IsSet`](#structFRHAPI__MatchInstance_1add80f953db4d979fb63449b4a6fc838e) <a id="structFRHAPI__MatchInstance_1add80f953db4d979fb63449b4a6fc838e"></a>

true if GameMode_Optional has been set to a value

#### `public bool `[`GameMode_IsNull`](#structFRHAPI__MatchInstance_1a181eaf598e26a7e09981fd3da39d2925) <a id="structFRHAPI__MatchInstance_1a181eaf598e26a7e09981fd3da39d2925"></a>

true if GameMode_Optional has been explicitly set to null

#### `public ERHAPI_MatchHostType `[`HostType_Optional`](#structFRHAPI__MatchInstance_1a2270a95312a36d004eaca9717bb32163) <a id="structFRHAPI__MatchInstance_1a2270a95312a36d004eaca9717bb32163"></a>

#### `public bool `[`HostType_IsSet`](#structFRHAPI__MatchInstance_1a4cb33fa28455711b779b821ca424b6a2) <a id="structFRHAPI__MatchInstance_1a4cb33fa28455711b779b821ca424b6a2"></a>

true if HostType_Optional has been set to a value

#### `public bool `[`HostType_IsNull`](#structFRHAPI__MatchInstance_1a2985071b896bf4d1c2598ce2fe7591e1) <a id="structFRHAPI__MatchInstance_1a2985071b896bf4d1c2598ce2fe7591e1"></a>

true if HostType_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchInstance_1ad02f6609665b292c649c06305e493bb1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchInstance_1ad02f6609665b292c649c06305e493bb1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchInstance_1abef8b80ec1a5aed98908b8e671496dc7)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchInstance_1abef8b80ec1a5aed98908b8e671496dc7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a84072238e951562d613fea4f132e8c04)`()` <a id="structFRHAPI__MatchInstance_1a84072238e951562d613fea4f132e8c04"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a3e2296368144ea55ed5829ccb4fdc909)`() const` <a id="structFRHAPI__MatchInstance_1a3e2296368144ea55ed5829ccb4fdc909"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a429d4dac490610aa04a602bf9b7c3874)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a429d4dac490610aa04a602bf9b7c3874"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a8e416e3ace8afc5386e9c56e138ab836)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a8e416e3ace8afc5386e9c56e138ab836"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__MatchInstance_1abcd2163d733a644851feeb44ce4335ed)`()` <a id="structFRHAPI__MatchInstance_1abcd2163d733a644851feeb44ce4335ed"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__MatchInstance_1aeed7702808462c4e70dcbdf38df9961b)`() const` <a id="structFRHAPI__MatchInstance_1aeed7702808462c4e70dcbdf38df9961b"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1a1e6f5239480f81856b1be9eed7417971)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1a1e6f5239480f81856b1be9eed7417971"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1ad62c3b0aa84a2b000105c6498598d32e)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1ad62c3b0aa84a2b000105c6498598d32e"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__MatchInstance_1aa75a1740116118e11efcaba067009ffd)`()` <a id="structFRHAPI__MatchInstance_1aa75a1740116118e11efcaba067009ffd"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__MatchInstance_1a5f49b03acaa557b358da7a467e6e4799)`() const` <a id="structFRHAPI__MatchInstance_1a5f49b03acaa557b358da7a467e6e4799"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline void `[`SetInstanceIdToNull`](#structFRHAPI__MatchInstance_1ae57a80ce1e4642ac9bf3dc016ecf7b30)`()` <a id="structFRHAPI__MatchInstance_1ae57a80ce1e4642ac9bf3dc016ecf7b30"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInstanceIdNull`](#structFRHAPI__MatchInstance_1a5a8d1ef1d2668070a816e28e71d32192)`() const` <a id="structFRHAPI__MatchInstance_1a5a8d1ef1d2668070a816e28e71d32192"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a7812185b9151fb35c7ea62938291b1d0)`()` <a id="structFRHAPI__MatchInstance_1a7812185b9151fb35c7ea62938291b1d0"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1acdb1458c769686fe3d41c942af1c31da)`() const` <a id="structFRHAPI__MatchInstance_1acdb1458c769686fe3d41c942af1c31da"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a67e28841c901856a5989cd008f8d5935)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a67e28841c901856a5989cd008f8d5935"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a1bc0f137f30ec2ac7e2c900fd913df25)`()` <a id="structFRHAPI__MatchInstance_1a1bc0f137f30ec2ac7e2c900fd913df25"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a033649c878f31a424643486da0ca9add)`() const` <a id="structFRHAPI__MatchInstance_1a033649c878f31a424643486da0ca9add"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1ad1d842158916e1c08249d1fa9b2ae5c3)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchInstance_1ad1d842158916e1c08249d1fa9b2ae5c3"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1acc7f8658af83ecb6b20e3d9acc8b6dcf)`(FGuid && NewValue)` <a id="structFRHAPI__MatchInstance_1acc7f8658af83ecb6b20e3d9acc8b6dcf"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7)`()` <a id="structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__MatchInstance_1ab63c9a193e6c3ed6b7eaafb6fb942806)`() const` <a id="structFRHAPI__MatchInstance_1ab63c9a193e6c3ed6b7eaafb6fb942806"></a>

Checks whether HostPlayerUuid_Optional has been set.

#### `public inline void `[`SetHostPlayerUuidToNull`](#structFRHAPI__MatchInstance_1acbb3be41fb8d72a19f1cf216a5327d2c)`()` <a id="structFRHAPI__MatchInstance_1acbb3be41fb8d72a19f1cf216a5327d2c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsHostPlayerUuidNull`](#structFRHAPI__MatchInstance_1a877aa9d22818bfffe1cfce1a793883d0)`() const` <a id="structFRHAPI__MatchInstance_1a877aa9d22818bfffe1cfce1a793883d0"></a>

Checks whether HostPlayerUuid_Optional is set to null.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1cdabefb612f530298cbdb7b7fc78731)`()` <a id="structFRHAPI__MatchInstance_1a1cdabefb612f530298cbdb7b7fc78731"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a8aa60a7a41ca41ef83792f219b3dd23e)`() const` <a id="structFRHAPI__MatchInstance_1a8aa60a7a41ca41ef83792f219b3dd23e"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a96b0297cb54e6638f073e748938b2da5)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a96b0297cb54e6638f073e748938b2da5"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a8b7e25186b380c9bb15f83067960ff8f)`()` <a id="structFRHAPI__MatchInstance_1a8b7e25186b380c9bb15f83067960ff8f"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a41431d8df64493b6770c49cc5d6f2a2c)`() const` <a id="structFRHAPI__MatchInstance_1a41431d8df64493b6770c49cc5d6f2a2c"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__MatchInstance_1abd12d4dae2af378a0404337ec5026ed3)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1abd12d4dae2af378a0404337ec5026ed3"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a7d3f5c8df219004299e82e46eb848a91)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1a7d3f5c8df219004299e82e46eb848a91"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a)`()` <a id="structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__MatchInstance_1a68a5b74628bfb554f341774815959cdf)`() const` <a id="structFRHAPI__MatchInstance_1a68a5b74628bfb554f341774815959cdf"></a>

Checks whether RegionId_Optional has been set.

#### `public inline void `[`SetRegionIdToNull`](#structFRHAPI__MatchInstance_1a36e1d781a0fb94b20f004bd2c853d79a)`()` <a id="structFRHAPI__MatchInstance_1a36e1d781a0fb94b20f004bd2c853d79a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsRegionIdNull`](#structFRHAPI__MatchInstance_1a3e433c1178c345db13cd412164f3b03c)`() const` <a id="structFRHAPI__MatchInstance_1a3e433c1178c345db13cd412164f3b03c"></a>

Checks whether RegionId_Optional is set to null.

#### `public inline FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a7900a5d6e2a74bc89c7062ebfc47df2d)`()` <a id="structFRHAPI__MatchInstance_1a7900a5d6e2a74bc89c7062ebfc47df2d"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a47e02bed696ee79aeffa396127545dab)`() const` <a id="structFRHAPI__MatchInstance_1a47e02bed696ee79aeffa396127545dab"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a98b531f8780b58f4bf5067cb8f041e46)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a98b531f8780b58f4bf5067cb8f041e46"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a356d34f5bb24b6010a301ed7ac953795)`()` <a id="structFRHAPI__MatchInstance_1a356d34f5bb24b6010a301ed7ac953795"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a1010c5aef4fa9409fdca99b64bed9a27)`() const` <a id="structFRHAPI__MatchInstance_1a1010c5aef4fa9409fdca99b64bed9a27"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a7a95594dfb12698f3f0f5358161bbb8a)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1a7a95594dfb12698f3f0f5358161bbb8a"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a64edea9489d37e9654a42bdf9d938d7b)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1a64edea9489d37e9654a42bdf9d938d7b"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718)`()` <a id="structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

#### `public inline bool `[`IsInstanceRequestTemplateIdSet`](#structFRHAPI__MatchInstance_1a47d19351056888c754ad16ec952120b1)`() const` <a id="structFRHAPI__MatchInstance_1a47d19351056888c754ad16ec952120b1"></a>

Checks whether InstanceRequestTemplateId_Optional has been set.

#### `public inline void `[`SetInstanceRequestTemplateIdToNull`](#structFRHAPI__MatchInstance_1ab1a24a4106ad7a88ba832548ec765ee0)`()` <a id="structFRHAPI__MatchInstance_1ab1a24a4106ad7a88ba832548ec765ee0"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInstanceRequestTemplateIdNull`](#structFRHAPI__MatchInstance_1ac255a01b14dbd85322a4b0844b3e689e)`() const` <a id="structFRHAPI__MatchInstance_1ac255a01b14dbd85322a4b0844b3e689e"></a>

Checks whether InstanceRequestTemplateId_Optional is set to null.

#### `public inline FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a571a190bcdf760a5e353db127010ba12)`()` <a id="structFRHAPI__MatchInstance_1a571a190bcdf760a5e353db127010ba12"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a1fa1f11fedef4bb65ac354d3aec5e926)`() const` <a id="structFRHAPI__MatchInstance_1a1fa1f11fedef4bb65ac354d3aec5e926"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a80d0a9278ca4a4ddb33d0fd518bce39b)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a80d0a9278ca4a4ddb33d0fd518bce39b"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMap`](#structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1af19fc27636d5ab130ebe0d650b086e3c)`()` <a id="structFRHAPI__MatchInstance_1af19fc27636d5ab130ebe0d650b086e3c"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1ae9270ce2e1b4c4e6ac9fad264df05295)`() const` <a id="structFRHAPI__MatchInstance_1ae9270ce2e1b4c4e6ac9fad264df05295"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMap`](#structFRHAPI__MatchInstance_1a1afda75deca0482eab9bf8ad041cce00)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1a1afda75deca0482eab9bf8ad041cce00"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

#### `public inline void `[`SetMap`](#structFRHAPI__MatchInstance_1afc4da8d75e9c2f6d0e3fb5b5b989b62e)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1afc4da8d75e9c2f6d0e3fb5b5b989b62e"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.

#### `public inline void `[`ClearMap`](#structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0)`()` <a id="structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

#### `public inline bool `[`IsMapSet`](#structFRHAPI__MatchInstance_1a18f62ac426fbc4d2341fe3b1e2536be6)`() const` <a id="structFRHAPI__MatchInstance_1a18f62ac426fbc4d2341fe3b1e2536be6"></a>

Checks whether Map_Optional has been set.

#### `public inline void `[`SetMapToNull`](#structFRHAPI__MatchInstance_1a255b6c325d350da281066db05347872b)`()` <a id="structFRHAPI__MatchInstance_1a255b6c325d350da281066db05347872b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMapNull`](#structFRHAPI__MatchInstance_1a7bac7c2b0a781d4193609a2b17850ddd)`() const` <a id="structFRHAPI__MatchInstance_1a7bac7c2b0a781d4193609a2b17850ddd"></a>

Checks whether Map_Optional is set to null.

#### `public inline FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1aa5b8e824b479ea399c822b8daa878544)`()` <a id="structFRHAPI__MatchInstance_1aa5b8e824b479ea399c822b8daa878544"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a0c2bc216b23b5cdd6b6b7efcd882c312)`() const` <a id="structFRHAPI__MatchInstance_1a0c2bc216b23b5cdd6b6b7efcd882c312"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1aaf6bb5246b2460bf567b60fbcae16a61)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1aaf6bb5246b2460bf567b60fbcae16a61"></a>

Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetGameMode`](#structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1"></a>

Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a8c4f49987c8587c57061419b70438204)`()` <a id="structFRHAPI__MatchInstance_1a8c4f49987c8587c57061419b70438204"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a1b0299ca07450e935492618288f5ae28)`() const` <a id="structFRHAPI__MatchInstance_1a1b0299ca07450e935492618288f5ae28"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetGameMode`](#structFRHAPI__MatchInstance_1adb52f4ef8ece3eb027f35886ed3004d5)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1adb52f4ef8ece3eb027f35886ed3004d5"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.

#### `public inline void `[`SetGameMode`](#structFRHAPI__MatchInstance_1ae7d6a16ef0b2882dc291caf57650a62e)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1ae7d6a16ef0b2882dc291caf57650a62e"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.

#### `public inline void `[`ClearGameMode`](#structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4)`()` <a id="structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4"></a>

Clears the value of GameMode_Optional and sets GameMode_IsSet to false.

#### `public inline bool `[`IsGameModeSet`](#structFRHAPI__MatchInstance_1a0cea39813be166d69518333a77914416)`() const` <a id="structFRHAPI__MatchInstance_1a0cea39813be166d69518333a77914416"></a>

Checks whether GameMode_Optional has been set.

#### `public inline void `[`SetGameModeToNull`](#structFRHAPI__MatchInstance_1ad3ef1f24b57bc99d57a905af4711c4ae)`()` <a id="structFRHAPI__MatchInstance_1ad3ef1f24b57bc99d57a905af4711c4ae"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsGameModeNull`](#structFRHAPI__MatchInstance_1a28635287413a8c491111c5df7b50cc54)`() const` <a id="structFRHAPI__MatchInstance_1a28635287413a8c491111c5df7b50cc54"></a>

Checks whether GameMode_Optional is set to null.

#### `public inline ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a122d3eed6d08d9a9a117f23f05ec7c99)`()` <a id="structFRHAPI__MatchInstance_1a122d3eed6d08d9a9a117f23f05ec7c99"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1afd3d448d7308788e3102e4b9b8b99b77)`() const` <a id="structFRHAPI__MatchInstance_1afd3d448d7308788e3102e4b9b8b99b77"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a10a9c56dae77b296cbfe83300878e95b)`(const ERHAPI_MatchHostType & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a10a9c56dae77b296cbfe83300878e95b"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostType`](#structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38)`(ERHAPI_MatchHostType & OutValue) const` <a id="structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1aa660a00d3d2dc2dbacb200269d8912d6)`()` <a id="structFRHAPI__MatchInstance_1aa660a00d3d2dc2dbacb200269d8912d6"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1a28f47a6c7821585dacf1b2fbc4704e96)`() const` <a id="structFRHAPI__MatchInstance_1a28f47a6c7821585dacf1b2fbc4704e96"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostType`](#structFRHAPI__MatchInstance_1a94207ffd70a4712d829645bf6365c46a)`(const ERHAPI_MatchHostType & NewValue)` <a id="structFRHAPI__MatchInstance_1a94207ffd70a4712d829645bf6365c46a"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

#### `public inline void `[`SetHostType`](#structFRHAPI__MatchInstance_1afec0ec284c75d044049036c23f09c113)`(ERHAPI_MatchHostType && NewValue)` <a id="structFRHAPI__MatchInstance_1afec0ec284c75d044049036c23f09c113"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.

#### `public inline void `[`ClearHostType`](#structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9)`()` <a id="structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### `public inline bool `[`IsHostTypeSet`](#structFRHAPI__MatchInstance_1a0f460abd7655eac8fbee33287ea2d96c)`() const` <a id="structFRHAPI__MatchInstance_1a0f460abd7655eac8fbee33287ea2d96c"></a>

Checks whether HostType_Optional has been set.

#### `public inline void `[`SetHostTypeToNull`](#structFRHAPI__MatchInstance_1acb044a2361227b11cd51c382da1a37b4)`()` <a id="structFRHAPI__MatchInstance_1acb044a2361227b11cd51c382da1a37b4"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsHostTypeNull`](#structFRHAPI__MatchInstance_1a7610aaaf103e85e212c99c878d8b17ec)`() const` <a id="structFRHAPI__MatchInstance_1a7610aaaf103e85e212c99c878d8b17ec"></a>

Checks whether HostType_Optional is set to null.

