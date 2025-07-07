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
`public TMap< FString, float > `[`TicketAddedUnixTime_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a38c0f1edf19636c081cd087ae705d68e) | Map of ticket_id to unix time that each ticket was added to the match.
`public bool `[`TicketAddedUnixTime_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1ae198a78eaf51d23f5e001f4d190783ee) | true if TicketAddedUnixTime_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingSessionRequest_1a1c4d78c2ff5a8def1bd8d5978ac1ec3c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingSessionRequest_1a89ce9dfc3016a35170d0ea6a769120b7)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1a49bf0f7601abe0c89244095e781fd029)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1acc3d856d4527ead182f40ce422f2f571)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1aa190bcc848e9998970642062d47c0246)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` | Sets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1af71a889c1fd1f9991512ce1a7932f962)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` | Sets the value of Teams using move semantics.
`public inline TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1ac89c3e752ac8ab79f0b781273a3f9879)`()` | Gets the value of SessionTickets_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a47569bc215e6d4a9ca30326a71b6db0a)`() const` | Gets the value of SessionTickets_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1ab8cac8620d3ab28637745ccb44f72c57)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of SessionTickets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a7c5a361d389fe8a3144f3d106b8175d0)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of SessionTickets_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a18facc346a0e8fa0cc27f09d6efcb515)`()` | Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a369516400a02081f92b3d1ef63f4c129)`() const` | Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a94844593195dbc16314ea8d1a2c2b2dc)`(const TMap< FString, FString > & NewValue)` | Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true.
`public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a750894c9acb3c9b120e0ca2c0ae6fbe8)`(TMap< FString, FString > && NewValue)` | Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true using move semantics.
`public inline void `[`ClearSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103)`()` | Clears the value of SessionTickets_Optional and sets SessionTickets_IsSet to false.
`public inline bool `[`IsSessionTicketsSet`](#structFRHAPI__MatchMakingSessionRequest_1a9736c3f2468e11ccf86bb5dbea1fec5f)`() const` | Checks whether SessionTickets_Optional has been set.
`public inline TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a02c3ac6e21d946c172ae7fe97cc3a801)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1aae40b5fbad0898b1b8a84dec9440a00a)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a98d7f4bf312ac932cb465de8fe2a6876)`(const TArray< FString > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1aec2cfe21efa2f6ab64f194ae28cb4b1e)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ade68954c2f1333c14439de6113ba43c6)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a01f61a52acce696caf67a38bfe25a2d7)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a8f51d0c150193d0ec5d24b23969460bf)`(const TArray< FString > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a534bdec08d0a0cbc55e85836e43d0b60)`(TArray< FString > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchMakingSessionRequest_1a58098576bdc0b55a150d49744409d74a)`() const` | Checks whether Sessions_Optional has been set.
`public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a3ae073f49ce9a2783db9c22dc958f477)`()` | Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a63a5145129fea802787c145a5816388f)`() const` | Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ae272e441019574a702fd2d1e4ff4d8bd)`(const FGuid & DefaultValue) const` | Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a4df97124f7c3c49b13b407d41f649d7b)`()` | Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a2fc618ba4c796f4e951bf9549a2e6f93)`() const` | Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa98a00a35a2f60e9ee0c02b18236aed3)`(const FGuid & NewValue)` | Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a2833f16ecc18ba36b24460f74b6d66e8)`(FGuid && NewValue)` | Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58)`()` | Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false.
`public inline bool `[`IsInstanceLaunchTemplateIdSet`](#structFRHAPI__MatchMakingSessionRequest_1acac90d2c47aa95a5460da0449c9a36d5)`() const` | Checks whether InstanceLaunchTemplateId_Optional has been set.
`public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a93632121d3adb5cd8a196e2632cc807b)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ad26125edd8f7ed817e68b4742a4674bd)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a3ece18ca6fab568ed49c774d0a0c20f3)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ad6658a45d0140d693207939d0aea2fe6)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ac0b7d29c5d92e4d8a2491a487618c142)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1abb962d7a7f2d4bcf87b2482399861d96)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aeddef582cfa0cc7199406697395c5ab0)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline bool `[`IsInstanceRequestTemplateIdSet`](#structFRHAPI__MatchMakingSessionRequest_1aac81ad9bbd8e341313a3217e85de5ec7)`() const` | Checks whether InstanceRequestTemplateId_Optional has been set.
`public inline FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a4118ea702f478eb6678a5d7e2cb336d9)`()` | Gets the value of RegionId.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a1850ec5c5016880d78c1d72a5b27c02d)`() const` | Gets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a05b2f5c951811885077085ddf58df59c)`(const FString & NewValue)` | Sets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a4accc158106897d84d2c210166abcd7a)`(FString && NewValue)` | Sets the value of RegionId using move semantics.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a63bb5a935084273f5f9ad5339c906ada)`()` | Gets the value of MatchId.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1acdeae20d8552a35662c2b631e430ac18)`() const` | Gets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa5461fb722d8a6841e51e71daa3e2e13)`(const FString & NewValue)` | Sets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a2a950c8478fc56464bf23df3357e618c)`(FString && NewValue)` | Sets the value of MatchId using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a99de2fc10650c07602c60ac28dc42f94)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a9f78ba369fa4e02ddf16cac02747aa82)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a79353b8703be06c15b75c445e90ff408)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ae5a8689d0bbf8a5013e073b3e76a2590)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a1648bb43365b079e1689abe17a3c7821)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a5058d4f29a0886e0fe65b833b8604c02)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1aa297d043a0dded32c011a03110cf23eb)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchMakingSessionRequest_1aa9948d120ae0e04c84605b40c1b4a930)`() const` | Checks whether CustomData_Optional has been set.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1adf5814a26f577991064394ce794c0a61)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ab617375c2f56d2c1a0c19c365cd09bfe)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a429bb7b29a35a76ee595aa492b5490a3)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1afa7fe15ee5deffaad4ae3df4a1a9c335)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8d1e70f5347d75a84ee0cf2115e2ea4f)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ae5738cbed18f8a6cc097a9213d2a74b3)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ae2811ea2cbffe8d6f521c856b5d43935)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__MatchMakingSessionRequest_1a20b78b6c9763cb4db33c7472c08c8fa1)`() const` | Checks whether HostPlayerUuid_Optional has been set.
`public inline FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a852fe60cd1c9ec68f420659cf7aefca3)`()` | Gets the value of BackfillId_Optional, regardless of it having been set.
`public inline const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1ab10c405c35e628d29dac2794e2cdfd1b)`() const` | Gets the value of BackfillId_Optional, regardless of it having been set.
`public inline const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a3ab98aed1b010798ad89763cef3510f7)`(const FString & DefaultValue) const` | Gets the value of BackfillId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a93a933a715e48d8566e7f759ccffc2ec)`(FString & OutValue) const` | Fills OutValue with the value of BackfillId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a7bccbc26cd42c9df53f6f466da912597)`()` | Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1af2d585999327d1709caebf996f5d8d6d)`() const` | Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a534c15a232b2c252a801daaba8b846f7)`(const FString & NewValue)` | Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true.
`public inline void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a2a202101e81bc5b59a471ae314c632ee)`(FString && NewValue)` | Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true using move semantics.
`public inline void `[`ClearBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2)`()` | Clears the value of BackfillId_Optional and sets BackfillId_IsSet to false.
`public inline bool `[`IsBackfillIdSet`](#structFRHAPI__MatchMakingSessionRequest_1ab93cfaf5e808416421f76c917d8c0e41)`() const` | Checks whether BackfillId_Optional has been set.
`public inline FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a43d75bbdc4533375fc98f4c5cc2a553a)`()` | Gets the value of MatchCreateRequestTime.
`public inline const FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1acab309f2b715cccf176f063fa0dda376)`() const` | Gets the value of MatchCreateRequestTime.
`public inline void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a1cd348b21339fe4c8e81bc19064f3ab7)`(const FDateTime & NewValue)` | Sets the value of MatchCreateRequestTime.
`public inline void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1aba2d48e108378fe91ebe4ebf1b29dc0f)`(FDateTime && NewValue)` | Sets the value of MatchCreateRequestTime using move semantics.
`public inline float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a3d51c8ca312f6ebcd7cd6e9bc590ee09)`()` | Gets the value of EvaluationScore_Optional, regardless of it having been set.
`public inline const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1ac03c7a42ae57c92084eb8c6dcb53e450)`() const` | Gets the value of EvaluationScore_Optional, regardless of it having been set.
`public inline const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a800bcf6d262ded777dbc7755ccb07c28)`(const float & DefaultValue) const` | Gets the value of EvaluationScore_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a9928fd3509e876315856db87f44e924c)`(float & OutValue) const` | Fills OutValue with the value of EvaluationScore_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aaa05fbf9e3fa2e23cb2f310afe648a98)`()` | Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ae2034bdf382b451a57272e0503b2073f)`() const` | Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a7844668abd03425aec51ee98df60f6d2)`(const float & NewValue)` | Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true.
`public inline void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a3e8ece21d36a7acafca9154caa358d2a)`(float && NewValue)` | Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true using move semantics.
`public inline void `[`ClearEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310)`()` | Clears the value of EvaluationScore_Optional and sets EvaluationScore_IsSet to false.
`public inline bool `[`IsEvaluationScoreSet`](#structFRHAPI__MatchMakingSessionRequest_1a5ee322e928632699ad19669b46139fd0)`() const` | Checks whether EvaluationScore_Optional has been set.
`public inline float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a6926a666634fe9f694c45efc2a1daa97)`()` | Gets the value of RankQuality_Optional, regardless of it having been set.
`public inline const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a2ee747ce314361bbab6d8c0ce15c63b8)`() const` | Gets the value of RankQuality_Optional, regardless of it having been set.
`public inline const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1afa632dcbf45c1c0a3d0611c67803af3f)`(const float & DefaultValue) const` | Gets the value of RankQuality_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1adffb5f49c667cf7a949fa78ccd771530)`(float & OutValue) const` | Fills OutValue with the value of RankQuality_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8d21c9c5994eb54c334635f6be53bb26)`()` | Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a6676b83e0975efc3b7ac02fd2fe33153)`() const` | Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a23e527131822e2602c64b28fbc420ce1)`(const float & NewValue)` | Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true.
`public inline void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1af1751ba6b293d96a916e822962c9bd94)`(float && NewValue)` | Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true using move semantics.
`public inline void `[`ClearRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34)`()` | Clears the value of RankQuality_Optional and sets RankQuality_IsSet to false.
`public inline bool `[`IsRankQualitySet`](#structFRHAPI__MatchMakingSessionRequest_1a0f7b6eb2c97256f2097c3ca8bb664eba)`() const` | Checks whether RankQuality_Optional has been set.
`public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1ad26ef7c31dfd11b41128ae7c94116019)`()` | Gets the value of MatchMakingProfileId.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1ae542a9ff2d789192876b24e41b6ff3c4)`() const` | Gets the value of MatchMakingProfileId.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1ae14c7b08a3da9bf8c40739e31f24a5df)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a551ce0590b83a1340b21fe80356967e3)`(FString && NewValue)` | Sets the value of MatchMakingProfileId using move semantics.
`public inline TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a068d46b6ab8cf6734ec5d4e9175720dc)`()` | Gets the value of TicketAddedUnixTime_Optional, regardless of it having been set.
`public inline const TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a2db2992542d630ee3cee2bdee7b33018)`() const` | Gets the value of TicketAddedUnixTime_Optional, regardless of it having been set.
`public inline const TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a625f413766aabc438a536ea1ef32677c)`(const TMap< FString, float > & DefaultValue) const` | Gets the value of TicketAddedUnixTime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1abed8e3874b239baae2adf51aedcbd85b)`(TMap< FString, float > & OutValue) const` | Fills OutValue with the value of TicketAddedUnixTime_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, float > * `[`GetTicketAddedUnixTimeOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a615d253b2b16ee8bb561d47e3afadf68)`()` | Returns a pointer to TicketAddedUnixTime_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, float > * `[`GetTicketAddedUnixTimeOrNull`](#structFRHAPI__MatchMakingSessionRequest_1af6df7b611a31a4fafb250b91d734a921)`() const` | Returns a pointer to TicketAddedUnixTime_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a80674bc91f8b34edc8731197a8e61ca5)`(const TMap< FString, float > & NewValue)` | Sets the value of TicketAddedUnixTime_Optional and also sets TicketAddedUnixTime_IsSet to true.
`public inline void `[`SetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a3d6bc6d6263acf29e1dc7052810c0fc6)`(TMap< FString, float > && NewValue)` | Sets the value of TicketAddedUnixTime_Optional and also sets TicketAddedUnixTime_IsSet to true using move semantics.
`public inline void `[`ClearTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a152d74c039fc4b34035d8a96a463e503)`()` | Clears the value of TicketAddedUnixTime_Optional and sets TicketAddedUnixTime_IsSet to false.
`public inline bool `[`IsTicketAddedUnixTimeSet`](#structFRHAPI__MatchMakingSessionRequest_1a9201153680848714a455773b2b4f2551)`() const` | Checks whether TicketAddedUnixTime_Optional has been set.

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

#### `public TMap< FString, float > `[`TicketAddedUnixTime_Optional`](#structFRHAPI__MatchMakingSessionRequest_1a38c0f1edf19636c081cd087ae705d68e) <a id="structFRHAPI__MatchMakingSessionRequest_1a38c0f1edf19636c081cd087ae705d68e"></a>

Map of ticket_id to unix time that each ticket was added to the match.

#### `public bool `[`TicketAddedUnixTime_IsSet`](#structFRHAPI__MatchMakingSessionRequest_1ae198a78eaf51d23f5e001f4d190783ee) <a id="structFRHAPI__MatchMakingSessionRequest_1ae198a78eaf51d23f5e001f4d190783ee"></a>

true if TicketAddedUnixTime_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingSessionRequest_1a1c4d78c2ff5a8def1bd8d5978ac1ec3c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a1c4d78c2ff5a8def1bd8d5978ac1ec3c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingSessionRequest_1a89ce9dfc3016a35170d0ea6a769120b7)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a89ce9dfc3016a35170d0ea6a769120b7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1a49bf0f7601abe0c89244095e781fd029)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a49bf0f7601abe0c89244095e781fd029"></a>

Gets the value of Teams.

#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1acc3d856d4527ead182f40ce422f2f571)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1acc3d856d4527ead182f40ce422f2f571"></a>

Gets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1aa190bcc848e9998970642062d47c0246)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa190bcc848e9998970642062d47c0246"></a>

Sets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1af71a889c1fd1f9991512ce1a7932f962)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1af71a889c1fd1f9991512ce1a7932f962"></a>

Sets the value of Teams using move semantics.

#### `public inline TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1ac89c3e752ac8ab79f0b781273a3f9879)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ac89c3e752ac8ab79f0b781273a3f9879"></a>

