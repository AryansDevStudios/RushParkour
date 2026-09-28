// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Dust and pebble particles on collapse

#pragma once

#include "CoreMinimal.h"

/**
 * CrumbleDebrisEmitter
 * Dust and pebble particles on collapse
 */
class RUSHPARKOUR_API FCrumbleDebrisEmitter
{
public:
    FCrumbleDebrisEmitter();
    virtual ~FCrumbleDebrisEmitter();

    /** Core execution logic for dust and pebble particles on collapse */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
