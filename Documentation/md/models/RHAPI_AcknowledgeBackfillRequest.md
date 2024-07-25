# group `RHAPI_AcknowledgeBackfillRequest` <a id="group__RHAPI__AcknowledgeBackfillRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AcknowledgeBackfillRequest`](#structFRHAPI__AcknowledgeBackfillRequest) | 

## struct `FRHAPI_AcknowledgeBackfillRequest` <a id="structFRHAPI__AcknowledgeBackfillRequest"></a>

```
struct FRHAPI_AcknowledgeBackfillRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a97b0c8cdce253a06e8c124f2ae1e975f) | The instance ID for this backfill request.
`public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AcknowledgeBackfillRequest_1a6ac9dbac81edc9fc3dc8305d19fc422e) | Additional extensions to add to the Assignment for the backfill resource associated with the session.
`public bool `[`Extensions_IsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a333bfc8516098517d853f5d598b4d602) | true if Extensions_Optional has been set to a value
`public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__AcknowledgeBackfillRequest_1adb9d8b7350b27cc670de60df6f0a5f7b) | How to handle backfills that return too many players for a team.
`public bool `[`OverflowAction_IsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1af9e3df26a04a27103fe7c58494c43331) | true if OverflowAction_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a8b9c8ada81a29f5c27373ccdb744f503)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a6baa078c6d0820a1edfb087afe3e4e80)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1ad8f0beb276ae3c29cf25ee2d0433cc44)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a2e8f06f0b393750e7255f8dd6f57ec12)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a1e77362f507a10b54c856c6a16058a9e)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a4cad61de7f4469a4de7bca862ec1a216)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a1c659e1b5a491ce224e5e3ceda7b0ad7)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ac9896f1d4604dbcaa7c37da0cfc8bbab)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ae7658fe6ae44655ea2b8ff3925d3a65d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ad441436ad6f13436710c1dd3b73d6ada)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a973415325b0ff1e8707185310a9555c6)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a4cf8e5df63332b391a6936e2825a9973)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a9e089db08f761932b0193999f500b5ee)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.
`public inline bool `[`IsExtensionsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a15056fe38655cfb21797bdc34f9f85f6)`() const` | Checks whether Extensions_Optional has been set.
`public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a3ac69be242bef74f6e1783f5ce92d818)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a35a7aa7357ffee073cfe85bb4edea085)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a1d8a1c2ee545ca6178a0cd317784c5c5)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1ad82aa0969badd398b3671c38652dde11)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1aaefae1ea31ecff78371cc9181d755082)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a26439de08430092f96fcc0f7dfda038f)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a8c132cbc79fbf1515167b423399034e8)`(const ERHAPI_TeamOverflowAction & NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a70815419879f49f726601e25d59b656b)`(ERHAPI_TeamOverflowAction && NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.
`public inline bool `[`IsOverflowActionSet`](#structFRHAPI__AcknowledgeBackfillRequest_1ad2d9178027f6f018aaaa215f7677954d)`() const` | Checks whether OverflowAction_Optional has been set.

### Members

#### `public FString `[`InstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a97b0c8cdce253a06e8c124f2ae1e975f) <a id="structFRHAPI__AcknowledgeBackfillRequest_1a97b0c8cdce253a06e8c124f2ae1e975f"></a>

The instance ID for this backfill request.

#### `public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AcknowledgeBackfillRequest_1a6ac9dbac81edc9fc3dc8305d19fc422e) <a id="structFRHAPI__AcknowledgeBackfillRequest_1a6ac9dbac81edc9fc3dc8305d19fc422e"></a>

Additional extensions to add to the Assignment for the backfill resource associated with the session.

#### `public bool `[`Extensions_IsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a333bfc8516098517d853f5d598b4d602) <a id="structFRHAPI__AcknowledgeBackfillRequest_1a333bfc8516098517d853f5d598b4d602"></a>

