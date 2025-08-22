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
`public FString `[`ShortCode_Optional`](#structFRHAPI__Session_1a34eb749337a01204d65e77300a11498b) | Shortened join code associated with this session.
`public bool `[`ShortCode_IsSet`](#structFRHAPI__Session_1a52cdc74cdf299484f61b804612ce8f15) | true if ShortCode_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Session_1ac70165ee2f4adca87cb4357e3ac50aee)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Session_1a928bf5b0c2e9be5c80ddabec370faa40)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__Session_1aa994cae4d35154856d403f39bb6eb91b)`()` | Gets the value of Type.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__Session_1a2fc7770981e21beb9075dfe5cc2c588c)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Session_1a1c0580b22037b78c87ac8611bc5e58a5)`(const FString & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Session_1af31bd47087839af2ed20bb3837b41892)`(FString && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__Session_1a11f026e3d804f3ef38a2e8fec697ae98)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__Session_1a64c72196babb5d3c2573d907a4add897)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__Session_1a9392bd89143706a2df0f43f43b4708c5)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__Session_1a05a19069c24201f68610e155dde087f1)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FORCEINLINE `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a55fe477b50d1060269b9cefd70f5756a)`()` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1aa8f7966252637e5bc634c6ceb0e6729a)`() const` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1aeef63e10d9f073379cfb590adf8d68a7)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & DefaultValue) const` | Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstance`](#structFRHAPI__Session_1ab76712fab781a6b0b11dd78b3f46126b)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & OutValue) const` | Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1aeb0ab9e1d172e0d8246822774ff4350f)`()` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1a74ad2ee1db3c7c3b945b272735e435b3)`() const` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstance`](#structFRHAPI__Session_1a5620133d9cfece668fc252c44ee2405b)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & NewValue)` | Sets the value of Instance_Optional and also sets Instance_IsSet to true.
`public inline FORCEINLINE void `[`SetInstance`](#structFRHAPI__Session_1a3fb2ab161defffcf611d0c260d7369de)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` && NewValue)` | Sets the value of Instance_Optional and also sets Instance_IsSet to true using move semantics.
`public inline void `[`ClearInstance`](#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)`()` | Clears the value of Instance_Optional and sets Instance_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a01720c07cc34aa1daa9341c646c77463)`()` | Gets the value of Match_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a8015868e1162e1607a875fceed97e2f4)`() const` | Gets the value of Match_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1acc94295480498d7b59c982dfb3fad1ed)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & DefaultValue) const` | Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatch`](#structFRHAPI__Session_1ac20e543b7db86c2b07f4aa3c38a86f91)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & OutValue) const` | Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a62a681c6b981c43106ef4965e60e9696)`()` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a74c591cd3dce12811f8e29594937a88e)`() const` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatch`](#structFRHAPI__Session_1ac295408d0c618a3e3d37e1843e0b6238)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & NewValue)` | Sets the value of Match_Optional and also sets Match_IsSet to true.
`public inline FORCEINLINE void `[`SetMatch`](#structFRHAPI__Session_1a89f681817b43d7d51efb9eacecda2e70)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` && NewValue)` | Sets the value of Match_Optional and also sets Match_IsSet to true using move semantics.
`public inline void `[`ClearMatch`](#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)`()` | Clears the value of Match_Optional and sets Match_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1adf8440151059be977e4a0c186b24bb96)`()` | Gets the value of MatchmakingResults_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a45503f3311934d15ded54e4a734e7158)`() const` | Gets the value of MatchmakingResults_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1afc6fba9a2fe50ca31102fd9c01f53d73)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & DefaultValue) const` | Gets the value of MatchmakingResults_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchmakingResults`](#structFRHAPI__Session_1a86ec735c486985762155344667572bf4)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & OutValue) const` | Fills OutValue with the value of MatchmakingResults_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a6fc5240fbe4bca4af0a0b529eed7b8eb)`()` | Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1ac33df434b194d420f7ab6f1714ba0d5f)`() const` | Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchmakingResults`](#structFRHAPI__Session_1af0f8fc507e84104183513017e838cefc)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & NewValue)` | Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchmakingResults`](#structFRHAPI__Session_1a7c38bae2ff05019ecb8c0c0fd60e1cce)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` && NewValue)` | Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true using move semantics.
`public inline void `[`ClearMatchmakingResults`](#structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f)`()` | Clears the value of MatchmakingResults_Optional and sets MatchmakingResults_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a12408b49b2118795328527e65d1ecc93)`()` | Gets the value of Matchmaking_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a9e20efe193ac13715d19e182ab737d23)`() const` | Gets the value of Matchmaking_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1aac47ef9145fc6e16b84ab70bb8c2bfff)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & DefaultValue) const` | Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchmaking`](#structFRHAPI__Session_1aba2014001c58e72309ae3224039eb77b)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & OutValue) const` | Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1afba840ca0082158b2d4d65cffd2e37b8)`()` | Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1ac36ab1e2902d678cc34def3be3bbe6b0)`() const` | Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchmaking`](#structFRHAPI__Session_1a984550e9c7547bfb518c00c52f85ec67)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & NewValue)` | Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchmaking`](#structFRHAPI__Session_1ac652ade108c359abf45952d0986e2eb2)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` && NewValue)` | Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true using move semantics.
`public inline void `[`ClearMatchmaking`](#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)`()` | Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1aef700ed1c7e65b8a46791b52c8331579)`()` | Gets the value of Backfill_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a7c16dd36dff65e6d220dd361968b62ec)`() const` | Gets the value of Backfill_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a3801a912e573b83aa990f6fe547ae494)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & DefaultValue) const` | Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBackfill`](#structFRHAPI__Session_1a86dab2c3185b4289041269b97f27217b)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & OutValue) const` | Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1ab18f436aa3e957c3c219d47178ea6fd4)`()` | Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1a7bec3c1920747db56cc26cde513f53f7)`() const` | Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBackfill`](#structFRHAPI__Session_1a3ea58c357391c98919f55348bd50c086)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & NewValue)` | Sets the value of Backfill_Optional and also sets Backfill_IsSet to true.
`public inline FORCEINLINE void `[`SetBackfill`](#structFRHAPI__Session_1a9d216cf619830f6eaccb9fa9f67145a9)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` && NewValue)` | Sets the value of Backfill_Optional and also sets Backfill_IsSet to true using move semantics.
`public inline void `[`ClearBackfill`](#structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90)`()` | Clears the value of Backfill_Optional and sets Backfill_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a96d88547d2038cdb68899bd920d6ffba)`()` | Gets the value of Browser_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a2886868a3eba71c644c5b1d29f5fa434)`() const` | Gets the value of Browser_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1aac422f3987c3d34977401280d8324e31)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & DefaultValue) const` | Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBrowser`](#structFRHAPI__Session_1a25ca1e9cbb2094ca59214d0c86f28c7d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & OutValue) const` | Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1ab48727d1f5fa0028d3a8e259c70c4474)`()` | Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1ac61451c6dfe39b93ba9cdab7adcce007)`() const` | Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBrowser`](#structFRHAPI__Session_1a8ba16eb2366513af00d2df2fa1dab537)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & NewValue)` | Sets the value of Browser_Optional and also sets Browser_IsSet to true.
`public inline FORCEINLINE void `[`SetBrowser`](#structFRHAPI__Session_1adbcc3f8d6b8916676ccb9aeb09daae18)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` && NewValue)` | Sets the value of Browser_Optional and also sets Browser_IsSet to true using move semantics.
`public inline void `[`ClearBrowser`](#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)`()` | Clears the value of Browser_Optional and sets Browser_IsSet to false.
`public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__Session_1af8988940007493e19c7e728f5f1b14f8)`()` | Gets the value of Joinable.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__Session_1a0506558f1bb962bc4835303e89f345ce)`() const` | Gets the value of Joinable.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__Session_1aa11bd5ac41fb239d0860f16f1f7cce97)`(const bool & NewValue)` | Sets the value of Joinable.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__Session_1aba8129fb12726163cc8f14740dbeaf52)`(bool && NewValue)` | Sets the value of Joinable using move semantics.
`public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__Session_1af4891713c4931ddc32bf0a4e2672a567)`()` | Returns the default value of Joinable.
`public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a25e111989dd594c1062ed5b7727fa19c)`()` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1ad259b008766faffae0a40468afa9435d)`() const` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a58d91e5425d46aa8b4e46ca8ea90e0d7)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` | Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinability`](#structFRHAPI__Session_1a79d52b3a90f120cf069e4ba81c142624)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` | Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__Session_1a28cf042139b1455f707d925c54d0a502)`()` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__Session_1ab92f0b961c34d652b3d962e6622acfdf)`() const` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__Session_1a5d0e7621fddddf83b73e47f2a953c839)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__Session_1afb265979518cc5876d4d640a12c585c8)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.
`public inline void `[`ClearJoinability`](#structFRHAPI__Session_1aff87c76d2f5047604451dbd22a68aa6b)`()` | Clears the value of Joinability_Optional and sets Joinability_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1a40b5b6b10930f4fb307ab9befced8655)`()` | Gets the value of Teams.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1acdf2bb327d7ec77c6777ac8bb8a6c200)`() const` | Gets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__Session_1a11065593c64aa6651c678ee949250432)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` | Sets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__Session_1aaaaa4492dd61133b4e17763be4e9eef0)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` | Sets the value of Teams using move semantics.
`public inline FORCEINLINE bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1a0ac6bdd7ea471828672437529cb51343)`()` | Gets the value of TeamsSuppressed_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1a37225a74499eede3fad51bb922bfe79f)`() const` | Gets the value of TeamsSuppressed_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1a4e6aaa775f3351b3e55ac1db5d411801)`(const bool & DefaultValue) const` | Gets the value of TeamsSuppressed_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamsSuppressed`](#structFRHAPI__Session_1aeb8ea288937b5f17865dd41fccb1063f)`(bool & OutValue) const` | Fills OutValue with the value of TeamsSuppressed_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetTeamsSuppressedOrNull`](#structFRHAPI__Session_1a1640539c5ef60c5f47c1803a78154b24)`()` | Returns a pointer to TeamsSuppressed_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetTeamsSuppressedOrNull`](#structFRHAPI__Session_1a304cb7e0ccf91d25535ae47dd2847cc6)`() const` | Returns a pointer to TeamsSuppressed_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamsSuppressed`](#structFRHAPI__Session_1a1cfeca538b74abbf54dd6499c499117f)`(const bool & NewValue)` | Sets the value of TeamsSuppressed_Optional and also sets TeamsSuppressed_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamsSuppressed`](#structFRHAPI__Session_1a81b55e11dbc18fdff17e5638cc0061c3)`(bool && NewValue)` | Sets the value of TeamsSuppressed_Optional and also sets TeamsSuppressed_IsSet to true using move semantics.
`public inline void `[`ClearTeamsSuppressed`](#structFRHAPI__Session_1a827c5cd69a508fee8febcfeafbebd9ca)`()` | Clears the value of TeamsSuppressed_Optional and sets TeamsSuppressed_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_TeamsSuppressed`](#structFRHAPI__Session_1a73546d960c974ff9997845ef3bf07a74)`()` | Returns the default value of TeamsSuppressed.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a58c186583460540a1a739b2cc7da3276)`()` | Gets the value of PlatformSession_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a869df12915d2afbb6316eef8fdd09e20)`() const` | Gets the value of PlatformSession_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a86b4a65c49f7b342a8626eaca547571d)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & DefaultValue) const` | Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformSession`](#structFRHAPI__Session_1acb13d01157c8fca1821c5578df24449c)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & OutValue) const` | Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a8d3b29fdc65a157cae06c253209af4ac)`()` | Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a301fe4ea248ab0cd0f4a8d948bbf80b0)`() const` | Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformSession`](#structFRHAPI__Session_1a71819fe259f1ccd6c3bf81c2b7e3b67e)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & NewValue)` | Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformSession`](#structFRHAPI__Session_1a2214baa8e816e53298b4dc21b85b9970)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > && NewValue)` | Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true using move semantics.
`public inline void `[`ClearPlatformSession`](#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)`()` | Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1a2140257b585590bcb15aeaa9bf323595)`()` | Gets the value of PlatformScouts_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1ab76dd650aab3264f5f5fbbd913750d1b)`() const` | Gets the value of PlatformScouts_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1a214b639041ee98f9c0b48acaaf99e95a)`(const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & DefaultValue) const` | Gets the value of PlatformScouts_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformScouts`](#structFRHAPI__Session_1ac42ee490b29ed36c286d1cc8e6586cef)`(TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & OutValue) const` | Fills OutValue with the value of PlatformScouts_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > * `[`GetPlatformScoutsOrNull`](#structFRHAPI__Session_1a59954f5feb287cbf5365e337df398b44)`()` | Returns a pointer to PlatformScouts_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > * `[`GetPlatformScoutsOrNull`](#structFRHAPI__Session_1a3129483cda70552441febfd04e26bf12)`() const` | Returns a pointer to PlatformScouts_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformScouts`](#structFRHAPI__Session_1a870961c3193bec214fed25fc3859a90f)`(const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & NewValue)` | Sets the value of PlatformScouts_Optional and also sets PlatformScouts_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformScouts`](#structFRHAPI__Session_1a9c1804a64986c02e804a0c1e72030e5f)`(TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > && NewValue)` | Sets the value of PlatformScouts_Optional and also sets PlatformScouts_IsSet to true using move semantics.
`public inline void `[`ClearPlatformScouts`](#structFRHAPI__Session_1a6b418e8b04c7f22a40894bcb2ab97ec3)`()` | Clears the value of PlatformScouts_Optional and sets PlatformScouts_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ac5856f01ecdf7ac480672343bb3cfe92)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1a31fabbb04411897c45f74bc852161155)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1a6723384e0e6e96fd71cd5847fa2dffc4)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Session_1a4c366095f588965759f8eb95492a83b6)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a5aa5d89f50edeecd610a365925591c43)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a3f401e0a470add12046c7f52ff15e4bd)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Session_1add760cd4666e3f679dc5f01ba99d60c0)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Session_1afc5b823fc3efb79d521a88a71c9319ff)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a53b2f74c54e83ad7913ae9454f29ac7b)`()` | Gets the value of Created.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a57ab7c2b595f3e24a8de45dec71db8de)`() const` | Gets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__Session_1a6eb5b1b0c8b7c80a5bad9e1027761c1a)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__Session_1a81087476d3272f9f7472e21560770b6f)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__Session_1af8de05a219a9fa8c3e5071e739662497)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__Session_1af9bcaeaae7aaf962f2187ca523a96ce8)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__Session_1acee810ba9c6299ec898c6c7e3a5bf1e7)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__Session_1ab6a5b94b9b95e9a14874d21b19cafe1c)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a95a0031ae621aab935378f4c4fdd5ec7)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a8900e9e6228d9559ebc3e5818cf3efc0)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__Session_1a98248947ccef96a103b539601aa47532)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__Session_1a76d79167a814d4bb41d861e6297faad2)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FORCEINLINE bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1af08dbbae52e62ce4226546a03a533eca)`()` | Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a5d349deb2172483fcec61d133ab78589)`() const` | Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a74b8c18e1625fe15d4772725e8e7745a)`(const bool & DefaultValue) const` | Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a28c842a8aad90851986f828e4d6f6e30)`(bool & OutValue) const` | Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a0fc231fda294b67c383ec2cff53e8359)`()` | Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1af0a3f4d19b8c9a82126da72570c7325c)`() const` | Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1a8534f74940e2bbf63e50993ae8bc0ebb)`(const bool & NewValue)` | Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1a4c742d43dd0a9d68e5c7ce88997edd53)`(bool && NewValue)` | Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true using move semantics.
`public inline void `[`ClearCreatedByMatchmaking`](#structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224)`()` | Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CreatedByMatchmaking`](#structFRHAPI__Session_1a9ec8b99cfd0abe5fbd67c95a183a6aa9)`()` | Returns the default value of CreatedByMatchmaking.
`public inline FORCEINLINE FString & `[`GetShortCode`](#structFRHAPI__Session_1ac5c08bacef7c829f8cd6b61d7c1974a2)`()` | Gets the value of ShortCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetShortCode`](#structFRHAPI__Session_1ae45ae534fea9dd365245807d9699c78e)`() const` | Gets the value of ShortCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetShortCode`](#structFRHAPI__Session_1ac928ac1f918f91ca6ff72327c167629f)`(const FString & DefaultValue) const` | Gets the value of ShortCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetShortCode`](#structFRHAPI__Session_1a5c2f07feba97c64b9040292e7177520d)`(FString & OutValue) const` | Fills OutValue with the value of ShortCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetShortCodeOrNull`](#structFRHAPI__Session_1a3de2f15d3f251e3e4229a355c9b2775d)`()` | Returns a pointer to ShortCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetShortCodeOrNull`](#structFRHAPI__Session_1a3bebbd3e7f756070db35746e5af8e3a6)`() const` | Returns a pointer to ShortCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetShortCode`](#structFRHAPI__Session_1af693e3fafaa17fa0c0639c1a410ac57f)`(const FString & NewValue)` | Sets the value of ShortCode_Optional and also sets ShortCode_IsSet to true.
`public inline FORCEINLINE void `[`SetShortCode`](#structFRHAPI__Session_1a726e5fb6a406340e5347a231d2811c59)`(FString && NewValue)` | Sets the value of ShortCode_Optional and also sets ShortCode_IsSet to true using move semantics.
`public inline void `[`ClearShortCode`](#structFRHAPI__Session_1a8d7a1880ccfe41c9ca10356179cc93af)`()` | Clears the value of ShortCode_Optional and sets ShortCode_IsSet to false.

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

#### `public FString `[`ShortCode_Optional`](#structFRHAPI__Session_1a34eb749337a01204d65e77300a11498b) <a id="structFRHAPI__Session_1a34eb749337a01204d65e77300a11498b"></a>

Shortened join code associated with this session.

#### `public bool `[`ShortCode_IsSet`](#structFRHAPI__Session_1a52cdc74cdf299484f61b804612ce8f15) <a id="structFRHAPI__Session_1a52cdc74cdf299484f61b804612ce8f15"></a>

true if ShortCode_Optional has been set to a value

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

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__Session_1aa994cae4d35154856d403f39bb6eb91b)`()` <a id="structFRHAPI__Session_1aa994cae4d35154856d403f39bb6eb91b"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__Session_1a2fc7770981e21beb9075dfe5cc2c588c)`() const` <a id="structFRHAPI__Session_1a2fc7770981e21beb9075dfe5cc2c588c"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Session_1a1c0580b22037b78c87ac8611bc5e58a5)`(const FString & NewValue)` <a id="structFRHAPI__Session_1a1c0580b22037b78c87ac8611bc5e58a5"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Session_1af31bd47087839af2ed20bb3837b41892)`(FString && NewValue)` <a id="structFRHAPI__Session_1af31bd47087839af2ed20bb3837b41892"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__Session_1a11f026e3d804f3ef38a2e8fec697ae98)`()` <a id="structFRHAPI__Session_1a11f026e3d804f3ef38a2e8fec697ae98"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__Session_1a64c72196babb5d3c2573d907a4add897)`() const` <a id="structFRHAPI__Session_1a64c72196babb5d3c2573d907a4add897"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__Session_1a9392bd89143706a2df0f43f43b4708c5)`(const FString & NewValue)` <a id="structFRHAPI__Session_1a9392bd89143706a2df0f43f43b4708c5"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__Session_1a05a19069c24201f68610e155dde087f1)`(FString && NewValue)` <a id="structFRHAPI__Session_1a05a19069c24201f68610e155dde087f1"></a>

Sets the value of SessionId using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a55fe477b50d1060269b9cefd70f5756a)`()` <a id="structFRHAPI__Session_1a55fe477b50d1060269b9cefd70f5756a"></a>

Gets the value of Instance_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1aa8f7966252637e5bc634c6ceb0e6729a)`() const` <a id="structFRHAPI__Session_1aa8f7966252637e5bc634c6ceb0e6729a"></a>

Gets the value of Instance_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1aeef63e10d9f073379cfb590adf8d68a7)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1aeef63e10d9f073379cfb590adf8d68a7"></a>

Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstance`](#structFRHAPI__Session_1ab76712fab781a6b0b11dd78b3f46126b)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & OutValue) const` <a id="structFRHAPI__Session_1ab76712fab781a6b0b11dd78b3f46126b"></a>

Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1aeb0ab9e1d172e0d8246822774ff4350f)`()` <a id="structFRHAPI__Session_1aeb0ab9e1d172e0d8246822774ff4350f"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1a74ad2ee1db3c7c3b945b272735e435b3)`() const` <a id="structFRHAPI__Session_1a74ad2ee1db3c7c3b945b272735e435b3"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstance`](#structFRHAPI__Session_1a5620133d9cfece668fc252c44ee2405b)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & NewValue)` <a id="structFRHAPI__Session_1a5620133d9cfece668fc252c44ee2405b"></a>

Sets the value of Instance_Optional and also sets Instance_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstance`](#structFRHAPI__Session_1a3fb2ab161defffcf611d0c260d7369de)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` && NewValue)` <a id="structFRHAPI__Session_1a3fb2ab161defffcf611d0c260d7369de"></a>

Sets the value of Instance_Optional and also sets Instance_IsSet to true using move semantics.

#### `public inline void `[`ClearInstance`](#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)`()` <a id="structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f"></a>

Clears the value of Instance_Optional and sets Instance_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a01720c07cc34aa1daa9341c646c77463)`()` <a id="structFRHAPI__Session_1a01720c07cc34aa1daa9341c646c77463"></a>

Gets the value of Match_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a8015868e1162e1607a875fceed97e2f4)`() const` <a id="structFRHAPI__Session_1a8015868e1162e1607a875fceed97e2f4"></a>

Gets the value of Match_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1acc94295480498d7b59c982dfb3fad1ed)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1acc94295480498d7b59c982dfb3fad1ed"></a>

Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatch`](#structFRHAPI__Session_1ac20e543b7db86c2b07f4aa3c38a86f91)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & OutValue) const` <a id="structFRHAPI__Session_1ac20e543b7db86c2b07f4aa3c38a86f91"></a>

Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a62a681c6b981c43106ef4965e60e9696)`()` <a id="structFRHAPI__Session_1a62a681c6b981c43106ef4965e60e9696"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a74c591cd3dce12811f8e29594937a88e)`() const` <a id="structFRHAPI__Session_1a74c591cd3dce12811f8e29594937a88e"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatch`](#structFRHAPI__Session_1ac295408d0c618a3e3d37e1843e0b6238)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & NewValue)` <a id="structFRHAPI__Session_1ac295408d0c618a3e3d37e1843e0b6238"></a>

