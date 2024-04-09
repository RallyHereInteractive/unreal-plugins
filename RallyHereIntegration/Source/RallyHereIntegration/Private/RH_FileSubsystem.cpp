// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_FileSubsystem.h"

#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"
#include "RH_IntegrationSettings.h"


URH_FileSubsystem::URH_FileSubsystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_FileSubsystem::Initialize()
{
	Super::Initialize();
}

void URH_FileSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void URH_FileSubsystem::UploadFile(const FRH_FileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Request to upload file %s to %s::%s"), ANSI_TO_TCHAR(__FUNCTION__), *LocalFilePath, *Directory.ToDescriptionString(), *RemoteFileName);
	typedef RallyHereAPI::Traits_CreateEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = Directory.FileType;
	Request.EntityType = Directory.EntityType;
	Request.EntityId = Directory.EntityId;
	Request.FileName = RemoteFileName;
	Request.File.SetFilePath(*LocalFilePath);

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Directory, RemoteFileName, LocalFilePath](const BaseType::Response& Response)
			{
				if (Response.IsSuccessful())
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("File %s uploaded successfully to %s::%s"), *LocalFilePath, *Directory.ToDescriptionString(), *RemoteFileName);
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to upload file %s to %s::%s"), *LocalFilePath, *Directory.ToDescriptionString(), *RemoteFileName);
				}
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FileUploadPriority
	);

	Helper->Start(RH_APIs::GetFileAPI(), Request);
}

void URH_FileSubsystem::DeleteFile(const FRH_FileApiDirectory& Directory, const FString& RemoteFileName, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Request to delete file %s::%s"), ANSI_TO_TCHAR(__FUNCTION__), *Directory.ToDescriptionString(), *RemoteFileName);
	typedef RallyHereAPI::Traits_DeleteEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = Directory.FileType;
	Request.EntityType = Directory.EntityType;
	Request.EntityId = Directory.EntityId;
	Request.FileName = RemoteFileName;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate(),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Directory, RemoteFileName, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				if (bSuccess)
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("File %s::%s deleted successfully"), *Directory.ToDescriptionString(), *RemoteFileName);
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to delete file %s::%s"), *Directory.ToDescriptionString(), *RemoteFileName);
				}
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->FileDeletePriority
	);

	Helper->Start(RH_APIs::GetFileAPI(), Request);
}

void URH_FileSubsystem::DownloadFile(const FRH_FileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Request to download file %s::%s to %s"), ANSI_TO_TCHAR(__FUNCTION__), *Directory.ToDescriptionString(), *RemoteFileName, *LocalFilePath);
	typedef RallyHereAPI::Traits_DownloadEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = Directory.FileType;
	Request.EntityType = Directory.EntityType;
	Request.EntityId = Directory.EntityId;
	Request.FileName = RemoteFileName;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Directory, RemoteFileName, LocalFilePath](const BaseType::Response& Response)
			{
				if (Response.IsSuccessful())
				{
					if (const auto BinaryPayload = Response.TryGetPayload<BaseType::Response::BinaryPayloadType>())
					{
						UE_LOG(LogRallyHereIntegration, Log, TEXT("Downloaded file as binary from %s::%s to %s"), *Directory.ToDescriptionString(), *RemoteFileName, *LocalFilePath);
						FFileHelper::SaveArrayToFile(*BinaryPayload, *LocalFilePath);
					}
					else if (const auto StringPayload = Response.TryGetPayload<BaseType::Response::StringPayloadType>())
					{
						UE_LOG(LogRallyHereIntegration, Log, TEXT("Downloaded file as string from %s::%s to %s"), *Directory.ToDescriptionString(), *RemoteFileName, *LocalFilePath);
						FFileHelper::SaveStringToFile(*StringPayload, *LocalFilePath);
					}
					else
					{
						UE_LOG(LogRallyHereIntegration, Error, TEXT("Successfully downloaded %s::%s, but type is unknown so cannot save to %s"), *Directory.ToDescriptionString(), *RemoteFileName, *LocalFilePath);
					}
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to download file %s::%s to %s"), *Directory.ToDescriptionString(), *RemoteFileName, *LocalFilePath);
				}
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FileDownloadPriority
	);

	Helper->Start(RH_APIs::GetFileAPI(), Request);
}


void URH_FileSubsystem::DownloadFile(const FRH_FileApiDirectory& Directory, const FString& RemoteFileName, const FRH_FileDownloadDelegate Delegate)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Request to download file %s::%s to memory"), ANSI_TO_TCHAR(__FUNCTION__), *Directory.ToDescriptionString(), *RemoteFileName);
	typedef RallyHereAPI::Traits_DownloadEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = Directory.FileType;
	Request.EntityType = Directory.EntityType;
	Request.EntityId = Directory.EntityId;
	Request.FileName = RemoteFileName;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate(),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Directory, RemoteFileName, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				TArrayView<const uint8> Payload;
				if (bSuccess && ErrorInfo.HttpResponse.IsValid())
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("Downloaded file as binary from %s::%s to memory"), *Directory.ToDescriptionString(), *RemoteFileName);
					Payload = ErrorInfo.HttpResponse->GetContent();
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to download file %s::%s to memory"), *Directory.ToDescriptionString(), *RemoteFileName);
				}
				Delegate.ExecuteIfBound(bSuccess, Payload, ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->FileDownloadPriority
	);

	Helper->Start(RH_APIs::GetFileAPI(), Request);
}

void URH_FileSubsystem::LookupFileList(const FRH_FileApiDirectory& Directory, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	typedef RallyHereAPI::Traits_ListEntityDirectoryFiles BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = Directory.FileType;
	Request.EntityType = Directory.EntityType;
	Request.EntityId = Directory.EntityId;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Directory](const BaseType::Response& Response)
			{
				FileListCache.Add(Directory, Response.Content);
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Directory](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				// if a directory was not found, remove it from the cache
				if (!bSuccess && ErrorInfo.ResponseCode == EHttpResponseCodes::NotFound)
				{
					FileListCache.Remove(Directory);
				}
			}),
		GetDefault<URH_IntegrationSettings>()->FileBrowsePriority
	);

	Helper->Start(RH_APIs::GetFileAPI(), Request);
}