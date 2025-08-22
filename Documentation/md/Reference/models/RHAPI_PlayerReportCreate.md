---
title: RHAPI_PlayerReportCreate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReportCreate`](#structFRHAPI__PlayerReportCreate) | 

## struct `FRHAPI_PlayerReportCreate` <a id="structFRHAPI__PlayerReportCreate"></a>

```
struct FRHAPI_PlayerReportCreate
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a) | 
`public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2) | true if SourcePlayerUuid_Optional has been set to a value
`public bool `[`SourcePlayerUuid_IsNull`](#structFRHAPI__PlayerReportCreate_1a0a94ccf26f1144e6d4717b69b2915532) | true if SourcePlayerUuid_Optional has been explicitly set to null
`public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297) | The reason for the report.
`public FString `[`Description_Optional`](#structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6) | 
`public bool `[`Description_IsSet`](#structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b) | true if Description_Optional has been set to a value
`public bool `[`Description_IsNull`](#structFRHAPI__PlayerReportCreate_1a2663c6c07d486e41fd36f3f3139bbe55) | true if Description_Optional has been explicitly set to null
`public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e) | 
`public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae) | true if SessionId_Optional has been set to a value
`public bool `[`SessionId_IsNull`](#structFRHAPI__PlayerReportCreate_1a6add65bffee98686724982fe33b34869) | true if SessionId_Optional has been explicitly set to null
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerReportCreate_1a82aef42873ea07774659af7099661da0) | true if InstanceId_Optional has been explicitly set to null
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerReportCreate_1a5e0896fc5bb1d1cc169674d8eb2b2852) | true if MatchId_Optional has been explicitly set to null
`public FString `[`MatchSegment_Optional`](#structFRHAPI__PlayerReportCreate_1a3e6ec7b6fa751746fc3976f815044bb2) | 
`public bool `[`MatchSegment_IsSet`](#structFRHAPI__PlayerReportCreate_1a47e7b1ab35e62f470c8280657f61a69f) | true if MatchSegment_Optional has been set to a value
`public bool `[`MatchSegment_IsNull`](#structFRHAPI__PlayerReportCreate_1ac7911ae01e25d49292933b3b982686e5) | true if MatchSegment_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5) | Custom data for the report.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportCreate_1a1b9036b5358b0fc4c8b840a9eafd2038)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportCreate_1a48081b7e044ad37f4a1c0ab3cd180294)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ad5a559c17b8842e2c1140a27fb10f2f2)`()` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ac14fc0c809078e1bb9129f02ee149824)`() const` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1abff33491a3bc67261119256f17e4733f)`(const FGuid & DefaultValue) const` | Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ae96ec33930af3fd17dd0763cd82f3f79)`(FGuid & OutValue) const` | Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1ae57d57230298e9d272f69646276f3ae1)`()` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1af4802f9cecf1b299fec2a15e3534a1e8)`() const` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ad8f40fd6a0ba5b95ff5bdd3db5a33906)`(const FGuid & NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ab6a7509dc91da10e1ea2b5947e60fd6b)`(FGuid && NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2)`()` | Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__PlayerReportCreate_1a72cd5cefd6da341a08189d22ab80ffa1)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__PlayerReportCreate_1a5c54941dacdbe4c4fc507ce50aff3b21)`() const` | Checks whether SourcePlayerUuid_Optional is set to null.
`public inline FORCEINLINE ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1a9fc8d5f83ec8ae71923c0347a74c333a)`()` | Gets the value of Reason.
`public inline FORCEINLINE const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1afddf8173db1bbb5e6d9feacfb3b66676)`() const` | Gets the value of Reason.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1abd718a3d5857dfbfd29be5160b8c1b33)`(const ERHAPI_ReportReason & NewValue)` | Sets the value of Reason.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1a87fc0502e30cd0a780948b4efd627690)`(ERHAPI_ReportReason && NewValue)` | Sets the value of Reason using move semantics.
`public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a3a31ca265e6f8eb4def0564ff69992a7)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1ae6b8aa49ca4aceb5dbf6441078b741f4)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1af10644bcb344c64a58fb24de6301f1ec)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a6ee88056b5112410d98a7bfd26f0b703)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1a19f01b07d4dfebe91ba08b921ff48010)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1ad71b7de23d32c00379f530250995e6c2)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1a37103dfee2f6998607176e2684826004)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1a5eb58ac56b9dbcfb4c1ef9b18c7ab9b9)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline FORCEINLINE void `[`SetDescriptionToNull`](#structFRHAPI__PlayerReportCreate_1aab3951459f0687e69c49972bd9c22b52)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDescriptionNull`](#structFRHAPI__PlayerReportCreate_1a36f007e6c272b9711602726d78dc89d4)`() const` | Checks whether Description_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ad67ad07703335cd4caf3702966e08fb8)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a83e43a77df22cb8a65f356bf632cb45a)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ac24245241257f44b1725152d2a5082ab)`(const FString & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a2c4d9d8ecb4266bc04b5e76e9b38312e)`(FString & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1a62aef34ec9a902b486254cfee4fe9221)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1af304543f1f310971bdc62eb90f955e4c)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1a7fe7ebb1a8d381fa02595c36f596d122)`(const FString & NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1ac094a49a56d1c6dfb66a356e4cedc4af)`(FString && NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.
`public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline FORCEINLINE void `[`SetSessionIdToNull`](#structFRHAPI__PlayerReportCreate_1a6b37dc61c5ad413ee06be0e33d6aae2e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSessionIdNull`](#structFRHAPI__PlayerReportCreate_1a0af8c628028f4705316adda8e3ffeb73)`() const` | Checks whether SessionId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a3fd225021e2475717d725e62a22ae819)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1abf958e2a3897952da8bb7aec992fecd5)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a208e4bed6d840b29ecc0482a72018b67)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1aceb1d19179324b239bf5be95209549d2)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1acfb4ba215de3987d45381529c37c98a8)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1a0be5e562c39f8ec2000290f002220f2c)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1a2694bd78b152c3e9ac5e23fe11de8f3f)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1a2203cd01c53ef2033c8da408b8a5fae0)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerReportCreate_1a027c02cc787e4b342467a4fec33a36dc)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerReportCreate_1a74a632f5bde22da8eb8efe0ac5462c65)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a06d95c042ccf9c04c02cc59c3b6dfbc0)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a3a7072417464fb8390974451211399ec)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1adcc4fca88ea2fd615eb2b604a5f60e84)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1aec8dec9c0365572ddf5605f65f86e3bc)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1ab0609b0369911f2b04dbcd5753db0113)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1a1c35661b8e4a1f8868acce9fae43e3fb)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1a60061fe0f8ca70af42ce4696df7d3979)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1aba9cb9a9483bbc71be8a67c618aaa42e)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerReportCreate_1a0ab1216057311b572e5828a93daf10ea)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerReportCreate_1a210e1ca8429ceed9ec481e8b38172520)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a12f21a4e2f63eb2a14036ad68e5322be)`()` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a0380500af2a15f651bf97c33fe28c935)`() const` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1aff3695554d923d468c80a7e410d557ff)`(const FString & DefaultValue) const` | Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1aadffadadf5be365dd0f651a42a34393d)`(FString & OutValue) const` | Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReportCreate_1a540aca9c94cb5c8f7ff6f9008d6631a7)`()` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReportCreate_1a37634516225d24fee8433662ba6ba42e)`() const` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__PlayerReportCreate_1ab784beb3330a06c8abcb3d97df2f29c9)`(const FString & NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a89adc4647af7c16415440189f26788c8)`(FString && NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true using move semantics.
`public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReportCreate_1a77f62ec257566a8945a0cda87a9c9749)`()` | Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchSegmentToNull`](#structFRHAPI__PlayerReportCreate_1a8216b540b6cb0f0512456b41565b8cf6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchSegmentNull`](#structFRHAPI__PlayerReportCreate_1aa915388d9a98855dda1688d9e3918447)`() const` | Checks whether MatchSegment_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1afe1b572784e9b40ba672c55c2367775d)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a9dde75242318423da839e43d8cf72705)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a78544a8390f93eb2ec9877152939e2d2)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1ad96bff33d2b11504b5495b805a19f8d2)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1a49ec6674a85530c4c74bfe71aa4096a2)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1a5dc22b8c7dff87f38fbe031fb977cb7f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1aa935d1653307d2c820a6b843aa2c9110)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1a98089dc7d498afa33081144a3cb011db)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a) <a id="structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a"></a>

#### `public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2) <a id="structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2"></a>

true if SourcePlayerUuid_Optional has been set to a value

#### `public bool `[`SourcePlayerUuid_IsNull`](#structFRHAPI__PlayerReportCreate_1a0a94ccf26f1144e6d4717b69b2915532) <a id="structFRHAPI__PlayerReportCreate_1a0a94ccf26f1144e6d4717b69b2915532"></a>

true if SourcePlayerUuid_Optional has been explicitly set to null

#### `public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297) <a id="structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297"></a>

The reason for the report.

#### `public FString `[`Description_Optional`](#structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6) <a id="structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6"></a>

#### `public bool `[`Description_IsSet`](#structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b) <a id="structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b"></a>

true if Description_Optional has been set to a value

#### `public bool `[`Description_IsNull`](#structFRHAPI__PlayerReportCreate_1a2663c6c07d486e41fd36f3f3139bbe55) <a id="structFRHAPI__PlayerReportCreate_1a2663c6c07d486e41fd36f3f3139bbe55"></a>

true if Description_Optional has been explicitly set to null

#### `public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e) <a id="structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e"></a>

#### `public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae) <a id="structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae"></a>

true if SessionId_Optional has been set to a value

#### `public bool `[`SessionId_IsNull`](#structFRHAPI__PlayerReportCreate_1a6add65bffee98686724982fe33b34869) <a id="structFRHAPI__PlayerReportCreate_1a6add65bffee98686724982fe33b34869"></a>

true if SessionId_Optional has been explicitly set to null

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882) <a id="structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138) <a id="structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerReportCreate_1a82aef42873ea07774659af7099661da0) <a id="structFRHAPI__PlayerReportCreate_1a82aef42873ea07774659af7099661da0"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7) <a id="structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89) <a id="structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerReportCreate_1a5e0896fc5bb1d1cc169674d8eb2b2852) <a id="structFRHAPI__PlayerReportCreate_1a5e0896fc5bb1d1cc169674d8eb2b2852"></a>

