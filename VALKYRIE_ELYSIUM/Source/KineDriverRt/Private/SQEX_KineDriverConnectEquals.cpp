#include "SQEX_KineDriverConnectEquals.h"

FSQEX_KineDriverConnectEquals::FSQEX_KineDriverConnectEquals() {
    this->InOperator = 0;
    this->InParameterType = ESQEX_KD_ParameterType_Other;
    this->OutOperator = 0;
    this->OutParameterType = ESQEX_KD_ParameterType_Other;
    this->OtherTargetParamIndex = 0;
    this->Coef = 0.00f;
}

