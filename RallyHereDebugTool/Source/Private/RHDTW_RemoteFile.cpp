// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_RemoteFile.h"

#include "imgui.h"
#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_FileSubsystem.h"

#include "RH_ImGuiUtilities.h"

FRHDTW_RemoteFile::FRHDTW_RemoteFile()
{
	BrowseDownloadDirectory = FPaths::HasProjectPersistentDownloadDir() ? FPaths::ProjectPersistentDownloadDir() : TEXT("");
}

FRHDTW_RemoteFile::~FRHDTW_RemoteFile()
{
}

void FRHDTW_RemoteFile::Do()
{
	auto* GI = GetGameInstance();
	if (GI == nullptr)
	{
		ImGui::Text("%s", "Could not find owning game instance.");
		return;
	}

	auto* pGISS = GI->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISS == nullptr)
	{
		ImGui::Text("%s", "URH_GameInstanceSubsystem not available.");
		return;
	}

	auto* pRH_FileSubsystem = pGISS->GetFileSubsystem();
	if (pRH_FileSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_FileSubsystem not available.");
		return;
	}

	ImGui::Text("Directory");

	ImGuiDisplayEnumCombo("File Type", RemoteDirectory.FileType, ERHAPI_FileType::DeveloperFile);

	ImGui::InputText("Entity Type", &RemoteDirectory.EntityType);
	ImGui::InputText("Entity Id", &RemoteDirectory.EntityId);

	ImGui::Separator();



	if (ImGui::BeginTabBar(""))
	{
		if (ImGui::BeginTabItem("List Files"))
		{
			DoListFiles(pRH_FileSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Upload"))
		{
			DoUploadFile(pRH_FileSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Download"))
		{
			DoDownloadFile(pRH_FileSubsystem);
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}


void FRHDTW_RemoteFile::DoListFiles(URH_FileSubsystem* pFileSubsystem)
{
	ImGui::InputText("(TO) Local Download Directory", &BrowseDownloadDirectory);

	if (ImGui::Button("Lookup File List"))
	{
		pFileSubsystem->LookupFileList(RemoteDirectory);
	}

	FRHAPI_FileListResponse FileList;
	if (pFileSubsystem->ListFiles(RemoteDirectory, FileList))
	{
		ImGui::Text("%d Files Found", FileList.GetFiles().Num());
		for (const auto& File : FileList.GetFiles())
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*File.GetName()), RH_DefaultTreeFlagsDefaultOpen))
			{
				ImGui::BeginDisabled(BrowseDownloadDirectory.IsEmpty());
				if (ImGui::Button("Download"))
				{
					pFileSubsystem->DownloadFile(RemoteDirectory, File.GetName(), BrowseDownloadDirectory / File.GetName());
				}
				ImGui::EndDisabled();

				ImGuiDisplayModelData(File);
				ImGui::TreePop();
			}
		}
	}
	else
	{
		ImGui::Text("RemoteDirectory not found in cache.");
	}
}
void FRHDTW_RemoteFile::DoDownloadFile(URH_FileSubsystem* pFileSubsystem)
{
	ImGui::InputText("(FROM) Remote File Name", &DownloadRemoteFileName);
	ImGui::InputText("(TO) Local File Path", &DownloadLocalFilePath);

	ImGui::BeginDisabled(!RemoteDirectory.IsValid() || DownloadRemoteFileName.IsEmpty() || DownloadLocalFilePath.IsEmpty());
	if (ImGui::Button("Download"))
	{
		pFileSubsystem->DownloadFile(RemoteDirectory, DownloadRemoteFileName, DownloadLocalFilePath, FRH_GenericSuccessWithErrorDelegate::CreateSPLambda(this, [this](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				DownloadResult = bSuccess ? TEXT("Success") : ErrorInfo.ResponseContent;
			})
		);
	}
	ImGui::EndDisabled();

	ImGui::Text("Result: %s", TCHAR_TO_UTF8(*DownloadResult));
}
void FRHDTW_RemoteFile::DoUploadFile(URH_FileSubsystem* pFileSubsystem)
{
	ImGui::InputText("(FROM) Local File Path", &UploadLocalFilePath);
	ImGui::InputText("(TO) Remote File Name", &UploadRemoteFileName);

	ImGui::BeginDisabled(!RemoteDirectory.IsValid() || UploadLocalFilePath.IsEmpty() || UploadRemoteFileName.IsEmpty());
	if (ImGui::Button("Upload"))
	{
		pFileSubsystem->UploadFile(RemoteDirectory, UploadRemoteFileName, UploadLocalFilePath, FRH_GenericSuccessWithErrorDelegate::CreateSPLambda(this, [this](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				UploadResult = bSuccess ? TEXT("Success") : ErrorInfo.ResponseContent;
			})
		);
	}
	ImGui::EndDisabled();

	ImGui::Text("Result: %s", TCHAR_TO_UTF8(*UploadResult));
}