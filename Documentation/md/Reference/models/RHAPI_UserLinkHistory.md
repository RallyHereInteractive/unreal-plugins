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
`public inline TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1ad8d352d500c7b678cf1cd447fcaf5698)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1aea8a678cdb2c797bfc08635b9037db5a)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a2bcff2e7389c86a5bf1e5ef2d28249f3)`(const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a76cc8e4d3af41de215bc418f305dba6e)`(TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > && NewValue)` | Sets the value of Entries using move semantics.
`public inline FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a1712a2f1325ee13c7b0389239f86a4d7)`()` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a3be7568aa3231c64707dd526ad3bfd0b)`() const` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1acce1244fe76ad44b184866e1c0cff652)`(const FString & DefaultValue) const` | Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1ad0dbc8171510f31533187b962a545fd5)`(FString & OutValue) const` | Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1ae75c75ae30de30eff7840443a1ca038b)`()` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1a6f371b641dee4399ac655aad40990e1f)`() const` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1aa7b25013b178f87999c3dc48e8ebe871)`(const FString & NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.
`public inline void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1aad9b1a2671e5aea3cc9545af4f30facd)`(FString && NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.
`public inline void `[`ClearContinuationToken`](#structFRHAPI__UserLinkHistory_1ad6459c05aa56a7173eb8c28b72a29cd4)`()` | Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.
`public inline bool `[`IsContinuationTokenSet`](#structFRHAPI__UserLinkHistory_1accd5661e01cc0f00c8a85ad32dc0fc63)`() const` | Checks whether ContinuationToken_Optional has been set.

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

#### `public inline TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1ad8d352d500c7b678cf1cd447fcaf5698)`()` <a id="structFRHAPI__UserLinkHistory_1ad8d352d500c7b678cf1cd447fcaf5698"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1aea8a678cdb2c797bfc08635b9037db5a)`() const` <a id="structFRHAPI__UserLinkHistory_1aea8a678cdb2c797bfc08635b9037db5a"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a2bcff2e7389c86a5bf1e5ef2d28249f3)`(const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & NewValue)` <a id="structFRHAPI__UserLinkHistory_1a2bcff2e7389c86a5bf1e5ef2d28249f3"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a76cc8e4d3af41de215bc418f305dba6e)`(TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > && NewValue)` <a id="structFRHAPI__UserLinkHistory_1a76cc8e4d3af41de215bc418f305dba6e"></a>

Sets the value of Entries using move semantics.

#### `public inline FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a1712a2f1325ee13c7b0389239f86a4d7)`()` <a id="structFRHAPI__UserLinkHistory_1a1712a2f1325ee13c7b0389239f86a4d7"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a3be7568aa3231c64707dd526ad3bfd0b)`() const` <a id="structFRHAPI__UserLinkHistory_1a3be7568aa3231c64707dd526ad3bfd0b"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1acce1244fe76ad44b184866e1c0cff652)`(const FString & DefaultValue) const` <a id="structFRHAPI__UserLinkHistory_1acce1244fe76ad44b184866e1c0cff652"></a>

Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1ad0dbc8171510f31533187b962a545fd5)`(FString & OutValue) const` <a id="structFRHAPI__UserLinkHistory_1ad0dbc8171510f31533187b962a545fd5"></a>

Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1ae75c75ae30de30eff7840443a1ca038b)`()` <a id="structFRHAPI__UserLinkHistory_1ae75c75ae30de30eff7840443a1ca038b"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1a6f371b641dee4399ac655aad40990e1f)`() const` <a id="structFRHAPI__UserLinkHistory_1a6f371b641dee4399ac655aad40990e1f"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1aa7b25013b178f87999c3dc48e8ebe871)`(const FString & NewValue)` <a id="structFRHAPI__UserLinkHistory_1aa7b25013b178f87999c3dc48e8ebe871"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.

#### `public inline void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1aad9b1a2671e5aea3cc9545af4f30facd)`(FString && NewValue)` <a id="structFRHAPI__UserLinkHistory_1aad9b1a2671e5aea3cc9545af4f30facd"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.

#### `public inline void `[`ClearContinuationToken`](#structFRHAPI__UserLinkHistory_1ad6459c05aa56a7173eb8c28b72a29cd4)`()` <a id="structFRHAPI__UserLinkHistory_1ad6459c05aa56a7173eb8c28b72a29cd4"></a>

Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

#### `public inline bool `[`IsContinuationTokenSet`](#structFRHAPI__UserLinkHistory_1accd5661e01cc0f00c8a85ad32dc0fc63)`() const` <a id="structFRHAPI__UserLinkHistory_1accd5661e01cc0f00c8a85ad32dc0fc63"></a>

Checks whether ContinuationToken_Optional has been set.

