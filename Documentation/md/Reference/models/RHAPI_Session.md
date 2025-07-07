---
title: RHAPI_Session
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Session`](#structFRHAPI__Session) | A session resource.

## struct `FRHAPI_Session` <a id="structFRHAPI__Session"></a>

```
struct FRHAPI_Session
  : public FRHAPI_Model
```

A session resource.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type`](#structFRHAPI__Session_1aa99c74b9cc52640a6c132b3517d7fcf1) | template type
`public FString `[`SessionId`](#structFRHAPI__Session_1adb1ba4643cbd9dabfde8d3e359500909) | unique ID for this session within its type
`public `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` `[`Instance_Optional`](#structFRHAPI__Session_1a9d5d31fd3e79b62891ba654cfa1bf6e2) | Info about the current active instance for the session.
`public bool `[`Instance_IsSet`](#structFRHAPI__Session_1a9e166a0d902369089a9362287090e1f8) | true if Instance_Optional has been set to a value
`public `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` `[`Match_Optional`](#structFRHAPI__Session_1a865f37ad58a4c3eae21fc72d843b6a3a) | DEPRECATED Info about the current match in the instance.
`public bool `[`Match_IsSet`](#structFRHAPI__Session_1a97d359ac0758f38f0df5ee49c54c8108) | true if Match_Optional has been set to a value
`public `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` `[`MatchmakingResults_Optional`](#structFRHAPI__Session_1a1390c4c7970d2bf3f8b7b7561ed97c73) | Info about the matchmaking results that resulted in this session.
`public bool `[`MatchmakingResults_IsSet`](#structFRHAPI__Session_1ac4e0d1dd28de1afe3ee7efd0254f7093) | true if MatchmakingResults_Optional has been set to a value
`public `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` `[`Matchmaking_Optional`](#structFRHAPI__Session_1af3225af871f86c2aae3381a62dfdd5db) | Info about the matchmaking state of the session, if it is in the process of matchmaking.
`public bool `[`Matchmaking_IsSet`](#structFRHAPI__Session_1a61ea704dec07fefa55e7f47d4c47c744) | true if Matchmaking_Optional has been set to a value
`public `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` `[`Backfill_Optional`](#structFRHAPI__Session_1a241a85d41265c1bfdc254c4ba230f518) | Info about the open-match backfill object for the session.
`public bool `[`Backfill_IsSet`](#structFRHAPI__Session_1a7d8bfe390d73575b4e826316bf6e6594) | true if Backfill_Optional has been set to a value
`public `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` `[`Browser_Optional`](#structFRHAPI__Session_1a7595f83d2fded5187f30268f207bfc54) | Info about the browser state of the session.
`public bool `[`Browser_IsSet`](#structFRHAPI__Session_1aa1ace01879821c9c9b2b978cf2d3bcb4) | true if Browser_Optional has been set to a value
`public bool `[`Joinable`](#structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907) | DEPRECATED. Use Joinability object instead. Is this session freely joinable by players without an invite?
`public `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` `[`Joinability_Optional`](#structFRHAPI__Session_1a1ec8d2dcede7023322ae35acae15d5ee) | Flags regarding the joinability of this session.
`public bool `[`Joinability_IsSet`](#structFRHAPI__Session_1a3460072e3c449b202600835032b17250) | true if Joinability_Optional has been set to a value
`public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e) | List of teams of players currently in the session.
`public bool `[`TeamsSuppressed_Optional`](#structFRHAPI__Session_1a1004833c638e8fa8792fd43d346080f1) | Flag showing if the list of players has been automatically suppressed due to its size.
`public bool `[`TeamsSuppressed_IsSet`](#structFRHAPI__Session_1a10f57fbd85b3cab5ad92ea7534e44432) | true if TeamsSuppressed_Optional has been set to a value
`public TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > `[`PlatformSession_Optional`](#structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3) | Child Platform Sessions for this session. A player joining one of the child platform sessions implicitly joins the parent session.
`public bool `[`PlatformSession_IsSet`](#structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494) | true if PlatformSession_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > `[`PlatformScouts_Optional`](#structFRHAPI__Session_1a9d8175903e2e5ca8012195343e26e6ea) | List of platform scouts for this session.
`public bool `[`PlatformScouts_IsSet`](#structFRHAPI__Session_1a9cce8395f42aa5aa258a1834f526aa57) | true if PlatformScouts_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b) | Leader Player or instance defined custom data about this session.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8) | true if CustomData_Optional has been set to a value
`public FDateTime `[`Created`](#structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FString `[`RegionId_Optional`](#structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734) | Preferred region for the instance and match to take place in.
`public bool `[`RegionId_IsSet`](#structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92) | true if RegionId_Optional has been set to a value
`public bool `[`CreatedByMatchmaking_Optional`](#structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24) | Flag of whether or not this session was created by matchmaking or not.
`public bool `[`CreatedByMatchmaking_IsSet`](#structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413) | true if CreatedByMatchmaking_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Session_1ac70165ee2f4adca87cb4357e3ac50aee)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Session_1a928bf5b0c2e9be5c80ddabec370faa40)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__Session_1aca4e09825a912e57c67edac1127e8f0d)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__Session_1aec3da785cc373fc5acca22523f77ae1c)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__Session_1a8594be5dba86883fcaeb2df6840c2ce2)`(const FString & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__Session_1aa02c4ba420deece3b1e34c1cd17facaa)`(FString && NewValue)` | Sets the value of Type using move semantics.
`public inline FString & `[`GetSessionId`](#structFRHAPI__Session_1a79ed42835efe0d1e522a5a1d258e4cc5)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__Session_1a47d261aac6f765bd13cd5ae55aa4363c)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__Session_1a77354cc9665783b38f8956b46668ff2d)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__Session_1a11a58607bdff7e9ff6df77f2f18006ec)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a9d0b5bfd60c977bfaca20da606618173)`()` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a559cace3cd47c87cdcbbd9e825036ca3)`() const` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a2489fbb285fba3bd86840baf7434b10b)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & DefaultValue) const` | Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstance`](#structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & OutValue) const` | Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1a52503f26ada80ac914a4b0916c393784)`()` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1a688b2de4e98862b3ff864d5029cdc2cc)`() const` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstance`](#structFRHAPI__Session_1ae1ad277ee75d07e5273abd1946c8d7e1)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & NewValue)` | Sets the value of Instance_Optional and also sets Instance_IsSet to true.
`public inline void `[`SetInstance`](#structFRHAPI__Session_1af62dafc260bac36910ae1e615820b988)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` && NewValue)` | Sets the value of Instance_Optional and also sets Instance_IsSet to true using move semantics.
`public inline void `[`ClearInstance`](#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)`()` | Clears the value of Instance_Optional and sets Instance_IsSet to false.
`public inline bool `[`IsInstanceSet`](#structFRHAPI__Session_1a83813daef7812a64feced80e21a28c74)`() const` | Checks whether Instance_Optional has been set.
`public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1aa367b8be02ddcc6e84909b011bdb05b3)`()` | Gets the value of Match_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a52841feadcdeef87f50c64543b8ab2f0)`() const` | Gets the value of Match_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1ac9a0f9a055efff439ace84a186d51e8d)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & DefaultValue) const` | Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatch`](#structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & OutValue) const` | Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a8bc2d88c5fe37ecaff986caa4b3b818e)`()` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a4a9c2251d06c392143ca8a3dc2b2dc3c)`() const` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatch`](#structFRHAPI__Session_1aca3aabffbf8df14d3fa97fb2d28095e3)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & NewValue)` | Sets the value of Match_Optional and also sets Match_IsSet to true.
`public inline void `[`SetMatch`](#structFRHAPI__Session_1a6a89bb7c2e0d66eb60b2e1d3d4678506)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` && NewValue)` | Sets the value of Match_Optional and also sets Match_IsSet to true using move semantics.
`public inline void `[`ClearMatch`](#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)`()` | Clears the value of Match_Optional and sets Match_IsSet to false.
`public inline bool `[`IsMatchSet`](#structFRHAPI__Session_1a2065233f6b8cfb33dbb0eed51bbb8353)`() const` | Checks whether Match_Optional has been set.
`public inline `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a64dcb1c18cdf5d677f7d273f22c0d784)`()` | Gets the value of MatchmakingResults_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a222641ef81913b5bee72e2bb385dcd24)`() const` | Gets the value of MatchmakingResults_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a870d5b3a276498f8a23470dcfcb6c50d)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & DefaultValue) const` | Gets the value of MatchmakingResults_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmakingResults`](#structFRHAPI__Session_1a9272df1e1567e67a0e3e09ac09a470de)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & OutValue) const` | Fills OutValue with the value of MatchmakingResults_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a2dc34daed9be3e8b1cb971a6d34f5622)`()` | Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a64db209f168b842d941b9f79d204faba)`() const` | Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmakingResults`](#structFRHAPI__Session_1a635b6bf91bf418bf766f49dba6d9acb9)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & NewValue)` | Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true.
`public inline void `[`SetMatchmakingResults`](#structFRHAPI__Session_1aa7f0fda2b127b9e63f055ca98d16a864)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` && NewValue)` | Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true using move semantics.
`public inline void `[`ClearMatchmakingResults`](#structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f)`()` | Clears the value of MatchmakingResults_Optional and sets MatchmakingResults_IsSet to false.
`public inline bool `[`IsMatchmakingResultsSet`](#structFRHAPI__Session_1a43f22efd9ad0f338a498062ab709e4bd)`() const` | Checks whether MatchmakingResults_Optional has been set.
`public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1adc1120765fd03c6c12282cf07d361c81)`()` | Gets the value of Matchmaking_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a794cb6800e43213700c68937107e0673)`() const` | Gets the value of Matchmaking_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a3a9f96f6d0425a922788638cb0f4e22b)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & DefaultValue) const` | Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmaking`](#structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & OutValue) const` | Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1ab921bfde0dc9592ebdfd922bb94bfac1)`()` | Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1aee63b8612863e277cddf55c351f7b40d)`() const` | Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a74a7bfcb11e52d3ba211ddc53b5e435c)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & NewValue)` | Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.
`public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a03b7a8df7dde6a21220d9349a8d3941e)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` && NewValue)` | Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true using move semantics.
`public inline void `[`ClearMatchmaking`](#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)`()` | Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.
`public inline bool `[`IsMatchmakingSet`](#structFRHAPI__Session_1a58cfdd5fdc5e8a40c58dc3629b9e90c9)`() const` | Checks whether Matchmaking_Optional has been set.
`public inline `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a9b7bad1121e6405da9bc750c638dafd8)`()` | Gets the value of Backfill_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a5e7e2eb6009214b9eb56fab6eb768451)`() const` | Gets the value of Backfill_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1ad9ef1f6e5eaa9c1c7537893d8d148ba4)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & DefaultValue) const` | Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBackfill`](#structFRHAPI__Session_1ab84409512d3ec81b4d5da14b3795978a)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & OutValue) const` | Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1a515ce4d3d1e0dd8351bd2e4f68499c1f)`()` | Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1abf220c978876e7e8a81440bc66ed5f7d)`() const` | Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBackfill`](#structFRHAPI__Session_1a038f9574b0275fb794e7e80383f9356d)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & NewValue)` | Sets the value of Backfill_Optional and also sets Backfill_IsSet to true.
`public inline void `[`SetBackfill`](#structFRHAPI__Session_1af758ed8aebd406126611aa74a9c31dd0)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` && NewValue)` | Sets the value of Backfill_Optional and also sets Backfill_IsSet to true using move semantics.
`public inline void `[`ClearBackfill`](#structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90)`()` | Clears the value of Backfill_Optional and sets Backfill_IsSet to false.
`public inline bool `[`IsBackfillSet`](#structFRHAPI__Session_1a6b745ad182f5525eb24a026b9d3e9a08)`() const` | Checks whether Backfill_Optional has been set.
`public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a6998b96ffacf93d6d0a2b0dde22062de)`()` | Gets the value of Browser_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1acf6cb910ca0c63690d966d1c513032e5)`() const` | Gets the value of Browser_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a633737129885df91beafbb1afaa9b582)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & DefaultValue) const` | Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBrowser`](#structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & OutValue) const` | Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a82ff38eb38e03c457e8d74c955042502)`()` | Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a85be4a60c0bb18f9c9622083dafca64f)`() const` | Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBrowser`](#structFRHAPI__Session_1a925e75ecf9752a1ab2cce20935f381fe)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & NewValue)` | Sets the value of Browser_Optional and also sets Browser_IsSet to true.
`public inline void `[`SetBrowser`](#structFRHAPI__Session_1a66af0bf2222a7f7e79a1896df910b98d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` && NewValue)` | Sets the value of Browser_Optional and also sets Browser_IsSet to true using move semantics.
`public inline void `[`ClearBrowser`](#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)`()` | Clears the value of Browser_Optional and sets Browser_IsSet to false.
`public inline bool `[`IsBrowserSet`](#structFRHAPI__Session_1a5379fc90707903bb775880ddc146cdec)`() const` | Checks whether Browser_Optional has been set.
`public inline bool & `[`GetJoinable`](#structFRHAPI__Session_1a0dc652ecac9d86da76cc111fdb4718e5)`()` | Gets the value of Joinable.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__Session_1a931103289867cce6fe014de0297d7876)`() const` | Gets the value of Joinable.
`public inline void `[`SetJoinable`](#structFRHAPI__Session_1af324f39218e4174f4197700e6b116798)`(const bool & NewValue)` | Sets the value of Joinable.
`public inline void `[`SetJoinable`](#structFRHAPI__Session_1a35182afcd9b38c0e95b7cc1006ccbfe3)`(bool && NewValue)` | Sets the value of Joinable using move semantics.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913)`() const` | Returns true if Joinable matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711)`()` | Sets the value of Joinable to its default
`public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a33b7de38d1c83a31fde04aa99a5dfa79)`()` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a1e84333728e9c3328bee5cf5cd1722ec)`() const` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a2adfa5b1c190fd5fb1f430cb9d37a794)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` | Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinability`](#structFRHAPI__Session_1a6107d4d7ca39a1f00cfba84d7f43812d)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` | Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__Session_1a15ac972647b9e57d2b5ef2f8b30d03dd)`()` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__Session_1ae8aa9f9dcdeaa9f36ec0fc31cf089b88)`() const` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinability`](#structFRHAPI__Session_1aa8d404ed7d8007e03edcad6f9571fa14)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.
`public inline void `[`SetJoinability`](#structFRHAPI__Session_1acacfc032135c0735a5c1307e15e3a2c3)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.
`public inline void `[`ClearJoinability`](#structFRHAPI__Session_1aff87c76d2f5047604451dbd22a68aa6b)`()` | Clears the value of Joinability_Optional and sets Joinability_IsSet to false.
`public inline bool `[`IsJoinabilitySet`](#structFRHAPI__Session_1a5b312ab0d16c49f62c32dcbdfcaa4496)`() const` | Checks whether Joinability_Optional has been set.
`public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1af96e217465111de6975e9e2d81f0fc59)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1aa523ab545157774bd7dfad8800f62b39)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__Session_1a8cd13fe6b5b0a94a42b93d5183adc3c2)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` | Sets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__Session_1a303098da74e4dc89754560502417f1be)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` | Sets the value of Teams using move semantics.
`public inline bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1afb0c945c13b8db422bc290f2e859cb54)`()` | Gets the value of TeamsSuppressed_Optional, regardless of it having been set.
`public inline const bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1a36ae5716d52ea41efb1adc2002fb0c46)`() const` | Gets the value of TeamsSuppressed_Optional, regardless of it having been set.
`public inline const bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1adbd9c1b38d13cae5482ff2acd02b05e3)`(const bool & DefaultValue) const` | Gets the value of TeamsSuppressed_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamsSuppressed`](#structFRHAPI__Session_1afb1de161ba0e8bc15cffe20220a668be)`(bool & OutValue) const` | Fills OutValue with the value of TeamsSuppressed_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetTeamsSuppressedOrNull`](#structFRHAPI__Session_1a1887f5870c4333a1ba205477ca631e45)`()` | Returns a pointer to TeamsSuppressed_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetTeamsSuppressedOrNull`](#structFRHAPI__Session_1a4eba892eb8f744de42e764e673c48ddc)`() const` | Returns a pointer to TeamsSuppressed_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamsSuppressed`](#structFRHAPI__Session_1adfaa9a4f13cdc9a113707062d1b135b8)`(const bool & NewValue)` | Sets the value of TeamsSuppressed_Optional and also sets TeamsSuppressed_IsSet to true.
`public inline void `[`SetTeamsSuppressed`](#structFRHAPI__Session_1a53a532f62dfc1dbe5c20391e204ecd3b)`(bool && NewValue)` | Sets the value of TeamsSuppressed_Optional and also sets TeamsSuppressed_IsSet to true using move semantics.
`public inline void `[`ClearTeamsSuppressed`](#structFRHAPI__Session_1a827c5cd69a508fee8febcfeafbebd9ca)`()` | Clears the value of TeamsSuppressed_Optional and sets TeamsSuppressed_IsSet to false.
`public inline bool `[`IsTeamsSuppressedSet`](#structFRHAPI__Session_1a2ce548e3e240d475194657d98fdf084b)`() const` | Checks whether TeamsSuppressed_Optional has been set.
`public inline bool `[`IsTeamsSuppressedDefaultValue`](#structFRHAPI__Session_1a7fb0b3372c077fcdc2cf6537ecc1a659)`() const` | Returns true if TeamsSuppressed_Optional is set and matches the default value.
`public inline void `[`SetTeamsSuppressedToDefault`](#structFRHAPI__Session_1a3783f7b246cf92d7718fe9d9c36d078d)`()` | Sets the value of TeamsSuppressed_Optional to its default and also sets TeamsSuppressed_IsSet to true.
`public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a27702fd2edc7ded533aba4c4f62bb653)`()` | Gets the value of PlatformSession_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a65ed329419de33622c0a05e57d125503)`() const` | Gets the value of PlatformSession_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a797d0eefe2338dae1c9da6c887081985)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & DefaultValue) const` | Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSession`](#structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & OutValue) const` | Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1ae9621fc8539e9fcc32fb48c3277147cc)`()` | Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a05ca9c170384d84b9bcca3ecc92c7cd1)`() const` | Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1a5c1fdcdc359d718c6a68c2ba7ea95ce6)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & NewValue)` | Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.
`public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1aaae614b29615924c25581b5d274955ce)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > && NewValue)` | Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true using move semantics.
`public inline void `[`ClearPlatformSession`](#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)`()` | Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.
`public inline bool `[`IsPlatformSessionSet`](#structFRHAPI__Session_1a80aa992baaca370a4a8fd9737a71de9b)`() const` | Checks whether PlatformSession_Optional has been set.
`public inline TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1a42400e6c3eba99d75d324255dd70053f)`()` | Gets the value of PlatformScouts_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1a61134ab976408d2e0294acff555c18ec)`() const` | Gets the value of PlatformScouts_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1adb51508e98a2b7eb59853fcb005a8e3e)`(const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & DefaultValue) const` | Gets the value of PlatformScouts_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformScouts`](#structFRHAPI__Session_1a7cfdabf35d746377b4c7cbc931ca9bda)`(TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & OutValue) const` | Fills OutValue with the value of PlatformScouts_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > * `[`GetPlatformScoutsOrNull`](#structFRHAPI__Session_1a466ba5efa0c9573a3d0d2b34df13275c)`()` | Returns a pointer to PlatformScouts_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > * `[`GetPlatformScoutsOrNull`](#structFRHAPI__Session_1a0a06bcaf4623fb2fb76b78b6678a7083)`() const` | Returns a pointer to PlatformScouts_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformScouts`](#structFRHAPI__Session_1a8f7dbeb46a1f0a02899d50e2e2772c21)`(const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & NewValue)` | Sets the value of PlatformScouts_Optional and also sets PlatformScouts_IsSet to true.
`public inline void `[`SetPlatformScouts`](#structFRHAPI__Session_1a840c72a73a704a1ec347cdf181a36e82)`(TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > && NewValue)` | Sets the value of PlatformScouts_Optional and also sets PlatformScouts_IsSet to true using move semantics.
`public inline void `[`ClearPlatformScouts`](#structFRHAPI__Session_1a6b418e8b04c7f22a40894bcb2ab97ec3)`()` | Clears the value of PlatformScouts_Optional and sets PlatformScouts_IsSet to false.
`public inline bool `[`IsPlatformScoutsSet`](#structFRHAPI__Session_1aa874412d3cbb662b90170d71229fb8ef)`() const` | Checks whether PlatformScouts_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ac788e3b10efcb974589d3046407b71b6)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ab722dff2a3cffa1f6a0b3c2475190936)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ab612bb056eee4484b0f05aeffe330031)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a630ec7e44224edb3796078b082a0812e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1ab8d0c801ea676fec814b06e52b154a61)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Session_1aa1bccba93d52da6478261ed595399418)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__Session_1a623f471b9b40a51ac72bc22f1e66b61a)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__Session_1a99b2a3ce4de427ff7603cd95fa670711)`() const` | Checks whether CustomData_Optional has been set.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a7205d3e7f48806fccb99a080eb836913)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a39717504126f099876cf4fdb6eca0443)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__Session_1a27ed539a1326c9fef60ed1da09386631)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__Session_1a5c2e48f140d49f32e48def5ade3dd602)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FString & `[`GetRegionId`](#structFRHAPI__Session_1a7e0e805f65a237ce13c9faad266b9a6a)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1a907cec810ae7395b5d626eb7e0731610)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1af306cd9d827f62cbf46dc231e2a4abbd)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1afecdef2a0a8582f67e4ec656a710fdc7)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a3465ff4a74d1b1f6e19593126fe6e3b0)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__Session_1afa4f2b141393c1ac37cc8e78f67ff853)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__Session_1a6804d3ef584c6f5414a4eaf272daac29)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__Session_1a5a494ca05e696bf704916661f7e1be73)`() const` | Checks whether RegionId_Optional has been set.
`public inline bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a4050aa75c1bf99f779cf89eb70282fa0)`()` | Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1ae40df48da4c4b015d32958810f60b5ec)`() const` | Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a93eceb1282334a9e3e80bb95df64a06e)`(const bool & DefaultValue) const` | Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2)`(bool & OutValue) const` | Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1ada67c96d37e45015fe6ae444614735c2)`()` | Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a82030aa9c61eec1ddc26061615a20b6b)`() const` | Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1afeeb779d270733f621747ac6385b9867)`(const bool & NewValue)` | Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true.
`public inline void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1aba476db0ef962abfab4d7b84fb8d81f7)`(bool && NewValue)` | Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true using move semantics.
`public inline void `[`ClearCreatedByMatchmaking`](#structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224)`()` | Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false.
`public inline bool `[`IsCreatedByMatchmakingSet`](#structFRHAPI__Session_1a02edb04a141e8b229b2880b812506a40)`() const` | Checks whether CreatedByMatchmaking_Optional has been set.
`public inline bool `[`IsCreatedByMatchmakingDefaultValue`](#structFRHAPI__Session_1a4497fa87bd0e35ecdf5b09b0714d36ad)`() const` | Returns true if CreatedByMatchmaking_Optional is set and matches the default value.
`public inline void `[`SetCreatedByMatchmakingToDefault`](#structFRHAPI__Session_1ac89a96065989ec35f4c1e11ca9bc81c6)`()` | Sets the value of CreatedByMatchmaking_Optional to its default and also sets CreatedByMatchmaking_IsSet to true.

### Members

#### `public FString `[`Type`](#structFRHAPI__Session_1aa99c74b9cc52640a6c132b3517d7fcf1) <a id="structFRHAPI__Session_1aa99c74b9cc52640a6c132b3517d7fcf1"></a>

template type

#### `public FString `[`SessionId`](#structFRHAPI__Session_1adb1ba4643cbd9dabfde8d3e359500909) <a id="structFRHAPI__Session_1adb1ba4643cbd9dabfde8d3e359500909"></a>

unique ID for this session within its type

#### `public `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` `[`Instance_Optional`](#structFRHAPI__Session_1a9d5d31fd3e79b62891ba654cfa1bf6e2) <a id="structFRHAPI__Session_1a9d5d31fd3e79b62891ba654cfa1bf6e2"></a>

Info about the current active instance for the session.

#### `public bool `[`Instance_IsSet`](#structFRHAPI__Session_1a9e166a0d902369089a9362287090e1f8) <a id="structFRHAPI__Session_1a9e166a0d902369089a9362287090e1f8"></a>

true if Instance_Optional has been set to a value

#### `public `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` `[`Match_Optional`](#structFRHAPI__Session_1a865f37ad58a4c3eae21fc72d843b6a3a) <a id="structFRHAPI__Session_1a865f37ad58a4c3eae21fc72d843b6a3a"></a>

DEPRECATED Info about the current match in the instance.

#### `public bool `[`Match_IsSet`](#structFRHAPI__Session_1a97d359ac0758f38f0df5ee49c54c8108) <a id="structFRHAPI__Session_1a97d359ac0758f38f0df5ee49c54c8108"></a>

true if Match_Optional has been set to a value

#### `public `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` `[`MatchmakingResults_Optional`](#structFRHAPI__Session_1a1390c4c7970d2bf3f8b7b7561ed97c73) <a id="structFRHAPI__Session_1a1390c4c7970d2bf3f8b7b7561ed97c73"></a>

Info about the matchmaking results that resulted in this session.

#### `public bool `[`MatchmakingResults_IsSet`](#structFRHAPI__Session_1ac4e0d1dd28de1afe3ee7efd0254f7093) <a id="structFRHAPI__Session_1ac4e0d1dd28de1afe3ee7efd0254f7093"></a>

true if MatchmakingResults_Optional has been set to a value

#### `public `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` `[`Matchmaking_Optional`](#structFRHAPI__Session_1af3225af871f86c2aae3381a62dfdd5db) <a id="structFRHAPI__Session_1af3225af871f86c2aae3381a62dfdd5db"></a>

Info about the matchmaking state of the session, if it is in the process of matchmaking.

#### `public bool `[`Matchmaking_IsSet`](#structFRHAPI__Session_1a61ea704dec07fefa55e7f47d4c47c744) <a id="structFRHAPI__Session_1a61ea704dec07fefa55e7f47d4c47c744"></a>

true if Matchmaking_Optional has been set to a value

#### `public `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` `[`Backfill_Optional`](#structFRHAPI__Session_1a241a85d41265c1bfdc254c4ba230f518) <a id="structFRHAPI__Session_1a241a85d41265c1bfdc254c4ba230f518"></a>

Info about the open-match backfill object for the session.

#### `public bool `[`Backfill_IsSet`](#structFRHAPI__Session_1a7d8bfe390d73575b4e826316bf6e6594) <a id="structFRHAPI__Session_1a7d8bfe390d73575b4e826316bf6e6594"></a>

true if Backfill_Optional has been set to a value

#### `public `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` `[`Browser_Optional`](#structFRHAPI__Session_1a7595f83d2fded5187f30268f207bfc54) <a id="structFRHAPI__Session_1a7595f83d2fded5187f30268f207bfc54"></a>

Info about the browser state of the session.

#### `public bool `[`Browser_IsSet`](#structFRHAPI__Session_1aa1ace01879821c9c9b2b978cf2d3bcb4) <a id="structFRHAPI__Session_1aa1ace01879821c9c9b2b978cf2d3bcb4"></a>

true if Browser_Optional has been set to a value

#### `public bool `[`Joinable`](#structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907) <a id="structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907"></a>

DEPRECATED. Use Joinability object instead. Is this session freely joinable by players without an invite?

#### `public `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` `[`Joinability_Optional`](#structFRHAPI__Session_1a1ec8d2dcede7023322ae35acae15d5ee) <a id="structFRHAPI__Session_1a1ec8d2dcede7023322ae35acae15d5ee"></a>

Flags regarding the joinability of this session.

#### `public bool `[`Joinability_IsSet`](#structFRHAPI__Session_1a3460072e3c449b202600835032b17250) <a id="structFRHAPI__Session_1a3460072e3c449b202600835032b17250"></a>

true if Joinability_Optional has been set to a value

#### `public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e) <a id="structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e"></a>

List of teams of players currently in the session.

#### `public bool `[`TeamsSuppressed_Optional`](#structFRHAPI__Session_1a1004833c638e8fa8792fd43d346080f1) <a id="structFRHAPI__Session_1a1004833c638e8fa8792fd43d346080f1"></a>

Flag showing if the list of players has been automatically suppressed due to its size.

#### `public bool `[`TeamsSuppressed_IsSet`](#structFRHAPI__Session_1a10f57fbd85b3cab5ad92ea7534e44432) <a id="structFRHAPI__Session_1a10f57fbd85b3cab5ad92ea7534e44432"></a>

true if TeamsSuppressed_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > `[`PlatformSession_Optional`](#structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3) <a id="structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3"></a>

Child Platform Sessions for this session. A player joining one of the child platform sessions implicitly joins the parent session.

#### `public bool `[`PlatformSession_IsSet`](#structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494) <a id="structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494"></a>

true if PlatformSession_Optional has been set to a value

#### `public TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > `[`PlatformScouts_Optional`](#structFRHAPI__Session_1a9d8175903e2e5ca8012195343e26e6ea) <a id="structFRHAPI__Session_1a9d8175903e2e5ca8012195343e26e6ea"></a>

List of platform scouts for this session.

#### `public bool `[`PlatformScouts_IsSet`](#structFRHAPI__Session_1a9cce8395f42aa5aa258a1834f526aa57) <a id="structFRHAPI__Session_1a9cce8395f42aa5aa258a1834f526aa57"></a>

true if PlatformScouts_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b) <a id="structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b"></a>

Leader Player or instance defined custom data about this session.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8) <a id="structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8"></a>

true if CustomData_Optional has been set to a value

#### `public FDateTime `[`Created`](#structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b) <a id="structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FString `[`RegionId_Optional`](#structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734) <a id="structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734"></a>

Preferred region for the instance and match to take place in.

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92) <a id="structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92"></a>

true if RegionId_Optional has been set to a value

#### `public bool `[`CreatedByMatchmaking_Optional`](#structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24) <a id="structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24"></a>

Flag of whether or not this session was created by matchmaking or not.

#### `public bool `[`CreatedByMatchmaking_IsSet`](#structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413) <a id="structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413"></a>

true if CreatedByMatchmaking_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Session_1ac70165ee2f4adca87cb4357e3ac50aee)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Session_1ac70165ee2f4adca87cb4357e3ac50aee"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Session_1a928bf5b0c2e9be5c80ddabec370faa40)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Session_1a928bf5b0c2e9be5c80ddabec370faa40"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetType`](#structFRHAPI__Session_1aca4e09825a912e57c67edac1127e8f0d)`()` <a id="structFRHAPI__Session_1aca4e09825a912e57c67edac1127e8f0d"></a>

Gets the value of Type.

#### `public inline const FString & `[`GetType`](#structFRHAPI__Session_1aec3da785cc373fc5acca22523f77ae1c)`() const` <a id="structFRHAPI__Session_1aec3da785cc373fc5acca22523f77ae1c"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__Session_1a8594be5dba86883fcaeb2df6840c2ce2)`(const FString & NewValue)` <a id="structFRHAPI__Session_1a8594be5dba86883fcaeb2df6840c2ce2"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__Session_1aa02c4ba420deece3b1e34c1cd17facaa)`(FString && NewValue)` <a id="structFRHAPI__Session_1aa02c4ba420deece3b1e34c1cd17facaa"></a>

Sets the value of Type using move semantics.

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__Session_1a79ed42835efe0d1e522a5a1d258e4cc5)`()` <a id="structFRHAPI__Session_1a79ed42835efe0d1e522a5a1d258e4cc5"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__Session_1a47d261aac6f765bd13cd5ae55aa4363c)`() const` <a id="structFRHAPI__Session_1a47d261aac6f765bd13cd5ae55aa4363c"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__Session_1a77354cc9665783b38f8956b46668ff2d)`(const FString & NewValue)` <a id="structFRHAPI__Session_1a77354cc9665783b38f8956b46668ff2d"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__Session_1a11a58607bdff7e9ff6df77f2f18006ec)`(FString && NewValue)` <a id="structFRHAPI__Session_1a11a58607bdff7e9ff6df77f2f18006ec"></a>

Sets the value of SessionId using move semantics.

#### `public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a9d0b5bfd60c977bfaca20da606618173)`()` <a id="structFRHAPI__Session_1a9d0b5bfd60c977bfaca20da606618173"></a>

Gets the value of Instance_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a559cace3cd47c87cdcbbd9e825036ca3)`() const` <a id="structFRHAPI__Session_1a559cace3cd47c87cdcbbd9e825036ca3"></a>

Gets the value of Instance_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a2489fbb285fba3bd86840baf7434b10b)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a2489fbb285fba3bd86840baf7434b10b"></a>

Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstance`](#structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & OutValue) const` <a id="structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c"></a>

Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1a52503f26ada80ac914a4b0916c393784)`()` <a id="structFRHAPI__Session_1a52503f26ada80ac914a4b0916c393784"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1a688b2de4e98862b3ff864d5029cdc2cc)`() const` <a id="structFRHAPI__Session_1a688b2de4e98862b3ff864d5029cdc2cc"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstance`](#structFRHAPI__Session_1ae1ad277ee75d07e5273abd1946c8d7e1)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & NewValue)` <a id="structFRHAPI__Session_1ae1ad277ee75d07e5273abd1946c8d7e1"></a>

Sets the value of Instance_Optional and also sets Instance_IsSet to true.

#### `public inline void `[`SetInstance`](#structFRHAPI__Session_1af62dafc260bac36910ae1e615820b988)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` && NewValue)` <a id="structFRHAPI__Session_1af62dafc260bac36910ae1e615820b988"></a>

Sets the value of Instance_Optional and also sets Instance_IsSet to true using move semantics.

#### `public inline void `[`ClearInstance`](#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)`()` <a id="structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f"></a>

Clears the value of Instance_Optional and sets Instance_IsSet to false.

#### `public inline bool `[`IsInstanceSet`](#structFRHAPI__Session_1a83813daef7812a64feced80e21a28c74)`() const` <a id="structFRHAPI__Session_1a83813daef7812a64feced80e21a28c74"></a>

Checks whether Instance_Optional has been set.

#### `public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1aa367b8be02ddcc6e84909b011bdb05b3)`()` <a id="structFRHAPI__Session_1aa367b8be02ddcc6e84909b011bdb05b3"></a>

Gets the value of Match_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a52841feadcdeef87f50c64543b8ab2f0)`() const` <a id="structFRHAPI__Session_1a52841feadcdeef87f50c64543b8ab2f0"></a>

Gets the value of Match_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1ac9a0f9a055efff439ace84a186d51e8d)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1ac9a0f9a055efff439ace84a186d51e8d"></a>

Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatch`](#structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & OutValue) const` <a id="structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d"></a>

Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a8bc2d88c5fe37ecaff986caa4b3b818e)`()` <a id="structFRHAPI__Session_1a8bc2d88c5fe37ecaff986caa4b3b818e"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a4a9c2251d06c392143ca8a3dc2b2dc3c)`() const` <a id="structFRHAPI__Session_1a4a9c2251d06c392143ca8a3dc2b2dc3c"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatch`](#structFRHAPI__Session_1aca3aabffbf8df14d3fa97fb2d28095e3)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & NewValue)` <a id="structFRHAPI__Session_1aca3aabffbf8df14d3fa97fb2d28095e3"></a>

Sets the value of Match_Optional and also sets Match_IsSet to true.

#### `public inline void `[`SetMatch`](#structFRHAPI__Session_1a6a89bb7c2e0d66eb60b2e1d3d4678506)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` && NewValue)` <a id="structFRHAPI__Session_1a6a89bb7c2e0d66eb60b2e1d3d4678506"></a>

Sets the value of Match_Optional and also sets Match_IsSet to true using move semantics.

#### `public inline void `[`ClearMatch`](#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)`()` <a id="structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace"></a>

Clears the value of Match_Optional and sets Match_IsSet to false.

#### `public inline bool `[`IsMatchSet`](#structFRHAPI__Session_1a2065233f6b8cfb33dbb0eed51bbb8353)`() const` <a id="structFRHAPI__Session_1a2065233f6b8cfb33dbb0eed51bbb8353"></a>

Checks whether Match_Optional has been set.

#### `public inline `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a64dcb1c18cdf5d677f7d273f22c0d784)`()` <a id="structFRHAPI__Session_1a64dcb1c18cdf5d677f7d273f22c0d784"></a>

Gets the value of MatchmakingResults_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a222641ef81913b5bee72e2bb385dcd24)`() const` <a id="structFRHAPI__Session_1a222641ef81913b5bee72e2bb385dcd24"></a>

Gets the value of MatchmakingResults_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a870d5b3a276498f8a23470dcfcb6c50d)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & DefaultValue) const` <a id="structFRHAPI__Session_1a870d5b3a276498f8a23470dcfcb6c50d"></a>

Gets the value of MatchmakingResults_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchmakingResults`](#structFRHAPI__Session_1a9272df1e1567e67a0e3e09ac09a470de)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & OutValue) const` <a id="structFRHAPI__Session_1a9272df1e1567e67a0e3e09ac09a470de"></a>

Fills OutValue with the value of MatchmakingResults_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a2dc34daed9be3e8b1cb971a6d34f5622)`()` <a id="structFRHAPI__Session_1a2dc34daed9be3e8b1cb971a6d34f5622"></a>

Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a64db209f168b842d941b9f79d204faba)`() const` <a id="structFRHAPI__Session_1a64db209f168b842d941b9f79d204faba"></a>

Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchmakingResults`](#structFRHAPI__Session_1a635b6bf91bf418bf766f49dba6d9acb9)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & NewValue)` <a id="structFRHAPI__Session_1a635b6bf91bf418bf766f49dba6d9acb9"></a>

Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true.

#### `public inline void `[`SetMatchmakingResults`](#structFRHAPI__Session_1aa7f0fda2b127b9e63f055ca98d16a864)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` && NewValue)` <a id="structFRHAPI__Session_1aa7f0fda2b127b9e63f055ca98d16a864"></a>

Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmakingResults`](#structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f)`()` <a id="structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f"></a>

Clears the value of MatchmakingResults_Optional and sets MatchmakingResults_IsSet to false.

#### `public inline bool `[`IsMatchmakingResultsSet`](#structFRHAPI__Session_1a43f22efd9ad0f338a498062ab709e4bd)`() const` <a id="structFRHAPI__Session_1a43f22efd9ad0f338a498062ab709e4bd"></a>

Checks whether MatchmakingResults_Optional has been set.

#### `public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1adc1120765fd03c6c12282cf07d361c81)`()` <a id="structFRHAPI__Session_1adc1120765fd03c6c12282cf07d361c81"></a>

Gets the value of Matchmaking_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a794cb6800e43213700c68937107e0673)`() const` <a id="structFRHAPI__Session_1a794cb6800e43213700c68937107e0673"></a>

Gets the value of Matchmaking_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a3a9f96f6d0425a922788638cb0f4e22b)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a3a9f96f6d0425a922788638cb0f4e22b"></a>

Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchmaking`](#structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & OutValue) const` <a id="structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480"></a>

Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1ab921bfde0dc9592ebdfd922bb94bfac1)`()` <a id="structFRHAPI__Session_1ab921bfde0dc9592ebdfd922bb94bfac1"></a>

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1aee63b8612863e277cddf55c351f7b40d)`() const` <a id="structFRHAPI__Session_1aee63b8612863e277cddf55c351f7b40d"></a>

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a74a7bfcb11e52d3ba211ddc53b5e435c)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & NewValue)` <a id="structFRHAPI__Session_1a74a7bfcb11e52d3ba211ddc53b5e435c"></a>

Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.

#### `public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a03b7a8df7dde6a21220d9349a8d3941e)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` && NewValue)` <a id="structFRHAPI__Session_1a03b7a8df7dde6a21220d9349a8d3941e"></a>

Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmaking`](#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)`()` <a id="structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596"></a>

Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.

#### `public inline bool `[`IsMatchmakingSet`](#structFRHAPI__Session_1a58cfdd5fdc5e8a40c58dc3629b9e90c9)`() const` <a id="structFRHAPI__Session_1a58cfdd5fdc5e8a40c58dc3629b9e90c9"></a>

Checks whether Matchmaking_Optional has been set.

#### `public inline `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a9b7bad1121e6405da9bc750c638dafd8)`()` <a id="structFRHAPI__Session_1a9b7bad1121e6405da9bc750c638dafd8"></a>

Gets the value of Backfill_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a5e7e2eb6009214b9eb56fab6eb768451)`() const` <a id="structFRHAPI__Session_1a5e7e2eb6009214b9eb56fab6eb768451"></a>

Gets the value of Backfill_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1ad9ef1f6e5eaa9c1c7537893d8d148ba4)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1ad9ef1f6e5eaa9c1c7537893d8d148ba4"></a>

Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBackfill`](#structFRHAPI__Session_1ab84409512d3ec81b4d5da14b3795978a)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & OutValue) const` <a id="structFRHAPI__Session_1ab84409512d3ec81b4d5da14b3795978a"></a>

Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1a515ce4d3d1e0dd8351bd2e4f68499c1f)`()` <a id="structFRHAPI__Session_1a515ce4d3d1e0dd8351bd2e4f68499c1f"></a>

Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1abf220c978876e7e8a81440bc66ed5f7d)`() const` <a id="structFRHAPI__Session_1abf220c978876e7e8a81440bc66ed5f7d"></a>

Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBackfill`](#structFRHAPI__Session_1a038f9574b0275fb794e7e80383f9356d)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & NewValue)` <a id="structFRHAPI__Session_1a038f9574b0275fb794e7e80383f9356d"></a>

