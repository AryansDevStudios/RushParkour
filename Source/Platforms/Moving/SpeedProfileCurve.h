// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Moving - Ease-in ease-out curves for platform stops

#pragma once

#include "CoreMinimal.h"

/**
 * SpeedProfileCurve
 * Ease-in ease-out curves for platform stops
 */
class RUSHPARKOUR_API FSpeedProfileCurve
{
public:
    FSpeedProfileCurve();
    virtual ~FSpeedProfileCurve();

    /** Core execution logic for ease-in ease-out curves for platform stops */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
