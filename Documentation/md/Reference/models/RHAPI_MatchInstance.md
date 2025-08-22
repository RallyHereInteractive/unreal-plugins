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
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1ad694821d0d38f386bee7053af830890f)`()` | Gets the value of InstanceId.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1ade5971a82c41539433ec4f9a9288fb00)`() const` | Gets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1a16a22f7b8db2483a54e7cd3020da27cd)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1aa445a3c18d0c7368ff9682355d814ef9)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a316321f0cb84fb8c5f1f03b603a5a1ea)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a805c43f6e754a255acc7a4664e5da341)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a4a2bd22b26cfff05b3411cb26c126afa)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1af7b87e90108d8c94ab887c2e52bc7216)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1aa13458805d173aa2dd60875145236263)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1af7d3e72cabd94cac36d786cbdf68d843)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a2193c9840f913bcaaef8a63ee11e933b)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a3e39ec30e2bf2bbd47a18b1bf61019a8)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetHostPlayerUuidToNull`](#structFRHAPI__MatchInstance_1aa529c164fcd382dd7af2c4ab9d812e28)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsHostPlayerUuidNull`](#structFRHAPI__MatchInstance_1a85e8aba1616ed4b103a3c8a48179fc69)`() const` | Checks whether HostPlayerUuid_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1acc2a27c6d97db2dea797fdc21c42d7ba)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1aea5d7310529f254f372ecd6cdc6e23bf)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1aeba051e239fa0589d95f4049d15193ac)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__MatchInstance_1a4564a540de826d9874ad763b8fc2bf5c)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1ab80e16c8adf81b83873f3468508eaa25)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a2a9d9ad326624a36b5876acde0943034)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a72d8796825d39270394b5b7d7c4fc7d3)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a14f984b69f4f759c04bfdaa3de946958)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FORCEINLINE void `[`SetRegionIdToNull`](#structFRHAPI__MatchInstance_1ace36214eafc611e5cf7be32456928b82)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRegionIdNull`](#structFRHAPI__MatchInstance_1a25ca26299cf456018cb60cce14e84c3d)`() const` | Checks whether RegionId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1aee51e661d06d9f040e28b5f2cac970a0)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1ac34b96e52cbead7f5b905239760a9fc7)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a98ed256e17b6a2e31930bc6ad9defc1f)`(const FString & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a56ea277bb3f593d16299882cbf07b5e7)`(FString & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a04cfb48e16840fe866e806df610448a5)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1adb33c0e726844157f62e72e089fd473a)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1aa92a2c3317679210c361941dc02256e5)`(const FString & NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1adba29b622024782914db9ac2ae754afd)`(FString && NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateIdToNull`](#structFRHAPI__MatchInstance_1a2a9f50bfb4f6231130dfce0207896727)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInstanceRequestTemplateIdNull`](#structFRHAPI__MatchInstance_1aca7c7a0efca1d6ada6c2e4c92738a346)`() const` | Checks whether InstanceRequestTemplateId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a2e6df17b7fb159914da6736ea58d6807)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1ab88414f438815c59ee3581d4043c8b5a)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1aef1b29ddd32619f43fe306fe87c00396)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMap`](#structFRHAPI__MatchInstance_1a367429f638584491c9d066121ab20f6e)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1aa7e4dec04c16ec54b5ffdade28a553e6)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1a493744fd8d413aeecf30f1fe1b1b3e6f)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__MatchInstance_1ac95b139a6ad2fba7e221e835a47f85c6)`(const FString & NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__MatchInstance_1acb46e0814144baf236b986137fb036bf)`(FString && NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.
`public inline void `[`ClearMap`](#structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline FORCEINLINE void `[`SetMapToNull`](#structFRHAPI__MatchInstance_1ad484050099ef39bbcb04182c0cda668a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMapNull`](#structFRHAPI__MatchInstance_1ac4b7f3c6b4cccd49e998798ca376f45f)`() const` | Checks whether Map_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a919fc63154d5ba674922b2832f3dbf59)`()` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1ae15e12efb6e87a778421bc261237770e)`() const` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a6f85ef67dd4432429e16393bf880202d)`(const FString & DefaultValue) const` | Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetGameMode`](#structFRHAPI__MatchInstance_1a71dd57fafae5fbc5459f36826d744dc7)`(FString & OutValue) const` | Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a30e9e0395721b12cb1da3c2cda2d4606)`()` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a4f2438469aa83383613b5d63d0c31b5f)`() const` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetGameMode`](#structFRHAPI__MatchInstance_1aa6f1c7ae1d0a8d5e033b2918256e43f9)`(const FString & NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.
`public inline FORCEINLINE void `[`SetGameMode`](#structFRHAPI__MatchInstance_1a9c22dfb6581294cf71f18d45f7459a03)`(FString && NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.
`public inline void `[`ClearGameMode`](#structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4)`()` | Clears the value of GameMode_Optional and sets GameMode_IsSet to false.
`public inline FORCEINLINE void `[`SetGameModeToNull`](#structFRHAPI__MatchInstance_1afcaa6427cc5ff1e37e8616e23e37d0bd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsGameModeNull`](#structFRHAPI__MatchInstance_1a3e72500731f11dd878e8d48fc9f350e5)`() const` | Checks whether GameMode_Optional is set to null.
`public inline FORCEINLINE ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a290734f184e4a8a9190bcad4a90431f3)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a3a5f61552f994785fd1edd16e2f1f6c2)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a6de202140b3a4b5a966c1c0428dc3941)`(const ERHAPI_MatchHostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostType`](#structFRHAPI__MatchInstance_1a7adb5588d88b2d2a63a135e33cee485a)`(ERHAPI_MatchHostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1ab5c3b6b34c86dccedc4097ef7e13067b)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1a0d1c5137a7240dd5049dac209255399d)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__MatchInstance_1a6b4e4d17a9bcefdf9424a0ba6b399768)`(const ERHAPI_MatchHostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__MatchInstance_1a0dd2a87cc24c8960593769be6f5e9283)`(ERHAPI_MatchHostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline FORCEINLINE void `[`SetHostTypeToNull`](#structFRHAPI__MatchInstance_1ad6aaa43ac1b215725cbf767a5a4cfee4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsHostTypeNull`](#structFRHAPI__MatchInstance_1a24409fed2be58e135a4e45f12a647550)`() const` | Checks whether HostType_Optional is set to null.

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

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1ad694821d0d38f386bee7053af830890f)`()` <a id="structFRHAPI__MatchInstance_1ad694821d0d38f386bee7053af830890f"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1ade5971a82c41539433ec4f9a9288fb00)`() const` <a id="structFRHAPI__MatchInstance_1ade5971a82c41539433ec4f9a9288fb00"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1a16a22f7b8db2483a54e7cd3020da27cd)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1a16a22f7b8db2483a54e7cd3020da27cd"></a>

Sets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1aa445a3c18d0c7368ff9682355d814ef9)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1aa445a3c18d0c7368ff9682355d814ef9"></a>

Sets the value of InstanceId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a316321f0cb84fb8c5f1f03b603a5a1ea)`()` <a id="structFRHAPI__MatchInstance_1a316321f0cb84fb8c5f1f03b603a5a1ea"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a805c43f6e754a255acc7a4664e5da341)`() const` <a id="structFRHAPI__MatchInstance_1a805c43f6e754a255acc7a4664e5da341"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a4a2bd22b26cfff05b3411cb26c126afa)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a4a2bd22b26cfff05b3411cb26c126afa"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1af7b87e90108d8c94ab887c2e52bc7216)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchInstance_1af7b87e90108d8c94ab887c2e52bc7216"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1aa13458805d173aa2dd60875145236263)`()` <a id="structFRHAPI__MatchInstance_1aa13458805d173aa2dd60875145236263"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1af7d3e72cabd94cac36d786cbdf68d843)`() const` <a id="structFRHAPI__MatchInstance_1af7d3e72cabd94cac36d786cbdf68d843"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a2193c9840f913bcaaef8a63ee11e933b)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchInstance_1a2193c9840f913bcaaef8a63ee11e933b"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a3e39ec30e2bf2bbd47a18b1bf61019a8)`(FGuid && NewValue)` <a id="structFRHAPI__MatchInstance_1a3e39ec30e2bf2bbd47a18b1bf61019a8"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7)`()` <a id="structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuidToNull`](#structFRHAPI__MatchInstance_1aa529c164fcd382dd7af2c4ab9d812e28)`()` <a id="structFRHAPI__MatchInstance_1aa529c164fcd382dd7af2c4ab9d812e28"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsHostPlayerUuidNull`](#structFRHAPI__MatchInstance_1a85e8aba1616ed4b103a3c8a48179fc69)`() const` <a id="structFRHAPI__MatchInstance_1a85e8aba1616ed4b103a3c8a48179fc69"></a>

Checks whether HostPlayerUuid_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1acc2a27c6d97db2dea797fdc21c42d7ba)`()` <a id="structFRHAPI__MatchInstance_1acc2a27c6d97db2dea797fdc21c42d7ba"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1aea5d7310529f254f372ecd6cdc6e23bf)`() const` <a id="structFRHAPI__MatchInstance_1aea5d7310529f254f372ecd6cdc6e23bf"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1aeba051e239fa0589d95f4049d15193ac)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1aeba051e239fa0589d95f4049d15193ac"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__MatchInstance_1a4564a540de826d9874ad763b8fc2bf5c)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a4564a540de826d9874ad763b8fc2bf5c"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1ab80e16c8adf81b83873f3468508eaa25)`()` <a id="structFRHAPI__MatchInstance_1ab80e16c8adf81b83873f3468508eaa25"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a2a9d9ad326624a36b5876acde0943034)`() const` <a id="structFRHAPI__MatchInstance_1a2a9d9ad326624a36b5876acde0943034"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a72d8796825d39270394b5b7d7c4fc7d3)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1a72d8796825d39270394b5b7d7c4fc7d3"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a14f984b69f4f759c04bfdaa3de946958)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1a14f984b69f4f759c04bfdaa3de946958"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a)`()` <a id="structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRegionIdToNull`](#structFRHAPI__MatchInstance_1ace36214eafc611e5cf7be32456928b82)`()` <a id="structFRHAPI__MatchInstance_1ace36214eafc611e5cf7be32456928b82"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRegionIdNull`](#structFRHAPI__MatchInstance_1a25ca26299cf456018cb60cce14e84c3d)`() const` <a id="structFRHAPI__MatchInstance_1a25ca26299cf456018cb60cce14e84c3d"></a>

