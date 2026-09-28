// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Monitors vertical descent speed

#pragma once

#include "CoreMinimal.h"

/**
 * FallVelocityTracker
 * Monitors vertical descent speed
 */
class RUSHPARKOUR_API FFallVelocityTracker
{
public:
    FFallVelocityTracker();
    virtual ~FFallVelocityTracker();

    /** Core execution logic for monitors vertical descent speed */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
