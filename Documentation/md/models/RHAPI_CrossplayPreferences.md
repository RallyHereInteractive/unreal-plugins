# group `RHAPI_CrossplayPreferences` <a id="group__RHAPI__CrossplayPreferences"></a>

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_CrossplayPlatform `[`PermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a647bcd2529106e841d692fb555865051) | The platform type that the client is allowed to play with (any, xbox-like only, playstation-like only etc.)
`public ERHAPI_CrossplayInput `[`PermittedInput`](#structFRHAPI__CrossplayPreferences_1a5813a58f2450a66cef55eae278165b25) | The input type that the client is allowed to play with (keyboard and mouse, gamepad, touch input etc.)
`public virtual bool `[`FromJson`](#structFRHAPI__CrossplayPreferences_1a4bd84c758c05a4c6d20c91c9589a4809)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CrossplayPreferences_1ad1f73a7207943eec0792c0c03ce533e2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a218dd80d52dd5a946464d85276a9712c)`()` | Gets the value of PermittedPlatform.
`public inline const ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1aad1c87f3bf1cfd812a1fed142b7aed4f)`() const` | Gets the value of PermittedPlatform.
`public inline void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1ab64e2c751110fa6a1df0ced701add27c)`(const ERHAPI_CrossplayPlatform & NewValue)` | Sets the value of PermittedPlatform.
`public inline void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1ac69e1e71d8f07300b317a525f74f68d4)`(ERHAPI_CrossplayPlatform && NewValue)` | Sets the value of PermittedPlatform using move semantics.
`public inline ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1abc3c6227e6e919f488cb27dfcba4ed45)`()` | Gets the value of PermittedInput.
`public inline const ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1ad54395727b7ccfff2b671b951362d0e0)`() const` | Gets the value of PermittedInput.
`public inline void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1ac5d33878d5c008d84cebb2d1e187c33f)`(const ERHAPI_CrossplayInput & NewValue)` | Sets the value of PermittedInput.
`public inline void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1a111ddddb6c1bf63f29639aff74c5103e)`(ERHAPI_CrossplayInput && NewValue)` | Sets the value of PermittedInput using move semantics.

### Members

#### `public ERHAPI_CrossplayPlatform `[`PermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a647bcd2529106e841d692fb555865051) <a id="structFRHAPI__CrossplayPreferences_1a647bcd2529106e841d692fb555865051"></a>

The platform type that the client is allowed to play with (any, xbox-like only, playstation-like only etc.)

#### `public ERHAPI_CrossplayInput `[`PermittedInput`](#structFRHAPI__CrossplayPreferences_1a5813a58f2450a66cef55eae278165b25) <a id="structFRHAPI__CrossplayPreferences_1a5813a58f2450a66cef55eae278165b25"></a>

The input type that the client is allowed to play with (keyboard and mouse, gamepad, touch input etc.)

#### `public virtual bool `[`FromJson`](#structFRHAPI__CrossplayPreferences_1a4bd84c758c05a4c6d20c91c9589a4809)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CrossplayPreferences_1a4bd84c758c05a4c6d20c91c9589a4809"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CrossplayPreferences_1ad1f73a7207943eec0792c0c03ce533e2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CrossplayPreferences_1ad1f73a7207943eec0792c0c03ce533e2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a218dd80d52dd5a946464d85276a9712c)`()` <a id="structFRHAPI__CrossplayPreferences_1a218dd80d52dd5a946464d85276a9712c"></a>

Gets the value of PermittedPlatform.

#### `public inline const ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1aad1c87f3bf1cfd812a1fed142b7aed4f)`() const` <a id="structFRHAPI__CrossplayPreferences_1aad1c87f3bf1cfd812a1fed142b7aed4f"></a>

Gets the value of PermittedPlatform.

#### `public inline void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1ab64e2c751110fa6a1df0ced701add27c)`(const ERHAPI_CrossplayPlatform & NewValue)` <a id="structFRHAPI__CrossplayPreferences_1ab64e2c751110fa6a1df0ced701add27c"></a>

Sets the value of PermittedPlatform.

#### `public inline void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1ac69e1e71d8f07300b317a525f74f68d4)`(ERHAPI_CrossplayPlatform && NewValue)` <a id="structFRHAPI__CrossplayPreferences_1ac69e1e71d8f07300b317a525f74f68d4"></a>

Sets the value of PermittedPlatform using move semantics.

#### `public inline ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1abc3c6227e6e919f488cb27dfcba4ed45)`()` <a id="structFRHAPI__CrossplayPreferences_1abc3c6227e6e919f488cb27dfcba4ed45"></a>

Gets the value of PermittedInput.

#### `public inline const ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1ad54395727b7ccfff2b671b951362d0e0)`() const` <a id="structFRHAPI__CrossplayPreferences_1ad54395727b7ccfff2b671b951362d0e0"></a>

Gets the value of PermittedInput.

#### `public inline void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1ac5d33878d5c008d84cebb2d1e187c33f)`(const ERHAPI_CrossplayInput & NewValue)` <a id="structFRHAPI__CrossplayPreferences_1ac5d33878d5c008d84cebb2d1e187c33f"></a>

Sets the value of PermittedInput.

#### `public inline void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1a111ddddb6c1bf63f29639aff74c5103e)`(ERHAPI_CrossplayInput && NewValue)` <a id="structFRHAPI__CrossplayPreferences_1a111ddddb6c1bf63f29639aff74c5103e"></a>

Sets the value of PermittedInput using move semantics.

