---
title: RHAPI_CreateInventoryRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreateInventoryRequest`](#structFRHAPI__CreateInventoryRequest) | Request to Create a new Inventory.

## struct `FRHAPI_CreateInventoryRequest` <a id="structFRHAPI__CreateInventoryRequest"></a>

```
struct FRHAPI_CreateInventoryRequest
  : public FRHAPI_Model
```

Request to Create a new Inventory.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3) | 
`public bool `[`Bucket_IsSet`](#structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4) | true if Bucket_Optional has been set to a value
`public int32 `[`Count_Optional`](#structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7) | Count for this Inventory Operation.
`public bool `[`Count_IsSet`](#structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74) | true if Count_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__CreateInventoryRequest_1a8f61d04200cbedc5d54f73ebff7d7c33) | true if Expires_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__CreateInventoryRequest_1a8f339ac276bc5a89e5cc2a08f43e8423) | true if CustomData_Optional has been explicitly set to null
`public int32 `[`ItemId`](#structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6) | 
`public ERHAPI_CreateInventoryType `[`Type_Optional`](#structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719) | 
`public bool `[`Type_IsSet`](#structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc) | true if Type_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequest_1aebe3b0d9595dfdf29a21b4cf6322b05d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequest_1a32e48ad91672a22606aa5d72711c8bc4)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1aac96fdeb5f90ed52d5a35fce4f970046)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1adb6f5a95039268eeb638c74ff4bee195)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1aa88ebd4c9bfae6e39d8801c8d8d9ae56)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1aa354de4886ec678357f6cfc0e3ca3d49)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1a7888eeca47e2b05a4ac607b09389d188)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1abc55ede05014420bda899434b5a49f52)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1ada14224d84a5d31c0da93b5a28c9a5fc)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1abe2403d4e76de94374d6faabfd6347d1)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline bool `[`IsBucketSet`](#structFRHAPI__CreateInventoryRequest_1a3f98822c0925af5154d72b7ceb551081)`() const` | Checks whether Bucket_Optional has been set.
`public inline int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1a3e86c521cf7673c98c84da08c8b1e5bd)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1ab5bb8dfe08a5f82e0be1364379bfb6f5)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1a9554cef9e548bc210f408995d65357f7)`(const int32 & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aa0ef4d427acc8c8e2a85b4afbcbf81ad)`(int32 & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1a16360120b3b558bac7caebbf3ab938b8)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1ace95df3859414caceb1ad95d37fb4f7d)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1a06725aacc19359d691f016d459762cd3)`(const int32 & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1ae718cdc0d694795427bb33bf93c55f9d)`(int32 && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline bool `[`IsCountSet`](#structFRHAPI__CreateInventoryRequest_1a3a2f1b3612d11d09837b5a9ee07fd7f7)`() const` | Checks whether Count_Optional has been set.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__CreateInventoryRequest_1a4a80312cc1071de3f6cc54e0c7c3cfed)`() const` | Returns true if Count_Optional is set and matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__CreateInventoryRequest_1a388643174109779fe3dd3232304cf0a0)`()` | Sets the value of Count_Optional to its default and also sets Count_IsSet to true.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a720e1722d37a2773faa88236d5266be6)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ad205cc4f8e517d0dc807082011daa950)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a0017802bfcce9ab52256b104926222fe)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ab11ebe9f2134abb2b06a583117407871)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1a50853960ecb892bc65a905cb9a182481)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1a66b914936b6e81b94fe1f9d432e4a195)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1aa4784777c21841cd23d32f7433c8586c)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1a1e62242a47fe78359f199386333f4c9d)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline bool `[`IsExpiresSet`](#structFRHAPI__CreateInventoryRequest_1aa8cbd2da78813e829a898f5642b4e34c)`() const` | Checks whether Expires_Optional has been set.
`public inline void `[`SetExpiresToNull`](#structFRHAPI__CreateInventoryRequest_1ac2f44ad9f00d815172b43b003de23298)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExpiresNull`](#structFRHAPI__CreateInventoryRequest_1afc042f72fcacbe0bde2ab23ee0c1544c)`() const` | Checks whether Expires_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1aac0e9b470be065187ef66b637a54ff79)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a410faeb3f089af2512eedb4033e83c67)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a00f2776d0f04688dfa95710cfb95fb8c)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1acf66285ff1cc76a356de7fcef50d524b)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1a5df34375409e48773b0c8ea77b2e419d)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1a3e37a68f8058220527e8ba895881e426)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a4115a67e99bcd25b47d2025a0966a330)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a602c3972ab37bb0b18f217b51450e7d5)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__CreateInventoryRequest_1a4fa2b48e4b2178ed4078b1c062c1f0f9)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__CreateInventoryRequest_1af4849c7f0b5f8bf1b016acab4c856e72)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__CreateInventoryRequest_1aa5861bf08fbe0450aeb8341cf70bd8ce)`() const` | Checks whether CustomData_Optional is set to null.
`public inline int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a651c6dec6c20405f908cf9669eb9b122)`()` | Gets the value of ItemId.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a02b61e8f44921fa141a826ac5fd7db46)`() const` | Gets the value of ItemId.
`public inline void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1a8f87fc533d5655f55e2f5c1f36a963c8)`(const int32 & NewValue)` | Sets the value of ItemId.
`public inline void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1a46e7c498d01badf29173ba868c1e42f9)`(int32 && NewValue)` | Sets the value of ItemId using move semantics.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__CreateInventoryRequest_1aa452bb255788043b352a2f834ad56fb5)`() const` | Returns true if ItemId matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__CreateInventoryRequest_1a76b10a0b5195cae811f70705445db116)`()` | Sets the value of ItemId to its default
`public inline ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1aa82805b9ffc21fd83fa5801dd7b3a717)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1ac64c56f2f5fef0bd7910bf2facd46fe5)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a79b727516830f1af4a7e983d9bba340a)`(const ERHAPI_CreateInventoryType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a2f942c7682092c2d6b4d9c2e1048bbf1)`(ERHAPI_CreateInventoryType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1aae56fb7c82127c31bfd945b8d9ce89b2)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1a5af2b39b4e8b77cda3bbfdee45c5366e)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1a335911968b954c6ed653356a45e4fbd1)`(const ERHAPI_CreateInventoryType & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1ab1fde72cc98bdd75687a743e0e00f76e)`(ERHAPI_CreateInventoryType && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__CreateInventoryRequest_1a72fa365c7f213844046fcea64acfa70b)`() const` | Checks whether Type_Optional has been set.

