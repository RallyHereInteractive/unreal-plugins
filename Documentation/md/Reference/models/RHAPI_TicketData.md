---
title: RHAPI_TicketData
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TicketData`](#structFRHAPI__TicketData) | 

## struct `FRHAPI_TicketData` <a id="structFRHAPI__TicketData"></a>

```
struct FRHAPI_TicketData
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`TicketId`](#structFRHAPI__TicketData_1a3ed37cfc00c58530ec3dac53cbf345b5) | Unique ID for this ticket.
`public TArray< FGuid > `[`PlayerUuids_Optional`](#structFRHAPI__TicketData_1aadb9adf8f209c5e1fce974f581d61784) | List of Player UUIDS that are associated with this ticket.
`public bool `[`PlayerUuids_IsSet`](#structFRHAPI__TicketData_1a87979d4776e43d2ece7e48f98058b8e5) | true if PlayerUuids_Optional has been set to a value
`public FDateTime `[`QueueJoinDatetime`](#structFRHAPI__TicketData_1aa91ab4c3b060211c95c657cfb9b82642) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FString `[`RegionId`](#structFRHAPI__TicketData_1a62b6168002c9be33e8bbc9de1ba910b9) | Which region this ticket was created for.
`public FString `[`QueueId`](#structFRHAPI__TicketData_1aa996c9517bda8eb803934e177a3dbf57) | Which queue was used to create this ticket.
`public TArray< FString > `[`ProfileIds`](#structFRHAPI__TicketData_1ad495189191c3863307df160562c8fdad) | List of profiles that were being considered for this ticket.
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__TicketData_1afb43fc227461efe50ed520720d9a5ab1) | Additional join params specified on queue join.
`public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__TicketData_1a5049238a1b6be89571b0a874642ec4d9) | true if AdditionalJoinParams_Optional has been set to a value
`public TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > `[`RankData_Optional`](#structFRHAPI__TicketData_1a17b160297ed976f0e281e8965e3f19b3) | List of rank data on the ticket.
`public bool `[`RankData_IsSet`](#structFRHAPI__TicketData_1af7beadc7517c92c0fe706d91e0e7432f) | true if RankData_Optional has been set to a value
`public FString `[`QueuedSessionId_Optional`](#structFRHAPI__TicketData_1a1c099479824563aa94d0bba3da65e0cb) | The session this ticket belonged to.
`public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__TicketData_1a137d40b189749479d57f3d560fa8a93c) | true if QueuedSessionId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__TicketData_1aa6543a65f2b9581b045757d92831a62a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TicketData_1a9cd3c53afe8fb05319a3927992d4fa1e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__TicketData_1abf3f112bfca744de4ef2c871ac4df627)`()` | Gets the value of TicketId.
`public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__TicketData_1a902385a83e15027342740c4ced6563a2)`() const` | Gets the value of TicketId.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__TicketData_1a744e5f87525dfbd86528b9250c8a9412)`(const FString & NewValue)` | Sets the value of TicketId.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__TicketData_1a45b41dc7d2e679db3915ed0dfb2780bc)`(FString && NewValue)` | Sets the value of TicketId using move semantics.
`public inline FORCEINLINE TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a3a96d0fefe0ecd6300217b3b8ec5bffb)`()` | Gets the value of PlayerUuids_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a9b6e5efb82802ddae61ec98d71c51e3b)`() const` | Gets the value of PlayerUuids_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a4a9a07ebed38fca140e29c7c7d1841f2)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of PlayerUuids_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuids`](#structFRHAPI__TicketData_1ac09497321705c928260bb09235de7ae4)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of PlayerUuids_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FGuid > * `[`GetPlayerUuidsOrNull`](#structFRHAPI__TicketData_1a7ab71e2c992afb94e181aa44e32cfbaa)`()` | Returns a pointer to PlayerUuids_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FGuid > * `[`GetPlayerUuidsOrNull`](#structFRHAPI__TicketData_1afb18fbc03ecd78dccb33f061e524d66d)`() const` | Returns a pointer to PlayerUuids_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuids`](#structFRHAPI__TicketData_1a72d3c49791f7a3aa381532a12e725a1d)`(const TArray< FGuid > & NewValue)` | Sets the value of PlayerUuids_Optional and also sets PlayerUuids_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuids`](#structFRHAPI__TicketData_1aaeb7664e505f3a75fbb6ab3609bf7ea1)`(TArray< FGuid > && NewValue)` | Sets the value of PlayerUuids_Optional and also sets PlayerUuids_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuids`](#structFRHAPI__TicketData_1a4c8e331e0797c90da08892d8a2567a4e)`()` | Clears the value of PlayerUuids_Optional and sets PlayerUuids_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetQueueJoinDatetime`](#structFRHAPI__TicketData_1ac92f94a2ab84e20e5a7c5f3a992461aa)`()` | Gets the value of QueueJoinDatetime.
`public inline FORCEINLINE const FDateTime & `[`GetQueueJoinDatetime`](#structFRHAPI__TicketData_1a82105bb2b85d196c8ef8f49c2643ea21)`() const` | Gets the value of QueueJoinDatetime.
`public inline FORCEINLINE void `[`SetQueueJoinDatetime`](#structFRHAPI__TicketData_1ae5c6e7cacdd358f86dc78a022a1af284)`(const FDateTime & NewValue)` | Sets the value of QueueJoinDatetime.
`public inline FORCEINLINE void `[`SetQueueJoinDatetime`](#structFRHAPI__TicketData_1a2f03135b02f53828ca001c678c9ad170)`(FDateTime && NewValue)` | Sets the value of QueueJoinDatetime using move semantics.
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__TicketData_1ae7e7d1d9519b9c15e6f36edc74ec7969)`()` | Gets the value of RegionId.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__TicketData_1a942660703647b9e1ee5d3e10477f3c8f)`() const` | Gets the value of RegionId.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__TicketData_1a7f4aca38f4af0628dc5ae5485301a706)`(const FString & NewValue)` | Sets the value of RegionId.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__TicketData_1a39a2d29daee388a57e964bd629a0b533)`(FString && NewValue)` | Sets the value of RegionId using move semantics.
`public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__TicketData_1a90bc4f04aa2bcb22213d354052558d41)`()` | Gets the value of QueueId.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__TicketData_1a07540705f0f106add73b83f5b58ab0f3)`() const` | Gets the value of QueueId.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__TicketData_1a4bb1951717de19ce8a3ae3afd9148e48)`(const FString & NewValue)` | Sets the value of QueueId.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__TicketData_1a0d47eceb8f1f6970188337f062fa3d64)`(FString && NewValue)` | Sets the value of QueueId using move semantics.
`public inline FORCEINLINE TArray< FString > & `[`GetProfileIds`](#structFRHAPI__TicketData_1a669f1b58ef08da176e55fe56ad811e91)`()` | Gets the value of ProfileIds.
`public inline FORCEINLINE const TArray< FString > & `[`GetProfileIds`](#structFRHAPI__TicketData_1a2d8ff0198a7d84852f9df7f9bda13458)`() const` | Gets the value of ProfileIds.
`public inline FORCEINLINE void `[`SetProfileIds`](#structFRHAPI__TicketData_1ac0bc340eb8741419a28d2ddda185a1c1)`(const TArray< FString > & NewValue)` | Sets the value of ProfileIds.
`public inline FORCEINLINE void `[`SetProfileIds`](#structFRHAPI__TicketData_1a54deee05a2d1f760e7931b9d75216167)`(TArray< FString > && NewValue)` | Sets the value of ProfileIds using move semantics.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a9c6e6d5d34a782d8e53b6c137984bb6a)`()` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1adf2937a5f58968737504aa14afdd6432)`() const` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a3e9ff114571a434c72ee74b149713ec2)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a6ab7b598e09a4eb159af50962b58ff26)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__TicketData_1a6a2a81f7c636785a0dd437e668bb379f)`()` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__TicketData_1a33b50ee9ef8e6e0e308ae904f69d5c09)`() const` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__TicketData_1ac5f8924b4b9ba0501ad945d29c3fa797)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.
`public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__TicketData_1a26639017e16011da898bcbce14f1dd06)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__TicketData_1a3e3dea6278f363e3500fd3f7d2024c76)`()` | Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1ab606f1adce67613f30507bbe9f2c3b9f)`()` | Gets the value of RankData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1af6ec7fbb6fa0652e5414a7ca41208be8)`() const` | Gets the value of RankData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1aab93eac51a5faadb0fe92f5f62d65937)`(const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & DefaultValue) const` | Gets the value of RankData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRankData`](#structFRHAPI__TicketData_1a44eaa498dd9600831891480c46426da4)`(TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & OutValue) const` | Fills OutValue with the value of RankData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > * `[`GetRankDataOrNull`](#structFRHAPI__TicketData_1a8981073f6c90b916bf966efa5fad4092)`()` | Returns a pointer to RankData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > * `[`GetRankDataOrNull`](#structFRHAPI__TicketData_1a577e035801d5572496e99d4876e62e3c)`() const` | Returns a pointer to RankData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRankData`](#structFRHAPI__TicketData_1a2a18c536770f8cf55b3f81ca7b6e51ec)`(const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & NewValue)` | Sets the value of RankData_Optional and also sets RankData_IsSet to true.
`public inline FORCEINLINE void `[`SetRankData`](#structFRHAPI__TicketData_1a824a6837f2f239c60da2bc1a8ef1cd3e)`(TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > && NewValue)` | Sets the value of RankData_Optional and also sets RankData_IsSet to true using move semantics.
`public inline void `[`ClearRankData`](#structFRHAPI__TicketData_1aad62250fae5049dc81df972209f53d2e)`()` | Clears the value of RankData_Optional and sets RankData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetQueuedSessionId`](#structFRHAPI__TicketData_1ac23ea4541cff37fd85accb7fd725f8d3)`()` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__TicketData_1a2d3c71087e17fa64a4a808255ed560be)`() const` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__TicketData_1a6c2cf5a7ef0aa15e9cba9205933a09a7)`(const FString & DefaultValue) const` | Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQueuedSessionId`](#structFRHAPI__TicketData_1a8e6b0a198697d634988aca8e3e67a312)`(FString & OutValue) const` | Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__TicketData_1a67923d89a11671163a58a9d47f078d31)`()` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__TicketData_1a70f1d7507340bf0b2081573d96c41bb9)`() const` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__TicketData_1a36cd86a44fc58a750384bd855e0460b4)`(const FString & NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__TicketData_1ad6932f715603d812a404f413c9f4ec1a)`(FString && NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearQueuedSessionId`](#structFRHAPI__TicketData_1a28326f3b13bb54b7eeded642f5bde64b)`()` | Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_QueuedSessionId`](#structFRHAPI__TicketData_1abe406885e79dd347f9fed44f58e2b653)`()` | Returns the default value of QueuedSessionId.

### Members

#### `public FString `[`TicketId`](#structFRHAPI__TicketData_1a3ed37cfc00c58530ec3dac53cbf345b5) <a id="structFRHAPI__TicketData_1a3ed37cfc00c58530ec3dac53cbf345b5"></a>

Unique ID for this ticket.

#### `public TArray< FGuid > `[`PlayerUuids_Optional`](#structFRHAPI__TicketData_1aadb9adf8f209c5e1fce974f581d61784) <a id="structFRHAPI__TicketData_1aadb9adf8f209c5e1fce974f581d61784"></a>

List of Player UUIDS that are associated with this ticket.

#### `public bool `[`PlayerUuids_IsSet`](#structFRHAPI__TicketData_1a87979d4776e43d2ece7e48f98058b8e5) <a id="structFRHAPI__TicketData_1a87979d4776e43d2ece7e48f98058b8e5"></a>

true if PlayerUuids_Optional has been set to a value

#### `public FDateTime `[`QueueJoinDatetime`](#structFRHAPI__TicketData_1aa91ab4c3b060211c95c657cfb9b82642) <a id="structFRHAPI__TicketData_1aa91ab4c3b060211c95c657cfb9b82642"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FString `[`RegionId`](#structFRHAPI__TicketData_1a62b6168002c9be33e8bbc9de1ba910b9) <a id="structFRHAPI__TicketData_1a62b6168002c9be33e8bbc9de1ba910b9"></a>

Which region this ticket was created for.

#### `public FString `[`QueueId`](#structFRHAPI__TicketData_1aa996c9517bda8eb803934e177a3dbf57) <a id="structFRHAPI__TicketData_1aa996c9517bda8eb803934e177a3dbf57"></a>

Which queue was used to create this ticket.

#### `public TArray< FString > `[`ProfileIds`](#structFRHAPI__TicketData_1ad495189191c3863307df160562c8fdad) <a id="structFRHAPI__TicketData_1ad495189191c3863307df160562c8fdad"></a>

List of profiles that were being considered for this ticket.

#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__TicketData_1afb43fc227461efe50ed520720d9a5ab1) <a id="structFRHAPI__TicketData_1afb43fc227461efe50ed520720d9a5ab1"></a>

Additional join params specified on queue join.

#### `public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__TicketData_1a5049238a1b6be89571b0a874642ec4d9) <a id="structFRHAPI__TicketData_1a5049238a1b6be89571b0a874642ec4d9"></a>

true if AdditionalJoinParams_Optional has been set to a value

#### `public TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > `[`RankData_Optional`](#structFRHAPI__TicketData_1a17b160297ed976f0e281e8965e3f19b3) <a id="structFRHAPI__TicketData_1a17b160297ed976f0e281e8965e3f19b3"></a>

List of rank data on the ticket.

#### `public bool `[`RankData_IsSet`](#structFRHAPI__TicketData_1af7beadc7517c92c0fe706d91e0e7432f) <a id="structFRHAPI__TicketData_1af7beadc7517c92c0fe706d91e0e7432f"></a>

true if RankData_Optional has been set to a value

#### `public FString `[`QueuedSessionId_Optional`](#structFRHAPI__TicketData_1a1c099479824563aa94d0bba3da65e0cb) <a id="structFRHAPI__TicketData_1a1c099479824563aa94d0bba3da65e0cb"></a>

The session this ticket belonged to.

#### `public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__TicketData_1a137d40b189749479d57f3d560fa8a93c) <a id="structFRHAPI__TicketData_1a137d40b189749479d57f3d560fa8a93c"></a>

true if QueuedSessionId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__TicketData_1aa6543a65f2b9581b045757d92831a62a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TicketData_1aa6543a65f2b9581b045757d92831a62a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TicketData_1a9cd3c53afe8fb05319a3927992d4fa1e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__TicketData_1a9cd3c53afe8fb05319a3927992d4fa1e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__TicketData_1abf3f112bfca744de4ef2c871ac4df627)`()` <a id="structFRHAPI__TicketData_1abf3f112bfca744de4ef2c871ac4df627"></a>

Gets the value of TicketId.

#### `public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__TicketData_1a902385a83e15027342740c4ced6563a2)`() const` <a id="structFRHAPI__TicketData_1a902385a83e15027342740c4ced6563a2"></a>

Gets the value of TicketId.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__TicketData_1a744e5f87525dfbd86528b9250c8a9412)`(const FString & NewValue)` <a id="structFRHAPI__TicketData_1a744e5f87525dfbd86528b9250c8a9412"></a>

Sets the value of TicketId.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__TicketData_1a45b41dc7d2e679db3915ed0dfb2780bc)`(FString && NewValue)` <a id="structFRHAPI__TicketData_1a45b41dc7d2e679db3915ed0dfb2780bc"></a>

