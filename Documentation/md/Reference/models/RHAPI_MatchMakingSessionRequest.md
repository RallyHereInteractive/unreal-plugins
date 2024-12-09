---
title: RHAPI_MatchMakingSessionRequest
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__MatchMakingSessionRequest_1a5775ca1c355071811b7ff1710db6f35e) | List of teams that are to be invited to session.
`public TMap< FString, FString > `[`SessionTickets_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a81449a93d287c720819ec85db35068eb) | List of sessions and tickets the match was made with. Used to verify this match should still be created. Takes priority over the session list. One of the two is required.
`public bool `[`SessionTickets_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1aa53d15377646c649798b028d9056e017) | true if SessionTickets_Optional has been set to a value
`public TArray< FString > `[`Sessions_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a0420efda7de8f05f474e92ef7f080723) | List of sessions that should be a part of this matchmade session. Used if session_tickets is empty. One of the two is required.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a08c61d1be714dd32440359763c639964) | true if Sessions_Optional has been set to a value
`public FGuid `[`InstanceLaunchTemplateId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a1ad01c05021f0c0714e434d3388d6eab) | DEPRECATED. Which launch template should be used to request an instance.
`public bool `[`InstanceLaunchTemplateId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a91aaed07cb2afebdc3c4b0abed222b11) | true if InstanceLaunchTemplateId_Optional has been set to a value
`public FGuid `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a10f1a22bbd8bee6b8091ae7ea118017a) | DEPRECATED. Which launch template should be used to request an instance.
`public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a5b3f4e49819cd199659d6e3036ed2abb) | true if InstanceRequestTemplateId_Optional has been set to a value
`public FString `[`RegionId`](#structFRHAPI__MatchMakingSessionRequest_1a342fc75f2f3c5218975fbb5f54680718) | Region to start the instance in.
`public FString `[`MatchId`](#structFRHAPI__MatchMakingSessionRequest_1a03c7f192f1779ab20215d2574e7c5da7) | Unique ID for this generated match.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a9275b8e96a5cfbb622907ba85a02741b) | Custom data about the match.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a4882aefa9956b93a2a1299f9aad58756) | true if CustomData_Optional has been set to a value
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a72be7a3468a93f661be096e3cb4cfc57) | Player UUID of the host, if the host type is player.
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1ac85c84cebd22df5e517421a5beb11e9f) | true if HostPlayerUuid_Optional has been set to a value
`public FString `[`BackfillId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a32afc53ac65151da117a40818333fc84) | ID for the open-match backfill object.
`public bool `[`BackfillId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1ad9bd505c54b11fbef446a0ad161d0dd3) | true if BackfillId_Optional has been set to a value
`public FDateTime `[`MatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a2c6a36abed941b2f9e05a5bb05dc951c) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public float `[`EvaluationScore_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a3386aa4c0b99036f96a3983dae5786f8) | The evaluation score sent to the open-match evaluator.
`public bool `[`EvaluationScore_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a36708de5027e491eb55827ce0dcd6f6a) | true if EvaluationScore_Optional has been set to a value
`public float `[`RankQuality_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a4771b58565265f14aab39e00066dcf1b) | The calculated rank quality of the match. Often matches the evaluation score.
`public bool `[`RankQuality_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a65a85b662c8ec2be40b7f6404fc8a1ff) | true if RankQuality_Optional has been set to a value
`public FString `[`MatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1aabf8d934d50af8d4c8fbf2254592feba) | The MatchMakingProfileID that was ultimately used to create this match.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingSessionRequest_1a1c4d78c2ff5a8def1bd8d5978ac1ec3c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingSessionRequest_1a03e660bba5b194f6b3c917431d6d8150)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1aef36a25549413635ccc147079795c978)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1ab8ebfb25fb6f1bd8389cef0d30fb1792)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1aa190bcc848e9998970642062d47c0246)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` | Sets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1af71a889c1fd1f9991512ce1a7932f962)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` | Sets the value of Teams using move semantics.
`public inline TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1aaa1828db30df0e3eb8787b1f2f175bb8)`()` | Gets the value of SessionTickets_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a51fd13467759f06d9524dc1c63a59a40)`() const` | Gets the value of SessionTickets_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a71d787e196d6078c3156753dda02b943)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of SessionTickets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a7c5a361d389fe8a3144f3d106b8175d0)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of SessionTickets_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a20865204c99a112d43f969f8d1f816cf)`()` | Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ab6dd9dc69c582676f6c728a8f91f151e)`() const` | Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a94844593195dbc16314ea8d1a2c2b2dc)`(const TMap< FString, FString > & NewValue)` | Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true.
`public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a750894c9acb3c9b120e0ca2c0ae6fbe8)`(TMap< FString, FString > && NewValue)` | Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true using move semantics.
`public inline void `[`ClearSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103)`()` | Clears the value of SessionTickets_Optional and sets SessionTickets_IsSet to false.
`public inline bool `[`IsSessionTicketsSet`](#structFRHAPI__MatchMakingSessionRequest_1a9736c3f2468e11ccf86bb5dbea1fec5f)`() const` | Checks whether SessionTickets_Optional has been set.
`public inline TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a49be0ffee22f26a668d46112b5d19d90)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a0881d22210d536918dd140d9a9157323)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1ad9530a39ccbcb041823512e07de1d896)`(const TArray< FString > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1aec2cfe21efa2f6ab64f194ae28cb4b1e)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aa6be3be1ddfd1c490920a1bc895a1dd0)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1abd7b2c6e72a208ecd4453f5617c3f331)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a8f51d0c150193d0ec5d24b23969460bf)`(const TArray< FString > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a534bdec08d0a0cbc55e85836e43d0b60)`(TArray< FString > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchMakingSessionRequest_1a58098576bdc0b55a150d49744409d74a)`() const` | Checks whether Sessions_Optional has been set.
`public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a21eafe1f13121b2d3f86c3197a4252bf)`()` | Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a13a75f79b974ef6f7e8fe0c192c19cf4)`() const` | Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a972144cb57dfe2349499bd2a31c2dca6)`(const FGuid & DefaultValue) const` | Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8f9178a3a6fb358ef60dfebf984a1be6)`()` | Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a0e506ce7a18ced122a29fc36771411cb)`() const` | Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa98a00a35a2f60e9ee0c02b18236aed3)`(const FGuid & NewValue)` | Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a2833f16ecc18ba36b24460f74b6d66e8)`(FGuid && NewValue)` | Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58)`()` | Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false.
`public inline bool `[`IsInstanceLaunchTemplateIdSet`](#structFRHAPI__MatchMakingSessionRequest_1acac90d2c47aa95a5460da0449c9a36d5)`() const` | Checks whether InstanceLaunchTemplateId_Optional has been set.
`public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ae151b3b947e8e8f0e57c699b0ae309c1)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a86405b5b4a2601d75abe88337cbce675)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a20191199103c846b558155c40557edde)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a7a36d5facc608e9c5d155e6af59eadb4)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a9478f81a33e19efb1c8262b6a908cf36)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1abb962d7a7f2d4bcf87b2482399861d96)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aeddef582cfa0cc7199406697395c5ab0)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline bool `[`IsInstanceRequestTemplateIdSet`](#structFRHAPI__MatchMakingSessionRequest_1aac81ad9bbd8e341313a3217e85de5ec7)`() const` | Checks whether InstanceRequestTemplateId_Optional has been set.
`public inline FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1af49fce2ebaa0251cb204b05ed3e2e0a4)`()` | Gets the value of RegionId.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1abc9e9e149399a50eec1a53cc97278ae1)`() const` | Gets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a05b2f5c951811885077085ddf58df59c)`(const FString & NewValue)` | Sets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a4accc158106897d84d2c210166abcd7a)`(FString && NewValue)` | Sets the value of RegionId using move semantics.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1afbb88da05e048bfd3fbdee2151983a45)`()` | Gets the value of MatchId.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa1a3d6d082294c8aba3f91673f522ac3)`() const` | Gets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa5461fb722d8a6841e51e71daa3e2e13)`(const FString & NewValue)` | Sets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a2a950c8478fc56464bf23df3357e618c)`(FString && NewValue)` | Sets the value of MatchId using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a00eca816afd9db4ad94b242eef69d969)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ad9f586b13704c1f2b462e8481e1b65df)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a435e6862722e05fe00d33e8614ef5d9d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aa1d3fbcf43952b77f6aa6f8396eff050)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a99522bcfecc333ed1dd87efcb540a898)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a5058d4f29a0886e0fe65b833b8604c02)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1aa297d043a0dded32c011a03110cf23eb)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchMakingSessionRequest_1aa9948d120ae0e04c84605b40c1b4a930)`() const` | Checks whether CustomData_Optional has been set.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a906d15bc1d4a5f9d015b121066203f26)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a1673cba2b59ef9b2c4081ef8737d5a09)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a7417f5504af6b2f9e052b7e0de6c387c)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a06725b0b7d90e66287ee13ebeed36ebb)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a49e7921c3ad4641869d931c93ee07b25)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ae5738cbed18f8a6cc097a9213d2a74b3)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ae2811ea2cbffe8d6f521c856b5d43935)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__MatchMakingSessionRequest_1a20b78b6c9763cb4db33c7472c08c8fa1)`() const` | Checks whether HostPlayerUuid_Optional has been set.
`public inline FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a5550173125494ddc79b68c7f1d99e6e6)`()` | Gets the value of BackfillId_Optional, regardless of it having been set.
`public inline const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a9ba09bbcc181f7b4e8c3843346fc1d69)`() const` | Gets the value of BackfillId_Optional, regardless of it having been set.
`public inline const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a3039f9c51450331b99ce28f53a2527f0)`(const FString & DefaultValue) const` | Gets the value of BackfillId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a93a933a715e48d8566e7f759ccffc2ec)`(FString & OutValue) const` | Fills OutValue with the value of BackfillId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a50bb818e9d65e12ffdf63a14d8bc97f4)`()` | Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ac27e0b52b62df7e870ad31766404f6f4)`() const` | Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a534c15a232b2c252a801daaba8b846f7)`(const FString & NewValue)` | Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true.
`public inline void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a2a202101e81bc5b59a471ae314c632ee)`(FString && NewValue)` | Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true using move semantics.
`public inline void `[`ClearBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2)`()` | Clears the value of BackfillId_Optional and sets BackfillId_IsSet to false.
`public inline bool `[`IsBackfillIdSet`](#structFRHAPI__MatchMakingSessionRequest_1ab93cfaf5e808416421f76c917d8c0e41)`() const` | Checks whether BackfillId_Optional has been set.
`public inline FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a9760d529bd3a01ef78d8d7b7b2ba990b)`()` | Gets the value of MatchCreateRequestTime.
`public inline const FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1adcb57ab96fee0c10f74405bcc75ad1f0)`() const` | Gets the value of MatchCreateRequestTime.
`public inline void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a1cd348b21339fe4c8e81bc19064f3ab7)`(const FDateTime & NewValue)` | Sets the value of MatchCreateRequestTime.
`public inline void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1aba2d48e108378fe91ebe4ebf1b29dc0f)`(FDateTime && NewValue)` | Sets the value of MatchCreateRequestTime using move semantics.
`public inline float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a90eaba5a4e718ac13cc794c16bd90f1e)`()` | Gets the value of EvaluationScore_Optional, regardless of it having been set.
`public inline const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a7f4f80214fa98837121668dd253c2987)`() const` | Gets the value of EvaluationScore_Optional, regardless of it having been set.
`public inline const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a77ea61ff8218cfae493d27b78311af1b)`(const float & DefaultValue) const` | Gets the value of EvaluationScore_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a9928fd3509e876315856db87f44e924c)`(float & OutValue) const` | Fills OutValue with the value of EvaluationScore_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ab4c13b73ead4c33e3257cda7bd757f26)`()` | Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8bb2a3d474a1143069b3f9fc981f79c9)`() const` | Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a7844668abd03425aec51ee98df60f6d2)`(const float & NewValue)` | Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true.
`public inline void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a3e8ece21d36a7acafca9154caa358d2a)`(float && NewValue)` | Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true using move semantics.
`public inline void `[`ClearEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310)`()` | Clears the value of EvaluationScore_Optional and sets EvaluationScore_IsSet to false.
`public inline bool `[`IsEvaluationScoreSet`](#structFRHAPI__MatchMakingSessionRequest_1a5ee322e928632699ad19669b46139fd0)`() const` | Checks whether EvaluationScore_Optional has been set.
`public inline float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1abb03e7a40511911efaf72b1ee9cb6a82)`()` | Gets the value of RankQuality_Optional, regardless of it having been set.
`public inline const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1af8cb2a5952f33bdb5114285a6bfa655a)`() const` | Gets the value of RankQuality_Optional, regardless of it having been set.
`public inline const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a18a190f27aefc8e165d26645cb83b018)`(const float & DefaultValue) const` | Gets the value of RankQuality_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1adffb5f49c667cf7a949fa78ccd771530)`(float & OutValue) const` | Fills OutValue with the value of RankQuality_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a320222221088617abb098cf5f984c21b)`()` | Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ad8915d87c27e01605ba5b7a62352ab8e)`() const` | Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a23e527131822e2602c64b28fbc420ce1)`(const float & NewValue)` | Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true.
`public inline void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1af1751ba6b293d96a916e822962c9bd94)`(float && NewValue)` | Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true using move semantics.
`public inline void `[`ClearRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34)`()` | Clears the value of RankQuality_Optional and sets RankQuality_IsSet to false.
`public inline bool `[`IsRankQualitySet`](#structFRHAPI__MatchMakingSessionRequest_1a0f7b6eb2c97256f2097c3ca8bb664eba)`() const` | Checks whether RankQuality_Optional has been set.
`public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1aceafea81c6e46a6c8f78cb3e606cc940)`()` | Gets the value of MatchMakingProfileId.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a56f2b43581b643d52840a78f935fc330)`() const` | Gets the value of MatchMakingProfileId.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1ae14c7b08a3da9bf8c40739e31f24a5df)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a551ce0590b83a1340b21fe80356967e3)`(FString && NewValue)` | Sets the value of MatchMakingProfileId using move semantics.

