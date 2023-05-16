// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RHDTW_Friends.h"

#include "imgui.h"

#include "RallyHereIntegrationModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_FriendSubsystem.h"
#include "RH_ImGuiUtilities.h"

#include "Engine/LocalPlayer.h"

FRHDTW_Friends::FRHDTW_Friends()
	: Super()
{
	FriendPlayerUuidString.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	BlockedPlayerUuidString.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);

	FriendActionResult.Empty();
	BlockActionResult.Empty();
	NotesInput.resize(256);
}

FRHDTW_Friends::~FRHDTW_Friends()
{
}

void FRHDTW_Friends::DoRHFriendTab(URH_FriendSubsystem* pRH_FriendSubsystem)
{
	ImGui::InputText("Player Uuid", FriendPlayerUuidString.GetData(), FriendPlayerUuidString.Num());
	
	FString InputAsString = UTF8_TO_TCHAR(FriendPlayerUuidString.GetData());
	FGuid tempGuid;
	FGuid::Parse(InputAsString, tempGuid);

	ImGui::SameLine();
	if (ImGui::Button("Add Friend"))
	{
		FriendActionResult.Empty();

		if (!pRH_FriendSubsystem->AddFriend(tempGuid, FRH_AddFriendDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleAddFriend)))
		{
			FriendActionResult = "Failed to send Add Friend request";
		}
	}
	
	ImGui::SameLine();
	if (ImGui::Button("Remove Friend"))
	{
		FriendActionResult.Empty();
		
		if (!pRH_FriendSubsystem->RemoveFriend(tempGuid, FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleRemoveFriend)))
		{
			FriendActionResult = "Failed to send Add Friend request";
		}
	}
	
	ImGui::SameLine();
	if (ImGui::Button("Refresh Friend"))
	{
		FriendActionResult.Empty();
		
		if (!pRH_FriendSubsystem->FetchFriend(tempGuid, FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleFetchFriend)))
		{
			FriendActionResult = "Failed to send Get Friend request";
		}
	}

	ImGui::SetNextItemWidth(350.f);
	ImGui::InputText("Notes", const_cast<char*>(NotesInput.data()), NotesInput.size());
	ImGui::SameLine();
	if (ImGui::Button("Set Notes"))
	{
		FriendActionResult.Empty();
		if (!pRH_FriendSubsystem->AddNotes(tempGuid, NotesInput[0] != '\0' ? FString(NotesInput.c_str()) : FString(), FRH_AddNotesDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleAddNote)))
		{
			FriendActionResult = "Failed to send Add Notes request";
		}
	}
	ImGui::SameLine();
	if (ImGui::Button("Clear Notes"))
	{
		FriendActionResult.Empty();
		FriendActionResult.Empty();
		if (!pRH_FriendSubsystem->AddNotes(tempGuid, FString(), FRH_AddNotesDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleAddNote)))
		{
			FriendActionResult = "Failed to send Add Notes request";
		}
	}

	if (ImGui::Button("Refresh"))
	{
		FriendActionResult.Empty();
		if (!pRH_FriendSubsystem->FetchFriendsList(FRH_GenericFriendDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleFetchFriendsList)))
		{
			FriendActionResult = "Failed to send Fetch Friends Request";
		}
	}

	ImGui::SameLine();
	if (ImGui::Button("Clear"))
	{
		FriendActionResult.Empty();
		pRH_FriendSubsystem->ClearRHFriendCache();
		pRH_FriendSubsystem->FriendListUpdatedDelegate.Broadcast(pRH_FriendSubsystem->GetFriends());
	}
	
	ImGui::Text("%s", TCHAR_TO_UTF8(*FriendActionResult));
	
	ImGui::Separator();
	
	ImGui::Columns(4);
	ImGui::Text("%s", "Player UUID");
	ImGui::NextColumn();
	ImGui::Text("%s", "Status");
	ImGui::NextColumn();
	ImGui::Text("%s", "Last Modified On");
	ImGui::NextColumn();
	ImGui::Text("%s", "Notes");
	ImGui::NextColumn();
	ImGui::Separator();
	
	for (auto fr : pRH_FriendSubsystem->GetFriends())
	{
		if (!fr->GetRHPlayerUuid().IsValid() || fr->GetStatus() == FriendshipStatus::RH_None)
		{
			continue;
		}
		
		ImGui::PushID(TCHAR_TO_UTF8(*(fr->GetRHPlayerUuid().ToString())));
	
		ImGui::Text("%s", TCHAR_TO_UTF8(*fr->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));
		ImGui::NextColumn();
	
		FString enumValue = RH_GETENUMSTRING("/Script/RallyHereIntegration", "FriendshipStatus", fr->GetStatus());
		ImGui::Text("%s", TCHAR_TO_UTF8(*enumValue));
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*fr->GetLastModifiedOn().ToIso8601()));
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*fr->GetNotes()));
		ImGui::NextColumn();
		
		ImGui::PopID();
	}

	ImGui::Columns(1);
}

