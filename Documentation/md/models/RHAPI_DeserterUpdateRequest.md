# group `RHAPI_DeserterUpdateRequest` <a id="group__RHAPI__DeserterUpdateRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_DeserterUpdateRequest`](#structFRHAPI__DeserterUpdateRequest) | 

## struct `FRHAPI_DeserterUpdateRequest` <a id="structFRHAPI__DeserterUpdateRequest"></a>

```
struct FRHAPI_DeserterUpdateRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`DeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1abc5a2bfca5dc0bbcb24059f0b0646e67) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public int32 `[`DeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ac80af6ecd1fdc8e77afc74bb313fe68c) | The number of times a player has deserted before the expiration.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__DeserterUpdateRequest_1a9d624dd17989a5011d32e545f4c8c83f) | Custom data about a players desertion status.
`public bool `[`CustomData_IsSet`](#structFRHAPI__DeserterUpdateRequest_1ad18fdc843a868e4dfe59153c294d1ec5) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__DeserterUpdateRequest_1ae7f10f24271c923cf68c4d120de3adf8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__DeserterUpdateRequest_1ab696319431ac9fcccb61d7e15e967604)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1aed611343bfe1e9edc7042051b97e7db3)`()` | Gets the value of DeserterExpiration.
`public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1aaee4a1afd2768036284934ebde4af3c4)`() const` | Gets the value of DeserterExpiration.
`public inline void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a40498a8ddd61dab1f042ef765f2e886e)`(const FDateTime & NewValue)` | Sets the value of DeserterExpiration.
`public inline void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a68aa25df89df4c30fde3371f670b0200)`(FDateTime && NewValue)` | Sets the value of DeserterExpiration using move semantics.
`public inline int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1af052361494f85de8fbd300e816bf29d2)`()` | Gets the value of DeserterCount.
`public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a220991398c01f54eb3dd06d5ce432221)`() const` | Gets the value of DeserterCount.
`public inline void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ab76ae6905d3e80cebcddb8db142477e0)`(const int32 & NewValue)` | Sets the value of DeserterCount.
`public inline void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a53b1365663b095b5a260336b90bbeae4)`(int32 && NewValue)` | Sets the value of DeserterCount using move semantics.
`public inline bool `[`IsDeserterCountDefaultValue`](#structFRHAPI__DeserterUpdateRequest_1a8456762aa88a7fca3e7a16f2ef063a1b)`() const` | Returns true if DeserterCount matches the default value.
`public inline void `[`SetDeserterCountToDefault`](#structFRHAPI__DeserterUpdateRequest_1a7bc74864258e13cbf17ed269c6d150be)`()` | Sets the value of DeserterCount to its default
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1ae605b14ef75bd97bfbb7dce1dc428fca)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a83c27ac4303b204686014642b0107c76)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a7af2b9ac4e8eb2dab038748219c3134b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a33ffec908a48eadac90bba9bfdf22ce9)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1af38b80dc02127f2a818049b17cef59bf)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1a2e640de51aa235a904ea768fad2ee9b9)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a30f9399f7db13b0c0587f35388b14f7e)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a660f3f2dec0b37be51e06c1b5eb6f65b)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FDateTime `[`DeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1abc5a2bfca5dc0bbcb24059f0b0646e67) <a id="structFRHAPI__DeserterUpdateRequest_1abc5a2bfca5dc0bbcb24059f0b0646e67"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public int32 `[`DeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ac80af6ecd1fdc8e77afc74bb313fe68c) <a id="structFRHAPI__DeserterUpdateRequest_1ac80af6ecd1fdc8e77afc74bb313fe68c"></a>

The number of times a player has deserted before the expiration.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__DeserterUpdateRequest_1a9d624dd17989a5011d32e545f4c8c83f) <a id="structFRHAPI__DeserterUpdateRequest_1a9d624dd17989a5011d32e545f4c8c83f"></a>

Custom data about a players desertion status.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__DeserterUpdateRequest_1ad18fdc843a868e4dfe59153c294d1ec5) <a id="structFRHAPI__DeserterUpdateRequest_1ad18fdc843a868e4dfe59153c294d1ec5"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__DeserterUpdateRequest_1ae7f10f24271c923cf68c4d120de3adf8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__DeserterUpdateRequest_1ae7f10f24271c923cf68c4d120de3adf8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__DeserterUpdateRequest_1ab696319431ac9fcccb61d7e15e967604)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__DeserterUpdateRequest_1ab696319431ac9fcccb61d7e15e967604"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1aed611343bfe1e9edc7042051b97e7db3)`()` <a id="structFRHAPI__DeserterUpdateRequest_1aed611343bfe1e9edc7042051b97e7db3"></a>

Gets the value of DeserterExpiration.

#### `public inline const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1aaee4a1afd2768036284934ebde4af3c4)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1aaee4a1afd2768036284934ebde4af3c4"></a>

Gets the value of DeserterExpiration.

#### `public inline void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a40498a8ddd61dab1f042ef765f2e886e)`(const FDateTime & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a40498a8ddd61dab1f042ef765f2e886e"></a>

Sets the value of DeserterExpiration.

#### `public inline void `[`SetDeserterExpiration`](#structFRHAPI__DeserterUpdateRequest_1a68aa25df89df4c30fde3371f670b0200)`(FDateTime && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a68aa25df89df4c30fde3371f670b0200"></a>

Sets the value of DeserterExpiration using move semantics.

#### `public inline int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1af052361494f85de8fbd300e816bf29d2)`()` <a id="structFRHAPI__DeserterUpdateRequest_1af052361494f85de8fbd300e816bf29d2"></a>

Gets the value of DeserterCount.

#### `public inline const int32 & `[`GetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a220991398c01f54eb3dd06d5ce432221)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a220991398c01f54eb3dd06d5ce432221"></a>

Gets the value of DeserterCount.

#### `public inline void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1ab76ae6905d3e80cebcddb8db142477e0)`(const int32 & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1ab76ae6905d3e80cebcddb8db142477e0"></a>

Sets the value of DeserterCount.

#### `public inline void `[`SetDeserterCount`](#structFRHAPI__DeserterUpdateRequest_1a53b1365663b095b5a260336b90bbeae4)`(int32 && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a53b1365663b095b5a260336b90bbeae4"></a>

Sets the value of DeserterCount using move semantics.

#### `public inline bool `[`IsDeserterCountDefaultValue`](#structFRHAPI__DeserterUpdateRequest_1a8456762aa88a7fca3e7a16f2ef063a1b)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a8456762aa88a7fca3e7a16f2ef063a1b"></a>

Returns true if DeserterCount matches the default value.

#### `public inline void `[`SetDeserterCountToDefault`](#structFRHAPI__DeserterUpdateRequest_1a7bc74864258e13cbf17ed269c6d150be)`()` <a id="structFRHAPI__DeserterUpdateRequest_1a7bc74864258e13cbf17ed269c6d150be"></a>

Sets the value of DeserterCount to its default

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1ae605b14ef75bd97bfbb7dce1dc428fca)`()` <a id="structFRHAPI__DeserterUpdateRequest_1ae605b14ef75bd97bfbb7dce1dc428fca"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a83c27ac4303b204686014642b0107c76)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a83c27ac4303b204686014642b0107c76"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a7af2b9ac4e8eb2dab038748219c3134b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1a7af2b9ac4e8eb2dab038748219c3134b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a33ffec908a48eadac90bba9bfdf22ce9)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__DeserterUpdateRequest_1a33ffec908a48eadac90bba9bfdf22ce9"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1af38b80dc02127f2a818049b17cef59bf)`()` <a id="structFRHAPI__DeserterUpdateRequest_1af38b80dc02127f2a818049b17cef59bf"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__DeserterUpdateRequest_1a2e640de51aa235a904ea768fad2ee9b9)`() const` <a id="structFRHAPI__DeserterUpdateRequest_1a2e640de51aa235a904ea768fad2ee9b9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a30f9399f7db13b0c0587f35388b14f7e)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a30f9399f7db13b0c0587f35388b14f7e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__DeserterUpdateRequest_1a660f3f2dec0b37be51e06c1b5eb6f65b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__DeserterUpdateRequest_1a660f3f2dec0b37be51e06c1b5eb6f65b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a)`()` <a id="structFRHAPI__DeserterUpdateRequest_1aaa49a77e8a5df6f2321b8d1fca196c4a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