### Members

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3) <a id="structFRHAPI__CreateInventoryRequest_1a76f5a8d3c702966a17c7bc29e675ddf3"></a>

#### `public bool `[`Bucket_IsSet`](#structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4) <a id="structFRHAPI__CreateInventoryRequest_1a2ce32e4645f8267d3265ecb9b0cd77c4"></a>

true if Bucket_Optional has been set to a value

#### `public int32 `[`Count_Optional`](#structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7) <a id="structFRHAPI__CreateInventoryRequest_1add764394cc2dc70fd1735a5e32cf42c7"></a>

Count for this Inventory Operation.

#### `public bool `[`Count_IsSet`](#structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74) <a id="structFRHAPI__CreateInventoryRequest_1a6b47666c8a735bd51280663d72724e74"></a>

true if Count_Optional has been set to a value

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f) <a id="structFRHAPI__CreateInventoryRequest_1a41f1a997e28f8be5e66e682eb1332e7f"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc) <a id="structFRHAPI__CreateInventoryRequest_1ae7761ce45a85554d147a84c729dfbdbc"></a>

true if Expires_Optional has been set to a value

#### `public bool `[`Expires_IsNull`](#structFRHAPI__CreateInventoryRequest_1a8f61d04200cbedc5d54f73ebff7d7c33) <a id="structFRHAPI__CreateInventoryRequest_1a8f61d04200cbedc5d54f73ebff7d7c33"></a>

true if Expires_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6) <a id="structFRHAPI__CreateInventoryRequest_1aa8b9cc39c3c1663ffc28e082263bd1a6"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c) <a id="structFRHAPI__CreateInventoryRequest_1aab3c76b73ebab73dff0bb8caefe3b94c"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__CreateInventoryRequest_1a8f339ac276bc5a89e5cc2a08f43e8423) <a id="structFRHAPI__CreateInventoryRequest_1a8f339ac276bc5a89e5cc2a08f43e8423"></a>

