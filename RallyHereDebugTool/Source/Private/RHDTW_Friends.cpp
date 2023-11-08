// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_Friends.h"

#include "imgui.h"

#include "RallyHereIntegrationModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_FriendSubsystem.h"
#include "RH_ImGuiUtilities.h"

#include "Engine/LocalPlayer.h"

FRHDTW_Friends::FRHDTW_Friends()
	: Super()
{
	DefaultPos = FVector2D(610, 20);
	DefaultSize = FVector2D(710, 400);

	PlatformUserIdString.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);

	FriendActionResult.Empty();
	BlockActionResult.Empty();
	NotesInput.resize(256);
}

FRHDTW_Friends::~FRHDTW_Friends()
{
}

void FRHDTW_Friends::DoRHFriendTab(URH_FriendSubsystem* pRH_FriendSubsystem)
{
	int NumSelectedPlayers = 0;
	int NumTargetedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedLocalPlayers().Num();
		NumTargetedPlayers = pOwner->GetAllTargetedPlayerInfos().Num();
	}

	ImGui::Text("For [%d] selected Local Players (with Controller Ids).", NumSelectedPlayers);

	ImGui::Text("Actions towards [%d] targeted players:", NumTargetedPlayers);
	if (ImGui::Button("Add Friends"))
	{
		FriendActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, pLocalPlayerSubsystem, pFriendSubsystem](URH_PlayerInfo* TargetedPlayer)
						{
							if (TargetedPlayer && TargetedPlayer->GetRHPlayerUuid() != pLocalPlayerSubsystem->GetPlayerUuid())
							{
								if (!pFriendSubsystem->AddFriend(TargetedPlayer->GetRHPlayerUuid(), FRH_AddFriendDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleAddFriend, pLocalPlayerSubsystem->GetPlayerUuid(), TargetedPlayer->GetRHPlayerUuid())))
								{
									FriendActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Add Friend request to ") + TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
								}
							}
						}));
				}
			}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Remove Friends"))
	{
		FriendActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, pLocalPlayerSubsystem, pFriendSubsystem](URH_PlayerInfo* TargetedPlayer)
						{
							if (TargetedPlayer && TargetedPlayer->GetRHPlayerUuid() != pLocalPlayerSubsystem->GetPlayerUuid())
							{
								if (!pFriendSubsystem->RemoveFriend(TargetedPlayer->GetRHPlayerUuid(), FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleRemoveFriend, pLocalPlayerSubsystem->GetPlayerUuid(), TargetedPlayer->GetRHPlayerUuid())))
								{
									FriendActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Remove Friend request to ") + TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
								}
							}
						}));
				}
			}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Refresh Friends"))
	{
		FriendActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, pLocalPlayerSubsystem, pFriendSubsystem](URH_PlayerInfo* TargetedPlayer)
						{
							if (TargetedPlayer && TargetedPlayer->GetRHPlayerUuid() != pLocalPlayerSubsystem->GetPlayerUuid())
							{
								if (!pFriendSubsystem->FetchFriend(TargetedPlayer->GetRHPlayerUuid(), FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleFetchFriend, pLocalPlayerSubsystem->GetPlayerUuid(), TargetedPlayer->GetRHPlayerUuid())))
								{
									FriendActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Refresh Friend request for ") + TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
								}
							}
						}));
				}
			}));
	}
	ImGui::SetNextItemWidth(300.f);
	ImGui::InputText("Notes", const_cast<char*>(NotesInput.data()), NotesInput.size());
	ImGui::SameLine();
	if (ImGui::Button("Set Notes"))
	{
		FriendActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, pLocalPlayerSubsystem, pFriendSubsystem](URH_PlayerInfo* TargetedPlayer)
						{
							if (TargetedPlayer && TargetedPlayer->GetRHPlayerUuid() != pLocalPlayerSubsystem->GetPlayerUuid())
							{
								if (!pFriendSubsystem->AddNotes(TargetedPlayer->GetRHPlayerUuid(), NotesInput[0] != '\0' ? FString(NotesInput.c_str()) : FString(), FRH_AddNotesDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleAddNote, pLocalPlayerSubsystem->GetPlayerUuid(), TargetedPlayer->GetRHPlayerUuid())))
								{
									FriendActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Add Notes request for ") + TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
								}
							}
						}));
				}
			}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Clear Notes"))
	{
		FriendActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, pLocalPlayerSubsystem, pFriendSubsystem](URH_PlayerInfo* TargetedPlayer)
						{
							if (TargetedPlayer && TargetedPlayer->GetRHPlayerUuid() != pLocalPlayerSubsystem->GetPlayerUuid())
							{
								if (!pFriendSubsystem->DeleteNotes(TargetedPlayer->GetRHPlayerUuid(), FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleDeleteNote, pLocalPlayerSubsystem->GetPlayerUuid(), TargetedPlayer->GetRHPlayerUuid())))
								{
									FriendActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Delete Notes request for ") + TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
								}
							}
						}));
				}
			}));
	}

	ImGui::Text("Actions towards all friends:");
	if (ImGui::Button("Refresh"))
	{
		FriendActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					if (!pFriendSubsystem->FetchFriendsList(FRH_GenericFriendDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleFetchFriendsList, pLocalPlayerSubsystem->GetPlayerUuid())))
					{
						FriendActionResult += "[" + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + "] Failed to send Fetch Friends Request";
					}
				}
			}));
	}

	ImGui::SameLine();
	if (ImGui::Button("Clear"))
	{
		FriendActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					pFriendSubsystem->ClearRHFriendCache();
					pFriendSubsystem->FriendListUpdatedDelegate.Broadcast(pFriendSubsystem->GetFriends());
				}
			}));
	}

	if (!FriendActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Friend Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*FriendActionResult));
		}
	}

	ImGui::Separator();
	FGuid LocalPlayerUuid = FGuid();
	if (ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer())
	{
		FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pLocalPlayer->GetControllerId());
		ImGui::Text("%s", TCHAR_TO_UTF8(*Note));

		if (auto pLocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
		{
			LocalPlayerUuid = pLocalPlayerSubsystem->GetPlayerUuid();
		}
	}

	if (ImGui::BeginTable("RHFriendsTable", 5, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("Display Name");
		ImGui::TableSetupColumn("Player UUID");
		ImGui::TableSetupColumn("Status");
		ImGui::TableSetupColumn("Last Modified On");
		ImGui::TableSetupColumn("Notes");
		ImGui::TableHeadersRow();

		// Content
		for (auto fr : pRH_FriendSubsystem->GetFriends())
		{
			if (!fr->GetRHPlayerUuid().IsValid() || fr->GetStatus() == FriendshipStatus::RH_None)
			{
				continue;
			}
			ImGui::PushID(TCHAR_TO_UTF8(*fr->GetRHPlayerUuid().ToString()));

			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			FString DisplayName = fr->GetLastKnownDisplayName();
			if (DisplayName != FString())
			{
				ImGui::Text("%s", TCHAR_TO_UTF8(*DisplayName));
			}
			else
			{
				if (ImGui::SmallButton("Get Name"))
				{
					fr->GetLastKnownDisplayNameAsync();
				}
			}

			ImGui::TableNextColumn();
			ImGuiDisplayShortenedCopyableUuid(fr->GetRHPlayerUuid());

			ImGui::TableNextColumn();
			FString enumValue = RH_GETENUMSTRING("/Script/RallyHereIntegration", "FriendshipStatus", fr->GetStatus());
			ImGui::Text("%s", TCHAR_TO_UTF8(*enumValue));

			if (fr->GetStatus() == FriendshipStatus::RH_FriendRequestPending)
			{
				ImGui::SameLine();
				if (ImGui::SmallButton("Accept"))
				{
					FriendActionResult.Empty();
					if (!pRH_FriendSubsystem->AddFriend(fr->GetRHPlayerUuid(), FRH_AddFriendDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleAddFriend, LocalPlayerUuid, fr->GetRHPlayerUuid())))
					{
						FriendActionResult = "Failed to send Accept Friend request";
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Reject"))
				{
					FriendActionResult.Empty();
					if (!pRH_FriendSubsystem->RemoveFriend(fr->GetRHPlayerUuid(), FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleRemoveFriend, LocalPlayerUuid, fr->GetRHPlayerUuid())))
					{
						FriendActionResult = "Failed to send Reject Friend request";
					}
				}
			}
			else if (fr->GetStatus() == FriendshipStatus::RH_Friends || fr->GetStatus() == FriendshipStatus::RH_FriendRequestSent)
			{
				ImGui::SameLine();
				if (ImGui::SmallButton(fr->GetStatus() == FriendshipStatus::RH_Friends ? "Remove" : "Cancel"))
				{
					FriendActionResult.Empty();
					if (!pRH_FriendSubsystem->RemoveFriend(fr->GetRHPlayerUuid(), FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleRemoveFriend, LocalPlayerUuid, fr->GetRHPlayerUuid())))
					{
						FriendActionResult = "Failed to send Remove/Cancel Friend request";
					}
				}
			}

			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*fr->GetLastModifiedOn().ToIso8601()));
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*fr->GetNotes()));

			ImGui::PopID();
		}

		ImGui::EndTable();
	}
}

