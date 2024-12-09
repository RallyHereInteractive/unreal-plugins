---
title: File
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__RemoteFileSubsystem_1a249b11cac6ff5da3f516459532585108)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__RemoteFileSubsystem_1ab67cd31ba8af91bf5e23f9644770f495)`()` | Safely tears down the subsystem.
`public inline virtual void `[`UploadFile`](#classURH__RemoteFileSubsystem_1a03467c88fad90070730fd59fd1e423b7)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` | Upload a local file to the remote file storage.
`public virtual void `[`UploadFromFile`](#classURH__RemoteFileSubsystem_1a1f42b15c64e73abe895b67e9943111e1)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,bool bStreamFile,const FRH_GenericSuccessWithErrorBlock Delegate)` | Upload a local file to the remote file storage.
`public virtual void `[`UploadFromStream`](#classURH__RemoteFileSubsystem_1a7b33aaf225257bc0e8e7087655725d9f)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,TSharedRef< FArchive, ESPMode::ThreadSafe > Stream,const FRH_GenericSuccessWithErrorBlock Delegate)` | Upload a local file to the remote file storage.
`public virtual void `[`DeleteFile`](#classURH__RemoteFileSubsystem_1a2f1ee08e22476c88dff1cdedcd7cf2ef)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorBlock Delegate)` | Delete a file from remote file storage.
`public inline virtual void `[`DownloadFile`](#classURH__RemoteFileSubsystem_1a700698d9f3f0cfa5c59312c67f7ae567)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` | Download a remote file to local file storage.
`public inline virtual void `[`DownloadFile`](#classURH__RemoteFileSubsystem_1a2c9407936abcef6097184a3634dbee46)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_FileDownloadDelegate Delegate)` | Download a remote file to memory.
`public virtual void `[`DownloadToFile`](#classURH__RemoteFileSubsystem_1a559f279d714da29d96feb3b8fd457a81)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,bool bStreamFile,const FRH_GenericSuccessWithErrorBlock Delegate)` | Download a remote file to local file storage.
`public virtual void `[`DownloadToMemory`](#classURH__RemoteFileSubsystem_1a45b8e3ede0835bb5bfc3618949bf8682)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_FileDownloadDelegate Delegate)` | Download a remote file to memory.
`public virtual void `[`DownloadToStream`](#classURH__RemoteFileSubsystem_1ae1f1609aee8b4e72d71660bc01101e36)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,TSharedRef< FArchive > Stream,const FRH_GenericSuccessWithErrorBlock Delegate)` | Download a remote file to local file storage.
`public virtual void `[`DownloadAllFiles`](#classURH__RemoteFileSubsystem_1aae6267a8ad1d709fd57b9b6007fd0a68)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` | Downloads all discoverable files in a remote directory to a local file directory.
`public virtual void `[`LookupFileList`](#classURH__RemoteFileSubsystem_1a36fea83617549e77ed8ae584a72510c7)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorBlock Delegate)` | List the available remote files for an entity from the API and store results in cache.
`public inline const TMap< `[`FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory), [FRHAPI_FileListResponse`](RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > & `[`GetFileListCache`](#classURH__RemoteFileSubsystem_1a10bf521503a066a0983a554b0011b412)`() const` | Get the entire file list cache.
`public inline virtual bool `[`ListFiles`](#classURH__RemoteFileSubsystem_1a3d9dbd4f20220f82b8047db827c37777)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,`[`FRHAPI_FileListResponse`](RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` & OutFileList)` | List the available remote files for an entity from the cache.
`protected TMap< `[`FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory), [FRHAPI_FileListResponse`](RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > `[`FileListCache`](#classURH__RemoteFileSubsystem_1ad6229657ea8ef6c417c9ced173eebe85) | 
`protected virtual void `[`DownloadFileList`](#classURH__RemoteFileSubsystem_1ac8ee5bc68fb208fb9c329c897b93eab9)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const TArray< FString > & RemoteFileNames,const FString & LocalDirectory,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` | Downloads all discoverable files in a remote directory to a local file directory.

### Members

#### `public virtual void `[`Initialize`](#classURH__RemoteFileSubsystem_1a249b11cac6ff5da3f516459532585108)`()` <a id="classURH__RemoteFileSubsystem_1a249b11cac6ff5da3f516459532585108"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__RemoteFileSubsystem_1ab67cd31ba8af91bf5e23f9644770f495)`()` <a id="classURH__RemoteFileSubsystem_1ab67cd31ba8af91bf5e23f9644770f495"></a>

Safely tears down the subsystem.

#### `public inline virtual void `[`UploadFile`](#classURH__RemoteFileSubsystem_1a03467c88fad90070730fd59fd1e423b7)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a03467c88fad90070730fd59fd1e423b7"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `LocalFilePath` The path of the file on the local storage to upload. 

* `Delegate` The delegate to call when the operation completes.

#### `public virtual void `[`UploadFromFile`](#classURH__RemoteFileSubsystem_1a1f42b15c64e73abe895b67e9943111e1)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,bool bStreamFile,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a1f42b15c64e73abe895b67e9943111e1"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `LocalFilePath` The path of the file on the local storage to upload. 

* `bStreamFile` If true, the file will be streamed from disk instead of loaded into memory before upload. 

* `Delegate` The delegate to call when the operation completes.

#### `public virtual void `[`UploadFromStream`](#classURH__RemoteFileSubsystem_1a7b33aaf225257bc0e8e7087655725d9f)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,TSharedRef< FArchive, ESPMode::ThreadSafe > Stream,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a7b33aaf225257bc0e8e7087655725d9f"></a>

Upload a local file to the remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `Stream` An archive to stream the file from. The stream is not closed after the operation completes. 

* `Delegate` The delegate to call when the operation completes.

#### `public virtual void `[`DeleteFile`](#classURH__RemoteFileSubsystem_1a2f1ee08e22476c88dff1cdedcd7cf2ef)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a2f1ee08e22476c88dff1cdedcd7cf2ef"></a>

Delete a file from remote file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

#### `public inline virtual void `[`DownloadFile`](#classURH__RemoteFileSubsystem_1a700698d9f3f0cfa5c59312c67f7ae567)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a700698d9f3f0cfa5c59312c67f7ae567"></a>

Download a remote file to local file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `LocalFilePath` The path of the file on the local storage to save to. 

* `Delegate` The delegate to call when the operation completes.

#### `public inline virtual void `[`DownloadFile`](#classURH__RemoteFileSubsystem_1a2c9407936abcef6097184a3634dbee46)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_FileDownloadDelegate Delegate)` <a id="classURH__RemoteFileSubsystem_1a2c9407936abcef6097184a3634dbee46"></a>

Download a remote file to memory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `Delegate` The delegate to call when the operation completes.

#### `public virtual void `[`DownloadToFile`](#classURH__RemoteFileSubsystem_1a559f279d714da29d96feb3b8fd457a81)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FString & LocalFilePath,bool bStreamFile,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a559f279d714da29d96feb3b8fd457a81"></a>

Download a remote file to local file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `LocalFilePath` The path of the file on the local storage to save to. 

* `Delegate` The delegate to call when the operation completes.

#### `public virtual void `[`DownloadToMemory`](#classURH__RemoteFileSubsystem_1a45b8e3ede0835bb5bfc3618949bf8682)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,const FRH_FileDownloadDelegate Delegate)` <a id="classURH__RemoteFileSubsystem_1a45b8e3ede0835bb5bfc3618949bf8682"></a>

Download a remote file to memory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `Delegate` The delegate to call when the operation completes.

#### `public virtual void `[`DownloadToStream`](#classURH__RemoteFileSubsystem_1ae1f1609aee8b4e72d71660bc01101e36)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & RemoteFileName,TSharedRef< FArchive > Stream,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1ae1f1609aee8b4e72d71660bc01101e36"></a>

Download a remote file to local file storage.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `RemoteFileName` The name of the file on the remote storage to download. 

* `Stream` The stream to write to. The stream is not closed after the operation completes. 

* `Delegate` The delegate to call when the operation completes.

#### `public virtual void `[`DownloadAllFiles`](#classURH__RemoteFileSubsystem_1aae6267a8ad1d709fd57b9b6007fd0a68)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FString & LocalDirectory,bool bUseCachedList,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1aae6267a8ad1d709fd57b9b6007fd0a68"></a>

Downloads all discoverable files in a remote directory to a local file directory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `LocalDirectory` The path of the directory on the local storage to save to. 

* `bUseCachedList` If true, use the cached file list instead of fetching a new one. 

* `Delegate` The delegate to call when the operation completes.

#### `public virtual void `[`LookupFileList`](#classURH__RemoteFileSubsystem_1a36fea83617549e77ed8ae584a72510c7)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1a36fea83617549e77ed8ae584a72510c7"></a>

List the available remote files for an entity from the API and store results in cache.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `Delegate` The delegate to call when the operation completes.

#### `public inline const TMap< `[`FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory), [FRHAPI_FileListResponse`](RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > & `[`GetFileListCache`](#classURH__RemoteFileSubsystem_1a10bf521503a066a0983a554b0011b412)`() const` <a id="classURH__RemoteFileSubsystem_1a10bf521503a066a0983a554b0011b412"></a>

Get the entire file list cache.

#### `public inline virtual bool `[`ListFiles`](#classURH__RemoteFileSubsystem_1a3d9dbd4f20220f82b8047db827c37777)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,`[`FRHAPI_FileListResponse`](RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` & OutFileList)` <a id="classURH__RemoteFileSubsystem_1a3d9dbd4f20220f82b8047db827c37777"></a>

List the available remote files for an entity from the cache.

#### Parameters
* `Directory` The directory of the file on the remote storage.

#### `protected TMap< `[`FRH_RemoteFileApiDirectory](Common.md#structFRH__RemoteFileApiDirectory), [FRHAPI_FileListResponse`](RHAPI_FileListResponse.md#structFRHAPI__FileListResponse)` > `[`FileListCache`](#classURH__RemoteFileSubsystem_1ad6229657ea8ef6c417c9ced173eebe85) <a id="classURH__RemoteFileSubsystem_1ad6229657ea8ef6c417c9ced173eebe85"></a>

#### `protected virtual void `[`DownloadFileList`](#classURH__RemoteFileSubsystem_1ac8ee5bc68fb208fb9c329c897b93eab9)`(const `[`FRH_RemoteFileApiDirectory`](Common.md#structFRH__RemoteFileApiDirectory)` & Directory,const TArray< FString > & RemoteFileNames,const FString & LocalDirectory,const FRH_FileDirectoryDownloadDelegateBlock Delegate)` <a id="classURH__RemoteFileSubsystem_1ac8ee5bc68fb208fb9c329c897b93eab9"></a>

Downloads all discoverable files in a remote directory to a local file directory.

#### Parameters
* `Directory` The directory of the file on the remote storage. 

* `LocalDirectory` The path of the directory on the local storage to save to. 

* `bUseCachedList` If true, use the cached file list instead of fetching a new one. 

* `Delegate` The delegate to call when the operation completes.

