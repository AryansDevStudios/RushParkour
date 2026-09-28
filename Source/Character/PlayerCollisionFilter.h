// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Filters contacts between platforms, hazards, and enemies

#pragma once

#include "CoreMinimal.h"

/**
 * PlayerCollisionFilter
 * Filters contacts between platforms, hazards, and enemies
 */
class RUSHPARKOUR_API FPlayerCollisionFilter
{
public:
    FPlayerCollisionFilter();
    virtual ~FPlayerCollisionFilter();

    /** Core execution logic for filters contacts between platforms, hazards, and enemies */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
