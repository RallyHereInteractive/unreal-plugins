// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CalculateRankConfig.generated.h"

/** @defgroup RHAPI_CalculateRankConfig RallyHere API Model CalculateRankConfig
 *  @{
 */

/**
 * @brief Config about how to recalculate ranks
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_CalculateRankConfig : public FRHAPI_Model
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

	/** @brief The maximum mu value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float MaxMu{  };
	/** @brief Gets the value of MaxMu */
	float& GetMaxMu() { return MaxMu; }
	/** @brief Gets the value of MaxMu */
	const float& GetMaxMu() const { return MaxMu; }
	/** @brief Sets the value of MaxMu */
	void SetMaxMu(const float& NewValue) { MaxMu = NewValue;   }
	/** @brief Sets the value of MaxMu using move semantics */
	void SetMaxMu(float&& NewValue) { MaxMu = NewValue;   }

	/** @brief The minimum mu value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float MinMu{  };
	/** @brief Gets the value of MinMu */
	float& GetMinMu() { return MinMu; }
	/** @brief Gets the value of MinMu */
	const float& GetMinMu() const { return MinMu; }
	/** @brief Sets the value of MinMu */
	void SetMinMu(const float& NewValue) { MinMu = NewValue;   }
	/** @brief Sets the value of MinMu using move semantics */
	void SetMinMu(float&& NewValue) { MinMu = NewValue;   }

	/** @brief The minimum sigma allowed. Any attempts to update sigma to be lower than this get clamped to the minimum */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float MinSigma{  };
	/** @brief Gets the value of MinSigma */
	float& GetMinSigma() { return MinSigma; }
	/** @brief Gets the value of MinSigma */
	const float& GetMinSigma() const { return MinSigma; }
	/** @brief Sets the value of MinSigma */
	void SetMinSigma(const float& NewValue) { MinSigma = NewValue;   }
	/** @brief Sets the value of MinSigma using move semantics */
	void SetMinSigma(float&& NewValue) { MinSigma = NewValue;   }

	/** @brief The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default sigma */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float Beta_Optional{  };
	/** @brief true if Beta_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Beta_IsSet{ false };
	/** @brief Gets the value of Beta_Optional, regardless of it having been set */
	float& GetBeta() { return Beta_Optional; }
	/** @brief Gets the value of Beta_Optional, regardless of it having been set */
	const float& GetBeta() const { return Beta_Optional; }
	/** @brief Gets the value of Beta_Optional, if it has been set, otherwise it returns DefaultValue */
	const float& GetBeta(const float& DefaultValue) const { if (Beta_IsSet) return Beta_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Beta_Optional and returns true if it has been set, otherwise returns false */
	bool GetBeta(float& OutValue) const { if (Beta_IsSet) OutValue = Beta_Optional; return Beta_IsSet; }
	/** @brief Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr */
	float* GetBetaOrNull() { if (Beta_IsSet) return (&Beta_Optional); return nullptr; }
	/** @brief Returns a pointer to Beta_Optional, if it has been set, otherwise returns nullptr */
	const float* GetBetaOrNull() const { if (Beta_IsSet) return (&Beta_Optional); return nullptr; }
	/** @brief Sets the value of Beta_Optional and also sets Beta_IsSet to true */
	void SetBeta(const float& NewValue) { Beta_Optional = NewValue; Beta_IsSet = true;  }
	/** @brief Sets the value of Beta_Optional and also sets Beta_IsSet to true using move semantics */
	void SetBeta(float&& NewValue) { Beta_Optional = NewValue; Beta_IsSet = true;  }
	/** @brief Clears the value of Beta_Optional and sets Beta_IsSet to false */
	void ClearBeta() { Beta_IsSet = false;  }
	/** @brief Checks whether Beta_Optional has been set */
	bool IsBetaSet() const { return Beta_IsSet; }

	/** @brief The default mu value for this rank id. Will be used when players do not have any rank history */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float DefaultMu{  };
	/** @brief Gets the value of DefaultMu */
	float& GetDefaultMu() { return DefaultMu; }
	/** @brief Gets the value of DefaultMu */
	const float& GetDefaultMu() const { return DefaultMu; }
	/** @brief Sets the value of DefaultMu */
	void SetDefaultMu(const float& NewValue) { DefaultMu = NewValue;   }
	/** @brief Sets the value of DefaultMu using move semantics */
	void SetDefaultMu(float&& NewValue) { DefaultMu = NewValue;   }

	/** @brief The default sigma for this rank id. Will be used when players do not have any rank history */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float DefaultSigma{  };
	/** @brief Gets the value of DefaultSigma */
	float& GetDefaultSigma() { return DefaultSigma; }
	/** @brief Gets the value of DefaultSigma */
	const float& GetDefaultSigma() const { return DefaultSigma; }
	/** @brief Sets the value of DefaultSigma */
	void SetDefaultSigma(const float& NewValue) { DefaultSigma = NewValue;   }
	/** @brief Sets the value of DefaultSigma using move semantics */
	void SetDefaultSigma(float&& NewValue) { DefaultSigma = NewValue;   }

	/** @brief The percent probability of a draw occuring in the game. Must be in [0, 1) */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float DrawProbability_Optional{  };
	/** @brief true if DrawProbability_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool DrawProbability_IsSet{ false };
	/** @brief Gets the value of DrawProbability_Optional, regardless of it having been set */
	float& GetDrawProbability() { return DrawProbability_Optional; }
	/** @brief Gets the value of DrawProbability_Optional, regardless of it having been set */
	const float& GetDrawProbability() const { return DrawProbability_Optional; }
	/** @brief Gets the value of DrawProbability_Optional, if it has been set, otherwise it returns DefaultValue */
	const float& GetDrawProbability(const float& DefaultValue) const { if (DrawProbability_IsSet) return DrawProbability_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of DrawProbability_Optional and returns true if it has been set, otherwise returns false */
	bool GetDrawProbability(float& OutValue) const { if (DrawProbability_IsSet) OutValue = DrawProbability_Optional; return DrawProbability_IsSet; }
	/** @brief Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr */
	float* GetDrawProbabilityOrNull() { if (DrawProbability_IsSet) return (&DrawProbability_Optional); return nullptr; }
	/** @brief Returns a pointer to DrawProbability_Optional, if it has been set, otherwise returns nullptr */
	const float* GetDrawProbabilityOrNull() const { if (DrawProbability_IsSet) return (&DrawProbability_Optional); return nullptr; }
	/** @brief Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true */
	void SetDrawProbability(const float& NewValue) { DrawProbability_Optional = NewValue; DrawProbability_IsSet = true;  }
	/** @brief Sets the value of DrawProbability_Optional and also sets DrawProbability_IsSet to true using move semantics */
	void SetDrawProbability(float&& NewValue) { DrawProbability_Optional = NewValue; DrawProbability_IsSet = true;  }
	/** @brief Clears the value of DrawProbability_Optional and sets DrawProbability_IsSet to false */
	void ClearDrawProbability() { DrawProbability_IsSet = false;  }
	/** @brief Checks whether DrawProbability_Optional has been set */
	bool IsDrawProbabilitySet() const { return DrawProbability_IsSet; }

	/** @brief Factor that determines how quickly a player's sigma is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_sigma * .01) */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float Tau_Optional{  };
	/** @brief true if Tau_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Tau_IsSet{ false };
	/** @brief Gets the value of Tau_Optional, regardless of it having been set */
	float& GetTau() { return Tau_Optional; }
	/** @brief Gets the value of Tau_Optional, regardless of it having been set */
	const float& GetTau() const { return Tau_Optional; }
	/** @brief Gets the value of Tau_Optional, if it has been set, otherwise it returns DefaultValue */
	const float& GetTau(const float& DefaultValue) const { if (Tau_IsSet) return Tau_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Tau_Optional and returns true if it has been set, otherwise returns false */
	bool GetTau(float& OutValue) const { if (Tau_IsSet) OutValue = Tau_Optional; return Tau_IsSet; }
	/** @brief Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr */
	float* GetTauOrNull() { if (Tau_IsSet) return (&Tau_Optional); return nullptr; }
	/** @brief Returns a pointer to Tau_Optional, if it has been set, otherwise returns nullptr */
	const float* GetTauOrNull() const { if (Tau_IsSet) return (&Tau_Optional); return nullptr; }
	/** @brief Sets the value of Tau_Optional and also sets Tau_IsSet to true */
	void SetTau(const float& NewValue) { Tau_Optional = NewValue; Tau_IsSet = true;  }
	/** @brief Sets the value of Tau_Optional and also sets Tau_IsSet to true using move semantics */
	void SetTau(float&& NewValue) { Tau_Optional = NewValue; Tau_IsSet = true;  }
	/** @brief Clears the value of Tau_Optional and sets Tau_IsSet to false */
	void ClearTau() { Tau_IsSet = false;  }
	/** @brief Checks whether Tau_Optional has been set */
	bool IsTauSet() const { return Tau_IsSet; }
};

/** @} */
