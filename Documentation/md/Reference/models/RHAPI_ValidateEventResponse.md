---
title: RHAPI_ValidateEventResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ValidateEventResponse`](#structFRHAPI__ValidateEventResponse) | 

## struct `FRHAPI_ValidateEventResponse` <a id="structFRHAPI__ValidateEventResponse"></a>

```
struct FRHAPI_ValidateEventResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`Success`](#structFRHAPI__ValidateEventResponse_1ac181fca995b9df4c1d680c60a8d217e3) | Is event data valid against JsonSchema?
`public FString `[`ErrorCode_Optional`](#structFRHAPI__ValidateEventResponse_1a6fa03bb59e8250b87c333c06757e0339) | 
`public bool `[`ErrorCode_IsSet`](#structFRHAPI__ValidateEventResponse_1a9ccba25127584a14aaa10964e9baec94) | true if ErrorCode_Optional has been set to a value
`public bool `[`ErrorCode_IsNull`](#structFRHAPI__ValidateEventResponse_1aba048e92b297dc7f679d8311a9e28720) | true if ErrorCode_Optional has been explicitly set to null
`public FString `[`Context_Optional`](#structFRHAPI__ValidateEventResponse_1a4cd0aab720c5f530e804fb7464a7414d) | 
`public bool `[`Context_IsSet`](#structFRHAPI__ValidateEventResponse_1aca380e815c3a76ffdc6dc73d368e2e22) | true if Context_Optional has been set to a value
`public bool `[`Context_IsNull`](#structFRHAPI__ValidateEventResponse_1a635e12cfea127895b01990c77b5d8f8d) | true if Context_Optional has been explicitly set to null
`public FString `[`OutputEvent_Optional`](#structFRHAPI__ValidateEventResponse_1a979f7a98401bd4dec18378c277c99dc8) | 
`public bool `[`OutputEvent_IsSet`](#structFRHAPI__ValidateEventResponse_1a13afe5283197745a73251cf313dda625) | true if OutputEvent_Optional has been set to a value
`public bool `[`OutputEvent_IsNull`](#structFRHAPI__ValidateEventResponse_1a1311b2985e17cfa1e7884372543f8c7d) | true if OutputEvent_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__ValidateEventResponse_1a91bd48020277ea4da8c72d447ea0c1f7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ValidateEventResponse_1a2f29a4a6bc41b314eb4890b4effce6f1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline bool & `[`GetSuccess`](#structFRHAPI__ValidateEventResponse_1abf3e26d44073b5b36b6443db4600e2fe)`()` | Gets the value of Success.
`public inline const bool & `[`GetSuccess`](#structFRHAPI__ValidateEventResponse_1afe327f5a39893e0bf0a4afa3376d794e)`() const` | Gets the value of Success.
`public inline void `[`SetSuccess`](#structFRHAPI__ValidateEventResponse_1ae4a8ac07cf2be03eafe66dcff932202f)`(const bool & NewValue)` | Sets the value of Success.
`public inline void `[`SetSuccess`](#structFRHAPI__ValidateEventResponse_1aa3681cba8a97610e78c1889cbe7e4e27)`(bool && NewValue)` | Sets the value of Success using move semantics.
`public inline bool `[`IsSuccessDefaultValue`](#structFRHAPI__ValidateEventResponse_1a2a59791ab27e6519a8293302f94f9a7b)`() const` | Returns true if Success matches the default value.
`public inline void `[`SetSuccessToDefault`](#structFRHAPI__ValidateEventResponse_1a537224d63a31362805d9951b70a5eb4e)`()` | Sets the value of Success to its default
`public inline FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a02c3a205736a4d9280a26222eb426080)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a58582ca60c4a883d299676dc7db36cea)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a65a5c6f971bac448d17541cd51423c98)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1adcf3776e07544e6eb503bf9277d791da)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__ValidateEventResponse_1a27f7325b2a7874c62fc04a14884780be)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__ValidateEventResponse_1a87201d0304d532f8c4bbe494d4accc9a)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrorCode`](#structFRHAPI__ValidateEventResponse_1a583b42c30230450fd6394235fa2a8e4b)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline void `[`SetErrorCode`](#structFRHAPI__ValidateEventResponse_1a1112e275f30e9fc2c8181ae12f464698)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__ValidateEventResponse_1ade6d3207ccb6c69c89a1e562f80f5bad)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline bool `[`IsErrorCodeSet`](#structFRHAPI__ValidateEventResponse_1ad7d560fe9eb9eacd639c0507fe64fb32)`() const` | Checks whether ErrorCode_Optional has been set.
`public inline void `[`SetErrorCodeToNull`](#structFRHAPI__ValidateEventResponse_1ab6059bfa89638d589917f826d7d43775)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsErrorCodeNull`](#structFRHAPI__ValidateEventResponse_1ac42b187dbc9a3c188e3a48e88994e429)`() const` | Checks whether ErrorCode_Optional is set to null.
`public inline FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a56d660cbca25ff78049d59b8460a6bc9)`()` | Gets the value of Context_Optional, regardless of it having been set.
`public inline const FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1aa9f35b8729e4290a30fc604f2ed3cc1b)`() const` | Gets the value of Context_Optional, regardless of it having been set.
`public inline const FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a35250bd085f7d5dff1db850d75ae0da7)`(const FString & DefaultValue) const` | Gets the value of Context_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a9416a4acf9a34f47b5f60a072486e184)`(FString & OutValue) const` | Fills OutValue with the value of Context_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetContextOrNull`](#structFRHAPI__ValidateEventResponse_1a28d67d1625096463addfc87f762516e6)`()` | Returns a pointer to Context_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetContextOrNull`](#structFRHAPI__ValidateEventResponse_1a8c5b26168de8dbfb3ae106d3e4566a09)`() const` | Returns a pointer to Context_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetContext`](#structFRHAPI__ValidateEventResponse_1af0007d1b74b3d2e0bc7c2bfcd8480d82)`(const FString & NewValue)` | Sets the value of Context_Optional and also sets Context_IsSet to true.
`public inline void `[`SetContext`](#structFRHAPI__ValidateEventResponse_1a4524a5f1b128748ca9c40073eca8fc88)`(FString && NewValue)` | Sets the value of Context_Optional and also sets Context_IsSet to true using move semantics.
`public inline void `[`ClearContext`](#structFRHAPI__ValidateEventResponse_1a9e7d19b2ad335913ab172509a6673748)`()` | Clears the value of Context_Optional and sets Context_IsSet to false.
`public inline bool `[`IsContextSet`](#structFRHAPI__ValidateEventResponse_1a27d6f52c554692f1614d8ef6b7917e74)`() const` | Checks whether Context_Optional has been set.
`public inline void `[`SetContextToNull`](#structFRHAPI__ValidateEventResponse_1a7278d183cf921fc01a4f6173ff2ae8ab)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsContextNull`](#structFRHAPI__ValidateEventResponse_1a457dacedc28737e728ecf093c55015ae)`() const` | Checks whether Context_Optional is set to null.
`public inline FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a21666c6744b9ff129df84d99b970b5a2)`()` | Gets the value of OutputEvent_Optional, regardless of it having been set.
`public inline const FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a1ed3ed1c84580d31b85842f786c35192)`() const` | Gets the value of OutputEvent_Optional, regardless of it having been set.
`public inline const FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a82c2b6f74439be295cf87b57cee45ed7)`(const FString & DefaultValue) const` | Gets the value of OutputEvent_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1af2d378d46c4f2420127dc0a5814899e8)`(FString & OutValue) const` | Fills OutValue with the value of OutputEvent_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOutputEventOrNull`](#structFRHAPI__ValidateEventResponse_1aae1f38ce265c632aa6d0f46e8a61aaab)`()` | Returns a pointer to OutputEvent_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOutputEventOrNull`](#structFRHAPI__ValidateEventResponse_1a51bc4f11f99050aca6f36eceaf413e77)`() const` | Returns a pointer to OutputEvent_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a9a4e4ccb9c317c13ee84172356c92af9)`(const FString & NewValue)` | Sets the value of OutputEvent_Optional and also sets OutputEvent_IsSet to true.
`public inline void `[`SetOutputEvent`](#structFRHAPI__ValidateEventResponse_1afc19a784c7eb2c89cce6ac487c4d74cb)`(FString && NewValue)` | Sets the value of OutputEvent_Optional and also sets OutputEvent_IsSet to true using move semantics.
`public inline void `[`ClearOutputEvent`](#structFRHAPI__ValidateEventResponse_1adb570ca1390a09635de4b926fa18c94e)`()` | Clears the value of OutputEvent_Optional and sets OutputEvent_IsSet to false.
`public inline bool `[`IsOutputEventSet`](#structFRHAPI__ValidateEventResponse_1ab3b964dab10afcef530566711e8407ca)`() const` | Checks whether OutputEvent_Optional has been set.
`public inline void `[`SetOutputEventToNull`](#structFRHAPI__ValidateEventResponse_1a9f5c23c55fe4a9d53d0403e2f7c14b89)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsOutputEventNull`](#structFRHAPI__ValidateEventResponse_1a8a40f1f8ace78d00589d6ab10ea6ffbf)`() const` | Checks whether OutputEvent_Optional is set to null.

### Members

#### `public bool `[`Success`](#structFRHAPI__ValidateEventResponse_1ac181fca995b9df4c1d680c60a8d217e3) <a id="structFRHAPI__ValidateEventResponse_1ac181fca995b9df4c1d680c60a8d217e3"></a>

Is event data valid against JsonSchema?

#### `public FString `[`ErrorCode_Optional`](#structFRHAPI__ValidateEventResponse_1a6fa03bb59e8250b87c333c06757e0339) <a id="structFRHAPI__ValidateEventResponse_1a6fa03bb59e8250b87c333c06757e0339"></a>

#### `public bool `[`ErrorCode_IsSet`](#structFRHAPI__ValidateEventResponse_1a9ccba25127584a14aaa10964e9baec94) <a id="structFRHAPI__ValidateEventResponse_1a9ccba25127584a14aaa10964e9baec94"></a>

true if ErrorCode_Optional has been set to a value

#### `public bool `[`ErrorCode_IsNull`](#structFRHAPI__ValidateEventResponse_1aba048e92b297dc7f679d8311a9e28720) <a id="structFRHAPI__ValidateEventResponse_1aba048e92b297dc7f679d8311a9e28720"></a>

true if ErrorCode_Optional has been explicitly set to null

#### `public FString `[`Context_Optional`](#structFRHAPI__ValidateEventResponse_1a4cd0aab720c5f530e804fb7464a7414d) <a id="structFRHAPI__ValidateEventResponse_1a4cd0aab720c5f530e804fb7464a7414d"></a>

#### `public bool `[`Context_IsSet`](#structFRHAPI__ValidateEventResponse_1aca380e815c3a76ffdc6dc73d368e2e22) <a id="structFRHAPI__ValidateEventResponse_1aca380e815c3a76ffdc6dc73d368e2e22"></a>

true if Context_Optional has been set to a value

#### `public bool `[`Context_IsNull`](#structFRHAPI__ValidateEventResponse_1a635e12cfea127895b01990c77b5d8f8d) <a id="structFRHAPI__ValidateEventResponse_1a635e12cfea127895b01990c77b5d8f8d"></a>

true if Context_Optional has been explicitly set to null

#### `public FString `[`OutputEvent_Optional`](#structFRHAPI__ValidateEventResponse_1a979f7a98401bd4dec18378c277c99dc8) <a id="structFRHAPI__ValidateEventResponse_1a979f7a98401bd4dec18378c277c99dc8"></a>

#### `public bool `[`OutputEvent_IsSet`](#structFRHAPI__ValidateEventResponse_1a13afe5283197745a73251cf313dda625) <a id="structFRHAPI__ValidateEventResponse_1a13afe5283197745a73251cf313dda625"></a>

true if OutputEvent_Optional has been set to a value

#### `public bool `[`OutputEvent_IsNull`](#structFRHAPI__ValidateEventResponse_1a1311b2985e17cfa1e7884372543f8c7d) <a id="structFRHAPI__ValidateEventResponse_1a1311b2985e17cfa1e7884372543f8c7d"></a>

true if OutputEvent_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__ValidateEventResponse_1a91bd48020277ea4da8c72d447ea0c1f7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ValidateEventResponse_1a91bd48020277ea4da8c72d447ea0c1f7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ValidateEventResponse_1a2f29a4a6bc41b314eb4890b4effce6f1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ValidateEventResponse_1a2f29a4a6bc41b314eb4890b4effce6f1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline bool & `[`GetSuccess`](#structFRHAPI__ValidateEventResponse_1abf3e26d44073b5b36b6443db4600e2fe)`()` <a id="structFRHAPI__ValidateEventResponse_1abf3e26d44073b5b36b6443db4600e2fe"></a>

Gets the value of Success.

#### `public inline const bool & `[`GetSuccess`](#structFRHAPI__ValidateEventResponse_1afe327f5a39893e0bf0a4afa3376d794e)`() const` <a id="structFRHAPI__ValidateEventResponse_1afe327f5a39893e0bf0a4afa3376d794e"></a>

Gets the value of Success.

#### `public inline void `[`SetSuccess`](#structFRHAPI__ValidateEventResponse_1ae4a8ac07cf2be03eafe66dcff932202f)`(const bool & NewValue)` <a id="structFRHAPI__ValidateEventResponse_1ae4a8ac07cf2be03eafe66dcff932202f"></a>

Sets the value of Success.

#### `public inline void `[`SetSuccess`](#structFRHAPI__ValidateEventResponse_1aa3681cba8a97610e78c1889cbe7e4e27)`(bool && NewValue)` <a id="structFRHAPI__ValidateEventResponse_1aa3681cba8a97610e78c1889cbe7e4e27"></a>

Sets the value of Success using move semantics.

#### `public inline bool `[`IsSuccessDefaultValue`](#structFRHAPI__ValidateEventResponse_1a2a59791ab27e6519a8293302f94f9a7b)`() const` <a id="structFRHAPI__ValidateEventResponse_1a2a59791ab27e6519a8293302f94f9a7b"></a>

Returns true if Success matches the default value.

#### `public inline void `[`SetSuccessToDefault`](#structFRHAPI__ValidateEventResponse_1a537224d63a31362805d9951b70a5eb4e)`()` <a id="structFRHAPI__ValidateEventResponse_1a537224d63a31362805d9951b70a5eb4e"></a>

Sets the value of Success to its default

#### `public inline FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a02c3a205736a4d9280a26222eb426080)`()` <a id="structFRHAPI__ValidateEventResponse_1a02c3a205736a4d9280a26222eb426080"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a58582ca60c4a883d299676dc7db36cea)`() const` <a id="structFRHAPI__ValidateEventResponse_1a58582ca60c4a883d299676dc7db36cea"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a65a5c6f971bac448d17541cd51423c98)`(const FString & DefaultValue) const` <a id="structFRHAPI__ValidateEventResponse_1a65a5c6f971bac448d17541cd51423c98"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1adcf3776e07544e6eb503bf9277d791da)`(FString & OutValue) const` <a id="structFRHAPI__ValidateEventResponse_1adcf3776e07544e6eb503bf9277d791da"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetErrorCodeOrNull`](#structFRHAPI__ValidateEventResponse_1a27f7325b2a7874c62fc04a14884780be)`()` <a id="structFRHAPI__ValidateEventResponse_1a27f7325b2a7874c62fc04a14884780be"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__ValidateEventResponse_1a87201d0304d532f8c4bbe494d4accc9a)`() const` <a id="structFRHAPI__ValidateEventResponse_1a87201d0304d532f8c4bbe494d4accc9a"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__ValidateEventResponse_1a583b42c30230450fd6394235fa2a8e4b)`(const FString & NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a583b42c30230450fd6394235fa2a8e4b"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__ValidateEventResponse_1a1112e275f30e9fc2c8181ae12f464698)`(FString && NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a1112e275f30e9fc2c8181ae12f464698"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__ValidateEventResponse_1ade6d3207ccb6c69c89a1e562f80f5bad)`()` <a id="structFRHAPI__ValidateEventResponse_1ade6d3207ccb6c69c89a1e562f80f5bad"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline bool `[`IsErrorCodeSet`](#structFRHAPI__ValidateEventResponse_1ad7d560fe9eb9eacd639c0507fe64fb32)`() const` <a id="structFRHAPI__ValidateEventResponse_1ad7d560fe9eb9eacd639c0507fe64fb32"></a>

Checks whether ErrorCode_Optional has been set.

#### `public inline void `[`SetErrorCodeToNull`](#structFRHAPI__ValidateEventResponse_1ab6059bfa89638d589917f826d7d43775)`()` <a id="structFRHAPI__ValidateEventResponse_1ab6059bfa89638d589917f826d7d43775"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsErrorCodeNull`](#structFRHAPI__ValidateEventResponse_1ac42b187dbc9a3c188e3a48e88994e429)`() const` <a id="structFRHAPI__ValidateEventResponse_1ac42b187dbc9a3c188e3a48e88994e429"></a>

Checks whether ErrorCode_Optional is set to null.

#### `public inline FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a56d660cbca25ff78049d59b8460a6bc9)`()` <a id="structFRHAPI__ValidateEventResponse_1a56d660cbca25ff78049d59b8460a6bc9"></a>

Gets the value of Context_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1aa9f35b8729e4290a30fc604f2ed3cc1b)`() const` <a id="structFRHAPI__ValidateEventResponse_1aa9f35b8729e4290a30fc604f2ed3cc1b"></a>

Gets the value of Context_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a35250bd085f7d5dff1db850d75ae0da7)`(const FString & DefaultValue) const` <a id="structFRHAPI__ValidateEventResponse_1a35250bd085f7d5dff1db850d75ae0da7"></a>

Gets the value of Context_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a9416a4acf9a34f47b5f60a072486e184)`(FString & OutValue) const` <a id="structFRHAPI__ValidateEventResponse_1a9416a4acf9a34f47b5f60a072486e184"></a>

Fills OutValue with the value of Context_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetContextOrNull`](#structFRHAPI__ValidateEventResponse_1a28d67d1625096463addfc87f762516e6)`()` <a id="structFRHAPI__ValidateEventResponse_1a28d67d1625096463addfc87f762516e6"></a>

Returns a pointer to Context_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetContextOrNull`](#structFRHAPI__ValidateEventResponse_1a8c5b26168de8dbfb3ae106d3e4566a09)`() const` <a id="structFRHAPI__ValidateEventResponse_1a8c5b26168de8dbfb3ae106d3e4566a09"></a>

Returns a pointer to Context_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetContext`](#structFRHAPI__ValidateEventResponse_1af0007d1b74b3d2e0bc7c2bfcd8480d82)`(const FString & NewValue)` <a id="structFRHAPI__ValidateEventResponse_1af0007d1b74b3d2e0bc7c2bfcd8480d82"></a>

Sets the value of Context_Optional and also sets Context_IsSet to true.

#### `public inline void `[`SetContext`](#structFRHAPI__ValidateEventResponse_1a4524a5f1b128748ca9c40073eca8fc88)`(FString && NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a4524a5f1b128748ca9c40073eca8fc88"></a>

Sets the value of Context_Optional and also sets Context_IsSet to true using move semantics.

#### `public inline void `[`ClearContext`](#structFRHAPI__ValidateEventResponse_1a9e7d19b2ad335913ab172509a6673748)`()` <a id="structFRHAPI__ValidateEventResponse_1a9e7d19b2ad335913ab172509a6673748"></a>

Clears the value of Context_Optional and sets Context_IsSet to false.

#### `public inline bool `[`IsContextSet`](#structFRHAPI__ValidateEventResponse_1a27d6f52c554692f1614d8ef6b7917e74)`() const` <a id="structFRHAPI__ValidateEventResponse_1a27d6f52c554692f1614d8ef6b7917e74"></a>

Checks whether Context_Optional has been set.

#### `public inline void `[`SetContextToNull`](#structFRHAPI__ValidateEventResponse_1a7278d183cf921fc01a4f6173ff2ae8ab)`()` <a id="structFRHAPI__ValidateEventResponse_1a7278d183cf921fc01a4f6173ff2ae8ab"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsContextNull`](#structFRHAPI__ValidateEventResponse_1a457dacedc28737e728ecf093c55015ae)`() const` <a id="structFRHAPI__ValidateEventResponse_1a457dacedc28737e728ecf093c55015ae"></a>

Checks whether Context_Optional is set to null.

#### `public inline FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a21666c6744b9ff129df84d99b970b5a2)`()` <a id="structFRHAPI__ValidateEventResponse_1a21666c6744b9ff129df84d99b970b5a2"></a>

Gets the value of OutputEvent_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a1ed3ed1c84580d31b85842f786c35192)`() const` <a id="structFRHAPI__ValidateEventResponse_1a1ed3ed1c84580d31b85842f786c35192"></a>

Gets the value of OutputEvent_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a82c2b6f74439be295cf87b57cee45ed7)`(const FString & DefaultValue) const` <a id="structFRHAPI__ValidateEventResponse_1a82c2b6f74439be295cf87b57cee45ed7"></a>

Gets the value of OutputEvent_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1af2d378d46c4f2420127dc0a5814899e8)`(FString & OutValue) const` <a id="structFRHAPI__ValidateEventResponse_1af2d378d46c4f2420127dc0a5814899e8"></a>

Fills OutValue with the value of OutputEvent_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOutputEventOrNull`](#structFRHAPI__ValidateEventResponse_1aae1f38ce265c632aa6d0f46e8a61aaab)`()` <a id="structFRHAPI__ValidateEventResponse_1aae1f38ce265c632aa6d0f46e8a61aaab"></a>

Returns a pointer to OutputEvent_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOutputEventOrNull`](#structFRHAPI__ValidateEventResponse_1a51bc4f11f99050aca6f36eceaf413e77)`() const` <a id="structFRHAPI__ValidateEventResponse_1a51bc4f11f99050aca6f36eceaf413e77"></a>

Returns a pointer to OutputEvent_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a9a4e4ccb9c317c13ee84172356c92af9)`(const FString & NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a9a4e4ccb9c317c13ee84172356c92af9"></a>

Sets the value of OutputEvent_Optional and also sets OutputEvent_IsSet to true.

#### `public inline void `[`SetOutputEvent`](#structFRHAPI__ValidateEventResponse_1afc19a784c7eb2c89cce6ac487c4d74cb)`(FString && NewValue)` <a id="structFRHAPI__ValidateEventResponse_1afc19a784c7eb2c89cce6ac487c4d74cb"></a>

Sets the value of OutputEvent_Optional and also sets OutputEvent_IsSet to true using move semantics.

#### `public inline void `[`ClearOutputEvent`](#structFRHAPI__ValidateEventResponse_1adb570ca1390a09635de4b926fa18c94e)`()` <a id="structFRHAPI__ValidateEventResponse_1adb570ca1390a09635de4b926fa18c94e"></a>

Clears the value of OutputEvent_Optional and sets OutputEvent_IsSet to false.

#### `public inline bool `[`IsOutputEventSet`](#structFRHAPI__ValidateEventResponse_1ab3b964dab10afcef530566711e8407ca)`() const` <a id="structFRHAPI__ValidateEventResponse_1ab3b964dab10afcef530566711e8407ca"></a>

Checks whether OutputEvent_Optional has been set.

#### `public inline void `[`SetOutputEventToNull`](#structFRHAPI__ValidateEventResponse_1a9f5c23c55fe4a9d53d0403e2f7c14b89)`()` <a id="structFRHAPI__ValidateEventResponse_1a9f5c23c55fe4a9d53d0403e2f7c14b89"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsOutputEventNull`](#structFRHAPI__ValidateEventResponse_1a8a40f1f8ace78d00589d6ab10ea6ffbf)`() const` <a id="structFRHAPI__ValidateEventResponse_1a8a40f1f8ace78d00589d6ab10ea6ffbf"></a>

Checks whether OutputEvent_Optional is set to null.

