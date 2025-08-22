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
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__Region_1a8c4a44250e92f8a6a632b2ccc6235ca2)`()` | Gets the value of RegionId.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__Region_1ac0622e1fddb119dd78a4f83ede458ae8)`() const` | Gets the value of RegionId.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__Region_1a578717b0fcd85119030ce608c787fbe3)`(const FString & NewValue)` | Sets the value of RegionId.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__Region_1a6fb3985f40964361b17517f86ca5b968)`(FString && NewValue)` | Sets the value of RegionId using move semantics.
`public inline FORCEINLINE int32 & `[`GetSortOrder`](#structFRHAPI__Region_1a731259b1e7e943fb7674accc21578b32)`()` | Gets the value of SortOrder.
`public inline FORCEINLINE const int32 & `[`GetSortOrder`](#structFRHAPI__Region_1a2d8d29d088d8041de1d063609d6b5f9e)`() const` | Gets the value of SortOrder.
`public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__Region_1ad86a30acba2d3e4c051f8062c9cf5d2f)`(const int32 & NewValue)` | Sets the value of SortOrder.
`public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__Region_1a271c1c166f20cf803aa82835fdda84d4)`(int32 && NewValue)` | Sets the value of SortOrder using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_SortOrder`](#structFRHAPI__Region_1a7a5a00aa82e62e6c3f0b5126bbff6423)`()` | Returns the default value of SortOrder.
`public inline FORCEINLINE bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a8d095ba5d7381ed749f979b4c8c437b0)`()` | Gets the value of CustomOnly.
`public inline FORCEINLINE const bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a6ac001fc08c79b84fb11a0aa25631137)`() const` | Gets the value of CustomOnly.
`public inline FORCEINLINE void `[`SetCustomOnly`](#structFRHAPI__Region_1aa1883577ce65e39b502bf823aee202cf)`(const bool & NewValue)` | Sets the value of CustomOnly.
`public inline FORCEINLINE void `[`SetCustomOnly`](#structFRHAPI__Region_1abd73fdf76d15bee41074b1071d4c706b)`(bool && NewValue)` | Sets the value of CustomOnly using move semantics.
`public inline FORCEINLINE bool `[`GetDefaultValue_CustomOnly`](#structFRHAPI__Region_1a1646bd87ed2cd4f8f5e1a3a610c2006a)`()` | Returns the default value of CustomOnly.
`public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__Region_1a9fc040e6633942882287b95fa1dc8da3)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__Region_1a1fbb5d6316d5e2c6c3dff7ba04fe50db)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__Region_1a4c48af80ff5dad700139ea84c9fa7db7)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__Region_1a56c5b985a183c84f0a88e579a395a2e3)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1a5bf3c5931f4de22b3c5f2d8bcc17bf1b)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1ae7aceff19fea5e12dba23d7208afd3bd)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__Region_1a2634cdbc065d7f7d67d3ee777cebd632)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__Region_1aaf047f4cba05911cacc94b2094100a2d)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__Region_1a8c4a44250e92f8a6a632b2ccc6235ca2)`()` <a id="structFRHAPI__Region_1a8c4a44250e92f8a6a632b2ccc6235ca2"></a>

Gets the value of RegionId.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__Region_1ac0622e1fddb119dd78a4f83ede458ae8)`() const` <a id="structFRHAPI__Region_1ac0622e1fddb119dd78a4f83ede458ae8"></a>

Gets the value of RegionId.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__Region_1a578717b0fcd85119030ce608c787fbe3)`(const FString & NewValue)` <a id="structFRHAPI__Region_1a578717b0fcd85119030ce608c787fbe3"></a>

Sets the value of RegionId.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__Region_1a6fb3985f40964361b17517f86ca5b968)`(FString && NewValue)` <a id="structFRHAPI__Region_1a6fb3985f40964361b17517f86ca5b968"></a>

