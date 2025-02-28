// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MMRGroupingMethod.h"
#include "MatchMakingProfile.h"
#include "MatchMakingRuleset.h"
#include "MatchMakingTemplate.generated.h"

/** @defgroup RHAPI_MatchMakingTemplate RallyHere API Model MatchMakingTemplate
 *  @{
 */

/**
 * @brief DEPRECATED Configuration about what rules must be satisfied to use this template, and what matchmaking profiles the ticket will be a part of
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchMakingTemplate : public FRHAPI_Model
{
	GENERATED_BODY()

	/**
	* @brief Fills this object with data from the passed in JSON
	*
	* @param [in] JsonValue Data from the API call.
	*
	* @return true if parsing of the JSON data was successful.
	*/
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

	/**
	* @brief Writes the data from this object into the specified JSON Writer stream
	*
	* @param [in] Writer JSON Writer stream to push .
	*/
	virtual void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

	/** @brief ID for this unique MatchMakingTemplate */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid MatchMakingTemplateId_Optional{  };
	/** @brief true if MatchMakingTemplateId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool MatchMakingTemplateId_IsSet{ false };
	/** @brief Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set */
	FGuid& GetMatchMakingTemplateId() { return MatchMakingTemplateId_Optional; }
	/** @brief Gets the value of MatchMakingTemplateId_Optional, regardless of it having been set */
	const FGuid& GetMatchMakingTemplateId() const { return MatchMakingTemplateId_Optional; }
	/** @brief Gets the value of MatchMakingTemplateId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FGuid& GetMatchMakingTemplateId(const FGuid& DefaultValue) const { if (MatchMakingTemplateId_IsSet) return MatchMakingTemplateId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of MatchMakingTemplateId_Optional and returns true if it has been set, otherwise returns false */
	bool GetMatchMakingTemplateId(FGuid& OutValue) const { if (MatchMakingTemplateId_IsSet) OutValue = MatchMakingTemplateId_Optional; return MatchMakingTemplateId_IsSet; }
	/** @brief Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr */
	FGuid* GetMatchMakingTemplateIdOrNull() { if (MatchMakingTemplateId_IsSet) return (&MatchMakingTemplateId_Optional); return nullptr; }
	/** @brief Returns a pointer to MatchMakingTemplateId_Optional, if it has been set, otherwise returns nullptr */
	const FGuid* GetMatchMakingTemplateIdOrNull() const { if (MatchMakingTemplateId_IsSet) return (&MatchMakingTemplateId_Optional); return nullptr; }
	/** @brief Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true */
	void SetMatchMakingTemplateId(const FGuid& NewValue) { MatchMakingTemplateId_Optional = NewValue; MatchMakingTemplateId_IsSet = true;  }
	/** @brief Sets the value of MatchMakingTemplateId_Optional and also sets MatchMakingTemplateId_IsSet to true using move semantics */
	void SetMatchMakingTemplateId(FGuid&& NewValue) { MatchMakingTemplateId_Optional = NewValue; MatchMakingTemplateId_IsSet = true;  }
	/** @brief Clears the value of MatchMakingTemplateId_Optional and sets MatchMakingTemplateId_IsSet to false */
	void ClearMatchMakingTemplateId() { MatchMakingTemplateId_IsSet = false;  }
	/** @brief Checks whether MatchMakingTemplateId_Optional has been set */
	bool IsMatchMakingTemplateIdSet() const { return MatchMakingTemplateId_IsSet; }

	/** @brief What method should be used to calculate a group's MMR based on the individual player's ranks */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_MMRGroupingMethod MmrGroupingMethod{  };
	/** @brief Gets the value of MmrGroupingMethod */
	ERHAPI_MMRGroupingMethod& GetMmrGroupingMethod() { return MmrGroupingMethod; }
	/** @brief Gets the value of MmrGroupingMethod */
	const ERHAPI_MMRGroupingMethod& GetMmrGroupingMethod() const { return MmrGroupingMethod; }
	/** @brief Sets the value of MmrGroupingMethod */
	void SetMmrGroupingMethod(const ERHAPI_MMRGroupingMethod& NewValue) { MmrGroupingMethod = NewValue;   }
	/** @brief Sets the value of MmrGroupingMethod using move semantics */
	void SetMmrGroupingMethod(ERHAPI_MMRGroupingMethod&& NewValue) { MmrGroupingMethod = NewValue;   }

	/** @brief A set of rules that determine whether or not this matchmaking config should be used. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_MatchMakingRuleset Ruleset_Optional{  };
	/** @brief true if Ruleset_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Ruleset_IsSet{ false };
	/** @brief Gets the value of Ruleset_Optional, regardless of it having been set */
	FRHAPI_MatchMakingRuleset& GetRuleset() { return Ruleset_Optional; }
	/** @brief Gets the value of Ruleset_Optional, regardless of it having been set */
	const FRHAPI_MatchMakingRuleset& GetRuleset() const { return Ruleset_Optional; }
	/** @brief Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_MatchMakingRuleset& GetRuleset(const FRHAPI_MatchMakingRuleset& DefaultValue) const { if (Ruleset_IsSet) return Ruleset_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false */
	bool GetRuleset(FRHAPI_MatchMakingRuleset& OutValue) const { if (Ruleset_IsSet) OutValue = Ruleset_Optional; return Ruleset_IsSet; }
	/** @brief Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_MatchMakingRuleset* GetRulesetOrNull() { if (Ruleset_IsSet) return (&Ruleset_Optional); return nullptr; }
	/** @brief Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_MatchMakingRuleset* GetRulesetOrNull() const { if (Ruleset_IsSet) return (&Ruleset_Optional); return nullptr; }
	/** @brief Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true */
	void SetRuleset(const FRHAPI_MatchMakingRuleset& NewValue) { Ruleset_Optional = NewValue; Ruleset_IsSet = true;  }
	/** @brief Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true using move semantics */
	void SetRuleset(FRHAPI_MatchMakingRuleset&& NewValue) { Ruleset_Optional = NewValue; Ruleset_IsSet = true;  }
	/** @brief Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false */
	void ClearRuleset() { Ruleset_IsSet = false;  }
	/** @brief Checks whether Ruleset_Optional has been set */
	bool IsRulesetSet() const { return Ruleset_IsSet; }

	/** @brief A list of which match making profiles are going to be created on the ticket */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_MatchMakingProfile> Profiles{  };
	/** @brief Gets the value of Profiles */
	TArray<FRHAPI_MatchMakingProfile>& GetProfiles() { return Profiles; }
	/** @brief Gets the value of Profiles */
	const TArray<FRHAPI_MatchMakingProfile>& GetProfiles() const { return Profiles; }
	/** @brief Sets the value of Profiles */
	void SetProfiles(const TArray<FRHAPI_MatchMakingProfile>& NewValue) { Profiles = NewValue;   }
	/** @brief Sets the value of Profiles using move semantics */
	void SetProfiles(TArray<FRHAPI_MatchMakingProfile>&& NewValue) { Profiles = NewValue;   }
};

/** @} */
