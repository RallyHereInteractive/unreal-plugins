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
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1a0dc67ed214204e4820aff6abba69560e)`()` | Gets the value of Teams.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1ab6c0a485a5b7d3813e11a5f9aa7de1b7)`() const` | Gets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1a73be0953053f73ddd75575bd1a0a0b17)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` | Sets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1acd8d5e84a92bee8a4b5e3c5bef761d0d)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` | Sets the value of Teams using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1af6c422cfd86de577a2cd4d33b497584a)`()` | Gets the value of SessionTickets_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a7ad9485430c3f8ebf098b1419f12ca3c)`() const` | Gets the value of SessionTickets_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1ac3e13523c501523e3d952bd757bd0197)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of SessionTickets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a9b6178aad4b495603081d390c32075cd)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of SessionTickets_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ad530fee41743c506ce37b7e6e4f66b4a)`()` | Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aeff996475bf97af44e69ed84387b40f8)`() const` | Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1ab1cbe12cacc18f0801d0c3c0ff2e5913)`(const TMap< FString, FString > & NewValue)` | Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1aac21e338f0089416e744d03193c99216)`(TMap< FString, FString > && NewValue)` | Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true using move semantics.
`public inline void `[`ClearSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103)`()` | Clears the value of SessionTickets_Optional and sets SessionTickets_IsSet to false.
`public inline FORCEINLINE TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a6d21bee9ed5692814bab7c34b96cfa7f)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a5c581f44dc7ae87da7e1c8be98a0ee51)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a282ee524ae7a9b1ff2ab2828bb133823)`(const TArray< FString > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a03ef883b9b502a1551b86ae3a53a563c)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a604c3aaf83a3d04df9f298c9eaf8e06f)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ae363adbc4f2a591ce3492105642b7ae0)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a78ca5e30a86a9e179060f08239fc6935)`(const TArray< FString > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a475e3bcfa83f683bac873674cad5b5d3)`(TArray< FString > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a1e107c7abde8719667d988e3aae2d233)`()` | Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a1919da9f390eaddca3ced4efaf94c73d)`() const` | Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ad9322a172f9118535bc9beb5f1ed2e5f)`(const FGuid & DefaultValue) const` | Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a368facd890cae8d1428590df34193d26)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1afc891b0a474a494eb0e70eee482f9d69)`()` | Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a613da27a4f2374e5f2ba8c601bce9de9)`() const` | Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a6b1772aca7d6056000d2d830bceaa815)`(const FGuid & NewValue)` | Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ad26d3290da0d28d238853397d14319a2)`(FGuid && NewValue)` | Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58)`()` | Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ac7b87a9451c6c1e79765cf6df958f13c)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aaf21df96a6f5c3edaba809f7b6e34b7b)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a28b07fe1c9107ebd5036bdeaacea71b0)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a93cbe2fcae98555fdf74ca65ebda01a0)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a2206cd22a2509bbc8bdfd71ab1895535)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a4f738e5d5b35cd3cef54016285e53d29)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aed0e049d522064b71cd7c4b42bacb8d7)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a506850e3c5a87f9b7153faa8b038d3ff)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a945deb28e9ab1f87bd8435f81768fe21)`()` | Gets the value of RegionId.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a4172825b5110745f0b1e4f9d3e7c47c0)`() const` | Gets the value of RegionId.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1af11c2e862796cbdb24b09a7512725b2d)`(const FString & NewValue)` | Sets the value of RegionId.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a35b2aa355269db06b6ed9d3dc2d6c2e8)`(FString && NewValue)` | Sets the value of RegionId using move semantics.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1afe7a575c1b3b56cac59e98d5fa6c2009)`()` | Gets the value of MatchId.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a7883dd877948dc2bbe9d793095f0533b)`() const` | Gets the value of MatchId.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa4299d1def9e9bf7480657d0ef4f0f8a)`(const FString & NewValue)` | Sets the value of MatchId.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1ac8da56c51084b0ff45dba11eb6d880ab)`(FString && NewValue)` | Sets the value of MatchId using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ae431e57cb97fb2c6eeeb7f2e38995d01)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1abeaceb6472aba0bd1f4e8beb2375a335)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a3136338d7148174f60ca901914873884)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ad45892bb819c4e48dc94feb727056334)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a3495ad2b8d6f5ee5a43a8d1063849363)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a375349e667a3903357c52527e2577972)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1af293c81a6d99c032dc5bd8bc001986c1)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a3fa12afacecbd6c1f31d970e39c9297b)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a0fea05dd18cdb50d6042d083466ffe02)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a91da54487696c50acb60b005c75a103d)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1afe1083ecc398a0bed57d7ed3fc9163a2)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a7815041daf4853e87ca8ac1e4aeae589)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a03a9caa572163ffb5a84ce0ae4991b45)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aef0861ed8e17bc34c2ba284a2a747cce)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a0c811f384151ffc420ea40db71aa6801)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a6f2881eb49a5c4dc77381d7637c2b541)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FORCEINLINE FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a188f940f01fc3e37b5e6dcbab1a3f362)`()` | Gets the value of BackfillId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a553cc434e4e0a4e2cd52da698db44b91)`() const` | Gets the value of BackfillId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1abcf17f46ed22f12d00bc90a4a260d2ec)`(const FString & DefaultValue) const` | Gets the value of BackfillId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a8a14dbab528844e72b9eed660e776fa2)`(FString & OutValue) const` | Fills OutValue with the value of BackfillId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1acb0b0e7680a8e6763926afe16adfe94b)`()` | Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a1eb0409da7d552bdc14c035cd1bed6f7)`() const` | Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a0f23c302c20b18ed5164ae5c097ab102)`(const FString & NewValue)` | Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true.
`public inline FORCEINLINE void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a23d32644b8b48b8e0c33ecf939c8b33d)`(FString && NewValue)` | Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true using move semantics.
`public inline void `[`ClearBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2)`()` | Clears the value of BackfillId_Optional and sets BackfillId_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a7dba7cde19b4f896330214cc9f8bfdb1)`()` | Gets the value of MatchCreateRequestTime.
`public inline FORCEINLINE const FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a20629713b7cc92e9af1f4d215cfee33e)`() const` | Gets the value of MatchCreateRequestTime.
`public inline FORCEINLINE void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a39fe894a65af648148c6b3d0cd8cfc66)`(const FDateTime & NewValue)` | Sets the value of MatchCreateRequestTime.
`public inline FORCEINLINE void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a41c81dd088681e05f8bb6efa0e3da8af)`(FDateTime && NewValue)` | Sets the value of MatchCreateRequestTime using move semantics.
`public inline FORCEINLINE float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a874dcb4abad991af4d23915c5ca04c76)`()` | Gets the value of EvaluationScore_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a536d10dd385f3e628db609ffaf017171)`() const` | Gets the value of EvaluationScore_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a39f784f533ad5a74e3f13e5fba8601b6)`(const float & DefaultValue) const` | Gets the value of EvaluationScore_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a3faa311f338f42e5acd3f8d78f503963)`(float & OutValue) const` | Fills OutValue with the value of EvaluationScore_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1af6ed9ef5a4518265bb850e9f57ced13c)`()` | Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aee1080bb78ce3eceabebfd46108e2a5f)`() const` | Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1ac6a0294462b4fa6ae8de22c3f7ead640)`(const float & NewValue)` | Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true.
`public inline FORCEINLINE void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1ac0de6168106ae114e5d479c25098b2e2)`(float && NewValue)` | Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true using move semantics.
`public inline void `[`ClearEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310)`()` | Clears the value of EvaluationScore_Optional and sets EvaluationScore_IsSet to false.
`public inline FORCEINLINE float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a85fd2ad3cc9a6f07bbda31f0c128fb2e)`()` | Gets the value of RankQuality_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1acdb574e0a227ce76aff0e902f9b8a0b0)`() const` | Gets the value of RankQuality_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1ad5c21ffc7747b547826352294ce7d7ff)`(const float & DefaultValue) const` | Gets the value of RankQuality_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1ac70f36c462513aef5abc061688f2c7e9)`(float & OutValue) const` | Fills OutValue with the value of RankQuality_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ac3712a9a6a1d7de5b8561c0ca5662968)`()` | Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a4803171029bb07c396e60ca1c1b64987)`() const` | Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1ac657962242ac92008389d2dd7330af78)`(const float & NewValue)` | Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true.
`public inline FORCEINLINE void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a29ee2be539a2b3ddd88e44274a7ae27e)`(float && NewValue)` | Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true using move semantics.
`public inline void `[`ClearRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34)`()` | Clears the value of RankQuality_Optional and sets RankQuality_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a9078b8d6d776512477735c3c7660e190)`()` | Gets the value of MatchMakingProfileId.
`public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1aaf6d7d84667f25858b24d267019606e3)`() const` | Gets the value of MatchMakingProfileId.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a23b6f4458a17cef853d7bf9ecaad95cc)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1aaf0eff387e4c40e61c9fe0af427a10a3)`(FString && NewValue)` | Sets the value of MatchMakingProfileId using move semantics.
`public inline FORCEINLINE TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1ab86469bfb813368f2cc803fd1bdfbd58)`()` | Gets the value of TicketAddedUnixTime_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a834911d79a3049dac12af47e9bd5464d)`() const` | Gets the value of TicketAddedUnixTime_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a47a6171ce776b0b77a28a8de8f10360a)`(const TMap< FString, float > & DefaultValue) const` | Gets the value of TicketAddedUnixTime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1aa27b23e56797a1aca6f9bc502bfbe8e9)`(TMap< FString, float > & OutValue) const` | Fills OutValue with the value of TicketAddedUnixTime_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, float > * `[`GetTicketAddedUnixTimeOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a57cfb60fb2bdf7b5570b537f4ffef11e)`()` | Returns a pointer to TicketAddedUnixTime_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, float > * `[`GetTicketAddedUnixTimeOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a572b8020ae8f2124d53a3637589e2ad1)`() const` | Returns a pointer to TicketAddedUnixTime_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1af781b679fc0c88078b2402df60667655)`(const TMap< FString, float > & NewValue)` | Sets the value of TicketAddedUnixTime_Optional and also sets TicketAddedUnixTime_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1aa444fb8a1cf2c396c2cb80b2272aece8)`(TMap< FString, float > && NewValue)` | Sets the value of TicketAddedUnixTime_Optional and also sets TicketAddedUnixTime_IsSet to true using move semantics.
`public inline void `[`ClearTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a152d74c039fc4b34035d8a96a463e503)`()` | Clears the value of TicketAddedUnixTime_Optional and sets TicketAddedUnixTime_IsSet to false.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1a0dc67ed214204e4820aff6abba69560e)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a0dc67ed214204e4820aff6abba69560e"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__MatchMakingSessionRequest_1ab6c0a485a5b7d3813e11a5f9aa7de1b7)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ab6c0a485a5b7d3813e11a5f9aa7de1b7"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1a73be0953053f73ddd75575bd1a0a0b17)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a73be0953053f73ddd75575bd1a0a0b17"></a>

Sets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__MatchMakingSessionRequest_1acd8d5e84a92bee8a4b5e3c5bef761d0d)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1acd8d5e84a92bee8a4b5e3c5bef761d0d"></a>

Sets the value of Teams using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1af6c422cfd86de577a2cd4d33b497584a)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1af6c422cfd86de577a2cd4d33b497584a"></a>

Gets the value of SessionTickets_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a7ad9485430c3f8ebf098b1419f12ca3c)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a7ad9485430c3f8ebf098b1419f12ca3c"></a>

Gets the value of SessionTickets_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1ac3e13523c501523e3d952bd757bd0197)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ac3e13523c501523e3d952bd757bd0197"></a>

Gets the value of SessionTickets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a9b6178aad4b495603081d390c32075cd)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a9b6178aad4b495603081d390c32075cd"></a>

Fills OutValue with the value of SessionTickets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ad530fee41743c506ce37b7e6e4f66b4a)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ad530fee41743c506ce37b7e6e4f66b4a"></a>

Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetSessionTicketsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aeff996475bf97af44e69ed84387b40f8)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aeff996475bf97af44e69ed84387b40f8"></a>

Returns a pointer to SessionTickets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1ab1cbe12cacc18f0801d0c3c0ff2e5913)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ab1cbe12cacc18f0801d0c3c0ff2e5913"></a>

Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1aac21e338f0089416e744d03193c99216)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aac21e338f0089416e744d03193c99216"></a>

Sets the value of SessionTickets_Optional and also sets SessionTickets_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionTickets`](#structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a67991e1a5346dd7ee431ac3c95fae103"></a>

Clears the value of SessionTickets_Optional and sets SessionTickets_IsSet to false.

#### `public inline FORCEINLINE TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a6d21bee9ed5692814bab7c34b96cfa7f)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a6d21bee9ed5692814bab7c34b96cfa7f"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a5c581f44dc7ae87da7e1c8be98a0ee51)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a5c581f44dc7ae87da7e1c8be98a0ee51"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a282ee524ae7a9b1ff2ab2828bb133823)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a282ee524ae7a9b1ff2ab2828bb133823"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a03ef883b9b502a1551b86ae3a53a563c)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a03ef883b9b502a1551b86ae3a53a563c"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a604c3aaf83a3d04df9f298c9eaf8e06f)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a604c3aaf83a3d04df9f298c9eaf8e06f"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetSessionsOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ae363adbc4f2a591ce3492105642b7ae0)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1ae363adbc4f2a591ce3492105642b7ae0"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a78ca5e30a86a9e179060f08239fc6935)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a78ca5e30a86a9e179060f08239fc6935"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchMakingSessionRequest_1a475e3bcfa83f683bac873674cad5b5d3)`(TArray< FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a475e3bcfa83f683bac873674cad5b5d3"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1adebdd1ee3e1ee275131abc42bc143446"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a1e107c7abde8719667d988e3aae2d233)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a1e107c7abde8719667d988e3aae2d233"></a>

Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a1919da9f390eaddca3ced4efaf94c73d)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a1919da9f390eaddca3ced4efaf94c73d"></a>

Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ad9322a172f9118535bc9beb5f1ed2e5f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ad9322a172f9118535bc9beb5f1ed2e5f"></a>

Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a368facd890cae8d1428590df34193d26)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a368facd890cae8d1428590df34193d26"></a>

Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1afc891b0a474a494eb0e70eee482f9d69)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1afc891b0a474a494eb0e70eee482f9d69"></a>

Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInstanceLaunchTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a613da27a4f2374e5f2ba8c601bce9de9)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a613da27a4f2374e5f2ba8c601bce9de9"></a>

Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a6b1772aca7d6056000d2d830bceaa815)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a6b1772aca7d6056000d2d830bceaa815"></a>

Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ad26d3290da0d28d238853397d14319a2)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ad26d3290da0d28d238853397d14319a2"></a>

Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a562cc24bffffbe5275439d90a065df58"></a>

Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1ac7b87a9451c6c1e79765cf6df958f13c)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ac7b87a9451c6c1e79765cf6df958f13c"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aaf21df96a6f5c3edaba809f7b6e34b7b)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aaf21df96a6f5c3edaba809f7b6e34b7b"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a28b07fe1c9107ebd5036bdeaacea71b0)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a28b07fe1c9107ebd5036bdeaacea71b0"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a93cbe2fcae98555fdf74ca65ebda01a0)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a93cbe2fcae98555fdf74ca65ebda01a0"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a2206cd22a2509bbc8bdfd71ab1895535)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a2206cd22a2509bbc8bdfd71ab1895535"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a4f738e5d5b35cd3cef54016285e53d29)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a4f738e5d5b35cd3cef54016285e53d29"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aed0e049d522064b71cd7c4b42bacb8d7)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aed0e049d522064b71cd7c4b42bacb8d7"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1a506850e3c5a87f9b7153faa8b038d3ff)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a506850e3c5a87f9b7153faa8b038d3ff"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1aa2b8778acecfd439f666216d0a8dc928"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a945deb28e9ab1f87bd8435f81768fe21)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a945deb28e9ab1f87bd8435f81768fe21"></a>

