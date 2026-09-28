// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Patrol - Maintains readable enemy patrol speed

#pragma once

#include "CoreMinimal.h"

/**
 * PatrolSpeedGovernor
 * Maintains readable enemy patrol speed
 */
class RUSHPARKOUR_API FPatrolSpeedGovernor
{
public:
    FPatrolSpeedGovernor();
    virtual ~FPatrolSpeedGovernor();

    /** Core execution logic for maintains readable enemy patrol speed */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
