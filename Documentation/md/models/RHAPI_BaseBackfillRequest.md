# RHAPI_BaseBackfillRequest <a id="group__RHAPI__BaseBackfillRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BaseBackfillRequest`](#structFRHAPI__BaseBackfillRequest) | 

## struct `FRHAPI_BaseBackfillRequest` <a id="structFRHAPI__BaseBackfillRequest"></a>

```
struct FRHAPI_BaseBackfillRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId`](#structFRHAPI__BaseBackfillRequest_1adee922d59de20684afd702734bd49d34) | The instance ID for this backfill request.
`public virtual bool `[`FromJson`](#structFRHAPI__BaseBackfillRequest_1aae23daef4fab59c9b078e5f5fbec19db)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BaseBackfillRequest_1a1cd261028157e2e554bb3ce0c030dd49)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a1c9a904f6c5187a9e57f8334f21257d7)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__BaseBackfillRequest_1af82ecb8b5005dcf3034bec2eb1252274)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a9277a4122e794833f96741e2d4be6e2e)`(FString NewValue)` | Sets the value of InstanceId.

#### Members

#### `public FString `[`InstanceId`](#structFRHAPI__BaseBackfillRequest_1adee922d59de20684afd702734bd49d34) <a id="structFRHAPI__BaseBackfillRequest_1adee922d59de20684afd702734bd49d34"></a>

The instance ID for this backfill request.

#### `public virtual bool `[`FromJson`](#structFRHAPI__BaseBackfillRequest_1aae23daef4fab59c9b078e5f5fbec19db)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BaseBackfillRequest_1aae23daef4fab59c9b078e5f5fbec19db"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BaseBackfillRequest_1a1cd261028157e2e554bb3ce0c030dd49)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BaseBackfillRequest_1a1cd261028157e2e554bb3ce0c030dd49"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a1c9a904f6c5187a9e57f8334f21257d7)`()` <a id="structFRHAPI__BaseBackfillRequest_1a1c9a904f6c5187a9e57f8334f21257d7"></a>

Gets the value of InstanceId.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__BaseBackfillRequest_1af82ecb8b5005dcf3034bec2eb1252274)`() const` <a id="structFRHAPI__BaseBackfillRequest_1af82ecb8b5005dcf3034bec2eb1252274"></a>

Gets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a9277a4122e794833f96741e2d4be6e2e)`(FString NewValue)` <a id="structFRHAPI__BaseBackfillRequest_1a9277a4122e794833f96741e2d4be6e2e"></a>

Sets the value of InstanceId.

