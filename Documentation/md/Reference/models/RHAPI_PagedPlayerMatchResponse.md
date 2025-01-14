---
title: RHAPI_PagedPlayerMatchResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PagedPlayerMatchResponse`](#structFRHAPI__PagedPlayerMatchResponse) | 

## struct `FRHAPI_PagedPlayerMatchResponse` <a id="structFRHAPI__PagedPlayerMatchResponse"></a>

```
struct FRHAPI_PagedPlayerMatchResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > `[`PlayerMatches_Optional`](#structFRHAPI__PagedPlayerMatchResponse_1a99511989a74fcbb5b3722e4c2b686362) | List of player's matches.
`public bool `[`PlayerMatches_IsSet`](#structFRHAPI__PagedPlayerMatchResponse_1ad17dd2f9511166da1e04fd3132102210) | true if PlayerMatches_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__PagedPlayerMatchResponse_1ab4e62639956cc675c945f637512dc53d) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__PagedPlayerMatchResponse_1a24ffb30ff83191b03991792dd0a75f56) | true if Cursor_Optional has been set to a value
`public bool `[`Cursor_IsNull`](#structFRHAPI__PagedPlayerMatchResponse_1a1cb8741a0556f9890024724b1688af36) | true if Cursor_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PagedPlayerMatchResponse_1ab418e10691f00e4f9ba13c30092ac8a6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PagedPlayerMatchResponse_1a8e691879a7abeccdb3a478025deec338)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a97e23a4d55f8aee51753e040aea2ca3f)`()` | Gets the value of PlayerMatches_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1ab37187eebbb86febca45af2b6058eff1)`() const` | Gets the value of PlayerMatches_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a1522e4d1f6b205c4e9955c29220bc9f4)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & DefaultValue) const` | Gets the value of PlayerMatches_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1aef9cd40a2e39cf3bce3a4e7833226f9e)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & OutValue) const` | Fills OutValue with the value of PlayerMatches_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a95d6ce63759f8b2d5172a706ee55e677)`()` | Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a7ceb780007e746a9644a76e1e056c0f5)`() const` | Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1af2a9dbf5d8082494199c1408893c3db4)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & NewValue)` | Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true.
`public inline void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a77effbab4e2a33648686acd1197eb913)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > && NewValue)` | Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true using move semantics.
`public inline void `[`ClearPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060)`()` | Clears the value of PlayerMatches_Optional and sets PlayerMatches_IsSet to false.
`public inline bool `[`IsPlayerMatchesSet`](#structFRHAPI__PagedPlayerMatchResponse_1a8950df7dc033883da4122f42532dd881)`() const` | Checks whether PlayerMatches_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a81d5d14203d71bdb202acf6a79a26cc1)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1accdd80b25818ffff8d0338322230cc03)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1aeecef4b30a1b88bf44d5e390f564d193)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1ac724df4249c2c3ae552556b1e43d576b)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a82558b3c6d0c79390deb97fde1553ebb)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a4d8694af1eaeea5984ec5a68a8b313a0)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a36502a6f5fc44bd0610d3ea4f8d523c8)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a32480ae6350e004219f45bd6f9013dd8)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__PagedPlayerMatchResponse_1a9a724f1824d6c8d524a94dbff1207400)`() const` | Checks whether Cursor_Optional has been set.
`public inline void `[`SetCursorToNull`](#structFRHAPI__PagedPlayerMatchResponse_1a2acb48e00d31cab08f6238326d7c8881)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCursorNull`](#structFRHAPI__PagedPlayerMatchResponse_1a528db464e1b1bd565bfcc6221e56dfb7)`() const` | Checks whether Cursor_Optional is set to null.

### Members

#### `public TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > `[`PlayerMatches_Optional`](#structFRHAPI__PagedPlayerMatchResponse_1a99511989a74fcbb5b3722e4c2b686362) <a id="structFRHAPI__PagedPlayerMatchResponse_1a99511989a74fcbb5b3722e4c2b686362"></a>

List of player's matches.

#### `public bool `[`PlayerMatches_IsSet`](#structFRHAPI__PagedPlayerMatchResponse_1ad17dd2f9511166da1e04fd3132102210) <a id="structFRHAPI__PagedPlayerMatchResponse_1ad17dd2f9511166da1e04fd3132102210"></a>

true if PlayerMatches_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__PagedPlayerMatchResponse_1ab4e62639956cc675c945f637512dc53d) <a id="structFRHAPI__PagedPlayerMatchResponse_1ab4e62639956cc675c945f637512dc53d"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__PagedPlayerMatchResponse_1a24ffb30ff83191b03991792dd0a75f56) <a id="structFRHAPI__PagedPlayerMatchResponse_1a24ffb30ff83191b03991792dd0a75f56"></a>