Sets the value of Backfill_Optional and also sets Backfill_IsSet to true.

#### `public inline void `[`SetBackfill`](#structFRHAPI__Session_1af758ed8aebd406126611aa74a9c31dd0)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` && NewValue)` <a id="structFRHAPI__Session_1af758ed8aebd406126611aa74a9c31dd0"></a>

Sets the value of Backfill_Optional and also sets Backfill_IsSet to true using move semantics.

#### `public inline void `[`ClearBackfill`](#structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90)`()` <a id="structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90"></a>

Clears the value of Backfill_Optional and sets Backfill_IsSet to false.

#### `public inline bool `[`IsBackfillSet`](#structFRHAPI__Session_1a6b745ad182f5525eb24a026b9d3e9a08)`() const` <a id="structFRHAPI__Session_1a6b745ad182f5525eb24a026b9d3e9a08"></a>

Checks whether Backfill_Optional has been set.

#### `public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a6998b96ffacf93d6d0a2b0dde22062de)`()` <a id="structFRHAPI__Session_1a6998b96ffacf93d6d0a2b0dde22062de"></a>

Gets the value of Browser_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1acf6cb910ca0c63690d966d1c513032e5)`() const` <a id="structFRHAPI__Session_1acf6cb910ca0c63690d966d1c513032e5"></a>

