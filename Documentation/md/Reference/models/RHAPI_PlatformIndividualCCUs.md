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
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformIndividualCCUs_1aa104faa62a3f38b4cc28efc895b693cf)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & `[`GetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1ab0aa45ea28850ff0954025afd80821c0)`()` | Gets the value of PlatformCcus.
`public inline const TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & `[`GetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1ab453ea06efdbf264d0386af5a92e1d65)`() const` | Gets the value of PlatformCcus.
`public inline void `[`SetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1aca09255ca387260c24d66cb6ff0fb140)`(const TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & NewValue)` | Sets the value of PlatformCcus.
`public inline void `[`SetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1ab58bf479585a604e9b7e2e9ac7e4d0d6)`(TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > && NewValue)` | Sets the value of PlatformCcus using move semantics.

### Members

#### `public TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > `[`PlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1a9bc66a944baafa4b1b4796955ae19bfb) <a id="structFRHAPI__PlatformIndividualCCUs_1a9bc66a944baafa4b1b4796955ae19bfb"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformIndividualCCUs_1adefb0a8b37ab333d8c3dba93bb989fbb)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformIndividualCCUs_1adefb0a8b37ab333d8c3dba93bb989fbb"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformIndividualCCUs_1aa104faa62a3f38b4cc28efc895b693cf)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformIndividualCCUs_1aa104faa62a3f38b4cc28efc895b693cf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & `[`GetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1ab0aa45ea28850ff0954025afd80821c0)`()` <a id="structFRHAPI__PlatformIndividualCCUs_1ab0aa45ea28850ff0954025afd80821c0"></a>

Gets the value of PlatformCcus.

#### `public inline const TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & `[`GetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1ab453ea06efdbf264d0386af5a92e1d65)`() const` <a id="structFRHAPI__PlatformIndividualCCUs_1ab453ea06efdbf264d0386af5a92e1d65"></a>

Gets the value of PlatformCcus.

#### `public inline void `[`SetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1aca09255ca387260c24d66cb6ff0fb140)`(const TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > & NewValue)` <a id="structFRHAPI__PlatformIndividualCCUs_1aca09255ca387260c24d66cb6ff0fb140"></a>

Sets the value of PlatformCcus.

#### `public inline void `[`SetPlatformCcus`](#structFRHAPI__PlatformIndividualCCUs_1ab58bf479585a604e9b7e2e9ac7e4d0d6)`(TMap< FString, `[`FRHAPI_IndividualCCUs`](RHAPI_IndividualCCUs.md#structFRHAPI__IndividualCCUs)` > && NewValue)` <a id="structFRHAPI__PlatformIndividualCCUs_1ab58bf479585a604e9b7e2e9ac7e4d0d6"></a>

Sets the value of PlatformCcus using move semantics.
