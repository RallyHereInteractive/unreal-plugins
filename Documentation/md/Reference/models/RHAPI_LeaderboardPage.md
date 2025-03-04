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
`public inline FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a0e3dd2646a9aef8309bc0889b15b6391)`()` | Gets the value of LeaderboardId.
`public inline const FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a140ee7010bf5c7ed92da6b63c08425fc)`() const` | Gets the value of LeaderboardId.
`public inline void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a91ffe201687ce7eb7ac77231433628f5)`(const FString & NewValue)` | Sets the value of LeaderboardId.
`public inline void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardPage_1ae144004e115a23b066cbbdc46189dc43)`(FString && NewValue)` | Sets the value of LeaderboardId using move semantics.
`public inline FString & `[`GetCursor`](#structFRHAPI__LeaderboardPage_1a195e03899b11fca15598d4fc69e2dcec)`()` | Gets the value of Cursor.
`public inline const FString & `[`GetCursor`](#structFRHAPI__LeaderboardPage_1adf8f8b550d88449fc5b76fb8a29e9566)`() const` | Gets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__LeaderboardPage_1ab39d5dc0b7f91c1186c2ea129415c32b)`(const FString & NewValue)` | Sets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__LeaderboardPage_1a15f5b1dbe27921e2ccc5030d6480d780)`(FString && NewValue)` | Sets the value of Cursor using move semantics.
`public inline TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & `[`GetEntries`](#structFRHAPI__LeaderboardPage_1aeab26e6dc4afc9202d821171f14819e2)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & `[`GetEntries`](#structFRHAPI__LeaderboardPage_1a99b28e5149793d8e988a056a311d5461)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__LeaderboardPage_1a8fb72106916024739747d55409140f0f)`(const TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__LeaderboardPage_1a88532f26545a5a15fdd96ac4a296e0c8)`(TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > && NewValue)` | Sets the value of Entries using move semantics.

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

#### `public inline FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a0e3dd2646a9aef8309bc0889b15b6391)`()` <a id="structFRHAPI__LeaderboardPage_1a0e3dd2646a9aef8309bc0889b15b6391"></a>

Gets the value of LeaderboardId.

#### `public inline const FString & `[`GetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a140ee7010bf5c7ed92da6b63c08425fc)`() const` <a id="structFRHAPI__LeaderboardPage_1a140ee7010bf5c7ed92da6b63c08425fc"></a>

Gets the value of LeaderboardId.

#### `public inline void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardPage_1a91ffe201687ce7eb7ac77231433628f5)`(const FString & NewValue)` <a id="structFRHAPI__LeaderboardPage_1a91ffe201687ce7eb7ac77231433628f5"></a>

Sets the value of LeaderboardId.

#### `public inline void `[`SetLeaderboardId`](#structFRHAPI__LeaderboardPage_1ae144004e115a23b066cbbdc46189dc43)`(FString && NewValue)` <a id="structFRHAPI__LeaderboardPage_1ae144004e115a23b066cbbdc46189dc43"></a>

Sets the value of LeaderboardId using move semantics.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__LeaderboardPage_1a195e03899b11fca15598d4fc69e2dcec)`()` <a id="structFRHAPI__LeaderboardPage_1a195e03899b11fca15598d4fc69e2dcec"></a>

Gets the value of Cursor.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__LeaderboardPage_1adf8f8b550d88449fc5b76fb8a29e9566)`() const` <a id="structFRHAPI__LeaderboardPage_1adf8f8b550d88449fc5b76fb8a29e9566"></a>

Gets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__LeaderboardPage_1ab39d5dc0b7f91c1186c2ea129415c32b)`(const FString & NewValue)` <a id="structFRHAPI__LeaderboardPage_1ab39d5dc0b7f91c1186c2ea129415c32b"></a>

Sets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__LeaderboardPage_1a15f5b1dbe27921e2ccc5030d6480d780)`(FString && NewValue)` <a id="structFRHAPI__LeaderboardPage_1a15f5b1dbe27921e2ccc5030d6480d780"></a>

Sets the value of Cursor using move semantics.

#### `public inline TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & `[`GetEntries`](#structFRHAPI__LeaderboardPage_1aeab26e6dc4afc9202d821171f14819e2)`()` <a id="structFRHAPI__LeaderboardPage_1aeab26e6dc4afc9202d821171f14819e2"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & `[`GetEntries`](#structFRHAPI__LeaderboardPage_1a99b28e5149793d8e988a056a311d5461)`() const` <a id="structFRHAPI__LeaderboardPage_1a99b28e5149793d8e988a056a311d5461"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__LeaderboardPage_1a8fb72106916024739747d55409140f0f)`(const TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > & NewValue)` <a id="structFRHAPI__LeaderboardPage_1a8fb72106916024739747d55409140f0f"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__LeaderboardPage_1a88532f26545a5a15fdd96ac4a296e0c8)`(TArray< `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` > && NewValue)` <a id="structFRHAPI__LeaderboardPage_1a88532f26545a5a15fdd96ac4a296e0c8"></a>

Sets the value of Entries using move semantics.