Gets the value of Browser_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a633737129885df91beafbb1afaa9b582)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a633737129885df91beafbb1afaa9b582"></a>

Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBrowser`](#structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & OutValue) const` <a id="structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d"></a>

Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a82ff38eb38e03c457e8d74c955042502)`()` <a id="structFRHAPI__Session_1a82ff38eb38e03c457e8d74c955042502"></a>

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a85be4a60c0bb18f9c9622083dafca64f)`() const` <a id="structFRHAPI__Session_1a85be4a60c0bb18f9c9622083dafca64f"></a>

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBrowser`](#structFRHAPI__Session_1a925e75ecf9752a1ab2cce20935f381fe)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & NewValue)` <a id="structFRHAPI__Session_1a925e75ecf9752a1ab2cce20935f381fe"></a>

Sets the value of Browser_Optional and also sets Browser_IsSet to true.

#### `public inline void `[`SetBrowser`](#structFRHAPI__Session_1a66af0bf2222a7f7e79a1896df910b98d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` && NewValue)` <a id="structFRHAPI__Session_1a66af0bf2222a7f7e79a1896df910b98d"></a>

Sets the value of Browser_Optional and also sets Browser_IsSet to true using move semantics.

#### `public inline void `[`ClearBrowser`](#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)`()` <a id="structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95"></a>

