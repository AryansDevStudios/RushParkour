// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Enums for camera perspectives and platform behaviors

#pragma once

#include "CoreMinimal.h"

/**
 * RushTypes
 * Enums for camera perspectives and platform behaviors
 */
class RUSHPARKOUR_API FRushTypes
{
public:
    FRushTypes();
    virtual ~FRushTypes();

    /** Core execution logic for enums for camera perspectives and platform behaviors */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
