---
title: RHAPI_PersonEmailListResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PersonEmailListResponse`](#structFRHAPI__PersonEmailListResponse) | Response for updating a person&#39;s email list subscriptions.

## struct `FRHAPI_PersonEmailListResponse` <a id="structFRHAPI__PersonEmailListResponse"></a>

```
struct FRHAPI_PersonEmailListResponse
  : public FRHAPI_Model
```

Response for updating a person&#39;s email list subscriptions.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< int32 > `[`EmailListIds`](#structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d) | List of all email list ids the user is subscribed to.
`public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListResponse_1a97e00cd934aba0809dc12b4c3e746e0f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListResponse_1ace6826ea86dc168edd421c1e96ca5397)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1aaa7d4ae5745842814b7dd2dee11e54fe)`()` | Gets the value of EmailListIds.
`public inline FORCEINLINE const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a5201e55acc728cbc128cc153044c7dd1)`() const` | Gets the value of EmailListIds.
`public inline FORCEINLINE void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1ad6a97245da54788229a73f2c17534ff1)`(const TArray< int32 > & NewValue)` | Sets the value of EmailListIds.
`public inline FORCEINLINE void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a41973447a92a235de2da28d5d9245ec1)`(TArray< int32 > && NewValue)` | Sets the value of EmailListIds using move semantics.

### Members

#### `public TArray< int32 > `[`EmailListIds`](#structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d) <a id="structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d"></a>

List of all email list ids the user is subscribed to.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListResponse_1a97e00cd934aba0809dc12b4c3e746e0f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonEmailListResponse_1a97e00cd934aba0809dc12b4c3e746e0f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListResponse_1ace6826ea86dc168edd421c1e96ca5397)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PersonEmailListResponse_1ace6826ea86dc168edd421c1e96ca5397"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1aaa7d4ae5745842814b7dd2dee11e54fe)`()` <a id="structFRHAPI__PersonEmailListResponse_1aaa7d4ae5745842814b7dd2dee11e54fe"></a>

Gets the value of EmailListIds.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a5201e55acc728cbc128cc153044c7dd1)`() const` <a id="structFRHAPI__PersonEmailListResponse_1a5201e55acc728cbc128cc153044c7dd1"></a>

Gets the value of EmailListIds.

#### `public inline FORCEINLINE void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1ad6a97245da54788229a73f2c17534ff1)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PersonEmailListResponse_1ad6a97245da54788229a73f2c17534ff1"></a>

Sets the value of EmailListIds.

#### `public inline FORCEINLINE void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a41973447a92a235de2da28d5d9245ec1)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PersonEmailListResponse_1a41973447a92a235de2da28d5d9245ec1"></a>

Sets the value of EmailListIds using move semantics.

