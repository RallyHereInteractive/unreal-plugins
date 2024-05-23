# group `RHAPI_PlayerOrderDetail` <a id="group__RHAPI__PlayerOrderDetail"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderDetail_1a4ba5c63e5403eb6ddd51041593318f46)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderDetail_1a68f1fb71c6510a14fb0c6fb09668bd90)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a09de077b2f6fe4d527abce325cb1dec1)`()` | Gets the value of Type.
`public inline const ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a9646c80d2cdf34ad649d00d6dd5fbba1)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1aad51114e60b095d81a47c7566b00d4b8)`(const ERHAPI_PlayerOrderDetailType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1a6c8ced095a4d4f6fad09476b31957cde)`(ERHAPI_PlayerOrderDetailType && NewValue)` | Sets the value of Type using move semantics.
`public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1aafdff43dd3c9cddaebbf007389da0652)`()` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1aad3c84358a2ab11834e393ea4e94572d)`() const` | Gets the value of LootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a59828efc74f9947124a58f4e4caac914)`(const int32 & DefaultValue) const` | Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a6438d6ed4bae0ce984d184d097c3ca25)`(int32 & OutValue) const` | Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1aadd5bd1461c82ec3c6a96acab2ec4944)`()` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1aca3b15e3efbbae144c58d907ac90a540)`() const` | Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a46c5107743267d79ede185d085bd67cc)`(const int32 & NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true.
`public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a8fb4eb87fb7a8dcd84b33d8ab743b519)`(int32 && NewValue)` | Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.
`public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7)`()` | Clears the value of LootId_Optional and sets LootId_IsSet to false.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderDetail_1ad5478466d9bf3662dbccfb7684288409)`() const` | Returns true if LootId_Optional is set and matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderDetail_1a08f997151224d7cd1ba80989513b0d6e)`()` | Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.
`public inline `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a90dc58840bc985ff425e780abbc5b06b)`()` | Gets the value of InvChange_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ad7dbac2e3bc53ffae3289bae48b5275e)`() const` | Gets the value of InvChange_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a60e932caf031f1362fac1275708d3662)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & DefaultValue) const` | Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ab2b39f44490c994613e44bf0f434bc9f)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & OutValue) const` | Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1abc8734cb6ba19f93a3c72b2d6be96eb9)`()` | Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1a1b1c882d5062edb870216cd15a268a33)`() const` | Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a6ca7c8f5f96d12ca68d556b41a2a712e)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & NewValue)` | Sets the value of InvChange_Optional and also sets InvChange_IsSet to true.
`public inline void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a64b9bd3fdae8560389a4c8337a45a3fd)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` && NewValue)` | Sets the value of InvChange_Optional and also sets InvChange_IsSet to true using move semantics.
`public inline void `[`ClearInvChange`](#structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d)`()` | Clears the value of InvChange_Optional and sets InvChange_IsSet to false.
`public inline `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a70b42b24e651a36375ed51a61a2ecc99)`()` | Gets the value of Order_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a60fd2aa1695a2914bc45156aaafa4636)`() const` | Gets the value of Order_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a3ca03ffed0676543f3221612b8294aa0)`(const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & DefaultValue) const` | Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a2b41e4918b980af7c8b6f0b88b07281c)`(`[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & OutValue) const` | Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1aba0410c19deaa4906cfb062ceb1e2980)`()` | Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1af76bb5ebba4ba5a41c9ff602c524e882)`() const` | Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1a5dcc39a55b7cad2ca1a91b66ad070d0e)`(const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & NewValue)` | Sets the value of Order_Optional and also sets Order_IsSet to true.
`public inline void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1a577fa3435b8c5cd40a9ab0a30042ed7e)`(`[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` && NewValue)` | Sets the value of Order_Optional and also sets Order_IsSet to true using move semantics.
`public inline void `[`ClearOrder`](#structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67)`()` | Clears the value of Order_Optional and sets Order_IsSet to false.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderDetail_1a4ba5c63e5403eb6ddd51041593318f46)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderDetail_1a4ba5c63e5403eb6ddd51041593318f46"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderDetail_1a68f1fb71c6510a14fb0c6fb09668bd90)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerOrderDetail_1a68f1fb71c6510a14fb0c6fb09668bd90"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a09de077b2f6fe4d527abce325cb1dec1)`()` <a id="structFRHAPI__PlayerOrderDetail_1a09de077b2f6fe4d527abce325cb1dec1"></a>

Gets the value of Type.

#### `public inline const ERHAPI_PlayerOrderDetailType & `[`GetType`](#structFRHAPI__PlayerOrderDetail_1a9646c80d2cdf34ad649d00d6dd5fbba1)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a9646c80d2cdf34ad649d00d6dd5fbba1"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1aad51114e60b095d81a47c7566b00d4b8)`(const ERHAPI_PlayerOrderDetailType & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1aad51114e60b095d81a47c7566b00d4b8"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerOrderDetail_1a6c8ced095a4d4f6fad09476b31957cde)`(ERHAPI_PlayerOrderDetailType && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a6c8ced095a4d4f6fad09476b31957cde"></a>

Sets the value of Type using move semantics.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1aafdff43dd3c9cddaebbf007389da0652)`()` <a id="structFRHAPI__PlayerOrderDetail_1aafdff43dd3c9cddaebbf007389da0652"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1aad3c84358a2ab11834e393ea4e94572d)`() const` <a id="structFRHAPI__PlayerOrderDetail_1aad3c84358a2ab11834e393ea4e94572d"></a>