Sets the value of TicketId using move semantics.

#### `public inline FORCEINLINE TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a3a96d0fefe0ecd6300217b3b8ec5bffb)`()` <a id="structFRHAPI__TicketData_1a3a96d0fefe0ecd6300217b3b8ec5bffb"></a>

Gets the value of PlayerUuids_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a9b6e5efb82802ddae61ec98d71c51e3b)`() const` <a id="structFRHAPI__TicketData_1a9b6e5efb82802ddae61ec98d71c51e3b"></a>

Gets the value of PlayerUuids_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a4a9a07ebed38fca140e29c7c7d1841f2)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__TicketData_1a4a9a07ebed38fca140e29c7c7d1841f2"></a>

Gets the value of PlayerUuids_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuids`](#structFRHAPI__TicketData_1ac09497321705c928260bb09235de7ae4)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__TicketData_1ac09497321705c928260bb09235de7ae4"></a>

Fills OutValue with the value of PlayerUuids_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FGuid > * `[`GetPlayerUuidsOrNull`](#structFRHAPI__TicketData_1a7ab71e2c992afb94e181aa44e32cfbaa)`()` <a id="structFRHAPI__TicketData_1a7ab71e2c992afb94e181aa44e32cfbaa"></a>

Returns a pointer to PlayerUuids_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FGuid > * `[`GetPlayerUuidsOrNull`](#structFRHAPI__TicketData_1afb18fbc03ecd78dccb33f061e524d66d)`() const` <a id="structFRHAPI__TicketData_1afb18fbc03ecd78dccb33f061e524d66d"></a>

Returns a pointer to PlayerUuids_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuids`](#structFRHAPI__TicketData_1a72d3c49791f7a3aa381532a12e725a1d)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__TicketData_1a72d3c49791f7a3aa381532a12e725a1d"></a>

Sets the value of PlayerUuids_Optional and also sets PlayerUuids_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuids`](#structFRHAPI__TicketData_1aaeb7664e505f3a75fbb6ab3609bf7ea1)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__TicketData_1aaeb7664e505f3a75fbb6ab3609bf7ea1"></a>

Sets the value of PlayerUuids_Optional and also sets PlayerUuids_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuids`](#structFRHAPI__TicketData_1a4c8e331e0797c90da08892d8a2567a4e)`()` <a id="structFRHAPI__TicketData_1a4c8e331e0797c90da08892d8a2567a4e"></a>

Clears the value of PlayerUuids_Optional and sets PlayerUuids_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetQueueJoinDatetime`](#structFRHAPI__TicketData_1ac92f94a2ab84e20e5a7c5f3a992461aa)`()` <a id="structFRHAPI__TicketData_1ac92f94a2ab84e20e5a7c5f3a992461aa"></a>

Gets the value of QueueJoinDatetime.

#### `public inline FORCEINLINE const FDateTime & `[`GetQueueJoinDatetime`](#structFRHAPI__TicketData_1a82105bb2b85d196c8ef8f49c2643ea21)`() const` <a id="structFRHAPI__TicketData_1a82105bb2b85d196c8ef8f49c2643ea21"></a>

Gets the value of QueueJoinDatetime.

#### `public inline FORCEINLINE void `[`SetQueueJoinDatetime`](#structFRHAPI__TicketData_1ae5c6e7cacdd358f86dc78a022a1af284)`(const FDateTime & NewValue)` <a id="structFRHAPI__TicketData_1ae5c6e7cacdd358f86dc78a022a1af284"></a>

Sets the value of QueueJoinDatetime.

#### `public inline FORCEINLINE void `[`SetQueueJoinDatetime`](#structFRHAPI__TicketData_1a2f03135b02f53828ca001c678c9ad170)`(FDateTime && NewValue)` <a id="structFRHAPI__TicketData_1a2f03135b02f53828ca001c678c9ad170"></a>

Sets the value of QueueJoinDatetime using move semantics.

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__TicketData_1ae7e7d1d9519b9c15e6f36edc74ec7969)`()` <a id="structFRHAPI__TicketData_1ae7e7d1d9519b9c15e6f36edc74ec7969"></a>

Gets the value of RegionId.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__TicketData_1a942660703647b9e1ee5d3e10477f3c8f)`() const` <a id="structFRHAPI__TicketData_1a942660703647b9e1ee5d3e10477f3c8f"></a>

Gets the value of RegionId.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__TicketData_1a7f4aca38f4af0628dc5ae5485301a706)`(const FString & NewValue)` <a id="structFRHAPI__TicketData_1a7f4aca38f4af0628dc5ae5485301a706"></a>

Sets the value of RegionId.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__TicketData_1a39a2d29daee388a57e964bd629a0b533)`(FString && NewValue)` <a id="structFRHAPI__TicketData_1a39a2d29daee388a57e964bd629a0b533"></a>

Sets the value of RegionId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__TicketData_1a90bc4f04aa2bcb22213d354052558d41)`()` <a id="structFRHAPI__TicketData_1a90bc4f04aa2bcb22213d354052558d41"></a>

Gets the value of QueueId.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__TicketData_1a07540705f0f106add73b83f5b58ab0f3)`() const` <a id="structFRHAPI__TicketData_1a07540705f0f106add73b83f5b58ab0f3"></a>

Gets the value of QueueId.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__TicketData_1a4bb1951717de19ce8a3ae3afd9148e48)`(const FString & NewValue)` <a id="structFRHAPI__TicketData_1a4bb1951717de19ce8a3ae3afd9148e48"></a>

Sets the value of QueueId.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__TicketData_1a0d47eceb8f1f6970188337f062fa3d64)`(FString && NewValue)` <a id="structFRHAPI__TicketData_1a0d47eceb8f1f6970188337f062fa3d64"></a>

Sets the value of QueueId using move semantics.

#### `public inline FORCEINLINE TArray< FString > & `[`GetProfileIds`](#structFRHAPI__TicketData_1a669f1b58ef08da176e55fe56ad811e91)`()` <a id="structFRHAPI__TicketData_1a669f1b58ef08da176e55fe56ad811e91"></a>

Gets the value of ProfileIds.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetProfileIds`](#structFRHAPI__TicketData_1a2d8ff0198a7d84852f9df7f9bda13458)`() const` <a id="structFRHAPI__TicketData_1a2d8ff0198a7d84852f9df7f9bda13458"></a>

Gets the value of ProfileIds.

#### `public inline FORCEINLINE void `[`SetProfileIds`](#structFRHAPI__TicketData_1ac0bc340eb8741419a28d2ddda185a1c1)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__TicketData_1ac0bc340eb8741419a28d2ddda185a1c1"></a>

Sets the value of ProfileIds.

#### `public inline FORCEINLINE void `[`SetProfileIds`](#structFRHAPI__TicketData_1a54deee05a2d1f760e7931b9d75216167)`(TArray< FString > && NewValue)` <a id="structFRHAPI__TicketData_1a54deee05a2d1f760e7931b9d75216167"></a>

Sets the value of ProfileIds using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a9c6e6d5d34a782d8e53b6c137984bb6a)`()` <a id="structFRHAPI__TicketData_1a9c6e6d5d34a782d8e53b6c137984bb6a"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1adf2937a5f58968737504aa14afdd6432)`() const` <a id="structFRHAPI__TicketData_1adf2937a5f58968737504aa14afdd6432"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a3e9ff114571a434c72ee74b149713ec2)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__TicketData_1a3e9ff114571a434c72ee74b149713ec2"></a>

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a6ab7b598e09a4eb159af50962b58ff26)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__TicketData_1a6ab7b598e09a4eb159af50962b58ff26"></a>

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__TicketData_1a6a2a81f7c636785a0dd437e668bb379f)`()` <a id="structFRHAPI__TicketData_1a6a2a81f7c636785a0dd437e668bb379f"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__TicketData_1a33b50ee9ef8e6e0e308ae904f69d5c09)`() const` <a id="structFRHAPI__TicketData_1a33b50ee9ef8e6e0e308ae904f69d5c09"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__TicketData_1ac5f8924b4b9ba0501ad945d29c3fa797)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__TicketData_1ac5f8924b4b9ba0501ad945d29c3fa797"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__TicketData_1a26639017e16011da898bcbce14f1dd06)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__TicketData_1a26639017e16011da898bcbce14f1dd06"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__TicketData_1a3e3dea6278f363e3500fd3f7d2024c76)`()` <a id="structFRHAPI__TicketData_1a3e3dea6278f363e3500fd3f7d2024c76"></a>

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1ab606f1adce67613f30507bbe9f2c3b9f)`()` <a id="structFRHAPI__TicketData_1ab606f1adce67613f30507bbe9f2c3b9f"></a>

