#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveStructs.h"
#include "SaveFunctionLibrary.generated.h"

class ACharacterBase;
class UCharacterAttributeSet;

UCLASS()
class UNREALACTIONRPG_API USaveFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Save|Info")
	static FActorLocationInfo CreateActorLocationInfo(const AActor* Actor);
	
	UFUNCTION(BlueprintCallable, Category = "Save|Info")
	static FCharacterAttributeInfo CreateCharacterAttributeInfo(const UCharacterAttributeSet* CharacterAttributeSet);

	UFUNCTION(BlueprintCallable, Category = "Save|Info")
	static FCharacterMasterInfo CreateCharacterMasterInfo(const ACharacterBase* Character);
};
