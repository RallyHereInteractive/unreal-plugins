---
title: RHAPI_AcknowledgeBackfillRequest
---

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
`public TArray< ERHAPI_BackfillStyle > `[`Styles_Optional`](#structFRHAPI__AcknowledgeBackfillRequest_1abcc0da1618c90d3f0dfa82215e82244b) | The styles of backfill to acknowledge. Can provide multiple for backwards compatibility.
`public bool `[`Styles_IsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1ac02874af8e3cd2c4e089fc691e3b934b) | true if Styles_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a8b9c8ada81a29f5c27373ccdb744f503)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a13bc35665e78e03496cdcbda19e1c989)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a800181ff9e0d71b689e7c31a5afa3e93)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a09f1b7ca71c6faf0c4c1a3a65d5e20d5)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a1e77362f507a10b54c856c6a16058a9e)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a4cad61de7f4469a4de7bca862ec1a216)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1aeff3697a237672ec2b7cf1c7bee79fe2)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a28678d6dd80c024ae5b5b0093d83b1ba)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1adc0c0fee2c43d696e086f695beb70b28)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a7ee2c9326f219c31dd5dce3542b4df8b)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a66ea6c9ffde016443082257a4606b865)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a4cf8e5df63332b391a6936e2825a9973)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a9e089db08f761932b0193999f500b5ee)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.
`public inline bool `[`IsExtensionsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a15056fe38655cfb21797bdc34f9f85f6)`() const` | Checks whether Extensions_Optional has been set.
`public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1ae553800072cb3881c074fbe79a50a9e5)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1aae69568f946459399daea262d9fe00d6)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a0524d6777cef4b1d75db78804e7f2f62)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1ad82aa0969badd398b3671c38652dde11)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ab5749ac8e4e093d42aa045fff69a41fc)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ab8db8037d59f8b5bd003ed07b42f683e)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a8c132cbc79fbf1515167b423399034e8)`(const ERHAPI_TeamOverflowAction & NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a70815419879f49f726601e25d59b656b)`(ERHAPI_TeamOverflowAction && NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.
`public inline bool `[`IsOverflowActionSet`](#structFRHAPI__AcknowledgeBackfillRequest_1ad2d9178027f6f018aaaa215f7677954d)`() const` | Checks whether OverflowAction_Optional has been set.
`public inline TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a1b93b8af2ba1e607db9ba39abf4c2c88)`()` | Gets the value of Styles_Optional, regardless of it having been set.
`public inline const TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a5cb8ebcdda4c3a6bcb7bf316ebe67db1)`() const` | Gets the value of Styles_Optional, regardless of it having been set.
`public inline const TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a5017595f6441239f407102654e24c745)`(const TArray< ERHAPI_BackfillStyle > & DefaultValue) const` | Gets the value of Styles_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a2172da9753fca123b29d744c415706cd)`(TArray< ERHAPI_BackfillStyle > & OutValue) const` | Fills OutValue with the value of Styles_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< ERHAPI_BackfillStyle > * `[`GetStylesOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a52c784917b053168f56fdd43c3bbc6d5)`()` | Returns a pointer to Styles_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< ERHAPI_BackfillStyle > * `[`GetStylesOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a96776cfaf25da137b51b1924f994a7b2)`() const` | Returns a pointer to Styles_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a1c71557f5cb9449b81262276259560a4)`(const TArray< ERHAPI_BackfillStyle > & NewValue)` | Sets the value of Styles_Optional and also sets Styles_IsSet to true.
`public inline void `[`SetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a19ee224aec9b5d0552ef2780eee76315)`(TArray< ERHAPI_BackfillStyle > && NewValue)` | Sets the value of Styles_Optional and also sets Styles_IsSet to true using move semantics.
`public inline void `[`ClearStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1ac31d6fcf9135ca9460eafbc34702160e)`()` | Clears the value of Styles_Optional and sets Styles_IsSet to false.
`public inline bool `[`IsStylesSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a8f378b60cc868773654bffd5204cf309)`() const` | Checks whether Styles_Optional has been set.

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

#### `public TArray< ERHAPI_BackfillStyle > `[`Styles_Optional`](#structFRHAPI__AcknowledgeBackfillRequest_1abcc0da1618c90d3f0dfa82215e82244b) <a id="structFRHAPI__AcknowledgeBackfillRequest_1abcc0da1618c90d3f0dfa82215e82244b"></a>

The styles of backfill to acknowledge. Can provide multiple for backwards compatibility.

#### `public bool `[`Styles_IsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1ac02874af8e3cd2c4e089fc691e3b934b) <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac02874af8e3cd2c4e089fc691e3b934b"></a>

true if Styles_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a8b9c8ada81a29f5c27373ccdb744f503)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a8b9c8ada81a29f5c27373ccdb744f503"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AcknowledgeBackfillRequest_1a13bc35665e78e03496cdcbda19e1c989)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a13bc35665e78e03496cdcbda19e1c989"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a800181ff9e0d71b689e7c31a5afa3e93)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a800181ff9e0d71b689e7c31a5afa3e93"></a>

Gets the value of InstanceId.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a09f1b7ca71c6faf0c4c1a3a65d5e20d5)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a09f1b7ca71c6faf0c4c1a3a65d5e20d5"></a>

