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
`public inline FORCEINLINE FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ae163c2f4a900e6fa8d954d455888b1e4)`()` | Gets the value of LeaderboardId.
`public inline FORCEINLINE const FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1a14ec3c6856e345de9043d47c99bce54c)`() const` | Gets the value of LeaderboardId.
`public inline FORCEINLINE void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1a88ee218e850c9ed079c3547cf202c308)`(const FString & NewValue)` | Sets the value of LeaderboardId.
`public inline FORCEINLINE void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ac94df852ff83664c1c08cf5d03e0fb85)`(FString && NewValue)` | Sets the value of LeaderboardId using move semantics.
`public inline FORCEINLINE ERHAPI_PlayerListType & `[`GetPlayerList`](#structFRHAPI__LeaderboardConfig_1ac58a1051007c7a0159927c45cccf094c)`()` | Gets the value of PlayerList.
`public inline FORCEINLINE const ERHAPI_PlayerListType & `[`GetPlayerList`](#structFRHAPI__LeaderboardConfig_1a82d073c74302afa159ba927f9112fffd)`() const` | Gets the value of PlayerList.
`public inline FORCEINLINE void `[`SetPlayerList`](#structFRHAPI__LeaderboardConfig_1a03038d2d6f267b1ce3a9c3925b1f0b44)`(const ERHAPI_PlayerListType & NewValue)` | Sets the value of PlayerList.
`public inline FORCEINLINE void `[`SetPlayerList`](#structFRHAPI__LeaderboardConfig_1ad23a1e3a117287294ba773dec3440c99)`(ERHAPI_PlayerListType && NewValue)` | Sets the value of PlayerList using move semantics.
`public inline FORCEINLINE int32 & `[`GetMaxSize`](#structFRHAPI__LeaderboardConfig_1af4c77a9a075e93968842f6be50137d96)`()` | Gets the value of MaxSize.
`public inline FORCEINLINE const int32 & `[`GetMaxSize`](#structFRHAPI__LeaderboardConfig_1a1b0b38bba783e0646572bacb88c8b9a1)`() const` | Gets the value of MaxSize.
`public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__LeaderboardConfig_1ad7f3dca9573903673e3bffdb4beb0b7f)`(const int32 & NewValue)` | Sets the value of MaxSize.
`public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__LeaderboardConfig_1a6c7e75657c780738df56c1fe16df2971)`(int32 && NewValue)` | Sets the value of MaxSize using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxSize`](#structFRHAPI__LeaderboardConfig_1aed55fae1f4b92d4db28d29454f34f800)`()` | Returns the default value of MaxSize.
`public inline FORCEINLINE ERHAPI_LeaderboardSortOrder & `[`GetSortOrder`](#structFRHAPI__LeaderboardConfig_1aa68b025c8cbc2c014d1b714362bf1593)`()` | Gets the value of SortOrder.
`public inline FORCEINLINE const ERHAPI_LeaderboardSortOrder & `[`GetSortOrder`](#structFRHAPI__LeaderboardConfig_1aa399faf8902f6cb5de391541fb6d866b)`() const` | Gets the value of SortOrder.
`public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__LeaderboardConfig_1a2be3d6928b32dabc7d5cf22dff03c769)`(const ERHAPI_LeaderboardSortOrder & NewValue)` | Sets the value of SortOrder.
`public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__LeaderboardConfig_1a63cd17da85e1bb3f4afb451b2b81bafc)`(ERHAPI_LeaderboardSortOrder && NewValue)` | Sets the value of SortOrder using move semantics.
`public inline FORCEINLINE ERHAPI_LeaderboardSource & `[`GetSource`](#structFRHAPI__LeaderboardConfig_1add0a4fb20225dda6572021c0b31f2610)`()` | Gets the value of Source.
`public inline FORCEINLINE const ERHAPI_LeaderboardSource & `[`GetSource`](#structFRHAPI__LeaderboardConfig_1a67a52bc626bf6826f2eda56a6f7c87d5)`() const` | Gets the value of Source.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__LeaderboardConfig_1a7b12b02c6ea7efc44a8e06d7bbb42609)`(const ERHAPI_LeaderboardSource & NewValue)` | Sets the value of Source.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__LeaderboardConfig_1ab5f82851e8296b331814a375cae772bf)`(ERHAPI_LeaderboardSource && NewValue)` | Sets the value of Source using move semantics.
`public inline FORCEINLINE FString & `[`GetSourceId`](#structFRHAPI__LeaderboardConfig_1ad9a9e10078994174e1075492e0e650e1)`()` | Gets the value of SourceId.
`public inline FORCEINLINE const FString & `[`GetSourceId`](#structFRHAPI__LeaderboardConfig_1a7f72d404dc7dd3f86a0683382e2d49f6)`() const` | Gets the value of SourceId.
`public inline FORCEINLINE void `[`SetSourceId`](#structFRHAPI__LeaderboardConfig_1a8caa9647abea0b0e17209301156068d8)`(const FString & NewValue)` | Sets the value of SourceId.
`public inline FORCEINLINE void `[`SetSourceId`](#structFRHAPI__LeaderboardConfig_1a3bdd6cd019676a9c8422dd2f501949c5)`(FString && NewValue)` | Sets the value of SourceId using move semantics.
`public inline FORCEINLINE bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a2ee39448ee6416b9c8bd59289ee73562)`()` | Gets the value of RemoveRestricted_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1ad5c6dcc045ae66867e644e16d9ce964d)`() const` | Gets the value of RemoveRestricted_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a984eef97f544a7cabd1ceedc9704eb28)`(const bool & DefaultValue) const` | Gets the value of RemoveRestricted_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a003ce816c594237a30bb320a03f76cb8)`(bool & OutValue) const` | Fills OutValue with the value of RemoveRestricted_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetRemoveRestrictedOrNull`](#structFRHAPI__LeaderboardConfig_1a2bcb81944c50b82c9bb95fee7b6f5ef9)`()` | Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetRemoveRestrictedOrNull`](#structFRHAPI__LeaderboardConfig_1a81522c15cea67a0e68f75487f7aee848)`() const` | Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a99149329b1c791ca271a5945402e99ca)`(const bool & NewValue)` | Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true.
`public inline FORCEINLINE void `[`SetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a6a10506ffa3ed54a07cdd5176c054dee)`(bool && NewValue)` | Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true using move semantics.
`public inline void `[`ClearRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a401bfdb1f7902ffb5e7623f8813434b1)`()` | Clears the value of RemoveRestricted_Optional and sets RemoveRestricted_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_RemoveRestricted`](#structFRHAPI__LeaderboardConfig_1ac561058c33e33aaa726bcaa00f62b6fc)`()` | Returns the default value of RemoveRestricted.
`public inline FORCEINLINE int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1ae1f0fc6d0053ce06822452b099ac961f)`()` | Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a494bd0a72a18bdf6ab3c96df075feace)`() const` | Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1af015b094ae8314cd87920d3e0e023138)`(const int32 & DefaultValue) const` | Gets the value of RequiredRecentLoginDays_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a5ce6033a10862d38f76892dc91a5cfd5)`(int32 & OutValue) const` | Fills OutValue with the value of RequiredRecentLoginDays_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetRequiredRecentLoginDaysOrNull`](#structFRHAPI__LeaderboardConfig_1af36b9de5cf3c40012892ffbcd619b9e3)`()` | Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetRequiredRecentLoginDaysOrNull`](#structFRHAPI__LeaderboardConfig_1a1a17f283cd26477dd229bb28ffd19fe9)`() const` | Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9d046221d36d84c6f7a142221bbf7097)`(const int32 & NewValue)` | Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true.
`public inline FORCEINLINE void `[`SetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1aa6f00e65dcd77f2ae4a78e54ed867fdc)`(int32 && NewValue)` | Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true using move semantics.
`public inline void `[`ClearRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9152fd07f06d89e784231c5889e06390)`()` | Clears the value of RequiredRecentLoginDays_Optional and sets RequiredRecentLoginDays_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1aab4f56e71f43f3f8cfeaf08896ef4962)`()` | Returns the default value of RequiredRecentLoginDays.
`public inline FORCEINLINE void `[`SetRequiredRecentLoginDaysToNull`](#structFRHAPI__LeaderboardConfig_1a22ebb2a9931982f05f79f27dca13dc04)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRequiredRecentLoginDaysNull`](#structFRHAPI__LeaderboardConfig_1a66ba94df0c25cf338e005fca10fec368)`() const` | Checks whether RequiredRecentLoginDays_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a3003e281efe53bba2d3d6e04228e3ad8)`()` | Gets the value of UpdateFrequencySeconds.
`public inline FORCEINLINE const int32 & `[`GetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a94f5e84150c373df3a5b1b0a8e699d29)`() const` | Gets the value of UpdateFrequencySeconds.
`public inline FORCEINLINE void `[`SetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1aa83ecf5a798d49b73e632bbd7240facf)`(const int32 & NewValue)` | Sets the value of UpdateFrequencySeconds.
`public inline FORCEINLINE void `[`SetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a94fba944f95890cc21285fa03fe80424)`(int32 && NewValue)` | Sets the value of UpdateFrequencySeconds using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_UpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a8b69bfed2321351c5db38e636c89c0c6)`()` | Returns the default value of UpdateFrequencySeconds.
`public inline FORCEINLINE bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1ac8fe06deb79303a18c6ef22b4615b818)`()` | Gets the value of ExposeStat_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a47c9a4e9767229e3a870692be6b8c407)`() const` | Gets the value of ExposeStat_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a5573857f530eaefc0a1f21d0c0b8434f)`(const bool & DefaultValue) const` | Gets the value of ExposeStat_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1ab62a24d72665a1a08f96af7e71f3cc7e)`(bool & OutValue) const` | Fills OutValue with the value of ExposeStat_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetExposeStatOrNull`](#structFRHAPI__LeaderboardConfig_1af2a69a352a303e2cea5a8cefa63b71b3)`()` | Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetExposeStatOrNull`](#structFRHAPI__LeaderboardConfig_1a554ff4ddc06b70fd27999d8f2e1a0853)`() const` | Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExposeStat`](#structFRHAPI__LeaderboardConfig_1a89ef4f2557867c1706cf162c17e6cb4a)`(const bool & NewValue)` | Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true.
`public inline FORCEINLINE void `[`SetExposeStat`](#structFRHAPI__LeaderboardConfig_1acc13280a34e4f6812675bf50e214a242)`(bool && NewValue)` | Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true using move semantics.
`public inline void `[`ClearExposeStat`](#structFRHAPI__LeaderboardConfig_1a42fa6946647755973b35d4f30a9c2883)`()` | Clears the value of ExposeStat_Optional and sets ExposeStat_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_ExposeStat`](#structFRHAPI__LeaderboardConfig_1ab5ce979472a583a9f4e90fe0a4b6cb46)`()` | Returns the default value of ExposeStat.
`public inline FORCEINLINE bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a874c6877ba15eb35491467a84acd7ebf)`()` | Gets the value of ExposePlayers_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a1abc0957ab9d0451a3a573191ddc4f53)`() const` | Gets the value of ExposePlayers_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1ad3a173542cb947b8acda72217cb21de6)`(const bool & DefaultValue) const` | Gets the value of ExposePlayers_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a154747427d59ecf42386aae01c893ba4)`(bool & OutValue) const` | Fills OutValue with the value of ExposePlayers_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetExposePlayersOrNull`](#structFRHAPI__LeaderboardConfig_1a9c1e05891e2580155a32f28fda7c6d3b)`()` | Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetExposePlayersOrNull`](#structFRHAPI__LeaderboardConfig_1a0bd8445156b9cb4bfebb2cc3edb57fbd)`() const` | Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a01e88c18ffca0905ae62f9bab36cd931)`(const bool & NewValue)` | Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true.
`public inline FORCEINLINE void `[`SetExposePlayers`](#structFRHAPI__LeaderboardConfig_1ae54cc59ca6b70d18ee5461931e2645da)`(bool && NewValue)` | Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true using move semantics.
`public inline void `[`ClearExposePlayers`](#structFRHAPI__LeaderboardConfig_1a4c603d8f96dc818689409bb15154e46c)`()` | Clears the value of ExposePlayers_Optional and sets ExposePlayers_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_ExposePlayers`](#structFRHAPI__LeaderboardConfig_1a4355c73c7cb389a19d79696af8c57dd1)`()` | Returns the default value of ExposePlayers.

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

#### `public inline FORCEINLINE FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ae163c2f4a900e6fa8d954d455888b1e4)`()` <a id="structFRHAPI__LeaderboardConfig_1ae163c2f4a900e6fa8d954d455888b1e4"></a>

Gets the value of LeaderboardId.

#### `public inline FORCEINLINE const FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1a14ec3c6856e345de9043d47c99bce54c)`() const` <a id="structFRHAPI__LeaderboardConfig_1a14ec3c6856e345de9043d47c99bce54c"></a>

Gets the value of LeaderboardId.

#### `public inline FORCEINLINE void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1a88ee218e850c9ed079c3547cf202c308)`(const FString & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a88ee218e850c9ed079c3547cf202c308"></a>

Sets the value of LeaderboardId.

#### `public inline FORCEINLINE void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardConfig_1ac94df852ff83664c1c08cf5d03e0fb85)`(FString && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ac94df852ff83664c1c08cf5d03e0fb85"></a>

Sets the value of LeaderboardId using move semantics.

#### `public inline FORCEINLINE ERHAPI_PlayerListType & `[`GetPlayerList`](#structFRHAPI__LeaderboardConfig_1ac58a1051007c7a0159927c45cccf094c)`()` <a id="structFRHAPI__LeaderboardConfig_1ac58a1051007c7a0159927c45cccf094c"></a>

Gets the value of PlayerList.

#### `public inline FORCEINLINE const ERHAPI_PlayerListType & `[`GetPlayerList`](#structFRHAPI__LeaderboardConfig_1a82d073c74302afa159ba927f9112fffd)`() const` <a id="structFRHAPI__LeaderboardConfig_1a82d073c74302afa159ba927f9112fffd"></a>

Gets the value of PlayerList.

#### `public inline FORCEINLINE void `[`SetPlayerList`](#structFRHAPI__LeaderboardConfig_1a03038d2d6f267b1ce3a9c3925b1f0b44)`(const ERHAPI_PlayerListType & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a03038d2d6f267b1ce3a9c3925b1f0b44"></a>

Sets the value of PlayerList.

#### `public inline FORCEINLINE void `[`SetPlayerList`](#structFRHAPI__LeaderboardConfig_1ad23a1e3a117287294ba773dec3440c99)`(ERHAPI_PlayerListType && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ad23a1e3a117287294ba773dec3440c99"></a>

Sets the value of PlayerList using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetMaxSize`](#structFRHAPI__LeaderboardConfig_1af4c77a9a075e93968842f6be50137d96)`()` <a id="structFRHAPI__LeaderboardConfig_1af4c77a9a075e93968842f6be50137d96"></a>

Gets the value of MaxSize.

#### `public inline FORCEINLINE const int32 & `[`GetMaxSize`](#structFRHAPI__LeaderboardConfig_1a1b0b38bba783e0646572bacb88c8b9a1)`() const` <a id="structFRHAPI__LeaderboardConfig_1a1b0b38bba783e0646572bacb88c8b9a1"></a>

Gets the value of MaxSize.

#### `public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__LeaderboardConfig_1ad7f3dca9573903673e3bffdb4beb0b7f)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ad7f3dca9573903673e3bffdb4beb0b7f"></a>

Sets the value of MaxSize.

#### `public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__LeaderboardConfig_1a6c7e75657c780738df56c1fe16df2971)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a6c7e75657c780738df56c1fe16df2971"></a>

Sets the value of MaxSize using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxSize`](#structFRHAPI__LeaderboardConfig_1aed55fae1f4b92d4db28d29454f34f800)`()` <a id="structFRHAPI__LeaderboardConfig_1aed55fae1f4b92d4db28d29454f34f800"></a>

Returns the default value of MaxSize.

#### `public inline FORCEINLINE ERHAPI_LeaderboardSortOrder & `[`GetSortOrder`](#structFRHAPI__LeaderboardConfig_1aa68b025c8cbc2c014d1b714362bf1593)`()` <a id="structFRHAPI__LeaderboardConfig_1aa68b025c8cbc2c014d1b714362bf1593"></a>

Gets the value of SortOrder.

#### `public inline FORCEINLINE const ERHAPI_LeaderboardSortOrder & `[`GetSortOrder`](#structFRHAPI__LeaderboardConfig_1aa399faf8902f6cb5de391541fb6d866b)`() const` <a id="structFRHAPI__LeaderboardConfig_1aa399faf8902f6cb5de391541fb6d866b"></a>

Gets the value of SortOrder.

#### `public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__LeaderboardConfig_1a2be3d6928b32dabc7d5cf22dff03c769)`(const ERHAPI_LeaderboardSortOrder & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a2be3d6928b32dabc7d5cf22dff03c769"></a>

Sets the value of SortOrder.

#### `public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__LeaderboardConfig_1a63cd17da85e1bb3f4afb451b2b81bafc)`(ERHAPI_LeaderboardSortOrder && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a63cd17da85e1bb3f4afb451b2b81bafc"></a>

Sets the value of SortOrder using move semantics.

#### `public inline FORCEINLINE ERHAPI_LeaderboardSource & `[`GetSource`](#structFRHAPI__LeaderboardConfig_1add0a4fb20225dda6572021c0b31f2610)`()` <a id="structFRHAPI__LeaderboardConfig_1add0a4fb20225dda6572021c0b31f2610"></a>

Gets the value of Source.

#### `public inline FORCEINLINE const ERHAPI_LeaderboardSource & `[`GetSource`](#structFRHAPI__LeaderboardConfig_1a67a52bc626bf6826f2eda56a6f7c87d5)`() const` <a id="structFRHAPI__LeaderboardConfig_1a67a52bc626bf6826f2eda56a6f7c87d5"></a>

Gets the value of Source.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__LeaderboardConfig_1a7b12b02c6ea7efc44a8e06d7bbb42609)`(const ERHAPI_LeaderboardSource & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a7b12b02c6ea7efc44a8e06d7bbb42609"></a>

Sets the value of Source.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__LeaderboardConfig_1ab5f82851e8296b331814a375cae772bf)`(ERHAPI_LeaderboardSource && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ab5f82851e8296b331814a375cae772bf"></a>

Sets the value of Source using move semantics.

#### `public inline FORCEINLINE FString & `[`GetSourceId`](#structFRHAPI__LeaderboardConfig_1ad9a9e10078994174e1075492e0e650e1)`()` <a id="structFRHAPI__LeaderboardConfig_1ad9a9e10078994174e1075492e0e650e1"></a>

Gets the value of SourceId.

#### `public inline FORCEINLINE const FString & `[`GetSourceId`](#structFRHAPI__LeaderboardConfig_1a7f72d404dc7dd3f86a0683382e2d49f6)`() const` <a id="structFRHAPI__LeaderboardConfig_1a7f72d404dc7dd3f86a0683382e2d49f6"></a>

Gets the value of SourceId.

#### `public inline FORCEINLINE void `[`SetSourceId`](#structFRHAPI__LeaderboardConfig_1a8caa9647abea0b0e17209301156068d8)`(const FString & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a8caa9647abea0b0e17209301156068d8"></a>

Sets the value of SourceId.

#### `public inline FORCEINLINE void `[`SetSourceId`](#structFRHAPI__LeaderboardConfig_1a3bdd6cd019676a9c8422dd2f501949c5)`(FString && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a3bdd6cd019676a9c8422dd2f501949c5"></a>

Sets the value of SourceId using move semantics.

#### `public inline FORCEINLINE bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a2ee39448ee6416b9c8bd59289ee73562)`()` <a id="structFRHAPI__LeaderboardConfig_1a2ee39448ee6416b9c8bd59289ee73562"></a>

Gets the value of RemoveRestricted_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1ad5c6dcc045ae66867e644e16d9ce964d)`() const` <a id="structFRHAPI__LeaderboardConfig_1ad5c6dcc045ae66867e644e16d9ce964d"></a>

Gets the value of RemoveRestricted_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a984eef97f544a7cabd1ceedc9704eb28)`(const bool & DefaultValue) const` <a id="structFRHAPI__LeaderboardConfig_1a984eef97f544a7cabd1ceedc9704eb28"></a>

Gets the value of RemoveRestricted_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a003ce816c594237a30bb320a03f76cb8)`(bool & OutValue) const` <a id="structFRHAPI__LeaderboardConfig_1a003ce816c594237a30bb320a03f76cb8"></a>

