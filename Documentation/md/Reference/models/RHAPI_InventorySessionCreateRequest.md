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
`public ERHAPI_Platform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateRequest_1a3ce3d37c36fd64abb0c9f2ac71c7de0b) | The platform for the session.
`public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateRequest_1ab4b7db4ec8fc04e689de59d6277dd7fd) | true if SessionPlatform_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventorySessionCreateRequest_1a61617728516e30cb907f4aa87274e50c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateRequest_1a3c5f2a3c077819b1342d68a20a2fc5dc)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ae39b3a641279bd7b8ace02cf493cba27)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a1f7af897dd7e9717a1e7acbe2922a5ea)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a2b49748ce7f1c0bd03802218966e4308)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1acbb25e0e1ca49d59732c2f58fa7ce40b)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1a169b6e2b0a7cbd64b2df04bc3837a656)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1a8e68f4468c4a7eb7b12dbee578cef104)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ab36307f16aaf8703733e9f5d40e66aef)`(const ERHAPI_Platform & NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a671e38468880d24200c3234687ed1811)`(ERHAPI_Platform && NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySessionCreateRequest_1af9d3edc5d283e4ac6dea85b3fb7b7992)`() const` | Checks whether SessionPlatform_Optional has been set.

### Members

#### `public ERHAPI_Platform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateRequest_1a3ce3d37c36fd64abb0c9f2ac71c7de0b) <a id="structFRHAPI__InventorySessionCreateRequest_1a3ce3d37c36fd64abb0c9f2ac71c7de0b"></a>

The platform for the session.

#### `public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateRequest_1ab4b7db4ec8fc04e689de59d6277dd7fd) <a id="structFRHAPI__InventorySessionCreateRequest_1ab4b7db4ec8fc04e689de59d6277dd7fd"></a>

true if SessionPlatform_Optional has been set to a value

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

#### `public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ae39b3a641279bd7b8ace02cf493cba27)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1ae39b3a641279bd7b8ace02cf493cba27"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a1f7af897dd7e9717a1e7acbe2922a5ea)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1a1f7af897dd7e9717a1e7acbe2922a5ea"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a2b49748ce7f1c0bd03802218966e4308)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateRequest_1a2b49748ce7f1c0bd03802218966e4308"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1acbb25e0e1ca49d59732c2f58fa7ce40b)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__InventorySessionCreateRequest_1acbb25e0e1ca49d59732c2f58fa7ce40b"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1a169b6e2b0a7cbd64b2df04bc3837a656)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1a169b6e2b0a7cbd64b2df04bc3837a656"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1a8e68f4468c4a7eb7b12dbee578cef104)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1a8e68f4468c4a7eb7b12dbee578cef104"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ab36307f16aaf8703733e9f5d40e66aef)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1ab36307f16aaf8703733e9f5d40e66aef"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a671e38468880d24200c3234687ed1811)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1a671e38468880d24200c3234687ed1811"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySessionCreateRequest_1af9d3edc5d283e4ac6dea85b3fb7b7992)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1af9d3edc5d283e4ac6dea85b3fb7b7992"></a>

Checks whether SessionPlatform_Optional has been set.

