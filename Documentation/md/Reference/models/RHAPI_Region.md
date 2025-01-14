---
title: RHAPI_Region
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Region`](#structFRHAPI__Region) | Information about a specific region.

## struct `FRHAPI_Region` <a id="structFRHAPI__Region"></a>

```
struct FRHAPI_Region
  : public FRHAPI_Model
```

Information about a specific region.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RegionId`](#structFRHAPI__Region_1a7fd253066a8d41958055f8655b7ad0a5) | ID for this region.
`public int32 `[`SortOrder`](#structFRHAPI__Region_1abfeb2f9bfea64356c17c226f7503882c) | The sorting priority order for this region.
`public bool `[`CustomOnly`](#structFRHAPI__Region_1a773a40307613584027889ce3053cdbfa) | Indicates if the region is for custom games only.
`public FString `[`Description_Optional`](#structFRHAPI__Region_1a25baef84a12c2319c89fadd82aed7f5d) | Text description of the region.
`public bool `[`Description_IsSet`](#structFRHAPI__Region_1a33484d8aa6a83a063577ce58b71375e9) | true if Description_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Region_1afd0967827b860f2b7258a1ef6ca5062c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Region_1a7fb7698b7262cc61b3ba1dff3b020c08)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRegionId`](#structFRHAPI__Region_1a941ebe868435105fc00bfdcd87a74d20)`()` | Gets the value of RegionId.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__Region_1a39f80c6d48a8392cf2de76a81868deef)`() const` | Gets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__Region_1a38c89d60160be4dff6ecc36eea4cba4b)`(const FString & NewValue)` | Sets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__Region_1a7be4c417dcdb38b15a1703231c804a3e)`(FString && NewValue)` | Sets the value of RegionId using move semantics.
`public inline int32 & `[`GetSortOrder`](#structFRHAPI__Region_1a9fce4fd7c06a5bcb72b7be27f2bc12fe)`()` | Gets the value of SortOrder.
`public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Region_1aeb4bc54094c3607597d8a1a3b77bda0f)`() const` | Gets the value of SortOrder.
`public inline void `[`SetSortOrder`](#structFRHAPI__Region_1a998b3a108c78df82054b16d7991874fb)`(const int32 & NewValue)` | Sets the value of SortOrder.
`public inline void `[`SetSortOrder`](#structFRHAPI__Region_1a3566406818aa23d38cbff65cc43358b1)`(int32 && NewValue)` | Sets the value of SortOrder using move semantics.
`public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__Region_1a76cb7dee0e2d25fa2fd934379853f924)`() const` | Returns true if SortOrder matches the default value.
`public inline void `[`SetSortOrderToDefault`](#structFRHAPI__Region_1a7c81022a194db12326150423521a3698)`()` | Sets the value of SortOrder to its default
`public inline bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a1f745639ecf02bd29a8d68a638460890)`()` | Gets the value of CustomOnly.
`public inline const bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a57b70ecadfa768bde8e2240d41be21e8)`() const` | Gets the value of CustomOnly.
`public inline void `[`SetCustomOnly`](#structFRHAPI__Region_1a27dbc75fe36341d25fe89f42a8f9de11)`(const bool & NewValue)` | Sets the value of CustomOnly.
`public inline void `[`SetCustomOnly`](#structFRHAPI__Region_1a1817152a843f9bdd1ec91f296be491d2)`(bool && NewValue)` | Sets the value of CustomOnly using move semantics.
`public inline bool `[`IsCustomOnlyDefaultValue`](#structFRHAPI__Region_1a0129e268f3e6b69ebcc0b783aef20e17)`() const` | Returns true if CustomOnly matches the default value.
`public inline void `[`SetCustomOnlyToDefault`](#structFRHAPI__Region_1a2d17441ecb1b6cd9be1bff13c862d66e)`()` | Sets the value of CustomOnly to its default
`public inline FString & `[`GetDescription`](#structFRHAPI__Region_1ad1df67079cba9bfc4984f01f38219a15)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__Region_1a2984f12faf472811b4f6fb6f242f8fa2)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__Region_1ad0f22a7a54546bca001489f66a673967)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__Region_1ac306846e54d708f9aa16dcd09f8175d9)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1a33c91d3064173cd51af8791766aeec9d)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1a6936a69da31a1abb03335fe421894d67)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__Region_1a714466401b540da4c26ec1576cdcbbc6)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`SetDescription`](#structFRHAPI__Region_1af8f954be9a70c842bb42d055d0376139)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline bool `[`IsDescriptionSet`](#structFRHAPI__Region_1a2461d4e6500a9f9b8952879fa0aeb416)`() const` | Checks whether Description_Optional has been set.

### Members

#### `public FString `[`RegionId`](#structFRHAPI__Region_1a7fd253066a8d41958055f8655b7ad0a5) <a id="structFRHAPI__Region_1a7fd253066a8d41958055f8655b7ad0a5"></a>

ID for this region.

#### `public int32 `[`SortOrder`](#structFRHAPI__Region_1abfeb2f9bfea64356c17c226f7503882c) <a id="structFRHAPI__Region_1abfeb2f9bfea64356c17c226f7503882c"></a>

The sorting priority order for this region.

#### `public bool `[`CustomOnly`](#structFRHAPI__Region_1a773a40307613584027889ce3053cdbfa) <a id="structFRHAPI__Region_1a773a40307613584027889ce3053cdbfa"></a>

Indicates if the region is for custom games only.

#### `public FString `[`Description_Optional`](#structFRHAPI__Region_1a25baef84a12c2319c89fadd82aed7f5d) <a id="structFRHAPI__Region_1a25baef84a12c2319c89fadd82aed7f5d"></a>

Text description of the region.

#### `public bool `[`Description_IsSet`](#structFRHAPI__Region_1a33484d8aa6a83a063577ce58b71375e9) <a id="structFRHAPI__Region_1a33484d8aa6a83a063577ce58b71375e9"></a>

true if Description_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Region_1afd0967827b860f2b7258a1ef6ca5062c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Region_1afd0967827b860f2b7258a1ef6ca5062c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Region_1a7fb7698b7262cc61b3ba1dff3b020c08)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Region_1a7fb7698b7262cc61b3ba1dff3b020c08"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__Region_1a941ebe868435105fc00bfdcd87a74d20)`()` <a id="structFRHAPI__Region_1a941ebe868435105fc00bfdcd87a74d20"></a>

Gets the value of RegionId.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__Region_1a39f80c6d48a8392cf2de76a81868deef)`() const` <a id="structFRHAPI__Region_1a39f80c6d48a8392cf2de76a81868deef"></a>

Gets the value of RegionId.

#### `public inline void `[`SetRegionId`](#structFRHAPI__Region_1a38c89d60160be4dff6ecc36eea4cba4b)`(const FString & NewValue)` <a id="structFRHAPI__Region_1a38c89d60160be4dff6ecc36eea4cba4b"></a>

Sets the value of RegionId.

#### `public inline void `[`SetRegionId`](#structFRHAPI__Region_1a7be4c417dcdb38b15a1703231c804a3e)`(FString && NewValue)` <a id="structFRHAPI__Region_1a7be4c417dcdb38b15a1703231c804a3e"></a>

Sets the value of RegionId using move semantics.

#### `public inline int32 & `[`GetSortOrder`](#structFRHAPI__Region_1a9fce4fd7c06a5bcb72b7be27f2bc12fe)`()` <a id="structFRHAPI__Region_1a9fce4fd7c06a5bcb72b7be27f2bc12fe"></a>

Gets the value of SortOrder.

#### `public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Region_1aeb4bc54094c3607597d8a1a3b77bda0f)`() const` <a id="structFRHAPI__Region_1aeb4bc54094c3607597d8a1a3b77bda0f"></a>

Gets the value of SortOrder.

#### `public inline void `[`SetSortOrder`](#structFRHAPI__Region_1a998b3a108c78df82054b16d7991874fb)`(const int32 & NewValue)` <a id="structFRHAPI__Region_1a998b3a108c78df82054b16d7991874fb"></a>

Sets the value of SortOrder.

#### `public inline void `[`SetSortOrder`](#structFRHAPI__Region_1a3566406818aa23d38cbff65cc43358b1)`(int32 && NewValue)` <a id="structFRHAPI__Region_1a3566406818aa23d38cbff65cc43358b1"></a>

Sets the value of SortOrder using move semantics.

#### `public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__Region_1a76cb7dee0e2d25fa2fd934379853f924)`() const` <a id="structFRHAPI__Region_1a76cb7dee0e2d25fa2fd934379853f924"></a>

Returns true if SortOrder matches the default value.

#### `public inline void `[`SetSortOrderToDefault`](#structFRHAPI__Region_1a7c81022a194db12326150423521a3698)`()` <a id="structFRHAPI__Region_1a7c81022a194db12326150423521a3698"></a>

Sets the value of SortOrder to its default

#### `public inline bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a1f745639ecf02bd29a8d68a638460890)`()` <a id="structFRHAPI__Region_1a1f745639ecf02bd29a8d68a638460890"></a>

Gets the value of CustomOnly.

#### `public inline const bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a57b70ecadfa768bde8e2240d41be21e8)`() const` <a id="structFRHAPI__Region_1a57b70ecadfa768bde8e2240d41be21e8"></a>

Gets the value of CustomOnly.

#### `public inline void `[`SetCustomOnly`](#structFRHAPI__Region_1a27dbc75fe36341d25fe89f42a8f9de11)`(const bool & NewValue)` <a id="structFRHAPI__Region_1a27dbc75fe36341d25fe89f42a8f9de11"></a>

Sets the value of CustomOnly.

#### `public inline void `[`SetCustomOnly`](#structFRHAPI__Region_1a1817152a843f9bdd1ec91f296be491d2)`(bool && NewValue)` <a id="structFRHAPI__Region_1a1817152a843f9bdd1ec91f296be491d2"></a>

Sets the value of CustomOnly using move semantics.

#### `public inline bool `[`IsCustomOnlyDefaultValue`](#structFRHAPI__Region_1a0129e268f3e6b69ebcc0b783aef20e17)`() const` <a id="structFRHAPI__Region_1a0129e268f3e6b69ebcc0b783aef20e17"></a>

Returns true if CustomOnly matches the default value.

#### `public inline void `[`SetCustomOnlyToDefault`](#structFRHAPI__Region_1a2d17441ecb1b6cd9be1bff13c862d66e)`()` <a id="structFRHAPI__Region_1a2d17441ecb1b6cd9be1bff13c862d66e"></a>

Sets the value of CustomOnly to its default

#### `public inline FString & `[`GetDescription`](#structFRHAPI__Region_1ad1df67079cba9bfc4984f01f38219a15)`()` <a id="structFRHAPI__Region_1ad1df67079cba9bfc4984f01f38219a15"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__Region_1a2984f12faf472811b4f6fb6f242f8fa2)`() const` <a id="structFRHAPI__Region_1a2984f12faf472811b4f6fb6f242f8fa2"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__Region_1ad0f22a7a54546bca001489f66a673967)`(const FString & DefaultValue) const` <a id="structFRHAPI__Region_1ad0f22a7a54546bca001489f66a673967"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDescription`](#structFRHAPI__Region_1ac306846e54d708f9aa16dcd09f8175d9)`(FString & OutValue) const` <a id="structFRHAPI__Region_1ac306846e54d708f9aa16dcd09f8175d9"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1a33c91d3064173cd51af8791766aeec9d)`()` <a id="structFRHAPI__Region_1a33c91d3064173cd51af8791766aeec9d"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1a6936a69da31a1abb03335fe421894d67)`() const` <a id="structFRHAPI__Region_1a6936a69da31a1abb03335fe421894d67"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDescription`](#structFRHAPI__Region_1a714466401b540da4c26ec1576cdcbbc6)`(const FString & NewValue)` <a id="structFRHAPI__Region_1a714466401b540da4c26ec1576cdcbbc6"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline void `[`SetDescription`](#structFRHAPI__Region_1af8f954be9a70c842bb42d055d0376139)`(FString && NewValue)` <a id="structFRHAPI__Region_1af8f954be9a70c842bb42d055d0376139"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af)`()` <a id="structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline bool `[`IsDescriptionSet`](#structFRHAPI__Region_1a2461d4e6500a9f9b8952879fa0aeb416)`() const` <a id="structFRHAPI__Region_1a2461d4e6500a9f9b8952879fa0aeb416"></a>

Checks whether Description_Optional has been set.

