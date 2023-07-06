#pragma once
#include "CoreMinimal.h"
#include "ESQEX_BonamikTempCollisionConstant.generated.h"

UENUM(BlueprintType)
enum class ESQEX_BonamikTempCollisionConstant : uint8 {
    None = 0,
    BodyMaximumNum = 0xA,
    ESQEX_MAX UMETA(Hidden),
};

