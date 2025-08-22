---
title: RHAPI_QueueConfig
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueConfig`](#structFRHAPI__QueueConfig) | DEPRECATED - V1 Configuration about a specific queue.

## struct `FRHAPI_QueueConfig` <a id="structFRHAPI__QueueConfig"></a>

```
struct FRHAPI_QueueConfig
  : public FRHAPI_Model
```

DEPRECATED - V1 Configuration about a specific queue.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`QueueId`](#structFRHAPI__QueueConfig_1a4b833d47c6113c72995546e724ae2b3d) | ID to uniquely identify this queue.
`public bool `[`Active`](#structFRHAPI__QueueConfig_1aee82d6e680e6bf1dfefc37cd1f11859e) | Flag for whether or not the queue is active, and can be joined or sessions created from it.
`public int32 `[`RankingType`](#structFRHAPI__QueueConfig_1aacef7831b79c1f836a1e8ca2d7828e4c) | Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)
`public int32 `[`NumSides`](#structFRHAPI__QueueConfig_1a23995dba128a09c4fd3fd5a5f938eab1) | The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example.
`public int32 `[`MaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a9adb4270b953ff71083bce03f44859f9) | The maximum number of players that can be on each team.
`public int32 `[`MinPlayersPerSide`](#structFRHAPI__QueueConfig_1a14bbcf2815246b9cdd65bca56301fb86) | The minimum number of players that can be on each team.
`public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfig_1aaa59215391fb9cc4e64f60de6a63bfe4) | The maximum size of a group that can join this queue.
`public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1accaccf9098ad83a60810fd4579e6c9ad) | ID for which group of matchmaking templates/rules will be used when joining this queue.
`public virtual bool `[`FromJson`](#structFRHAPI__QueueConfig_1a1754821bb89c570ece1ca50c70a65ce5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueConfig_1a2690fde5039eeeccdee405c4c0264e32)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__QueueConfig_1afafd8e2c10e2e8301278add0ac2edae5)`()` | Gets the value of QueueId.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__QueueConfig_1a6085b31a5e3a4a9c8af364263fc378e3)`() const` | Gets the value of QueueId.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueConfig_1a3c7bb8542c3f835bd923888451071e54)`(const FString & NewValue)` | Sets the value of QueueId.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueConfig_1a2839d38b495de246a524344763954011)`(FString && NewValue)` | Sets the value of QueueId using move semantics.
`public inline FORCEINLINE bool & `[`GetActive`](#structFRHAPI__QueueConfig_1a2ffd8f5a3fc5cee6a8bc9b106ff17f35)`()` | Gets the value of Active.
`public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__QueueConfig_1a705d0502d43ee932fb3c77b4744e1d67)`() const` | Gets the value of Active.
`public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__QueueConfig_1ac468e73e53a91c4ea9d7e8e60e41bb94)`(const bool & NewValue)` | Sets the value of Active.
`public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__QueueConfig_1aae9f337e652329f10ac182f7a0a5aa8e)`(bool && NewValue)` | Sets the value of Active using move semantics.
`public inline FORCEINLINE bool `[`GetDefaultValue_Active`](#structFRHAPI__QueueConfig_1a4914a9731992fb992c9245085e7176b6)`()` | Returns the default value of Active.
`public inline FORCEINLINE int32 & `[`GetRankingType`](#structFRHAPI__QueueConfig_1aa3dbee29ac05b2d17c1c05121edc8b44)`()` | Gets the value of RankingType.
`public inline FORCEINLINE const int32 & `[`GetRankingType`](#structFRHAPI__QueueConfig_1a1385a3bd0da9885de66f763154f1e2ae)`() const` | Gets the value of RankingType.
`public inline FORCEINLINE void `[`SetRankingType`](#structFRHAPI__QueueConfig_1a8333a1614c48b0e1a732836836699128)`(const int32 & NewValue)` | Sets the value of RankingType.
`public inline FORCEINLINE void `[`SetRankingType`](#structFRHAPI__QueueConfig_1a1af442dc2a18c03457bb7ba38f02edca)`(int32 && NewValue)` | Sets the value of RankingType using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RankingType`](#structFRHAPI__QueueConfig_1aba1cac5ac60389331894219d49ed7a76)`()` | Returns the default value of RankingType.
`public inline FORCEINLINE int32 & `[`GetNumSides`](#structFRHAPI__QueueConfig_1ae6c39517d2c7aaf7b035e0d7852f7b25)`()` | Gets the value of NumSides.
`public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__QueueConfig_1a46d359f3df4675be77f559cbbb8947a4)`() const` | Gets the value of NumSides.
`public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__QueueConfig_1a4327028b17a4ffd8101733ee45463bcf)`(const int32 & NewValue)` | Sets the value of NumSides.
`public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__QueueConfig_1ac4d89eb132b6799f4b7f49462a52aa15)`(int32 && NewValue)` | Sets the value of NumSides using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_NumSides`](#structFRHAPI__QueueConfig_1aa27ac1b1c1fd2ffb29238972a3a14875)`()` | Returns the default value of NumSides.
`public inline FORCEINLINE int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a93a09a199864b53d84b228b458381bca)`()` | Gets the value of MaxPlayersPerSide.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a6d1fc6e6290abfbedecff6696e5e82ab)`() const` | Gets the value of MaxPlayersPerSide.
`public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a317065285613aadbcddec6d15d88ef8b)`(const int32 & NewValue)` | Sets the value of MaxPlayersPerSide.
`public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1ab0d7a6d0629a0613a23798d3587ad6e8)`(int32 && NewValue)` | Sets the value of MaxPlayersPerSide using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a3dc4a3a960374a7330dd9c058ff4f73d)`()` | Returns the default value of MaxPlayersPerSide.
`public inline FORCEINLINE int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1acdff0f564d7eb9aba0bacb9580d90c25)`()` | Gets the value of MinPlayersPerSide.
`public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a7a08360c1d69a2cfcd80009d2f7b3d09)`() const` | Gets the value of MinPlayersPerSide.
`public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1ae311e1913175dfe56a01fbd93a3268be)`(const int32 & NewValue)` | Sets the value of MinPlayersPerSide.
`public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a71ccdb3d9ccf99b4110430a38ee5f4f5)`(int32 && NewValue)` | Sets the value of MinPlayersPerSide using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MinPlayersPerSide`](#structFRHAPI__QueueConfig_1a2514838a21d245df8f3f4fadcf425977)`()` | Returns the default value of MinPlayersPerSide.
`public inline FORCEINLINE int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1af658a2e773f1f8bd7668bed0854e5596)`()` | Gets the value of MaxQueueGroupSize.
`public inline FORCEINLINE const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a42f7f21e7ddfe6edb9aea33a73808ee5)`() const` | Gets the value of MaxQueueGroupSize.
`public inline FORCEINLINE void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1acf1fd1fbd376cabca9a489fb0f7b2f0f)`(const int32 & NewValue)` | Sets the value of MaxQueueGroupSize.
`public inline FORCEINLINE void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a850f86fb4257a7ae6e3873828e3bc957)`(int32 && NewValue)` | Sets the value of MaxQueueGroupSize using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a7ec25911d8537dfdfef15c4cb6815c26)`()` | Returns the default value of MaxQueueGroupSize.
`public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1ae86ec9a0caaaeef853015114f6fa18fc)`()` | Gets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1a9f00e78a41fde9c725c95b4769a1027b)`() const` | Gets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1a530aa1874eb7bf609fa628d90370c152)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateGroupId.
`public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1ae170f484cf91681ff4f4f3adfb2ca5d8)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateGroupId using move semantics.