Fills OutValue with the value of RemoveRestricted_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetRemoveRestrictedOrNull`](#structFRHAPI__LeaderboardConfig_1a2bcb81944c50b82c9bb95fee7b6f5ef9)`()` <a id="structFRHAPI__LeaderboardConfig_1a2bcb81944c50b82c9bb95fee7b6f5ef9"></a>

Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetRemoveRestrictedOrNull`](#structFRHAPI__LeaderboardConfig_1a81522c15cea67a0e68f75487f7aee848)`() const` <a id="structFRHAPI__LeaderboardConfig_1a81522c15cea67a0e68f75487f7aee848"></a>

Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a99149329b1c791ca271a5945402e99ca)`(const bool & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a99149329b1c791ca271a5945402e99ca"></a>

Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a6a10506ffa3ed54a07cdd5176c054dee)`(bool && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a6a10506ffa3ed54a07cdd5176c054dee"></a>

Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true using move semantics.

#### `public inline void `[`ClearRemoveRestricted`](#structFRHAPI__LeaderboardConfig_1a401bfdb1f7902ffb5e7623f8813434b1)`()` <a id="structFRHAPI__LeaderboardConfig_1a401bfdb1f7902ffb5e7623f8813434b1"></a>

Clears the value of RemoveRestricted_Optional and sets RemoveRestricted_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_RemoveRestricted`](#structFRHAPI__LeaderboardConfig_1ac561058c33e33aaa726bcaa00f62b6fc)`()` <a id="structFRHAPI__LeaderboardConfig_1ac561058c33e33aaa726bcaa00f62b6fc"></a>

Returns the default value of RemoveRestricted.

#### `public inline FORCEINLINE int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1ae1f0fc6d0053ce06822452b099ac961f)`()` <a id="structFRHAPI__LeaderboardConfig_1ae1f0fc6d0053ce06822452b099ac961f"></a>

Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a494bd0a72a18bdf6ab3c96df075feace)`() const` <a id="structFRHAPI__LeaderboardConfig_1a494bd0a72a18bdf6ab3c96df075feace"></a>

Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1af015b094ae8314cd87920d3e0e023138)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LeaderboardConfig_1af015b094ae8314cd87920d3e0e023138"></a>

