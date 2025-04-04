---
title: RHAPI_PexCount
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PexCount`](#structFRHAPI__PexCount) | 

## struct `FRHAPI_PexCount` <a id="structFRHAPI__PexCount"></a>

```
struct FRHAPI_PexCount
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`Count_Optional`](#structFRHAPI__PexCount_1ab3857fd6a2125496df075cd9c4e3a0d5) | 
`public bool `[`Count_IsSet`](#structFRHAPI__PexCount_1a050184966a397013b815e7e2b15001d9) | true if Count_Optional has been set to a value
`public bool `[`Count_IsNull`](#structFRHAPI__PexCount_1a43093b2c88ad2086268b799b69214f55) | true if Count_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PexCount_1a10c74edb8db4fca98fd539968c1a4318)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PexCount_1aa746cddefb81c7766ee0001f9d6fadc2)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline float & `[`GetCount`](#structFRHAPI__PexCount_1a4e27f439b149b58668a09a58aa53cde7)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const float & `[`GetCount`](#structFRHAPI__PexCount_1ae053a2d35d24645bf621f7745221a6a6)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const float & `[`GetCount`](#structFRHAPI__PexCount_1a5e8598877a1baa43709a394d39d5a73a)`(const float & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCount`](#structFRHAPI__PexCount_1ad7662026f67286f692a7f0bd17d25b19)`(float & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetCountOrNull`](#structFRHAPI__PexCount_1a89fafceae2bd684889f631550dadfe39)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetCountOrNull`](#structFRHAPI__PexCount_1aff6f62f11be65194d68ad7dba242abec)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCount`](#structFRHAPI__PexCount_1a11ddb1c41d7ec291a228a0ad23c7b5ad)`(const float & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline void `[`SetCount`](#structFRHAPI__PexCount_1a219a9f3d0e08aa5d943c564ab426a342)`(float && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__PexCount_1aeed66bc650144cee6f9b1eaf08fb9249)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline bool `[`IsCountSet`](#structFRHAPI__PexCount_1ab63c2bda0e5295ef525f66f9c18d0705)`() const` | Checks whether Count_Optional has been set.
`public inline void `[`SetCountToNull`](#structFRHAPI__PexCount_1a487759204e318a2e4bcb3bbc13ded5fd)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCountNull`](#structFRHAPI__PexCount_1aff3464ead48e7017c04a38dcdb5590f7)`() const` | Checks whether Count_Optional is set to null.

### Members

#### `public float `[`Count_Optional`](#structFRHAPI__PexCount_1ab3857fd6a2125496df075cd9c4e3a0d5) <a id="structFRHAPI__PexCount_1ab3857fd6a2125496df075cd9c4e3a0d5"></a>

#### `public bool `[`Count_IsSet`](#structFRHAPI__PexCount_1a050184966a397013b815e7e2b15001d9) <a id="structFRHAPI__PexCount_1a050184966a397013b815e7e2b15001d9"></a>

true if Count_Optional has been set to a value

#### `public bool `[`Count_IsNull`](#structFRHAPI__PexCount_1a43093b2c88ad2086268b799b69214f55) <a id="structFRHAPI__PexCount_1a43093b2c88ad2086268b799b69214f55"></a>

true if Count_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PexCount_1a10c74edb8db4fca98fd539968c1a4318)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PexCount_1a10c74edb8db4fca98fd539968c1a4318"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PexCount_1aa746cddefb81c7766ee0001f9d6fadc2)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PexCount_1aa746cddefb81c7766ee0001f9d6fadc2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline float & `[`GetCount`](#structFRHAPI__PexCount_1a4e27f439b149b58668a09a58aa53cde7)`()` <a id="structFRHAPI__PexCount_1a4e27f439b149b58668a09a58aa53cde7"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const float & `[`GetCount`](#structFRHAPI__PexCount_1ae053a2d35d24645bf621f7745221a6a6)`() const` <a id="structFRHAPI__PexCount_1ae053a2d35d24645bf621f7745221a6a6"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const float & `[`GetCount`](#structFRHAPI__PexCount_1a5e8598877a1baa43709a394d39d5a73a)`(const float & DefaultValue) const` <a id="structFRHAPI__PexCount_1a5e8598877a1baa43709a394d39d5a73a"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCount`](#structFRHAPI__PexCount_1ad7662026f67286f692a7f0bd17d25b19)`(float & OutValue) const` <a id="structFRHAPI__PexCount_1ad7662026f67286f692a7f0bd17d25b19"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetCountOrNull`](#structFRHAPI__PexCount_1a89fafceae2bd684889f631550dadfe39)`()` <a id="structFRHAPI__PexCount_1a89fafceae2bd684889f631550dadfe39"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetCountOrNull`](#structFRHAPI__PexCount_1aff6f62f11be65194d68ad7dba242abec)`() const` <a id="structFRHAPI__PexCount_1aff6f62f11be65194d68ad7dba242abec"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCount`](#structFRHAPI__PexCount_1a11ddb1c41d7ec291a228a0ad23c7b5ad)`(const float & NewValue)` <a id="structFRHAPI__PexCount_1a11ddb1c41d7ec291a228a0ad23c7b5ad"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline void `[`SetCount`](#structFRHAPI__PexCount_1a219a9f3d0e08aa5d943c564ab426a342)`(float && NewValue)` <a id="structFRHAPI__PexCount_1a219a9f3d0e08aa5d943c564ab426a342"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__PexCount_1aeed66bc650144cee6f9b1eaf08fb9249)`()` <a id="structFRHAPI__PexCount_1aeed66bc650144cee6f9b1eaf08fb9249"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline bool `[`IsCountSet`](#structFRHAPI__PexCount_1ab63c2bda0e5295ef525f66f9c18d0705)`() const` <a id="structFRHAPI__PexCount_1ab63c2bda0e5295ef525f66f9c18d0705"></a>

Checks whether Count_Optional has been set.

#### `public inline void `[`SetCountToNull`](#structFRHAPI__PexCount_1a487759204e318a2e4bcb3bbc13ded5fd)`()` <a id="structFRHAPI__PexCount_1a487759204e318a2e4bcb3bbc13ded5fd"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCountNull`](#structFRHAPI__PexCount_1aff3464ead48e7017c04a38dcdb5590f7)`() const` <a id="structFRHAPI__PexCount_1aff3464ead48e7017c04a38dcdb5590f7"></a>

Checks whether Count_Optional is set to null.

