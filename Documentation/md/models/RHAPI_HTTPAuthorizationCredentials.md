# RHAPI_HTTPAuthorizationCredentials <a id="group__RHAPI__HTTPAuthorizationCredentials"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_HTTPAuthorizationCredentials`](#structFRHAPI__HTTPAuthorizationCredentials) | 

## struct `FRHAPI_HTTPAuthorizationCredentials` <a id="structFRHAPI__HTTPAuthorizationCredentials"></a>

```
struct FRHAPI_HTTPAuthorizationCredentials
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Scheme`](#structFRHAPI__HTTPAuthorizationCredentials_1acdf51500fdb1853581158ae208ed15b5) | 
`public FString `[`Credentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a748e9137cea3582ed7632f8de3c7bcd5) | 
`public virtual bool `[`FromJson`](#structFRHAPI__HTTPAuthorizationCredentials_1a40eb8f69601b29d2626f411590c2d514)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__HTTPAuthorizationCredentials_1ad814e7f5c9b7c7505d59b18f54b99ece)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a8c832e41d86eee1857be7993008fa3df)`()` | Gets the value of Scheme.
`public inline const FString & `[`GetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a2ef520df7b23c50027ae5f3ff1df99a0)`() const` | Gets the value of Scheme.
`public inline void `[`SetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a43bfb08250e1a4ecb08b1646838c878f)`(FString NewValue)` | Sets the value of Scheme.
`public inline FString & `[`GetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a725ad2d9e76604f96c85913795913e7e)`()` | Gets the value of Credentials.
`public inline const FString & `[`GetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1ac795cbc746ac22fa346ad9ff628f80a6)`() const` | Gets the value of Credentials.
`public inline void `[`SetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1adce62c37cb9006909642c84a056f9d10)`(FString NewValue)` | Sets the value of Credentials.

#### Members

#### `public FString `[`Scheme`](#structFRHAPI__HTTPAuthorizationCredentials_1acdf51500fdb1853581158ae208ed15b5) <a id="structFRHAPI__HTTPAuthorizationCredentials_1acdf51500fdb1853581158ae208ed15b5"></a>

<br>
#### `public FString `[`Credentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a748e9137cea3582ed7632f8de3c7bcd5) <a id="structFRHAPI__HTTPAuthorizationCredentials_1a748e9137cea3582ed7632f8de3c7bcd5"></a>

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__HTTPAuthorizationCredentials_1a40eb8f69601b29d2626f411590c2d514)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a40eb8f69601b29d2626f411590c2d514"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__HTTPAuthorizationCredentials_1ad814e7f5c9b7c7505d59b18f54b99ece)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__HTTPAuthorizationCredentials_1ad814e7f5c9b7c7505d59b18f54b99ece"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a8c832e41d86eee1857be7993008fa3df)`()` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a8c832e41d86eee1857be7993008fa3df"></a>

Gets the value of Scheme.

<br>
#### `public inline const FString & `[`GetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a2ef520df7b23c50027ae5f3ff1df99a0)`() const` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a2ef520df7b23c50027ae5f3ff1df99a0"></a>

Gets the value of Scheme.

<br>
#### `public inline void `[`SetScheme`](#structFRHAPI__HTTPAuthorizationCredentials_1a43bfb08250e1a4ecb08b1646838c878f)`(FString NewValue)` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a43bfb08250e1a4ecb08b1646838c878f"></a>

Sets the value of Scheme.

<br>
#### `public inline FString & `[`GetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1a725ad2d9e76604f96c85913795913e7e)`()` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a725ad2d9e76604f96c85913795913e7e"></a>

Gets the value of Credentials.

<br>
#### `public inline const FString & `[`GetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1ac795cbc746ac22fa346ad9ff628f80a6)`() const` <a id="structFRHAPI__HTTPAuthorizationCredentials_1ac795cbc746ac22fa346ad9ff628f80a6"></a>

Gets the value of Credentials.

<br>
#### `public inline void `[`SetCredentials`](#structFRHAPI__HTTPAuthorizationCredentials_1adce62c37cb9006909642c84a056f9d10)`(FString NewValue)` <a id="structFRHAPI__HTTPAuthorizationCredentials_1adce62c37cb9006909642c84a056f9d10"></a>

Sets the value of Credentials.

<br>