Gets the value of LootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a59828efc74f9947124a58f4e4caac914)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a59828efc74f9947124a58f4e4caac914"></a>

Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootId`](#structFRHAPI__PlayerOrderDetail_1a6438d6ed4bae0ce984d184d097c3ca25)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a6438d6ed4bae0ce984d184d097c3ca25"></a>

Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1aadd5bd1461c82ec3c6a96acab2ec4944)`()` <a id="structFRHAPI__PlayerOrderDetail_1aadd5bd1461c82ec3c6a96acab2ec4944"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLootIdOrNull`](#structFRHAPI__PlayerOrderDetail_1aca3b15e3efbbae144c58d907ac90a540)`() const` <a id="structFRHAPI__PlayerOrderDetail_1aca3b15e3efbbae144c58d907ac90a540"></a>

Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a46c5107743267d79ede185d085bd67cc)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a46c5107743267d79ede185d085bd67cc"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true.

#### `public inline void `[`SetLootId`](#structFRHAPI__PlayerOrderDetail_1a8fb4eb87fb7a8dcd84b33d8ab743b519)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a8fb4eb87fb7a8dcd84b33d8ab743b519"></a>

Sets the value of LootId_Optional and also sets LootId_IsSet to true using move semantics.

#### `public inline void `[`ClearLootId`](#structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7)`()` <a id="structFRHAPI__PlayerOrderDetail_1a0b1f1836912a9cfdddb8bf0f573445b7"></a>

Clears the value of LootId_Optional and sets LootId_IsSet to false.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__PlayerOrderDetail_1ad5478466d9bf3662dbccfb7684288409)`() const` <a id="structFRHAPI__PlayerOrderDetail_1ad5478466d9bf3662dbccfb7684288409"></a>

Returns true if LootId_Optional is set and matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__PlayerOrderDetail_1a08f997151224d7cd1ba80989513b0d6e)`()` <a id="structFRHAPI__PlayerOrderDetail_1a08f997151224d7cd1ba80989513b0d6e"></a>

Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true.

#### `public inline `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a90dc58840bc985ff425e780abbc5b06b)`()` <a id="structFRHAPI__PlayerOrderDetail_1a90dc58840bc985ff425e780abbc5b06b"></a>

Gets the value of InvChange_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ad7dbac2e3bc53ffae3289bae48b5275e)`() const` <a id="structFRHAPI__PlayerOrderDetail_1ad7dbac2e3bc53ffae3289bae48b5275e"></a>