### Members

#### `public FString `[`QueueId`](#structFRHAPI__QueueConfig_1a4b833d47c6113c72995546e724ae2b3d) <a id="structFRHAPI__QueueConfig_1a4b833d47c6113c72995546e724ae2b3d"></a>

ID to uniquely identify this queue.

#### `public bool `[`Active`](#structFRHAPI__QueueConfig_1aee82d6e680e6bf1dfefc37cd1f11859e) <a id="structFRHAPI__QueueConfig_1aee82d6e680e6bf1dfefc37cd1f11859e"></a>

Flag for whether or not the queue is active, and can be joined or sessions created from it.

#### `public int32 `[`RankingType`](#structFRHAPI__QueueConfig_1aacef7831b79c1f836a1e8ca2d7828e4c) <a id="structFRHAPI__QueueConfig_1aacef7831b79c1f836a1e8ca2d7828e4c"></a>

Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)

#### `public int32 `[`NumSides`](#structFRHAPI__QueueConfig_1a23995dba128a09c4fd3fd5a5f938eab1) <a id="structFRHAPI__QueueConfig_1a23995dba128a09c4fd3fd5a5f938eab1"></a>

The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example.

#### `public int32 `[`MaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a9adb4270b953ff71083bce03f44859f9) <a id="structFRHAPI__QueueConfig_1a9adb4270b953ff71083bce03f44859f9"></a>

