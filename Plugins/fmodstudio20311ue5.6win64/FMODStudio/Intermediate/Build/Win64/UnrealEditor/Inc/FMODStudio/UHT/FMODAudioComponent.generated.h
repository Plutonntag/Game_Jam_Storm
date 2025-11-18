// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMODAudioComponent.h"

#ifdef FMODSTUDIO_FMODAudioComponent_generated_h
#error "FMODAudioComponent.generated.h already included, missing '#pragma once' in FMODAudioComponent.h"
#endif
#define FMODSTUDIO_FMODAudioComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFMODEvent;

// ********** Begin ScriptStruct FFMODAttenuationDetails *******************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


struct FFMODAttenuationDetails;
// ********** End ScriptStruct FFMODAttenuationDetails *********************************************

// ********** Begin ScriptStruct FFMODOcclusionDetails *********************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


struct FFMODOcclusionDetails;
// ********** End ScriptStruct FFMODOcclusionDetails ***********************************************

// ********** Begin Delegate FOnEventStopped *******************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_109_DELEGATE \
FMODSTUDIO_API void FOnEventStopped_DelegateWrapper(const FMulticastScriptDelegate& OnEventStopped);


// ********** End Delegate FOnEventStopped *********************************************************

// ********** Begin Delegate FOnSoundStopped *******************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_111_DELEGATE \
FMODSTUDIO_API void FOnSoundStopped_DelegateWrapper(const FMulticastScriptDelegate& OnSoundStopped);


// ********** End Delegate FOnSoundStopped *********************************************************

// ********** Begin Delegate FOnTimelineMarker *****************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_113_DELEGATE \
FMODSTUDIO_API void FOnTimelineMarker_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineMarker, const FString& Name, int32 Position);


// ********** End Delegate FOnTimelineMarker *******************************************************

// ********** Begin Delegate FOnTimelineBeat *******************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_116_DELEGATE \
FMODSTUDIO_API void FOnTimelineBeat_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineBeat, int32 Bar, int32 Beat, int32 Position, float Tempo, int32 TimeSignatureUpper, int32 TimeSignatureLower);


// ********** End Delegate FOnTimelineBeat *********************************************************

// ********** Begin Class UFMODAudioComponent ******************************************************
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetProgrammerSoundName); \
	DECLARE_FUNCTION(execGetTimelinePosition); \
	DECLARE_FUNCTION(execSetTimelinePosition); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execSetProperty); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execGetParameter); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execGetPaused); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execKeyOff); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetEvent);


FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();

#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_INCLASS \
private: \
	static void StaticRegisterNativesUFMODAudioComponent(); \
	friend struct Z_Construct_UClass_UFMODAudioComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UFMODAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMODStudio"), Z_Construct_UClass_UFMODAudioComponent_NoRegister) \
	DECLARE_SERIALIZER(UFMODAudioComponent)


#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODAudioComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFMODAudioComponent(UFMODAudioComponent&&) = delete; \
	UFMODAudioComponent(const UFMODAudioComponent&) = delete; \
	NO_API virtual ~UFMODAudioComponent();


#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_136_PROLOG
#define FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_RPC_WRAPPERS \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_INCLASS \
	FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFMODAudioComponent;

// ********** End Class UFMODAudioComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h

// ********** Begin Enum EFMODEventProperty ********************************************************
#define FOREACH_ENUM_EFMODEVENTPROPERTY(op) \
	op(EFMODEventProperty::ChannelPriority) \
	op(EFMODEventProperty::ScheduleDelay) \
	op(EFMODEventProperty::ScheduleLookahead) \
	op(EFMODEventProperty::MinimumDistance) \
	op(EFMODEventProperty::MaximumDistance) \
	op(EFMODEventProperty::Count) 
// ********** End Enum EFMODEventProperty **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