Gets the value of RegionId.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a4172825b5110745f0b1e4f9d3e7c47c0)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a4172825b5110745f0b1e4f9d3e7c47c0"></a>

Gets the value of RegionId.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1af11c2e862796cbdb24b09a7512725b2d)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1af11c2e862796cbdb24b09a7512725b2d"></a>

Sets the value of RegionId.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__MatchMakingSessionRequest_1a35b2aa355269db06b6ed9d3dc2d6c2e8)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a35b2aa355269db06b6ed9d3dc2d6c2e8"></a>

Sets the value of RegionId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1afe7a575c1b3b56cac59e98d5fa6c2009)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1afe7a575c1b3b56cac59e98d5fa6c2009"></a>

Gets the value of MatchId.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1a7883dd877948dc2bbe9d793095f0533b)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a7883dd877948dc2bbe9d793095f0533b"></a>

Gets the value of MatchId.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1aa4299d1def9e9bf7480657d0ef4f0f8a)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa4299d1def9e9bf7480657d0ef4f0f8a"></a>

Sets the value of MatchId.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchMakingSessionRequest_1ac8da56c51084b0ff45dba11eb6d880ab)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ac8da56c51084b0ff45dba11eb6d880ab"></a>

Sets the value of MatchId using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ae431e57cb97fb2c6eeeb7f2e38995d01)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ae431e57cb97fb2c6eeeb7f2e38995d01"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1abeaceb6472aba0bd1f4e8beb2375a335)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1abeaceb6472aba0bd1f4e8beb2375a335"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a3136338d7148174f60ca901914873884)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a3136338d7148174f60ca901914873884"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1ad45892bb819c4e48dc94feb727056334)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ad45892bb819c4e48dc94feb727056334"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a3495ad2b8d6f5ee5a43a8d1063849363)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a3495ad2b8d6f5ee5a43a8d1063849363"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a375349e667a3903357c52527e2577972)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a375349e667a3903357c52527e2577972"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1af293c81a6d99c032dc5bd8bc001986c1)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1af293c81a6d99c032dc5bd8bc001986c1"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a3fa12afacecbd6c1f31d970e39c9297b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a3fa12afacecbd6c1f31d970e39c9297b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a90c976d1677596abcbc2becfbe0c0b08"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a0fea05dd18cdb50d6042d083466ffe02)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a0fea05dd18cdb50d6042d083466ffe02"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a91da54487696c50acb60b005c75a103d)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a91da54487696c50acb60b005c75a103d"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1afe1083ecc398a0bed57d7ed3fc9163a2)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1afe1083ecc398a0bed57d7ed3fc9163a2"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a7815041daf4853e87ca8ac1e4aeae589)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a7815041daf4853e87ca8ac1e4aeae589"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a03a9caa572163ffb5a84ce0ae4991b45)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a03a9caa572163ffb5a84ce0ae4991b45"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aef0861ed8e17bc34c2ba284a2a747cce)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aef0861ed8e17bc34c2ba284a2a747cce"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a0c811f384151ffc420ea40db71aa6801)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a0c811f384151ffc420ea40db71aa6801"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a6f2881eb49a5c4dc77381d7637c2b541)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a6f2881eb49a5c4dc77381d7637c2b541"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a53517d5bc4ecb34f4f08b6aaf1fc899a"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a188f940f01fc3e37b5e6dcbab1a3f362)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a188f940f01fc3e37b5e6dcbab1a3f362"></a>

