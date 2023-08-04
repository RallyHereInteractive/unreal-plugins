# RHAPI_MatchMakingProfile <a id="group__RHAPI__MatchMakingProfile"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingProfile`](#structFRHAPI__MatchMakingProfile) | 

## struct `FRHAPI_MatchMakingProfile` <a id="structFRHAPI__MatchMakingProfile"></a>

```
struct FRHAPI_MatchMakingProfile
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ProfileId`](#structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c) | ID of the matchmaking profile to join.
`public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8) | What mode to set on the matchmaking profile (normal, backfill etc)
`public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88) | true if JoinMode_Optional has been set to a value
`public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d) | Which instance template to use when launching a match in this profile.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfile_1a926c25fdf3917f9ec57e8965ba90b371)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfile_1aec99c0e46c947e020304609dd64d0022)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a325009e6d686c3e1062170544f98bda4)`()` | Gets the value of ProfileId.
`public inline const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a846e1b7751a84856c1c0bf69fbb9ec4f)`() const` | Gets the value of ProfileId.
`public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1af35b3cec1e43338b9816c114d03853e2)`(FString NewValue)` | Sets the value of ProfileId.
`public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a938fc2592de88267b7dc2a257bff0db7)`()` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a62cee2b7fd57fd26acce3b36146da19c)`() const` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1af075cc3ac35d1d46de55755ffc562268)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` | Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1)`(ERHAPI_ProfileJoinMode & OutValue) const` | Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1aaccd82d364438fb9298719c8d6da902b)`()` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1a5d96eb392d7f13c45145fe0b36d84f22)`() const` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1afa311bd029ba4c1e4f0865a50037cc50)`(ERHAPI_ProfileJoinMode NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.
`public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)`()` | Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.
`public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ac68534da0a153d27eb2bb1353852a8ac)`()` | Gets the value of InstanceLaunchTemplateId.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a437c471d232a1aa430f1d7b6b3672f46)`() const` | Gets the value of InstanceLaunchTemplateId.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ab839256414fa37f1002a23e9fc0b9db2)`(FGuid NewValue)` | Sets the value of InstanceLaunchTemplateId.

#### Members

#### `public FString `[`ProfileId`](#structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c) <a id="structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c"></a>

ID of the matchmaking profile to join.

<br>
#### `public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8) <a id="structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8"></a>

What mode to set on the matchmaking profile (normal, backfill etc)

<br>
#### `public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88) <a id="structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88"></a>

true if JoinMode_Optional has been set to a value

<br>
#### `public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d) <a id="structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d"></a>

Which instance template to use when launching a match in this profile.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfile_1a926c25fdf3917f9ec57e8965ba90b371)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingProfile_1a926c25fdf3917f9ec57e8965ba90b371"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfile_1aec99c0e46c947e020304609dd64d0022)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingProfile_1aec99c0e46c947e020304609dd64d0022"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a325009e6d686c3e1062170544f98bda4)`()` <a id="structFRHAPI__MatchMakingProfile_1a325009e6d686c3e1062170544f98bda4"></a>

Gets the value of ProfileId.

<br>
#### `public inline const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a846e1b7751a84856c1c0bf69fbb9ec4f)`() const` <a id="structFRHAPI__MatchMakingProfile_1a846e1b7751a84856c1c0bf69fbb9ec4f"></a>

Gets the value of ProfileId.

<br>
#### `public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1af35b3cec1e43338b9816c114d03853e2)`(FString NewValue)` <a id="structFRHAPI__MatchMakingProfile_1af35b3cec1e43338b9816c114d03853e2"></a>

Sets the value of ProfileId.

<br>
#### `public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a938fc2592de88267b7dc2a257bff0db7)`()` <a id="structFRHAPI__MatchMakingProfile_1a938fc2592de88267b7dc2a257bff0db7"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a62cee2b7fd57fd26acce3b36146da19c)`() const` <a id="structFRHAPI__MatchMakingProfile_1a62cee2b7fd57fd26acce3b36146da19c"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1af075cc3ac35d1d46de55755ffc562268)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1af075cc3ac35d1d46de55755ffc562268"></a>

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1)`(ERHAPI_ProfileJoinMode & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1"></a>

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1aaccd82d364438fb9298719c8d6da902b)`()` <a id="structFRHAPI__MatchMakingProfile_1aaccd82d364438fb9298719c8d6da902b"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1a5d96eb392d7f13c45145fe0b36d84f22)`() const` <a id="structFRHAPI__MatchMakingProfile_1a5d96eb392d7f13c45145fe0b36d84f22"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1afa311bd029ba4c1e4f0865a50037cc50)`(ERHAPI_ProfileJoinMode NewValue)` <a id="structFRHAPI__MatchMakingProfile_1afa311bd029ba4c1e4f0865a50037cc50"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.

<br>
#### `public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)`()` <a id="structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382"></a>

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.

<br>
#### `public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ac68534da0a153d27eb2bb1353852a8ac)`()` <a id="structFRHAPI__MatchMakingProfile_1ac68534da0a153d27eb2bb1353852a8ac"></a>

Gets the value of InstanceLaunchTemplateId.

<br>
#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a437c471d232a1aa430f1d7b6b3672f46)`() const` <a id="structFRHAPI__MatchMakingProfile_1a437c471d232a1aa430f1d7b6b3672f46"></a>

Gets the value of InstanceLaunchTemplateId.

<br>
#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ab839256414fa37f1002a23e9fc0b9db2)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ab839256414fa37f1002a23e9fc0b9db2"></a>

Sets the value of InstanceLaunchTemplateId.

<br>