The maximum number of players that can be on each team.

#### `public int32 `[`MinPlayersPerSide`](#structFRHAPI__QueueConfig_1a14bbcf2815246b9cdd65bca56301fb86) <a id="structFRHAPI__QueueConfig_1a14bbcf2815246b9cdd65bca56301fb86"></a>

The minimum number of players that can be on each team.

#### `public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfig_1aaa59215391fb9cc4e64f60de6a63bfe4) <a id="structFRHAPI__QueueConfig_1aaa59215391fb9cc4e64f60de6a63bfe4"></a>

The maximum size of a group that can join this queue.

#### `public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1accaccf9098ad83a60810fd4579e6c9ad) <a id="structFRHAPI__QueueConfig_1accaccf9098ad83a60810fd4579e6c9ad"></a>

ID for which group of matchmaking templates/rules will be used when joining this queue.

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueConfig_1a1754821bb89c570ece1ca50c70a65ce5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueConfig_1a1754821bb89c570ece1ca50c70a65ce5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueConfig_1a2690fde5039eeeccdee405c4c0264e32)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__QueueConfig_1a2690fde5039eeeccdee405c4c0264e32"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__QueueConfig_1afafd8e2c10e2e8301278add0ac2edae5)`()` <a id="structFRHAPI__QueueConfig_1afafd8e2c10e2e8301278add0ac2edae5"></a>

Gets the value of QueueId.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__QueueConfig_1a6085b31a5e3a4a9c8af364263fc378e3)`() const` <a id="structFRHAPI__QueueConfig_1a6085b31a5e3a4a9c8af364263fc378e3"></a>

Gets the value of QueueId.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueConfig_1a3c7bb8542c3f835bd923888451071e54)`(const FString & NewValue)` <a id="structFRHAPI__QueueConfig_1a3c7bb8542c3f835bd923888451071e54"></a>

Sets the value of QueueId.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__QueueConfig_1a2839d38b495de246a524344763954011)`(FString && NewValue)` <a id="structFRHAPI__QueueConfig_1a2839d38b495de246a524344763954011"></a>

Sets the value of QueueId using move semantics.

#### `public inline FORCEINLINE bool & `[`GetActive`](#structFRHAPI__QueueConfig_1a2ffd8f5a3fc5cee6a8bc9b106ff17f35)`()` <a id="structFRHAPI__QueueConfig_1a2ffd8f5a3fc5cee6a8bc9b106ff17f35"></a>

Gets the value of Active.

#### `public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__QueueConfig_1a705d0502d43ee932fb3c77b4744e1d67)`() const` <a id="structFRHAPI__QueueConfig_1a705d0502d43ee932fb3c77b4744e1d67"></a>

Gets the value of Active.

#### `public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__QueueConfig_1ac468e73e53a91c4ea9d7e8e60e41bb94)`(const bool & NewValue)` <a id="structFRHAPI__QueueConfig_1ac468e73e53a91c4ea9d7e8e60e41bb94"></a>