### Members

#### `public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__MatchMakingSessionRequest_1a5775ca1c355071811b7ff1710db6f35e) <a id="structFRHAPI__MatchMakingSessionRequest_1a5775ca1c355071811b7ff1710db6f35e"></a>

List of teams that are to be invited to session.

#### `public TMap< FString, FString > `[`SessionTickets_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a81449a93d287c720819ec85db35068eb) <a id="structFRHAPI__MatchMakingSessionRequest_1a81449a93d287c720819ec85db35068eb"></a>

List of sessions and tickets the match was made with. Used to verify this match should still be created. Takes priority over the session list. One of the two is required.

#### `public bool `[`SessionTickets_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1aa53d15377646c649798b028d9056e017) <a id="structFRHAPI__MatchMakingSessionRequest_1aa53d15377646c649798b028d9056e017"></a>

true if SessionTickets_Optional has been set to a value

#### `public TArray< FString > `[`Sessions_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a0420efda7de8f05f474e92ef7f080723) <a id="structFRHAPI__MatchMakingSessionRequest_1a0420efda7de8f05f474e92ef7f080723"></a>

List of sessions that should be a part of this matchmade session. Used if session_tickets is empty. One of the two is required.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a08c61d1be714dd32440359763c639964) <a id="structFRHAPI__MatchMakingSessionRequest_1a08c61d1be714dd32440359763c639964"></a>

