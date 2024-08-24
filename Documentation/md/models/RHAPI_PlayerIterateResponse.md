# group `RHAPI_PlayerIterateResponse` <a id="group__RHAPI__PlayerIterateResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerIterateResponse`](#structFRHAPI__PlayerIterateResponse) | Response from the player iteration API.

---
title: FRHAPI_PlayerIterateResponse
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerIterateResponse_1a5f3f25f87d697608498ae67bae2bae77)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a03b63b47b0d2d4ef4eee29c0155c50d3)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a0480fc62567938f1b36c8fba2062eb39)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a364feb0c00abf168521a1cbb73811a21)`(const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1aaaa281609d9815877805502168dda12f)`(TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__PlayerIterateResponse_1aa95817f306b4e999c95bb438ef90f53a)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__PlayerIterateResponse_1a6d6f10e748336b03cdb4d6523fa91dca)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__PlayerIterateResponse_1a630b3c3c8ec0943ef0ac62a4cf00f75a)`(const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__PlayerIterateResponse_1aabb0d172f1f4e9e728c3a4e3c1faabe4)`(TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__PlayerIterateResponse_1ac6e2054bef4c10cdf439c1341bdbf70c)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline bool `[`IsPlayersSet`](#structFRHAPI__PlayerIterateResponse_1a14e486dfb3331f5578b58ac9ad2d7635)`() const` | Checks whether Players_Optional has been set.
`public inline FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1afe69ab2e2c9a31415d330a546722f615)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a7cb96cbe9d2e15dfecd816c8b3e7484a)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a7a450d8cebaa09f4f86d26916bcccbd9)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a311acdf4347a3bb279f0f4997fa9009f)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PlayerIterateResponse_1aa58baaafc66ee37672289aa33721c6dd)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PlayerIterateResponse_1a690b16b3406255c26fba923f0a6f4d0c)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__PlayerIterateResponse_1ab4a04d20b55f0e14cccb0a708e6f1e23)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__PlayerIterateResponse_1adafd93e3da55ab51d780dfd9f77c1476)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PlayerIterateResponse_1a920afebebc18c99c7ad22e72330ec806)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.
`public inline bool `[`IsCursorSet`](#structFRHAPI__PlayerIterateResponse_1a62f58b9760d776db3e0bd821ef78f0c5)`() const` | Checks whether Cursor_Optional has been set.
`public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__PlayerIterateResponse_1a676a735136b1e24c677f033f0b39a2ea)`() const` | Returns true if Cursor_Optional is set and matches the default value.
`public inline void `[`SetCursorToDefault`](#structFRHAPI__PlayerIterateResponse_1aaac64e56a63411ad63385a486d4bf1fa)`()` | Sets the value of Cursor_Optional to its default and also sets Cursor_IsSet to true.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerIterateResponse_1a5f3f25f87d697608498ae67bae2bae77)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerIterateResponse_1a5f3f25f87d697608498ae67bae2bae77"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a03b63b47b0d2d4ef4eee29c0155c50d3)`()` <a id="structFRHAPI__PlayerIterateResponse_1a03b63b47b0d2d4ef4eee29c0155c50d3"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a0480fc62567938f1b36c8fba2062eb39)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a0480fc62567938f1b36c8fba2062eb39"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1a364feb0c00abf168521a1cbb73811a21)`(const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__PlayerIterateResponse_1a364feb0c00abf168521a1cbb73811a21"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__PlayerIterateResponse_1aaaa281609d9815877805502168dda12f)`(TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` <a id="structFRHAPI__PlayerIterateResponse_1aaaa281609d9815877805502168dda12f"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__PlayerIterateResponse_1aa95817f306b4e999c95bb438ef90f53a)`()` <a id="structFRHAPI__PlayerIterateResponse_1aa95817f306b4e999c95bb438ef90f53a"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__PlayerIterateResponse_1a6d6f10e748336b03cdb4d6523fa91dca)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a6d6f10e748336b03cdb4d6523fa91dca"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__PlayerIterateResponse_1a630b3c3c8ec0943ef0ac62a4cf00f75a)`(const TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` <a id="structFRHAPI__PlayerIterateResponse_1a630b3c3c8ec0943ef0ac62a4cf00f75a"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__PlayerIterateResponse_1aabb0d172f1f4e9e728c3a4e3c1faabe4)`(TArray< `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` <a id="structFRHAPI__PlayerIterateResponse_1aabb0d172f1f4e9e728c3a4e3c1faabe4"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__PlayerIterateResponse_1ac6e2054bef4c10cdf439c1341bdbf70c)`()` <a id="structFRHAPI__PlayerIterateResponse_1ac6e2054bef4c10cdf439c1341bdbf70c"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline bool `[`IsPlayersSet`](#structFRHAPI__PlayerIterateResponse_1a14e486dfb3331f5578b58ac9ad2d7635)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a14e486dfb3331f5578b58ac9ad2d7635"></a>

Checks whether Players_Optional has been set.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1afe69ab2e2c9a31415d330a546722f615)`()` <a id="structFRHAPI__PlayerIterateResponse_1afe69ab2e2c9a31415d330a546722f615"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a7cb96cbe9d2e15dfecd816c8b3e7484a)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a7cb96cbe9d2e15dfecd816c8b3e7484a"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a7a450d8cebaa09f4f86d26916bcccbd9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerIterateResponse_1a7a450d8cebaa09f4f86d26916bcccbd9"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__PlayerIterateResponse_1a311acdf4347a3bb279f0f4997fa9009f)`(FString & OutValue) const` <a id="structFRHAPI__PlayerIterateResponse_1a311acdf4347a3bb279f0f4997fa9009f"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PlayerIterateResponse_1aa58baaafc66ee37672289aa33721c6dd)`()` <a id="structFRHAPI__PlayerIterateResponse_1aa58baaafc66ee37672289aa33721c6dd"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PlayerIterateResponse_1a690b16b3406255c26fba923f0a6f4d0c)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a690b16b3406255c26fba923f0a6f4d0c"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__PlayerIterateResponse_1ab4a04d20b55f0e14cccb0a708e6f1e23)`(const FString & NewValue)` <a id="structFRHAPI__PlayerIterateResponse_1ab4a04d20b55f0e14cccb0a708e6f1e23"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__PlayerIterateResponse_1adafd93e3da55ab51d780dfd9f77c1476)`(FString && NewValue)` <a id="structFRHAPI__PlayerIterateResponse_1adafd93e3da55ab51d780dfd9f77c1476"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PlayerIterateResponse_1a920afebebc18c99c7ad22e72330ec806)`()` <a id="structFRHAPI__PlayerIterateResponse_1a920afebebc18c99c7ad22e72330ec806"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

#### `public inline bool `[`IsCursorSet`](#structFRHAPI__PlayerIterateResponse_1a62f58b9760d776db3e0bd821ef78f0c5)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a62f58b9760d776db3e0bd821ef78f0c5"></a>

Checks whether Cursor_Optional has been set.

#### `public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__PlayerIterateResponse_1a676a735136b1e24c677f033f0b39a2ea)`() const` <a id="structFRHAPI__PlayerIterateResponse_1a676a735136b1e24c677f033f0b39a2ea"></a>

Returns true if Cursor_Optional is set and matches the default value.

#### `public inline void `[`SetCursorToDefault`](#structFRHAPI__PlayerIterateResponse_1aaac64e56a63411ad63385a486d4bf1fa)`()` <a id="structFRHAPI__PlayerIterateResponse_1aaac64e56a63411ad63385a486d4bf1fa"></a>

Sets the value of Cursor_Optional to its default and also sets Cursor_IsSet to true.

