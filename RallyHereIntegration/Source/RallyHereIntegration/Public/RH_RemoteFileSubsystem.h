// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RemoteFileAPI.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_RemoteFileSubsystem.generated.h"

/** @brief Delegate for file download operations that returns raw payload */
DECLARE_DELEGATE_ThreeParams(FRH_FileDownloadDelegate, bool, TArrayView<const uint8>, const FRH_ErrorInfo&);

/** @brief Delegate for file download operations that returns file paths in a directory */
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_FourParams(FRH_FileDirectoryDownloadDynamicDelegate, bool, bSuccess, const TArray<FString>&, DownloadedFileNames, const TArray<FString>&, FailedFileNames, const TArray<FRH_ErrorInfo>&, ErrorInfo);
DECLARE_DELEGATE_FourParams(FRH_FileDirectoryDownloadDelegate, bool, const TArray<FString>&, const TArray<FString>&, const TArray<FRH_ErrorInfo>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_FileDirectoryDownloadDelegateBlock, FRH_FileDirectoryDownloadDelegate, FRH_FileDirectoryDownloadDynamicDelegate, bool, const TArray<FString>&, const TArray<FString>&, const TArray<FRH_ErrorInfo>&);



/** @defgroup File RallyHere File
 *  @{
 */


/**
 * @brief File Subsystem used for file API calls.
 */
UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_RemoteFileSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_UCLASS_BODY()
public:

	/**
	 * @brief Initialize the subsystem.
	 */
	virtual void Initialize() override;
	/**
	 * @brief Safely tears down the subsystem.
	 */
	virtual void Deinitialize() override;

	/**
	 * @brief Upload a local file to the remote file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param LocalFilePath The path of the file on the local storage to upload.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UE_DEPRECATED(5.0, "Please use UploadFromFile instead")
	virtual void UploadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock())
	{
		UploadFromFile(Directory, RemoteFileName, LocalFilePath, true, Delegate);
	}
	/**
	 * @brief Upload a local file to the remote file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param LocalFilePath The path of the file on the local storage to upload.
	 * @param bStreamFile If true, the file will be streamed from disk instead of loaded into memory before upload.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void UploadFromFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, bool bStreamFile = true, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @brief Upload a local file to the remote file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param Stream An archive to stream the file from.  The stream is not closed after the operation completes.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void UploadFromStream(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, TSharedRef<FArchive, ESPMode::ThreadSafe> Stream, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @private
	 * @brief Upload a local file to the remote file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param LocalFilePath The path of the file on the local storage to upload.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta=(DisplayName="Upload File", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_UploadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate)
	{
		UploadFromFile(Directory, RemoteFileName, LocalFilePath, true, Delegate);
	}

	/**
	 * @brief Delete a file from remote file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DeleteFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @private
	 * @brief Upload a local file to the remote file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta=(DisplayName="Upload File", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_DeleteFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate)
	{
		DeleteFile(Directory, RemoteFileName, Delegate);
	}

	/**
	 * @brief Download a remote file to local file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param LocalFilePath The path of the file on the local storage to save to.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UE_DEPRECATED(5.0, "Please use DownloadToFile instead")
	virtual void DownloadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock())
	{
		DownloadToFile(Directory, RemoteFileName, LocalFilePath, true, Delegate);
	}
	/**
	 * @brief Download a remote file to memory
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UE_DEPRECATED(5.0, "Please use DownloadToMemory instead")
	virtual void DownloadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FRH_FileDownloadDelegate Delegate)
	{
		DownloadToMemory(Directory, RemoteFileName, Delegate);
	}
	/**
	 * @brief Download a remote file to local file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param LocalFilePath The path of the file on the local storage to save to.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DownloadToFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, bool bStreamFile = true, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @brief Download a remote file to memory
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DownloadToMemory(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FRH_FileDownloadDelegate Delegate);
	/**
	 * @brief Download a remote file to local file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param Stream The stream to write to.  The stream is not closed after the operation completes.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DownloadToStream(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, TSharedRef<FArchive> Stream, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @private
	 * @brief Download a remote file to local file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param LocalFilePath The path of the file on the local storage to save to.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta = (DisplayName = "Download File", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_DownloadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate)
	{
		DownloadToFile(Directory, RemoteFileName, LocalFilePath, true, Delegate);
	}

	/**
	 * @brief Downloads all discoverable files in a remote directory to a local file directory.
	 * @param Directory The directory of the file on the remote storage.
	 * @param LocalDirectory The path of the directory on the local storage to save to.
	 * @param bUseCachedList If true, use the cached file list instead of fetching a new one.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DownloadAllFiles(const FRH_RemoteFileApiDirectory& Directory, const FString& LocalDirectory, bool bUseCachedList = false, const FRH_FileDirectoryDownloadDelegateBlock Delegate = FRH_FileDirectoryDownloadDelegateBlock());
	/**
	 * @private
	 * @brief Downloads all discoverable files in a remote directory to a local file directory.
	 * @param Directory The directory of the file on the remote storage.
	 * @param LocalDirectory The path of the directory on the local storage to save to.
	 * @param bUseCachedList If true, use the cached file list instead of fetching a new one.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta = (DisplayName = "Download All Files", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_DownloadAllFiles(const FRH_RemoteFileApiDirectory& Directory, const FString& LocalDirectory, bool bUseCachedList, const FRH_FileDirectoryDownloadDynamicDelegate& Delegate)
	{
		DownloadAllFiles(Directory, LocalDirectory, bUseCachedList, Delegate);
	}

	/**
	 * @brief List the available remote files for an entity from the API and store results in cache
	 * @param Directory The directory of the file on the remote storage.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void LookupFileList(const FRH_RemoteFileApiDirectory& Directory, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @private
	 * @brief List the available remote files for an entity from the API and store results in cache
	 * @param Directory The directory of the file on the remote storage.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta = (DisplayName = "Lookup File List", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_LookupFileList(const FRH_RemoteFileApiDirectory& Directory, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate)
	{
		LookupFileList(Directory, Delegate);
	}

	/**
	 * @brief Get the entire file list cache
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta = (DisplayName = "List Files Async", AutoCreateRefTerm = "Delegate"))
	const TMap<FRH_RemoteFileApiDirectory, FRHAPI_FileListResponse>& GetFileListCache() const
	{
		return FileListCache;
	}

	/**
	 * @brief List the available remote files for an entity from the cache
	 * @param Directory The directory of the file on the remote storage.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta = (DisplayName = "List Files Async", AutoCreateRefTerm = "Delegate"))
	virtual bool ListFiles(const FRH_RemoteFileApiDirectory& Directory, FRHAPI_FileListResponse& OutFileList)
	{
		auto* Cached = FileListCache.Find(Directory);
		if (Cached)
		{
			OutFileList = *Cached;
			return true;
		}
		return false;
	}


protected:
	TMap<FRH_RemoteFileApiDirectory, FRHAPI_FileListResponse> FileListCache;

	/**
	 * @brief Downloads all discoverable files in a remote directory to a local file directory.
	 * @param Directory The directory of the file on the remote storage.
	 * @param LocalDirectory The path of the directory on the local storage to save to.
	 * @param bUseCachedList If true, use the cached file list instead of fetching a new one.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DownloadFileList(const FRH_RemoteFileApiDirectory& Directory, const TArray<FString>& RemoteFileNames, const FString& LocalDirectory, const FRH_FileDirectoryDownloadDelegateBlock Delegate);
};

/** @} */