Gets the value of BackfillId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a553cc434e4e0a4e2cd52da698db44b91)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a553cc434e4e0a4e2cd52da698db44b91"></a>

Gets the value of BackfillId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1abcf17f46ed22f12d00bc90a4a260d2ec)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1abcf17f46ed22f12d00bc90a4a260d2ec"></a>

Gets the value of BackfillId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a8a14dbab528844e72b9eed660e776fa2)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a8a14dbab528844e72b9eed660e776fa2"></a>

Fills OutValue with the value of BackfillId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1acb0b0e7680a8e6763926afe16adfe94b)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1acb0b0e7680a8e6763926afe16adfe94b"></a>

Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetBackfillIdOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a1eb0409da7d552bdc14c035cd1bed6f7)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a1eb0409da7d552bdc14c035cd1bed6f7"></a>

Returns a pointer to BackfillId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a0f23c302c20b18ed5164ae5c097ab102)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a0f23c302c20b18ed5164ae5c097ab102"></a>

Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a23d32644b8b48b8e0c33ecf939c8b33d)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a23d32644b8b48b8e0c33ecf939c8b33d"></a>

Sets the value of BackfillId_Optional and also sets BackfillId_IsSet to true using move semantics.

#### `public inline void `[`ClearBackfillId`](#structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a9374d75956bcacf1c6bc25b5e6e748f2"></a>

