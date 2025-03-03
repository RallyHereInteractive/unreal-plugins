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
`public inline int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1a9f4af316fb89c1581f6e1c07bc9215fe)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1ab99a403da5af0da83363c940c575204a)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1af86f4dbaf792cf01ef6ac06c0b28e2c4)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1ad22ff8c9526ddd821c5f4e00ce8ca20b)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerMoveRequest_1a16ccaa92b28e1d4147f204d468015452)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerMoveRequest_1a2120980fceb327ccc34f9c1101aec735)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__PlayerMoveRequest_1a6b5cb0666957c917d913c52a90094632)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__PlayerMoveRequest_1a9c2a5e7ff9663d6c8f4588ac8394a1d5)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__PlayerMoveRequest_1a0847f8e73c04301044c8184f9d86540b)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__PlayerMoveRequest_1af46dba470b9ef80a95c5f26004aac7d6)`() const` | Checks whether TeamId_Optional has been set.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__PlayerMoveRequest_1aac4a20d52b7148a051410c2f827db96d)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__PlayerMoveRequest_1a15ca5b83bcc4fca9e2f50da29284f707)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

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

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1a9f4af316fb89c1581f6e1c07bc9215fe)`()` <a id="structFRHAPI__PlayerMoveRequest_1a9f4af316fb89c1581f6e1c07bc9215fe"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1ab99a403da5af0da83363c940c575204a)`() const` <a id="structFRHAPI__PlayerMoveRequest_1ab99a403da5af0da83363c940c575204a"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1af86f4dbaf792cf01ef6ac06c0b28e2c4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerMoveRequest_1af86f4dbaf792cf01ef6ac06c0b28e2c4"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__PlayerMoveRequest_1ad22ff8c9526ddd821c5f4e00ce8ca20b)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerMoveRequest_1ad22ff8c9526ddd821c5f4e00ce8ca20b"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerMoveRequest_1a16ccaa92b28e1d4147f204d468015452)`()` <a id="structFRHAPI__PlayerMoveRequest_1a16ccaa92b28e1d4147f204d468015452"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerMoveRequest_1a2120980fceb327ccc34f9c1101aec735)`() const` <a id="structFRHAPI__PlayerMoveRequest_1a2120980fceb327ccc34f9c1101aec735"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__PlayerMoveRequest_1a6b5cb0666957c917d913c52a90094632)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerMoveRequest_1a6b5cb0666957c917d913c52a90094632"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__PlayerMoveRequest_1a9c2a5e7ff9663d6c8f4588ac8394a1d5)`(int32 && NewValue)` <a id="structFRHAPI__PlayerMoveRequest_1a9c2a5e7ff9663d6c8f4588ac8394a1d5"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__PlayerMoveRequest_1a0847f8e73c04301044c8184f9d86540b)`()` <a id="structFRHAPI__PlayerMoveRequest_1a0847f8e73c04301044c8184f9d86540b"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__PlayerMoveRequest_1af46dba470b9ef80a95c5f26004aac7d6)`() const` <a id="structFRHAPI__PlayerMoveRequest_1af46dba470b9ef80a95c5f26004aac7d6"></a>

Checks whether TeamId_Optional has been set.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__PlayerMoveRequest_1aac4a20d52b7148a051410c2f827db96d)`() const` <a id="structFRHAPI__PlayerMoveRequest_1aac4a20d52b7148a051410c2f827db96d"></a>

Returns true if TeamId_Optional is set and matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__PlayerMoveRequest_1a15ca5b83bcc4fca9e2f50da29284f707)`()` <a id="structFRHAPI__PlayerMoveRequest_1a15ca5b83bcc4fca9e2f50da29284f707"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

