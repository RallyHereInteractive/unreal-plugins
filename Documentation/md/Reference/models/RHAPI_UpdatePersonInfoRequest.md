---
title: RHAPI_UpdatePersonInfoRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdatePersonInfoRequest`](#structFRHAPI__UpdatePersonInfoRequest) | Request to update a person&#39;s info.

## struct `FRHAPI_UpdatePersonInfoRequest` <a id="structFRHAPI__UpdatePersonInfoRequest"></a>

```
struct FRHAPI_UpdatePersonInfoRequest
  : public FRHAPI_Model
```

Request to update a person&#39;s info.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Email`](#structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e) | Email address to update to.
`public virtual bool `[`FromJson`](#structFRHAPI__UpdatePersonInfoRequest_1ab271bcfd365918be206355786350fdf7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdatePersonInfoRequest_1a63f485505325becbcb55927a87c0f332)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a7c424be555959105cea4ed636f35a14f)`()` | Gets the value of Email.
`public inline FORCEINLINE const FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a4c3e5a1babb80660aeb2a0e4782ce606)`() const` | Gets the value of Email.
`public inline FORCEINLINE void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1ab36607b027654da0e1c9d75c1060a928)`(const FString & NewValue)` | Sets the value of Email.
`public inline FORCEINLINE void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a99da38a0e5753f54586d922f83f3f647)`(FString && NewValue)` | Sets the value of Email using move semantics.

### Members

#### `public FString `[`Email`](#structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e) <a id="structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e"></a>

Email address to update to.

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdatePersonInfoRequest_1ab271bcfd365918be206355786350fdf7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdatePersonInfoRequest_1ab271bcfd365918be206355786350fdf7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdatePersonInfoRequest_1a63f485505325becbcb55927a87c0f332)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UpdatePersonInfoRequest_1a63f485505325becbcb55927a87c0f332"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a7c424be555959105cea4ed636f35a14f)`()` <a id="structFRHAPI__UpdatePersonInfoRequest_1a7c424be555959105cea4ed636f35a14f"></a>

Gets the value of Email.

#### `public inline FORCEINLINE const FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a4c3e5a1babb80660aeb2a0e4782ce606)`() const` <a id="structFRHAPI__UpdatePersonInfoRequest_1a4c3e5a1babb80660aeb2a0e4782ce606"></a>

Gets the value of Email.

#### `public inline FORCEINLINE void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1ab36607b027654da0e1c9d75c1060a928)`(const FString & NewValue)` <a id="structFRHAPI__UpdatePersonInfoRequest_1ab36607b027654da0e1c9d75c1060a928"></a>

Sets the value of Email.

#### `public inline FORCEINLINE void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a99da38a0e5753f54586d922f83f3f647)`(FString && NewValue)` <a id="structFRHAPI__UpdatePersonInfoRequest_1a99da38a0e5753f54586d922f83f3f647"></a>

Sets the value of Email using move semantics.

