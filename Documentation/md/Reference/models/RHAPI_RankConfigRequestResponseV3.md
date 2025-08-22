---
title: RHAPI_RankConfigRequestResponseV3
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankConfigRequestResponseV3`](#structFRHAPI__RankConfigRequestResponseV3) | Response to successfully requesting all rank config.

## struct `FRHAPI_RankConfigRequestResponseV3` <a id="structFRHAPI__RankConfigRequestResponseV3"></a>

```
struct FRHAPI_RankConfigRequestResponseV3
  : public FRHAPI_Model
```

Response to successfully requesting all rank config.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > `[`RankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a92555a184ff636b4eb462e7ca718f599) | List of rank configurations.
`public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponseV3_1a467b34634da1ed6fae87515072f805f3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponseV3_1a465661ebb074375eeaccc82c83e6047d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1ad608426271c4c143850774c67cf2f80b)`()` | Gets the value of RankConfigs.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1ad015a64732970848bb5ef708acb004f5)`() const` | Gets the value of RankConfigs.
`public inline FORCEINLINE void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a5926e3d8de9ad3752ef46089b4bdfbca)`(const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & NewValue)` | Sets the value of RankConfigs.
`public inline FORCEINLINE void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a601cd58ca7d8cf1efd18c01bf127d466)`(TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > && NewValue)` | Sets the value of RankConfigs using move semantics.

### Members

#### `public TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > `[`RankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a92555a184ff636b4eb462e7ca718f599) <a id="structFRHAPI__RankConfigRequestResponseV3_1a92555a184ff636b4eb462e7ca718f599"></a>

List of rank configurations.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponseV3_1a467b34634da1ed6fae87515072f805f3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfigRequestResponseV3_1a467b34634da1ed6fae87515072f805f3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponseV3_1a465661ebb074375eeaccc82c83e6047d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RankConfigRequestResponseV3_1a465661ebb074375eeaccc82c83e6047d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1ad608426271c4c143850774c67cf2f80b)`()` <a id="structFRHAPI__RankConfigRequestResponseV3_1ad608426271c4c143850774c67cf2f80b"></a>

Gets the value of RankConfigs.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1ad015a64732970848bb5ef708acb004f5)`() const` <a id="structFRHAPI__RankConfigRequestResponseV3_1ad015a64732970848bb5ef708acb004f5"></a>

Gets the value of RankConfigs.

#### `public inline FORCEINLINE void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a5926e3d8de9ad3752ef46089b4bdfbca)`(const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & NewValue)` <a id="structFRHAPI__RankConfigRequestResponseV3_1a5926e3d8de9ad3752ef46089b4bdfbca"></a>

Sets the value of RankConfigs.

#### `public inline FORCEINLINE void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a601cd58ca7d8cf1efd18c01bf127d466)`(TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > && NewValue)` <a id="structFRHAPI__RankConfigRequestResponseV3_1a601cd58ca7d8cf1efd18c01bf127d466"></a>

Sets the value of RankConfigs using move semantics.

