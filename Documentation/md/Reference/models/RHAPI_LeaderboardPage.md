---
title: RHAPI_LeaderboardPage
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LeaderboardPage`](#structFRHAPI__LeaderboardPage) | 

## struct `FRHAPI_LeaderboardPage` <a id="structFRHAPI__LeaderboardPage"></a>

```
struct FRHAPI_LeaderboardPage
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`LeaderboardId`](#structFRHAPI__LeaderboardPage_1ad6561da079dfabbc033257415f3a609c) | Which leaderboard config is used for this leaderboard.
`public FString `[`Cursor`](#structFRHAPI__LeaderboardPage_1a353ca38f608a1e69d4c0a6d1f438a4c4) | The cursor for the next page of results. 0 means there are no more.
`public TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > `[`Entries`](#structFRHAPI__LeaderboardPage_1a164b6c65fbb7e4bce037229fb8705db7) | List of leaderboard entries.
`public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardPage_1a2e4912041f4fc37e5b256dbe1353709f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardPage_1ac77ed9ba8726d1d370b24fd33a54cb4f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardPage_1aacdbd88abee562d6094d75f91ce39b57)`()` | Gets the value of LeaderboardId.
`public inline FORCEINLINE const FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardPage_1aaff5eba882d726af80bc5b8bbdef377f)`() const` | Gets the value of LeaderboardId.
`public inline FORCEINLINE void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a734e4aa38dc383fca4de4b97888e8d6f)`(const FString & NewValue)` | Sets the value of LeaderboardId.
`public inline FORCEINLINE void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a536715a890d188f9568b307d65b0bcf8)`(FString && NewValue)` | Sets the value of LeaderboardId using move semantics.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__LeaderboardPage_1a9443d87146130b139f9e43b53be27f2e)`()` | Gets the value of Cursor.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__LeaderboardPage_1a2b7197522fc58ae8f25c08e72404936d)`() const` | Gets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__LeaderboardPage_1a1885834d78882548efc3f4cb6b65b641)`(const FString & NewValue)` | Sets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__LeaderboardPage_1ae06f0a2537172b51d1180358ed8e6d92)`(FString && NewValue)` | Sets the value of Cursor using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & `[`GetEntries`](#structFRHAPI__LeaderboardPage_1a37789e0566ed1047c0b86263e5362510)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & `[`GetEntries`](#structFRHAPI__LeaderboardPage_1ac4d6736b8d91eecf99d21b4aa25e9276)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__LeaderboardPage_1aceac824e36613424974487aa5601266e)`(const TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__LeaderboardPage_1aa3fbbf1f40033f120d32e60004db36c3)`(TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > && NewValue)` | Sets the value of Entries using move semantics.

### Members

#### `public FString `[`LeaderboardId`](#structFRHAPI__LeaderboardPage_1ad6561da079dfabbc033257415f3a609c) <a id="structFRHAPI__LeaderboardPage_1ad6561da079dfabbc033257415f3a609c"></a>

Which leaderboard config is used for this leaderboard.

#### `public FString `[`Cursor`](#structFRHAPI__LeaderboardPage_1a353ca38f608a1e69d4c0a6d1f438a4c4) <a id="structFRHAPI__LeaderboardPage_1a353ca38f608a1e69d4c0a6d1f438a4c4"></a>

The cursor for the next page of results. 0 means there are no more.

#### `public TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > `[`Entries`](#structFRHAPI__LeaderboardPage_1a164b6c65fbb7e4bce037229fb8705db7) <a id="structFRHAPI__LeaderboardPage_1a164b6c65fbb7e4bce037229fb8705db7"></a>

List of leaderboard entries.

#### `public virtual bool `[`FromJson`](#structFRHAPI__LeaderboardPage_1a2e4912041f4fc37e5b256dbe1353709f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LeaderboardPage_1a2e4912041f4fc37e5b256dbe1353709f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LeaderboardPage_1ac77ed9ba8726d1d370b24fd33a54cb4f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LeaderboardPage_1ac77ed9ba8726d1d370b24fd33a54cb4f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardPage_1aacdbd88abee562d6094d75f91ce39b57)`()` <a id="structFRHAPI__LeaderboardPage_1aacdbd88abee562d6094d75f91ce39b57"></a>

Gets the value of LeaderboardId.

#### `public inline FORCEINLINE const FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardPage_1aaff5eba882d726af80bc5b8bbdef377f)`() const` <a id="structFRHAPI__LeaderboardPage_1aaff5eba882d726af80bc5b8bbdef377f"></a>

Gets the value of LeaderboardId.

#### `public inline FORCEINLINE void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a734e4aa38dc383fca4de4b97888e8d6f)`(const FString & NewValue)` <a id="structFRHAPI__LeaderboardPage_1a734e4aa38dc383fca4de4b97888e8d6f"></a>

Sets the value of LeaderboardId.

#### `public inline FORCEINLINE void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a536715a890d188f9568b307d65b0bcf8)`(FString && NewValue)` <a id="structFRHAPI__LeaderboardPage_1a536715a890d188f9568b307d65b0bcf8"></a>

Sets the value of LeaderboardId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__LeaderboardPage_1a9443d87146130b139f9e43b53be27f2e)`()` <a id="structFRHAPI__LeaderboardPage_1a9443d87146130b139f9e43b53be27f2e"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__LeaderboardPage_1a2b7197522fc58ae8f25c08e72404936d)`() const` <a id="structFRHAPI__LeaderboardPage_1a2b7197522fc58ae8f25c08e72404936d"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__LeaderboardPage_1a1885834d78882548efc3f4cb6b65b641)`(const FString & NewValue)` <a id="structFRHAPI__LeaderboardPage_1a1885834d78882548efc3f4cb6b65b641"></a>

Sets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__LeaderboardPage_1ae06f0a2537172b51d1180358ed8e6d92)`(FString && NewValue)` <a id="structFRHAPI__LeaderboardPage_1ae06f0a2537172b51d1180358ed8e6d92"></a>

Sets the value of Cursor using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & `[`GetEntries`](#structFRHAPI__LeaderboardPage_1a37789e0566ed1047c0b86263e5362510)`()` <a id="structFRHAPI__LeaderboardPage_1a37789e0566ed1047c0b86263e5362510"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & `[`GetEntries`](#structFRHAPI__LeaderboardPage_1ac4d6736b8d91eecf99d21b4aa25e9276)`() const` <a id="structFRHAPI__LeaderboardPage_1ac4d6736b8d91eecf99d21b4aa25e9276"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__LeaderboardPage_1aceac824e36613424974487aa5601266e)`(const TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & NewValue)` <a id="structFRHAPI__LeaderboardPage_1aceac824e36613424974487aa5601266e"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__LeaderboardPage_1aa3fbbf1f40033f120d32e60004db36c3)`(TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > && NewValue)` <a id="structFRHAPI__LeaderboardPage_1aa3fbbf1f40033f120d32e60004db36c3"></a>

Sets the value of Entries using move semantics.

