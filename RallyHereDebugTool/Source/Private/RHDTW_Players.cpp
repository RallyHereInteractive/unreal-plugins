// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_Players.h"

#include "imgui.h"

#include "RH_ImGuiUtilities.h"
#include "RallyHereIntegrationModule.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "Engine/LocalPlayer.h"

/* Wrapper for player presentation */
struct FPlayerWrapper
{
	ULocalPlayer* LocalPlayer;
	URH_PlayerInfo* PlayerInfo;

	inline bool operator==(const FPlayerWrapper& Other) const
	{
		return LocalPlayer == Other.LocalPlayer && PlayerInfo == Other.PlayerInfo;
	}
};

namespace
{
	void BuildPlayerList(URallyHereDebugTool* Owner, TArray<FPlayerWrapper>& OutPlayerList)
	{
		TArray<ULocalPlayer*> LocalPlayers = Owner->GetAllLocalPlayers();
		TArray<URH_PlayerInfo*> PlayerInfos = Owner->GetAllPlayerInfos();

		for (ULocalPlayer* lp : LocalPlayers)
		{
			if (lp)
			{
				FPlayerWrapper NewPlayer;
				NewPlayer.LocalPlayer = lp;
				NewPlayer.PlayerInfo = nullptr;

				URH_LocalPlayerSubsystem* pRHLocalPlayerSubsystem = lp->GetSubsystem<URH_LocalPlayerSubsystem>();
				if (pRHLocalPlayerSubsystem && pRHLocalPlayerSubsystem->IsLoggedIn())
				{
					for (URH_PlayerInfo* pi : PlayerInfos)
					{
						if (pi && pi->GetRHPlayerUuid() == pRHLocalPlayerSubsystem->GetPlayerUuid())
						{
							NewPlayer.PlayerInfo = pi;
							PlayerInfos.Remove(pi);
							break;
						}
					}
				}

				OutPlayerList.Add(NewPlayer);
			}
		}


		for (URH_PlayerInfo* pi : PlayerInfos)
		{
			if (pi)
			{
				FPlayerWrapper NewPlayer;
				NewPlayer.LocalPlayer = nullptr;
				NewPlayer.PlayerInfo = pi;
				OutPlayerList.Add(NewPlayer);
			}
		}
	}

	void SelectPlayer(URallyHereDebugTool* Owner, FPlayerWrapper Player)
	{
		if (Owner)
		{
			if (Player.LocalPlayer)
			{
				Owner->SelectLocalPlayer(Player.LocalPlayer);
			}
			if (Player.PlayerInfo)
			{
				Owner->SelectPlayerInfo(Player.PlayerInfo);
			}
		}
	}

	void DeselectPlayer(URallyHereDebugTool* Owner, FPlayerWrapper Player)
	{
		if (Owner)
		{
			if (Player.LocalPlayer)
			{
				Owner->DeselectLocalPlayer(Player.LocalPlayer);
			}
			if (Player.PlayerInfo)
			{
				Owner->DeselectPlayerInfo(Player.PlayerInfo);
			}
		}
	}

	bool IsPlayerSelected(URallyHereDebugTool* Owner, FPlayerWrapper Player)
	{
		if (Owner)
		{
			if (Player.LocalPlayer)
			{
				if (Owner->GetAllSelectedLocalPlayers().Contains(Player.LocalPlayer))
				{
					return true;
				}
			}
			if (Player.PlayerInfo)
			{
				if (Owner->GetAllSelectedPlayerInfos().Contains(Player.PlayerInfo))
				{
					return true;
				}
			}
		}
		return false;
	}

	void SelectAllPlayers(URallyHereDebugTool* Owner)
	{
		if (Owner)
		{
			Owner->SelectAllLocalPlayers();
			Owner->SelectAllPlayerInfos();
		}
	}

	void DeselectAllPlayers(URallyHereDebugTool* Owner)
	{
		if (Owner)
		{
			Owner->DeselectAllLocalPlayers();
			Owner->DeselectAllPlayerInfos();
		}
	}