void FRHDTW_Friends::DoBlockedPlayersTab(URH_FriendSubsystem* pRH_FriendSubsystem)
{
	int NumSelectedPlayers = 0;
	int NumTargetedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedLocalPlayers().Num();
		NumTargetedPlayers = pOwner->GetAllTargetedPlayerInfos().Num();
	}

	ImGui::Text("For [%d] selected Local Players (with Controller Ids).", NumSelectedPlayers);
	ImGui::Text("Actions towards [%d] targeted players:", NumTargetedPlayers);
	if (ImGui::Button("Block Players"))
	{
		BlockActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
		{
			if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
			{
				ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, pLocalPlayerSubsystem, pFriendSubsystem](URH_PlayerInfo* TargetedPlayer)
					{
						if (TargetedPlayer && TargetedPlayer->GetRHPlayerUuid() != pLocalPlayerSubsystem->GetPlayerUuid())
						{
							if (!pFriendSubsystem->BlockPlayer(TargetedPlayer->GetRHPlayerUuid(), FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleBlockPlayer, pLocalPlayerSubsystem->GetPlayerUuid(), TargetedPlayer->GetRHPlayerUuid())))
							{
								BlockActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Block Player request for ") + TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
							}
						}
					}));
			}
		}));
	}

	ImGui::SameLine();
	if (ImGui::Button("Unblock Players"))
	{
		BlockActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
		{
			if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
			{
				ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, pLocalPlayerSubsystem, pFriendSubsystem](URH_PlayerInfo* TargetedPlayer)
					{
						if (TargetedPlayer && TargetedPlayer->GetRHPlayerUuid() != pLocalPlayerSubsystem->GetPlayerUuid())
						{
							if (!pFriendSubsystem->UnblockPlayer(TargetedPlayer->GetRHPlayerUuid(), FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleUnblockPlayer, pLocalPlayerSubsystem->GetPlayerUuid(), TargetedPlayer->GetRHPlayerUuid())))
							{
								BlockActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Unblock Player request for ") + TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
							}
						}
					}));
			}
		}));
	}

	ImGui::SameLine();
	if (ImGui::Button("Refresh Players"))
	{
		BlockActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
		{
			if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
			{
				ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, pLocalPlayerSubsystem, pFriendSubsystem](URH_PlayerInfo* TargetedPlayer)
					{
						if (TargetedPlayer && TargetedPlayer->GetRHPlayerUuid() != pLocalPlayerSubsystem->GetPlayerUuid())
						{
							if (!pFriendSubsystem->FetchBlockedPlayer(TargetedPlayer->GetRHPlayerUuid(), FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleFetchBlockedPlayer, pLocalPlayerSubsystem->GetPlayerUuid(), TargetedPlayer->GetRHPlayerUuid())))
							{
								BlockActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Refresh Blocked Player request for ") + TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
							}
						}
					}));
			}
		}));
	}

	if (ImGui::Button("Refresh Blocked List"))
	{
		BlockActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					if (!pFriendSubsystem->FetchBlockedList(FRH_GenericFriendDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleFetchBlockedPlayers, pLocalPlayerSubsystem->GetPlayerUuid())))
					{
						BlockActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Failed to send Fetch Blocked List Request for ") + pLocalPlayerSubsystem->GetPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + TEXT(".") LINE_TERMINATOR;
					}
				}
			}));
	}

	ImGui::SameLine();
	if (ImGui::Button("Clear Blocked Cache"))
	{
		BlockActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (auto pFriendSubsystem = pLocalPlayerSubsystem->GetFriendSubsystem())
				{
					pFriendSubsystem->ClearBlockedCache();
					pFriendSubsystem->BlockedListUpdatedDelegate.Broadcast({});
				}
			}));
	}

	if (!BlockActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Block Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*BlockActionResult));
		}
	}

	ImGui::Separator();
	FGuid LocalPlayerUuid = FGuid();
	if (ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer())
	{
		FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pLocalPlayer->GetControllerId());
		ImGui::Text("%s", TCHAR_TO_UTF8(*Note));

		if (auto pLocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
		{
			LocalPlayerUuid = pLocalPlayerSubsystem->GetPlayerUuid();
		}
	}

	if (ImGui::BeginTable("BlockedPlayersTable", 2, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("Player UUID");
		ImGui::TableSetupColumn("Last Modified On");
		ImGui::TableHeadersRow();

		// Content
		for (auto entry : pRH_FriendSubsystem->GetBlocked())
		{
			auto blockedUUID = entry;

			ImGui::PushID(TCHAR_TO_UTF8(*(blockedUUID.ToString())));

			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayShortenedCopyableUuid(blockedUUID);
			ImGui::SameLine();
			if (ImGui::SmallButton("Unblock"))
			{
				BlockActionResult.Empty();
				if (!pRH_FriendSubsystem->UnblockPlayer(blockedUUID, FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleUnblockPlayer, LocalPlayerUuid, blockedUUID)))
				{
					BlockActionResult = "Failed to send Unblock Player request ";
				}
			}
			ImGui::TableNextColumn();

			ImGui::PopID();
		}

		ImGui::EndTable();
	}
}

