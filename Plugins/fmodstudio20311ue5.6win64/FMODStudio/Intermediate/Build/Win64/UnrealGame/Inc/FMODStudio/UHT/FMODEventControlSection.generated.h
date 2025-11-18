// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/FMODEventControlSection.h"

#ifdef FMODSTUDIO_FMODEventControlSection_generated_h
#error "FMODEventControlSection.generated.h already included, missing '#pragma once' in FMODEventControlSection.h"
#endif
#define FMODSTUDIO_FMODEventControlSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFMODEventControlChannel ******************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneByteChannel Super;


struct FFMODEventControlChannel;
// ********** End ScriptStruct FFMODEventControlChannel ********************************************

// ********** Begin Class UFMODEventControlSection *************************************************
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister();

#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUFMODEventControlSection(); \
	friend struct Z_Construct_UClass_UFMODEventControlSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UFMODEventControlSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), Z_Construct_UClass_UFMODEventControlSection_NoRegister) \
	DECLARE_SERIALIZER(UFMODEventControlSection)


#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FMODSTUDIO_API UFMODEventControlSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODEventControlSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FMODSTUDIO_API, UFMODEventControlSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODEventControlSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFMODEventControlSection(UFMODEventControlSection&&) = delete; \
	UFMODEventControlSection(const UFMODEventControlSection&) = delete; \
	FMODSTUDIO_API virtual ~UFMODEventControlSection();


#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_50_PROLOG
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_INCLASS \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFMODEventControlSection;

// ********** End Class UFMODEventControlSection ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h

// ********** Begin Enum EFMODEventControlKey ******************************************************
#define FOREACH_ENUM_EFMODEVENTCONTROLKEY(op) \
	op(EFMODEventControlKey::Stop) \
	op(EFMODEventControlKey::Play) \
	op(EFMODEventControlKey::Pause) 

enum class EFMODEventControlKey : uint8;
template<> struct TIsUEnumClass<EFMODEventControlKey> { enum { Value = true }; };
template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODEventControlKey>();
// ********** End Enum EFMODEventControlKey ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
