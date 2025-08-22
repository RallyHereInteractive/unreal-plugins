---
title: RHAPI_PlayerSessions
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerSessions`](#structFRHAPI__PlayerSessions) | Information about all sessions that a player is currently a member of, or invited to.

## struct `FRHAPI_PlayerSessions` <a id="structFRHAPI__PlayerSessions"></a>

```
struct FRHAPI_PlayerSessions
  : public FRHAPI_Model
```

Information about all sessions that a player is currently a member of, or invited to.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > `[`Sessions_Optional`](#structFRHAPI__PlayerSessions_1ac0452090142cdd25a70291a47731e4ed) | Session associated with this player, and any pending invites.
`public bool `[`Sessions_IsSet`](#structFRHAPI__PlayerSessions_1a65be3a391fe50890ec37f01d3ac18e0d) | true if Sessions_Optional has been set to a value
`public FDateTime `[`LastUpdatedTimestamp_Optional`](#structFRHAPI__PlayerSessions_1a1421f6c78dbccd3f16e0d373eb93a8c0) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LastUpdatedTimestamp_IsSet`](#structFRHAPI__PlayerSessions_1acb79f047f9fe82dffe5290d34aa4a750) | true if LastUpdatedTimestamp_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerSessions_1a27d07993c833ae5d62c6279a843d1578)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerSessions_1a18ec33218d00f80592330e547024bec1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a96bcf36d8f9a209167a3e90bd2a55b89)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a5b675ee76ced360ace3fd0753c478d7c)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a714397178e2e2f86039db0bd04e976e7)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__PlayerSessions_1acee09cb9b23a2549cf37f5d37e9565a1)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1a6a65a702733637ab2b7862db81b8b8b7)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1a68ff6f197a07bdb88d9247f2ff14b854)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__PlayerSessions_1a2925533fbb391189c65d3ee3a12f261a)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__PlayerSessions_1a4e4c30b90042149026aae9168ffd243e)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1ae3246d85ac4f880edc04f0ff77f76194)`()` | Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a38910cc29a60514217ac2ea06ea40eb0)`() const` | Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1af526f118162a5a6880b1553583cd7b05)`(const FDateTime & DefaultValue) const` | Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a9ced058742f81866293f8f98fee10338)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a970e792c1f659195074f0836df3fb145)`()` | Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a4a48f04c9cd55dee7d25f3c479d556b2)`() const` | Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1ac3a856d10d2dd8e9b30a5bd6674b7966)`(const FDateTime & NewValue)` | Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1ad569f29541f4ccbbd9f158fe706961dd)`(FDateTime && NewValue)` | Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0)`()` | Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false.

### Members

#### `public TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > `[`Sessions_Optional`](#structFRHAPI__PlayerSessions_1ac0452090142cdd25a70291a47731e4ed) <a id="structFRHAPI__PlayerSessions_1ac0452090142cdd25a70291a47731e4ed"></a>

Session associated with this player, and any pending invites.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__PlayerSessions_1a65be3a391fe50890ec37f01d3ac18e0d) <a id="structFRHAPI__PlayerSessions_1a65be3a391fe50890ec37f01d3ac18e0d"></a>

true if Sessions_Optional has been set to a value

#### `public FDateTime `[`LastUpdatedTimestamp_Optional`](#structFRHAPI__PlayerSessions_1a1421f6c78dbccd3f16e0d373eb93a8c0) <a id="structFRHAPI__PlayerSessions_1a1421f6c78dbccd3f16e0d373eb93a8c0"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LastUpdatedTimestamp_IsSet`](#structFRHAPI__PlayerSessions_1acb79f047f9fe82dffe5290d34aa4a750) <a id="structFRHAPI__PlayerSessions_1acb79f047f9fe82dffe5290d34aa4a750"></a>

true if LastUpdatedTimestamp_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerSessions_1a27d07993c833ae5d62c6279a843d1578)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerSessions_1a27d07993c833ae5d62c6279a843d1578"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerSessions_1a18ec33218d00f80592330e547024bec1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerSessions_1a18ec33218d00f80592330e547024bec1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a96bcf36d8f9a209167a3e90bd2a55b89)`()` <a id="structFRHAPI__PlayerSessions_1a96bcf36d8f9a209167a3e90bd2a55b89"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a5b675ee76ced360ace3fd0753c478d7c)`() const` <a id="structFRHAPI__PlayerSessions_1a5b675ee76ced360ace3fd0753c478d7c"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a714397178e2e2f86039db0bd04e976e7)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & DefaultValue) const` <a id="structFRHAPI__PlayerSessions_1a714397178e2e2f86039db0bd04e976e7"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__PlayerSessions_1acee09cb9b23a2549cf37f5d37e9565a1)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & OutValue) const` <a id="structFRHAPI__PlayerSessions_1acee09cb9b23a2549cf37f5d37e9565a1"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1a6a65a702733637ab2b7862db81b8b8b7)`()` <a id="structFRHAPI__PlayerSessions_1a6a65a702733637ab2b7862db81b8b8b7"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1a68ff6f197a07bdb88d9247f2ff14b854)`() const` <a id="structFRHAPI__PlayerSessions_1a68ff6f197a07bdb88d9247f2ff14b854"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__PlayerSessions_1a2925533fbb391189c65d3ee3a12f261a)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & NewValue)` <a id="structFRHAPI__PlayerSessions_1a2925533fbb391189c65d3ee3a12f261a"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__PlayerSessions_1a4e4c30b90042149026aae9168ffd243e)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > && NewValue)` <a id="structFRHAPI__PlayerSessions_1a4e4c30b90042149026aae9168ffd243e"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910)`()` <a id="structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1ae3246d85ac4f880edc04f0ff77f76194)`()` <a id="structFRHAPI__PlayerSessions_1ae3246d85ac4f880edc04f0ff77f76194"></a>

Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a38910cc29a60514217ac2ea06ea40eb0)`() const` <a id="structFRHAPI__PlayerSessions_1a38910cc29a60514217ac2ea06ea40eb0"></a>

Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1af526f118162a5a6880b1553583cd7b05)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerSessions_1af526f118162a5a6880b1553583cd7b05"></a>

Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a9ced058742f81866293f8f98fee10338)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerSessions_1a9ced058742f81866293f8f98fee10338"></a>

Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a970e792c1f659195074f0836df3fb145)`()` <a id="structFRHAPI__PlayerSessions_1a970e792c1f659195074f0836df3fb145"></a>

Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a4a48f04c9cd55dee7d25f3c479d556b2)`() const` <a id="structFRHAPI__PlayerSessions_1a4a48f04c9cd55dee7d25f3c479d556b2"></a>

Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1ac3a856d10d2dd8e9b30a5bd6674b7966)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerSessions_1ac3a856d10d2dd8e9b30a5bd6674b7966"></a>

Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1ad569f29541f4ccbbd9f158fe706961dd)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerSessions_1ad569f29541f4ccbbd9f158fe706961dd"></a>

Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0)`()` <a id="structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0"></a>

Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false.

