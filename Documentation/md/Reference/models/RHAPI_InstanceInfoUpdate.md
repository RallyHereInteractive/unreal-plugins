---
title: RHAPI_InstanceInfoUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceInfoUpdate`](#structFRHAPI__InstanceInfoUpdate) | A request body to update the instance resource in a session.

## struct `FRHAPI_InstanceInfoUpdate` <a id="structFRHAPI__InstanceInfoUpdate"></a>

```
struct FRHAPI_InstanceInfoUpdate
  : public FRHAPI_Model
```

A request body to update the instance resource in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AllocationId_Optional`](#structFRHAPI__InstanceInfoUpdate_1a421c12a8cd1dda60260d36fa0ddfe4d4) | Allocation ID for instance that's been spun up.
`public bool `[`AllocationId_IsSet`](#structFRHAPI__InstanceInfoUpdate_1ac508606b8473f2e8c181113f9854e38b) | true if AllocationId_Optional has been set to a value
`public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__InstanceInfoUpdate_1ac4dc17da51fdc32b763982c1ce5f2280) | Is the instance joinable at this time?
`public bool `[`JoinStatus_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a58d43b5bcd88cb03d2947cbc05d281c3) | true if JoinStatus_Optional has been set to a value
`public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__InstanceInfoUpdate_1a67e685eb7f2a83856062a62b1dd97f0f) | Parameters to join the instance.
`public bool `[`JoinParams_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a282916807722278b12016aa1a3ed5b75) | true if JoinParams_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__InstanceInfoUpdate_1a35ab20e36eed28c547f90e48589061d2) | Product Client Version number. Used for compatibility checking with players. Must be compatible with all players to spawn.
`public bool `[`Version_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a62dd84585fe7d789fd5d075e16cdf173) | true if Version_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceInfoUpdate_1a4f9df70e7dbb3fa7ad0267292d336c0c) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a512d5615df2069935e21dcad2a28a5b1) | true if CustomData_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__InstanceInfoUpdate_1a24d15214932583c22aa8d389611e0092) | The match ID associated with this instance.
`public bool `[`MatchId_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a9c5ec15fbe8189b275753df72d85866e) | true if MatchId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceInfoUpdate_1a893ac9eabb30b799bb1abccfb8701659)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceInfoUpdate_1a526a4fd1b4983e172afe49440e6b4c12)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a00bd0b771676b3ef884d048e911e7721)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a3966f1faa6f21f494190d909b02e7f4f)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a090c9a74a28373a550f2061a3bc1ad82)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a07994c6bfe221b0139396d35ea2524bd)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1acb6e7517aa419a05f843332b6da714a7)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1aa58d18eacfa04836eb45e4f8a3634e23)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a6bf339e8d46f18ba5b673c2149884b3a)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a4e9eee588b6a2abe7f773f213fd9fd84)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a1ce0fdb8b13b7f7419efa864dfa511fd)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline bool `[`IsAllocationIdSet`](#structFRHAPI__InstanceInfoUpdate_1a3bb6a09b8ee48d0013320d6715007e17)`() const` | Checks whether AllocationId_Optional has been set.
`public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a639400f06fde9fb3c5ae37a0fb2584d1)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a9b8d901083c9a2dedfa7ae9d36cb56b6)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1afa89f1f8ec964fce2e750bf5ea6fb1f3)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a5e50e7754bc22d5df480bd2a9f0ac069)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__InstanceInfoUpdate_1a0c8cf95a17a13531523052659b57692e)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__InstanceInfoUpdate_1a7039184bc722c194d36eb67f13c020c8)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a7ad8b9e903e89a95911cb669257f1508)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1af0797adb7b7f53187e11fdc96c520a63)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a08d153a486e719dd86f7272688d3fd6f)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline bool `[`IsJoinStatusSet`](#structFRHAPI__InstanceInfoUpdate_1aa46fb48ae3de3e833dff972643bf1d6c)`() const` | Checks whether JoinStatus_Optional has been set.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1ae663c598fbc8efaecd829c234d731d0c)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1aec300579032d8ff5c356ae6c6214ef50)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1aee503dc4ca3282c7c418c079b634b44c)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a466aafbad25fa684d1e299f58b1da2dc)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfoUpdate_1abe4bc071d2a33669bc27135593fef17c)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfoUpdate_1a695d676b4ca12e4d6782d2006addff89)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a552df2042d3519375ac9646bbe9cfac5)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1af8e1688dffd0ac86b40af44dc2e2ff8b)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a8fb8d668734c8ac5966d242b3c45898d)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline bool `[`IsJoinParamsSet`](#structFRHAPI__InstanceInfoUpdate_1ae4050c037210ac88757b29fdb5b7c148)`() const` | Checks whether JoinParams_Optional has been set.
`public inline FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1aed0062cd3418b2fef2326ae8c0acbd34)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a697bf1c9fca24ab28c3aaae64252ac27)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a836c5d3a552f1e2419ed942889d41c27)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1af28a6083f3cc2ad98e633593379626c1)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfoUpdate_1ab765888c656373b43190403c445cbb13)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfoUpdate_1aea7bbdbebd60bbc061b7bb2cbc35e9eb)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__InstanceInfoUpdate_1af7185ee10727878518083ecbd1675725)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`SetVersion`](#structFRHAPI__InstanceInfoUpdate_1aabb7b0e54012006bdba72b04d637618a)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfoUpdate_1a38e9c831413bc30e6d00a4c6ce9930e9)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline bool `[`IsVersionSet`](#structFRHAPI__InstanceInfoUpdate_1a4134c681df96ccb0e80b485413931da5)`() const` | Checks whether Version_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a5d35f10c46eed6f12ae68264e59102dd)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1ad92f8d43f21557edc2c3a183c22cdddc)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a7c510aefcfa1d83ec2d2a3e7d3f0dfa9)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1af24b253e7a5c9609319c6bfd9e647e4e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfoUpdate_1a62374b90442a6fbc13cf09f502688536)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfoUpdate_1a2b69989b86ad6050ed65a41a90ba7cde)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a33d87db27e9916c173599ecc165332f1)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a243f181f6c2bd769af1ef568ad1df916)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfoUpdate_1a9b87f305257195c6b1f5f2e407e94ff4)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceInfoUpdate_1afdbbaaff1ff3baad334a3ca549a2fb4b)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a657e7c6d174cfec2fdd460f78a604745)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a18d38f41304084d5018e67eadee2b6c1)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a23f0723f1e80904f7c970667eead398b)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a4b05bb7d21b15f726a913d8dc07f140f)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1a5eeb4e31747ce1d8a72da7832bf4f954)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1ac6b344813ff8a3d813cf73737a478ac7)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__InstanceInfoUpdate_1aae4ccc6ab85ef352c42d01e09be0d53f)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a4bfe3531556bb8786cb2d4179bcc02fe)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__InstanceInfoUpdate_1a3c0613c760b638002bda9e24e1defc32)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__InstanceInfoUpdate_1abaf0fe9c8d8f453698c3d1235e9e679f)`() const` | Checks whether MatchId_Optional has been set.

### Members

#### `public FString `[`AllocationId_Optional`](#structFRHAPI__InstanceInfoUpdate_1a421c12a8cd1dda60260d36fa0ddfe4d4) <a id="structFRHAPI__InstanceInfoUpdate_1a421c12a8cd1dda60260d36fa0ddfe4d4"></a>

Allocation ID for instance that's been spun up.

#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__InstanceInfoUpdate_1ac508606b8473f2e8c181113f9854e38b) <a id="structFRHAPI__InstanceInfoUpdate_1ac508606b8473f2e8c181113f9854e38b"></a>

true if AllocationId_Optional has been set to a value

#### `public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__InstanceInfoUpdate_1ac4dc17da51fdc32b763982c1ce5f2280) <a id="structFRHAPI__InstanceInfoUpdate_1ac4dc17da51fdc32b763982c1ce5f2280"></a>

Is the instance joinable at this time?

#### `public bool `[`JoinStatus_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a58d43b5bcd88cb03d2947cbc05d281c3) <a id="structFRHAPI__InstanceInfoUpdate_1a58d43b5bcd88cb03d2947cbc05d281c3"></a>

true if JoinStatus_Optional has been set to a value

#### `public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__InstanceInfoUpdate_1a67e685eb7f2a83856062a62b1dd97f0f) <a id="structFRHAPI__InstanceInfoUpdate_1a67e685eb7f2a83856062a62b1dd97f0f"></a>

Parameters to join the instance.

#### `public bool `[`JoinParams_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a282916807722278b12016aa1a3ed5b75) <a id="structFRHAPI__InstanceInfoUpdate_1a282916807722278b12016aa1a3ed5b75"></a>

true if JoinParams_Optional has been set to a value

#### `public FString `[`Version_Optional`](#structFRHAPI__InstanceInfoUpdate_1a35ab20e36eed28c547f90e48589061d2) <a id="structFRHAPI__InstanceInfoUpdate_1a35ab20e36eed28c547f90e48589061d2"></a>

Product Client Version number. Used for compatibility checking with players. Must be compatible with all players to spawn.

#### `public bool `[`Version_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a62dd84585fe7d789fd5d075e16cdf173) <a id="structFRHAPI__InstanceInfoUpdate_1a62dd84585fe7d789fd5d075e16cdf173"></a>

true if Version_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceInfoUpdate_1a4f9df70e7dbb3fa7ad0267292d336c0c) <a id="structFRHAPI__InstanceInfoUpdate_1a4f9df70e7dbb3fa7ad0267292d336c0c"></a>

instance-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a512d5615df2069935e21dcad2a28a5b1) <a id="structFRHAPI__InstanceInfoUpdate_1a512d5615df2069935e21dcad2a28a5b1"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__InstanceInfoUpdate_1a24d15214932583c22aa8d389611e0092) <a id="structFRHAPI__InstanceInfoUpdate_1a24d15214932583c22aa8d389611e0092"></a>

