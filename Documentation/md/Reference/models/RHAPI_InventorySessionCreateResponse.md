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
`public ERHAPI_Platform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySessionCreateResponse_1aa63d532932e9ebeb99693a254e3b7df8) | The platform for the session.
`public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1ae496f3fc0e9dacad0167098af825417f) | true if SessionPlatform_Optional has been set to a value
`public FString `[`OrderId_Optional`](#structFRHAPI__InventorySessionCreateResponse_1a7e3679e3a4e2ebec87d611b697f81b81) | The ID of the Order generated for any Loot given during the creation of the Inventory Session.
`public bool `[`OrderId_IsSet`](#structFRHAPI__InventorySessionCreateResponse_1a3925816cbf9fda72b6893fb3380a3f88) | true if OrderId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventorySessionCreateResponse_1a24c463406ed41d4b1e97ba729e14d788)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventorySessionCreateResponse_1a9e330c67bbbec7c74a3de009b487f3ed)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a49c3a2dae77a03eb057d91e43ad72f84)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1acb35b360d321ea2d8881f74da4ee3971)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1acfb8332ea9950663a8446e9faed936a7)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a5496c41ee89ee4f0db3e52c7a95ae4f6)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a2b5bc9e4d362ccd440b84c76886c97a0)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a3c37d238673a03ef95bf58265d6224c4)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a5b82e9b7043b061a0c9edd9a6351f615)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1af403bd2cd9c17cdc9def44c86659f303)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1aa32fb716abcbef14fd39cab9ae8e6d5b)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1af099df5cabd85104d02793699193cff2)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1ae0d730f76b1427ff006277173b7141e7)`(const ERHAPI_Platform & NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1afe5cdccfc999eb6b3d37c7ba1cc70d74)`(ERHAPI_Platform && NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySessionCreateResponse_1a63af6ded70a0355b28416b1e1ac9a241)`() const` | Checks whether SessionPlatform_Optional has been set.
`public inline FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a3e48f944c2587b8f1ae025f5cd4e8f3c)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1aedc7743f7d4a3d585dad50ca1426f68b)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a4582f050a22a8bbd5b388d1b72344a2e)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a55ceafca80b79d5330080d2371f81fe9)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ab8f4478cc3f28c35e12abe4fc6d4d454)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1a01445f7b5441d932745145f78f7f789e)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a05aa80d05259c503e1a87ae1ff5f0d15)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a2c4be0f3e86c23fa07ec9dc29254ec3e)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline bool `[`IsOrderIdSet`](#structFRHAPI__InventorySessionCreateResponse_1a3820310ce7a086fb45fab4638b0322d8)`() const` | Checks whether OrderId_Optional has been set.

### Members

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

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a49c3a2dae77a03eb057d91e43ad72f84)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a49c3a2dae77a03eb057d91e43ad72f84"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1acb35b360d321ea2d8881f74da4ee3971)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1acb35b360d321ea2d8881f74da4ee3971"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1acfb8332ea9950663a8446e9faed936a7)`(const FString & NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1acfb8332ea9950663a8446e9faed936a7"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__InventorySessionCreateResponse_1a5496c41ee89ee4f0db3e52c7a95ae4f6)`(FString && NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a5496c41ee89ee4f0db3e52c7a95ae4f6"></a>

Sets the value of SessionId using move semantics.

#### `public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a2b5bc9e4d362ccd440b84c76886c97a0)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a2b5bc9e4d362ccd440b84c76886c97a0"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a3c37d238673a03ef95bf58265d6224c4)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1a3c37d238673a03ef95bf58265d6224c4"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1a5b82e9b7043b061a0c9edd9a6351f615)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1a5b82e9b7043b061a0c9edd9a6351f615"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1af403bd2cd9c17cdc9def44c86659f303)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1af403bd2cd9c17cdc9def44c86659f303"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1aa32fb716abcbef14fd39cab9ae8e6d5b)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1aa32fb716abcbef14fd39cab9ae8e6d5b"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySessionCreateResponse_1af099df5cabd85104d02793699193cff2)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1af099df5cabd85104d02793699193cff2"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1ae0d730f76b1427ff006277173b7141e7)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1ae0d730f76b1427ff006277173b7141e7"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1afe5cdccfc999eb6b3d37c7ba1cc70d74)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1afe5cdccfc999eb6b3d37c7ba1cc70d74"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1adbc958d59e8c8c174c36ed12ce9fd852"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySessionCreateResponse_1a63af6ded70a0355b28416b1e1ac9a241)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1a63af6ded70a0355b28416b1e1ac9a241"></a>

Checks whether SessionPlatform_Optional has been set.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a3e48f944c2587b8f1ae025f5cd4e8f3c)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a3e48f944c2587b8f1ae025f5cd4e8f3c"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1aedc7743f7d4a3d585dad50ca1426f68b)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1aedc7743f7d4a3d585dad50ca1426f68b"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a4582f050a22a8bbd5b388d1b72344a2e)`(const FString & DefaultValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1a4582f050a22a8bbd5b388d1b72344a2e"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a55ceafca80b79d5330080d2371f81fe9)`(FString & OutValue) const` <a id="structFRHAPI__InventorySessionCreateResponse_1a55ceafca80b79d5330080d2371f81fe9"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1ab8f4478cc3f28c35e12abe4fc6d4d454)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1ab8f4478cc3f28c35e12abe4fc6d4d454"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__InventorySessionCreateResponse_1a01445f7b5441d932745145f78f7f789e)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1a01445f7b5441d932745145f78f7f789e"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a05aa80d05259c503e1a87ae1ff5f0d15)`(const FString & NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a05aa80d05259c503e1a87ae1ff5f0d15"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a2c4be0f3e86c23fa07ec9dc29254ec3e)`(FString && NewValue)` <a id="structFRHAPI__InventorySessionCreateResponse_1a2c4be0f3e86c23fa07ec9dc29254ec3e"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910)`()` <a id="structFRHAPI__InventorySessionCreateResponse_1a4153c08a7d83d6edff4c3368e7685910"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline bool `[`IsOrderIdSet`](#structFRHAPI__InventorySessionCreateResponse_1a3820310ce7a086fb45fab4638b0322d8)`() const` <a id="structFRHAPI__InventorySessionCreateResponse_1a3820310ce7a086fb45fab4638b0322d8"></a>

Checks whether OrderId_Optional has been set.

