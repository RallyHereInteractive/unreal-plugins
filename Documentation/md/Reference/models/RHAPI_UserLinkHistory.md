---
title: RHAPI_UserLinkHistory
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UserLinkHistory`](#structFRHAPI__UserLinkHistory) | 

## struct `FRHAPI_UserLinkHistory` <a id="structFRHAPI__UserLinkHistory"></a>

```
struct FRHAPI_UserLinkHistory
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > `[`Entries`](#structFRHAPI__UserLinkHistory_1ae0d7bd7026009eb76fb2564c591e462c) | The link history entries.
`public FString `[`ContinuationToken_Optional`](#structFRHAPI__UserLinkHistory_1a144b6b785964acf730265b3e21dc2cd1) | Token to retrieve the next page of results.
`public bool `[`ContinuationToken_IsSet`](#structFRHAPI__UserLinkHistory_1aef222ede40f898a289375416f7806a49) | true if ContinuationToken_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__UserLinkHistory_1ae7fd548637a49f2f8d0f2035f7844180)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UserLinkHistory_1abf25a48e0b3a2e2c0ac9d402acd08d6d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1a37ff2ca0f4977d0c8eced0357d58d44c)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1a6e754b4faab1579e48badeea0e19b8d2)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1ab71cc2c57b73360bc77953693e74a04c)`(const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a831608274a7cbc563f740c38a7b7c9fe)`(TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > && NewValue)` | Sets the value of Entries using move semantics.
`public inline FORCEINLINE FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a5df919e27dc681949c15fce94ae1708c)`()` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a133b0dd0e0a9fc7654a5dce8f8d1a512)`() const` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a687457146bb31494155dcffc2b73da92)`(const FString & DefaultValue) const` | Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a46682b81b09acefa388707ccf1d71957)`(FString & OutValue) const` | Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1aaeb8ab318f7dff0a3c690ebafb21b75f)`()` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1a3c78bb64a52e20c1a6f62ffb82bc4e97)`() const` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1ac5b416ea1ed55dd836366939241572fb)`(const FString & NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.
`public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1a4d00cf3f880b41d0e8dca4a74e9213c2)`(FString && NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.
`public inline void `[`ClearContinuationToken`](#structFRHAPI__UserLinkHistory_1ad6459c05aa56a7173eb8c28b72a29cd4)`()` | Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > `[`Entries`](#structFRHAPI__UserLinkHistory_1ae0d7bd7026009eb76fb2564c591e462c) <a id="structFRHAPI__UserLinkHistory_1ae0d7bd7026009eb76fb2564c591e462c"></a>

The link history entries.

#### `public FString `[`ContinuationToken_Optional`](#structFRHAPI__UserLinkHistory_1a144b6b785964acf730265b3e21dc2cd1) <a id="structFRHAPI__UserLinkHistory_1a144b6b785964acf730265b3e21dc2cd1"></a>

Token to retrieve the next page of results.

#### `public bool `[`ContinuationToken_IsSet`](#structFRHAPI__UserLinkHistory_1aef222ede40f898a289375416f7806a49) <a id="structFRHAPI__UserLinkHistory_1aef222ede40f898a289375416f7806a49"></a>

true if ContinuationToken_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__UserLinkHistory_1ae7fd548637a49f2f8d0f2035f7844180)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UserLinkHistory_1ae7fd548637a49f2f8d0f2035f7844180"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UserLinkHistory_1abf25a48e0b3a2e2c0ac9d402acd08d6d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UserLinkHistory_1abf25a48e0b3a2e2c0ac9d402acd08d6d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1a37ff2ca0f4977d0c8eced0357d58d44c)`()` <a id="structFRHAPI__UserLinkHistory_1a37ff2ca0f4977d0c8eced0357d58d44c"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1a6e754b4faab1579e48badeea0e19b8d2)`() const` <a id="structFRHAPI__UserLinkHistory_1a6e754b4faab1579e48badeea0e19b8d2"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1ab71cc2c57b73360bc77953693e74a04c)`(const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & NewValue)` <a id="structFRHAPI__UserLinkHistory_1ab71cc2c57b73360bc77953693e74a04c"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a831608274a7cbc563f740c38a7b7c9fe)`(TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > && NewValue)` <a id="structFRHAPI__UserLinkHistory_1a831608274a7cbc563f740c38a7b7c9fe"></a>

Sets the value of Entries using move semantics.

#### `public inline FORCEINLINE FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a5df919e27dc681949c15fce94ae1708c)`()` <a id="structFRHAPI__UserLinkHistory_1a5df919e27dc681949c15fce94ae1708c"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a133b0dd0e0a9fc7654a5dce8f8d1a512)`() const` <a id="structFRHAPI__UserLinkHistory_1a133b0dd0e0a9fc7654a5dce8f8d1a512"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a687457146bb31494155dcffc2b73da92)`(const FString & DefaultValue) const` <a id="structFRHAPI__UserLinkHistory_1a687457146bb31494155dcffc2b73da92"></a>

Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a46682b81b09acefa388707ccf1d71957)`(FString & OutValue) const` <a id="structFRHAPI__UserLinkHistory_1a46682b81b09acefa388707ccf1d71957"></a>

Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1aaeb8ab318f7dff0a3c690ebafb21b75f)`()` <a id="structFRHAPI__UserLinkHistory_1aaeb8ab318f7dff0a3c690ebafb21b75f"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1a3c78bb64a52e20c1a6f62ffb82bc4e97)`() const` <a id="structFRHAPI__UserLinkHistory_1a3c78bb64a52e20c1a6f62ffb82bc4e97"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1ac5b416ea1ed55dd836366939241572fb)`(const FString & NewValue)` <a id="structFRHAPI__UserLinkHistory_1ac5b416ea1ed55dd836366939241572fb"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1a4d00cf3f880b41d0e8dca4a74e9213c2)`(FString && NewValue)` <a id="structFRHAPI__UserLinkHistory_1a4d00cf3f880b41d0e8dca4a74e9213c2"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.

#### `public inline void `[`ClearContinuationToken`](#structFRHAPI__UserLinkHistory_1ad6459c05aa56a7173eb8c28b72a29cd4)`()` <a id="structFRHAPI__UserLinkHistory_1ad6459c05aa56a7173eb8c28b72a29cd4"></a>

Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

