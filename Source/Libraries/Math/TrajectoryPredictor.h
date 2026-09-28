// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Math - Calculates jump parabola endpoints

#pragma once

#include "CoreMinimal.h"

/**
 * TrajectoryPredictor
 * Calculates jump parabola endpoints
 */
class RUSHPARKOUR_API FTrajectoryPredictor
{
public:
    FTrajectoryPredictor();
    virtual ~FTrajectoryPredictor();

    /** Core execution logic for calculates jump parabola endpoints */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