Gets the value of SessionTickets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a47569bc215e6d4a9ca30326a71b6db0a)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a47569bc215e6d4a9ca30326a71b6db0a"></a>

Gets the value of SessionTickets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1ab8cac8620d3ab28637745ccb44f72c57)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab8cac8620d3ab28637745ccb44f72c57"></a>

Gets the value of SessionTickets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a7c5a361d389fe8a3144f3d106b8175d0)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a7c5a361d389fe8a3144f3d106b8175d0"></a>

Fills OutValue with the value of SessionTickets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a18facc346a0e8fa0cc27f09d6efcb515)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a18facc346a0e8fa0cc27f09d6efcb515"></a>

Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a369516400a02081f92b3d1ef63f4c129)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a369516400a02081f92b3d1ef63f4c129"></a>

Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a94844593195dbc16314ea8d1a2c2b2dc)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a94844593195dbc16314ea8d1a2c2b2dc"></a>

Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true.

#### `public inline void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a750894c9acb3c9b120e0ca2c0ae6fbe8)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a750894c9acb3c9b120e0ca2c0ae6fbe8"></a>

Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103"></a>

Clears the value of SessionTickets_Optional and sets SessionTickets_IsSet to false.

#### `public inline bool `[`IsSessionTicketsSet`](#structFRHAPI__MatchMakingSessionRequest_1a9736c3f2468e11ccf86bb5dbea1fec5f)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9736c3f2468e11ccf86bb5dbea1fec5f"></a>

