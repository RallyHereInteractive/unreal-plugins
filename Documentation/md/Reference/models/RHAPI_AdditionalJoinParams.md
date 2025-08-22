---
title: RHAPI_AdditionalJoinParams
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AdditionalJoinParams`](#structFRHAPI__AdditionalJoinParams) | Additional parameters to apply to a matchmaking ticket.

## struct `FRHAPI_AdditionalJoinParams` <a id="structFRHAPI__AdditionalJoinParams"></a>

```
struct FRHAPI_AdditionalJoinParams
  : public FRHAPI_Model
```

Additional parameters to apply to a matchmaking ticket.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, float > `[`DoubleArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83) | Additional double arguments to add to the matchmaking ticket.
`public bool `[`DoubleArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707) | true if DoubleArgs_Optional has been set to a value
`public TMap< FString, FString > `[`StringArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4) | Additional string arguments to add to the matchmaking ticket.
`public bool `[`StringArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d) | true if StringArgs_Optional has been set to a value
`public TArray< FString > `[`Tags_Optional`](#structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3) | Additional tags to add to the matchmaking ticket.
`public bool `[`Tags_IsSet`](#structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6) | true if Tags_Optional has been set to a value
`public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd) | Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket.
`public bool `[`Extensions_IsSet`](#structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83) | true if Extensions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AdditionalJoinParams_1a15c180c984f3184041ff5f9dab7c409d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1adeb3ea20e2c70401ee567cf8e4b51696)`()` | Gets the value of DoubleArgs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ab63dc5be1cff1644453df8a58bcda205)`() const` | Gets the value of DoubleArgs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a6e5c5754aac8bde9859f89bc20e43e3f)`(const TMap< FString, float > & DefaultValue) const` | Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a50dfd0f89e94578b102cd7c9ca0ae113)`(TMap< FString, float > & OutValue) const` | Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1ad212cf5cc710e1002b392c8eaf179d77)`()` | Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1af6cc7b631ea05801d2adb3749982e04f)`() const` | Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a69beebd5c8a111dd733d5b478d610a26)`(const TMap< FString, float > & NewValue)` | Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true.
`public inline FORCEINLINE void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a2e1cb1d92067257c88aa3df40960b0d6)`(TMap< FString, float > && NewValue)` | Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true using move semantics.
`public inline void `[`ClearDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207)`()` | Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a093d23adcc1aecad12bed2ae752bfaa5)`()` | Gets the value of StringArgs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a30fd0a1927c5610f67c194df6928bd3f)`() const` | Gets the value of StringArgs_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a6c2e60efb3d5d4e0b98a133bb963d730)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a3b47b889f2c269452cb5d0a21cced541)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1ac8bc8e54666aa1baa436b551151ff117)`()` | Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a72858db7d6d1ec300e1f877282ebb0be)`() const` | Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a98f207bd03fa8e4a087725d70582df9a)`(const TMap< FString, FString > & NewValue)` | Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true.
`public inline FORCEINLINE void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1ae4cb55ea4dcd909e0d9e9c4613b77c1d)`(TMap< FString, FString > && NewValue)` | Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true using move semantics.
`public inline void `[`ClearStringArgs`](#structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563)`()` | Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false.
`public inline FORCEINLINE TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a2456263d81305dd0658d5c036144c24a)`()` | Gets the value of Tags_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1acbbe9d4726a6f8a5e0ba5d2093d5009b)`() const` | Gets the value of Tags_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a1398369c7573ea4d042e2b3e21cd48d2)`(const TArray< FString > & DefaultValue) const` | Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1ad873d605ca673c9fc23361a03d20d15e)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a5daf7f13167b8c0db480b544c49e7493)`()` | Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a73bb0893ee9e82a1d9e4e95b2f5a67ba)`() const` | Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1ab1a8b1f087382b0f10e37afa0f44992f)`(const TArray< FString > & NewValue)` | Sets the value of Tags_Optional and also sets Tags_IsSet to true.
`public inline FORCEINLINE void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1ae63857b812c0634742e325d77ab86095)`(TArray< FString > && NewValue)` | Sets the value of Tags_Optional and also sets Tags_IsSet to true using move semantics.
`public inline void `[`ClearTags`](#structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9)`()` | Clears the value of Tags_Optional and sets Tags_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a60e437034cbe9909174dfe42e3cd5ca1)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a6df20aea8d4d2cbe32afe1a16067980a)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a54ee704cd85274afbb0fe143700537e6)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a915d8fe2261c8833a4f41dfbfd330396)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1aab967b775e260145e6c2a06274fa0e0a)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1ac6ca75dced1178ed25c3f0c797cfe25b)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a2fe624d30590ba0f747c51516d7bbd12)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a5c690f0d225517a49fd717b9fc0e1b1b)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

### Members

#### `public TMap< FString, float > `[`DoubleArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83) <a id="structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83"></a>

Additional double arguments to add to the matchmaking ticket.

#### `public bool `[`DoubleArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707) <a id="structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707"></a>

true if DoubleArgs_Optional has been set to a value

#### `public TMap< FString, FString > `[`StringArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4) <a id="structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4"></a>

Additional string arguments to add to the matchmaking ticket.

#### `public bool `[`StringArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d) <a id="structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d"></a>

true if StringArgs_Optional has been set to a value

#### `public TArray< FString > `[`Tags_Optional`](#structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3) <a id="structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3"></a>

Additional tags to add to the matchmaking ticket.

#### `public bool `[`Tags_IsSet`](#structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6) <a id="structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6"></a>

true if Tags_Optional has been set to a value

#### `public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd) <a id="structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd"></a>

Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket.

#### `public bool `[`Extensions_IsSet`](#structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83) <a id="structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83"></a>

true if Extensions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AdditionalJoinParams_1a15c180c984f3184041ff5f9dab7c409d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AdditionalJoinParams_1a15c180c984f3184041ff5f9dab7c409d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1adeb3ea20e2c70401ee567cf8e4b51696)`()` <a id="structFRHAPI__AdditionalJoinParams_1adeb3ea20e2c70401ee567cf8e4b51696"></a>

Gets the value of DoubleArgs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ab63dc5be1cff1644453df8a58bcda205)`() const` <a id="structFRHAPI__AdditionalJoinParams_1ab63dc5be1cff1644453df8a58bcda205"></a>

