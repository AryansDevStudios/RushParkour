// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Smooth acceleration and braking calculations

#pragma once

#include "CoreMinimal.h"

/**
 * SpeedInterpolator
 * Smooth acceleration and braking calculations
 */
class RUSHPARKOUR_API FSpeedInterpolator
{
public:
    FSpeedInterpolator();
    virtual ~FSpeedInterpolator();

    /** Core execution logic for smooth acceleration and braking calculations */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
