# RHAPI_PlayerIdWrapper <a id="group__RHAPI__PlayerIdWrapper"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerIdWrapper`](#structFRHAPI__PlayerIdWrapper) | 

## struct `FRHAPI_PlayerIdWrapper` <a id="structFRHAPI__PlayerIdWrapper"></a>

```
struct FRHAPI_PlayerIdWrapper
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId`](#structFRHAPI__PlayerIdWrapper_1a9d3517523183b4512a3e4335470be60a) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerIdWrapper_1af5ce582a754d7f0db265d7e33b039674)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerIdWrapper_1ac9e978d8c152b4cc909db76a787e4529)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a1f525c0cdd5ad98d8bd51582e9644900)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a6d4d79522551ec4b8d5bd0045cd3784f)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a5fab2ef714c104e844b89f62ffdd30f5)`(int32 NewValue)` | Sets the value of PlayerId.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa)`()` | Sets the value of PlayerId to its default

#### Members

#### `public int32 `[`PlayerId`](#structFRHAPI__PlayerIdWrapper_1a9d3517523183b4512a3e4335470be60a) <a id="structFRHAPI__PlayerIdWrapper_1a9d3517523183b4512a3e4335470be60a"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerIdWrapper_1af5ce582a754d7f0db265d7e33b039674)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerIdWrapper_1af5ce582a754d7f0db265d7e33b039674"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerIdWrapper_1ac9e978d8c152b4cc909db76a787e4529)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerIdWrapper_1ac9e978d8c152b4cc909db76a787e4529"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a1f525c0cdd5ad98d8bd51582e9644900)`()` <a id="structFRHAPI__PlayerIdWrapper_1a1f525c0cdd5ad98d8bd51582e9644900"></a>

Gets the value of PlayerId.

<br>
#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a6d4d79522551ec4b8d5bd0045cd3784f)`() const` <a id="structFRHAPI__PlayerIdWrapper_1a6d4d79522551ec4b8d5bd0045cd3784f"></a>

Gets the value of PlayerId.

<br>
#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a5fab2ef714c104e844b89f62ffdd30f5)`(int32 NewValue)` <a id="structFRHAPI__PlayerIdWrapper_1a5fab2ef714c104e844b89f62ffdd30f5"></a>

Sets the value of PlayerId.

<br>
#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4)`() const` <a id="structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4"></a>

Returns true if PlayerId matches the default value.

<br>
#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa)`()` <a id="structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa"></a>

Sets the value of PlayerId to its default

<br>
