// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODSnapshotReverb.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFMODSnapshotReverb() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UReverbEffect();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshotReverb();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshotReverb_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFMODSnapshotReverb ******************************************************
void UFMODSnapshotReverb::StaticRegisterNativesUFMODSnapshotReverb()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODSnapshotReverb;
UClass* UFMODSnapshotReverb::GetPrivateStaticClass()
{
	using TClass = UFMODSnapshotReverb;
	if (!Z_Registration_Info_UClass_UFMODSnapshotReverb.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FMODSnapshotReverb"),
			Z_Registration_Info_UClass_UFMODSnapshotReverb.InnerSingleton,
			StaticRegisterNativesUFMODSnapshotReverb,
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
	return Z_Registration_Info_UClass_UFMODSnapshotReverb.InnerSingleton;
}
UClass* Z_Construct_UClass_UFMODSnapshotReverb_NoRegister()
{
	return UFMODSnapshotReverb::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFMODSnapshotReverb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FMOD Event Asset.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "FMODSnapshotReverb.h" },
		{ "ModuleRelativePath", "Classes/FMODSnapshotReverb.h" },
		{ "ToolTip", "FMOD Event Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
		{ "Comment", "/** The unique Guid, which matches the one exported from FMOD Studio */" },
		{ "ModuleRelativePath", "Classes/FMODSnapshotReverb.h" },
		{ "ToolTip", "The unique Guid, which matches the one exported from FMOD Studio" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODSnapshotReverb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSnapshotReverb_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSnapshotReverb, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGuid_MetaData), NewProp_AssetGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODSnapshotReverb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSnapshotReverb_Statics::NewProp_AssetGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFMODSnapshotReverb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReverbEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODSnapshotReverb_Statics::ClassParams = {
	&UFMODSnapshotReverb::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFMODSnapshotReverb_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODSnapshotReverb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODSnapshotReverb()
{
	if (!Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton, Z_Construct_UClass_UFMODSnapshotReverb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSnapshotReverb);
UFMODSnapshotReverb::~UFMODSnapshotReverb() {}
// ********** End Class UFMODSnapshotReverb ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h__Script_FMODStudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODSnapshotReverb, UFMODSnapshotReverb::StaticClass, TEXT("UFMODSnapshotReverb"), &Z_Registration_Info_UClass_UFMODSnapshotReverb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODSnapshotReverb), 924645032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h__Script_FMODStudio_2726555632(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h__Script_FMODStudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h__Script_FMODStudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