true if CustomData_Optional has been explicitly set to null

#### `public int32 `[`ItemId`](#structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6) <a id="structFRHAPI__CreateInventoryRequest_1ac1d6ef6e996f613b1de9891c10f9a5e6"></a>

#### `public ERHAPI_CreateInventoryType `[`Type_Optional`](#structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719) <a id="structFRHAPI__CreateInventoryRequest_1a6b9eee826b685cd1dc669c98fb789719"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc) <a id="structFRHAPI__CreateInventoryRequest_1a75960a6ec28c5652a2c70632c5e792bc"></a>

true if Type_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateInventoryRequest_1aebe3b0d9595dfdf29a21b4cf6322b05d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateInventoryRequest_1aebe3b0d9595dfdf29a21b4cf6322b05d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateInventoryRequest_1a32e48ad91672a22606aa5d72711c8bc4)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CreateInventoryRequest_1a32e48ad91672a22606aa5d72711c8bc4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1aac96fdeb5f90ed52d5a35fce4f970046)`()` <a id="structFRHAPI__CreateInventoryRequest_1aac96fdeb5f90ed52d5a35fce4f970046"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1adb6f5a95039268eeb638c74ff4bee195)`() const` <a id="structFRHAPI__CreateInventoryRequest_1adb6f5a95039268eeb638c74ff4bee195"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1aa88ebd4c9bfae6e39d8801c8d8d9ae56)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1aa88ebd4c9bfae6e39d8801c8d8d9ae56"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBucket`](#structFRHAPI__CreateInventoryRequest_1aa354de4886ec678357f6cfc0e3ca3d49)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1aa354de4886ec678357f6cfc0e3ca3d49"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1a7888eeca47e2b05a4ac607b09389d188)`()` <a id="structFRHAPI__CreateInventoryRequest_1a7888eeca47e2b05a4ac607b09389d188"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__CreateInventoryRequest_1abc55ede05014420bda899434b5a49f52)`() const` <a id="structFRHAPI__CreateInventoryRequest_1abc55ede05014420bda899434b5a49f52"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1ada14224d84a5d31c0da93b5a28c9a5fc)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1ada14224d84a5d31c0da93b5a28c9a5fc"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline void `[`SetBucket`](#structFRHAPI__CreateInventoryRequest_1abe2403d4e76de94374d6faabfd6347d1)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1abe2403d4e76de94374d6faabfd6347d1"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452)`()` <a id="structFRHAPI__CreateInventoryRequest_1af65d524d1fbd31b78cc01906c4664452"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline bool `[`IsBucketSet`](#structFRHAPI__CreateInventoryRequest_1a3f98822c0925af5154d72b7ceb551081)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a3f98822c0925af5154d72b7ceb551081"></a>

Checks whether Bucket_Optional has been set.

#### `public inline int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1a3e86c521cf7673c98c84da08c8b1e5bd)`()` <a id="structFRHAPI__CreateInventoryRequest_1a3e86c521cf7673c98c84da08c8b1e5bd"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1ab5bb8dfe08a5f82e0be1364379bfb6f5)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ab5bb8dfe08a5f82e0be1364379bfb6f5"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1a9554cef9e548bc210f408995d65357f7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a9554cef9e548bc210f408995d65357f7"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCount`](#structFRHAPI__CreateInventoryRequest_1aa0ef4d427acc8c8e2a85b4afbcbf81ad)`(int32 & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1aa0ef4d427acc8c8e2a85b4afbcbf81ad"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1a16360120b3b558bac7caebbf3ab938b8)`()` <a id="structFRHAPI__CreateInventoryRequest_1a16360120b3b558bac7caebbf3ab938b8"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__CreateInventoryRequest_1ace95df3859414caceb1ad95d37fb4f7d)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ace95df3859414caceb1ad95d37fb4f7d"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1a06725aacc19359d691f016d459762cd3)`(const int32 & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a06725aacc19359d691f016d459762cd3"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline void `[`SetCount`](#structFRHAPI__CreateInventoryRequest_1ae718cdc0d694795427bb33bf93c55f9d)`(int32 && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1ae718cdc0d694795427bb33bf93c55f9d"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22)`()` <a id="structFRHAPI__CreateInventoryRequest_1ab05cf66c182dabecdcd0531b3c66ff22"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline bool `[`IsCountSet`](#structFRHAPI__CreateInventoryRequest_1a3a2f1b3612d11d09837b5a9ee07fd7f7)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a3a2f1b3612d11d09837b5a9ee07fd7f7"></a>

Checks whether Count_Optional has been set.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__CreateInventoryRequest_1a4a80312cc1071de3f6cc54e0c7c3cfed)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a4a80312cc1071de3f6cc54e0c7c3cfed"></a>

