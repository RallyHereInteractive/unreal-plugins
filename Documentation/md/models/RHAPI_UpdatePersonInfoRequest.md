# RHAPI_UpdatePersonInfoRequest <a id="group__RHAPI__UpdatePersonInfoRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdatePersonInfoRequest`](#structFRHAPI__UpdatePersonInfoRequest) | 

## struct `FRHAPI_UpdatePersonInfoRequest` <a id="structFRHAPI__UpdatePersonInfoRequest"></a>

```
struct FRHAPI_UpdatePersonInfoRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Email`](#structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e) | 
`public virtual bool `[`FromJson`](#structFRHAPI__UpdatePersonInfoRequest_1a761aa4132a1c2e9a303b08d59d1e6197)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdatePersonInfoRequest_1a27ed6dc5682a17500361ca5e956a9eaa)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1af78a67575dd9865d044c07949b497844)`()` | Gets the value of Email.
`public inline const FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a45d6be43aae6a507a369fcd3a7bf6501)`() const` | Gets the value of Email.
`public inline void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a247522d48abf10f07a16f29e31b95c36)`(FString NewValue)` | Sets the value of Email.

#### Members

#### `public FString `[`Email`](#structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e) <a id="structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdatePersonInfoRequest_1a761aa4132a1c2e9a303b08d59d1e6197)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdatePersonInfoRequest_1a761aa4132a1c2e9a303b08d59d1e6197"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdatePersonInfoRequest_1a27ed6dc5682a17500361ca5e956a9eaa)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UpdatePersonInfoRequest_1a27ed6dc5682a17500361ca5e956a9eaa"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1af78a67575dd9865d044c07949b497844)`()` <a id="structFRHAPI__UpdatePersonInfoRequest_1af78a67575dd9865d044c07949b497844"></a>

Gets the value of Email.

<br>
#### `public inline const FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a45d6be43aae6a507a369fcd3a7bf6501)`() const` <a id="structFRHAPI__UpdatePersonInfoRequest_1a45d6be43aae6a507a369fcd3a7bf6501"></a>

Gets the value of Email.

<br>
#### `public inline void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a247522d48abf10f07a16f29e31b95c36)`(FString NewValue)` <a id="structFRHAPI__UpdatePersonInfoRequest_1a247522d48abf10f07a16f29e31b95c36"></a>

Sets the value of Email.

<br>
