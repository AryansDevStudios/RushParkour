// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Activates dynamic physics on dormant components

#pragma once

#include "CoreMinimal.h"

/**
 * ChaosPhysicsTrigger
 * Activates dynamic physics on dormant components
 */
class RUSHPARKOUR_API FChaosPhysicsTrigger
{
public:
    FChaosPhysicsTrigger();
    virtual ~FChaosPhysicsTrigger();

    /** Core execution logic for activates dynamic physics on dormant components */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
