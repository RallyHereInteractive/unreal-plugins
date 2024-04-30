// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_JsonUtilities.h"

namespace RHJsonUtilities
{
	void DuplicateArray(const TArray<TSharedPtr<FJsonValue>>& Source, TArray<TSharedPtr<FJsonValue>>& Dest)
	{
		for (const TSharedPtr<FJsonValue>& Value : Source)
		{
			Dest.Add(Duplicate(Value));
		} 
	}

	TSharedPtr<FJsonValue> Duplicate(const TSharedPtr<FJsonValue>& Src)
	{
		switch (Src->Type)
		{
			case EJson::Boolean:
			{
				bool BoolValue;
				if (Src->TryGetBool(BoolValue))
				{
					return MakeShared<FJsonValueBoolean>(BoolValue);
				}
			}
			case EJson::Number:
			{
				double NumberValue;
				if (Src->TryGetNumber(NumberValue))
				{
					return MakeShared<FJsonValueNumber>(NumberValue);
				}
			}
			case EJson::String:
			{
				FString StringValue;
				if (Src->TryGetString(StringValue))
				{
					return MakeShared<FJsonValueString>(StringValue);
				}
			}
			case EJson::Object:
			{
				const TSharedPtr<FJsonObject>* ObjectValue;
				if (Src->TryGetObject(ObjectValue))
				{
					TSharedPtr<FJsonObject> NewObject = MakeShared<FJsonObject>();
					Duplicate(*ObjectValue, NewObject);
					return MakeShared<FJsonValueObject>(NewObject);
				}
			}
			case EJson::Array:
			{
				const TArray<TSharedPtr<FJsonValue>>* ArrayValue;
				if (Src->TryGetArray(ArrayValue))
				{
					TArray<TSharedPtr<FJsonValue>> NewArray;
					DuplicateArray(*ArrayValue, NewArray);

					return MakeShared<FJsonValueArray>(NewArray);
				}
			}
			case EJson::Null:
			{
				return MakeShared<FJsonValueNull>();
			}
		}

		return TSharedPtr<FJsonValue>();
	}

	void Duplicate(const TSharedPtr<const FJsonObject>& Source, const TSharedPtr<FJsonObject>& Dest)
	{
		if (Source && Dest)
		{
			for (const TPair<FString, TSharedPtr<FJsonValue>>& Pair : Source->Values)
			{
				Dest->SetField(Pair.Key, FJsonValue::Duplicate(Pair.Value));
			}
		}
	}

	void Duplicate(const TSharedPtr<FJsonObject>& Source, TSharedPtr<FJsonObject>& Dest)
	{
		Duplicate(ConstCastSharedPtr<const FJsonObject>(Source), Dest);
	}
}

