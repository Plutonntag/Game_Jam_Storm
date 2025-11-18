// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODCallbackHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFMODCallbackHandler() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODCallbackHandler();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODCallbackHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UFMODCallbackHandler *************************************************
void UFMODCallbackHandler::StaticRegisterNativesUFMODCallbackHandler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODCallbackHandler;
UClass* UFMODCallbackHandler::GetPrivateStaticClass()
{
	using TClass = UFMODCallbackHandler;
	if (!Z_Registration_Info_UClass_UFMODCallbackHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FMODCallbackHandler"),
			Z_Registration_Info_UClass_UFMODCallbackHandler.InnerSingleton,
			StaticRegisterNativesUFMODCallbackHandler,
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
	return Z_Registration_Info_UClass_UFMODCallbackHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UFMODCallbackHandler_NoRegister()
{
	return UFMODCallbackHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFMODCallbackHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMOD/FMODCallbackHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFMODCallbackHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODCallbackHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODCallbackHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODCallbackHandler_Statics::ClassParams = {
	&UFMODCallbackHandler::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODCallbackHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODCallbackHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODCallbackHandler()
{
	if (!Z_Registration_Info_UClass_UFMODCallbackHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODCallbackHandler.OuterSingleton, Z_Construct_UClass_UFMODCallbackHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODCallbackHandler.OuterSingleton;
}
UFMODCallbackHandler::UFMODCallbackHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODCallbackHandler);
// ********** End Interface UFMODCallbackHandler ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Public_FMOD_FMODCallbackHandler_h__Script_FMODStudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODCallbackHandler, UFMODCallbackHandler::StaticClass, TEXT("UFMODCallbackHandler"), &Z_Registration_Info_UClass_UFMODCallbackHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODCallbackHandler), 3913043493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Public_FMOD_FMODCallbackHandler_h__Script_FMODStudio_2468998108(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Public_FMOD_FMODCallbackHandler_h__Script_FMODStudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Public_FMOD_FMODCallbackHandler_h__Script_FMODStudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
