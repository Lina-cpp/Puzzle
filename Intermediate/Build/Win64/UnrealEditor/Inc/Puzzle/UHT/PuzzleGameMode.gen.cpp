// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puzzle/PuzzleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PUZZLE_API UClass* Z_Construct_UClass_APuzzleGameMode();
PUZZLE_API UClass* Z_Construct_UClass_APuzzleGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Puzzle();
// End Cross Module References

// Begin Class APuzzleGameMode
void APuzzleGameMode::StaticRegisterNativesAPuzzleGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuzzleGameMode);
UClass* Z_Construct_UClass_APuzzleGameMode_NoRegister()
{
	return APuzzleGameMode::StaticClass();
}
struct Z_Construct_UClass_APuzzleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PuzzleGameMode.h" },
		{ "ModuleRelativePath", "PuzzleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APuzzleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Puzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuzzleGameMode_Statics::ClassParams = {
	&APuzzleGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APuzzleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuzzleGameMode()
{
	if (!Z_Registration_Info_UClass_APuzzleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuzzleGameMode.OuterSingleton, Z_Construct_UClass_APuzzleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuzzleGameMode.OuterSingleton;
}
template<> PUZZLE_API UClass* StaticClass<APuzzleGameMode>()
{
	return APuzzleGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleGameMode);
APuzzleGameMode::~APuzzleGameMode() {}
// End Class APuzzleGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projekty_UnrealProjects_Coop_Puzzle_Source_Puzzle_PuzzleGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuzzleGameMode, APuzzleGameMode::StaticClass, TEXT("APuzzleGameMode"), &Z_Registration_Info_UClass_APuzzleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuzzleGameMode), 3600375275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UnrealProjects_Coop_Puzzle_Source_Puzzle_PuzzleGameMode_h_2215118816(TEXT("/Script/Puzzle"),
	Z_CompiledInDeferFile_FID_Projekty_UnrealProjects_Coop_Puzzle_Source_Puzzle_PuzzleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UnrealProjects_Coop_Puzzle_Source_Puzzle_PuzzleGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