Sets the value of Match_Optional and also sets Match_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatch`](#structFRHAPI__Session_1a89f681817b43d7d51efb9eacecda2e70)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` && NewValue)` <a id="structFRHAPI__Session_1a89f681817b43d7d51efb9eacecda2e70"></a>

Sets the value of Match_Optional and also sets Match_IsSet to true using move semantics.

#### `public inline void `[`ClearMatch`](#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)`()` <a id="structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace"></a>

Clears the value of Match_Optional and sets Match_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1adf8440151059be977e4a0c186b24bb96)`()` <a id="structFRHAPI__Session_1adf8440151059be977e4a0c186b24bb96"></a>

Gets the value of MatchmakingResults_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a45503f3311934d15ded54e4a734e7158)`() const` <a id="structFRHAPI__Session_1a45503f3311934d15ded54e4a734e7158"></a>

Gets the value of MatchmakingResults_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1afc6fba9a2fe50ca31102fd9c01f53d73)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & DefaultValue) const` <a id="structFRHAPI__Session_1afc6fba9a2fe50ca31102fd9c01f53d73"></a>

Gets the value of MatchmakingResults_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchmakingResults`](#structFRHAPI__Session_1a86ec735c486985762155344667572bf4)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & OutValue) const` <a id="structFRHAPI__Session_1a86ec735c486985762155344667572bf4"></a>

