// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Dom/JsonObject.h"

class FHotfixJsonToUnrealTranslator
{
public:
	FHotfixJsonToUnrealTranslator(const TSharedPtr<FJsonObject>& InJsonObject);
	~FHotfixJsonToUnrealTranslator();

	bool IsValid() const { return bIsValid; }
	bool GetString(FString& OutString) const;
	const FString& GetString() const { return Result; }

private:
	void Parse(const TSharedPtr<FJsonObject>& InJsonObject);
	FString ParseSection(const TSharedPtr<FJsonObject>& InJsonObject);

	FString Result;
	bool bIsValid;
};