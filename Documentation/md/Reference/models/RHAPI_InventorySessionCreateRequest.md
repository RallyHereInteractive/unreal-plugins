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
`public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a24b1102a56e0b9f10f4312f1e862e4eb)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a32f9db76f6bae208c83b64ae6e7f1a25)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a73ac532c52624ff9701396be69dbdf9a)`(const ERHAPI_InventoryPlatform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ae2cc87d13ffd4dee20c808910cb6a15a)`(ERHAPI_InventoryPlatform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1abb8561f99a221ec4a668915532a04363)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1a90dfe3cb50447160cbdaf169571c7644)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aee7ea747619a0929415221913fef86b1)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a54b9cf705a5068c74d2f0cc825a0d6c5)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline FORCEINLINE void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySessionCreateRequest_1a28af4259db85d1fa216de2975de23430)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySessionCreateRequest_1a1dd1df6ae60bfa9e0c9f2f034d7fdf78)`() const` | Checks whether SessionPlatform_Optional is set to null.

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

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a24b1102a56e0b9f10f4312f1e862e4eb)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1a24b1102a56e0b9f10f4312f1e862e4eb"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a32f9db76f6bae208c83b64ae6e7f1a25)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1a32f9db76f6bae208c83b64ae6e7f1a25"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a73ac532c52624ff9701396be69dbdf9a)`(const ERHAPI_InventoryPlatform & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateRequest_1a73ac532c52624ff9701396be69dbdf9a"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1ae2cc87d13ffd4dee20c808910cb6a15a)`(ERHAPI_InventoryPlatform & OutValue) const` <a id="structFRHAPI__InventorySessionCreateRequest_1ae2cc87d13ffd4dee20c808910cb6a15a"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1abb8561f99a221ec4a668915532a04363)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1abb8561f99a221ec4a668915532a04363"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateRequest_1a90dfe3cb50447160cbdaf169571c7644)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1a90dfe3cb50447160cbdaf169571c7644"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aee7ea747619a0929415221913fef86b1)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1aee7ea747619a0929415221913fef86b1"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1a54b9cf705a5068c74d2f0cc825a0d6c5)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__InventorySessionCreateRequest_1a54b9cf705a5068c74d2f0cc825a0d6c5"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1aad55a63e039262d87c1dd0715bd54d71"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySessionCreateRequest_1a28af4259db85d1fa216de2975de23430)`()` <a id="structFRHAPI__InventorySessionCreateRequest_1a28af4259db85d1fa216de2975de23430"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySessionCreateRequest_1a1dd1df6ae60bfa9e0c9f2f034d7fdf78)`() const` <a id="structFRHAPI__InventorySessionCreateRequest_1a1dd1df6ae60bfa9e0c9f2f034d7fdf78"></a>

Checks whether SessionPlatform_Optional is set to null.

