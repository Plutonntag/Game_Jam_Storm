// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODSnapshot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFMODSnapshot() {}

// ********** Begin Cross Module References ********************************************************
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshot();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshot_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFMODSnapshot ************************************************************
void UFMODSnapshot::StaticRegisterNativesUFMODSnapshot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODSnapshot;
UClass* UFMODSnapshot::GetPrivateStaticClass()
{
	using TClass = UFMODSnapshot;
	if (!Z_Registration_Info_UClass_UFMODSnapshot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FMODSnapshot"),
			Z_Registration_Info_UClass_UFMODSnapshot.InnerSingleton,
			StaticRegisterNativesUFMODSnapshot,
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
	return Z_Registration_Info_UClass_UFMODSnapshot.InnerSingleton;
}
UClass* Z_Construct_UClass_UFMODSnapshot_NoRegister()
{
	return UFMODSnapshot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFMODSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FMOD Snapshot Asset.\n */" },
		{ "IncludePath", "FMODSnapshot.h" },
		{ "ModuleRelativePath", "Classes/FMODSnapshot.h" },
		{ "ToolTip", "FMOD Snapshot Asset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODSnapshot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODSnapshot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFMODEvent,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODSnapshot_Statics::ClassParams = {
	&UFMODSnapshot::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshot_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODSnapshot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODSnapshot()
{
	if (!Z_Registration_Info_UClass_UFMODSnapshot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODSnapshot.OuterSingleton, Z_Construct_UClass_UFMODSnapshot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODSnapshot.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSnapshot);
UFMODSnapshot::~UFMODSnapshot() {}
// ********** End Class UFMODSnapshot **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h__Script_FMODStudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODSnapshot, UFMODSnapshot::StaticClass, TEXT("UFMODSnapshot"), &Z_Registration_Info_UClass_UFMODSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODSnapshot), 4158701076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h__Script_FMODStudio_1486623209(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h__Script_FMODStudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h__Script_FMODStudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
