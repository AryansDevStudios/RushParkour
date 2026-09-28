// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Mid-air drift and momentum conservation

#pragma once

#include "CoreMinimal.h"

/**
 * AirControlPhysics
 * Mid-air drift and momentum conservation
 */
class RUSHPARKOUR_API FAirControlPhysics
{
public:
    FAirControlPhysics();
    virtual ~FAirControlPhysics();

    /** Core execution logic for mid-air drift and momentum conservation */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
