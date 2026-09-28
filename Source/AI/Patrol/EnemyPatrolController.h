// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Patrol - AI controller driving enemy movement

#pragma once

#include "CoreMinimal.h"

/**
 * EnemyPatrolController
 * AI controller driving enemy movement
 */
class RUSHPARKOUR_API FEnemyPatrolController
{
public:
    FEnemyPatrolController();
    virtual ~FEnemyPatrolController();

    /** Core execution logic for ai controller driving enemy movement */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