true if Sessions_Optional has been set to a value

#### `public FGuid `[`InstanceLaunchTemplateId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a1ad01c05021f0c0714e434d3388d6eab) <a id="structFRHAPI__MatchMakingSessionRequest_1a1ad01c05021f0c0714e434d3388d6eab"></a>

DEPRECATED. Which launch template should be used to request an instance.

#### `public bool `[`InstanceLaunchTemplateId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a91aaed07cb2afebdc3c4b0abed222b11) <a id="structFRHAPI__MatchMakingSessionRequest_1a91aaed07cb2afebdc3c4b0abed222b11"></a>

true if InstanceLaunchTemplateId_Optional has been set to a value

#### `public FGuid `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a10f1a22bbd8bee6b8091ae7ea118017a) <a id="structFRHAPI__MatchMakingSessionRequest_1a10f1a22bbd8bee6b8091ae7ea118017a"></a>

DEPRECATED. Which launch template should be used to request an instance.

#### `public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a5b3f4e49819cd199659d6e3036ed2abb) <a id="structFRHAPI__MatchMakingSessionRequest_1a5b3f4e49819cd199659d6e3036ed2abb"></a>

true if InstanceRequestTemplateId_Optional has been set to a value

#### `public FString `[`RegionId`](#structFRHAPI__MatchMakingSessionRequest_1a342fc75f2f3c5218975fbb5f54680718) <a id="structFRHAPI__MatchMakingSessionRequest_1a342fc75f2f3c5218975fbb5f54680718"></a>

