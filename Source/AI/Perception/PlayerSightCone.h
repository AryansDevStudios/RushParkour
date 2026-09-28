// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Perception - Checks if player is within enemy line of sight

#pragma once

#include "CoreMinimal.h"

/**
 * PlayerSightCone
 * Checks if player is within enemy line of sight
 */
class RUSHPARKOUR_API FPlayerSightCone
{
public:
    FPlayerSightCone();
    virtual ~FPlayerSightCone();

    /** Core execution logic for checks if player is within enemy line of sight */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
