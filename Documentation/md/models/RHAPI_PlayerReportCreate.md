# RHAPI_PlayerReportCreate <a id="group__RHAPI__PlayerReportCreate"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReportCreate`](#structFRHAPI__PlayerReportCreate) | 

## struct `FRHAPI_PlayerReportCreate` <a id="structFRHAPI__PlayerReportCreate"></a>

```
struct FRHAPI_PlayerReportCreate
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a) | 
`public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2) | true if SourcePlayerUuid_Optional has been set to a value
`public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297) | The reason for the report.
`public FString `[`Description_Optional`](#structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6) | 
`public bool `[`Description_IsSet`](#structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b) | true if Description_Optional has been set to a value
`public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e) | 
`public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae) | true if SessionId_Optional has been set to a value
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138) | true if InstanceId_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89) | true if MatchId_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5) | Custom data for the report.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportCreate_1a849b1f447d65a175976c911368860643)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportCreate_1a0222f3eafc03f75b54e4923e34782b76)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1af33777f1152b608342023508723ece23)`()` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a17cee42fa13aee28d6683378c235328b)`() const` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a10cd0f687f76125e8924f8e1836d69f9)`(const FGuid & DefaultValue) const` | Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a0695cf5c40db719be31e3dae571e3fd4)`(FGuid & OutValue) const` | Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1aa9a247a94c1831781fdcd9026da4f37d)`()` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1ab0ca4d584361843270c40843aff62c4f)`() const` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a946c3269ab96969d4df46f2169bcb773)`(FGuid NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.
`public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2)`()` | Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.
`public inline ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1a3f98ac3820c9966411558496498ff839)`()` | Gets the value of Reason.
`public inline const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1a80b550e9b49868c42cadc025ef4ab22e)`() const` | Gets the value of Reason.
`public inline void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1a2d0a7d25b53b7e33cefdb607d305cabb)`(ERHAPI_ReportReason NewValue)` | Sets the value of Reason.
`public inline FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a6089dd0a72295552ab7370001a47b2f4)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a414c1481924ed1768ec463438d704820)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1aa9224558dab86819517c1b1216734df3)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a1700ed6341aed67bf6133d3931e0cbf6)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1aa4e48aebd6459623af3c2b7a612a91ca)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1a47cdb4058ab4ef10606827894a04742b)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1a3c860bb52bad0659e2502b09a09a1469)`(FString NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`ClearDescription`](#structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a3ea4f792de9455030bdd4251864b09bf)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ae889a827ec0fe18c62c5a116e6991aec)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ac31bacec5e0b7b328373e466afeea9f6)`(const FString & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a9d07dbbbc4aef0a8931d1f7d3550949e)`(FString & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1ae7428fa651a01a5843ea6cf7cf543d57)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1a8ebeb07c07e83ccfb67f3286d22545fb)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1a9cf2f1aca8b6a53a6ba99dbad0cea2dc)`(FString NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a5b8bba7cd5ba7b26683d01725a398871)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1ab345f9bdaec3259a07aa56906f49faf6)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a460f5f97876cd21ec9577b7748302591)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a1802f5f02d093309052b209c005f9577)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1a6d65aab4a391f99aedd2408776ff82e7)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1a0e66766a11ed5d2fe71547ce6aef7623)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1ab855db9f57dd5b243c04764b467daefb)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1ac105d6d0773cdb172583460bf55ac488)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1af69a316a4863f68df2cf97c278c8d41b)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a4bc33ccffa4f48eb58bc276031ed1f42)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a89a20ce0e6e10ee0054175b7004a4979)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1a9b3b6dc79c702b5e94a3ac27e173436f)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1a4f2dd0f338eb697d95b3589e1af73734)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1ae5ea657bb6d505f6be9be9d9cc957012)`(FString NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a26a5c8e4a8cb4f7b3f6f331481e2f383)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a44ba433a35c8937b7211cec9df666ce6)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1add5dac4564ca139844a9c366f8885661)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a78e58e71b5702dd40f0708b0895d115e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1a61e12f1137965d839879a0c4cc9493fe)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1aad1bc56d687fc5d925352678d2be68cd)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1a3738c112af537c3eedf2aa08c3c02246)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a) <a id="structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a"></a>

<br>
#### `public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2) <a id="structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2"></a>

true if SourcePlayerUuid_Optional has been set to a value

<br>
#### `public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297) <a id="structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297"></a>

The reason for the report.

<br>
#### `public FString `[`Description_Optional`](#structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6) <a id="structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6"></a>

<br>
#### `public bool `[`Description_IsSet`](#structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b) <a id="structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b"></a>

true if Description_Optional has been set to a value

<br>
#### `public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e) <a id="structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e"></a>

<br>
#### `public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae) <a id="structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae"></a>

true if SessionId_Optional has been set to a value

<br>
#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882) <a id="structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882"></a>

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138) <a id="structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7) <a id="structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7"></a>