void FRHDTW_Friends::DoPlatformFriendTab(URH_FriendSubsystem* pRH_FriendSubsystem)
{
	ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer)
	{
		FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pLocalPlayer->GetControllerId());
		ImGui::Text("%s", TCHAR_TO_UTF8(*Note));
	}
	else
	{
		ImGui::Text("No local player selected.");
		return;
	}

	auto* LPSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();

	URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem = LPSubsystem ? LPSubsystem->GetPlayerInfoSubsystem() : nullptr;


	ImGui::SetNextItemWidth(300.f);
	ImGui::InputText("Platform User ID look up", PlatformUserIdString.GetData(), PlatformUserIdString.Num());
	const FString LookupString = UTF8_TO_TCHAR(PlatformUserIdString.GetData());

	int32 idCounter = 1;
	for (auto fr : pRH_FriendSubsystem->GetFriends())
	{
		auto portalFriends = fr->GetPlatformFriends();
		if (!portalFriends.Num())
		{
			continue;
		}

		if (!LookupString.IsEmpty())
		{
			bool matchSearchTerm = false;
			for (URH_PlatformFriend* portalFriend : portalFriends)
			{
				if (portalFriend->GetPlatformUserId().Contains(LookupString))
				{
					matchSearchTerm = true;
					break;
				}
			}

			if (!matchSearchTerm)
			{
				continue;
			}
		}

		auto PlatformName = RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", portalFriends[0]->GetPlatform());
		auto DisplayName = portalFriends[0]->GetClientDisplayName();

		if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*(fr->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) + " - " + DisplayName + " - " + PlatformName))))
		{
			ImGui::Indent(10.0f);

			ImGui::PushID(idCounter);
			idCounter++;

			if (fr->AreRHFriends())
			{
				if (ImGui::Button("Remove RH Friend"))
				{
					if (pRH_PlayerInfoSubsystem && pRH_FriendSubsystem)
					{
						pRH_FriendSubsystem->RemoveFriend(fr->GetRHPlayerUuid());
					}
				}
			}
			else if (fr->FriendRequestSent())
			{
				ImGui::BeginDisabled();
				ImGui::Button("Friend Request Sent");
				ImGui::EndDisabled();
			}
			else
			{
				if (ImGui::Button("Add RH Friend"))
				{
					if (pRH_PlayerInfoSubsystem && pRH_FriendSubsystem)
					{
						pRH_PlayerInfoSubsystem->LookupPlayerByPlatformUserId(portalFriends[0]->GetPlayerPlatformId(), FRH_PlayerInfoLookupPlayerDelegate::CreateLambda([pRH_FriendSubsystem](bool bSuccess, const TArray<URH_PlayerInfo*>& PlayerInfos)
							{
								if (bSuccess && PlayerInfos.IsValidIndex(0) && PlayerInfos[0] != nullptr)
								{
									pRH_FriendSubsystem->AddFriend(PlayerInfos[0]->GetRHPlayerUuid(), FRH_AddFriendDelegate::CreateLambda([pRH_FriendSubsystem](bool bSuccess, const FGuid& FriendsPlayerUuid, FriendshipStatus FriendStatus)
										{
											if (bSuccess)
											{
												pRH_FriendSubsystem->FetchFriendsList();
											}
										}));
								}
							}));
					}
				}
			}

			for (auto i = 0; i < portalFriends.Num(); ++i)
			{
				static auto BoolToString = [](bool InBool)
				{
					return InBool ? FString(TEXT("True")) : FString(TEXT("False"));
				};

				const auto portalFriend = portalFriends[i];
				ImGuiDisplayCopyableValue("Display Name", portalFriend->GetClientDisplayName());
				if (fr->GetRHPlayerUuid().IsValid())
				{
					ImGuiDisplayCopyableValue("RH Player UUID", fr->GetRHPlayerUuid());
				}
				ImGuiDisplayCopyableValue("Platform User Id", portalFriend->GetPlatformUserId());
				ImGuiDisplayCopyableValue("Platform Type", RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", portalFriend->GetPlatform()));
				ImGuiDisplayCopyableValue("Joinable", BoolToString(portalFriend->IsJoinable()));
				ImGuiDisplayCopyableValue("Playing Game", BoolToString(portalFriend->IsPlayingGame()));
				ImGuiDisplayCopyableValue("Playing This Game", BoolToString(portalFriend->IsPlayingThisGame()));
				ImGuiDisplayCopyableValue("Online", BoolToString(portalFriend->IsOnline()));
				ImGuiDisplayCopyableValue("DND", BoolToString(portalFriend->IsDND()));
				ImGuiDisplayCopyableValue("Friend", BoolToString(portalFriend->IsFriend()));
				ImGuiDisplayCopyableValue("Pending To You", BoolToString(portalFriend->HasPendingFriendRequestToYou()));
				ImGuiDisplayCopyableValue("Pending From You", BoolToString(portalFriend->HasPendingFriendRequestFromYou()));
				ImGuiDisplayCopyableValue("Presence Info", portalFriend->GetRichPresenceInfo());
				ImGui::Separator();

				ImGui::PopID();
			}

			ImGui::Unindent(10.0f);
		}
	}
}

