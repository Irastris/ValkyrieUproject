#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "SQEX_KineDriver_AssetUserDataElement.h"
#include "SQEX_KineDriver_AssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KINEDRIVERRT_API USQEX_KineDriver_AssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriver_AssetUserDataElement> KineDriver_AssetUserDataElement;
    
    USQEX_KineDriver_AssetUserData();
};

