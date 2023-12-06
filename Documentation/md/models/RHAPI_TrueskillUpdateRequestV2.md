# RHAPI_TrueskillUpdateRequestV2 <a id="group__RHAPI__TrueskillUpdateRequestV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TrueskillUpdateRequestV2`](#structFRHAPI__TrueskillUpdateRequestV2) | A request body to update players&#39; trueskill ratings from a match.

## struct `FRHAPI_TrueskillUpdateRequestV2` <a id="structFRHAPI__TrueskillUpdateRequestV2"></a>

```
struct FRHAPI_TrueskillUpdateRequestV2
  : public FRHAPI_Model
```

A request body to update players&#39; trueskill ratings from a match.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__TrueskillUpdateRequestV2_1a710c602c282e49767fdcb5325f0e33ae) | ID for the instance the match took place on.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__TrueskillUpdateRequestV2_1a5a6a9a6159a9495ec4326cf1e1af4b76) | true if InstanceId_Optional has been set to a value
`public FString `[`RankId`](#structFRHAPI__TrueskillUpdateRequestV2_1abb6d07c2ae9eed9d43520a5cc50566cc) | ID for the rank type used in this match.
`public int32 `[`MatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequestV2_1ad7a1b60cd4042e0470306cf629104653) | How many seconds the match lasted.
`public TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > `[`Teams`](#structFRHAPI__TrueskillUpdateRequestV2_1ac51832a01897582db7ff3aafd1a4482a) | List of teams that participated in this match.
`public virtual bool `[`FromJson`](#structFRHAPI__TrueskillUpdateRequestV2_1a3786f350bbacc1d4e01fa59e84aab814)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TrueskillUpdateRequestV2_1ad06128a907324029cc24b8c46e8f9379)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1a222e772a953806066944814d7abbb6a1)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1aebf4dfbb30068289ef3b51d726ba0c5d)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1af5d45657436416901849aff2c69e5ecf)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1a4353ba0f96c4e758c269585ad63b2cbf)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__TrueskillUpdateRequestV2_1ac6891169b3c07edd03d0938e4b5c6585)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__TrueskillUpdateRequestV2_1aa17b086c30c3b6fb74312bf59745aa37)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1a0b47d2a51864bcc5b3a98d55ab9f2f0e)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1a8162586cbb182231d3c5d1f63c8e6fad)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FString & `[`GetRankId`](#structFRHAPI__TrueskillUpdateRequestV2_1ab142b907dadac0065d84a43ffabd9f90)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__TrueskillUpdateRequestV2_1aac1818a974b63bce5dd908fe1f8ddd7e)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__TrueskillUpdateRequestV2_1a03bdab6aa6693fbafe7933f3360e5e8e)`(FString NewValue)` | Sets the value of RankId.
`public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequestV2_1a3f266451fdfca97ba45349965947586f)`()` | Gets the value of MatchLengthSeconds.
`public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequestV2_1a27fc1abb32678f57849be7f1adc04a65)`() const` | Gets the value of MatchLengthSeconds.
`public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequestV2_1a5099819f0f4a5a262d87b105a9cd72c3)`(int32 NewValue)` | Sets the value of MatchLengthSeconds.
`public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__TrueskillUpdateRequestV2_1a17dce2d3731519e4e8ff888ce6fc408c)`() const` | Returns true if MatchLengthSeconds matches the default value.
`public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__TrueskillUpdateRequestV2_1a2d4749a24619ad5b2c271ff448949f1e)`()` | Sets the value of MatchLengthSeconds to its default
`public inline TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__TrueskillUpdateRequestV2_1a5bc16c4aafa14cfc52b44cc1b5b35c02)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__TrueskillUpdateRequestV2_1ad8819e2b81077a86d199a49b9180f3ae)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__TrueskillUpdateRequestV2_1ad0a1775234e971339ab93827c9db68bd)`(TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > NewValue)` | Sets the value of Teams.

#### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__TrueskillUpdateRequestV2_1a710c602c282e49767fdcb5325f0e33ae) <a id="structFRHAPI__TrueskillUpdateRequestV2_1a710c602c282e49767fdcb5325f0e33ae"></a>

ID for the instance the match took place on.

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__TrueskillUpdateRequestV2_1a5a6a9a6159a9495ec4326cf1e1af4b76) <a id="structFRHAPI__TrueskillUpdateRequestV2_1a5a6a9a6159a9495ec4326cf1e1af4b76"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public FString `[`RankId`](#structFRHAPI__TrueskillUpdateRequestV2_1abb6d07c2ae9eed9d43520a5cc50566cc) <a id="structFRHAPI__TrueskillUpdateRequestV2_1abb6d07c2ae9eed9d43520a5cc50566cc"></a>

ID for the rank type used in this match.

<br>
#### `public int32 `[`MatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequestV2_1ad7a1b60cd4042e0470306cf629104653) <a id="structFRHAPI__TrueskillUpdateRequestV2_1ad7a1b60cd4042e0470306cf629104653"></a>