true if MatchId_Optional has been explicitly set to null

#### `public FString `[`MatchSegment_Optional`](#structFRHAPI__PlayerReportCreate_1a3e6ec7b6fa751746fc3976f815044bb2) <a id="structFRHAPI__PlayerReportCreate_1a3e6ec7b6fa751746fc3976f815044bb2"></a>

#### `public bool `[`MatchSegment_IsSet`](#structFRHAPI__PlayerReportCreate_1a47e7b1ab35e62f470c8280657f61a69f) <a id="structFRHAPI__PlayerReportCreate_1a47e7b1ab35e62f470c8280657f61a69f"></a>

true if MatchSegment_Optional has been set to a value

#### `public bool `[`MatchSegment_IsNull`](#structFRHAPI__PlayerReportCreate_1ac7911ae01e25d49292933b3b982686e5) <a id="structFRHAPI__PlayerReportCreate_1ac7911ae01e25d49292933b3b982686e5"></a>

true if MatchSegment_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5) <a id="structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5"></a>

Custom data for the report.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264) <a id="structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportCreate_1a1b9036b5358b0fc4c8b840a9eafd2038)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReportCreate_1a1b9036b5358b0fc4c8b840a9eafd2038"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportCreate_1a48081b7e044ad37f4a1c0ab3cd180294)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReportCreate_1a48081b7e044ad37f4a1c0ab3cd180294"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ad5a559c17b8842e2c1140a27fb10f2f2)`()` <a id="structFRHAPI__PlayerReportCreate_1ad5a559c17b8842e2c1140a27fb10f2f2"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ac14fc0c809078e1bb9129f02ee149824)`() const` <a id="structFRHAPI__PlayerReportCreate_1ac14fc0c809078e1bb9129f02ee149824"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1abff33491a3bc67261119256f17e4733f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1abff33491a3bc67261119256f17e4733f"></a>

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ae96ec33930af3fd17dd0763cd82f3f79)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1ae96ec33930af3fd17dd0763cd82f3f79"></a>

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1ae57d57230298e9d272f69646276f3ae1)`()` <a id="structFRHAPI__PlayerReportCreate_1ae57d57230298e9d272f69646276f3ae1"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1af4802f9cecf1b299fec2a15e3534a1e8)`() const` <a id="structFRHAPI__PlayerReportCreate_1af4802f9cecf1b299fec2a15e3534a1e8"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ad8f40fd6a0ba5b95ff5bdd3db5a33906)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ad8f40fd6a0ba5b95ff5bdd3db5a33906"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ab6a7509dc91da10e1ea2b5947e60fd6b)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ab6a7509dc91da10e1ea2b5947e60fd6b"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2)`()` <a id="structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2"></a>

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__PlayerReportCreate_1a72cd5cefd6da341a08189d22ab80ffa1)`()` <a id="structFRHAPI__PlayerReportCreate_1a72cd5cefd6da341a08189d22ab80ffa1"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__PlayerReportCreate_1a5c54941dacdbe4c4fc507ce50aff3b21)`() const` <a id="structFRHAPI__PlayerReportCreate_1a5c54941dacdbe4c4fc507ce50aff3b21"></a>

