# RHAPI_PagedMatchResponse <a id="group__RHAPI__PagedMatchResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PagedMatchResponse`](#structFRHAPI__PagedMatchResponse) | 

## struct `FRHAPI_PagedMatchResponse` <a id="structFRHAPI__PagedMatchResponse"></a>

```
struct FRHAPI_PagedMatchResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > `[`Matches_Optional`](#structFRHAPI__PagedMatchResponse_1ae75d56f03feaccaa0e8d037dd3edeed9) | List of matches.
`public bool `[`Matches_IsSet`](#structFRHAPI__PagedMatchResponse_1a695c16527d81a681ada3cd6e0772c8e0) | true if Matches_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__PagedMatchResponse_1a969659a163e50c4c7bdd2a20f3787bd4) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__PagedMatchResponse_1a48313ecadf93a27f52cefe82f6438439) | true if Cursor_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PagedMatchResponse_1a7d7e96ac31e23f356b82bb700bbc65bc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PagedMatchResponse_1a33912e1a66e9ca130c28b23c17683e4d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a4e1037b6e7f762836a4aceca614a3db9)`()` | Gets the value of Matches_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a3fe5d9df5e46de3677f6bf867b872d68)`() const` | Gets the value of Matches_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1aa0a1aec129fa2151af35b3588932e90f)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & DefaultValue) const` | Gets the value of Matches_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a0d9d7ad76c69b279231d1aeaa16999f4)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & OutValue) const` | Fills OutValue with the value of Matches_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a1596401d0125df6d907018f9a2f6c84d)`()` | Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a7f568643570ec0cf5c702dda08088d62)`() const` | Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1aa479494c62243598bf486b5d03223b5b)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > NewValue)` | Sets the value of Matches_Optional and also sets Matches_IsSet to true.
`public inline void `[`ClearMatches`](#structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2)`()` | Clears the value of Matches_Optional and sets Matches_IsSet to false.
`public inline FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a97fe15090807585e70c969236bc62c9b)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a10f860ec7416bfb3ea527f60fd96b57d)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1adfb1589fa26d1303cb349f44b81930ee)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a548e84660e37e00e5cb713faca4d8fa3)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1a0121948f6686cccc976b83a8a92728f9)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1a4bf08aeab7d4d4262f871d86a3d58729)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1a86cc1074efc7feea41724e6bb560c1e1)`(FString NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`ClearCursor`](#structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### Members

#### `public TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > `[`Matches_Optional`](#structFRHAPI__PagedMatchResponse_1ae75d56f03feaccaa0e8d037dd3edeed9) <a id="structFRHAPI__PagedMatchResponse_1ae75d56f03feaccaa0e8d037dd3edeed9"></a>

List of matches.

#### `public bool `[`Matches_IsSet`](#structFRHAPI__PagedMatchResponse_1a695c16527d81a681ada3cd6e0772c8e0) <a id="structFRHAPI__PagedMatchResponse_1a695c16527d81a681ada3cd6e0772c8e0"></a>

true if Matches_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__PagedMatchResponse_1a969659a163e50c4c7bdd2a20f3787bd4) <a id="structFRHAPI__PagedMatchResponse_1a969659a163e50c4c7bdd2a20f3787bd4"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__PagedMatchResponse_1a48313ecadf93a27f52cefe82f6438439) <a id="structFRHAPI__PagedMatchResponse_1a48313ecadf93a27f52cefe82f6438439"></a>

true if Cursor_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PagedMatchResponse_1a7d7e96ac31e23f356b82bb700bbc65bc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PagedMatchResponse_1a7d7e96ac31e23f356b82bb700bbc65bc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PagedMatchResponse_1a33912e1a66e9ca130c28b23c17683e4d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PagedMatchResponse_1a33912e1a66e9ca130c28b23c17683e4d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a4e1037b6e7f762836a4aceca614a3db9)`()` <a id="structFRHAPI__PagedMatchResponse_1a4e1037b6e7f762836a4aceca614a3db9"></a>

Gets the value of Matches_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a3fe5d9df5e46de3677f6bf867b872d68)`() const` <a id="structFRHAPI__PagedMatchResponse_1a3fe5d9df5e46de3677f6bf867b872d68"></a>

Gets the value of Matches_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1aa0a1aec129fa2151af35b3588932e90f)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & DefaultValue) const` <a id="structFRHAPI__PagedMatchResponse_1aa0a1aec129fa2151af35b3588932e90f"></a>

Gets the value of Matches_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a0d9d7ad76c69b279231d1aeaa16999f4)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & OutValue) const` <a id="structFRHAPI__PagedMatchResponse_1a0d9d7ad76c69b279231d1aeaa16999f4"></a>

Fills OutValue with the value of Matches_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a1596401d0125df6d907018f9a2f6c84d)`()` <a id="structFRHAPI__PagedMatchResponse_1a1596401d0125df6d907018f9a2f6c84d"></a>

Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a7f568643570ec0cf5c702dda08088d62)`() const` <a id="structFRHAPI__PagedMatchResponse_1a7f568643570ec0cf5c702dda08088d62"></a>

Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1aa479494c62243598bf486b5d03223b5b)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > NewValue)` <a id="structFRHAPI__PagedMatchResponse_1aa479494c62243598bf486b5d03223b5b"></a>

Sets the value of Matches_Optional and also sets Matches_IsSet to true.

#### `public inline void `[`ClearMatches`](#structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2)`()` <a id="structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2"></a>

Clears the value of Matches_Optional and sets Matches_IsSet to false.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a97fe15090807585e70c969236bc62c9b)`()` <a id="structFRHAPI__PagedMatchResponse_1a97fe15090807585e70c969236bc62c9b"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a10f860ec7416bfb3ea527f60fd96b57d)`() const` <a id="structFRHAPI__PagedMatchResponse_1a10f860ec7416bfb3ea527f60fd96b57d"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1adfb1589fa26d1303cb349f44b81930ee)`(const FString & DefaultValue) const` <a id="structFRHAPI__PagedMatchResponse_1adfb1589fa26d1303cb349f44b81930ee"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a548e84660e37e00e5cb713faca4d8fa3)`(FString & OutValue) const` <a id="structFRHAPI__PagedMatchResponse_1a548e84660e37e00e5cb713faca4d8fa3"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1a0121948f6686cccc976b83a8a92728f9)`()` <a id="structFRHAPI__PagedMatchResponse_1a0121948f6686cccc976b83a8a92728f9"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1a4bf08aeab7d4d4262f871d86a3d58729)`() const` <a id="structFRHAPI__PagedMatchResponse_1a4bf08aeab7d4d4262f871d86a3d58729"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1a86cc1074efc7feea41724e6bb560c1e1)`(FString NewValue)` <a id="structFRHAPI__PagedMatchResponse_1a86cc1074efc7feea41724e6bb560c1e1"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61)`()` <a id="structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