void FRHDTW_Friends::DoBlockedPlayersTab(URH_FriendSubsystem* pRH_FriendSubsystem)
{
	ImGui::InputText("Player Uuid", FriendPlayerUuidString.GetData(), FriendPlayerUuidString.Num());

	FString InputAsString = UTF8_TO_TCHAR(FriendPlayerUuidString.GetData());
	FGuid tempGuid;
	FGuid::Parse(InputAsString, tempGuid);
	
	ImGui::SameLine();
	if (ImGui::Button("Block Player"))
	{
		BlockActionResult.Empty();
		if (!pRH_FriendSubsystem->BlockPlayer(tempGuid, FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleBlockPlayer)))
		{
			BlockActionResult = "Failed to send Block Player request ";
		}
	}
	
	ImGui::SameLine();
	if (ImGui::Button("Unblock Player"))
	{
		BlockActionResult.Empty();
		if (!pRH_FriendSubsystem->UnblockPlayer(tempGuid, FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleUnblockPlayer)))
		{
			BlockActionResult = "Failed to send Unblock Player request ";
		}
	}
	
	ImGui::SameLine();
	if (ImGui::Button("Refresh Player"))
	{
		BlockActionResult.Empty();
		if (!pRH_FriendSubsystem->FetchBlockedPlayer(tempGuid, FRH_GenericFriendWithUuidDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleFetchBlockedPlayer)))
		{
			BlockActionResult = "Failed to send Refresh Blocked Player request ";
		}
	}

	if (ImGui::Button("Refresh"))
	{
		BlockActionResult.Empty();
		if (!pRH_FriendSubsystem->FetchBlockedList(FRH_GenericFriendDelegate::CreateSP(SharedThis(this), &FRHDTW_Friends::HandleFetchBlockedPlayers)))
		{
			FriendActionResult = "Failed to send Fetch Blocked Request";
		}
	}

	ImGui::SameLine();
	if (ImGui::Button("Clear"))
	{
		BlockActionResult.Empty();
		pRH_FriendSubsystem->ClearBlockedCache();
		pRH_FriendSubsystem->BlockedListUpdatedDelegate.Broadcast({});
	}
	
	ImGui::Text("%s", TCHAR_TO_UTF8(*BlockActionResult));
	
	ImGui::Separator();
	
	ImGui::Columns(2);
	ImGui::Text("%s", "Player UUID");
	ImGui::NextColumn();
	ImGui::Text("%s", "Last Modified On");
	ImGui::NextColumn();
	ImGui::Separator();

	for (auto entry : pRH_FriendSubsystem->GetBlocked())
	{
		auto blockedUUID = entry;
		ImGui::PushID(TCHAR_TO_UTF8(*(blockedUUID.ToString())));
	
		ImGui::Text("%s", TCHAR_TO_UTF8(*blockedUUID.ToString(EGuidFormats::DigitsWithHyphens)));
		ImGui::NextColumn();
		
		ImGui::PopID();
	}
	
	ImGui::Columns(1);
}

void FRHDTW_Friends::DoPlatformFriendTab(URH_FriendSubsystem* pRH_FriendSubsystem) const
{
	int32 idCounter = 1;
	for (auto fr : pRH_FriendSubsystem->GetFriends())
	{
		auto portalFriends = fr->PlatformFriends;
		if (!portalFriends.Num())
		{
			continue;
		}

		auto PlatformName = RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_PlatformTypes", portalFriends[0]->GetPlatform());
		auto GamerTag = portalFriends[0]->GetClientGamerTag();
		auto HeaderTitle = TCHAR_TO_UTF8(*(fr->GetRHPlayerUuid().ToString() + " - " + GamerTag + " - " + PlatformName));
		
		if (ImGui::CollapsingHeader(HeaderTitle))
		{
			if (ImGui::BeginChild(HeaderTitle))
			{
				
				ImGui::Columns(12);
				ImGui::Text("%s", "GamerTag");
				ImGui::NextColumn();
				ImGui::Text("%s", "Platform User Id");
				ImGui::NextColumn();
				ImGui::Text("%s", "Platform Type");
				ImGui::NextColumn();
				ImGui::Text("%s", "Joinable");
				ImGui::NextColumn();
				ImGui::Text("%s", "PlayingGame");
				ImGui::NextColumn();
				ImGui::Text("%s", "PlayingThisGame");
				ImGui::NextColumn();
				ImGui::Text("%s", "Online");
				ImGui::NextColumn();
				ImGui::Text("%s", "DND");
				ImGui::NextColumn();
				ImGui::Text("%s", "Friend");
				ImGui::NextColumn();
				ImGui::Text("%s", "PendingToYou");
				ImGui::NextColumn();
				ImGui::Text("%s", "PendingFromYou");
				ImGui::NextColumn();
				ImGui::Text("%s", "PresenceInfo");
				ImGui::NextColumn();
				ImGui::Separator();

				for (auto i = 0; i < portalFriends.Num(); ++i) 
				{
					auto portalFriend = portalFriends[i];

					ImGui::PushID(idCounter);
					idCounter++;
				
					ImGui::Text("%s", TCHAR_TO_UTF8(*portalFriend->GetClientGamerTag()));
					ImGui::NextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*portalFriend->GetPlatformUserId()));
					ImGui::NextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_PlatformTypes", portalFriend->GetPlatform())));
					ImGui::NextColumn();
					ImGui::Text("%d", portalFriend->Joinable);
					ImGui::NextColumn();
					ImGui::Text("%d", portalFriend->PlayingGame);
					ImGui::NextColumn();
					ImGui::Text("%d", portalFriend->PlayingThisGame);
					ImGui::NextColumn();
					ImGui::Text("%d", portalFriend->Online);
					ImGui::NextColumn();
					ImGui::Text("%d", portalFriend->DoNotDisturb);
					ImGui::NextColumn();
					ImGui::Text("%d", portalFriend->Friend);
					ImGui::NextColumn();
					ImGui::Text("%d", portalFriend->PendingFriendRequestToYou);
					ImGui::NextColumn();
					ImGui::Text("%d", portalFriend->PendingFriendRequestFromYou);
					ImGui::NextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*portalFriend->RichPresenceInfo));
					ImGui::NextColumn();

					ImGui::PopID();
				}
				ImGui::Columns(1);
				ImGui::EndChild();
			}
		}
	}
}

