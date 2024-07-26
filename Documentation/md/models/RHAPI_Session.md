# group `RHAPI_Session` <a id="group__RHAPI__Session"></a>

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
`public bool `[`Joinable`](#structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907) | Is this session freely joinable by players without an invite?
`public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e) | List of teams of players currently in the session.
`public TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > `[`PlatformSession_Optional`](#structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3) | Child Platform Sessions for this session. A player joining one of the child platform sessions implicitly joins the parent session.
`public bool `[`PlatformSession_IsSet`](#structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494) | true if PlatformSession_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b) | Leader Player or instance defined custom data about this session.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8) | true if CustomData_Optional has been set to a value
`public FDateTime `[`Created`](#structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FString `[`RegionId_Optional`](#structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734) | Preferred region for the instance and match to take place in.
`public bool `[`RegionId_IsSet`](#structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92) | true if RegionId_Optional has been set to a value
`public bool `[`CreatedByMatchmaking_Optional`](#structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24) | Flag of whether or not this session was created by matchmaking or not.
`public bool `[`CreatedByMatchmaking_IsSet`](#structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413) | true if CreatedByMatchmaking_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Session_1ac70165ee2f4adca87cb4357e3ac50aee)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Session_1a4757bfbb10f5cedf42335369676f2815)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__Session_1a4b8005e8cc0e349c7c6e9ea8a8b83259)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__Session_1a8cee3a500baa546a077d8fa572dd4a09)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__Session_1a8594be5dba86883fcaeb2df6840c2ce2)`(const FString & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__Session_1aa02c4ba420deece3b1e34c1cd17facaa)`(FString && NewValue)` | Sets the value of Type using move semantics.
`public inline FString & `[`GetSessionId`](#structFRHAPI__Session_1a534fc1fa04faa28a5efcb160fa9764e9)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__Session_1a49c80fd3293ed2083b5ce39387bdae29)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__Session_1a77354cc9665783b38f8956b46668ff2d)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__Session_1a11a58607bdff7e9ff6df77f2f18006ec)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a978c6c105acee5cc6a4cd8a81786b5d3)`()` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a97d938a1e2cd367f47dfaf6254c25142)`() const` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a7aefd48c5fcf292677de1c5a5a41ef92)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & DefaultValue) const` | Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstance`](#structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & OutValue) const` | Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1ae5c1e0c01810bdccbb8f0ca609f2f78d)`()` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1ac5f8e4ac9f5b33873d6a4aa8248e163d)`() const` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstance`](#structFRHAPI__Session_1ae1ad277ee75d07e5273abd1946c8d7e1)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & NewValue)` | Sets the value of Instance_Optional and also sets Instance_IsSet to true.
`public inline void `[`SetInstance`](#structFRHAPI__Session_1af62dafc260bac36910ae1e615820b988)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` && NewValue)` | Sets the value of Instance_Optional and also sets Instance_IsSet to true using move semantics.
`public inline void `[`ClearInstance`](#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)`()` | Clears the value of Instance_Optional and sets Instance_IsSet to false.
`public inline bool `[`IsInstanceSet`](#structFRHAPI__Session_1a83813daef7812a64feced80e21a28c74)`() const` | Checks whether Instance_Optional has been set.
`public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a663056f65075925d379ff552e603ea96)`()` | Gets the value of Match_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a3900428342a3a13ee73497256dd0e424)`() const` | Gets the value of Match_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a96fc4698bfc574871cde9f8f92e144c5)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & DefaultValue) const` | Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatch`](#structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & OutValue) const` | Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a621dbcbd722c00a2bbec90d69e37ef44)`()` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1acea2787f1ec14dcf5f068ae8178004bb)`() const` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatch`](#structFRHAPI__Session_1aca3aabffbf8df14d3fa97fb2d28095e3)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & NewValue)` | Sets the value of Match_Optional and also sets Match_IsSet to true.
`public inline void `[`SetMatch`](#structFRHAPI__Session_1a6a89bb7c2e0d66eb60b2e1d3d4678506)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` && NewValue)` | Sets the value of Match_Optional and also sets Match_IsSet to true using move semantics.
`public inline void `[`ClearMatch`](#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)`()` | Clears the value of Match_Optional and sets Match_IsSet to false.
`public inline bool `[`IsMatchSet`](#structFRHAPI__Session_1a2065233f6b8cfb33dbb0eed51bbb8353)`() const` | Checks whether Match_Optional has been set.
`public inline `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1aba10587f3491f55669240302fd70c06e)`()` | Gets the value of MatchmakingResults_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1aad54fc15816213043bb9cf85f5b1f9d7)`() const` | Gets the value of MatchmakingResults_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a832f75570e0b01d9c0bce714f97f9d14)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & DefaultValue) const` | Gets the value of MatchmakingResults_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmakingResults`](#structFRHAPI__Session_1a9272df1e1567e67a0e3e09ac09a470de)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & OutValue) const` | Fills OutValue with the value of MatchmakingResults_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a6eccd53cd41789fbb1c6ff329b907600)`()` | Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a83ab183c1ac85b7f1bda54e6be9221e5)`() const` | Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmakingResults`](#structFRHAPI__Session_1a635b6bf91bf418bf766f49dba6d9acb9)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & NewValue)` | Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true.
`public inline void `[`SetMatchmakingResults`](#structFRHAPI__Session_1aa7f0fda2b127b9e63f055ca98d16a864)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` && NewValue)` | Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true using move semantics.
`public inline void `[`ClearMatchmakingResults`](#structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f)`()` | Clears the value of MatchmakingResults_Optional and sets MatchmakingResults_IsSet to false.
`public inline bool `[`IsMatchmakingResultsSet`](#structFRHAPI__Session_1a43f22efd9ad0f338a498062ab709e4bd)`() const` | Checks whether MatchmakingResults_Optional has been set.
`public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a7e72ca984908081c10f44bcec1763cc3)`()` | Gets the value of Matchmaking_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a3b04668ebd59b9dd384b1f25eb06d968)`() const` | Gets the value of Matchmaking_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a545e19b64f506b5f3793e85941240d86)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & DefaultValue) const` | Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmaking`](#structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & OutValue) const` | Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1ad0c2005853a2d3d3a3158cfff70eae22)`()` | Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1aa65a144963e796b6ca2fcfb5f1d77dff)`() const` | Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a74a7bfcb11e52d3ba211ddc53b5e435c)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & NewValue)` | Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.
`public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a03b7a8df7dde6a21220d9349a8d3941e)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` && NewValue)` | Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true using move semantics.
`public inline void `[`ClearMatchmaking`](#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)`()` | Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.
`public inline bool `[`IsMatchmakingSet`](#structFRHAPI__Session_1a58cfdd5fdc5e8a40c58dc3629b9e90c9)`() const` | Checks whether Matchmaking_Optional has been set.
`public inline `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a15f72525350f452e25fd61d66fd7a756)`()` | Gets the value of Backfill_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a21b593a805dc945474b4ec9e30e63fdf)`() const` | Gets the value of Backfill_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1ae16601ab6c078bc61d792e27287dde2a)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & DefaultValue) const` | Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBackfill`](#structFRHAPI__Session_1ab84409512d3ec81b4d5da14b3795978a)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & OutValue) const` | Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1aa468234b83a765da84939b62d4099e18)`()` | Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1adb356a68ec0f1a96a374d60929017b1c)`() const` | Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBackfill`](#structFRHAPI__Session_1a038f9574b0275fb794e7e80383f9356d)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & NewValue)` | Sets the value of Backfill_Optional and also sets Backfill_IsSet to true.
`public inline void `[`SetBackfill`](#structFRHAPI__Session_1af758ed8aebd406126611aa74a9c31dd0)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` && NewValue)` | Sets the value of Backfill_Optional and also sets Backfill_IsSet to true using move semantics.
`public inline void `[`ClearBackfill`](#structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90)`()` | Clears the value of Backfill_Optional and sets Backfill_IsSet to false.
`public inline bool `[`IsBackfillSet`](#structFRHAPI__Session_1a6b745ad182f5525eb24a026b9d3e9a08)`() const` | Checks whether Backfill_Optional has been set.
`public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a2cfa5643b7ba91b7efa751adba2c6fd2)`()` | Gets the value of Browser_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1afddcc33cd67e5b5d41a30e135136c1ed)`() const` | Gets the value of Browser_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a1cce194385a9388b08dbd1be9fdf61cf)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & DefaultValue) const` | Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBrowser`](#structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & OutValue) const` | Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a5ca76953f5b54edcd38534e3063f5021)`()` | Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a88606729e6afe871b10edceddd76ea7f)`() const` | Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBrowser`](#structFRHAPI__Session_1a925e75ecf9752a1ab2cce20935f381fe)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & NewValue)` | Sets the value of Browser_Optional and also sets Browser_IsSet to true.
`public inline void `[`SetBrowser`](#structFRHAPI__Session_1a66af0bf2222a7f7e79a1896df910b98d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` && NewValue)` | Sets the value of Browser_Optional and also sets Browser_IsSet to true using move semantics.
`public inline void `[`ClearBrowser`](#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)`()` | Clears the value of Browser_Optional and sets Browser_IsSet to false.
`public inline bool `[`IsBrowserSet`](#structFRHAPI__Session_1a5379fc90707903bb775880ddc146cdec)`() const` | Checks whether Browser_Optional has been set.
`public inline bool & `[`GetJoinable`](#structFRHAPI__Session_1a8003484ab6879e9688a03c7491409e1c)`()` | Gets the value of Joinable.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__Session_1ae8ea9ac7155aec5ede4e0db19be45819)`() const` | Gets the value of Joinable.
`public inline void `[`SetJoinable`](#structFRHAPI__Session_1af324f39218e4174f4197700e6b116798)`(const bool & NewValue)` | Sets the value of Joinable.
`public inline void `[`SetJoinable`](#structFRHAPI__Session_1a35182afcd9b38c0e95b7cc1006ccbfe3)`(bool && NewValue)` | Sets the value of Joinable using move semantics.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913)`() const` | Returns true if Joinable matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711)`()` | Sets the value of Joinable to its default
`public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1ab7008a5afdc6a77a9b21d9f0a687866e)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1ad7cdb19d35e96ccfdf95561febc18a60)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__Session_1a8cd13fe6b5b0a94a42b93d5183adc3c2)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` | Sets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__Session_1a303098da74e4dc89754560502417f1be)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` | Sets the value of Teams using move semantics.
`public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a8c178d130dfbf6984477186bba10bdb6)`()` | Gets the value of PlatformSession_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a50bf670c4cad94a91c9dcef23a7826a2)`() const` | Gets the value of PlatformSession_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a4d80598db285868a62904cc7a4087fd0)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & DefaultValue) const` | Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSession`](#structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & OutValue) const` | Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a399665b2b0c76f170f8997913152b613)`()` | Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a18f938d6a17d7f32dc52a327e55b98c0)`() const` | Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1a5c1fdcdc359d718c6a68c2ba7ea95ce6)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & NewValue)` | Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.
`public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1aaae614b29615924c25581b5d274955ce)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > && NewValue)` | Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true using move semantics.
`public inline void `[`ClearPlatformSession`](#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)`()` | Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.
`public inline bool `[`IsPlatformSessionSet`](#structFRHAPI__Session_1a80aa992baaca370a4a8fd9737a71de9b)`() const` | Checks whether PlatformSession_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1abed072171f304dcb8b90486b80943efa)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ad27ca08587eedfe4b8e9ec79233cc0c4)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1a7b13eb31cdc9b0badc6cdff6f96b9f5b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1ac249be887fd6245e401a68aa7d511bd9)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a3fca4472cba176ea8c34aa97de65895e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Session_1aa1bccba93d52da6478261ed595399418)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__Session_1a623f471b9b40a51ac72bc22f1e66b61a)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__Session_1a99b2a3ce4de427ff7603cd95fa670711)`() const` | Checks whether CustomData_Optional has been set.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a4a913a2628bb2e473ac8f41c97628613)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a3d258ecf804b00ae3b7d44d2eafdd08d)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__Session_1a27ed539a1326c9fef60ed1da09386631)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__Session_1a5c2e48f140d49f32e48def5ade3dd602)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FString & `[`GetRegionId`](#structFRHAPI__Session_1a5823c390317676a992c6de596b07726e)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1afc68b80e9f4e79b40704a20ad62946a3)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1acdeb08926396cda4a845f46f2686d30b)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1ae11e272a5b85d6af7d79b67b5ee09989)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a80e86b3b03b44086aff3e9d090fe1267)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__Session_1afa4f2b141393c1ac37cc8e78f67ff853)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__Session_1a6804d3ef584c6f5414a4eaf272daac29)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__Session_1a5a494ca05e696bf704916661f7e1be73)`() const` | Checks whether RegionId_Optional has been set.
`public inline bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1ae5447a41db818e93919c1bb590b8ba93)`()` | Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a2491fbf7efba2d8eecd8aa3712a47048)`() const` | Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a93939c7bd58a685b2c86a7a7ef284c8c)`(const bool & DefaultValue) const` | Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2)`(bool & OutValue) const` | Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a1ee4a02d8cef77499ea1bafe725a8a52)`()` | Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a6c95acf174c2fc5e4d6c4f59febd8ca6)`() const` | Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.
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

Is this session freely joinable by players without an invite?

#### `public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e) <a id="structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e"></a>

List of teams of players currently in the session.

#### `public TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > `[`PlatformSession_Optional`](#structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3) <a id="structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3"></a>

Child Platform Sessions for this session. A player joining one of the child platform sessions implicitly joins the parent session.

#### `public bool `[`PlatformSession_IsSet`](#structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494) <a id="structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494"></a>

true if PlatformSession_Optional has been set to a value

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__Session_1a4757bfbb10f5cedf42335369676f2815)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Session_1a4757bfbb10f5cedf42335369676f2815"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetType`](#structFRHAPI__Session_1a4b8005e8cc0e349c7c6e9ea8a8b83259)`()` <a id="structFRHAPI__Session_1a4b8005e8cc0e349c7c6e9ea8a8b83259"></a>

Gets the value of Type.

#### `public inline const FString & `[`GetType`](#structFRHAPI__Session_1a8cee3a500baa546a077d8fa572dd4a09)`() const` <a id="structFRHAPI__Session_1a8cee3a500baa546a077d8fa572dd4a09"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__Session_1a8594be5dba86883fcaeb2df6840c2ce2)`(const FString & NewValue)` <a id="structFRHAPI__Session_1a8594be5dba86883fcaeb2df6840c2ce2"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__Session_1aa02c4ba420deece3b1e34c1cd17facaa)`(FString && NewValue)` <a id="structFRHAPI__Session_1aa02c4ba420deece3b1e34c1cd17facaa"></a>

Sets the value of Type using move semantics.

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__Session_1a534fc1fa04faa28a5efcb160fa9764e9)`()` <a id="structFRHAPI__Session_1a534fc1fa04faa28a5efcb160fa9764e9"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__Session_1a49c80fd3293ed2083b5ce39387bdae29)`() const` <a id="structFRHAPI__Session_1a49c80fd3293ed2083b5ce39387bdae29"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__Session_1a77354cc9665783b38f8956b46668ff2d)`(const FString & NewValue)` <a id="structFRHAPI__Session_1a77354cc9665783b38f8956b46668ff2d"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__Session_1a11a58607bdff7e9ff6df77f2f18006ec)`(FString && NewValue)` <a id="structFRHAPI__Session_1a11a58607bdff7e9ff6df77f2f18006ec"></a>