Fills OutValue with the value of MatchmakingResults_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a6fc5240fbe4bca4af0a0b529eed7b8eb)`()` <a id="structFRHAPI__Session_1a6fc5240fbe4bca4af0a0b529eed7b8eb"></a>

Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1ac33df434b194d420f7ab6f1714ba0d5f)`() const` <a id="structFRHAPI__Session_1ac33df434b194d420f7ab6f1714ba0d5f"></a>

Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchmakingResults`](#structFRHAPI__Session_1af0f8fc507e84104183513017e838cefc)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & NewValue)` <a id="structFRHAPI__Session_1af0f8fc507e84104183513017e838cefc"></a>

Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchmakingResults`](#structFRHAPI__Session_1a7c38bae2ff05019ecb8c0c0fd60e1cce)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` && NewValue)` <a id="structFRHAPI__Session_1a7c38bae2ff05019ecb8c0c0fd60e1cce"></a>

Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmakingResults`](#structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f)`()` <a id="structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f"></a>

Clears the value of MatchmakingResults_Optional and sets MatchmakingResults_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a12408b49b2118795328527e65d1ecc93)`()` <a id="structFRHAPI__Session_1a12408b49b2118795328527e65d1ecc93"></a>

Gets the value of Matchmaking_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a9e20efe193ac13715d19e182ab737d23)`() const` <a id="structFRHAPI__Session_1a9e20efe193ac13715d19e182ab737d23"></a>

