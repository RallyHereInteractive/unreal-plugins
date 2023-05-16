// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RH_DebugToolWindow.h"
#include "RallyHereDebugTool.h"
#include "imgui.h"
#include "Containers/StringConv.h"
#include "Engine/LocalPlayer.h"
#include "RH_LocalPlayerSubsystem.h"
#include "Engine/World.h"

class UWorld* FRH_DebugToolWindow::GetWorld() const
{
	return Owner.IsValid() ? Owner->GetWorld() : nullptr;
}

class UGameInstance* FRH_DebugToolWindow::GetGameInstance() const
{
	UWorld* MyWorld = GetWorld();
	return MyWorld != nullptr ? MyWorld->GetGameInstance() : nullptr;
}

class ULocalPlayer* FRH_DebugToolWindow::GetFirstSelectedLocalPlayer() const
{
	return Owner.IsValid() ? Owner->GetFirstSelectedLocalPlayer() : nullptr;
}

TArray<class ULocalPlayer*> FRH_DebugToolWindow::GetAllSelectedLocalPlayers() const
{
	TArray<class ULocalPlayer*> Result;
	if (Owner.IsValid())
	{
		Result = Owner->GetAllSelectedLocalPlayers();
	}
	return Result;
}

class URH_LocalPlayerSubsystem* FRH_DebugToolWindow::GetSelectedRH_LocalPlayerSubsystem() const
{
	return ULocalPlayer::GetSubsystem<URH_LocalPlayerSubsystem>(GetFirstSelectedLocalPlayer());
}

void FRH_DebugToolWindow::ForEachSelectedPlayer(FRHDT_LPAction Action)
{
	for (auto Player : GetAllSelectedLocalPlayers())
	{
		Action.ExecuteIfBound(Player);
	}
}

void FRH_DebugToolWindow::ForEachSelectedRHPlayer(FRHDT_RHLPAction Action)
{
	for (auto Player : GetAllSelectedLocalPlayers())
	{
		if (auto RHLPSS = Player->GetSubsystem<URH_LocalPlayerSubsystem>())
		{
			Action.ExecuteIfBound(RHLPSS);
		}
	}
}

TArray<ANSICHAR> FRH_DebugToolWindow::ConvertedString;

FRH_DebugToolWindow::FRH_DebugToolWindow()
	: Owner{}
	, bShow{}
	, bShowMenuBar{}
	, AdditionalWindowFlags{ ImGuiWindowFlags_None }
	, Name{ TEXT("") }
	, DefaultPos{ 30, 30 }
	, DefaultSize{ 600, 400 }
	, bNeedsWindowPosSizeReset{}
{
}

FRH_DebugToolWindow::~FRH_DebugToolWindow()
{
}

void FRH_DebugToolWindow::Init(URallyHereDebugTool* InOwner, const FString& InName, bool bInShow /*= false*/)
{
	Owner = InOwner;
	Name = InName;
	bShow = bInShow;
	if (Owner.IsValid())
	{
		Owner->RegisterWindow(SharedThis(this));
	}
}

void FRH_DebugToolWindow::Uninit()
{
	if (Owner.IsValid())
	{
		Owner->UnregisterWindow(SharedThis(this));
	}
}

void FRH_DebugToolWindow::ResetSizeAndPos(bool bInNeedsReset)
{
	bNeedsWindowPosSizeReset = bInNeedsReset;
}

void FRH_DebugToolWindow::RenderCheckbox()
{
	ImGui::Checkbox(TCHAR_TO_ANSI(*Name), &bShow);
}

void FRH_DebugToolWindow::RenderWindow()
{
	if (!bShow)
		return;

	ImGuiCond WindowCond = ImGuiCond_FirstUseEver;
	if (bNeedsWindowPosSizeReset)
	{
		WindowCond = ImGuiCond_Always;
		bNeedsWindowPosSizeReset = false;
	}
	ImGui::SetNextWindowPos(ImVec2(DefaultPos.X, DefaultPos.Y), WindowCond);
	ImGui::SetNextWindowSize(ImVec2(DefaultSize.X, DefaultSize.Y), WindowCond);

	ImGuiWindowFlags windowFlags = bShowMenuBar ? ImGuiWindowFlags_MenuBar : ImGuiWindowFlags_None;
	windowFlags |= AdditionalWindowFlags;
	ImGui::Begin(TCHAR_TO_ANSI(*Name), &bShow, windowFlags);
	Do();
	ImGui::End();
}