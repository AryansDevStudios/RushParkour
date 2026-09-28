// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Grants brief jump grace period after walking off ledges

#pragma once

#include "CoreMinimal.h"

/**
 * CoyoteTimeManager
 * Grants brief jump grace period after walking off ledges
 */
class RUSHPARKOUR_API FCoyoteTimeManager
{
public:
    FCoyoteTimeManager();
    virtual ~FCoyoteTimeManager();

    /** Core execution logic for grants brief jump grace period after walking off ledges */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
