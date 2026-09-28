// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Handles regeneration of dropped platforms

#pragma once

#include "CoreMinimal.h"

/**
 * PlatformResetTimer
 * Handles regeneration of dropped platforms
 */
class RUSHPARKOUR_API FPlatformResetTimer
{
public:
    FPlatformResetTimer();
    virtual ~FPlatformResetTimer();

    /** Core execution logic for handles regeneration of dropped platforms */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
