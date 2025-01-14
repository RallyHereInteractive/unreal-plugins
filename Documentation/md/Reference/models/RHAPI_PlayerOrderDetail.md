---
title: RHAPI_PlayerOrderDetail
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderDetail`](#structFRHAPI__PlayerOrderDetail) | Represents details of what occurred in a Player Order Entry.

## struct `FRHAPI_PlayerOrderDetail` <a id="structFRHAPI__PlayerOrderDetail"></a>

```
struct FRHAPI_PlayerOrderDetail
  : public FRHAPI_Model
```

Represents details of what occurred in a Player Order Entry.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlayerOrderDetailType `[`Type`](#structFRHAPI__PlayerOrderDetail_1a1451f9109957c478a472efc3dbbcb5c5) | The type of detail.
`public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderDetail_1a08c4cad481c284ba8aaf53718a7bbd4f) | The Loot ID.
`public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderDetail_1ad476e78823720ee827aa399cf36f1118) | true if LootId_Optional has been set to a value
`public `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` `[`InvChange_Optional`](#structFRHAPI__PlayerOrderDetail_1ad0e610fd1bd4d81f74499cccfe7b1a4d) | The Inventory change that occurred as part of this detail.
`public bool `[`InvChange_IsSet`](#structFRHAPI__PlayerOrderDetail_1aa8dc87095dfe419acb5acf090308c998) | true if InvChange_Optional has been set to a value
`public `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` `[`Order_Optional`](#structFRHAPI__PlayerOrderDetail_1a68f838a280f08b03b0bf5964b28098cc) | Reference to the Player Order that this detail belongs to.
`public bool `[`Order_IsSet`](#structFRHAPI__PlayerOrderDetail_1a3921beba6e9b7a0608bc782c7c05aa22) | true if Order_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderDetail_1a9bf006065aa4be046d4efe6014056774)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderDetail_1a304d2a9a62a4f2c26e9da14f3d803432)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a150836d55a06dd1f095d9f298b2abffe)`()` | Gets the value of Type.
`public inline const ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1ae5a9d86d147c46c50234f6dadaaac4ec)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1aad51114e60b095d81a47c7566b00d4b8)`(const ERHAPI_PlayerOrderDetailType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1a6c8ced095a4d4f6fad09476b31957cde)`(ERHAPI_PlayerOrderDetailType && NewValue)` | Sets the value of Type using move semantics.
`public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a8b6cacade3bdbfa5427b0b7fdc176a4c)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a4a1075dced789a5d879fc28cfd729360)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a037c21d020229f7fbdc5ae52b27fb323)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a6438d6ed4bae0ce984d184d097c3ca25)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1a8548440599a80bfb42fd7060e6b1fc63)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1afe268d5f61ffa6e1e1cf22e1d9209ccb)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a46c5107743267d79ede185d085bd67cc)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a8fb4eb87fb7a8dcd84b33d8ab743b519)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderDetail_1abae5f2cadfbafe4dfeabced5e44feb93)`() const` | Checks whether LootId_Optional has been set.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderDetail_1ad5478466d9bf3662dbccfb7684288409)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderDetail_1a08f997151224d7cd1ba80989513b0d6e)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1aa52c4822f662e77e3c52f983da7c6da5)`()` | Gets the value of InvChange_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ade04351f1ec0c07172578c85f2832735)`() const` | Gets the value of InvChange_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a3886f6f4478648b0c94ba132442e3247)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & DefaultValue) const` | Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ab2b39f44490c994613e44bf0f434bc9f)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & OutValue) const` | Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1a631be15230557f0a8b5f1ba2eb6a9dbc)`()` | Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1a771bb18e1af5aa9404fdb3baf272e1ac)`() const` | Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a6ca7c8f5f96d12ca68d556b41a2a712e)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & NewValue)` | Sets the value of InvChange_Optional and also sets InvChange_IsSet to true.
`public inline void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a64b9bd3fdae8560389a4c8337a45a3fd)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` && NewValue)` | Sets the value of InvChange_Optional and also sets InvChange_IsSet to true using move semantics.
`public inline void `[`ClearInvChange`](#structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d)`()` | Clears the value of InvChange_Optional and sets InvChange_IsSet to false.
`public inline bool `[`IsInvChangeSet`](#structFRHAPI__PlayerOrderDetail_1aa2284d50b6ed46ed376ff95fc409d404)`() const` | Checks whether InvChange_Optional has been set.
`public inline `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a5a9eb26f04b57f1e844b37f83707cade)`()` | Gets the value of Order_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a39e232b5e3228aa61536d725dcf1b7cf)`() const` | Gets the value of Order_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1affd3b64cc17091fa848599f3b9b94909)`(const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & DefaultValue) const` | Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a2b41e4918b980af7c8b6f0b88b07281c)`(`[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & OutValue) const` | Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1a099ee97780715ed89edc35b26437dd1e)`()` | Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1add2bb83f31780f5b307814d6612c441f)`() const` | Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1a5dcc39a55b7cad2ca1a91b66ad070d0e)`(const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & NewValue)` | Sets the value of Order_Optional and also sets Order_IsSet to true.
`public inline void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1a577fa3435b8c5cd40a9ab0a30042ed7e)`(`[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` && NewValue)` | Sets the value of Order_Optional and also sets Order_IsSet to true using move semantics.
`public inline void `[`ClearOrder`](#structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67)`()` | Clears the value of Order_Optional and sets Order_IsSet to false.
`public inline bool `[`IsOrderSet`](#structFRHAPI__PlayerOrderDetail_1a3fa920ee3d1d452ac8884177e312163b)`() const` | Checks whether Order_Optional has been set.

### Members

#### `public ERHAPI_PlayerOrderDetailType `[`Type`](#structFRHAPI__PlayerOrderDetail_1a1451f9109957c478a472efc3dbbcb5c5) <a id="structFRHAPI__PlayerOrderDetail_1a1451f9109957c478a472efc3dbbcb5c5"></a>

The type of detail.

#### `public int32 `[`LootId_Optional`](#structFRHAPI__PlayerOrderDetail_1a08c4cad481c284ba8aaf53718a7bbd4f) <a id="structFRHAPI__PlayerOrderDetail_1a08c4cad481c284ba8aaf53718a7bbd4f"></a>

The Loot ID.

#### `public bool `[`LootId_IsSet`](#structFRHAPI__PlayerOrderDetail_1ad476e78823720ee827aa399cf36f1118) <a id="structFRHAPI__PlayerOrderDetail_1ad476e78823720ee827aa399cf36f1118"></a>

true if LootId_Optional has been set to a value

#### `public `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` `[`InvChange_Optional`](#structFRHAPI__PlayerOrderDetail_1ad0e610fd1bd4d81f74499cccfe7b1a4d) <a id="structFRHAPI__PlayerOrderDetail_1ad0e610fd1bd4d81f74499cccfe7b1a4d"></a>

The Inventory change that occurred as part of this detail.

#### `public bool `[`InvChange_IsSet`](#structFRHAPI__PlayerOrderDetail_1aa8dc87095dfe419acb5acf090308c998) <a id="structFRHAPI__PlayerOrderDetail_1aa8dc87095dfe419acb5acf090308c998"></a>

true if InvChange_Optional has been set to a value

#### `public `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` `[`Order_Optional`](#structFRHAPI__PlayerOrderDetail_1a68f838a280f08b03b0bf5964b28098cc) <a id="structFRHAPI__PlayerOrderDetail_1a68f838a280f08b03b0bf5964b28098cc"></a>

Reference to the Player Order that this detail belongs to.

#### `public bool `[`Order_IsSet`](#structFRHAPI__PlayerOrderDetail_1a3921beba6e9b7a0608bc782c7c05aa22) <a id="structFRHAPI__PlayerOrderDetail_1a3921beba6e9b7a0608bc782c7c05aa22"></a>

true if Order_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderDetail_1a9bf006065aa4be046d4efe6014056774)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderDetail_1a9bf006065aa4be046d4efe6014056774"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderDetail_1a304d2a9a62a4f2c26e9da14f3d803432)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderDetail_1a304d2a9a62a4f2c26e9da14f3d803432"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a150836d55a06dd1f095d9f298b2abffe)`()` <a id="structFRHAPI__PlayerOrderDetail_1a150836d55a06dd1f095d9f298b2abffe"></a>

Gets the value of Type.

#### `public inline const ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1ae5a9d86d147c46c50234f6dadaaac4ec)`() const` <a id="structFRHAPI__PlayerOrderDetail_1ae5a9d86d147c46c50234f6dadaaac4ec"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1aad51114e60b095d81a47c7566b00d4b8)`(const ERHAPI_PlayerOrderDetailType & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1aad51114e60b095d81a47c7566b00d4b8"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1a6c8ced095a4d4f6fad09476b31957cde)`(ERHAPI_PlayerOrderDetailType && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a6c8ced095a4d4f6fad09476b31957cde"></a>

Sets the value of Type using move semantics.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a8b6cacade3bdbfa5427b0b7fdc176a4c)`()` <a id="structFRHAPI__PlayerOrderDetail_1a8b6cacade3bdbfa5427b0b7fdc176a4c"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a4a1075dced789a5d879fc28cfd729360)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a4a1075dced789a5d879fc28cfd729360"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a037c21d020229f7fbdc5ae52b27fb323)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a037c21d020229f7fbdc5ae52b27fb323"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a6438d6ed4bae0ce984d184d097c3ca25)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a6438d6ed4bae0ce984d184d097c3ca25"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1a8548440599a80bfb42fd7060e6b1fc63)`()` <a id="structFRHAPI__PlayerOrderDetail_1a8548440599a80bfb42fd7060e6b1fc63"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1afe268d5f61ffa6e1e1cf22e1d9209ccb)`() const` <a id="structFRHAPI__PlayerOrderDetail_1afe268d5f61ffa6e1e1cf22e1d9209ccb"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a46c5107743267d79ede185d085bd67cc)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a46c5107743267d79ede185d085bd67cc"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a8fb4eb87fb7a8dcd84b33d8ab743b519)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a8fb4eb87fb7a8dcd84b33d8ab743b519"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7)`()` <a id="structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdSet`](#structFRHAPI__PlayerOrderDetail_1abae5f2cadfbafe4dfeabced5e44feb93)`() const` <a id="structFRHAPI__PlayerOrderDetail_1abae5f2cadfbafe4dfeabced5e44feb93"></a>

Checks whether LootId_Optional has been set.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderDetail_1ad5478466d9bf3662dbccfb7684288409)`() const` <a id="structFRHAPI__PlayerOrderDetail_1ad5478466d9bf3662dbccfb7684288409"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderDetail_1a08f997151224d7cd1ba80989513b0d6e)`()` <a id="structFRHAPI__PlayerOrderDetail_1a08f997151224d7cd1ba80989513b0d6e"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1aa52c4822f662e77e3c52f983da7c6da5)`()` <a id="structFRHAPI__PlayerOrderDetail_1aa52c4822f662e77e3c52f983da7c6da5"></a>

Gets the value of InvChange_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ade04351f1ec0c07172578c85f2832735)`() const` <a id="structFRHAPI__PlayerOrderDetail_1ade04351f1ec0c07172578c85f2832735"></a>

Gets the value of InvChange_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a3886f6f4478648b0c94ba132442e3247)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a3886f6f4478648b0c94ba132442e3247"></a>

Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ab2b39f44490c994613e44bf0f434bc9f)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1ab2b39f44490c994613e44bf0f434bc9f"></a>

Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1a631be15230557f0a8b5f1ba2eb6a9dbc)`()` <a id="structFRHAPI__PlayerOrderDetail_1a631be15230557f0a8b5f1ba2eb6a9dbc"></a>

Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1a771bb18e1af5aa9404fdb3baf272e1ac)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a771bb18e1af5aa9404fdb3baf272e1ac"></a>

Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a6ca7c8f5f96d12ca68d556b41a2a712e)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a6ca7c8f5f96d12ca68d556b41a2a712e"></a>

Sets the value of InvChange_Optional and also sets InvChange_IsSet to true.

#### `public inline void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a64b9bd3fdae8560389a4c8337a45a3fd)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a64b9bd3fdae8560389a4c8337a45a3fd"></a>

