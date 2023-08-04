# RHAPI_TrueskillTeam <a id="group__RHAPI__TrueskillTeam"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TrueskillTeam`](#structFRHAPI__TrueskillTeam) | 

## struct `FRHAPI_TrueskillTeam` <a id="structFRHAPI__TrueskillTeam"></a>

```
struct FRHAPI_TrueskillTeam
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_TrueskillRank`](RHAPI_TrueskillRank.md#structFRHAPI__TrueskillRank)` > `[`Players`](#structFRHAPI__TrueskillTeam_1a07f2662b362485fede252e790e1b484c) | List of PlayerRankUpdate objects that give stats about a specific player from the match.
`public int32 `[`TeamRank`](#structFRHAPI__TrueskillTeam_1a9d74dfaf90a7d4d35829cd5b34acac4a) | What rank this team came in. 1 indicates victory, and higher values are placements. Matching ranks indicate draws.
`public virtual bool `[`FromJson`](#structFRHAPI__TrueskillTeam_1aa4d84ecca6e7ba0337266e9926a58749)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TrueskillTeam_1a873135cdbc3376a3a12bc4748bcde778)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_TrueskillRank`](RHAPI_TrueskillRank.md#structFRHAPI__TrueskillRank)` > & `[`GetPlayers`](#structFRHAPI__TrueskillTeam_1a31dc120479a92c111db1833d8c04bc7a)`()` | Gets the value of Players.
`public inline const TArray< `[`FRHAPI_TrueskillRank`](RHAPI_TrueskillRank.md#structFRHAPI__TrueskillRank)` > & `[`GetPlayers`](#structFRHAPI__TrueskillTeam_1a8f2867fd7e29b848ff92f267bb5c52c3)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__TrueskillTeam_1aed4ed9e04f8431ff319ae7aa801ba44b)`(TArray< `[`FRHAPI_TrueskillRank`](RHAPI_TrueskillRank.md#structFRHAPI__TrueskillRank)` > NewValue)` | Sets the value of Players.
`public inline int32 & `[`GetTeamRank`](#structFRHAPI__TrueskillTeam_1abf906011467f2a1abbf12b610948b879)`()` | Gets the value of TeamRank.
`public inline const int32 & `[`GetTeamRank`](#structFRHAPI__TrueskillTeam_1ac372e99025035e11f9c5b9437846615a)`() const` | Gets the value of TeamRank.
`public inline void `[`SetTeamRank`](#structFRHAPI__TrueskillTeam_1a21353530617b05b8e743c22f93ea7965)`(int32 NewValue)` | Sets the value of TeamRank.
`public inline bool `[`IsTeamRankDefaultValue`](#structFRHAPI__TrueskillTeam_1a994c681ebf3b545f614134bee8f6ae8e)`() const` | Returns true if TeamRank matches the default value.
`public inline void `[`SetTeamRankToDefault`](#structFRHAPI__TrueskillTeam_1a8c938a512b14ee1fe0ffab54f5c2e9d1)`()` | Sets the value of TeamRank to its default

#### Members

#### `public TArray< `[`FRHAPI_TrueskillRank`](RHAPI_TrueskillRank.md#structFRHAPI__TrueskillRank)` > `[`Players`](#structFRHAPI__TrueskillTeam_1a07f2662b362485fede252e790e1b484c) <a id="structFRHAPI__TrueskillTeam_1a07f2662b362485fede252e790e1b484c"></a>

List of PlayerRankUpdate objects that give stats about a specific player from the match.

<br>
#### `public int32 `[`TeamRank`](#structFRHAPI__TrueskillTeam_1a9d74dfaf90a7d4d35829cd5b34acac4a) <a id="structFRHAPI__TrueskillTeam_1a9d74dfaf90a7d4d35829cd5b34acac4a"></a>

What rank this team came in. 1 indicates victory, and higher values are placements. Matching ranks indicate draws.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__TrueskillTeam_1aa4d84ecca6e7ba0337266e9926a58749)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TrueskillTeam_1aa4d84ecca6e7ba0337266e9926a58749"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__TrueskillTeam_1a873135cdbc3376a3a12bc4748bcde778)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TrueskillTeam_1a873135cdbc3376a3a12bc4748bcde778"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_TrueskillRank`](RHAPI_TrueskillRank.md#structFRHAPI__TrueskillRank)` > & `[`GetPlayers`](#structFRHAPI__TrueskillTeam_1a31dc120479a92c111db1833d8c04bc7a)`()` <a id="structFRHAPI__TrueskillTeam_1a31dc120479a92c111db1833d8c04bc7a"></a>

Gets the value of Players.

<br>
#### `public inline const TArray< `[`FRHAPI_TrueskillRank`](RHAPI_TrueskillRank.md#structFRHAPI__TrueskillRank)` > & `[`GetPlayers`](#structFRHAPI__TrueskillTeam_1a8f2867fd7e29b848ff92f267bb5c52c3)`() const` <a id="structFRHAPI__TrueskillTeam_1a8f2867fd7e29b848ff92f267bb5c52c3"></a>

Gets the value of Players.

<br>
#### `public inline void `[`SetPlayers`](#structFRHAPI__TrueskillTeam_1aed4ed9e04f8431ff319ae7aa801ba44b)`(TArray< `[`FRHAPI_TrueskillRank`](RHAPI_TrueskillRank.md#structFRHAPI__TrueskillRank)` > NewValue)` <a id="structFRHAPI__TrueskillTeam_1aed4ed9e04f8431ff319ae7aa801ba44b"></a>

Sets the value of Players.

<br>
#### `public inline int32 & `[`GetTeamRank`](#structFRHAPI__TrueskillTeam_1abf906011467f2a1abbf12b610948b879)`()` <a id="structFRHAPI__TrueskillTeam_1abf906011467f2a1abbf12b610948b879"></a>

Gets the value of TeamRank.

<br>
#### `public inline const int32 & `[`GetTeamRank`](#structFRHAPI__TrueskillTeam_1ac372e99025035e11f9c5b9437846615a)`() const` <a id="structFRHAPI__TrueskillTeam_1ac372e99025035e11f9c5b9437846615a"></a>

Gets the value of TeamRank.

<br>
#### `public inline void `[`SetTeamRank`](#structFRHAPI__TrueskillTeam_1a21353530617b05b8e743c22f93ea7965)`(int32 NewValue)` <a id="structFRHAPI__TrueskillTeam_1a21353530617b05b8e743c22f93ea7965"></a>

Sets the value of TeamRank.

<br>
#### `public inline bool `[`IsTeamRankDefaultValue`](#structFRHAPI__TrueskillTeam_1a994c681ebf3b545f614134bee8f6ae8e)`() const` <a id="structFRHAPI__TrueskillTeam_1a994c681ebf3b545f614134bee8f6ae8e"></a>

Returns true if TeamRank matches the default value.

<br>
#### `public inline void `[`SetTeamRankToDefault`](#structFRHAPI__TrueskillTeam_1a8c938a512b14ee1fe0ffab54f5c2e9d1)`()` <a id="structFRHAPI__TrueskillTeam_1a8c938a512b14ee1fe0ffab54f5c2e9d1"></a>

Sets the value of TeamRank to its default

<br>
