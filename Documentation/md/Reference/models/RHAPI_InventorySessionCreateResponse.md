---
title: RHAPI_InventorySessionCreateResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventorySessionCreateResponse`](#structFRHAPI__InventorySessionCreateResponse) | Response body for creating a new Inventory Session.

## struct `FRHAPI_InventorySessionCreateResponse` <a id="structFRHAPI__InventorySessionCreateResponse"></a>

```
struct FRHAPI_InventorySessionCreateResponse
  : public FRHAPI_Model
```

Response body for creating a new Inventory Session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__InventorySessionCreateResponse_1a160a748950f52bf2d4dc9c750835512d) | The ID of the session.
`public ERHAPI_InventoryPlatform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateResponse_1a2dff6b48a64991dd35404ac40a4b7fd2) | 
`public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f) | true if SessionPlatform_Optional has been set to a value
`public bool `[`SessionPlatform_IsNull`](#structFRHAPI__InventorySessionCreateResponse_1ada5398c9d0be39dfed005dfa727bdc70) | true if SessionPlatform_Optional has been explicitly set to null
`public FString `[`OrderId_Optional`](#structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81) | 
`public bool `[`OrderId_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88) | true if OrderId_Optional has been set to a value
`public bool `[`OrderId_IsNull`](#structFRHAPI__InventorySessionCreateResponse_1a6b8106a657654d9c6a79f120cfbe5cd4) | true if OrderId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__InventorySessionCreateResponse_1a24c463406ed41d4b1e97ba729e14d788)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateResponse_1a9e330c67bbbec7c74a3de009b487f3ed)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a7ef63186c0da26bf92f071d6a11fbe82)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1aff4b429141abdb2cb89f75e500100d8a)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1aa8797342cad8b503c4f1dfbeb1c769a5)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1ad65e56f1182d7697252976fcbbce0d9c)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1aabd221b78d6496bbe54e420ffd7f93d0)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1aa81c385d3ae14f6b696928cef9435765)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1aebf6251f3fd880cb83fa0cc991529934)`(const ERHAPI_InventoryPlatform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1abb40fd7eb2d85f1a7253ce9b9b823695)`(ERHAPI_InventoryPlatform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ae8ddd887306ad2d42b217915938245d1)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1aa37f2a909b1cb6101f62ad9f65aca5e5)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a520533d06c3aa7310ffdc367e3c0b662)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a574f373542f1e5286cb017ecf27cc3ab)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline FORCEINLINE void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySessionCreateResponse_1a4427880a8da9766b704c5284336eae46)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySessionCreateResponse_1ac9a986f2ceaf4b72ad7b42214450b07c)`() const` | Checks whether SessionPlatform_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1ae92b15e5ab5da11efa1640855f976da8)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1ae41f111736de7b8377310052ab35ac7d)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1abfb21a3ad8bcd310975c9464694c17e0)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1af894ae66526c4d80c6bc179039156d20)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1aaa07a49cdd37a1e51904a14ac6a125e0)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1a06e22da31d484d9f72fb7aca65cbcd2b)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a6d09e01ba670612f732a4da91360b198)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a686c19b6fa141b7027a76f60b3ecdfb9)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__InventorySessionCreateResponse_1abdc9ab4902592bc8357b87bef528b279)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__InventorySessionCreateResponse_1a23d9dde096da4e48d6dedc4043ca3735)`() const` | Checks whether OrderId_Optional is set to null.

### Members

#### `public FString `[`SessionId`](#structFRHAPI__InventorySessionCreateResponse_1a160a748950f52bf2d4dc9c750835512d) <a id="structFRHAPI__InventorySessionCreateResponse_1a160a748950f52bf2d4dc9c750835512d"></a>

The ID of the session.

#### `public ERHAPI_InventoryPlatform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateResponse_1a2dff6b48a64991dd35404ac40a4b7fd2) <a id="structFRHAPI__InventorySessionCreateResponse_1a2dff6b48a64991dd35404ac40a4b7fd2"></a>

#### `public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f) <a id="structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f"></a>

true if SessionPlatform_Optional has been set to a value

#### `public bool `[`SessionPlatform_IsNull`](#structFRHAPI__InventorySessionCreateResponse_1ada5398c9d0be39dfed005dfa727bdc70) <a id="structFRHAPI__InventorySessionCreateResponse_1ada5398c9d0be39dfed005dfa727bdc70"></a>

true if SessionPlatform_Optional has been explicitly set to null

#### `public FString `[`OrderId_Optional`](#structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81) <a id="structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81"></a>

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88) <a id="structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88"></a>

