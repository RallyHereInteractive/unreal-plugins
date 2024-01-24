# RHAPI_InstanceFubar <a id="group__RHAPI__InstanceFubar"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceFubar`](#structFRHAPI__InstanceFubar) | Information about an instance that has been determined to be FUBAR.

## struct `FRHAPI_InstanceFubar` <a id="structFRHAPI__InstanceFubar"></a>

```
struct FRHAPI_InstanceFubar
  : public FRHAPI_Model
```

Information about an instance that has been determined to be FUBAR.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId`](#structFRHAPI__InstanceFubar_1a5318ab204d0e3dcd9b7ee656af424c0a) | ID for which instance was marked as FUBAR.
`public FString `[`Error`](#structFRHAPI__InstanceFubar_1ad2d05a55c1be83136efe75fcb34f93dd) | Error string describing what caused the instance failure.
`public FString `[`Region`](#structFRHAPI__InstanceFubar_1a02a132ae495f77357f4830eb46551dd3) | What region the failed instance was in.
`public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__InstanceFubar_1a122a2d34f02efafe3017bc1b4d98a8c2) | ID for which matchmaking profile was used to generate the failed instance.
`public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__InstanceFubar_1a729a1afe2b95e7c6374da6f5e70f2148) | true if MatchmakingProfileId_Optional has been set to a value
`public ERHAPI_InstanceSourceProvider `[`InstanceSourceProvider_Optional`](#structFRHAPI__InstanceFubar_1ac0f064b552cfe44769598fd05efcf290) | Which instance provider allocated this failed instance.
`public bool `[`InstanceSourceProvider_IsSet`](#structFRHAPI__InstanceFubar_1af00161ad647256b4aebaa38c55cec24a) | true if InstanceSourceProvider_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceFubar_1a7f886357c7b26160d9522159141cafe5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceFubar_1a16b24745002fcfd27001e5240b3896f9)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceFubar_1a1d812c1274ff20253fff730a711549c9)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceFubar_1a8532875b579372d13f35e3310631701c)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceFubar_1af54eb2bd66c4e8757f47afdc9ec9a780)`(FString NewValue)` | Sets the value of InstanceId.
`public inline FString & `[`GetError`](#structFRHAPI__InstanceFubar_1a87232e0e066459725d7da6db1618d858)`()` | Gets the value of Error.
`public inline const FString & `[`GetError`](#structFRHAPI__InstanceFubar_1af39dce2398eff58d2872c7a7b33d6882)`() const` | Gets the value of Error.
`public inline void `[`SetError`](#structFRHAPI__InstanceFubar_1ad172dbabd7b4975025c1cadb3b989132)`(FString NewValue)` | Sets the value of Error.
`public inline FString & `[`GetRegion`](#structFRHAPI__InstanceFubar_1abb659d9198de044c3a1ce16343b51370)`()` | Gets the value of Region.
`public inline const FString & `[`GetRegion`](#structFRHAPI__InstanceFubar_1a11cc36df302564d7269b9f6962e97137)`() const` | Gets the value of Region.
`public inline void `[`SetRegion`](#structFRHAPI__InstanceFubar_1aedb47e8402db6bf85ae1e3d409acadeb)`(FString NewValue)` | Sets the value of Region.
`public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1afcae9959aff56e37649a78f2a9393398)`()` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1ac569e1c140c99e307c9182f9df37874f)`() const` | Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1a29910120c89e7819256a8608831fb4e4)`(const FString & DefaultValue) const` | Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1a9cb21fb60509b05f133acea8c3eb8498)`(FString & OutValue) const` | Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__InstanceFubar_1a544648b7fbb1585f430b372d0665b96f)`()` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__InstanceFubar_1a1476ba7b056f28494431959b9f9ee163)`() const` | Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1a30d2ff761d5bf90556a5a33b5a243768)`(FString NewValue)` | Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.
`public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1a872908729dc35f98f1c9dcdc92102f21)`()` | Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.
`public inline ERHAPI_InstanceSourceProvider & `[`GetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1a2efba69a308b4cff37e3595fa845a6aa)`()` | Gets the value of InstanceSourceProvider_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceSourceProvider & `[`GetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1a3e4e170c9fdeb664bb4e98abe38bcef5)`() const` | Gets the value of InstanceSourceProvider_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceSourceProvider & `[`GetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1acf5d5e1e787e28ab8fdfb69709f13c56)`(const ERHAPI_InstanceSourceProvider & DefaultValue) const` | Gets the value of InstanceSourceProvider_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1a1047648fe2e83fda56dc549ce708ac88)`(ERHAPI_InstanceSourceProvider & OutValue) const` | Fills OutValue with the value of InstanceSourceProvider_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceSourceProvider * `[`GetInstanceSourceProviderOrNull`](#structFRHAPI__InstanceFubar_1aceb28bd2b3bd65dbcae5739f52ac5058)`()` | Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceSourceProvider * `[`GetInstanceSourceProviderOrNull`](#structFRHAPI__InstanceFubar_1a86907faf7cb3853a31c9e9207e0e3475)`() const` | Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1aea646fbed8dee430943854f42959bab6)`(ERHAPI_InstanceSourceProvider NewValue)` | Sets the value of InstanceSourceProvider_Optional and also sets InstanceSourceProvider_IsSet to true.
`public inline void `[`ClearInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1aac21c7aac647feced2f99ef4b0a5e1f2)`()` | Clears the value of InstanceSourceProvider_Optional and sets InstanceSourceProvider_IsSet to false.

#### Members

#### `public FString `[`InstanceId`](#structFRHAPI__InstanceFubar_1a5318ab204d0e3dcd9b7ee656af424c0a) <a id="structFRHAPI__InstanceFubar_1a5318ab204d0e3dcd9b7ee656af424c0a"></a>

ID for which instance was marked as FUBAR.

<br>
#### `public FString `[`Error`](#structFRHAPI__InstanceFubar_1ad2d05a55c1be83136efe75fcb34f93dd) <a id="structFRHAPI__InstanceFubar_1ad2d05a55c1be83136efe75fcb34f93dd"></a>

Error string describing what caused the instance failure.

<br>
#### `public FString `[`Region`](#structFRHAPI__InstanceFubar_1a02a132ae495f77357f4830eb46551dd3) <a id="structFRHAPI__InstanceFubar_1a02a132ae495f77357f4830eb46551dd3"></a>

What region the failed instance was in.

<br>
#### `public FString `[`MatchmakingProfileId_Optional`](#structFRHAPI__InstanceFubar_1a122a2d34f02efafe3017bc1b4d98a8c2) <a id="structFRHAPI__InstanceFubar_1a122a2d34f02efafe3017bc1b4d98a8c2"></a>

ID for which matchmaking profile was used to generate the failed instance.

<br>
#### `public bool `[`MatchmakingProfileId_IsSet`](#structFRHAPI__InstanceFubar_1a729a1afe2b95e7c6374da6f5e70f2148) <a id="structFRHAPI__InstanceFubar_1a729a1afe2b95e7c6374da6f5e70f2148"></a>

true if MatchmakingProfileId_Optional has been set to a value

<br>
#### `public ERHAPI_InstanceSourceProvider `[`InstanceSourceProvider_Optional`](#structFRHAPI__InstanceFubar_1ac0f064b552cfe44769598fd05efcf290) <a id="structFRHAPI__InstanceFubar_1ac0f064b552cfe44769598fd05efcf290"></a>

Which instance provider allocated this failed instance.

<br>
#### `public bool `[`InstanceSourceProvider_IsSet`](#structFRHAPI__InstanceFubar_1af00161ad647256b4aebaa38c55cec24a) <a id="structFRHAPI__InstanceFubar_1af00161ad647256b4aebaa38c55cec24a"></a>

true if InstanceSourceProvider_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceFubar_1a7f886357c7b26160d9522159141cafe5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceFubar_1a7f886357c7b26160d9522159141cafe5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceFubar_1a16b24745002fcfd27001e5240b3896f9)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InstanceFubar_1a16b24745002fcfd27001e5240b3896f9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceFubar_1a1d812c1274ff20253fff730a711549c9)`()` <a id="structFRHAPI__InstanceFubar_1a1d812c1274ff20253fff730a711549c9"></a>

Gets the value of InstanceId.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceFubar_1a8532875b579372d13f35e3310631701c)`() const` <a id="structFRHAPI__InstanceFubar_1a8532875b579372d13f35e3310631701c"></a>

Gets the value of InstanceId.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceFubar_1af54eb2bd66c4e8757f47afdc9ec9a780)`(FString NewValue)` <a id="structFRHAPI__InstanceFubar_1af54eb2bd66c4e8757f47afdc9ec9a780"></a>

Sets the value of InstanceId.

<br>
#### `public inline FString & `[`GetError`](#structFRHAPI__InstanceFubar_1a87232e0e066459725d7da6db1618d858)`()` <a id="structFRHAPI__InstanceFubar_1a87232e0e066459725d7da6db1618d858"></a>

Gets the value of Error.

<br>
#### `public inline const FString & `[`GetError`](#structFRHAPI__InstanceFubar_1af39dce2398eff58d2872c7a7b33d6882)`() const` <a id="structFRHAPI__InstanceFubar_1af39dce2398eff58d2872c7a7b33d6882"></a>

Gets the value of Error.

<br>
#### `public inline void `[`SetError`](#structFRHAPI__InstanceFubar_1ad172dbabd7b4975025c1cadb3b989132)`(FString NewValue)` <a id="structFRHAPI__InstanceFubar_1ad172dbabd7b4975025c1cadb3b989132"></a>

Sets the value of Error.

<br>
#### `public inline FString & `[`GetRegion`](#structFRHAPI__InstanceFubar_1abb659d9198de044c3a1ce16343b51370)`()` <a id="structFRHAPI__InstanceFubar_1abb659d9198de044c3a1ce16343b51370"></a>

Gets the value of Region.

<br>
#### `public inline const FString & `[`GetRegion`](#structFRHAPI__InstanceFubar_1a11cc36df302564d7269b9f6962e97137)`() const` <a id="structFRHAPI__InstanceFubar_1a11cc36df302564d7269b9f6962e97137"></a>

Gets the value of Region.

<br>
#### `public inline void `[`SetRegion`](#structFRHAPI__InstanceFubar_1aedb47e8402db6bf85ae1e3d409acadeb)`(FString NewValue)` <a id="structFRHAPI__InstanceFubar_1aedb47e8402db6bf85ae1e3d409acadeb"></a>

Sets the value of Region.

<br>
#### `public inline FString & `[`GetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1afcae9959aff56e37649a78f2a9393398)`()` <a id="structFRHAPI__InstanceFubar_1afcae9959aff56e37649a78f2a9393398"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1ac569e1c140c99e307c9182f9df37874f)`() const` <a id="structFRHAPI__InstanceFubar_1ac569e1c140c99e307c9182f9df37874f"></a>

