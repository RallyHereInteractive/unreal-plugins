---
title: RHAPI_PlatformIndividualCCUs
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformIndividualCCUs`](#structFRHAPI__PlatformIndividualCCUs) | 

## struct `FRHAPI_PlatformIndividualCCUs` <a id="structFRHAPI__PlatformIndividualCCUs"></a>

```
struct FRHAPI_PlatformIndividualCCUs
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > `[`PlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a9bc66a944baafa4b1b4796955ae19bfb) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformIndividualCCUs_1adefb0a8b37ab333d8c3dba93bb989fbb)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformIndividualCCUs_1a42abc62577fc5ec2877d94645cc7a861)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & `[`GetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a6827ba67ef746a0b051509bc3729138b)`()` | Gets the value of PlatformCcus.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & `[`GetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a470c3674c52eca3808f0b56eb8b5e1ca)`() const` | Gets the value of PlatformCcus.
`public inline FORCEINLINE void `[`SetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a3c1a62c37bf87bc669ef4b2a54df2d8d)`(const TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & NewValue)` | Sets the value of PlatformCcus.
`public inline FORCEINLINE void `[`SetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a17d1723f1acf484252d6113e29880d72)`(TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > && NewValue)` | Sets the value of PlatformCcus using move semantics.

### Members

#### `public TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > `[`PlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a9bc66a944baafa4b1b4796955ae19bfb) <a id="structFRHAPI__PlatformIndividualCCUs_1a9bc66a944baafa4b1b4796955ae19bfb"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformIndividualCCUs_1adefb0a8b37ab333d8c3dba93bb989fbb)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformIndividualCCUs_1adefb0a8b37ab333d8c3dba93bb989fbb"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformIndividualCCUs_1a42abc62577fc5ec2877d94645cc7a861)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformIndividualCCUs_1a42abc62577fc5ec2877d94645cc7a861"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & `[`GetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a6827ba67ef746a0b051509bc3729138b)`()` <a id="structFRHAPI__PlatformIndividualCCUs_1a6827ba67ef746a0b051509bc3729138b"></a>

Gets the value of PlatformCcus.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & `[`GetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a470c3674c52eca3808f0b56eb8b5e1ca)`() const` <a id="structFRHAPI__PlatformIndividualCCUs_1a470c3674c52eca3808f0b56eb8b5e1ca"></a>

Gets the value of PlatformCcus.

#### `public inline FORCEINLINE void `[`SetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a3c1a62c37bf87bc669ef4b2a54df2d8d)`(const TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & NewValue)` <a id="structFRHAPI__PlatformIndividualCCUs_1a3c1a62c37bf87bc669ef4b2a54df2d8d"></a>

Sets the value of PlatformCcus.

#### `public inline FORCEINLINE void `[`SetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a17d1723f1acf484252d6113e29880d72)`(TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > && NewValue)` <a id="structFRHAPI__PlatformIndividualCCUs_1a17d1723f1acf484252d6113e29880d72"></a>

Sets the value of PlatformCcus using move semantics.