Region to start the instance in.

#### `public FString `[`MatchId`](#structFRHAPI__MatchMakingSessionRequest_1a03c7f192f1779ab20215d2574e7c5da7) <a id="structFRHAPI__MatchMakingSessionRequest_1a03c7f192f1779ab20215d2574e7c5da7"></a>

Unique ID for this generated match.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a9275b8e96a5cfbb622907ba85a02741b) <a id="structFRHAPI__MatchMakingSessionRequest_1a9275b8e96a5cfbb622907ba85a02741b"></a>

Custom data about the match.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a4882aefa9956b93a2a1299f9aad58756) <a id="structFRHAPI__MatchMakingSessionRequest_1a4882aefa9956b93a2a1299f9aad58756"></a>

true if CustomData_Optional has been set to a value

#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a72be7a3468a93f661be096e3cb4cfc57) <a id="structFRHAPI__MatchMakingSessionRequest_1a72be7a3468a93f661be096e3cb4cfc57"></a>

Player UUID of the host, if the host type is player.

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1ac85c84cebd22df5e517421a5beb11e9f) <a id="structFRHAPI__MatchMakingSessionRequest_1ac85c84cebd22df5e517421a5beb11e9f"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public FString `[`BackfillId_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a32afc53ac65151da117a40818333fc84) <a id="structFRHAPI__MatchMakingSessionRequest_1a32afc53ac65151da117a40818333fc84"></a>