void FRHDTW_Friends::Do()
{
	ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		ImGui::Text("%s", "Please select a Local Player in order to log in.");
		return;
	}
	
	URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
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

void FRHDTW_Friends::HandleFetchFriendsList(bool bSuccessful)
{
	if (bSuccessful)
	{
		FriendActionResult = FString::Printf(TEXT("Refresh Friends succeeded."));
	}
	else
	{
		FriendActionResult = FString::Printf(TEXT("Refresh Friends failed."));
	}
}

void FRHDTW_Friends::HandleAddFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, FriendshipStatus FriendsStatus)
{
	if (bSuccessful)
	{
		const auto NewStatus = RH_GETENUMSTRING("/Script/RallyHereIntegration", "FriendshipStatus", FriendsStatus);
		FriendActionResult = FString::Printf(TEXT("Add Friend %s succeeded. New status is %s"), *FriendsPlayerUuid.ToString(), *NewStatus);
	}
	else
	{
		FriendActionResult = FString::Printf(TEXT("Add Friend failed."));
	}
}

void FRHDTW_Friends::HandleAddNote(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FString& NewNote)
{
	if (bSuccessful)
	{
		FriendActionResult = FString::Printf(TEXT("Update Notes to Friend %s succeeded. New note %s"), *FriendsPlayerUuid.ToString(), *NewNote);
	}
	else
	{
		FriendActionResult = FString::Printf(TEXT("Update Notes failed."));
	}
}

void FRHDTW_Friends::HandleFetchFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid)
{
	if (bSuccessful)
	{
		FriendActionResult = FString::Printf(TEXT("Get Friend %s succeeded"), *FriendsPlayerUuid.ToString());
	}
	else
	{
		FriendActionResult = FString::Printf(TEXT("Get Friend failed."));
	}
}

void FRHDTW_Friends::HandleRemoveFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid)
{
	if (bSuccessful)
	{
		FriendActionResult = FString::Printf(TEXT("Remove Friend %d succeeded"), *FriendsPlayerUuid.ToString());
	}
	else
	{
		FriendActionResult = FString::Printf(TEXT("Remove Friend failed."));
	}
}

void FRHDTW_Friends::HandleFetchBlockedPlayers(bool bSuccessful)
{
	if (bSuccessful)
	{
		BlockActionResult = FString::Printf(TEXT("Refresh Blocked Players succeeded."));
	}
	else
	{
		BlockActionResult = FString::Printf(TEXT("Refresh Blocked Players failed."));
	}
}

void FRHDTW_Friends::HandleFetchBlockedPlayer(bool bSuccessful, const FGuid& PlayerUuid)
{
	if (bSuccessful)
	{
		BlockActionResult = FString::Printf(TEXT("Refresh Blocked Player %d succeeded."), *PlayerUuid.ToString());
	}
	else
	{
		BlockActionResult = FString::Printf(TEXT("Refresh Blocked Player failed."));
	}
}

void FRHDTW_Friends::HandleBlockPlayer(bool bSuccessful, const FGuid& PlayerUuid)
{
	if (bSuccessful)
	{
		BlockActionResult = FString::Printf(TEXT("Block Player %d succeeded."), *PlayerUuid.ToString());
	}
	else
	{
		BlockActionResult = FString::Printf(TEXT("Block Player failed."));
	}
}

void FRHDTW_Friends::HandleUnblockPlayer(bool bSuccessful, const FGuid& PlayerUuid)
{
	if (bSuccessful)
	{
		BlockActionResult = FString::Printf(TEXT("Unblock Player %d succeeded"), *PlayerUuid.ToString());
	}
	else
	{
		BlockActionResult = FString::Printf(TEXT("Unblock Player failed."));
	}
}
