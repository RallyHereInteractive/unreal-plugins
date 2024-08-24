# group `RHAPI_UpdatePersonInfoRequest` <a id="group__RHAPI__UpdatePersonInfoRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdatePersonInfoRequest`](#structFRHAPI__UpdatePersonInfoRequest) | Request to update a person&#39;s info.

---
title: FRHAPI_UpdatePersonInfoRequest
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__UpdatePersonInfoRequest_1a1bb8ac0bd4701974658495b231443f57)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1af78a67575dd9865d044c07949b497844)`()` | Gets the value of Email.
`public inline const FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a45d6be43aae6a507a369fcd3a7bf6501)`() const` | Gets the value of Email.
`public inline void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a645433b72c507ec2fe0e716b643527cb)`(const FString & NewValue)` | Sets the value of Email.
`public inline void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a029fb9fdd039ad651f3afb5856dbd27f)`(FString && NewValue)` | Sets the value of Email using move semantics.

### Members

#### `public FString `[`Email`](#structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e) <a id="structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e"></a>

Email address to update to.

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdatePersonInfoRequest_1ab271bcfd365918be206355786350fdf7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdatePersonInfoRequest_1ab271bcfd365918be206355786350fdf7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdatePersonInfoRequest_1a1bb8ac0bd4701974658495b231443f57)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UpdatePersonInfoRequest_1a1bb8ac0bd4701974658495b231443f57"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1af78a67575dd9865d044c07949b497844)`()` <a id="structFRHAPI__UpdatePersonInfoRequest_1af78a67575dd9865d044c07949b497844"></a>

Gets the value of Email.

#### `public inline const FString & `[`GetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a45d6be43aae6a507a369fcd3a7bf6501)`() const` <a id="structFRHAPI__UpdatePersonInfoRequest_1a45d6be43aae6a507a369fcd3a7bf6501"></a>

Gets the value of Email.

#### `public inline void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a645433b72c507ec2fe0e716b643527cb)`(const FString & NewValue)` <a id="structFRHAPI__UpdatePersonInfoRequest_1a645433b72c507ec2fe0e716b643527cb"></a>

Sets the value of Email.

#### `public inline void `[`SetEmail`](#structFRHAPI__UpdatePersonInfoRequest_1a029fb9fdd039ad651f3afb5856dbd27f)`(FString && NewValue)` <a id="structFRHAPI__UpdatePersonInfoRequest_1a029fb9fdd039ad651f3afb5856dbd27f"></a>

Sets the value of Email using move semantics.