Gets the value of DoubleArgs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a6e5c5754aac8bde9859f89bc20e43e3f)`(const TMap< FString, float > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a6e5c5754aac8bde9859f89bc20e43e3f"></a>

Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a50dfd0f89e94578b102cd7c9ca0ae113)`(TMap< FString, float > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a50dfd0f89e94578b102cd7c9ca0ae113"></a>

Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1ad212cf5cc710e1002b392c8eaf179d77)`()` <a id="structFRHAPI__AdditionalJoinParams_1ad212cf5cc710e1002b392c8eaf179d77"></a>

Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1af6cc7b631ea05801d2adb3749982e04f)`() const` <a id="structFRHAPI__AdditionalJoinParams_1af6cc7b631ea05801d2adb3749982e04f"></a>

Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a69beebd5c8a111dd733d5b478d610a26)`(const TMap< FString, float > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a69beebd5c8a111dd733d5b478d610a26"></a>

Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a2e1cb1d92067257c88aa3df40960b0d6)`(TMap< FString, float > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a2e1cb1d92067257c88aa3df40960b0d6"></a>

Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true using move semantics.

#### `public inline void `[`ClearDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207)`()` <a id="structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207"></a>

Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a093d23adcc1aecad12bed2ae752bfaa5)`()` <a id="structFRHAPI__AdditionalJoinParams_1a093d23adcc1aecad12bed2ae752bfaa5"></a>

Gets the value of StringArgs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a30fd0a1927c5610f67c194df6928bd3f)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a30fd0a1927c5610f67c194df6928bd3f"></a>

