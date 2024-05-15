// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LineOfSight/Public/LineOfSightComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "ProceduralMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineOfSightComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	LINEOFSIGHT_API UClass* Z_Construct_UClass_ULineOfSightComponent();
	LINEOFSIGHT_API UClass* Z_Construct_UClass_ULineOfSightComponent_NoRegister();
	LINEOFSIGHT_API UEnum* Z_Construct_UEnum_LineOfSight_EAxisTypeComp();
	LINEOFSIGHT_API UEnum* Z_Construct_UEnum_LineOfSight_EFrameTracingSight();
	LINEOFSIGHT_API UEnum* Z_Construct_UEnum_LineOfSight_ETypeArc();
	LINEOFSIGHT_API UEnum* Z_Construct_UEnum_LineOfSight_ETypeRotation();
	LINEOFSIGHT_API UEnum* Z_Construct_UEnum_LineOfSight_ETypeTriangle();
	LINEOFSIGHT_API UFunction* Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature();
	LINEOFSIGHT_API UFunction* Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature();
	LINEOFSIGHT_API UFunction* Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature();
	LINEOFSIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FResultLineTrace();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	UPackage* Z_Construct_UPackage__Script_LineOfSight();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeTriangle;
	static UEnum* ETypeTriangle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETypeTriangle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETypeTriangle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LineOfSight_ETypeTriangle, (UObject*)Z_Construct_UPackage__Script_LineOfSight(), TEXT("ETypeTriangle"));
		}
		return Z_Registration_Info_UEnum_ETypeTriangle.OuterSingleton;
	}
	template<> LINEOFSIGHT_API UEnum* StaticEnum<ETypeTriangle>()
	{
		return ETypeTriangle_StaticEnum();
	}
	struct Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics::Enumerators[] = {
		{ "ETypeTriangle::E_LR", (int64)ETypeTriangle::E_LR },
		{ "ETypeTriangle::E_RL", (int64)ETypeTriangle::E_RL },
		{ "ETypeTriangle::E_LR_RL", (int64)ETypeTriangle::E_LR_RL },
		{ "ETypeTriangle::E_RL_LR", (int64)ETypeTriangle::E_RL_LR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics::Enum_MetaDataParams[] = {
		{ "E_LR.DisplayName", "Left -> Right" },
		{ "E_LR.Name", "ETypeTriangle::E_LR" },
		{ "E_LR_RL.DisplayName", "Left -> Right | Right -> Left (Beta)" },
		{ "E_LR_RL.Name", "ETypeTriangle::E_LR_RL" },
		{ "E_RL.DisplayName", "Right -> Left" },
		{ "E_RL.Name", "ETypeTriangle::E_RL" },
		{ "E_RL_LR.DisplayName", "Right -> Left | Left -> Right (Beta)" },
		{ "E_RL_LR.Name", "ETypeTriangle::E_RL_LR" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LineOfSight,
		nullptr,
		"ETypeTriangle",
		"ETypeTriangle",
		Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LineOfSight_ETypeTriangle()
	{
		if (!Z_Registration_Info_UEnum_ETypeTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeTriangle.InnerSingleton, Z_Construct_UEnum_LineOfSight_ETypeTriangle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETypeTriangle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeArc;
	static UEnum* ETypeArc_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETypeArc.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETypeArc.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LineOfSight_ETypeArc, (UObject*)Z_Construct_UPackage__Script_LineOfSight(), TEXT("ETypeArc"));
		}
		return Z_Registration_Info_UEnum_ETypeArc.OuterSingleton;
	}
	template<> LINEOFSIGHT_API UEnum* StaticEnum<ETypeArc>()
	{
		return ETypeArc_StaticEnum();
	}
	struct Z_Construct_UEnum_LineOfSight_ETypeArc_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LineOfSight_ETypeArc_Statics::Enumerators[] = {
		{ "ETypeArc::Arc_VectorLenght", (int64)ETypeArc::Arc_VectorLenght },
		{ "ETypeArc::ArcVectorLenghtFlat", (int64)ETypeArc::ArcVectorLenghtFlat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LineOfSight_ETypeArc_Statics::Enum_MetaDataParams[] = {
		{ "Arc_VectorLenght.DisplayName", "Arc" },
		{ "Arc_VectorLenght.Name", "ETypeArc::Arc_VectorLenght" },
		{ "ArcVectorLenghtFlat.DisplayName", "Line" },
		{ "ArcVectorLenghtFlat.Name", "ETypeArc::ArcVectorLenghtFlat" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LineOfSight_ETypeArc_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LineOfSight,
		nullptr,
		"ETypeArc",
		"ETypeArc",
		Z_Construct_UEnum_LineOfSight_ETypeArc_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_ETypeArc_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_ETypeArc_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LineOfSight_ETypeArc_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LineOfSight_ETypeArc()
	{
		if (!Z_Registration_Info_UEnum_ETypeArc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeArc.InnerSingleton, Z_Construct_UEnum_LineOfSight_ETypeArc_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETypeArc.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxisTypeComp;
	static UEnum* EAxisTypeComp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxisTypeComp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxisTypeComp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LineOfSight_EAxisTypeComp, (UObject*)Z_Construct_UPackage__Script_LineOfSight(), TEXT("EAxisTypeComp"));
		}
		return Z_Registration_Info_UEnum_EAxisTypeComp.OuterSingleton;
	}
	template<> LINEOFSIGHT_API UEnum* StaticEnum<EAxisTypeComp>()
	{
		return EAxisTypeComp_StaticEnum();
	}
	struct Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics::Enumerators[] = {
		{ "EAxisTypeComp::Z", (int64)EAxisTypeComp::Z },
		{ "EAxisTypeComp::Y", (int64)EAxisTypeComp::Y },
		{ "EAxisTypeComp::X", (int64)EAxisTypeComp::X },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "X.Name", "EAxisTypeComp::X" },
		{ "Y.Name", "EAxisTypeComp::Y" },
		{ "Z.Name", "EAxisTypeComp::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LineOfSight,
		nullptr,
		"EAxisTypeComp",
		"EAxisTypeComp",
		Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LineOfSight_EAxisTypeComp()
	{
		if (!Z_Registration_Info_UEnum_EAxisTypeComp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxisTypeComp.InnerSingleton, Z_Construct_UEnum_LineOfSight_EAxisTypeComp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxisTypeComp.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeRotation;
	static UEnum* ETypeRotation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETypeRotation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETypeRotation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LineOfSight_ETypeRotation, (UObject*)Z_Construct_UPackage__Script_LineOfSight(), TEXT("ETypeRotation"));
		}
		return Z_Registration_Info_UEnum_ETypeRotation.OuterSingleton;
	}
	template<> LINEOFSIGHT_API UEnum* StaticEnum<ETypeRotation>()
	{
		return ETypeRotation_StaticEnum();
	}
	struct Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics::Enumerators[] = {
		{ "ETypeRotation::Relative_Rotation", (int64)ETypeRotation::Relative_Rotation },
		{ "ETypeRotation::World_Rotation", (int64)ETypeRotation::World_Rotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "Relative_Rotation.DisplayName", "Relative_Rotation (Gimbal_Lock)" },
		{ "Relative_Rotation.Name", "ETypeRotation::Relative_Rotation" },
		{ "World_Rotation.DisplayName", "World Rotation (No Gimbal_Lock for 1 or 2 axes)" },
		{ "World_Rotation.Name", "ETypeRotation::World_Rotation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LineOfSight,
		nullptr,
		"ETypeRotation",
		"ETypeRotation",
		Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LineOfSight_ETypeRotation()
	{
		if (!Z_Registration_Info_UEnum_ETypeRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeRotation.InnerSingleton, Z_Construct_UEnum_LineOfSight_ETypeRotation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETypeRotation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFrameTracingSight;
	static UEnum* EFrameTracingSight_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFrameTracingSight.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFrameTracingSight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LineOfSight_EFrameTracingSight, (UObject*)Z_Construct_UPackage__Script_LineOfSight(), TEXT("EFrameTracingSight"));
		}
		return Z_Registration_Info_UEnum_EFrameTracingSight.OuterSingleton;
	}
	template<> LINEOFSIGHT_API UEnum* StaticEnum<EFrameTracingSight>()
	{
		return EFrameTracingSight_StaticEnum();
	}
	struct Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics::Enumerators[] = {
		{ "EFrameTracingSight::EveryTick", (int64)EFrameTracingSight::EveryTick },
		{ "EFrameTracingSight::EvenNumber", (int64)EFrameTracingSight::EvenNumber },
		{ "EFrameTracingSight::OddNumber", (int64)EFrameTracingSight::OddNumber },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics::Enum_MetaDataParams[] = {
		{ "EvenNumber.DisplayName", "Even number of frames" },
		{ "EvenNumber.Name", "EFrameTracingSight::EvenNumber" },
		{ "EveryTick.DisplayName", "Every Tick" },
		{ "EveryTick.Name", "EFrameTracingSight::EveryTick" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "OddNumber.DisplayName", "Not Even Number of Frames" },
		{ "OddNumber.Name", "EFrameTracingSight::OddNumber" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LineOfSight,
		nullptr,
		"EFrameTracingSight",
		"EFrameTracingSight",
		Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LineOfSight_EFrameTracingSight()
	{
		if (!Z_Registration_Info_UEnum_EFrameTracingSight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFrameTracingSight.InnerSingleton, Z_Construct_UEnum_LineOfSight_EFrameTracingSight_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFrameTracingSight.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResultLineTrace;
class UScriptStruct* FResultLineTrace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResultLineTrace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResultLineTrace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResultLineTrace, (UObject*)Z_Construct_UPackage__Script_LineOfSight(), TEXT("ResultLineTrace"));
	}
	return Z_Registration_Info_UScriptStruct_ResultLineTrace.OuterSingleton;
}
template<> LINEOFSIGHT_API UScriptStruct* StaticStruct<FResultLineTrace>()
{
	return FResultLineTrace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResultLineTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockHit_MetaData[];
#endif
		static void NewProp_BlockHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BlockHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultLineTrace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResultLineTrace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_BlockHit_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_BlockHit_SetBit(void* Obj)
	{
		((FResultLineTrace*)Obj)->BlockHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_BlockHit = { "BlockHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FResultLineTrace), &Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_BlockHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_BlockHit_MetaData), Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_BlockHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResultLineTrace, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Actor_MetaData), Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResultLineTrace, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Component_MetaData), Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Component_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResultLineTrace, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResultLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_BlockHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResultLineTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LineOfSight,
		nullptr,
		&NewStructOps,
		"ResultLineTrace",
		Z_Construct_UScriptStruct_FResultLineTrace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultLineTrace_Statics::PropPointers),
		sizeof(FResultLineTrace),
		alignof(FResultLineTrace),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultLineTrace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResultLineTrace_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultLineTrace_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FResultLineTrace()
	{
		if (!Z_Registration_Info_UScriptStruct_ResultLineTrace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResultLineTrace.InnerSingleton, Z_Construct_UScriptStruct_FResultLineTrace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResultLineTrace.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics
	{
		struct _Script_LineOfSight_eventHitStart_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LineOfSight_eventHitStart_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::NewProp_Hit_MetaData), Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LineOfSight, nullptr, "HitStart__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::_Script_LineOfSight_eventHitStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::_Script_LineOfSight_eventHitStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHitStart_DelegateWrapper(const FMulticastScriptDelegate& HitStart, FHitResult const& Hit)
{
	struct _Script_LineOfSight_eventHitStart_Parms
	{
		FHitResult Hit;
	};
	_Script_LineOfSight_eventHitStart_Parms Parms;
	Parms.Hit=Hit;
	HitStart.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics
	{
		struct _Script_LineOfSight_eventHitEnd_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LineOfSight_eventHitEnd_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::NewProp_Hit_MetaData), Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LineOfSight, nullptr, "HitEnd__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::_Script_LineOfSight_eventHitEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::_Script_LineOfSight_eventHitEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHitEnd_DelegateWrapper(const FMulticastScriptDelegate& HitEnd, FHitResult const& Hit)
{
	struct _Script_LineOfSight_eventHitEnd_Parms
	{
		FHitResult Hit;
	};
	_Script_LineOfSight_eventHitEnd_Parms Parms;
	Parms.Hit=Hit;
	HitEnd.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LineOfSight, nullptr, "RotateToAngleEnd__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRotateToAngleEnd_DelegateWrapper(const FMulticastScriptDelegate& RotateToAngleEnd)
{
	RotateToAngleEnd.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ULineOfSightComponent::execTest1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfLines);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Test1(Z_Param_NumberOfLines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetOverlappedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHitResult>*)Z_Param__Result=P_THIS->GetOverlappedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetNormals)
	{
		P_GET_STRUCT(FVector,Z_Param_Normals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNormals(Z_Param_Normals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetGeometryType)
	{
		P_GET_ENUM(ETypeArc,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGeometryType(ETypeArc(Z_Param_NewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execFindAngleRotate)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->FindAngleRotate(Z_Param_Out_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStopAllRotate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllRotate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStopRotateInRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRotateInRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStopRotateToAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRotateToAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartRotateToActor)
	{
		P_GET_ENUM(EAxisTypeComp,Z_Param_Axis);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRotateToActor(EAxisTypeComp(Z_Param_Axis),Z_Param_Actor,Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartRotateToAngleAxis)
	{
		P_GET_ENUM(EAxisTypeComp,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_ENUM(ETypeRotation,Z_Param_TypeRotation);
		P_GET_UBOOL(Z_Param_AddToCurrent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRotateToAngleAxis(EAxisTypeComp(Z_Param_Axis),Z_Param_Angle,Z_Param_Speed,ETypeRotation(Z_Param_TypeRotation),Z_Param_AddToCurrent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartRotateInRangeAxis)
	{
		P_GET_ENUM(EAxisTypeComp,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_ENUM(ETypeRotation,Z_Param_TypeRotation);
		P_GET_UBOOL(Z_Param_NegativeToPositive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRotateInRangeAxis(EAxisTypeComp(Z_Param_Axis),Z_Param_Angle,Z_Param_Speed,ETypeRotation(Z_Param_TypeRotation),Z_Param_NegativeToPositive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetTolerance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTolerance(Z_Param_NewTolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execLineOfSightIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LineOfSightIsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execMeshIsBuilt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MeshIsBuilt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetVisibilityOfMesh)
	{
		P_GET_UBOOL(Z_Param_NewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfMesh(Z_Param_NewVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetTickEnable)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickEnable(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStopBuildMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBuildMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartBuildMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartBuildMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStopLineTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLineTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execZStopCloneTo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZStopCloneTo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execZStartCloneTo)
	{
		P_GET_OBJECT(ULineOfSightComponent,Z_Param_OtherLineOfSightComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZStartCloneTo(Z_Param_OtherLineOfSightComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartOAEFlat)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfLines);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHitResult>*)Z_Param__Result=P_THIS->StartOAEFlat(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_NumberOfLines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartOAEArc)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAngle1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAngle2);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfLines);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHitResult>*)Z_Param__Result=P_THIS->StartOAEArc(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_InRadius1,Z_Param_InRadius2,Z_Param_InAngle1,Z_Param_InAngle2,Z_Param_NumberOfLines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execIsPauseBuildMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPauseBuildMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execIsPauseTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPauseTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetPauseBuildMesh)
	{
		P_GET_UBOOL(Z_Param_Pause);
		P_GET_UBOOL(Z_Param_ChangeVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPauseBuildMesh(Z_Param_Pause,Z_Param_ChangeVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetPauseTrace)
	{
		P_GET_UBOOL(Z_Param_Pause);
		P_GET_UBOOL(Z_Param_RunEndOverlap);
		P_GET_UBOOL(Z_Param_EmptyOverlapArray);
		P_GET_UBOOL(Z_Param_ChangeVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPauseTrace(Z_Param_Pause,Z_Param_RunEndOverlap,Z_Param_EmptyOverlapArray,Z_Param_ChangeVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartLineTrace)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfLines);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLineTrace(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_NumberOfLines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetIgnoreSelf)
	{
		P_GET_UBOOL(Z_Param_NewValueIgnoreSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreSelf(Z_Param_NewValueIgnoreSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execClearActorsToIgnore)
	{
		P_GET_UBOOL(Z_Param_NewIgnoreSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActorsToIgnore(Z_Param_NewIgnoreSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execAddActorsToIgnore)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorsToIgnore(Z_Param_Out_ActorsToIgnore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execAddIgnoredActor)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_ActorToIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIgnoredActor(Z_Param_Out_ActorToIgnore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetTraceComplex)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceComplex(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetTraceChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewTraceChanne);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceChannel(ETraceTypeQuery(Z_Param_NewTraceChanne));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetVertexArrayLocalPositionNoRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertexArrayLocalPositionNoRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetVertexArrayWorldPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertexArrayWorldPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetVertexArrayLocalPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertexArrayLocalPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetBeginAndEndOverlapEvent)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeginAndEndOverlapEvent(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetBeginAndEndOverlapEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetBeginAndEndOverlapEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStopInterpRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopInterpRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartInterpRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInterpRadius(Z_Param_NewRadius1,Z_Param_NewRadius2,Z_Param_Speed1,Z_Param_Speed2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStopInterpAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopInterpAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execStartInterpAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngle1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngle2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInterpAngle(Z_Param_NewAngle1,Z_Param_NewAngle2,Z_Param_Speed1,Z_Param_Speed2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetFrameTracing)
	{
		P_GET_ENUM(EFrameTracingSight,Z_Param_NewFrameTracing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameTracing(EFrameTracingSight(Z_Param_NewFrameTracing));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetRadius2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetRadius1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetRadius2)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius2(Z_Param_NewRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetRadius1)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius1(Z_Param_NewRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetAngle2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAngle2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execGetAngle1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAngle1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetAngle2)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngle2(Z_Param_NewAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULineOfSightComponent::execSetAngle1)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngle1(Z_Param_NewAngle);
		P_NATIVE_END;
	}
	void ULineOfSightComponent::StaticRegisterNativesULineOfSightComponent()
	{
		UClass* Class = ULineOfSightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorsToIgnore", &ULineOfSightComponent::execAddActorsToIgnore },
			{ "AddIgnoredActor", &ULineOfSightComponent::execAddIgnoredActor },
			{ "ClearActorsToIgnore", &ULineOfSightComponent::execClearActorsToIgnore },
			{ "FindAngleRotate", &ULineOfSightComponent::execFindAngleRotate },
			{ "GetAngle1", &ULineOfSightComponent::execGetAngle1 },
			{ "GetAngle2", &ULineOfSightComponent::execGetAngle2 },
			{ "GetBeginAndEndOverlapEvent", &ULineOfSightComponent::execGetBeginAndEndOverlapEvent },
			{ "GetOverlappedActors", &ULineOfSightComponent::execGetOverlappedActors },
			{ "GetRadius1", &ULineOfSightComponent::execGetRadius1 },
			{ "GetRadius2", &ULineOfSightComponent::execGetRadius2 },
			{ "GetVertexArrayLocalPosition", &ULineOfSightComponent::execGetVertexArrayLocalPosition },
			{ "GetVertexArrayLocalPositionNoRotation", &ULineOfSightComponent::execGetVertexArrayLocalPositionNoRotation },
			{ "GetVertexArrayWorldPosition", &ULineOfSightComponent::execGetVertexArrayWorldPosition },
			{ "IsPauseBuildMesh", &ULineOfSightComponent::execIsPauseBuildMesh },
			{ "IsPauseTrace", &ULineOfSightComponent::execIsPauseTrace },
			{ "LineOfSightIsActive", &ULineOfSightComponent::execLineOfSightIsActive },
			{ "MeshIsBuilt", &ULineOfSightComponent::execMeshIsBuilt },
			{ "SetAngle1", &ULineOfSightComponent::execSetAngle1 },
			{ "SetAngle2", &ULineOfSightComponent::execSetAngle2 },
			{ "SetBeginAndEndOverlapEvent", &ULineOfSightComponent::execSetBeginAndEndOverlapEvent },
			{ "SetFrameTracing", &ULineOfSightComponent::execSetFrameTracing },
			{ "SetGeometryType", &ULineOfSightComponent::execSetGeometryType },
			{ "SetIgnoreSelf", &ULineOfSightComponent::execSetIgnoreSelf },
			{ "SetNormals", &ULineOfSightComponent::execSetNormals },
			{ "SetPauseBuildMesh", &ULineOfSightComponent::execSetPauseBuildMesh },
			{ "SetPauseTrace", &ULineOfSightComponent::execSetPauseTrace },
			{ "SetRadius1", &ULineOfSightComponent::execSetRadius1 },
			{ "SetRadius2", &ULineOfSightComponent::execSetRadius2 },
			{ "SetTickEnable", &ULineOfSightComponent::execSetTickEnable },
			{ "SetTolerance", &ULineOfSightComponent::execSetTolerance },
			{ "SetTraceChannel", &ULineOfSightComponent::execSetTraceChannel },
			{ "SetTraceComplex", &ULineOfSightComponent::execSetTraceComplex },
			{ "SetVisibilityOfMesh", &ULineOfSightComponent::execSetVisibilityOfMesh },
			{ "StartBuildMesh", &ULineOfSightComponent::execStartBuildMesh },
			{ "StartInterpAngle", &ULineOfSightComponent::execStartInterpAngle },
			{ "StartInterpRadius", &ULineOfSightComponent::execStartInterpRadius },
			{ "StartLineTrace", &ULineOfSightComponent::execStartLineTrace },
			{ "StartOAEArc", &ULineOfSightComponent::execStartOAEArc },
			{ "StartOAEFlat", &ULineOfSightComponent::execStartOAEFlat },
			{ "StartRotateInRangeAxis", &ULineOfSightComponent::execStartRotateInRangeAxis },
			{ "StartRotateToActor", &ULineOfSightComponent::execStartRotateToActor },
			{ "StartRotateToAngleAxis", &ULineOfSightComponent::execStartRotateToAngleAxis },
			{ "StopAllRotate", &ULineOfSightComponent::execStopAllRotate },
			{ "StopBuildMesh", &ULineOfSightComponent::execStopBuildMesh },
			{ "StopInterpAngle", &ULineOfSightComponent::execStopInterpAngle },
			{ "StopInterpRadius", &ULineOfSightComponent::execStopInterpRadius },
			{ "StopLineTrace", &ULineOfSightComponent::execStopLineTrace },
			{ "StopRotateInRange", &ULineOfSightComponent::execStopRotateInRange },
			{ "StopRotateToAngle", &ULineOfSightComponent::execStopRotateToAngle },
			{ "Test1", &ULineOfSightComponent::execTest1 },
			{ "ZStartCloneTo", &ULineOfSightComponent::execZStartCloneTo },
			{ "ZStopCloneTo", &ULineOfSightComponent::execZStopCloneTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics
	{
		struct LineOfSightComponent_eventAddActorsToIgnore_Parms
		{
			TArray<AActor*> ActorsToIgnore;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventAddActorsToIgnore_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::NewProp_ActorsToIgnore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* It is not recommended to use this function. Change Trace Responces in Collision settings instead */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "It is not recommended to use this function. Change Trace Responces in Collision settings instead" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "AddActorsToIgnore", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::LineOfSightComponent_eventAddActorsToIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::LineOfSightComponent_eventAddActorsToIgnore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics
	{
		struct LineOfSightComponent_eventAddIgnoredActor_Parms
		{
			const AActor* ActorToIgnore;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::NewProp_ActorToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::NewProp_ActorToIgnore = { "ActorToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventAddIgnoredActor_Parms, ActorToIgnore), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::NewProp_ActorToIgnore_MetaData), Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::NewProp_ActorToIgnore_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::NewProp_ActorToIgnore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* It is not recommended to use this function. Change Trace Responces in Collision settings instead */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "It is not recommended to use this function. Change Trace Responces in Collision settings instead" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "AddIgnoredActor", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::LineOfSightComponent_eventAddIgnoredActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::LineOfSightComponent_eventAddIgnoredActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics
	{
		struct LineOfSightComponent_eventClearActorsToIgnore_Parms
		{
			bool NewIgnoreSelf;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewIgnoreSelf_MetaData[];
#endif
		static void NewProp_NewIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewIgnoreSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::NewProp_NewIgnoreSelf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::NewProp_NewIgnoreSelf_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventClearActorsToIgnore_Parms*)Obj)->NewIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::NewProp_NewIgnoreSelf = { "NewIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventClearActorsToIgnore_Parms), &Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::NewProp_NewIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::NewProp_NewIgnoreSelf_MetaData), Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::NewProp_NewIgnoreSelf_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::NewProp_NewIgnoreSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "CPP_Default_NewIgnoreSelf", "true" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "ClearActorsToIgnore", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::LineOfSightComponent_eventClearActorsToIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::LineOfSightComponent_eventClearActorsToIgnore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics
	{
		struct LineOfSightComponent_eventFindAngleRotate_Parms
		{
			AActor* Actor;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventFindAngleRotate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventFindAngleRotate_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Returns the corner to the target. Same as FindLookAtRotation. Works correctly for the Z axis. */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Returns the corner to the target. Same as FindLookAtRotation. Works correctly for the Z axis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "FindAngleRotate", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::LineOfSightComponent_eventFindAngleRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::LineOfSightComponent_eventFindAngleRotate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics
	{
		struct LineOfSightComponent_eventGetAngle1_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetAngle1_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetAngle1", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::LineOfSightComponent_eventGetAngle1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::LineOfSightComponent_eventGetAngle1_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetAngle1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetAngle1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics
	{
		struct LineOfSightComponent_eventGetAngle2_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetAngle2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetAngle2", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::LineOfSightComponent_eventGetAngle2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::LineOfSightComponent_eventGetAngle2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetAngle2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetAngle2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics
	{
		struct LineOfSightComponent_eventGetBeginAndEndOverlapEvent_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetBeginAndEndOverlapEvent_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetBeginAndEndOverlapEvent", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::LineOfSightComponent_eventGetBeginAndEndOverlapEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::LineOfSightComponent_eventGetBeginAndEndOverlapEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics
	{
		struct LineOfSightComponent_eventGetOverlappedActors_Parms
		{
			TArray<FHitResult> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetOverlappedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetOverlappedActors", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::LineOfSightComponent_eventGetOverlappedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::LineOfSightComponent_eventGetOverlappedActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics
	{
		struct LineOfSightComponent_eventGetRadius1_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetRadius1_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetRadius1", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::LineOfSightComponent_eventGetRadius1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::LineOfSightComponent_eventGetRadius1_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetRadius1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetRadius1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics
	{
		struct LineOfSightComponent_eventGetRadius2_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetRadius2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetRadius2", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::LineOfSightComponent_eventGetRadius2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::LineOfSightComponent_eventGetRadius2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetRadius2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetRadius2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics
	{
		struct LineOfSightComponent_eventGetVertexArrayLocalPosition_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetVertexArrayLocalPosition_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetVertexArrayLocalPosition", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::LineOfSightComponent_eventGetVertexArrayLocalPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::LineOfSightComponent_eventGetVertexArrayLocalPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics
	{
		struct LineOfSightComponent_eventGetVertexArrayLocalPositionNoRotation_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetVertexArrayLocalPositionNoRotation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetVertexArrayLocalPositionNoRotation", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::LineOfSightComponent_eventGetVertexArrayLocalPositionNoRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::LineOfSightComponent_eventGetVertexArrayLocalPositionNoRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics
	{
		struct LineOfSightComponent_eventGetVertexArrayWorldPosition_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventGetVertexArrayWorldPosition_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "GetVertexArrayWorldPosition", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::LineOfSightComponent_eventGetVertexArrayWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::LineOfSightComponent_eventGetVertexArrayWorldPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics
	{
		struct LineOfSightComponent_eventIsPauseBuildMesh_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventIsPauseBuildMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventIsPauseBuildMesh_Parms), &Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "IsPauseBuildMesh", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::LineOfSightComponent_eventIsPauseBuildMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::LineOfSightComponent_eventIsPauseBuildMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics
	{
		struct LineOfSightComponent_eventIsPauseTrace_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventIsPauseTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventIsPauseTrace_Parms), &Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "IsPauseTrace", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::LineOfSightComponent_eventIsPauseTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::LineOfSightComponent_eventIsPauseTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics
	{
		struct LineOfSightComponent_eventLineOfSightIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventLineOfSightIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventLineOfSightIsActive_Parms), &Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "LineOfSightIsActive", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::LineOfSightComponent_eventLineOfSightIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::LineOfSightComponent_eventLineOfSightIsActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics
	{
		struct LineOfSightComponent_eventMeshIsBuilt_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventMeshIsBuilt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventMeshIsBuilt_Parms), &Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Returns true if there was a call to StartBuildMesh(). This function is not equivalent to IsPauseBuildMesh() and SetPauseBuildMesh(). */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Returns true if there was a call to StartBuildMesh(). This function is not equivalent to IsPauseBuildMesh() and SetPauseBuildMesh()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "MeshIsBuilt", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::LineOfSightComponent_eventMeshIsBuilt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::LineOfSightComponent_eventMeshIsBuilt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics
	{
		struct LineOfSightComponent_eventSetAngle1_Parms
		{
			float NewAngle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::NewProp_NewAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::NewProp_NewAngle = { "NewAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetAngle1_Parms, NewAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::NewProp_NewAngle_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::NewProp_NewAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::NewProp_NewAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetAngle1", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::LineOfSightComponent_eventSetAngle1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::LineOfSightComponent_eventSetAngle1_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetAngle1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetAngle1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics
	{
		struct LineOfSightComponent_eventSetAngle2_Parms
		{
			float NewAngle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::NewProp_NewAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::NewProp_NewAngle = { "NewAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetAngle2_Parms, NewAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::NewProp_NewAngle_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::NewProp_NewAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::NewProp_NewAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetAngle2", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::LineOfSightComponent_eventSetAngle2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::LineOfSightComponent_eventSetAngle2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetAngle2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetAngle2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics
	{
		struct LineOfSightComponent_eventSetBeginAndEndOverlapEvent_Parms
		{
			bool NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetBeginAndEndOverlapEvent_Parms*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetBeginAndEndOverlapEvent_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::NewProp_NewValue_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::NewProp_NewValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetBeginAndEndOverlapEvent", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::LineOfSightComponent_eventSetBeginAndEndOverlapEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::LineOfSightComponent_eventSetBeginAndEndOverlapEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics
	{
		struct LineOfSightComponent_eventSetFrameTracing_Parms
		{
			EFrameTracingSight NewFrameTracing;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewFrameTracing_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewFrameTracing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::NewProp_NewFrameTracing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::NewProp_NewFrameTracing = { "NewFrameTracing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetFrameTracing_Parms, NewFrameTracing), Z_Construct_UEnum_LineOfSight_EFrameTracingSight, METADATA_PARAMS(0, nullptr) }; // 3228495972
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::NewProp_NewFrameTracing_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::NewProp_NewFrameTracing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetFrameTracing", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::LineOfSightComponent_eventSetFrameTracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::LineOfSightComponent_eventSetFrameTracing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics
	{
		struct LineOfSightComponent_eventSetGeometryType_Parms
		{
			ETypeArc NewType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::NewProp_NewType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetGeometryType_Parms, NewType), Z_Construct_UEnum_LineOfSight_ETypeArc, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::NewProp_NewType_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::NewProp_NewType_MetaData) }; // 3372663358
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::NewProp_NewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::NewProp_NewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Changes the Geometry Type. Can only be called before Start Line Trace or after Stop Line Trace  */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Changes the Geometry Type. Can only be called before Start Line Trace or after Stop Line Trace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetGeometryType", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::LineOfSightComponent_eventSetGeometryType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::LineOfSightComponent_eventSetGeometryType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics
	{
		struct LineOfSightComponent_eventSetIgnoreSelf_Parms
		{
			bool NewValueIgnoreSelf;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValueIgnoreSelf_MetaData[];
#endif
		static void NewProp_NewValueIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValueIgnoreSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::NewProp_NewValueIgnoreSelf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::NewProp_NewValueIgnoreSelf_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetIgnoreSelf_Parms*)Obj)->NewValueIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::NewProp_NewValueIgnoreSelf = { "NewValueIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetIgnoreSelf_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::NewProp_NewValueIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::NewProp_NewValueIgnoreSelf_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::NewProp_NewValueIgnoreSelf_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::NewProp_NewValueIgnoreSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Set the Ignore Self option, but clear the actor array added using AddActorsToIgnore */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Set the Ignore Self option, but clear the actor array added using AddActorsToIgnore" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetIgnoreSelf", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::LineOfSightComponent_eventSetIgnoreSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::LineOfSightComponent_eventSetIgnoreSelf_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics
	{
		struct LineOfSightComponent_eventSetNormals_Parms
		{
			FVector Normals;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetNormals_Parms, Normals), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::NewProp_Normals_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::NewProp_Normals_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::NewProp_Normals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Can only be called after Start Build Mesh  */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Can only be called after Start Build Mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetNormals", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::LineOfSightComponent_eventSetNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::LineOfSightComponent_eventSetNormals_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics
	{
		struct LineOfSightComponent_eventSetPauseBuildMesh_Parms
		{
			bool Pause;
			bool ChangeVisibility;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pause_MetaData[];
#endif
		static void NewProp_Pause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeVisibility_MetaData[];
#endif
		static void NewProp_ChangeVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_Pause_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_Pause_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetPauseBuildMesh_Parms*)Obj)->Pause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_Pause = { "Pause", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetPauseBuildMesh_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_Pause_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_Pause_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_Pause_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_ChangeVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_ChangeVisibility_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetPauseBuildMesh_Parms*)Obj)->ChangeVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_ChangeVisibility = { "ChangeVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetPauseBuildMesh_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_ChangeVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_ChangeVisibility_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_ChangeVisibility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_Pause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::NewProp_ChangeVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Disables updating of the mesh. Tracing continues to work. This is faster than StopBuildMesh() and StartBuildMesh(). If StartLineTrace() has not been called, this function does nothing. */" },
		{ "CPP_Default_ChangeVisibility", "true" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Disables updating of the mesh. Tracing continues to work. This is faster than StopBuildMesh() and StartBuildMesh(). If StartLineTrace() has not been called, this function does nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetPauseBuildMesh", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::LineOfSightComponent_eventSetPauseBuildMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::LineOfSightComponent_eventSetPauseBuildMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics
	{
		struct LineOfSightComponent_eventSetPauseTrace_Parms
		{
			bool Pause;
			bool RunEndOverlap;
			bool EmptyOverlapArray;
			bool ChangeVisibility;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pause_MetaData[];
#endif
		static void NewProp_Pause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunEndOverlap_MetaData[];
#endif
		static void NewProp_RunEndOverlap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RunEndOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyOverlapArray_MetaData[];
#endif
		static void NewProp_EmptyOverlapArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EmptyOverlapArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeVisibility_MetaData[];
#endif
		static void NewProp_ChangeVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_Pause_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_Pause_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetPauseTrace_Parms*)Obj)->Pause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_Pause = { "Pause", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetPauseTrace_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_Pause_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_Pause_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_Pause_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_RunEndOverlap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_RunEndOverlap_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetPauseTrace_Parms*)Obj)->RunEndOverlap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_RunEndOverlap = { "RunEndOverlap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetPauseTrace_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_RunEndOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_RunEndOverlap_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_RunEndOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_EmptyOverlapArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_EmptyOverlapArray_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetPauseTrace_Parms*)Obj)->EmptyOverlapArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_EmptyOverlapArray = { "EmptyOverlapArray", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetPauseTrace_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_EmptyOverlapArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_EmptyOverlapArray_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_EmptyOverlapArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_ChangeVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_ChangeVisibility_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetPauseTrace_Parms*)Obj)->ChangeVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_ChangeVisibility = { "ChangeVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetPauseTrace_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_ChangeVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_ChangeVisibility_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_ChangeVisibility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_Pause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_RunEndOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_EmptyOverlapArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::NewProp_ChangeVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* \n\x09""Disables LineTrace. It works faster than StopLineTrace() and StartLineTrace(). The rotation functions continue to work. If StartLineTrace() has not been called, this function does nothing.\n\x09* RunEndOverlap - Triggering the EndOverlap event for Actors that have previously called BeginOverlap.\n\x09* EmptyOverlapArray - Clear the array that stores Actors for which BeginOverlap was called. If this array is not cleared then BeginOverlap will not be called again. It makes sense only if RunEndOverlap = false.\n\x09* ChangeVisibility - Switches the mesh visibility automatically. If True then the mesh will become invisible if 'Pause' = true and vice versa.\n\x09*/" },
		{ "CPP_Default_ChangeVisibility", "true" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Disables LineTrace. It works faster than StopLineTrace() and StartLineTrace(). The rotation functions continue to work. If StartLineTrace() has not been called, this function does nothing.\n* RunEndOverlap - Triggering the EndOverlap event for Actors that have previously called BeginOverlap.\n* EmptyOverlapArray - Clear the array that stores Actors for which BeginOverlap was called. If this array is not cleared then BeginOverlap will not be called again. It makes sense only if RunEndOverlap = false.\n* ChangeVisibility - Switches the mesh visibility automatically. If True then the mesh will become invisible if 'Pause' = true and vice versa." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetPauseTrace", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::LineOfSightComponent_eventSetPauseTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::LineOfSightComponent_eventSetPauseTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics
	{
		struct LineOfSightComponent_eventSetRadius1_Parms
		{
			float NewRadius;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::NewProp_NewRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetRadius1_Parms, NewRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::NewProp_NewRadius_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::NewProp_NewRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetRadius1", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::LineOfSightComponent_eventSetRadius1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::LineOfSightComponent_eventSetRadius1_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetRadius1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetRadius1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics
	{
		struct LineOfSightComponent_eventSetRadius2_Parms
		{
			float NewRadius;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::NewProp_NewRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetRadius2_Parms, NewRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::NewProp_NewRadius_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::NewProp_NewRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetRadius2", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::LineOfSightComponent_eventSetRadius2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::LineOfSightComponent_eventSetRadius2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetRadius2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetRadius2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics
	{
		struct LineOfSightComponent_eventSetTickEnable_Parms
		{
			bool Enable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::NewProp_Enable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetTickEnable_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetTickEnable_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::NewProp_Enable_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::NewProp_Enable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetTickEnable", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::LineOfSightComponent_eventSetTickEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::LineOfSightComponent_eventSetTickEnable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics
	{
		struct LineOfSightComponent_eventSetTolerance_Parms
		{
			float NewTolerance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::NewProp_NewTolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::NewProp_NewTolerance = { "NewTolerance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetTolerance_Parms, NewTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::NewProp_NewTolerance_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::NewProp_NewTolerance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::NewProp_NewTolerance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Tolerance to compare angles. Default 0.00005f. */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Tolerance to compare angles. Default 0.00005f." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetTolerance", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::LineOfSightComponent_eventSetTolerance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::LineOfSightComponent_eventSetTolerance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetTolerance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetTolerance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics
	{
		struct LineOfSightComponent_eventSetTraceChannel_Parms
		{
			TEnumAsByte<ETraceTypeQuery> NewTraceChanne;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTraceChanne_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewTraceChanne;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::NewProp_NewTraceChanne_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::NewProp_NewTraceChanne = { "NewTraceChanne", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventSetTraceChannel_Parms, NewTraceChanne), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::NewProp_NewTraceChanne_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::NewProp_NewTraceChanne_MetaData) }; // 2725057287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::NewProp_NewTraceChanne,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetTraceChannel", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::LineOfSightComponent_eventSetTraceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::LineOfSightComponent_eventSetTraceChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics
	{
		struct LineOfSightComponent_eventSetTraceComplex_Parms
		{
			bool NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetTraceComplex_Parms*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetTraceComplex_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::NewProp_NewValue_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::NewProp_NewValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetTraceComplex", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::LineOfSightComponent_eventSetTraceComplex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::LineOfSightComponent_eventSetTraceComplex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics
	{
		struct LineOfSightComponent_eventSetVisibilityOfMesh_Parms
		{
			bool NewVisibility;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVisibility_MetaData[];
#endif
		static void NewProp_NewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::NewProp_NewVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::NewProp_NewVisibility_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventSetVisibilityOfMesh_Parms*)Obj)->NewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::NewProp_NewVisibility = { "NewVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventSetVisibilityOfMesh_Parms), &Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::NewProp_NewVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::NewProp_NewVisibility_MetaData), Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::NewProp_NewVisibility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::NewProp_NewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "SetVisibilityOfMesh", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::LineOfSightComponent_eventSetVisibilityOfMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::LineOfSightComponent_eventSetVisibilityOfMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartBuildMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartBuildMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Create Mesh After StartLineTrace(). */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Create Mesh After StartLineTrace()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartBuildMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartBuildMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartBuildMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartBuildMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartBuildMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartBuildMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics
	{
		struct LineOfSightComponent_eventStartInterpAngle_Parms
		{
			float NewAngle1;
			float NewAngle2;
			float Speed1;
			float Speed2;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAngle1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngle1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAngle2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngle2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle1 = { "NewAngle1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartInterpAngle_Parms, NewAngle1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle1_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle2 = { "NewAngle2", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartInterpAngle_Parms, NewAngle2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle2_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed1 = { "Speed1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartInterpAngle_Parms, Speed1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed1_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed2 = { "Speed2", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartInterpAngle_Parms, Speed2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed2_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_NewAngle2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::NewProp_Speed2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartInterpAngle", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::LineOfSightComponent_eventStartInterpAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::LineOfSightComponent_eventStartInterpAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics
	{
		struct LineOfSightComponent_eventStartInterpRadius_Parms
		{
			float NewRadius1;
			float NewRadius2;
			float Speed1;
			float Speed2;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRadius1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRadius2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius1 = { "NewRadius1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartInterpRadius_Parms, NewRadius1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius1_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius2 = { "NewRadius2", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartInterpRadius_Parms, NewRadius2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius2_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed1 = { "Speed1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartInterpRadius_Parms, Speed1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed1_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed2 = { "Speed2", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartInterpRadius_Parms, Speed2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed2_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_NewRadius2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::NewProp_Speed2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Smoothly changes the radius */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Smoothly changes the radius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartInterpRadius", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::LineOfSightComponent_eventStartInterpRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::LineOfSightComponent_eventStartInterpRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics
	{
		struct LineOfSightComponent_eventStartLineTrace_Parms
		{
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			int32 NumberOfLines;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartLineTrace_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 2725057287
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::NewProp_NumberOfLines = { "NumberOfLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartLineTrace_Parms, NumberOfLines), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::NewProp_NumberOfLines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Does TraceLine */" },
		{ "CPP_Default_NumberOfLines", "60" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Does TraceLine" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartLineTrace", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::LineOfSightComponent_eventStartLineTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::LineOfSightComponent_eventStartLineTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics
	{
		struct LineOfSightComponent_eventStartOAEArc_Parms
		{
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			float InRadius1;
			float InRadius2;
			float InAngle1;
			float InAngle2;
			int32 NumberOfLines;
			TArray<FHitResult> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAngle1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAngle2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLines;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEArc_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 2725057287
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_InRadius1 = { "InRadius1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEArc_Parms, InRadius1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_InRadius2 = { "InRadius2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEArc_Parms, InRadius2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_InAngle1 = { "InAngle1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEArc_Parms, InAngle1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_InAngle2 = { "InAngle2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEArc_Parms, InAngle2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_NumberOfLines = { "NumberOfLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEArc_Parms, NumberOfLines), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEArc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_InRadius1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_InRadius2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_InAngle1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_InAngle2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_NumberOfLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "CPP_Default_NumberOfLines", "40" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartOAEArc", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::LineOfSightComponent_eventStartOAEArc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::LineOfSightComponent_eventStartOAEArc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics
	{
		struct LineOfSightComponent_eventStartOAEFlat_Parms
		{
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			int32 NumberOfLines;
			TArray<FHitResult> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLines;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEFlat_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 2725057287
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::NewProp_NumberOfLines = { "NumberOfLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEFlat_Parms, NumberOfLines), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartOAEFlat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::NewProp_NumberOfLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "CPP_Default_NumberOfLines", "40" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartOAEFlat", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::LineOfSightComponent_eventStartOAEFlat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::LineOfSightComponent_eventStartOAEFlat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics
	{
		struct LineOfSightComponent_eventStartRotateInRangeAxis_Parms
		{
			EAxisTypeComp Axis;
			float Angle;
			float Speed;
			ETypeRotation TypeRotation;
			bool NegativeToPositive;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeToPositive_MetaData[];
#endif
		static void NewProp_NegativeToPositive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NegativeToPositive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateInRangeAxis_Parms, Axis), Z_Construct_UEnum_LineOfSight_EAxisTypeComp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Axis_MetaData) }; // 1873111054
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Angle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateInRangeAxis_Parms, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Angle_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Angle_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateInRangeAxis_Parms, Speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_TypeRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_TypeRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_TypeRotation = { "TypeRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateInRangeAxis_Parms, TypeRotation), Z_Construct_UEnum_LineOfSight_ETypeRotation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_TypeRotation_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_TypeRotation_MetaData) }; // 2521429666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_NegativeToPositive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_NegativeToPositive_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventStartRotateInRangeAxis_Parms*)Obj)->NegativeToPositive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_NegativeToPositive = { "NegativeToPositive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventStartRotateInRangeAxis_Parms), &Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_NegativeToPositive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_NegativeToPositive_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_NegativeToPositive_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_TypeRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_TypeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::NewProp_NegativeToPositive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Maximum angle 89 */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Maximum angle 89" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartRotateInRangeAxis", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::LineOfSightComponent_eventStartRotateInRangeAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::LineOfSightComponent_eventStartRotateInRangeAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics
	{
		struct LineOfSightComponent_eventStartRotateToActor_Parms
		{
			EAxisTypeComp Axis;
			AActor* Actor;
			float Speed;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateToActor_Parms, Axis), Z_Construct_UEnum_LineOfSight_EAxisTypeComp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Axis_MetaData) }; // 1873111054
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateToActor_Parms, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Speed_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* This function uses World Rotation */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "This function uses World Rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartRotateToActor", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::LineOfSightComponent_eventStartRotateToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::LineOfSightComponent_eventStartRotateToActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics
	{
		struct LineOfSightComponent_eventStartRotateToAngleAxis_Parms
		{
			EAxisTypeComp Axis;
			float Angle;
			float Speed;
			ETypeRotation TypeRotation;
			bool AddToCurrent;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddToCurrent_MetaData[];
#endif
		static void NewProp_AddToCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddToCurrent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateToAngleAxis_Parms, Axis), Z_Construct_UEnum_LineOfSight_EAxisTypeComp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Axis_MetaData) }; // 1873111054
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Angle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateToAngleAxis_Parms, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Angle_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Angle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateToAngleAxis_Parms, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Speed_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_TypeRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_TypeRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_TypeRotation = { "TypeRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventStartRotateToAngleAxis_Parms, TypeRotation), Z_Construct_UEnum_LineOfSight_ETypeRotation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_TypeRotation_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_TypeRotation_MetaData) }; // 2521429666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_AddToCurrent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_AddToCurrent_SetBit(void* Obj)
	{
		((LineOfSightComponent_eventStartRotateToAngleAxis_Parms*)Obj)->AddToCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_AddToCurrent = { "AddToCurrent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LineOfSightComponent_eventStartRotateToAngleAxis_Parms), &Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_AddToCurrent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_AddToCurrent_MetaData), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_AddToCurrent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_TypeRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_TypeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::NewProp_AddToCurrent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* When the rotation is finished, event RotateToAngleEnd will be called. */" },
		{ "CPP_Default_AddToCurrent", "true" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "When the rotation is finished, event RotateToAngleEnd will be called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StartRotateToAngleAxis", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::LineOfSightComponent_eventStartRotateToAngleAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::LineOfSightComponent_eventStartRotateToAngleAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StopAllRotate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StopAllRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StopAllRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StopAllRotate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StopAllRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StopAllRotate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StopAllRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StopAllRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StopBuildMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StopBuildMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StopBuildMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StopBuildMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StopBuildMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StopBuildMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StopBuildMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StopBuildMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StopInterpAngle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StopInterpAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StopInterpAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StopInterpAngle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StopInterpAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StopInterpAngle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StopInterpAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StopInterpAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StopInterpRadius_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StopInterpRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StopInterpRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StopInterpRadius", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StopInterpRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StopInterpRadius_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StopInterpRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StopInterpRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StopLineTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StopLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Essentially disables the component. Stops tracing and building the mesh. But the tick function will continue to work. To disable it completely,\n\x09""call StopLineTrace () and call SetTickComponentEnabled (false). */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Essentially disables the component. Stops tracing and building the mesh. But the tick function will continue to work. To disable it completely,\n      call StopLineTrace () and call SetTickComponentEnabled (false)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StopLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StopLineTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StopLineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StopLineTrace_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StopLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StopLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StopRotateInRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StopRotateInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StopRotateInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StopRotateInRange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StopRotateInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StopRotateInRange_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StopRotateInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StopRotateInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_StopRotateToAngle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_StopRotateToAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_StopRotateToAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "StopRotateToAngle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_StopRotateToAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_StopRotateToAngle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_StopRotateToAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_StopRotateToAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics
	{
		struct LineOfSightComponent_eventTest1_Parms
		{
			int32 NumberOfLines;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::NewProp_NumberOfLines = { "NumberOfLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventTest1_Parms, NumberOfLines), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::NewProp_NumberOfLines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Can only be called after Start Build Mesh  */" },
		{ "CPP_Default_NumberOfLines", "60" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Can only be called after Start Build Mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "Test1", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::LineOfSightComponent_eventTest1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::LineOfSightComponent_eventTest1_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_Test1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_Test1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics
	{
		struct LineOfSightComponent_eventZStartCloneTo_Parms
		{
			ULineOfSightComponent* OtherLineOfSightComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherLineOfSightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherLineOfSightComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::NewProp_OtherLineOfSightComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::NewProp_OtherLineOfSightComponent = { "OtherLineOfSightComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineOfSightComponent_eventZStartCloneTo_Parms, OtherLineOfSightComponent), Z_Construct_UClass_ULineOfSightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::NewProp_OtherLineOfSightComponent_MetaData), Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::NewProp_OtherLineOfSightComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::NewProp_OtherLineOfSightComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "ZStartCloneTo", nullptr, nullptr, Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::LineOfSightComponent_eventZStartCloneTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::LineOfSightComponent_eventZStartCloneTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULineOfSightComponent_ZStopCloneTo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULineOfSightComponent_ZStopCloneTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineOfSightComponent_ZStopCloneTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineOfSightComponent, nullptr, "ZStopCloneTo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineOfSightComponent_ZStopCloneTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineOfSightComponent_ZStopCloneTo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULineOfSightComponent_ZStopCloneTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineOfSightComponent_ZStopCloneTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineOfSightComponent);
	UClass* Z_Construct_UClass_ULineOfSightComponent_NoRegister()
	{
		return ULineOfSightComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULineOfSightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginOverlap_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BeginOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOverlap_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateToAngleEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RotateToAngleEnd;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GeometryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GeometryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Of_Triangles_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_Of_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type_Of_Triangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseArch1_MetaData[];
#endif
		static void NewProp_ReverseArch1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReverseArch1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreSelf_MetaData[];
#endif
		static void NewProp_IgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreSelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginAndEndOverlapEvent_MetaData[];
#endif
		static void NewProp_BeginAndEndOverlapEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BeginAndEndOverlapEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlyOneArc_MetaData[];
#endif
		static void NewProp_OnlyOneArc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyOneArc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Only_Z_Rotation_MetaData[];
#endif
		static void NewProp_Only_Z_Rotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Only_Z_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[];
#endif
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrameTracing_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameTracing_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrameTracing;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static void NewProp_Debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugAOE_MetaData[];
#endif
		static void NewProp_DebugAOE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugAOE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDebugAOE_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDebugAOE;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeTriangle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeTriangle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeTriangle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightComponentForClone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LineOfSightComponentForClone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointArray1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointArray1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointArray1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalVertex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalVertex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NormalVertex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangle_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangle_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineOfSightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LineOfSight,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULineOfSightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULineOfSightComponent_AddActorsToIgnore, "AddActorsToIgnore" }, // 1478101369
		{ &Z_Construct_UFunction_ULineOfSightComponent_AddIgnoredActor, "AddIgnoredActor" }, // 3435509757
		{ &Z_Construct_UFunction_ULineOfSightComponent_ClearActorsToIgnore, "ClearActorsToIgnore" }, // 646177372
		{ &Z_Construct_UFunction_ULineOfSightComponent_FindAngleRotate, "FindAngleRotate" }, // 3881106377
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetAngle1, "GetAngle1" }, // 2045944721
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetAngle2, "GetAngle2" }, // 128580052
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetBeginAndEndOverlapEvent, "GetBeginAndEndOverlapEvent" }, // 1694163055
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetOverlappedActors, "GetOverlappedActors" }, // 1691069288
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetRadius1, "GetRadius1" }, // 1373080480
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetRadius2, "GetRadius2" }, // 1803784839
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPosition, "GetVertexArrayLocalPosition" }, // 1609700008
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayLocalPositionNoRotation, "GetVertexArrayLocalPositionNoRotation" }, // 116714497
		{ &Z_Construct_UFunction_ULineOfSightComponent_GetVertexArrayWorldPosition, "GetVertexArrayWorldPosition" }, // 503920423
		{ &Z_Construct_UFunction_ULineOfSightComponent_IsPauseBuildMesh, "IsPauseBuildMesh" }, // 179655015
		{ &Z_Construct_UFunction_ULineOfSightComponent_IsPauseTrace, "IsPauseTrace" }, // 1960389992
		{ &Z_Construct_UFunction_ULineOfSightComponent_LineOfSightIsActive, "LineOfSightIsActive" }, // 216033195
		{ &Z_Construct_UFunction_ULineOfSightComponent_MeshIsBuilt, "MeshIsBuilt" }, // 1712666022
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetAngle1, "SetAngle1" }, // 711087527
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetAngle2, "SetAngle2" }, // 1630871157
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetBeginAndEndOverlapEvent, "SetBeginAndEndOverlapEvent" }, // 773966394
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetFrameTracing, "SetFrameTracing" }, // 1957452892
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetGeometryType, "SetGeometryType" }, // 4144806883
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetIgnoreSelf, "SetIgnoreSelf" }, // 1300046450
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetNormals, "SetNormals" }, // 3456056825
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetPauseBuildMesh, "SetPauseBuildMesh" }, // 3972155965
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetPauseTrace, "SetPauseTrace" }, // 1902110063
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetRadius1, "SetRadius1" }, // 1117254303
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetRadius2, "SetRadius2" }, // 3205576068
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetTickEnable, "SetTickEnable" }, // 110377400
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetTolerance, "SetTolerance" }, // 3483513737
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetTraceChannel, "SetTraceChannel" }, // 3199857524
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetTraceComplex, "SetTraceComplex" }, // 2638345166
		{ &Z_Construct_UFunction_ULineOfSightComponent_SetVisibilityOfMesh, "SetVisibilityOfMesh" }, // 1394415683
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartBuildMesh, "StartBuildMesh" }, // 1097051641
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartInterpAngle, "StartInterpAngle" }, // 2539011939
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartInterpRadius, "StartInterpRadius" }, // 2810603247
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartLineTrace, "StartLineTrace" }, // 1628923464
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartOAEArc, "StartOAEArc" }, // 4249352156
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartOAEFlat, "StartOAEFlat" }, // 28848870
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartRotateInRangeAxis, "StartRotateInRangeAxis" }, // 2305706551
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartRotateToActor, "StartRotateToActor" }, // 1487401726
		{ &Z_Construct_UFunction_ULineOfSightComponent_StartRotateToAngleAxis, "StartRotateToAngleAxis" }, // 1562077572
		{ &Z_Construct_UFunction_ULineOfSightComponent_StopAllRotate, "StopAllRotate" }, // 2847254213
		{ &Z_Construct_UFunction_ULineOfSightComponent_StopBuildMesh, "StopBuildMesh" }, // 3010272217
		{ &Z_Construct_UFunction_ULineOfSightComponent_StopInterpAngle, "StopInterpAngle" }, // 214024828
		{ &Z_Construct_UFunction_ULineOfSightComponent_StopInterpRadius, "StopInterpRadius" }, // 3486963258
		{ &Z_Construct_UFunction_ULineOfSightComponent_StopLineTrace, "StopLineTrace" }, // 3786798640
		{ &Z_Construct_UFunction_ULineOfSightComponent_StopRotateInRange, "StopRotateInRange" }, // 3181932937
		{ &Z_Construct_UFunction_ULineOfSightComponent_StopRotateToAngle, "StopRotateToAngle" }, // 1281245823
		{ &Z_Construct_UFunction_ULineOfSightComponent_Test1, "Test1" }, // 3939818124
		{ &Z_Construct_UFunction_ULineOfSightComponent_ZStartCloneTo, "ZStartCloneTo" }, // 39506846
		{ &Z_Construct_UFunction_ULineOfSightComponent_ZStopCloneTo, "ZStopCloneTo" }, // 290686853
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "LineOfSightComponent.h" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginOverlap_MetaData[] = {
		{ "Category", "LineOfSight Component|Event" },
		{ "Comment", "/* The event is similar to On Component Begin Overlap */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "The event is similar to On Component Begin Overlap" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginOverlap = { "BeginOverlap", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, BeginOverlap), Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginOverlap_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginOverlap_MetaData) }; // 784290310
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_EndOverlap_MetaData[] = {
		{ "Category", "LineOfSight Component|Event" },
		{ "Comment", "/* The event is similar to On Component End Overlap */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "The event is similar to On Component End Overlap" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_EndOverlap = { "EndOverlap", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, EndOverlap), Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_EndOverlap_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_EndOverlap_MetaData) }; // 4013317266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_RotateToAngleEnd_MetaData[] = {
		{ "Category", "LineOfSight Component|Event" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_RotateToAngleEnd = { "RotateToAngleEnd", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, RotateToAngleEnd), Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_RotateToAngleEnd_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_RotateToAngleEnd_MetaData) }; // 3995831819
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_GeometryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_GeometryType_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, GeometryType), Z_Construct_UEnum_LineOfSight_ETypeArc, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_GeometryType_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_GeometryType_MetaData) }; // 3372663358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle1_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle1 = { "Angle1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, Angle1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle1_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle2_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle2 = { "Angle2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, Angle2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle2_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius1_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius1 = { "Radius1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, Radius1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius1_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius2_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius2 = { "Radius2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, Radius2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius2_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius2_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Type_Of_Triangles_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Type_Of_Triangles_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Type_Of_Triangles = { "Type_Of_Triangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, Type_Of_Triangles), Z_Construct_UEnum_LineOfSight_ETypeTriangle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Type_Of_Triangles_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Type_Of_Triangles_MetaData) }; // 3798736391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_ReverseArch1_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ClampMin", "2" },
		{ "EditCondition", "GeometryType == ETypeArc::Arc_VectorLenght" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_ReverseArch1_SetBit(void* Obj)
	{
		((ULineOfSightComponent*)Obj)->ReverseArch1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_ReverseArch1 = { "ReverseArch1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineOfSightComponent), &Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_ReverseArch1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_ReverseArch1_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_ReverseArch1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_IgnoreSelf_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Adds an actor to the list for trace exceptions. */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Adds an actor to the list for trace exceptions." },
	};
#endif
	void Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_IgnoreSelf_SetBit(void* Obj)
	{
		((ULineOfSightComponent*)Obj)->IgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_IgnoreSelf = { "IgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineOfSightComponent), &Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_IgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_IgnoreSelf_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_IgnoreSelf_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginAndEndOverlapEvent_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Calls Events: Hit Start and Hit End. Similar to Event On Component Begin Overlap. */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Calls Events: Hit Start and Hit End. Similar to Event On Component Begin Overlap." },
	};
#endif
	void Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginAndEndOverlapEvent_SetBit(void* Obj)
	{
		((ULineOfSightComponent*)Obj)->BeginAndEndOverlapEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginAndEndOverlapEvent = { "BeginAndEndOverlapEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineOfSightComponent), &Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginAndEndOverlapEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginAndEndOverlapEvent_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginAndEndOverlapEvent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_OnlyOneArc_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "Comment", "/* Used for optimization. Use false if you only need 1 arch instead of Radius 1 = 0 and Angle 1 = 0. */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Used for optimization. Use false if you only need 1 arch instead of Radius 1 = 0 and Angle 1 = 0." },
	};
#endif
	void Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_OnlyOneArc_SetBit(void* Obj)
	{
		((ULineOfSightComponent*)Obj)->OnlyOneArc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_OnlyOneArc = { "OnlyOneArc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineOfSightComponent), &Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_OnlyOneArc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_OnlyOneArc_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_OnlyOneArc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Only_Z_Rotation_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Only_Z_Rotation_SetBit(void* Obj)
	{
		((ULineOfSightComponent*)Obj)->Only_Z_Rotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Only_Z_Rotation = { "Only_Z_Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineOfSightComponent), &Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Only_Z_Rotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Only_Z_Rotation_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Only_Z_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TraceComplex_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((ULineOfSightComponent*)Obj)->TraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineOfSightComponent), &Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TraceComplex_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TraceComplex_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_FrameTracing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_FrameTracing_MetaData[] = {
		{ "Category", "LineOfSight Component|Advanced" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_FrameTracing = { "FrameTracing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, FrameTracing), Z_Construct_UEnum_LineOfSight_EFrameTracingSight, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_FrameTracing_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_FrameTracing_MetaData) }; // 3228495972
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "LineOfSight Component|Debug" },
		{ "Comment", "/* Only available in the editor. Draws tracing lines. */" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
		{ "ToolTip", "Only available in the editor. Draws tracing lines." },
	};
#endif
	void Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Debug_SetBit(void* Obj)
	{
		((ULineOfSightComponent*)Obj)->Debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineOfSightComponent), &Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Debug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Debug_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Debug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugLineThickness_MetaData[] = {
		{ "Category", "LineOfSight Component|Debug" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugLineThickness = { "DebugLineThickness", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, DebugLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugLineThickness_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugLineThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugAOE_MetaData[] = {
		{ "Category", "LineOfSight Component|Debug" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugAOE_SetBit(void* Obj)
	{
		((ULineOfSightComponent*)Obj)->DebugAOE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugAOE = { "DebugAOE", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineOfSightComponent), &Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugAOE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugAOE_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugAOE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TimeDebugAOE_MetaData[] = {
		{ "Category", "LineOfSight Component|Debug" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TimeDebugAOE = { "TimeDebugAOE", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, TimeDebugAOE), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TimeDebugAOE_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TimeDebugAOE_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Material_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Material_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TypeTriangle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TypeTriangle_MetaData[] = {
		{ "Category", "LineOfSight Component" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TypeTriangle = { "TypeTriangle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, TypeTriangle), Z_Construct_UEnum_LineOfSight_ETypeTriangle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TypeTriangle_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TypeTriangle_MetaData) }; // 3798736391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_LineOfSightComponentForClone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_LineOfSightComponentForClone = { "LineOfSightComponentForClone", nullptr, (EPropertyFlags)0x0010000000282008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, LineOfSightComponentForClone), Z_Construct_UClass_ULineOfSightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_LineOfSightComponentForClone_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_LineOfSightComponentForClone_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_PointArray1_Inner = { "PointArray1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_PointArray1_MetaData[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_PointArray1 = { "PointArray1", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, PointArray1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_PointArray1_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_PointArray1_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_NormalVertex_Inner = { "NormalVertex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_NormalVertex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_NormalVertex = { "NormalVertex", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, NormalVertex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_NormalVertex_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_NormalVertex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_UV0_MetaData[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_UV0_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_UV0_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_VertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_VertexColors_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_VertexColors_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(0, nullptr) }; // 2099358922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Tangents_MetaData[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Tangents_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Tangents_MetaData) }; // 2099358922
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Triangle_Inner = { "Triangle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Triangle_MetaData[] = {
		{ "ModuleRelativePath", "Public/LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Triangle = { "Triangle", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineOfSightComponent, Triangle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Triangle_MetaData), Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Triangle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULineOfSightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_EndOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_RotateToAngleEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_GeometryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_GeometryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Angle2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Radius2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Type_Of_Triangles_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Type_Of_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_ReverseArch1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_IgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_BeginAndEndOverlapEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_OnlyOneArc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Only_Z_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_FrameTracing_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_FrameTracing,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_DebugAOE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TimeDebugAOE,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TypeTriangle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_TypeTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_LineOfSightComponentForClone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_PointArray1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_PointArray1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_NormalVertex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_NormalVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Triangle_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineOfSightComponent_Statics::NewProp_Triangle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineOfSightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineOfSightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineOfSightComponent_Statics::ClassParams = {
		&ULineOfSightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULineOfSightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULineOfSightComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineOfSightComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULineOfSightComponent()
	{
		if (!Z_Registration_Info_UClass_ULineOfSightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineOfSightComponent.OuterSingleton, Z_Construct_UClass_ULineOfSightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULineOfSightComponent.OuterSingleton;
	}
	template<> LINEOFSIGHT_API UClass* StaticClass<ULineOfSightComponent>()
	{
		return ULineOfSightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineOfSightComponent);
	ULineOfSightComponent::~ULineOfSightComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::EnumInfo[] = {
		{ ETypeTriangle_StaticEnum, TEXT("ETypeTriangle"), &Z_Registration_Info_UEnum_ETypeTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3798736391U) },
		{ ETypeArc_StaticEnum, TEXT("ETypeArc"), &Z_Registration_Info_UEnum_ETypeArc, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3372663358U) },
		{ EAxisTypeComp_StaticEnum, TEXT("EAxisTypeComp"), &Z_Registration_Info_UEnum_EAxisTypeComp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1873111054U) },
		{ ETypeRotation_StaticEnum, TEXT("ETypeRotation"), &Z_Registration_Info_UEnum_ETypeRotation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2521429666U) },
		{ EFrameTracingSight_StaticEnum, TEXT("EFrameTracingSight"), &Z_Registration_Info_UEnum_EFrameTracingSight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3228495972U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::ScriptStructInfo[] = {
		{ FResultLineTrace::StaticStruct, Z_Construct_UScriptStruct_FResultLineTrace_Statics::NewStructOps, TEXT("ResultLineTrace"), &Z_Registration_Info_UScriptStruct_ResultLineTrace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResultLineTrace), 2688562759U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULineOfSightComponent, ULineOfSightComponent::StaticClass, TEXT("ULineOfSightComponent"), &Z_Registration_Info_UClass_ULineOfSightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineOfSightComponent), 1910513388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_715363163(TEXT("/Script/LineOfSight"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
