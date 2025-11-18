// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/FMODEventControlSection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFMODEventControlSection() {}

// ********** Begin Cross Module References ********************************************************
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister();
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey();
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFMODEventControlKey ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFMODEventControlKey;
static UEnum* EFMODEventControlKey_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFMODEventControlKey.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFMODEventControlKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey, (UObject*)Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODEventControlKey"));
	}
	return Z_Registration_Info_UEnum_EFMODEventControlKey.OuterSingleton;
}
template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODEventControlKey>()
{
	return EFMODEventControlKey_StaticEnum();
}
struct Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the types of FMOD event control keys. */" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "Pause.Name", "EFMODEventControlKey::Pause" },
		{ "Play.Name", "EFMODEventControlKey::Play" },
		{ "Stop.Name", "EFMODEventControlKey::Stop" },
		{ "ToolTip", "Defines the types of FMOD event control keys." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFMODEventControlKey::Stop", (int64)EFMODEventControlKey::Stop },
		{ "EFMODEventControlKey::Play", (int64)EFMODEventControlKey::Play },
		{ "EFMODEventControlKey::Pause", (int64)EFMODEventControlKey::Pause },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMODEventControlKey",
	"EFMODEventControlKey",
	Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey()
{
	if (!Z_Registration_Info_UEnum_EFMODEventControlKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFMODEventControlKey.InnerSingleton, Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFMODEventControlKey.InnerSingleton;
}
// ********** End Enum EFMODEventControlKey ********************************************************

// ********** Begin ScriptStruct FFMODEventControlChannel ******************************************
static_assert(std::is_polymorphic<FFMODEventControlChannel>() == std::is_polymorphic<FMovieSceneByteChannel>(), "USTRUCT FFMODEventControlChannel cannot be polymorphic unless super FMovieSceneByteChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODEventControlChannel;
class UScriptStruct* FFMODEventControlChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventControlChannel, (UObject*)Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventControlChannel"));
	}
	return Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventControlChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FMovieSceneByteChannel,
	&NewStructOps,
	"FMODEventControlChannel",
	nullptr,
	0,
	sizeof(FFMODEventControlChannel),
	alignof(FFMODEventControlChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel()
{
	if (!Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.InnerSingleton, Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.InnerSingleton;
}
// ********** End ScriptStruct FFMODEventControlChannel ********************************************

// ********** Begin Class UFMODEventControlSection *************************************************
void UFMODEventControlSection::StaticRegisterNativesUFMODEventControlSection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODEventControlSection;
UClass* UFMODEventControlSection::GetPrivateStaticClass()
{
	using TClass = UFMODEventControlSection;
	if (!Z_Registration_Info_UClass_UFMODEventControlSection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FMODEventControlSection"),
			Z_Registration_Info_UClass_UFMODEventControlSection.InnerSingleton,
			StaticRegisterNativesUFMODEventControlSection,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFMODEventControlSection.InnerSingleton;
}
UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister()
{
	return UFMODEventControlSection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFMODEventControlSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** FMOD Event control section */" },
		{ "IncludePath", "Sequencer/FMODEventControlSection.h" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "ToolTip", "FMOD Event control section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlKeys_MetaData[] = {
		{ "Comment", "/** Channel containing the event control keys */" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "ToolTip", "Channel containing the event control keys" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEventControlSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys = { "ControlKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODEventControlSection, ControlKeys), Z_Construct_UScriptStruct_FFMODEventControlChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlKeys_MetaData), NewProp_ControlKeys_MetaData) }; // 801298777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFMODEventControlSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODEventControlSection_Statics::ClassParams = {
	&UFMODEventControlSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODEventControlSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODEventControlSection()
{
	if (!Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton, Z_Construct_UClass_UFMODEventControlSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventControlSection);
UFMODEventControlSection::~UFMODEventControlSection() {}
// ********** End Class UFMODEventControlSection ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFMODEventControlKey_StaticEnum, TEXT("EFMODEventControlKey"), &Z_Registration_Info_UEnum_EFMODEventControlKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 231776555U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFMODEventControlChannel::StaticStruct, Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::NewStructOps, TEXT("FMODEventControlChannel"), &Z_Registration_Info_UScriptStruct_FFMODEventControlChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventControlChannel), 801298777U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODEventControlSection, UFMODEventControlSection::StaticClass, TEXT("UFMODEventControlSection"), &Z_Registration_Info_UClass_UFMODEventControlSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODEventControlSection), 1373134503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_3382263181(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
