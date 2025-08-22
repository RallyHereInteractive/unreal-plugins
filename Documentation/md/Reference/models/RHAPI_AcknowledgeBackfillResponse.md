---
title: RHAPI_AcknowledgeBackfillResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AcknowledgeBackfillResponse`](#structFRHAPI__AcknowledgeBackfillResponse) | 

## struct `FRHAPI_AcknowledgeBackfillResponse` <a id="structFRHAPI__AcknowledgeBackfillResponse"></a>

```
struct FRHAPI_AcknowledgeBackfillResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > `[`BackfilledPlayers_Optional`](#structFRHAPI__AcknowledgeBackfillResponse_1a23be359898015fb69c972452087869b7) | List of players that were backfilled. If empty, no players were backfilled.
`public bool `[`BackfilledPlayers_IsSet`](#structFRHAPI__AcknowledgeBackfillResponse_1a9bafa2d898b7b9779b294aeb85e815d1) | true if BackfilledPlayers_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AcknowledgeBackfillResponse_1ae0934cdd892f856686c4df58d5812d3b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AcknowledgeBackfillResponse_1a5ff671481ed4472f168c77bd05e896b5)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1ae18d278986ed19a7c7b222a5f735e27c)`()` | Gets the value of BackfilledPlayers_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a7000a9f7121deebc19f6593578bc7556)`() const` | Gets the value of BackfilledPlayers_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a6a8b526f6bc494d3582a4fa1424a49f1)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & DefaultValue) const` | Gets the value of BackfilledPlayers_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1ad758a7fc2334501dfd1ea48c244b353a)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & OutValue) const` | Fills OutValue with the value of BackfilledPlayers_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > * `[`GetBackfilledPlayersOrNull`](#structFRHAPI__AcknowledgeBackfillResponse_1ab061e15376233b0b2a0a16e43e5622eb)`()` | Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > * `[`GetBackfilledPlayersOrNull`](#structFRHAPI__AcknowledgeBackfillResponse_1a821a02478fb9d9fbba7dac776b8ababd)`() const` | Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a565c2761b813a9f1b8efc20c240329d5)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & NewValue)` | Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true.
`public inline FORCEINLINE void `[`SetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1acc3028f12a7dc6da2452ce3ac360530f)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > && NewValue)` | Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true using move semantics.
`public inline void `[`ClearBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a5df126a7e77babbaedc697a42980a889)`()` | Clears the value of BackfilledPlayers_Optional and sets BackfilledPlayers_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > `[`BackfilledPlayers_Optional`](#structFRHAPI__AcknowledgeBackfillResponse_1a23be359898015fb69c972452087869b7) <a id="structFRHAPI__AcknowledgeBackfillResponse_1a23be359898015fb69c972452087869b7"></a>

List of players that were backfilled. If empty, no players were backfilled.

#### `public bool `[`BackfilledPlayers_IsSet`](#structFRHAPI__AcknowledgeBackfillResponse_1a9bafa2d898b7b9779b294aeb85e815d1) <a id="structFRHAPI__AcknowledgeBackfillResponse_1a9bafa2d898b7b9779b294aeb85e815d1"></a>

true if BackfilledPlayers_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AcknowledgeBackfillResponse_1ae0934cdd892f856686c4df58d5812d3b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AcknowledgeBackfillResponse_1ae0934cdd892f856686c4df58d5812d3b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AcknowledgeBackfillResponse_1a5ff671481ed4472f168c77bd05e896b5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a5ff671481ed4472f168c77bd05e896b5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1ae18d278986ed19a7c7b222a5f735e27c)`()` <a id="structFRHAPI__AcknowledgeBackfillResponse_1ae18d278986ed19a7c7b222a5f735e27c"></a>

Gets the value of BackfilledPlayers_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a7000a9f7121deebc19f6593578bc7556)`() const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a7000a9f7121deebc19f6593578bc7556"></a>

Gets the value of BackfilledPlayers_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a6a8b526f6bc494d3582a4fa1424a49f1)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a6a8b526f6bc494d3582a4fa1424a49f1"></a>

Gets the value of BackfilledPlayers_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1ad758a7fc2334501dfd1ea48c244b353a)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1ad758a7fc2334501dfd1ea48c244b353a"></a>

Fills OutValue with the value of BackfilledPlayers_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > * `[`GetBackfilledPlayersOrNull`](#structFRHAPI__AcknowledgeBackfillResponse_1ab061e15376233b0b2a0a16e43e5622eb)`()` <a id="structFRHAPI__AcknowledgeBackfillResponse_1ab061e15376233b0b2a0a16e43e5622eb"></a>

Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > * `[`GetBackfilledPlayersOrNull`](#structFRHAPI__AcknowledgeBackfillResponse_1a821a02478fb9d9fbba7dac776b8ababd)`() const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a821a02478fb9d9fbba7dac776b8ababd"></a>

Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a565c2761b813a9f1b8efc20c240329d5)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a565c2761b813a9f1b8efc20c240329d5"></a>

Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1acc3028f12a7dc6da2452ce3ac360530f)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillResponse_1acc3028f12a7dc6da2452ce3ac360530f"></a>

Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true using move semantics.

#### `public inline void `[`ClearBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a5df126a7e77babbaedc697a42980a889)`()` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a5df126a7e77babbaedc697a42980a889"></a>

Clears the value of BackfilledPlayers_Optional and sets BackfilledPlayers_IsSet to false.

