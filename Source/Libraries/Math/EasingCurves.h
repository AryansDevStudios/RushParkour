// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Math - Quad, Cubic, and Exponential easing algorithms

#pragma once

#include "CoreMinimal.h"

/**
 * EasingCurves
 * Quad, Cubic, and Exponential easing algorithms
 */
class RUSHPARKOUR_API FEasingCurves
{
public:
    FEasingCurves();
    virtual ~FEasingCurves();

    /** Core execution logic for quad, cubic, and exponential easing algorithms */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
