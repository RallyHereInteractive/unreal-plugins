---
title: RHAPI_CrossplayPreferences
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__CrossplayPreferences_1a85ca595c599c9b10e24337047d218c40)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a74ca33b2c8dfdf1c6f36af4cfa893048)`()` | Gets the value of PermittedPlatform.
`public inline FORCEINLINE const ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1ade51a54f943d2b4f11241ae69835d1ce)`() const` | Gets the value of PermittedPlatform.
`public inline FORCEINLINE void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a274dc06ebc4ddb255922707503725f87)`(const ERHAPI_CrossplayPlatform & NewValue)` | Sets the value of PermittedPlatform.
`public inline FORCEINLINE void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a498a4a1e0369caf4e14fd6e0e170333d)`(ERHAPI_CrossplayPlatform && NewValue)` | Sets the value of PermittedPlatform using move semantics.
`public inline FORCEINLINE ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1a65797a1e6d855e94a11f23db61053991)`()` | Gets the value of PermittedInput.
`public inline FORCEINLINE const ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1a4a1e1c35b0e3e412c4b6d82c32854e25)`() const` | Gets the value of PermittedInput.
`public inline FORCEINLINE void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1ac01b386143c848013017ec12039a583c)`(const ERHAPI_CrossplayInput & NewValue)` | Sets the value of PermittedInput.
`public inline FORCEINLINE void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1aff08b9898bc0aa8e734e1351e4439c4e)`(ERHAPI_CrossplayInput && NewValue)` | Sets the value of PermittedInput using move semantics.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__CrossplayPreferences_1a85ca595c599c9b10e24337047d218c40)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CrossplayPreferences_1a85ca595c599c9b10e24337047d218c40"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a74ca33b2c8dfdf1c6f36af4cfa893048)`()` <a id="structFRHAPI__CrossplayPreferences_1a74ca33b2c8dfdf1c6f36af4cfa893048"></a>

Gets the value of PermittedPlatform.

#### `public inline FORCEINLINE const ERHAPI_CrossplayPlatform & `[`GetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1ade51a54f943d2b4f11241ae69835d1ce)`() const` <a id="structFRHAPI__CrossplayPreferences_1ade51a54f943d2b4f11241ae69835d1ce"></a>

Gets the value of PermittedPlatform.

#### `public inline FORCEINLINE void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a274dc06ebc4ddb255922707503725f87)`(const ERHAPI_CrossplayPlatform & NewValue)` <a id="structFRHAPI__CrossplayPreferences_1a274dc06ebc4ddb255922707503725f87"></a>

Sets the value of PermittedPlatform.

#### `public inline FORCEINLINE void `[`SetPermittedPlatform`](#structFRHAPI__CrossplayPreferences_1a498a4a1e0369caf4e14fd6e0e170333d)`(ERHAPI_CrossplayPlatform && NewValue)` <a id="structFRHAPI__CrossplayPreferences_1a498a4a1e0369caf4e14fd6e0e170333d"></a>

Sets the value of PermittedPlatform using move semantics.

#### `public inline FORCEINLINE ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1a65797a1e6d855e94a11f23db61053991)`()` <a id="structFRHAPI__CrossplayPreferences_1a65797a1e6d855e94a11f23db61053991"></a>

Gets the value of PermittedInput.

#### `public inline FORCEINLINE const ERHAPI_CrossplayInput & `[`GetPermittedInput`](#structFRHAPI__CrossplayPreferences_1a4a1e1c35b0e3e412c4b6d82c32854e25)`() const` <a id="structFRHAPI__CrossplayPreferences_1a4a1e1c35b0e3e412c4b6d82c32854e25"></a>

Gets the value of PermittedInput.

#### `public inline FORCEINLINE void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1ac01b386143c848013017ec12039a583c)`(const ERHAPI_CrossplayInput & NewValue)` <a id="structFRHAPI__CrossplayPreferences_1ac01b386143c848013017ec12039a583c"></a>

Sets the value of PermittedInput.

#### `public inline FORCEINLINE void `[`SetPermittedInput`](#structFRHAPI__CrossplayPreferences_1aff08b9898bc0aa8e734e1351e4439c4e)`(ERHAPI_CrossplayInput && NewValue)` <a id="structFRHAPI__CrossplayPreferences_1aff08b9898bc0aa8e734e1351e4439c4e"></a>

Sets the value of PermittedInput using move semantics.

