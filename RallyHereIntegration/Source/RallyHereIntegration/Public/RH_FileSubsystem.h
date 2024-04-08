// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "FileAPI.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_FileSubsystem.generated.h"


/**
 * @brief File Subsystem used for file API calls.
 */
UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_FileSubsystem : public URH_GameInstanceSubsystemPlugin
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
	 * Upload a local file to the remote file storage.
	 * @param FileType The type of file to upload.
	 * @param EntityType The type of entity the file is associated with.
	 * @param EntityId The ID of the entity the file is associated with.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param LocalFilePath The path of the file on the local storage to upload.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void UploadFile(ERHAPI_FileType FileType, const FString& EntityType, const FString& EntityId, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * Upload a local file to the remote file storage.
	 * @param FileType The type of file to upload.
	 * @param EntityType The type of entity the file is associated with.
	 * @param EntityId The ID of the entity the file is associated with.
	 * @param RemoteFileName The name of the file on the remote storage.
	 * @param LocalFilePath The path of the file on the local storage to upload.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta=(DisplayName="Upload File", AutoCreateRefTerm = "Delegate"))
	virtual void BLUEPRINT_UploadFile(ERHAPI_FileType FileType, const FString& EntityType, const FString& EntityId, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate)
	{
		UploadFile(FileType, EntityType, EntityId, RemoteFileName, LocalFilePath, Delegate);
	}

	/**
	 * Download a remote file to local file storage.
	 * @param FileType The type of file to upload.
	 * @param EntityType The type of entity the file is associated with.
	 * @param EntityId The ID of the entity the file is associated with.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param LocalFilePath The path of the file on the local storage to save to.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	virtual void DownloadFile(ERHAPI_FileType FileType, const FString& EntityType, const FString& EntityId, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	 * Download a remote file to local file storage.
	 * @param FileType The type of file to upload.
	 * @param EntityType The type of entity the file is associated with.
	 * @param EntityId The ID of the entity the file is associated with.
	 * @param RemoteFileName The name of the file on the remote storage to download.
	 * @param LocalFilePath The path of the file on the local storage to save to.
	 * @param Delegate The delegate to call when the operation completes.
	 */
	UFUNCTION(BlueprintCallable, Category = "File", meta = (DisplayName = "Upload File", AutoCreateRefTerm = "Delegate"))
	virtual void BLUEPRINT_DownloadFile(ERHAPI_FileType FileType, const FString& EntityType, const FString& EntityId, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate)
	{
		DownloadFile(FileType, EntityType, EntityId, RemoteFileName, LocalFilePath, Delegate);
	}
};

/** @} */