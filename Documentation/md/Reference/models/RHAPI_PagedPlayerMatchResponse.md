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
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1af944f936f01c6727ceba45b2daa93b67)`()` | Gets the value of PlayerMatches_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1aa5cc6ee0491757b4bd91cab374e853a1)`() const` | Gets the value of PlayerMatches_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1aba99faa8c85d9bf35f5e0f9de6c9aca1)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & DefaultValue) const` | Gets the value of PlayerMatches_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a54e3381099dfac69de883b0aa37e0628)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & OutValue) const` | Fills OutValue with the value of PlayerMatches_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a03d85885423a64cb7db7b42be5e86295)`()` | Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1ae585a258d56ca07ea93201670c8968a9)`() const` | Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1ae429d79391eaef47479964236bb33131)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & NewValue)` | Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1ad36c64c05dfdc4f88d904eadcf33f574)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > && NewValue)` | Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true using move semantics.
`public inline void `[`ClearPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060)`()` | Clears the value of PlayerMatches_Optional and sets PlayerMatches_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1ab080e3e674e550f98f4d6277e92a29e6)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a9bfbcdd9a7d892bc718236d662ceee7c)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a8feb2ce98ba162793a2e230439d15a39)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a1d046f2a452cfb0c0328985a84161477)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1ab3dec294f150ffa5c6fbd179d626bec2)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1ad6e7d07e90bcf09a85eb9525948912e6)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1af291bb7679b25acfffe28ae9f52af9ac)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a271f36f63f2ee176f504cc36b9252e95)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__PagedPlayerMatchResponse_1a806d43756a86db3254671ee4504ecbfe)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__PagedPlayerMatchResponse_1a5e36f52caa01d1da6c48496e62f05ee7)`() const` | Checks whether Cursor_Optional is set to null.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1af944f936f01c6727ceba45b2daa93b67)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1af944f936f01c6727ceba45b2daa93b67"></a>

Gets the value of PlayerMatches_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1aa5cc6ee0491757b4bd91cab374e853a1)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1aa5cc6ee0491757b4bd91cab374e853a1"></a>

Gets the value of PlayerMatches_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1aba99faa8c85d9bf35f5e0f9de6c9aca1)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & DefaultValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1aba99faa8c85d9bf35f5e0f9de6c9aca1"></a>

Gets the value of PlayerMatches_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a54e3381099dfac69de883b0aa37e0628)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & OutValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a54e3381099dfac69de883b0aa37e0628"></a>

Fills OutValue with the value of PlayerMatches_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a03d85885423a64cb7db7b42be5e86295)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a03d85885423a64cb7db7b42be5e86295"></a>

Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1ae585a258d56ca07ea93201670c8968a9)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1ae585a258d56ca07ea93201670c8968a9"></a>

Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1ae429d79391eaef47479964236bb33131)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1ae429d79391eaef47479964236bb33131"></a>

Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1ad36c64c05dfdc4f88d904eadcf33f574)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > && NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1ad36c64c05dfdc4f88d904eadcf33f574"></a>

Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060"></a>

Clears the value of PlayerMatches_Optional and sets PlayerMatches_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1ab080e3e674e550f98f4d6277e92a29e6)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1ab080e3e674e550f98f4d6277e92a29e6"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a9bfbcdd9a7d892bc718236d662ceee7c)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a9bfbcdd9a7d892bc718236d662ceee7c"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a8feb2ce98ba162793a2e230439d15a39)`(const FString & DefaultValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a8feb2ce98ba162793a2e230439d15a39"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a1d046f2a452cfb0c0328985a84161477)`(FString & OutValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a1d046f2a452cfb0c0328985a84161477"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1ab3dec294f150ffa5c6fbd179d626bec2)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1ab3dec294f150ffa5c6fbd179d626bec2"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1ad6e7d07e90bcf09a85eb9525948912e6)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1ad6e7d07e90bcf09a85eb9525948912e6"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1af291bb7679b25acfffe28ae9f52af9ac)`(const FString & NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1af291bb7679b25acfffe28ae9f52af9ac"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a271f36f63f2ee176f504cc36b9252e95)`(FString && NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1a271f36f63f2ee176f504cc36b9252e95"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCursorToNull`](#structFRHAPI__PagedPlayerMatchResponse_1a806d43756a86db3254671ee4504ecbfe)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a806d43756a86db3254671ee4504ecbfe"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCursorNull`](#structFRHAPI__PagedPlayerMatchResponse_1a5e36f52caa01d1da6c48496e62f05ee7)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a5e36f52caa01d1da6c48496e62f05ee7"></a>

Checks whether Cursor_Optional is set to null.