	bool AreAllPlayersSelected(URallyHereDebugTool* Owner)
	{
		if (Owner)
		{
			return Owner->GetAllLocalPlayers() == Owner->GetAllSelectedLocalPlayers() && Owner->GetAllPlayerInfos() == Owner->GetAllSelectedPlayerInfos();
		}
		return false;
	}

	void TargetPlayer(URallyHereDebugTool* Owner, FPlayerWrapper Player)
	{
		if (Owner && Player.PlayerInfo)
		{
			Owner->TargetPlayerInfo(Player.PlayerInfo);
		}
	}

	void UntargetPlayer(URallyHereDebugTool* Owner, FPlayerWrapper Player)
	{
		if (Owner && Player.PlayerInfo)
		{
			Owner->UntargetPlayerInfo(Player.PlayerInfo);
		}
	}

	void TargetAllPlayers(URallyHereDebugTool* Owner)
	{
		if (Owner)
		{
			Owner->TargetAllPlayerInfos();
		}
	}

	void UntargetAllPlayers(URallyHereDebugTool* Owner)
	{
		if (Owner)
		{
			Owner->UntargetAllPlayerInfos();
		}
	}

	bool IsPlayerTargeted(URallyHereDebugTool* Owner, FPlayerWrapper Player)
	{
		if (Owner && Player.PlayerInfo)
		{
			return Owner->GetAllTargetedPlayerInfos().Contains(Player.PlayerInfo);
		}
		return false;
	}

	bool AreAllPlayersTargeted(URallyHereDebugTool* Owner)
	{
		if (Owner)
		{
			return Owner->GetAllTargetedPlayerInfos() == Owner->GetAllPlayerInfos();
		}
		return false;
	}
}

FRHDTW_Players::FRHDTW_Players()
	: Super()
{
	DefaultPos = FVector2D(0, 20);
	PlayerUuidInput.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	PlayerNameInput.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
}

FRHDTW_Players::~FRHDTW_Players()
{
}

