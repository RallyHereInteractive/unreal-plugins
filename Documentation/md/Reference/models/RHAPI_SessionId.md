---
title: RHAPI_SessionId
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionId`](#structFRHAPI__SessionId) | 

## struct `FRHAPI_SessionId` <a id="structFRHAPI__SessionId"></a>

```
struct FRHAPI_SessionId
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual bool `[`FromJson`](#structFRHAPI__SessionId_1a52b3d69aa836386637b622bcf10416b6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionId_1a6fe26c99f1ce0305b97609e2d4a37843)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.

### Members

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionId_1a52b3d69aa836386637b622bcf10416b6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionId_1a52b3d69aa836386637b622bcf10416b6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionId_1a6fe26c99f1ce0305b97609e2d4a37843)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionId_1a6fe26c99f1ce0305b97609e2d4a37843"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

