# RHAPI_MatchInstance <a id="group__RHAPI__MatchInstance"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchInstance`](#structFRHAPI__MatchInstance) | 

## struct `FRHAPI_MatchInstance` <a id="structFRHAPI__MatchInstance"></a>

```
struct FRHAPI_MatchInstance
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__MatchInstance_1a377ab6c8dae9f8665a729d42723f1fb3) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__MatchInstance_1aa44b4f2c34a03a74b5d273384228ab86) | true if InstanceId_Optional has been set to a value
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__MatchInstance_1a9258739c332368588ecad94e589f1e12) | 
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__MatchInstance_1a5c6aac7f5779fa2094378925f7a3ba5f) | true if HostPlayerUuid_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__MatchInstance_1a8a99bc2535679bd24fcefe7a99550f96) | 
`public bool `[`RegionId_IsSet`](#structFRHAPI__MatchInstance_1a7324e5306ba04d195196d052faa0f721) | true if RegionId_Optional has been set to a value
`public FString `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchInstance_1a66c84f3ebe472658e561022b29f27275) | 
`public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchInstance_1afbd6d78f91bb0829aa9241691bee8dc0) | true if InstanceRequestTemplateId_Optional has been set to a value
`public FString `[`Map_Optional`](#structFRHAPI__MatchInstance_1a0256a8f11af4ac010bf5afdf24552491) | 
`public bool `[`Map_IsSet`](#structFRHAPI__MatchInstance_1a2f4f9e9b85e33991478a01b0bdbe9cb9) | true if Map_Optional has been set to a value
`public FString `[`GameMode_Optional`](#structFRHAPI__MatchInstance_1af44c8341f60c166ac0f91716287d66d8) | 
`public bool `[`GameMode_IsSet`](#structFRHAPI__MatchInstance_1add80f953db4d979fb63449b4a6fc838e) | true if GameMode_Optional has been set to a value
`public ERHAPI_MatchHostType `[`HostType_Optional`](#structFRHAPI__MatchInstance_1a2270a95312a36d004eaca9717bb32163) | 
`public bool `[`HostType_IsSet`](#structFRHAPI__MatchInstance_1a4cb33fa28455711b779b821ca424b6a2) | true if HostType_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchInstance_1af5b6104c25a59c02d86b076b11177089)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchInstance_1adadc746e53890f2264390637611ae76e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a84072238e951562d613fea4f132e8c04)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a3e2296368144ea55ed5829ccb4fdc909)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a429d4dac490610aa04a602bf9b7c3874)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a8e416e3ace8afc5386e9c56e138ab836)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__MatchInstance_1abcd2163d733a644851feeb44ce4335ed)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__MatchInstance_1aeed7702808462c4e70dcbdf38df9961b)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1ac9f2c725de23b3ad616dc42add708408)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__MatchInstance_1aa75a1740116118e11efcaba067009ffd)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a7812185b9151fb35c7ea62938291b1d0)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1acdb1458c769686fe3d41c942af1c31da)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a67e28841c901856a5989cd008f8d5935)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a1bc0f137f30ec2ac7e2c900fd913df25)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a033649c878f31a424643486da0ca9add)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1ac7de957e98fc63a0638ad5c199c8e2ac)`(FGuid NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1cdabefb612f530298cbdb7b7fc78731)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a8aa60a7a41ca41ef83792f219b3dd23e)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a96b0297cb54e6638f073e748938b2da5)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a8b7e25186b380c9bb15f83067960ff8f)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a41431d8df64493b6770c49cc5d6f2a2c)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a35378a8b4c5334421477fd269d97e815)`(FString NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`ClearRegionId`](#structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a7900a5d6e2a74bc89c7062ebfc47df2d)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a47e02bed696ee79aeffa396127545dab)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a98b531f8780b58f4bf5067cb8f041e46)`(const FString & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b)`(FString & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a356d34f5bb24b6010a301ed7ac953795)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a1010c5aef4fa9409fdca99b64bed9a27)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1aa23769e27a8acaf0eb594a20674a8d30)`(FString NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a571a190bcdf760a5e353db127010ba12)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a1fa1f11fedef4bb65ac354d3aec5e926)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a80d0a9278ca4a4ddb33d0fd518bce39b)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMap`](#structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1af19fc27636d5ab130ebe0d650b086e3c)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1ae9270ce2e1b4c4e6ac9fad264df05295)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMap`](#structFRHAPI__MatchInstance_1a6bdd43206104f770ad96a6ff31068347)`(FString NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline void `[`ClearMap`](#structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1aa5b8e824b479ea399c822b8daa878544)`()` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a0c2bc216b23b5cdd6b6b7efcd882c312)`() const` | Gets the value of GameMode_Optional, regardless of it having been set.
`public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1aaf6bb5246b2460bf567b60fbcae16a61)`(const FString & DefaultValue) const` | Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetGameMode`](#structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1)`(FString & OutValue) const` | Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a8c4f49987c8587c57061419b70438204)`()` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a1b0299ca07450e935492618288f5ae28)`() const` | Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetGameMode`](#structFRHAPI__MatchInstance_1a6e3711dab03a79331e9be44bcf7afaae)`(FString NewValue)` | Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.
`public inline void `[`ClearGameMode`](#structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4)`()` | Clears the value of GameMode_Optional and sets GameMode_IsSet to false.
`public inline ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a122d3eed6d08d9a9a117f23f05ec7c99)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1afd3d448d7308788e3102e4b9b8b99b77)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a10a9c56dae77b296cbfe83300878e95b)`(const ERHAPI_MatchHostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostType`](#structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38)`(ERHAPI_MatchHostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1aa660a00d3d2dc2dbacb200269d8912d6)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1a28f47a6c7821585dacf1b2fbc4704e96)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostType`](#structFRHAPI__MatchInstance_1a5b8a1ba45e5b526cd992d7c571a81524)`(ERHAPI_MatchHostType NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline void `[`ClearHostType`](#structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__MatchInstance_1a377ab6c8dae9f8665a729d42723f1fb3) <a id="structFRHAPI__MatchInstance_1a377ab6c8dae9f8665a729d42723f1fb3"></a>

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__MatchInstance_1aa44b4f2c34a03a74b5d273384228ab86) <a id="structFRHAPI__MatchInstance_1aa44b4f2c34a03a74b5d273384228ab86"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__MatchInstance_1a9258739c332368588ecad94e589f1e12) <a id="structFRHAPI__MatchInstance_1a9258739c332368588ecad94e589f1e12"></a>

<br>
#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__MatchInstance_1a5c6aac7f5779fa2094378925f7a3ba5f) <a id="structFRHAPI__MatchInstance_1a5c6aac7f5779fa2094378925f7a3ba5f"></a>

true if HostPlayerUuid_Optional has been set to a value

<br>
#### `public FString `[`RegionId_Optional`](#structFRHAPI__MatchInstance_1a8a99bc2535679bd24fcefe7a99550f96) <a id="structFRHAPI__MatchInstance_1a8a99bc2535679bd24fcefe7a99550f96"></a>

<br>
#### `public bool `[`RegionId_IsSet`](#structFRHAPI__MatchInstance_1a7324e5306ba04d195196d052faa0f721) <a id="structFRHAPI__MatchInstance_1a7324e5306ba04d195196d052faa0f721"></a>

true if RegionId_Optional has been set to a value

<br>
#### `public FString `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchInstance_1a66c84f3ebe472658e561022b29f27275) <a id="structFRHAPI__MatchInstance_1a66c84f3ebe472658e561022b29f27275"></a>

<br>
#### `public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchInstance_1afbd6d78f91bb0829aa9241691bee8dc0) <a id="structFRHAPI__MatchInstance_1afbd6d78f91bb0829aa9241691bee8dc0"></a>

true if InstanceRequestTemplateId_Optional has been set to a value

<br>
#### `public FString `[`Map_Optional`](#structFRHAPI__MatchInstance_1a0256a8f11af4ac010bf5afdf24552491) <a id="structFRHAPI__MatchInstance_1a0256a8f11af4ac010bf5afdf24552491"></a>

<br>
#### `public bool `[`Map_IsSet`](#structFRHAPI__MatchInstance_1a2f4f9e9b85e33991478a01b0bdbe9cb9) <a id="structFRHAPI__MatchInstance_1a2f4f9e9b85e33991478a01b0bdbe9cb9"></a>

true if Map_Optional has been set to a value

<br>
#### `public FString `[`GameMode_Optional`](#structFRHAPI__MatchInstance_1af44c8341f60c166ac0f91716287d66d8) <a id="structFRHAPI__MatchInstance_1af44c8341f60c166ac0f91716287d66d8"></a>

<br>
#### `public bool `[`GameMode_IsSet`](#structFRHAPI__MatchInstance_1add80f953db4d979fb63449b4a6fc838e) <a id="structFRHAPI__MatchInstance_1add80f953db4d979fb63449b4a6fc838e"></a>

true if GameMode_Optional has been set to a value

<br>
#### `public ERHAPI_MatchHostType `[`HostType_Optional`](#structFRHAPI__MatchInstance_1a2270a95312a36d004eaca9717bb32163) <a id="structFRHAPI__MatchInstance_1a2270a95312a36d004eaca9717bb32163"></a>

<br>
#### `public bool `[`HostType_IsSet`](#structFRHAPI__MatchInstance_1a4cb33fa28455711b779b821ca424b6a2) <a id="structFRHAPI__MatchInstance_1a4cb33fa28455711b779b821ca424b6a2"></a>

true if HostType_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchInstance_1af5b6104c25a59c02d86b076b11177089)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchInstance_1af5b6104c25a59c02d86b076b11177089"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchInstance_1adadc746e53890f2264390637611ae76e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchInstance_1adadc746e53890f2264390637611ae76e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a84072238e951562d613fea4f132e8c04)`()` <a id="structFRHAPI__MatchInstance_1a84072238e951562d613fea4f132e8c04"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a3e2296368144ea55ed5829ccb4fdc909)`() const` <a id="structFRHAPI__MatchInstance_1a3e2296368144ea55ed5829ccb4fdc909"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a429d4dac490610aa04a602bf9b7c3874)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a429d4dac490610aa04a602bf9b7c3874"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__MatchInstance_1a8e416e3ace8afc5386e9c56e138ab836)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a8e416e3ace8afc5386e9c56e138ab836"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__MatchInstance_1abcd2163d733a644851feeb44ce4335ed)`()` <a id="structFRHAPI__MatchInstance_1abcd2163d733a644851feeb44ce4335ed"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__MatchInstance_1aeed7702808462c4e70dcbdf38df9961b)`() const` <a id="structFRHAPI__MatchInstance_1aeed7702808462c4e70dcbdf38df9961b"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__MatchInstance_1ac9f2c725de23b3ad616dc42add708408)`(FString NewValue)` <a id="structFRHAPI__MatchInstance_1ac9f2c725de23b3ad616dc42add708408"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__MatchInstance_1aa75a1740116118e11efcaba067009ffd)`()` <a id="structFRHAPI__MatchInstance_1aa75a1740116118e11efcaba067009ffd"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a7812185b9151fb35c7ea62938291b1d0)`()` <a id="structFRHAPI__MatchInstance_1a7812185b9151fb35c7ea62938291b1d0"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1acdb1458c769686fe3d41c942af1c31da)`() const` <a id="structFRHAPI__MatchInstance_1acdb1458c769686fe3d41c942af1c31da"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a67e28841c901856a5989cd008f8d5935)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a67e28841c901856a5989cd008f8d5935"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchInstance_1a8664af139a046f0a5f6b116cb29e0487"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a1bc0f137f30ec2ac7e2c900fd913df25)`()` <a id="structFRHAPI__MatchInstance_1a1bc0f137f30ec2ac7e2c900fd913df25"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchInstance_1a033649c878f31a424643486da0ca9add)`() const` <a id="structFRHAPI__MatchInstance_1a033649c878f31a424643486da0ca9add"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchInstance_1ac7de957e98fc63a0638ad5c199c8e2ac)`(FGuid NewValue)` <a id="structFRHAPI__MatchInstance_1ac7de957e98fc63a0638ad5c199c8e2ac"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7)`()` <a id="structFRHAPI__MatchInstance_1a1e12248e3e38843cb038d490f9d278e7"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

<br>
#### `public inline FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1cdabefb612f530298cbdb7b7fc78731)`()` <a id="structFRHAPI__MatchInstance_1a1cdabefb612f530298cbdb7b7fc78731"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a8aa60a7a41ca41ef83792f219b3dd23e)`() const` <a id="structFRHAPI__MatchInstance_1a8aa60a7a41ca41ef83792f219b3dd23e"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchInstance_1a96b0297cb54e6638f073e748938b2da5)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a96b0297cb54e6638f073e748938b2da5"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRegionId`](#structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a1b2a4adbd3e832a9a27e42bf17040cdb"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a8b7e25186b380c9bb15f83067960ff8f)`()` <a id="structFRHAPI__MatchInstance_1a8b7e25186b380c9bb15f83067960ff8f"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__MatchInstance_1a41431d8df64493b6770c49cc5d6f2a2c)`() const` <a id="structFRHAPI__MatchInstance_1a41431d8df64493b6770c49cc5d6f2a2c"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRegionId`](#structFRHAPI__MatchInstance_1a35378a8b4c5334421477fd269d97e815)`(FString NewValue)` <a id="structFRHAPI__MatchInstance_1a35378a8b4c5334421477fd269d97e815"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

<br>
#### `public inline void `[`ClearRegionId`](#structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a)`()` <a id="structFRHAPI__MatchInstance_1a52fb7e034e306dccfb55ac019844d02a"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

<br>
#### `public inline FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a7900a5d6e2a74bc89c7062ebfc47df2d)`()` <a id="structFRHAPI__MatchInstance_1a7900a5d6e2a74bc89c7062ebfc47df2d"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a47e02bed696ee79aeffa396127545dab)`() const` <a id="structFRHAPI__MatchInstance_1a47e02bed696ee79aeffa396127545dab"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a98b531f8780b58f4bf5067cb8f041e46)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a98b531f8780b58f4bf5067cb8f041e46"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a50dfc5c58cc8b479800f4d960699624b"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a356d34f5bb24b6010a301ed7ac953795)`()` <a id="structFRHAPI__MatchInstance_1a356d34f5bb24b6010a301ed7ac953795"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchInstance_1a1010c5aef4fa9409fdca99b64bed9a27)`() const` <a id="structFRHAPI__MatchInstance_1a1010c5aef4fa9409fdca99b64bed9a27"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1aa23769e27a8acaf0eb594a20674a8d30)`(FString NewValue)` <a id="structFRHAPI__MatchInstance_1aa23769e27a8acaf0eb594a20674a8d30"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718)`()` <a id="structFRHAPI__MatchInstance_1a5a30b8e0988c2438faabc0e7fbd2a718"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

<br>
#### `public inline FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a571a190bcdf760a5e353db127010ba12)`()` <a id="structFRHAPI__MatchInstance_1a571a190bcdf760a5e353db127010ba12"></a>

Gets the value of Map_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a1fa1f11fedef4bb65ac354d3aec5e926)`() const` <a id="structFRHAPI__MatchInstance_1a1fa1f11fedef4bb65ac354d3aec5e926"></a>

Gets the value of Map_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMap`](#structFRHAPI__MatchInstance_1a80d0a9278ca4a4ddb33d0fd518bce39b)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a80d0a9278ca4a4ddb33d0fd518bce39b"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMap`](#structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1aecb1d0f1193cefa44e78f1f1e11e7e23"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1af19fc27636d5ab130ebe0d650b086e3c)`()` <a id="structFRHAPI__MatchInstance_1af19fc27636d5ab130ebe0d650b086e3c"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMapOrNull`](#structFRHAPI__MatchInstance_1ae9270ce2e1b4c4e6ac9fad264df05295)`() const` <a id="structFRHAPI__MatchInstance_1ae9270ce2e1b4c4e6ac9fad264df05295"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMap`](#structFRHAPI__MatchInstance_1a6bdd43206104f770ad96a6ff31068347)`(FString NewValue)` <a id="structFRHAPI__MatchInstance_1a6bdd43206104f770ad96a6ff31068347"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

<br>
#### `public inline void `[`ClearMap`](#structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0)`()` <a id="structFRHAPI__MatchInstance_1a96933338a49dd96069cdcfb7812c80d0"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

<br>
#### `public inline FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1aa5b8e824b479ea399c822b8daa878544)`()` <a id="structFRHAPI__MatchInstance_1aa5b8e824b479ea399c822b8daa878544"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1a0c2bc216b23b5cdd6b6b7efcd882c312)`() const` <a id="structFRHAPI__MatchInstance_1a0c2bc216b23b5cdd6b6b7efcd882c312"></a>

Gets the value of GameMode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetGameMode`](#structFRHAPI__MatchInstance_1aaf6bb5246b2460bf567b60fbcae16a61)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1aaf6bb5246b2460bf567b60fbcae16a61"></a>

Gets the value of GameMode_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetGameMode`](#structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1)`(FString & OutValue) const` <a id="structFRHAPI__MatchInstance_1a5f9b7a938d16695dd45c3e728d0d22b1"></a>

Fills OutValue with the value of GameMode_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a8c4f49987c8587c57061419b70438204)`()` <a id="structFRHAPI__MatchInstance_1a8c4f49987c8587c57061419b70438204"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetGameModeOrNull`](#structFRHAPI__MatchInstance_1a1b0299ca07450e935492618288f5ae28)`() const` <a id="structFRHAPI__MatchInstance_1a1b0299ca07450e935492618288f5ae28"></a>

Returns a pointer to GameMode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetGameMode`](#structFRHAPI__MatchInstance_1a6e3711dab03a79331e9be44bcf7afaae)`(FString NewValue)` <a id="structFRHAPI__MatchInstance_1a6e3711dab03a79331e9be44bcf7afaae"></a>

Sets the value of GameMode_Optional and also sets GameMode_IsSet to true.

<br>
#### `public inline void `[`ClearGameMode`](#structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4)`()` <a id="structFRHAPI__MatchInstance_1a036653dccbfeeea170930d93970068c4"></a>

Clears the value of GameMode_Optional and sets GameMode_IsSet to false.

<br>
#### `public inline ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a122d3eed6d08d9a9a117f23f05ec7c99)`()` <a id="structFRHAPI__MatchInstance_1a122d3eed6d08d9a9a117f23f05ec7c99"></a>

Gets the value of HostType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1afd3d448d7308788e3102e4b9b8b99b77)`() const` <a id="structFRHAPI__MatchInstance_1afd3d448d7308788e3102e4b9b8b99b77"></a>

Gets the value of HostType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_MatchHostType & `[`GetHostType`](#structFRHAPI__MatchInstance_1a10a9c56dae77b296cbfe83300878e95b)`(const ERHAPI_MatchHostType & DefaultValue) const` <a id="structFRHAPI__MatchInstance_1a10a9c56dae77b296cbfe83300878e95b"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostType`](#structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38)`(ERHAPI_MatchHostType & OutValue) const` <a id="structFRHAPI__MatchInstance_1abfb962f08ce90d5ba1700d7eea29cf38"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1aa660a00d3d2dc2dbacb200269d8912d6)`()` <a id="structFRHAPI__MatchInstance_1aa660a00d3d2dc2dbacb200269d8912d6"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_MatchHostType * `[`GetHostTypeOrNull`](#structFRHAPI__MatchInstance_1a28f47a6c7821585dacf1b2fbc4704e96)`() const` <a id="structFRHAPI__MatchInstance_1a28f47a6c7821585dacf1b2fbc4704e96"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostType`](#structFRHAPI__MatchInstance_1a5b8a1ba45e5b526cd992d7c571a81524)`(ERHAPI_MatchHostType NewValue)` <a id="structFRHAPI__MatchInstance_1a5b8a1ba45e5b526cd992d7c571a81524"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

<br>
#### `public inline void `[`ClearHostType`](#structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9)`()` <a id="structFRHAPI__MatchInstance_1a2cdc7dda631bde64222f3ec32d9417c9"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

<br>