Gets the value of RequiredRecentLoginDays_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a5ce6033a10862d38f76892dc91a5cfd5)`(int32 & OutValue) const` <a id="structFRHAPI__LeaderboardConfig_1a5ce6033a10862d38f76892dc91a5cfd5"></a>

Fills OutValue with the value of RequiredRecentLoginDays_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetRequiredRecentLoginDaysOrNull`](#structFRHAPI__LeaderboardConfig_1af36b9de5cf3c40012892ffbcd619b9e3)`()` <a id="structFRHAPI__LeaderboardConfig_1af36b9de5cf3c40012892ffbcd619b9e3"></a>

Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetRequiredRecentLoginDaysOrNull`](#structFRHAPI__LeaderboardConfig_1a1a17f283cd26477dd229bb28ffd19fe9)`() const` <a id="structFRHAPI__LeaderboardConfig_1a1a17f283cd26477dd229bb28ffd19fe9"></a>

Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9d046221d36d84c6f7a142221bbf7097)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a9d046221d36d84c6f7a142221bbf7097"></a>

Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1aa6f00e65dcd77f2ae4a78e54ed867fdc)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1aa6f00e65dcd77f2ae4a78e54ed867fdc"></a>

Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1a9152fd07f06d89e784231c5889e06390)`()` <a id="structFRHAPI__LeaderboardConfig_1a9152fd07f06d89e784231c5889e06390"></a>

