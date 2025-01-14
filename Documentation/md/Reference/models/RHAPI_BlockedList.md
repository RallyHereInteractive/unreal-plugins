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
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1a1252b81dbb54c0e525a7c094caeac3dd)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1ae6bab65ea751dd7ac0efd72ba5521cdb)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1a26d6054ecdf24c515ce7749f412a6140)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1aa0ea19463fe4ba100d25d1661be0868a)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1adaa1b91bf57798e40ea1d2c33c6e4b09)`()` | Gets the value of Blocked.
`public inline const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1aa9f093ff2068331d5f2a507c2aa971dc)`() const` | Gets the value of Blocked.
`public inline void `[`SetBlocked`](#structFRHAPI__BlockedList_1afef205e20075490463940b9393c1dcec)`(const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & NewValue)` | Sets the value of Blocked.
`public inline void `[`SetBlocked`](#structFRHAPI__BlockedList_1a93a0033990c27d6d15115041104038a3)`(TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > && NewValue)` | Sets the value of Blocked using move semantics.
`public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a5ec053f24175ec5b7328cddaa23a3418)`()` | Gets the value of Page.
`public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a6c8b7f5260b8f03dca6d896e6ed96da2)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__BlockedList_1a6fc7b54316eb87c4eb6bdb611ce8a61e)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` | Sets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__BlockedList_1a30fb051a344bb134e36fd43cdea5ed05)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` | Sets the value of Page using move semantics.

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

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1a1252b81dbb54c0e525a7c094caeac3dd)`()` <a id="structFRHAPI__BlockedList_1a1252b81dbb54c0e525a7c094caeac3dd"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__BlockedList_1ae6bab65ea751dd7ac0efd72ba5521cdb)`() const` <a id="structFRHAPI__BlockedList_1ae6bab65ea751dd7ac0efd72ba5521cdb"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1a26d6054ecdf24c515ce7749f412a6140)`(const FGuid & NewValue)` <a id="structFRHAPI__BlockedList_1a26d6054ecdf24c515ce7749f412a6140"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__BlockedList_1aa0ea19463fe4ba100d25d1661be0868a)`(FGuid && NewValue)` <a id="structFRHAPI__BlockedList_1aa0ea19463fe4ba100d25d1661be0868a"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1adaa1b91bf57798e40ea1d2c33c6e4b09)`()` <a id="structFRHAPI__BlockedList_1adaa1b91bf57798e40ea1d2c33c6e4b09"></a>

Gets the value of Blocked.

#### `public inline const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & `[`GetBlocked`](#structFRHAPI__BlockedList_1aa9f093ff2068331d5f2a507c2aa971dc)`() const` <a id="structFRHAPI__BlockedList_1aa9f093ff2068331d5f2a507c2aa971dc"></a>

Gets the value of Blocked.

#### `public inline void `[`SetBlocked`](#structFRHAPI__BlockedList_1afef205e20075490463940b9393c1dcec)`(const TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > & NewValue)` <a id="structFRHAPI__BlockedList_1afef205e20075490463940b9393c1dcec"></a>

Sets the value of Blocked.

#### `public inline void `[`SetBlocked`](#structFRHAPI__BlockedList_1a93a0033990c27d6d15115041104038a3)`(TArray< `[`FRHAPI_BlockedPlayer`](RHAPI_BlockedPlayer.md#structFRHAPI__BlockedPlayer)` > && NewValue)` <a id="structFRHAPI__BlockedList_1a93a0033990c27d6d15115041104038a3"></a>

Sets the value of Blocked using move semantics.

#### `public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a5ec053f24175ec5b7328cddaa23a3418)`()` <a id="structFRHAPI__BlockedList_1a5ec053f24175ec5b7328cddaa23a3418"></a>

Gets the value of Page.

#### `public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__BlockedList_1a6c8b7f5260b8f03dca6d896e6ed96da2)`() const` <a id="structFRHAPI__BlockedList_1a6c8b7f5260b8f03dca6d896e6ed96da2"></a>

Gets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__BlockedList_1a6fc7b54316eb87c4eb6bdb611ce8a61e)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` <a id="structFRHAPI__BlockedList_1a6fc7b54316eb87c4eb6bdb611ce8a61e"></a>

Sets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__BlockedList_1a30fb051a344bb134e36fd43cdea5ed05)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` <a id="structFRHAPI__BlockedList_1a30fb051a344bb134e36fd43cdea5ed05"></a>

Sets the value of Page using move semantics.

