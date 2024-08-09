// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_RemoteFileSubsystem.h"

#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"
#include "RH_IntegrationSettings.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFileManager.h"


URH_RemoteFileSubsystem::URH_RemoteFileSubsystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_RemoteFileSubsystem::Initialize()
{
	Super::Initialize();
}

void URH_RemoteFileSubsystem::Deinitialize()
{
	Super::Deinitialize();
}


void URH_RemoteFileSubsystem::UploadFromFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, bool bStreamFile, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Request to upload file %s to %s::%s"), ANSI_TO_TCHAR(__FUNCTION__), *LocalFilePath, *Directory.ToDescriptionString(), *RemoteFileName);
	
	if (!IFileManager::Get().FileExists(*LocalFilePath))
	{
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		return;
	}

	// if streaming the file, wrapper via the file streaming content flag on the request (this is handled after the request is created via callback), else set onto the file input object on the request to do an in memory upload
	if (bStreamFile)
	{
		TSharedPtr<FArchive> FileReader = MakeShareable(IFileManager::Get().CreateFileReader(*LocalFilePath, EFileRead::FILEREAD_AllowWrite));
		if (FileReader.IsValid())
		{
			// use a delegate wrapper to close the reader after the upload
			FRH_GenericSuccessWithErrorDelegate CloseWrapper = FRH_GenericSuccessWithErrorDelegate::CreateLambda([FileReader, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				FileReader->Close();
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo);
			});
			UploadFromStream(Directory, RemoteFileName, FileReader.ToSharedRef(), CloseWrapper);
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to create file reader %s for streaming upload"), *LocalFilePath);
			Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		}
		return;
	}
	
	typedef RallyHereAPI::Traits_CreateEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = Directory.FileType;
	Request.EntityType = Directory.EntityType;
	Request.EntityId = Directory.EntityId;
	Request.FileName = RemoteFileName;
	
	RallyHereAPI::FHttpFileInput FileInput(*LocalFilePath);
	
	// if type autodetection failed, treat as a binary stream
	if (FileInput.GetContentType() == TEXT("application/unknown"))
	{
		FileInput.SetContentType(TEXT("application/octet-stream"));
	}

	Request.File = FileInput;

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

	Helper->Start(RH_APIs::GetRemoteFileAPI(), Request);
}

void URH_RemoteFileSubsystem::UploadFromStream(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, TSharedRef<FArchive, ESPMode::ThreadSafe> Stream, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Request to upload stream to %s::%s"), ANSI_TO_TCHAR(__FUNCTION__), *Directory.ToDescriptionString(), *RemoteFileName);
		
	typedef RallyHereAPI::Traits_CreateEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = Directory.FileType;
	Request.EntityType = Directory.EntityType;
	Request.EntityId = Directory.EntityId;
	Request.FileName = RemoteFileName;

	// disable reading the request content, as we are going to stream it
	Request.SetDisableReadContent(true, false);

	// modify the request after creation to override request handling to stream the data
	Request.OnModifyRequest().AddLambda([Stream](const RallyHereAPI::FRequest& APIRequest, FHttpRequestRef HttpRequest)
	{
		// override upload type to octet-stream
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("octet-stream"));
		
		// set the stream as the request body
		HttpRequest->SetContentFromStream(Stream);
	});

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Directory, RemoteFileName, Stream](const BaseType::Response& Response)
			{
				if (Response.IsSuccessful())
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("Stream uploaded successfully to %s::%s"), *Directory.ToDescriptionString(), *RemoteFileName);
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to upload stream to %s::%s"), *Directory.ToDescriptionString(), *RemoteFileName);
				}
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FileUploadPriority
	);

	Helper->Start(RH_APIs::GetRemoteFileAPI(), Request);
}

void URH_RemoteFileSubsystem::DeleteFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FRH_GenericSuccessWithErrorBlock Delegate)
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

	Helper->Start(RH_APIs::GetRemoteFileAPI(), Request);
}

void URH_RemoteFileSubsystem::DownloadToFile(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FString& LocalFilePath, bool bStreamFile, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Request to download file %s::%s to %s"), ANSI_TO_TCHAR(__FUNCTION__), *Directory.ToDescriptionString(), *RemoteFileName, *LocalFilePath);

	if (bStreamFile)
	{
		// reroute to streaming upload via a wrapper
		TSharedPtr<FArchive, ESPMode::ThreadSafe> Archive = MakeShareable(IFileManager::Get().CreateFileWriter(*LocalFilePath));
		if (Archive.IsValid())
		{
			// use a delegate wrapper to close the archive after the upload
			FRH_GenericSuccessWithErrorDelegate CloseWrapper = FRH_GenericSuccessWithErrorDelegate::CreateLambda([Archive, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Archive->Close();
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo);
			});
			DownloadToStream(Directory, RemoteFileName, Archive.ToSharedRef(), Delegate);
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to create file writer %s for streaming downlaod"), *LocalFilePath);
			Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		}
		return;
	}
	
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

	Helper->Start(RH_APIs::GetRemoteFileAPI(), Request);
}


void URH_RemoteFileSubsystem::DownloadToMemory(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, const FRH_FileDownloadDelegate Delegate)
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

	Helper->Start(RH_APIs::GetRemoteFileAPI(), Request);
}


