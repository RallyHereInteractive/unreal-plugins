---
title: RHAPI_PagedMatchResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PagedMatchResponse`](#structFRHAPI__PagedMatchResponse) | 

## struct `FRHAPI_PagedMatchResponse` <a id="structFRHAPI__PagedMatchResponse"></a>

```
struct FRHAPI_PagedMatchResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > `[`Matches_Optional`](#structFRHAPI__PagedMatchResponse_1ae75d56f03feaccaa0e8d037dd3edeed9) | List of matches.
`public bool `[`Matches_IsSet`](#structFRHAPI__PagedMatchResponse_1a695c16527d81a681ada3cd6e0772c8e0) | true if Matches_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__PagedMatchResponse_1a969659a163e50c4c7bdd2a20f3787bd4) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__PagedMatchResponse_1a48313ecadf93a27f52cefe82f6438439) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__PagedMatchResponse_1acdf5db1651cff1985e8c753bacc7901a) | true if Cursor_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PagedMatchResponse_1a5b15122e7258f5541df0328c683e6569)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PagedMatchResponse_1a7929bd8484c453c89f04f9e0447c7caa)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a9498a746903c08b627ac118bb174ff4d)`()` | Gets the value of Matches_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a13caf98727b4217dba665ff3fb5c2cd6)`() const` | Gets the value of Matches_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a961c154fa3f282e1beb59072af435ba2)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & DefaultValue) const` | Gets the value of Matches_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a0d9d7ad76c69b279231d1aeaa16999f4)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & OutValue) const` | Fills OutValue with the value of Matches_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a29b411ffbbaadcc7d1586f89d405af46)`()` | Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a3d414d5f3dc1a420ccebfaf7fdd78491)`() const` | Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1a703f91f13acb73b08c6da6238cf28b40)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & NewValue)` | Sets the value of Matches_Optional and also sets Matches_IsSet to true.
`public inline void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1ad91c8b8698cd64a55d86300093c269b6)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > && NewValue)` | Sets the value of Matches_Optional and also sets Matches_IsSet to true using move semantics.
`public inline void `[`ClearMatches`](#structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2)`()` | Clears the value of Matches_Optional and sets Matches_IsSet to false.
`public inline bool `[`IsMatchesSet`](#structFRHAPI__PagedMatchResponse_1ad2d47a9b555afc0a20505ec94ba11cc9)`() const` | Checks whether Matches_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a19920577105aee8300c1550e30b53fb1)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1ad3a7d6f7dac972e54d44a75a61162211)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a7ea84d32cf5b68ec7db9466720ccf452)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a548e84660e37e00e5cb713faca4d8fa3)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1aa3fddbf5c46cde4882a31347d3934100)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1ab4d964b697e7273c6e356e60dc8a1e9f)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1aa38213884da23e5c873e1ebcf7757fad)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1a8ea8baa6b0aa75afb445e0550b4e7216)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__PagedMatchResponse_1a007860bb0a04302a55818bddec2fe8ad)`() const` | Checks whether Cursor_Optional has been set.
`public inline void `[`SetCursorToNull`](#structFRHAPI__PagedMatchResponse_1ae80dd9074360542cf93a37682a65ee69)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCursorNull`](#structFRHAPI__PagedMatchResponse_1a7ffa76109b528b27a356ae0e6af156ef)`() const` | Checks whether Cursor_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > `[`Matches_Optional`](#structFRHAPI__PagedMatchResponse_1ae75d56f03feaccaa0e8d037dd3edeed9) <a id="structFRHAPI__PagedMatchResponse_1ae75d56f03feaccaa0e8d037dd3edeed9"></a>

List of matches.

#### `public bool `[`Matches_IsSet`](#structFRHAPI__PagedMatchResponse_1a695c16527d81a681ada3cd6e0772c8e0) <a id="structFRHAPI__PagedMatchResponse_1a695c16527d81a681ada3cd6e0772c8e0"></a>

true if Matches_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__PagedMatchResponse_1a969659a163e50c4c7bdd2a20f3787bd4) <a id="structFRHAPI__PagedMatchResponse_1a969659a163e50c4c7bdd2a20f3787bd4"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__PagedMatchResponse_1a48313ecadf93a27f52cefe82f6438439) <a id="structFRHAPI__PagedMatchResponse_1a48313ecadf93a27f52cefe82f6438439"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__PagedMatchResponse_1acdf5db1651cff1985e8c753bacc7901a) <a id="structFRHAPI__PagedMatchResponse_1acdf5db1651cff1985e8c753bacc7901a"></a>

true if Cursor_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PagedMatchResponse_1a5b15122e7258f5541df0328c683e6569)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PagedMatchResponse_1a5b15122e7258f5541df0328c683e6569"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PagedMatchResponse_1a7929bd8484c453c89f04f9e0447c7caa)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PagedMatchResponse_1a7929bd8484c453c89f04f9e0447c7caa"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a9498a746903c08b627ac118bb174ff4d)`()` <a id="structFRHAPI__PagedMatchResponse_1a9498a746903c08b627ac118bb174ff4d"></a>

