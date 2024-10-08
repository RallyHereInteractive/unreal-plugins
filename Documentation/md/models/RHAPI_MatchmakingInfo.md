---
title: RHAPI_MatchmakingInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchmakingInfo`](#structFRHAPI__MatchmakingInfo) | Info about the matchmaking status in a session.

## struct `FRHAPI_MatchmakingInfo` <a id="structFRHAPI__MatchmakingInfo"></a>

```
struct FRHAPI_MatchmakingInfo
  : public FRHAPI_Model
```

Info about the matchmaking status in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`TicketId`](#structFRHAPI__MatchmakingInfo_1a18cee065a4d780d93d1cd2a9bfde1886) | Unique ID for this attempt at matchmaking.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchmakingInfo_1a800627839cbce5194f89db4579d5d14c) | session-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchmakingInfo_1a0aa90688b46adb96245d4b9960649e7a) | true if CustomData_Optional has been set to a value
`public FString `[`QueueId_Optional`](#structFRHAPI__MatchmakingInfo_1a1d92d2cd37bae15182fc54edd8819290) | Unique ID for the joined queue.
`public bool `[`QueueId_IsSet`](#structFRHAPI__MatchmakingInfo_1a4f44d8b53c898eb786f281742ac1c9e2) | true if QueueId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingInfo_1a9718b9e172eb5cb3e968848ad93612f0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingInfo_1aac447fa7dd7057d80b33db0d98109d21)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a9cf459b92d8b3628d076579e339b9b84)`()` | Gets the value of TicketId.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a11c0e0ef0b753761420d761d85bc7f27)`() const` | Gets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1abbce2a4bc6b4f74d2ce4eb828eae3dca)`(const FString & NewValue)` | Sets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1a378aa4619d1053675e402214ae0ab61a)`(FString && NewValue)` | Sets the value of TicketId using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a8e9a6e7143b93b2ba742203077505998)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a3b59a2ff99e941c029cb4e6e222d2d68)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a98a2b2b116f635394928749c83b7936a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a5756aab5970cf6e2c3ccb84085d79758)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1aace731bdf5e36da712c3419d502f98d0)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1ac902fb84251ef2a876bbcf8264a28d7c)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1a231fb303a6675f06bbe322dfb98e5f8b)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchmakingInfo_1a7d3cdfbe29068cecec49b03bb1834400)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a62b052cb201b479fe8c6c147d535e720)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1ab41a9abec2c0e11cc1406c85de0a9679)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a9f8f5de68231a75cd9dbfa26f673ca39)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a584aab184a4bff60dcb6061373324dac)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a87acb0888cbe32068e631925c53db155)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a83d1d5daa3780b0b2bf8ce76c8dca6c2)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1aa86c8e7c2df26e654653f5db7e75159d)`(const FString & NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1a12ba3cbe88f3d649678ef9e48fe1fa7f)`(FString && NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.
`public inline void `[`ClearQueueId`](#structFRHAPI__MatchmakingInfo_1a21d733a35471ef1059b550b810e33b31)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.
`public inline bool `[`IsQueueIdSet`](#structFRHAPI__MatchmakingInfo_1af6875f5ec31ddb6ce6dcabc4ca5019f8)`() const` | Checks whether QueueId_Optional has been set.

### Members

#### `public FString `[`TicketId`](#structFRHAPI__MatchmakingInfo_1a18cee065a4d780d93d1cd2a9bfde1886) <a id="structFRHAPI__MatchmakingInfo_1a18cee065a4d780d93d1cd2a9bfde1886"></a>

Unique ID for this attempt at matchmaking.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchmakingInfo_1a800627839cbce5194f89db4579d5d14c) <a id="structFRHAPI__MatchmakingInfo_1a800627839cbce5194f89db4579d5d14c"></a>

session-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchmakingInfo_1a0aa90688b46adb96245d4b9960649e7a) <a id="structFRHAPI__MatchmakingInfo_1a0aa90688b46adb96245d4b9960649e7a"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`QueueId_Optional`](#structFRHAPI__MatchmakingInfo_1a1d92d2cd37bae15182fc54edd8819290) <a id="structFRHAPI__MatchmakingInfo_1a1d92d2cd37bae15182fc54edd8819290"></a>

Unique ID for the joined queue.

#### `public bool `[`QueueId_IsSet`](#structFRHAPI__MatchmakingInfo_1a4f44d8b53c898eb786f281742ac1c9e2) <a id="structFRHAPI__MatchmakingInfo_1a4f44d8b53c898eb786f281742ac1c9e2"></a>

true if QueueId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingInfo_1a9718b9e172eb5cb3e968848ad93612f0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchmakingInfo_1a9718b9e172eb5cb3e968848ad93612f0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingInfo_1aac447fa7dd7057d80b33db0d98109d21)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchmakingInfo_1aac447fa7dd7057d80b33db0d98109d21"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a9cf459b92d8b3628d076579e339b9b84)`()` <a id="structFRHAPI__MatchmakingInfo_1a9cf459b92d8b3628d076579e339b9b84"></a>

Gets the value of TicketId.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a11c0e0ef0b753761420d761d85bc7f27)`() const` <a id="structFRHAPI__MatchmakingInfo_1a11c0e0ef0b753761420d761d85bc7f27"></a>

Gets the value of TicketId.

#### `public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1abbce2a4bc6b4f74d2ce4eb828eae3dca)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1abbce2a4bc6b4f74d2ce4eb828eae3dca"></a>

