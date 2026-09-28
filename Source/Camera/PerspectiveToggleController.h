// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Camera - Handles P key toggle between presets

#pragma once

#include "CoreMinimal.h"

/**
 * PerspectiveToggleController
 * Handles P key toggle between presets
 */
class RUSHPARKOUR_API FPerspectiveToggleController
{
public:
    FPerspectiveToggleController();
    virtual ~FPerspectiveToggleController();

    /** Core execution logic for handles p key toggle between presets */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