<br>
#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89) <a id="structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89"></a>

true if MatchId_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5) <a id="structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5"></a>

Custom data for the report.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264) <a id="structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportCreate_1a849b1f447d65a175976c911368860643)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReportCreate_1a849b1f447d65a175976c911368860643"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportCreate_1a0222f3eafc03f75b54e4923e34782b76)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerReportCreate_1a0222f3eafc03f75b54e4923e34782b76"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1af33777f1152b608342023508723ece23)`()` <a id="structFRHAPI__PlayerReportCreate_1af33777f1152b608342023508723ece23"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a17cee42fa13aee28d6683378c235328b)`() const` <a id="structFRHAPI__PlayerReportCreate_1a17cee42fa13aee28d6683378c235328b"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a10cd0f687f76125e8924f8e1836d69f9)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1a10cd0f687f76125e8924f8e1836d69f9"></a>

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a0695cf5c40db719be31e3dae571e3fd4)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a0695cf5c40db719be31e3dae571e3fd4"></a>

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1aa9a247a94c1831781fdcd9026da4f37d)`()` <a id="structFRHAPI__PlayerReportCreate_1aa9a247a94c1831781fdcd9026da4f37d"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1ab0ca4d584361843270c40843aff62c4f)`() const` <a id="structFRHAPI__PlayerReportCreate_1ab0ca4d584361843270c40843aff62c4f"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a946c3269ab96969d4df46f2169bcb773)`(FGuid NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a946c3269ab96969d4df46f2169bcb773"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2)`()` <a id="structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2"></a>

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.

<br>
#### `public inline ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1a3f98ac3820c9966411558496498ff839)`()` <a id="structFRHAPI__PlayerReportCreate_1a3f98ac3820c9966411558496498ff839"></a>

Gets the value of Reason.

<br>
#### `public inline const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1a80b550e9b49868c42cadc025ef4ab22e)`() const` <a id="structFRHAPI__PlayerReportCreate_1a80b550e9b49868c42cadc025ef4ab22e"></a>

Gets the value of Reason.

<br>
#### `public inline void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1a2d0a7d25b53b7e33cefdb607d305cabb)`(ERHAPI_ReportReason NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a2d0a7d25b53b7e33cefdb607d305cabb"></a>

Sets the value of Reason.

<br>
#### `public inline FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a6089dd0a72295552ab7370001a47b2f4)`()` <a id="structFRHAPI__PlayerReportCreate_1a6089dd0a72295552ab7370001a47b2f4"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a414c1481924ed1768ec463438d704820)`() const` <a id="structFRHAPI__PlayerReportCreate_1a414c1481924ed1768ec463438d704820"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1aa9224558dab86819517c1b1216734df3)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1aa9224558dab86819517c1b1216734df3"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a1700ed6341aed67bf6133d3931e0cbf6)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a1700ed6341aed67bf6133d3931e0cbf6"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1aa4e48aebd6459623af3c2b7a612a91ca)`()` <a id="structFRHAPI__PlayerReportCreate_1aa4e48aebd6459623af3c2b7a612a91ca"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1a47cdb4058ab4ef10606827894a04742b)`() const` <a id="structFRHAPI__PlayerReportCreate_1a47cdb4058ab4ef10606827894a04742b"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1a3c860bb52bad0659e2502b09a09a1469)`(FString NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a3c860bb52bad0659e2502b09a09a1469"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

<br>
#### `public inline void `[`ClearDescription`](#structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9)`()` <a id="structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

