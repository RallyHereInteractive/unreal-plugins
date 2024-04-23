# File <a id="group__File"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_FileSubsystem`](#classURH__FileSubsystem) | File Subsystem used for file API calls.

## class `URH_FileSubsystem` <a id="classURH__FileSubsystem"></a>

```
class URH_FileSubsystem
  : public URH_GameInstanceSubsystemPlugin
```

File Subsystem used for file API calls.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__FileSubsystem_1a00d230496f246f5914d9d4a867a0990a)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__FileSubsystem_1a83c13fc9b586f6de3936cc83b44edd6e)`()` | Safely tears down the subsystem.
`public virtual void `[`UploadFile`](#classURH__FileSubsystem_1aba2e99f3a712d90bc42cee92ee77192d)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` | Upload a local file to the remote file storage.
`public inline void `[`BLUEPRINT_UploadFile`](#classURH__FileSubsystem_1ae402c1d50344fab33959babf6b7460a9)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Upload a local file to the remote file storage.
`public virtual void `[`DeleteFile`](#classURH__FileSubsystem_1ad7b0fe2fe44ea07341c61f70068b2ce4)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorBlock Delegate)` | Delete a file from remote file storage.
`public inline void `[`BLUEPRINT_DeleteFile`](#classURH__FileSubsystem_1aaa6da420a95028062b5c5253e1dbc05d)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Upload a local file to the remote file storage.
`public virtual void `[`DownloadFile`](#classURH__FileSubsystem_1a827f8ef2df88eb239b59dcfeb26e42ea)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` | Download a remote file to local file storage.
`public virtual void `[`DownloadFile`](#classURH__FileSubsystem_1a46b151ed6178edb9790ffadfecb5ff08)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_FileDownloadDelegate Delegate)` | Download a remote file to memory.
`public inline void `[`BLUEPRINT_DownloadFile`](#classURH__FileSubsystem_1a0225e3d415c12e734787b8729eaeb864)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Download a remote file to local file storage.
`public virtual void `[`DownloadAllFiles`](#classURH__FileSubsystem_1af5c5e2bababfe5eef730974b183c8dab)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` | Downloads all discoverable files in a remote directory to a local file directory.
`public inline void `[`BLUEPRINT_DownloadAllFiles`](#classURH__FileSubsystem_1a8442a05b21f5c6d45bf1cc50d67fa912)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDynamicDelegate & Delegate)` | Downloads all discoverable files in a remote directory to a local file directory.
`public virtual void `[`LookupFileList`](#classURH__FileSubsystem_1a120827aa1ab74f82fd2641512695f1d9)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorBlock Delegate)` | List the available remote files for an entity from the API and store results in cache.
`public inline void `[`BLUEPRINT_LookupFileList`](#classURH__FileSubsystem_1a8d3408b1fad196e052584507a288fe2f)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | List the available remote files for an entity from the API and store results in cache.
`public inline const TMap< `[`FRH_FileApiDirectory](Common.md#structFRH__FileApiDirectory), [FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > & `[`GetFileListCache`](#classURH__FileSubsystem_1a2a8a714f3451d24bce82e5321218b7ae)`() const` | Get the entire file list cache.
`public inline virtual bool `[`ListFiles`](#classURH__FileSubsystem_1a9c0b817aea1fd5bce65fce3ae4d1d987)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,`[`FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` & OutFileList)` | List the available remote files for an entity from the cache.
`protected TMap< `[`FRH_FileApiDirectory](Common.md#structFRH__FileApiDirectory), [FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > `[`FileListCache`](#classURH__FileSubsystem_1a99fc59f1c9f4e173e6d014ffa84c445b) | 
`protected virtual void `[`DownloadFileList`](#classURH__FileSubsystem_1a963feef939fd55f7930815bf4c435df2)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const TArray< FString > & RemoteFileNames,const FString & LocalDirectory,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` | Downloads all discoverable files in a remote directory to a local file directory.

#### Members

#### `public virtual void `[`Initialize`](#classURH__FileSubsystem_1a00d230496f246f5914d9d4a867a0990a)`()` <a id="classURH__FileSubsystem_1a00d230496f246f5914d9d4a867a0990a"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__FileSubsystem_1a83c13fc9b586f6de3936cc83b44edd6e)`()` <a id="classURH__FileSubsystem_1a83c13fc9b586f6de3936cc83b44edd6e"></a>

Safely tears down the subsystem.

<br>
#### `public virtual void `[`UploadFile`](#classURH__FileSubsystem_1aba2e99f3a712d90bc42cee92ee77192d)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__FileSubsystem_1aba2e99f3a712d90bc42cee92ee77192d"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `LocalFilePath` The path of the file on the local storage to upload. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_UploadFile`](#classURH__FileSubsystem_1ae402c1d50344fab33959babf6b7460a9)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__FileSubsystem_1ae402c1d50344fab33959babf6b7460a9"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `LocalFilePath` The path of the file on the local storage to upload. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`DeleteFile`](#classURH__FileSubsystem_1ad7b0fe2fe44ea07341c61f70068b2ce4)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__FileSubsystem_1ad7b0fe2fe44ea07341c61f70068b2ce4"></a>

Delete a file from remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_DeleteFile`](#classURH__FileSubsystem_1aaa6da420a95028062b5c5253e1dbc05d)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__FileSubsystem_1aaa6da420a95028062b5c5253e1dbc05d"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`DownloadFile`](#classURH__FileSubsystem_1a827f8ef2df88eb239b59dcfeb26e42ea)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__FileSubsystem_1a827f8ef2df88eb239b59dcfeb26e42ea"></a>

Download a remote file to local file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `LocalFilePath` The path of the file on the local storage to save to. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`DownloadFile`](#classURH__FileSubsystem_1a46b151ed6178edb9790ffadfecb5ff08)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_FileDownloadDelegate Delegate)` <a id="classURH__FileSubsystem_1a46b151ed6178edb9790ffadfecb5ff08"></a>

Download a remote file to memory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_DownloadFile`](#classURH__FileSubsystem_1a0225e3d415c12e734787b8729eaeb864)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__FileSubsystem_1a0225e3d415c12e734787b8729eaeb864"></a>

Download a remote file to local file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `LocalFilePath` The path of the file on the local storage to save to. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`DownloadAllFiles`](#classURH__FileSubsystem_1af5c5e2bababfe5eef730974b183c8dab)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` <a id="classURH__FileSubsystem_1af5c5e2bababfe5eef730974b183c8dab"></a>

Downloads all discoverable files in a remote directory to a local file directory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `LocalDirectory` The path of the directory on the local storage to save to. 

* `bUseCachedList` If true, use the cached file list instead of fetching a new one. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_DownloadAllFiles`](#classURH__FileSubsystem_1a8442a05b21f5c6d45bf1cc50d67fa912)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDynamicDelegate & Delegate)` <a id="classURH__FileSubsystem_1a8442a05b21f5c6d45bf1cc50d67fa912"></a>

Downloads all discoverable files in a remote directory to a local file directory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `LocalDirectory` The path of the directory on the local storage to save to. 

* `bUseCachedList` If true, use the cached file list instead of fetching a new one. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`LookupFileList`](#classURH__FileSubsystem_1a120827aa1ab74f82fd2641512695f1d9)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__FileSubsystem_1a120827aa1ab74f82fd2641512695f1d9"></a>

List the available remote files for an entity from the API and store results in cache.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_LookupFileList`](#classURH__FileSubsystem_1a8d3408b1fad196e052584507a288fe2f)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__FileSubsystem_1a8d3408b1fad196e052584507a288fe2f"></a>

List the available remote files for an entity from the API and store results in cache.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline const TMap< `[`FRH_FileApiDirectory](Common.md#structFRH__FileApiDirectory), [FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > & `[`GetFileListCache`](#classURH__FileSubsystem_1a2a8a714f3451d24bce82e5321218b7ae)`() const` <a id="classURH__FileSubsystem_1a2a8a714f3451d24bce82e5321218b7ae"></a>

Get the entire file list cache.

<br>
#### `public inline virtual bool `[`ListFiles`](#classURH__FileSubsystem_1a9c0b817aea1fd5bce65fce3ae4d1d987)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,`[`FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` & OutFileList)` <a id="classURH__FileSubsystem_1a9c0b817aea1fd5bce65fce3ae4d1d987"></a>

List the available remote files for an entity from the cache.

#### Parameters
* `Directory` The directory of the file on the remote storage.

<br>
#### `protected TMap< `[`FRH_FileApiDirectory](Common.md#structFRH__FileApiDirectory), [FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > `[`FileListCache`](#classURH__FileSubsystem_1a99fc59f1c9f4e173e6d014ffa84c445b) <a id="classURH__FileSubsystem_1a99fc59f1c9f4e173e6d014ffa84c445b"></a>

<br>
#### `protected virtual void `[`DownloadFileList`](#classURH__FileSubsystem_1a963feef939fd55f7930815bf4c435df2)`(const `[`FRH_FileApiDirectory`](Common.md#structFRH__FileApiDirectory)` & Directory,const TArray< FString > & RemoteFileNames,const FString & LocalDirectory,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` <a id="classURH__FileSubsystem_1a963feef939fd55f7930815bf4c435df2"></a>

Downloads all discoverable files in a remote directory to a local file directory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `LocalDirectory` The path of the directory on the local storage to save to. 

* `bUseCachedList` If true, use the cached file list instead of fetching a new one. 

* `Delegate` The delegate to call when the operation completes.

<br>
