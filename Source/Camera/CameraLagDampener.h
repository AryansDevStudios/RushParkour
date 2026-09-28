// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Camera - Smooth spring interpolation for viewport

#pragma once

#include "CoreMinimal.h"

/**
 * CameraLagDampener
 * Smooth spring interpolation for viewport
 */
class RUSHPARKOUR_API FCameraLagDampener
{
public:
    FCameraLagDampener();
    virtual ~FCameraLagDampener();

    /** Core execution logic for smooth spring interpolation for viewport */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