Checks whether RegionId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1aee51e661d06d9f040e28b5f2cac970a0)`()` <a id="structFRHAPI__MatchInstance_1aee51e661d06d9f040e28b5f2cac970a0"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1ac34b96e52cbead7f5b905239760a9fc7)`() const` <a id="structFRHAPI__MatchInstance_1ac34b96e52cbead7f5b905239760a9fc7"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a98ed256e17b6a2e31930bc6ad9defc1f)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a98ed256e17b6a2e31930bc6ad9defc1f"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a56ea277bb3f593d16299882cbf07b5e7)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a56ea277bb3f593d16299882cbf07b5e7"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a04cfb48e16840fe866e806df610448a5)`()` <a id="structFRHAPI__MatchInstance_1a04cfb48e16840fe866e806df610448a5"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1adb33c0e726844157f62e72e089fd473a)`() const` <a id="structFRHAPI__MatchInstance_1adb33c0e726844157f62e72e089fd473a"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1aa92a2c3317679210c361941dc02256e5)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1aa92a2c3317679210c361941dc02256e5"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1adba29b622024782914db9ac2ae754afd)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1adba29b622024782914db9ac2ae754afd"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718)`()` <a id="structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateIdToNull`](#structFRHAPI__MatchInstance_1a2a9f50bfb4f6231130dfce0207896727)`()` <a id="structFRHAPI__MatchInstance_1a2a9f50bfb4f6231130dfce0207896727"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInstanceRequestTemplateIdNull`](#structFRHAPI__MatchInstance_1aca7c7a0efca1d6ada6c2e4c92738a346)`() const` <a id="structFRHAPI__MatchInstance_1aca7c7a0efca1d6ada6c2e4c92738a346"></a>