Gets the value of Matchmaking_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1aac47ef9145fc6e16b84ab70bb8c2bfff)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1aac47ef9145fc6e16b84ab70bb8c2bfff"></a>

Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchmaking`](#structFRHAPI__Session_1aba2014001c58e72309ae3224039eb77b)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & OutValue) const` <a id="structFRHAPI__Session_1aba2014001c58e72309ae3224039eb77b"></a>

Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1afba840ca0082158b2d4d65cffd2e37b8)`()` <a id="structFRHAPI__Session_1afba840ca0082158b2d4d65cffd2e37b8"></a>

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1ac36ab1e2902d678cc34def3be3bbe6b0)`() const` <a id="structFRHAPI__Session_1ac36ab1e2902d678cc34def3be3bbe6b0"></a>

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchmaking`](#structFRHAPI__Session_1a984550e9c7547bfb518c00c52f85ec67)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & NewValue)` <a id="structFRHAPI__Session_1a984550e9c7547bfb518c00c52f85ec67"></a>

Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchmaking`](#structFRHAPI__Session_1ac652ade108c359abf45952d0986e2eb2)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` && NewValue)` <a id="structFRHAPI__Session_1ac652ade108c359abf45952d0986e2eb2"></a>

Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmaking`](#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)`()` <a id="structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596"></a>

Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1aef700ed1c7e65b8a46791b52c8331579)`()` <a id="structFRHAPI__Session_1aef700ed1c7e65b8a46791b52c8331579"></a>