Gets the value of Matches_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a13caf98727b4217dba665ff3fb5c2cd6)`() const` <a id="structFRHAPI__PagedMatchResponse_1a13caf98727b4217dba665ff3fb5c2cd6"></a>

Gets the value of Matches_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a961c154fa3f282e1beb59072af435ba2)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & DefaultValue) const` <a id="structFRHAPI__PagedMatchResponse_1a961c154fa3f282e1beb59072af435ba2"></a>

Gets the value of Matches_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a0d9d7ad76c69b279231d1aeaa16999f4)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & OutValue) const` <a id="structFRHAPI__PagedMatchResponse_1a0d9d7ad76c69b279231d1aeaa16999f4"></a>

Fills OutValue with the value of Matches_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a29b411ffbbaadcc7d1586f89d405af46)`()` <a id="structFRHAPI__PagedMatchResponse_1a29b411ffbbaadcc7d1586f89d405af46"></a>

Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a3d414d5f3dc1a420ccebfaf7fdd78491)`() const` <a id="structFRHAPI__PagedMatchResponse_1a3d414d5f3dc1a420ccebfaf7fdd78491"></a>

Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1a703f91f13acb73b08c6da6238cf28b40)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & NewValue)` <a id="structFRHAPI__PagedMatchResponse_1a703f91f13acb73b08c6da6238cf28b40"></a>

Sets the value of Matches_Optional and also sets Matches_IsSet to true.

#### `public inline void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1ad91c8b8698cd64a55d86300093c269b6)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > && NewValue)` <a id="structFRHAPI__PagedMatchResponse_1ad91c8b8698cd64a55d86300093c269b6"></a>

Sets the value of Matches_Optional and also sets Matches_IsSet to true using move semantics.

#### `public inline void `[`ClearMatches`](#structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2)`()` <a id="structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2"></a>

Clears the value of Matches_Optional and sets Matches_IsSet to false.

#### `public inline bool `[`IsMatchesSet`](#structFRHAPI__PagedMatchResponse_1ad2d47a9b555afc0a20505ec94ba11cc9)`() const` <a id="structFRHAPI__PagedMatchResponse_1ad2d47a9b555afc0a20505ec94ba11cc9"></a>

Checks whether Matches_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a19920577105aee8300c1550e30b53fb1)`()` <a id="structFRHAPI__PagedMatchResponse_1a19920577105aee8300c1550e30b53fb1"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1ad3a7d6f7dac972e54d44a75a61162211)`() const` <a id="structFRHAPI__PagedMatchResponse_1ad3a7d6f7dac972e54d44a75a61162211"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a7ea84d32cf5b68ec7db9466720ccf452)`(const FString & DefaultValue) const` <a id="structFRHAPI__PagedMatchResponse_1a7ea84d32cf5b68ec7db9466720ccf452"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a548e84660e37e00e5cb713faca4d8fa3)`(FString & OutValue) const` <a id="structFRHAPI__PagedMatchResponse_1a548e84660e37e00e5cb713faca4d8fa3"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1aa3fddbf5c46cde4882a31347d3934100)`()` <a id="structFRHAPI__PagedMatchResponse_1aa3fddbf5c46cde4882a31347d3934100"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1ab4d964b697e7273c6e356e60dc8a1e9f)`() const` <a id="structFRHAPI__PagedMatchResponse_1ab4d964b697e7273c6e356e60dc8a1e9f"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1aa38213884da23e5c873e1ebcf7757fad)`(const FString & NewValue)` <a id="structFRHAPI__PagedMatchResponse_1aa38213884da23e5c873e1ebcf7757fad"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1a8ea8baa6b0aa75afb445e0550b4e7216)`(FString && NewValue)` <a id="structFRHAPI__PagedMatchResponse_1a8ea8baa6b0aa75afb445e0550b4e7216"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61)`()` <a id="structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__PagedMatchResponse_1a007860bb0a04302a55818bddec2fe8ad)`() const` <a id="structFRHAPI__PagedMatchResponse_1a007860bb0a04302a55818bddec2fe8ad"></a>

Checks whether Cursor_Optional has been set.

#### `public inline void `[`SetCursorToNull`](#structFRHAPI__PagedMatchResponse_1ae80dd9074360542cf93a37682a65ee69)`()` <a id="structFRHAPI__PagedMatchResponse_1ae80dd9074360542cf93a37682a65ee69"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCursorNull`](#structFRHAPI__PagedMatchResponse_1a7ffa76109b528b27a356ae0e6af156ef)`() const` <a id="structFRHAPI__PagedMatchResponse_1a7ffa76109b528b27a356ae0e6af156ef"></a>

Checks whether Cursor_Optional is set to null.

