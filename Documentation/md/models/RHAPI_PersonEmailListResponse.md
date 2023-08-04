# RHAPI_PersonEmailListResponse <a id="group__RHAPI__PersonEmailListResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PersonEmailListResponse`](#structFRHAPI__PersonEmailListResponse) | 

## struct `FRHAPI_PersonEmailListResponse` <a id="structFRHAPI__PersonEmailListResponse"></a>

```
struct FRHAPI_PersonEmailListResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< int32 > `[`EmailListIds`](#structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListResponse_1a54d8a7ba0dc3a88fd6763b746294dc31)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListResponse_1a502b121c93096ab99799fa71130d6cb8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a603ce5ee32c487c52d59f7434989d029)`()` | Gets the value of EmailListIds.
`public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a3079634ec6743a9b7b8dfb7e43fae8cd)`() const` | Gets the value of EmailListIds.
`public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a7b238ecadcb0b5dc5633901d06601a99)`(TArray< int32 > NewValue)` | Sets the value of EmailListIds.

#### Members

#### `public TArray< int32 > `[`EmailListIds`](#structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d) <a id="structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListResponse_1a54d8a7ba0dc3a88fd6763b746294dc31)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonEmailListResponse_1a54d8a7ba0dc3a88fd6763b746294dc31"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListResponse_1a502b121c93096ab99799fa71130d6cb8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PersonEmailListResponse_1a502b121c93096ab99799fa71130d6cb8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a603ce5ee32c487c52d59f7434989d029)`()` <a id="structFRHAPI__PersonEmailListResponse_1a603ce5ee32c487c52d59f7434989d029"></a>

Gets the value of EmailListIds.

<br>
#### `public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a3079634ec6743a9b7b8dfb7e43fae8cd)`() const` <a id="structFRHAPI__PersonEmailListResponse_1a3079634ec6743a9b7b8dfb7e43fae8cd"></a>

Gets the value of EmailListIds.

<br>
#### `public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListResponse_1a7b238ecadcb0b5dc5633901d06601a99)`(TArray< int32 > NewValue)` <a id="structFRHAPI__PersonEmailListResponse_1a7b238ecadcb0b5dc5633901d06601a99"></a>

Sets the value of EmailListIds.

<br>