The match ID associated with this instance.

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a9c5ec15fbe8189b275753df72d85866e) <a id="structFRHAPI__InstanceInfoUpdate_1a9c5ec15fbe8189b275753df72d85866e"></a>

true if MatchId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceInfoUpdate_1a893ac9eabb30b799bb1abccfb8701659)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a893ac9eabb30b799bb1abccfb8701659"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceInfoUpdate_1a526a4fd1b4983e172afe49440e6b4c12)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceInfoUpdate_1a526a4fd1b4983e172afe49440e6b4c12"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a00bd0b771676b3ef884d048e911e7721)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a00bd0b771676b3ef884d048e911e7721"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a3966f1faa6f21f494190d909b02e7f4f)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a3966f1faa6f21f494190d909b02e7f4f"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a090c9a74a28373a550f2061a3bc1ad82)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a090c9a74a28373a550f2061a3bc1ad82"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a07994c6bfe221b0139396d35ea2524bd)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a07994c6bfe221b0139396d35ea2524bd"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1acb6e7517aa419a05f843332b6da714a7)`()` <a id="structFRHAPI__InstanceInfoUpdate_1acb6e7517aa419a05f843332b6da714a7"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1aa58d18eacfa04836eb45e4f8a3634e23)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1aa58d18eacfa04836eb45e4f8a3634e23"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a6bf339e8d46f18ba5b673c2149884b3a)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a6bf339e8d46f18ba5b673c2149884b3a"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a4e9eee588b6a2abe7f773f213fd9fd84)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a4e9eee588b6a2abe7f773f213fd9fd84"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a1ce0fdb8b13b7f7419efa864dfa511fd)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a1ce0fdb8b13b7f7419efa864dfa511fd"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline bool `[`IsAllocationIdSet`](#structFRHAPI__InstanceInfoUpdate_1a3bb6a09b8ee48d0013320d6715007e17)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a3bb6a09b8ee48d0013320d6715007e17"></a>

Checks whether AllocationId_Optional has been set.

#### `public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a639400f06fde9fb3c5ae37a0fb2584d1)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a639400f06fde9fb3c5ae37a0fb2584d1"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a9b8d901083c9a2dedfa7ae9d36cb56b6)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a9b8d901083c9a2dedfa7ae9d36cb56b6"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1afa89f1f8ec964fce2e750bf5ea6fb1f3)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1afa89f1f8ec964fce2e750bf5ea6fb1f3"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a5e50e7754bc22d5df480bd2a9f0ac069)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a5e50e7754bc22d5df480bd2a9f0ac069"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__InstanceInfoUpdate_1a0c8cf95a17a13531523052659b57692e)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a0c8cf95a17a13531523052659b57692e"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__InstanceInfoUpdate_1a7039184bc722c194d36eb67f13c020c8)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a7039184bc722c194d36eb67f13c020c8"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a7ad8b9e903e89a95911cb669257f1508)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a7ad8b9e903e89a95911cb669257f1508"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1af0797adb7b7f53187e11fdc96c520a63)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1af0797adb7b7f53187e11fdc96c520a63"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a08d153a486e719dd86f7272688d3fd6f)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a08d153a486e719dd86f7272688d3fd6f"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

