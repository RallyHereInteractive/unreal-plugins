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
`public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListResponse_1a1d2de603a591a72d2b52c5949c3f546e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a603ce5ee32c487c52d59f7434989d029)`()` | Gets the value of EmailListIds.
`public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a3079634ec6743a9b7b8dfb7e43fae8cd)`() const` | Gets the value of EmailListIds.
`public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a85f46c915867632837fb1b114e20b1d3)`(const TArray< int32 > & NewValue)` | Sets the value of EmailListIds.
`public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1aba90168ef58f6c024238700a19d3735b)`(TArray< int32 > && NewValue)` | Sets the value of EmailListIds using move semantics.

### Members

#### `public TArray< int32 > `[`EmailListIds`](#structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d) <a id="structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d"></a>

List of all email list ids the user is subscribed to.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListResponse_1a97e00cd934aba0809dc12b4c3e746e0f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonEmailListResponse_1a97e00cd934aba0809dc12b4c3e746e0f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListResponse_1a1d2de603a591a72d2b52c5949c3f546e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PersonEmailListResponse_1a1d2de603a591a72d2b52c5949c3f546e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a603ce5ee32c487c52d59f7434989d029)`()` <a id="structFRHAPI__PersonEmailListResponse_1a603ce5ee32c487c52d59f7434989d029"></a>

Gets the value of EmailListIds.

#### `public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a3079634ec6743a9b7b8dfb7e43fae8cd)`() const` <a id="structFRHAPI__PersonEmailListResponse_1a3079634ec6743a9b7b8dfb7e43fae8cd"></a>

Gets the value of EmailListIds.

#### `public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a85f46c915867632837fb1b114e20b1d3)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__PersonEmailListResponse_1a85f46c915867632837fb1b114e20b1d3"></a>

Sets the value of EmailListIds.

#### `public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1aba90168ef58f6c024238700a19d3735b)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__PersonEmailListResponse_1aba90168ef58f6c024238700a19d3735b"></a>

Sets the value of EmailListIds using move semantics.