Checks whether SourcePlayerUuid_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1a9fc8d5f83ec8ae71923c0347a74c333a)`()` <a id="structFRHAPI__PlayerReportCreate_1a9fc8d5f83ec8ae71923c0347a74c333a"></a>

Gets the value of Reason.

#### `public inline FORCEINLINE const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1afddf8173db1bbb5e6d9feacfb3b66676)`() const` <a id="structFRHAPI__PlayerReportCreate_1afddf8173db1bbb5e6d9feacfb3b66676"></a>

Gets the value of Reason.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1abd718a3d5857dfbfd29be5160b8c1b33)`(const ERHAPI_ReportReason & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1abd718a3d5857dfbfd29be5160b8c1b33"></a>

Sets the value of Reason.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1a87fc0502e30cd0a780948b4efd627690)`(ERHAPI_ReportReason && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a87fc0502e30cd0a780948b4efd627690"></a>

Sets the value of Reason using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a3a31ca265e6f8eb4def0564ff69992a7)`()` <a id="structFRHAPI__PlayerReportCreate_1a3a31ca265e6f8eb4def0564ff69992a7"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1ae6b8aa49ca4aceb5dbf6441078b741f4)`() const` <a id="structFRHAPI__PlayerReportCreate_1ae6b8aa49ca4aceb5dbf6441078b741f4"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1af10644bcb344c64a58fb24de6301f1ec)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1af10644bcb344c64a58fb24de6301f1ec"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a6ee88056b5112410d98a7bfd26f0b703)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a6ee88056b5112410d98a7bfd26f0b703"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1a19f01b07d4dfebe91ba08b921ff48010)`()` <a id="structFRHAPI__PlayerReportCreate_1a19f01b07d4dfebe91ba08b921ff48010"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1ad71b7de23d32c00379f530250995e6c2)`() const` <a id="structFRHAPI__PlayerReportCreate_1ad71b7de23d32c00379f530250995e6c2"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1a37103dfee2f6998607176e2684826004)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a37103dfee2f6998607176e2684826004"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1a5eb58ac56b9dbcfb4c1ef9b18c7ab9b9)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a5eb58ac56b9dbcfb4c1ef9b18c7ab9b9"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9)`()` <a id="structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline FORCEINLINE void `[`SetDescriptionToNull`](#structFRHAPI__PlayerReportCreate_1aab3951459f0687e69c49972bd9c22b52)`()` <a id="structFRHAPI__PlayerReportCreate_1aab3951459f0687e69c49972bd9c22b52"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDescriptionNull`](#structFRHAPI__PlayerReportCreate_1a36f007e6c272b9711602726d78dc89d4)`() const` <a id="structFRHAPI__PlayerReportCreate_1a36f007e6c272b9711602726d78dc89d4"></a>