Gets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a1e77362f507a10b54c856c6a16058a9e)`(const FString & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1e77362f507a10b54c856c6a16058a9e"></a>

Sets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a4cad61de7f4469a4de7bca862ec1a216)`(FString && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a4cad61de7f4469a4de7bca862ec1a216"></a>

Sets the value of InstanceId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1aeff3697a237672ec2b7cf1c7bee79fe2)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aeff3697a237672ec2b7cf1c7bee79fe2"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a28678d6dd80c024ae5b5b0093d83b1ba)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a28678d6dd80c024ae5b5b0093d83b1ba"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1adc0c0fee2c43d696e086f695beb70b28)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1adc0c0fee2c43d696e086f695beb70b28"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aeab99f0232db3b9a3b059a48c7d7188d"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a7ee2c9326f219c31dd5dce3542b4df8b)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a7ee2c9326f219c31dd5dce3542b4df8b"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a66ea6c9ffde016443082257a4606b865)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a66ea6c9ffde016443082257a4606b865"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a4cf8e5df63332b391a6936e2825a9973)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a4cf8e5df63332b391a6936e2825a9973"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a9e089db08f761932b0193999f500b5ee)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a9e089db08f761932b0193999f500b5ee"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

#### `public inline bool `[`IsExtensionsSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a15056fe38655cfb21797bdc34f9f85f6)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a15056fe38655cfb21797bdc34f9f85f6"></a>

Checks whether Extensions_Optional has been set.

#### `public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1ae553800072cb3881c074fbe79a50a9e5)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ae553800072cb3881c074fbe79a50a9e5"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1aae69568f946459399daea262d9fe00d6)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aae69568f946459399daea262d9fe00d6"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a0524d6777cef4b1d75db78804e7f2f62)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a0524d6777cef4b1d75db78804e7f2f62"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1ad82aa0969badd398b3671c38652dde11)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad82aa0969badd398b3671c38652dde11"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ab5749ac8e4e093d42aa045fff69a41fc)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ab5749ac8e4e093d42aa045fff69a41fc"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ab8db8037d59f8b5bd003ed07b42f683e)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ab8db8037d59f8b5bd003ed07b42f683e"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a8c132cbc79fbf1515167b423399034e8)`(const ERHAPI_TeamOverflowAction & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a8c132cbc79fbf1515167b423399034e8"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a70815419879f49f726601e25d59b656b)`(ERHAPI_TeamOverflowAction && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a70815419879f49f726601e25d59b656b"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

#### `public inline bool `[`IsOverflowActionSet`](#structFRHAPI__AcknowledgeBackfillRequest_1ad2d9178027f6f018aaaa215f7677954d)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad2d9178027f6f018aaaa215f7677954d"></a>

Checks whether OverflowAction_Optional has been set.

#### `public inline TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a1b93b8af2ba1e607db9ba39abf4c2c88)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1b93b8af2ba1e607db9ba39abf4c2c88"></a>

Gets the value of Styles_Optional, regardless of it having been set.

#### `public inline const TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a5cb8ebcdda4c3a6bcb7bf316ebe67db1)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a5cb8ebcdda4c3a6bcb7bf316ebe67db1"></a>

Gets the value of Styles_Optional, regardless of it having been set.

#### `public inline const TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a5017595f6441239f407102654e24c745)`(const TArray< ERHAPI_BackfillStyle > & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a5017595f6441239f407102654e24c745"></a>

Gets the value of Styles_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a2172da9753fca123b29d744c415706cd)`(TArray< ERHAPI_BackfillStyle > & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a2172da9753fca123b29d744c415706cd"></a>

Fills OutValue with the value of Styles_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< ERHAPI_BackfillStyle > * `[`GetStylesOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a52c784917b053168f56fdd43c3bbc6d5)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a52c784917b053168f56fdd43c3bbc6d5"></a>

Returns a pointer to Styles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< ERHAPI_BackfillStyle > * `[`GetStylesOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a96776cfaf25da137b51b1924f994a7b2)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a96776cfaf25da137b51b1924f994a7b2"></a>

Returns a pointer to Styles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a1c71557f5cb9449b81262276259560a4)`(const TArray< ERHAPI_BackfillStyle > & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1c71557f5cb9449b81262276259560a4"></a>

Sets the value of Styles_Optional and also sets Styles_IsSet to true.

#### `public inline void `[`SetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a19ee224aec9b5d0552ef2780eee76315)`(TArray< ERHAPI_BackfillStyle > && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a19ee224aec9b5d0552ef2780eee76315"></a>

Sets the value of Styles_Optional and also sets Styles_IsSet to true using move semantics.

#### `public inline void `[`ClearStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1ac31d6fcf9135ca9460eafbc34702160e)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac31d6fcf9135ca9460eafbc34702160e"></a>

Clears the value of Styles_Optional and sets Styles_IsSet to false.

#### `public inline bool `[`IsStylesSet`](#structFRHAPI__AcknowledgeBackfillRequest_1a8f378b60cc868773654bffd5204cf309)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a8f378b60cc868773654bffd5204cf309"></a>

Checks whether Styles_Optional has been set.