Checks whether SessionTickets_Optional has been set.

#### `public inline TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a02c3ac6e21d946c172ae7fe97cc3a801)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a02c3ac6e21d946c172ae7fe97cc3a801"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1aae40b5fbad0898b1b8a84dec9440a00a)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aae40b5fbad0898b1b8a84dec9440a00a"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a98d7f4bf312ac932cb465de8fe2a6876)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a98d7f4bf312ac932cb465de8fe2a6876"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1aec2cfe21efa2f6ab64f194ae28cb4b1e)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1aec2cfe21efa2f6ab64f194ae28cb4b1e"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ade68954c2f1333c14439de6113ba43c6)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ade68954c2f1333c14439de6113ba43c6"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a01f61a52acce696caf67a38bfe25a2d7)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a01f61a52acce696caf67a38bfe25a2d7"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a8f51d0c150193d0ec5d24b23969460bf)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a8f51d0c150193d0ec5d24b23969460bf"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a534bdec08d0a0cbc55e85836e43d0b60)`(TArray< FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a534bdec08d0a0cbc55e85836e43d0b60"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchMakingSessionRequest_1a58098576bdc0b55a150d49744409d74a)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a58098576bdc0b55a150d49744409d74a"></a>

Checks whether Sessions_Optional has been set.

#### `public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a3ae073f49ce9a2783db9c22dc958f477)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a3ae073f49ce9a2783db9c22dc958f477"></a>

Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a63a5145129fea802787c145a5816388f)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a63a5145129fea802787c145a5816388f"></a>

Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ae272e441019574a702fd2d1e4ff4d8bd)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ae272e441019574a702fd2d1e4ff4d8bd"></a>

Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ac50153c32345b189dba6829c454c886c"></a>

Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a4df97124f7c3c49b13b407d41f649d7b)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a4df97124f7c3c49b13b407d41f649d7b"></a>

Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a2fc618ba4c796f4e951bf9549a2e6f93)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a2fc618ba4c796f4e951bf9549a2e6f93"></a>

Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa98a00a35a2f60e9ee0c02b18236aed3)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa98a00a35a2f60e9ee0c02b18236aed3"></a>

Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true.