Gets the value of RankData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1af6ec7fbb6fa0652e5414a7ca41208be8)`() const` <a id="structFRHAPI__TicketData_1af6ec7fbb6fa0652e5414a7ca41208be8"></a>

Gets the value of RankData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1aab93eac51a5faadb0fe92f5f62d65937)`(const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & DefaultValue) const` <a id="structFRHAPI__TicketData_1aab93eac51a5faadb0fe92f5f62d65937"></a>

Gets the value of RankData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRankData`](#structFRHAPI__TicketData_1a44eaa498dd9600831891480c46426da4)`(TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & OutValue) const` <a id="structFRHAPI__TicketData_1a44eaa498dd9600831891480c46426da4"></a>

Fills OutValue with the value of RankData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > * `[`GetRankDataOrNull`](#structFRHAPI__TicketData_1a8981073f6c90b916bf966efa5fad4092)`()` <a id="structFRHAPI__TicketData_1a8981073f6c90b916bf966efa5fad4092"></a>

Returns a pointer to RankData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > * `[`GetRankDataOrNull`](#structFRHAPI__TicketData_1a577e035801d5572496e99d4876e62e3c)`() const` <a id="structFRHAPI__TicketData_1a577e035801d5572496e99d4876e62e3c"></a>

Returns a pointer to RankData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRankData`](#structFRHAPI__TicketData_1a2a18c536770f8cf55b3f81ca7b6e51ec)`(const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & NewValue)` <a id="structFRHAPI__TicketData_1a2a18c536770f8cf55b3f81ca7b6e51ec"></a>

Sets the value of RankData_Optional and also sets RankData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRankData`](#structFRHAPI__TicketData_1a824a6837f2f239c60da2bc1a8ef1cd3e)`(TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > && NewValue)` <a id="structFRHAPI__TicketData_1a824a6837f2f239c60da2bc1a8ef1cd3e"></a>

Sets the value of RankData_Optional and also sets RankData_IsSet to true using move semantics.

#### `public inline void `[`ClearRankData`](#structFRHAPI__TicketData_1aad62250fae5049dc81df972209f53d2e)`()` <a id="structFRHAPI__TicketData_1aad62250fae5049dc81df972209f53d2e"></a>

Clears the value of RankData_Optional and sets RankData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetQueuedSessionId`](#structFRHAPI__TicketData_1ac23ea4541cff37fd85accb7fd725f8d3)`()` <a id="structFRHAPI__TicketData_1ac23ea4541cff37fd85accb7fd725f8d3"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__TicketData_1a2d3c71087e17fa64a4a808255ed560be)`() const` <a id="structFRHAPI__TicketData_1a2d3c71087e17fa64a4a808255ed560be"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__TicketData_1a6c2cf5a7ef0aa15e9cba9205933a09a7)`(const FString & DefaultValue) const` <a id="structFRHAPI__TicketData_1a6c2cf5a7ef0aa15e9cba9205933a09a7"></a>

Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQueuedSessionId`](#structFRHAPI__TicketData_1a8e6b0a198697d634988aca8e3e67a312)`(FString & OutValue) const` <a id="structFRHAPI__TicketData_1a8e6b0a198697d634988aca8e3e67a312"></a>

Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__TicketData_1a67923d89a11671163a58a9d47f078d31)`()` <a id="structFRHAPI__TicketData_1a67923d89a11671163a58a9d47f078d31"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__TicketData_1a70f1d7507340bf0b2081573d96c41bb9)`() const` <a id="structFRHAPI__TicketData_1a70f1d7507340bf0b2081573d96c41bb9"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__TicketData_1a36cd86a44fc58a750384bd855e0460b4)`(const FString & NewValue)` <a id="structFRHAPI__TicketData_1a36cd86a44fc58a750384bd855e0460b4"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__TicketData_1ad6932f715603d812a404f413c9f4ec1a)`(FString && NewValue)` <a id="structFRHAPI__TicketData_1ad6932f715603d812a404f413c9f4ec1a"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueuedSessionId`](#structFRHAPI__TicketData_1a28326f3b13bb54b7eeded642f5bde64b)`()` <a id="structFRHAPI__TicketData_1a28326f3b13bb54b7eeded642f5bde64b"></a>

Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_QueuedSessionId`](#structFRHAPI__TicketData_1abe406885e79dd347f9fed44f58e2b653)`()` <a id="structFRHAPI__TicketData_1abe406885e79dd347f9fed44f58e2b653"></a>

Returns the default value of QueuedSessionId.

