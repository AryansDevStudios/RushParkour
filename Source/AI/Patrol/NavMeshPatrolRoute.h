// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Patrol - Generates safe patrol waypoints on platform

#pragma once

#include "CoreMinimal.h"

/**
 * NavMeshPatrolRoute
 * Generates safe patrol waypoints on platform
 */
class RUSHPARKOUR_API FNavMeshPatrolRoute
{
public:
    FNavMeshPatrolRoute();
    virtual ~FNavMeshPatrolRoute();

    /** Core execution logic for generates safe patrol waypoints on platform */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
