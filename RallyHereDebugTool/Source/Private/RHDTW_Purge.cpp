// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
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
	SuggestedPurgeTimeInput.resize(IMGUI_PURGE_TIME_TEXTENTRY_PREALLOCATION_SIZE);
}

FRHDTW_Purge::~FRHDTW_Purge()
{
}

void FRHDTW_Purge::Do()
{
	URH_PurgeSubsystem* pRH_PurgeSubsystem = GetPurgeSubsystem();
	if (pRH_PurgeSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_PurgeSubsystem not available.");
		return;
	}
	
	ImGui::SetNextItemWidth(IMGUI_PURGE_TIME_INPUT_WIDTH);
	ImGui::InputText("Suggested Purge Time (ISO8601 Format)", const_cast<char*>(SuggestedPurgeTimeInput.data()), SuggestedPurgeTimeInput.size());
	ImGui::SameLine();
	if (ImGui::Button("Queue Purge"))
	{
		if (SuggestedPurgeTimeInput[0] != '\0')
		{
			FDateTime SuggestedPurgeDateTime;
			FDateTime::ParseIso8601(UTF8_TO_TCHAR(SuggestedPurgeTimeInput.c_str()), SuggestedPurgeDateTime);

			auto Request = RallyHereAPI::FRequest_QueueMeForPurge();
			Request.PurgeRequest.SetSuggestedPurgeTime(SuggestedPurgeDateTime);

			auto Delegate = FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleEnqueueMeForPurge);
			pRH_PurgeSubsystem->EnqueueMeForPurge(SuggestedPurgeDateTime, MoveTemp(Delegate));
		}
		else
		{
			auto Delegate = FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleEnqueueMeForPurge);
			pRH_PurgeSubsystem->EnqueueMeForPurge(MoveTemp(Delegate));
		}
	}
	if (ImGui::Button("Purge Me Immediately"))
	{
		auto Delegate = FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleEnqueueMeForPurge);
		pRH_PurgeSubsystem->PurgeMeImmediately(MoveTemp(Delegate));
	}
	
	ImGui::SameLine();
	if (ImGui::Button("Dequeue Purge"))
	{
		DequeueMeForPurge(pRH_PurgeSubsystem);
	}

	ImGui::Text("%s", TCHAR_TO_UTF8(*PurgeActionResult));
	
	ImGui::Separator();
	if (ImGui::Button("Refresh Purge Status"))
	{
		RefreshMyPurgeStatus(pRH_PurgeSubsystem);
	}

	ImGuiDisplayCopyableValue(TEXT("Person ID"), pRH_PurgeSubsystem->GetMyPurgeStatus().PersonId.ToString(EGuidFormats::DigitsWithHyphens));
	ImGuiDisplayCopyableValue(TEXT("Status"), pRH_PurgeSubsystem->GetMyPurgeStatus().PurgeStatus);
	ImGuiDisplayCopyableValue(TEXT("Purge On"), pRH_PurgeSubsystem->GetMyPurgeStatus().PurgeOn.ToIso8601());
	ImGuiDisplayCopyableValue(TEXT("Queued On"), pRH_PurgeSubsystem->GetMyPurgeStatus().CreatedOn.ToIso8601());
	ImGuiDisplayCopyableValue(TEXT("Last Modified O"), pRH_PurgeSubsystem->GetMyPurgeStatus().LastModifiedOn.ToIso8601());
}

void FRHDTW_Purge::DequeueMeForPurge(URH_PurgeSubsystem* pRH_PurgeSubsystem)
{
	auto Delegate = FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleDequeueMeForPurge);
	pRH_PurgeSubsystem->DequeueMeForPurge(MoveTemp(Delegate));
}

void FRHDTW_Purge::RefreshMyPurgeStatus(URH_PurgeSubsystem* pRH_PurgeSubsystem)
{
	auto Delegate = FRH_OnPurgeStatusUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Purge::HandleGetMyPurgeStatus);
	pRH_PurgeSubsystem->QueryMyPurgeStatus(MoveTemp(Delegate));
}

void FRHDTW_Purge::HandleEnqueueMeForPurge(bool success, FRH_PurgeStatus PurgeStatus, FRH_ErrorInfo Error)
{
	if (success)
	{
		PurgeActionResult = FString::Printf(TEXT("Enqueue Me for Purge succeeded."));
	}
	else
	{
		PurgeActionResult = FString::Printf(TEXT("Enqueue Me for Purge failed with status code %d. Response: %s "), Error.ResponseCode, *Error.ResponseContent);
	}
}

void FRHDTW_Purge::HandleDequeueMeForPurge(bool success, FRH_PurgeStatus PurgeStatus, FRH_ErrorInfo Error)
{
	if (success)
	{
		PurgeActionResult = FString::Printf(TEXT("Dequeue Me for Purge succeeded."));
	}
	else
	{
		PurgeActionResult = FString::Printf(TEXT("Dequeue Me for Purge failed with status code %d. Response: %s "), Error.ResponseCode, *Error.ResponseContent);
	}
}

URH_PurgeSubsystem* FRHDTW_Purge::GetPurgeSubsystem()
{
	const ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		return nullptr;
	}
	
	const URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
	if (pRH_LocalPlayerSubsystem == nullptr)
	{
		return nullptr;
	}
	
	return pRH_LocalPlayerSubsystem->GetPurgeSubsystem();
}

void FRHDTW_Purge::HandleGetMyPurgeStatus(bool success, FRH_PurgeStatus PurgeStatus, FRH_ErrorInfo Error)
{
	if (success)
	{
		PurgeActionResult = FString::Printf(TEXT("Refresh Purge Status successed"));
	}
	else
	{
		PurgeActionResult = FString::Printf(TEXT("Refresh Purge Status failed with status code %d. Response: %s "), Error.ResponseCode, *Error.ResponseContent);
	}
}