Gets the value of Backfill_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a7c16dd36dff65e6d220dd361968b62ec)`() const` <a id="structFRHAPI__Session_1a7c16dd36dff65e6d220dd361968b62ec"></a>

Gets the value of Backfill_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a3801a912e573b83aa990f6fe547ae494)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a3801a912e573b83aa990f6fe547ae494"></a>

Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBackfill`](#structFRHAPI__Session_1a86dab2c3185b4289041269b97f27217b)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & OutValue) const` <a id="structFRHAPI__Session_1a86dab2c3185b4289041269b97f27217b"></a>

Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1ab18f436aa3e957c3c219d47178ea6fd4)`()` <a id="structFRHAPI__Session_1ab18f436aa3e957c3c219d47178ea6fd4"></a>

Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1a7bec3c1920747db56cc26cde513f53f7)`() const` <a id="structFRHAPI__Session_1a7bec3c1920747db56cc26cde513f53f7"></a>

Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBackfill`](#structFRHAPI__Session_1a3ea58c357391c98919f55348bd50c086)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & NewValue)` <a id="structFRHAPI__Session_1a3ea58c357391c98919f55348bd50c086"></a>

Sets the value of Backfill_Optional and also sets Backfill_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBackfill`](#structFRHAPI__Session_1a9d216cf619830f6eaccb9fa9f67145a9)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` && NewValue)` <a id="structFRHAPI__Session_1a9d216cf619830f6eaccb9fa9f67145a9"></a>

Sets the value of Backfill_Optional and also sets Backfill_IsSet to true using move semantics.

#### `public inline void `[`ClearBackfill`](#structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90)`()` <a id="structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90"></a>

Clears the value of Backfill_Optional and sets Backfill_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a96d88547d2038cdb68899bd920d6ffba)`()` <a id="structFRHAPI__Session_1a96d88547d2038cdb68899bd920d6ffba"></a>

Gets the value of Browser_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a2886868a3eba71c644c5b1d29f5fa434)`() const` <a id="structFRHAPI__Session_1a2886868a3eba71c644c5b1d29f5fa434"></a>

Gets the value of Browser_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1aac422f3987c3d34977401280d8324e31)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1aac422f3987c3d34977401280d8324e31"></a>

Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBrowser`](#structFRHAPI__Session_1a25ca1e9cbb2094ca59214d0c86f28c7d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & OutValue) const` <a id="structFRHAPI__Session_1a25ca1e9cbb2094ca59214d0c86f28c7d"></a>

Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1ab48727d1f5fa0028d3a8e259c70c4474)`()` <a id="structFRHAPI__Session_1ab48727d1f5fa0028d3a8e259c70c4474"></a>

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1ac61451c6dfe39b93ba9cdab7adcce007)`() const` <a id="structFRHAPI__Session_1ac61451c6dfe39b93ba9cdab7adcce007"></a>

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBrowser`](#structFRHAPI__Session_1a8ba16eb2366513af00d2df2fa1dab537)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & NewValue)` <a id="structFRHAPI__Session_1a8ba16eb2366513af00d2df2fa1dab537"></a>

