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
`public inline FORCEINLINE bool & `[`GetSuccess`](#structFRHAPI__ValidateEventResponse_1a912cf094fae66646f67614da024c02a0)`()` | Gets the value of Success.
`public inline FORCEINLINE const bool & `[`GetSuccess`](#structFRHAPI__ValidateEventResponse_1a4c02eb3b024daa3c20083effde61208d)`() const` | Gets the value of Success.
`public inline FORCEINLINE void `[`SetSuccess`](#structFRHAPI__ValidateEventResponse_1a1e1e5b14b7f714f15e9bda6db9fc88f6)`(const bool & NewValue)` | Sets the value of Success.
`public inline FORCEINLINE void `[`SetSuccess`](#structFRHAPI__ValidateEventResponse_1a825640eb58c9a5a1ed8fde4db4dfa64f)`(bool && NewValue)` | Sets the value of Success using move semantics.
`public inline FORCEINLINE bool `[`GetDefaultValue_Success`](#structFRHAPI__ValidateEventResponse_1aa45360b90bc9b92d93b90edff1dd7a4a)`()` | Returns the default value of Success.
`public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a4e075e7a7d065c264422f4b57ec29bde)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a8a482c7d27b251f8e6a646759bdaf56a)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a641ace64e48e33bc4a4f4106be28ac78)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1aad9f86e0e198928835cf273a1cbb3591)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__ValidateEventResponse_1a9ea1f3ae269da257f86600183b68537b)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__ValidateEventResponse_1a16ac0749b590a2caeea04681438a72f2)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__ValidateEventResponse_1a18cefd8b04abf56ead39b96506cb3127)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__ValidateEventResponse_1ac031ff792a798baf3459891e85c34350)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__ValidateEventResponse_1ade6d3207ccb6c69c89a1e562f80f5bad)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline FORCEINLINE void `[`SetErrorCodeToNull`](#structFRHAPI__ValidateEventResponse_1a3c45430110edfb529a4ca7958ee568c5)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsErrorCodeNull`](#structFRHAPI__ValidateEventResponse_1aac4c22d9cf2cbffd18e8aba21eb48b61)`() const` | Checks whether ErrorCode_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a2c940a5164d3e5da6e7b521fb9edb9bb)`()` | Gets the value of Context_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a11f819c3985150ceddd7dbf6f5b62bf8)`() const` | Gets the value of Context_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a4b94df26c5669518af5811a840887caf)`(const FString & DefaultValue) const` | Gets the value of Context_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a337fc438c78da4c1a7f1bac1e5935491)`(FString & OutValue) const` | Fills OutValue with the value of Context_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetContextOrNull`](#structFRHAPI__ValidateEventResponse_1a58d546be368096bb2fd0ea08153d5ff0)`()` | Returns a pointer to Context_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetContextOrNull`](#structFRHAPI__ValidateEventResponse_1a43d18a6cdfe287d7f6cf32a625ec99a7)`() const` | Returns a pointer to Context_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetContext`](#structFRHAPI__ValidateEventResponse_1a175367648c018991520b998b28d814cc)`(const FString & NewValue)` | Sets the value of Context_Optional and also sets Context_IsSet to true.
`public inline FORCEINLINE void `[`SetContext`](#structFRHAPI__ValidateEventResponse_1a79532f6e1e1b0ecfa81550bf292799e9)`(FString && NewValue)` | Sets the value of Context_Optional and also sets Context_IsSet to true using move semantics.
`public inline void `[`ClearContext`](#structFRHAPI__ValidateEventResponse_1a9e7d19b2ad335913ab172509a6673748)`()` | Clears the value of Context_Optional and sets Context_IsSet to false.
`public inline FORCEINLINE void `[`SetContextToNull`](#structFRHAPI__ValidateEventResponse_1a325ade17ae2a500c15572cc8056d7f58)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsContextNull`](#structFRHAPI__ValidateEventResponse_1aa19286d0b952998eaff04c2466e61026)`() const` | Checks whether Context_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a4bf1189bd9b84eb730c32d5b6a3c83c6)`()` | Gets the value of OutputEvent_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1ada8db8d2d7b29d2425a3b4419e050757)`() const` | Gets the value of OutputEvent_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a5c50335bc0962105979b8171be399594)`(const FString & DefaultValue) const` | Gets the value of OutputEvent_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a2abc03209874ec0596396d1ca4ae1953)`(FString & OutValue) const` | Fills OutValue with the value of OutputEvent_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOutputEventOrNull`](#structFRHAPI__ValidateEventResponse_1ae7f275025abd69e76ca33be1ac712419)`()` | Returns a pointer to OutputEvent_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOutputEventOrNull`](#structFRHAPI__ValidateEventResponse_1a24eedd9eba19ae155b20d9df296b6c2d)`() const` | Returns a pointer to OutputEvent_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a2a9bdbdca07832285b0dc373bef1b918)`(const FString & NewValue)` | Sets the value of OutputEvent_Optional and also sets OutputEvent_IsSet to true.
`public inline FORCEINLINE void `[`SetOutputEvent`](#structFRHAPI__ValidateEventResponse_1ade1a3f921aa51d84fee776be94863b0e)`(FString && NewValue)` | Sets the value of OutputEvent_Optional and also sets OutputEvent_IsSet to true using move semantics.
`public inline void `[`ClearOutputEvent`](#structFRHAPI__ValidateEventResponse_1adb570ca1390a09635de4b926fa18c94e)`()` | Clears the value of OutputEvent_Optional and sets OutputEvent_IsSet to false.
`public inline FORCEINLINE void `[`SetOutputEventToNull`](#structFRHAPI__ValidateEventResponse_1a4e593e7a994b33620b081e1a973f0b91)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOutputEventNull`](#structFRHAPI__ValidateEventResponse_1acf5aa8d1764738fc9ad79f1b3db2c042)`() const` | Checks whether OutputEvent_Optional is set to null.

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

#### `public inline FORCEINLINE bool & `[`GetSuccess`](#structFRHAPI__ValidateEventResponse_1a912cf094fae66646f67614da024c02a0)`()` <a id="structFRHAPI__ValidateEventResponse_1a912cf094fae66646f67614da024c02a0"></a>

Gets the value of Success.

#### `public inline FORCEINLINE const bool & `[`GetSuccess`](#structFRHAPI__ValidateEventResponse_1a4c02eb3b024daa3c20083effde61208d)`() const` <a id="structFRHAPI__ValidateEventResponse_1a4c02eb3b024daa3c20083effde61208d"></a>

Gets the value of Success.

#### `public inline FORCEINLINE void `[`SetSuccess`](#structFRHAPI__ValidateEventResponse_1a1e1e5b14b7f714f15e9bda6db9fc88f6)`(const bool & NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a1e1e5b14b7f714f15e9bda6db9fc88f6"></a>

Sets the value of Success.

#### `public inline FORCEINLINE void `[`SetSuccess`](#structFRHAPI__ValidateEventResponse_1a825640eb58c9a5a1ed8fde4db4dfa64f)`(bool && NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a825640eb58c9a5a1ed8fde4db4dfa64f"></a>

Sets the value of Success using move semantics.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Success`](#structFRHAPI__ValidateEventResponse_1aa45360b90bc9b92d93b90edff1dd7a4a)`()` <a id="structFRHAPI__ValidateEventResponse_1aa45360b90bc9b92d93b90edff1dd7a4a"></a>

Returns the default value of Success.

#### `public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a4e075e7a7d065c264422f4b57ec29bde)`()` <a id="structFRHAPI__ValidateEventResponse_1a4e075e7a7d065c264422f4b57ec29bde"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a8a482c7d27b251f8e6a646759bdaf56a)`() const` <a id="structFRHAPI__ValidateEventResponse_1a8a482c7d27b251f8e6a646759bdaf56a"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1a641ace64e48e33bc4a4f4106be28ac78)`(const FString & DefaultValue) const` <a id="structFRHAPI__ValidateEventResponse_1a641ace64e48e33bc4a4f4106be28ac78"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__ValidateEventResponse_1aad9f86e0e198928835cf273a1cbb3591)`(FString & OutValue) const` <a id="structFRHAPI__ValidateEventResponse_1aad9f86e0e198928835cf273a1cbb3591"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__ValidateEventResponse_1a9ea1f3ae269da257f86600183b68537b)`()` <a id="structFRHAPI__ValidateEventResponse_1a9ea1f3ae269da257f86600183b68537b"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__ValidateEventResponse_1a16ac0749b590a2caeea04681438a72f2)`() const` <a id="structFRHAPI__ValidateEventResponse_1a16ac0749b590a2caeea04681438a72f2"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__ValidateEventResponse_1a18cefd8b04abf56ead39b96506cb3127)`(const FString & NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a18cefd8b04abf56ead39b96506cb3127"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__ValidateEventResponse_1ac031ff792a798baf3459891e85c34350)`(FString && NewValue)` <a id="structFRHAPI__ValidateEventResponse_1ac031ff792a798baf3459891e85c34350"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__ValidateEventResponse_1ade6d3207ccb6c69c89a1e562f80f5bad)`()` <a id="structFRHAPI__ValidateEventResponse_1ade6d3207ccb6c69c89a1e562f80f5bad"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline FORCEINLINE void `[`SetErrorCodeToNull`](#structFRHAPI__ValidateEventResponse_1a3c45430110edfb529a4ca7958ee568c5)`()` <a id="structFRHAPI__ValidateEventResponse_1a3c45430110edfb529a4ca7958ee568c5"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsErrorCodeNull`](#structFRHAPI__ValidateEventResponse_1aac4c22d9cf2cbffd18e8aba21eb48b61)`() const` <a id="structFRHAPI__ValidateEventResponse_1aac4c22d9cf2cbffd18e8aba21eb48b61"></a>

Checks whether ErrorCode_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a2c940a5164d3e5da6e7b521fb9edb9bb)`()` <a id="structFRHAPI__ValidateEventResponse_1a2c940a5164d3e5da6e7b521fb9edb9bb"></a>

Gets the value of Context_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a11f819c3985150ceddd7dbf6f5b62bf8)`() const` <a id="structFRHAPI__ValidateEventResponse_1a11f819c3985150ceddd7dbf6f5b62bf8"></a>

Gets the value of Context_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a4b94df26c5669518af5811a840887caf)`(const FString & DefaultValue) const` <a id="structFRHAPI__ValidateEventResponse_1a4b94df26c5669518af5811a840887caf"></a>

Gets the value of Context_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetContext`](#structFRHAPI__ValidateEventResponse_1a337fc438c78da4c1a7f1bac1e5935491)`(FString & OutValue) const` <a id="structFRHAPI__ValidateEventResponse_1a337fc438c78da4c1a7f1bac1e5935491"></a>

Fills OutValue with the value of Context_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetContextOrNull`](#structFRHAPI__ValidateEventResponse_1a58d546be368096bb2fd0ea08153d5ff0)`()` <a id="structFRHAPI__ValidateEventResponse_1a58d546be368096bb2fd0ea08153d5ff0"></a>

Returns a pointer to Context_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetContextOrNull`](#structFRHAPI__ValidateEventResponse_1a43d18a6cdfe287d7f6cf32a625ec99a7)`() const` <a id="structFRHAPI__ValidateEventResponse_1a43d18a6cdfe287d7f6cf32a625ec99a7"></a>

Returns a pointer to Context_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetContext`](#structFRHAPI__ValidateEventResponse_1a175367648c018991520b998b28d814cc)`(const FString & NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a175367648c018991520b998b28d814cc"></a>

Sets the value of Context_Optional and also sets Context_IsSet to true.

#### `public inline FORCEINLINE void `[`SetContext`](#structFRHAPI__ValidateEventResponse_1a79532f6e1e1b0ecfa81550bf292799e9)`(FString && NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a79532f6e1e1b0ecfa81550bf292799e9"></a>

Sets the value of Context_Optional and also sets Context_IsSet to true using move semantics.

#### `public inline void `[`ClearContext`](#structFRHAPI__ValidateEventResponse_1a9e7d19b2ad335913ab172509a6673748)`()` <a id="structFRHAPI__ValidateEventResponse_1a9e7d19b2ad335913ab172509a6673748"></a>

Clears the value of Context_Optional and sets Context_IsSet to false.

#### `public inline FORCEINLINE void `[`SetContextToNull`](#structFRHAPI__ValidateEventResponse_1a325ade17ae2a500c15572cc8056d7f58)`()` <a id="structFRHAPI__ValidateEventResponse_1a325ade17ae2a500c15572cc8056d7f58"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsContextNull`](#structFRHAPI__ValidateEventResponse_1aa19286d0b952998eaff04c2466e61026)`() const` <a id="structFRHAPI__ValidateEventResponse_1aa19286d0b952998eaff04c2466e61026"></a>

Checks whether Context_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a4bf1189bd9b84eb730c32d5b6a3c83c6)`()` <a id="structFRHAPI__ValidateEventResponse_1a4bf1189bd9b84eb730c32d5b6a3c83c6"></a>

Gets the value of OutputEvent_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1ada8db8d2d7b29d2425a3b4419e050757)`() const` <a id="structFRHAPI__ValidateEventResponse_1ada8db8d2d7b29d2425a3b4419e050757"></a>

Gets the value of OutputEvent_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a5c50335bc0962105979b8171be399594)`(const FString & DefaultValue) const` <a id="structFRHAPI__ValidateEventResponse_1a5c50335bc0962105979b8171be399594"></a>