Sets the value of SessionId using move semantics.

#### `public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a978c6c105acee5cc6a4cd8a81786b5d3)`()` <a id="structFRHAPI__Session_1a978c6c105acee5cc6a4cd8a81786b5d3"></a>

Gets the value of Instance_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a97d938a1e2cd367f47dfaf6254c25142)`() const` <a id="structFRHAPI__Session_1a97d938a1e2cd367f47dfaf6254c25142"></a>

Gets the value of Instance_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a7aefd48c5fcf292677de1c5a5a41ef92)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a7aefd48c5fcf292677de1c5a5a41ef92"></a>

Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstance`](#structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & OutValue) const` <a id="structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c"></a>

Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1ae5c1e0c01810bdccbb8f0ca609f2f78d)`()` <a id="structFRHAPI__Session_1ae5c1e0c01810bdccbb8f0ca609f2f78d"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1ac5f8e4ac9f5b33873d6a4aa8248e163d)`() const` <a id="structFRHAPI__Session_1ac5f8e4ac9f5b33873d6a4aa8248e163d"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstance`](#structFRHAPI__Session_1ae1ad277ee75d07e5273abd1946c8d7e1)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & NewValue)` <a id="structFRHAPI__Session_1ae1ad277ee75d07e5273abd1946c8d7e1"></a>

