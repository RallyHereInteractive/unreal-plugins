# RHAPI_CorrelationId <a id="group__RHAPI__CorrelationId"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CorrelationId`](#structFRHAPI__CorrelationId) | Correlation ID to associate the event with.

## struct `FRHAPI_CorrelationId` <a id="structFRHAPI__CorrelationId"></a>

```
struct FRHAPI_CorrelationId
  : public FRHAPI_Model
```

Correlation ID to associate the event with.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual bool `[`FromJson`](#structFRHAPI__CorrelationId_1ae6a6f220757ec001ce60cace8af16006)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CorrelationId_1a0f2b4d303b4b980e092380eb657cf3b5)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.

#### Members

#### `public virtual bool `[`FromJson`](#structFRHAPI__CorrelationId_1ae6a6f220757ec001ce60cace8af16006)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CorrelationId_1ae6a6f220757ec001ce60cace8af16006"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__CorrelationId_1a0f2b4d303b4b980e092380eb657cf3b5)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CorrelationId_1a0f2b4d303b4b980e092380eb657cf3b5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
