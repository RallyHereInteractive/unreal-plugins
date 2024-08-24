# group `RHAPI_MapSelectionList` <a id="group__RHAPI__MapSelectionList"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MapSelectionList`](#structFRHAPI__MapSelectionList) | DEPRECATED A list of maps that can be chosen from when an instance is launching.

---
title: FRHAPI_MapSelectionList
---

```
struct FRHAPI_MapSelectionList
  : public FRHAPI_Model
```

DEPRECATED A list of maps that can be chosen from when an instance is launching.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MapSelectionListId`](#structFRHAPI__MapSelectionList_1ac074b5068cab4beed3045279f51fe7f7) | ID to uniquely identify this map selection list.
`public TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > `[`Maps`](#structFRHAPI__MapSelectionList_1aef29afc160c1a25a8af5f2dbe9b5eb39) | List of maps that can be chosen in this selection list.
`public virtual bool `[`FromJson`](#structFRHAPI__MapSelectionList_1ac2c69701f4f0315eb19a9dcb7b025abd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MapSelectionList_1a62225e55a8820e581aef1428cf019259)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a33760d8296656286de30e157c9b8d75d)`()` | Gets the value of MapSelectionListId.
`public inline const FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionList_1accb162b236aa274d987f72da2a72d186)`() const` | Gets the value of MapSelectionListId.
`public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a924c4bb7da793a317f947dd0920ca22b)`(const FString & NewValue)` | Sets the value of MapSelectionListId.
`public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a238f74d888833647a12ce25947817f52)`(FString && NewValue)` | Sets the value of MapSelectionListId using move semantics.
`public inline TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & `[`GetMaps`](#structFRHAPI__MapSelectionList_1a1176087597f5a20435aadfe380d7577b)`()` | Gets the value of Maps.
`public inline const TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & `[`GetMaps`](#structFRHAPI__MapSelectionList_1acd9b43b6edd69821810f3ca13aca2395)`() const` | Gets the value of Maps.
`public inline void `[`SetMaps`](#structFRHAPI__MapSelectionList_1a8291b3fa0b812dfed6bfb3c28f502169)`(const TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & NewValue)` | Sets the value of Maps.
`public inline void `[`SetMaps`](#structFRHAPI__MapSelectionList_1a1755709a6b8aceaaf44dd1d69004a152)`(TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > && NewValue)` | Sets the value of Maps using move semantics.

### Members

#### `public FString `[`MapSelectionListId`](#structFRHAPI__MapSelectionList_1ac074b5068cab4beed3045279f51fe7f7) <a id="structFRHAPI__MapSelectionList_1ac074b5068cab4beed3045279f51fe7f7"></a>

ID to uniquely identify this map selection list.

#### `public TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > `[`Maps`](#structFRHAPI__MapSelectionList_1aef29afc160c1a25a8af5f2dbe9b5eb39) <a id="structFRHAPI__MapSelectionList_1aef29afc160c1a25a8af5f2dbe9b5eb39"></a>

List of maps that can be chosen in this selection list.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MapSelectionList_1ac2c69701f4f0315eb19a9dcb7b025abd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MapSelectionList_1ac2c69701f4f0315eb19a9dcb7b025abd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MapSelectionList_1a62225e55a8820e581aef1428cf019259)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MapSelectionList_1a62225e55a8820e581aef1428cf019259"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a33760d8296656286de30e157c9b8d75d)`()` <a id="structFRHAPI__MapSelectionList_1a33760d8296656286de30e157c9b8d75d"></a>

Gets the value of MapSelectionListId.

#### `public inline const FString & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionList_1accb162b236aa274d987f72da2a72d186)`() const` <a id="structFRHAPI__MapSelectionList_1accb162b236aa274d987f72da2a72d186"></a>

Gets the value of MapSelectionListId.

#### `public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a924c4bb7da793a317f947dd0920ca22b)`(const FString & NewValue)` <a id="structFRHAPI__MapSelectionList_1a924c4bb7da793a317f947dd0920ca22b"></a>

Sets the value of MapSelectionListId.

#### `public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a238f74d888833647a12ce25947817f52)`(FString && NewValue)` <a id="structFRHAPI__MapSelectionList_1a238f74d888833647a12ce25947817f52"></a>

Sets the value of MapSelectionListId using move semantics.

#### `public inline TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & `[`GetMaps`](#structFRHAPI__MapSelectionList_1a1176087597f5a20435aadfe380d7577b)`()` <a id="structFRHAPI__MapSelectionList_1a1176087597f5a20435aadfe380d7577b"></a>

Gets the value of Maps.

#### `public inline const TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & `[`GetMaps`](#structFRHAPI__MapSelectionList_1acd9b43b6edd69821810f3ca13aca2395)`() const` <a id="structFRHAPI__MapSelectionList_1acd9b43b6edd69821810f3ca13aca2395"></a>

Gets the value of Maps.

#### `public inline void `[`SetMaps`](#structFRHAPI__MapSelectionList_1a8291b3fa0b812dfed6bfb3c28f502169)`(const TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & NewValue)` <a id="structFRHAPI__MapSelectionList_1a8291b3fa0b812dfed6bfb3c28f502169"></a>

Sets the value of Maps.

#### `public inline void `[`SetMaps`](#structFRHAPI__MapSelectionList_1a1755709a6b8aceaaf44dd1d69004a152)`(TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > && NewValue)` <a id="structFRHAPI__MapSelectionList_1a1755709a6b8aceaaf44dd1d69004a152"></a>

Sets the value of Maps using move semantics.