#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a2833f16ecc18ba36b24460f74b6d66e8)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a2833f16ecc18ba36b24460f74b6d66e8"></a>

Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58"></a>

Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false.

#### `public inline bool `[`IsInstanceLaunchTemplateIdSet`](#structFRHAPI__MatchMakingSessionRequest_1acac90d2c47aa95a5460da0449c9a36d5)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1acac90d2c47aa95a5460da0449c9a36d5"></a>

Checks whether InstanceLaunchTemplateId_Optional has been set.

#### `public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a93632121d3adb5cd8a196e2632cc807b)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a93632121d3adb5cd8a196e2632cc807b"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ad26125edd8f7ed817e68b4742a4674bd)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ad26125edd8f7ed817e68b4742a4674bd"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a3ece18ca6fab568ed49c774d0a0c20f3)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a3ece18ca6fab568ed49c774d0a0c20f3"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a64e3088267cee5936a06c76ea1991ec1"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ad6658a45d0140d693207939d0aea2fe6)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ad6658a45d0140d693207939d0aea2fe6"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ac0b7d29c5d92e4d8a2491a487618c142)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ac0b7d29c5d92e4d8a2491a487618c142"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1abb962d7a7f2d4bcf87b2482399861d96)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1abb962d7a7f2d4bcf87b2482399861d96"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aeddef582cfa0cc7199406697395c5ab0)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aeddef582cfa0cc7199406697395c5ab0"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

