# group `RHAPI_RankConfigRequestResponseV3` <a id="group__RHAPI__RankConfigRequestResponseV3"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankConfigRequestResponseV3`](#structFRHAPI__RankConfigRequestResponseV3) | Response to successfully requesting all rank config.

---
title: FRHAPI_RankConfigRequestResponseV3
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponseV3_1a7ae01e38ca4b6b2fd24f85810cf03d48)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a8c8cda54fa6317f64ea6f59f1986c94e)`()` | Gets the value of RankConfigs.
`public inline const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1ae064553522932fd8b0d176a865353986)`() const` | Gets the value of RankConfigs.
`public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a40726cf14572e240bd46e42eec50ff24)`(const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & NewValue)` | Sets the value of RankConfigs.
`public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1acbea4abb73cfec0e7deba3e9c3e33931)`(TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > && NewValue)` | Sets the value of RankConfigs using move semantics.

### Members

#### `public TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > `[`RankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a92555a184ff636b4eb462e7ca718f599) <a id="structFRHAPI__RankConfigRequestResponseV3_1a92555a184ff636b4eb462e7ca718f599"></a>

List of rank configurations.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponseV3_1a467b34634da1ed6fae87515072f805f3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfigRequestResponseV3_1a467b34634da1ed6fae87515072f805f3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponseV3_1a7ae01e38ca4b6b2fd24f85810cf03d48)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankConfigRequestResponseV3_1a7ae01e38ca4b6b2fd24f85810cf03d48"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a8c8cda54fa6317f64ea6f59f1986c94e)`()` <a id="structFRHAPI__RankConfigRequestResponseV3_1a8c8cda54fa6317f64ea6f59f1986c94e"></a>

Gets the value of RankConfigs.

#### `public inline const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1ae064553522932fd8b0d176a865353986)`() const` <a id="structFRHAPI__RankConfigRequestResponseV3_1ae064553522932fd8b0d176a865353986"></a>

Gets the value of RankConfigs.

#### `public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a40726cf14572e240bd46e42eec50ff24)`(const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & NewValue)` <a id="structFRHAPI__RankConfigRequestResponseV3_1a40726cf14572e240bd46e42eec50ff24"></a>

Sets the value of RankConfigs.

#### `public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1acbea4abb73cfec0e7deba3e9c3e33931)`(TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > && NewValue)` <a id="structFRHAPI__RankConfigRequestResponseV3_1acbea4abb73cfec0e7deba3e9c3e33931"></a>

Sets the value of RankConfigs using move semantics.

