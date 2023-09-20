# RHAPI_MatchMakingSessionRequest <a id="group__RHAPI__MatchMakingSessionRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingSessionRequest`](#structFRHAPI__MatchMakingSessionRequest) | A request body for a new matchmade session to be created.

## struct `FRHAPI_MatchMakingSessionRequest` <a id="structFRHAPI__MatchMakingSessionRequest"></a>

```
struct FRHAPI_MatchMakingSessionRequest
  : public FRHAPI_Model
```

A request body for a new matchmade session to be created.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__MatchMakingSessionRequest_1a5775ca1c355071811b7ff1710db6f35e) | List of teams that are to be invited to session.
`public TMap< FString, FString > `[`SessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a9d10cb7d62371bc0121c64808a120851) | List of sessions and tickets the match was made with. Used to verify this match should still be created.
`public FGuid `[`InstanceLaunchTemplateId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a1ad01c05021f0c0714e434d3388d6eab) | Which launch template should be used to request an instance.
`public bool `[`InstanceLaunchTemplateId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a91aaed07cb2afebdc3c4b0abed222b11) | true if InstanceLaunchTemplateId_Optional has been set to a value
`public FGuid `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a10f1a22bbd8bee6b8091ae7ea118017a) | Which launch template should be used to request an instance.
`public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a5b3f4e49819cd199659d6e3036ed2abb) | true if InstanceRequestTemplateId_Optional has been set to a value
`public FString `[`RegionId`](#structFRHAPI__MatchMakingSessionRequest_1a342fc75f2f3c5218975fbb5f54680718) | Region to start the instance in.
`public FString `[`MatchId`](#structFRHAPI__MatchMakingSessionRequest_1a03c7f192f1779ab20215d2574e7c5da7) | Unique ID for this generated match.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a9275b8e96a5cfbb622907ba85a02741b) | Custom data about the match.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a4882aefa9956b93a2a1299f9aad58756) | true if CustomData_Optional has been set to a value
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a72be7a3468a93f661be096e3cb4cfc57) | Player UUID of the host, if the host type is player.
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1ac85c84cebd22df5e517421a5beb11e9f) | true if HostPlayerUuid_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingSessionRequest_1ae1b1ea471d58bf9811de15fc23a90ec9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingSessionRequest_1af2abff0e1f4a70a604d90b8363815f15)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1aef36a25549413635ccc147079795c978)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1ab8ebfb25fb6f1bd8389cef0d30fb1792)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1a10631150c0878ab7696ef390b860fb12)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > NewValue)` | Sets the value of Teams.
`public inline TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1aaa1828db30df0e3eb8787b1f2f175bb8)`()` | Gets the value of SessionTickets.
`public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a51fd13467759f06d9524dc1c63a59a40)`() const` | Gets the value of SessionTickets.
`public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1afbd83a5794036e76f7f108b1aa071de3)`(TMap< FString, FString > NewValue)` | Sets the value of SessionTickets.
`public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a21eafe1f13121b2d3f86c3197a4252bf)`()` | Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a13a75f79b974ef6f7e8fe0c192c19cf4)`() const` | Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a972144cb57dfe2349499bd2a31c2dca6)`(const FGuid & DefaultValue) const` | Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8f9178a3a6fb358ef60dfebf984a1be6)`()` | Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a0e506ce7a18ced122a29fc36771411cb)`() const` | Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ad91f0e4fe246e37afb27fb396f0809f6)`(FGuid NewValue)` | Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true.
`public inline void `[`ClearInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58)`()` | Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false.
`public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ae151b3b947e8e8f0e57c699b0ae309c1)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a86405b5b4a2601d75abe88337cbce675)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a20191199103c846b558155c40557edde)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a7a36d5facc608e9c5d155e6af59eadb4)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a9478f81a33e19efb1c8262b6a908cf36)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ae891a51d870af6ab4962d8e23dca351e)`(FGuid NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1af49fce2ebaa0251cb204b05ed3e2e0a4)`()` | Gets the value of RegionId.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1abc9e9e149399a50eec1a53cc97278ae1)`() const` | Gets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a1ed0b373f583440766db910fa91a9cd2)`(FString NewValue)` | Sets the value of RegionId.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1afbb88da05e048bfd3fbdee2151983a45)`()` | Gets the value of MatchId.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa1a3d6d082294c8aba3f91673f522ac3)`() const` | Gets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a8367c9acb928f596c4ea8ae89171d0d0)`(FString NewValue)` | Sets the value of MatchId.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a00eca816afd9db4ad94b242eef69d969)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ad9f586b13704c1f2b462e8481e1b65df)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a435e6862722e05fe00d33e8614ef5d9d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aa1d3fbcf43952b77f6aa6f8396eff050)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a99522bcfecc333ed1dd87efcb540a898)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ae1860b035e83ec9ea1f6c73749b05ca6)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a906d15bc1d4a5f9d015b121066203f26)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a1673cba2b59ef9b2c4081ef8737d5a09)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a7417f5504af6b2f9e052b7e0de6c387c)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a06725b0b7d90e66287ee13ebeed36ebb)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a49e7921c3ad4641869d931c93ee07b25)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a4482414ce8729e0ac61da3be5f7552f3)`(FGuid NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### Members

#### `public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__MatchMakingSessionRequest_1a5775ca1c355071811b7ff1710db6f35e) <a id="structFRHAPI__MatchMakingSessionRequest_1a5775ca1c355071811b7ff1710db6f35e"></a>

