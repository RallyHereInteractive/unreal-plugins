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
`public inline FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a2ee45e6216abd0095f6016d0a816861a)`()` | Gets the value of TicketId.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a8ed9f0075b2d407597bc54d63c15da2e)`() const` | Gets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1abbce2a4bc6b4f74d2ce4eb828eae3dca)`(const FString & NewValue)` | Sets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1a378aa4619d1053675e402214ae0ab61a)`(FString && NewValue)` | Sets the value of TicketId using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1acdf18f2b0f9f2dce5f24bd7c66bf1199)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1aa84e10b1b283a803d8d98fb695c38437)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1ae715001dd5fc86e2e3ea92a4549d5884)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1ac18c23dc18d860304dccc78b423ce81c)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a6334c54cf53b3bab832604932ca1c602)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1ac902fb84251ef2a876bbcf8264a28d7c)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1a231fb303a6675f06bbe322dfb98e5f8b)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchmakingInfo_1a7d3cdfbe29068cecec49b03bb1834400)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1aba31e0788f7952d618bf436a7611e1ed)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a4fb1da4da0a19d7842b0428189ed487e)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a74ad179f2400fd69b2436f73f363a199)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a584aab184a4bff60dcb6061373324dac)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a2806ba2119a19d8ff85a76eedb706fec)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a78f98e94e8f7a66a3ad4dfdd60598906)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingInfo_1af002a972afc1956ce1cdc2dbdde16683)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchmakingInfo_1af002a972afc1956ce1cdc2dbdde16683"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a2ee45e6216abd0095f6016d0a816861a)`()` <a id="structFRHAPI__MatchmakingInfo_1a2ee45e6216abd0095f6016d0a816861a"></a>

Gets the value of TicketId.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a8ed9f0075b2d407597bc54d63c15da2e)`() const` <a id="structFRHAPI__MatchmakingInfo_1a8ed9f0075b2d407597bc54d63c15da2e"></a>

Gets the value of TicketId.

#### `public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1abbce2a4bc6b4f74d2ce4eb828eae3dca)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1abbce2a4bc6b4f74d2ce4eb828eae3dca"></a>

Sets the value of TicketId.

#### `public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1a378aa4619d1053675e402214ae0ab61a)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a378aa4619d1053675e402214ae0ab61a"></a>

Sets the value of TicketId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1acdf18f2b0f9f2dce5f24bd7c66bf1199)`()` <a id="structFRHAPI__MatchmakingInfo_1acdf18f2b0f9f2dce5f24bd7c66bf1199"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1aa84e10b1b283a803d8d98fb695c38437)`() const` <a id="structFRHAPI__MatchmakingInfo_1aa84e10b1b283a803d8d98fb695c38437"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1ae715001dd5fc86e2e3ea92a4549d5884)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingInfo_1ae715001dd5fc86e2e3ea92a4549d5884"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1ac18c23dc18d860304dccc78b423ce81c)`()` <a id="structFRHAPI__MatchmakingInfo_1ac18c23dc18d860304dccc78b423ce81c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a6334c54cf53b3bab832604932ca1c602)`() const` <a id="structFRHAPI__MatchmakingInfo_1a6334c54cf53b3bab832604932ca1c602"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1ac902fb84251ef2a876bbcf8264a28d7c)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1ac902fb84251ef2a876bbcf8264a28d7c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1a231fb303a6675f06bbe322dfb98e5f8b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a231fb303a6675f06bbe322dfb98e5f8b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)`()` <a id="structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchmakingInfo_1a7d3cdfbe29068cecec49b03bb1834400)`() const` <a id="structFRHAPI__MatchmakingInfo_1a7d3cdfbe29068cecec49b03bb1834400"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1aba31e0788f7952d618bf436a7611e1ed)`()` <a id="structFRHAPI__MatchmakingInfo_1aba31e0788f7952d618bf436a7611e1ed"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a4fb1da4da0a19d7842b0428189ed487e)`() const` <a id="structFRHAPI__MatchmakingInfo_1a4fb1da4da0a19d7842b0428189ed487e"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a74ad179f2400fd69b2436f73f363a199)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchmakingInfo_1a74ad179f2400fd69b2436f73f363a199"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQueueId`](#structFRHAPI__MatchmakingInfo_1a584aab184a4bff60dcb6061373324dac)`(FString & OutValue) const` <a id="structFRHAPI__MatchmakingInfo_1a584aab184a4bff60dcb6061373324dac"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a2806ba2119a19d8ff85a76eedb706fec)`()` <a id="structFRHAPI__MatchmakingInfo_1a2806ba2119a19d8ff85a76eedb706fec"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__MatchmakingInfo_1a78f98e94e8f7a66a3ad4dfdd60598906)`() const` <a id="structFRHAPI__MatchmakingInfo_1a78f98e94e8f7a66a3ad4dfdd60598906"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1aa86c8e7c2df26e654653f5db7e75159d)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingInfo_1aa86c8e7c2df26e654653f5db7e75159d"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

#### `public inline void `[`SetQueueId`](#structFRHAPI__MatchmakingInfo_1a12ba3cbe88f3d649678ef9e48fe1fa7f)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingInfo_1a12ba3cbe88f3d649678ef9e48fe1fa7f"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueueId`](#structFRHAPI__MatchmakingInfo_1a21d733a35471ef1059b550b810e33b31)`()` <a id="structFRHAPI__MatchmakingInfo_1a21d733a35471ef1059b550b810e33b31"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

#### `public inline bool `[`IsQueueIdSet`](#structFRHAPI__MatchmakingInfo_1af6875f5ec31ddb6ce6dcabc4ca5019f8)`() const` <a id="structFRHAPI__MatchmakingInfo_1af6875f5ec31ddb6ce6dcabc4ca5019f8"></a>

Checks whether QueueId_Optional has been set.

