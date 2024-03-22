# RHAPI_AuditResponse <a id="group__RHAPI__AuditResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AuditResponse`](#structFRHAPI__AuditResponse) | 

## struct `FRHAPI_AuditResponse` <a id="structFRHAPI__AuditResponse"></a>

```
struct FRHAPI_AuditResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > `[`Events_Optional`](#structFRHAPI__AuditResponse_1a2e313ee68f0344b15e412cc263b484b1) | List of audit events.
`public bool `[`Events_IsSet`](#structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4) | true if Events_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AuditResponse_1a6b1d8e00115d0af3642e3654ddb8ae2e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AuditResponse_1aefaf086f9ecd11a96a3802ca840f0913)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1ada8b85a2209a119b4d13dcd882c220ca)`()` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a4abc0cab6add7a825ed62145ce2f8b15)`() const` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1affbc6514c2be37d4b97a1011ea6a78ef)`(const TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & DefaultValue) const` | Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEvents`](#structFRHAPI__AuditResponse_1a129f051cd399619badb9db581a2265d9)`(TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & OutValue) const` | Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1aacfb34f745d0d0f770bca5053946727c)`()` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1af5714ad2007a8aac837a8938a6b856bb)`() const` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEvents`](#structFRHAPI__AuditResponse_1a4b44b62e621348880e869eb7fab47f2b)`(TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true.
`public inline void `[`ClearEvents`](#structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2)`()` | Clears the value of Events_Optional and sets Events_IsSet to false.

#### Members

#### `public TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > `[`Events_Optional`](#structFRHAPI__AuditResponse_1a2e313ee68f0344b15e412cc263b484b1) <a id="structFRHAPI__AuditResponse_1a2e313ee68f0344b15e412cc263b484b1"></a>

List of audit events.

<br>
#### `public bool `[`Events_IsSet`](#structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4) <a id="structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4"></a>

true if Events_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__AuditResponse_1a6b1d8e00115d0af3642e3654ddb8ae2e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AuditResponse_1a6b1d8e00115d0af3642e3654ddb8ae2e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__AuditResponse_1aefaf086f9ecd11a96a3802ca840f0913)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AuditResponse_1aefaf086f9ecd11a96a3802ca840f0913"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1ada8b85a2209a119b4d13dcd882c220ca)`()` <a id="structFRHAPI__AuditResponse_1ada8b85a2209a119b4d13dcd882c220ca"></a>

Gets the value of Events_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a4abc0cab6add7a825ed62145ce2f8b15)`() const` <a id="structFRHAPI__AuditResponse_1a4abc0cab6add7a825ed62145ce2f8b15"></a>

Gets the value of Events_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1affbc6514c2be37d4b97a1011ea6a78ef)`(const TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & DefaultValue) const` <a id="structFRHAPI__AuditResponse_1affbc6514c2be37d4b97a1011ea6a78ef"></a>

Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEvents`](#structFRHAPI__AuditResponse_1a129f051cd399619badb9db581a2265d9)`(TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > & OutValue) const` <a id="structFRHAPI__AuditResponse_1a129f051cd399619badb9db581a2265d9"></a>

Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1aacfb34f745d0d0f770bca5053946727c)`()` <a id="structFRHAPI__AuditResponse_1aacfb34f745d0d0f770bca5053946727c"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1af5714ad2007a8aac837a8938a6b856bb)`() const` <a id="structFRHAPI__AuditResponse_1af5714ad2007a8aac837a8938a6b856bb"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEvents`](#structFRHAPI__AuditResponse_1a4b44b62e621348880e869eb7fab47f2b)`(TArray< `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` > NewValue)` <a id="structFRHAPI__AuditResponse_1a4b44b62e621348880e869eb7fab47f2b"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true.

<br>
#### `public inline void `[`ClearEvents`](#structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2)`()` <a id="structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2"></a>

Clears the value of Events_Optional and sets Events_IsSet to false.

<br>