Sets the value of Instance_Optional and also sets Instance_IsSet to true.

#### `public inline void `[`SetInstance`](#structFRHAPI__Session_1af62dafc260bac36910ae1e615820b988)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` && NewValue)` <a id="structFRHAPI__Session_1af62dafc260bac36910ae1e615820b988"></a>

Sets the value of Instance_Optional and also sets Instance_IsSet to true using move semantics.

#### `public inline void `[`ClearInstance`](#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)`()` <a id="structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f"></a>

Clears the value of Instance_Optional and sets Instance_IsSet to false.

#### `public inline bool `[`IsInstanceSet`](#structFRHAPI__Session_1a83813daef7812a64feced80e21a28c74)`() const` <a id="structFRHAPI__Session_1a83813daef7812a64feced80e21a28c74"></a>

Checks whether Instance_Optional has been set.

#### `public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a663056f65075925d379ff552e603ea96)`()` <a id="structFRHAPI__Session_1a663056f65075925d379ff552e603ea96"></a>

Gets the value of Match_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a3900428342a3a13ee73497256dd0e424)`() const` <a id="structFRHAPI__Session_1a3900428342a3a13ee73497256dd0e424"></a>

Gets the value of Match_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a96fc4698bfc574871cde9f8f92e144c5)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a96fc4698bfc574871cde9f8f92e144c5"></a>

Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatch`](#structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & OutValue) const` <a id="structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d"></a>

Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a621dbcbd722c00a2bbec90d69e37ef44)`()` <a id="structFRHAPI__Session_1a621dbcbd722c00a2bbec90d69e37ef44"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1acea2787f1ec14dcf5f068ae8178004bb)`() const` <a id="structFRHAPI__Session_1acea2787f1ec14dcf5f068ae8178004bb"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatch`](#structFRHAPI__Session_1aca3aabffbf8df14d3fa97fb2d28095e3)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & NewValue)` <a id="structFRHAPI__Session_1aca3aabffbf8df14d3fa97fb2d28095e3"></a>

