# RHAPI_Region <a id="group__RHAPI__Region"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Region`](#structFRHAPI__Region) | 

## struct `FRHAPI_Region` <a id="structFRHAPI__Region"></a>

```
struct FRHAPI_Region
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RegionId`](#structFRHAPI__Region_1a7fd253066a8d41958055f8655b7ad0a5) | ID for this region.
`public int32 `[`SortOrder`](#structFRHAPI__Region_1abfeb2f9bfea64356c17c226f7503882c) | The sorting priority order for this region.
`public bool `[`CustomOnly`](#structFRHAPI__Region_1a773a40307613584027889ce3053cdbfa) | Indicates if the region is for custom games only.
`public FString `[`Description_Optional`](#structFRHAPI__Region_1a25baef84a12c2319c89fadd82aed7f5d) | Text description of the region.
`public bool `[`Description_IsSet`](#structFRHAPI__Region_1a33484d8aa6a83a063577ce58b71375e9) | true if Description_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Region_1a844e25dd395ab4cc20d6909938b48994)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Region_1a3a0dcfc462e78f2b31008333918e0b08)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRegionId`](#structFRHAPI__Region_1a419a7d9e9b92188982ca861d534590fb)`()` | Gets the value of RegionId.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__Region_1a0813644e30e617ef463b8e52f44d8eb8)`() const` | Gets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__Region_1a481c38e352a997da4bf2e9345844827b)`(FString NewValue)` | Sets the value of RegionId.
`public inline int32 & `[`GetSortOrder`](#structFRHAPI__Region_1aa7dc4cb8092b22bcc4baa15f7bec2fd2)`()` | Gets the value of SortOrder.
`public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Region_1a6651d5bca086b245a4e949fb116731ad)`() const` | Gets the value of SortOrder.
`public inline void `[`SetSortOrder`](#structFRHAPI__Region_1ad7752eba9aae5a0c44a18c065a2c6991)`(int32 NewValue)` | Sets the value of SortOrder.
`public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__Region_1a76cb7dee0e2d25fa2fd934379853f924)`() const` | Returns true if SortOrder matches the default value.
`public inline void `[`SetSortOrderToDefault`](#structFRHAPI__Region_1a7c81022a194db12326150423521a3698)`()` | Sets the value of SortOrder to its default
`public inline bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a98a2d5f05eb448de6a9f41eee1cd1c96)`()` | Gets the value of CustomOnly.
`public inline const bool & `[`GetCustomOnly`](#structFRHAPI__Region_1ad887eb788b8f721214b97d0d243416be)`() const` | Gets the value of CustomOnly.
`public inline void `[`SetCustomOnly`](#structFRHAPI__Region_1a2e64c31a8fd39218cebc02a6d34913cb)`(bool NewValue)` | Sets the value of CustomOnly.
`public inline bool `[`IsCustomOnlyDefaultValue`](#structFRHAPI__Region_1a0129e268f3e6b69ebcc0b783aef20e17)`() const` | Returns true if CustomOnly matches the default value.
`public inline void `[`SetCustomOnlyToDefault`](#structFRHAPI__Region_1a2d17441ecb1b6cd9be1bff13c862d66e)`()` | Sets the value of CustomOnly to its default
`public inline FString & `[`GetDescription`](#structFRHAPI__Region_1a71afda28fd541a90cc8933f4259af66b)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__Region_1a7c9ed9b0a580c819228c61f521d88164)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__Region_1a3ac7838aeece58ff512722ed94406db5)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__Region_1ac306846e54d708f9aa16dcd09f8175d9)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1adcb53a10f76cc1cdf30c3f25a5eba3f5)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1a946f5745b8fa3527ea5fcc071a796fab)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__Region_1ae3ca8eb54748b345e2ba34811834ce7b)`(FString NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`ClearDescription`](#structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.

#### Members

#### `public FString `[`RegionId`](#structFRHAPI__Region_1a7fd253066a8d41958055f8655b7ad0a5) <a id="structFRHAPI__Region_1a7fd253066a8d41958055f8655b7ad0a5"></a>

ID for this region.

<br>
#### `public int32 `[`SortOrder`](#structFRHAPI__Region_1abfeb2f9bfea64356c17c226f7503882c) <a id="structFRHAPI__Region_1abfeb2f9bfea64356c17c226f7503882c"></a>

The sorting priority order for this region.

<br>
#### `public bool `[`CustomOnly`](#structFRHAPI__Region_1a773a40307613584027889ce3053cdbfa) <a id="structFRHAPI__Region_1a773a40307613584027889ce3053cdbfa"></a>

Indicates if the region is for custom games only.

<br>
#### `public FString `[`Description_Optional`](#structFRHAPI__Region_1a25baef84a12c2319c89fadd82aed7f5d) <a id="structFRHAPI__Region_1a25baef84a12c2319c89fadd82aed7f5d"></a>

Text description of the region.

<br>
#### `public bool `[`Description_IsSet`](#structFRHAPI__Region_1a33484d8aa6a83a063577ce58b71375e9) <a id="structFRHAPI__Region_1a33484d8aa6a83a063577ce58b71375e9"></a>

true if Description_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Region_1a844e25dd395ab4cc20d6909938b48994)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Region_1a844e25dd395ab4cc20d6909938b48994"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Region_1a3a0dcfc462e78f2b31008333918e0b08)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Region_1a3a0dcfc462e78f2b31008333918e0b08"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetRegionId`](#structFRHAPI__Region_1a419a7d9e9b92188982ca861d534590fb)`()` <a id="structFRHAPI__Region_1a419a7d9e9b92188982ca861d534590fb"></a>

Gets the value of RegionId.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__Region_1a0813644e30e617ef463b8e52f44d8eb8)`() const` <a id="structFRHAPI__Region_1a0813644e30e617ef463b8e52f44d8eb8"></a>

Gets the value of RegionId.

<br>
#### `public inline void `[`SetRegionId`](#structFRHAPI__Region_1a481c38e352a997da4bf2e9345844827b)`(FString NewValue)` <a id="structFRHAPI__Region_1a481c38e352a997da4bf2e9345844827b"></a>

Sets the value of RegionId.

<br>
#### `public inline int32 & `[`GetSortOrder`](#structFRHAPI__Region_1aa7dc4cb8092b22bcc4baa15f7bec2fd2)`()` <a id="structFRHAPI__Region_1aa7dc4cb8092b22bcc4baa15f7bec2fd2"></a>

Gets the value of SortOrder.

<br>
#### `public inline const int32 & `[`GetSortOrder`](#structFRHAPI__Region_1a6651d5bca086b245a4e949fb116731ad)`() const` <a id="structFRHAPI__Region_1a6651d5bca086b245a4e949fb116731ad"></a>

Gets the value of SortOrder.

<br>
#### `public inline void `[`SetSortOrder`](#structFRHAPI__Region_1ad7752eba9aae5a0c44a18c065a2c6991)`(int32 NewValue)` <a id="structFRHAPI__Region_1ad7752eba9aae5a0c44a18c065a2c6991"></a>

Sets the value of SortOrder.

<br>
#### `public inline bool `[`IsSortOrderDefaultValue`](#structFRHAPI__Region_1a76cb7dee0e2d25fa2fd934379853f924)`() const` <a id="structFRHAPI__Region_1a76cb7dee0e2d25fa2fd934379853f924"></a>

Returns true if SortOrder matches the default value.

<br>
#### `public inline void `[`SetSortOrderToDefault`](#structFRHAPI__Region_1a7c81022a194db12326150423521a3698)`()` <a id="structFRHAPI__Region_1a7c81022a194db12326150423521a3698"></a>

Sets the value of SortOrder to its default

<br>
#### `public inline bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a98a2d5f05eb448de6a9f41eee1cd1c96)`()` <a id="structFRHAPI__Region_1a98a2d5f05eb448de6a9f41eee1cd1c96"></a>

Gets the value of CustomOnly.

<br>
#### `public inline const bool & `[`GetCustomOnly`](#structFRHAPI__Region_1ad887eb788b8f721214b97d0d243416be)`() const` <a id="structFRHAPI__Region_1ad887eb788b8f721214b97d0d243416be"></a>

Gets the value of CustomOnly.

<br>
#### `public inline void `[`SetCustomOnly`](#structFRHAPI__Region_1a2e64c31a8fd39218cebc02a6d34913cb)`(bool NewValue)` <a id="structFRHAPI__Region_1a2e64c31a8fd39218cebc02a6d34913cb"></a>

Sets the value of CustomOnly.

<br>
#### `public inline bool `[`IsCustomOnlyDefaultValue`](#structFRHAPI__Region_1a0129e268f3e6b69ebcc0b783aef20e17)`() const` <a id="structFRHAPI__Region_1a0129e268f3e6b69ebcc0b783aef20e17"></a>

Returns true if CustomOnly matches the default value.

<br>
#### `public inline void `[`SetCustomOnlyToDefault`](#structFRHAPI__Region_1a2d17441ecb1b6cd9be1bff13c862d66e)`()` <a id="structFRHAPI__Region_1a2d17441ecb1b6cd9be1bff13c862d66e"></a>

Sets the value of CustomOnly to its default

<br>
#### `public inline FString & `[`GetDescription`](#structFRHAPI__Region_1a71afda28fd541a90cc8933f4259af66b)`()` <a id="structFRHAPI__Region_1a71afda28fd541a90cc8933f4259af66b"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__Region_1a7c9ed9b0a580c819228c61f521d88164)`() const` <a id="structFRHAPI__Region_1a7c9ed9b0a580c819228c61f521d88164"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__Region_1a3ac7838aeece58ff512722ed94406db5)`(const FString & DefaultValue) const` <a id="structFRHAPI__Region_1a3ac7838aeece58ff512722ed94406db5"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDescription`](#structFRHAPI__Region_1ac306846e54d708f9aa16dcd09f8175d9)`(FString & OutValue) const` <a id="structFRHAPI__Region_1ac306846e54d708f9aa16dcd09f8175d9"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1adcb53a10f76cc1cdf30c3f25a5eba3f5)`()` <a id="structFRHAPI__Region_1adcb53a10f76cc1cdf30c3f25a5eba3f5"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1a946f5745b8fa3527ea5fcc071a796fab)`() const` <a id="structFRHAPI__Region_1a946f5745b8fa3527ea5fcc071a796fab"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDescription`](#structFRHAPI__Region_1ae3ca8eb54748b345e2ba34811834ce7b)`(FString NewValue)` <a id="structFRHAPI__Region_1ae3ca8eb54748b345e2ba34811834ce7b"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

<br>
#### `public inline void `[`ClearDescription`](#structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af)`()` <a id="structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

<br>