Sets the value of Browser_Optional and also sets Browser_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBrowser`](#structFRHAPI__Session_1adbcc3f8d6b8916676ccb9aeb09daae18)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` && NewValue)` <a id="structFRHAPI__Session_1adbcc3f8d6b8916676ccb9aeb09daae18"></a>

Sets the value of Browser_Optional and also sets Browser_IsSet to true using move semantics.

#### `public inline void `[`ClearBrowser`](#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)`()` <a id="structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95"></a>

Clears the value of Browser_Optional and sets Browser_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__Session_1af8988940007493e19c7e728f5f1b14f8)`()` <a id="structFRHAPI__Session_1af8988940007493e19c7e728f5f1b14f8"></a>

Gets the value of Joinable.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__Session_1a0506558f1bb962bc4835303e89f345ce)`() const` <a id="structFRHAPI__Session_1a0506558f1bb962bc4835303e89f345ce"></a>

Gets the value of Joinable.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__Session_1aa11bd5ac41fb239d0860f16f1f7cce97)`(const bool & NewValue)` <a id="structFRHAPI__Session_1aa11bd5ac41fb239d0860f16f1f7cce97"></a>

Sets the value of Joinable.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__Session_1aba8129fb12726163cc8f14740dbeaf52)`(bool && NewValue)` <a id="structFRHAPI__Session_1aba8129fb12726163cc8f14740dbeaf52"></a>

Sets the value of Joinable using move semantics.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__Session_1af4891713c4931ddc32bf0a4e2672a567)`()` <a id="structFRHAPI__Session_1af4891713c4931ddc32bf0a4e2672a567"></a>

Returns the default value of Joinable.

#### `public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a25e111989dd594c1062ed5b7727fa19c)`()` <a id="structFRHAPI__Session_1a25e111989dd594c1062ed5b7727fa19c"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1ad259b008766faffae0a40468afa9435d)`() const` <a id="structFRHAPI__Session_1ad259b008766faffae0a40468afa9435d"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__Session_1a58d91e5425d46aa8b4e46ca8ea90e0d7)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` <a id="structFRHAPI__Session_1a58d91e5425d46aa8b4e46ca8ea90e0d7"></a>

Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinability`](#structFRHAPI__Session_1a79d52b3a90f120cf069e4ba81c142624)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` <a id="structFRHAPI__Session_1a79d52b3a90f120cf069e4ba81c142624"></a>

Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__Session_1a28cf042139b1455f707d925c54d0a502)`()` <a id="structFRHAPI__Session_1a28cf042139b1455f707d925c54d0a502"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__Session_1ab92f0b961c34d652b3d962e6622acfdf)`() const` <a id="structFRHAPI__Session_1ab92f0b961c34d652b3d962e6622acfdf"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__Session_1a5d0e7621fddddf83b73e47f2a953c839)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` <a id="structFRHAPI__Session_1a5d0e7621fddddf83b73e47f2a953c839"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__Session_1afb265979518cc5876d4d640a12c585c8)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` <a id="structFRHAPI__Session_1afb265979518cc5876d4d640a12c585c8"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinability`](#structFRHAPI__Session_1aff87c76d2f5047604451dbd22a68aa6b)`()` <a id="structFRHAPI__Session_1aff87c76d2f5047604451dbd22a68aa6b"></a>

Clears the value of Joinability_Optional and sets Joinability_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1a40b5b6b10930f4fb307ab9befced8655)`()` <a id="structFRHAPI__Session_1a40b5b6b10930f4fb307ab9befced8655"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1acdf2bb327d7ec77c6777ac8bb8a6c200)`() const` <a id="structFRHAPI__Session_1acdf2bb327d7ec77c6777ac8bb8a6c200"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__Session_1a11065593c64aa6651c678ee949250432)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` <a id="structFRHAPI__Session_1a11065593c64aa6651c678ee949250432"></a>

Sets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__Session_1aaaaa4492dd61133b4e17763be4e9eef0)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` <a id="structFRHAPI__Session_1aaaaa4492dd61133b4e17763be4e9eef0"></a>

Sets the value of Teams using move semantics.

#### `public inline FORCEINLINE bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1a0ac6bdd7ea471828672437529cb51343)`()` <a id="structFRHAPI__Session_1a0ac6bdd7ea471828672437529cb51343"></a>

Gets the value of TeamsSuppressed_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1a37225a74499eede3fad51bb922bfe79f)`() const` <a id="structFRHAPI__Session_1a37225a74499eede3fad51bb922bfe79f"></a>

Gets the value of TeamsSuppressed_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetTeamsSuppressed`](#structFRHAPI__Session_1a4e6aaa775f3351b3e55ac1db5d411801)`(const bool & DefaultValue) const` <a id="structFRHAPI__Session_1a4e6aaa775f3351b3e55ac1db5d411801"></a>

Gets the value of TeamsSuppressed_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamsSuppressed`](#structFRHAPI__Session_1aeb8ea288937b5f17865dd41fccb1063f)`(bool & OutValue) const` <a id="structFRHAPI__Session_1aeb8ea288937b5f17865dd41fccb1063f"></a>

Fills OutValue with the value of TeamsSuppressed_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetTeamsSuppressedOrNull`](#structFRHAPI__Session_1a1640539c5ef60c5f47c1803a78154b24)`()` <a id="structFRHAPI__Session_1a1640539c5ef60c5f47c1803a78154b24"></a>

Returns a pointer to TeamsSuppressed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetTeamsSuppressedOrNull`](#structFRHAPI__Session_1a304cb7e0ccf91d25535ae47dd2847cc6)`() const` <a id="structFRHAPI__Session_1a304cb7e0ccf91d25535ae47dd2847cc6"></a>

Returns a pointer to TeamsSuppressed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamsSuppressed`](#structFRHAPI__Session_1a1cfeca538b74abbf54dd6499c499117f)`(const bool & NewValue)` <a id="structFRHAPI__Session_1a1cfeca538b74abbf54dd6499c499117f"></a>

Sets the value of TeamsSuppressed_Optional and also sets TeamsSuppressed_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamsSuppressed`](#structFRHAPI__Session_1a81b55e11dbc18fdff17e5638cc0061c3)`(bool && NewValue)` <a id="structFRHAPI__Session_1a81b55e11dbc18fdff17e5638cc0061c3"></a>

Sets the value of TeamsSuppressed_Optional and also sets TeamsSuppressed_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamsSuppressed`](#structFRHAPI__Session_1a827c5cd69a508fee8febcfeafbebd9ca)`()` <a id="structFRHAPI__Session_1a827c5cd69a508fee8febcfeafbebd9ca"></a>

Clears the value of TeamsSuppressed_Optional and sets TeamsSuppressed_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_TeamsSuppressed`](#structFRHAPI__Session_1a73546d960c974ff9997845ef3bf07a74)`()` <a id="structFRHAPI__Session_1a73546d960c974ff9997845ef3bf07a74"></a>

Returns the default value of TeamsSuppressed.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a58c186583460540a1a739b2cc7da3276)`()` <a id="structFRHAPI__Session_1a58c186583460540a1a739b2cc7da3276"></a>

