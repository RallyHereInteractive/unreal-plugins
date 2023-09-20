# RHAPI_CrossplayPreferences <a id="group__RHAPI__CrossplayPreferences"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CrossplayPreferences`](#structFRHAPI__CrossplayPreferences) | A session&#39;s or player&#39;s preferences around crossplay platforms and inputs. Permitted platforms and inputs will be checked when new players attempt to join a session.

## struct `FRHAPI_CrossplayPreferences` <a id="structFRHAPI__CrossplayPreferences"></a>

```
struct FRHAPI_CrossplayPreferences
  : public FRHAPI_Model
```

A session&#39;s or player&#39;s preferences around crossplay platforms and inputs. Permitted platforms and inputs will be checked when new players attempt to join a session.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_CrossplayPlatform `[`PermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a647bcd2529106e841d692fb555865051) | The platform type that the client is allowed to play with (any, xbox-like only, playstation-like only etc.)
`public ERHAPI_CrossplayInput `[`PermittedInput`](#structFRHAPI__CrossplayPreferences_1a5813a58f2450a66cef55eae278165b25) | The input type that the client is allowed to play with (keyboard and mouse, gamepad, touch input etc.)
`public virtual bool `[`FromJson`](#structFRHAPI__CrossplayPreferences_1a91388e37c3dc50e88f786a22a670f4b4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CrossplayPreferences_1ad1acab088331e99ab2ff3fa42c9b1973)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a218dd80d52dd5a946464d85276a9712c)`()` | Gets the value of PermittedPlatform.
`public inline const ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1aad1c87f3bf1cfd812a1fed142b7aed4f)`() const` | Gets the value of PermittedPlatform.
`public inline void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1ab3e97515aa5dabbdff8cdfa06bb22956)`(ERHAPI_CrossplayPlatform NewValue)` | Sets the value of PermittedPlatform.
`public inline ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1abc3c6227e6e919f488cb27dfcba4ed45)`()` | Gets the value of PermittedInput.
`public inline const ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1ad54395727b7ccfff2b671b951362d0e0)`() const` | Gets the value of PermittedInput.
`public inline void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1a7b0065b5374b1708ecbefd784b6a1b1b)`(ERHAPI_CrossplayInput NewValue)` | Sets the value of PermittedInput.

#### Members

#### `public ERHAPI_CrossplayPlatform `[`PermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a647bcd2529106e841d692fb555865051) <a id="structFRHAPI__CrossplayPreferences_1a647bcd2529106e841d692fb555865051"></a>

The platform type that the client is allowed to play with (any, xbox-like only, playstation-like only etc.)

<br>
#### `public ERHAPI_CrossplayInput `[`PermittedInput`](#structFRHAPI__CrossplayPreferences_1a5813a58f2450a66cef55eae278165b25) <a id="structFRHAPI__CrossplayPreferences_1a5813a58f2450a66cef55eae278165b25"></a>

The input type that the client is allowed to play with (keyboard and mouse, gamepad, touch input etc.)

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__CrossplayPreferences_1a91388e37c3dc50e88f786a22a670f4b4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CrossplayPreferences_1a91388e37c3dc50e88f786a22a670f4b4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__CrossplayPreferences_1ad1acab088331e99ab2ff3fa42c9b1973)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CrossplayPreferences_1ad1acab088331e99ab2ff3fa42c9b1973"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a218dd80d52dd5a946464d85276a9712c)`()` <a id="structFRHAPI__CrossplayPreferences_1a218dd80d52dd5a946464d85276a9712c"></a>

Gets the value of PermittedPlatform.

<br>
#### `public inline const ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1aad1c87f3bf1cfd812a1fed142b7aed4f)`() const` <a id="structFRHAPI__CrossplayPreferences_1aad1c87f3bf1cfd812a1fed142b7aed4f"></a>

Gets the value of PermittedPlatform.

<br>
#### `public inline void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1ab3e97515aa5dabbdff8cdfa06bb22956)`(ERHAPI_CrossplayPlatform NewValue)` <a id="structFRHAPI__CrossplayPreferences_1ab3e97515aa5dabbdff8cdfa06bb22956"></a>

Sets the value of PermittedPlatform.

<br>
#### `public inline ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1abc3c6227e6e919f488cb27dfcba4ed45)`()` <a id="structFRHAPI__CrossplayPreferences_1abc3c6227e6e919f488cb27dfcba4ed45"></a>

Gets the value of PermittedInput.

<br>
#### `public inline const ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1ad54395727b7ccfff2b671b951362d0e0)`() const` <a id="structFRHAPI__CrossplayPreferences_1ad54395727b7ccfff2b671b951362d0e0"></a>

Gets the value of PermittedInput.

<br>
#### `public inline void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1a7b0065b5374b1708ecbefd784b6a1b1b)`(ERHAPI_CrossplayInput NewValue)` <a id="structFRHAPI__CrossplayPreferences_1a7b0065b5374b1708ecbefd784b6a1b1b"></a>

Sets the value of PermittedInput.

<br>
