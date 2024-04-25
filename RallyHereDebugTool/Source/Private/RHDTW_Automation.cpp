// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RallyHereIntegrationModule.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"
#include "Engine/World.h"

#include "RHDTW_Automation.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "IAutomationControllerModule.h"
#include "IAutomationControllerManager.h"

FRHDTW_Automation::FRHDTW_Automation()
	: Super()
{
	// Load the automation controller
	IAutomationControllerModule* AutomationControllerModule = &FModuleManager::LoadModuleChecked<IAutomationControllerModule>("AutomationController");
	AutomationController = AutomationControllerModule->GetAutomationController();

	AutomationController->Init();
}

FRHDTW_Automation::~FRHDTW_Automation()
{
}

void FRHDTW_Automation::Do()
{

}

bool FRHDTW_Automation::AreTestsRunning() const
{
	return AutomationController->GetTestState() == EAutomationControllerModuleState::Running;
}

#endif