#### `public inline bool `[`IsJoinStatusSet`](#structFRHAPI__InstanceInfoUpdate_1aa46fb48ae3de3e833dff972643bf1d6c)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1aa46fb48ae3de3e833dff972643bf1d6c"></a>

Checks whether JoinStatus_Optional has been set.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1ae663c598fbc8efaecd829c234d731d0c)`()` <a id="structFRHAPI__InstanceInfoUpdate_1ae663c598fbc8efaecd829c234d731d0c"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1aec300579032d8ff5c356ae6c6214ef50)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1aec300579032d8ff5c356ae6c6214ef50"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1aee503dc4ca3282c7c418c079b634b44c)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1aee503dc4ca3282c7c418c079b634b44c"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a466aafbad25fa684d1e299f58b1da2dc)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a466aafbad25fa684d1e299f58b1da2dc"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfoUpdate_1abe4bc071d2a33669bc27135593fef17c)`()` <a id="structFRHAPI__InstanceInfoUpdate_1abe4bc071d2a33669bc27135593fef17c"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfoUpdate_1a695d676b4ca12e4d6782d2006addff89)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a695d676b4ca12e4d6782d2006addff89"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a552df2042d3519375ac9646bbe9cfac5)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a552df2042d3519375ac9646bbe9cfac5"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1af8e1688dffd0ac86b40af44dc2e2ff8b)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1af8e1688dffd0ac86b40af44dc2e2ff8b"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a8fb8d668734c8ac5966d242b3c45898d)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a8fb8d668734c8ac5966d242b3c45898d"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline bool `[`IsJoinParamsSet`](#structFRHAPI__InstanceInfoUpdate_1ae4050c037210ac88757b29fdb5b7c148)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1ae4050c037210ac88757b29fdb5b7c148"></a>

