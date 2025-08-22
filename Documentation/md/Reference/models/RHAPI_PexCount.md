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
`public inline FORCEINLINE float & `[`GetCount`](#structFRHAPI__PexCount_1a1c653c553e96166667bed6f52a97a844)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetCount`](#structFRHAPI__PexCount_1a3bab25bd21a73bff2fbf3f37150ba2a3)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetCount`](#structFRHAPI__PexCount_1a6f0a6743fe04dc7e2a450720a9aa8fc7)`(const float & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCount`](#structFRHAPI__PexCount_1aaf41f70c3e0b9711a3d76360b8810695)`(float & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetCountOrNull`](#structFRHAPI__PexCount_1a7d06259a97fb97643ffb93a36db4ddfb)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetCountOrNull`](#structFRHAPI__PexCount_1a0c945a3610927c504015d9aabc0695e6)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__PexCount_1a8f840f7ef4099bef3e1f0f078160d7ae)`(const float & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__PexCount_1a36d595b52ec1c9bcbe98aa0293e73b55)`(float && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__PexCount_1aeed66bc650144cee6f9b1eaf08fb9249)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline FORCEINLINE void `[`SetCountToNull`](#structFRHAPI__PexCount_1aa0f04e12863102c9b7b7ca10a5245091)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCountNull`](#structFRHAPI__PexCount_1ae07723f292c89ae2cd2a9a75f625f228)`() const` | Checks whether Count_Optional is set to null.

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

#### `public inline FORCEINLINE float & `[`GetCount`](#structFRHAPI__PexCount_1a1c653c553e96166667bed6f52a97a844)`()` <a id="structFRHAPI__PexCount_1a1c653c553e96166667bed6f52a97a844"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetCount`](#structFRHAPI__PexCount_1a3bab25bd21a73bff2fbf3f37150ba2a3)`() const` <a id="structFRHAPI__PexCount_1a3bab25bd21a73bff2fbf3f37150ba2a3"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetCount`](#structFRHAPI__PexCount_1a6f0a6743fe04dc7e2a450720a9aa8fc7)`(const float & DefaultValue) const` <a id="structFRHAPI__PexCount_1a6f0a6743fe04dc7e2a450720a9aa8fc7"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCount`](#structFRHAPI__PexCount_1aaf41f70c3e0b9711a3d76360b8810695)`(float & OutValue) const` <a id="structFRHAPI__PexCount_1aaf41f70c3e0b9711a3d76360b8810695"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetCountOrNull`](#structFRHAPI__PexCount_1a7d06259a97fb97643ffb93a36db4ddfb)`()` <a id="structFRHAPI__PexCount_1a7d06259a97fb97643ffb93a36db4ddfb"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetCountOrNull`](#structFRHAPI__PexCount_1a0c945a3610927c504015d9aabc0695e6)`() const` <a id="structFRHAPI__PexCount_1a0c945a3610927c504015d9aabc0695e6"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__PexCount_1a8f840f7ef4099bef3e1f0f078160d7ae)`(const float & NewValue)` <a id="structFRHAPI__PexCount_1a8f840f7ef4099bef3e1f0f078160d7ae"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCount`](#structFRHAPI__PexCount_1a36d595b52ec1c9bcbe98aa0293e73b55)`(float && NewValue)` <a id="structFRHAPI__PexCount_1a36d595b52ec1c9bcbe98aa0293e73b55"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__PexCount_1aeed66bc650144cee6f9b1eaf08fb9249)`()` <a id="structFRHAPI__PexCount_1aeed66bc650144cee6f9b1eaf08fb9249"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCountToNull`](#structFRHAPI__PexCount_1aa0f04e12863102c9b7b7ca10a5245091)`()` <a id="structFRHAPI__PexCount_1aa0f04e12863102c9b7b7ca10a5245091"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCountNull`](#structFRHAPI__PexCount_1ae07723f292c89ae2cd2a9a75f625f228)`() const` <a id="structFRHAPI__PexCount_1ae07723f292c89ae2cd2a9a75f625f228"></a>

Checks whether Count_Optional is set to null.