void FRHDTW_Friends::Do()
{
	const ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		ImGui::Text("%s", "Please select a local player (has Controller Id) in Player Repository.");
		return;
	}

	const URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
	if (pRH_LocalPlayerSubsystem == nullptr)
	{
		ImGui::Text("%s", "RH_LocalPlayerSubsystem not available.");
		return;
	}

	URH_FriendSubsystem* pRH_FriendSubsystem = pRH_LocalPlayerSubsystem->GetFriendSubsystem();
	if (pRH_FriendSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_FriendSubsystem not available.");
		return;
	}

	if (!ImGui::BeginTabBar("Friends"))
	{
		return;
	}

	if (ImGui::BeginTabItem("RH Friends"))
	{
		ImGui::BeginChild("RH Friends");
		DoRHFriendTab(pRH_FriendSubsystem);
		ImGui::EndChild();
		ImGui::EndTabItem();
	}

	if (ImGui::BeginTabItem("Platform Friends"))
	{
		ImGui::BeginChild("Platform Friends");
		DoPlatformFriendTab(pRH_FriendSubsystem);
		ImGui::EndChild();
		ImGui::EndTabItem();
	}

	if (ImGui::BeginTabItem("Blocked Players"))
	{
		ImGui::BeginChild("Blocked Players");
		DoBlockedPlayersTab(pRH_FriendSubsystem);
		ImGui::EndChild();
		ImGui::EndTabItem();
	}

	ImGui::EndTabBar();
}

