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
`public inline FORCEINLINE TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a538cab0b0189a017a838286269ac77e3)`()` | Gets the value of EmailListIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1afd614b36cc8e7ccfcaa2ff935ce5a548)`() const` | Gets the value of EmailListIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a245b8b66ec226bed7893723fd04bdbdd)`(const TArray< int32 > & DefaultValue) const` | Gets the value of EmailListIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1abf8af300e7281c819040fd63603c2322)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of EmailListIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1af09423db3f593dc260e882204ff20970)`()` | Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1a5172bcb733d8d54c48dfd1224f273fb0)`() const` | Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a2d781783e8f46649cdd1cc52b48cd351)`(const TArray< int32 > & NewValue)` | Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true.
`public inline FORCEINLINE void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a791782e646b99ff4f4c2d2eca1192a7c)`(TArray< int32 > && NewValue)` | Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true using move semantics.
`public inline void `[`ClearEmailListIds`](#structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2)`()` | Clears the value of EmailListIds_Optional and sets EmailListIds_IsSet to false.

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

#### `public inline FORCEINLINE TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a538cab0b0189a017a838286269ac77e3)`()` <a id="structFRHAPI__PersonEmailListRequest_1a538cab0b0189a017a838286269ac77e3"></a>

Gets the value of EmailListIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1afd614b36cc8e7ccfcaa2ff935ce5a548)`() const` <a id="structFRHAPI__PersonEmailListRequest_1afd614b36cc8e7ccfcaa2ff935ce5a548"></a>

Gets the value of EmailListIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a245b8b66ec226bed7893723fd04bdbdd)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PersonEmailListRequest_1a245b8b66ec226bed7893723fd04bdbdd"></a>

Gets the value of EmailListIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1abf8af300e7281c819040fd63603c2322)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PersonEmailListRequest_1abf8af300e7281c819040fd63603c2322"></a>

Fills OutValue with the value of EmailListIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1af09423db3f593dc260e882204ff20970)`()` <a id="structFRHAPI__PersonEmailListRequest_1af09423db3f593dc260e882204ff20970"></a>

Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1a5172bcb733d8d54c48dfd1224f273fb0)`() const` <a id="structFRHAPI__PersonEmailListRequest_1a5172bcb733d8d54c48dfd1224f273fb0"></a>

Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a2d781783e8f46649cdd1cc52b48cd351)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PersonEmailListRequest_1a2d781783e8f46649cdd1cc52b48cd351"></a>

Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a791782e646b99ff4f4c2d2eca1192a7c)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PersonEmailListRequest_1a791782e646b99ff4f4c2d2eca1192a7c"></a>

Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true using move semantics.

#### `public inline void `[`ClearEmailListIds`](#structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2)`()` <a id="structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2"></a>

Clears the value of EmailListIds_Optional and sets EmailListIds_IsSet to false.