Clears the value of BackfillId_Optional and sets BackfillId_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a7dba7cde19b4f896330214cc9f8bfdb1)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a7dba7cde19b4f896330214cc9f8bfdb1"></a>

Gets the value of MatchCreateRequestTime.

#### `public inline FORCEINLINE const FDateTime & `[`GetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a20629713b7cc92e9af1f4d215cfee33e)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a20629713b7cc92e9af1f4d215cfee33e"></a>

Gets the value of MatchCreateRequestTime.

#### `public inline FORCEINLINE void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a39fe894a65af648148c6b3d0cd8cfc66)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a39fe894a65af648148c6b3d0cd8cfc66"></a>

Sets the value of MatchCreateRequestTime.

#### `public inline FORCEINLINE void `[`SetMatchCreateRequestTime`](#structFRHAPI__MatchMakingSessionRequest_1a41c81dd088681e05f8bb6efa0e3da8af)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a41c81dd088681e05f8bb6efa0e3da8af"></a>

Sets the value of MatchCreateRequestTime using move semantics.

#### `public inline FORCEINLINE float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a874dcb4abad991af4d23915c5ca04c76)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a874dcb4abad991af4d23915c5ca04c76"></a>

Gets the value of EvaluationScore_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a536d10dd385f3e628db609ffaf017171)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a536d10dd385f3e628db609ffaf017171"></a>

