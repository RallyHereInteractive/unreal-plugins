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
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1ad83523fdebdb390ceddc806058bfa368)`()` | Gets the value of InstanceId.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a15310b6cddd20f1fe133546f37d408a2)`() const` | Gets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1afd91f338cc7c64d5425e3b5e1019c6ac)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a598da573d84e80cd8217f5e8f6f740a9)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad3ba5ff05a23905eede9414c3e755ff9)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ac858bab69d8756f070c505bb31f62910)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a9d9273f07f16ed9e5878fae6eb6f23d4)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a550472c0715d2bdb9c6a478f4a0c651c)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a1e8e7f027da2dc5d23530c99afc6fac6)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1adf78da3fdfa878a0c8fe836bdca1aef7)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a2b449e60ba30718d3118cc12e813635a)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a5168a45b94168ba63a756d29f72e0ae3)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.
`public inline FORCEINLINE ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1ac4fe3365341ddec5efa761d58819765b)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1aa783f6436a89a530492778693ca94ac5)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1aa226063ed2dae01254b2eebf2f0e06ec)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a4449fac8cf17b4b8dd4ee624b49c4502)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a5bc68dc4aadd16885bab7d433b6a1240)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a892b5dd46d30432b0ac38326304e787f)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a8cb0524bd6b9bccc19b5e50408816f29)`(const ERHAPI_TeamOverflowAction & NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a3101f043fd1fe6a9efae88f3cef67ba6)`(ERHAPI_TeamOverflowAction && NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.
`public inline FORCEINLINE TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1ad72e913c90a110eeea8cffe8eca882ec)`()` | Gets the value of Styles_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a6589ffc69be10668a9ce22bd7dd24315)`() const` | Gets the value of Styles_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a5a16ebba194a2b81c5bff3d8652eb159)`(const TArray< ERHAPI_BackfillStyle > & DefaultValue) const` | Gets the value of Styles_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1ab5d50682e601b58321b71e9d155646cc)`(TArray< ERHAPI_BackfillStyle > & OutValue) const` | Fills OutValue with the value of Styles_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< ERHAPI_BackfillStyle > * `[`GetStylesOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a2decc3b7d69ed6794d284f6e9dd47365)`()` | Returns a pointer to Styles_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< ERHAPI_BackfillStyle > * `[`GetStylesOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ac421b7122f42362ee5fec76e12a15699)`() const` | Returns a pointer to Styles_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a33943a221114c23733239d53522ccf24)`(const TArray< ERHAPI_BackfillStyle > & NewValue)` | Sets the value of Styles_Optional and also sets Styles_IsSet to true.
`public inline FORCEINLINE void `[`SetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a39932d4e67f4810b0d43f3230ad2d98c)`(TArray< ERHAPI_BackfillStyle > && NewValue)` | Sets the value of Styles_Optional and also sets Styles_IsSet to true using move semantics.
`public inline void `[`ClearStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1ac31d6fcf9135ca9460eafbc34702160e)`()` | Clears the value of Styles_Optional and sets Styles_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1ad83523fdebdb390ceddc806058bfa368)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad83523fdebdb390ceddc806058bfa368"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a15310b6cddd20f1fe133546f37d408a2)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a15310b6cddd20f1fe133546f37d408a2"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1afd91f338cc7c64d5425e3b5e1019c6ac)`(const FString & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1afd91f338cc7c64d5425e3b5e1019c6ac"></a>

Sets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__AcknowledgeBackfillRequest_1a598da573d84e80cd8217f5e8f6f740a9)`(FString && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a598da573d84e80cd8217f5e8f6f740a9"></a>

Sets the value of InstanceId using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad3ba5ff05a23905eede9414c3e755ff9)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad3ba5ff05a23905eede9414c3e755ff9"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ac858bab69d8756f070c505bb31f62910)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac858bab69d8756f070c505bb31f62910"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a9d9273f07f16ed9e5878fae6eb6f23d4)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a9d9273f07f16ed9e5878fae6eb6f23d4"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a550472c0715d2bdb9c6a478f4a0c651c)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a550472c0715d2bdb9c6a478f4a0c651c"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a1e8e7f027da2dc5d23530c99afc6fac6)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a1e8e7f027da2dc5d23530c99afc6fac6"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1adf78da3fdfa878a0c8fe836bdca1aef7)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1adf78da3fdfa878a0c8fe836bdca1aef7"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a2b449e60ba30718d3118cc12e813635a)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a2b449e60ba30718d3118cc12e813635a"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1a5168a45b94168ba63a756d29f72e0ae3)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a5168a45b94168ba63a756d29f72e0ae3"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad11a0dcb1f66f153b38c169e1bb0545f"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1ac4fe3365341ddec5efa761d58819765b)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac4fe3365341ddec5efa761d58819765b"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1aa783f6436a89a530492778693ca94ac5)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aa783f6436a89a530492778693ca94ac5"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1aa226063ed2dae01254b2eebf2f0e06ec)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1aa226063ed2dae01254b2eebf2f0e06ec"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a4449fac8cf17b4b8dd4ee624b49c4502)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a4449fac8cf17b4b8dd4ee624b49c4502"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a5bc68dc4aadd16885bab7d433b6a1240)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a5bc68dc4aadd16885bab7d433b6a1240"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a892b5dd46d30432b0ac38326304e787f)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a892b5dd46d30432b0ac38326304e787f"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a8cb0524bd6b9bccc19b5e50408816f29)`(const ERHAPI_TeamOverflowAction & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a8cb0524bd6b9bccc19b5e50408816f29"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a3101f043fd1fe6a9efae88f3cef67ba6)`(ERHAPI_TeamOverflowAction && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a3101f043fd1fe6a9efae88f3cef67ba6"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a36d183c608e39df827315e3e1b384383"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

#### `public inline FORCEINLINE TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1ad72e913c90a110eeea8cffe8eca882ec)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ad72e913c90a110eeea8cffe8eca882ec"></a>

