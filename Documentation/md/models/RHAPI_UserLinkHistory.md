# group `RHAPI_UserLinkHistory` <a id="group__RHAPI__UserLinkHistory"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__UserLinkHistory_1a5c7f195111d3cfd16cee94ada9136949)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1a8008de2beb0233ac49b218d94132e248)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1a62bdeaddf3f7a4c0c77ca265e35b7bd4)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a2bcff2e7389c86a5bf1e5ef2d28249f3)`(const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a76cc8e4d3af41de215bc418f305dba6e)`(TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > && NewValue)` | Sets the value of Entries using move semantics.
`public inline FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a97ff0c32119e8811f73624f53b2359b6)`()` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a23c7f62a021ded50c427580c5b8c388e)`() const` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a32a6ddd3d0c5ff76a7f715825ce51185)`(const FString & DefaultValue) const` | Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1ad0dbc8171510f31533187b962a545fd5)`(FString & OutValue) const` | Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1a1c6a6fc016dd934f01f619f9e782a6a9)`()` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1a0a8dbfd9dbd6b4a11857c0bb6386fd8a)`() const` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__UserLinkHistory_1a5c7f195111d3cfd16cee94ada9136949)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UserLinkHistory_1a5c7f195111d3cfd16cee94ada9136949"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1a8008de2beb0233ac49b218d94132e248)`()` <a id="structFRHAPI__UserLinkHistory_1a8008de2beb0233ac49b218d94132e248"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & `[`GetEntries`](#structFRHAPI__UserLinkHistory_1a62bdeaddf3f7a4c0c77ca265e35b7bd4)`() const` <a id="structFRHAPI__UserLinkHistory_1a62bdeaddf3f7a4c0c77ca265e35b7bd4"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a2bcff2e7389c86a5bf1e5ef2d28249f3)`(const TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > & NewValue)` <a id="structFRHAPI__UserLinkHistory_1a2bcff2e7389c86a5bf1e5ef2d28249f3"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__UserLinkHistory_1a76cc8e4d3af41de215bc418f305dba6e)`(TArray< `[`FRHAPI_UserLinkHistoryEntry`](RHAPI_UserLinkHistoryEntry.md#structFRHAPI__UserLinkHistoryEntry)` > && NewValue)` <a id="structFRHAPI__UserLinkHistory_1a76cc8e4d3af41de215bc418f305dba6e"></a>

Sets the value of Entries using move semantics.

#### `public inline FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a97ff0c32119e8811f73624f53b2359b6)`()` <a id="structFRHAPI__UserLinkHistory_1a97ff0c32119e8811f73624f53b2359b6"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a23c7f62a021ded50c427580c5b8c388e)`() const` <a id="structFRHAPI__UserLinkHistory_1a23c7f62a021ded50c427580c5b8c388e"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1a32a6ddd3d0c5ff76a7f715825ce51185)`(const FString & DefaultValue) const` <a id="structFRHAPI__UserLinkHistory_1a32a6ddd3d0c5ff76a7f715825ce51185"></a>

Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetContinuationToken`](#structFRHAPI__UserLinkHistory_1ad0dbc8171510f31533187b962a545fd5)`(FString & OutValue) const` <a id="structFRHAPI__UserLinkHistory_1ad0dbc8171510f31533187b962a545fd5"></a>

Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1a1c6a6fc016dd934f01f619f9e782a6a9)`()` <a id="structFRHAPI__UserLinkHistory_1a1c6a6fc016dd934f01f619f9e782a6a9"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__UserLinkHistory_1a0a8dbfd9dbd6b4a11857c0bb6386fd8a)`() const` <a id="structFRHAPI__UserLinkHistory_1a0a8dbfd9dbd6b4a11857c0bb6386fd8a"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1aa7b25013b178f87999c3dc48e8ebe871)`(const FString & NewValue)` <a id="structFRHAPI__UserLinkHistory_1aa7b25013b178f87999c3dc48e8ebe871"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.

#### `public inline void `[`SetContinuationToken`](#structFRHAPI__UserLinkHistory_1aad9b1a2671e5aea3cc9545af4f30facd)`(FString && NewValue)` <a id="structFRHAPI__UserLinkHistory_1aad9b1a2671e5aea3cc9545af4f30facd"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.

#### `public inline void `[`ClearContinuationToken`](#structFRHAPI__UserLinkHistory_1ad6459c05aa56a7173eb8c28b72a29cd4)`()` <a id="structFRHAPI__UserLinkHistory_1ad6459c05aa56a7173eb8c28b72a29cd4"></a>

Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

#### `public inline bool `[`IsContinuationTokenSet`](#structFRHAPI__UserLinkHistory_1accd5661e01cc0f00c8a85ad32dc0fc63)`() const` <a id="structFRHAPI__UserLinkHistory_1accd5661e01cc0f00c8a85ad32dc0fc63"></a>

Checks whether ContinuationToken_Optional has been set.

