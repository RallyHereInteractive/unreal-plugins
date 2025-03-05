---
title: RHAPI_LeaderboardConfig
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LeaderboardConfig`](#structFRHAPI__LeaderboardConfig) | 

## struct `FRHAPI_LeaderboardConfig` <a id="structFRHAPI__LeaderboardConfig"></a>

```
struct FRHAPI_LeaderboardConfig
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`LeaderboardId`](#structFRHAPI__LeaderboardConfig_1ac9f4ff8f6388865a15df09e09f35187a) | Unique ID for this leaderboard.
`public ERHAPI_PlayerListType `[`PlayerList`](#structFRHAPI__LeaderboardConfig_1ac9101eb6fe37ea0933d3a33e3119aa4c) | 
`public int32 `[`MaxSize`](#structFRHAPI__LeaderboardConfig_1a08c2c158e2007e057bb28f1f4a2ed1fb) | The maximum size this leaderboard can reach.
`public ERHAPI_LeaderboardSortOrder `[`SortOrder`](#structFRHAPI__LeaderboardConfig_1a8b52cdbc2fe2ecee39d537d37de76677) | 
`public ERHAPI_LeaderboardSource `[`Source`](#structFRHAPI__LeaderboardConfig_1a6b2d6765ef9ff40f1e31710dfe2f5bb2) | 
`public FString `[`SourceId`](#structFRHAPI__LeaderboardConfig_1adfabfeda20899be9bd348a3ca97111ad) | Unique Item or Rank ID for the data source of this leaderboard.
`public bool `[`RemoveRestricted_Optional`](#structFRHAPI__LeaderboardConfig_1abdfdd128459aed74ec354e23b77aa3af) | Whether or not restricted accounts (eg banned) should be removed from this leaderboard.
`public bool `[`RemoveRestricted_IsSet`](#structFRHAPI__LeaderboardConfig_1a4fbb93fd82feb30a18c069ae025584cb) | true if RemoveRestricted_Optional has been set to a value
`public int32 `[`RequiredRecentLoginDays_Optional`](#structFRHAPI__LeaderboardConfig_1a514f32a7006a490281fcf9f9f69428f1) | 
`public bool `[`RequiredRecentLoginDays_IsSet`](#structFRHAPI__LeaderboardConfig_1a89400848015886abd3e0675ad125aee2) | true if RequiredRecentLoginDays_Optional has been set to a value
`public bool `[`RequiredRecentLoginDays_IsNull`](#structFRHAPI__LeaderboardConfig_1a629462f4a4a5992ef8767e05719a071c) | true if RequiredRecentLoginDays_Optional has been explicitly set to null
`public int32 `[`UpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1ace40f5c2c6eaf9f92fce15b8c064c9c9) | How frequently the data for this leaderboard should be requested.
`public bool `[`ExposeStat_Optional`](#structFRHAPI__LeaderboardConfig_1a0d9fa5bd9df13fa2c715eaf68e33e3eb) | Whether or not the value of the stat that determines this leaderboard should be exposed when the leaderboard is queried.
`public bool `[`ExposeStat_IsSet`](#structFRHAPI__LeaderboardConfig_1aeed11f21198d97139e887adfcb70aaa8) | true if ExposeStat_Optional has been set to a value
`public bool `[`ExposePlayers_Optional`](#structFRHAPI__LeaderboardConfig_1a15aa440ff09f70ffd0c9a5faad99d3b7) | Whether or not individual player stats should be saved in the leaderboard, or if only the metadata can be returned.
`public bool `[`ExposePlayers_IsSet`](#structFRHAPI__LeaderboardConfig_1a8851ba3bdcb548837dff00342c77039d) | true if ExposePlayers_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardConfig_1af7bfdcdebbc8ac86f2eb0fc03ef5d7a5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardConfig_1aef7cdabaca7b810de63c55dc0b948e96)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ac2ac7eb5c9cad53a850eb7096393723f)`()` | Gets the value of LeaderboardId.
`public inline const FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1af4ac931597ad4cf31f2e51ab05b65a90)`() const` | Gets the value of LeaderboardId.
`public inline void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ab282e534bc2a12aa8f94752967fb3256)`(const FString & NewValue)` | Sets the value of LeaderboardId.
`public inline void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ad6b72ff24e5dcaac745aed38fdd397bf)`(FString && NewValue)` | Sets the value of LeaderboardId using move semantics.
`public inline ERHAPI_PlayerListType & `[`GetPlayerList`](#structFRHAPI__LeaderboardConfig_1a28921b4be86f4a981b2266165454280e)`()` | Gets the value of PlayerList.
`public inline const ERHAPI_PlayerListType & `[`GetPlayerList`](#structFRHAPI__LeaderboardConfig_1a62bacb6c91abb0769e2fed3b9bc125e8)`() const` | Gets the value of PlayerList.
`public inline void `[`SetPlayerList`](#structFRHAPI__LeaderboardConfig_1a28fcda37e17fd728a34ad8ffe33ed50b)`(const ERHAPI_PlayerListType & NewValue)` | Sets the value of PlayerList.
`public inline void `[`SetPlayerList`](#structFRHAPI__LeaderboardConfig_1ad94244fb65b88e8451c5163ca105166d)`(ERHAPI_PlayerListType && NewValue)` | Sets the value of PlayerList using move semantics.
`public inline int32 & `[`GetMaxSize`](#structFRHAPI__LeaderboardConfig_1a54e5a0221b100445f9088c28909cc20b)`()` | Gets the value of MaxSize.
`public inline const int32 & `[`GetMaxSize`](#structFRHAPI__LeaderboardConfig_1ad5b4d9f230a7565d634b92f65d4384aa)`() const` | Gets the value of MaxSize.
`public inline void `[`SetMaxSize`](#structFRHAPI__LeaderboardConfig_1ada522264e5e9b133a1812b6af857b638)`(const int32 & NewValue)` | Sets the value of MaxSize.
`public inline void `[`SetMaxSize`](#structFRHAPI__LeaderboardConfig_1a421f1aa2e293d6e44a890ffac5574c09)`(int32 && NewValue)` | Sets the value of MaxSize using move semantics.
`public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__LeaderboardConfig_1a1ff0bc4c20338c1fb9d8ae0eb3bc3ec6)`() const` | Returns true if MaxSize matches the default value.
`public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__LeaderboardConfig_1a641d87fb9c5a6a2d4ae4a03a09b1fbc6)`()` | Sets the value of MaxSize to its default
`public inline ERHAPI_LeaderboardSortOrder & `[`GetSortOrder`](#structFRHAPI__LeaderboardConfig_1a20cbfa226fe9e1943d19384e83a23cae)`()` | Gets the value of SortOrder.
`public inline const ERHAPI_LeaderboardSortOrder & `[`GetSortOrder`](#structFRHAPI__LeaderboardConfig_1a56400970ddf662df749dc2ffffa40850)`() const` | Gets the value of SortOrder.
`public inline void `[`SetSortOrder`](#structFRHAPI__LeaderboardConfig_1a970a6527406140c2479771495a134cee)`(const ERHAPI_LeaderboardSortOrder & NewValue)` | Sets the value of SortOrder.
`public inline void `[`SetSortOrder`](#structFRHAPI__LeaderboardConfig_1abdba4cca96529983eaeff83ea83939d9)`(ERHAPI_LeaderboardSortOrder && NewValue)` | Sets the value of SortOrder using move semantics.
`public inline ERHAPI_LeaderboardSource & `[`GetSource`](#structFRHAPI__LeaderboardConfig_1a2381d6259651d3b7d56bf4cfe86409e5)`()` | Gets the value of Source.
`public inline const ERHAPI_LeaderboardSource & `[`GetSource`](#structFRHAPI__LeaderboardConfig_1aafa1ad9b6d980a552f327c646229492f)`() const` | Gets the value of Source.
`public inline void `[`SetSource`](#structFRHAPI__LeaderboardConfig_1af9972251484ed41e8c08e1ef5eed5c94)`(const ERHAPI_LeaderboardSource & NewValue)` | Sets the value of Source.
`public inline void `[`SetSource`](#structFRHAPI__LeaderboardConfig_1a06a20031cd22c7e337e1ce2e15df6fd8)`(ERHAPI_LeaderboardSource && NewValue)` | Sets the value of Source using move semantics.
`public inline FString & `[`GetSourceId`](#structFRHAPI__LeaderboardConfig_1ac53a98a3ebee3a8d53e23c9ff2cffccb)`()` | Gets the value of SourceId.
`public inline const FString & `[`GetSourceId`](#structFRHAPI__LeaderboardConfig_1a6855bb0745960cfe9e6e6f70a647042b)`() const` | Gets the value of SourceId.
`public inline void `[`SetSourceId`](#structFRHAPI__LeaderboardConfig_1a7519de4bc11220b694ede7e2bb394910)`(const FString & NewValue)` | Sets the value of SourceId.
`public inline void `[`SetSourceId`](#structFRHAPI__LeaderboardConfig_1ac81736ec65eb3459a7393051d52c3ee1)`(FString && NewValue)` | Sets the value of SourceId using move semantics.
`public inline bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a3e0633df9016b303ed78433e375c8373)`()` | Gets the value of RemoveRestricted_Optional, regardless of it having been set.
`public inline const bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a07004af364daae8ae65df73912c0a57c)`() const` | Gets the value of RemoveRestricted_Optional, regardless of it having been set.
`public inline const bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a0e5638e6f20860e6c5f0a762b3496421)`(const bool & DefaultValue) const` | Gets the value of RemoveRestricted_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a37f402ceae348efb5419a66e6c7881a8)`(bool & OutValue) const` | Fills OutValue with the value of RemoveRestricted_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetRemoveRestrictedOrNull`](#structFRHAPI__LeaderboardConfig_1abaef284bc137730978eefc897a602ee6)`()` | Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetRemoveRestrictedOrNull`](#structFRHAPI__LeaderboardConfig_1a0595e36252f6579845985fc0c6585941)`() const` | Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a3c1358ae4d7c7f3cda62667b4601ddc9)`(const bool & NewValue)` | Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true.
`public inline void `[`SetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a0f348170986c187badd2ef758a2039d9)`(bool && NewValue)` | Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true using move semantics.
`public inline void `[`ClearRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a401bfdb1f7902ffb5e7623f8813434b1)`()` | Clears the value of RemoveRestricted_Optional and sets RemoveRestricted_IsSet to false.
`public inline bool `[`IsRemoveRestrictedSet`](#structFRHAPI__LeaderboardConfig_1a34ca4faeb424a91a802f877c5b629b4f)`() const` | Checks whether RemoveRestricted_Optional has been set.
`public inline bool `[`IsRemoveRestrictedDefaultValue`](#structFRHAPI__LeaderboardConfig_1a87f38f4b65e8e2661dcd6707a79a3d0e)`() const` | Returns true if RemoveRestricted_Optional is set and matches the default value.
`public inline void `[`SetRemoveRestrictedToDefault`](#structFRHAPI__LeaderboardConfig_1adc92166f52264e81391169fceb475cb1)`()` | Sets the value of RemoveRestricted_Optional to its default and also sets RemoveRestricted_IsSet to true.
`public inline int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a3c2a3c7550851ab214155a295bf6b246)`()` | Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1ae3afd0fe912a2d1fb7915ba47dc350f6)`() const` | Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9db88c677b33d27fa27cb9d963b91dbd)`(const int32 & DefaultValue) const` | Gets the value of RequiredRecentLoginDays_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9717e1f5c0acfe6f20f0cc0bd6a6bcae)`(int32 & OutValue) const` | Fills OutValue with the value of RequiredRecentLoginDays_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRequiredRecentLoginDaysOrNull`](#structFRHAPI__LeaderboardConfig_1a88a6e6bc7ad8a8081475bb6200744f78)`()` | Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRequiredRecentLoginDaysOrNull`](#structFRHAPI__LeaderboardConfig_1a7c89cca08d59589e141f4e49fc2715aa)`() const` | Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1aaeebc4a7a35f61cf3ec7fc2f8228de27)`(const int32 & NewValue)` | Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true.
`public inline void `[`SetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a3cc82a4bd8550c643057babbf0326b35)`(int32 && NewValue)` | Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true using move semantics.
`public inline void `[`ClearRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9152fd07f06d89e784231c5889e06390)`()` | Clears the value of RequiredRecentLoginDays_Optional and sets RequiredRecentLoginDays_IsSet to false.
`public inline bool `[`IsRequiredRecentLoginDaysSet`](#structFRHAPI__LeaderboardConfig_1a70855fc251bce0e48fc0badc60a8f6c9)`() const` | Checks whether RequiredRecentLoginDays_Optional has been set.
`public inline bool `[`IsRequiredRecentLoginDaysDefaultValue`](#structFRHAPI__LeaderboardConfig_1ac891e6d2edc8fb536db611bbe1293118)`() const` | Returns true if RequiredRecentLoginDays_Optional is set and matches the default value.
`public inline void `[`SetRequiredRecentLoginDaysToDefault`](#structFRHAPI__LeaderboardConfig_1ac1585dd4c99088ea6959f6dfc310b4c6)`()` | Sets the value of RequiredRecentLoginDays_Optional to its default and also sets RequiredRecentLoginDays_IsSet to true.
`public inline void `[`SetRequiredRecentLoginDaysToNull`](#structFRHAPI__LeaderboardConfig_1aa86a3a4ecfbde99a5e174722969d3112)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsRequiredRecentLoginDaysNull`](#structFRHAPI__LeaderboardConfig_1aaeb3b3843b1c4cefc8361d3ba3690996)`() const` | Checks whether RequiredRecentLoginDays_Optional is set to null.
`public inline int32 & `[`GetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1af9589325e6d82dbcd57847fccd392412)`()` | Gets the value of UpdateFrequencySeconds.
`public inline const int32 & `[`GetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a24666acbf47da3c7cd5b77b3d699b368)`() const` | Gets the value of UpdateFrequencySeconds.
`public inline void `[`SetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1ac202af3f767a6ce33e66537565bdb8b2)`(const int32 & NewValue)` | Sets the value of UpdateFrequencySeconds.
`public inline void `[`SetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a3de460c42ccdbad26577e4d2d098d4ae)`(int32 && NewValue)` | Sets the value of UpdateFrequencySeconds using move semantics.
`public inline bool `[`IsUpdateFrequencySecondsDefaultValue`](#structFRHAPI__LeaderboardConfig_1a50467e0454074b4bbd5028b328d58c5a)`() const` | Returns true if UpdateFrequencySeconds matches the default value.
`public inline void `[`SetUpdateFrequencySecondsToDefault`](#structFRHAPI__LeaderboardConfig_1a7a6771659637bffc93f5fa4f366ace3b)`()` | Sets the value of UpdateFrequencySeconds to its default
`public inline bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a433988dfb3f155325552751cf0b38e9a)`()` | Gets the value of ExposeStat_Optional, regardless of it having been set.
`public inline const bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a2ebcfe37be49637bffc70799b73e301d)`() const` | Gets the value of ExposeStat_Optional, regardless of it having been set.
`public inline const bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1adb4c7120674799ddac1d2124eda2fa8b)`(const bool & DefaultValue) const` | Gets the value of ExposeStat_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a47f99f11a21f9fe8cfc82c5af60b4d97)`(bool & OutValue) const` | Fills OutValue with the value of ExposeStat_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetExposeStatOrNull`](#structFRHAPI__LeaderboardConfig_1aa0b1362b8cf7aff6386d4a08bbd7a595)`()` | Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetExposeStatOrNull`](#structFRHAPI__LeaderboardConfig_1a20789a20c3acea04368240d225eed508)`() const` | Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExposeStat`](#structFRHAPI__LeaderboardConfig_1a7c2680ea1551104d3dfc621306a4b07e)`(const bool & NewValue)` | Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true.
`public inline void `[`SetExposeStat`](#structFRHAPI__LeaderboardConfig_1aa17bc70e628a9091c99040fd1c54bdaa)`(bool && NewValue)` | Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true using move semantics.
`public inline void `[`ClearExposeStat`](#structFRHAPI__LeaderboardConfig_1a42fa6946647755973b35d4f30a9c2883)`()` | Clears the value of ExposeStat_Optional and sets ExposeStat_IsSet to false.
`public inline bool `[`IsExposeStatSet`](#structFRHAPI__LeaderboardConfig_1a827019e584bb3da43b376c95175c270b)`() const` | Checks whether ExposeStat_Optional has been set.
`public inline bool `[`IsExposeStatDefaultValue`](#structFRHAPI__LeaderboardConfig_1ae03986948c9cbaa771fe9e5c0ca3adf1)`() const` | Returns true if ExposeStat_Optional is set and matches the default value.
`public inline void `[`SetExposeStatToDefault`](#structFRHAPI__LeaderboardConfig_1a975948e45d0ea5dffc687de3f62f1014)`()` | Sets the value of ExposeStat_Optional to its default and also sets ExposeStat_IsSet to true.
`public inline bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1afcc99ffb59e13e009aa2a0879d1a1a29)`()` | Gets the value of ExposePlayers_Optional, regardless of it having been set.
`public inline const bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1afc495bc5bff1bf745f35fbdd09f5e6b0)`() const` | Gets the value of ExposePlayers_Optional, regardless of it having been set.
`public inline const bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1aea5f101a9d7fb25e129a5325ce45d015)`(const bool & DefaultValue) const` | Gets the value of ExposePlayers_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a9155825091f516419da761ba6a4e2ba7)`(bool & OutValue) const` | Fills OutValue with the value of ExposePlayers_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetExposePlayersOrNull`](#structFRHAPI__LeaderboardConfig_1aa131295095cf6d6c634295431bd21891)`()` | Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetExposePlayersOrNull`](#structFRHAPI__LeaderboardConfig_1a4713292c77a978ee02273f92d32290d0)`() const` | Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExposePlayers`](#structFRHAPI__LeaderboardConfig_1ade2dbf97130575afd309f0f0de3e824a)`(const bool & NewValue)` | Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true.
`public inline void `[`SetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a8eb18e98607918538d5d353f458f1e6d)`(bool && NewValue)` | Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true using move semantics.
`public inline void `[`ClearExposePlayers`](#structFRHAPI__LeaderboardConfig_1a4c603d8f96dc818689409bb15154e46c)`()` | Clears the value of ExposePlayers_Optional and sets ExposePlayers_IsSet to false.
`public inline bool `[`IsExposePlayersSet`](#structFRHAPI__LeaderboardConfig_1a0c96e41b60548ba6409d1f7a4adef4a9)`() const` | Checks whether ExposePlayers_Optional has been set.
`public inline bool `[`IsExposePlayersDefaultValue`](#structFRHAPI__LeaderboardConfig_1a77d8563cad4aad5d2276246b7935b237)`() const` | Returns true if ExposePlayers_Optional is set and matches the default value.
`public inline void `[`SetExposePlayersToDefault`](#structFRHAPI__LeaderboardConfig_1aec9fbe35b7bc5582694a982c06fa3d27)`()` | Sets the value of ExposePlayers_Optional to its default and also sets ExposePlayers_IsSet to true.

### Members

#### `public FString `[`LeaderboardId`](#structFRHAPI__LeaderboardConfig_1ac9f4ff8f6388865a15df09e09f35187a) <a id="structFRHAPI__LeaderboardConfig_1ac9f4ff8f6388865a15df09e09f35187a"></a>

Unique ID for this leaderboard.

#### `public ERHAPI_PlayerListType `[`PlayerList`](#structFRHAPI__LeaderboardConfig_1ac9101eb6fe37ea0933d3a33e3119aa4c) <a id="structFRHAPI__LeaderboardConfig_1ac9101eb6fe37ea0933d3a33e3119aa4c"></a>

#### `public int32 `[`MaxSize`](#structFRHAPI__LeaderboardConfig_1a08c2c158e2007e057bb28f1f4a2ed1fb) <a id="structFRHAPI__LeaderboardConfig_1a08c2c158e2007e057bb28f1f4a2ed1fb"></a>

The maximum size this leaderboard can reach.

#### `public ERHAPI_LeaderboardSortOrder `[`SortOrder`](#structFRHAPI__LeaderboardConfig_1a8b52cdbc2fe2ecee39d537d37de76677) <a id="structFRHAPI__LeaderboardConfig_1a8b52cdbc2fe2ecee39d537d37de76677"></a>

#### `public ERHAPI_LeaderboardSource `[`Source`](#structFRHAPI__LeaderboardConfig_1a6b2d6765ef9ff40f1e31710dfe2f5bb2) <a id="structFRHAPI__LeaderboardConfig_1a6b2d6765ef9ff40f1e31710dfe2f5bb2"></a>

#### `public FString `[`SourceId`](#structFRHAPI__LeaderboardConfig_1adfabfeda20899be9bd348a3ca97111ad) <a id="structFRHAPI__LeaderboardConfig_1adfabfeda20899be9bd348a3ca97111ad"></a>

Unique Item or Rank ID for the data source of this leaderboard.

#### `public bool `[`RemoveRestricted_Optional`](#structFRHAPI__LeaderboardConfig_1abdfdd128459aed74ec354e23b77aa3af) <a id="structFRHAPI__LeaderboardConfig_1abdfdd128459aed74ec354e23b77aa3af"></a>

Whether or not restricted accounts (eg banned) should be removed from this leaderboard.

#### `public bool `[`RemoveRestricted_IsSet`](#structFRHAPI__LeaderboardConfig_1a4fbb93fd82feb30a18c069ae025584cb) <a id="structFRHAPI__LeaderboardConfig_1a4fbb93fd82feb30a18c069ae025584cb"></a>

true if RemoveRestricted_Optional has been set to a value

#### `public int32 `[`RequiredRecentLoginDays_Optional`](#structFRHAPI__LeaderboardConfig_1a514f32a7006a490281fcf9f9f69428f1) <a id="structFRHAPI__LeaderboardConfig_1a514f32a7006a490281fcf9f9f69428f1"></a>

#### `public bool `[`RequiredRecentLoginDays_IsSet`](#structFRHAPI__LeaderboardConfig_1a89400848015886abd3e0675ad125aee2) <a id="structFRHAPI__LeaderboardConfig_1a89400848015886abd3e0675ad125aee2"></a>

true if RequiredRecentLoginDays_Optional has been set to a value

#### `public bool `[`RequiredRecentLoginDays_IsNull`](#structFRHAPI__LeaderboardConfig_1a629462f4a4a5992ef8767e05719a071c) <a id="structFRHAPI__LeaderboardConfig_1a629462f4a4a5992ef8767e05719a071c"></a>

true if RequiredRecentLoginDays_Optional has been explicitly set to null

#### `public int32 `[`UpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1ace40f5c2c6eaf9f92fce15b8c064c9c9) <a id="structFRHAPI__LeaderboardConfig_1ace40f5c2c6eaf9f92fce15b8c064c9c9"></a>

How frequently the data for this leaderboard should be requested.

#### `public bool `[`ExposeStat_Optional`](#structFRHAPI__LeaderboardConfig_1a0d9fa5bd9df13fa2c715eaf68e33e3eb) <a id="structFRHAPI__LeaderboardConfig_1a0d9fa5bd9df13fa2c715eaf68e33e3eb"></a>

Whether or not the value of the stat that determines this leaderboard should be exposed when the leaderboard is queried.

#### `public bool `[`ExposeStat_IsSet`](#structFRHAPI__LeaderboardConfig_1aeed11f21198d97139e887adfcb70aaa8) <a id="structFRHAPI__LeaderboardConfig_1aeed11f21198d97139e887adfcb70aaa8"></a>

true if ExposeStat_Optional has been set to a value

#### `public bool `[`ExposePlayers_Optional`](#structFRHAPI__LeaderboardConfig_1a15aa440ff09f70ffd0c9a5faad99d3b7) <a id="structFRHAPI__LeaderboardConfig_1a15aa440ff09f70ffd0c9a5faad99d3b7"></a>

Whether or not individual player stats should be saved in the leaderboard, or if only the metadata can be returned.

#### `public bool `[`ExposePlayers_IsSet`](#structFRHAPI__LeaderboardConfig_1a8851ba3bdcb548837dff00342c77039d) <a id="structFRHAPI__LeaderboardConfig_1a8851ba3bdcb548837dff00342c77039d"></a>

true if ExposePlayers_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardConfig_1af7bfdcdebbc8ac86f2eb0fc03ef5d7a5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LeaderboardConfig_1af7bfdcdebbc8ac86f2eb0fc03ef5d7a5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardConfig_1aef7cdabaca7b810de63c55dc0b948e96)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LeaderboardConfig_1aef7cdabaca7b810de63c55dc0b948e96"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ac2ac7eb5c9cad53a850eb7096393723f)`()` <a id="structFRHAPI__LeaderboardConfig_1ac2ac7eb5c9cad53a850eb7096393723f"></a>

Gets the value of LeaderboardId.

#### `public inline const FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1af4ac931597ad4cf31f2e51ab05b65a90)`() const` <a id="structFRHAPI__LeaderboardConfig_1af4ac931597ad4cf31f2e51ab05b65a90"></a>

Gets the value of LeaderboardId.

#### `public inline void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ab282e534bc2a12aa8f94752967fb3256)`(const FString & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ab282e534bc2a12aa8f94752967fb3256"></a>

Sets the value of LeaderboardId.

#### `public inline void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ad6b72ff24e5dcaac745aed38fdd397bf)`(FString && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ad6b72ff24e5dcaac745aed38fdd397bf"></a>

Sets the value of LeaderboardId using move semantics.

#### `public inline ERHAPI_PlayerListType & `[`GetPlayerList`](#structFRHAPI__LeaderboardConfig_1a28921b4be86f4a981b2266165454280e)`()` <a id="structFRHAPI__LeaderboardConfig_1a28921b4be86f4a981b2266165454280e"></a>

Gets the value of PlayerList.

#### `public inline const ERHAPI_PlayerListType & `[`GetPlayerList`](#structFRHAPI__LeaderboardConfig_1a62bacb6c91abb0769e2fed3b9bc125e8)`() const` <a id="structFRHAPI__LeaderboardConfig_1a62bacb6c91abb0769e2fed3b9bc125e8"></a>

Gets the value of PlayerList.

#### `public inline void `[`SetPlayerList`](#structFRHAPI__LeaderboardConfig_1a28fcda37e17fd728a34ad8ffe33ed50b)`(const ERHAPI_PlayerListType & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a28fcda37e17fd728a34ad8ffe33ed50b"></a>

Sets the value of PlayerList.

#### `public inline void `[`SetPlayerList`](#structFRHAPI__LeaderboardConfig_1ad94244fb65b88e8451c5163ca105166d)`(ERHAPI_PlayerListType && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ad94244fb65b88e8451c5163ca105166d"></a>

Sets the value of PlayerList using move semantics.

#### `public inline int32 & `[`GetMaxSize`](#structFRHAPI__LeaderboardConfig_1a54e5a0221b100445f9088c28909cc20b)`()` <a id="structFRHAPI__LeaderboardConfig_1a54e5a0221b100445f9088c28909cc20b"></a>

Gets the value of MaxSize.

#### `public inline const int32 & `[`GetMaxSize`](#structFRHAPI__LeaderboardConfig_1ad5b4d9f230a7565d634b92f65d4384aa)`() const` <a id="structFRHAPI__LeaderboardConfig_1ad5b4d9f230a7565d634b92f65d4384aa"></a>

Gets the value of MaxSize.

#### `public inline void `[`SetMaxSize`](#structFRHAPI__LeaderboardConfig_1ada522264e5e9b133a1812b6af857b638)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ada522264e5e9b133a1812b6af857b638"></a>

Sets the value of MaxSize.

#### `public inline void `[`SetMaxSize`](#structFRHAPI__LeaderboardConfig_1a421f1aa2e293d6e44a890ffac5574c09)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a421f1aa2e293d6e44a890ffac5574c09"></a>

Sets the value of MaxSize using move semantics.

#### `public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__LeaderboardConfig_1a1ff0bc4c20338c1fb9d8ae0eb3bc3ec6)`() const` <a id="structFRHAPI__LeaderboardConfig_1a1ff0bc4c20338c1fb9d8ae0eb3bc3ec6"></a>

Returns true if MaxSize matches the default value.

#### `public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__LeaderboardConfig_1a641d87fb9c5a6a2d4ae4a03a09b1fbc6)`()` <a id="structFRHAPI__LeaderboardConfig_1a641d87fb9c5a6a2d4ae4a03a09b1fbc6"></a>

Sets the value of MaxSize to its default

#### `public inline ERHAPI_LeaderboardSortOrder & `[`GetSortOrder`](#structFRHAPI__LeaderboardConfig_1a20cbfa226fe9e1943d19384e83a23cae)`()` <a id="structFRHAPI__LeaderboardConfig_1a20cbfa226fe9e1943d19384e83a23cae"></a>

Gets the value of SortOrder.

#### `public inline const ERHAPI_LeaderboardSortOrder & `[`GetSortOrder`](#structFRHAPI__LeaderboardConfig_1a56400970ddf662df749dc2ffffa40850)`() const` <a id="structFRHAPI__LeaderboardConfig_1a56400970ddf662df749dc2ffffa40850"></a>

Gets the value of SortOrder.

#### `public inline void `[`SetSortOrder`](#structFRHAPI__LeaderboardConfig_1a970a6527406140c2479771495a134cee)`(const ERHAPI_LeaderboardSortOrder & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a970a6527406140c2479771495a134cee"></a>

Sets the value of SortOrder.

#### `public inline void `[`SetSortOrder`](#structFRHAPI__LeaderboardConfig_1abdba4cca96529983eaeff83ea83939d9)`(ERHAPI_LeaderboardSortOrder && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1abdba4cca96529983eaeff83ea83939d9"></a>

Sets the value of SortOrder using move semantics.

#### `public inline ERHAPI_LeaderboardSource & `[`GetSource`](#structFRHAPI__LeaderboardConfig_1a2381d6259651d3b7d56bf4cfe86409e5)`()` <a id="structFRHAPI__LeaderboardConfig_1a2381d6259651d3b7d56bf4cfe86409e5"></a>

Gets the value of Source.

#### `public inline const ERHAPI_LeaderboardSource & `[`GetSource`](#structFRHAPI__LeaderboardConfig_1aafa1ad9b6d980a552f327c646229492f)`() const` <a id="structFRHAPI__LeaderboardConfig_1aafa1ad9b6d980a552f327c646229492f"></a>

Gets the value of Source.

#### `public inline void `[`SetSource`](#structFRHAPI__LeaderboardConfig_1af9972251484ed41e8c08e1ef5eed5c94)`(const ERHAPI_LeaderboardSource & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1af9972251484ed41e8c08e1ef5eed5c94"></a>

Sets the value of Source.

#### `public inline void `[`SetSource`](#structFRHAPI__LeaderboardConfig_1a06a20031cd22c7e337e1ce2e15df6fd8)`(ERHAPI_LeaderboardSource && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a06a20031cd22c7e337e1ce2e15df6fd8"></a>

Sets the value of Source using move semantics.

#### `public inline FString & `[`GetSourceId`](#structFRHAPI__LeaderboardConfig_1ac53a98a3ebee3a8d53e23c9ff2cffccb)`()` <a id="structFRHAPI__LeaderboardConfig_1ac53a98a3ebee3a8d53e23c9ff2cffccb"></a>

Gets the value of SourceId.

#### `public inline const FString & `[`GetSourceId`](#structFRHAPI__LeaderboardConfig_1a6855bb0745960cfe9e6e6f70a647042b)`() const` <a id="structFRHAPI__LeaderboardConfig_1a6855bb0745960cfe9e6e6f70a647042b"></a>

Gets the value of SourceId.

#### `public inline void `[`SetSourceId`](#structFRHAPI__LeaderboardConfig_1a7519de4bc11220b694ede7e2bb394910)`(const FString & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a7519de4bc11220b694ede7e2bb394910"></a>

Sets the value of SourceId.

#### `public inline void `[`SetSourceId`](#structFRHAPI__LeaderboardConfig_1ac81736ec65eb3459a7393051d52c3ee1)`(FString && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ac81736ec65eb3459a7393051d52c3ee1"></a>

Sets the value of SourceId using move semantics.

#### `public inline bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a3e0633df9016b303ed78433e375c8373)`()` <a id="structFRHAPI__LeaderboardConfig_1a3e0633df9016b303ed78433e375c8373"></a>

Gets the value of RemoveRestricted_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a07004af364daae8ae65df73912c0a57c)`() const` <a id="structFRHAPI__LeaderboardConfig_1a07004af364daae8ae65df73912c0a57c"></a>

Gets the value of RemoveRestricted_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a0e5638e6f20860e6c5f0a762b3496421)`(const bool & DefaultValue) const` <a id="structFRHAPI__LeaderboardConfig_1a0e5638e6f20860e6c5f0a762b3496421"></a>

Gets the value of RemoveRestricted_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a37f402ceae348efb5419a66e6c7881a8)`(bool & OutValue) const` <a id="structFRHAPI__LeaderboardConfig_1a37f402ceae348efb5419a66e6c7881a8"></a>

Fills OutValue with the value of RemoveRestricted_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetRemoveRestrictedOrNull`](#structFRHAPI__LeaderboardConfig_1abaef284bc137730978eefc897a602ee6)`()` <a id="structFRHAPI__LeaderboardConfig_1abaef284bc137730978eefc897a602ee6"></a>

Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetRemoveRestrictedOrNull`](#structFRHAPI__LeaderboardConfig_1a0595e36252f6579845985fc0c6585941)`() const` <a id="structFRHAPI__LeaderboardConfig_1a0595e36252f6579845985fc0c6585941"></a>

Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a3c1358ae4d7c7f3cda62667b4601ddc9)`(const bool & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a3c1358ae4d7c7f3cda62667b4601ddc9"></a>

Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true.

#### `public inline void `[`SetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a0f348170986c187badd2ef758a2039d9)`(bool && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a0f348170986c187badd2ef758a2039d9"></a>

Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true using move semantics.

#### `public inline void `[`ClearRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a401bfdb1f7902ffb5e7623f8813434b1)`()` <a id="structFRHAPI__LeaderboardConfig_1a401bfdb1f7902ffb5e7623f8813434b1"></a>

Clears the value of RemoveRestricted_Optional and sets RemoveRestricted_IsSet to false.

#### `public inline bool `[`IsRemoveRestrictedSet`](#structFRHAPI__LeaderboardConfig_1a34ca4faeb424a91a802f877c5b629b4f)`() const` <a id="structFRHAPI__LeaderboardConfig_1a34ca4faeb424a91a802f877c5b629b4f"></a>

Checks whether RemoveRestricted_Optional has been set.

#### `public inline bool `[`IsRemoveRestrictedDefaultValue`](#structFRHAPI__LeaderboardConfig_1a87f38f4b65e8e2661dcd6707a79a3d0e)`() const` <a id="structFRHAPI__LeaderboardConfig_1a87f38f4b65e8e2661dcd6707a79a3d0e"></a>

Returns true if RemoveRestricted_Optional is set and matches the default value.

#### `public inline void `[`SetRemoveRestrictedToDefault`](#structFRHAPI__LeaderboardConfig_1adc92166f52264e81391169fceb475cb1)`()` <a id="structFRHAPI__LeaderboardConfig_1adc92166f52264e81391169fceb475cb1"></a>

Sets the value of RemoveRestricted_Optional to its default and also sets RemoveRestricted_IsSet to true.

#### `public inline int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a3c2a3c7550851ab214155a295bf6b246)`()` <a id="structFRHAPI__LeaderboardConfig_1a3c2a3c7550851ab214155a295bf6b246"></a>

Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1ae3afd0fe912a2d1fb7915ba47dc350f6)`() const` <a id="structFRHAPI__LeaderboardConfig_1ae3afd0fe912a2d1fb7915ba47dc350f6"></a>

Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9db88c677b33d27fa27cb9d963b91dbd)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LeaderboardConfig_1a9db88c677b33d27fa27cb9d963b91dbd"></a>

Gets the value of RequiredRecentLoginDays_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9717e1f5c0acfe6f20f0cc0bd6a6bcae)`(int32 & OutValue) const` <a id="structFRHAPI__LeaderboardConfig_1a9717e1f5c0acfe6f20f0cc0bd6a6bcae"></a>

Fills OutValue with the value of RequiredRecentLoginDays_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetRequiredRecentLoginDaysOrNull`](#structFRHAPI__LeaderboardConfig_1a88a6e6bc7ad8a8081475bb6200744f78)`()` <a id="structFRHAPI__LeaderboardConfig_1a88a6e6bc7ad8a8081475bb6200744f78"></a>

Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetRequiredRecentLoginDaysOrNull`](#structFRHAPI__LeaderboardConfig_1a7c89cca08d59589e141f4e49fc2715aa)`() const` <a id="structFRHAPI__LeaderboardConfig_1a7c89cca08d59589e141f4e49fc2715aa"></a>

Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1aaeebc4a7a35f61cf3ec7fc2f8228de27)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1aaeebc4a7a35f61cf3ec7fc2f8228de27"></a>

Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true.

#### `public inline void `[`SetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a3cc82a4bd8550c643057babbf0326b35)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a3cc82a4bd8550c643057babbf0326b35"></a>

Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9152fd07f06d89e784231c5889e06390)`()` <a id="structFRHAPI__LeaderboardConfig_1a9152fd07f06d89e784231c5889e06390"></a>

Clears the value of RequiredRecentLoginDays_Optional and sets RequiredRecentLoginDays_IsSet to false.

#### `public inline bool `[`IsRequiredRecentLoginDaysSet`](#structFRHAPI__LeaderboardConfig_1a70855fc251bce0e48fc0badc60a8f6c9)`() const` <a id="structFRHAPI__LeaderboardConfig_1a70855fc251bce0e48fc0badc60a8f6c9"></a>

Checks whether RequiredRecentLoginDays_Optional has been set.

#### `public inline bool `[`IsRequiredRecentLoginDaysDefaultValue`](#structFRHAPI__LeaderboardConfig_1ac891e6d2edc8fb536db611bbe1293118)`() const` <a id="structFRHAPI__LeaderboardConfig_1ac891e6d2edc8fb536db611bbe1293118"></a>

Returns true if RequiredRecentLoginDays_Optional is set and matches the default value.

#### `public inline void `[`SetRequiredRecentLoginDaysToDefault`](#structFRHAPI__LeaderboardConfig_1ac1585dd4c99088ea6959f6dfc310b4c6)`()` <a id="structFRHAPI__LeaderboardConfig_1ac1585dd4c99088ea6959f6dfc310b4c6"></a>

Sets the value of RequiredRecentLoginDays_Optional to its default and also sets RequiredRecentLoginDays_IsSet to true.

#### `public inline void `[`SetRequiredRecentLoginDaysToNull`](#structFRHAPI__LeaderboardConfig_1aa86a3a4ecfbde99a5e174722969d3112)`()` <a id="structFRHAPI__LeaderboardConfig_1aa86a3a4ecfbde99a5e174722969d3112"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsRequiredRecentLoginDaysNull`](#structFRHAPI__LeaderboardConfig_1aaeb3b3843b1c4cefc8361d3ba3690996)`() const` <a id="structFRHAPI__LeaderboardConfig_1aaeb3b3843b1c4cefc8361d3ba3690996"></a>

Checks whether RequiredRecentLoginDays_Optional is set to null.

#### `public inline int32 & `[`GetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1af9589325e6d82dbcd57847fccd392412)`()` <a id="structFRHAPI__LeaderboardConfig_1af9589325e6d82dbcd57847fccd392412"></a>

Gets the value of UpdateFrequencySeconds.

#### `public inline const int32 & `[`GetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a24666acbf47da3c7cd5b77b3d699b368)`() const` <a id="structFRHAPI__LeaderboardConfig_1a24666acbf47da3c7cd5b77b3d699b368"></a>

Gets the value of UpdateFrequencySeconds.

#### `public inline void `[`SetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1ac202af3f767a6ce33e66537565bdb8b2)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ac202af3f767a6ce33e66537565bdb8b2"></a>

Sets the value of UpdateFrequencySeconds.

#### `public inline void `[`SetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a3de460c42ccdbad26577e4d2d098d4ae)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a3de460c42ccdbad26577e4d2d098d4ae"></a>

Sets the value of UpdateFrequencySeconds using move semantics.

#### `public inline bool `[`IsUpdateFrequencySecondsDefaultValue`](#structFRHAPI__LeaderboardConfig_1a50467e0454074b4bbd5028b328d58c5a)`() const` <a id="structFRHAPI__LeaderboardConfig_1a50467e0454074b4bbd5028b328d58c5a"></a>

Returns true if UpdateFrequencySeconds matches the default value.

#### `public inline void `[`SetUpdateFrequencySecondsToDefault`](#structFRHAPI__LeaderboardConfig_1a7a6771659637bffc93f5fa4f366ace3b)`()` <a id="structFRHAPI__LeaderboardConfig_1a7a6771659637bffc93f5fa4f366ace3b"></a>

Sets the value of UpdateFrequencySeconds to its default

#### `public inline bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a433988dfb3f155325552751cf0b38e9a)`()` <a id="structFRHAPI__LeaderboardConfig_1a433988dfb3f155325552751cf0b38e9a"></a>

Gets the value of ExposeStat_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a2ebcfe37be49637bffc70799b73e301d)`() const` <a id="structFRHAPI__LeaderboardConfig_1a2ebcfe37be49637bffc70799b73e301d"></a>

Gets the value of ExposeStat_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1adb4c7120674799ddac1d2124eda2fa8b)`(const bool & DefaultValue) const` <a id="structFRHAPI__LeaderboardConfig_1adb4c7120674799ddac1d2124eda2fa8b"></a>

Gets the value of ExposeStat_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a47f99f11a21f9fe8cfc82c5af60b4d97)`(bool & OutValue) const` <a id="structFRHAPI__LeaderboardConfig_1a47f99f11a21f9fe8cfc82c5af60b4d97"></a>

Fills OutValue with the value of ExposeStat_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetExposeStatOrNull`](#structFRHAPI__LeaderboardConfig_1aa0b1362b8cf7aff6386d4a08bbd7a595)`()` <a id="structFRHAPI__LeaderboardConfig_1aa0b1362b8cf7aff6386d4a08bbd7a595"></a>

Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetExposeStatOrNull`](#structFRHAPI__LeaderboardConfig_1a20789a20c3acea04368240d225eed508)`() const` <a id="structFRHAPI__LeaderboardConfig_1a20789a20c3acea04368240d225eed508"></a>

Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExposeStat`](#structFRHAPI__LeaderboardConfig_1a7c2680ea1551104d3dfc621306a4b07e)`(const bool & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a7c2680ea1551104d3dfc621306a4b07e"></a>

Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true.

#### `public inline void `[`SetExposeStat`](#structFRHAPI__LeaderboardConfig_1aa17bc70e628a9091c99040fd1c54bdaa)`(bool && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1aa17bc70e628a9091c99040fd1c54bdaa"></a>

Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true using move semantics.

#### `public inline void `[`ClearExposeStat`](#structFRHAPI__LeaderboardConfig_1a42fa6946647755973b35d4f30a9c2883)`()` <a id="structFRHAPI__LeaderboardConfig_1a42fa6946647755973b35d4f30a9c2883"></a>

Clears the value of ExposeStat_Optional and sets ExposeStat_IsSet to false.

#### `public inline bool `[`IsExposeStatSet`](#structFRHAPI__LeaderboardConfig_1a827019e584bb3da43b376c95175c270b)`() const` <a id="structFRHAPI__LeaderboardConfig_1a827019e584bb3da43b376c95175c270b"></a>

Checks whether ExposeStat_Optional has been set.

#### `public inline bool `[`IsExposeStatDefaultValue`](#structFRHAPI__LeaderboardConfig_1ae03986948c9cbaa771fe9e5c0ca3adf1)`() const` <a id="structFRHAPI__LeaderboardConfig_1ae03986948c9cbaa771fe9e5c0ca3adf1"></a>

Returns true if ExposeStat_Optional is set and matches the default value.

#### `public inline void `[`SetExposeStatToDefault`](#structFRHAPI__LeaderboardConfig_1a975948e45d0ea5dffc687de3f62f1014)`()` <a id="structFRHAPI__LeaderboardConfig_1a975948e45d0ea5dffc687de3f62f1014"></a>

Sets the value of ExposeStat_Optional to its default and also sets ExposeStat_IsSet to true.

#### `public inline bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1afcc99ffb59e13e009aa2a0879d1a1a29)`()` <a id="structFRHAPI__LeaderboardConfig_1afcc99ffb59e13e009aa2a0879d1a1a29"></a>

Gets the value of ExposePlayers_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1afc495bc5bff1bf745f35fbdd09f5e6b0)`() const` <a id="structFRHAPI__LeaderboardConfig_1afc495bc5bff1bf745f35fbdd09f5e6b0"></a>

Gets the value of ExposePlayers_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1aea5f101a9d7fb25e129a5325ce45d015)`(const bool & DefaultValue) const` <a id="structFRHAPI__LeaderboardConfig_1aea5f101a9d7fb25e129a5325ce45d015"></a>

Gets the value of ExposePlayers_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a9155825091f516419da761ba6a4e2ba7)`(bool & OutValue) const` <a id="structFRHAPI__LeaderboardConfig_1a9155825091f516419da761ba6a4e2ba7"></a>

Fills OutValue with the value of ExposePlayers_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetExposePlayersOrNull`](#structFRHAPI__LeaderboardConfig_1aa131295095cf6d6c634295431bd21891)`()` <a id="structFRHAPI__LeaderboardConfig_1aa131295095cf6d6c634295431bd21891"></a>

Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetExposePlayersOrNull`](#structFRHAPI__LeaderboardConfig_1a4713292c77a978ee02273f92d32290d0)`() const` <a id="structFRHAPI__LeaderboardConfig_1a4713292c77a978ee02273f92d32290d0"></a>

Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExposePlayers`](#structFRHAPI__LeaderboardConfig_1ade2dbf97130575afd309f0f0de3e824a)`(const bool & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ade2dbf97130575afd309f0f0de3e824a"></a>

Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true.

#### `public inline void `[`SetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a8eb18e98607918538d5d353f458f1e6d)`(bool && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a8eb18e98607918538d5d353f458f1e6d"></a>

Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true using move semantics.

#### `public inline void `[`ClearExposePlayers`](#structFRHAPI__LeaderboardConfig_1a4c603d8f96dc818689409bb15154e46c)`()` <a id="structFRHAPI__LeaderboardConfig_1a4c603d8f96dc818689409bb15154e46c"></a>

Clears the value of ExposePlayers_Optional and sets ExposePlayers_IsSet to false.

#### `public inline bool `[`IsExposePlayersSet`](#structFRHAPI__LeaderboardConfig_1a0c96e41b60548ba6409d1f7a4adef4a9)`() const` <a id="structFRHAPI__LeaderboardConfig_1a0c96e41b60548ba6409d1f7a4adef4a9"></a>

Checks whether ExposePlayers_Optional has been set.

#### `public inline bool `[`IsExposePlayersDefaultValue`](#structFRHAPI__LeaderboardConfig_1a77d8563cad4aad5d2276246b7935b237)`() const` <a id="structFRHAPI__LeaderboardConfig_1a77d8563cad4aad5d2276246b7935b237"></a>

Returns true if ExposePlayers_Optional is set and matches the default value.

#### `public inline void `[`SetExposePlayersToDefault`](#structFRHAPI__LeaderboardConfig_1aec9fbe35b7bc5582694a982c06fa3d27)`()` <a id="structFRHAPI__LeaderboardConfig_1aec9fbe35b7bc5582694a982c06fa3d27"></a>

Sets the value of ExposePlayers_Optional to its default and also sets ExposePlayers_IsSet to true.

