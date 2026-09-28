// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/Menus - Handles Esc key pause state and buttons

#pragma once

#include "CoreMinimal.h"

/**
 * PauseMenuController
 * Handles Esc key pause state and buttons
 */
class RUSHPARKOUR_API FPauseMenuController
{
public:
    FPauseMenuController();
    virtual ~FPauseMenuController();

    /** Core execution logic for handles esc key pause state and buttons */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
