---
title: RHAPI_MatchInstance
---

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
`public FString `[`InstanceId`](#structFRHAPI__MatchInstance_1a29c5d5ed6808009b1d642ffda136587e) | Instance ID.
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
`public virtual void `[`WriteJson`](#structFRHAPI__MatchInstance_1a0939a73d4f80018264ce1540fc3232d0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1af77eb811f6eb6ac09ddf23896f2c1784)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a96f1979f4460ec2562b4ea474368486f)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1a1e6f5239480f81856b1be9eed7417971)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1ad62c3b0aa84a2b000105c6498598d32e)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a7274ae9a29c96bf24d3f01bc5a4e6a83)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a71866828573aac3e2b78d8d1d5d9efd5)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a51d417e84670ee74ad8cd5fe20dcf37d)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a384f74b3c870972bac9509bb19b85b91)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a4b12f8df6273482d3bfe91901de767fa)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1ad1d842158916e1c08249d1fa9b2ae5c3)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1acc7f8658af83ecb6b20e3d9acc8b6dcf)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__MatchInstance_1ab63c9a193e6c3ed6b7eaafb6fb942806)`() const` | Checks whether HostPlayerUuid_Optional has been set.
`public inline void `[`SetHostPlayerUuidToNull`](#structFRHAPI__MatchInstance_1acbb3be41fb8d72a19f1cf216a5327d2c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsHostPlayerUuidNull`](#structFRHAPI__MatchInstance_1a877aa9d22818bfffe1cfce1a793883d0)`() const` | Checks whether HostPlayerUuid_Optional is set to null.
`public inline FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a7014cc77fc29c122edcf6f89a3f9129e)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1ac877ac7257b03ba1b7bfbb8722f25afa)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1ac108010fa42923c7421a6a4baa855f62)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1afda14bfc1e1a232ae2adfff4ddd4c4e4)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a1715b996428012575fdb77e1146d7237)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchInstance_1abd12d4dae2af378a0404337ec5026ed3)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a7d3f5c8df219004299e82e46eb848a91)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__MatchInstance_1a68a5b74628bfb554f341774815959cdf)`() const` | Checks whether RegionId_Optional has been set.
`public inline void `[`SetRegionIdToNull`](#structFRHAPI__MatchInstance_1a36e1d781a0fb94b20f004bd2c853d79a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsRegionIdNull`](#structFRHAPI__MatchInstance_1a3e433c1178c345db13cd412164f3b03c)`() const` | Checks whether RegionId_Optional is set to null.
`public inline FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a250209cdd6f278d47466f5e58761943e)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1ab0e4efc967a28fdd2b09ef2c8849c661)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1aa47cfa5a0dc0f3e98832c828f082cdeb)`(const FString & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b)`(FString & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1af71eae23b55b7600187e1501ae0f7ddc)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1ab30f6b3bc79e9092cbbef31b251b00d9)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a7a95594dfb12698f3f0f5358161bbb8a)`(const FString & NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a64edea9489d37e9654a42bdf9d938d7b)`(FString && NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline bool `[`IsInstanceRequestTemplateIdSet`](#structFRHAPI__MatchInstance_1a47d19351056888c754ad16ec952120b1)`() const` | Checks whether InstanceRequestTemplateId_Optional has been set.
`public inline void `[`SetInstanceRequestTemplateIdToNull`](#structFRHAPI__MatchInstance_1ab1a24a4106ad7a88ba832548ec765ee0)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInstanceRequestTemplateIdNull`](#structFRHAPI__MatchInstance_1ac255a01b14dbd85322a4b0844b3e689e)`() const` | Checks whether InstanceRequestTemplateId_Optional is set to null.
`public inline FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a0fd063c259edbb359111de9d7477af2e)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a4ce63e467320a3d7380b825e70604798)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a53b2c9f010fe568f2ffcc77a3c7ce856)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMap`](#structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1acc8c3ed72b00dd1e9b6275fa0fc27f24)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1a77ed0f69c6579402e61a983754b8351e)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMap`](#structFRHAPI__MatchInstance_1a1afda75deca0482eab9bf8ad041cce00)`(const FString & NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline void `[`SetMap`](#structFRHAPI__MatchInstance_1afc4da8d75e9c2f6d0e3fb5b5b989b62e)`(FString && NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.
`public inline void `[`ClearMap`](#structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline bool `[`IsMapSet`](#structFRHAPI__MatchInstance_1a18f62ac426fbc4d2341fe3b1e2536be6)`() const` | Checks whether Map_Optional has been set.
`public inline void `[`SetMapToNull`](#structFRHAPI__MatchInstance_1a255b6c325d350da281066db05347872b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMapNull`](#structFRHAPI__MatchInstance_1a7bac7c2b0a781d4193609a2b17850ddd)`() const` | Checks whether Map_Optional is set to null.
`public inline FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a5d8427a8ca7fe675aebee4f362e65b8a)`()` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1ac99384e4b32c89ed53f9dc6bb63bc3b0)`() const` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1ae32da34d3d3f1f7e98c1d5054091d22c)`(const FString & DefaultValue) const` | Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetGameMode`](#structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1)`(FString & OutValue) const` | Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a29a70db944bc8daab1bb80b6befa8070)`()` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1adf88ad552d867be9365e549410781d58)`() const` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetGameMode`](#structFRHAPI__MatchInstance_1adb52f4ef8ece3eb027f35886ed3004d5)`(const FString & NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.
`public inline void `[`SetGameMode`](#structFRHAPI__MatchInstance_1ae7d6a16ef0b2882dc291caf57650a62e)`(FString && NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.
`public inline void `[`ClearGameMode`](#structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4)`()` | Clears the value of GameMode_Optional and sets GameMode_IsSet to false.
`public inline bool `[`IsGameModeSet`](#structFRHAPI__MatchInstance_1a0cea39813be166d69518333a77914416)`() const` | Checks whether GameMode_Optional has been set.
`public inline void `[`SetGameModeToNull`](#structFRHAPI__MatchInstance_1ad3ef1f24b57bc99d57a905af4711c4ae)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsGameModeNull`](#structFRHAPI__MatchInstance_1a28635287413a8c491111c5df7b50cc54)`() const` | Checks whether GameMode_Optional is set to null.
`public inline ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a292a12b53b751e8d9de00cf0d42b67be)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1af27bd92d2a56c287dda8a589cda6c7f0)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1ab8b8f78cba70787578d41c524d517053)`(const ERHAPI_MatchHostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostType`](#structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38)`(ERHAPI_MatchHostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1a367daa9cd45823797e1e2b4459f064c9)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1ab323354ec7f8529a5747cf2e98ef179f)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostType`](#structFRHAPI__MatchInstance_1a94207ffd70a4712d829645bf6365c46a)`(const ERHAPI_MatchHostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline void `[`SetHostType`](#structFRHAPI__MatchInstance_1afec0ec284c75d044049036c23f09c113)`(ERHAPI_MatchHostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline bool `[`IsHostTypeSet`](#structFRHAPI__MatchInstance_1a0f460abd7655eac8fbee33287ea2d96c)`() const` | Checks whether HostType_Optional has been set.
`public inline void `[`SetHostTypeToNull`](#structFRHAPI__MatchInstance_1acb044a2361227b11cd51c382da1a37b4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsHostTypeNull`](#structFRHAPI__MatchInstance_1a7610aaaf103e85e212c99c878d8b17ec)`() const` | Checks whether HostType_Optional is set to null.

### Members

#### `public FString `[`InstanceId`](#structFRHAPI__MatchInstance_1a29c5d5ed6808009b1d642ffda136587e) <a id="structFRHAPI__MatchInstance_1a29c5d5ed6808009b1d642ffda136587e"></a>

Instance ID.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchInstance_1a0939a73d4f80018264ce1540fc3232d0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchInstance_1a0939a73d4f80018264ce1540fc3232d0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1af77eb811f6eb6ac09ddf23896f2c1784)`()` <a id="structFRHAPI__MatchInstance_1af77eb811f6eb6ac09ddf23896f2c1784"></a>

Gets the value of InstanceId.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a96f1979f4460ec2562b4ea474368486f)`() const` <a id="structFRHAPI__MatchInstance_1a96f1979f4460ec2562b4ea474368486f"></a>

Gets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1a1e6f5239480f81856b1be9eed7417971)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1a1e6f5239480f81856b1be9eed7417971"></a>

Sets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1ad62c3b0aa84a2b000105c6498598d32e)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1ad62c3b0aa84a2b000105c6498598d32e"></a>

Sets the value of InstanceId using move semantics.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a7274ae9a29c96bf24d3f01bc5a4e6a83)`()` <a id="structFRHAPI__MatchInstance_1a7274ae9a29c96bf24d3f01bc5a4e6a83"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a71866828573aac3e2b78d8d1d5d9efd5)`() const` <a id="structFRHAPI__MatchInstance_1a71866828573aac3e2b78d8d1d5d9efd5"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a51d417e84670ee74ad8cd5fe20dcf37d)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a51d417e84670ee74ad8cd5fe20dcf37d"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a384f74b3c870972bac9509bb19b85b91)`()` <a id="structFRHAPI__MatchInstance_1a384f74b3c870972bac9509bb19b85b91"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a4b12f8df6273482d3bfe91901de767fa)`() const` <a id="structFRHAPI__MatchInstance_1a4b12f8df6273482d3bfe91901de767fa"></a>

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

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a7014cc77fc29c122edcf6f89a3f9129e)`()` <a id="structFRHAPI__MatchInstance_1a7014cc77fc29c122edcf6f89a3f9129e"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1ac877ac7257b03ba1b7bfbb8722f25afa)`() const` <a id="structFRHAPI__MatchInstance_1ac877ac7257b03ba1b7bfbb8722f25afa"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1ac108010fa42923c7421a6a4baa855f62)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1ac108010fa42923c7421a6a4baa855f62"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1afda14bfc1e1a232ae2adfff4ddd4c4e4)`()` <a id="structFRHAPI__MatchInstance_1afda14bfc1e1a232ae2adfff4ddd4c4e4"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a1715b996428012575fdb77e1146d7237)`() const` <a id="structFRHAPI__MatchInstance_1a1715b996428012575fdb77e1146d7237"></a>

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

#### `public inline FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a250209cdd6f278d47466f5e58761943e)`()` <a id="structFRHAPI__MatchInstance_1a250209cdd6f278d47466f5e58761943e"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1ab0e4efc967a28fdd2b09ef2c8849c661)`() const` <a id="structFRHAPI__MatchInstance_1ab0e4efc967a28fdd2b09ef2c8849c661"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1aa47cfa5a0dc0f3e98832c828f082cdeb)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1aa47cfa5a0dc0f3e98832c828f082cdeb"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1af71eae23b55b7600187e1501ae0f7ddc)`()` <a id="structFRHAPI__MatchInstance_1af71eae23b55b7600187e1501ae0f7ddc"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1ab30f6b3bc79e9092cbbef31b251b00d9)`() const` <a id="structFRHAPI__MatchInstance_1ab30f6b3bc79e9092cbbef31b251b00d9"></a>

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

#### `public inline FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a0fd063c259edbb359111de9d7477af2e)`()` <a id="structFRHAPI__MatchInstance_1a0fd063c259edbb359111de9d7477af2e"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a4ce63e467320a3d7380b825e70604798)`() const` <a id="structFRHAPI__MatchInstance_1a4ce63e467320a3d7380b825e70604798"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a53b2c9f010fe568f2ffcc77a3c7ce856)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a53b2c9f010fe568f2ffcc77a3c7ce856"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMap`](#structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1acc8c3ed72b00dd1e9b6275fa0fc27f24)`()` <a id="structFRHAPI__MatchInstance_1acc8c3ed72b00dd1e9b6275fa0fc27f24"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1a77ed0f69c6579402e61a983754b8351e)`() const` <a id="structFRHAPI__MatchInstance_1a77ed0f69c6579402e61a983754b8351e"></a>

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

#### `public inline FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a5d8427a8ca7fe675aebee4f362e65b8a)`()` <a id="structFRHAPI__MatchInstance_1a5d8427a8ca7fe675aebee4f362e65b8a"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1ac99384e4b32c89ed53f9dc6bb63bc3b0)`() const` <a id="structFRHAPI__MatchInstance_1ac99384e4b32c89ed53f9dc6bb63bc3b0"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1ae32da34d3d3f1f7e98c1d5054091d22c)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1ae32da34d3d3f1f7e98c1d5054091d22c"></a>

Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetGameMode`](#structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1"></a>

Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a29a70db944bc8daab1bb80b6befa8070)`()` <a id="structFRHAPI__MatchInstance_1a29a70db944bc8daab1bb80b6befa8070"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1adf88ad552d867be9365e549410781d58)`() const` <a id="structFRHAPI__MatchInstance_1adf88ad552d867be9365e549410781d58"></a>

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

#### `public inline ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a292a12b53b751e8d9de00cf0d42b67be)`()` <a id="structFRHAPI__MatchInstance_1a292a12b53b751e8d9de00cf0d42b67be"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1af27bd92d2a56c287dda8a589cda6c7f0)`() const` <a id="structFRHAPI__MatchInstance_1af27bd92d2a56c287dda8a589cda6c7f0"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1ab8b8f78cba70787578d41c524d517053)`(const ERHAPI_MatchHostType & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1ab8b8f78cba70787578d41c524d517053"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostType`](#structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38)`(ERHAPI_MatchHostType & OutValue) const` <a id="structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1a367daa9cd45823797e1e2b4459f064c9)`()` <a id="structFRHAPI__MatchInstance_1a367daa9cd45823797e1e2b4459f064c9"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1ab323354ec7f8529a5747cf2e98ef179f)`() const` <a id="structFRHAPI__MatchInstance_1ab323354ec7f8529a5747cf2e98ef179f"></a>

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