void URH_RemoteFileSubsystem::DownloadToStream(const FRH_RemoteFileApiDirectory& Directory, const FString& RemoteFileName, TSharedRef<FArchive> Stream, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	typedef RallyHereAPI::Traits_DownloadEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = Directory.FileType;
	Request.EntityType = Directory.EntityType;
	Request.EntityId = Directory.EntityId;
	Request.FileName = RemoteFileName;

	// disable reading the response content, as we are going to stream it
	Request.SetDisableReadContent(false, true);

	// modify the request after creation to override response handling to stream the response
	Request.OnModifyRequest().AddLambda([Stream](const RallyHereAPI::FRequest& APIRequest, FHttpRequestRef HttpRequest)
	{
		HttpRequest->SetResponseBodyReceiveStream(Stream);
	});

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Directory, RemoteFileName, Stream](const BaseType::Response& Response)
			{
				if (Response.IsSuccessful())
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("Successfully downloaded %s::%s as a stream"), *Directory.ToDescriptionString(), *RemoteFileName);
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to download file %s::%s as a stream"), *Directory.ToDescriptionString(), *RemoteFileName);
				}
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FileDownloadPriority
	);

	Helper->Start(RH_APIs::GetRemoteFileAPI(), Request);
}

void URH_RemoteFileSubsystem::DownloadAllFiles(const FRH_RemoteFileApiDirectory& Directory, const FString& LocalDirectory, bool bUseCachedList, const FRH_FileDirectoryDownloadDelegateBlock Delegate)
{
	if (bUseCachedList)
	{
		auto List = FileListCache.Find(Directory);
		if (List != nullptr)
		{
			TArray<FString> FileNames;
			const auto FilesArray = List->GetFiles();
			FileNames.Reserve(FilesArray.Num());
			for (const auto& File : FilesArray)
			{
				FileNames.Add(File.GetName());
			}

			DownloadFileList(Directory, FileNames, LocalDirectory, Delegate);
			return;
		}
	}

	LookupFileList(Directory, FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Directory, LocalDirectory, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
		{
			auto List = FileListCache.Find(Directory);
			if (bSuccess && List != nullptr)
			{
				TArray<FString> FileNames;
				const auto FilesArray = List->GetFiles();
				FileNames.Reserve(FilesArray.Num());
				for (const auto& File : FilesArray)
				{
					FileNames.Add(File.GetName());
				}
				DownloadFileList(Directory, FileNames, LocalDirectory, Delegate);
			}
			else
			{
				TArray<FRH_ErrorInfo> ErrorInfoArray;
				ErrorInfoArray.Add(ErrorInfo);
				Delegate.ExecuteIfBound(true, TArray<FString>(), TArray<FString>(), ErrorInfoArray);
			}
		}));
}

void URH_RemoteFileSubsystem::DownloadFileList(const FRH_RemoteFileApiDirectory& Directory, const TArray<FString>& RemoteFileNames, const FString& LocalDirectory, const FRH_FileDirectoryDownloadDelegateBlock Delegate)
{
	// trivial success case, no files to download
	if (RemoteFileNames.IsEmpty())
	{
		Delegate.ExecuteIfBound(true, TArray<FString>(), TArray<FString>(), TArray<FRH_ErrorInfo>());
		return;
	}

	struct FDownloadMultiFileContext
	{
		TArray<FString> FileNamesToDownload;
		TArray<FString> FailedFileNames, DownloadedFileNames;
		TArray<FRH_ErrorInfo> ErrorInfos;
		FString LocalDirectory;

		FRH_FileDirectoryDownloadDelegateBlock Delegate;
	};

	if (!FPaths::DirectoryExists(LocalDirectory))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("Creating directory %s"), *LocalDirectory);
		FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*LocalDirectory);
	}

	TSharedRef<FDownloadMultiFileContext> Context = MakeShared<FDownloadMultiFileContext>();
	Context->FileNamesToDownload = RemoteFileNames;
	Context->LocalDirectory = LocalDirectory;
	Context->Delegate = Delegate;

	// download in parallel
	TSharedPtr<FDownloadMultiFileContext> ContextPtr = Context;
	for (const auto& File : RemoteFileNames)
	{
		DownloadToFile(Directory, File, FPaths::Combine(LocalDirectory, File), true, FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [ContextPtr, File](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				// record result
				if (bSuccess)
				{
					ContextPtr->DownloadedFileNames.Add(File);
					ContextPtr->ErrorInfos.Add(ErrorInfo);
				}
				else
				{
					ContextPtr->FailedFileNames.Add(File);
					ContextPtr->ErrorInfos.Add(ErrorInfo);
				}

				// remove from processing list
				ContextPtr->FileNamesToDownload.Remove(File);

				// if this is the last file, fire the delegate
				if (ContextPtr->FileNamesToDownload.IsEmpty())
				{
					ContextPtr->Delegate.ExecuteIfBound(ContextPtr->FailedFileNames.Num() == 0, ContextPtr->DownloadedFileNames, ContextPtr->FailedFileNames, ContextPtr->ErrorInfos);
				}
			}));
	}
}

void URH_RemoteFileSubsystem::LookupFileList(const FRH_RemoteFileApiDirectory& Directory, const FRH_GenericSuccessWithErrorBlock Delegate)
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
				const auto Content = Response.TryGetDefaultContentAsPointer();
				if (Response.IsSuccessful() && Content != nullptr)
				{
					FileListCache.Add(Directory, *Content);
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Directory, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				// if a directory was not found, remove it from the cache
				if (!bSuccess && ErrorInfo.ResponseCode == EHttpResponseCodes::NotFound)
				{
					FileListCache.Remove(Directory);
				}

				// pass through the result
				Delegate.ExecuteIfBound(bSuccess, ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->FileBrowsePriority
	);

	Helper->Start(RH_APIs::GetRemoteFileAPI(), Request);
}
