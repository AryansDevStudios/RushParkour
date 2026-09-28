// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Patrol - Prevents enemy AI from walking off platform edges

#pragma once

#include "CoreMinimal.h"

/**
 * PlatformEdgeDetector
 * Prevents enemy AI from walking off platform edges
 */
class RUSHPARKOUR_API FPlatformEdgeDetector
{
public:
    FPlatformEdgeDetector();
    virtual ~FPlatformEdgeDetector();

    /** Core execution logic for prevents enemy ai from walking off platform edges */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
