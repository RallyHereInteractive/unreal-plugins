# group `RHAPI_RankConfigRequestResponseV3` <a id="group__RHAPI__RankConfigRequestResponseV3"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponseV3_1a18d698ba68e35c1a5c30870095e58cbd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponseV3_1aafb5abc5f45bf57d4cf749c1c334c833)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a8c8cda54fa6317f64ea6f59f1986c94e)`()` | Gets the value of RankConfigs.
`public inline const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1ae064553522932fd8b0d176a865353986)`() const` | Gets the value of RankConfigs.
`public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1af7ae457032ee4982f52fbed0c760dbae)`(TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > NewValue)` | Sets the value of RankConfigs.

### Members

#### `public TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > `[`RankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a92555a184ff636b4eb462e7ca718f599) <a id="structFRHAPI__RankConfigRequestResponseV3_1a92555a184ff636b4eb462e7ca718f599"></a>

List of rank configurations.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankConfigRequestResponseV3_1a18d698ba68e35c1a5c30870095e58cbd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankConfigRequestResponseV3_1a18d698ba68e35c1a5c30870095e58cbd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankConfigRequestResponseV3_1aafb5abc5f45bf57d4cf749c1c334c833)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankConfigRequestResponseV3_1aafb5abc5f45bf57d4cf749c1c334c833"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1a8c8cda54fa6317f64ea6f59f1986c94e)`()` <a id="structFRHAPI__RankConfigRequestResponseV3_1a8c8cda54fa6317f64ea6f59f1986c94e"></a>

Gets the value of RankConfigs.

#### `public inline const TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > & `[`GetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1ae064553522932fd8b0d176a865353986)`() const` <a id="structFRHAPI__RankConfigRequestResponseV3_1ae064553522932fd8b0d176a865353986"></a>

Gets the value of RankConfigs.

#### `public inline void `[`SetRankConfigs`](#structFRHAPI__RankConfigRequestResponseV3_1af7ae457032ee4982f52fbed0c760dbae)`(TArray< `[`FRHAPI_RankConfigV3`](RHAPI_RankConfigV3.md#structFRHAPI__RankConfigV3)` > NewValue)` <a id="structFRHAPI__RankConfigRequestResponseV3_1af7ae457032ee4982f52fbed0c760dbae"></a>

Sets the value of RankConfigs.

