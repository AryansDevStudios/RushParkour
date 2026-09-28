// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/HUD - HUD canvas for drawing crosshairs or timer

#pragma once

#include "CoreMinimal.h"

/**
 * RushHUD
 * HUD canvas for drawing crosshairs or timer
 */
class RUSHPARKOUR_API FRushHUD
{
public:
    FRushHUD();
    virtual ~FRushHUD();

    /** Core execution logic for hud canvas for drawing crosshairs or timer */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
