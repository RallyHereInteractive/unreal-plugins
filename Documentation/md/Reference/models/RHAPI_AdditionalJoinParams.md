---
title: RHAPI_AdditionalJoinParams
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AdditionalJoinParams`](#structFRHAPI__AdditionalJoinParams) | Additional parameters to apply to a matchmaking ticket.

## struct `FRHAPI_AdditionalJoinParams` <a id="structFRHAPI__AdditionalJoinParams"></a>

```
struct FRHAPI_AdditionalJoinParams
  : public FRHAPI_Model
```

Additional parameters to apply to a matchmaking ticket.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, float > `[`DoubleArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83) | Additional double arguments to add to the matchmaking ticket.
`public bool `[`DoubleArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707) | true if DoubleArgs_Optional has been set to a value
`public TMap< FString, FString > `[`StringArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4) | Additional string arguments to add to the matchmaking ticket.
`public bool `[`StringArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d) | true if StringArgs_Optional has been set to a value
`public TArray< FString > `[`Tags_Optional`](#structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3) | Additional tags to add to the matchmaking ticket.
`public bool `[`Tags_IsSet`](#structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6) | true if Tags_Optional has been set to a value
`public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd) | Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket.
`public bool `[`Extensions_IsSet`](#structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83) | true if Extensions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AdditionalJoinParams_1a15c180c984f3184041ff5f9dab7c409d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ae409fe92afdad5421a1fd3c0db828bbe)`()` | Gets the value of DoubleArgs_Optional, regardless of it having been set.
`public inline const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ad48bb97d8655ff36738733f8eb076837)`() const` | Gets the value of DoubleArgs_Optional, regardless of it having been set.
`public inline const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ac68fff45f073b4d0c136017b4a724532)`(const TMap< FString, float > & DefaultValue) const` | Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1aee93e59343933267ad1fcaafafcc274b)`(TMap< FString, float > & OutValue) const` | Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a8d838246e4f05dd51d87ef7269780676)`()` | Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a0d168f164ff5cd20732deba6e1adfb88)`() const` | Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1acc48a26a04304f47573677907a76b91c)`(const TMap< FString, float > & NewValue)` | Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true.
`public inline void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a94cc0399784078fbd380a46a3f0afaeb)`(TMap< FString, float > && NewValue)` | Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true using move semantics.
`public inline void `[`ClearDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207)`()` | Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false.
`public inline bool `[`IsDoubleArgsSet`](#structFRHAPI__AdditionalJoinParams_1a67efa7da38de2ffb40a176b7ba4916d6)`() const` | Checks whether DoubleArgs_Optional has been set.
`public inline TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a19efcf78722857c1de81e5c003222ae0)`()` | Gets the value of StringArgs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1aa7139a36dc717a938f41aad4f633cf36)`() const` | Gets the value of StringArgs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a930aa8d153f646929802d6e07a8f1820)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a1d259bb154755e3bb9eca79ac510f427)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1ad825b712fd9305c1d6043fe11f58fb12)`()` | Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1afbe7ef92b623eb5fe199f17ef5deeb84)`() const` | Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a59832950089edb0c4f9b85092fa52447)`(const TMap< FString, FString > & NewValue)` | Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true.
`public inline void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a1224f8a69234fa7c590ef426ffd09fc7)`(TMap< FString, FString > && NewValue)` | Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true using move semantics.
`public inline void `[`ClearStringArgs`](#structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563)`()` | Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false.
`public inline bool `[`IsStringArgsSet`](#structFRHAPI__AdditionalJoinParams_1a321968e43a3d3710c3bd0a2432b38f3e)`() const` | Checks whether StringArgs_Optional has been set.
`public inline TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a902254f2aecd9f486e42d54928c4898b)`()` | Gets the value of Tags_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a786ddf26f8b5acdd0c060d113b52691c)`() const` | Gets the value of Tags_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1ab52a89966ebf510e30e7ca03eaa47302)`(const TArray< FString > & DefaultValue) const` | Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a6735a8b6cb588aa2f3805a3ed5eb34a3)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a9d5955c1d2033824c85b96ea6fdff230)`()` | Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1ad5412929a3aa5898e9d9df84e9b89da2)`() const` | Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1ae958fd06d8bda2bf0931ef23b471acc6)`(const TArray< FString > & NewValue)` | Sets the value of Tags_Optional and also sets Tags_IsSet to true.
`public inline void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1a39e86864adbd6ccce2d913cf636c7f7a)`(TArray< FString > && NewValue)` | Sets the value of Tags_Optional and also sets Tags_IsSet to true using move semantics.
`public inline void `[`ClearTags`](#structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9)`()` | Clears the value of Tags_Optional and sets Tags_IsSet to false.
`public inline bool `[`IsTagsSet`](#structFRHAPI__AdditionalJoinParams_1adb89ab77b8a48ffd24bfb32beaaba758)`() const` | Checks whether Tags_Optional has been set.
`public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a423222e81266a75941785d2855bfc442)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a45e84ab49337b9bdb61df1ee6bb01a13)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1ad251729f2b3795d059cefaa300e0f2a3)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a6f76d92a00aa66b83d89f707ef306940)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1a50706eb832fa6bef02effa67eece8148)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1add6b5e6ad54be84f40912838253769e7)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a1801f3196252cf1f2d86fd2757233001)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a120c011a9c0836cb567ec4f386f0c2f4)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.
`public inline bool `[`IsExtensionsSet`](#structFRHAPI__AdditionalJoinParams_1a0cefe699ef841f1a9d0e462195ea2bcf)`() const` | Checks whether Extensions_Optional has been set.

### Members

#### `public TMap< FString, float > `[`DoubleArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83) <a id="structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83"></a>

Additional double arguments to add to the matchmaking ticket.

#### `public bool `[`DoubleArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707) <a id="structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707"></a>

true if DoubleArgs_Optional has been set to a value

#### `public TMap< FString, FString > `[`StringArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4) <a id="structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4"></a>

Additional string arguments to add to the matchmaking ticket.

#### `public bool `[`StringArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d) <a id="structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d"></a>

true if StringArgs_Optional has been set to a value

#### `public TArray< FString > `[`Tags_Optional`](#structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3) <a id="structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3"></a>

Additional tags to add to the matchmaking ticket.

#### `public bool `[`Tags_IsSet`](#structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6) <a id="structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6"></a>

true if Tags_Optional has been set to a value

#### `public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd) <a id="structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd"></a>

Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket.

#### `public bool `[`Extensions_IsSet`](#structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83) <a id="structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83"></a>

true if Extensions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AdditionalJoinParams_1a15c180c984f3184041ff5f9dab7c409d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AdditionalJoinParams_1a15c180c984f3184041ff5f9dab7c409d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ae409fe92afdad5421a1fd3c0db828bbe)`()` <a id="structFRHAPI__AdditionalJoinParams_1ae409fe92afdad5421a1fd3c0db828bbe"></a>

