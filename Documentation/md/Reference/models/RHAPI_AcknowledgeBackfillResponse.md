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
`public inline TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a1afb20f2a11564f889956d4229ff3579)`()` | Gets the value of BackfilledPlayers_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1afeedcb95b3a1739a498ea2cc7e4f2837)`() const` | Gets the value of BackfilledPlayers_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a2a3f1f14ca3e162bdda7c783172eac8c)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & DefaultValue) const` | Gets the value of BackfilledPlayers_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a2cbc045425237f6f8899b282908596a1)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & OutValue) const` | Fills OutValue with the value of BackfilledPlayers_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > * `[`GetBackfilledPlayersOrNull`](#structFRHAPI__AcknowledgeBackfillResponse_1ab41be0b3d9d95d6bd510d0ab91a7f92e)`()` | Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > * `[`GetBackfilledPlayersOrNull`](#structFRHAPI__AcknowledgeBackfillResponse_1aa32d81adb941c11bd1fbbc1fa72d75da)`() const` | Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a74a0b13b8e8d8e5380d4a57a272270a4)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & NewValue)` | Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true.
`public inline void `[`SetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1af194803db96207bafe13f14feeea0526)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > && NewValue)` | Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true using move semantics.
`public inline void `[`ClearBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a5df126a7e77babbaedc697a42980a889)`()` | Clears the value of BackfilledPlayers_Optional and sets BackfilledPlayers_IsSet to false.
`public inline bool `[`IsBackfilledPlayersSet`](#structFRHAPI__AcknowledgeBackfillResponse_1a7a58bc88e55d1153a3cac4ed6a172e01)`() const` | Checks whether BackfilledPlayers_Optional has been set.

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

#### `public inline TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a1afb20f2a11564f889956d4229ff3579)`()` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a1afb20f2a11564f889956d4229ff3579"></a>

Gets the value of BackfilledPlayers_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1afeedcb95b3a1739a498ea2cc7e4f2837)`() const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1afeedcb95b3a1739a498ea2cc7e4f2837"></a>

Gets the value of BackfilledPlayers_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a2a3f1f14ca3e162bdda7c783172eac8c)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a2a3f1f14ca3e162bdda7c783172eac8c"></a>

Gets the value of BackfilledPlayers_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a2cbc045425237f6f8899b282908596a1)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a2cbc045425237f6f8899b282908596a1"></a>

Fills OutValue with the value of BackfilledPlayers_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > * `[`GetBackfilledPlayersOrNull`](#structFRHAPI__AcknowledgeBackfillResponse_1ab41be0b3d9d95d6bd510d0ab91a7f92e)`()` <a id="structFRHAPI__AcknowledgeBackfillResponse_1ab41be0b3d9d95d6bd510d0ab91a7f92e"></a>

Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > * `[`GetBackfilledPlayersOrNull`](#structFRHAPI__AcknowledgeBackfillResponse_1aa32d81adb941c11bd1fbbc1fa72d75da)`() const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1aa32d81adb941c11bd1fbbc1fa72d75da"></a>

Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a74a0b13b8e8d8e5380d4a57a272270a4)`(const TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a74a0b13b8e8d8e5380d4a57a272270a4"></a>

Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true.

#### `public inline void `[`SetBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1af194803db96207bafe13f14feeea0526)`(TArray< `[`FRHAPI_SessionPlayer`](RHAPI_SessionPlayer.md#structFRHAPI__SessionPlayer)` > && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillResponse_1af194803db96207bafe13f14feeea0526"></a>

Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true using move semantics.

#### `public inline void `[`ClearBackfilledPlayers`](#structFRHAPI__AcknowledgeBackfillResponse_1a5df126a7e77babbaedc697a42980a889)`()` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a5df126a7e77babbaedc697a42980a889"></a>

Clears the value of BackfilledPlayers_Optional and sets BackfilledPlayers_IsSet to false.

#### `public inline bool `[`IsBackfilledPlayersSet`](#structFRHAPI__AcknowledgeBackfillResponse_1a7a58bc88e55d1153a3cac4ed6a172e01)`() const` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a7a58bc88e55d1153a3cac4ed6a172e01"></a>

Checks whether BackfilledPlayers_Optional has been set.

