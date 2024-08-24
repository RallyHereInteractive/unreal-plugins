---
title: RHAPI_AuditResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AuditResponse`](#structFRHAPI__AuditResponse) | 

## struct `FRHAPI_AuditResponse` <a id="structFRHAPI__AuditResponse"></a>

```
struct FRHAPI_AuditResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > `[`Events_Optional`](#structFRHAPI__AuditResponse_1a02de7d3d634e988f405364ecf4d469b6) | List of audit events.
`public bool `[`Events_IsSet`](#structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4) | true if Events_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AuditResponse_1ad76010365c1ab0e3983a6377ede80c0c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AuditResponse_1a00f201d352defd9b4a790f99ec7bbf85)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a9c47a8f6fb9455bd3a3f7c35fd068bed)`()` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a53883b3afa1209ac7f3c14c326152c58)`() const` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a11e351f4a045e7956a687b60d5749ad6)`(const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & DefaultValue) const` | Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEvents`](#structFRHAPI__AuditResponse_1a54619a970eab628532d824f00b86bec2)`(TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & OutValue) const` | Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1a3689b0913287565818fa460335653631)`()` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1a42399b7daf2f70bf8283ce685143a94d)`() const` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEvents`](#structFRHAPI__AuditResponse_1a48910e6049b93f710ae21d7fce006b03)`(const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true.
`public inline void `[`SetEvents`](#structFRHAPI__AuditResponse_1a7d8d5a5603f367883357aec573a60559)`(TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > && NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true using move semantics.
`public inline void `[`ClearEvents`](#structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2)`()` | Clears the value of Events_Optional and sets Events_IsSet to false.
`public inline bool `[`IsEventsSet`](#structFRHAPI__AuditResponse_1add95c255e5156cd8a231998275ba0df2)`() const` | Checks whether Events_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > `[`Events_Optional`](#structFRHAPI__AuditResponse_1a02de7d3d634e988f405364ecf4d469b6) <a id="structFRHAPI__AuditResponse_1a02de7d3d634e988f405364ecf4d469b6"></a>

List of audit events.

#### `public bool `[`Events_IsSet`](#structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4) <a id="structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4"></a>

true if Events_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AuditResponse_1ad76010365c1ab0e3983a6377ede80c0c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AuditResponse_1ad76010365c1ab0e3983a6377ede80c0c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AuditResponse_1a00f201d352defd9b4a790f99ec7bbf85)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AuditResponse_1a00f201d352defd9b4a790f99ec7bbf85"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a9c47a8f6fb9455bd3a3f7c35fd068bed)`()` <a id="structFRHAPI__AuditResponse_1a9c47a8f6fb9455bd3a3f7c35fd068bed"></a>

Gets the value of Events_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a53883b3afa1209ac7f3c14c326152c58)`() const` <a id="structFRHAPI__AuditResponse_1a53883b3afa1209ac7f3c14c326152c58"></a>

Gets the value of Events_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a11e351f4a045e7956a687b60d5749ad6)`(const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & DefaultValue) const` <a id="structFRHAPI__AuditResponse_1a11e351f4a045e7956a687b60d5749ad6"></a>

Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEvents`](#structFRHAPI__AuditResponse_1a54619a970eab628532d824f00b86bec2)`(TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & OutValue) const` <a id="structFRHAPI__AuditResponse_1a54619a970eab628532d824f00b86bec2"></a>

Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1a3689b0913287565818fa460335653631)`()` <a id="structFRHAPI__AuditResponse_1a3689b0913287565818fa460335653631"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1a42399b7daf2f70bf8283ce685143a94d)`() const` <a id="structFRHAPI__AuditResponse_1a42399b7daf2f70bf8283ce685143a94d"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEvents`](#structFRHAPI__AuditResponse_1a48910e6049b93f710ae21d7fce006b03)`(const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & NewValue)` <a id="structFRHAPI__AuditResponse_1a48910e6049b93f710ae21d7fce006b03"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true.

#### `public inline void `[`SetEvents`](#structFRHAPI__AuditResponse_1a7d8d5a5603f367883357aec573a60559)`(TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > && NewValue)` <a id="structFRHAPI__AuditResponse_1a7d8d5a5603f367883357aec573a60559"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true using move semantics.

#### `public inline void `[`ClearEvents`](#structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2)`()` <a id="structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2"></a>

Clears the value of Events_Optional and sets Events_IsSet to false.

#### `public inline bool `[`IsEventsSet`](#structFRHAPI__AuditResponse_1add95c255e5156cd8a231998275ba0df2)`() const` <a id="structFRHAPI__AuditResponse_1add95c255e5156cd8a231998275ba0df2"></a>

Checks whether Events_Optional has been set.