ID for the open-match backfill object.

#### `public bool `[`BackfillId_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1ad9bd505c54b11fbef446a0ad161d0dd3) <a id="structFRHAPI__MatchMakingSessionRequest_1ad9bd505c54b11fbef446a0ad161d0dd3"></a>

true if BackfillId_Optional has been set to a value

#### `public FDateTime `[`MatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a2c6a36abed941b2f9e05a5bb05dc951c) <a id="structFRHAPI__MatchMakingSessionRequest_1a2c6a36abed941b2f9e05a5bb05dc951c"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public float `[`EvaluationScore_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a3386aa4c0b99036f96a3983dae5786f8) <a id="structFRHAPI__MatchMakingSessionRequest_1a3386aa4c0b99036f96a3983dae5786f8"></a>

The evaluation score sent to the open-match evaluator.

#### `public bool `[`EvaluationScore_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a36708de5027e491eb55827ce0dcd6f6a) <a id="structFRHAPI__MatchMakingSessionRequest_1a36708de5027e491eb55827ce0dcd6f6a"></a>

true if EvaluationScore_Optional has been set to a value

#### `public float `[`RankQuality_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a4771b58565265f14aab39e00066dcf1b) <a id="structFRHAPI__MatchMakingSessionRequest_1a4771b58565265f14aab39e00066dcf1b"></a>

The calculated rank quality of the match. Often matches the evaluation score.

#### `public bool `[`RankQuality_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1a65a85b662c8ec2be40b7f6404fc8a1ff) <a id="structFRHAPI__MatchMakingSessionRequest_1a65a85b662c8ec2be40b7f6404fc8a1ff"></a>

true if RankQuality_Optional has been set to a value

#### `public FString `[`MatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1aabf8d934d50af8d4c8fbf2254592feba) <a id="structFRHAPI__MatchMakingSessionRequest_1aabf8d934d50af8d4c8fbf2254592feba"></a>

The MatchMakingProfileID that was ultimately used to create this match.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingSessionRequest_1a1c4d78c2ff5a8def1bd8d5978ac1ec3c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a1c4d78c2ff5a8def1bd8d5978ac1ec3c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingSessionRequest_1a03e660bba5b194f6b3c917431d6d8150)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a03e660bba5b194f6b3c917431d6d8150"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1aef36a25549413635ccc147079795c978)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aef36a25549413635ccc147079795c978"></a>

Gets the value of Teams.

#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1ab8ebfb25fb6f1bd8389cef0d30fb1792)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab8ebfb25fb6f1bd8389cef0d30fb1792"></a>

Gets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1aa190bcc848e9998970642062d47c0246)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa190bcc848e9998970642062d47c0246"></a>

Sets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1af71a889c1fd1f9991512ce1a7932f962)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1af71a889c1fd1f9991512ce1a7932f962"></a>

Sets the value of Teams using move semantics.

#### `public inline TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1aaa1828db30df0e3eb8787b1f2f175bb8)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aaa1828db30df0e3eb8787b1f2f175bb8"></a>

Gets the value of SessionTickets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a51fd13467759f06d9524dc1c63a59a40)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a51fd13467759f06d9524dc1c63a59a40"></a>

Gets the value of SessionTickets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a71d787e196d6078c3156753dda02b943)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a71d787e196d6078c3156753dda02b943"></a>

Gets the value of SessionTickets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a7c5a361d389fe8a3144f3d106b8175d0)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a7c5a361d389fe8a3144f3d106b8175d0"></a>

Fills OutValue with the value of SessionTickets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a20865204c99a112d43f969f8d1f816cf)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a20865204c99a112d43f969f8d1f816cf"></a>

Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ab6dd9dc69c582676f6c728a8f91f151e)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab6dd9dc69c582676f6c728a8f91f151e"></a>

Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a94844593195dbc16314ea8d1a2c2b2dc)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a94844593195dbc16314ea8d1a2c2b2dc"></a>

Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true.

#### `public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a750894c9acb3c9b120e0ca2c0ae6fbe8)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a750894c9acb3c9b120e0ca2c0ae6fbe8"></a>

Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103"></a>

Clears the value of SessionTickets_Optional and sets SessionTickets_IsSet to false.

#### `public inline bool `[`IsSessionTicketsSet`](#structFRHAPI__MatchMakingSessionRequest_1a9736c3f2468e11ccf86bb5dbea1fec5f)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9736c3f2468e11ccf86bb5dbea1fec5f"></a>

Checks whether SessionTickets_Optional has been set.

