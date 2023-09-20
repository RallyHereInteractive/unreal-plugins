// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "imgui.h"
#include "RHDTW_Purge.h"

#include "RH_ImGuiUtilities.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_PurgeSubsystem.h"

#define IMGUI_PURGE_TIME_TEXTENTRY_PREALLOCATION_SIZE 256
#define IMGUI_PURGE_TIME_INPUT_WIDTH 180.f

FRHDTW_Purge::FRHDTW_Purge()
	: Super()
{
	DefaultPos = FVector2D(610, 20);
	SuggestedPurgeTimeInput.resize(IMGUI_PURGE_TIME_TEXTENTRY_PREALLOCATION_SIZE);
	PurgeActionResult.Empty();
}

FRHDTW_Purge::~FRHDTW_Purge()
{
}

void FRHDTW_Purge::Do()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedLocalPlayers().Num();
	}
	if (NumSelectedPlayers <= 0)
	{
		ImGui::Text("%s", "Please select a local player (has Controller Id) in Player Repository.");
		return;
	}
	ImGui::Text("For [%d] selected Local Players (with Controller Ids).", NumSelectedPlayers);
	
	ImGui::SetNextItemWidth(IMGUI_PURGE_TIME_INPUT_WIDTH);
	ImGui::InputText("Suggested Purge Time (ISO8601 Format)", const_cast<char*>(SuggestedPurgeTimeInput.data()), SuggestedPurgeTimeInput.size());
	ImGui::SameLine();
	if (ImGui::Button("Queue Purge"))
	{
		PurgeActionResult.Empty();
		FDateTime SuggestedPurgeDateTime;
		bool hasPurgeTimeInput = SuggestedPurgeTimeInput[0] != '\0';
		if (hasPurgeTimeInput)
		{
			FDateTime::ParseIso8601(UTF8_TO_TCHAR(SuggestedPurgeTimeInput.c_str()), SuggestedPurgeDateTime);
		}

		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this, SuggestedPurgeDateTime, hasPurgeTimeInput](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (pLocalPlayerSubsystem)
				{
					if (URH_PurgeSubsystem* pRH_PurgeSubsystem = pLocalPlayerSubsystem->GetPurgeSubsystem())
					{
						if (hasPurgeTimeInput)
						{
							pRH_PurgeSubsystem->EnqueueMeForPurge(SuggestedPurgeDateTime, FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleEnqueueMeForPurge, pLocalPlayerSubsystem->GetPlayerUuid()));
						}
						else
						{
							pRH_PurgeSubsystem->EnqueueMeForPurge(FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleEnqueueMeForPurge, pLocalPlayerSubsystem->GetPlayerUuid()));
						}
						
					}
					else
					{
						PurgeActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] RH_PurgeSubsystem not found.") LINE_TERMINATOR;
					}
				}
			}));
	}

	if (ImGui::Button("Purge Me Immediately"))
	{
		PurgeActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (pLocalPlayerSubsystem)
				{
					if (URH_PurgeSubsystem* pRH_PurgeSubsystem = pLocalPlayerSubsystem->GetPurgeSubsystem())
					{
						auto Delegate = FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleEnqueueMeForPurge, pLocalPlayerSubsystem->GetPlayerUuid());
						pRH_PurgeSubsystem->PurgeMeImmediately(MoveTemp(Delegate));
					}
					else
					{
						PurgeActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] RH_PurgeSubsystem not found.") LINE_TERMINATOR;
					}
				}
			}));
	}
	
	ImGui::SameLine();
	if (ImGui::Button("Dequeue Purge"))
	{
		PurgeActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (pLocalPlayerSubsystem)
				{
					if (URH_PurgeSubsystem* pRH_PurgeSubsystem = pLocalPlayerSubsystem->GetPurgeSubsystem())
					{
						auto Delegate = FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleDequeueMeForPurge, pLocalPlayerSubsystem->GetPlayerUuid());
						pRH_PurgeSubsystem->DequeueMeForPurge(MoveTemp(Delegate));
					}
					else
					{
						PurgeActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] RH_PurgeSubsystem not found.") LINE_TERMINATOR;
					}
				}
			}));
		
	}
	
	if (ImGui::Button("Refresh Purge Status"))
	{
		PurgeActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (pLocalPlayerSubsystem)
				{
					if (URH_PurgeSubsystem* pRH_PurgeSubsystem = pLocalPlayerSubsystem->GetPurgeSubsystem())
					{
						auto Delegate = FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleGetMyPurgeStatus, pLocalPlayerSubsystem->GetPlayerUuid());
						pRH_PurgeSubsystem->QueryMyPurgeStatus(MoveTemp(Delegate));
					}
					else
					{
						PurgeActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] RH_PurgeSubsystem not found.") LINE_TERMINATOR;
					}
				}
			}));
	}

	if (!PurgeActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Purge Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*PurgeActionResult));
		}
	}

	ImGui::Separator();

	URH_PurgeSubsystem* pRH_PurgeSubsystem = nullptr;
	if (const ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer())
	{
		FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pLocalPlayer->GetControllerId());
		ImGui::Text("%s", TCHAR_TO_UTF8(*Note));

		if (const URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
		{
			pRH_PurgeSubsystem = pRH_LocalPlayerSubsystem->GetPurgeSubsystem();
		}
	}

	if (pRH_PurgeSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_PurgeSubsystem not available.");
		return;
	}

	ImGuiDisplayCopyableValue(TEXT("Person ID"), pRH_PurgeSubsystem->GetMyPurgeStatus().PersonId.ToString(EGuidFormats::DigitsWithHyphens));
	ImGuiDisplayCopyableValue(TEXT("Status"), pRH_PurgeSubsystem->GetMyPurgeStatus().Status);
	ImGuiDisplayCopyableValue(TEXT("Purge On"), pRH_PurgeSubsystem->GetMyPurgeStatus().PurgeOn.ToIso8601());
	ImGuiDisplayCopyableValue(TEXT("Queued On"), pRH_PurgeSubsystem->GetMyPurgeStatus().CreatedOn.ToIso8601());
	ImGuiDisplayCopyableValue(TEXT("Last Modified On"), pRH_PurgeSubsystem->GetMyPurgeStatus().LastModifiedOn.ToIso8601());
}