List of teams that are to be invited to session.

<br>
#### `public TMap< FString, FString > `[`SessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a9d10cb7d62371bc0121c64808a120851) <a id="structFRHAPI__MatchMakingSessionRequest_1a9d10cb7d62371bc0121c64808a120851"></a>

List of sessions and tickets the match was made with. Used to verify this match should still be created.

<br>
#### `public FGuid `[`InstanceLaunchTemplateId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a1ad01c05021f0c0714e434d3388d6eab) <a id="structFRHAPI__MatchMakingSessionRequest_1a1ad01c05021f0c0714e434d3388d6eab"></a>

Which launch template should be used to request an instance.

<br>
#### `public bool `[`InstanceLaunchTemplateId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a91aaed07cb2afebdc3c4b0abed222b11) <a id="structFRHAPI__MatchMakingSessionRequest_1a91aaed07cb2afebdc3c4b0abed222b11"></a>

true if InstanceLaunchTemplateId_Optional has been set to a value

<br>
#### `public FGuid `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a10f1a22bbd8bee6b8091ae7ea118017a) <a id="structFRHAPI__MatchMakingSessionRequest_1a10f1a22bbd8bee6b8091ae7ea118017a"></a>

Which launch template should be used to request an instance.

<br>
#### `public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a5b3f4e49819cd199659d6e3036ed2abb) <a id="structFRHAPI__MatchMakingSessionRequest_1a5b3f4e49819cd199659d6e3036ed2abb"></a>

true if InstanceRequestTemplateId_Optional has been set to a value

<br>
#### `public FString `[`RegionId`](#structFRHAPI__MatchMakingSessionRequest_1a342fc75f2f3c5218975fbb5f54680718) <a id="structFRHAPI__MatchMakingSessionRequest_1a342fc75f2f3c5218975fbb5f54680718"></a>

Region to start the instance in.

<br>
#### `public FString `[`MatchId`](#structFRHAPI__MatchMakingSessionRequest_1a03c7f192f1779ab20215d2574e7c5da7) <a id="structFRHAPI__MatchMakingSessionRequest_1a03c7f192f1779ab20215d2574e7c5da7"></a>

Unique ID for this generated match.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a9275b8e96a5cfbb622907ba85a02741b) <a id="structFRHAPI__MatchMakingSessionRequest_1a9275b8e96a5cfbb622907ba85a02741b"></a>

Custom data about the match.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a4882aefa9956b93a2a1299f9aad58756) <a id="structFRHAPI__MatchMakingSessionRequest_1a4882aefa9956b93a2a1299f9aad58756"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a72be7a3468a93f661be096e3cb4cfc57) <a id="structFRHAPI__MatchMakingSessionRequest_1a72be7a3468a93f661be096e3cb4cfc57"></a>

Player UUID of the host, if the host type is player.

<br>
#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1ac85c84cebd22df5e517421a5beb11e9f) <a id="structFRHAPI__MatchMakingSessionRequest_1ac85c84cebd22df5e517421a5beb11e9f"></a>

true if HostPlayerUuid_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingSessionRequest_1ae1b1ea471d58bf9811de15fc23a90ec9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae1b1ea471d58bf9811de15fc23a90ec9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingSessionRequest_1af2abff0e1f4a70a604d90b8363815f15)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingSessionRequest_1af2abff0e1f4a70a604d90b8363815f15"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1aef36a25549413635ccc147079795c978)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aef36a25549413635ccc147079795c978"></a>

Gets the value of Teams.

<br>
#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1ab8ebfb25fb6f1bd8389cef0d30fb1792)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab8ebfb25fb6f1bd8389cef0d30fb1792"></a>

Gets the value of Teams.

<br>
#### `public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1a10631150c0878ab7696ef390b860fb12)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a10631150c0878ab7696ef390b860fb12"></a>

Sets the value of Teams.

