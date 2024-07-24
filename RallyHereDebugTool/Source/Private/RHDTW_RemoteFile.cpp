// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_RemoteFile.h"

#include "imgui.h"
#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_RemoteFileSubsystem.h"

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

	auto* pRH_RemoteFileSubsystem = pGISS->GetRemoteFileSubsystem();
	if (pRH_RemoteFileSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_RemoteFileSubsystem not available.");
		return;
	}

	ImGui::Text("Directory");

	ImGuiDisplayEnumCombo("File Type", RemoteDirectory.FileType);

	ImGuiDisplayEnumCombo("Entity Type", RemoteDirectory.EntityType);

	ImGui::InputText("Entity Id", &RemoteDirectory.EntityId);

	ImGui::Separator();



	if (ImGui::BeginTabBar(""))
	{
		if (ImGui::BeginTabItem("List Files"))
		{
			DoListFiles(pRH_RemoteFileSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Upload"))
		{
			DoUploadFile(pRH_RemoteFileSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Download"))
		{
			DoDownloadFile(pRH_RemoteFileSubsystem);
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}


void FRHDTW_RemoteFile::DoListFiles(URH_RemoteFileSubsystem* pRemoteFileSubsystem)
{
	ImGui::InputText("(TO) Local Download Directory", &BrowseDownloadDirectory);

	if (ImGui::Button("Lookup File List"))
	{
		pRemoteFileSubsystem->LookupFileList(RemoteDirectory);
	}

	FRHAPI_FileListResponse FileList;
	if (pRemoteFileSubsystem->ListFiles(RemoteDirectory, FileList))
	{
		ImGui::Text("%d Files Found", FileList.GetFiles().Num());

		// define delete file modal, since it must be defined at each level of the hierarchy
		auto DefineDeleteFileModal = [this, pRemoteFileSubsystem, FileList]() -> void
			{
				if (ImGui::BeginPopupModal("Confirm Delete File"))
				{
					if (PendingDeleteFileName.IsEmpty())
					{
						ImGui::CloseCurrentPopup();
					}
					else
					{
						FString ModalText = PendingDeleteFileName == TEXT("*") ? FString::Printf(TEXT("Are you sure you want to delete all files?")) : FString::Printf(TEXT("Are you sure you want to delete File %s?"), *PendingDeleteFileName);
						ImGui::Text("%s", TCHAR_TO_UTF8(*ModalText));
						if (ImGui::Button("Yes"))
						{
							TWeakObjectPtr<URH_RemoteFileSubsystem> pRemoteFileSubsystemWeak = pRemoteFileSubsystem;
							const auto RemoteDirectoryRef = RemoteDirectory;

							auto OnComplete = FRH_GenericSuccessWithErrorDelegate::CreateLambda([this, WeakThis=AsWeak(), pRemoteFileSubsystemWeak, RemoteDirectoryRef](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
								{
									// use weak pointer to validate this pointer is still valid (this is a workaround for some engine versions not having CreateLambdaSP())
									if (WeakThis.IsValid())
									{
										// if we successfully deleted file the, refresh the list view to reflect it
										PendingDeleteResult = bSuccess ? TEXT("Success") : ErrorInfo.ResponseContent;
										if (bSuccess && pRemoteFileSubsystemWeak.IsValid())
										{
											pRemoteFileSubsystemWeak->LookupFileList(RemoteDirectoryRef);
										}
									}
								});

							// if deleting all files, loop through and delete each file, refresh on each completion (expensive)
							if (PendingDeleteFileName == TEXT("*"))
							{
								for (auto& File : FileList.GetFiles())
								{
									pRemoteFileSubsystem->DeleteFile(RemoteDirectory, File.GetName(), OnComplete);
								}
							}
							// otherwise, just delete the one file and refresh on completion
							else
							{
								pRemoteFileSubsystem->DeleteFile(RemoteDirectory, PendingDeleteFileName, OnComplete);
							}
							PendingDeleteFileName.Empty();
							ImGui::CloseCurrentPopup();
						}
						ImGui::SameLine();
						if (ImGui::Button("No"))
						{
							PendingDeleteFileName.Empty();
							ImGui::CloseCurrentPopup();
						}
					}
					ImGui::EndPopup();
				}
			};

		DefineDeleteFileModal();

		if (ImGui::Button("Download All Files"))
		{
			// download all files specified by the cache
			pRemoteFileSubsystem->DownloadAllFiles(RemoteDirectory, BrowseDownloadDirectory, true);
		}
		if (ImGui::Button("Delete All Files"))
		{
			PendingDeleteFileName = TEXT("*");
			ImGui::OpenPopup("Confirm Delete File");
		}

		for (const auto& File : FileList.GetFiles())
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*File.GetName()), RH_DefaultTreeFlagsDefaultOpen))
			{
				ImGui::BeginDisabled(BrowseDownloadDirectory.IsEmpty());
				if (ImGui::Button("Download"))
				{
					pRemoteFileSubsystem->DownloadFile(RemoteDirectory, File.GetName(), BrowseDownloadDirectory / File.GetName());
				}
				ImGui::EndDisabled();
				ImGui::SameLine();
				if (ImGui::Button("Delete"))
				{
					PendingDeleteFileName = File.GetName();
					ImGui::OpenPopup("Confirm Delete File");
				}
				DefineDeleteFileModal();

				ImGuiDisplayModelData(File);
				ImGui::TreePop();
			}
		}

		ImGui::Text("Delete Result: %s", TCHAR_TO_UTF8(*PendingDeleteResult));
	}
	else
	{
		ImGui::Text("RemoteDirectory not found in cache.");
	}
}

void FRHDTW_RemoteFile::DoDownloadFile(URH_RemoteFileSubsystem* pRemoteFileSubsystem)
{
	ImGui::InputText("(FROM) Remote File Name", &DownloadRemoteFileName);
	ImGui::InputText("(TO) Local File Path", &DownloadLocalFilePath);

	ImGui::BeginDisabled(!RemoteDirectory.IsValid() || DownloadRemoteFileName.IsEmpty() || DownloadLocalFilePath.IsEmpty());
	if (ImGui::Button("Download"))
	{
		pRemoteFileSubsystem->DownloadFile(RemoteDirectory, DownloadRemoteFileName, DownloadLocalFilePath, FRH_GenericSuccessWithErrorDelegate::CreateLambda([this, WeakThis=AsWeak()](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				// use weak pointer to validate this pointer is still valid (this is a workaround for some engine versions not having CreateLambdaSP())
				if (WeakThis.IsValid())
				{
					DownloadResult = bSuccess ? TEXT("Success") : ErrorInfo.ResponseContent;
				}
			})
		);
	}
	ImGui::EndDisabled();

	ImGui::Text("Result: %s", TCHAR_TO_UTF8(*DownloadResult));
}

void FRHDTW_RemoteFile::DoUploadFile(URH_RemoteFileSubsystem* pRemoteFileSubsystem)
{
	ImGui::InputText("(FROM) Local File Path", &UploadLocalFilePath);
	ImGui::InputText("(TO) Remote File Name", &UploadRemoteFileName);

	ImGui::BeginDisabled(!RemoteDirectory.IsValid() || UploadLocalFilePath.IsEmpty() || UploadRemoteFileName.IsEmpty());
	if (ImGui::Button("Upload"))
	{
		pRemoteFileSubsystem->UploadFile(RemoteDirectory, UploadRemoteFileName, UploadLocalFilePath, FRH_GenericSuccessWithErrorDelegate::CreateLambda([this, WeakThis=AsWeak()](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				// use weak pointer to validate this pointer is still valid (this is a workaround for some engine versions not having CreateLambdaSP())
				if (WeakThis.IsValid())
				{
					UploadResult = bSuccess ? TEXT("Success") : ErrorInfo.ResponseContent;
				}
			})
		);
	}
	ImGui::EndDisabled();

	ImGui::Text("Result: %s", TCHAR_TO_UTF8(*UploadResult));
}