Clears the value of Browser_Optional and sets Browser_IsSet to false.

#### `public inline bool `[`IsBrowserSet`](#structFRHAPI__Session_1a5379fc90707903bb775880ddc146cdec)`() const` <a id="structFRHAPI__Session_1a5379fc90707903bb775880ddc146cdec"></a>

Checks whether Browser_Optional has been set.

#### `public inline bool & `[`GetJoinable`](#structFRHAPI__Session_1a0dc652ecac9d86da76cc111fdb4718e5)`()` <a id="structFRHAPI__Session_1a0dc652ecac9d86da76cc111fdb4718e5"></a>

Gets the value of Joinable.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__Session_1a931103289867cce6fe014de0297d7876)`() const` <a id="structFRHAPI__Session_1a931103289867cce6fe014de0297d7876"></a>

Gets the value of Joinable.

#### `public inline void `[`SetJoinable`](#structFRHAPI__Session_1af324f39218e4174f4197700e6b116798)`(const bool & NewValue)` <a id="structFRHAPI__Session_1af324f39218e4174f4197700e6b116798"></a>

Sets the value of Joinable.

#### `public inline void `[`SetJoinable`](#structFRHAPI__Session_1a35182afcd9b38c0e95b7cc1006ccbfe3)`(bool && NewValue)` <a id="structFRHAPI__Session_1a35182afcd9b38c0e95b7cc1006ccbfe3"></a>