Clears the value of RequiredRecentLoginDays_Optional and sets RequiredRecentLoginDays_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RequiredRecentLoginDays`](#structFRHAPI__LeaderboardConfig_1aab4f56e71f43f3f8cfeaf08896ef4962)`()` <a id="structFRHAPI__LeaderboardConfig_1aab4f56e71f43f3f8cfeaf08896ef4962"></a>

Returns the default value of RequiredRecentLoginDays.

#### `public inline FORCEINLINE void `[`SetRequiredRecentLoginDaysToNull`](#structFRHAPI__LeaderboardConfig_1a22ebb2a9931982f05f79f27dca13dc04)`()` <a id="structFRHAPI__LeaderboardConfig_1a22ebb2a9931982f05f79f27dca13dc04"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRequiredRecentLoginDaysNull`](#structFRHAPI__LeaderboardConfig_1a66ba94df0c25cf338e005fca10fec368)`() const` <a id="structFRHAPI__LeaderboardConfig_1a66ba94df0c25cf338e005fca10fec368"></a>

Checks whether RequiredRecentLoginDays_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a3003e281efe53bba2d3d6e04228e3ad8)`()` <a id="structFRHAPI__LeaderboardConfig_1a3003e281efe53bba2d3d6e04228e3ad8"></a>

