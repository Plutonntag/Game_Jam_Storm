// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMODBlueprintStatics.h"

#ifdef FMODSTUDIO_FMODBlueprintStatics_generated_h
#error "FMODBlueprintStatics.generated.h already included, missing '#pragma once' in FMODBlueprintStatics.h"
#endif
#define FMODSTUDIO_FMODBlueprintStatics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFMODAsset;
class UFMODAudioComponent;
class UFMODBank;
class UFMODBus;
class UFMODEvent;
class UFMODVCA;
class UObject;
class USceneComponent;
struct FFMODEventInstance;

// ********** Begin ScriptStruct FFMODEventInstance ************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODEventInstance_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


struct FFMODEventInstance;
// ********** End ScriptStruct FFMODEventInstance **************************************************

// ********** Begin Class UFMODBlueprintStatics ****************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLocale); \
	DECLARE_FUNCTION(execMixerResume); \
	DECLARE_FUNCTION(execMixerSuspend); \
	DECLARE_FUNCTION(execSetOutputDriverByIndex); \
	DECLARE_FUNCTION(execSetOutputDriverByName); \
	DECLARE_FUNCTION(execGetOutputDrivers); \
	DECLARE_FUNCTION(execEventInstanceSetTransform); \
	DECLARE_FUNCTION(execEventInstanceKeyOff); \
	DECLARE_FUNCTION(execEventInstanceRelease); \
	DECLARE_FUNCTION(execEventInstanceStop); \
	DECLARE_FUNCTION(execEventInstancePlay); \
	DECLARE_FUNCTION(execEventInstanceSetProperty); \
	DECLARE_FUNCTION(execEventInstanceGetParameterValue); \
	DECLARE_FUNCTION(execEventInstanceGetParameter); \
	DECLARE_FUNCTION(execEventInstanceSetParameter); \
	DECLARE_FUNCTION(execEventInstanceSetPaused); \
	DECLARE_FUNCTION(execEventInstanceSetPitch); \
	DECLARE_FUNCTION(execEventInstanceSetVolume); \
	DECLARE_FUNCTION(execEventInstanceIsValid); \
	DECLARE_FUNCTION(execGetGlobalParameterValueByName); \
	DECLARE_FUNCTION(execGetGlobalParameterByName); \
	DECLARE_FUNCTION(execSetGlobalParameterByName); \
	DECLARE_FUNCTION(execVCASetVolume); \
	DECLARE_FUNCTION(execBusStopAllEvents); \
	DECLARE_FUNCTION(execBusSetMute); \
	DECLARE_FUNCTION(execBusSetPaused); \
	DECLARE_FUNCTION(execBusSetVolume); \
	DECLARE_FUNCTION(execFindEventInstances); \
	DECLARE_FUNCTION(execUnloadEventSampleData); \
	DECLARE_FUNCTION(execLoadEventSampleData); \
	DECLARE_FUNCTION(execUnloadBankSampleData); \
	DECLARE_FUNCTION(execLoadBankSampleData); \
	DECLARE_FUNCTION(execIsBankLoaded); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execFindEventByName); \
	DECLARE_FUNCTION(execFindAssetByName); \
	DECLARE_FUNCTION(execPlayEventAttached); \
	DECLARE_FUNCTION(execPlayEventAtLocation); \
	DECLARE_FUNCTION(execPlayEvent2D);


FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBlueprintStatics_NoRegister();

#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUFMODBlueprintStatics(); \
	friend struct Z_Construct_UClass_UFMODBlueprintStatics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBlueprintStatics_NoRegister(); \
public: \
	DECLARE_CLASS2(UFMODBlueprintStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), Z_Construct_UClass_UFMODBlueprintStatics_NoRegister) \
	DECLARE_SERIALIZER(UFMODBlueprintStatics)


#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODBlueprintStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODBlueprintStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODBlueprintStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODBlueprintStatics); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFMODBlueprintStatics(UFMODBlueprintStatics&&) = delete; \
	UFMODBlueprintStatics(const UFMODBlueprintStatics&) = delete; \
	NO_API virtual ~UFMODBlueprintStatics();


#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_40_PROLOG
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_RPC_WRAPPERS \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_INCLASS \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFMODBlueprintStatics;

// ********** End Class UFMODBlueprintStatics ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h

// ********** Begin Enum EFMOD_STUDIO_STOP_MODE ****************************************************
#define FOREACH_ENUM_EFMOD_STUDIO_STOP_MODE(op) \
	op(ALLOWFADEOUT) \
	op(IMMEDIATE) 
// ********** End Enum EFMOD_STUDIO_STOP_MODE ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