#### `public inline TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a49be0ffee22f26a668d46112b5d19d90)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a49be0ffee22f26a668d46112b5d19d90"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a0881d22210d536918dd140d9a9157323)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a0881d22210d536918dd140d9a9157323"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1ad9530a39ccbcb041823512e07de1d896)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ad9530a39ccbcb041823512e07de1d896"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1aec2cfe21efa2f6ab64f194ae28cb4b1e)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1aec2cfe21efa2f6ab64f194ae28cb4b1e"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aa6be3be1ddfd1c490920a1bc895a1dd0)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aa6be3be1ddfd1c490920a1bc895a1dd0"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1abd7b2c6e72a208ecd4453f5617c3f331)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1abd7b2c6e72a208ecd4453f5617c3f331"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a8f51d0c150193d0ec5d24b23969460bf)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a8f51d0c150193d0ec5d24b23969460bf"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a534bdec08d0a0cbc55e85836e43d0b60)`(TArray< FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a534bdec08d0a0cbc55e85836e43d0b60"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchMakingSessionRequest_1a58098576bdc0b55a150d49744409d74a)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a58098576bdc0b55a150d49744409d74a"></a>

Checks whether Sessions_Optional has been set.

#### `public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a21eafe1f13121b2d3f86c3197a4252bf)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a21eafe1f13121b2d3f86c3197a4252bf"></a>

Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a13a75f79b974ef6f7e8fe0c192c19cf4)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a13a75f79b974ef6f7e8fe0c192c19cf4"></a>

Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a972144cb57dfe2349499bd2a31c2dca6)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a972144cb57dfe2349499bd2a31c2dca6"></a>

Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c"></a>

Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8f9178a3a6fb358ef60dfebf984a1be6)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a8f9178a3a6fb358ef60dfebf984a1be6"></a>

Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a0e506ce7a18ced122a29fc36771411cb)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a0e506ce7a18ced122a29fc36771411cb"></a>

Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa98a00a35a2f60e9ee0c02b18236aed3)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa98a00a35a2f60e9ee0c02b18236aed3"></a>

Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true.

#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a2833f16ecc18ba36b24460f74b6d66e8)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a2833f16ecc18ba36b24460f74b6d66e8"></a>

Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58"></a>

Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false.

#### `public inline bool `[`IsInstanceLaunchTemplateIdSet`](#structFRHAPI__MatchMakingSessionRequest_1acac90d2c47aa95a5460da0449c9a36d5)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1acac90d2c47aa95a5460da0449c9a36d5"></a>

Checks whether InstanceLaunchTemplateId_Optional has been set.

#### `public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ae151b3b947e8e8f0e57c699b0ae309c1)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ae151b3b947e8e8f0e57c699b0ae309c1"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a86405b5b4a2601d75abe88337cbce675)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a86405b5b4a2601d75abe88337cbce675"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a20191199103c846b558155c40557edde)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a20191199103c846b558155c40557edde"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a7a36d5facc608e9c5d155e6af59eadb4)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a7a36d5facc608e9c5d155e6af59eadb4"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a9478f81a33e19efb1c8262b6a908cf36)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9478f81a33e19efb1c8262b6a908cf36"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1abb962d7a7f2d4bcf87b2482399861d96)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1abb962d7a7f2d4bcf87b2482399861d96"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aeddef582cfa0cc7199406697395c5ab0)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aeddef582cfa0cc7199406697395c5ab0"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

#### `public inline bool `[`IsInstanceRequestTemplateIdSet`](#structFRHAPI__MatchMakingSessionRequest_1aac81ad9bbd8e341313a3217e85de5ec7)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aac81ad9bbd8e341313a3217e85de5ec7"></a>

Checks whether InstanceRequestTemplateId_Optional has been set.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1af49fce2ebaa0251cb204b05ed3e2e0a4)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1af49fce2ebaa0251cb204b05ed3e2e0a4"></a>

Gets the value of RegionId.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1abc9e9e149399a50eec1a53cc97278ae1)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1abc9e9e149399a50eec1a53cc97278ae1"></a>

Gets the value of RegionId.

#### `public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a05b2f5c951811885077085ddf58df59c)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a05b2f5c951811885077085ddf58df59c"></a>

Sets the value of RegionId.

#### `public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a4accc158106897d84d2c210166abcd7a)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a4accc158106897d84d2c210166abcd7a"></a>

Sets the value of RegionId using move semantics.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1afbb88da05e048bfd3fbdee2151983a45)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1afbb88da05e048bfd3fbdee2151983a45"></a>

Gets the value of MatchId.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa1a3d6d082294c8aba3f91673f522ac3)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aa1a3d6d082294c8aba3f91673f522ac3"></a>