Gets the value of PlatformSession_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a869df12915d2afbb6316eef8fdd09e20)`() const` <a id="structFRHAPI__Session_1a869df12915d2afbb6316eef8fdd09e20"></a>

Gets the value of PlatformSession_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a86b4a65c49f7b342a8626eaca547571d)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & DefaultValue) const` <a id="structFRHAPI__Session_1a86b4a65c49f7b342a8626eaca547571d"></a>

Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformSession`](#structFRHAPI__Session_1acb13d01157c8fca1821c5578df24449c)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & OutValue) const` <a id="structFRHAPI__Session_1acb13d01157c8fca1821c5578df24449c"></a>

Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a8d3b29fdc65a157cae06c253209af4ac)`()` <a id="structFRHAPI__Session_1a8d3b29fdc65a157cae06c253209af4ac"></a>

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a301fe4ea248ab0cd0f4a8d948bbf80b0)`() const` <a id="structFRHAPI__Session_1a301fe4ea248ab0cd0f4a8d948bbf80b0"></a>

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformSession`](#structFRHAPI__Session_1a71819fe259f1ccd6c3bf81c2b7e3b67e)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & NewValue)` <a id="structFRHAPI__Session_1a71819fe259f1ccd6c3bf81c2b7e3b67e"></a>

Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformSession`](#structFRHAPI__Session_1a2214baa8e816e53298b4dc21b85b9970)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > && NewValue)` <a id="structFRHAPI__Session_1a2214baa8e816e53298b4dc21b85b9970"></a>

Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformSession`](#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)`()` <a id="structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59"></a>

Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1a2140257b585590bcb15aeaa9bf323595)`()` <a id="structFRHAPI__Session_1a2140257b585590bcb15aeaa9bf323595"></a>

Gets the value of PlatformScouts_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1ab76dd650aab3264f5f5fbbd913750d1b)`() const` <a id="structFRHAPI__Session_1ab76dd650aab3264f5f5fbbd913750d1b"></a>

Gets the value of PlatformScouts_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & `[`GetPlatformScouts`](#structFRHAPI__Session_1a214b639041ee98f9c0b48acaaf99e95a)`(const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & DefaultValue) const` <a id="structFRHAPI__Session_1a214b639041ee98f9c0b48acaaf99e95a"></a>

Gets the value of PlatformScouts_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformScouts`](#structFRHAPI__Session_1ac42ee490b29ed36c286d1cc8e6586cef)`(TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & OutValue) const` <a id="structFRHAPI__Session_1ac42ee490b29ed36c286d1cc8e6586cef"></a>

Fills OutValue with the value of PlatformScouts_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > * `[`GetPlatformScoutsOrNull`](#structFRHAPI__Session_1a59954f5feb287cbf5365e337df398b44)`()` <a id="structFRHAPI__Session_1a59954f5feb287cbf5365e337df398b44"></a>

Returns a pointer to PlatformScouts_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > * `[`GetPlatformScoutsOrNull`](#structFRHAPI__Session_1a3129483cda70552441febfd04e26bf12)`() const` <a id="structFRHAPI__Session_1a3129483cda70552441febfd04e26bf12"></a>

Returns a pointer to PlatformScouts_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformScouts`](#structFRHAPI__Session_1a870961c3193bec214fed25fc3859a90f)`(const TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > & NewValue)` <a id="structFRHAPI__Session_1a870961c3193bec214fed25fc3859a90f"></a>

Sets the value of PlatformScouts_Optional and also sets PlatformScouts_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformScouts`](#structFRHAPI__Session_1a9c1804a64986c02e804a0c1e72030e5f)`(TMap< FString, `[`FRHAPI_PlatformScout`](RHAPI_PlatformScout.md#structFRHAPI__PlatformScout)` > && NewValue)` <a id="structFRHAPI__Session_1a9c1804a64986c02e804a0c1e72030e5f"></a>

Sets the value of PlatformScouts_Optional and also sets PlatformScouts_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformScouts`](#structFRHAPI__Session_1a6b418e8b04c7f22a40894bcb2ab97ec3)`()` <a id="structFRHAPI__Session_1a6b418e8b04c7f22a40894bcb2ab97ec3"></a>

Clears the value of PlatformScouts_Optional and sets PlatformScouts_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ac5856f01ecdf7ac480672343bb3cfe92)`()` <a id="structFRHAPI__Session_1ac5856f01ecdf7ac480672343bb3cfe92"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1a31fabbb04411897c45f74bc852161155)`() const` <a id="structFRHAPI__Session_1a31fabbb04411897c45f74bc852161155"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1a6723384e0e6e96fd71cd5847fa2dffc4)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Session_1a6723384e0e6e96fd71cd5847fa2dffc4"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Session_1a4c366095f588965759f8eb95492a83b6)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Session_1a4c366095f588965759f8eb95492a83b6"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a5aa5d89f50edeecd610a365925591c43)`()` <a id="structFRHAPI__Session_1a5aa5d89f50edeecd610a365925591c43"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a3f401e0a470add12046c7f52ff15e4bd)`() const` <a id="structFRHAPI__Session_1a3f401e0a470add12046c7f52ff15e4bd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Session_1add760cd4666e3f679dc5f01ba99d60c0)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Session_1add760cd4666e3f679dc5f01ba99d60c0"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Session_1afc5b823fc3efb79d521a88a71c9319ff)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Session_1afc5b823fc3efb79d521a88a71c9319ff"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)`()` <a id="structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a53b2f74c54e83ad7913ae9454f29ac7b)`()` <a id="structFRHAPI__Session_1a53b2f74c54e83ad7913ae9454f29ac7b"></a>

Gets the value of Created.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a57ab7c2b595f3e24a8de45dec71db8de)`() const` <a id="structFRHAPI__Session_1a57ab7c2b595f3e24a8de45dec71db8de"></a>

Gets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__Session_1a6eb5b1b0c8b7c80a5bad9e1027761c1a)`(const FDateTime & NewValue)` <a id="structFRHAPI__Session_1a6eb5b1b0c8b7c80a5bad9e1027761c1a"></a>

