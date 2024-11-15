// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugToolSettings.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_OutputLog.h"

#include "ImGuiModule.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "HAL/ConsoleManager.h"
#include "UObject/ObjectKey.h"

DEFINE_LOG_CATEGORY(LogRallyHereDebugTool);

class FRallyHereDebugToolModule : public IRallyHereDebugToolModule
{
	// Begin IModuleInterface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	// End IModuleInterface

	void RegisterConsoleCommands();

	void ToggleDebugTool(UWorld* InWorld);
	void ResetWindowsDebugTool(UWorld* InWorld);
#ifdef WITH_IMGUI_NETIMGUI
	void ConnectDebugTool(UWorld* InWorld);
#endif
	virtual URallyHereDebugTool* GetDebugTool(UWorld* InWorld) const override;
	virtual void UpdateImGuiInputState() override;
	virtual FRHDTSpawnTool& GetSpawnToolDelegate() override { return OnSpawnTool; }
	virtual FRHDTCleanupTool& GetCleanupToolDelegate() override { return OnCleanupTool; }

	TUniquePtr<FAutoConsoleCommandWithWorld> ToggleDebugToolCommand;
	TUniquePtr<FAutoConsoleCommandWithWorld> ResetWindowsDebugToolCommand;
#ifdef WITH_IMGUI_NETIMGUI
	TUniquePtr<FAutoConsoleCommandWithWorld> ConnectDebugToolCommand;
#endif
	TUniquePtr<FRallyHereDebugToolKeyboardShortcuts> ShortcutHandler;
	FRHDTSpawnTool OnSpawnTool;
	FRHDTCleanupTool OnCleanupTool;
};

void FRallyHereDebugToolModule::StartupModule()
{
	FRHDTW_OutputLog::OutputLogHistory = MakeShareable(new RH_OutputLog::FOutputLogHistory);

	RegisterConsoleCommands();
}

void FRallyHereDebugToolModule::ShutdownModule()
{
	FRHDTW_OutputLog::OutputLogHistory.Reset();

#ifdef WITH_IMGUI_NETIMGUI
	ConnectDebugToolCommand.Reset();
#endif

	ToggleDebugToolCommand.Reset();
	ResetWindowsDebugToolCommand.Reset();
	ShortcutHandler.Reset();
}

void FRallyHereDebugToolModule::RegisterConsoleCommands()
{
	ToggleDebugToolCommand = MakeUnique<FAutoConsoleCommandWithWorld>(
		*URallyHereDebugToolSettings::strToggleDebugTool,
		TEXT("Toggle the Rally Here Debug UI On/Off"),
		FConsoleCommandWithWorldDelegate::CreateRaw(this, &FRallyHereDebugToolModule::ToggleDebugTool)
		);

	ResetWindowsDebugToolCommand = MakeUnique<FAutoConsoleCommandWithWorld>(
		*URallyHereDebugToolSettings::strResetWindowsDebugTool,
		TEXT("Reset the windows in the Rally Here Debug UI"),
		FConsoleCommandWithWorldDelegate::CreateRaw(this, &FRallyHereDebugToolModule::ResetWindowsDebugTool)
		); 

#ifdef WITH_IMGUI_NETIMGUI
	ConnectDebugToolCommand = MakeUnique<FAutoConsoleCommandWithWorld>(
		*URallyHereDebugToolSettings::strConnectDebugTool,
		TEXT("Connect the Rally Here Debug UI via NetImGui"),
		FConsoleCommandWithWorldDelegate::CreateRaw(this, &FRallyHereDebugToolModule::ConnectDebugTool)
	);
#endif

	ShortcutHandler = MakeUnique<FRallyHereDebugToolKeyboardShortcuts>();
}

void FRallyHereDebugToolModule::ToggleDebugTool(UWorld* InWorld)
{
	if (URallyHereDebugTool* pDebugToll = GetDebugTool(InWorld))
	{
		pDebugToll->ToggleUI();
	}
}

void FRallyHereDebugToolModule::ResetWindowsDebugTool(UWorld* InWorld)
{
	if (URallyHereDebugTool* pDebugToll = GetDebugTool(InWorld))
	{
		pDebugToll->ResetWindows();
	}
}

#ifdef WITH_IMGUI_NETIMGUI
void FRallyHereDebugToolModule::ConnectDebugTool(UWorld* InWorld)
{
	if (URallyHereDebugTool* pDebugTool = GetDebugTool(InWorld))
	{
		pDebugTool->ConnectNetImGui();
	}
}
#endif

URallyHereDebugTool* FRallyHereDebugToolModule::GetDebugTool(UWorld* InWorld) const
{
	if (InWorld != nullptr && InWorld->GetGameInstance() != nullptr)
	{
		return InWorld->GetGameInstance()->GetSubsystem<URallyHereDebugTool>();
	}
	return nullptr;
}

void FRallyHereDebugToolModule::UpdateImGuiInputState()
{
	bool bShouldImGuiAcceptInput = false;

	for (const FWorldContext& WorldContext : GEngine->GetWorldContexts())
	{
		auto World = WorldContext.World();
		URallyHereDebugTool* pDebugTool = GetDebugTool(World);
		if (pDebugTool != nullptr && pDebugTool->IsUIActive())
		{
			bShouldImGuiAcceptInput = true;
			break;
		}
	}

	const URallyHereDebugToolSettings* pDebugToolSettings = URallyHereDebugToolSettings::Get();
	if (pDebugToolSettings && pDebugToolSettings->bEnableInputWhenToggledOn)
	{
		FImGuiModule::Get().GetProperties().SetInputEnabled(bShouldImGuiAcceptInput);
		FImGuiModule::Get().GetProperties().SetGamepadNavigationEnabled(bShouldImGuiAcceptInput);
	}
}

IMPLEMENT_MODULE(FRallyHereDebugToolModule, RallyHereDebugTool);