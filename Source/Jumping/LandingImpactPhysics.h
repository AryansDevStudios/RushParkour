// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Compression and recovery on ground touch

#pragma once

#include "CoreMinimal.h"

/**
 * LandingImpactPhysics
 * Compression and recovery on ground touch
 */
class RUSHPARKOUR_API FLandingImpactPhysics
{
public:
    FLandingImpactPhysics();
    virtual ~FLandingImpactPhysics();

    /** Core execution logic for compression and recovery on ground touch */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
