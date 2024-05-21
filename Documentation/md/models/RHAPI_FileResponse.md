# group `RHAPI_FileResponse` <a id="group__RHAPI__FileResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FileResponse`](#structFRHAPI__FileResponse) | 

## struct `FRHAPI_FileResponse` <a id="structFRHAPI__FileResponse"></a>

```
struct FRHAPI_FileResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Name`](#structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9) | 
`public int32 `[`Size`](#structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3) | 
`public FString `[`ContentType`](#structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e) | 
`public FDateTime `[`CreatedTimestamp`](#structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__FileResponse_1a46d972855e7ba94080ed79672ffbd217)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FileResponse_1ad140087173cf29fe5b4be8e148b0f71b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetName`](#structFRHAPI__FileResponse_1aa4e55ba624a6ed72cd8462f8061bf4ba)`()` | Gets the value of Name.
`public inline const FString & `[`GetName`](#structFRHAPI__FileResponse_1a9f5b6e88c05a336654f519ab9c84973c)`() const` | Gets the value of Name.
`public inline void `[`SetName`](#structFRHAPI__FileResponse_1adb8efe982920be4a630bd164375d2c60)`(FString NewValue)` | Sets the value of Name.
`public inline int32 & `[`GetSize`](#structFRHAPI__FileResponse_1a20c9b436278aeb0efb90abc51be0d1bb)`()` | Gets the value of Size.
`public inline const int32 & `[`GetSize`](#structFRHAPI__FileResponse_1afc9f0a2d4305d823f1cef3840b4d5200)`() const` | Gets the value of Size.
`public inline void `[`SetSize`](#structFRHAPI__FileResponse_1af8380b0db3426383a245160abe377f97)`(int32 NewValue)` | Sets the value of Size.
`public inline bool `[`IsSizeDefaultValue`](#structFRHAPI__FileResponse_1a53731a77c1b7fafb991b976576e34bdb)`() const` | Returns true if Size matches the default value.
`public inline void `[`SetSizeToDefault`](#structFRHAPI__FileResponse_1a197e08b0f788382c8078833a9fd7e470)`()` | Sets the value of Size to its default
`public inline FString & `[`GetContentType`](#structFRHAPI__FileResponse_1ac61921814e7ca240bbe14d10018f2f7d)`()` | Gets the value of ContentType.
`public inline const FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a6e27c951c88051828e75bc9a1b0f6f9d)`() const` | Gets the value of ContentType.
`public inline void `[`SetContentType`](#structFRHAPI__FileResponse_1a4f435775ff33a862b39e79c627530082)`(FString NewValue)` | Sets the value of ContentType.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1a9c561dfa870c2190471045259e0dfd05)`()` | Gets the value of CreatedTimestamp.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1ab7ee2e7c22aaaaee4ae4a0d74c03a096)`() const` | Gets the value of CreatedTimestamp.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1a23fdd2e1c6198d73db3412400345d9bb)`(FDateTime NewValue)` | Sets the value of CreatedTimestamp.

### Members

#### `public FString `[`Name`](#structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9) <a id="structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9"></a>

#### `public int32 `[`Size`](#structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3) <a id="structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3"></a>

#### `public FString `[`ContentType`](#structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e) <a id="structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e"></a>

#### `public FDateTime `[`CreatedTimestamp`](#structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd) <a id="structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public virtual bool `[`FromJson`](#structFRHAPI__FileResponse_1a46d972855e7ba94080ed79672ffbd217)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FileResponse_1a46d972855e7ba94080ed79672ffbd217"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FileResponse_1ad140087173cf29fe5b4be8e148b0f71b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__FileResponse_1ad140087173cf29fe5b4be8e148b0f71b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetName`](#structFRHAPI__FileResponse_1aa4e55ba624a6ed72cd8462f8061bf4ba)`()` <a id="structFRHAPI__FileResponse_1aa4e55ba624a6ed72cd8462f8061bf4ba"></a>

Gets the value of Name.

#### `public inline const FString & `[`GetName`](#structFRHAPI__FileResponse_1a9f5b6e88c05a336654f519ab9c84973c)`() const` <a id="structFRHAPI__FileResponse_1a9f5b6e88c05a336654f519ab9c84973c"></a>

Gets the value of Name.

#### `public inline void `[`SetName`](#structFRHAPI__FileResponse_1adb8efe982920be4a630bd164375d2c60)`(FString NewValue)` <a id="structFRHAPI__FileResponse_1adb8efe982920be4a630bd164375d2c60"></a>

Sets the value of Name.

#### `public inline int32 & `[`GetSize`](#structFRHAPI__FileResponse_1a20c9b436278aeb0efb90abc51be0d1bb)`()` <a id="structFRHAPI__FileResponse_1a20c9b436278aeb0efb90abc51be0d1bb"></a>

Gets the value of Size.

#### `public inline const int32 & `[`GetSize`](#structFRHAPI__FileResponse_1afc9f0a2d4305d823f1cef3840b4d5200)`() const` <a id="structFRHAPI__FileResponse_1afc9f0a2d4305d823f1cef3840b4d5200"></a>

Gets the value of Size.

#### `public inline void `[`SetSize`](#structFRHAPI__FileResponse_1af8380b0db3426383a245160abe377f97)`(int32 NewValue)` <a id="structFRHAPI__FileResponse_1af8380b0db3426383a245160abe377f97"></a>

Sets the value of Size.

#### `public inline bool `[`IsSizeDefaultValue`](#structFRHAPI__FileResponse_1a53731a77c1b7fafb991b976576e34bdb)`() const` <a id="structFRHAPI__FileResponse_1a53731a77c1b7fafb991b976576e34bdb"></a>

Returns true if Size matches the default value.

#### `public inline void `[`SetSizeToDefault`](#structFRHAPI__FileResponse_1a197e08b0f788382c8078833a9fd7e470)`()` <a id="structFRHAPI__FileResponse_1a197e08b0f788382c8078833a9fd7e470"></a>

Sets the value of Size to its default

#### `public inline FString & `[`GetContentType`](#structFRHAPI__FileResponse_1ac61921814e7ca240bbe14d10018f2f7d)`()` <a id="structFRHAPI__FileResponse_1ac61921814e7ca240bbe14d10018f2f7d"></a>

Gets the value of ContentType.

#### `public inline const FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a6e27c951c88051828e75bc9a1b0f6f9d)`() const` <a id="structFRHAPI__FileResponse_1a6e27c951c88051828e75bc9a1b0f6f9d"></a>

Gets the value of ContentType.

#### `public inline void `[`SetContentType`](#structFRHAPI__FileResponse_1a4f435775ff33a862b39e79c627530082)`(FString NewValue)` <a id="structFRHAPI__FileResponse_1a4f435775ff33a862b39e79c627530082"></a>

Sets the value of ContentType.

#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1a9c561dfa870c2190471045259e0dfd05)`()` <a id="structFRHAPI__FileResponse_1a9c561dfa870c2190471045259e0dfd05"></a>

Gets the value of CreatedTimestamp.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1ab7ee2e7c22aaaaee4ae4a0d74c03a096)`() const` <a id="structFRHAPI__FileResponse_1ab7ee2e7c22aaaaee4ae4a0d74c03a096"></a>

Gets the value of CreatedTimestamp.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1a23fdd2e1c6198d73db3412400345d9bb)`(FDateTime NewValue)` <a id="structFRHAPI__FileResponse_1a23fdd2e1c6198d73db3412400345d9bb"></a>

Sets the value of CreatedTimestamp.

