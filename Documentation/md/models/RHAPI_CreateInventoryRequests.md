# RHAPI_CreateInventoryRequests <a id="group__RHAPI__CreateInventoryRequests"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreateInventoryRequests`](#structFRHAPI__CreateInventoryRequests) | Collection of Create Inventory Requests. This will create new Inventory for each request. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

## struct `FRHAPI_CreateInventoryRequests` <a id="structFRHAPI__CreateInventoryRequests"></a>

```
struct FRHAPI_CreateInventoryRequests
  : public FRHAPI_Model
```

Collection of Create Inventory Requests. This will create new Inventory for each request. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738) | Source of this Inventory Operation.
`public bool `[`Source_IsSet`](#structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da) | Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562) | true if ClientOrderRefId_Optional has been set to a value
`public TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > `[`Inventory`](#structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a) | 
`public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequests_1ac2b8055447714c8995c1559a981b65f5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequests_1afa6301fedd555ab58c415e584e9098ac)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a9e43c93b0a9a5c7af37a7d9cf3ae97fc)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a9f9ff36141cdb47965679de1fbcb83a1)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1aefae853960da20680ba75f5a65683ddc)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a1a99930daf928829ebb924a5a740f540)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1abd0c538423d0ec9ec2c899f9631455ca)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1a62033c4a6e9c0ad4881120b246031b3b)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1adbf3bf91c9312625188443c623b57096)`(ERHAPI_Source NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`ClearSource`](#structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a565a833705289f5c07105b05943cc039)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a0698edcf7fbb16caf071a17880b7e28a)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1acdfc93d4f3cbaab4f34422a5b43fbe4b)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ab9f6db390a15c3fa4ac4ff104db322d8)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a3fa2f0c4554d53851b954d409a4bc214)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1ab0f6306bd9ef3d60caf067e4a11fbc4e)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a3bc963edff75d6cdc2b9f52f8b4c573c)`(FGuid NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1ab87530ee191fc29901fa0476956ac096)`()` | Gets the value of Inventory.
`public inline const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1a3e03c3090869f269a876a2aebc5ecae9)`() const` | Gets the value of Inventory.
`public inline void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1ae6e1d27accc25ddc56041bf6ac6af78a)`(TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > NewValue)` | Sets the value of Inventory.

#### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738) <a id="structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738"></a>

Source of this Inventory Operation.

#### `public bool `[`Source_IsSet`](#structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb) <a id="structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da) <a id="structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da"></a>

Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562) <a id="structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > `[`Inventory`](#structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a) <a id="structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequests_1ac2b8055447714c8995c1559a981b65f5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateInventoryRequests_1ac2b8055447714c8995c1559a981b65f5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequests_1afa6301fedd555ab58c415e584e9098ac)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CreateInventoryRequests_1afa6301fedd555ab58c415e584e9098ac"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a9e43c93b0a9a5c7af37a7d9cf3ae97fc)`()` <a id="structFRHAPI__CreateInventoryRequests_1a9e43c93b0a9a5c7af37a7d9cf3ae97fc"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a9f9ff36141cdb47965679de1fbcb83a1)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a9f9ff36141cdb47965679de1fbcb83a1"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1aefae853960da20680ba75f5a65683ddc)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequests_1aefae853960da20680ba75f5a65683ddc"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a1a99930daf928829ebb924a5a740f540)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__CreateInventoryRequests_1a1a99930daf928829ebb924a5a740f540"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1abd0c538423d0ec9ec2c899f9631455ca)`()` <a id="structFRHAPI__CreateInventoryRequests_1abd0c538423d0ec9ec2c899f9631455ca"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1a62033c4a6e9c0ad4881120b246031b3b)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a62033c4a6e9c0ad4881120b246031b3b"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1adbf3bf91c9312625188443c623b57096)`(ERHAPI_Source NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1adbf3bf91c9312625188443c623b57096"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`ClearSource`](#structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348)`()` <a id="structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a565a833705289f5c07105b05943cc039)`()` <a id="structFRHAPI__CreateInventoryRequests_1a565a833705289f5c07105b05943cc039"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a0698edcf7fbb16caf071a17880b7e28a)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a0698edcf7fbb16caf071a17880b7e28a"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1acdfc93d4f3cbaab4f34422a5b43fbe4b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequests_1acdfc93d4f3cbaab4f34422a5b43fbe4b"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ab9f6db390a15c3fa4ac4ff104db322d8)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateInventoryRequests_1ab9f6db390a15c3fa4ac4ff104db322d8"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a3fa2f0c4554d53851b954d409a4bc214)`()` <a id="structFRHAPI__CreateInventoryRequests_1a3fa2f0c4554d53851b954d409a4bc214"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1ab0f6306bd9ef3d60caf067e4a11fbc4e)`() const` <a id="structFRHAPI__CreateInventoryRequests_1ab0f6306bd9ef3d60caf067e4a11fbc4e"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a3bc963edff75d6cdc2b9f52f8b4c573c)`(FGuid NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a3bc963edff75d6cdc2b9f52f8b4c573c"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8)`()` <a id="structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1ab87530ee191fc29901fa0476956ac096)`()` <a id="structFRHAPI__CreateInventoryRequests_1ab87530ee191fc29901fa0476956ac096"></a>

Gets the value of Inventory.

#### `public inline const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1a3e03c3090869f269a876a2aebc5ecae9)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a3e03c3090869f269a876a2aebc5ecae9"></a>

Gets the value of Inventory.

#### `public inline void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1ae6e1d27accc25ddc56041bf6ac6af78a)`(TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1ae6e1d27accc25ddc56041bf6ac6af78a"></a>

Sets the value of Inventory.