Checks whether InstanceRequestTemplateId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a2e6df17b7fb159914da6736ea58d6807)`()` <a id="structFRHAPI__MatchInstance_1a2e6df17b7fb159914da6736ea58d6807"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1ab88414f438815c59ee3581d4043c8b5a)`() const` <a id="structFRHAPI__MatchInstance_1ab88414f438815c59ee3581d4043c8b5a"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1aef1b29ddd32619f43fe306fe87c00396)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1aef1b29ddd32619f43fe306fe87c00396"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMap`](#structFRHAPI__MatchInstance_1a367429f638584491c9d066121ab20f6e)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a367429f638584491c9d066121ab20f6e"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1aa7e4dec04c16ec54b5ffdade28a553e6)`()` <a id="structFRHAPI__MatchInstance_1aa7e4dec04c16ec54b5ffdade28a553e6"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1a493744fd8d413aeecf30f1fe1b1b3e6f)`() const` <a id="structFRHAPI__MatchInstance_1a493744fd8d413aeecf30f1fe1b1b3e6f"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__MatchInstance_1ac95b139a6ad2fba7e221e835a47f85c6)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1ac95b139a6ad2fba7e221e835a47f85c6"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__MatchInstance_1acb46e0814144baf236b986137fb036bf)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1acb46e0814144baf236b986137fb036bf"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.

#### `public inline void `[`ClearMap`](#structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0)`()` <a id="structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMapToNull`](#structFRHAPI__MatchInstance_1ad484050099ef39bbcb04182c0cda668a)`()` <a id="structFRHAPI__MatchInstance_1ad484050099ef39bbcb04182c0cda668a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMapNull`](#structFRHAPI__MatchInstance_1ac4b7f3c6b4cccd49e998798ca376f45f)`() const` <a id="structFRHAPI__MatchInstance_1ac4b7f3c6b4cccd49e998798ca376f45f"></a>