Gets the value of DoubleArgs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ad48bb97d8655ff36738733f8eb076837)`() const` <a id="structFRHAPI__AdditionalJoinParams_1ad48bb97d8655ff36738733f8eb076837"></a>

Gets the value of DoubleArgs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ac68fff45f073b4d0c136017b4a724532)`(const TMap< FString, float > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1ac68fff45f073b4d0c136017b4a724532"></a>

Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1aee93e59343933267ad1fcaafafcc274b)`(TMap< FString, float > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1aee93e59343933267ad1fcaafafcc274b"></a>

Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a8d838246e4f05dd51d87ef7269780676)`()` <a id="structFRHAPI__AdditionalJoinParams_1a8d838246e4f05dd51d87ef7269780676"></a>

Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a0d168f164ff5cd20732deba6e1adfb88)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a0d168f164ff5cd20732deba6e1adfb88"></a>

Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1acc48a26a04304f47573677907a76b91c)`(const TMap< FString, float > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1acc48a26a04304f47573677907a76b91c"></a>

Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true.

#### `public inline void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a94cc0399784078fbd380a46a3f0afaeb)`(TMap< FString, float > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a94cc0399784078fbd380a46a3f0afaeb"></a>

Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true using move semantics.

#### `public inline void `[`ClearDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207)`()` <a id="structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207"></a>

Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false.

#### `public inline bool `[`IsDoubleArgsSet`](#structFRHAPI__AdditionalJoinParams_1a67efa7da38de2ffb40a176b7ba4916d6)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a67efa7da38de2ffb40a176b7ba4916d6"></a>

Checks whether DoubleArgs_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a19efcf78722857c1de81e5c003222ae0)`()` <a id="structFRHAPI__AdditionalJoinParams_1a19efcf78722857c1de81e5c003222ae0"></a>

Gets the value of StringArgs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1aa7139a36dc717a938f41aad4f633cf36)`() const` <a id="structFRHAPI__AdditionalJoinParams_1aa7139a36dc717a938f41aad4f633cf36"></a>

