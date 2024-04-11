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
`public TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > `[`Events_Optional`](#structFRHAPI__AuditResponse_1af9d5e869c6d01e8c3ede220589b2de37) | List of audit events.
`public bool `[`Events_IsSet`](#structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4) | true if Events_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AuditResponse_1a6b1d8e00115d0af3642e3654ddb8ae2e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AuditResponse_1aefaf086f9ecd11a96a3802ca840f0913)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a3e57f79b206a8497c09fd1045dee0341)`()` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a8cdf079573fe6bf91e9ffc4b77292d98)`() const` | Gets the value of Events_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a94cf88bb310aed3c731069624eae75b1)`(const TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & DefaultValue) const` | Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEvents`](#structFRHAPI__AuditResponse_1a1ab3de7c0e3445985dd9922ccb577615)`(TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & OutValue) const` | Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1adb28e3ccd73fbe12046ce9b58b3528eb)`()` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1ae618ff955defe6b11b4a5c6bf51c4063)`() const` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEvents`](#structFRHAPI__AuditResponse_1a4537e224aa29b6f3564e7948cf5f3f84)`(TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true.
`public inline void `[`ClearEvents`](#structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2)`()` | Clears the value of Events_Optional and sets Events_IsSet to false.

#### Members

#### `public TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > `[`Events_Optional`](#structFRHAPI__AuditResponse_1af9d5e869c6d01e8c3ede220589b2de37) <a id="structFRHAPI__AuditResponse_1af9d5e869c6d01e8c3ede220589b2de37"></a>

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
#### `public inline TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a3e57f79b206a8497c09fd1045dee0341)`()` <a id="structFRHAPI__AuditResponse_1a3e57f79b206a8497c09fd1045dee0341"></a>

Gets the value of Events_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a8cdf079573fe6bf91e9ffc4b77292d98)`() const` <a id="structFRHAPI__AuditResponse_1a8cdf079573fe6bf91e9ffc4b77292d98"></a>

Gets the value of Events_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a94cf88bb310aed3c731069624eae75b1)`(const TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & DefaultValue) const` <a id="structFRHAPI__AuditResponse_1a94cf88bb310aed3c731069624eae75b1"></a>

Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEvents`](#structFRHAPI__AuditResponse_1a1ab3de7c0e3445985dd9922ccb577615)`(TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > & OutValue) const` <a id="structFRHAPI__AuditResponse_1a1ab3de7c0e3445985dd9922ccb577615"></a>

Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1adb28e3ccd73fbe12046ce9b58b3528eb)`()` <a id="structFRHAPI__AuditResponse_1adb28e3ccd73fbe12046ce9b58b3528eb"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1ae618ff955defe6b11b4a5c6bf51c4063)`() const` <a id="structFRHAPI__AuditResponse_1ae618ff955defe6b11b4a5c6bf51c4063"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEvents`](#structFRHAPI__AuditResponse_1a4537e224aa29b6f3564e7948cf5f3f84)`(TArray< `[`FRHAPI_CustomAudit`](RHAPI_CustomAudit.md#structFRHAPI__CustomAudit)` > NewValue)` <a id="structFRHAPI__AuditResponse_1a4537e224aa29b6f3564e7948cf5f3f84"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true.

<br>
#### `public inline void `[`ClearEvents`](#structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2)`()` <a id="structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2"></a>

Clears the value of Events_Optional and sets Events_IsSet to false.

<br>
