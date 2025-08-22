---
title: RHAPI_MatchInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchInfo`](#structFRHAPI__MatchInfo) | DEPRECATED Information about a match.

## struct `FRHAPI_MatchInfo` <a id="structFRHAPI__MatchInfo"></a>

```
struct FRHAPI_MatchInfo
  : public FRHAPI_Model
```

DEPRECATED Information about a match.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchId`](#structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2) | Unique ID.
`public FDateTime `[`Created`](#structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765) | true if CustomData_Optional has been set to a value
`public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f) | List of tickets that were assigned to this match if created by matchmaking.
`public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9) | true if TicketIds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchInfo_1a0e14cb4abf932498902694eddb02e8c5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchInfo_1ad0f70516932bf8ee3a272b574e54e449)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1a0e150b0c805dc035fbdc1b58e7f48764)`()` | Gets the value of MatchId.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1ab27c28635f04f1d3f7ac93f6530c134b)`() const` | Gets the value of MatchId.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchInfo_1a468f164f7af4f0abb1a06f7286739502)`(const FString & NewValue)` | Sets the value of MatchId.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchInfo_1a3afa4698738e026956a4433325bc2e0a)`(FString && NewValue)` | Sets the value of MatchId using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1ad7c1955173c7826392f52c123d20067e)`()` | Gets the value of Created.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1adf280806eb73397931a406ee009da413)`() const` | Gets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__MatchInfo_1ad6b9abd07a0940391295c6b89d9d4d48)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__MatchInfo_1a6d48aacd9ca304aca592e55f54a92017)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a6b06b0f774a78f4125a1d4a53b7e32ab)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1acea855caf8e80169a48ad0b606b159f6)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a02a782bdc04276f48c61fd77b277a20c)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchInfo_1a0421bc514abccfa4fb652ac03c714611)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1a0959521163c918d1684b5c2016915f62)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1accb05a9a334d8e472567c7aecc916ae6)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchInfo_1afbd4809393fb2bc90a332b706d077754)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchInfo_1af13600ef4766f58099f7c881cf364fdd)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a7010ebaf86fa26d7d6e06cb39615e0b0)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1ad5797f203f7cd9d9358c3c2d2b6ae76d)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a39b8ada23f96a9789133ecc08c51c4be)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketIds`](#structFRHAPI__MatchInfo_1ae6b96d52a84e473932127c288868dbd1)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1af49c77c5ed89c5401f7448cd4282b551)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1ad3994d2d74637385d056f0c36ee5fe2b)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1ae97d9113d79aa5a6ce55c5b66d6e95ae)`(const TArray< FString > & NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1a6a7a2c9cfaf21342afe966cec8276892)`(TArray< FString > && NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.
`public inline void `[`ClearTicketIds`](#structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

### Members

#### `public FString `[`MatchId`](#structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2) <a id="structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2"></a>

Unique ID.

#### `public FDateTime `[`Created`](#structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54) <a id="structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792) <a id="structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792"></a>

instance-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765) <a id="structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765"></a>

true if CustomData_Optional has been set to a value

#### `public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f) <a id="structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f"></a>

List of tickets that were assigned to this match if created by matchmaking.

#### `public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9) <a id="structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9"></a>

true if TicketIds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchInfo_1a0e14cb4abf932498902694eddb02e8c5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchInfo_1a0e14cb4abf932498902694eddb02e8c5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchInfo_1ad0f70516932bf8ee3a272b574e54e449)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchInfo_1ad0f70516932bf8ee3a272b574e54e449"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1a0e150b0c805dc035fbdc1b58e7f48764)`()` <a id="structFRHAPI__MatchInfo_1a0e150b0c805dc035fbdc1b58e7f48764"></a>

Gets the value of MatchId.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1ab27c28635f04f1d3f7ac93f6530c134b)`() const` <a id="structFRHAPI__MatchInfo_1ab27c28635f04f1d3f7ac93f6530c134b"></a>

