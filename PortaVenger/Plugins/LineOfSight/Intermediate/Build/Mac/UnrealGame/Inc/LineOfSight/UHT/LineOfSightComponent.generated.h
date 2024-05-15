// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LineOfSightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULineOfSightComponent;
enum class EAxisTypeComp : uint8;
enum class EFrameTracingSight : uint8;
enum class ETypeArc : uint8;
enum class ETypeRotation : uint8;
struct FHitResult;
#ifdef LINEOFSIGHT_LineOfSightComponent_generated_h
#error "LineOfSightComponent.generated.h already included, missing '#pragma once' in LineOfSightComponent.h"
#endif
#define LINEOFSIGHT_LineOfSightComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResultLineTrace_Statics; \
	LINEOFSIGHT_API static class UScriptStruct* StaticStruct();


template<> LINEOFSIGHT_API UScriptStruct* StaticStruct<struct FResultLineTrace>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_87_DELEGATE \
LINEOFSIGHT_API void FHitStart_DelegateWrapper(const FMulticastScriptDelegate& HitStart, FHitResult const& Hit);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_88_DELEGATE \
LINEOFSIGHT_API void FHitEnd_DelegateWrapper(const FMulticastScriptDelegate& HitEnd, FHitResult const& Hit);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_89_DELEGATE \
LINEOFSIGHT_API void FRotateToAngleEnd_DelegateWrapper(const FMulticastScriptDelegate& RotateToAngleEnd);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTest1); \
	DECLARE_FUNCTION(execGetOverlappedActors); \
	DECLARE_FUNCTION(execSetNormals); \
	DECLARE_FUNCTION(execSetGeometryType); \
	DECLARE_FUNCTION(execFindAngleRotate); \
	DECLARE_FUNCTION(execStopAllRotate); \
	DECLARE_FUNCTION(execStopRotateInRange); \
	DECLARE_FUNCTION(execStopRotateToAngle); \
	DECLARE_FUNCTION(execStartRotateToActor); \
	DECLARE_FUNCTION(execStartRotateToAngleAxis); \
	DECLARE_FUNCTION(execStartRotateInRangeAxis); \
	DECLARE_FUNCTION(execSetTolerance); \
	DECLARE_FUNCTION(execLineOfSightIsActive); \
	DECLARE_FUNCTION(execMeshIsBuilt); \
	DECLARE_FUNCTION(execSetVisibilityOfMesh); \
	DECLARE_FUNCTION(execSetTickEnable); \
	DECLARE_FUNCTION(execStopBuildMesh); \
	DECLARE_FUNCTION(execStartBuildMesh); \
	DECLARE_FUNCTION(execStopLineTrace); \
	DECLARE_FUNCTION(execZStopCloneTo); \
	DECLARE_FUNCTION(execZStartCloneTo); \
	DECLARE_FUNCTION(execStartOAEFlat); \
	DECLARE_FUNCTION(execStartOAEArc); \
	DECLARE_FUNCTION(execIsPauseBuildMesh); \
	DECLARE_FUNCTION(execIsPauseTrace); \
	DECLARE_FUNCTION(execSetPauseBuildMesh); \
	DECLARE_FUNCTION(execSetPauseTrace); \
	DECLARE_FUNCTION(execStartLineTrace); \
	DECLARE_FUNCTION(execSetIgnoreSelf); \
	DECLARE_FUNCTION(execClearActorsToIgnore); \
	DECLARE_FUNCTION(execAddActorsToIgnore); \
	DECLARE_FUNCTION(execAddIgnoredActor); \
	DECLARE_FUNCTION(execSetTraceComplex); \
	DECLARE_FUNCTION(execSetTraceChannel); \
	DECLARE_FUNCTION(execGetVertexArrayLocalPositionNoRotation); \
	DECLARE_FUNCTION(execGetVertexArrayWorldPosition); \
	DECLARE_FUNCTION(execGetVertexArrayLocalPosition); \
	DECLARE_FUNCTION(execSetBeginAndEndOverlapEvent); \
	DECLARE_FUNCTION(execGetBeginAndEndOverlapEvent); \
	DECLARE_FUNCTION(execStopInterpRadius); \
	DECLARE_FUNCTION(execStartInterpRadius); \
	DECLARE_FUNCTION(execStopInterpAngle); \
	DECLARE_FUNCTION(execStartInterpAngle); \
	DECLARE_FUNCTION(execSetFrameTracing); \
	DECLARE_FUNCTION(execGetRadius2); \
	DECLARE_FUNCTION(execGetRadius1); \
	DECLARE_FUNCTION(execSetRadius2); \
	DECLARE_FUNCTION(execSetRadius1); \
	DECLARE_FUNCTION(execGetAngle2); \
	DECLARE_FUNCTION(execGetAngle1); \
	DECLARE_FUNCTION(execSetAngle2); \
	DECLARE_FUNCTION(execSetAngle1);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULineOfSightComponent(); \
	friend struct Z_Construct_UClass_ULineOfSightComponent_Statics; \