#### `public inline bool `[`IsInstanceRequestTemplateIdSet`](#structFRHAPI__MatchMakingSessionRequest_1aac81ad9bbd8e341313a3217e85de5ec7)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aac81ad9bbd8e341313a3217e85de5ec7"></a>

Checks whether InstanceRequestTemplateId_Optional has been set.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a4118ea702f478eb6678a5d7e2cb336d9)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a4118ea702f478eb6678a5d7e2cb336d9"></a>

Gets the value of RegionId.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a1850ec5c5016880d78c1d72a5b27c02d)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a1850ec5c5016880d78c1d72a5b27c02d"></a>

Gets the value of RegionId.

#### `public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a05b2f5c951811885077085ddf58df59c)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a05b2f5c951811885077085ddf58df59c"></a>

Sets the value of RegionId.

#### `public inline void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a4accc158106897d84d2c210166abcd7a)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a4accc158106897d84d2c210166abcd7a"></a>

Sets the value of RegionId using move semantics.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a63bb5a935084273f5f9ad5339c906ada)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a63bb5a935084273f5f9ad5339c906ada"></a>

Gets the value of MatchId.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1acdeae20d8552a35662c2b631e430ac18)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1acdeae20d8552a35662c2b631e430ac18"></a>

Gets the value of MatchId.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa5461fb722d8a6841e51e71daa3e2e13)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa5461fb722d8a6841e51e71daa3e2e13"></a>

