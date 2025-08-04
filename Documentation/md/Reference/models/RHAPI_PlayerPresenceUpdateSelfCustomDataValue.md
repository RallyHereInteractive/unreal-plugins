---
title: RHAPI_PlayerPresenceUpdateSelfCustomDataValue
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerPresenceUpdateSelfCustomDataValue`](#structFRHAPI__PlayerPresenceUpdateSelfCustomDataValue) | 

## struct `FRHAPI_PlayerPresenceUpdateSelfCustomDataValue` <a id="structFRHAPI__PlayerPresenceUpdateSelfCustomDataValue"></a>

```
struct FRHAPI_PlayerPresenceUpdateSelfCustomDataValue
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresenceUpdateSelfCustomDataValue_1aa7028b35274fb7fb7fadc2dad77c4760)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresenceUpdateSelfCustomDataValue_1a25a69dc892daaa94214ebba18ddc79be)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.

### Members

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresenceUpdateSelfCustomDataValue_1aa7028b35274fb7fb7fadc2dad77c4760)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerPresenceUpdateSelfCustomDataValue_1aa7028b35274fb7fb7fadc2dad77c4760"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresenceUpdateSelfCustomDataValue_1a25a69dc892daaa94214ebba18ddc79be)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerPresenceUpdateSelfCustomDataValue_1a25a69dc892daaa94214ebba18ddc79be"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

