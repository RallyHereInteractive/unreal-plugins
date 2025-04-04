---
title: RHAPI_PersonEmailListRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PersonEmailListRequest`](#structFRHAPI__PersonEmailListRequest) | Request to update a person&#39;s email list subscriptions.

## struct `FRHAPI_PersonEmailListRequest` <a id="structFRHAPI__PersonEmailListRequest"></a>

```
struct FRHAPI_PersonEmailListRequest
  : public FRHAPI_Model
```

Request to update a person&#39;s email list subscriptions.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< int32 > `[`EmailListIds_Optional`](#structFRHAPI__PersonEmailListRequest_1a40e9b3ec056a3c2567d794c697c7082d) | List of all email list ids the user is subscribed to, even if already subscribed before request.
`public bool `[`EmailListIds_IsSet`](#structFRHAPI__PersonEmailListRequest_1a3da41bb7b8e4e445cbe45a9d9090f3d5) | true if EmailListIds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListRequest_1a8d3c8acbd4077722e6a7c1e5d6829f93)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListRequest_1a80343009b143e68b85a2177014caf602)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a9f559ecb9d897387ce2cda070bb3b5ff)`()` | Gets the value of EmailListIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1abfdca05647683d0304aaa03687930953)`() const` | Gets the value of EmailListIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1ac29231593861448448e98eecce98f45b)`(const TArray< int32 > & DefaultValue) const` | Gets the value of EmailListIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a577b39a9aad16d1fac8aba9be9f77e8d)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of EmailListIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1ad19eecb0f8807571959009428470dbb4)`()` | Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1a0b0bb52ccc770ae1c06cc9632503776d)`() const` | Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1ac143d7575eda1eb5ef2dd264927843b5)`(const TArray< int32 > & NewValue)` | Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true.
`public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a1672a398555a3cd201cd60a7fcc787e0)`(TArray< int32 > && NewValue)` | Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true using move semantics.
`public inline void `[`ClearEmailListIds`](#structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2)`()` | Clears the value of EmailListIds_Optional and sets EmailListIds_IsSet to false.
`public inline bool `[`IsEmailListIdsSet`](#structFRHAPI__PersonEmailListRequest_1a0beddffc36f9dcc93bd3014e8b5d6fb0)`() const` | Checks whether EmailListIds_Optional has been set.

### Members

#### `public TArray< int32 > `[`EmailListIds_Optional`](#structFRHAPI__PersonEmailListRequest_1a40e9b3ec056a3c2567d794c697c7082d) <a id="structFRHAPI__PersonEmailListRequest_1a40e9b3ec056a3c2567d794c697c7082d"></a>

List of all email list ids the user is subscribed to, even if already subscribed before request.

#### `public bool `[`EmailListIds_IsSet`](#structFRHAPI__PersonEmailListRequest_1a3da41bb7b8e4e445cbe45a9d9090f3d5) <a id="structFRHAPI__PersonEmailListRequest_1a3da41bb7b8e4e445cbe45a9d9090f3d5"></a>

true if EmailListIds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListRequest_1a8d3c8acbd4077722e6a7c1e5d6829f93)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonEmailListRequest_1a8d3c8acbd4077722e6a7c1e5d6829f93"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListRequest_1a80343009b143e68b85a2177014caf602)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PersonEmailListRequest_1a80343009b143e68b85a2177014caf602"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a9f559ecb9d897387ce2cda070bb3b5ff)`()` <a id="structFRHAPI__PersonEmailListRequest_1a9f559ecb9d897387ce2cda070bb3b5ff"></a>

Gets the value of EmailListIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1abfdca05647683d0304aaa03687930953)`() const` <a id="structFRHAPI__PersonEmailListRequest_1abfdca05647683d0304aaa03687930953"></a>

Gets the value of EmailListIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1ac29231593861448448e98eecce98f45b)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PersonEmailListRequest_1ac29231593861448448e98eecce98f45b"></a>

Gets the value of EmailListIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a577b39a9aad16d1fac8aba9be9f77e8d)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PersonEmailListRequest_1a577b39a9aad16d1fac8aba9be9f77e8d"></a>

Fills OutValue with the value of EmailListIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1ad19eecb0f8807571959009428470dbb4)`()` <a id="structFRHAPI__PersonEmailListRequest_1ad19eecb0f8807571959009428470dbb4"></a>

Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1a0b0bb52ccc770ae1c06cc9632503776d)`() const` <a id="structFRHAPI__PersonEmailListRequest_1a0b0bb52ccc770ae1c06cc9632503776d"></a>

Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1ac143d7575eda1eb5ef2dd264927843b5)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PersonEmailListRequest_1ac143d7575eda1eb5ef2dd264927843b5"></a>

Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true.

#### `public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a1672a398555a3cd201cd60a7fcc787e0)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PersonEmailListRequest_1a1672a398555a3cd201cd60a7fcc787e0"></a>

Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true using move semantics.

#### `public inline void `[`ClearEmailListIds`](#structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2)`()` <a id="structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2"></a>

Clears the value of EmailListIds_Optional and sets EmailListIds_IsSet to false.

#### `public inline bool `[`IsEmailListIdsSet`](#structFRHAPI__PersonEmailListRequest_1a0beddffc36f9dcc93bd3014e8b5d6fb0)`() const` <a id="structFRHAPI__PersonEmailListRequest_1a0beddffc36f9dcc93bd3014e8b5d6fb0"></a>

Checks whether EmailListIds_Optional has been set.

