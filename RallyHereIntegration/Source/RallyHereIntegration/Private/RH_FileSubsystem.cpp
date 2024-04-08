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

void URH_FileSubsystem::UploadFile(ERHAPI_FileType FileType, const FString& EntityType, const FString& EntityId, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	typedef RallyHereAPI::Traits_CreateEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = FileType;
	Request.EntityType = EntityType;
	Request.EntityId = EntityId;
	Request.FileName = RemoteFileName;
	Request.File.SetFilePath(*LocalFilePath);

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate(),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FileUploadPriority
	);

	Helper->Start(RH_APIs::GetFileAPI(), Request);
}

void URH_FileSubsystem::DownloadFile(ERHAPI_FileType FileType, const FString& EntityType, const FString& EntityId, const FString& RemoteFileName, const FString& LocalFilePath, const FRH_GenericSuccessWithErrorBlock Delegate)
{
	typedef RallyHereAPI::Traits_DownloadEntityDirectoryFile BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.FileType = FileType;
	Request.EntityType = EntityType;
	Request.EntityId = EntityId;
	Request.FileName = RemoteFileName;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [LocalFilePath](const BaseType::Response& Response)
			{
				if (Response.IsSuccessful())
				{
					if (const auto BinaryPayload = Response.TryGetPayload<BaseType::Response::BinaryPayloadType>())
					{
						if (BinaryPayload != nullptr)
						{
							FFileHelper::SaveArrayToFile(*BinaryPayload, *LocalFilePath);
						}
					}
					else if (const auto StringPayload = Response.TryGetPayload<BaseType::Response::StringPayloadType>())
					{
						if (StringPayload != nullptr)
						{
							FFileHelper::SaveStringToFile(*StringPayload, *LocalFilePath);
						}
					}
				}
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FileDownloadPriority
	);

	Helper->Start(RH_APIs::GetFileAPI(), Request);
}