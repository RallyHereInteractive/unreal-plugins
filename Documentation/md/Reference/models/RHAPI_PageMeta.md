---
title: RHAPI_PageMeta
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PageMeta`](#structFRHAPI__PageMeta) | 

## struct `FRHAPI_PageMeta` <a id="structFRHAPI__PageMeta"></a>

```
struct FRHAPI_PageMeta
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Page`](#structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67) | 
`public int32 `[`Limit`](#structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546) | 
`public int32 `[`Total`](#structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PageMeta_1a3a6c36c80d941d3803312fdd3396c4b5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PageMeta_1a53f5dc92abc0b7edbf4e5a8cdda6795a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPage`](#structFRHAPI__PageMeta_1a82b9f23db8a2dcc99360d91e7006f5f7)`()` | Gets the value of Page.
`public inline const int32 & `[`GetPage`](#structFRHAPI__PageMeta_1a4434a0803bb2eca1740b5f758908489e)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__PageMeta_1aa1e4cab16e2b23f83e88a2fc86964641)`(const int32 & NewValue)` | Sets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__PageMeta_1aa4548f30744d45005a8de5394b4f92e4)`(int32 && NewValue)` | Sets the value of Page using move semantics.
`public inline bool `[`IsPageDefaultValue`](#structFRHAPI__PageMeta_1a94fa3af0ff5253703ae52a78a2114844)`() const` | Returns true if Page matches the default value.
`public inline void `[`SetPageToDefault`](#structFRHAPI__PageMeta_1a939ed340b81a12ea247b275682232b1a)`()` | Sets the value of Page to its default
`public inline int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a4365770e26763ba2cef00cde80e82305)`()` | Gets the value of Limit.
`public inline const int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1ad5c5caa369399c7c35955e1f8d84a2c2)`() const` | Gets the value of Limit.
`public inline void `[`SetLimit`](#structFRHAPI__PageMeta_1acb6abc9056ba40b3d3a6845d0038f099)`(const int32 & NewValue)` | Sets the value of Limit.
`public inline void `[`SetLimit`](#structFRHAPI__PageMeta_1a70dc4834ca91acadffc3e14704feea63)`(int32 && NewValue)` | Sets the value of Limit using move semantics.
`public inline bool `[`IsLimitDefaultValue`](#structFRHAPI__PageMeta_1a47179c3bc0898b6bbf9933190cd9c098)`() const` | Returns true if Limit matches the default value.
`public inline void `[`SetLimitToDefault`](#structFRHAPI__PageMeta_1adaa1f4e0bf20a7e6763f9bdc280c4f10)`()` | Sets the value of Limit to its default
`public inline int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a7e6133d46c53d370b8c0c805fb7f27a8)`()` | Gets the value of Total.
`public inline const int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1aef64d242292a305c3a167b7d11956bca)`() const` | Gets the value of Total.
`public inline void `[`SetTotal`](#structFRHAPI__PageMeta_1a806413086a1057520bd4b638f85717c3)`(const int32 & NewValue)` | Sets the value of Total.
`public inline void `[`SetTotal`](#structFRHAPI__PageMeta_1a2ebe4335c034c1ea1fb1088574335f55)`(int32 && NewValue)` | Sets the value of Total using move semantics.
`public inline bool `[`IsTotalDefaultValue`](#structFRHAPI__PageMeta_1a999342514882e895d280ab861137cba1)`() const` | Returns true if Total matches the default value.
`public inline void `[`SetTotalToDefault`](#structFRHAPI__PageMeta_1a32d285464f71b75b05be71450f894b97)`()` | Sets the value of Total to its default

### Members

#### `public int32 `[`Page`](#structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67) <a id="structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67"></a>

#### `public int32 `[`Limit`](#structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546) <a id="structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546"></a>

#### `public int32 `[`Total`](#structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859) <a id="structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PageMeta_1a3a6c36c80d941d3803312fdd3396c4b5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PageMeta_1a3a6c36c80d941d3803312fdd3396c4b5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PageMeta_1a53f5dc92abc0b7edbf4e5a8cdda6795a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PageMeta_1a53f5dc92abc0b7edbf4e5a8cdda6795a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPage`](#structFRHAPI__PageMeta_1a82b9f23db8a2dcc99360d91e7006f5f7)`()` <a id="structFRHAPI__PageMeta_1a82b9f23db8a2dcc99360d91e7006f5f7"></a>

Gets the value of Page.

#### `public inline const int32 & `[`GetPage`](#structFRHAPI__PageMeta_1a4434a0803bb2eca1740b5f758908489e)`() const` <a id="structFRHAPI__PageMeta_1a4434a0803bb2eca1740b5f758908489e"></a>

Gets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__PageMeta_1aa1e4cab16e2b23f83e88a2fc86964641)`(const int32 & NewValue)` <a id="structFRHAPI__PageMeta_1aa1e4cab16e2b23f83e88a2fc86964641"></a>

Sets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__PageMeta_1aa4548f30744d45005a8de5394b4f92e4)`(int32 && NewValue)` <a id="structFRHAPI__PageMeta_1aa4548f30744d45005a8de5394b4f92e4"></a>

Sets the value of Page using move semantics.

#### `public inline bool `[`IsPageDefaultValue`](#structFRHAPI__PageMeta_1a94fa3af0ff5253703ae52a78a2114844)`() const` <a id="structFRHAPI__PageMeta_1a94fa3af0ff5253703ae52a78a2114844"></a>

Returns true if Page matches the default value.

#### `public inline void `[`SetPageToDefault`](#structFRHAPI__PageMeta_1a939ed340b81a12ea247b275682232b1a)`()` <a id="structFRHAPI__PageMeta_1a939ed340b81a12ea247b275682232b1a"></a>

Sets the value of Page to its default

#### `public inline int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a4365770e26763ba2cef00cde80e82305)`()` <a id="structFRHAPI__PageMeta_1a4365770e26763ba2cef00cde80e82305"></a>

Gets the value of Limit.

#### `public inline const int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1ad5c5caa369399c7c35955e1f8d84a2c2)`() const` <a id="structFRHAPI__PageMeta_1ad5c5caa369399c7c35955e1f8d84a2c2"></a>

Gets the value of Limit.

#### `public inline void `[`SetLimit`](#structFRHAPI__PageMeta_1acb6abc9056ba40b3d3a6845d0038f099)`(const int32 & NewValue)` <a id="structFRHAPI__PageMeta_1acb6abc9056ba40b3d3a6845d0038f099"></a>

Sets the value of Limit.

#### `public inline void `[`SetLimit`](#structFRHAPI__PageMeta_1a70dc4834ca91acadffc3e14704feea63)`(int32 && NewValue)` <a id="structFRHAPI__PageMeta_1a70dc4834ca91acadffc3e14704feea63"></a>

Sets the value of Limit using move semantics.

#### `public inline bool `[`IsLimitDefaultValue`](#structFRHAPI__PageMeta_1a47179c3bc0898b6bbf9933190cd9c098)`() const` <a id="structFRHAPI__PageMeta_1a47179c3bc0898b6bbf9933190cd9c098"></a>

Returns true if Limit matches the default value.

#### `public inline void `[`SetLimitToDefault`](#structFRHAPI__PageMeta_1adaa1f4e0bf20a7e6763f9bdc280c4f10)`()` <a id="structFRHAPI__PageMeta_1adaa1f4e0bf20a7e6763f9bdc280c4f10"></a>

Sets the value of Limit to its default

#### `public inline int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a7e6133d46c53d370b8c0c805fb7f27a8)`()` <a id="structFRHAPI__PageMeta_1a7e6133d46c53d370b8c0c805fb7f27a8"></a>

Gets the value of Total.

#### `public inline const int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1aef64d242292a305c3a167b7d11956bca)`() const` <a id="structFRHAPI__PageMeta_1aef64d242292a305c3a167b7d11956bca"></a>

Gets the value of Total.

#### `public inline void `[`SetTotal`](#structFRHAPI__PageMeta_1a806413086a1057520bd4b638f85717c3)`(const int32 & NewValue)` <a id="structFRHAPI__PageMeta_1a806413086a1057520bd4b638f85717c3"></a>

Sets the value of Total.

#### `public inline void `[`SetTotal`](#structFRHAPI__PageMeta_1a2ebe4335c034c1ea1fb1088574335f55)`(int32 && NewValue)` <a id="structFRHAPI__PageMeta_1a2ebe4335c034c1ea1fb1088574335f55"></a>

Sets the value of Total using move semantics.

#### `public inline bool `[`IsTotalDefaultValue`](#structFRHAPI__PageMeta_1a999342514882e895d280ab861137cba1)`() const` <a id="structFRHAPI__PageMeta_1a999342514882e895d280ab861137cba1"></a>

Returns true if Total matches the default value.

#### `public inline void `[`SetTotalToDefault`](#structFRHAPI__PageMeta_1a32d285464f71b75b05be71450f894b97)`()` <a id="structFRHAPI__PageMeta_1a32d285464f71b75b05be71450f894b97"></a>

Sets the value of Total to its default

