// Copyright 1998-2020 Hi-Rez Studios, Inc. All Rights Reserved.
#include "HotfixJsonToUnrealTranslator.h"
#include "Dom/JsonValue.h"

FHotfixJsonToUnrealTranslator::FHotfixJsonToUnrealTranslator(const TSharedPtr<FJsonObject>& InJsonObject)
    : Result(TEXT(""))
    , bIsValid(true)
{
    Parse(InJsonObject);
}

FHotfixJsonToUnrealTranslator::~FHotfixJsonToUnrealTranslator()
{

}

bool FHotfixJsonToUnrealTranslator::GetString(FString& OutString) const
{
	if (IsValid())
	{
		OutString = Result;
		return true;
	}

	return false;
}

void FHotfixJsonToUnrealTranslator::Parse(const TSharedPtr<FJsonObject>& InJsonObject)
{
    if (!InJsonObject.IsValid())
    {
        bIsValid = false;
        return;
    }

	for (const TPair<FString, TSharedPtr<FJsonValue>>& Pair : InJsonObject->Values)
	{
        if (!Pair.Value.IsValid() || Pair.Value->Type != EJson::Object)
        {
            bIsValid = false;
            return;
        }

        const TSharedPtr<FJsonObject>& AsObjectPtr = Pair.Value->AsObject();
		Result += FString::Printf(TEXT("[%s]\n"), *(Pair.Key));
		FString SectionProperties = ParseSection(AsObjectPtr);
        if (!IsValid())
        {
            return;
        }
        if (SectionProperties.Len() > 0)
        {
            Result += SectionProperties;
        }
	}
}

FString FHotfixJsonToUnrealTranslator::ParseSection(const TSharedPtr<FJsonObject>& InJsonObject)
{
	FString ReturnValue(TEXT(""));

    if (InJsonObject.IsValid())
    {
        for (const TPair<FString, TSharedPtr<FJsonValue>>& Pair : InJsonObject->Values)
        {
            if (Pair.Value.IsValid())
            {
                FString StrippedKey = Pair.Key;
                if (StrippedKey.StartsWith(TEXT("+"))
                    || StrippedKey.StartsWith(TEXT("-"))
                    || StrippedKey.StartsWith(TEXT("."))
                    || StrippedKey.StartsWith(TEXT("!")))
                {
                    int32 LastUnderScore = INDEX_NONE;
                    if (StrippedKey.FindLastChar(TEXT('_'), LastUnderScore))
                    {
                        StrippedKey.LeftInline(LastUnderScore);
                    }
                }

                switch (Pair.Value->Type)
                {
                case EJson::Boolean:
                    ReturnValue += FString::Printf(TEXT("%s=%s\n")
                        , *StrippedKey
                        , Pair.Value->AsBool() ? TEXT("True") : TEXT("False"));
                    break;
                case EJson::Number:
                    ReturnValue += FString::Printf(TEXT("%s=%f\n")
                        , *StrippedKey
                        , Pair.Value->AsNumber());
                    break;
                case EJson::String:
                    {
                        FString ValueString = Pair.Value->AsString();
                        ValueString = ValueString.ReplaceEscapedCharWithChar();
                        ReturnValue += FString::Printf(TEXT("%s=%s\n"), *StrippedKey, *ValueString);
                    }
                    break;
                default:
                    // Type is not supported
                    bIsValid = false;
                    return ReturnValue;
                }
            }
        }
    }

	return ReturnValue;
}