Gets the value of MatchmakingProfileId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1a29910120c89e7819256a8608831fb4e4)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceFubar_1a29910120c89e7819256a8608831fb4e4"></a>

Gets the value of MatchmakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1a9cb21fb60509b05f133acea8c3eb8498)`(FString & OutValue) const` <a id="structFRHAPI__InstanceFubar_1a9cb21fb60509b05f133acea8c3eb8498"></a>

Fills OutValue with the value of MatchmakingProfileId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__InstanceFubar_1a544648b7fbb1585f430b372d0665b96f)`()` <a id="structFRHAPI__InstanceFubar_1a544648b7fbb1585f430b372d0665b96f"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMatchmakingProfileIdOrNull`](#structFRHAPI__InstanceFubar_1a1476ba7b056f28494431959b9f9ee163)`() const` <a id="structFRHAPI__InstanceFubar_1a1476ba7b056f28494431959b9f9ee163"></a>

Returns a pointer to MatchmakingProfileId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1a30d2ff761d5bf90556a5a33b5a243768)`(FString NewValue)` <a id="structFRHAPI__InstanceFubar_1a30d2ff761d5bf90556a5a33b5a243768"></a>

Sets the value of MatchmakingProfileId_Optional and also sets MatchmakingProfileId_IsSet to true.

<br>
#### `public inline void `[`ClearMatchmakingProfileId`](#structFRHAPI__InstanceFubar_1a872908729dc35f98f1c9dcdc92102f21)`()` <a id="structFRHAPI__InstanceFubar_1a872908729dc35f98f1c9dcdc92102f21"></a>

Clears the value of MatchmakingProfileId_Optional and sets MatchmakingProfileId_IsSet to false.

<br>
#### `public inline ERHAPI_InstanceSourceProvider & `[`GetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1a2efba69a308b4cff37e3595fa845a6aa)`()` <a id="structFRHAPI__InstanceFubar_1a2efba69a308b4cff37e3595fa845a6aa"></a>