How many seconds the match lasted.

<br>
#### `public TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > `[`Teams`](#structFRHAPI__TrueskillUpdateRequestV2_1ac51832a01897582db7ff3aafd1a4482a) <a id="structFRHAPI__TrueskillUpdateRequestV2_1ac51832a01897582db7ff3aafd1a4482a"></a>

List of teams that participated in this match.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__TrueskillUpdateRequestV2_1a3786f350bbacc1d4e01fa59e84aab814)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a3786f350bbacc1d4e01fa59e84aab814"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__TrueskillUpdateRequestV2_1ad06128a907324029cc24b8c46e8f9379)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ad06128a907324029cc24b8c46e8f9379"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1a222e772a953806066944814d7abbb6a1)`()` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a222e772a953806066944814d7abbb6a1"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1aebf4dfbb30068289ef3b51d726ba0c5d)`() const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1aebf4dfbb30068289ef3b51d726ba0c5d"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1af5d45657436416901849aff2c69e5ecf)`(const FString & DefaultValue) const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1af5d45657436416901849aff2c69e5ecf"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1a4353ba0f96c4e758c269585ad63b2cbf)`(FString & OutValue) const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a4353ba0f96c4e758c269585ad63b2cbf"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__TrueskillUpdateRequestV2_1ac6891169b3c07edd03d0938e4b5c6585)`()` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ac6891169b3c07edd03d0938e4b5c6585"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__TrueskillUpdateRequestV2_1aa17b086c30c3b6fb74312bf59745aa37)`() const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1aa17b086c30c3b6fb74312bf59745aa37"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1a0b47d2a51864bcc5b3a98d55ab9f2f0e)`(FString NewValue)` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a0b47d2a51864bcc5b3a98d55ab9f2f0e"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__TrueskillUpdateRequestV2_1a8162586cbb182231d3c5d1f63c8e6fad)`()` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a8162586cbb182231d3c5d1f63c8e6fad"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline FString & `[`GetRankId`](#structFRHAPI__TrueskillUpdateRequestV2_1ab142b907dadac0065d84a43ffabd9f90)`()` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ab142b907dadac0065d84a43ffabd9f90"></a>

Gets the value of RankId.

<br>
#### `public inline const FString & `[`GetRankId`](#structFRHAPI__TrueskillUpdateRequestV2_1aac1818a974b63bce5dd908fe1f8ddd7e)`() const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1aac1818a974b63bce5dd908fe1f8ddd7e"></a>

Gets the value of RankId.

<br>
#### `public inline void `[`SetRankId`](#structFRHAPI__TrueskillUpdateRequestV2_1a03bdab6aa6693fbafe7933f3360e5e8e)`(FString NewValue)` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a03bdab6aa6693fbafe7933f3360e5e8e"></a>

Sets the value of RankId.

<br>
#### `public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequestV2_1a3f266451fdfca97ba45349965947586f)`()` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a3f266451fdfca97ba45349965947586f"></a>

Gets the value of MatchLengthSeconds.

<br>
#### `public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequestV2_1a27fc1abb32678f57849be7f1adc04a65)`() const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a27fc1abb32678f57849be7f1adc04a65"></a>

Gets the value of MatchLengthSeconds.

<br>
#### `public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequestV2_1a5099819f0f4a5a262d87b105a9cd72c3)`(int32 NewValue)` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a5099819f0f4a5a262d87b105a9cd72c3"></a>

Sets the value of MatchLengthSeconds.

<br>
#### `public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__TrueskillUpdateRequestV2_1a17dce2d3731519e4e8ff888ce6fc408c)`() const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a17dce2d3731519e4e8ff888ce6fc408c"></a>

Returns true if MatchLengthSeconds matches the default value.

<br>
#### `public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__TrueskillUpdateRequestV2_1a2d4749a24619ad5b2c271ff448949f1e)`()` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a2d4749a24619ad5b2c271ff448949f1e"></a>

Sets the value of MatchLengthSeconds to its default

<br>
#### `public inline TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__TrueskillUpdateRequestV2_1a5bc16c4aafa14cfc52b44cc1b5b35c02)`()` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a5bc16c4aafa14cfc52b44cc1b5b35c02"></a>

Gets the value of Teams.

<br>
#### `public inline const TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__TrueskillUpdateRequestV2_1ad8819e2b81077a86d199a49b9180f3ae)`() const` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ad8819e2b81077a86d199a49b9180f3ae"></a>

Gets the value of Teams.

<br>
#### `public inline void `[`SetTeams`](#structFRHAPI__TrueskillUpdateRequestV2_1ad0a1775234e971339ab93827c9db68bd)`(TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > NewValue)` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ad0a1775234e971339ab93827c9db68bd"></a>

Sets the value of Teams.

<br>
