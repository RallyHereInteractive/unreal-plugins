---
title: RHAPI_CreateInventoryRequests
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738) | Source of this Inventory Operation.
`public bool `[`Source_IsSet`](#structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da) | Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562) | true if ClientOrderRefId_Optional has been set to a value
`public TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > `[`Inventory`](#structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a) | 
`public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequests_1a0df8d837ee113e5821c56ecf7a46374a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequests_1a93a5f85754d955ad4b15bcd9156cbe41)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a81ddb99d46d4b372c2f9aca85c86d066)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a9674fd52be69abc09ac7549e19fd5a51)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a168b9fd026373a64739a032f90679e69)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a1a99930daf928829ebb924a5a740f540)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1aea79f5aab95321511b16e4ee62fe3ca7)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1abb834ea0aabd2a0e5012d738d69640ab)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1a927b4ccfd780d215a6dbeecbf6197d40)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1a8d1d0836ca4df8466e8afccc54098193)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__CreateInventoryRequests_1a4f35f5e62ca9f33f7c4a5bab057ca48e)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a0bddff9e1c99b89ffb168913d514cd57)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1acafdc9b7cabffdd3bdebc36410054ffc)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a1cf6c6f33830cb5781e5d0148900a7fc)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ab9f6db390a15c3fa4ac4ff104db322d8)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a72e2b8bf631469cf5d0c34d118f23b8c)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a4331671af5dc5141f30424e687a25a5c)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ad7b137a8293edf10154ba5e8dee88117)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1abfcc2485ded03c4584f0f97e76567449)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__CreateInventoryRequests_1add1a1d74d3e2317f98ceac8d0708b0fa)`() const` | Checks whether ClientOrderRefId_Optional has been set.
`public inline TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1acceff6e4d5d60df6a4c34c8d4e90c0cd)`()` | Gets the value of Inventory.
`public inline const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1ae3b08535f0429aed68a927928abed4cd)`() const` | Gets the value of Inventory.
`public inline void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1a8165f96527b37b8baed72db3aa8ed4e0)`(const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & NewValue)` | Sets the value of Inventory.
`public inline void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1a55919961ccb18e4856edbca2ee12c235)`(TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > && NewValue)` | Sets the value of Inventory using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738) <a id="structFRHAPI__CreateInventoryRequests_1a5b4aab4ca2903df59450ecbd606a6738"></a>

Source of this Inventory Operation.

#### `public bool `[`Source_IsSet`](#structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb) <a id="structFRHAPI__CreateInventoryRequests_1a3e42709481fb0b75617b3bbd7314bbfb"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da) <a id="structFRHAPI__CreateInventoryRequests_1a4c62974407c099235da7ecc889b1f5da"></a>

Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562) <a id="structFRHAPI__CreateInventoryRequests_1a65113778350c9bdc67e1c97626afb562"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > `[`Inventory`](#structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a) <a id="structFRHAPI__CreateInventoryRequests_1ad5c1065a425471ead065a069b830e19a"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequests_1a0df8d837ee113e5821c56ecf7a46374a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateInventoryRequests_1a0df8d837ee113e5821c56ecf7a46374a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequests_1a93a5f85754d955ad4b15bcd9156cbe41)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CreateInventoryRequests_1a93a5f85754d955ad4b15bcd9156cbe41"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a81ddb99d46d4b372c2f9aca85c86d066)`()` <a id="structFRHAPI__CreateInventoryRequests_1a81ddb99d46d4b372c2f9aca85c86d066"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a9674fd52be69abc09ac7549e19fd5a51)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a9674fd52be69abc09ac7549e19fd5a51"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a168b9fd026373a64739a032f90679e69)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequests_1a168b9fd026373a64739a032f90679e69"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__CreateInventoryRequests_1a1a99930daf928829ebb924a5a740f540)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__CreateInventoryRequests_1a1a99930daf928829ebb924a5a740f540"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1aea79f5aab95321511b16e4ee62fe3ca7)`()` <a id="structFRHAPI__CreateInventoryRequests_1aea79f5aab95321511b16e4ee62fe3ca7"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__CreateInventoryRequests_1abb834ea0aabd2a0e5012d738d69640ab)`() const` <a id="structFRHAPI__CreateInventoryRequests_1abb834ea0aabd2a0e5012d738d69640ab"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1a927b4ccfd780d215a6dbeecbf6197d40)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a927b4ccfd780d215a6dbeecbf6197d40"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__CreateInventoryRequests_1a8d1d0836ca4df8466e8afccc54098193)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a8d1d0836ca4df8466e8afccc54098193"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348)`()` <a id="structFRHAPI__CreateInventoryRequests_1a90ace01fa6f2f82a0e13574fe30bb348"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__CreateInventoryRequests_1a4f35f5e62ca9f33f7c4a5bab057ca48e)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a4f35f5e62ca9f33f7c4a5bab057ca48e"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a0bddff9e1c99b89ffb168913d514cd57)`()` <a id="structFRHAPI__CreateInventoryRequests_1a0bddff9e1c99b89ffb168913d514cd57"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1acafdc9b7cabffdd3bdebc36410054ffc)`() const` <a id="structFRHAPI__CreateInventoryRequests_1acafdc9b7cabffdd3bdebc36410054ffc"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1a1cf6c6f33830cb5781e5d0148900a7fc)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequests_1a1cf6c6f33830cb5781e5d0148900a7fc"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ab9f6db390a15c3fa4ac4ff104db322d8)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateInventoryRequests_1ab9f6db390a15c3fa4ac4ff104db322d8"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a72e2b8bf631469cf5d0c34d118f23b8c)`()` <a id="structFRHAPI__CreateInventoryRequests_1a72e2b8bf631469cf5d0c34d118f23b8c"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__CreateInventoryRequests_1a4331671af5dc5141f30424e687a25a5c)`() const` <a id="structFRHAPI__CreateInventoryRequests_1a4331671af5dc5141f30424e687a25a5c"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ad7b137a8293edf10154ba5e8dee88117)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1ad7b137a8293edf10154ba5e8dee88117"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1abfcc2485ded03c4584f0f97e76567449)`(FGuid && NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1abfcc2485ded03c4584f0f97e76567449"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8)`()` <a id="structFRHAPI__CreateInventoryRequests_1ad1d3d71c22d0fa589bbd5574932c60a8"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__CreateInventoryRequests_1add1a1d74d3e2317f98ceac8d0708b0fa)`() const` <a id="structFRHAPI__CreateInventoryRequests_1add1a1d74d3e2317f98ceac8d0708b0fa"></a>

Checks whether ClientOrderRefId_Optional has been set.

#### `public inline TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1acceff6e4d5d60df6a4c34c8d4e90c0cd)`()` <a id="structFRHAPI__CreateInventoryRequests_1acceff6e4d5d60df6a4c34c8d4e90c0cd"></a>

Gets the value of Inventory.

#### `public inline const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & `[`GetInventory`](#structFRHAPI__CreateInventoryRequests_1ae3b08535f0429aed68a927928abed4cd)`() const` <a id="structFRHAPI__CreateInventoryRequests_1ae3b08535f0429aed68a927928abed4cd"></a>

Gets the value of Inventory.

#### `public inline void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1a8165f96527b37b8baed72db3aa8ed4e0)`(const TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > & NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a8165f96527b37b8baed72db3aa8ed4e0"></a>

Sets the value of Inventory.

#### `public inline void `[`SetInventory`](#structFRHAPI__CreateInventoryRequests_1a55919961ccb18e4856edbca2ee12c235)`(TArray< `[`FRHAPI_CreateInventoryRequest`](RHAPI_CreateInventoryRequest.md#structFRHAPI__CreateInventoryRequest)` > && NewValue)` <a id="structFRHAPI__CreateInventoryRequests_1a55919961ccb18e4856edbca2ee12c235"></a>

Sets the value of Inventory using move semantics.