Sets the value of TicketId.

#### `public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1a378aa4619d1053675e402214ae0ab61a)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a378aa4619d1053675e402214ae0ab61a"></a>

Sets the value of TicketId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a8e9a6e7143b93b2ba742203077505998)`()` <a id="structFRHAPI__MatchmakingInfo_1a8e9a6e7143b93b2ba742203077505998"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a3b59a2ff99e941c029cb4e6e222d2d68)`() const` <a id="structFRHAPI__MatchmakingInfo_1a3b59a2ff99e941c029cb4e6e222d2d68"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a98a2b2b116f635394928749c83b7936a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingInfo_1a98a2b2b116f635394928749c83b7936a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a5756aab5970cf6e2c3ccb84085d79758)`()` <a id="structFRHAPI__MatchmakingInfo_1a5756aab5970cf6e2c3ccb84085d79758"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1aace731bdf5e36da712c3419d502f98d0)`() const` <a id="structFRHAPI__MatchmakingInfo_1aace731bdf5e36da712c3419d502f98d0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1ac902fb84251ef2a876bbcf8264a28d7c)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1ac902fb84251ef2a876bbcf8264a28d7c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1a231fb303a6675f06bbe322dfb98e5f8b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a231fb303a6675f06bbe322dfb98e5f8b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)`()` <a id="structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchmakingInfo_1a7d3cdfbe29068cecec49b03bb1834400)`() const` <a id="structFRHAPI__MatchmakingInfo_1a7d3cdfbe29068cecec49b03bb1834400"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a62b052cb201b479fe8c6c147d535e720)`()` <a id="structFRHAPI__MatchmakingInfo_1a62b052cb201b479fe8c6c147d535e720"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1ab41a9abec2c0e11cc1406c85de0a9679)`() const` <a id="structFRHAPI__MatchmakingInfo_1ab41a9abec2c0e11cc1406c85de0a9679"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a9f8f5de68231a75cd9dbfa26f673ca39)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchmakingInfo_1a9f8f5de68231a75cd9dbfa26f673ca39"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a584aab184a4bff60dcb6061373324dac)`(FString & OutValue) const` <a id="structFRHAPI__MatchmakingInfo_1a584aab184a4bff60dcb6061373324dac"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a87acb0888cbe32068e631925c53db155)`()` <a id="structFRHAPI__MatchmakingInfo_1a87acb0888cbe32068e631925c53db155"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a83d1d5daa3780b0b2bf8ce76c8dca6c2)`() const` <a id="structFRHAPI__MatchmakingInfo_1a83d1d5daa3780b0b2bf8ce76c8dca6c2"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1aa86c8e7c2df26e654653f5db7e75159d)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1aa86c8e7c2df26e654653f5db7e75159d"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

#### `public inline void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1a12ba3cbe88f3d649678ef9e48fe1fa7f)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a12ba3cbe88f3d649678ef9e48fe1fa7f"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueueId`](#structFRHAPI__MatchmakingInfo_1a21d733a35471ef1059b550b810e33b31)`()` <a id="structFRHAPI__MatchmakingInfo_1a21d733a35471ef1059b550b810e33b31"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

#### `public inline bool `[`IsQueueIdSet`](#structFRHAPI__MatchmakingInfo_1af6875f5ec31ddb6ce6dcabc4ca5019f8)`() const` <a id="structFRHAPI__MatchmakingInfo_1af6875f5ec31ddb6ce6dcabc4ca5019f8"></a>

Checks whether QueueId_Optional has been set.

