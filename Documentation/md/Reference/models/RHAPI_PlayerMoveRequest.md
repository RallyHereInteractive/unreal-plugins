---
title: RHAPI_PlayerMoveRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerMoveRequest`](#structFRHAPI__PlayerMoveRequest) | 

## struct `FRHAPI_PlayerMoveRequest` <a id="structFRHAPI__PlayerMoveRequest"></a>

```
struct FRHAPI_PlayerMoveRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`TeamId_Optional`](#structFRHAPI__PlayerMoveRequest_1a821217741535adf1d7ad664a74b3acae) | Which team the player should be moved to.
`public bool `[`TeamId_IsSet`](#structFRHAPI__PlayerMoveRequest_1aab47ce4ce4dfd44c6682a2f9275485f5) | true if TeamId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerMoveRequest_1aa2f4b9e213b492412eb37988da310165)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerMoveRequest_1ae4aa69275aa5f667a17770e3fd031111)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1abb4b9304f9cbd9eea7a19cfe64d97eff)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1ac023f6aa9261b4e6cb9bf5851e1acd22)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1a119db3a4d67dfc97a621b4301b60fc80)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1ad35b7329853beea5d742c87bad3bedda)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerMoveRequest_1a04ba19cf8d5c40cc15ae81f274e760c8)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerMoveRequest_1a23394bd68bca6135407e673a472948f9)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__PlayerMoveRequest_1a034eb52e145e7496e539536df22015d8)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__PlayerMoveRequest_1ae5b0ee3d32d90d15f6e37df7ad3c7395)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__PlayerMoveRequest_1a0847f8e73c04301044c8184f9d86540b)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__PlayerMoveRequest_1a283d026e7926f2128c4a8a3416a0fe0e)`()` | Returns the default value of TeamId.

### Members

#### `public int32 `[`TeamId_Optional`](#structFRHAPI__PlayerMoveRequest_1a821217741535adf1d7ad664a74b3acae) <a id="structFRHAPI__PlayerMoveRequest_1a821217741535adf1d7ad664a74b3acae"></a>

Which team the player should be moved to.

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__PlayerMoveRequest_1aab47ce4ce4dfd44c6682a2f9275485f5) <a id="structFRHAPI__PlayerMoveRequest_1aab47ce4ce4dfd44c6682a2f9275485f5"></a>

true if TeamId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerMoveRequest_1aa2f4b9e213b492412eb37988da310165)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerMoveRequest_1aa2f4b9e213b492412eb37988da310165"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerMoveRequest_1ae4aa69275aa5f667a17770e3fd031111)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerMoveRequest_1ae4aa69275aa5f667a17770e3fd031111"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1abb4b9304f9cbd9eea7a19cfe64d97eff)`()` <a id="structFRHAPI__PlayerMoveRequest_1abb4b9304f9cbd9eea7a19cfe64d97eff"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1ac023f6aa9261b4e6cb9bf5851e1acd22)`() const` <a id="structFRHAPI__PlayerMoveRequest_1ac023f6aa9261b4e6cb9bf5851e1acd22"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1a119db3a4d67dfc97a621b4301b60fc80)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerMoveRequest_1a119db3a4d67dfc97a621b4301b60fc80"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1ad35b7329853beea5d742c87bad3bedda)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerMoveRequest_1ad35b7329853beea5d742c87bad3bedda"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerMoveRequest_1a04ba19cf8d5c40cc15ae81f274e760c8)`()` <a id="structFRHAPI__PlayerMoveRequest_1a04ba19cf8d5c40cc15ae81f274e760c8"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerMoveRequest_1a23394bd68bca6135407e673a472948f9)`() const` <a id="structFRHAPI__PlayerMoveRequest_1a23394bd68bca6135407e673a472948f9"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__PlayerMoveRequest_1a034eb52e145e7496e539536df22015d8)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerMoveRequest_1a034eb52e145e7496e539536df22015d8"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__PlayerMoveRequest_1ae5b0ee3d32d90d15f6e37df7ad3c7395)`(int32 && NewValue)` <a id="structFRHAPI__PlayerMoveRequest_1ae5b0ee3d32d90d15f6e37df7ad3c7395"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__PlayerMoveRequest_1a0847f8e73c04301044c8184f9d86540b)`()` <a id="structFRHAPI__PlayerMoveRequest_1a0847f8e73c04301044c8184f9d86540b"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__PlayerMoveRequest_1a283d026e7926f2128c4a8a3416a0fe0e)`()` <a id="structFRHAPI__PlayerMoveRequest_1a283d026e7926f2128c4a8a3416a0fe0e"></a>

Returns the default value of TeamId.

