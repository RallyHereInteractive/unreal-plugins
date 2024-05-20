# group `RHAPI_PageMeta` <a id="group__RHAPI__PageMeta"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PageMeta_1a526bc02761af6690d057a3ba39fe3b3d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PageMeta_1ab83e2c68322bd5468368a8ca4dc49d9b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPage`](#structFRHAPI__PageMeta_1aa13cc6ef0f0b621ac065a75a236e686e)`()` | Gets the value of Page.
`public inline const int32 & `[`GetPage`](#structFRHAPI__PageMeta_1a1ec015c5ce6921cb3e46a6eb9c587704)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__PageMeta_1afc00c473f02b6ec4d7e86cbf7082224c)`(int32 NewValue)` | Sets the value of Page.
`public inline bool `[`IsPageDefaultValue`](#structFRHAPI__PageMeta_1a94fa3af0ff5253703ae52a78a2114844)`() const` | Returns true if Page matches the default value.
`public inline void `[`SetPageToDefault`](#structFRHAPI__PageMeta_1a939ed340b81a12ea247b275682232b1a)`()` | Sets the value of Page to its default
`public inline int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a17bdbd54980486c988b388156f899e11)`()` | Gets the value of Limit.
`public inline const int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a0ebc51d14c74144e1e9bf8ee75a7dbce)`() const` | Gets the value of Limit.
`public inline void `[`SetLimit`](#structFRHAPI__PageMeta_1a00b472a80e06eabc0456c0b902bf86f5)`(int32 NewValue)` | Sets the value of Limit.
`public inline bool `[`IsLimitDefaultValue`](#structFRHAPI__PageMeta_1a47179c3bc0898b6bbf9933190cd9c098)`() const` | Returns true if Limit matches the default value.
`public inline void `[`SetLimitToDefault`](#structFRHAPI__PageMeta_1adaa1f4e0bf20a7e6763f9bdc280c4f10)`()` | Sets the value of Limit to its default
`public inline int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a02ef93d30af355daf6b7505e62e02c3e)`()` | Gets the value of Total.
`public inline const int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a786482f7ef05931a754262ec80305689)`() const` | Gets the value of Total.
`public inline void `[`SetTotal`](#structFRHAPI__PageMeta_1ae57e719533a8cd0ef94aaa605254c369)`(int32 NewValue)` | Sets the value of Total.
`public inline bool `[`IsTotalDefaultValue`](#structFRHAPI__PageMeta_1a999342514882e895d280ab861137cba1)`() const` | Returns true if Total matches the default value.
`public inline void `[`SetTotalToDefault`](#structFRHAPI__PageMeta_1a32d285464f71b75b05be71450f894b97)`()` | Sets the value of Total to its default

### Members

#### `public int32 `[`Page`](#structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67) <a id="structFRHAPI__PageMeta_1a6cca0387aa38f6160e818ff8bad85a67"></a>

#### `public int32 `[`Limit`](#structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546) <a id="structFRHAPI__PageMeta_1a1ee76853639b633ab5165c18bda1e546"></a>

#### `public int32 `[`Total`](#structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859) <a id="structFRHAPI__PageMeta_1a13e9adca196130185d55586e2c812859"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PageMeta_1a526bc02761af6690d057a3ba39fe3b3d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PageMeta_1a526bc02761af6690d057a3ba39fe3b3d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PageMeta_1ab83e2c68322bd5468368a8ca4dc49d9b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PageMeta_1ab83e2c68322bd5468368a8ca4dc49d9b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPage`](#structFRHAPI__PageMeta_1aa13cc6ef0f0b621ac065a75a236e686e)`()` <a id="structFRHAPI__PageMeta_1aa13cc6ef0f0b621ac065a75a236e686e"></a>

Gets the value of Page.

#### `public inline const int32 & `[`GetPage`](#structFRHAPI__PageMeta_1a1ec015c5ce6921cb3e46a6eb9c587704)`() const` <a id="structFRHAPI__PageMeta_1a1ec015c5ce6921cb3e46a6eb9c587704"></a>

Gets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__PageMeta_1afc00c473f02b6ec4d7e86cbf7082224c)`(int32 NewValue)` <a id="structFRHAPI__PageMeta_1afc00c473f02b6ec4d7e86cbf7082224c"></a>

Sets the value of Page.

#### `public inline bool `[`IsPageDefaultValue`](#structFRHAPI__PageMeta_1a94fa3af0ff5253703ae52a78a2114844)`() const` <a id="structFRHAPI__PageMeta_1a94fa3af0ff5253703ae52a78a2114844"></a>

Returns true if Page matches the default value.

#### `public inline void `[`SetPageToDefault`](#structFRHAPI__PageMeta_1a939ed340b81a12ea247b275682232b1a)`()` <a id="structFRHAPI__PageMeta_1a939ed340b81a12ea247b275682232b1a"></a>

Sets the value of Page to its default

#### `public inline int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a17bdbd54980486c988b388156f899e11)`()` <a id="structFRHAPI__PageMeta_1a17bdbd54980486c988b388156f899e11"></a>

Gets the value of Limit.

#### `public inline const int32 & `[`GetLimit`](#structFRHAPI__PageMeta_1a0ebc51d14c74144e1e9bf8ee75a7dbce)`() const` <a id="structFRHAPI__PageMeta_1a0ebc51d14c74144e1e9bf8ee75a7dbce"></a>

Gets the value of Limit.

#### `public inline void `[`SetLimit`](#structFRHAPI__PageMeta_1a00b472a80e06eabc0456c0b902bf86f5)`(int32 NewValue)` <a id="structFRHAPI__PageMeta_1a00b472a80e06eabc0456c0b902bf86f5"></a>

Sets the value of Limit.

#### `public inline bool `[`IsLimitDefaultValue`](#structFRHAPI__PageMeta_1a47179c3bc0898b6bbf9933190cd9c098)`() const` <a id="structFRHAPI__PageMeta_1a47179c3bc0898b6bbf9933190cd9c098"></a>

Returns true if Limit matches the default value.

#### `public inline void `[`SetLimitToDefault`](#structFRHAPI__PageMeta_1adaa1f4e0bf20a7e6763f9bdc280c4f10)`()` <a id="structFRHAPI__PageMeta_1adaa1f4e0bf20a7e6763f9bdc280c4f10"></a>

Sets the value of Limit to its default

#### `public inline int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a02ef93d30af355daf6b7505e62e02c3e)`()` <a id="structFRHAPI__PageMeta_1a02ef93d30af355daf6b7505e62e02c3e"></a>

Gets the value of Total.

#### `public inline const int32 & `[`GetTotal`](#structFRHAPI__PageMeta_1a786482f7ef05931a754262ec80305689)`() const` <a id="structFRHAPI__PageMeta_1a786482f7ef05931a754262ec80305689"></a>

Gets the value of Total.

#### `public inline void `[`SetTotal`](#structFRHAPI__PageMeta_1ae57e719533a8cd0ef94aaa605254c369)`(int32 NewValue)` <a id="structFRHAPI__PageMeta_1ae57e719533a8cd0ef94aaa605254c369"></a>

Sets the value of Total.

#### `public inline bool `[`IsTotalDefaultValue`](#structFRHAPI__PageMeta_1a999342514882e895d280ab861137cba1)`() const` <a id="structFRHAPI__PageMeta_1a999342514882e895d280ab861137cba1"></a>

Returns true if Total matches the default value.

#### `public inline void `[`SetTotalToDefault`](#structFRHAPI__PageMeta_1a32d285464f71b75b05be71450f894b97)`()` <a id="structFRHAPI__PageMeta_1a32d285464f71b75b05be71450f894b97"></a>

Sets the value of Total to its default

