// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Slight gravity reduction at peak of jump arc

#pragma once

#include "CoreMinimal.h"

/**
 * ApexHangTime
 * Slight gravity reduction at peak of jump arc
 */
class RUSHPARKOUR_API FApexHangTime
{
public:
    FApexHangTime();
    virtual ~FApexHangTime();

    /** Core execution logic for slight gravity reduction at peak of jump arc */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