Gets the value of EvaluationScore_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a39f784f533ad5a74e3f13e5fba8601b6)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a39f784f533ad5a74e3f13e5fba8601b6"></a>

Gets the value of EvaluationScore_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1a3faa311f338f42e5acd3f8d78f503963)`(float & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a3faa311f338f42e5acd3f8d78f503963"></a>

Fills OutValue with the value of EvaluationScore_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1af6ed9ef5a4518265bb850e9f57ced13c)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1af6ed9ef5a4518265bb850e9f57ced13c"></a>

Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetEvaluationScoreOrNull`](#structFRHAPI__MatchMakingSessionRequest_1aee1080bb78ce3eceabebfd46108e2a5f)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aee1080bb78ce3eceabebfd46108e2a5f"></a>

Returns a pointer to EvaluationScore_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1ac6a0294462b4fa6ae8de22c3f7ead640)`(const float & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ac6a0294462b4fa6ae8de22c3f7ead640"></a>

Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1ac0de6168106ae114e5d479c25098b2e2)`(float && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ac0de6168106ae114e5d479c25098b2e2"></a>

Sets the value of EvaluationScore_Optional and also sets EvaluationScore_IsSet to true using move semantics.

#### `public inline void `[`ClearEvaluationScore`](#structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1af8ff1f96e8e0bd1f1284147f42897310"></a>

Clears the value of EvaluationScore_Optional and sets EvaluationScore_IsSet to false.

#### `public inline FORCEINLINE float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a85fd2ad3cc9a6f07bbda31f0c128fb2e)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a85fd2ad3cc9a6f07bbda31f0c128fb2e"></a>

Gets the value of RankQuality_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1acdb574e0a227ce76aff0e902f9b8a0b0)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1acdb574e0a227ce76aff0e902f9b8a0b0"></a>