Sets the value of Joinable using move semantics.

#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913)`() const` <a id="structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913"></a>

Returns true if Joinable matches the default value.

#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711)`()` <a id="structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711"></a>

Sets the value of Joinable to its default

#### `public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a33b7de38d1c83a31fde04aa99a5dfa79)`()` <a id="structFRHAPI__Session_1a33b7de38d1c83a31fde04aa99a5dfa79"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a1e84333728e9c3328bee5cf5cd1722ec)`() const` <a id="structFRHAPI__Session_1a1e84333728e9c3328bee5cf5cd1722ec"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a2adfa5b1c190fd5fb1f430cb9d37a794)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` <a id="structFRHAPI__Session_1a2adfa5b1c190fd5fb1f430cb9d37a794"></a>

Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinability`](#structFRHAPI__Session_1a6107d4d7ca39a1f00cfba84d7f43812d)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` <a id="structFRHAPI__Session_1a6107d4d7ca39a1f00cfba84d7f43812d"></a>

Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__Session_1a15ac972647b9e57d2b5ef2f8b30d03dd)`()` <a id="structFRHAPI__Session_1a15ac972647b9e57d2b5ef2f8b30d03dd"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__Session_1ae8aa9f9dcdeaa9f36ec0fc31cf089b88)`() const` <a id="structFRHAPI__Session_1ae8aa9f9dcdeaa9f36ec0fc31cf089b88"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinability`](#structFRHAPI__Session_1aa8d404ed7d8007e03edcad6f9571fa14)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` <a id="structFRHAPI__Session_1aa8d404ed7d8007e03edcad6f9571fa14"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.