Sets the value of Match_Optional and also sets Match_IsSet to true.

#### `public inline void `[`SetMatch`](#structFRHAPI__Session_1a6a89bb7c2e0d66eb60b2e1d3d4678506)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` && NewValue)` <a id="structFRHAPI__Session_1a6a89bb7c2e0d66eb60b2e1d3d4678506"></a>

Sets the value of Match_Optional and also sets Match_IsSet to true using move semantics.

#### `public inline void `[`ClearMatch`](#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)`()` <a id="structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace"></a>

Clears the value of Match_Optional and sets Match_IsSet to false.

#### `public inline bool `[`IsMatchSet`](#structFRHAPI__Session_1a2065233f6b8cfb33dbb0eed51bbb8353)`() const` <a id="structFRHAPI__Session_1a2065233f6b8cfb33dbb0eed51bbb8353"></a>

Checks whether Match_Optional has been set.

#### `public inline `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1aba10587f3491f55669240302fd70c06e)`()` <a id="structFRHAPI__Session_1aba10587f3491f55669240302fd70c06e"></a>

Gets the value of MatchmakingResults_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1aad54fc15816213043bb9cf85f5b1f9d7)`() const` <a id="structFRHAPI__Session_1aad54fc15816213043bb9cf85f5b1f9d7"></a>

