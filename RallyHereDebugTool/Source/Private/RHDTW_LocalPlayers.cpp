// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RHDTW_LocalPlayers.h"
#include "RallyHereDebugTool.h"
#include "RH_ImGuiUtilities.h"

#include "Engine/LocalPlayer.h"
#include "Engine/World.h"

#include "imgui.h"
#include "Kismet/GameplayStatics.h"

FRHDTW_LocalPlayers::FRHDTW_LocalPlayers()
	: Super()
{
}

FRHDTW_LocalPlayers::~FRHDTW_LocalPlayers()
{
}

void FRHDTW_LocalPlayers::Do()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		return;
	}

	pOwner->CheckForFirstEverSelectValidLocalPlayer();

	ImGui::Begin("Local Players");

	TArray<ULocalPlayer*> LocalPlayers = pOwner->GetAllLocalPlayers();
	if (ImGui::Button("Add New Player"))
	{
		UGameplayStatics::CreatePlayer(GetWorld(), LocalPlayers.Num());
	}
	ImGui::SameLine();
	if (ImGui::Button("Remove Selected Player"))
	{
		ForEachSelectedPlayer(FRHDT_LPAction::CreateLambda([](ULocalPlayer* pLocalPlayer) {
			UGameplayStatics::RemovePlayer(pLocalPlayer->GetPlayerController(pLocalPlayer->GetWorld()), true);
		}));
	}

	TArray<ULocalPlayer*> SelectedLocalPlayers = pOwner->GetAllSelectedLocalPlayers();
	bool bAllSelected = SelectedLocalPlayers == LocalPlayers;

	ImGui::Columns(5);
	ImGui::Separator();
	if (ImGui::Checkbox("Select##AllPlayersSelected", &bAllSelected))
	{
		if (bAllSelected)
		{
			pOwner->SelectAllLocalPlayers();
		}
		else
		{
			pOwner->DeselectAllLocalPlayers();
		}
	}
	ImGui::NextColumn();
	ImGui::Text("Controller ID");
	ImGui::NextColumn();
	ImGui::Text("Name");
	ImGui::NextColumn();
	ImGui::Text("Player UUID");
	ImGui::NextColumn();
	ImGui::Text("Authenticated");
	ImGui::NextColumn();
	ImGui::Separator();

	for (auto localPlayerItr = LocalPlayers.CreateIterator(); localPlayerItr; ++localPlayerItr)
	{
		ULocalPlayer* pLocalPlayer = *localPlayerItr;
		URH_LocalPlayerSubsystem* pRHLocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();

		ImGui::PushID(pLocalPlayer);

		bool bSelected = SelectedLocalPlayers.Find(pLocalPlayer) != INDEX_NONE;
		if (ImGui::Checkbox("##selected", &bSelected))
		{
			if (bSelected)
			{
				pOwner->SelectLocalPlayer(pLocalPlayer);
			}
			else
			{
				pOwner->DeselectLocalPlayer(pLocalPlayer);
			}
		}
		ImGui::NextColumn();
		ImGui::Text("%d", pLocalPlayer->GetControllerId());
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*GetNameSafe(pLocalPlayer)));
		ImGui::NextColumn();
		if (pRHLocalPlayerSubsystem != nullptr)
		{
			ImGuiDisplayCopyableValue(TEXT("PlayerUuid"), pRHLocalPlayerSubsystem->GetPlayerUuid(), ECopyMode::Value);
		}
		else
		{
			ImGui::Text("N/A");
		}
		ImGui::NextColumn();
		bool bAuthenticated = false;
		if (pRHLocalPlayerSubsystem != nullptr)
		{
			bAuthenticated = pRHLocalPlayerSubsystem->IsLoggedIn();
		}
		ImGui::Checkbox("##authenticated", &bAuthenticated);
		ImGui::NextColumn();

		ImGui::PopID();
	}
	ImGui::Columns(1);

	ImGui::End();
}
