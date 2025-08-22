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
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1aa7de628ecf2b42d8da1dc5fd055d60b1)`()` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1af22f67ba6e008bd01d5bd163e9346e0f)`() const` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a06a6f7b5c5cd52b33ec4a4b801e7e6cd)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & DefaultValue) const` | Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a50c6f8dab35d01e039ac8ad1820fcc99)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & OutValue) const` | Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__PagedPlayersResponse_1ae5e31b2a2c2b1c50c528f04fff2ef1e8)`()` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__PagedPlayersResponse_1a4b2404cddba6da2b3df3ddb516b666a3)`() const` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__PagedPlayersResponse_1a4b75f9e27aa6d611b4456601beca41d4)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__PagedPlayersResponse_1a2affe1b2f2a4c00c445b6ac17c5fbf76)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.
`public inline void `[`ClearTeams`](#structFRHAPI__PagedPlayersResponse_1a381db510be477352dcab78c272fa6edd)`()` | Clears the value of Teams_Optional and sets Teams_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetCursor`](#structFRHAPI__PagedPlayersResponse_1ab30f4e82954d490e5f5d92cc93678149)`()` | Gets the value of Cursor.
`public inline FORCEINLINE const int32 & `[`GetCursor`](#structFRHAPI__PagedPlayersResponse_1a851f4447ea99856f2e06ff98f8344e0f)`() const` | Gets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedPlayersResponse_1aec71953e1c3dbe7757388ce37b45446c)`(const int32 & NewValue)` | Sets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedPlayersResponse_1afb4c1f4ad77af825dd5d4e2ad2772100)`(int32 && NewValue)` | Sets the value of Cursor using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Cursor`](#structFRHAPI__PagedPlayersResponse_1ae68916148bea25888afc09532fe0bf22)`()` | Returns the default value of Cursor.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1aa7de628ecf2b42d8da1dc5fd055d60b1)`()` <a id="structFRHAPI__PagedPlayersResponse_1aa7de628ecf2b42d8da1dc5fd055d60b1"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1af22f67ba6e008bd01d5bd163e9346e0f)`() const` <a id="structFRHAPI__PagedPlayersResponse_1af22f67ba6e008bd01d5bd163e9346e0f"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a06a6f7b5c5cd52b33ec4a4b801e7e6cd)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & DefaultValue) const` <a id="structFRHAPI__PagedPlayersResponse_1a06a6f7b5c5cd52b33ec4a4b801e7e6cd"></a>

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeams`](#structFRHAPI__PagedPlayersResponse_1a50c6f8dab35d01e039ac8ad1820fcc99)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & OutValue) const` <a id="structFRHAPI__PagedPlayersResponse_1a50c6f8dab35d01e039ac8ad1820fcc99"></a>

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__PagedPlayersResponse_1ae5e31b2a2c2b1c50c528f04fff2ef1e8)`()` <a id="structFRHAPI__PagedPlayersResponse_1ae5e31b2a2c2b1c50c528f04fff2ef1e8"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__PagedPlayersResponse_1a4b2404cddba6da2b3df3ddb516b666a3)`() const` <a id="structFRHAPI__PagedPlayersResponse_1a4b2404cddba6da2b3df3ddb516b666a3"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__PagedPlayersResponse_1a4b75f9e27aa6d611b4456601beca41d4)`(const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & NewValue)` <a id="structFRHAPI__PagedPlayersResponse_1a4b75f9e27aa6d611b4456601beca41d4"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__PagedPlayersResponse_1a2affe1b2f2a4c00c445b6ac17c5fbf76)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > && NewValue)` <a id="structFRHAPI__PagedPlayersResponse_1a2affe1b2f2a4c00c445b6ac17c5fbf76"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.

#### `public inline void `[`ClearTeams`](#structFRHAPI__PagedPlayersResponse_1a381db510be477352dcab78c272fa6edd)`()` <a id="structFRHAPI__PagedPlayersResponse_1a381db510be477352dcab78c272fa6edd"></a>

Clears the value of Teams_Optional and sets Teams_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetCursor`](#structFRHAPI__PagedPlayersResponse_1ab30f4e82954d490e5f5d92cc93678149)`()` <a id="structFRHAPI__PagedPlayersResponse_1ab30f4e82954d490e5f5d92cc93678149"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE const int32 & `[`GetCursor`](#structFRHAPI__PagedPlayersResponse_1a851f4447ea99856f2e06ff98f8344e0f)`() const` <a id="structFRHAPI__PagedPlayersResponse_1a851f4447ea99856f2e06ff98f8344e0f"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedPlayersResponse_1aec71953e1c3dbe7757388ce37b45446c)`(const int32 & NewValue)` <a id="structFRHAPI__PagedPlayersResponse_1aec71953e1c3dbe7757388ce37b45446c"></a>

Sets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedPlayersResponse_1afb4c1f4ad77af825dd5d4e2ad2772100)`(int32 && NewValue)` <a id="structFRHAPI__PagedPlayersResponse_1afb4c1f4ad77af825dd5d4e2ad2772100"></a>

Sets the value of Cursor using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Cursor`](#structFRHAPI__PagedPlayersResponse_1ae68916148bea25888afc09532fe0bf22)`()` <a id="structFRHAPI__PagedPlayersResponse_1ae68916148bea25888afc09532fe0bf22"></a>

Returns the default value of Cursor.