void FRHDTW_Friends::HandleFetchFriendsList(bool bSuccessful, const FGuid InstigatorUuid)
{
	if (bSuccessful)
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Refresh Friends succeeded."), *GetShortUuid(InstigatorUuid));
	}
	else
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Refresh Friends failed."), *GetShortUuid(InstigatorUuid));
	}
	FriendActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleAddFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, FriendshipStatus FriendsStatus, const FGuid InstigatorUuid, const FGuid TargetUuid)
{
	if (bSuccessful)
	{
		const auto NewStatus = RH_GETENUMSTRING("/Script/RallyHereIntegration", "FriendshipStatus", FriendsStatus);
		FriendActionResult += FString::Printf(TEXT("[%s] Add Friend %s succeeded. New status is %s"), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens), *NewStatus);
	}
	else
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Add Friend %s failed."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	FriendActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleAddNote(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FString& NewNote, const FGuid InstigatorUuid, const FGuid TargetUuid)
{
	if (bSuccessful)
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Update Notes to Friend %s succeeded. New note %s"), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens), *NewNote);
	}
	else
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Update Notes failed for %s."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	FriendActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleDeleteNote(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid)
{
	if (bSuccessful)
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Delete Notes to Friend %s succeeded."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	else
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Delete Notes failed for %s."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	FriendActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleFetchFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid)
{
	if (bSuccessful)
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Get Friend %s succeeded"), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	else
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Get Friend failed for %s."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	FriendActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleRemoveFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid)
{
	if (bSuccessful)
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Remove Friend %s succeeded"), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	else
	{
		FriendActionResult += FString::Printf(TEXT("[%s] Remove Friend %s failed."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	FriendActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleFetchBlockedPlayers(bool bSuccessful, const FGuid InstigatorUuid)
{
	if (bSuccessful)
	{
		BlockActionResult += FString::Printf(TEXT("[%s] Refresh Blocked Players succeeded."), *GetShortUuid(InstigatorUuid));
	}
	else
	{
		BlockActionResult += FString::Printf(TEXT("[%s] Refresh Blocked Players failed."), *GetShortUuid(InstigatorUuid));
	}
	BlockActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleFetchBlockedPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid)
{
	if (bSuccessful)
	{
		BlockActionResult += FString::Printf(TEXT("Refresh Blocked Player %s succeeded."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	else
	{
		BlockActionResult += FString::Printf(TEXT("Refresh Blocked Player %s failed."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	BlockActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleBlockPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid)
{
	if (bSuccessful)
	{
		BlockActionResult += FString::Printf(TEXT("[%s] Block Player %s succeeded."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	else
	{
		BlockActionResult = FString::Printf(TEXT("[%s] Block Player %s failed."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	BlockActionResult += LINE_TERMINATOR;
}

void FRHDTW_Friends::HandleUnblockPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid)
{
	if (bSuccessful)
	{
		BlockActionResult += FString::Printf(TEXT("[%s] Unblock Player %s succeeded"), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	else
	{
		BlockActionResult += FString::Printf(TEXT("[%s] Unblock Player %s failed."), *GetShortUuid(InstigatorUuid), *TargetUuid.ToString(EGuidFormats::DigitsWithHyphens));
	}
	BlockActionResult += LINE_TERMINATOR;
}