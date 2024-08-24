# group `RHAPI_LocationInner` <a id="group__RHAPI__LocationInner"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LocationInner`](#structFRHAPI__LocationInner) | 

---
title: FRHAPI_LocationInner
---

```
struct FRHAPI_LocationInner
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual bool `[`FromJson`](#structFRHAPI__LocationInner_1aad0a4a3d1ed5ab80de264d27fa186324)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LocationInner_1ae971d63699cd3ea8151de4e4434ad646)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.

### Members

#### `public virtual bool `[`FromJson`](#structFRHAPI__LocationInner_1aad0a4a3d1ed5ab80de264d27fa186324)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LocationInner_1aad0a4a3d1ed5ab80de264d27fa186324"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LocationInner_1ae971d63699cd3ea8151de4e4434ad646)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LocationInner_1ae971d63699cd3ea8151de4e4434ad646"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

