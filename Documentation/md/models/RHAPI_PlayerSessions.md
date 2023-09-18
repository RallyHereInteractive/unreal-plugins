# RHAPI_PlayerSessions <a id="group__RHAPI__PlayerSessions"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > `[`Sessions_Optional`](#structFRHAPI__PlayerSessions_1ac0452090142cdd25a70291a47731e4ed) | Session associated with this player, and any pending invites.
`public bool `[`Sessions_IsSet`](#structFRHAPI__PlayerSessions_1a65be3a391fe50890ec37f01d3ac18e0d) | true if Sessions_Optional has been set to a value
`public FDateTime `[`LastUpdatedTimestamp_Optional`](#structFRHAPI__PlayerSessions_1a1421f6c78dbccd3f16e0d373eb93a8c0) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LastUpdatedTimestamp_IsSet`](#structFRHAPI__PlayerSessions_1acb79f047f9fe82dffe5290d34aa4a750) | true if LastUpdatedTimestamp_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerSessions_1a1cbd1f3f619a56d77b46507a8038e523)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerSessions_1a05d62fde50431853d32a40cf9a32ac0a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1aa6986ffaa36620a5719a17f589d79f4b)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a10dd3287bdd0c41e99f7ced2b7dc7507)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a208cd475cdba50f450d9f233ca3d919c)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__PlayerSessions_1ac3bd1f379b91636f171e1fa994082069)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1adfb154252949cd0d9a80807702554686)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1a186fdf0aa80993ab97e5e51d2e1e1a0d)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__PlayerSessions_1ae3d490fea8b14a2b3d05310743ea6f09)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`ClearSessions`](#structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a721f38d6641e78b9930b400bf9112ee3)`()` | Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a3cd547cd72593da70e58358cce255a72)`() const` | Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a261728fd87870f4f529146642b413fe7)`(const FDateTime & DefaultValue) const` | Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1af64484360e07e3dbf4c4477b33ac6523)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a33739c3ea2556fdb10a6183583fe3971)`()` | Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a2560de427b581886661de0c0d9a393bb)`() const` | Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a890896cdf1ba717ef7c12b11f7a540ba)`(FDateTime NewValue)` | Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true.
`public inline void `[`ClearLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0)`()` | Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > `[`Sessions_Optional`](#structFRHAPI__PlayerSessions_1ac0452090142cdd25a70291a47731e4ed) <a id="structFRHAPI__PlayerSessions_1ac0452090142cdd25a70291a47731e4ed"></a>

Session associated with this player, and any pending invites.

<br>
#### `public bool `[`Sessions_IsSet`](#structFRHAPI__PlayerSessions_1a65be3a391fe50890ec37f01d3ac18e0d) <a id="structFRHAPI__PlayerSessions_1a65be3a391fe50890ec37f01d3ac18e0d"></a>

true if Sessions_Optional has been set to a value

<br>
#### `public FDateTime `[`LastUpdatedTimestamp_Optional`](#structFRHAPI__PlayerSessions_1a1421f6c78dbccd3f16e0d373eb93a8c0) <a id="structFRHAPI__PlayerSessions_1a1421f6c78dbccd3f16e0d373eb93a8c0"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`LastUpdatedTimestamp_IsSet`](#structFRHAPI__PlayerSessions_1acb79f047f9fe82dffe5290d34aa4a750) <a id="structFRHAPI__PlayerSessions_1acb79f047f9fe82dffe5290d34aa4a750"></a>

true if LastUpdatedTimestamp_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerSessions_1a1cbd1f3f619a56d77b46507a8038e523)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerSessions_1a1cbd1f3f619a56d77b46507a8038e523"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerSessions_1a05d62fde50431853d32a40cf9a32ac0a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerSessions_1a05d62fde50431853d32a40cf9a32ac0a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1aa6986ffaa36620a5719a17f589d79f4b)`()` <a id="structFRHAPI__PlayerSessions_1aa6986ffaa36620a5719a17f589d79f4b"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a10dd3287bdd0c41e99f7ced2b7dc7507)`() const` <a id="structFRHAPI__PlayerSessions_1a10dd3287bdd0c41e99f7ced2b7dc7507"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & `[`GetSessions`](#structFRHAPI__PlayerSessions_1a208cd475cdba50f450d9f233ca3d919c)`(const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & DefaultValue) const` <a id="structFRHAPI__PlayerSessions_1a208cd475cdba50f450d9f233ca3d919c"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessions`](#structFRHAPI__PlayerSessions_1ac3bd1f379b91636f171e1fa994082069)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > & OutValue) const` <a id="structFRHAPI__PlayerSessions_1ac3bd1f379b91636f171e1fa994082069"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1adfb154252949cd0d9a80807702554686)`()` <a id="structFRHAPI__PlayerSessions_1adfb154252949cd0d9a80807702554686"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__PlayerSessions_1a186fdf0aa80993ab97e5e51d2e1e1a0d)`() const` <a id="structFRHAPI__PlayerSessions_1a186fdf0aa80993ab97e5e51d2e1e1a0d"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessions`](#structFRHAPI__PlayerSessions_1ae3d490fea8b14a2b3d05310743ea6f09)`(TMap< FString, `[`FRHAPI_PlayerSession`](RHAPI_PlayerSession.md#structFRHAPI__PlayerSession)` > NewValue)` <a id="structFRHAPI__PlayerSessions_1ae3d490fea8b14a2b3d05310743ea6f09"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

<br>
#### `public inline void `[`ClearSessions`](#structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910)`()` <a id="structFRHAPI__PlayerSessions_1a11f4d310ceb782cf2b7912bb7d853910"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a721f38d6641e78b9930b400bf9112ee3)`()` <a id="structFRHAPI__PlayerSessions_1a721f38d6641e78b9930b400bf9112ee3"></a>

Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a3cd547cd72593da70e58358cce255a72)`() const` <a id="structFRHAPI__PlayerSessions_1a3cd547cd72593da70e58358cce255a72"></a>

Gets the value of LastUpdatedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a261728fd87870f4f529146642b413fe7)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerSessions_1a261728fd87870f4f529146642b413fe7"></a>

Gets the value of LastUpdatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1af64484360e07e3dbf4c4477b33ac6523)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerSessions_1af64484360e07e3dbf4c4477b33ac6523"></a>

Fills OutValue with the value of LastUpdatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a33739c3ea2556fdb10a6183583fe3971)`()` <a id="structFRHAPI__PlayerSessions_1a33739c3ea2556fdb10a6183583fe3971"></a>

Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetLastUpdatedTimestampOrNull`](#structFRHAPI__PlayerSessions_1a2560de427b581886661de0c0d9a393bb)`() const` <a id="structFRHAPI__PlayerSessions_1a2560de427b581886661de0c0d9a393bb"></a>

Returns a pointer to LastUpdatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a890896cdf1ba717ef7c12b11f7a540ba)`(FDateTime NewValue)` <a id="structFRHAPI__PlayerSessions_1a890896cdf1ba717ef7c12b11f7a540ba"></a>

Sets the value of LastUpdatedTimestamp_Optional and also sets LastUpdatedTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearLastUpdatedTimestamp`](#structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0)`()` <a id="structFRHAPI__PlayerSessions_1a158685391d310a57b456883520d177d0"></a>

Clears the value of LastUpdatedTimestamp_Optional and sets LastUpdatedTimestamp_IsSet to false.

<br>