Checks whether Description_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ad67ad07703335cd4caf3702966e08fb8)`()` <a id="structFRHAPI__PlayerReportCreate_1ad67ad07703335cd4caf3702966e08fb8"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a83e43a77df22cb8a65f356bf632cb45a)`() const` <a id="structFRHAPI__PlayerReportCreate_1a83e43a77df22cb8a65f356bf632cb45a"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ac24245241257f44b1725152d2a5082ab)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1ac24245241257f44b1725152d2a5082ab"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a2c4d9d8ecb4266bc04b5e76e9b38312e)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a2c4d9d8ecb4266bc04b5e76e9b38312e"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1a62aef34ec9a902b486254cfee4fe9221)`()` <a id="structFRHAPI__PlayerReportCreate_1a62aef34ec9a902b486254cfee4fe9221"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1af304543f1f310971bdc62eb90f955e4c)`() const` <a id="structFRHAPI__PlayerReportCreate_1af304543f1f310971bdc62eb90f955e4c"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1a7fe7ebb1a8d381fa02595c36f596d122)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a7fe7ebb1a8d381fa02595c36f596d122"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1ac094a49a56d1c6dfb66a356e4cedc4af)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ac094a49a56d1c6dfb66a356e4cedc4af"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92)`()` <a id="structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSessionIdToNull`](#structFRHAPI__PlayerReportCreate_1a6b37dc61c5ad413ee06be0e33d6aae2e)`()` <a id="structFRHAPI__PlayerReportCreate_1a6b37dc61c5ad413ee06be0e33d6aae2e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSessionIdNull`](#structFRHAPI__PlayerReportCreate_1a0af8c628028f4705316adda8e3ffeb73)`() const` <a id="structFRHAPI__PlayerReportCreate_1a0af8c628028f4705316adda8e3ffeb73"></a>

Checks whether SessionId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a3fd225021e2475717d725e62a22ae819)`()` <a id="structFRHAPI__PlayerReportCreate_1a3fd225021e2475717d725e62a22ae819"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1abf958e2a3897952da8bb7aec992fecd5)`() const` <a id="structFRHAPI__PlayerReportCreate_1abf958e2a3897952da8bb7aec992fecd5"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a208e4bed6d840b29ecc0482a72018b67)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1a208e4bed6d840b29ecc0482a72018b67"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1aceb1d19179324b239bf5be95209549d2)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1aceb1d19179324b239bf5be95209549d2"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1acfb4ba215de3987d45381529c37c98a8)`()` <a id="structFRHAPI__PlayerReportCreate_1acfb4ba215de3987d45381529c37c98a8"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1a0be5e562c39f8ec2000290f002220f2c)`() const` <a id="structFRHAPI__PlayerReportCreate_1a0be5e562c39f8ec2000290f002220f2c"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1a2694bd78b152c3e9ac5e23fe11de8f3f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a2694bd78b152c3e9ac5e23fe11de8f3f"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1a2203cd01c53ef2033c8da408b8a5fae0)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a2203cd01c53ef2033c8da408b8a5fae0"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82)`()` <a id="structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerReportCreate_1a027c02cc787e4b342467a4fec33a36dc)`()` <a id="structFRHAPI__PlayerReportCreate_1a027c02cc787e4b342467a4fec33a36dc"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerReportCreate_1a74a632f5bde22da8eb8efe0ac5462c65)`() const` <a id="structFRHAPI__PlayerReportCreate_1a74a632f5bde22da8eb8efe0ac5462c65"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a06d95c042ccf9c04c02cc59c3b6dfbc0)`()` <a id="structFRHAPI__PlayerReportCreate_1a06d95c042ccf9c04c02cc59c3b6dfbc0"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a3a7072417464fb8390974451211399ec)`() const` <a id="structFRHAPI__PlayerReportCreate_1a3a7072417464fb8390974451211399ec"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1adcc4fca88ea2fd615eb2b604a5f60e84)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1adcc4fca88ea2fd615eb2b604a5f60e84"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1aec8dec9c0365572ddf5605f65f86e3bc)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1aec8dec9c0365572ddf5605f65f86e3bc"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1ab0609b0369911f2b04dbcd5753db0113)`()` <a id="structFRHAPI__PlayerReportCreate_1ab0609b0369911f2b04dbcd5753db0113"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1a1c35661b8e4a1f8868acce9fae43e3fb)`() const` <a id="structFRHAPI__PlayerReportCreate_1a1c35661b8e4a1f8868acce9fae43e3fb"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1a60061fe0f8ca70af42ce4696df7d3979)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a60061fe0f8ca70af42ce4696df7d3979"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1aba9cb9a9483bbc71be8a67c618aaa42e)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1aba9cb9a9483bbc71be8a67c618aaa42e"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b)`()` <a id="structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerReportCreate_1a0ab1216057311b572e5828a93daf10ea)`()` <a id="structFRHAPI__PlayerReportCreate_1a0ab1216057311b572e5828a93daf10ea"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerReportCreate_1a210e1ca8429ceed9ec481e8b38172520)`() const` <a id="structFRHAPI__PlayerReportCreate_1a210e1ca8429ceed9ec481e8b38172520"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a12f21a4e2f63eb2a14036ad68e5322be)`()` <a id="structFRHAPI__PlayerReportCreate_1a12f21a4e2f63eb2a14036ad68e5322be"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a0380500af2a15f651bf97c33fe28c935)`() const` <a id="structFRHAPI__PlayerReportCreate_1a0380500af2a15f651bf97c33fe28c935"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1aff3695554d923d468c80a7e410d557ff)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1aff3695554d923d468c80a7e410d557ff"></a>

Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1aadffadadf5be365dd0f651a42a34393d)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1aadffadadf5be365dd0f651a42a34393d"></a>

Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReportCreate_1a540aca9c94cb5c8f7ff6f9008d6631a7)`()` <a id="structFRHAPI__PlayerReportCreate_1a540aca9c94cb5c8f7ff6f9008d6631a7"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReportCreate_1a37634516225d24fee8433662ba6ba42e)`() const` <a id="structFRHAPI__PlayerReportCreate_1a37634516225d24fee8433662ba6ba42e"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__PlayerReportCreate_1ab784beb3330a06c8abcb3d97df2f29c9)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ab784beb3330a06c8abcb3d97df2f29c9"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a89adc4647af7c16415440189f26788c8)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a89adc4647af7c16415440189f26788c8"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReportCreate_1a77f62ec257566a8945a0cda87a9c9749)`()` <a id="structFRHAPI__PlayerReportCreate_1a77f62ec257566a8945a0cda87a9c9749"></a>

Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchSegmentToNull`](#structFRHAPI__PlayerReportCreate_1a8216b540b6cb0f0512456b41565b8cf6)`()` <a id="structFRHAPI__PlayerReportCreate_1a8216b540b6cb0f0512456b41565b8cf6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchSegmentNull`](#structFRHAPI__PlayerReportCreate_1aa915388d9a98855dda1688d9e3918447)`() const` <a id="structFRHAPI__PlayerReportCreate_1aa915388d9a98855dda1688d9e3918447"></a>

Checks whether MatchSegment_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1afe1b572784e9b40ba672c55c2367775d)`()` <a id="structFRHAPI__PlayerReportCreate_1afe1b572784e9b40ba672c55c2367775d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a9dde75242318423da839e43d8cf72705)`() const` <a id="structFRHAPI__PlayerReportCreate_1a9dde75242318423da839e43d8cf72705"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a78544a8390f93eb2ec9877152939e2d2)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1a78544a8390f93eb2ec9877152939e2d2"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1ad96bff33d2b11504b5495b805a19f8d2)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1ad96bff33d2b11504b5495b805a19f8d2"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1a49ec6674a85530c4c74bfe71aa4096a2)`()` <a id="structFRHAPI__PlayerReportCreate_1a49ec6674a85530c4c74bfe71aa4096a2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1a5dc22b8c7dff87f38fbe031fb977cb7f)`() const` <a id="structFRHAPI__PlayerReportCreate_1a5dc22b8c7dff87f38fbe031fb977cb7f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1aa935d1653307d2c820a6b843aa2c9110)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1aa935d1653307d2c820a6b843aa2c9110"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1a98089dc7d498afa33081144a3cb011db)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a98089dc7d498afa33081144a3cb011db"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a)`()` <a id="structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