Checks whether JoinParams_Optional has been set.

#### `public inline FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1aed0062cd3418b2fef2326ae8c0acbd34)`()` <a id="structFRHAPI__InstanceInfoUpdate_1aed0062cd3418b2fef2326ae8c0acbd34"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a697bf1c9fca24ab28c3aaae64252ac27)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a697bf1c9fca24ab28c3aaae64252ac27"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a836c5d3a552f1e2419ed942889d41c27)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a836c5d3a552f1e2419ed942889d41c27"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1af28a6083f3cc2ad98e633593379626c1)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1af28a6083f3cc2ad98e633593379626c1"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfoUpdate_1ab765888c656373b43190403c445cbb13)`()` <a id="structFRHAPI__InstanceInfoUpdate_1ab765888c656373b43190403c445cbb13"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfoUpdate_1aea7bbdbebd60bbc061b7bb2cbc35e9eb)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1aea7bbdbebd60bbc061b7bb2cbc35e9eb"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVersion`](#structFRHAPI__InstanceInfoUpdate_1af7185ee10727878518083ecbd1675725)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1af7185ee10727878518083ecbd1675725"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline void `[`SetVersion`](#structFRHAPI__InstanceInfoUpdate_1aabb7b0e54012006bdba72b04d637618a)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1aabb7b0e54012006bdba72b04d637618a"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfoUpdate_1a38e9c831413bc30e6d00a4c6ce9930e9)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a38e9c831413bc30e6d00a4c6ce9930e9"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline bool `[`IsVersionSet`](#structFRHAPI__InstanceInfoUpdate_1a4134c681df96ccb0e80b485413931da5)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a4134c681df96ccb0e80b485413931da5"></a>