Sets the value of MatchId.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a2a950c8478fc56464bf23df3357e618c)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a2a950c8478fc56464bf23df3357e618c"></a>

Sets the value of MatchId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a99de2fc10650c07602c60ac28dc42f94)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a99de2fc10650c07602c60ac28dc42f94"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a9f78ba369fa4e02ddf16cac02747aa82)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9f78ba369fa4e02ddf16cac02747aa82"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a79353b8703be06c15b75c445e90ff408)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a79353b8703be06c15b75c445e90ff408"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a16ef7662ab55741f488ffbd9416fd284"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ae5a8689d0bbf8a5013e073b3e76a2590)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ae5a8689d0bbf8a5013e073b3e76a2590"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a1648bb43365b079e1689abe17a3c7821)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a1648bb43365b079e1689abe17a3c7821"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a5058d4f29a0886e0fe65b833b8604c02)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a5058d4f29a0886e0fe65b833b8604c02"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1aa297d043a0dded32c011a03110cf23eb)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa297d043a0dded32c011a03110cf23eb"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchMakingSessionRequest_1aa9948d120ae0e04c84605b40c1b4a930)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aa9948d120ae0e04c84605b40c1b4a930"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1adf5814a26f577991064394ce794c0a61)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1adf5814a26f577991064394ce794c0a61"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ab617375c2f56d2c1a0c19c365cd09bfe)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab617375c2f56d2c1a0c19c365cd09bfe"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a429bb7b29a35a76ee595aa492b5490a3)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a429bb7b29a35a76ee595aa492b5490a3"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a8292a9a49abd8bd5721787cd007527e6"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1afa7fe15ee5deffaad4ae3df4a1a9c335)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1afa7fe15ee5deffaad4ae3df4a1a9c335"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8d1e70f5347d75a84ee0cf2115e2ea4f)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a8d1e70f5347d75a84ee0cf2115e2ea4f"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ae5738cbed18f8a6cc097a9213d2a74b3)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae5738cbed18f8a6cc097a9213d2a74b3"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1ae2811ea2cbffe8d6f521c856b5d43935)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae2811ea2cbffe8d6f521c856b5d43935"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__MatchMakingSessionRequest_1a20b78b6c9763cb4db33c7472c08c8fa1)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a20b78b6c9763cb4db33c7472c08c8fa1"></a>

Checks whether HostPlayerUuid_Optional has been set.

#### `public inline FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a852fe60cd1c9ec68f420659cf7aefca3)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a852fe60cd1c9ec68f420659cf7aefca3"></a>

Gets the value of BackfillId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1ab10c405c35e628d29dac2794e2cdfd1b)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab10c405c35e628d29dac2794e2cdfd1b"></a>

Gets the value of BackfillId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a3ab98aed1b010798ad89763cef3510f7)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a3ab98aed1b010798ad89763cef3510f7"></a>

Gets the value of BackfillId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a93a933a715e48d8566e7f759ccffc2ec)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a93a933a715e48d8566e7f759ccffc2ec"></a>

Fills OutValue with the value of BackfillId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a7bccbc26cd42c9df53f6f466da912597)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a7bccbc26cd42c9df53f6f466da912597"></a>

Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1af2d585999327d1709caebf996f5d8d6d)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1af2d585999327d1709caebf996f5d8d6d"></a>

Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a534c15a232b2c252a801daaba8b846f7)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a534c15a232b2c252a801daaba8b846f7"></a>

Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true.