<br>
#### `public inline TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1aaa1828db30df0e3eb8787b1f2f175bb8)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aaa1828db30df0e3eb8787b1f2f175bb8"></a>

Gets the value of SessionTickets.

<br>
#### `public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a51fd13467759f06d9524dc1c63a59a40)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a51fd13467759f06d9524dc1c63a59a40"></a>

Gets the value of SessionTickets.

<br>
#### `public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1afbd83a5794036e76f7f108b1aa071de3)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1afbd83a5794036e76f7f108b1aa071de3"></a>

Sets the value of SessionTickets.

<br>
#### `public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a21eafe1f13121b2d3f86c3197a4252bf)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a21eafe1f13121b2d3f86c3197a4252bf"></a>

Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a13a75f79b974ef6f7e8fe0c192c19cf4)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a13a75f79b974ef6f7e8fe0c192c19cf4"></a>

Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a972144cb57dfe2349499bd2a31c2dca6)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a972144cb57dfe2349499bd2a31c2dca6"></a>

Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c"></a>

Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8f9178a3a6fb358ef60dfebf984a1be6)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a8f9178a3a6fb358ef60dfebf984a1be6"></a>

Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a0e506ce7a18ced122a29fc36771411cb)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a0e506ce7a18ced122a29fc36771411cb"></a>

Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ad91f0e4fe246e37afb27fb396f0809f6)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ad91f0e4fe246e37afb27fb396f0809f6"></a>

Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58"></a>

Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false.

<br>
#### `public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ae151b3b947e8e8f0e57c699b0ae309c1)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ae151b3b947e8e8f0e57c699b0ae309c1"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a86405b5b4a2601d75abe88337cbce675)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a86405b5b4a2601d75abe88337cbce675"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a20191199103c846b558155c40557edde)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a20191199103c846b558155c40557edde"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a7a36d5facc608e9c5d155e6af59eadb4)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a7a36d5facc608e9c5d155e6af59eadb4"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a9478f81a33e19efb1c8262b6a908cf36)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9478f81a33e19efb1c8262b6a908cf36"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ae891a51d870af6ab4962d8e23dca351e)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae891a51d870af6ab4962d8e23dca351e"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

<br>
#### `public inline FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1af49fce2ebaa0251cb204b05ed3e2e0a4)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1af49fce2ebaa0251cb204b05ed3e2e0a4"></a>

Gets the value of RegionId.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1abc9e9e149399a50eec1a53cc97278ae1)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1abc9e9e149399a50eec1a53cc97278ae1"></a>

Gets the value of RegionId.

<br>
#### `public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a1ed0b373f583440766db910fa91a9cd2)`(FString NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a1ed0b373f583440766db910fa91a9cd2"></a>

Sets the value of RegionId.

<br>
#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1afbb88da05e048bfd3fbdee2151983a45)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1afbb88da05e048bfd3fbdee2151983a45"></a>

Gets the value of MatchId.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa1a3d6d082294c8aba3f91673f522ac3)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aa1a3d6d082294c8aba3f91673f522ac3"></a>

Gets the value of MatchId.

<br>
#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a8367c9acb928f596c4ea8ae89171d0d0)`(FString NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a8367c9acb928f596c4ea8ae89171d0d0"></a>

Sets the value of MatchId.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a00eca816afd9db4ad94b242eef69d969)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a00eca816afd9db4ad94b242eef69d969"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ad9f586b13704c1f2b462e8481e1b65df)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ad9f586b13704c1f2b462e8481e1b65df"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a435e6862722e05fe00d33e8614ef5d9d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a435e6862722e05fe00d33e8614ef5d9d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aa1d3fbcf43952b77f6aa6f8396eff050)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aa1d3fbcf43952b77f6aa6f8396eff050"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a99522bcfecc333ed1dd87efcb540a898)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a99522bcfecc333ed1dd87efcb540a898"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ae1860b035e83ec9ea1f6c73749b05ca6)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae1860b035e83ec9ea1f6c73749b05ca6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a906d15bc1d4a5f9d015b121066203f26)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a906d15bc1d4a5f9d015b121066203f26"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a1673cba2b59ef9b2c4081ef8737d5a09)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a1673cba2b59ef9b2c4081ef8737d5a09"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a7417f5504af6b2f9e052b7e0de6c387c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a7417f5504af6b2f9e052b7e0de6c387c"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a06725b0b7d90e66287ee13ebeed36ebb)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a06725b0b7d90e66287ee13ebeed36ebb"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a49e7921c3ad4641869d931c93ee07b25)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a49e7921c3ad4641869d931c93ee07b25"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a4482414ce8729e0ac61da3be5f7552f3)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a4482414ce8729e0ac61da3be5f7552f3"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

<br>
