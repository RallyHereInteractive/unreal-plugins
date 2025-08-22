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
`public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingInfo_1af002a972afc1956ce1cdc2dbdde16683)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1abe9394fcde3b379a6b8f47901cc2eff7)`()` | Gets the value of TicketId.
`public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a1bf593b3e848bb8d813e0e0d89e8da10)`() const` | Gets the value of TicketId.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1a578edd841f0e6b3a90db7bc74df667bc)`(const FString & NewValue)` | Sets the value of TicketId.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1ab4aed436f47fb155f2a86243fb7900a3)`(FString && NewValue)` | Sets the value of TicketId using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1adb8e2a3f7c3c2bfd1763ce43e41001c7)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a71074a07eea9fba4fd4c070cee3336e9)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a61bb5feea8a6273749cf45591978ef34)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1aef27639bbfa2a4bcc8d721f2fe072729)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a455368d700e388c89ffc1a0602915583)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a186228c3cf9adad992adb73eea8ed988)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1abfb5795982f27c92b6c372d14d02c490)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1a9e6def58e45d94961eb23499bb5bb6d5)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a6b65e55b7fc8957a0ef53102e7801e17)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1aba8eda5164a1d37def3a62c99f389cf0)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1aa073073803f532363484a0fd9829a503)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a60c67cc0d7399f451b4559a22410c709)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a840e4975c55b3b254b43f8c02a28e3b9)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a31bed1ffbd7c7a5a7dfcfd0ee3bfea50)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1a685c6eef5c2ae1073577736a404ae798)`(const FString & NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1a4662e0aff9bfade4d7f90914a5961fc4)`(FString && NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.
`public inline void `[`ClearQueueId`](#structFRHAPI__MatchmakingInfo_1a21d733a35471ef1059b550b810e33b31)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingInfo_1af002a972afc1956ce1cdc2dbdde16683)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchmakingInfo_1af002a972afc1956ce1cdc2dbdde16683"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1abe9394fcde3b379a6b8f47901cc2eff7)`()` <a id="structFRHAPI__MatchmakingInfo_1abe9394fcde3b379a6b8f47901cc2eff7"></a>

Gets the value of TicketId.

#### `public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a1bf593b3e848bb8d813e0e0d89e8da10)`() const` <a id="structFRHAPI__MatchmakingInfo_1a1bf593b3e848bb8d813e0e0d89e8da10"></a>

Gets the value of TicketId.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1a578edd841f0e6b3a90db7bc74df667bc)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a578edd841f0e6b3a90db7bc74df667bc"></a>

Sets the value of TicketId.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1ab4aed436f47fb155f2a86243fb7900a3)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1ab4aed436f47fb155f2a86243fb7900a3"></a>

Sets the value of TicketId using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1adb8e2a3f7c3c2bfd1763ce43e41001c7)`()` <a id="structFRHAPI__MatchmakingInfo_1adb8e2a3f7c3c2bfd1763ce43e41001c7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a71074a07eea9fba4fd4c070cee3336e9)`() const` <a id="structFRHAPI__MatchmakingInfo_1a71074a07eea9fba4fd4c070cee3336e9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a61bb5feea8a6273749cf45591978ef34)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingInfo_1a61bb5feea8a6273749cf45591978ef34"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1aef27639bbfa2a4bcc8d721f2fe072729)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchmakingInfo_1aef27639bbfa2a4bcc8d721f2fe072729"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a455368d700e388c89ffc1a0602915583)`()` <a id="structFRHAPI__MatchmakingInfo_1a455368d700e388c89ffc1a0602915583"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a186228c3cf9adad992adb73eea8ed988)`() const` <a id="structFRHAPI__MatchmakingInfo_1a186228c3cf9adad992adb73eea8ed988"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1abfb5795982f27c92b6c372d14d02c490)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1abfb5795982f27c92b6c372d14d02c490"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1a9e6def58e45d94961eb23499bb5bb6d5)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a9e6def58e45d94961eb23499bb5bb6d5"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)`()` <a id="structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a6b65e55b7fc8957a0ef53102e7801e17)`()` <a id="structFRHAPI__MatchmakingInfo_1a6b65e55b7fc8957a0ef53102e7801e17"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1aba8eda5164a1d37def3a62c99f389cf0)`() const` <a id="structFRHAPI__MatchmakingInfo_1aba8eda5164a1d37def3a62c99f389cf0"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1aa073073803f532363484a0fd9829a503)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchmakingInfo_1aa073073803f532363484a0fd9829a503"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a60c67cc0d7399f451b4559a22410c709)`(FString & OutValue) const` <a id="structFRHAPI__MatchmakingInfo_1a60c67cc0d7399f451b4559a22410c709"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a840e4975c55b3b254b43f8c02a28e3b9)`()` <a id="structFRHAPI__MatchmakingInfo_1a840e4975c55b3b254b43f8c02a28e3b9"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a31bed1ffbd7c7a5a7dfcfd0ee3bfea50)`() const` <a id="structFRHAPI__MatchmakingInfo_1a31bed1ffbd7c7a5a7dfcfd0ee3bfea50"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1a685c6eef5c2ae1073577736a404ae798)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a685c6eef5c2ae1073577736a404ae798"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1a4662e0aff9bfade4d7f90914a5961fc4)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a4662e0aff9bfade4d7f90914a5961fc4"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueueId`](#structFRHAPI__MatchmakingInfo_1a21d733a35471ef1059b550b810e33b31)`()` <a id="structFRHAPI__MatchmakingInfo_1a21d733a35471ef1059b550b810e33b31"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

