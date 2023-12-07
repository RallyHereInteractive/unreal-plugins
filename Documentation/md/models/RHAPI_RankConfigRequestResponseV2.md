# RHAPI_RankConfigRequestResponseV2 <a id="group__RHAPI__RankConfigRequestResponseV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankConfigRequestResponseV2`](#structFRHAPI__RankConfigRequestResponseV2) | Response to successfully requesting all rank config.

## struct `FRHAPI_RankConfigRequestResponseV2` <a id="structFRHAPI__RankConfigRequestResponseV2"></a>

```
struct FRHAPI_RankConfigRequestResponseV2
  : public FRHAPI_Model
```

Response to successfully requesting all rank config.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_RankConfigV2`](RHAPI_RankConfigV2.md#structFRHAPI__RankConfigV2)` > `[`RankConfigs`](#structFRHAPI__RankConfigRequestResponseV2_1a39920f1f7c59d99816f489ce3e94ffb6) | List of rank configurations.
`public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponseV2_1a63f122606f6d809d601ec563ba304b03)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponseV2_1a4ef8805eded7567dde66d3b7e4171867)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_RankConfigV2`](RHAPI_RankConfigV2.md#structFRHAPI__RankConfigV2)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV2_1a4e67afae60c8736ba9e2b1dbe21e0dea)`()` | Gets the value of RankConfigs.
`public inline const TArray< `[`FRHAPI_RankConfigV2`](RHAPI_RankConfigV2.md#structFRHAPI__RankConfigV2)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV2_1af1f506b674a6ec136d194f6d34065b4b)`() const` | Gets the value of RankConfigs.
`public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV2_1a7af071c973f89a9917fc84f6040e12c0)`(TArray< `[`FRHAPI_RankConfigV2`](RHAPI_RankConfigV2.md#structFRHAPI__RankConfigV2)` > NewValue)` | Sets the value of RankConfigs.

#### Members

#### `public TArray< `[`FRHAPI_RankConfigV2`](RHAPI_RankConfigV2.md#structFRHAPI__RankConfigV2)` > `[`RankConfigs`](#structFRHAPI__RankConfigRequestResponseV2_1a39920f1f7c59d99816f489ce3e94ffb6) <a id="structFRHAPI__RankConfigRequestResponseV2_1a39920f1f7c59d99816f489ce3e94ffb6"></a>

List of rank configurations.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponseV2_1a63f122606f6d809d601ec563ba304b03)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfigRequestResponseV2_1a63f122606f6d809d601ec563ba304b03"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponseV2_1a4ef8805eded7567dde66d3b7e4171867)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankConfigRequestResponseV2_1a4ef8805eded7567dde66d3b7e4171867"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_RankConfigV2`](RHAPI_RankConfigV2.md#structFRHAPI__RankConfigV2)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV2_1a4e67afae60c8736ba9e2b1dbe21e0dea)`()` <a id="structFRHAPI__RankConfigRequestResponseV2_1a4e67afae60c8736ba9e2b1dbe21e0dea"></a>

Gets the value of RankConfigs.

<br>
#### `public inline const TArray< `[`FRHAPI_RankConfigV2`](RHAPI_RankConfigV2.md#structFRHAPI__RankConfigV2)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV2_1af1f506b674a6ec136d194f6d34065b4b)`() const` <a id="structFRHAPI__RankConfigRequestResponseV2_1af1f506b674a6ec136d194f6d34065b4b"></a>

Gets the value of RankConfigs.

<br>
#### `public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV2_1a7af071c973f89a9917fc84f6040e12c0)`(TArray< `[`FRHAPI_RankConfigV2`](RHAPI_RankConfigV2.md#structFRHAPI__RankConfigV2)` > NewValue)` <a id="structFRHAPI__RankConfigRequestResponseV2_1a7af071c973f89a9917fc84f6040e12c0"></a>

Sets the value of RankConfigs.

<br>
