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
`public inline TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1ac78532aeb1c32334c80060c3f6702faa)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1aebb555feba0bb1044b3305ccda7261ee)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a966210d27f3d7c7d0f66e37eb6437bb7)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__PlayerSessions_1ac3bd1f379b91636f171e1fa994082069)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1aaa05bdcf6446d33f5f0b3aeca9ce34a3)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1a72c4d3162d4ccbc9f4df434862a18f8e)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__PlayerSessions_1a2d7278304d58641f5a3319db000c8167)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__PlayerSessions_1a11667546d3715b4e5228ab018cdc00e2)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__PlayerSessions_1ae5c31c6ac88da074d0300dabb7bb7add)`() const` | Checks whether Sessions_Optional has been set.
`public inline FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1abe5dce7fa3ca285bcfb19c4a59a060b8)`()` | Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a8c066a225f83fe99816ee1b4f9fb6fa7)`() const` | Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a3ac4511802ba1e3b01df881bf6db4345)`(const FDateTime & DefaultValue) const` | Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1af64484360e07e3dbf4c4477b33ac6523)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a457c56e0bd64ffbbe03a103ed74b9e38)`()` | Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1afc02ff0693978dafd1c4071e75971958)`() const` | Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a09e232169df2f6c1e5af94f516c54642)`(const FDateTime & NewValue)` | Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true.
`public inline void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1afc0df868eb60e73c679e2e5468b5c39b)`(FDateTime && NewValue)` | Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0)`()` | Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false.
`public inline bool `[`IsLastUpdatedTimestampSet`](#structFRHAPI__PlayerSessions_1aed1bda3a496e8de0bb6ed4151949fa38)`() const` | Checks whether LastUpdatedTimestamp_Optional has been set.

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

#### `public inline TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1ac78532aeb1c32334c80060c3f6702faa)`()` <a id="structFRHAPI__PlayerSessions_1ac78532aeb1c32334c80060c3f6702faa"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1aebb555feba0bb1044b3305ccda7261ee)`() const` <a id="structFRHAPI__PlayerSessions_1aebb555feba0bb1044b3305ccda7261ee"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a966210d27f3d7c7d0f66e37eb6437bb7)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & DefaultValue) const` <a id="structFRHAPI__PlayerSessions_1a966210d27f3d7c7d0f66e37eb6437bb7"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__PlayerSessions_1ac3bd1f379b91636f171e1fa994082069)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & OutValue) const` <a id="structFRHAPI__PlayerSessions_1ac3bd1f379b91636f171e1fa994082069"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1aaa05bdcf6446d33f5f0b3aeca9ce34a3)`()` <a id="structFRHAPI__PlayerSessions_1aaa05bdcf6446d33f5f0b3aeca9ce34a3"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1a72c4d3162d4ccbc9f4df434862a18f8e)`() const` <a id="structFRHAPI__PlayerSessions_1a72c4d3162d4ccbc9f4df434862a18f8e"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__PlayerSessions_1a2d7278304d58641f5a3319db000c8167)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & NewValue)` <a id="structFRHAPI__PlayerSessions_1a2d7278304d58641f5a3319db000c8167"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__PlayerSessions_1a11667546d3715b4e5228ab018cdc00e2)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > && NewValue)` <a id="structFRHAPI__PlayerSessions_1a11667546d3715b4e5228ab018cdc00e2"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910)`()` <a id="structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__PlayerSessions_1ae5c31c6ac88da074d0300dabb7bb7add)`() const` <a id="structFRHAPI__PlayerSessions_1ae5c31c6ac88da074d0300dabb7bb7add"></a>

Checks whether Sessions_Optional has been set.

#### `public inline FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1abe5dce7fa3ca285bcfb19c4a59a060b8)`()` <a id="structFRHAPI__PlayerSessions_1abe5dce7fa3ca285bcfb19c4a59a060b8"></a>

Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a8c066a225f83fe99816ee1b4f9fb6fa7)`() const` <a id="structFRHAPI__PlayerSessions_1a8c066a225f83fe99816ee1b4f9fb6fa7"></a>

Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a3ac4511802ba1e3b01df881bf6db4345)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerSessions_1a3ac4511802ba1e3b01df881bf6db4345"></a>

Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1af64484360e07e3dbf4c4477b33ac6523)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerSessions_1af64484360e07e3dbf4c4477b33ac6523"></a>

Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a457c56e0bd64ffbbe03a103ed74b9e38)`()` <a id="structFRHAPI__PlayerSessions_1a457c56e0bd64ffbbe03a103ed74b9e38"></a>

Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1afc02ff0693978dafd1c4071e75971958)`() const` <a id="structFRHAPI__PlayerSessions_1afc02ff0693978dafd1c4071e75971958"></a>

Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a09e232169df2f6c1e5af94f516c54642)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerSessions_1a09e232169df2f6c1e5af94f516c54642"></a>

Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true.

#### `public inline void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1afc0df868eb60e73c679e2e5468b5c39b)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerSessions_1afc0df868eb60e73c679e2e5468b5c39b"></a>

Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0)`()` <a id="structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0"></a>

Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false.

#### `public inline bool `[`IsLastUpdatedTimestampSet`](#structFRHAPI__PlayerSessions_1aed1bda3a496e8de0bb6ed4151949fa38)`() const` <a id="structFRHAPI__PlayerSessions_1aed1bda3a496e8de0bb6ed4151949fa38"></a>

Checks whether LastUpdatedTimestamp_Optional has been set.

