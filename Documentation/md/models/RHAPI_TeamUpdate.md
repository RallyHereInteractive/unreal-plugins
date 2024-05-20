# RHAPI_TeamUpdate <a id="group__RHAPI__TeamUpdate"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`MaxSize`](#structFRHAPI__TeamUpdate_1a3c25e80c265f99a87d6506894dcaf8d0) | Maximum number of players for this team.
`public virtual bool `[`FromJson`](#structFRHAPI__TeamUpdate_1a2c2bdbc0429940e29fafa91d6329bb4f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TeamUpdate_1ac21d2abf6d99a2bcb37767f67ac00c95)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1ac2e62105e97448f0c93a5025bf0b8bee)`()` | Gets the value of MaxSize.
`public inline const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1a6be90147d0c10713c202b04ee6b28705)`() const` | Gets the value of MaxSize.
`public inline void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1a8d430eebc3137a5c538e4f591b6b727e)`(int32 NewValue)` | Sets the value of MaxSize.
`public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__TeamUpdate_1aa8b9fad5404e4a3e396c566a2027357a)`() const` | Returns true if MaxSize matches the default value.
`public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__TeamUpdate_1ae7fd780e7a53bfee856cb41cadbc4049)`()` | Sets the value of MaxSize to its default

#### Members

#### `public int32 `[`MaxSize`](#structFRHAPI__TeamUpdate_1a3c25e80c265f99a87d6506894dcaf8d0) <a id="structFRHAPI__TeamUpdate_1a3c25e80c265f99a87d6506894dcaf8d0"></a>

Maximum number of players for this team.

#### `public virtual bool `[`FromJson`](#structFRHAPI__TeamUpdate_1a2c2bdbc0429940e29fafa91d6329bb4f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TeamUpdate_1a2c2bdbc0429940e29fafa91d6329bb4f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TeamUpdate_1ac21d2abf6d99a2bcb37767f67ac00c95)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TeamUpdate_1ac21d2abf6d99a2bcb37767f67ac00c95"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1ac2e62105e97448f0c93a5025bf0b8bee)`()` <a id="structFRHAPI__TeamUpdate_1ac2e62105e97448f0c93a5025bf0b8bee"></a>

Gets the value of MaxSize.

#### `public inline const int32 & `[`GetMaxSize`](#structFRHAPI__TeamUpdate_1a6be90147d0c10713c202b04ee6b28705)`() const` <a id="structFRHAPI__TeamUpdate_1a6be90147d0c10713c202b04ee6b28705"></a>

Gets the value of MaxSize.

#### `public inline void `[`SetMaxSize`](#structFRHAPI__TeamUpdate_1a8d430eebc3137a5c538e4f591b6b727e)`(int32 NewValue)` <a id="structFRHAPI__TeamUpdate_1a8d430eebc3137a5c538e4f591b6b727e"></a>

Sets the value of MaxSize.

#### `public inline bool `[`IsMaxSizeDefaultValue`](#structFRHAPI__TeamUpdate_1aa8b9fad5404e4a3e396c566a2027357a)`() const` <a id="structFRHAPI__TeamUpdate_1aa8b9fad5404e4a3e396c566a2027357a"></a>

Returns true if MaxSize matches the default value.

#### `public inline void `[`SetMaxSizeToDefault`](#structFRHAPI__TeamUpdate_1ae7fd780e7a53bfee856cb41cadbc4049)`()` <a id="structFRHAPI__TeamUpdate_1ae7fd780e7a53bfee856cb41cadbc4049"></a>

Sets the value of MaxSize to its default

