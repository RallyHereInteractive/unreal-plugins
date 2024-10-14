// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"

#include "Templates/SharedPointer.h"
#include "Dom/JsonValue.h"
#include "Dom/JsonObject.h"
#include "Containers/UnrealString.h"


/**
 * @brief Utilities for working with Json objects, including bug fixes for engine functions
 */
namespace RHJsonUtilities
{
	/**
	 * @brief Duplicate an array of JsonValues.
	 */
	void DuplicateArray(const TArray<TSharedPtr<FJsonValue>>& Source, TArray<TSharedPtr<FJsonValue>>& Dest);
	/**
	 * @brief Duplicate a JsonValue.
	 */
	TSharedPtr<FJsonValue> Duplicate(const TSharedPtr<FJsonValue>& Src);
	/**
	 * @brief Duplicate a JsonObject.
	 */
	void Duplicate(const TSharedPtr<const FJsonObject>& Source, const TSharedPtr<FJsonObject>& Dest);
	/**
	 * @brief Duplicate a JsonObject.
	 */
	void Duplicate(const TSharedPtr<FJsonObject>& Source, TSharedPtr<FJsonObject>& Dest);

}