Gets the value of MatchId.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa5461fb722d8a6841e51e71daa3e2e13)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa5461fb722d8a6841e51e71daa3e2e13"></a>

Sets the value of MatchId.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a2a950c8478fc56464bf23df3357e618c)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a2a950c8478fc56464bf23df3357e618c"></a>

Sets the value of MatchId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a00eca816afd9db4ad94b242eef69d969)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a00eca816afd9db4ad94b242eef69d969"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ad9f586b13704c1f2b462e8481e1b65df)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ad9f586b13704c1f2b462e8481e1b65df"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a435e6862722e05fe00d33e8614ef5d9d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a435e6862722e05fe00d33e8614ef5d9d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aa1d3fbcf43952b77f6aa6f8396eff050)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aa1d3fbcf43952b77f6aa6f8396eff050"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a99522bcfecc333ed1dd87efcb540a898)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a99522bcfecc333ed1dd87efcb540a898"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a5058d4f29a0886e0fe65b833b8604c02)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a5058d4f29a0886e0fe65b833b8604c02"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1aa297d043a0dded32c011a03110cf23eb)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa297d043a0dded32c011a03110cf23eb"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchMakingSessionRequest_1aa9948d120ae0e04c84605b40c1b4a930)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aa9948d120ae0e04c84605b40c1b4a930"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a906d15bc1d4a5f9d015b121066203f26)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a906d15bc1d4a5f9d015b121066203f26"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a1673cba2b59ef9b2c4081ef8737d5a09)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a1673cba2b59ef9b2c4081ef8737d5a09"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a7417f5504af6b2f9e052b7e0de6c387c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a7417f5504af6b2f9e052b7e0de6c387c"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a06725b0b7d90e66287ee13ebeed36ebb)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a06725b0b7d90e66287ee13ebeed36ebb"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a49e7921c3ad4641869d931c93ee07b25)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a49e7921c3ad4641869d931c93ee07b25"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ae5738cbed18f8a6cc097a9213d2a74b3)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae5738cbed18f8a6cc097a9213d2a74b3"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ae2811ea2cbffe8d6f521c856b5d43935)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae2811ea2cbffe8d6f521c856b5d43935"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__MatchMakingSessionRequest_1a20b78b6c9763cb4db33c7472c08c8fa1)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a20b78b6c9763cb4db33c7472c08c8fa1"></a>

Checks whether HostPlayerUuid_Optional has been set.

#### `public inline FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a5550173125494ddc79b68c7f1d99e6e6)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a5550173125494ddc79b68c7f1d99e6e6"></a>

Gets the value of BackfillId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a9ba09bbcc181f7b4e8c3843346fc1d69)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9ba09bbcc181f7b4e8c3843346fc1d69"></a>

Gets the value of BackfillId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a3039f9c51450331b99ce28f53a2527f0)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a3039f9c51450331b99ce28f53a2527f0"></a>

Gets the value of BackfillId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a93a933a715e48d8566e7f759ccffc2ec)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a93a933a715e48d8566e7f759ccffc2ec"></a>

Fills OutValue with the value of BackfillId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a50bb818e9d65e12ffdf63a14d8bc97f4)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a50bb818e9d65e12ffdf63a14d8bc97f4"></a>

Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ac27e0b52b62df7e870ad31766404f6f4)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ac27e0b52b62df7e870ad31766404f6f4"></a>

Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a534c15a232b2c252a801daaba8b846f7)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a534c15a232b2c252a801daaba8b846f7"></a>

Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true.

#### `public inline void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a2a202101e81bc5b59a471ae314c632ee)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a2a202101e81bc5b59a471ae314c632ee"></a>

Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true using move semantics.

#### `public inline void `[`ClearBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2"></a>

Clears the value of BackfillId_Optional and sets BackfillId_IsSet to false.

#### `public inline bool `[`IsBackfillIdSet`](#structFRHAPI__MatchMakingSessionRequest_1ab93cfaf5e808416421f76c917d8c0e41)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab93cfaf5e808416421f76c917d8c0e41"></a>

Checks whether BackfillId_Optional has been set.

#### `public inline FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a9760d529bd3a01ef78d8d7b7b2ba990b)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a9760d529bd3a01ef78d8d7b7b2ba990b"></a>

Gets the value of MatchCreateRequestTime.

#### `public inline const FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1adcb57ab96fee0c10f74405bcc75ad1f0)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1adcb57ab96fee0c10f74405bcc75ad1f0"></a>

Gets the value of MatchCreateRequestTime.

#### `public inline void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a1cd348b21339fe4c8e81bc19064f3ab7)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a1cd348b21339fe4c8e81bc19064f3ab7"></a>