true if OrderId_Optional has been set to a value

#### `public bool `[`OrderId_IsNull`](#structFRHAPI__InventorySessionCreateResponse_1a6b8106a657654d9c6a79f120cfbe5cd4) <a id="structFRHAPI__InventorySessionCreateResponse_1a6b8106a657654d9c6a79f120cfbe5cd4"></a>

true if OrderId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventorySessionCreateResponse_1a24c463406ed41d4b1e97ba729e14d788)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a24c463406ed41d4b1e97ba729e14d788"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateResponse_1a9e330c67bbbec7c74a3de009b487f3ed)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventorySessionCreateResponse_1a9e330c67bbbec7c74a3de009b487f3ed"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a7ef63186c0da26bf92f071d6a11fbe82)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a7ef63186c0da26bf92f071d6a11fbe82"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1aff4b429141abdb2cb89f75e500100d8a)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1aff4b429141abdb2cb89f75e500100d8a"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1aa8797342cad8b503c4f1dfbeb1c769a5)`(const FString & NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1aa8797342cad8b503c4f1dfbeb1c769a5"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1ad65e56f1182d7697252976fcbbce0d9c)`(FString && NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1ad65e56f1182d7697252976fcbbce0d9c"></a>

Sets the value of SessionId using move semantics.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1aabd221b78d6496bbe54e420ffd7f93d0)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1aabd221b78d6496bbe54e420ffd7f93d0"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1aa81c385d3ae14f6b696928cef9435765)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1aa81c385d3ae14f6b696928cef9435765"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1aebf6251f3fd880cb83fa0cc991529934)`(const ERHAPI_InventoryPlatform & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1aebf6251f3fd880cb83fa0cc991529934"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1abb40fd7eb2d85f1a7253ce9b9b823695)`(ERHAPI_InventoryPlatform & OutValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1abb40fd7eb2d85f1a7253ce9b9b823695"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ae8ddd887306ad2d42b217915938245d1)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1ae8ddd887306ad2d42b217915938245d1"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1aa37f2a909b1cb6101f62ad9f65aca5e5)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1aa37f2a909b1cb6101f62ad9f65aca5e5"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a520533d06c3aa7310ffdc367e3c0b662)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a520533d06c3aa7310ffdc367e3c0b662"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a574f373542f1e5286cb017ecf27cc3ab)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a574f373542f1e5286cb017ecf27cc3ab"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySessionCreateResponse_1a4427880a8da9766b704c5284336eae46)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a4427880a8da9766b704c5284336eae46"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySessionCreateResponse_1ac9a986f2ceaf4b72ad7b42214450b07c)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1ac9a986f2ceaf4b72ad7b42214450b07c"></a>

Checks whether SessionPlatform_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1ae92b15e5ab5da11efa1640855f976da8)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1ae92b15e5ab5da11efa1640855f976da8"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1ae41f111736de7b8377310052ab35ac7d)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1ae41f111736de7b8377310052ab35ac7d"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1abfb21a3ad8bcd310975c9464694c17e0)`(const FString & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1abfb21a3ad8bcd310975c9464694c17e0"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1af894ae66526c4d80c6bc179039156d20)`(FString & OutValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1af894ae66526c4d80c6bc179039156d20"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1aaa07a49cdd37a1e51904a14ac6a125e0)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1aaa07a49cdd37a1e51904a14ac6a125e0"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1a06e22da31d484d9f72fb7aca65cbcd2b)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1a06e22da31d484d9f72fb7aca65cbcd2b"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a6d09e01ba670612f732a4da91360b198)`(const FString & NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a6d09e01ba670612f732a4da91360b198"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a686c19b6fa141b7027a76f60b3ecdfb9)`(FString && NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a686c19b6fa141b7027a76f60b3ecdfb9"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__InventorySessionCreateResponse_1abdc9ab4902592bc8357b87bef528b279)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1abdc9ab4902592bc8357b87bef528b279"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__InventorySessionCreateResponse_1a23d9dde096da4e48d6dedc4043ca3735)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1a23d9dde096da4e48d6dedc4043ca3735"></a>

Checks whether OrderId_Optional is set to null.

