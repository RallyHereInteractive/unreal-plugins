# RHAPI_UserId <a id="group__RHAPI__UserId"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UserId`](#structFRHAPI__UserId) | User who submitted the event.

## struct `FRHAPI_UserId` <a id="structFRHAPI__UserId"></a>

```
struct FRHAPI_UserId
  : public FRHAPI_Model
```

User who submitted the event.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual bool `[`FromJson`](#structFRHAPI__UserId_1a6e2c3abc66c8dafc9b3f047fabf6fc02)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UserId_1a3a4c2e2c97fab31e45b03d25748a5c08)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.

#### Members

#### `public virtual bool `[`FromJson`](#structFRHAPI__UserId_1a6e2c3abc66c8dafc9b3f047fabf6fc02)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UserId_1a6e2c3abc66c8dafc9b3f047fabf6fc02"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__UserId_1a3a4c2e2c97fab31e45b03d25748a5c08)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UserId_1a3a4c2e2c97fab31e45b03d25748a5c08"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
