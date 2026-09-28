// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Moving - Interpolates position along linear waypoints

#pragma once

#include "CoreMinimal.h"

/**
 * WaypointPathFollower
 * Interpolates position along linear waypoints
 */
class RUSHPARKOUR_API FWaypointPathFollower
{
public:
    FWaypointPathFollower();
    virtual ~FWaypointPathFollower();

    /** Core execution logic for interpolates position along linear waypoints */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