public: \
	DECLARE_CLASS(ULineOfSightComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LineOfSight"), NO_API) \
	DECLARE_SERIALIZER(ULineOfSightComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULineOfSightComponent(ULineOfSightComponent&&); \
	NO_API ULineOfSightComponent(const ULineOfSightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULineOfSightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineOfSightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULineOfSightComponent) \
	NO_API virtual ~ULineOfSightComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_92_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINEOFSIGHT_API UClass* StaticClass<class ULineOfSightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LineOfSight_Source_LineOfSight_Public_LineOfSightComponent_h


#define FOREACH_ENUM_ETYPETRIANGLE(op) \
	op(ETypeTriangle::E_LR) \
	op(ETypeTriangle::E_RL) \
	op(ETypeTriangle::E_LR_RL) \
	op(ETypeTriangle::E_RL_LR) 

enum class ETypeTriangle : uint8;
template<> struct TIsUEnumClass<ETypeTriangle> { enum { Value = true }; };
template<> LINEOFSIGHT_API UEnum* StaticEnum<ETypeTriangle>();

#define FOREACH_ENUM_ETYPEARC(op) \
	op(ETypeArc::Arc_VectorLenght) \
	op(ETypeArc::ArcVectorLenghtFlat) 

enum class ETypeArc : uint8;
template<> struct TIsUEnumClass<ETypeArc> { enum { Value = true }; };
template<> LINEOFSIGHT_API UEnum* StaticEnum<ETypeArc>();

#define FOREACH_ENUM_EAXISTYPECOMP(op) \
	op(EAxisTypeComp::Z) \
	op(EAxisTypeComp::Y) \
	op(EAxisTypeComp::X) 

enum class EAxisTypeComp : uint8;
template<> struct TIsUEnumClass<EAxisTypeComp> { enum { Value = true }; };
template<> LINEOFSIGHT_API UEnum* StaticEnum<EAxisTypeComp>();

#define FOREACH_ENUM_ETYPEROTATION(op) \
	op(ETypeRotation::Relative_Rotation) \
	op(ETypeRotation::World_Rotation) 

enum class ETypeRotation : uint8;
template<> struct TIsUEnumClass<ETypeRotation> { enum { Value = true }; };
template<> LINEOFSIGHT_API UEnum* StaticEnum<ETypeRotation>();

#define FOREACH_ENUM_EFRAMETRACINGSIGHT(op) \
	op(EFrameTracingSight::EveryTick) \
	op(EFrameTracingSight::EvenNumber) \
	op(EFrameTracingSight::OddNumber) 

enum class EFrameTracingSight : uint8;
template<> struct TIsUEnumClass<EFrameTracingSight> { enum { Value = true }; };
template<> LINEOFSIGHT_API UEnum* StaticEnum<EFrameTracingSight>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