Gets the value of MatchmakingResults_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & `[`GetMatchmakingResults`](#structFRHAPI__Session_1a832f75570e0b01d9c0bce714f97f9d14)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & DefaultValue) const` <a id="structFRHAPI__Session_1a832f75570e0b01d9c0bce714f97f9d14"></a>

Gets the value of MatchmakingResults_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchmakingResults`](#structFRHAPI__Session_1a9272df1e1567e67a0e3e09ac09a470de)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & OutValue) const` <a id="structFRHAPI__Session_1a9272df1e1567e67a0e3e09ac09a470de"></a>

Fills OutValue with the value of MatchmakingResults_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a6eccd53cd41789fbb1c6ff329b907600)`()` <a id="structFRHAPI__Session_1a6eccd53cd41789fbb1c6ff329b907600"></a>

Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` * `[`GetMatchmakingResultsOrNull`](#structFRHAPI__Session_1a83ab183c1ac85b7f1bda54e6be9221e5)`() const` <a id="structFRHAPI__Session_1a83ab183c1ac85b7f1bda54e6be9221e5"></a>

Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchmakingResults`](#structFRHAPI__Session_1a635b6bf91bf418bf766f49dba6d9acb9)`(const `[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` & NewValue)` <a id="structFRHAPI__Session_1a635b6bf91bf418bf766f49dba6d9acb9"></a>

Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true.

#### `public inline void `[`SetMatchmakingResults`](#structFRHAPI__Session_1aa7f0fda2b127b9e63f055ca98d16a864)`(`[`FRHAPI_MatchmakingResults`](RHAPI_MatchmakingResults.md#structFRHAPI__MatchmakingResults)` && NewValue)` <a id="structFRHAPI__Session_1aa7f0fda2b127b9e63f055ca98d16a864"></a>

Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmakingResults`](#structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f)`()` <a id="structFRHAPI__Session_1ac56e77cb643a1db6d75323189964d54f"></a>

Clears the value of MatchmakingResults_Optional and sets MatchmakingResults_IsSet to false.

#### `public inline bool `[`IsMatchmakingResultsSet`](#structFRHAPI__Session_1a43f22efd9ad0f338a498062ab709e4bd)`() const` <a id="structFRHAPI__Session_1a43f22efd9ad0f338a498062ab709e4bd"></a>

Checks whether MatchmakingResults_Optional has been set.

#### `public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a7e72ca984908081c10f44bcec1763cc3)`()` <a id="structFRHAPI__Session_1a7e72ca984908081c10f44bcec1763cc3"></a>

Gets the value of Matchmaking_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a3b04668ebd59b9dd384b1f25eb06d968)`() const` <a id="structFRHAPI__Session_1a3b04668ebd59b9dd384b1f25eb06d968"></a>