void FRHDTW_Players::Do()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		return;
	}

	pOwner->CheckForFirstEverSelectValidLocalPlayer();

	URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem = nullptr;
	if (auto pGameInstance = GetGameInstance())
	{
		if (auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>())
		{
			pRH_PlayerInfoSubsystem = pGISubsystem->GetPlayerInfoSubsystem();
		}
	}

	TArray<FPlayerWrapper> Players;
	BuildPlayerList(pOwner, Players);

	ImGui::SetNextItemWidth(300.f);
	ImGui::InputText("Player Uuid", PlayerUuidInput.GetData(), PlayerUuidInput.Num());

	ImGui::SameLine();
	if (ImGui::Button("Search##UUID"))
	{
		FString InputAsString = UTF8_TO_TCHAR(PlayerUuidInput.GetData());
		FGuid PlayerInfoId;
		FGuid::Parse(InputAsString, PlayerInfoId);

		if (URH_PlayerInfo* pi = pRH_PlayerInfoSubsystem->GetOrCreatePlayerInfo(PlayerInfoId))
		{
			pi->GetLastKnownDisplayNameAsync(FTimespan(), false, ERHAPI_Platform::Anon, FRH_PlayerInfoGetDisplayNameDelegate::CreateLambda([pRH_PlayerInfoSubsystem, PlayerInfoId, pi, pOwner](bool bSuccess, const FString& DisplayName)
				{
					if (!bSuccess)
					{
						pRH_PlayerInfoSubsystem->RemovePlayerInfoFromCache(PlayerInfoId);
						if (pOwner && pOwner->GetAllSelectedPlayerInfos().Contains(pi))
						{
							pOwner->DeselectPlayerInfo(pi);
						}
					}
				}));
		}
	}

	ImGui::SetNextItemWidth(300.f);
	ImGui::InputText("Player Display Name", PlayerNameInput.GetData(), PlayerNameInput.Num());

	ImGui::SameLine();
	if (ImGui::Button("Search##Name"))
	{
		FString InputAsString = UTF8_TO_TCHAR(PlayerNameInput.GetData());
		if (!InputAsString.IsEmpty())
		{
			pRH_PlayerInfoSubsystem->LookupPlayer(InputAsString, FRH_PlayerInfoLookupPlayerDelegate::CreateLambda([](bool bSuccess, const TArray<URH_PlayerInfo*>& PlayerInfos)
				{
					if (bSuccess)
					{
						// Request display name
						for (URH_PlayerInfo* pi : PlayerInfos)
						{
							pi->GetLastKnownDisplayNameAsync();
						}
					}
				}));
		}
	}

	bool bAllSelected = AreAllPlayersSelected(pOwner);
	if (ImGui::Checkbox("Select All", &bAllSelected))
	{
		if (bAllSelected)
		{
			SelectAllPlayers(pOwner);
		}
		else
		{
			DeselectAllPlayers(pOwner);
		}
	}

	ImGui::SameLine();

	bool bAllTargeted = AreAllPlayersTargeted(pOwner);
	if (ImGui::Checkbox("Target All", &bAllTargeted))
	{
		if (bAllTargeted)
		{
			TargetAllPlayers(pOwner);
		}
		else
		{
			UntargetAllPlayers(pOwner);
		}
	}

	int32 numColumns = 7;

	if (pOwner->IsUsingLocalPlayerSandboxing())
	{
		++numColumns;
	}

	if (ImGui::BeginTable("PlayersTable", numColumns, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("Select");
		ImGui::TableSetupColumn("Target");
		ImGui::TableSetupColumn("Controller ID");

		if (pOwner->IsUsingLocalPlayerSandboxing())
		{
			ImGui::TableSetupColumn("Active View");
		}

		ImGui::TableSetupColumn("Display Name");
		ImGui::TableSetupColumn("Player UUID");
		ImGui::TableSetupColumn("Platforms");
		ImGui::TableSetupColumn("Presence");
		ImGui::TableHeadersRow();

		// Content
		int32 Index = 0;
		for (FPlayerWrapper Player : Players)
		{
			ImGui::PushID(Index++);

			ImGui::TableNextRow();
			ImGui::TableNextColumn();

			bool bSelected = IsPlayerSelected(pOwner, Player);
			if (ImGui::Checkbox("##selected", &bSelected))
			{
				ImGuiIO& io = ImGui::GetIO();
				if (io.KeyShift)
				{
					bool reachedCurrentElement = false;
					bool foundFirstSelected = false;
					for (FPlayerWrapper innerPlayer : Players)
					{
						if (reachedCurrentElement)
						{
							DeselectPlayer(pOwner, innerPlayer);
							continue;
						}
						if (foundFirstSelected)
						{
							SelectPlayer(pOwner, innerPlayer);
						}
						if (innerPlayer == Player)
						{
							SelectPlayer(pOwner, innerPlayer);
							reachedCurrentElement = true;
						}
						if (IsPlayerSelected(pOwner, Player))
						{
							foundFirstSelected = true;
						}
					}
				}
				else if (io.KeyCtrl)
				{
					if (bSelected)
					{
						SelectPlayer(pOwner, Player);
					}
					else
					{
						DeselectPlayer(pOwner, Player);
					}
				}
				else
				{
					if (bSelected)
					{
						DeselectAllPlayers(pOwner);
						SelectPlayer(pOwner, Player);
					}
					else
					{
						if (pOwner->GetAllSelectedLocalPlayers().Num() > 1 || pOwner->GetAllSelectedPlayerInfos().Num() > 1)
						{
							DeselectAllPlayers(pOwner);
							SelectPlayer(pOwner, Player);
						}
						else
						{
							DeselectPlayer(pOwner, Player);
						}
					}
				}
			}

			ImGui::TableNextColumn();
			if (Player.PlayerInfo)
			{
				bool bTargeted = IsPlayerTargeted(pOwner, Player);
				if (ImGui::Checkbox("##targeted", &bTargeted))
				{
					ImGuiIO& io = ImGui::GetIO();
					if (io.KeyShift)
					{
						bool reachedCurrentElement = false;
						bool foundFirstTargeted = false;
						for (FPlayerWrapper innerPlayer : Players)
						{
							if (reachedCurrentElement)
							{
								UntargetPlayer(pOwner, innerPlayer);
								continue;
							}
							if (foundFirstTargeted)
							{
								TargetPlayer(pOwner, innerPlayer);
							}
							if (innerPlayer == Player)
							{
								TargetPlayer(pOwner, innerPlayer);
								reachedCurrentElement = true;
							}
							if (IsPlayerTargeted(pOwner, Player))
							{
								foundFirstTargeted = true;
							}
						}
					}
					else if (io.KeyCtrl)
					{
						if (bTargeted)
						{
							TargetPlayer(pOwner, Player);
						}
						else
						{
							UntargetPlayer(pOwner, Player);
						}
					}
					else
					{
						if (bTargeted)
						{
							UntargetAllPlayers(pOwner);
							TargetPlayer(pOwner, Player);
						}
						else
						{
							if (pOwner->GetAllTargetedPlayerInfos().Num() > 1)
							{
								UntargetAllPlayers(pOwner);
								TargetPlayer(pOwner, Player);
							}
							else
							{
								UntargetPlayer(pOwner, Player);
							}
						}
					}
				}
			}
			else
			{
				ImGui::Text("Not found.");
			}

			ImGui::TableNextColumn();
			if (Player.LocalPlayer)
			{
				ImGui::Text("%d", Player.LocalPlayer->GetControllerId());
			}

			
			if (pOwner->IsUsingLocalPlayerSandboxing())
			{
				ImGui::TableNextColumn();
				if (Player.LocalPlayer != nullptr)
				{
					if (ImGui::RadioButton("##ActiveView", pOwner->GetSandboxPlayer() == Player.LocalPlayer))
					{
						if (pOwner->GetSandboxPlayer() != Player.LocalPlayer)
						{
							pOwner->SetSandboxPlayer(Player.LocalPlayer);
						}
						else
						{
							pOwner->SetSandboxPlayer(nullptr);
						}
					}
				}
			}
			
			ImGui::TableNextColumn();
			if (Player.PlayerInfo)
			{
				FString DisplayName;
				if (Player.PlayerInfo->GetLastKnownDisplayName(DisplayName))
				{
				 	ImGui::Text("%s", TCHAR_TO_UTF8(*DisplayName));
				}
				else
				{
					if (ImGui::Button("Get Name"))
					{
						Player.PlayerInfo->GetLastKnownDisplayNameAsync();
					}
				}
			}
			else
			{
				ImGui::Text("Not found.");
			}

			ImGui::TableNextColumn();
			if (Player.PlayerInfo)
			{
				ImGuiDisplayShortenedCopyableUuid(Player.PlayerInfo->GetRHPlayerUuid());
			}
			else
			{
				ImGui::Text("Not found.");
			}

			ImGui::TableNextColumn();
			if (Player.PlayerInfo)
			{
				if (Player.PlayerInfo->GetPlayerPlatforms().Num())
				{
					ImGui::Text("%d", Player.PlayerInfo->GetPlayerPlatforms().Num());
				}
				else
				{
					ImGui::Text("Not Requested");
				}
			}
			else
			{
				ImGui::Text("Not found.");
			}

			ImGui::TableNextColumn();
			if (Player.PlayerInfo)
			{
				URH_PlayerPresence* pp = Player.PlayerInfo->GetPresence();
				if (pp != nullptr)
				{
					ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_OnlineStatus", pp->Status)));
				}
				else
				{
					ImGui::Text("Not found");
				}
			}
			else
			{
				ImGui::Text("Not found.");
			}

			ImGui::PopID();
		}

		ImGui::EndTable();
	}
}