Gets the value of UpdateFrequencySeconds.

#### `public inline FORCEINLINE const int32 & `[`GetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a94f5e84150c373df3a5b1b0a8e699d29)`() const` <a id="structFRHAPI__LeaderboardConfig_1a94f5e84150c373df3a5b1b0a8e699d29"></a>

Gets the value of UpdateFrequencySeconds.

#### `public inline FORCEINLINE void `[`SetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1aa83ecf5a798d49b73e632bbd7240facf)`(const int32 & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1aa83ecf5a798d49b73e632bbd7240facf"></a>

Sets the value of UpdateFrequencySeconds.

#### `public inline FORCEINLINE void `[`SetUpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a94fba944f95890cc21285fa03fe80424)`(int32 && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a94fba944f95890cc21285fa03fe80424"></a>

Sets the value of UpdateFrequencySeconds using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_UpdateFrequencySeconds`](#structFRHAPI__LeaderboardConfig_1a8b69bfed2321351c5db38e636c89c0c6)`()` <a id="structFRHAPI__LeaderboardConfig_1a8b69bfed2321351c5db38e636c89c0c6"></a>

Returns the default value of UpdateFrequencySeconds.

#### `public inline FORCEINLINE bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1ac8fe06deb79303a18c6ef22b4615b818)`()` <a id="structFRHAPI__LeaderboardConfig_1ac8fe06deb79303a18c6ef22b4615b818"></a>

