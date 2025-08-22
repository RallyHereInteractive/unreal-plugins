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
`public inline FORCEINLINE int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1aab792dd96ac236c15adebee908390190)`()` | Gets the value of MaxSize_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1ac5df6f6f3ed8682b03f44a1b5ac4f540)`() const` | Gets the value of MaxSize_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1a04882f2e4849f76ee26c7defb9742968)`(const int32 & DefaultValue) const` | Gets the value of MaxSize_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1abd6ee9fbd09013fd78705bb2efa89a5e)`(int32 & OutValue) const` | Fills OutValue with the value of MaxSize_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMaxSizeOrNull`](#structFRHAPI__TeamUpdate_1a50ba334178ae36d836eae4b08d777fe6)`()` | Returns a pointer to MaxSize_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMaxSizeOrNull`](#structFRHAPI__TeamUpdate_1a2a4c4aaa5222a4dd4297105808402cc9)`() const` | Returns a pointer to MaxSize_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1a6729a7e4d3f5e94f073699281d8c052a)`(const int32 & NewValue)` | Sets the value of MaxSize_Optional and also sets MaxSize_IsSet to true.
`public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1aa549dc1c43776fc4c41d04d341286a16)`(int32 && NewValue)` | Sets the value of MaxSize_Optional and also sets MaxSize_IsSet to true using move semantics.
`public inline void `[`ClearMaxSize`](#structFRHAPI__TeamUpdate_1a086511082a587f69f276492940e41082)`()` | Clears the value of MaxSize_Optional and sets MaxSize_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxSize`](#structFRHAPI__TeamUpdate_1ab96a277709b5069e4529cb549fc1d7f1)`()` | Returns the default value of MaxSize.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1a48a2bf614666be2b0561a05501e834f8)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1affa20da30c1933f8d0a5b2a259164342)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1aa0f9afced666109930061121888fa165)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__TeamUpdate_1ac340113de9eac0a15a5107a2550a4301)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__TeamUpdate_1a51a2cb269a7ee5ca81bb7a73f59e3c81)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__TeamUpdate_1a5d1307070489db8dcba13561c8f89121)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__TeamUpdate_1a6e983a5f40f64e2bafdc80e1fa0bb4cf)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__TeamUpdate_1a6ca63bf9fb3b11c34e3d13b958fa005e)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__TeamUpdate_1af6009b80e6b8f6f06305121fd97bb37f)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public inline FORCEINLINE int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1aab792dd96ac236c15adebee908390190)`()` <a id="structFRHAPI__TeamUpdate_1aab792dd96ac236c15adebee908390190"></a>

Gets the value of MaxSize_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1ac5df6f6f3ed8682b03f44a1b5ac4f540)`() const` <a id="structFRHAPI__TeamUpdate_1ac5df6f6f3ed8682b03f44a1b5ac4f540"></a>

Gets the value of MaxSize_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1a04882f2e4849f76ee26c7defb9742968)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TeamUpdate_1a04882f2e4849f76ee26c7defb9742968"></a>

Gets the value of MaxSize_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1abd6ee9fbd09013fd78705bb2efa89a5e)`(int32 & OutValue) const` <a id="structFRHAPI__TeamUpdate_1abd6ee9fbd09013fd78705bb2efa89a5e"></a>

Fills OutValue with the value of MaxSize_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMaxSizeOrNull`](#structFRHAPI__TeamUpdate_1a50ba334178ae36d836eae4b08d777fe6)`()` <a id="structFRHAPI__TeamUpdate_1a50ba334178ae36d836eae4b08d777fe6"></a>

Returns a pointer to MaxSize_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMaxSizeOrNull`](#structFRHAPI__TeamUpdate_1a2a4c4aaa5222a4dd4297105808402cc9)`() const` <a id="structFRHAPI__TeamUpdate_1a2a4c4aaa5222a4dd4297105808402cc9"></a>

Returns a pointer to MaxSize_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1a6729a7e4d3f5e94f073699281d8c052a)`(const int32 & NewValue)` <a id="structFRHAPI__TeamUpdate_1a6729a7e4d3f5e94f073699281d8c052a"></a>

Sets the value of MaxSize_Optional and also sets MaxSize_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1aa549dc1c43776fc4c41d04d341286a16)`(int32 && NewValue)` <a id="structFRHAPI__TeamUpdate_1aa549dc1c43776fc4c41d04d341286a16"></a>

Sets the value of MaxSize_Optional and also sets MaxSize_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxSize`](#structFRHAPI__TeamUpdate_1a086511082a587f69f276492940e41082)`()` <a id="structFRHAPI__TeamUpdate_1a086511082a587f69f276492940e41082"></a>

Clears the value of MaxSize_Optional and sets MaxSize_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxSize`](#structFRHAPI__TeamUpdate_1ab96a277709b5069e4529cb549fc1d7f1)`()` <a id="structFRHAPI__TeamUpdate_1ab96a277709b5069e4529cb549fc1d7f1"></a>

Returns the default value of MaxSize.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1a48a2bf614666be2b0561a05501e834f8)`()` <a id="structFRHAPI__TeamUpdate_1a48a2bf614666be2b0561a05501e834f8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1affa20da30c1933f8d0a5b2a259164342)`() const` <a id="structFRHAPI__TeamUpdate_1affa20da30c1933f8d0a5b2a259164342"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__TeamUpdate_1aa0f9afced666109930061121888fa165)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__TeamUpdate_1aa0f9afced666109930061121888fa165"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__TeamUpdate_1ac340113de9eac0a15a5107a2550a4301)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__TeamUpdate_1ac340113de9eac0a15a5107a2550a4301"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__TeamUpdate_1a51a2cb269a7ee5ca81bb7a73f59e3c81)`()` <a id="structFRHAPI__TeamUpdate_1a51a2cb269a7ee5ca81bb7a73f59e3c81"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__TeamUpdate_1a5d1307070489db8dcba13561c8f89121)`() const` <a id="structFRHAPI__TeamUpdate_1a5d1307070489db8dcba13561c8f89121"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__TeamUpdate_1a6e983a5f40f64e2bafdc80e1fa0bb4cf)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__TeamUpdate_1a6e983a5f40f64e2bafdc80e1fa0bb4cf"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__TeamUpdate_1a6ca63bf9fb3b11c34e3d13b958fa005e)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__TeamUpdate_1a6ca63bf9fb3b11c34e3d13b958fa005e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__TeamUpdate_1af6009b80e6b8f6f06305121fd97bb37f)`()` <a id="structFRHAPI__TeamUpdate_1af6009b80e6b8f6f06305121fd97bb37f"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