#### `public inline void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a2a202101e81bc5b59a471ae314c632ee)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a2a202101e81bc5b59a471ae314c632ee"></a>

Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true using move semantics.

#### `public inline void `[`ClearBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2"></a>

Clears the value of BackfillId_Optional and sets BackfillId_IsSet to false.

#### `public inline bool `[`IsBackfillIdSet`](#structFRHAPI__MatchMakingSessionRequest_1ab93cfaf5e808416421f76c917d8c0e41)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab93cfaf5e808416421f76c917d8c0e41"></a>

Checks whether BackfillId_Optional has been set.

#### `public inline FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a43d75bbdc4533375fc98f4c5cc2a553a)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a43d75bbdc4533375fc98f4c5cc2a553a"></a>

Gets the value of MatchCreateRequestTime.

#### `public inline const FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1acab309f2b715cccf176f063fa0dda376)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1acab309f2b715cccf176f063fa0dda376"></a>

Gets the value of MatchCreateRequestTime.

#### `public inline void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a1cd348b21339fe4c8e81bc19064f3ab7)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a1cd348b21339fe4c8e81bc19064f3ab7"></a>

Sets the value of MatchCreateRequestTime.

#### `public inline void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1aba2d48e108378fe91ebe4ebf1b29dc0f)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aba2d48e108378fe91ebe4ebf1b29dc0f"></a>

Sets the value of MatchCreateRequestTime using move semantics.

#### `public inline float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a3d51c8ca312f6ebcd7cd6e9bc590ee09)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a3d51c8ca312f6ebcd7cd6e9bc590ee09"></a>

Gets the value of EvaluationScore_Optional, regardless of it having been set.

#### `public inline const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1ac03c7a42ae57c92084eb8c6dcb53e450)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ac03c7a42ae57c92084eb8c6dcb53e450"></a>

Gets the value of EvaluationScore_Optional, regardless of it having been set.

#### `public inline const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a800bcf6d262ded777dbc7755ccb07c28)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a800bcf6d262ded777dbc7755ccb07c28"></a>

Gets the value of EvaluationScore_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a9928fd3509e876315856db87f44e924c)`(float & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9928fd3509e876315856db87f44e924c"></a>

Fills OutValue with the value of EvaluationScore_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aaa05fbf9e3fa2e23cb2f310afe648a98)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aaa05fbf9e3fa2e23cb2f310afe648a98"></a>

Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ae2034bdf382b451a57272e0503b2073f)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ae2034bdf382b451a57272e0503b2073f"></a>

Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a7844668abd03425aec51ee98df60f6d2)`(const float & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a7844668abd03425aec51ee98df60f6d2"></a>

Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true.

#### `public inline void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a3e8ece21d36a7acafca9154caa358d2a)`(float && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a3e8ece21d36a7acafca9154caa358d2a"></a>

Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true using move semantics.

#### `public inline void `[`ClearEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310"></a>

Clears the value of EvaluationScore_Optional and sets EvaluationScore_IsSet to false.

#### `public inline bool `[`IsEvaluationScoreSet`](#structFRHAPI__MatchMakingSessionRequest_1a5ee322e928632699ad19669b46139fd0)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a5ee322e928632699ad19669b46139fd0"></a>

Checks whether EvaluationScore_Optional has been set.

#### `public inline float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a6926a666634fe9f694c45efc2a1daa97)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a6926a666634fe9f694c45efc2a1daa97"></a>

Gets the value of RankQuality_Optional, regardless of it having been set.

#### `public inline const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a2ee747ce314361bbab6d8c0ce15c63b8)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a2ee747ce314361bbab6d8c0ce15c63b8"></a>

Gets the value of RankQuality_Optional, regardless of it having been set.

#### `public inline const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1afa632dcbf45c1c0a3d0611c67803af3f)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1afa632dcbf45c1c0a3d0611c67803af3f"></a>

Gets the value of RankQuality_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1adffb5f49c667cf7a949fa78ccd771530)`(float & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1adffb5f49c667cf7a949fa78ccd771530"></a>

Fills OutValue with the value of RankQuality_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a8d21c9c5994eb54c334635f6be53bb26)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a8d21c9c5994eb54c334635f6be53bb26"></a>

Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a6676b83e0975efc3b7ac02fd2fe33153)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a6676b83e0975efc3b7ac02fd2fe33153"></a>

Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a23e527131822e2602c64b28fbc420ce1)`(const float & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a23e527131822e2602c64b28fbc420ce1"></a>

Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true.

#### `public inline void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1af1751ba6b293d96a916e822962c9bd94)`(float && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1af1751ba6b293d96a916e822962c9bd94"></a>

Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true using move semantics.

#### `public inline void `[`ClearRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34"></a>

Clears the value of RankQuality_Optional and sets RankQuality_IsSet to false.

#### `public inline bool `[`IsRankQualitySet`](#structFRHAPI__MatchMakingSessionRequest_1a0f7b6eb2c97256f2097c3ca8bb664eba)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a0f7b6eb2c97256f2097c3ca8bb664eba"></a>

Checks whether RankQuality_Optional has been set.

#### `public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1ad26ef7c31dfd11b41128ae7c94116019)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ad26ef7c31dfd11b41128ae7c94116019"></a>

Gets the value of MatchMakingProfileId.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1ae542a9ff2d789192876b24e41b6ff3c4)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ae542a9ff2d789192876b24e41b6ff3c4"></a>

