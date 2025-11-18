// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMODSettings.h"

#ifdef FMODSTUDIO_FMODSettings_generated_h
#error "FMODSettings.generated.h already included, missing '#pragma once' in FMODSettings.h"
#endif
#define FMODSTUDIO_FMODSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomPoolSizes **************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomPoolSizes_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


struct FCustomPoolSizes;
// ********** End ScriptStruct FCustomPoolSizes ****************************************************

// ********** Begin ScriptStruct FFMODPlatformSettings *********************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


struct FFMODPlatformSettings;
// ********** End ScriptStruct FFMODPlatformSettings ***********************************************

// ********** Begin ScriptStruct FFMODProjectLocale ************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODProjectLocale_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


struct FFMODProjectLocale;
// ********** End ScriptStruct FFMODProjectLocale **************************************************

// ********** Begin Class UFMODSettings ************************************************************
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings_NoRegister();

#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_213_INCLASS \
private: \
	static void StaticRegisterNativesUFMODSettings(); \
	friend struct Z_Construct_UClass_UFMODSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFMODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMODStudio"), Z_Construct_UClass_UFMODSettings_NoRegister) \
	DECLARE_SERIALIZER(UFMODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_213_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFMODSettings(UFMODSettings&&) = delete; \
	UFMODSettings(const UFMODSettings&) = delete; \
	NO_API virtual ~UFMODSettings();


#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_210_PROLOG
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_213_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_213_INCLASS \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h_213_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFMODSettings;

// ********** End Class UFMODSettings **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h

// ********** Begin Enum EFMODLogging **************************************************************
#define FOREACH_ENUM_EFMODLOGGING(op) \
	op(LEVEL_NONE) \
	op(LEVEL_ERROR) \
	op(LEVEL_WARNING) \
	op(LEVEL_LOG) 
// ********** End Enum EFMODLogging ****************************************************************

// ********** Begin Enum EFMODSpeakerMode **********************************************************
#define FOREACH_ENUM_EFMODSPEAKERMODE(op) \
	op(EFMODSpeakerMode::Stereo) \
	op(EFMODSpeakerMode::Surround_5_1) \
	op(EFMODSpeakerMode::Surround_7_1) \
	op(EFMODSpeakerMode::Surround_7_1_4) 
// ********** End Enum EFMODSpeakerMode ************************************************************

// ********** Begin Enum EFMODOutput ***************************************************************
#define FOREACH_ENUM_EFMODOUTPUT(op) \
	op(EFMODOutput::TYPE_AUTODETECT) \
	op(EFMODOutput::TYPE_NOSOUND) \
	op(EFMODOutput::TYPE_WASAPI) \
	op(EFMODOutput::TYPE_ASIO) \
	op(EFMODOutput::TYPE_PULSEAUDIO) \
	op(EFMODOutput::TYPE_ALSA) \
	op(EFMODOutput::TYPE_COREAUDIO) \
	op(EFMODOutput::TYPE_AUDIOTRACK) \
	op(EFMODOutput::TYPE_OPENSL) \
	op(EFMODOutput::TYPE_AUDIOOUT) \
	op(EFMODOutput::TYPE_AUDIO3D) \
	op(EFMODOutput::TYPE_NNAUDIO) \
	op(EFMODOutput::TYPE_WINSONIC) \
	op(EFMODOutput::TYPE_AAUDIO) 
// ********** End Enum EFMODOutput *****************************************************************

// ********** Begin Enum EFMODPlatforms ************************************************************
#define FOREACH_ENUM_EFMODPLATFORMS(op) \
	op(EFMODPlatforms::Windows) \
	op(EFMODPlatforms::Linux) \
	op(EFMODPlatforms::Mac) \
	op(EFMODPlatforms::Android) \
	op(EFMODPlatforms::IOS) \
	op(EFMODPlatforms::PS4) \
	op(EFMODPlatforms::PS5) \
	op(EFMODPlatforms::Deprecated) \
	op(EFMODPlatforms::Switch) \
	op(EFMODPlatforms::XboxOne) \
	op(EFMODPlatforms::XSX) \
	op(EFMODPlatforms::Editor) \
	op(EFMODPlatforms::Reserved1) 
// ********** End Enum EFMODPlatforms **************************************************************

// ********** Begin Enum EFMODCodec ****************************************************************
#define FOREACH_ENUM_EFMODCODEC(op) \
	op(EFMODCodec::VORBIS) \
	op(EFMODCodec::FADPCM) \
	op(EFMODCodec::OPUS) \
	op(EFMODCodec::XMA) \
	op(EFMODCodec::AT9) 
// ********** End Enum EFMODCodec ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
