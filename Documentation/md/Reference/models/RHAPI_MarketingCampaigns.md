---
title: RHAPI_MarketingCampaigns
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MarketingCampaigns`](#structFRHAPI__MarketingCampaigns) | List of external Marketing Campaigns.

## struct `FRHAPI_MarketingCampaigns` <a id="structFRHAPI__MarketingCampaigns"></a>

```
struct FRHAPI_MarketingCampaigns
  : public FRHAPI_Model
```

List of external Marketing Campaigns.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > `[`Campaigns`](#structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505) | List of external Marketing Campaigns.
`public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaigns_1adf5e03cc408468f73950966d8df368fd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaigns_1adb86894187b504efa35aa91307161bf9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1a8b7fb6d8f18de46d12a905baeb9be745)`()` | Gets the value of Campaigns.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1a0d13ebcd65ffba212059e493d2d7c6f5)`() const` | Gets the value of Campaigns.
`public inline FORCEINLINE void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1a8a6643cd655ce20c61250c67ce11300b)`(const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & NewValue)` | Sets the value of Campaigns.
`public inline FORCEINLINE void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1a50f4229fb995a02dbc9ee08485f2da42)`(TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > && NewValue)` | Sets the value of Campaigns using move semantics.

### Members

#### `public TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > `[`Campaigns`](#structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505) <a id="structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505"></a>

List of external Marketing Campaigns.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaigns_1adf5e03cc408468f73950966d8df368fd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MarketingCampaigns_1adf5e03cc408468f73950966d8df368fd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaigns_1adb86894187b504efa35aa91307161bf9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MarketingCampaigns_1adb86894187b504efa35aa91307161bf9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1a8b7fb6d8f18de46d12a905baeb9be745)`()` <a id="structFRHAPI__MarketingCampaigns_1a8b7fb6d8f18de46d12a905baeb9be745"></a>

Gets the value of Campaigns.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1a0d13ebcd65ffba212059e493d2d7c6f5)`() const` <a id="structFRHAPI__MarketingCampaigns_1a0d13ebcd65ffba212059e493d2d7c6f5"></a>

Gets the value of Campaigns.

#### `public inline FORCEINLINE void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1a8a6643cd655ce20c61250c67ce11300b)`(const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & NewValue)` <a id="structFRHAPI__MarketingCampaigns_1a8a6643cd655ce20c61250c67ce11300b"></a>

Sets the value of Campaigns.

#### `public inline FORCEINLINE void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1a50f4229fb995a02dbc9ee08485f2da42)`(TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > && NewValue)` <a id="structFRHAPI__MarketingCampaigns_1a50f4229fb995a02dbc9ee08485f2da42"></a>

Sets the value of Campaigns using move semantics.

