# group `RHAPI_InventorySessionCreateRequest` <a id="group__RHAPI__InventorySessionCreateRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventorySessionCreateRequest`](#structFRHAPI__InventorySessionCreateRequest) | Request body for creating a new Inventory Session.

---
title: FRHAPI_InventorySessionCreateRequest
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateRequest_1acea5303c4153ce1febb5489e2d8d16e1)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a399a8e0b4eff8aa1b5e32465b09bcd1a)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a71d76d23f6e179dd66d70bf12320b279)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ad83246843db2f5a6cbad43766265996f)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1acbb25e0e1ca49d59732c2f58fa7ce40b)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1a6b04a45761ddcd173be6bd2f1663b9e4)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1aa24dff40feb38b6811dbdb940b04c681)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateRequest_1acea5303c4153ce1febb5489e2d8d16e1)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventorySessionCreateRequest_1acea5303c4153ce1febb5489e2d8d16e1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a399a8e0b4eff8aa1b5e32465b09bcd1a)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1a399a8e0b4eff8aa1b5e32465b09bcd1a"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a71d76d23f6e179dd66d70bf12320b279)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1a71d76d23f6e179dd66d70bf12320b279"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ad83246843db2f5a6cbad43766265996f)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateRequest_1ad83246843db2f5a6cbad43766265996f"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1acbb25e0e1ca49d59732c2f58fa7ce40b)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__InventorySessionCreateRequest_1acbb25e0e1ca49d59732c2f58fa7ce40b"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1a6b04a45761ddcd173be6bd2f1663b9e4)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1a6b04a45761ddcd173be6bd2f1663b9e4"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1aa24dff40feb38b6811dbdb940b04c681)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1aa24dff40feb38b6811dbdb940b04c681"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ab36307f16aaf8703733e9f5d40e66aef)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1ab36307f16aaf8703733e9f5d40e66aef"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a671e38468880d24200c3234687ed1811)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1a671e38468880d24200c3234687ed1811"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySessionCreateRequest_1af9d3edc5d283e4ac6dea85b3fb7b7992)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1af9d3edc5d283e4ac6dea85b3fb7b7992"></a>

Checks whether SessionPlatform_Optional has been set.