Sets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__Session_1a81087476d3272f9f7472e21560770b6f)`(FDateTime && NewValue)` <a id="structFRHAPI__Session_1a81087476d3272f9f7472e21560770b6f"></a>

Sets the value of Created using move semantics.

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__Session_1af8de05a219a9fa8c3e5071e739662497)`()` <a id="structFRHAPI__Session_1af8de05a219a9fa8c3e5071e739662497"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__Session_1af9bcaeaae7aaf962f2187ca523a96ce8)`() const` <a id="structFRHAPI__Session_1af9bcaeaae7aaf962f2187ca523a96ce8"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__Session_1acee810ba9c6299ec898c6c7e3a5bf1e7)`(const FString & DefaultValue) const` <a id="structFRHAPI__Session_1acee810ba9c6299ec898c6c7e3a5bf1e7"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__Session_1ab6a5b94b9b95e9a14874d21b19cafe1c)`(FString & OutValue) const` <a id="structFRHAPI__Session_1ab6a5b94b9b95e9a14874d21b19cafe1c"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a95a0031ae621aab935378f4c4fdd5ec7)`()` <a id="structFRHAPI__Session_1a95a0031ae621aab935378f4c4fdd5ec7"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a8900e9e6228d9559ebc3e5818cf3efc0)`() const` <a id="structFRHAPI__Session_1a8900e9e6228d9559ebc3e5818cf3efc0"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__Session_1a98248947ccef96a103b539601aa47532)`(const FString & NewValue)` <a id="structFRHAPI__Session_1a98248947ccef96a103b539601aa47532"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__Session_1a76d79167a814d4bb41d861e6297faad2)`(FString && NewValue)` <a id="structFRHAPI__Session_1a76d79167a814d4bb41d861e6297faad2"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)`()` <a id="structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1af08dbbae52e62ce4226546a03a533eca)`()` <a id="structFRHAPI__Session_1af08dbbae52e62ce4226546a03a533eca"></a>

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a5d349deb2172483fcec61d133ab78589)`() const` <a id="structFRHAPI__Session_1a5d349deb2172483fcec61d133ab78589"></a>

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a74b8c18e1625fe15d4772725e8e7745a)`(const bool & DefaultValue) const` <a id="structFRHAPI__Session_1a74b8c18e1625fe15d4772725e8e7745a"></a>

Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a28c842a8aad90851986f828e4d6f6e30)`(bool & OutValue) const` <a id="structFRHAPI__Session_1a28c842a8aad90851986f828e4d6f6e30"></a>

Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a0fc231fda294b67c383ec2cff53e8359)`()` <a id="structFRHAPI__Session_1a0fc231fda294b67c383ec2cff53e8359"></a>

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1af0a3f4d19b8c9a82126da72570c7325c)`() const` <a id="structFRHAPI__Session_1af0a3f4d19b8c9a82126da72570c7325c"></a>

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1a8534f74940e2bbf63e50993ae8bc0ebb)`(const bool & NewValue)` <a id="structFRHAPI__Session_1a8534f74940e2bbf63e50993ae8bc0ebb"></a>

Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1a4c742d43dd0a9d68e5c7ce88997edd53)`(bool && NewValue)` <a id="structFRHAPI__Session_1a4c742d43dd0a9d68e5c7ce88997edd53"></a>

Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedByMatchmaking`](#structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224)`()` <a id="structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224"></a>

Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CreatedByMatchmaking`](#structFRHAPI__Session_1a9ec8b99cfd0abe5fbd67c95a183a6aa9)`()` <a id="structFRHAPI__Session_1a9ec8b99cfd0abe5fbd67c95a183a6aa9"></a>

Returns the default value of CreatedByMatchmaking.

#### `public inline FORCEINLINE FString & `[`GetShortCode`](#structFRHAPI__Session_1ac5c08bacef7c829f8cd6b61d7c1974a2)`()` <a id="structFRHAPI__Session_1ac5c08bacef7c829f8cd6b61d7c1974a2"></a>

Gets the value of ShortCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetShortCode`](#structFRHAPI__Session_1ae45ae534fea9dd365245807d9699c78e)`() const` <a id="structFRHAPI__Session_1ae45ae534fea9dd365245807d9699c78e"></a>

Gets the value of ShortCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetShortCode`](#structFRHAPI__Session_1ac928ac1f918f91ca6ff72327c167629f)`(const FString & DefaultValue) const` <a id="structFRHAPI__Session_1ac928ac1f918f91ca6ff72327c167629f"></a>

Gets the value of ShortCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetShortCode`](#structFRHAPI__Session_1a5c2f07feba97c64b9040292e7177520d)`(FString & OutValue) const` <a id="structFRHAPI__Session_1a5c2f07feba97c64b9040292e7177520d"></a>

Fills OutValue with the value of ShortCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetShortCodeOrNull`](#structFRHAPI__Session_1a3de2f15d3f251e3e4229a355c9b2775d)`()` <a id="structFRHAPI__Session_1a3de2f15d3f251e3e4229a355c9b2775d"></a>

Returns a pointer to ShortCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetShortCodeOrNull`](#structFRHAPI__Session_1a3bebbd3e7f756070db35746e5af8e3a6)`() const` <a id="structFRHAPI__Session_1a3bebbd3e7f756070db35746e5af8e3a6"></a>

Returns a pointer to ShortCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetShortCode`](#structFRHAPI__Session_1af693e3fafaa17fa0c0639c1a410ac57f)`(const FString & NewValue)` <a id="structFRHAPI__Session_1af693e3fafaa17fa0c0639c1a410ac57f"></a>

Sets the value of ShortCode_Optional and also sets ShortCode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetShortCode`](#structFRHAPI__Session_1a726e5fb6a406340e5347a231d2811c59)`(FString && NewValue)` <a id="structFRHAPI__Session_1a726e5fb6a406340e5347a231d2811c59"></a>

Sets the value of ShortCode_Optional and also sets ShortCode_IsSet to true using move semantics.

#### `public inline void `[`ClearShortCode`](#structFRHAPI__Session_1a8d7a1880ccfe41c9ca10356179cc93af)`()` <a id="structFRHAPI__Session_1a8d7a1880ccfe41c9ca10356179cc93af"></a>

Clears the value of ShortCode_Optional and sets ShortCode_IsSet to false.

