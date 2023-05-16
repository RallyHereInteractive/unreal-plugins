// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RHDTW_Local.h"
#include "imgui.h"
#include "Engine/LocalPlayer.h"

FRHDTW_Local::FRHDTW_Local()
	: Super()
{
	OpenString.SetNumZeroed(256);
}

FRHDTW_Local::~FRHDTW_Local()
{
}

void FRHDTW_Local::Do()
{
	ImGui::InputText("##OpenString", OpenString.GetData(), OpenString.Num());
	ImGui::SameLine();
	if (ImGui::Button("Open"))
	{
		if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
		{
			PC->ConsoleCommand(FString(TEXT("OPEN ")) + UTF8_TO_TCHAR(OpenString.GetData()));
		}
	}

	if (ImGui::Button("Disconnect"))
	{
		if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
		{
			PC->ConsoleCommand(FString(TEXT("DISCONNECT")));
		}
	}

	ImGui::SameLine();

	if (ImGui::Button("Reconnect"))
	{
		if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
		{
			PC->ConsoleCommand(FString(TEXT("RECONNECT")));
		}
	}
}