Gets the value of Matchmaking_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a545e19b64f506b5f3793e85941240d86)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a545e19b64f506b5f3793e85941240d86"></a>

Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchmaking`](#structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & OutValue) const` <a id="structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480"></a>

Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1ad0c2005853a2d3d3a3158cfff70eae22)`()` <a id="structFRHAPI__Session_1ad0c2005853a2d3d3a3158cfff70eae22"></a>

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1aa65a144963e796b6ca2fcfb5f1d77dff)`() const` <a id="structFRHAPI__Session_1aa65a144963e796b6ca2fcfb5f1d77dff"></a>

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a74a7bfcb11e52d3ba211ddc53b5e435c)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & NewValue)` <a id="structFRHAPI__Session_1a74a7bfcb11e52d3ba211ddc53b5e435c"></a>

Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.

#### `public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a03b7a8df7dde6a21220d9349a8d3941e)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` && NewValue)` <a id="structFRHAPI__Session_1a03b7a8df7dde6a21220d9349a8d3941e"></a>

Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchmaking`](#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)`()` <a id="structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596"></a>

Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.

#### `public inline bool `[`IsMatchmakingSet`](#structFRHAPI__Session_1a58cfdd5fdc5e8a40c58dc3629b9e90c9)`() const` <a id="structFRHAPI__Session_1a58cfdd5fdc5e8a40c58dc3629b9e90c9"></a>

Checks whether Matchmaking_Optional has been set.

#### `public inline `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a15f72525350f452e25fd61d66fd7a756)`()` <a id="structFRHAPI__Session_1a15f72525350f452e25fd61d66fd7a756"></a>

Gets the value of Backfill_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1a21b593a805dc945474b4ec9e30e63fdf)`() const` <a id="structFRHAPI__Session_1a21b593a805dc945474b4ec9e30e63fdf"></a>

Gets the value of Backfill_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & `[`GetBackfill`](#structFRHAPI__Session_1ae16601ab6c078bc61d792e27287dde2a)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1ae16601ab6c078bc61d792e27287dde2a"></a>

Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBackfill`](#structFRHAPI__Session_1ab84409512d3ec81b4d5da14b3795978a)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & OutValue) const` <a id="structFRHAPI__Session_1ab84409512d3ec81b4d5da14b3795978a"></a>

Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1aa468234b83a765da84939b62d4099e18)`()` <a id="structFRHAPI__Session_1aa468234b83a765da84939b62d4099e18"></a>

Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` * `[`GetBackfillOrNull`](#structFRHAPI__Session_1adb356a68ec0f1a96a374d60929017b1c)`() const` <a id="structFRHAPI__Session_1adb356a68ec0f1a96a374d60929017b1c"></a>

Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBackfill`](#structFRHAPI__Session_1a038f9574b0275fb794e7e80383f9356d)`(const `[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` & NewValue)` <a id="structFRHAPI__Session_1a038f9574b0275fb794e7e80383f9356d"></a>

Sets the value of Backfill_Optional and also sets Backfill_IsSet to true.

#### `public inline void `[`SetBackfill`](#structFRHAPI__Session_1af758ed8aebd406126611aa74a9c31dd0)`(`[`FRHAPI_BackfillInfo`](RHAPI_BackfillInfo.md#structFRHAPI__BackfillInfo)` && NewValue)` <a id="structFRHAPI__Session_1af758ed8aebd406126611aa74a9c31dd0"></a>

Sets the value of Backfill_Optional and also sets Backfill_IsSet to true using move semantics.

#### `public inline void `[`ClearBackfill`](#structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90)`()` <a id="structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90"></a>

Clears the value of Backfill_Optional and sets Backfill_IsSet to false.

#### `public inline bool `[`IsBackfillSet`](#structFRHAPI__Session_1a6b745ad182f5525eb24a026b9d3e9a08)`() const` <a id="structFRHAPI__Session_1a6b745ad182f5525eb24a026b9d3e9a08"></a>

Checks whether Backfill_Optional has been set.

#### `public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a2cfa5643b7ba91b7efa751adba2c6fd2)`()` <a id="structFRHAPI__Session_1a2cfa5643b7ba91b7efa751adba2c6fd2"></a>

Gets the value of Browser_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1afddcc33cd67e5b5d41a30e135136c1ed)`() const` <a id="structFRHAPI__Session_1afddcc33cd67e5b5d41a30e135136c1ed"></a>

Gets the value of Browser_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a1cce194385a9388b08dbd1be9fdf61cf)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a1cce194385a9388b08dbd1be9fdf61cf"></a>

Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBrowser`](#structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & OutValue) const` <a id="structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d"></a>

Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a5ca76953f5b54edcd38534e3063f5021)`()` <a id="structFRHAPI__Session_1a5ca76953f5b54edcd38534e3063f5021"></a>

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a88606729e6afe871b10edceddd76ea7f)`() const` <a id="structFRHAPI__Session_1a88606729e6afe871b10edceddd76ea7f"></a>

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBrowser`](#structFRHAPI__Session_1a925e75ecf9752a1ab2cce20935f381fe)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & NewValue)` <a id="structFRHAPI__Session_1a925e75ecf9752a1ab2cce20935f381fe"></a>