Sets the value of Active.

#### `public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__QueueConfig_1aae9f337e652329f10ac182f7a0a5aa8e)`(bool && NewValue)` <a id="structFRHAPI__QueueConfig_1aae9f337e652329f10ac182f7a0a5aa8e"></a>

Sets the value of Active using move semantics.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Active`](#structFRHAPI__QueueConfig_1a4914a9731992fb992c9245085e7176b6)`()` <a id="structFRHAPI__QueueConfig_1a4914a9731992fb992c9245085e7176b6"></a>

Returns the default value of Active.

#### `public inline FORCEINLINE int32 & `[`GetRankingType`](#structFRHAPI__QueueConfig_1aa3dbee29ac05b2d17c1c05121edc8b44)`()` <a id="structFRHAPI__QueueConfig_1aa3dbee29ac05b2d17c1c05121edc8b44"></a>

Gets the value of RankingType.

#### `public inline FORCEINLINE const int32 & `[`GetRankingType`](#structFRHAPI__QueueConfig_1a1385a3bd0da9885de66f763154f1e2ae)`() const` <a id="structFRHAPI__QueueConfig_1a1385a3bd0da9885de66f763154f1e2ae"></a>

Gets the value of RankingType.

#### `public inline FORCEINLINE void `[`SetRankingType`](#structFRHAPI__QueueConfig_1a8333a1614c48b0e1a732836836699128)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1a8333a1614c48b0e1a732836836699128"></a>

Sets the value of RankingType.

#### `public inline FORCEINLINE void `[`SetRankingType`](#structFRHAPI__QueueConfig_1a1af442dc2a18c03457bb7ba38f02edca)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1a1af442dc2a18c03457bb7ba38f02edca"></a>

Sets the value of RankingType using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RankingType`](#structFRHAPI__QueueConfig_1aba1cac5ac60389331894219d49ed7a76)`()` <a id="structFRHAPI__QueueConfig_1aba1cac5ac60389331894219d49ed7a76"></a>

Returns the default value of RankingType.

#### `public inline FORCEINLINE int32 & `[`GetNumSides`](#structFRHAPI__QueueConfig_1ae6c39517d2c7aaf7b035e0d7852f7b25)`()` <a id="structFRHAPI__QueueConfig_1ae6c39517d2c7aaf7b035e0d7852f7b25"></a>

Gets the value of NumSides.

#### `public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__QueueConfig_1a46d359f3df4675be77f559cbbb8947a4)`() const` <a id="structFRHAPI__QueueConfig_1a46d359f3df4675be77f559cbbb8947a4"></a>

Gets the value of NumSides.

#### `public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__QueueConfig_1a4327028b17a4ffd8101733ee45463bcf)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1a4327028b17a4ffd8101733ee45463bcf"></a>

Sets the value of NumSides.

#### `public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__QueueConfig_1ac4d89eb132b6799f4b7f49462a52aa15)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1ac4d89eb132b6799f4b7f49462a52aa15"></a>

Sets the value of NumSides using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_NumSides`](#structFRHAPI__QueueConfig_1aa27ac1b1c1fd2ffb29238972a3a14875)`()` <a id="structFRHAPI__QueueConfig_1aa27ac1b1c1fd2ffb29238972a3a14875"></a>

Returns the default value of NumSides.

#### `public inline FORCEINLINE int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a93a09a199864b53d84b228b458381bca)`()` <a id="structFRHAPI__QueueConfig_1a93a09a199864b53d84b228b458381bca"></a>

Gets the value of MaxPlayersPerSide.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a6d1fc6e6290abfbedecff6696e5e82ab)`() const` <a id="structFRHAPI__QueueConfig_1a6d1fc6e6290abfbedecff6696e5e82ab"></a>

Gets the value of MaxPlayersPerSide.

#### `public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a317065285613aadbcddec6d15d88ef8b)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1a317065285613aadbcddec6d15d88ef8b"></a>