Returns true if Count_Optional is set and matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__CreateInventoryRequest_1a388643174109779fe3dd3232304cf0a0)`()` <a id="structFRHAPI__CreateInventoryRequest_1a388643174109779fe3dd3232304cf0a0"></a>

Sets the value of Count_Optional to its default and also sets Count_IsSet to true.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a720e1722d37a2773faa88236d5266be6)`()` <a id="structFRHAPI__CreateInventoryRequest_1a720e1722d37a2773faa88236d5266be6"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ad205cc4f8e517d0dc807082011daa950)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ad205cc4f8e517d0dc807082011daa950"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1a0017802bfcce9ab52256b104926222fe)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a0017802bfcce9ab52256b104926222fe"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__CreateInventoryRequest_1ab11ebe9f2134abb2b06a583117407871)`(FDateTime & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1ab11ebe9f2134abb2b06a583117407871"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1a50853960ecb892bc65a905cb9a182481)`()` <a id="structFRHAPI__CreateInventoryRequest_1a50853960ecb892bc65a905cb9a182481"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__CreateInventoryRequest_1a66b914936b6e81b94fe1f9d432e4a195)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a66b914936b6e81b94fe1f9d432e4a195"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1aa4784777c21841cd23d32f7433c8586c)`(const FDateTime & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1aa4784777c21841cd23d32f7433c8586c"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__CreateInventoryRequest_1a1e62242a47fe78359f199386333f4c9d)`(FDateTime && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a1e62242a47fe78359f199386333f4c9d"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1)`()` <a id="structFRHAPI__CreateInventoryRequest_1a3ed93883ede8b9a88228ab07bcbc08e1"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline bool `[`IsExpiresSet`](#structFRHAPI__CreateInventoryRequest_1aa8cbd2da78813e829a898f5642b4e34c)`() const` <a id="structFRHAPI__CreateInventoryRequest_1aa8cbd2da78813e829a898f5642b4e34c"></a>

Checks whether Expires_Optional has been set.

#### `public inline void `[`SetExpiresToNull`](#structFRHAPI__CreateInventoryRequest_1ac2f44ad9f00d815172b43b003de23298)`()` <a id="structFRHAPI__CreateInventoryRequest_1ac2f44ad9f00d815172b43b003de23298"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExpiresNull`](#structFRHAPI__CreateInventoryRequest_1afc042f72fcacbe0bde2ab23ee0c1544c)`() const` <a id="structFRHAPI__CreateInventoryRequest_1afc042f72fcacbe0bde2ab23ee0c1544c"></a>

Checks whether Expires_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1aac0e9b470be065187ef66b637a54ff79)`()` <a id="structFRHAPI__CreateInventoryRequest_1aac0e9b470be065187ef66b637a54ff79"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a410faeb3f089af2512eedb4033e83c67)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a410faeb3f089af2512eedb4033e83c67"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1a00f2776d0f04688dfa95710cfb95fb8c)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a00f2776d0f04688dfa95710cfb95fb8c"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__CreateInventoryRequest_1acf66285ff1cc76a356de7fcef50d524b)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1acf66285ff1cc76a356de7fcef50d524b"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1a5df34375409e48773b0c8ea77b2e419d)`()` <a id="structFRHAPI__CreateInventoryRequest_1a5df34375409e48773b0c8ea77b2e419d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateInventoryRequest_1a3e37a68f8058220527e8ba895881e426)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a3e37a68f8058220527e8ba895881e426"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a4115a67e99bcd25b47d2025a0966a330)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a4115a67e99bcd25b47d2025a0966a330"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__CreateInventoryRequest_1a602c3972ab37bb0b18f217b51450e7d5)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a602c3972ab37bb0b18f217b51450e7d5"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2)`()` <a id="structFRHAPI__CreateInventoryRequest_1a1c28b8945d132420bcf24dbf79d90ae2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__CreateInventoryRequest_1a4fa2b48e4b2178ed4078b1c062c1f0f9)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a4fa2b48e4b2178ed4078b1c062c1f0f9"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__CreateInventoryRequest_1af4849c7f0b5f8bf1b016acab4c856e72)`()` <a id="structFRHAPI__CreateInventoryRequest_1af4849c7f0b5f8bf1b016acab4c856e72"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__CreateInventoryRequest_1aa5861bf08fbe0450aeb8341cf70bd8ce)`() const` <a id="structFRHAPI__CreateInventoryRequest_1aa5861bf08fbe0450aeb8341cf70bd8ce"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a651c6dec6c20405f908cf9669eb9b122)`()` <a id="structFRHAPI__CreateInventoryRequest_1a651c6dec6c20405f908cf9669eb9b122"></a>