Sets the value of Browser_Optional and also sets Browser_IsSet to true.

#### `public inline void `[`SetBrowser`](#structFRHAPI__Session_1a66af0bf2222a7f7e79a1896df910b98d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` && NewValue)` <a id="structFRHAPI__Session_1a66af0bf2222a7f7e79a1896df910b98d"></a>

Sets the value of Browser_Optional and also sets Browser_IsSet to true using move semantics.

#### `public inline void `[`ClearBrowser`](#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)`()` <a id="structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95"></a>

Clears the value of Browser_Optional and sets Browser_IsSet to false.

#### `public inline bool `[`IsBrowserSet`](#structFRHAPI__Session_1a5379fc90707903bb775880ddc146cdec)`() const` <a id="structFRHAPI__Session_1a5379fc90707903bb775880ddc146cdec"></a>

Checks whether Browser_Optional has been set.

#### `public inline bool & `[`GetJoinable`](#structFRHAPI__Session_1a8003484ab6879e9688a03c7491409e1c)`()` <a id="structFRHAPI__Session_1a8003484ab6879e9688a03c7491409e1c"></a>

Gets the value of Joinable.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__Session_1ae8ea9ac7155aec5ede4e0db19be45819)`() const` <a id="structFRHAPI__Session_1ae8ea9ac7155aec5ede4e0db19be45819"></a>

Gets the value of Joinable.

#### `public inline void `[`SetJoinable`](#structFRHAPI__Session_1af324f39218e4174f4197700e6b116798)`(const bool & NewValue)` <a id="structFRHAPI__Session_1af324f39218e4174f4197700e6b116798"></a>

Sets the value of Joinable.

#### `public inline void `[`SetJoinable`](#structFRHAPI__Session_1a35182afcd9b38c0e95b7cc1006ccbfe3)`(bool && NewValue)` <a id="structFRHAPI__Session_1a35182afcd9b38c0e95b7cc1006ccbfe3"></a>

Sets the value of Joinable using move semantics.

#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913)`() const` <a id="structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913"></a>

Returns true if Joinable matches the default value.

#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711)`()` <a id="structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711"></a>

Sets the value of Joinable to its default

#### `public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1ab7008a5afdc6a77a9b21d9f0a687866e)`()` <a id="structFRHAPI__Session_1ab7008a5afdc6a77a9b21d9f0a687866e"></a>

Gets the value of Teams.

#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1ad7cdb19d35e96ccfdf95561febc18a60)`() const` <a id="structFRHAPI__Session_1ad7cdb19d35e96ccfdf95561febc18a60"></a>

Gets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__Session_1a8cd13fe6b5b0a94a42b93d5183adc3c2)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` <a id="structFRHAPI__Session_1a8cd13fe6b5b0a94a42b93d5183adc3c2"></a>

Sets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__Session_1a303098da74e4dc89754560502417f1be)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` <a id="structFRHAPI__Session_1a303098da74e4dc89754560502417f1be"></a>

Sets the value of Teams using move semantics.

#### `public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a8c178d130dfbf6984477186bba10bdb6)`()` <a id="structFRHAPI__Session_1a8c178d130dfbf6984477186bba10bdb6"></a>

Gets the value of PlatformSession_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a50bf670c4cad94a91c9dcef23a7826a2)`() const` <a id="structFRHAPI__Session_1a50bf670c4cad94a91c9dcef23a7826a2"></a>