Sets the value of MaxPlayersPerSide.

#### `public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1ab0d7a6d0629a0613a23798d3587ad6e8)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1ab0d7a6d0629a0613a23798d3587ad6e8"></a>

Sets the value of MaxPlayersPerSide using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a3dc4a3a960374a7330dd9c058ff4f73d)`()` <a id="structFRHAPI__QueueConfig_1a3dc4a3a960374a7330dd9c058ff4f73d"></a>

Returns the default value of MaxPlayersPerSide.

#### `public inline FORCEINLINE int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1acdff0f564d7eb9aba0bacb9580d90c25)`()` <a id="structFRHAPI__QueueConfig_1acdff0f564d7eb9aba0bacb9580d90c25"></a>

Gets the value of MinPlayersPerSide.

#### `public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a7a08360c1d69a2cfcd80009d2f7b3d09)`() const` <a id="structFRHAPI__QueueConfig_1a7a08360c1d69a2cfcd80009d2f7b3d09"></a>

Gets the value of MinPlayersPerSide.

#### `public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1ae311e1913175dfe56a01fbd93a3268be)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1ae311e1913175dfe56a01fbd93a3268be"></a>

Sets the value of MinPlayersPerSide.

#### `public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a71ccdb3d9ccf99b4110430a38ee5f4f5)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1a71ccdb3d9ccf99b4110430a38ee5f4f5"></a>

Sets the value of MinPlayersPerSide using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MinPlayersPerSide`](#structFRHAPI__QueueConfig_1a2514838a21d245df8f3f4fadcf425977)`()` <a id="structFRHAPI__QueueConfig_1a2514838a21d245df8f3f4fadcf425977"></a>

Returns the default value of MinPlayersPerSide.

#### `public inline FORCEINLINE int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1af658a2e773f1f8bd7668bed0854e5596)`()` <a id="structFRHAPI__QueueConfig_1af658a2e773f1f8bd7668bed0854e5596"></a>

Gets the value of MaxQueueGroupSize.

#### `public inline FORCEINLINE const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a42f7f21e7ddfe6edb9aea33a73808ee5)`() const` <a id="structFRHAPI__QueueConfig_1a42f7f21e7ddfe6edb9aea33a73808ee5"></a>

Gets the value of MaxQueueGroupSize.

#### `public inline FORCEINLINE void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1acf1fd1fbd376cabca9a489fb0f7b2f0f)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1acf1fd1fbd376cabca9a489fb0f7b2f0f"></a>

Sets the value of MaxQueueGroupSize.

#### `public inline FORCEINLINE void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a850f86fb4257a7ae6e3873828e3bc957)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1a850f86fb4257a7ae6e3873828e3bc957"></a>

Sets the value of MaxQueueGroupSize using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a7ec25911d8537dfdfef15c4cb6815c26)`()` <a id="structFRHAPI__QueueConfig_1a7ec25911d8537dfdfef15c4cb6815c26"></a>

Returns the default value of MaxQueueGroupSize.

#### `public inline FORCEINLINE FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1ae86ec9a0caaaeef853015114f6fa18fc)`()` <a id="structFRHAPI__QueueConfig_1ae86ec9a0caaaeef853015114f6fa18fc"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1a9f00e78a41fde9c725c95b4769a1027b)`() const` <a id="structFRHAPI__QueueConfig_1a9f00e78a41fde9c725c95b4769a1027b"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1a530aa1874eb7bf609fa628d90370c152)`(const FGuid & NewValue)` <a id="structFRHAPI__QueueConfig_1a530aa1874eb7bf609fa628d90370c152"></a>

Sets the value of MatchMakingTemplateGroupId.

#### `public inline FORCEINLINE void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1ae170f484cf91681ff4f4f3adfb2ca5d8)`(FGuid && NewValue)` <a id="structFRHAPI__QueueConfig_1ae170f484cf91681ff4f4f3adfb2ca5d8"></a>

Sets the value of MatchMakingTemplateGroupId using move semantics.

