// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODGenerateAssetsCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFMODGenerateAssetsCommandlet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet();
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudioEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFMODGenerateAssetsCommandlet ********************************************
void UFMODGenerateAssetsCommandlet::StaticRegisterNativesUFMODGenerateAssetsCommandlet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet;
UClass* UFMODGenerateAssetsCommandlet::GetPrivateStaticClass()
{
	using TClass = UFMODGenerateAssetsCommandlet;
	if (!Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FMODGenerateAssetsCommandlet"),
			Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.InnerSingleton,
			StaticRegisterNativesUFMODGenerateAssetsCommandlet,
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
	return Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet_NoRegister()
{
	return UFMODGenerateAssetsCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FMODGenerateAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/FMODGenerateAssetsCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODGenerateAssetsCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudioEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::ClassParams = {
	&UFMODGenerateAssetsCommandlet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet()
{
	if (!Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton, Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODGenerateAssetsCommandlet);
UFMODGenerateAssetsCommandlet::~UFMODGenerateAssetsCommandlet() {}
// ********** End Class UFMODGenerateAssetsCommandlet **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h__Script_FMODStudioEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODGenerateAssetsCommandlet, UFMODGenerateAssetsCommandlet::StaticClass, TEXT("UFMODGenerateAssetsCommandlet"), &Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODGenerateAssetsCommandlet), 3965632057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h__Script_FMODStudioEditor_4272568759(TEXT("/Script/FMODStudioEditor"),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h__Script_FMODStudioEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h__Script_FMODStudioEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
