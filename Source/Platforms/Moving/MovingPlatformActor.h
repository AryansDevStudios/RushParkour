// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Moving - Kinematic translation platform actor

#pragma once

#include "CoreMinimal.h"

/**
 * MovingPlatformActor
 * Kinematic translation platform actor
 */
class RUSHPARKOUR_API FMovingPlatformActor
{
public:
    FMovingPlatformActor();
    virtual ~FMovingPlatformActor();

    /** Core execution logic for kinematic translation platform actor */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