Gets the value of OutputEvent_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a2abc03209874ec0596396d1ca4ae1953)`(FString & OutValue) const` <a id="structFRHAPI__ValidateEventResponse_1a2abc03209874ec0596396d1ca4ae1953"></a>

Fills OutValue with the value of OutputEvent_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOutputEventOrNull`](#structFRHAPI__ValidateEventResponse_1ae7f275025abd69e76ca33be1ac712419)`()` <a id="structFRHAPI__ValidateEventResponse_1ae7f275025abd69e76ca33be1ac712419"></a>

Returns a pointer to OutputEvent_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOutputEventOrNull`](#structFRHAPI__ValidateEventResponse_1a24eedd9eba19ae155b20d9df296b6c2d)`() const` <a id="structFRHAPI__ValidateEventResponse_1a24eedd9eba19ae155b20d9df296b6c2d"></a>

Returns a pointer to OutputEvent_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOutputEvent`](#structFRHAPI__ValidateEventResponse_1a2a9bdbdca07832285b0dc373bef1b918)`(const FString & NewValue)` <a id="structFRHAPI__ValidateEventResponse_1a2a9bdbdca07832285b0dc373bef1b918"></a>

Sets the value of OutputEvent_Optional and also sets OutputEvent_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOutputEvent`](#structFRHAPI__ValidateEventResponse_1ade1a3f921aa51d84fee776be94863b0e)`(FString && NewValue)` <a id="structFRHAPI__ValidateEventResponse_1ade1a3f921aa51d84fee776be94863b0e"></a>

Sets the value of OutputEvent_Optional and also sets OutputEvent_IsSet to true using move semantics.

#### `public inline void `[`ClearOutputEvent`](#structFRHAPI__ValidateEventResponse_1adb570ca1390a09635de4b926fa18c94e)`()` <a id="structFRHAPI__ValidateEventResponse_1adb570ca1390a09635de4b926fa18c94e"></a>

Clears the value of OutputEvent_Optional and sets OutputEvent_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOutputEventToNull`](#structFRHAPI__ValidateEventResponse_1a4e593e7a994b33620b081e1a973f0b91)`()` <a id="structFRHAPI__ValidateEventResponse_1a4e593e7a994b33620b081e1a973f0b91"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOutputEventNull`](#structFRHAPI__ValidateEventResponse_1acf5aa8d1764738fc9ad79f1b3db2c042)`() const` <a id="structFRHAPI__ValidateEventResponse_1acf5aa8d1764738fc9ad79f1b3db2c042"></a>

Checks whether OutputEvent_Optional is set to null.

