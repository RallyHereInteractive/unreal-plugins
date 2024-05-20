# group `RHAPI_PersonEmailListRequest` <a id="group__RHAPI__PersonEmailListRequest"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListRequest_1a6f8e407240eb7ef9d57c32cf1bfee7ab)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListRequest_1a5f71385e182f178080469e5ff0a11ad5)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a109787b76426c3c653bf980d332a95ca)`()` | Gets the value of EmailListIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a2b4eaf81b5f7b38902547281003afecd)`() const` | Gets the value of EmailListIds_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a3fadd6d2f2e530dc12a3a7a6d14186fd)`(const TArray< int32 > & DefaultValue) const` | Gets the value of EmailListIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a577b39a9aad16d1fac8aba9be9f77e8d)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of EmailListIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1a380c5012251647de67ef86087c29a9f6)`()` | Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1ae4b01fbeffd7a00a89f779afd6f32689)`() const` | Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a1a25e71e46276a364fd039ff924ab31c)`(TArray< int32 > NewValue)` | Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true.
`public inline void `[`ClearEmailListIds`](#structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2)`()` | Clears the value of EmailListIds_Optional and sets EmailListIds_IsSet to false.

### Members

#### `public TArray< int32 > `[`EmailListIds_Optional`](#structFRHAPI__PersonEmailListRequest_1a40e9b3ec056a3c2567d794c697c7082d) <a id="structFRHAPI__PersonEmailListRequest_1a40e9b3ec056a3c2567d794c697c7082d"></a>

List of all email list ids the user is subscribed to, even if already subscribed before request.

#### `public bool `[`EmailListIds_IsSet`](#structFRHAPI__PersonEmailListRequest_1a3da41bb7b8e4e445cbe45a9d9090f3d5) <a id="structFRHAPI__PersonEmailListRequest_1a3da41bb7b8e4e445cbe45a9d9090f3d5"></a>

true if EmailListIds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonEmailListRequest_1a6f8e407240eb7ef9d57c32cf1bfee7ab)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonEmailListRequest_1a6f8e407240eb7ef9d57c32cf1bfee7ab"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonEmailListRequest_1a5f71385e182f178080469e5ff0a11ad5)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PersonEmailListRequest_1a5f71385e182f178080469e5ff0a11ad5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a109787b76426c3c653bf980d332a95ca)`()` <a id="structFRHAPI__PersonEmailListRequest_1a109787b76426c3c653bf980d332a95ca"></a>

Gets the value of EmailListIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a2b4eaf81b5f7b38902547281003afecd)`() const` <a id="structFRHAPI__PersonEmailListRequest_1a2b4eaf81b5f7b38902547281003afecd"></a>

Gets the value of EmailListIds_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a3fadd6d2f2e530dc12a3a7a6d14186fd)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__PersonEmailListRequest_1a3fadd6d2f2e530dc12a3a7a6d14186fd"></a>

Gets the value of EmailListIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a577b39a9aad16d1fac8aba9be9f77e8d)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__PersonEmailListRequest_1a577b39a9aad16d1fac8aba9be9f77e8d"></a>

Fills OutValue with the value of EmailListIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1a380c5012251647de67ef86087c29a9f6)`()` <a id="structFRHAPI__PersonEmailListRequest_1a380c5012251647de67ef86087c29a9f6"></a>

Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetEmailListIdsOrNull`](#structFRHAPI__PersonEmailListRequest_1ae4b01fbeffd7a00a89f779afd6f32689)`() const` <a id="structFRHAPI__PersonEmailListRequest_1ae4b01fbeffd7a00a89f779afd6f32689"></a>

Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEmailListIds`](#structFRHAPI__PersonEmailListRequest_1a1a25e71e46276a364fd039ff924ab31c)`(TArray< int32 > NewValue)` <a id="structFRHAPI__PersonEmailListRequest_1a1a25e71e46276a364fd039ff924ab31c"></a>

Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true.

#### `public inline void `[`ClearEmailListIds`](#structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2)`()` <a id="structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2"></a>

Clears the value of EmailListIds_Optional and sets EmailListIds_IsSet to false.

