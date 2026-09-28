// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/HUD - On-screen reminder of A, D, Space, P controls

#pragma once

#include "CoreMinimal.h"

/**
 * ControlsOverlayWidget
 * On-screen reminder of A, D, Space, P controls
 */
class RUSHPARKOUR_API FControlsOverlayWidget
{
public:
    FControlsOverlayWidget();
    virtual ~FControlsOverlayWidget();

    /** Core execution logic for on-screen reminder of a, d, space, p controls */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
