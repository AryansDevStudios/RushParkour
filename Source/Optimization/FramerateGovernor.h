// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Optimization - Enforces 70 FPS cap to avoid thermal throttling

#pragma once

#include "CoreMinimal.h"

/**
 * FramerateGovernor
 * Enforces 70 FPS cap to avoid thermal throttling
 */
class RUSHPARKOUR_API FFramerateGovernor
{
public:
    FFramerateGovernor();
    virtual ~FFramerateGovernor();

    /** Core execution logic for enforces 70 fps cap to avoid thermal throttling */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
