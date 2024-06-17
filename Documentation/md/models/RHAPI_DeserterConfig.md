# group `RHAPI_DeserterConfig` <a id="group__RHAPI__DeserterConfig"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_DeserterConfig`](#structFRHAPI__DeserterConfig) | 

## struct `FRHAPI_DeserterConfig` <a id="structFRHAPI__DeserterConfig"></a>

```
struct FRHAPI_DeserterConfig
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`DeserterId`](#structFRHAPI__DeserterConfig_1a42bd72546bd60dd7b5b6074e2e7e81a9) | Unique id for this set of deserter config.
`public virtual bool `[`FromJson`](#structFRHAPI__DeserterConfig_1ab950edf6f534fd2b2ef88f7b2568f116)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__DeserterConfig_1a4c6d6628ce9e99d9c9f1fc03121bfa51)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1abef8c3d4985a16c1eb40d4201d8c2936)`()` | Gets the value of DeserterId.
`public inline const FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1a190a0c787e262b1567635044f20f93b5)`() const` | Gets the value of DeserterId.
`public inline void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1af62955f81dcc7402a4966c62fc7951d0)`(const FGuid & NewValue)` | Sets the value of DeserterId.
`public inline void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1a96294d315340ed2d4e916c1cea93aa08)`(FGuid && NewValue)` | Sets the value of DeserterId using move semantics.

### Members

#### `public FGuid `[`DeserterId`](#structFRHAPI__DeserterConfig_1a42bd72546bd60dd7b5b6074e2e7e81a9) <a id="structFRHAPI__DeserterConfig_1a42bd72546bd60dd7b5b6074e2e7e81a9"></a>

Unique id for this set of deserter config.

#### `public virtual bool `[`FromJson`](#structFRHAPI__DeserterConfig_1ab950edf6f534fd2b2ef88f7b2568f116)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__DeserterConfig_1ab950edf6f534fd2b2ef88f7b2568f116"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__DeserterConfig_1a4c6d6628ce9e99d9c9f1fc03121bfa51)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__DeserterConfig_1a4c6d6628ce9e99d9c9f1fc03121bfa51"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1abef8c3d4985a16c1eb40d4201d8c2936)`()` <a id="structFRHAPI__DeserterConfig_1abef8c3d4985a16c1eb40d4201d8c2936"></a>

Gets the value of DeserterId.

#### `public inline const FGuid & `[`GetDeserterId`](#structFRHAPI__DeserterConfig_1a190a0c787e262b1567635044f20f93b5)`() const` <a id="structFRHAPI__DeserterConfig_1a190a0c787e262b1567635044f20f93b5"></a>

Gets the value of DeserterId.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1af62955f81dcc7402a4966c62fc7951d0)`(const FGuid & NewValue)` <a id="structFRHAPI__DeserterConfig_1af62955f81dcc7402a4966c62fc7951d0"></a>

Sets the value of DeserterId.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__DeserterConfig_1a96294d315340ed2d4e916c1cea93aa08)`(FGuid && NewValue)` <a id="structFRHAPI__DeserterConfig_1a96294d315340ed2d4e916c1cea93aa08"></a>

Sets the value of DeserterId using move semantics.