Gets the value of MatchId.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchInfo_1a468f164f7af4f0abb1a06f7286739502)`(const FString & NewValue)` <a id="structFRHAPI__MatchInfo_1a468f164f7af4f0abb1a06f7286739502"></a>

Sets the value of MatchId.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchInfo_1a3afa4698738e026956a4433325bc2e0a)`(FString && NewValue)` <a id="structFRHAPI__MatchInfo_1a3afa4698738e026956a4433325bc2e0a"></a>

Sets the value of MatchId using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1ad7c1955173c7826392f52c123d20067e)`()` <a id="structFRHAPI__MatchInfo_1ad7c1955173c7826392f52c123d20067e"></a>

Gets the value of Created.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1adf280806eb73397931a406ee009da413)`() const` <a id="structFRHAPI__MatchInfo_1adf280806eb73397931a406ee009da413"></a>

Gets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__MatchInfo_1ad6b9abd07a0940391295c6b89d9d4d48)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchInfo_1ad6b9abd07a0940391295c6b89d9d4d48"></a>

Sets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__MatchInfo_1a6d48aacd9ca304aca592e55f54a92017)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchInfo_1a6d48aacd9ca304aca592e55f54a92017"></a>

Sets the value of Created using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a6b06b0f774a78f4125a1d4a53b7e32ab)`()` <a id="structFRHAPI__MatchInfo_1a6b06b0f774a78f4125a1d4a53b7e32ab"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1acea855caf8e80169a48ad0b606b159f6)`() const` <a id="structFRHAPI__MatchInfo_1acea855caf8e80169a48ad0b606b159f6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a02a782bdc04276f48c61fd77b277a20c)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchInfo_1a02a782bdc04276f48c61fd77b277a20c"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchInfo_1a0421bc514abccfa4fb652ac03c714611)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchInfo_1a0421bc514abccfa4fb652ac03c714611"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1a0959521163c918d1684b5c2016915f62)`()` <a id="structFRHAPI__MatchInfo_1a0959521163c918d1684b5c2016915f62"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1accb05a9a334d8e472567c7aecc916ae6)`() const` <a id="structFRHAPI__MatchInfo_1accb05a9a334d8e472567c7aecc916ae6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchInfo_1afbd4809393fb2bc90a332b706d077754)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchInfo_1afbd4809393fb2bc90a332b706d077754"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchInfo_1af13600ef4766f58099f7c881cf364fdd)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchInfo_1af13600ef4766f58099f7c881cf364fdd"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7)`()` <a id="structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a7010ebaf86fa26d7d6e06cb39615e0b0)`()` <a id="structFRHAPI__MatchInfo_1a7010ebaf86fa26d7d6e06cb39615e0b0"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1ad5797f203f7cd9d9358c3c2d2b6ae76d)`() const` <a id="structFRHAPI__MatchInfo_1ad5797f203f7cd9d9358c3c2d2b6ae76d"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a39b8ada23f96a9789133ecc08c51c4be)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchInfo_1a39b8ada23f96a9789133ecc08c51c4be"></a>

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketIds`](#structFRHAPI__MatchInfo_1ae6b96d52a84e473932127c288868dbd1)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchInfo_1ae6b96d52a84e473932127c288868dbd1"></a>

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1af49c77c5ed89c5401f7448cd4282b551)`()` <a id="structFRHAPI__MatchInfo_1af49c77c5ed89c5401f7448cd4282b551"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1ad3994d2d74637385d056f0c36ee5fe2b)`() const` <a id="structFRHAPI__MatchInfo_1ad3994d2d74637385d056f0c36ee5fe2b"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1ae97d9113d79aa5a6ce55c5b66d6e95ae)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__MatchInfo_1ae97d9113d79aa5a6ce55c5b66d6e95ae"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1a6a7a2c9cfaf21342afe966cec8276892)`(TArray< FString > && NewValue)` <a id="structFRHAPI__MatchInfo_1a6a7a2c9cfaf21342afe966cec8276892"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39)`()` <a id="structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