true if Cursor_Optional has been set to a value

#### `public bool `[`Cursor_IsNull`](#structFRHAPI__PagedPlayerMatchResponse_1a1cb8741a0556f9890024724b1688af36) <a id="structFRHAPI__PagedPlayerMatchResponse_1a1cb8741a0556f9890024724b1688af36"></a>

true if Cursor_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PagedPlayerMatchResponse_1ab418e10691f00e4f9ba13c30092ac8a6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1ab418e10691f00e4f9ba13c30092ac8a6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PagedPlayerMatchResponse_1a8e691879a7abeccdb3a478025deec338)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a8e691879a7abeccdb3a478025deec338"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a97e23a4d55f8aee51753e040aea2ca3f)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a97e23a4d55f8aee51753e040aea2ca3f"></a>

Gets the value of PlayerMatches_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1ab37187eebbb86febca45af2b6058eff1)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1ab37187eebbb86febca45af2b6058eff1"></a>

Gets the value of PlayerMatches_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a1522e4d1f6b205c4e9955c29220bc9f4)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & DefaultValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a1522e4d1f6b205c4e9955c29220bc9f4"></a>

Gets the value of PlayerMatches_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1aef9cd40a2e39cf3bce3a4e7833226f9e)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & OutValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1aef9cd40a2e39cf3bce3a4e7833226f9e"></a>

Fills OutValue with the value of PlayerMatches_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a95d6ce63759f8b2d5172a706ee55e677)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a95d6ce63759f8b2d5172a706ee55e677"></a>

Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a7ceb780007e746a9644a76e1e056c0f5)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a7ceb780007e746a9644a76e1e056c0f5"></a>

Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1af2a9dbf5d8082494199c1408893c3db4)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1af2a9dbf5d8082494199c1408893c3db4"></a>

Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true.

#### `public inline void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a77effbab4e2a33648686acd1197eb913)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > && NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1a77effbab4e2a33648686acd1197eb913"></a>

Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060"></a>

Clears the value of PlayerMatches_Optional and sets PlayerMatches_IsSet to false.

#### `public inline bool `[`IsPlayerMatchesSet`](#structFRHAPI__PagedPlayerMatchResponse_1a8950df7dc033883da4122f42532dd881)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a8950df7dc033883da4122f42532dd881"></a>

Checks whether PlayerMatches_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a81d5d14203d71bdb202acf6a79a26cc1)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a81d5d14203d71bdb202acf6a79a26cc1"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1accdd80b25818ffff8d0338322230cc03)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1accdd80b25818ffff8d0338322230cc03"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1aeecef4b30a1b88bf44d5e390f564d193)`(const FString & DefaultValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1aeecef4b30a1b88bf44d5e390f564d193"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1ac724df4249c2c3ae552556b1e43d576b)`(FString & OutValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1ac724df4249c2c3ae552556b1e43d576b"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a82558b3c6d0c79390deb97fde1553ebb)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a82558b3c6d0c79390deb97fde1553ebb"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a4d8694af1eaeea5984ec5a68a8b313a0)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a4d8694af1eaeea5984ec5a68a8b313a0"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a36502a6f5fc44bd0610d3ea4f8d523c8)`(const FString & NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1a36502a6f5fc44bd0610d3ea4f8d523c8"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a32480ae6350e004219f45bd6f9013dd8)`(FString && NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1a32480ae6350e004219f45bd6f9013dd8"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__PagedPlayerMatchResponse_1a9a724f1824d6c8d524a94dbff1207400)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a9a724f1824d6c8d524a94dbff1207400"></a>

Checks whether Cursor_Optional has been set.

#### `public inline void `[`SetCursorToNull`](#structFRHAPI__PagedPlayerMatchResponse_1a2acb48e00d31cab08f6238326d7c8881)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a2acb48e00d31cab08f6238326d7c8881"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCursorNull`](#structFRHAPI__PagedPlayerMatchResponse_1a528db464e1b1bd565bfcc6221e56dfb7)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a528db464e1b1bd565bfcc6221e56dfb7"></a>

Checks whether Cursor_Optional is set to null.