Gets the value of InstanceSourceProvider_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceSourceProvider & `[`GetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1a3e4e170c9fdeb664bb4e98abe38bcef5)`() const` <a id="structFRHAPI__InstanceFubar_1a3e4e170c9fdeb664bb4e98abe38bcef5"></a>

Gets the value of InstanceSourceProvider_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceSourceProvider & `[`GetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1acf5d5e1e787e28ab8fdfb69709f13c56)`(const ERHAPI_InstanceSourceProvider & DefaultValue) const` <a id="structFRHAPI__InstanceFubar_1acf5d5e1e787e28ab8fdfb69709f13c56"></a>

Gets the value of InstanceSourceProvider_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1a1047648fe2e83fda56dc549ce708ac88)`(ERHAPI_InstanceSourceProvider & OutValue) const` <a id="structFRHAPI__InstanceFubar_1a1047648fe2e83fda56dc549ce708ac88"></a>

Fills OutValue with the value of InstanceSourceProvider_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InstanceSourceProvider * `[`GetInstanceSourceProviderOrNull`](#structFRHAPI__InstanceFubar_1aceb28bd2b3bd65dbcae5739f52ac5058)`()` <a id="structFRHAPI__InstanceFubar_1aceb28bd2b3bd65dbcae5739f52ac5058"></a>

Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InstanceSourceProvider * `[`GetInstanceSourceProviderOrNull`](#structFRHAPI__InstanceFubar_1a86907faf7cb3853a31c9e9207e0e3475)`() const` <a id="structFRHAPI__InstanceFubar_1a86907faf7cb3853a31c9e9207e0e3475"></a>

Returns a pointer to InstanceSourceProvider_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1aea646fbed8dee430943854f42959bab6)`(ERHAPI_InstanceSourceProvider NewValue)` <a id="structFRHAPI__InstanceFubar_1aea646fbed8dee430943854f42959bab6"></a>

Sets the value of InstanceSourceProvider_Optional and also sets InstanceSourceProvider_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceSourceProvider`](#structFRHAPI__InstanceFubar_1aac21c7aac647feced2f99ef4b0a5e1f2)`()` <a id="structFRHAPI__InstanceFubar_1aac21c7aac647feced2f99ef4b0a5e1f2"></a>

Clears the value of InstanceSourceProvider_Optional and sets InstanceSourceProvider_IsSet to false.

<br>