Gets the value of RankQuality_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1ad5c21ffc7747b547826352294ce7d7ff)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ad5c21ffc7747b547826352294ce7d7ff"></a>

Gets the value of RankQuality_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1ac70f36c462513aef5abc061688f2c7e9)`(float & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1ac70f36c462513aef5abc061688f2c7e9"></a>

Fills OutValue with the value of RankQuality_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1ac3712a9a6a1d7de5b8561c0ca5662968)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ac3712a9a6a1d7de5b8561c0ca5662968"></a>

Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetRankQualityOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a4803171029bb07c396e60ca1c1b64987)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a4803171029bb07c396e60ca1c1b64987"></a>

Returns a pointer to RankQuality_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1ac657962242ac92008389d2dd7330af78)`(const float & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1ac657962242ac92008389d2dd7330af78"></a>

Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a29ee2be539a2b3ddd88e44274a7ae27e)`(float && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a29ee2be539a2b3ddd88e44274a7ae27e"></a>

Sets the value of RankQuality_Optional and also sets RankQuality_IsSet to true using move semantics.

#### `public inline void `[`ClearRankQuality`](#structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a0d63bc170644071a10420bea40c79f34"></a>

Clears the value of RankQuality_Optional and sets RankQuality_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a9078b8d6d776512477735c3c7660e190)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a9078b8d6d776512477735c3c7660e190"></a>

Gets the value of MatchMakingProfileId.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1aaf6d7d84667f25858b24d267019606e3)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1aaf6d7d84667f25858b24d267019606e3"></a>

Gets the value of MatchMakingProfileId.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1a23b6f4458a17cef853d7bf9ecaad95cc)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1a23b6f4458a17cef853d7bf9ecaad95cc"></a>

Sets the value of MatchMakingProfileId.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingSessionRequest_1aaf0eff387e4c40e61c9fe0af427a10a3)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aaf0eff387e4c40e61c9fe0af427a10a3"></a>

Sets the value of MatchMakingProfileId using move semantics.

#### `public inline FORCEINLINE TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1ab86469bfb813368f2cc803fd1bdfbd58)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1ab86469bfb813368f2cc803fd1bdfbd58"></a>

