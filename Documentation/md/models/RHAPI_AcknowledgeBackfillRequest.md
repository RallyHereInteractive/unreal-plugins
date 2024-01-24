# RHAPI_AcknowledgeBackfillRequest <a id="group__RHAPI__AcknowledgeBackfillRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AcknowledgeBackfillRequest`](#structFRHAPI__AcknowledgeBackfillRequest) | 

## struct `FRHAPI_AcknowledgeBackfillRequest` <a id="structFRHAPI__AcknowledgeBackfillRequest"></a>

```
struct FRHAPI_AcknowledgeBackfillRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a97b0c8cdce253a06e8c124f2ae1e975f) | The instance ID for this backfill request.
`public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AcknowledgeBackfillRequest_1a6ac9dbac81edc9fc3dc8305d19fc422e) | Additional extensions to add to the Assignment for the backfill resource associated with the session.
`public bool `[`Extensions_IsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a333bfc8516098517d853f5d598b4d602) | true if Extensions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AcknowledgeBackfillRequest_1ae7271024195408c334d05e227b29199d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a17e9895536a83263afef85c3340b1f0c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1ad8f0beb276ae3c29cf25ee2d0433cc44)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a2e8f06f0b393750e7255f8dd6f57ec12)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a8da7e7d623284a8972eeccb2ddb91fcd)`(FString NewValue)` | Sets the value of InstanceId.
`public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a1c659e1b5a491ce224e5e3ceda7b0ad7)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ac9896f1d4604dbcaa7c37da0cfc8bbab)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ae7658fe6ae44655ea2b8ff3925d3a65d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ad441436ad6f13436710c1dd3b73d6ada)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a973415325b0ff1e8707185310a9555c6)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a54d89c6f19d0858a857c9eb6817b9110)`(TMap< FString, FString > NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline void `[`ClearExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

#### Members

#### `public FString `[`InstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a97b0c8cdce253a06e8c124f2ae1e975f) <a id="structFRHAPI__AcknowledgeBackfillRequest_1a97b0c8cdce253a06e8c124f2ae1e975f"></a>

The instance ID for this backfill request.

<br>
#### `public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AcknowledgeBackfillRequest_1a6ac9dbac81edc9fc3dc8305d19fc422e) <a id="structFRHAPI__AcknowledgeBackfillRequest_1a6ac9dbac81edc9fc3dc8305d19fc422e"></a>

Additional extensions to add to the Assignment for the backfill resource associated with the session.

<br>
#### `public bool `[`Extensions_IsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a333bfc8516098517d853f5d598b4d602) <a id="structFRHAPI__AcknowledgeBackfillRequest_1a333bfc8516098517d853f5d598b4d602"></a>

true if Extensions_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__AcknowledgeBackfillRequest_1ae7271024195408c334d05e227b29199d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ae7271024195408c334d05e227b29199d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a17e9895536a83263afef85c3340b1f0c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a17e9895536a83263afef85c3340b1f0c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1ad8f0beb276ae3c29cf25ee2d0433cc44)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad8f0beb276ae3c29cf25ee2d0433cc44"></a>

Gets the value of InstanceId.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a2e8f06f0b393750e7255f8dd6f57ec12)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a2e8f06f0b393750e7255f8dd6f57ec12"></a>

Gets the value of InstanceId.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a8da7e7d623284a8972eeccb2ddb91fcd)`(FString NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a8da7e7d623284a8972eeccb2ddb91fcd"></a>

Sets the value of InstanceId.

<br>
#### `public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a1c659e1b5a491ce224e5e3ceda7b0ad7)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1c659e1b5a491ce224e5e3ceda7b0ad7"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ac9896f1d4604dbcaa7c37da0cfc8bbab)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac9896f1d4604dbcaa7c37da0cfc8bbab"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ae7658fe6ae44655ea2b8ff3925d3a65d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ae7658fe6ae44655ea2b8ff3925d3a65d"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ad441436ad6f13436710c1dd3b73d6ada)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad441436ad6f13436710c1dd3b73d6ada"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a973415325b0ff1e8707185310a9555c6)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a973415325b0ff1e8707185310a9555c6"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a54d89c6f19d0858a857c9eb6817b9110)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a54d89c6f19d0858a857c9eb6817b9110"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

<br>
#### `public inline void `[`ClearExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

<br>
