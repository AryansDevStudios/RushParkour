// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Input - P key event handler for camera toggle

#pragma once

#include "CoreMinimal.h"

/**
 * PerspectiveToggleAction
 * P key event handler for camera toggle
 */
class RUSHPARKOUR_API FPerspectiveToggleAction
{
public:
    FPerspectiveToggleAction();
    virtual ~FPerspectiveToggleAction();

    /** Core execution logic for p key event handler for camera toggle */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