Gets the value of TicketAddedUnixTime_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a834911d79a3049dac12af47e9bd5464d)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a834911d79a3049dac12af47e9bd5464d"></a>

Gets the value of TicketAddedUnixTime_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, float > & `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a47a6171ce776b0b77a28a8de8f10360a)`(const TMap< FString, float > & DefaultValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1a47a6171ce776b0b77a28a8de8f10360a"></a>

Gets the value of TicketAddedUnixTime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1aa27b23e56797a1aca6f9bc502bfbe8e9)`(TMap< FString, float > & OutValue) const` <a id="structFRHAPI__MatchMakingSessionRequest_1aa27b23e56797a1aca6f9bc502bfbe8e9"></a>

Fills OutValue with the value of TicketAddedUnixTime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, float > * `[`GetTicketAddedUnixTimeOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a57cfb60fb2bdf7b5570b537f4ffef11e)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a57cfb60fb2bdf7b5570b537f4ffef11e"></a>

Returns a pointer to TicketAddedUnixTime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, float > * `[`GetTicketAddedUnixTimeOrNull`](#structFRHAPI__MatchMakingSessionRequest_1a572b8020ae8f2124d53a3637589e2ad1)`() const` <a id="structFRHAPI__MatchMakingSessionRequest_1a572b8020ae8f2124d53a3637589e2ad1"></a>

Returns a pointer to TicketAddedUnixTime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1af781b679fc0c88078b2402df60667655)`(const TMap< FString, float > & NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1af781b679fc0c88078b2402df60667655"></a>

Sets the value of TicketAddedUnixTime_Optional and also sets TicketAddedUnixTime_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1aa444fb8a1cf2c396c2cb80b2272aece8)`(TMap< FString, float > && NewValue)` <a id="structFRHAPI__MatchMakingSessionRequest_1aa444fb8a1cf2c396c2cb80b2272aece8"></a>

Sets the value of TicketAddedUnixTime_Optional and also sets TicketAddedUnixTime_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketAddedUnixTime`](#structFRHAPI__MatchMakingSessionRequest_1a152d74c039fc4b34035d8a96a463e503)`()` <a id="structFRHAPI__MatchMakingSessionRequest_1a152d74c039fc4b34035d8a96a463e503"></a>

Clears the value of TicketAddedUnixTime_Optional and sets TicketAddedUnixTime_IsSet to false.

