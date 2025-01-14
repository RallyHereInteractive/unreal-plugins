---
title: RHAPI_TeamUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TeamUpdate`](#structFRHAPI__TeamUpdate) | An update to a specific team&#39;s number of max players.

## struct `FRHAPI_TeamUpdate` <a id="structFRHAPI__TeamUpdate"></a>

```
struct FRHAPI_TeamUpdate
  : public FRHAPI_Model
```

An update to a specific team&#39;s number of max players.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`MaxSize_Optional`](#structFRHAPI__TeamUpdate_1a0fca267ee6cb1f6b7de3fb5131f73e31) | Maximum number of players for this team.
`public bool `[`MaxSize_IsSet`](#structFRHAPI__TeamUpdate_1ac7d9ee5f43fb0731e43fa86d43832e6f) | true if MaxSize_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__TeamUpdate_1a7176513b86b002f0dae7fbcf8d02e4b8) | Custom data about this team.
`public bool `[`CustomData_IsSet`](#structFRHAPI__TeamUpdate_1ad66effdcb9bafa67c5d217af37559eca) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__TeamUpdate_1a74bdb2f31346bd4669a9a6669834c3d2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TeamUpdate_1a1eead5811ebfb9d10b6d3cabe4071239)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1ad192c11a06bfd278678395d497c936ee)`()` | Gets the value of MaxSize_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1aa86ffeeeba196ed69725f754833ad661)`() const` | Gets the value of MaxSize_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1a204aecf8a042c3d6212a5c168753b2c1)`(const int32 & DefaultValue) const` | Gets the value of MaxSize_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1acd318505639935af778cfe320986fa52)`(int32 & OutValue) const` | Fills OutValue with the value of MaxSize_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMaxSizeOrNull`](#structFRHAPI__TeamUpdate_1a9ed40dd76eee657319ae387b1c992edc)`()` | Returns a pointer to MaxSize_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMaxSizeOrNull`](#structFRHAPI__TeamUpdate_1a37da5ebec33939ab904f0c1f7a6ea12d)`() const` | Returns a pointer to MaxSize_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1a7de16735784c8805adf62dbd283b113a)`(const int32 & NewValue)` | Sets the value of MaxSize_Optional and also sets MaxSize_IsSet to true.
`public inline void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1a09affc3d8512a992aa8d8512e2be57b7)`(int32 && NewValue)` | Sets the value of MaxSize_Optional and also sets MaxSize_IsSet to true using move semantics.
`public inline void `[`ClearMaxSize`](#structFRHAPI__TeamUpdate_1a086511082a587f69f276492940e41082)`()` | Clears the value of MaxSize_Optional and sets MaxSize_IsSet to false.
`public inline bool `[`IsMaxSizeSet`](#structFRHAPI__TeamUpdate_1a59294d152b4c299bebcd48c8cd59404a)`() const` | Checks whether MaxSize_Optional has been set.
`public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__TeamUpdate_1aa8b9fad5404e4a3e396c566a2027357a)`() const` | Returns true if MaxSize_Optional is set and matches the default value.
`public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__TeamUpdate_1ae7fd780e7a53bfee856cb41cadbc4049)`()` | Sets the value of MaxSize_Optional to its default and also sets MaxSize_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1ace72ea22ad4378d2c471527146dd166f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1ab1b184324bfb340dfe77f3827b145f17)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1a95045e61b58d235b95c83f5f1f93358b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__TeamUpdate_1a2dd260cd72967015f6e40c03aed22bd7)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__TeamUpdate_1a201680a4394a6d3dad48499b41611bdf)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__TeamUpdate_1a77f02431c58ff47b91fa66c42b0996c2)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__TeamUpdate_1ae633c2798ff9a78074df6dac770d032f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__TeamUpdate_1a98647520e490fc4611bd44f97857da84)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__TeamUpdate_1af6009b80e6b8f6f06305121fd97bb37f)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__TeamUpdate_1a0c3d51490feb8a44e42b4d7554389ba4)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public int32 `[`MaxSize_Optional`](#structFRHAPI__TeamUpdate_1a0fca267ee6cb1f6b7de3fb5131f73e31) <a id="structFRHAPI__TeamUpdate_1a0fca267ee6cb1f6b7de3fb5131f73e31"></a>

Maximum number of players for this team.

#### `public bool `[`MaxSize_IsSet`](#structFRHAPI__TeamUpdate_1ac7d9ee5f43fb0731e43fa86d43832e6f) <a id="structFRHAPI__TeamUpdate_1ac7d9ee5f43fb0731e43fa86d43832e6f"></a>

true if MaxSize_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__TeamUpdate_1a7176513b86b002f0dae7fbcf8d02e4b8) <a id="structFRHAPI__TeamUpdate_1a7176513b86b002f0dae7fbcf8d02e4b8"></a>

Custom data about this team.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__TeamUpdate_1ad66effdcb9bafa67c5d217af37559eca) <a id="structFRHAPI__TeamUpdate_1ad66effdcb9bafa67c5d217af37559eca"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__TeamUpdate_1a74bdb2f31346bd4669a9a6669834c3d2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TeamUpdate_1a74bdb2f31346bd4669a9a6669834c3d2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TeamUpdate_1a1eead5811ebfb9d10b6d3cabe4071239)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__TeamUpdate_1a1eead5811ebfb9d10b6d3cabe4071239"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1ad192c11a06bfd278678395d497c936ee)`()` <a id="structFRHAPI__TeamUpdate_1ad192c11a06bfd278678395d497c936ee"></a>