Gets the value of StringArgs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a930aa8d153f646929802d6e07a8f1820)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a930aa8d153f646929802d6e07a8f1820"></a>

Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a1d259bb154755e3bb9eca79ac510f427)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a1d259bb154755e3bb9eca79ac510f427"></a>

Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1ad825b712fd9305c1d6043fe11f58fb12)`()` <a id="structFRHAPI__AdditionalJoinParams_1ad825b712fd9305c1d6043fe11f58fb12"></a>

Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1afbe7ef92b623eb5fe199f17ef5deeb84)`() const` <a id="structFRHAPI__AdditionalJoinParams_1afbe7ef92b623eb5fe199f17ef5deeb84"></a>

Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a59832950089edb0c4f9b85092fa52447)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a59832950089edb0c4f9b85092fa52447"></a>

Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true.

#### `public inline void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a1224f8a69234fa7c590ef426ffd09fc7)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a1224f8a69234fa7c590ef426ffd09fc7"></a>

Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true using move semantics.

#### `public inline void `[`ClearStringArgs`](#structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563)`()` <a id="structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563"></a>

Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false.

#### `public inline bool `[`IsStringArgsSet`](#structFRHAPI__AdditionalJoinParams_1a321968e43a3d3710c3bd0a2432b38f3e)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a321968e43a3d3710c3bd0a2432b38f3e"></a>

Checks whether StringArgs_Optional has been set.

#### `public inline TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a902254f2aecd9f486e42d54928c4898b)`()` <a id="structFRHAPI__AdditionalJoinParams_1a902254f2aecd9f486e42d54928c4898b"></a>

Gets the value of Tags_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a786ddf26f8b5acdd0c060d113b52691c)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a786ddf26f8b5acdd0c060d113b52691c"></a>

Gets the value of Tags_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1ab52a89966ebf510e30e7ca03eaa47302)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1ab52a89966ebf510e30e7ca03eaa47302"></a>

Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a6735a8b6cb588aa2f3805a3ed5eb34a3)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a6735a8b6cb588aa2f3805a3ed5eb34a3"></a>

Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a9d5955c1d2033824c85b96ea6fdff230)`()` <a id="structFRHAPI__AdditionalJoinParams_1a9d5955c1d2033824c85b96ea6fdff230"></a>

Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1ad5412929a3aa5898e9d9df84e9b89da2)`() const` <a id="structFRHAPI__AdditionalJoinParams_1ad5412929a3aa5898e9d9df84e9b89da2"></a>

Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1ae958fd06d8bda2bf0931ef23b471acc6)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1ae958fd06d8bda2bf0931ef23b471acc6"></a>

Sets the value of Tags_Optional and also sets Tags_IsSet to true.

#### `public inline void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1a39e86864adbd6ccce2d913cf636c7f7a)`(TArray< FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a39e86864adbd6ccce2d913cf636c7f7a"></a>

Sets the value of Tags_Optional and also sets Tags_IsSet to true using move semantics.

#### `public inline void `[`ClearTags`](#structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9)`()` <a id="structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9"></a>

Clears the value of Tags_Optional and sets Tags_IsSet to false.

#### `public inline bool `[`IsTagsSet`](#structFRHAPI__AdditionalJoinParams_1adb89ab77b8a48ffd24bfb32beaaba758)`() const` <a id="structFRHAPI__AdditionalJoinParams_1adb89ab77b8a48ffd24bfb32beaaba758"></a>

Checks whether Tags_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a423222e81266a75941785d2855bfc442)`()` <a id="structFRHAPI__AdditionalJoinParams_1a423222e81266a75941785d2855bfc442"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a45e84ab49337b9bdb61df1ee6bb01a13)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a45e84ab49337b9bdb61df1ee6bb01a13"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1ad251729f2b3795d059cefaa300e0f2a3)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1ad251729f2b3795d059cefaa300e0f2a3"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a6f76d92a00aa66b83d89f707ef306940)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a6f76d92a00aa66b83d89f707ef306940"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1a50706eb832fa6bef02effa67eece8148)`()` <a id="structFRHAPI__AdditionalJoinParams_1a50706eb832fa6bef02effa67eece8148"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1add6b5e6ad54be84f40912838253769e7)`() const` <a id="structFRHAPI__AdditionalJoinParams_1add6b5e6ad54be84f40912838253769e7"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a1801f3196252cf1f2d86fd2757233001)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a1801f3196252cf1f2d86fd2757233001"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a120c011a9c0836cb567ec4f386f0c2f4)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a120c011a9c0836cb567ec4f386f0c2f4"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2)`()` <a id="structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

#### `public inline bool `[`IsExtensionsSet`](#structFRHAPI__AdditionalJoinParams_1a0cefe699ef841f1a9d0e462195ea2bcf)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a0cefe699ef841f1a9d0e462195ea2bcf"></a>

Checks whether Extensions_Optional has been set.