Gets the value of InvChange_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1a60e932caf031f1362fac1275708d3662)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a60e932caf031f1362fac1275708d3662"></a>

Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvChange`](#structFRHAPI__PlayerOrderDetail_1ab2b39f44490c994613e44bf0f434bc9f)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1ab2b39f44490c994613e44bf0f434bc9f"></a>

Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1abc8734cb6ba19f93a3c72b2d6be96eb9)`()` <a id="structFRHAPI__PlayerOrderDetail_1abc8734cb6ba19f93a3c72b2d6be96eb9"></a>

Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` * `[`GetInvChangeOrNull`](#structFRHAPI__PlayerOrderDetail_1a1b1c882d5062edb870216cd15a268a33)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a1b1c882d5062edb870216cd15a268a33"></a>

Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a6ca7c8f5f96d12ca68d556b41a2a712e)`(const `[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a6ca7c8f5f96d12ca68d556b41a2a712e"></a>

Sets the value of InvChange_Optional and also sets InvChange_IsSet to true.

#### `public inline void `[`SetInvChange`](#structFRHAPI__PlayerOrderDetail_1a64b9bd3fdae8560389a4c8337a45a3fd)`(`[`FRHAPI_PlayerInventoryChange`](RHAPI_PlayerInventoryChange.md#structFRHAPI__PlayerInventoryChange)` && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a64b9bd3fdae8560389a4c8337a45a3fd"></a>

Sets the value of InvChange_Optional and also sets InvChange_IsSet to true using move semantics.

#### `public inline void `[`ClearInvChange`](#structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d)`()` <a id="structFRHAPI__PlayerOrderDetail_1ad90a321e6010de2f8a6bc38bd8b9bf7d"></a>

Clears the value of InvChange_Optional and sets InvChange_IsSet to false.

#### `public inline `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a70b42b24e651a36375ed51a61a2ecc99)`()` <a id="structFRHAPI__PlayerOrderDetail_1a70b42b24e651a36375ed51a61a2ecc99"></a>

Gets the value of Order_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a60fd2aa1695a2914bc45156aaafa4636)`() const` <a id="structFRHAPI__PlayerOrderDetail_1a60fd2aa1695a2914bc45156aaafa4636"></a>

Gets the value of Order_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a3ca03ffed0676543f3221612b8294aa0)`(const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & DefaultValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a3ca03ffed0676543f3221612b8294aa0"></a>

Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrder`](#structFRHAPI__PlayerOrderDetail_1a2b41e4918b980af7c8b6f0b88b07281c)`(`[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & OutValue) const` <a id="structFRHAPI__PlayerOrderDetail_1a2b41e4918b980af7c8b6f0b88b07281c"></a>

Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1aba0410c19deaa4906cfb062ceb1e2980)`()` <a id="structFRHAPI__PlayerOrderDetail_1aba0410c19deaa4906cfb062ceb1e2980"></a>

Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` * `[`GetOrderOrNull`](#structFRHAPI__PlayerOrderDetail_1af76bb5ebba4ba5a41c9ff602c524e882)`() const` <a id="structFRHAPI__PlayerOrderDetail_1af76bb5ebba4ba5a41c9ff602c524e882"></a>

Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1a5dcc39a55b7cad2ca1a91b66ad070d0e)`(const `[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` & NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a5dcc39a55b7cad2ca1a91b66ad070d0e"></a>

Sets the value of Order_Optional and also sets Order_IsSet to true.

#### `public inline void `[`SetOrder`](#structFRHAPI__PlayerOrderDetail_1a577fa3435b8c5cd40a9ab0a30042ed7e)`(`[`FRHAPI_PlayerOrderCreate`](RHAPI_PlayerOrderCreate.md#structFRHAPI__PlayerOrderCreate)` && NewValue)` <a id="structFRHAPI__PlayerOrderDetail_1a577fa3435b8c5cd40a9ab0a30042ed7e"></a>

Sets the value of Order_Optional and also sets Order_IsSet to true using move semantics.

#### `public inline void `[`ClearOrder`](#structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67)`()` <a id="structFRHAPI__PlayerOrderDetail_1a996f6d1b2cebd9f8e5569afe2f5c9e67"></a>

Clears the value of Order_Optional and sets Order_IsSet to false.