Sets the value of MatchCreateRequestTime.

#### `public inline void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1aba2d48e108378fe91ebe4ebf1b29dc0f)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aba2d48e108378fe91ebe4ebf1b29dc0f"></a>

Sets the value of MatchCreateRequestTime using move semantics.

#### `public inline float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a90eaba5a4e718ac13cc794c16bd90f1e)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a90eaba5a4e718ac13cc794c16bd90f1e"></a>

Gets the value of EvaluationScore_Optional, regardless of it having been set.

#### `public inline const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a7f4f80214fa98837121668dd253c2987)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a7f4f80214fa98837121668dd253c2987"></a>

Gets the value of EvaluationScore_Optional, regardless of it having been set.

#### `public inline const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a77ea61ff8218cfae493d27b78311af1b)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a77ea61ff8218cfae493d27b78311af1b"></a>

Gets the value of EvaluationScore_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a9928fd3509e876315856db87f44e924c)`(float & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9928fd3509e876315856db87f44e924c"></a>

Fills OutValue with the value of EvaluationScore_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ab4c13b73ead4c33e3257cda7bd757f26)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ab4c13b73ead4c33e3257cda7bd757f26"></a>

Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8bb2a3d474a1143069b3f9fc981f79c9)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a8bb2a3d474a1143069b3f9fc981f79c9"></a>

Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a7844668abd03425aec51ee98df60f6d2)`(const float & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a7844668abd03425aec51ee98df60f6d2"></a>

Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true.

#### `public inline void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a3e8ece21d36a7acafca9154caa358d2a)`(float && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a3e8ece21d36a7acafca9154caa358d2a"></a>

Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true using move semantics.

#### `public inline void `[`ClearEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310"></a>

Clears the value of EvaluationScore_Optional and sets EvaluationScore_IsSet to false.

#### `public inline bool `[`IsEvaluationScoreSet`](#structFRHAPI__MatchMakingSessionRequest_1a5ee322e928632699ad19669b46139fd0)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a5ee322e928632699ad19669b46139fd0"></a>

Checks whether EvaluationScore_Optional has been set.

#### `public inline float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1abb03e7a40511911efaf72b1ee9cb6a82)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1abb03e7a40511911efaf72b1ee9cb6a82"></a>

Gets the value of RankQuality_Optional, regardless of it having been set.

#### `public inline const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1af8cb2a5952f33bdb5114285a6bfa655a)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1af8cb2a5952f33bdb5114285a6bfa655a"></a>

Gets the value of RankQuality_Optional, regardless of it having been set.

#### `public inline const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a18a190f27aefc8e165d26645cb83b018)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a18a190f27aefc8e165d26645cb83b018"></a>

Gets the value of RankQuality_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1adffb5f49c667cf7a949fa78ccd771530)`(float & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1adffb5f49c667cf7a949fa78ccd771530"></a>

Fills OutValue with the value of RankQuality_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a320222221088617abb098cf5f984c21b)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a320222221088617abb098cf5f984c21b"></a>

Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ad8915d87c27e01605ba5b7a62352ab8e)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ad8915d87c27e01605ba5b7a62352ab8e"></a>

Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a23e527131822e2602c64b28fbc420ce1)`(const float & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a23e527131822e2602c64b28fbc420ce1"></a>

Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true.

#### `public inline void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1af1751ba6b293d96a916e822962c9bd94)`(float && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1af1751ba6b293d96a916e822962c9bd94"></a>

Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true using move semantics.

#### `public inline void `[`ClearRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34"></a>

Clears the value of RankQuality_Optional and sets RankQuality_IsSet to false.

#### `public inline bool `[`IsRankQualitySet`](#structFRHAPI__MatchMakingSessionRequest_1a0f7b6eb2c97256f2097c3ca8bb664eba)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a0f7b6eb2c97256f2097c3ca8bb664eba"></a>

Checks whether RankQuality_Optional has been set.

#### `public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1aceafea81c6e46a6c8f78cb3e606cc940)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aceafea81c6e46a6c8f78cb3e606cc940"></a>

Gets the value of MatchMakingProfileId.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a56f2b43581b643d52840a78f935fc330)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a56f2b43581b643d52840a78f935fc330"></a>

Gets the value of MatchMakingProfileId.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1ae14c7b08a3da9bf8c40739e31f24a5df)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae14c7b08a3da9bf8c40739e31f24a5df"></a>

Sets the value of MatchMakingProfileId.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a551ce0590b83a1340b21fe80356967e3)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a551ce0590b83a1340b21fe80356967e3"></a>

Sets the value of MatchMakingProfileId using move semantics.