Checks whether Version_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a5d35f10c46eed6f12ae68264e59102dd)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a5d35f10c46eed6f12ae68264e59102dd"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1ad92f8d43f21557edc2c3a183c22cdddc)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1ad92f8d43f21557edc2c3a183c22cdddc"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a7c510aefcfa1d83ec2d2a3e7d3f0dfa9)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a7c510aefcfa1d83ec2d2a3e7d3f0dfa9"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1af24b253e7a5c9609319c6bfd9e647e4e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1af24b253e7a5c9609319c6bfd9e647e4e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfoUpdate_1a62374b90442a6fbc13cf09f502688536)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a62374b90442a6fbc13cf09f502688536"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfoUpdate_1a2b69989b86ad6050ed65a41a90ba7cde)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a2b69989b86ad6050ed65a41a90ba7cde"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a33d87db27e9916c173599ecc165332f1)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a33d87db27e9916c173599ecc165332f1"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a243f181f6c2bd769af1ef568ad1df916)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a243f181f6c2bd769af1ef568ad1df916"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfoUpdate_1a9b87f305257195c6b1f5f2e407e94ff4)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a9b87f305257195c6b1f5f2e407e94ff4"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceInfoUpdate_1afdbbaaff1ff3baad334a3ca549a2fb4b)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1afdbbaaff1ff3baad334a3ca549a2fb4b"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a657e7c6d174cfec2fdd460f78a604745)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a657e7c6d174cfec2fdd460f78a604745"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a18d38f41304084d5018e67eadee2b6c1)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a18d38f41304084d5018e67eadee2b6c1"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a23f0723f1e80904f7c970667eead398b)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a23f0723f1e80904f7c970667eead398b"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a4b05bb7d21b15f726a913d8dc07f140f)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a4b05bb7d21b15f726a913d8dc07f140f"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1a5eeb4e31747ce1d8a72da7832bf4f954)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a5eeb4e31747ce1d8a72da7832bf4f954"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1ac6b344813ff8a3d813cf73737a478ac7)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1ac6b344813ff8a3d813cf73737a478ac7"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__InstanceInfoUpdate_1aae4ccc6ab85ef352c42d01e09be0d53f)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1aae4ccc6ab85ef352c42d01e09be0d53f"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a4bfe3531556bb8786cb2d4179bcc02fe)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a4bfe3531556bb8786cb2d4179bcc02fe"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__InstanceInfoUpdate_1a3c0613c760b638002bda9e24e1defc32)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a3c0613c760b638002bda9e24e1defc32"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__InstanceInfoUpdate_1abaf0fe9c8d8f453698c3d1235e9e679f)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1abaf0fe9c8d8f453698c3d1235e9e679f"></a>

Checks whether MatchId_Optional has been set.