Sets the value of InvChange_Optional and also sets InvChange_IsSet to true using move semantics.

#### `public inline void `[`ClearInvChange`](#structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d)`()` <a id="structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d"></a>

Clears the value of InvChange_Optional and sets InvChange_IsSet to false.

#### `public inline bool `[`IsInvChangeSet`](#structFRHAPI__PlayerOrderDetail_1aa2284d50b6ed46ed376ff95fc409d404)`() const` <a id="structFRHAPI__PlayerOrderDetail_1aa2284d50b6ed46ed376ff95fc409d404"></a>

Checks whether InvChange_Optional has been set.

#### `public inline `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a5a9eb26f04b57f1e844b37f83707cade)`()` <a id="structFRHAPI__PlayerOrderDetail_1a5a9eb26f04b57f1e844b37f83707cade"></a>

Gets the value of Order_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a39e232b5e3228aa61536d725dcf1b7cf)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a39e232b5e3228aa61536d725dcf1b7cf"></a>

Gets the value of Order_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1affd3b64cc17091fa848599f3b9b94909)`(const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1affd3b64cc17091fa848599f3b9b94909"></a>

Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a2b41e4918b980af7c8b6f0b88b07281c)`(`[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a2b41e4918b980af7c8b6f0b88b07281c"></a>

Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1a099ee97780715ed89edc35b26437dd1e)`()` <a id="structFRHAPI__PlayerOrderDetail_1a099ee97780715ed89edc35b26437dd1e"></a>

Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1add2bb83f31780f5b307814d6612c441f)`() const` <a id="structFRHAPI__PlayerOrderDetail_1add2bb83f31780f5b307814d6612c441f"></a>

Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1a5dcc39a55b7cad2ca1a91b66ad070d0e)`(const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a5dcc39a55b7cad2ca1a91b66ad070d0e"></a>

Sets the value of Order_Optional and also sets Order_IsSet to true.

#### `public inline void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1a577fa3435b8c5cd40a9ab0a30042ed7e)`(`[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a577fa3435b8c5cd40a9ab0a30042ed7e"></a>

Sets the value of Order_Optional and also sets Order_IsSet to true using move semantics.

#### `public inline void `[`ClearOrder`](#structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67)`()` <a id="structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67"></a>

Clears the value of Order_Optional and sets Order_IsSet to false.

#### `public inline bool `[`IsOrderSet`](#structFRHAPI__PlayerOrderDetail_1a3fa920ee3d1d452ac8884177e312163b)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a3fa920ee3d1d452ac8884177e312163b"></a>

Checks whether Order_Optional has been set.