#### `public inline void `[`SetJoinability`](#structFRHAPI__Session_1acacfc032135c0735a5c1307e15e3a2c3)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` <a id="structFRHAPI__Session_1acacfc032135c0735a5c1307e15e3a2c3"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinability`](#structFRHAPI__Session_1aff87c76d2f5047604451dbd22a68aa6b)`()` <a id="structFRHAPI__Session_1aff87c76d2f5047604451dbd22a68aa6b"></a>

Clears the value of Joinability_Optional and sets Joinability_IsSet to false.

#### `public inline bool `[`IsJoinabilitySet`](#structFRHAPI__Session_1a5b312ab0d16c49f62c32dcbdfcaa4496)`() const` <a id="structFRHAPI__Session_1a5b312ab0d16c49f62c32dcbdfcaa4496"></a>

Checks whether Joinability_Optional has been set.

#### `public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1af96e217465111de6975e9e2d81f0fc59)`()` <a id="structFRHAPI__Session_1af96e217465111de6975e9e2d81f0fc59"></a>

Gets the value of Teams.

#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1aa523ab545157774bd7dfad8800f62b39)`() const` <a id="structFRHAPI__Session_1aa523ab545157774bd7dfad8800f62b39"></a>

Gets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__Session_1a8cd13fe6b5b0a94a42b93d5183adc3c2)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` <a id="structFRHAPI__Session_1a8cd13fe6b5b0a94a42b93d5183adc3c2"></a>

Sets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__Session_1a303098da74e4dc89754560502417f1be)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` <a id="structFRHAPI__Session_1a303098da74e4dc89754560502417f1be"></a>