Checks whether Map_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a919fc63154d5ba674922b2832f3dbf59)`()` <a id="structFRHAPI__MatchInstance_1a919fc63154d5ba674922b2832f3dbf59"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1ae15e12efb6e87a778421bc261237770e)`() const` <a id="structFRHAPI__MatchInstance_1ae15e12efb6e87a778421bc261237770e"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a6f85ef67dd4432429e16393bf880202d)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a6f85ef67dd4432429e16393bf880202d"></a>

Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetGameMode`](#structFRHAPI__MatchInstance_1a71dd57fafae5fbc5459f36826d744dc7)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a71dd57fafae5fbc5459f36826d744dc7"></a>

Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a30e9e0395721b12cb1da3c2cda2d4606)`()` <a id="structFRHAPI__MatchInstance_1a30e9e0395721b12cb1da3c2cda2d4606"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a4f2438469aa83383613b5d63d0c31b5f)`() const` <a id="structFRHAPI__MatchInstance_1a4f2438469aa83383613b5d63d0c31b5f"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetGameMode`](#structFRHAPI__MatchInstance_1aa6f1c7ae1d0a8d5e033b2918256e43f9)`(const FString & NewValue)` <a id="structFRHAPI__MatchInstance_1aa6f1c7ae1d0a8d5e033b2918256e43f9"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetGameMode`](#structFRHAPI__MatchInstance_1a9c22dfb6581294cf71f18d45f7459a03)`(FString && NewValue)` <a id="structFRHAPI__MatchInstance_1a9c22dfb6581294cf71f18d45f7459a03"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true using move semantics.

#### `public inline void `[`ClearGameMode`](#structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4)`()` <a id="structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4"></a>

Clears the value of GameMode_Optional and sets GameMode_IsSet to false.

#### `public inline FORCEINLINE void `[`SetGameModeToNull`](#structFRHAPI__MatchInstance_1afcaa6427cc5ff1e37e8616e23e37d0bd)`()` <a id="structFRHAPI__MatchInstance_1afcaa6427cc5ff1e37e8616e23e37d0bd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsGameModeNull`](#structFRHAPI__MatchInstance_1a3e72500731f11dd878e8d48fc9f350e5)`() const` <a id="structFRHAPI__MatchInstance_1a3e72500731f11dd878e8d48fc9f350e5"></a>

Checks whether GameMode_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a290734f184e4a8a9190bcad4a90431f3)`()` <a id="structFRHAPI__MatchInstance_1a290734f184e4a8a9190bcad4a90431f3"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a3a5f61552f994785fd1edd16e2f1f6c2)`() const` <a id="structFRHAPI__MatchInstance_1a3a5f61552f994785fd1edd16e2f1f6c2"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a6de202140b3a4b5a966c1c0428dc3941)`(const ERHAPI_MatchHostType & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a6de202140b3a4b5a966c1c0428dc3941"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostType`](#structFRHAPI__MatchInstance_1a7adb5588d88b2d2a63a135e33cee485a)`(ERHAPI_MatchHostType & OutValue) const` <a id="structFRHAPI__MatchInstance_1a7adb5588d88b2d2a63a135e33cee485a"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1ab5c3b6b34c86dccedc4097ef7e13067b)`()` <a id="structFRHAPI__MatchInstance_1ab5c3b6b34c86dccedc4097ef7e13067b"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1a0d1c5137a7240dd5049dac209255399d)`() const` <a id="structFRHAPI__MatchInstance_1a0d1c5137a7240dd5049dac209255399d"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__MatchInstance_1a6b4e4d17a9bcefdf9424a0ba6b399768)`(const ERHAPI_MatchHostType & NewValue)` <a id="structFRHAPI__MatchInstance_1a6b4e4d17a9bcefdf9424a0ba6b399768"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__MatchInstance_1a0dd2a87cc24c8960593769be6f5e9283)`(ERHAPI_MatchHostType && NewValue)` <a id="structFRHAPI__MatchInstance_1a0dd2a87cc24c8960593769be6f5e9283"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.

#### `public inline void `[`ClearHostType`](#structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9)`()` <a id="structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### `public inline FORCEINLINE void `[`SetHostTypeToNull`](#structFRHAPI__MatchInstance_1ad6aaa43ac1b215725cbf767a5a4cfee4)`()` <a id="structFRHAPI__MatchInstance_1ad6aaa43ac1b215725cbf767a5a4cfee4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsHostTypeNull`](#structFRHAPI__MatchInstance_1a24409fed2be58e135a4e45f12a647550)`() const` <a id="structFRHAPI__MatchInstance_1a24409fed2be58e135a4e45f12a647550"></a>

Checks whether HostType_Optional is set to null.

