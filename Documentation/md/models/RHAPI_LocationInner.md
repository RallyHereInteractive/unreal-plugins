# RHAPI_LocationInner <a id="group__RHAPI__LocationInner"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LocationInner`](#structFRHAPI__LocationInner) | 

## struct `FRHAPI_LocationInner` <a id="structFRHAPI__LocationInner"></a>

```
struct FRHAPI_LocationInner
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual bool `[`FromJson`](#structFRHAPI__LocationInner_1a601fb7b0c8971f05660dae816ed5d80e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LocationInner_1acaf7c6e061dc4b9b3d8d87a1500cf695)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.

#### Members

#### `public virtual bool `[`FromJson`](#structFRHAPI__LocationInner_1a601fb7b0c8971f05660dae816ed5d80e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LocationInner_1a601fb7b0c8971f05660dae816ed5d80e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__LocationInner_1acaf7c6e061dc4b9b3d8d87a1500cf695)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LocationInner_1acaf7c6e061dc4b9b3d8d87a1500cf695"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
