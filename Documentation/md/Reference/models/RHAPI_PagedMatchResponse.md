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
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a1194de62e213a66dcebc5cdc52f592f5)`()` | Gets the value of Matches_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a0d6fa4f60a169bd0565d98b083f7a545)`() const` | Gets the value of Matches_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a3651dfe14da3761252bba9cdc8cc17c4)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & DefaultValue) const` | Gets the value of Matches_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a0e6a3af9775c041807e06e3fe476f05d)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & OutValue) const` | Fills OutValue with the value of Matches_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1ae721f9dbf0825aa56362d55e08eb6ba4)`()` | Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a7a06c4c623d26eda7e139f3e469e0c33)`() const` | Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1a9d6d38c671b7b7592cc1ecdbe54593ff)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & NewValue)` | Sets the value of Matches_Optional and also sets Matches_IsSet to true.
`public inline FORCEINLINE void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1ad99bc870cc23f05c2b930f0d6ed8e70a)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > && NewValue)` | Sets the value of Matches_Optional and also sets Matches_IsSet to true using move semantics.
`public inline void `[`ClearMatches`](#structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2)`()` | Clears the value of Matches_Optional and sets Matches_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a66702484359e036e58cab0ed7f74fe19)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1afafea0c86e1f991480bfe623d03a3ddd)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a685968bfeeeadb59b13346aeb504a6f8)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a1b0b3a915118ad6d6755e03e171a0aa4)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1a4076a76b2f062d670ef47eb347561afa)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1a6fcccb7ed9d26289c4c5c67a8f9b833d)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1a3c99a67c4e5cf00b338555fe1131ed4a)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1a64df8f1ae0d503c48aed1d5f0e11364b)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__PagedMatchResponse_1a287655387a0c05eb66c13ab4930b7806)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__PagedMatchResponse_1a2b68ed2b70964de447becde787cf04c0)`() const` | Checks whether Cursor_Optional is set to null.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a1194de62e213a66dcebc5cdc52f592f5)`()` <a id="structFRHAPI__PagedMatchResponse_1a1194de62e213a66dcebc5cdc52f592f5"></a>

Gets the value of Matches_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a0d6fa4f60a169bd0565d98b083f7a545)`() const` <a id="structFRHAPI__PagedMatchResponse_1a0d6fa4f60a169bd0565d98b083f7a545"></a>

Gets the value of Matches_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a3651dfe14da3761252bba9cdc8cc17c4)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & DefaultValue) const` <a id="structFRHAPI__PagedMatchResponse_1a3651dfe14da3761252bba9cdc8cc17c4"></a>

Gets the value of Matches_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatches`](#structFRHAPI__PagedMatchResponse_1a0e6a3af9775c041807e06e3fe476f05d)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & OutValue) const` <a id="structFRHAPI__PagedMatchResponse_1a0e6a3af9775c041807e06e3fe476f05d"></a>

Fills OutValue with the value of Matches_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1ae721f9dbf0825aa56362d55e08eb6ba4)`()` <a id="structFRHAPI__PagedMatchResponse_1ae721f9dbf0825aa56362d55e08eb6ba4"></a>

Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > * `[`GetMatchesOrNull`](#structFRHAPI__PagedMatchResponse_1a7a06c4c623d26eda7e139f3e469e0c33)`() const` <a id="structFRHAPI__PagedMatchResponse_1a7a06c4c623d26eda7e139f3e469e0c33"></a>

Returns a pointer to Matches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1a9d6d38c671b7b7592cc1ecdbe54593ff)`(const TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & NewValue)` <a id="structFRHAPI__PagedMatchResponse_1a9d6d38c671b7b7592cc1ecdbe54593ff"></a>

Sets the value of Matches_Optional and also sets Matches_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatches`](#structFRHAPI__PagedMatchResponse_1ad99bc870cc23f05c2b930f0d6ed8e70a)`(TArray< `[`FRHAPI_MatchWithPlayers`](RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > && NewValue)` <a id="structFRHAPI__PagedMatchResponse_1ad99bc870cc23f05c2b930f0d6ed8e70a"></a>

Sets the value of Matches_Optional and also sets Matches_IsSet to true using move semantics.

#### `public inline void `[`ClearMatches`](#structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2)`()` <a id="structFRHAPI__PagedMatchResponse_1a4e8b2a92dfa528dad2e187ef1b7603e2"></a>

Clears the value of Matches_Optional and sets Matches_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a66702484359e036e58cab0ed7f74fe19)`()` <a id="structFRHAPI__PagedMatchResponse_1a66702484359e036e58cab0ed7f74fe19"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1afafea0c86e1f991480bfe623d03a3ddd)`() const` <a id="structFRHAPI__PagedMatchResponse_1afafea0c86e1f991480bfe623d03a3ddd"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a685968bfeeeadb59b13346aeb504a6f8)`(const FString & DefaultValue) const` <a id="structFRHAPI__PagedMatchResponse_1a685968bfeeeadb59b13346aeb504a6f8"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PagedMatchResponse_1a1b0b3a915118ad6d6755e03e171a0aa4)`(FString & OutValue) const` <a id="structFRHAPI__PagedMatchResponse_1a1b0b3a915118ad6d6755e03e171a0aa4"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1a4076a76b2f062d670ef47eb347561afa)`()` <a id="structFRHAPI__PagedMatchResponse_1a4076a76b2f062d670ef47eb347561afa"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedMatchResponse_1a6fcccb7ed9d26289c4c5c67a8f9b833d)`() const` <a id="structFRHAPI__PagedMatchResponse_1a6fcccb7ed9d26289c4c5c67a8f9b833d"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1a3c99a67c4e5cf00b338555fe1131ed4a)`(const FString & NewValue)` <a id="structFRHAPI__PagedMatchResponse_1a3c99a67c4e5cf00b338555fe1131ed4a"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedMatchResponse_1a64df8f1ae0d503c48aed1d5f0e11364b)`(FString && NewValue)` <a id="structFRHAPI__PagedMatchResponse_1a64df8f1ae0d503c48aed1d5f0e11364b"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61)`()` <a id="structFRHAPI__PagedMatchResponse_1a70914e8d6d2e7ee09981e16a71800f61"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__PagedMatchResponse_1a287655387a0c05eb66c13ab4930b7806)`()` <a id="structFRHAPI__PagedMatchResponse_1a287655387a0c05eb66c13ab4930b7806"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__PagedMatchResponse_1a2b68ed2b70964de447becde787cf04c0)`() const` <a id="structFRHAPI__PagedMatchResponse_1a2b68ed2b70964de447becde787cf04c0"></a>

Checks whether Cursor_Optional is set to null.

