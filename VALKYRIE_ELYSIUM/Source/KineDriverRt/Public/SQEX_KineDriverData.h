#pragma once
#include "CoreMinimal.h"
#include "SQEX_KineDriverSourceOther.h"
#include "Engine/DataAsset.h"
#include "SQEX_KineDriverConnectEZParamLinkLinear.h"
#include "SQEX_KineDriverComputeSpaceBases.h"
#include "SQEX_KineDriverOperatorHead.h"
#include "SQEX_KineDriverSourceRotate.h"
#include "SQEX_KineDriverTargetScale.h"
#include "SQEX_KineDriverSource.h"
#include "SQEX_KineDriverSourceTranslate.h"
#include "SQEX_KineDriverTargetTranslate.h"
#include "SQEX_KineDriverTargetRotate.h"
#include "SQEX_KineDriverTargetBendRoll.h"
#include "SQEX_KineDriverTargetDircns.h"
#include "SQEX_KineDriverTargetBendSTRoll.h"
#include "SQEX_KineDriverTargetPoscns.h"
#include "SQEX_KineDriverTargetOricns.h"
#include "SQEX_KineDriverTargetOther.h"
#include "SQEX_KineDriverConnectEquals.h"
#include "SQEX_KineDriverConnectLinkWith.h"
#include "SQEX_KineDriverConnectEZParamLink.h"
#include "SQEX_KineDriverData.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class KINEDRIVERRT_API USQEX_KineDriverData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    bool bPostKineDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    int32 WorkNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FName> PreComputeObjectBoneNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FName> ComputedObjectBoneNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverOperatorHead> Operators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverComputeSpaceBases> ComputeSpaceBasesBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverSource> SourceBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverSourceTranslate> SourceTranslateBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverSourceRotate> SourceRotateBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverSourceOther> SourceOtherBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetTranslate> TargetTranslateBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetScale> TargetScaleBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetRotate> TargetRotateBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetBendRoll> TargetBendRollBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetBendSTRoll> TargetBendSTRollBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetPoscns> TargetPoscnsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetOricns> TargetOricnsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetDircns> TargetDircnsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverTargetOther> TargetOtherBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverConnectEquals> ConnectEqualsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverConnectLinkWith> ConnectLinkWithBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverConnectEZParamLink> ConnectEZParamLinkBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "SQEX")
    TArray<FSQEX_KineDriverConnectEZParamLinkLinear> ConnectEZParamLinkLinearBody;
    
    USQEX_KineDriverData();
};

