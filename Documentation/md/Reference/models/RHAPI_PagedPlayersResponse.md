---
title: RHAPI_PagedPlayersResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PagedPlayersResponse`](#structFRHAPI__PagedPlayersResponse) | 

## struct `FRHAPI_PagedPlayersResponse` <a id="structFRHAPI__PagedPlayersResponse"></a>

```
struct FRHAPI_PagedPlayersResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams_Optional`](#structFRHAPI__PagedPlayersResponse_1aa9ffdeba68420e4283337db60e9e7fee) | List of returned teams and players. Player list in the teams may be incomplete.
`public bool `[`Teams_IsSet`](#structFRHAPI__PagedPlayersResponse_1ae51cf932e772edec8f96d622c68941d2) | true if Teams_Optional has been set to a value
`public int32 `[`Cursor`](#structFRHAPI__PagedPlayersResponse_1adfdb58a18575ae1ac8e0bc44a11b729f) | Cursor to continue iterating through players in a session. 0 means we have returned the last entry.
`public virtual bool `[`FromJson`](#structFRHAPI__PagedPlayersResponse_1aa0fd83ac1718fa9bc0391bcfcf57c1e7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PagedPlayersResponse_1ab1f8c66676163e54abb92c39db245c7e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a97647b3a712252a0beeb78153e2d81cd)`()` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a4b5b78abe58069ae73906b0cadd50b20)`() const` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a364c3d51ace62627bf8c842885c55cde)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & DefaultValue) const` | Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a825864cd368386c7525fe23fc1f1fcc7)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & OutValue) const` | Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__PagedPlayersResponse_1ac214adeee7cd779a20ef2de72872676c)`()` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__PagedPlayersResponse_1ad767394df6f716b097142ae877a5a7e3)`() const` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeams`](#structFRHAPI__PagedPlayersResponse_1a542ae5e09a3a38ccfacdc60b257079bc)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true.
`public inline void `[`SetTeams`](#structFRHAPI__PagedPlayersResponse_1aee269b06fb8bb0d3f5daefaa6203e2f7)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.
`public inline void `[`ClearTeams`](#structFRHAPI__PagedPlayersResponse_1a381db510be477352dcab78c272fa6edd)`()` | Clears the value of Teams_Optional and sets Teams_IsSet to false.
`public inline bool `[`IsTeamsSet`](#structFRHAPI__PagedPlayersResponse_1a1e2dc4eb68131fb97a40181a2c5e26a3)`() const` | Checks whether Teams_Optional has been set.
`public inline int32 & `[`GetCursor`](#structFRHAPI__PagedPlayersResponse_1a9fa5bf6908e167283700b32adfdcea68)`()` | Gets the value of Cursor.
`public inline const int32 & `[`GetCursor`](#structFRHAPI__PagedPlayersResponse_1a63e6a3d538e5729dddbee9d980b1e343)`() const` | Gets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__PagedPlayersResponse_1a8d0352cc130643984b40af39f4e6197c)`(const int32 & NewValue)` | Sets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__PagedPlayersResponse_1a7b9ab3c4a7e9fdfc8fcc8a9b6d98fb8d)`(int32 && NewValue)` | Sets the value of Cursor using move semantics.
`public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__PagedPlayersResponse_1a99d8514387b381a11ee5a663eaf900d9)`() const` | Returns true if Cursor matches the default value.
`public inline void `[`SetCursorToDefault`](#structFRHAPI__PagedPlayersResponse_1a6771a7348a652fb1d3c9c4125ef7684b)`()` | Sets the value of Cursor to its default

### Members

#### `public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams_Optional`](#structFRHAPI__PagedPlayersResponse_1aa9ffdeba68420e4283337db60e9e7fee) <a id="structFRHAPI__PagedPlayersResponse_1aa9ffdeba68420e4283337db60e9e7fee"></a>

List of returned teams and players. Player list in the teams may be incomplete.

#### `public bool `[`Teams_IsSet`](#structFRHAPI__PagedPlayersResponse_1ae51cf932e772edec8f96d622c68941d2) <a id="structFRHAPI__PagedPlayersResponse_1ae51cf932e772edec8f96d622c68941d2"></a>

true if Teams_Optional has been set to a value

#### `public int32 `[`Cursor`](#structFRHAPI__PagedPlayersResponse_1adfdb58a18575ae1ac8e0bc44a11b729f) <a id="structFRHAPI__PagedPlayersResponse_1adfdb58a18575ae1ac8e0bc44a11b729f"></a>

Cursor to continue iterating through players in a session. 0 means we have returned the last entry.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PagedPlayersResponse_1aa0fd83ac1718fa9bc0391bcfcf57c1e7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PagedPlayersResponse_1aa0fd83ac1718fa9bc0391bcfcf57c1e7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PagedPlayersResponse_1ab1f8c66676163e54abb92c39db245c7e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PagedPlayersResponse_1ab1f8c66676163e54abb92c39db245c7e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a97647b3a712252a0beeb78153e2d81cd)`()` <a id="structFRHAPI__PagedPlayersResponse_1a97647b3a712252a0beeb78153e2d81cd"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a4b5b78abe58069ae73906b0cadd50b20)`() const` <a id="structFRHAPI__PagedPlayersResponse_1a4b5b78abe58069ae73906b0cadd50b20"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a364c3d51ace62627bf8c842885c55cde)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & DefaultValue) const` <a id="structFRHAPI__PagedPlayersResponse_1a364c3d51ace62627bf8c842885c55cde"></a>

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a825864cd368386c7525fe23fc1f1fcc7)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & OutValue) const` <a id="structFRHAPI__PagedPlayersResponse_1a825864cd368386c7525fe23fc1f1fcc7"></a>

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__PagedPlayersResponse_1ac214adeee7cd779a20ef2de72872676c)`()` <a id="structFRHAPI__PagedPlayersResponse_1ac214adeee7cd779a20ef2de72872676c"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__PagedPlayersResponse_1ad767394df6f716b097142ae877a5a7e3)`() const` <a id="structFRHAPI__PagedPlayersResponse_1ad767394df6f716b097142ae877a5a7e3"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeams`](#structFRHAPI__PagedPlayersResponse_1a542ae5e09a3a38ccfacdc60b257079bc)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` <a id="structFRHAPI__PagedPlayersResponse_1a542ae5e09a3a38ccfacdc60b257079bc"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true.

#### `public inline void `[`SetTeams`](#structFRHAPI__PagedPlayersResponse_1aee269b06fb8bb0d3f5daefaa6203e2f7)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` <a id="structFRHAPI__PagedPlayersResponse_1aee269b06fb8bb0d3f5daefaa6203e2f7"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.

#### `public inline void `[`ClearTeams`](#structFRHAPI__PagedPlayersResponse_1a381db510be477352dcab78c272fa6edd)`()` <a id="structFRHAPI__PagedPlayersResponse_1a381db510be477352dcab78c272fa6edd"></a>

Clears the value of Teams_Optional and sets Teams_IsSet to false.

#### `public inline bool `[`IsTeamsSet`](#structFRHAPI__PagedPlayersResponse_1a1e2dc4eb68131fb97a40181a2c5e26a3)`() const` <a id="structFRHAPI__PagedPlayersResponse_1a1e2dc4eb68131fb97a40181a2c5e26a3"></a>

Checks whether Teams_Optional has been set.

#### `public inline int32 & `[`GetCursor`](#structFRHAPI__PagedPlayersResponse_1a9fa5bf6908e167283700b32adfdcea68)`()` <a id="structFRHAPI__PagedPlayersResponse_1a9fa5bf6908e167283700b32adfdcea68"></a>

Gets the value of Cursor.

#### `public inline const int32 & `[`GetCursor`](#structFRHAPI__PagedPlayersResponse_1a63e6a3d538e5729dddbee9d980b1e343)`() const` <a id="structFRHAPI__PagedPlayersResponse_1a63e6a3d538e5729dddbee9d980b1e343"></a>

Gets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedPlayersResponse_1a8d0352cc130643984b40af39f4e6197c)`(const int32 & NewValue)` <a id="structFRHAPI__PagedPlayersResponse_1a8d0352cc130643984b40af39f4e6197c"></a>

Sets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedPlayersResponse_1a7b9ab3c4a7e9fdfc8fcc8a9b6d98fb8d)`(int32 && NewValue)` <a id="structFRHAPI__PagedPlayersResponse_1a7b9ab3c4a7e9fdfc8fcc8a9b6d98fb8d"></a>

Sets the value of Cursor using move semantics.

#### `public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__PagedPlayersResponse_1a99d8514387b381a11ee5a663eaf900d9)`() const` <a id="structFRHAPI__PagedPlayersResponse_1a99d8514387b381a11ee5a663eaf900d9"></a>

Returns true if Cursor matches the default value.

#### `public inline void `[`SetCursorToDefault`](#structFRHAPI__PagedPlayersResponse_1a6771a7348a652fb1d3c9c4125ef7684b)`()` <a id="structFRHAPI__PagedPlayersResponse_1a6771a7348a652fb1d3c9c4125ef7684b"></a>

Sets the value of Cursor to its default

