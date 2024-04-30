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
	virtual void UploadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @brief Upload a local file to the remote file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param LocalFilePath The path of the file on the local storage to upload.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta=(DisplayName="Upload File", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_UploadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate)
	{
		UploadFile(Directory, RemoteFileName, LocalFilePath, Delegate);
	}

	/**
	 * @brief Delete a file from remote file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DeleteFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
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
	virtual void DownloadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * @brief Download a remote file to memory
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DownloadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FRH_FileDownloadDelegate Delegate);
	/**
	 * @brief Download a remote file to local file storage.
	 * @param Directory The directory of the file on the remote storage.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param LocalFilePath The path of the file on the local storage to save to.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta = (DisplayName = "Download File", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_DownloadFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate)
	{
		DownloadFile(Directory, RemoteFileName, LocalFilePath, Delegate);
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