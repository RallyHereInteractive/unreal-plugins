# RHAPI_InventorySessionCreateResponse <a id="group__RHAPI__InventorySessionCreateResponse"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__InventorySessionCreateResponse_1a160a748950f52bf2d4dc9c750835512d) | The ID of the session.
`public ERHAPI_Platform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateResponse_1aa63d532932e9ebeb99693a254e3b7df8) | The platform for the session.
`public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f) | true if SessionPlatform_Optional has been set to a value
`public FString `[`OrderId_Optional`](#structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81) | The ID of the Order generated for any Loot given during the creation of the Inventory Session.
`public bool `[`OrderId_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88) | true if OrderId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventorySessionCreateResponse_1ae9b690d82bf214d168849030a14cf65f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateResponse_1a37c0a3f8b429ba26ed669bf454d5db21)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a77aeee0f1ae5d7a103ff24d386ddcd55)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a19c5a7257ae09c490d41069927aa775b)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1ad127ab1a1011409893174b01bd35f7bd)`(FString NewValue)` | Sets the value of SessionId.
`public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a5226a12debf31b45d28c1033e0b07998)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1aca6a03ec7c6589f23faf1cc057dcd7df)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1ab821fb4c83b83379d4a462dea52cf1f6)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1af403bd2cd9c17cdc9def44c86659f303)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ac67c0633fb26b54fa149ba3135af76d2)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1a0cc15c28d9cc40bb19a4643c92c59b2d)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a2e6226bab06355a442af999620c6d1b7)`(ERHAPI_Platform NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a5908f55863626ef4fcfd5306f593ec1f)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1ae428b644cc5cb9674d1396df83521554)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a20c290568e3235d485fff45c02995eb5)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a55ceafca80b79d5330080d2371f81fe9)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ab366e349e214ee9dc8791d54f59f410b)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ac5166ea93efc6870f0dc5ef740ced2c4)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a379ae7d16cc532c43049ef0fb2f1f307)`(FString NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`ClearOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### Members

#### `public FString `[`SessionId`](#structFRHAPI__InventorySessionCreateResponse_1a160a748950f52bf2d4dc9c750835512d) <a id="structFRHAPI__InventorySessionCreateResponse_1a160a748950f52bf2d4dc9c750835512d"></a>

The ID of the session.

#### `public ERHAPI_Platform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateResponse_1aa63d532932e9ebeb99693a254e3b7df8) <a id="structFRHAPI__InventorySessionCreateResponse_1aa63d532932e9ebeb99693a254e3b7df8"></a>

The platform for the session.

#### `public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f) <a id="structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f"></a>

true if SessionPlatform_Optional has been set to a value

#### `public FString `[`OrderId_Optional`](#structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81) <a id="structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81"></a>

The ID of the Order generated for any Loot given during the creation of the Inventory Session.

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88) <a id="structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88"></a>

true if OrderId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventorySessionCreateResponse_1ae9b690d82bf214d168849030a14cf65f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1ae9b690d82bf214d168849030a14cf65f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateResponse_1a37c0a3f8b429ba26ed669bf454d5db21)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventorySessionCreateResponse_1a37c0a3f8b429ba26ed669bf454d5db21"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a77aeee0f1ae5d7a103ff24d386ddcd55)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a77aeee0f1ae5d7a103ff24d386ddcd55"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a19c5a7257ae09c490d41069927aa775b)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1a19c5a7257ae09c490d41069927aa775b"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1ad127ab1a1011409893174b01bd35f7bd)`(FString NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1ad127ab1a1011409893174b01bd35f7bd"></a>

Sets the value of SessionId.

#### `public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a5226a12debf31b45d28c1033e0b07998)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a5226a12debf31b45d28c1033e0b07998"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1aca6a03ec7c6589f23faf1cc057dcd7df)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1aca6a03ec7c6589f23faf1cc057dcd7df"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1ab821fb4c83b83379d4a462dea52cf1f6)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1ab821fb4c83b83379d4a462dea52cf1f6"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1af403bd2cd9c17cdc9def44c86659f303)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1af403bd2cd9c17cdc9def44c86659f303"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ac67c0633fb26b54fa149ba3135af76d2)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1ac67c0633fb26b54fa149ba3135af76d2"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1a0cc15c28d9cc40bb19a4643c92c59b2d)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1a0cc15c28d9cc40bb19a4643c92c59b2d"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a2e6226bab06355a442af999620c6d1b7)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a2e6226bab06355a442af999620c6d1b7"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a5908f55863626ef4fcfd5306f593ec1f)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a5908f55863626ef4fcfd5306f593ec1f"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1ae428b644cc5cb9674d1396df83521554)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1ae428b644cc5cb9674d1396df83521554"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a20c290568e3235d485fff45c02995eb5)`(const FString & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1a20c290568e3235d485fff45c02995eb5"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a55ceafca80b79d5330080d2371f81fe9)`(FString & OutValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1a55ceafca80b79d5330080d2371f81fe9"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ab366e349e214ee9dc8791d54f59f410b)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1ab366e349e214ee9dc8791d54f59f410b"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ac5166ea93efc6870f0dc5ef740ced2c4)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1ac5166ea93efc6870f0dc5ef740ced2c4"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a379ae7d16cc532c43049ef0fb2f1f307)`(FString NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a379ae7d16cc532c43049ef0fb2f1f307"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

