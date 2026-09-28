// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Shakes platform slightly before dropping

#pragma once

#include "CoreMinimal.h"

/**
 * DelayBeforeFallTimer
 * Shakes platform slightly before dropping
 */
class RUSHPARKOUR_API FDelayBeforeFallTimer
{
public:
    FDelayBeforeFallTimer();
    virtual ~FDelayBeforeFallTimer();

    /** Core execution logic for shakes platform slightly before dropping */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
