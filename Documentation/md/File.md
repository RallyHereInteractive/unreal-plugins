# File <a id="group__File"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_RemoteFileSubsystem`](#classURH__RemoteFileSubsystem) | File Subsystem used for file API calls.

## class `URH_RemoteFileSubsystem` <a id="classURH__RemoteFileSubsystem"></a>

```
class URH_RemoteFileSubsystem
  : public URH_GameInstanceSubsystemPlugin
```

File Subsystem used for file API calls.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__RemoteFileSubsystem_1a249b11cac6ff5da3f516459532585108)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__RemoteFileSubsystem_1ab67cd31ba8af91bf5e23f9644770f495)`()` | Safely tears down the subsystem.
`public virtual void `[`UploadFile`](#classURH__RemoteFileSubsystem_1a03467c88fad90070730fd59fd1e423b7)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` | Upload a local file to the remote file storage.
`public inline void `[`BLUEPRINT_UploadFile`](#classURH__RemoteFileSubsystem_1a1b0ce6d7fa455db7b234f52c3ef360b2)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Upload a local file to the remote file storage.
`public virtual void `[`DeleteFile`](#classURH__RemoteFileSubsystem_1a2f1ee08e22476c88dff1cdedcd7cf2ef)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorBlock Delegate)` | Delete a file from remote file storage.
`public inline void `[`BLUEPRINT_DeleteFile`](#classURH__RemoteFileSubsystem_1a13eb10c56b835fe594e88f118c681174)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Upload a local file to the remote file storage.
`public virtual void `[`DownloadFile`](#classURH__RemoteFileSubsystem_1a700698d9f3f0cfa5c59312c67f7ae567)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` | Download a remote file to local file storage.
`public virtual void `[`DownloadFile`](#classURH__RemoteFileSubsystem_1a2c9407936abcef6097184a3634dbee46)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_FileDownloadDelegate Delegate)` | Download a remote file to memory.
`public inline void `[`BLUEPRINT_DownloadFile`](#classURH__RemoteFileSubsystem_1a74b373397937c272b586d6785cc5e6b1)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | Download a remote file to local file storage.
`public virtual void `[`DownloadAllFiles`](#classURH__RemoteFileSubsystem_1aae6267a8ad1d709fd57b9b6007fd0a68)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` | Downloads all discoverable files in a remote directory to a local file directory.
`public inline void `[`BLUEPRINT_DownloadAllFiles`](#classURH__RemoteFileSubsystem_1a585db9eca7d95d6b68dd83a53527049d)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDynamicDelegate & Delegate)` | Downloads all discoverable files in a remote directory to a local file directory.
`public virtual void `[`LookupFileList`](#classURH__RemoteFileSubsystem_1a36fea83617549e77ed8ae584a72510c7)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorBlock Delegate)` | List the available remote files for an entity from the API and store results in cache.
`public inline void `[`BLUEPRINT_LookupFileList`](#classURH__RemoteFileSubsystem_1a6fe5fd4de179985acf299724bad96d07)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` | List the available remote files for an entity from the API and store results in cache.
`public inline const TMap< `[`FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory), [FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > & `[`GetFileListCache`](#classURH__RemoteFileSubsystem_1a10bf521503a066a0983a554b0011b412)`() const` | Get the entire file list cache.
`public inline virtual bool `[`ListFiles`](#classURH__RemoteFileSubsystem_1a3d9dbd4f20220f82b8047db827c37777)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,`[`FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` & OutFileList)` | List the available remote files for an entity from the cache.
`protected TMap< `[`FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory), [FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > `[`FileListCache`](#classURH__RemoteFileSubsystem_1ad6229657ea8ef6c417c9ced173eebe85) | 
`protected virtual void `[`DownloadFileList`](#classURH__RemoteFileSubsystem_1ac8ee5bc68fb208fb9c329c897b93eab9)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const TArray< FString > & RemoteFileNames,const FString & LocalDirectory,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` | Downloads all discoverable files in a remote directory to a local file directory.

#### Members

#### `public virtual void `[`Initialize`](#classURH__RemoteFileSubsystem_1a249b11cac6ff5da3f516459532585108)`()` <a id="classURH__RemoteFileSubsystem_1a249b11cac6ff5da3f516459532585108"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__RemoteFileSubsystem_1ab67cd31ba8af91bf5e23f9644770f495)`()` <a id="classURH__RemoteFileSubsystem_1ab67cd31ba8af91bf5e23f9644770f495"></a>

Safely tears down the subsystem.

<br>
#### `public virtual void `[`UploadFile`](#classURH__RemoteFileSubsystem_1a03467c88fad90070730fd59fd1e423b7)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a03467c88fad90070730fd59fd1e423b7"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `LocalFilePath` The path of the file on the local storage to upload. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_UploadFile`](#classURH__RemoteFileSubsystem_1a1b0ce6d7fa455db7b234f52c3ef360b2)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__RemoteFileSubsystem_1a1b0ce6d7fa455db7b234f52c3ef360b2"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `LocalFilePath` The path of the file on the local storage to upload. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`DeleteFile`](#classURH__RemoteFileSubsystem_1a2f1ee08e22476c88dff1cdedcd7cf2ef)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a2f1ee08e22476c88dff1cdedcd7cf2ef"></a>

Delete a file from remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_DeleteFile`](#classURH__RemoteFileSubsystem_1a13eb10c56b835fe594e88f118c681174)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__RemoteFileSubsystem_1a13eb10c56b835fe594e88f118c681174"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`DownloadFile`](#classURH__RemoteFileSubsystem_1a700698d9f3f0cfa5c59312c67f7ae567)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a700698d9f3f0cfa5c59312c67f7ae567"></a>

Download a remote file to local file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `LocalFilePath` The path of the file on the local storage to save to. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`DownloadFile`](#classURH__RemoteFileSubsystem_1a2c9407936abcef6097184a3634dbee46)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_FileDownloadDelegate Delegate)` <a id="classURH__RemoteFileSubsystem_1a2c9407936abcef6097184a3634dbee46"></a>

Download a remote file to memory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_DownloadFile`](#classURH__RemoteFileSubsystem_1a74b373397937c272b586d6785cc5e6b1)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__RemoteFileSubsystem_1a74b373397937c272b586d6785cc5e6b1"></a>

Download a remote file to local file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `LocalFilePath` The path of the file on the local storage to save to. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`DownloadAllFiles`](#classURH__RemoteFileSubsystem_1aae6267a8ad1d709fd57b9b6007fd0a68)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1aae6267a8ad1d709fd57b9b6007fd0a68"></a>

Downloads all discoverable files in a remote directory to a local file directory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `LocalDirectory` The path of the directory on the local storage to save to. 

* `bUseCachedList` If true, use the cached file list instead of fetching a new one. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_DownloadAllFiles`](#classURH__RemoteFileSubsystem_1a585db9eca7d95d6b68dd83a53527049d)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDynamicDelegate & Delegate)` <a id="classURH__RemoteFileSubsystem_1a585db9eca7d95d6b68dd83a53527049d"></a>

Downloads all discoverable files in a remote directory to a local file directory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `LocalDirectory` The path of the directory on the local storage to save to. 

* `bUseCachedList` If true, use the cached file list instead of fetching a new one. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public virtual void `[`LookupFileList`](#classURH__RemoteFileSubsystem_1a36fea83617549e77ed8ae584a72510c7)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a36fea83617549e77ed8ae584a72510c7"></a>

List the available remote files for an entity from the API and store results in cache.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline void `[`BLUEPRINT_LookupFileList`](#classURH__RemoteFileSubsystem_1a6fe5fd4de179985acf299724bad96d07)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorDynamicDelegate & Delegate)` <a id="classURH__RemoteFileSubsystem_1a6fe5fd4de179985acf299724bad96d07"></a>

List the available remote files for an entity from the API and store results in cache.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

<br>
#### `public inline const TMap< `[`FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory), [FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > & `[`GetFileListCache`](#classURH__RemoteFileSubsystem_1a10bf521503a066a0983a554b0011b412)`() const` <a id="classURH__RemoteFileSubsystem_1a10bf521503a066a0983a554b0011b412"></a>

Get the entire file list cache.

<br>
#### `public inline virtual bool `[`ListFiles`](#classURH__RemoteFileSubsystem_1a3d9dbd4f20220f82b8047db827c37777)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,`[`FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` & OutFileList)` <a id="classURH__RemoteFileSubsystem_1a3d9dbd4f20220f82b8047db827c37777"></a>

List the available remote files for an entity from the cache.

#### Parameters
* `Directory` The directory of the file on the remote storage.

<br>
#### `protected TMap< `[`FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory), [FRHAPI_FileListResponse`](models/RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > `[`FileListCache`](#classURH__RemoteFileSubsystem_1ad6229657ea8ef6c417c9ced173eebe85) <a id="classURH__RemoteFileSubsystem_1ad6229657ea8ef6c417c9ced173eebe85"></a>

<br>
#### `protected virtual void `[`DownloadFileList`](#classURH__RemoteFileSubsystem_1ac8ee5bc68fb208fb9c329c897b93eab9)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const TArray< FString > & RemoteFileNames,const FString & LocalDirectory,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1ac8ee5bc68fb208fb9c329c897b93eab9"></a>

Downloads all discoverable files in a remote directory to a local file directory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `LocalDirectory` The path of the directory on the local storage to save to. 

* `bUseCachedList` If true, use the cached file list instead of fetching a new one. 

* `Delegate` The delegate to call when the operation completes.

<br>