true if Extensions_Optional has been set to a value

#### `public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__AcknowledgeBackfillRequest_1adb9d8b7350b27cc670de60df6f0a5f7b) <a id="structFRHAPI__AcknowledgeBackfillRequest_1adb9d8b7350b27cc670de60df6f0a5f7b"></a>

How to handle backfills that return too many players for a team.

#### `public bool `[`OverflowAction_IsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1af9e3df26a04a27103fe7c58494c43331) <a id="structFRHAPI__AcknowledgeBackfillRequest_1af9e3df26a04a27103fe7c58494c43331"></a>

true if OverflowAction_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a8b9c8ada81a29f5c27373ccdb744f503)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a8b9c8ada81a29f5c27373ccdb744f503"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a6baa078c6d0820a1edfb087afe3e4e80)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a6baa078c6d0820a1edfb087afe3e4e80"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1ad8f0beb276ae3c29cf25ee2d0433cc44)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad8f0beb276ae3c29cf25ee2d0433cc44"></a>

Gets the value of InstanceId.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a2e8f06f0b393750e7255f8dd6f57ec12)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a2e8f06f0b393750e7255f8dd6f57ec12"></a>

Gets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a1e77362f507a10b54c856c6a16058a9e)`(const FString & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1e77362f507a10b54c856c6a16058a9e"></a>

Sets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a4cad61de7f4469a4de7bca862ec1a216)`(FString && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a4cad61de7f4469a4de7bca862ec1a216"></a>

Sets the value of InstanceId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a1c659e1b5a491ce224e5e3ceda7b0ad7)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1c659e1b5a491ce224e5e3ceda7b0ad7"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ac9896f1d4604dbcaa7c37da0cfc8bbab)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac9896f1d4604dbcaa7c37da0cfc8bbab"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ae7658fe6ae44655ea2b8ff3925d3a65d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ae7658fe6ae44655ea2b8ff3925d3a65d"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ad441436ad6f13436710c1dd3b73d6ada)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad441436ad6f13436710c1dd3b73d6ada"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a973415325b0ff1e8707185310a9555c6)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a973415325b0ff1e8707185310a9555c6"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a4cf8e5df63332b391a6936e2825a9973)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a4cf8e5df63332b391a6936e2825a9973"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a9e089db08f761932b0193999f500b5ee)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a9e089db08f761932b0193999f500b5ee"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

#### `public inline bool `[`IsExtensionsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a15056fe38655cfb21797bdc34f9f85f6)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a15056fe38655cfb21797bdc34f9f85f6"></a>

Checks whether Extensions_Optional has been set.

#### `public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a3ac69be242bef74f6e1783f5ce92d818)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a3ac69be242bef74f6e1783f5ce92d818"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a35a7aa7357ffee073cfe85bb4edea085)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a35a7aa7357ffee073cfe85bb4edea085"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a1d8a1c2ee545ca6178a0cd317784c5c5)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1d8a1c2ee545ca6178a0cd317784c5c5"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1ad82aa0969badd398b3671c38652dde11)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad82aa0969badd398b3671c38652dde11"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1aaefae1ea31ecff78371cc9181d755082)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aaefae1ea31ecff78371cc9181d755082"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a26439de08430092f96fcc0f7dfda038f)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a26439de08430092f96fcc0f7dfda038f"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a8c132cbc79fbf1515167b423399034e8)`(const ERHAPI_TeamOverflowAction & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a8c132cbc79fbf1515167b423399034e8"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a70815419879f49f726601e25d59b656b)`(ERHAPI_TeamOverflowAction && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a70815419879f49f726601e25d59b656b"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

#### `public inline bool `[`IsOverflowActionSet`](#structFRHAPI__AcknowledgeBackfillRequest_1ad2d9178027f6f018aaaa215f7677954d)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad2d9178027f6f018aaaa215f7677954d"></a>

Checks whether OverflowAction_Optional has been set.