Gets the value of MaxSize_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1aa86ffeeeba196ed69725f754833ad661)`() const` <a id="structFRHAPI__TeamUpdate_1aa86ffeeeba196ed69725f754833ad661"></a>

Gets the value of MaxSize_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1a204aecf8a042c3d6212a5c168753b2c1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TeamUpdate_1a204aecf8a042c3d6212a5c168753b2c1"></a>

Gets the value of MaxSize_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1acd318505639935af778cfe320986fa52)`(int32 & OutValue) const` <a id="structFRHAPI__TeamUpdate_1acd318505639935af778cfe320986fa52"></a>

Fills OutValue with the value of MaxSize_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMaxSizeOrNull`](#structFRHAPI__TeamUpdate_1a9ed40dd76eee657319ae387b1c992edc)`()` <a id="structFRHAPI__TeamUpdate_1a9ed40dd76eee657319ae387b1c992edc"></a>

Returns a pointer to MaxSize_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMaxSizeOrNull`](#structFRHAPI__TeamUpdate_1a37da5ebec33939ab904f0c1f7a6ea12d)`() const` <a id="structFRHAPI__TeamUpdate_1a37da5ebec33939ab904f0c1f7a6ea12d"></a>

Returns a pointer to MaxSize_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1a7de16735784c8805adf62dbd283b113a)`(const int32 & NewValue)` <a id="structFRHAPI__TeamUpdate_1a7de16735784c8805adf62dbd283b113a"></a>

Sets the value of MaxSize_Optional and also sets MaxSize_IsSet to true.

#### `public inline void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1a09affc3d8512a992aa8d8512e2be57b7)`(int32 && NewValue)` <a id="structFRHAPI__TeamUpdate_1a09affc3d8512a992aa8d8512e2be57b7"></a>

Sets the value of MaxSize_Optional and also sets MaxSize_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxSize`](#structFRHAPI__TeamUpdate_1a086511082a587f69f276492940e41082)`()` <a id="structFRHAPI__TeamUpdate_1a086511082a587f69f276492940e41082"></a>

Clears the value of MaxSize_Optional and sets MaxSize_IsSet to false.

#### `public inline bool `[`IsMaxSizeSet`](#structFRHAPI__TeamUpdate_1a59294d152b4c299bebcd48c8cd59404a)`() const` <a id="structFRHAPI__TeamUpdate_1a59294d152b4c299bebcd48c8cd59404a"></a>

Checks whether MaxSize_Optional has been set.

#### `public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__TeamUpdate_1aa8b9fad5404e4a3e396c566a2027357a)`() const` <a id="structFRHAPI__TeamUpdate_1aa8b9fad5404e4a3e396c566a2027357a"></a>

Returns true if MaxSize_Optional is set and matches the default value.

#### `public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__TeamUpdate_1ae7fd780e7a53bfee856cb41cadbc4049)`()` <a id="structFRHAPI__TeamUpdate_1ae7fd780e7a53bfee856cb41cadbc4049"></a>

Sets the value of MaxSize_Optional to its default and also sets MaxSize_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1ace72ea22ad4378d2c471527146dd166f)`()` <a id="structFRHAPI__TeamUpdate_1ace72ea22ad4378d2c471527146dd166f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1ab1b184324bfb340dfe77f3827b145f17)`() const` <a id="structFRHAPI__TeamUpdate_1ab1b184324bfb340dfe77f3827b145f17"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1a95045e61b58d235b95c83f5f1f93358b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__TeamUpdate_1a95045e61b58d235b95c83f5f1f93358b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__TeamUpdate_1a2dd260cd72967015f6e40c03aed22bd7)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__TeamUpdate_1a2dd260cd72967015f6e40c03aed22bd7"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__TeamUpdate_1a201680a4394a6d3dad48499b41611bdf)`()` <a id="structFRHAPI__TeamUpdate_1a201680a4394a6d3dad48499b41611bdf"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__TeamUpdate_1a77f02431c58ff47b91fa66c42b0996c2)`() const` <a id="structFRHAPI__TeamUpdate_1a77f02431c58ff47b91fa66c42b0996c2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__TeamUpdate_1ae633c2798ff9a78074df6dac770d032f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__TeamUpdate_1ae633c2798ff9a78074df6dac770d032f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__TeamUpdate_1a98647520e490fc4611bd44f97857da84)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__TeamUpdate_1a98647520e490fc4611bd44f97857da84"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__TeamUpdate_1af6009b80e6b8f6f06305121fd97bb37f)`()` <a id="structFRHAPI__TeamUpdate_1af6009b80e6b8f6f06305121fd97bb37f"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__TeamUpdate_1a0c3d51490feb8a44e42b4d7554389ba4)`() const` <a id="structFRHAPI__TeamUpdate_1a0c3d51490feb8a44e42b4d7554389ba4"></a>

Checks whether CustomData_Optional has been set.