Gets the value of MatchMakingProfileId.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1ae14c7b08a3da9bf8c40739e31f24a5df)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ae14c7b08a3da9bf8c40739e31f24a5df"></a>

Sets the value of MatchMakingProfileId.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a551ce0590b83a1340b21fe80356967e3)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a551ce0590b83a1340b21fe80356967e3"></a>

Sets the value of MatchMakingProfileId using move semantics.

#### `public inline TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a068d46b6ab8cf6734ec5d4e9175720dc)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a068d46b6ab8cf6734ec5d4e9175720dc"></a>

Gets the value of TicketAddedUnixTime_Optional, regardless of it having been set.

#### `public inline const TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a2db2992542d630ee3cee2bdee7b33018)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a2db2992542d630ee3cee2bdee7b33018"></a>

Gets the value of TicketAddedUnixTime_Optional, regardless of it having been set.

#### `public inline const TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a625f413766aabc438a536ea1ef32677c)`(const TMap< FString, float > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a625f413766aabc438a536ea1ef32677c"></a>

Gets the value of TicketAddedUnixTime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1abed8e3874b239baae2adf51aedcbd85b)`(TMap< FString, float > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1abed8e3874b239baae2adf51aedcbd85b"></a>

Fills OutValue with the value of TicketAddedUnixTime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, float > * `[`GetTicketAddedUnixTimeOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a615d253b2b16ee8bb561d47e3afadf68)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a615d253b2b16ee8bb561d47e3afadf68"></a>

Returns a pointer to TicketAddedUnixTime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, float > * `[`GetTicketAddedUnixTimeOrNull`](#structFRHAPI__MatchMakingSessionRequest_1af6df7b611a31a4fafb250b91d734a921)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1af6df7b611a31a4fafb250b91d734a921"></a>

Returns a pointer to TicketAddedUnixTime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a80674bc91f8b34edc8731197a8e61ca5)`(const TMap< FString, float > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a80674bc91f8b34edc8731197a8e61ca5"></a>

Sets the value of TicketAddedUnixTime_Optional and also sets TicketAddedUnixTime_IsSet to true.

#### `public inline void `[`SetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a3d6bc6d6263acf29e1dc7052810c0fc6)`(TMap< FString, float > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a3d6bc6d6263acf29e1dc7052810c0fc6"></a>

Sets the value of TicketAddedUnixTime_Optional and also sets TicketAddedUnixTime_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a152d74c039fc4b34035d8a96a463e503)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a152d74c039fc4b34035d8a96a463e503"></a>

Clears the value of TicketAddedUnixTime_Optional and sets TicketAddedUnixTime_IsSet to false.

#### `public inline bool `[`IsTicketAddedUnixTimeSet`](#structFRHAPI__MatchMakingSessionRequest_1a9201153680848714a455773b2b4f2551)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9201153680848714a455773b2b4f2551"></a>

Checks whether TicketAddedUnixTime_Optional has been set.

