# RHAPI_PlayerRankResponse <a id="group__RHAPI__PlayerRankResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankResponse`](#structFRHAPI__PlayerRankResponse) | DEPRECATED Response to successfully requesting a player&#39;s rank.

## struct `FRHAPI_PlayerRankResponse` <a id="structFRHAPI__PlayerRankResponse"></a>

```
struct FRHAPI_PlayerRankResponse
  : public FRHAPI_Model
```

DEPRECATED Response to successfully requesting a player&#39;s rank.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponse_1ad515f738c5f7ba86c3cc1cbc7aabb511) | UUID for this specific player.
`public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__PlayerRankResponse_1a52b54e3853b393e59f3c344ec9e5e645) | Current rank info about player.
`public int32 `[`RankId`](#structFRHAPI__PlayerRankResponse_1a8200a6af92b552e2e7976f8bc6b0356c) | ID for this rank.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponse_1a629c47f7b0ca8162bc16f1cdad7b08dc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponse_1a412ba11e1fbd72b54600368177cfddb4)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a857484d63bbcf814e50c28724260c4fe)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a4e9ebe28e42d96f00e27a7429635e380)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1ae30125afefcc2643bd8358dc321f74d3)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1a82cf4536727d77a43bc213fec4993201)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1a975d50ded3a316e5989e711a9441590f)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1ae32e97272d7a575f7c6d2d99b38e00c7)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` NewValue)` | Sets the value of Rank.
`public inline int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1aabbbbb4a9a91e91f8733f8f9188a31f7)`()` | Gets the value of RankId.
`public inline const int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1a918c6bbbd69cd6c14ec05ae0b364948a)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1a2d2fd39b73919221dd9c65182a63b0cb)`(int32 NewValue)` | Sets the value of RankId.
`public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__PlayerRankResponse_1a876bc1f29e317513febb2030029f4b67)`() const` | Returns true if RankId matches the default value.
`public inline void `[`SetRankIdToDefault`](#structFRHAPI__PlayerRankResponse_1a33d6cc9d2f0c07f8b349991d2319ab7a)`()` | Sets the value of RankId to its default

#### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRankResponse_1ad515f738c5f7ba86c3cc1cbc7aabb511) <a id="structFRHAPI__PlayerRankResponse_1ad515f738c5f7ba86c3cc1cbc7aabb511"></a>

UUID for this specific player.

#### `public `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` `[`Rank`](#structFRHAPI__PlayerRankResponse_1a52b54e3853b393e59f3c344ec9e5e645) <a id="structFRHAPI__PlayerRankResponse_1a52b54e3853b393e59f3c344ec9e5e645"></a>

Current rank info about player.

#### `public int32 `[`RankId`](#structFRHAPI__PlayerRankResponse_1a8200a6af92b552e2e7976f8bc6b0356c) <a id="structFRHAPI__PlayerRankResponse_1a8200a6af92b552e2e7976f8bc6b0356c"></a>

ID for this rank.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankResponse_1a629c47f7b0ca8162bc16f1cdad7b08dc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankResponse_1a629c47f7b0ca8162bc16f1cdad7b08dc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankResponse_1a412ba11e1fbd72b54600368177cfddb4)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankResponse_1a412ba11e1fbd72b54600368177cfddb4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a857484d63bbcf814e50c28724260c4fe)`()` <a id="structFRHAPI__PlayerRankResponse_1a857484d63bbcf814e50c28724260c4fe"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1a4e9ebe28e42d96f00e27a7429635e380)`() const` <a id="structFRHAPI__PlayerRankResponse_1a4e9ebe28e42d96f00e27a7429635e380"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerRankResponse_1ae30125afefcc2643bd8358dc321f74d3)`(FGuid NewValue)` <a id="structFRHAPI__PlayerRankResponse_1ae30125afefcc2643bd8358dc321f74d3"></a>

Sets the value of PlayerUuid.

#### `public inline `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1a82cf4536727d77a43bc213fec4993201)`()` <a id="structFRHAPI__PlayerRankResponse_1a82cf4536727d77a43bc213fec4993201"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` & `[`GetRank`](#structFRHAPI__PlayerRankResponse_1a975d50ded3a316e5989e711a9441590f)`() const` <a id="structFRHAPI__PlayerRankResponse_1a975d50ded3a316e5989e711a9441590f"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__PlayerRankResponse_1ae32e97272d7a575f7c6d2d99b38e00c7)`(`[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` NewValue)` <a id="structFRHAPI__PlayerRankResponse_1ae32e97272d7a575f7c6d2d99b38e00c7"></a>

Sets the value of Rank.

#### `public inline int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1aabbbbb4a9a91e91f8733f8f9188a31f7)`()` <a id="structFRHAPI__PlayerRankResponse_1aabbbbb4a9a91e91f8733f8f9188a31f7"></a>

Gets the value of RankId.

#### `public inline const int32 & `[`GetRankId`](#structFRHAPI__PlayerRankResponse_1a918c6bbbd69cd6c14ec05ae0b364948a)`() const` <a id="structFRHAPI__PlayerRankResponse_1a918c6bbbd69cd6c14ec05ae0b364948a"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__PlayerRankResponse_1a2d2fd39b73919221dd9c65182a63b0cb)`(int32 NewValue)` <a id="structFRHAPI__PlayerRankResponse_1a2d2fd39b73919221dd9c65182a63b0cb"></a>

Sets the value of RankId.

#### `public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__PlayerRankResponse_1a876bc1f29e317513febb2030029f4b67)`() const` <a id="structFRHAPI__PlayerRankResponse_1a876bc1f29e317513febb2030029f4b67"></a>

Returns true if RankId matches the default value.

#### `public inline void `[`SetRankIdToDefault`](#structFRHAPI__PlayerRankResponse_1a33d6cc9d2f0c07f8b349991d2319ab7a)`()` <a id="structFRHAPI__PlayerRankResponse_1a33d6cc9d2f0c07f8b349991d2319ab7a"></a>

Sets the value of RankId to its default

