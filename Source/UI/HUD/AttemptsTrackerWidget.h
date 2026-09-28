// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/HUD - Displays total runs and elapsed time

#pragma once

#include "CoreMinimal.h"

/**
 * AttemptsTrackerWidget
 * Displays total runs and elapsed time
 */
class RUSHPARKOUR_API FAttemptsTrackerWidget
{
public:
    FAttemptsTrackerWidget();
    virtual ~FAttemptsTrackerWidget();

    /** Core execution logic for displays total runs and elapsed time */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