Sets the value of RegionId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetSortOrder`](#structFRHAPI__Region_1a731259b1e7e943fb7674accc21578b32)`()` <a id="structFRHAPI__Region_1a731259b1e7e943fb7674accc21578b32"></a>

Gets the value of SortOrder.

#### `public inline FORCEINLINE const int32 & `[`GetSortOrder`](#structFRHAPI__Region_1a2d8d29d088d8041de1d063609d6b5f9e)`() const` <a id="structFRHAPI__Region_1a2d8d29d088d8041de1d063609d6b5f9e"></a>

Gets the value of SortOrder.

#### `public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__Region_1ad86a30acba2d3e4c051f8062c9cf5d2f)`(const int32 & NewValue)` <a id="structFRHAPI__Region_1ad86a30acba2d3e4c051f8062c9cf5d2f"></a>

Sets the value of SortOrder.

#### `public inline FORCEINLINE void `[`SetSortOrder`](#structFRHAPI__Region_1a271c1c166f20cf803aa82835fdda84d4)`(int32 && NewValue)` <a id="structFRHAPI__Region_1a271c1c166f20cf803aa82835fdda84d4"></a>

Sets the value of SortOrder using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_SortOrder`](#structFRHAPI__Region_1a7a5a00aa82e62e6c3f0b5126bbff6423)`()` <a id="structFRHAPI__Region_1a7a5a00aa82e62e6c3f0b5126bbff6423"></a>

Returns the default value of SortOrder.

#### `public inline FORCEINLINE bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a8d095ba5d7381ed749f979b4c8c437b0)`()` <a id="structFRHAPI__Region_1a8d095ba5d7381ed749f979b4c8c437b0"></a>

Gets the value of CustomOnly.

#### `public inline FORCEINLINE const bool & `[`GetCustomOnly`](#structFRHAPI__Region_1a6ac001fc08c79b84fb11a0aa25631137)`() const` <a id="structFRHAPI__Region_1a6ac001fc08c79b84fb11a0aa25631137"></a>

Gets the value of CustomOnly.

#### `public inline FORCEINLINE void `[`SetCustomOnly`](#structFRHAPI__Region_1aa1883577ce65e39b502bf823aee202cf)`(const bool & NewValue)` <a id="structFRHAPI__Region_1aa1883577ce65e39b502bf823aee202cf"></a>

Sets the value of CustomOnly.

#### `public inline FORCEINLINE void `[`SetCustomOnly`](#structFRHAPI__Region_1abd73fdf76d15bee41074b1071d4c706b)`(bool && NewValue)` <a id="structFRHAPI__Region_1abd73fdf76d15bee41074b1071d4c706b"></a>

Sets the value of CustomOnly using move semantics.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CustomOnly`](#structFRHAPI__Region_1a1646bd87ed2cd4f8f5e1a3a610c2006a)`()` <a id="structFRHAPI__Region_1a1646bd87ed2cd4f8f5e1a3a610c2006a"></a>

Returns the default value of CustomOnly.

#### `public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__Region_1a9fc040e6633942882287b95fa1dc8da3)`()` <a id="structFRHAPI__Region_1a9fc040e6633942882287b95fa1dc8da3"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__Region_1a1fbb5d6316d5e2c6c3dff7ba04fe50db)`() const` <a id="structFRHAPI__Region_1a1fbb5d6316d5e2c6c3dff7ba04fe50db"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__Region_1a4c48af80ff5dad700139ea84c9fa7db7)`(const FString & DefaultValue) const` <a id="structFRHAPI__Region_1a4c48af80ff5dad700139ea84c9fa7db7"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__Region_1a56c5b985a183c84f0a88e579a395a2e3)`(FString & OutValue) const` <a id="structFRHAPI__Region_1a56c5b985a183c84f0a88e579a395a2e3"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1a5bf3c5931f4de22b3c5f2d8bcc17bf1b)`()` <a id="structFRHAPI__Region_1a5bf3c5931f4de22b3c5f2d8bcc17bf1b"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__Region_1ae7aceff19fea5e12dba23d7208afd3bd)`() const` <a id="structFRHAPI__Region_1ae7aceff19fea5e12dba23d7208afd3bd"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__Region_1a2634cdbc065d7f7d67d3ee777cebd632)`(const FString & NewValue)` <a id="structFRHAPI__Region_1a2634cdbc065d7f7d67d3ee777cebd632"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__Region_1aaf047f4cba05911cacc94b2094100a2d)`(FString && NewValue)` <a id="structFRHAPI__Region_1aaf047f4cba05911cacc94b2094100a2d"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af)`()` <a id="structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

