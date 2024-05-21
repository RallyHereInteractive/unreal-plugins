# group `RHAPI_FileListResponse` <a id="group__RHAPI__FileListResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FileListResponse`](#structFRHAPI__FileListResponse) | 

## struct `FRHAPI_FileListResponse` <a id="structFRHAPI__FileListResponse"></a>

```
struct FRHAPI_FileListResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > `[`Files`](#structFRHAPI__FileListResponse_1a63b019ed0ecc338c10bc3cdb9a280212) | 
`public virtual bool `[`FromJson`](#structFRHAPI__FileListResponse_1a4e4c664d2b6e069027198a63ac9dbc6e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FileListResponse_1aa8398dd68b8aa0974f012609a672cb30)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1a803e61b0d38ce69a8238e07c5ff418c8)`()` | Gets the value of Files.
`public inline const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1ae35c95ec77215e43c48170d1359998bd)`() const` | Gets the value of Files.
`public inline void `[`SetFiles`](#structFRHAPI__FileListResponse_1af9d165899f5c358c51bd9d04b023d0c2)`(TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > NewValue)` | Sets the value of Files.

### Members

#### `public TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > `[`Files`](#structFRHAPI__FileListResponse_1a63b019ed0ecc338c10bc3cdb9a280212) <a id="structFRHAPI__FileListResponse_1a63b019ed0ecc338c10bc3cdb9a280212"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__FileListResponse_1a4e4c664d2b6e069027198a63ac9dbc6e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FileListResponse_1a4e4c664d2b6e069027198a63ac9dbc6e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FileListResponse_1aa8398dd68b8aa0974f012609a672cb30)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__FileListResponse_1aa8398dd68b8aa0974f012609a672cb30"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1a803e61b0d38ce69a8238e07c5ff418c8)`()` <a id="structFRHAPI__FileListResponse_1a803e61b0d38ce69a8238e07c5ff418c8"></a>

Gets the value of Files.

#### `public inline const TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > & `[`GetFiles`](#structFRHAPI__FileListResponse_1ae35c95ec77215e43c48170d1359998bd)`() const` <a id="structFRHAPI__FileListResponse_1ae35c95ec77215e43c48170d1359998bd"></a>

Gets the value of Files.

#### `public inline void `[`SetFiles`](#structFRHAPI__FileListResponse_1af9d165899f5c358c51bd9d04b023d0c2)`(TArray< `[`FRHAPI_FileResponse`](RHAPI_FileResponse.md#structFRHAPI__FileResponse)` > NewValue)` <a id="structFRHAPI__FileListResponse_1af9d165899f5c358c51bd9d04b023d0c2"></a>

Sets the value of Files.