Gets the value of ExposeStat_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a47c9a4e9767229e3a870692be6b8c407)`() const` <a id="structFRHAPI__LeaderboardConfig_1a47c9a4e9767229e3a870692be6b8c407"></a>

Gets the value of ExposeStat_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1a5573857f530eaefc0a1f21d0c0b8434f)`(const bool & DefaultValue) const` <a id="structFRHAPI__LeaderboardConfig_1a5573857f530eaefc0a1f21d0c0b8434f"></a>

Gets the value of ExposeStat_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExposeStat`](#structFRHAPI__LeaderboardConfig_1ab62a24d72665a1a08f96af7e71f3cc7e)`(bool & OutValue) const` <a id="structFRHAPI__LeaderboardConfig_1ab62a24d72665a1a08f96af7e71f3cc7e"></a>

Fills OutValue with the value of ExposeStat_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetExposeStatOrNull`](#structFRHAPI__LeaderboardConfig_1af2a69a352a303e2cea5a8cefa63b71b3)`()` <a id="structFRHAPI__LeaderboardConfig_1af2a69a352a303e2cea5a8cefa63b71b3"></a>

Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetExposeStatOrNull`](#structFRHAPI__LeaderboardConfig_1a554ff4ddc06b70fd27999d8f2e1a0853)`() const` <a id="structFRHAPI__LeaderboardConfig_1a554ff4ddc06b70fd27999d8f2e1a0853"></a>

Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExposeStat`](#structFRHAPI__LeaderboardConfig_1a89ef4f2557867c1706cf162c17e6cb4a)`(const bool & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a89ef4f2557867c1706cf162c17e6cb4a"></a>

Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExposeStat`](#structFRHAPI__LeaderboardConfig_1acc13280a34e4f6812675bf50e214a242)`(bool && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1acc13280a34e4f6812675bf50e214a242"></a>

Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true using move semantics.

#### `public inline void `[`ClearExposeStat`](#structFRHAPI__LeaderboardConfig_1a42fa6946647755973b35d4f30a9c2883)`()` <a id="structFRHAPI__LeaderboardConfig_1a42fa6946647755973b35d4f30a9c2883"></a>

Clears the value of ExposeStat_Optional and sets ExposeStat_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_ExposeStat`](#structFRHAPI__LeaderboardConfig_1ab5ce979472a583a9f4e90fe0a4b6cb46)`()` <a id="structFRHAPI__LeaderboardConfig_1ab5ce979472a583a9f4e90fe0a4b6cb46"></a>

Returns the default value of ExposeStat.

#### `public inline FORCEINLINE bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a874c6877ba15eb35491467a84acd7ebf)`()` <a id="structFRHAPI__LeaderboardConfig_1a874c6877ba15eb35491467a84acd7ebf"></a>

Gets the value of ExposePlayers_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a1abc0957ab9d0451a3a573191ddc4f53)`() const` <a id="structFRHAPI__LeaderboardConfig_1a1abc0957ab9d0451a3a573191ddc4f53"></a>

