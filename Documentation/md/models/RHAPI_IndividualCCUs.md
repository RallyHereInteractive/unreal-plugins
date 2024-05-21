# group `RHAPI_IndividualCCUs` <a id="group__RHAPI__IndividualCCUs"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_IndividualCCUs`](#structFRHAPI__IndividualCCUs) | 

## struct `FRHAPI_IndividualCCUs` <a id="structFRHAPI__IndividualCCUs"></a>

```
struct FRHAPI_IndividualCCUs
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, int32 > `[`Ccus`](#structFRHAPI__IndividualCCUs_1a28e464031d6b3ce97cc0c1f221c723ae) | 
`public virtual bool `[`FromJson`](#structFRHAPI__IndividualCCUs_1a28794bb9089cadb4acd4d5e7b8f28c21)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__IndividualCCUs_1a2aa9141980a2697f4d10a75949883808)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, int32 > & `[`GetCcus`](#structFRHAPI__IndividualCCUs_1a399c858d9aeb4e5f72078c5f1e10502b)`()` | Gets the value of Ccus.
`public inline const TMap< FString, int32 > & `[`GetCcus`](#structFRHAPI__IndividualCCUs_1a7ece82d5f692461ca3f0ed8a21bada9f)`() const` | Gets the value of Ccus.
`public inline void `[`SetCcus`](#structFRHAPI__IndividualCCUs_1a70c868c68ebb48b4095bed7f2d832141)`(TMap< FString, int32 > NewValue)` | Sets the value of Ccus.

### Members

#### `public TMap< FString, int32 > `[`Ccus`](#structFRHAPI__IndividualCCUs_1a28e464031d6b3ce97cc0c1f221c723ae) <a id="structFRHAPI__IndividualCCUs_1a28e464031d6b3ce97cc0c1f221c723ae"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__IndividualCCUs_1a28794bb9089cadb4acd4d5e7b8f28c21)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__IndividualCCUs_1a28794bb9089cadb4acd4d5e7b8f28c21"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__IndividualCCUs_1a2aa9141980a2697f4d10a75949883808)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__IndividualCCUs_1a2aa9141980a2697f4d10a75949883808"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, int32 > & `[`GetCcus`](#structFRHAPI__IndividualCCUs_1a399c858d9aeb4e5f72078c5f1e10502b)`()` <a id="structFRHAPI__IndividualCCUs_1a399c858d9aeb4e5f72078c5f1e10502b"></a>

Gets the value of Ccus.

#### `public inline const TMap< FString, int32 > & `[`GetCcus`](#structFRHAPI__IndividualCCUs_1a7ece82d5f692461ca3f0ed8a21bada9f)`() const` <a id="structFRHAPI__IndividualCCUs_1a7ece82d5f692461ca3f0ed8a21bada9f"></a>

Gets the value of Ccus.

#### `public inline void `[`SetCcus`](#structFRHAPI__IndividualCCUs_1a70c868c68ebb48b4095bed7f2d832141)`(TMap< FString, int32 > NewValue)` <a id="structFRHAPI__IndividualCCUs_1a70c868c68ebb48b4095bed7f2d832141"></a>

Sets the value of Ccus.

