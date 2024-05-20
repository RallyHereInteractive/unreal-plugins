# group `RHAPI_MessageOnly` <a id="group__RHAPI__MessageOnly"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MessageOnly`](#structFRHAPI__MessageOnly) | Message only response.

## struct `FRHAPI_MessageOnly` <a id="structFRHAPI__MessageOnly"></a>

```
struct FRHAPI_MessageOnly
  : public FRHAPI_Model
```

Message only response.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Message`](#structFRHAPI__MessageOnly_1abe8093800b37a5b9b70be11a097b2ed4) | Message.
`public virtual bool `[`FromJson`](#structFRHAPI__MessageOnly_1ac4f375bd4468863bf6e8e677c8b8ae2a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MessageOnly_1a3c641f01fce8607f221a9cbdcc557533)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMessage`](#structFRHAPI__MessageOnly_1acad27e625a0840c0002310edba4f8cb6)`()` | Gets the value of Message.
`public inline const FString & `[`GetMessage`](#structFRHAPI__MessageOnly_1afe30c250051e80d194c815b963d4d4ba)`() const` | Gets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__MessageOnly_1a0eb9aec4d1113c87c318b88b716f306d)`(FString NewValue)` | Sets the value of Message.

### Members

#### `public FString `[`Message`](#structFRHAPI__MessageOnly_1abe8093800b37a5b9b70be11a097b2ed4) <a id="structFRHAPI__MessageOnly_1abe8093800b37a5b9b70be11a097b2ed4"></a>

Message.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MessageOnly_1ac4f375bd4468863bf6e8e677c8b8ae2a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MessageOnly_1ac4f375bd4468863bf6e8e677c8b8ae2a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MessageOnly_1a3c641f01fce8607f221a9cbdcc557533)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MessageOnly_1a3c641f01fce8607f221a9cbdcc557533"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMessage`](#structFRHAPI__MessageOnly_1acad27e625a0840c0002310edba4f8cb6)`()` <a id="structFRHAPI__MessageOnly_1acad27e625a0840c0002310edba4f8cb6"></a>

Gets the value of Message.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__MessageOnly_1afe30c250051e80d194c815b963d4d4ba)`() const` <a id="structFRHAPI__MessageOnly_1afe30c250051e80d194c815b963d4d4ba"></a>

Gets the value of Message.

#### `public inline void `[`SetMessage`](#structFRHAPI__MessageOnly_1a0eb9aec4d1113c87c318b88b716f306d)`(FString NewValue)` <a id="structFRHAPI__MessageOnly_1a0eb9aec4d1113c87c318b88b716f306d"></a>

Sets the value of Message.

