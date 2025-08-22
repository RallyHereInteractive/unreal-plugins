---
title: RHAPI_IndividualCCUs
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__IndividualCCUs_1a7e550dc55ac3088fe15b7673cffb00c9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__IndividualCCUs_1a7a112ae0a03235982b0cfa822cbf2470)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, int32 > & `[`GetCcus`](#structFRHAPI__IndividualCCUs_1a6c2c669cb75363e746ac61395e70a8e3)`()` | Gets the value of Ccus.
`public inline FORCEINLINE const TMap< FString, int32 > & `[`GetCcus`](#structFRHAPI__IndividualCCUs_1a6ac0d6529c84af8fcec42286b611be6c)`() const` | Gets the value of Ccus.
`public inline FORCEINLINE void `[`SetCcus`](#structFRHAPI__IndividualCCUs_1a8d19b3418b4d2a55b9e8a4a5b88b2f3f)`(const TMap< FString, int32 > & NewValue)` | Sets the value of Ccus.
`public inline FORCEINLINE void `[`SetCcus`](#structFRHAPI__IndividualCCUs_1a9cb551b0b164d45a8be363067110d4d6)`(TMap< FString, int32 > && NewValue)` | Sets the value of Ccus using move semantics.

### Members

#### `public TMap< FString, int32 > `[`Ccus`](#structFRHAPI__IndividualCCUs_1a28e464031d6b3ce97cc0c1f221c723ae) <a id="structFRHAPI__IndividualCCUs_1a28e464031d6b3ce97cc0c1f221c723ae"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__IndividualCCUs_1a7e550dc55ac3088fe15b7673cffb00c9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__IndividualCCUs_1a7e550dc55ac3088fe15b7673cffb00c9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__IndividualCCUs_1a7a112ae0a03235982b0cfa822cbf2470)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__IndividualCCUs_1a7a112ae0a03235982b0cfa822cbf2470"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, int32 > & `[`GetCcus`](#structFRHAPI__IndividualCCUs_1a6c2c669cb75363e746ac61395e70a8e3)`()` <a id="structFRHAPI__IndividualCCUs_1a6c2c669cb75363e746ac61395e70a8e3"></a>

Gets the value of Ccus.

#### `public inline FORCEINLINE const TMap< FString, int32 > & `[`GetCcus`](#structFRHAPI__IndividualCCUs_1a6ac0d6529c84af8fcec42286b611be6c)`() const` <a id="structFRHAPI__IndividualCCUs_1a6ac0d6529c84af8fcec42286b611be6c"></a>

Gets the value of Ccus.

#### `public inline FORCEINLINE void `[`SetCcus`](#structFRHAPI__IndividualCCUs_1a8d19b3418b4d2a55b9e8a4a5b88b2f3f)`(const TMap< FString, int32 > & NewValue)` <a id="structFRHAPI__IndividualCCUs_1a8d19b3418b4d2a55b9e8a4a5b88b2f3f"></a>

Sets the value of Ccus.

#### `public inline FORCEINLINE void `[`SetCcus`](#structFRHAPI__IndividualCCUs_1a9cb551b0b164d45a8be363067110d4d6)`(TMap< FString, int32 > && NewValue)` <a id="structFRHAPI__IndividualCCUs_1a9cb551b0b164d45a8be363067110d4d6"></a>

Sets the value of Ccus using move semantics.

