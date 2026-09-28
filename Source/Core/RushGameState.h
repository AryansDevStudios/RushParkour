// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Run timer and completion state

#pragma once

#include "CoreMinimal.h"

/**
 * RushGameState
 * Run timer and completion state
 */
class RUSHPARKOUR_API FRushGameState
{
public:
    FRushGameState();
    virtual ~FRushGameState();

    /** Core execution logic for run timer and completion state */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
