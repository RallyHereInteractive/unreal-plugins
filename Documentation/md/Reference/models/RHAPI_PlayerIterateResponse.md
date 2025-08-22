---
title: RHAPI_PlayerIterateResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerIterateResponse`](#structFRHAPI__PlayerIterateResponse) | Response from the player iteration API.

## struct `FRHAPI_PlayerIterateResponse` <a id="structFRHAPI__PlayerIterateResponse"></a>

```
struct FRHAPI_PlayerIterateResponse
  : public FRHAPI_Model
```

Response from the player iteration API.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > `[`Players_Optional`](#structFRHAPI__PlayerIterateResponse_1a895663738640e3f67d3d20211adcd661) | List of players. An empty list means iteration is complete.
`public bool `[`Players_IsSet`](#structFRHAPI__PlayerIterateResponse_1a51461700ce92c4a32e1903aad24aaa8c) | true if Players_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__PlayerIterateResponse_1a9ea6d8b48377942433369e5349dfd988) | Cursor to continue iteration.
`public bool `[`Cursor_IsSet`](#structFRHAPI__PlayerIterateResponse_1af92e8c04e13e466c9bda9f079ec7ab26) | true if Cursor_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerIterateResponse_1ae4d9b3550054892b43cee9a243abf882)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerIterateResponse_1a7a4cc64939d9b34dbe7745c71ae995bc)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a621cbb102052b66a55f2cff1260ea3d7)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a0ccc5db21a845118541eb84f9db251ac)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a0e01b0fc126fd63cb990c20415df32e1)`(const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1ac3e23c7779ec19d15f326f679a8e0120)`(TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__PlayerIterateResponse_1a3da7a1f58d21fd18d35fa1b658489b30)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__PlayerIterateResponse_1a10f04334325193219ee6eeb30bfee2e6)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlayerIterateResponse_1a9f64988d89c0b4557e7b3f234feef0a4)`(const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlayerIterateResponse_1abcc2ad81e611c94febac197fe533cd3b)`(TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__PlayerIterateResponse_1ac6e2054bef4c10cdf439c1341bdbf70c)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1af6eb58d25b88fee9920bd32bf798357e)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a8f2cce082e02813a7b0b793dfd313ac2)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a6f98d1b7e1693727730c54ffd63bbead)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a1eae0c78d70f76ae1e96d14d1fd4cf77)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PlayerIterateResponse_1a7633abc73e2b8045fc4dc58ec50acb5f)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PlayerIterateResponse_1a8a425ac18da7526f8a66f7e4e9055204)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PlayerIterateResponse_1ab2a26d38f03c9d248a1c33402d2563a2)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PlayerIterateResponse_1ab374683c59f4f0a73399ef8f5d126eb0)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PlayerIterateResponse_1a920afebebc18c99c7ad22e72330ec806)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_Cursor`](#structFRHAPI__PlayerIterateResponse_1a69f9ac0d8912f44c3e80a4e8577e0ae0)`()` | Returns the default value of Cursor.

### Members

#### `public TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > `[`Players_Optional`](#structFRHAPI__PlayerIterateResponse_1a895663738640e3f67d3d20211adcd661) <a id="structFRHAPI__PlayerIterateResponse_1a895663738640e3f67d3d20211adcd661"></a>

List of players. An empty list means iteration is complete.

#### `public bool `[`Players_IsSet`](#structFRHAPI__PlayerIterateResponse_1a51461700ce92c4a32e1903aad24aaa8c) <a id="structFRHAPI__PlayerIterateResponse_1a51461700ce92c4a32e1903aad24aaa8c"></a>

true if Players_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__PlayerIterateResponse_1a9ea6d8b48377942433369e5349dfd988) <a id="structFRHAPI__PlayerIterateResponse_1a9ea6d8b48377942433369e5349dfd988"></a>

Cursor to continue iteration.

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__PlayerIterateResponse_1af92e8c04e13e466c9bda9f079ec7ab26) <a id="structFRHAPI__PlayerIterateResponse_1af92e8c04e13e466c9bda9f079ec7ab26"></a>

true if Cursor_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerIterateResponse_1ae4d9b3550054892b43cee9a243abf882)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerIterateResponse_1ae4d9b3550054892b43cee9a243abf882"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerIterateResponse_1a7a4cc64939d9b34dbe7745c71ae995bc)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerIterateResponse_1a7a4cc64939d9b34dbe7745c71ae995bc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a621cbb102052b66a55f2cff1260ea3d7)`()` <a id="structFRHAPI__PlayerIterateResponse_1a621cbb102052b66a55f2cff1260ea3d7"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a0ccc5db21a845118541eb84f9db251ac)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a0ccc5db21a845118541eb84f9db251ac"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a0e01b0fc126fd63cb990c20415df32e1)`(const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__PlayerIterateResponse_1a0e01b0fc126fd63cb990c20415df32e1"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1ac3e23c7779ec19d15f326f679a8e0120)`(TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` <a id="structFRHAPI__PlayerIterateResponse_1ac3e23c7779ec19d15f326f679a8e0120"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__PlayerIterateResponse_1a3da7a1f58d21fd18d35fa1b658489b30)`()` <a id="structFRHAPI__PlayerIterateResponse_1a3da7a1f58d21fd18d35fa1b658489b30"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__PlayerIterateResponse_1a10f04334325193219ee6eeb30bfee2e6)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a10f04334325193219ee6eeb30bfee2e6"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlayerIterateResponse_1a9f64988d89c0b4557e7b3f234feef0a4)`(const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` <a id="structFRHAPI__PlayerIterateResponse_1a9f64988d89c0b4557e7b3f234feef0a4"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlayerIterateResponse_1abcc2ad81e611c94febac197fe533cd3b)`(TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` <a id="structFRHAPI__PlayerIterateResponse_1abcc2ad81e611c94febac197fe533cd3b"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__PlayerIterateResponse_1ac6e2054bef4c10cdf439c1341bdbf70c)`()` <a id="structFRHAPI__PlayerIterateResponse_1ac6e2054bef4c10cdf439c1341bdbf70c"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1af6eb58d25b88fee9920bd32bf798357e)`()` <a id="structFRHAPI__PlayerIterateResponse_1af6eb58d25b88fee9920bd32bf798357e"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a8f2cce082e02813a7b0b793dfd313ac2)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a8f2cce082e02813a7b0b793dfd313ac2"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a6f98d1b7e1693727730c54ffd63bbead)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerIterateResponse_1a6f98d1b7e1693727730c54ffd63bbead"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a1eae0c78d70f76ae1e96d14d1fd4cf77)`(FString & OutValue) const` <a id="structFRHAPI__PlayerIterateResponse_1a1eae0c78d70f76ae1e96d14d1fd4cf77"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCursorOrNull`](#structFRHAPI__PlayerIterateResponse_1a7633abc73e2b8045fc4dc58ec50acb5f)`()` <a id="structFRHAPI__PlayerIterateResponse_1a7633abc73e2b8045fc4dc58ec50acb5f"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCursorOrNull`](#structFRHAPI__PlayerIterateResponse_1a8a425ac18da7526f8a66f7e4e9055204)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a8a425ac18da7526f8a66f7e4e9055204"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PlayerIterateResponse_1ab2a26d38f03c9d248a1c33402d2563a2)`(const FString & NewValue)` <a id="structFRHAPI__PlayerIterateResponse_1ab2a26d38f03c9d248a1c33402d2563a2"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__PlayerIterateResponse_1ab374683c59f4f0a73399ef8f5d126eb0)`(FString && NewValue)` <a id="structFRHAPI__PlayerIterateResponse_1ab374683c59f4f0a73399ef8f5d126eb0"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PlayerIterateResponse_1a920afebebc18c99c7ad22e72330ec806)`()` <a id="structFRHAPI__PlayerIterateResponse_1a920afebebc18c99c7ad22e72330ec806"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_Cursor`](#structFRHAPI__PlayerIterateResponse_1a69f9ac0d8912f44c3e80a4e8577e0ae0)`()` <a id="structFRHAPI__PlayerIterateResponse_1a69f9ac0d8912f44c3e80a4e8577e0ae0"></a>

Returns the default value of Cursor.

