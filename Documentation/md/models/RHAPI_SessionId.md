# RHAPI_SessionId <a id="group__RHAPI__SessionId"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionId`](#structFRHAPI__SessionId) | Session ID to associate the event with.

## struct `FRHAPI_SessionId` <a id="structFRHAPI__SessionId"></a>

```
struct FRHAPI_SessionId
  : public FRHAPI_Model
```

Session ID to associate the event with.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual bool `[`FromJson`](#structFRHAPI__SessionId_1acb9a8ca592fab3d7f5b89bcc4a42eb60)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionId_1a11c7e3216f5f7a2ceb9c777b0d80f1b2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.

#### Members

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionId_1acb9a8ca592fab3d7f5b89bcc4a42eb60)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionId_1acb9a8ca592fab3d7f5b89bcc4a42eb60"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionId_1a11c7e3216f5f7a2ceb9c777b0d80f1b2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionId_1a11c7e3216f5f7a2ceb9c777b0d80f1b2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
