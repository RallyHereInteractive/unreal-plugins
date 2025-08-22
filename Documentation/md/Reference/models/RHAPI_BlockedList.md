---
title: RHAPI_BlockedList
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BlockedList`](#structFRHAPI__BlockedList) | The list of players that is blocked.

## struct `FRHAPI_BlockedList` <a id="structFRHAPI__BlockedList"></a>

```
struct FRHAPI_BlockedList
  : public FRHAPI_Model
```

The list of players that is blocked.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__BlockedList_1a81ca3ffaaa57933136d4e34c898eaf59) | 
`public TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > `[`Blocked`](#structFRHAPI__BlockedList_1a9513852bd685b421e1d530d4c5fef82b) | 
`public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__BlockedList_1a8744288d16432ddc662e34b3390c569a) | 
`public virtual bool `[`FromJson`](#structFRHAPI__BlockedList_1a171178ab77c2a5d477bf0687a43ef1f5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BlockedList_1abefa7c8b45261ad93e33e0a252f8d66e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1a8439ddf307614e0a68690f17b94d2d80)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1af8227f602deb5fa551884f85d6780613)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1a82c7ecae82157ca6ef488dd71e64e99b)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1a44c582e3892c41db5fb8a8c0a2d21c93)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1a4cd1af8e915bd4b8cc33eaad7f8ef316)`()` | Gets the value of Blocked.
`public inline FORCEINLINE const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1ab50f1c861c7dde7baa2b8ec3c559b30e)`() const` | Gets the value of Blocked.
`public inline FORCEINLINE void `[`SetBlocked`](#structFRHAPI__BlockedList_1a344b99d561016a667d0a8f84bce29422)`(const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & NewValue)` | Sets the value of Blocked.
`public inline FORCEINLINE void `[`SetBlocked`](#structFRHAPI__BlockedList_1a976ae5b0fd3d6d4e6646e5339334c202)`(TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > && NewValue)` | Sets the value of Blocked using move semantics.
`public inline FORCEINLINE `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a1c7015d23e772524527ce26b5216ea2f)`()` | Gets the value of Page.
`public inline FORCEINLINE const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a7c62e3332e9279c2b4c1c0f40e69daf9)`() const` | Gets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__BlockedList_1ab4927e13a609967b56e29de146cd0183)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` | Sets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__BlockedList_1aa9d8156ce2ef5e713f75de059936d173)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` | Sets the value of Page using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__BlockedList_1a81ca3ffaaa57933136d4e34c898eaf59) <a id="structFRHAPI__BlockedList_1a81ca3ffaaa57933136d4e34c898eaf59"></a>

#### `public TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > `[`Blocked`](#structFRHAPI__BlockedList_1a9513852bd685b421e1d530d4c5fef82b) <a id="structFRHAPI__BlockedList_1a9513852bd685b421e1d530d4c5fef82b"></a>

#### `public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__BlockedList_1a8744288d16432ddc662e34b3390c569a) <a id="structFRHAPI__BlockedList_1a8744288d16432ddc662e34b3390c569a"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__BlockedList_1a171178ab77c2a5d477bf0687a43ef1f5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BlockedList_1a171178ab77c2a5d477bf0687a43ef1f5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BlockedList_1abefa7c8b45261ad93e33e0a252f8d66e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BlockedList_1abefa7c8b45261ad93e33e0a252f8d66e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1a8439ddf307614e0a68690f17b94d2d80)`()` <a id="structFRHAPI__BlockedList_1a8439ddf307614e0a68690f17b94d2d80"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1af8227f602deb5fa551884f85d6780613)`() const` <a id="structFRHAPI__BlockedList_1af8227f602deb5fa551884f85d6780613"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1a82c7ecae82157ca6ef488dd71e64e99b)`(const FGuid & NewValue)` <a id="structFRHAPI__BlockedList_1a82c7ecae82157ca6ef488dd71e64e99b"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1a44c582e3892c41db5fb8a8c0a2d21c93)`(FGuid && NewValue)` <a id="structFRHAPI__BlockedList_1a44c582e3892c41db5fb8a8c0a2d21c93"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1a4cd1af8e915bd4b8cc33eaad7f8ef316)`()` <a id="structFRHAPI__BlockedList_1a4cd1af8e915bd4b8cc33eaad7f8ef316"></a>

Gets the value of Blocked.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1ab50f1c861c7dde7baa2b8ec3c559b30e)`() const` <a id="structFRHAPI__BlockedList_1ab50f1c861c7dde7baa2b8ec3c559b30e"></a>

Gets the value of Blocked.

#### `public inline FORCEINLINE void `[`SetBlocked`](#structFRHAPI__BlockedList_1a344b99d561016a667d0a8f84bce29422)`(const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & NewValue)` <a id="structFRHAPI__BlockedList_1a344b99d561016a667d0a8f84bce29422"></a>

Sets the value of Blocked.

#### `public inline FORCEINLINE void `[`SetBlocked`](#structFRHAPI__BlockedList_1a976ae5b0fd3d6d4e6646e5339334c202)`(TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > && NewValue)` <a id="structFRHAPI__BlockedList_1a976ae5b0fd3d6d4e6646e5339334c202"></a>

Sets the value of Blocked using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a1c7015d23e772524527ce26b5216ea2f)`()` <a id="structFRHAPI__BlockedList_1a1c7015d23e772524527ce26b5216ea2f"></a>

Gets the value of Page.

#### `public inline FORCEINLINE const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a7c62e3332e9279c2b4c1c0f40e69daf9)`() const` <a id="structFRHAPI__BlockedList_1a7c62e3332e9279c2b4c1c0f40e69daf9"></a>

Gets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__BlockedList_1ab4927e13a609967b56e29de146cd0183)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` <a id="structFRHAPI__BlockedList_1ab4927e13a609967b56e29de146cd0183"></a>

Sets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__BlockedList_1aa9d8156ce2ef5e713f75de059936d173)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` <a id="structFRHAPI__BlockedList_1aa9d8156ce2ef5e713f75de059936d173"></a>

Sets the value of Page using move semantics.