Sets the value of Teams using move semantics.

#### `public inline bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1afb0c945c13b8db422bc290f2e859cb54)`()` <a id="structFRHAPI__Session_1afb0c945c13b8db422bc290f2e859cb54"></a>

Gets the value of TeamsSuppressed_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1a36ae5716d52ea41efb1adc2002fb0c46)`() const` <a id="structFRHAPI__Session_1a36ae5716d52ea41efb1adc2002fb0c46"></a>

Gets the value of TeamsSuppressed_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1adbd9c1b38d13cae5482ff2acd02b05e3)`(const bool & DefaultValue) const` <a id="structFRHAPI__Session_1adbd9c1b38d13cae5482ff2acd02b05e3"></a>

Gets the value of TeamsSuppressed_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamsSuppressed`](#structFRHAPI__Session_1afb1de161ba0e8bc15cffe20220a668be)`(bool & OutValue) const` <a id="structFRHAPI__Session_1afb1de161ba0e8bc15cffe20220a668be"></a>

Fills OutValue with the value of TeamsSuppressed_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetTeamsSuppressedOrNull`](#structFRHAPI__Session_1a1887f5870c4333a1ba205477ca631e45)`()` <a id="structFRHAPI__Session_1a1887f5870c4333a1ba205477ca631e45"></a>

Returns a pointer to TeamsSuppressed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetTeamsSuppressedOrNull`](#structFRHAPI__Session_1a4eba892eb8f744de42e764e673c48ddc)`() const` <a id="structFRHAPI__Session_1a4eba892eb8f744de42e764e673c48ddc"></a>

Returns a pointer to TeamsSuppressed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamsSuppressed`](#structFRHAPI__Session_1adfaa9a4f13cdc9a113707062d1b135b8)`(const bool & NewValue)` <a id="structFRHAPI__Session_1adfaa9a4f13cdc9a113707062d1b135b8"></a>

Sets the value of TeamsSuppressed_Optional and also sets TeamsSuppressed_IsSet to true.

#### `public inline void `[`SetTeamsSuppressed`](#structFRHAPI__Session_1a53a532f62dfc1dbe5c20391e204ecd3b)`(bool && NewValue)` <a id="structFRHAPI__Session_1a53a532f62dfc1dbe5c20391e204ecd3b"></a>

Sets the value of TeamsSuppressed_Optional and also sets TeamsSuppressed_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamsSuppressed`](#structFRHAPI__Session_1a827c5cd69a508fee8febcfeafbebd9ca)`()` <a id="structFRHAPI__Session_1a827c5cd69a508fee8febcfeafbebd9ca"></a>

Clears the value of TeamsSuppressed_Optional and sets TeamsSuppressed_IsSet to false.

#### `public inline bool `[`IsTeamsSuppressedSet`](#structFRHAPI__Session_1a2ce548e3e240d475194657d98fdf084b)`() const` <a id="structFRHAPI__Session_1a2ce548e3e240d475194657d98fdf084b"></a>

Checks whether TeamsSuppressed_Optional has been set.

#### `public inline bool `[`IsTeamsSuppressedDefaultValue`](#structFRHAPI__Session_1a7fb0b3372c077fcdc2cf6537ecc1a659)`() const` <a id="structFRHAPI__Session_1a7fb0b3372c077fcdc2cf6537ecc1a659"></a>

Returns true if TeamsSuppressed_Optional is set and matches the default value.

#### `public inline void `[`SetTeamsSuppressedToDefault`](#structFRHAPI__Session_1a3783f7b246cf92d7718fe9d9c36d078d)`()` <a id="structFRHAPI__Session_1a3783f7b246cf92d7718fe9d9c36d078d"></a>

Sets the value of TeamsSuppressed_Optional to its default and also sets TeamsSuppressed_IsSet to true.

#### `public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a27702fd2edc7ded533aba4c4f62bb653)`()` <a id="structFRHAPI__Session_1a27702fd2edc7ded533aba4c4f62bb653"></a>

Gets the value of PlatformSession_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a65ed329419de33622c0a05e57d125503)`() const` <a id="structFRHAPI__Session_1a65ed329419de33622c0a05e57d125503"></a>

Gets the value of PlatformSession_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a797d0eefe2338dae1c9da6c887081985)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & DefaultValue) const` <a id="structFRHAPI__Session_1a797d0eefe2338dae1c9da6c887081985"></a>

Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformSession`](#structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & OutValue) const` <a id="structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39"></a>

Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1ae9621fc8539e9fcc32fb48c3277147cc)`()` <a id="structFRHAPI__Session_1ae9621fc8539e9fcc32fb48c3277147cc"></a>

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a05ca9c170384d84b9bcca3ecc92c7cd1)`() const` <a id="structFRHAPI__Session_1a05ca9c170384d84b9bcca3ecc92c7cd1"></a>

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1a5c1fdcdc359d718c6a68c2ba7ea95ce6)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & NewValue)` <a id="structFRHAPI__Session_1a5c1fdcdc359d718c6a68c2ba7ea95ce6"></a>

Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.

#### `public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1aaae614b29615924c25581b5d274955ce)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > && NewValue)` <a id="structFRHAPI__Session_1aaae614b29615924c25581b5d274955ce"></a>

Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformSession`](#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)`()` <a id="structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59"></a>

Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.

#### `public inline bool `[`IsPlatformSessionSet`](#structFRHAPI__Session_1a80aa992baaca370a4a8fd9737a71de9b)`() const` <a id="structFRHAPI__Session_1a80aa992baaca370a4a8fd9737a71de9b"></a>

Checks whether PlatformSession_Optional has been set.

#### `public inline TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1a42400e6c3eba99d75d324255dd70053f)`()` <a id="structFRHAPI__Session_1a42400e6c3eba99d75d324255dd70053f"></a>

Gets the value of PlatformScouts_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1a61134ab976408d2e0294acff555c18ec)`() const` <a id="structFRHAPI__Session_1a61134ab976408d2e0294acff555c18ec"></a>

Gets the value of PlatformScouts_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1adb51508e98a2b7eb59853fcb005a8e3e)`(const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & DefaultValue) const` <a id="structFRHAPI__Session_1adb51508e98a2b7eb59853fcb005a8e3e"></a>

