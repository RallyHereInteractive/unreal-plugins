---
title: RHAPI_ValidationError
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ValidationError`](#structFRHAPI__ValidationError) | 

## struct `FRHAPI_ValidationError` <a id="structFRHAPI__ValidationError"></a>

```
struct FRHAPI_ValidationError
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > `[`Loc`](#structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095) | 
`public FString `[`Msg`](#structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c) | 
`public FString `[`Type`](#structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18) | 
`public virtual bool `[`FromJson`](#structFRHAPI__ValidationError_1a5292552a28b325837314a85273c37612)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ValidationError_1a5771c3c64fe11f17422786eef8d3f9f2)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1a7166c892530682e5e1992997ed9a0305)`()` | Gets the value of Loc.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1aa9d05400718c9d43e68b8c8267150e65)`() const` | Gets the value of Loc.
`public inline FORCEINLINE void `[`SetLoc`](#structFRHAPI__ValidationError_1a636d4e68b25f4118e848e38db3509890)`(const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & NewValue)` | Sets the value of Loc.
`public inline FORCEINLINE void `[`SetLoc`](#structFRHAPI__ValidationError_1a29087e6f576981cc1e4a03d3cd9573f4)`(TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > && NewValue)` | Sets the value of Loc using move semantics.
`public inline FORCEINLINE FString & `[`GetMsg`](#structFRHAPI__ValidationError_1a569990179b4e199a48a26d11484b4f95)`()` | Gets the value of Msg.
`public inline FORCEINLINE const FString & `[`GetMsg`](#structFRHAPI__ValidationError_1ace511a31ac11390759dad611f644f7fe)`() const` | Gets the value of Msg.
`public inline FORCEINLINE void `[`SetMsg`](#structFRHAPI__ValidationError_1a155fe5d260592408e370c28b31880d65)`(const FString & NewValue)` | Sets the value of Msg.
`public inline FORCEINLINE void `[`SetMsg`](#structFRHAPI__ValidationError_1accd8cbd3abf444b96cc26e3ab042987a)`(FString && NewValue)` | Sets the value of Msg using move semantics.
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__ValidationError_1a374144e8796647fa7ee1ba3e8c27c978)`()` | Gets the value of Type.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__ValidationError_1a4c5dc5e3cabc95a33456a0b9a75a7a2f)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__ValidationError_1a66eb48a6a183e70e22d5d973113b6eb6)`(const FString & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__ValidationError_1a2e2c231c6a09d91a83ed30a337ff86e2)`(FString && NewValue)` | Sets the value of Type using move semantics.

### Members

#### `public TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > `[`Loc`](#structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095) <a id="structFRHAPI__ValidationError_1a1a98d9fa06ac2d429c8dfc06f71e6095"></a>

#### `public FString `[`Msg`](#structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c) <a id="structFRHAPI__ValidationError_1aad95bbd2a625698ef454b0b973bd3b4c"></a>

#### `public FString `[`Type`](#structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18) <a id="structFRHAPI__ValidationError_1a8e9d427414bc73fe37828220e2cc8d18"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__ValidationError_1a5292552a28b325837314a85273c37612)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ValidationError_1a5292552a28b325837314a85273c37612"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ValidationError_1a5771c3c64fe11f17422786eef8d3f9f2)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ValidationError_1a5771c3c64fe11f17422786eef8d3f9f2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1a7166c892530682e5e1992997ed9a0305)`()` <a id="structFRHAPI__ValidationError_1a7166c892530682e5e1992997ed9a0305"></a>

Gets the value of Loc.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & `[`GetLoc`](#structFRHAPI__ValidationError_1aa9d05400718c9d43e68b8c8267150e65)`() const` <a id="structFRHAPI__ValidationError_1aa9d05400718c9d43e68b8c8267150e65"></a>

Gets the value of Loc.

#### `public inline FORCEINLINE void `[`SetLoc`](#structFRHAPI__ValidationError_1a636d4e68b25f4118e848e38db3509890)`(const TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > & NewValue)` <a id="structFRHAPI__ValidationError_1a636d4e68b25f4118e848e38db3509890"></a>

Sets the value of Loc.

#### `public inline FORCEINLINE void `[`SetLoc`](#structFRHAPI__ValidationError_1a29087e6f576981cc1e4a03d3cd9573f4)`(TArray< `[`FRHAPI_LocationInner`](RHAPI_LocationInner.md#structFRHAPI__LocationInner)` > && NewValue)` <a id="structFRHAPI__ValidationError_1a29087e6f576981cc1e4a03d3cd9573f4"></a>

Sets the value of Loc using move semantics.

#### `public inline FORCEINLINE FString & `[`GetMsg`](#structFRHAPI__ValidationError_1a569990179b4e199a48a26d11484b4f95)`()` <a id="structFRHAPI__ValidationError_1a569990179b4e199a48a26d11484b4f95"></a>

Gets the value of Msg.

#### `public inline FORCEINLINE const FString & `[`GetMsg`](#structFRHAPI__ValidationError_1ace511a31ac11390759dad611f644f7fe)`() const` <a id="structFRHAPI__ValidationError_1ace511a31ac11390759dad611f644f7fe"></a>

Gets the value of Msg.

#### `public inline FORCEINLINE void `[`SetMsg`](#structFRHAPI__ValidationError_1a155fe5d260592408e370c28b31880d65)`(const FString & NewValue)` <a id="structFRHAPI__ValidationError_1a155fe5d260592408e370c28b31880d65"></a>

Sets the value of Msg.

#### `public inline FORCEINLINE void `[`SetMsg`](#structFRHAPI__ValidationError_1accd8cbd3abf444b96cc26e3ab042987a)`(FString && NewValue)` <a id="structFRHAPI__ValidationError_1accd8cbd3abf444b96cc26e3ab042987a"></a>

Sets the value of Msg using move semantics.

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__ValidationError_1a374144e8796647fa7ee1ba3e8c27c978)`()` <a id="structFRHAPI__ValidationError_1a374144e8796647fa7ee1ba3e8c27c978"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__ValidationError_1a4c5dc5e3cabc95a33456a0b9a75a7a2f)`() const` <a id="structFRHAPI__ValidationError_1a4c5dc5e3cabc95a33456a0b9a75a7a2f"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__ValidationError_1a66eb48a6a183e70e22d5d973113b6eb6)`(const FString & NewValue)` <a id="structFRHAPI__ValidationError_1a66eb48a6a183e70e22d5d973113b6eb6"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__ValidationError_1a2e2c231c6a09d91a83ed30a337ff86e2)`(FString && NewValue)` <a id="structFRHAPI__ValidationError_1a2e2c231c6a09d91a83ed30a337ff86e2"></a>

Sets the value of Type using move semantics.

