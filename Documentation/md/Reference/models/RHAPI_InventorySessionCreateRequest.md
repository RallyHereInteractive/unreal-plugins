---
title: RHAPI_InventorySessionCreateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventorySessionCreateRequest`](#structFRHAPI__InventorySessionCreateRequest) | Request body for creating a new Inventory Session.

## struct `FRHAPI_InventorySessionCreateRequest` <a id="structFRHAPI__InventorySessionCreateRequest"></a>

```
struct FRHAPI_InventorySessionCreateRequest
  : public FRHAPI_Model
```

Request body for creating a new Inventory Session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_InventoryPlatform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateRequest_1a57f36d878119951786f08dd4dfb21641) | 
`public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateRequest_1ab4b7db4ec8fc04e689de59d6277dd7fd) | true if SessionPlatform_Optional has been set to a value
`public bool `[`SessionPlatform_IsNull`](#structFRHAPI__InventorySessionCreateRequest_1ab37d307b83249bffcdac10e9a3be43b9) | true if SessionPlatform_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__InventorySessionCreateRequest_1a61617728516e30cb907f4aa87274e50c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateRequest_1a3c5f2a3c077819b1342d68a20a2fc5dc)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a30579149217861dd7202ecc487e8e37b)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1abd37d1628b11d8f4538c39733e152375)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a3743a7a3bd6ead7830ef346d0852e7e5)`(const ERHAPI_InventoryPlatform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1af011ce034500f91f04f6d423736031f1)`(ERHAPI_InventoryPlatform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1ab08d2eaf25bfb0b3eca0133c0be549aa)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1afb2a0dde8e405dcf6541f59fb1ad1abb)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a34ab98421419f350844d1e988a80e649)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a47ceb3eaf376b00b99620998319e9226)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySessionCreateRequest_1af9d3edc5d283e4ac6dea85b3fb7b7992)`() const` | Checks whether SessionPlatform_Optional has been set.
`public inline void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySessionCreateRequest_1aeb0f289d9c0ba242878f25614e6dea02)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySessionCreateRequest_1abdb20168b4bfa89a5b754bf50a41eeb8)`() const` | Checks whether SessionPlatform_Optional is set to null.

### Members

#### `public ERHAPI_InventoryPlatform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateRequest_1a57f36d878119951786f08dd4dfb21641) <a id="structFRHAPI__InventorySessionCreateRequest_1a57f36d878119951786f08dd4dfb21641"></a>

#### `public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateRequest_1ab4b7db4ec8fc04e689de59d6277dd7fd) <a id="structFRHAPI__InventorySessionCreateRequest_1ab4b7db4ec8fc04e689de59d6277dd7fd"></a>

true if SessionPlatform_Optional has been set to a value

#### `public bool `[`SessionPlatform_IsNull`](#structFRHAPI__InventorySessionCreateRequest_1ab37d307b83249bffcdac10e9a3be43b9) <a id="structFRHAPI__InventorySessionCreateRequest_1ab37d307b83249bffcdac10e9a3be43b9"></a>

true if SessionPlatform_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventorySessionCreateRequest_1a61617728516e30cb907f4aa87274e50c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1a61617728516e30cb907f4aa87274e50c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateRequest_1a3c5f2a3c077819b1342d68a20a2fc5dc)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventorySessionCreateRequest_1a3c5f2a3c077819b1342d68a20a2fc5dc"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a30579149217861dd7202ecc487e8e37b)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1a30579149217861dd7202ecc487e8e37b"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1abd37d1628b11d8f4538c39733e152375)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1abd37d1628b11d8f4538c39733e152375"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a3743a7a3bd6ead7830ef346d0852e7e5)`(const ERHAPI_InventoryPlatform & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateRequest_1a3743a7a3bd6ead7830ef346d0852e7e5"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1af011ce034500f91f04f6d423736031f1)`(ERHAPI_InventoryPlatform & OutValue) const` <a id="structFRHAPI__InventorySessionCreateRequest_1af011ce034500f91f04f6d423736031f1"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1ab08d2eaf25bfb0b3eca0133c0be549aa)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1ab08d2eaf25bfb0b3eca0133c0be549aa"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1afb2a0dde8e405dcf6541f59fb1ad1abb)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1afb2a0dde8e405dcf6541f59fb1ad1abb"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a34ab98421419f350844d1e988a80e649)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1a34ab98421419f350844d1e988a80e649"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a47ceb3eaf376b00b99620998319e9226)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1a47ceb3eaf376b00b99620998319e9226"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySessionCreateRequest_1af9d3edc5d283e4ac6dea85b3fb7b7992)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1af9d3edc5d283e4ac6dea85b3fb7b7992"></a>

Checks whether SessionPlatform_Optional has been set.

#### `public inline void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySessionCreateRequest_1aeb0f289d9c0ba242878f25614e6dea02)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1aeb0f289d9c0ba242878f25614e6dea02"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySessionCreateRequest_1abdb20168b4bfa89a5b754bf50a41eeb8)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1abdb20168b4bfa89a5b754bf50a41eeb8"></a>

Checks whether SessionPlatform_Optional is set to null.