void FRHDTW_Purge::HandleEnqueueMeForPurge(bool success, FRHAPI_PurgeResponse PurgeStatus, FRH_ErrorInfo Error, FGuid PlayerUuid)
{
	if (success)
	{
		PurgeActionResult =+ TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Enqueue Me for Purge succeeded.") LINE_TERMINATOR;
	}
	else
	{
		PurgeActionResult =+ TEXT("[") + GetShortUuid(PlayerUuid) + FString::Printf(TEXT("] Enqueue Me for Purge failed with status code %d. Response: %s "), Error.ResponseCode, *Error.ResponseContent) + LINE_TERMINATOR;
	}
}

void FRHDTW_Purge::HandleDequeueMeForPurge(bool success, FRHAPI_PurgeResponse PurgeStatus, FRH_ErrorInfo Error, FGuid PlayerUuid)
{
	if (success)
	{
		PurgeActionResult =+ TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Dequeue Me for Purge succeeded.") LINE_TERMINATOR;
	}
	else
	{
		PurgeActionResult =+TEXT("[") + GetShortUuid(PlayerUuid) + FString::Printf(TEXT("] Dequeue Me for Purge failed with status code %d. Response: %s "), Error.ResponseCode, *Error.ResponseContent) + LINE_TERMINATOR;
	}
}

void FRHDTW_Purge::HandleGetMyPurgeStatus(bool success, FRHAPI_PurgeResponse PurgeStatus, FRH_ErrorInfo Error, FGuid PlayerUuid)
{
	if (success)
	{
		PurgeActionResult =+TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Refresh Purge Status succeeded.") LINE_TERMINATOR;
	}
	else
	{
		PurgeActionResult =+TEXT("[") + GetShortUuid(PlayerUuid) + FString::Printf(TEXT("] Refresh Purge Status failed with status code %d. Response: %s "), Error.ResponseCode, *Error.ResponseContent) + LINE_TERMINATOR;
	}
}