Gets the value of PlatformScouts_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformScouts`](#structFRHAPI__Session_1a7cfdabf35d746377b4c7cbc931ca9bda)`(TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & OutValue) const` <a id="structFRHAPI__Session_1a7cfdabf35d746377b4c7cbc931ca9bda"></a>

Fills OutValue with the value of PlatformScouts_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > * `[`GetPlatformScoutsOrNull`](#structFRHAPI__Session_1a466ba5efa0c9573a3d0d2b34df13275c)`()` <a id="structFRHAPI__Session_1a466ba5efa0c9573a3d0d2b34df13275c"></a>

Returns a pointer to PlatformScouts_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > * `[`GetPlatformScoutsOrNull`](#structFRHAPI__Session_1a0a06bcaf4623fb2fb76b78b6678a7083)`() const` <a id="structFRHAPI__Session_1a0a06bcaf4623fb2fb76b78b6678a7083"></a>

Returns a pointer to PlatformScouts_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformScouts`](#structFRHAPI__Session_1a8f7dbeb46a1f0a02899d50e2e2772c21)`(const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & NewValue)` <a id="structFRHAPI__Session_1a8f7dbeb46a1f0a02899d50e2e2772c21"></a>

Sets the value of PlatformScouts_Optional and also sets PlatformScouts_IsSet to true.

#### `public inline void `[`SetPlatformScouts`](#structFRHAPI__Session_1a840c72a73a704a1ec347cdf181a36e82)`(TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > && NewValue)` <a id="structFRHAPI__Session_1a840c72a73a704a1ec347cdf181a36e82"></a>

Sets the value of PlatformScouts_Optional and also sets PlatformScouts_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformScouts`](#structFRHAPI__Session_1a6b418e8b04c7f22a40894bcb2ab97ec3)`()` <a id="structFRHAPI__Session_1a6b418e8b04c7f22a40894bcb2ab97ec3"></a>

Clears the value of PlatformScouts_Optional and sets PlatformScouts_IsSet to false.

#### `public inline bool `[`IsPlatformScoutsSet`](#structFRHAPI__Session_1aa874412d3cbb662b90170d71229fb8ef)`() const` <a id="structFRHAPI__Session_1aa874412d3cbb662b90170d71229fb8ef"></a>

Checks whether PlatformScouts_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ac788e3b10efcb974589d3046407b71b6)`()` <a id="structFRHAPI__Session_1ac788e3b10efcb974589d3046407b71b6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ab722dff2a3cffa1f6a0b3c2475190936)`() const` <a id="structFRHAPI__Session_1ab722dff2a3cffa1f6a0b3c2475190936"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ab612bb056eee4484b0f05aeffe330031)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Session_1ab612bb056eee4484b0f05aeffe330031"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a630ec7e44224edb3796078b082a0812e)`()` <a id="structFRHAPI__Session_1a630ec7e44224edb3796078b082a0812e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1ab8d0c801ea676fec814b06e52b154a61)`() const` <a id="structFRHAPI__Session_1ab8d0c801ea676fec814b06e52b154a61"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Session_1aa1bccba93d52da6478261ed595399418)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Session_1aa1bccba93d52da6478261ed595399418"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Session_1a623f471b9b40a51ac72bc22f1e66b61a)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Session_1a623f471b9b40a51ac72bc22f1e66b61a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)`()` <a id="structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__Session_1a99b2a3ce4de427ff7603cd95fa670711)`() const` <a id="structFRHAPI__Session_1a99b2a3ce4de427ff7603cd95fa670711"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a7205d3e7f48806fccb99a080eb836913)`()` <a id="structFRHAPI__Session_1a7205d3e7f48806fccb99a080eb836913"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a39717504126f099876cf4fdb6eca0443)`() const` <a id="structFRHAPI__Session_1a39717504126f099876cf4fdb6eca0443"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__Session_1a27ed539a1326c9fef60ed1da09386631)`(const FDateTime & NewValue)` <a id="structFRHAPI__Session_1a27ed539a1326c9fef60ed1da09386631"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__Session_1a5c2e48f140d49f32e48def5ade3dd602)`(FDateTime && NewValue)` <a id="structFRHAPI__Session_1a5c2e48f140d49f32e48def5ade3dd602"></a>

Sets the value of Created using move semantics.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__Session_1a7e0e805f65a237ce13c9faad266b9a6a)`()` <a id="structFRHAPI__Session_1a7e0e805f65a237ce13c9faad266b9a6a"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1a907cec810ae7395b5d626eb7e0731610)`() const` <a id="structFRHAPI__Session_1a907cec810ae7395b5d626eb7e0731610"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1af306cd9d827f62cbf46dc231e2a4abbd)`(const FString & DefaultValue) const` <a id="structFRHAPI__Session_1af306cd9d827f62cbf46dc231e2a4abbd"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3)`(FString & OutValue) const` <a id="structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1afecdef2a0a8582f67e4ec656a710fdc7)`()` <a id="structFRHAPI__Session_1afecdef2a0a8582f67e4ec656a710fdc7"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a3465ff4a74d1b1f6e19593126fe6e3b0)`() const` <a id="structFRHAPI__Session_1a3465ff4a74d1b1f6e19593126fe6e3b0"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__Session_1afa4f2b141393c1ac37cc8e78f67ff853)`(const FString & NewValue)` <a id="structFRHAPI__Session_1afa4f2b141393c1ac37cc8e78f67ff853"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__Session_1a6804d3ef584c6f5414a4eaf272daac29)`(FString && NewValue)` <a id="structFRHAPI__Session_1a6804d3ef584c6f5414a4eaf272daac29"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)`()` <a id="structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__Session_1a5a494ca05e696bf704916661f7e1be73)`() const` <a id="structFRHAPI__Session_1a5a494ca05e696bf704916661f7e1be73"></a>

Checks whether RegionId_Optional has been set.

#### `public inline bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a4050aa75c1bf99f779cf89eb70282fa0)`()` <a id="structFRHAPI__Session_1a4050aa75c1bf99f779cf89eb70282fa0"></a>

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1ae40df48da4c4b015d32958810f60b5ec)`() const` <a id="structFRHAPI__Session_1ae40df48da4c4b015d32958810f60b5ec"></a>

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a93eceb1282334a9e3e80bb95df64a06e)`(const bool & DefaultValue) const` <a id="structFRHAPI__Session_1a93eceb1282334a9e3e80bb95df64a06e"></a>

Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2)`(bool & OutValue) const` <a id="structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2"></a>

Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1ada67c96d37e45015fe6ae444614735c2)`()` <a id="structFRHAPI__Session_1ada67c96d37e45015fe6ae444614735c2"></a>

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a82030aa9c61eec1ddc26061615a20b6b)`() const` <a id="structFRHAPI__Session_1a82030aa9c61eec1ddc26061615a20b6b"></a>

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1afeeb779d270733f621747ac6385b9867)`(const bool & NewValue)` <a id="structFRHAPI__Session_1afeeb779d270733f621747ac6385b9867"></a>

Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true.

#### `public inline void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1aba476db0ef962abfab4d7b84fb8d81f7)`(bool && NewValue)` <a id="structFRHAPI__Session_1aba476db0ef962abfab4d7b84fb8d81f7"></a>

Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedByMatchmaking`](#structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224)`()` <a id="structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224"></a>

Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false.

#### `public inline bool `[`IsCreatedByMatchmakingSet`](#structFRHAPI__Session_1a02edb04a141e8b229b2880b812506a40)`() const` <a id="structFRHAPI__Session_1a02edb04a141e8b229b2880b812506a40"></a>

Checks whether CreatedByMatchmaking_Optional has been set.

#### `public inline bool `[`IsCreatedByMatchmakingDefaultValue`](#structFRHAPI__Session_1a4497fa87bd0e35ecdf5b09b0714d36ad)`() const` <a id="structFRHAPI__Session_1a4497fa87bd0e35ecdf5b09b0714d36ad"></a>

Returns true if CreatedByMatchmaking_Optional is set and matches the default value.

#### `public inline void `[`SetCreatedByMatchmakingToDefault`](#structFRHAPI__Session_1ac89a96065989ec35f4c1e11ca9bc81c6)`()` <a id="structFRHAPI__Session_1ac89a96065989ec35f4c1e11ca9bc81c6"></a>

Sets the value of CreatedByMatchmaking_Optional to its default and also sets CreatedByMatchmaking_IsSet to true.

