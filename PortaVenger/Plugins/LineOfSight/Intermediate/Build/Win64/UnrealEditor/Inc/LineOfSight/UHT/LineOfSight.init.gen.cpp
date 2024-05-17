// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineOfSight_init() {}
	LINEOFSIGHT_API UFunction* Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature();
	LINEOFSIGHT_API UFunction* Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature();
	LINEOFSIGHT_API UFunction* Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LineOfSight;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LineOfSight()
	{
		if (!Z_Registration_Info_UPackage__Script_LineOfSight.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LineOfSight_HitEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LineOfSight_HitStart__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LineOfSight_RotateToAngleEnd__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LineOfSight",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x333CCF13,
				0x83AEAF05,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LineOfSight.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LineOfSight.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LineOfSight(Z_Construct_UPackage__Script_LineOfSight, TEXT("/Script/LineOfSight"), Z_Registration_Info_UPackage__Script_LineOfSight, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x333CCF13, 0x83AEAF05));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