<br>
#### `public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a3ea4f792de9455030bdd4251864b09bf)`()` <a id="structFRHAPI__PlayerReportCreate_1a3ea4f792de9455030bdd4251864b09bf"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ae889a827ec0fe18c62c5a116e6991aec)`() const` <a id="structFRHAPI__PlayerReportCreate_1ae889a827ec0fe18c62c5a116e6991aec"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ac31bacec5e0b7b328373e466afeea9f6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1ac31bacec5e0b7b328373e466afeea9f6"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a9d07dbbbc4aef0a8931d1f7d3550949e)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a9d07dbbbc4aef0a8931d1f7d3550949e"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1ae7428fa651a01a5843ea6cf7cf543d57)`()` <a id="structFRHAPI__PlayerReportCreate_1ae7428fa651a01a5843ea6cf7cf543d57"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1a8ebeb07c07e83ccfb67f3286d22545fb)`() const` <a id="structFRHAPI__PlayerReportCreate_1a8ebeb07c07e83ccfb67f3286d22545fb"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1a9cf2f1aca8b6a53a6ba99dbad0cea2dc)`(FString NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a9cf2f1aca8b6a53a6ba99dbad0cea2dc"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

<br>
#### `public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92)`()` <a id="structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a5b8bba7cd5ba7b26683d01725a398871)`()` <a id="structFRHAPI__PlayerReportCreate_1a5b8bba7cd5ba7b26683d01725a398871"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1ab345f9bdaec3259a07aa56906f49faf6)`() const` <a id="structFRHAPI__PlayerReportCreate_1ab345f9bdaec3259a07aa56906f49faf6"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a460f5f97876cd21ec9577b7748302591)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1a460f5f97876cd21ec9577b7748302591"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a1802f5f02d093309052b209c005f9577)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a1802f5f02d093309052b209c005f9577"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1a6d65aab4a391f99aedd2408776ff82e7)`()` <a id="structFRHAPI__PlayerReportCreate_1a6d65aab4a391f99aedd2408776ff82e7"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1a0e66766a11ed5d2fe71547ce6aef7623)`() const` <a id="structFRHAPI__PlayerReportCreate_1a0e66766a11ed5d2fe71547ce6aef7623"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1ab855db9f57dd5b243c04764b467daefb)`(FString NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ab855db9f57dd5b243c04764b467daefb"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82)`()` <a id="structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1ac105d6d0773cdb172583460bf55ac488)`()` <a id="structFRHAPI__PlayerReportCreate_1ac105d6d0773cdb172583460bf55ac488"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1af69a316a4863f68df2cf97c278c8d41b)`() const` <a id="structFRHAPI__PlayerReportCreate_1af69a316a4863f68df2cf97c278c8d41b"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a4bc33ccffa4f48eb58bc276031ed1f42)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1a4bc33ccffa4f48eb58bc276031ed1f42"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a89a20ce0e6e10ee0054175b7004a4979)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a89a20ce0e6e10ee0054175b7004a4979"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1a9b3b6dc79c702b5e94a3ac27e173436f)`()` <a id="structFRHAPI__PlayerReportCreate_1a9b3b6dc79c702b5e94a3ac27e173436f"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1a4f2dd0f338eb697d95b3589e1af73734)`() const` <a id="structFRHAPI__PlayerReportCreate_1a4f2dd0f338eb697d95b3589e1af73734"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1ae5ea657bb6d505f6be9be9d9cc957012)`(FString NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ae5ea657bb6d505f6be9be9d9cc957012"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

<br>
#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b)`()` <a id="structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a26a5c8e4a8cb4f7b3f6f331481e2f383)`()` <a id="structFRHAPI__PlayerReportCreate_1a26a5c8e4a8cb4f7b3f6f331481e2f383"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a44ba433a35c8937b7211cec9df666ce6)`() const` <a id="structFRHAPI__PlayerReportCreate_1a44ba433a35c8937b7211cec9df666ce6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1add5dac4564ca139844a9c366f8885661)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1add5dac4564ca139844a9c366f8885661"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a78e58e71b5702dd40f0708b0895d115e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a78e58e71b5702dd40f0708b0895d115e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1a61e12f1137965d839879a0c4cc9493fe)`()` <a id="structFRHAPI__PlayerReportCreate_1a61e12f1137965d839879a0c4cc9493fe"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1aad1bc56d687fc5d925352678d2be68cd)`() const` <a id="structFRHAPI__PlayerReportCreate_1aad1bc56d687fc5d925352678d2be68cd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1a3738c112af537c3eedf2aa08c3c02246)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a3738c112af537c3eedf2aa08c3c02246"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a)`()` <a id="structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