Gets the value of ExposePlayers_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1ad3a173542cb947b8acda72217cb21de6)`(const bool & DefaultValue) const` <a id="structFRHAPI__LeaderboardConfig_1ad3a173542cb947b8acda72217cb21de6"></a>

Gets the value of ExposePlayers_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a154747427d59ecf42386aae01c893ba4)`(bool & OutValue) const` <a id="structFRHAPI__LeaderboardConfig_1a154747427d59ecf42386aae01c893ba4"></a>

Fills OutValue with the value of ExposePlayers_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetExposePlayersOrNull`](#structFRHAPI__LeaderboardConfig_1a9c1e05891e2580155a32f28fda7c6d3b)`()` <a id="structFRHAPI__LeaderboardConfig_1a9c1e05891e2580155a32f28fda7c6d3b"></a>

Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetExposePlayersOrNull`](#structFRHAPI__LeaderboardConfig_1a0bd8445156b9cb4bfebb2cc3edb57fbd)`() const` <a id="structFRHAPI__LeaderboardConfig_1a0bd8445156b9cb4bfebb2cc3edb57fbd"></a>

Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExposePlayers`](#structFRHAPI__LeaderboardConfig_1a01e88c18ffca0905ae62f9bab36cd931)`(const bool & NewValue)` <a id="structFRHAPI__LeaderboardConfig_1a01e88c18ffca0905ae62f9bab36cd931"></a>

Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExposePlayers`](#structFRHAPI__LeaderboardConfig_1ae54cc59ca6b70d18ee5461931e2645da)`(bool && NewValue)` <a id="structFRHAPI__LeaderboardConfig_1ae54cc59ca6b70d18ee5461931e2645da"></a>

Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true using move semantics.

#### `public inline void `[`ClearExposePlayers`](#structFRHAPI__LeaderboardConfig_1a4c603d8f96dc818689409bb15154e46c)`()` <a id="structFRHAPI__LeaderboardConfig_1a4c603d8f96dc818689409bb15154e46c"></a>

Clears the value of ExposePlayers_Optional and sets ExposePlayers_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_ExposePlayers`](#structFRHAPI__LeaderboardConfig_1a4355c73c7cb389a19d79696af8c57dd1)`()` <a id="structFRHAPI__LeaderboardConfig_1a4355c73c7cb389a19d79696af8c57dd1"></a>

Returns the default value of ExposePlayers.