Gets the value of PlatformSession_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a4d80598db285868a62904cc7a4087fd0)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & DefaultValue) const` <a id="structFRHAPI__Session_1a4d80598db285868a62904cc7a4087fd0"></a>

Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformSession`](#structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & OutValue) const` <a id="structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39"></a>

Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a399665b2b0c76f170f8997913152b613)`()` <a id="structFRHAPI__Session_1a399665b2b0c76f170f8997913152b613"></a>

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a18f938d6a17d7f32dc52a327e55b98c0)`() const` <a id="structFRHAPI__Session_1a18f938d6a17d7f32dc52a327e55b98c0"></a>

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1a5c1fdcdc359d718c6a68c2ba7ea95ce6)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & NewValue)` <a id="structFRHAPI__Session_1a5c1fdcdc359d718c6a68c2ba7ea95ce6"></a>

Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.

#### `public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1aaae614b29615924c25581b5d274955ce)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > && NewValue)` <a id="structFRHAPI__Session_1aaae614b29615924c25581b5d274955ce"></a>

Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformSession`](#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)`()` <a id="structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59"></a>

Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.

#### `public inline bool `[`IsPlatformSessionSet`](#structFRHAPI__Session_1a80aa992baaca370a4a8fd9737a71de9b)`() const` <a id="structFRHAPI__Session_1a80aa992baaca370a4a8fd9737a71de9b"></a>

Checks whether PlatformSession_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1abed072171f304dcb8b90486b80943efa)`()` <a id="structFRHAPI__Session_1abed072171f304dcb8b90486b80943efa"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ad27ca08587eedfe4b8e9ec79233cc0c4)`() const` <a id="structFRHAPI__Session_1ad27ca08587eedfe4b8e9ec79233cc0c4"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1a7b13eb31cdc9b0badc6cdff6f96b9f5b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Session_1a7b13eb31cdc9b0badc6cdff6f96b9f5b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1ac249be887fd6245e401a68aa7d511bd9)`()` <a id="structFRHAPI__Session_1ac249be887fd6245e401a68aa7d511bd9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a3fca4472cba176ea8c34aa97de65895e)`() const` <a id="structFRHAPI__Session_1a3fca4472cba176ea8c34aa97de65895e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Session_1aa1bccba93d52da6478261ed595399418)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Session_1aa1bccba93d52da6478261ed595399418"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Session_1a623f471b9b40a51ac72bc22f1e66b61a)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Session_1a623f471b9b40a51ac72bc22f1e66b61a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)`()` <a id="structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__Session_1a99b2a3ce4de427ff7603cd95fa670711)`() const` <a id="structFRHAPI__Session_1a99b2a3ce4de427ff7603cd95fa670711"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a4a913a2628bb2e473ac8f41c97628613)`()` <a id="structFRHAPI__Session_1a4a913a2628bb2e473ac8f41c97628613"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a3d258ecf804b00ae3b7d44d2eafdd08d)`() const` <a id="structFRHAPI__Session_1a3d258ecf804b00ae3b7d44d2eafdd08d"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__Session_1a27ed539a1326c9fef60ed1da09386631)`(const FDateTime & NewValue)` <a id="structFRHAPI__Session_1a27ed539a1326c9fef60ed1da09386631"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__Session_1a5c2e48f140d49f32e48def5ade3dd602)`(FDateTime && NewValue)` <a id="structFRHAPI__Session_1a5c2e48f140d49f32e48def5ade3dd602"></a>

Sets the value of Created using move semantics.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__Session_1a5823c390317676a992c6de596b07726e)`()` <a id="structFRHAPI__Session_1a5823c390317676a992c6de596b07726e"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1afc68b80e9f4e79b40704a20ad62946a3)`() const` <a id="structFRHAPI__Session_1afc68b80e9f4e79b40704a20ad62946a3"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1acdeb08926396cda4a845f46f2686d30b)`(const FString & DefaultValue) const` <a id="structFRHAPI__Session_1acdeb08926396cda4a845f46f2686d30b"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3)`(FString & OutValue) const` <a id="structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1ae11e272a5b85d6af7d79b67b5ee09989)`()` <a id="structFRHAPI__Session_1ae11e272a5b85d6af7d79b67b5ee09989"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a80e86b3b03b44086aff3e9d090fe1267)`() const` <a id="structFRHAPI__Session_1a80e86b3b03b44086aff3e9d090fe1267"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__Session_1afa4f2b141393c1ac37cc8e78f67ff853)`(const FString & NewValue)` <a id="structFRHAPI__Session_1afa4f2b141393c1ac37cc8e78f67ff853"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__Session_1a6804d3ef584c6f5414a4eaf272daac29)`(FString && NewValue)` <a id="structFRHAPI__Session_1a6804d3ef584c6f5414a4eaf272daac29"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)`()` <a id="structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__Session_1a5a494ca05e696bf704916661f7e1be73)`() const` <a id="structFRHAPI__Session_1a5a494ca05e696bf704916661f7e1be73"></a>

Checks whether RegionId_Optional has been set.

#### `public inline bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1ae5447a41db818e93919c1bb590b8ba93)`()` <a id="structFRHAPI__Session_1ae5447a41db818e93919c1bb590b8ba93"></a>

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a2491fbf7efba2d8eecd8aa3712a47048)`() const` <a id="structFRHAPI__Session_1a2491fbf7efba2d8eecd8aa3712a47048"></a>

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a93939c7bd58a685b2c86a7a7ef284c8c)`(const bool & DefaultValue) const` <a id="structFRHAPI__Session_1a93939c7bd58a685b2c86a7a7ef284c8c"></a>

Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2)`(bool & OutValue) const` <a id="structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2"></a>

Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a1ee4a02d8cef77499ea1bafe725a8a52)`()` <a id="structFRHAPI__Session_1a1ee4a02d8cef77499ea1bafe725a8a52"></a>

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a6c95acf174c2fc5e4d6c4f59febd8ca6)`() const` <a id="structFRHAPI__Session_1a6c95acf174c2fc5e4d6c4f59febd8ca6"></a>

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

