# RHAPI_MapSelectionList <a id="group__RHAPI__MapSelectionList"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MapSelectionList`](#structFRHAPI__MapSelectionList) | 

## struct `FRHAPI_MapSelectionList` <a id="structFRHAPI__MapSelectionList"></a>

```
struct FRHAPI_MapSelectionList
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`MapSelectionListId`](#structFRHAPI__MapSelectionList_1a2638c367a7a258ae07e62ec96d16cc7d) | ID to uniquely identify this map selection list.
`public TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > `[`Maps`](#structFRHAPI__MapSelectionList_1aef29afc160c1a25a8af5f2dbe9b5eb39) | List of maps that can be chosen in this selection list.
`public virtual bool `[`FromJson`](#structFRHAPI__MapSelectionList_1ad8b23fdef9b12cd1220e76255432723f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MapSelectionList_1ac5757039a5dfb4ba500eedc62dcc9f77)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a9f57d30b8ae2bbf9ef826aeceb0901a8)`()` | Gets the value of MapSelectionListId.
`public inline const int32 & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionList_1aaef9cba64d61fa7dfba43613453373f4)`() const` | Gets the value of MapSelectionListId.
`public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a7ccb0501a74a25609a08c6eb10570ab6)`(int32 NewValue)` | Sets the value of MapSelectionListId.
`public inline bool `[`IsMapSelectionListIdDefaultValue`](#structFRHAPI__MapSelectionList_1a602c0510ce27975d12fb953d69f8f025)`() const` | Returns true if MapSelectionListId matches the default value.
`public inline void `[`SetMapSelectionListIdToDefault`](#structFRHAPI__MapSelectionList_1a5cea0fe26092b1eefe82e951310d7c75)`()` | Sets the value of MapSelectionListId to its default
`public inline TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & `[`GetMaps`](#structFRHAPI__MapSelectionList_1a1176087597f5a20435aadfe380d7577b)`()` | Gets the value of Maps.
`public inline const TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & `[`GetMaps`](#structFRHAPI__MapSelectionList_1acd9b43b6edd69821810f3ca13aca2395)`() const` | Gets the value of Maps.
`public inline void `[`SetMaps`](#structFRHAPI__MapSelectionList_1a4aba4193810a93b9e65bf99c15a6e4c8)`(TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > NewValue)` | Sets the value of Maps.

#### Members

#### `public int32 `[`MapSelectionListId`](#structFRHAPI__MapSelectionList_1a2638c367a7a258ae07e62ec96d16cc7d) <a id="structFRHAPI__MapSelectionList_1a2638c367a7a258ae07e62ec96d16cc7d"></a>

ID to uniquely identify this map selection list.

<br>
#### `public TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > `[`Maps`](#structFRHAPI__MapSelectionList_1aef29afc160c1a25a8af5f2dbe9b5eb39) <a id="structFRHAPI__MapSelectionList_1aef29afc160c1a25a8af5f2dbe9b5eb39"></a>

List of maps that can be chosen in this selection list.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MapSelectionList_1ad8b23fdef9b12cd1220e76255432723f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MapSelectionList_1ad8b23fdef9b12cd1220e76255432723f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MapSelectionList_1ac5757039a5dfb4ba500eedc62dcc9f77)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MapSelectionList_1ac5757039a5dfb4ba500eedc62dcc9f77"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a9f57d30b8ae2bbf9ef826aeceb0901a8)`()` <a id="structFRHAPI__MapSelectionList_1a9f57d30b8ae2bbf9ef826aeceb0901a8"></a>

Gets the value of MapSelectionListId.

<br>
#### `public inline const int32 & `[`GetMapSelectionListId`](#structFRHAPI__MapSelectionList_1aaef9cba64d61fa7dfba43613453373f4)`() const` <a id="structFRHAPI__MapSelectionList_1aaef9cba64d61fa7dfba43613453373f4"></a>

Gets the value of MapSelectionListId.

<br>
#### `public inline void `[`SetMapSelectionListId`](#structFRHAPI__MapSelectionList_1a7ccb0501a74a25609a08c6eb10570ab6)`(int32 NewValue)` <a id="structFRHAPI__MapSelectionList_1a7ccb0501a74a25609a08c6eb10570ab6"></a>

Sets the value of MapSelectionListId.

<br>
#### `public inline bool `[`IsMapSelectionListIdDefaultValue`](#structFRHAPI__MapSelectionList_1a602c0510ce27975d12fb953d69f8f025)`() const` <a id="structFRHAPI__MapSelectionList_1a602c0510ce27975d12fb953d69f8f025"></a>

Returns true if MapSelectionListId matches the default value.

<br>
#### `public inline void `[`SetMapSelectionListIdToDefault`](#structFRHAPI__MapSelectionList_1a5cea0fe26092b1eefe82e951310d7c75)`()` <a id="structFRHAPI__MapSelectionList_1a5cea0fe26092b1eefe82e951310d7c75"></a>

Sets the value of MapSelectionListId to its default

<br>
#### `public inline TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & `[`GetMaps`](#structFRHAPI__MapSelectionList_1a1176087597f5a20435aadfe380d7577b)`()` <a id="structFRHAPI__MapSelectionList_1a1176087597f5a20435aadfe380d7577b"></a>

Gets the value of Maps.

<br>
#### `public inline const TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > & `[`GetMaps`](#structFRHAPI__MapSelectionList_1acd9b43b6edd69821810f3ca13aca2395)`() const` <a id="structFRHAPI__MapSelectionList_1acd9b43b6edd69821810f3ca13aca2395"></a>

Gets the value of Maps.

<br>
#### `public inline void `[`SetMaps`](#structFRHAPI__MapSelectionList_1a4aba4193810a93b9e65bf99c15a6e4c8)`(TArray< `[`FRHAPI_MapConfig`](RHAPI_MapConfig.md#structFRHAPI__MapConfig)` > NewValue)` <a id="structFRHAPI__MapSelectionList_1a4aba4193810a93b9e65bf99c15a6e4c8"></a>

Sets the value of Maps.

<br>