Gets the value of Styles_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a6589ffc69be10668a9ce22bd7dd24315)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a6589ffc69be10668a9ce22bd7dd24315"></a>

Gets the value of Styles_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< ERHAPI_BackfillStyle > & `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a5a16ebba194a2b81c5bff3d8652eb159)`(const TArray< ERHAPI_BackfillStyle > & DefaultValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a5a16ebba194a2b81c5bff3d8652eb159"></a>

Gets the value of Styles_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1ab5d50682e601b58321b71e9d155646cc)`(TArray< ERHAPI_BackfillStyle > & OutValue) const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ab5d50682e601b58321b71e9d155646cc"></a>

Fills OutValue with the value of Styles_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< ERHAPI_BackfillStyle > * `[`GetStylesOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1a2decc3b7d69ed6794d284f6e9dd47365)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a2decc3b7d69ed6794d284f6e9dd47365"></a>

Returns a pointer to Styles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< ERHAPI_BackfillStyle > * `[`GetStylesOrNull`](#structFRHAPI__AcknowledgeBackfillRequest_1ac421b7122f42362ee5fec76e12a15699)`() const` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac421b7122f42362ee5fec76e12a15699"></a>

Returns a pointer to Styles_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a33943a221114c23733239d53522ccf24)`(const TArray< ERHAPI_BackfillStyle > & NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a33943a221114c23733239d53522ccf24"></a>

Sets the value of Styles_Optional and also sets Styles_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1a39932d4e67f4810b0d43f3230ad2d98c)`(TArray< ERHAPI_BackfillStyle > && NewValue)` <a id="structFRHAPI__AcknowledgeBackfillRequest_1a39932d4e67f4810b0d43f3230ad2d98c"></a>

Sets the value of Styles_Optional and also sets Styles_IsSet to true using move semantics.

#### `public inline void `[`ClearStyles`](#structFRHAPI__AcknowledgeBackfillRequest_1ac31d6fcf9135ca9460eafbc34702160e)`()` <a id="structFRHAPI__AcknowledgeBackfillRequest_1ac31d6fcf9135ca9460eafbc34702160e"></a>

Clears the value of Styles_Optional and sets Styles_IsSet to false.