Gets the value of StringArgs_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a6c2e60efb3d5d4e0b98a133bb963d730)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a6c2e60efb3d5d4e0b98a133bb963d730"></a>

Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a3b47b889f2c269452cb5d0a21cced541)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a3b47b889f2c269452cb5d0a21cced541"></a>

Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1ac8bc8e54666aa1baa436b551151ff117)`()` <a id="structFRHAPI__AdditionalJoinParams_1ac8bc8e54666aa1baa436b551151ff117"></a>

Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a72858db7d6d1ec300e1f877282ebb0be)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a72858db7d6d1ec300e1f877282ebb0be"></a>

Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a98f207bd03fa8e4a087725d70582df9a)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a98f207bd03fa8e4a087725d70582df9a"></a>

Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1ae4cb55ea4dcd909e0d9e9c4613b77c1d)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1ae4cb55ea4dcd909e0d9e9c4613b77c1d"></a>

Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true using move semantics.

#### `public inline void `[`ClearStringArgs`](#structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563)`()` <a id="structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563"></a>

Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false.

#### `public inline FORCEINLINE TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a2456263d81305dd0658d5c036144c24a)`()` <a id="structFRHAPI__AdditionalJoinParams_1a2456263d81305dd0658d5c036144c24a"></a>

Gets the value of Tags_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1acbbe9d4726a6f8a5e0ba5d2093d5009b)`() const` <a id="structFRHAPI__AdditionalJoinParams_1acbbe9d4726a6f8a5e0ba5d2093d5009b"></a>

Gets the value of Tags_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a1398369c7573ea4d042e2b3e21cd48d2)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a1398369c7573ea4d042e2b3e21cd48d2"></a>

Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1ad873d605ca673c9fc23361a03d20d15e)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1ad873d605ca673c9fc23361a03d20d15e"></a>

Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a5daf7f13167b8c0db480b544c49e7493)`()` <a id="structFRHAPI__AdditionalJoinParams_1a5daf7f13167b8c0db480b544c49e7493"></a>

Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a73bb0893ee9e82a1d9e4e95b2f5a67ba)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a73bb0893ee9e82a1d9e4e95b2f5a67ba"></a>

Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1ab1a8b1f087382b0f10e37afa0f44992f)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1ab1a8b1f087382b0f10e37afa0f44992f"></a>

Sets the value of Tags_Optional and also sets Tags_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1ae63857b812c0634742e325d77ab86095)`(TArray< FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1ae63857b812c0634742e325d77ab86095"></a>

Sets the value of Tags_Optional and also sets Tags_IsSet to true using move semantics.

#### `public inline void `[`ClearTags`](#structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9)`()` <a id="structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9"></a>

Clears the value of Tags_Optional and sets Tags_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a60e437034cbe9909174dfe42e3cd5ca1)`()` <a id="structFRHAPI__AdditionalJoinParams_1a60e437034cbe9909174dfe42e3cd5ca1"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a6df20aea8d4d2cbe32afe1a16067980a)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a6df20aea8d4d2cbe32afe1a16067980a"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a54ee704cd85274afbb0fe143700537e6)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a54ee704cd85274afbb0fe143700537e6"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a915d8fe2261c8833a4f41dfbfd330396)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a915d8fe2261c8833a4f41dfbfd330396"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1aab967b775e260145e6c2a06274fa0e0a)`()` <a id="structFRHAPI__AdditionalJoinParams_1aab967b775e260145e6c2a06274fa0e0a"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1ac6ca75dced1178ed25c3f0c797cfe25b)`() const` <a id="structFRHAPI__AdditionalJoinParams_1ac6ca75dced1178ed25c3f0c797cfe25b"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a2fe624d30590ba0f747c51516d7bbd12)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a2fe624d30590ba0f747c51516d7bbd12"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a5c690f0d225517a49fd717b9fc0e1b1b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a5c690f0d225517a49fd717b9fc0e1b1b"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2)`()` <a id="structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