Gets the value of ItemId.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__CreateInventoryRequest_1a02b61e8f44921fa141a826ac5fd7db46)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a02b61e8f44921fa141a826ac5fd7db46"></a>

Gets the value of ItemId.

#### `public inline void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1a8f87fc533d5655f55e2f5c1f36a963c8)`(const int32 & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a8f87fc533d5655f55e2f5c1f36a963c8"></a>

Sets the value of ItemId.

#### `public inline void `[`SetItemId`](#structFRHAPI__CreateInventoryRequest_1a46e7c498d01badf29173ba868c1e42f9)`(int32 && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a46e7c498d01badf29173ba868c1e42f9"></a>

Sets the value of ItemId using move semantics.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__CreateInventoryRequest_1aa452bb255788043b352a2f834ad56fb5)`() const` <a id="structFRHAPI__CreateInventoryRequest_1aa452bb255788043b352a2f834ad56fb5"></a>

Returns true if ItemId matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__CreateInventoryRequest_1a76b10a0b5195cae811f70705445db116)`()` <a id="structFRHAPI__CreateInventoryRequest_1a76b10a0b5195cae811f70705445db116"></a>

Sets the value of ItemId to its default

#### `public inline ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1aa82805b9ffc21fd83fa5801dd7b3a717)`()` <a id="structFRHAPI__CreateInventoryRequest_1aa82805b9ffc21fd83fa5801dd7b3a717"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1ac64c56f2f5fef0bd7910bf2facd46fe5)`() const` <a id="structFRHAPI__CreateInventoryRequest_1ac64c56f2f5fef0bd7910bf2facd46fe5"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const ERHAPI_CreateInventoryType & `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a79b727516830f1af4a7e983d9bba340a)`(const ERHAPI_CreateInventoryType & DefaultValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a79b727516830f1af4a7e983d9bba340a"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__CreateInventoryRequest_1a2f942c7682092c2d6b4d9c2e1048bbf1)`(ERHAPI_CreateInventoryType & OutValue) const` <a id="structFRHAPI__CreateInventoryRequest_1a2f942c7682092c2d6b4d9c2e1048bbf1"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1aae56fb7c82127c31bfd945b8d9ce89b2)`()` <a id="structFRHAPI__CreateInventoryRequest_1aae56fb7c82127c31bfd945b8d9ce89b2"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_CreateInventoryType * `[`GetTypeOrNull`](#structFRHAPI__CreateInventoryRequest_1a5af2b39b4e8b77cda3bbfdee45c5366e)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a5af2b39b4e8b77cda3bbfdee45c5366e"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1a335911968b954c6ed653356a45e4fbd1)`(const ERHAPI_CreateInventoryType & NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1a335911968b954c6ed653356a45e4fbd1"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__CreateInventoryRequest_1ab1fde72cc98bdd75687a743e0e00f76e)`(ERHAPI_CreateInventoryType && NewValue)` <a id="structFRHAPI__CreateInventoryRequest_1ab1fde72cc98bdd75687a743e0e00f76e"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759)`()` <a id="structFRHAPI__CreateInventoryRequest_1a2dd897e1570b1b1cf4803f48f9e15759"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__CreateInventoryRequest_1a72fa365c7f213844046fcea64acfa70b)`() const` <a id="structFRHAPI__CreateInventoryRequest_1a72fa365c7f213844046fcea64acfa70b"></a>

Checks whether Type_Optional has been set.

